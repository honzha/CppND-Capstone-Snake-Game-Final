#ifndef REVCONTROLLER_H
#define REVCONTROLLER_H

#include "snake.h"

class RevController {
 public:
  void RevHandleInput(bool &running, Snake &snake) const;

 private:
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;
};

#endif