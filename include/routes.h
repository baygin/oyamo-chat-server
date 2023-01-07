#ifndef ROUTES_H
#define ROUTES_H

#include <oyamo/server.h>

void chat_routes_on_message(oyamo_server_client_T *client, oyamo_message_T *message);

#endif // !ROUTES_H