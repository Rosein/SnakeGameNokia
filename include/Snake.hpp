#pragma once
#include <deque>
#include <utility>

using coord = std::pair<int, int>;

enum class Direction : int
{
    Up,
    Left,
    Down,
    Right
};

class Snake
{
public:
    Snake(int,int);
    const coord & getHead() const;
    std::deque<coord> getBody() const;
    void move();
    void changeDirection(Direction);
    void grow();
private:
    Direction direction;
    coord head;
    std::deque<coord> body;
    const int stepSize = 10;
};