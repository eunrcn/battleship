#include "Ship.hpp"

Ship::Ship(int x, int y) : position(x, y) {
  shape.setSize(sf::Vector2f(CELL_SIZE * 2, CELL_SIZE));
  shape.setFillColor(DARK_TEAL);
  shape.setPosition(
      position.x * CELL_SIZE,
      position.y *
          CELL_SIZE);
}

void Ship::draw(sf::RenderWindow &window) {
  window.draw(shape);
}
