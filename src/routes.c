#include "../include/routes.h"
#include "../include/common.h"

void chat_routes_on_message(oyamo_server_client_T *client, oyamo_message_T *message)
{
    struct json_object *message_object;

    json_object_object_get_ex(message->parameters, "message", &message_object);
    const char *message_string = json_object_get_string(message_object);

    if (message_string && message_object)
    {
        oyamo_server_send_message_to_all(message, 0);
    }
}