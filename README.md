# ComputerNetworksProject

DNS Server implementation using RPC (Remote Procedure Call)

## Steps to execute the program:
1. Open **Terminal** or any terminal emulator
2. *Change* the directory to location of project files.
3. Delete *server* and *client* files.
4. 	Run: <code> make </code>
5. Run: <code> sudo rpcbind </code>
6. Run: <code> ./server </code> in one terminal and <code> ./client *insert_domain_name* </code> in another.

### If you want to generate RPC code as well:

1. Open **Terminal** or any terminal emulator
2. *Change* the directory to location of project files.
3. Delete *server, client, name.h, name_clnt.c, name_svc.c, name_xdr.c*
4.  Run: <code> rpcgen name.x </code>
5. 	Run: <code> make </code>
6. Run: <code> sudo rpcbind </code>
7. Run: <code> ./server </code> in one terminal and <code> ./client *insert_domain_name* </code> in another.