#ifndef EVENTS_H
#define EVENTS_H

#include <oyamo/server.h>
#include <oyamo/message.h>

void onconnect(oyamo_server_client_T *client);
void ondisconnect(oyamo_server_client_T *client);
void onmessage(oyamo_server_client_T *client, oyamo_message_T *message);

#endif // !EVENTS_H