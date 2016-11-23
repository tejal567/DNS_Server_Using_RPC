#include <rpc/rpc.h>
#include "name.h"

int main(int argc,char** argv)
{
     CLIENT *cl;
     struct domain temp;
     struct domain *url, *t;
     url = &temp;
     int *result;
     char HOST[9];
     strncpy(HOST, "localhost", 9);
     
     if (argc != 2) {
          fprintf(stderr, "usage: prog domain_name\n");
          exit(1);
     }

     //Extracting domain
     int dot, URL_len = strlen(argv[1]);
     for(dot=0; dot< URL_len; dot++)
          if (argv[1][dot] == '.')
               break;
     
     strcpy(url->content, argv[1]+dot+1);
     printf("Reverse-Querying for %s\n", url->content);

     //Creating connection to DNS root
     cl = clnt_create(HOST, DNSPROG, ROOT, "udp");
     if (cl == NULL) {
          printf("Unable to establish connection with Root DNS server\n");
          clnt_pcreateerror(argv[1]);
          exit(1);
     }
     result = nodeproc_1(url, cl);
     if (result == NULL) {
          clnt_perror(cl, "add");
          exit(1);
     }
     printf("***Root Response***\n");

     //Connecting to nodes
     printf("Root (Node 1) -> Node %d\n", *result);

     if (*result == -1){
          printf("Domain entry not registered with any DNS server.\n");
          exit(1);
     }

     if (*result == 2){            // Checking for ".com"
          cl = clnt_create(HOST, DNSPROG, NODE2, "udp");
          t = nodeproc_2(url, cl);
          printf("***Node 2 Response***\n");
          printf("%s\n", t->content);
          exit(1);
     }
     
     else if (*result == 3){  // Checking for ".in"
          cl = clnt_create(HOST, DNSPROG, NODE3, "udp");
          result = nodeproc_3(url, cl);
          printf("***Node 3 Response***\n");
          printf("Node 3 -> Node %d\n", *result);

          if (*result == 6){  // Checking for ".ac.in"
               cl = clnt_create(HOST, DNSPROG, NODE6, "udp");
               t = nodeproc_6(url, cl);
               printf("***Node 6 Response***\n");
               printf("%s\n", t->content);
               exit(1);         
          }
          else if (*result == 7){  // Checking for ".gov.in"
               cl = clnt_create(HOST, DNSPROG, NODE7, "udp");
               t = nodeproc_7(url, cl);
               printf("***Node 7 Response***\n");
               printf("%s\n", t->content);
               exit(1);         
          }
          else if (*result == 8){  // Checking for regular ".in"
               cl = clnt_create(HOST, DNSPROG, NODE8, "udp");
               t = nodeproc_8(url, cl);
               printf("***Node 8 Response***\n");
               printf("%s\n", t->content);
               exit(1);         
          }
     }

     if (*result == 4){  // Checking for ".org"
          cl = clnt_create(HOST, DNSPROG, NODE4, "udp");
          t = nodeproc_4(url, cl);
          printf("***Node 4 Response***\n");
          printf("%s\n", t->content);
          exit(1);         
     }

     if (*result == 5){  // Checking for ".net"
          cl = clnt_create(HOST, DNSPROG, NODE5, "udp");
          t = nodeproc_5(url, cl);
          printf("***Node 5 Response***\n");
          printf("%s\n", t->content);
          exit(1);         
     }     

     return 0;
}