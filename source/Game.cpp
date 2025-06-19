#include "Game.h"

Obsn::Game::Game()
  : m_window(640, 480, "Obselon Engine!")
{}

Obsn::Game::~Game()
{}

void Obsn::Game::init()
{
  m_window.create();
}

void Obsn::Game::update()
{
  while (!m_window.closed())
  {
    m_window.update();
  }
}

void Obsn::Game::run()
{
  init();
  update();
}
