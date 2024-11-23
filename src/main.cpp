#include "Constants.hpp"
#include "Grid.hpp"
#include "Ship.hpp"
#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "Battleship");

  Grid grid(0.f, 0.f);
  Ship ship(3, 2);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear(LIGHT_BEIGE);

    grid.draw(window);
    ship.draw(window);

    window.display();
  }

  return 0;
}
