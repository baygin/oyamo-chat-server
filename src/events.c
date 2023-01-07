#include "../include/server.h"
#include "../include/events.h"
#include "../include/common.h"

void onconnect(oyamo_server_client_T *client)
{
    oyamo_print_success("An user connected...\n");
}

void ondisconnect(oyamo_server_client_T *client)
{
    oyamo_print_error("An user disconnected...\n");
}

void onmessage(oyamo_server_client_T *client, oyamo_message_T *message)
{
    oyamo_print_warning("New message\n");
}