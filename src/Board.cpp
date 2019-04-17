#include "../include/Board.hpp"

Board::Board (int x, int y) : snake(x,y)
{
    
}

const coord & Board::getSnakeHead() const
{
    return snake.getHead();
}