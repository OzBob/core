#ifndef __IMAP_PROXY_H
#define __IMAP_PROXY_H

#include "login-proxy.h"

int imap_proxy_new(struct imap_client *client, const char *host,
		   unsigned int port, const char *user, const char *password);

#endif
