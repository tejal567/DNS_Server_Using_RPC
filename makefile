program_NAME := dis-dns

program:
	gcc name.c name_clnt.c name_xdr.c -o client
	gcc name_svc.c name_proc.c name_xdr.c -o server
