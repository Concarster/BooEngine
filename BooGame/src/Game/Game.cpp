#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
}

boo::Engine* boo::Generate()
{
    return new Game();
}

