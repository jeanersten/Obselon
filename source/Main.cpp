#include "Game.h"
#include "Init.h"

#include <iostream>

int main()
{
  std::cout << "Welcome to Obselon Engine!\n";

  Obsn::setup();

  Obsn::Game game;
  game.run();

  Obsn::cleanup();

  return 0;
}
