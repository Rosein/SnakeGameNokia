#include <vector>
#include <map>
#include "Snake.hpp"

enum class FieldState
{
    Free,
    SnakeNode,
    Obstacle,
    Fruit
};

using Table = std::map<coord, FieldState>;

class Board
{
public:
    Board(int x, int y);
    const coord & getSnakeHead() const;
private:
    Table table;
    coord size;
    Snake snake;
};