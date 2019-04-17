#include <gtest/gtest.h>
#include "Snake.hpp"
#include "Board.hpp"

class BoardTest : public ::testing::Test
{
protected:
    Board board{200,200};
};

TEST_F ( BoardTest, chekingHeadPosition )
{
    EXPECT_EQ( true, true );
}