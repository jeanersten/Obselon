#pragma once

#include "Graphics/Window.h"

namespace Obsn
{
  class Game
  {
  private:
    Graphics::Window m_window;

    void init();
    void update();
  
  public:
    Game();
    ~Game();

    void run();
  };
}
