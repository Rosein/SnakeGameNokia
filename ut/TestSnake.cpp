#include <gtest/gtest.h>
#include "Snake.hpp"

class SnakeTest : public ::testing::Test
{
protected:
    // SnakeTest(){}
    // ~SnakeTest(){}
    // void SetUp(){}

    Snake snake{100,100};
};

TEST_F (SnakeTest, newSnakeStartingPosition)
{
    coord p {100, 100};
    EXPECT_EQ( p , snake.getHead());
}

TEST_F (SnakeTest, check_last_position)
{
    coord p {60, 100};
    EXPECT_EQ(p , snake.getBody().back());
}

TEST_F (SnakeTest, checkingSnakePositionAfterMovingWithDefaultDirection)
{
    snake.move();
    coord headC{ 110, 100};
    coord lastC{ 70, 100 };
    EXPECT_EQ(headC, snake.getHead());
    EXPECT_EQ(lastC, snake.getBody().back());
}


TEST_F (SnakeTest, checkingHeadPositionAfterMovingWithInGivenDirection)
{
    coord p {100, 90};
    snake.changeDirection(Direction::Up);
    snake.move();
    EXPECT_EQ(p, snake.getHead());
}

TEST_F (SnakeTest, checkingHeadPositionAfterMovingBackShouldNoEffect)
{
    coord p {110, 100};
    snake.changeDirection(Direction::Left);
    snake.move();
    EXPECT_EQ(p, snake.getHead());
}



TEST_F (SnakeTest, checkingLastSegmentPositionAfterGrowing)
{
    coord p {60, 100};
    
    snake.grow();
    snake.move();
    EXPECT_EQ(p, snake.getBody().back());
}

TEST_F (SnakeTest, checkingLastSegmentPositionAfterReverse)
{
    coord p {90, 100};
    snake.move(); //110 100

    snake.changeDirection(Direction::Up); 
    snake.move(); //110 90
    snake.move(); //110 80
    snake.grow();
    snake.changeDirection(Direction::Left);
    snake.move(); //100 80

    EXPECT_EQ(p, snake.getBody().back());
}