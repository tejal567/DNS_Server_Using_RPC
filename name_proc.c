#include <rpc/rpc.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "name.h"

int * nodeproc_1_svc(domain* DOM, struct svc_req *arg2)
{
	char last[4];
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char *ddomain;
	int found = 0;
	static int res;
	
	for(int i = 3; i>0; i--)
		last[3 -i] = DOM->content[strlen(DOM->content) -i];
	last[3] = '\0';
	fp = fopen("files/root.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,last);
		if(ddomain){
			found = 1;
			break;
		}
	}

	printf("ROOT: %s\n", last);
	if(found)
		res = (int)(line[strlen(last)+1] - '0');
	else{
		res = -1;
		printf("Received a query not yet defined.\n");
	}
	fclose(fp);	
	return &res;
}

domain * nodeproc_2_svc(domain* DOM, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char res[15]; 
	char required[50];
	char *ddomain;  
	int found = 0;

	strcpy(required, DOM->content);
	fp = fopen("files/com.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,required);
		if(ddomain){
			found = 1;
			break;
		}
	}

	printf("NODE 2: %s\n", DOM->content);	
	if(found)
		strcpy(res,line+strlen(required)+1);
	else
		strcpy(res, "NOT FOUND");

	fclose(fp);	
	struct domain *response = (struct domain*)malloc(sizeof(struct domain));
	strcpy(response->content, res);
	return response;
}

int * nodeproc_3_svc(domain* DOM, struct svc_req *arg2)
{
	int dot;
	for(dot = 0; dot< strlen(DOM->content); dot++)
		if (DOM->content[dot] == '.')
			break;

	char sub[3];
	strncpy(sub, DOM->content+dot+1, 3);
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char *ddomain;
	int found = 0;
	static int res;
	
	fp = fopen("files/in.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,sub);
		if(ddomain){
			found = 1;
			break;
		}
	}
	printf("NODE 3: %s\n", sub);
	if(found){
		res = (int)(line[4] - '0');
		if (res == 0)
			res =8;
	}
	else{
		res = -1;
		printf("Received a query not yet defined.\n");
	}
	return &res;
	
}

domain * nodeproc_4_svc(domain* DOM, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char res[15]; 
	char required[50];
	char *ddomain;  
	int found = 0;

	strcpy(required, DOM->content);
	fp = fopen("files/org.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,required);
		if(ddomain){
			found = 1;
			break;
		}
	}

	printf("NODE 4: %s\n", DOM->content);	
	if(found)
		strcpy(res,line+strlen(required)+1);
	else
		strcpy(res, "NOT FOUND");

	fclose(fp);	
	struct domain *response = (struct domain*)malloc(sizeof(struct domain));
	strcpy(response->content, res);
	return response;
}
domain * nodeproc_5_svc(domain* DOM, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char res[15]; 
	char required[50];
	char *ddomain;  
	int found = 0;

	strcpy(required, DOM->content);
	fp = fopen("files/net.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,required);
		if(ddomain){
			found = 1;
			break;
		}
	}
	printf("NODE 5: %s\n", DOM->content);

	if(found)
		strcpy(res,line+strlen(required)+1);
	else
		strcpy(res, "NOT FOUND");
	fclose(fp);	
	struct domain *response = (struct domain*)malloc(sizeof(struct domain));
	strcpy(response->content, res);	
	return response;
}
domain * nodeproc_6_svc(domain* DOM, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char res[15]; 
	char required[50];
	char *ddomain;  
	int found = 0;

	strcpy(required, DOM->content);
	fp = fopen("files/ac_in.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,required);
		if(ddomain){
			found = 1;
			break;
		}
	}

	printf("NODE 6: %s\n", DOM->content);
	
	if(found)
		strcpy(res,line+strlen(required)+1);
	else
		strcpy(res, "NOT FOUND");

	fclose(fp);	
	struct domain *response = (struct domain*)malloc(sizeof(struct domain));
	strcpy(response->content, res);	
	return response;
}
domain * nodeproc_7_svc(domain* DOM, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char res[15]; 
	char required[50];
	char *ddomain;  
	int found = 0;

	strcpy(required, DOM->content);
	fp = fopen("files/gov_in.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,required);
		if(ddomain){
			found = 1;
			break;
		}
	}

	printf("NODE 7: %s\n", DOM->content);	
	
	if(found)
		strcpy(res,line+strlen(required)+1);
	else
		strcpy(res, "NOT FOUND");

	fclose(fp);	
	struct domain *response = (struct domain*)malloc(sizeof(struct domain));
	strcpy(response->content, res);
	return response;
}
domain * nodeproc_8_svc(domain* DOM, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL;
	size_t len = 0; 
	ssize_t read; 
	char res[15]; 
	char required[50];
	char *ddomain;  
	int found = 0;

	strcpy(required, DOM->content);
	fp = fopen("files/reg_in.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,required);
		if(ddomain){
			found = 1;
			break;
		}
	}

	printf("NODE 8: %s\n", DOM->content);
	
	if(found)
		strcpy(res,line+strlen(required)+1);
	else
		strcpy(res, "NOT FOUND");
	
	fclose(fp);	
	struct domain *response = (struct domain*)malloc(sizeof(struct domain));
	strcpy(response->content, res);	
	return response;
}
