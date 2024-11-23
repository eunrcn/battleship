#ifndef GRID_HPP
#define GRID_HPP

#include "Constants.hpp"
#include <SFML/Graphics.hpp>

class Grid {
public:
  Grid(float offsetX, float offsetY) : offsetX(offsetX), offsetY(offsetY) {}

  void draw(sf::RenderWindow &window);

private:
  float offsetX, offsetY;
};

#endif
