#include "Grid.hpp"

void Grid::draw(sf::RenderWindow &window) {
  for (int i = 0; i <= GRID_SIZE; ++i) {
    sf::Vertex line[] = {
        sf::Vertex(sf::Vector2f(offsetX + i * CELL_SIZE, offsetY), STEEL_BLUE),
        sf::Vertex(sf::Vector2f(offsetX + i * CELL_SIZE,
                                offsetY + GRID_SIZE * CELL_SIZE),
                   STEEL_BLUE)};
    window.draw(line, 2, sf::Lines);

    line[0].position = sf::Vector2f(offsetX, offsetY + i * CELL_SIZE);
    line[1].position =
        sf::Vector2f(offsetX + GRID_SIZE * CELL_SIZE, offsetY + i * CELL_SIZE);
    window.draw(line, 2, sf::Lines);
  }
}
