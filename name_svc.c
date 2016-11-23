/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "name.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
dnsprog_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
dnsprog_2(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_2_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_domain;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_2_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
dnsprog_3(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_3_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_3_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
dnsprog_4(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_4_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_domain;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_4_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
dnsprog_5(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_5_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_domain;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_5_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
dnsprog_6(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_6_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_domain;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_6_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
dnsprog_7(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_7_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_domain;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_7_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
dnsprog_8(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		domain nodeproc_8_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case NODEPROC:
		_xdr_argument = (xdrproc_t) xdr_domain;
		_xdr_result = (xdrproc_t) xdr_domain;
		local = (char *(*)(char *, struct svc_req *)) nodeproc_8_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (DNSPROG, ROOT);
	pmap_unset (DNSPROG, NODE2);
	pmap_unset (DNSPROG, NODE3);
	pmap_unset (DNSPROG, NODE4);
	pmap_unset (DNSPROG, NODE5);
	pmap_unset (DNSPROG, NODE6);
	pmap_unset (DNSPROG, NODE7);
	pmap_unset (DNSPROG, NODE8);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, ROOT, dnsprog_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, ROOT, udp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE2, dnsprog_2, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE2, udp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE3, dnsprog_3, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE3, udp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE4, dnsprog_4, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE4, udp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE5, dnsprog_5, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE5, udp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE6, dnsprog_6, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE6, udp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE7, dnsprog_7, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE7, udp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE8, dnsprog_8, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE8, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, ROOT, dnsprog_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, ROOT, tcp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE2, dnsprog_2, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE2, tcp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE3, dnsprog_3, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE3, tcp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE4, dnsprog_4, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE4, tcp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE5, dnsprog_5, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE5, tcp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE6, dnsprog_6, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE6, tcp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE7, dnsprog_7, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE7, tcp).");
		exit(1);
	}
	if (!svc_register(transp, DNSPROG, NODE8, dnsprog_8, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (DNSPROG, NODE8, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}