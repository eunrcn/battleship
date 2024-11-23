#ifndef SHIP_HPP
#define SHIP_HPP

#include "Constants.hpp"
#include <SFML/Graphics.hpp>

class Ship {
public:
  Ship(int x, int y);

  void draw(sf::RenderWindow &window);

private:
  sf::RectangleShape shape;
  sf::Vector2i position;
};

#endif
