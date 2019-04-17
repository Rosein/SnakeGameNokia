#include "../include/Board.hpp"

Board::Board (int x, int y) : snake(x,y)
{
    // setSnakeOnTable();
    table[{x,y}] = FieldState::SnakeNode;
    auto snakeBody = snake.getBody();
    for( auto & coord_node : snakeBody )
    {
        table [ coord_node ] = FieldState::SnakeNode;
    }
}

const coord & Board::getSnakeHead() const
{
    return snake.getHead();
}

FieldState& Board::at( int x, int y )
{
    return table.at({ x, y });
}