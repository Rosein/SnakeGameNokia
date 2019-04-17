#include "../include/Snake.hpp"
#include <deque>

Snake::Snake(int x, int y): head(std::make_pair(x, y)), direction{Direction::Right}
{
    body.push_back(coord(x-stepSize,y));
    body.push_back(coord(x-2*stepSize,y));
    body.push_back(coord(x-3*stepSize,y));
    body.push_back(coord(x-4*stepSize,y));
}

coord Snake::getHead() const 
{ 
    return head;
}

std::deque<coord> Snake::getBody() const
{
    return body;
}

void Snake::move()
{
    body.pop_back();
    body.push_front(getHead());
    switch(direction)
    {
        case Direction::Up:
        head.second -= stepSize;
        break;
        case Direction::Down:
        head.second += stepSize;
        break;
        case Direction::Left:
        head.first -= stepSize;
        break;
        case Direction::Right:
        head.first += stepSize;
        break;
    }
}

void Snake::changeDirection(Direction dir)
{
    switch(direction)
    {
        case Direction::Right:
        if( dir != Direction::Left)
            direction = dir;
        break;
        case Direction::Left:
        if( dir != Direction::Right)
            direction = dir;
        break;
        case Direction::Up:
        if( dir != Direction::Down)
            direction = dir;
        break;
        case Direction::Down:
        if( dir != Direction::Up)
            direction = dir;
        break;
    }
    return;
}

void Snake::grow() 
{
    
    body.push_back(body.back());
}