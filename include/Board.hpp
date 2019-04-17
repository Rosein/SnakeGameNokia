#include<vector>
#include <map>
#include "Snake.hpp"

//using Table = std::vector<std::vector<FieldState>>;

enum class FieldState
{
    Free,
    SnakeNode,
    Obstacle,
    Fruit
};

class Board
{
public:
    Board(int x, int y)
    {

    }
private:
    std::map<coord, FieldState> board;
    coord size;
    Snake snake;
};