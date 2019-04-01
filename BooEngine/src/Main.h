#pragma once

#include "Engine\Engine.h"

extern boo::Engine* boo::Generate();

#ifdef BOO_WINDOW

int main(int argc, char** argv)
{
    auto game = boo::Generate();
    game->Begin();
    delete game;
}

#endif // BOO_WINDOW
