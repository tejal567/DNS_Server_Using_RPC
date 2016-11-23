struct domain{
	char content[64];
};

program DNSPROG {
version ROOT {
int NODEPROC (domain ) = 1;
} = 1;	
version NODE2{
	domain NODEPROC(domain) =1;
} = 2;
version NODE3{
	int NODEPROC(domain) = 1;
} = 3;
version NODE4{
	domain NODEPROC(domain) = 1;
} = 4;
version NODE5{
	domain NODEPROC(domain) = 1;
} = 5;
version NODE6{
	domain NODEPROC(domain) = 1;
} = 6;
version NODE7{
	domain NODEPROC(domain) = 1;
} = 7;
version NODE8{
	domain NODEPROC(domain) = 1;
} = 8;
} = 0x3012225;