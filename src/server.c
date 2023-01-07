#include "../include/server.h"
#include "../include/events.h"
#include "../include/routes.h"

#include <oyamo/server.h>

void chat_init()
{
    oyamo_set_verbose(OYAMO_VERBOSE_ALL);
    oyamo_server_init();
}

void chat_set_config()
{
    oyamo_server_config_T *config = oyamo_server_get_default_config("127.0.0.1", 5323);
    config->connection_limit = 10;
    oyamo_server_set_config(config);
}

void chat_set_router()
{
    oyamo_router_T *router = oyamo_router_create();

    oyamo_router_route_T *routeSendMessage = oyamo_router_create_route("chat", "send-message", chat_routes_on_message);

    oyamo_router_set_route(router, routeSendMessage);

    oyamo_server_set_router(router);
}

void chat_set_events()
{
    oyamo_server_event_set_onconnect(onconnect);
    oyamo_server_event_set_ondisconnect(ondisconnect);
    oyamo_server_event_set_onmessage(onmessage);
}

void chat_start()
{
    oyamo_server_go();
}

void chat_shutdown()
{
    oyamo_server_shutdown();
}
