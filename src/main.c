#include "../include/server.h"
#include <stdlib.h>
#include <oyamo/server.h>

int main() 
{
    chat_init();
    chat_set_config();
    chat_set_router();
    chat_set_events();
    chat_start();
    chat_shutdown();
    return EXIT_SUCCESS;
}