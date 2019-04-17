#include <gtest/gtest.h>
#include "../include/Snake.hpp"
#include "../include/Board.hpp"

class BoardTest : public ::testing::Test
{
protected:
    Board board{200,200};
};

TEST_F ( BoardTest, checkingStartingSnakeHeadPosition )
{
    EXPECT_EQ( std::make_pair(200,200), board.getSnakeHead() );
}

TEST_F ( BoardTest, checkingStartingSnakePosition )
{
    EXPECT_EQ( std::make_pair(200,200), board.getSnakeHead() );
    EXPECT_EQ( FieldState::SnakeNode, board.at(190,200) );
    EXPECT_EQ( FieldState::SnakeNode, board.at(180,200) );
    EXPECT_EQ( FieldState::SnakeNode, board.at(170,200) );
    EXPECT_EQ( FieldState::SnakeNode, board.at(160,200) );
}