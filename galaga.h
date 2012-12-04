#ifndef GALAGA_GALAGA
  #define GALAGA_GALAGA

  #include <allegro5/allegro.h>
  #include <iostream>
  #include <vector>

  #include "bullet.h"
  #include "enemy.h"
  #include "gamemodule.h"
  #include "ship.h"
  #include "utilities.h"

  class Galaga : public GameModule {
    Ship _ship;
    std::vector<Bullet> _bullets;
    Enemy _enemy;

    ALLEGRO_EVENT_QUEUE *_eventQueue;
    ALLEGRO_KEYBOARD_STATE _keyState;
    int _screenWidth;
    int _screenHeight;

    bool _needsDraw;

    const int MOVE_SPEED = 5;
    const int MAX_BULLETS = 10;

  public:
    Galaga(int screenWidth, int screenHeight, ALLEGRO_EVENT_QUEUE *eventQueue);
    ~Galaga();

    bool update(unsigned int ticks);
    void render();
  };
#endif
