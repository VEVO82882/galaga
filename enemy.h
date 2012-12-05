#ifndef GALAGA_ENEMY
  #define GALAGA_ENEMY

  #include <allegro5/allegro.h>
  #include <allegro5/allegro_primitives.h>
  #include <allegro5/allegro_image.h>
  #include <iostream>
  #include <list>

  #include "bullet.h"
  #include "utilities.h"

  class Enemy {
    Rectangle _container;
    Rectangle _bounds;

    ALLEGRO_BITMAP *_texture = NULL;

    bool _alive;
    int _frame = 0;

    int _moveSpeed = 2;

  public:
    Enemy();
    Enemy(int x, int y, Rectangle bounds, ALLEGRO_BITMAP *texture);
    ~Enemy();

    bool update(unsigned int ticks);
    void render();

    Rectangle getContainer() { return _container; }

    bool isAlive() { return _alive; }

    void kill() { _alive = false; }
    void vivify() { _alive = false; }

    bool hitTest(std::list<Bullet> *bullets);

    void moveTo(int x, int y);
  };
#endif
