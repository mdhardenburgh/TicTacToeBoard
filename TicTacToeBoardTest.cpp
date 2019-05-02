/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};


TEST(TicTacToeBoardTest, toggleTurn_test)
{
	TicTacToeBoard myBoard;
	ASSERT_TRUE(myBoard.toggleTurn() == O);
	ASSERT_TRUE(myBoard.toggleTurn() == X);
	ASSERT_TRUE(myBoard.toggleTurn() == O);
	ASSERT_TRUE(myBoard.toggleTurn() == X);
}

////////////////////////////////////////////////////////////////////////////////

/*
 * @purpose check to make sure the function works correctly
 * @expected returns what piece was placed and turn toggled
 */
TEST(TicTacToeBoardTest, placePiece_sanityCheck)
{
	TicTacToeBoard myBoard;
	ASSERT_EQ(myBoard.placePiece(1, 1), X);
	ASSERT_EQ(myBoard.placePiece(2, 1), O);
	ASSERT_TRUE(myBoard.toggleTurn() == O);
}

/*
 * @purpose Test out of bounds condition
 * @expected the function to throw an invalid
 */
TEST(TicTacToeBoardTest, placePiece_outOfBounds)
{
	TicTacToeBoard myBoard;
	ASSERT_TRUE(myBoard.placePiece(4, 1) == Invalid);
}

/*
 * @purpose Test piece placed at same location twice
 * @expected The piece that was placed at the same location
 */
TEST(TicTacToeBoardTest, placePiece_duplicateLocation)
{
	TicTacToeBoard myBoard;
	(void)myBoard.placePiece(2, 1);
	ASSERT_TRUE(myBoard.placePiece(2, 1) == 'X');
}

/*
 * @purpose Test that peice can't be placed after game over
 * @expected board doesn't change
 */
TEST(TicTacToeBoardTest, placePiece_gameOver)
{
	TicTacToeBoard myBoard;
}

////////////////////////////////////////////////////////////////////////////////

/*
 * @purpose make sure the piece that is placed is what is placed
 * @expected place X and expect X to be there
 */
TEST(TicTacToeBoardTest, getPiece_sanityCheck)
{
	
}

/*
 * @purpose Test when a piece is blank condidtion
 * @expected Blank
 */
TEST(TicTacToeBoardTest, getPiece_blank)
{
	
}

/*
 * @purpose Test the out of bounds condition
 * @expected Invalid
 */
TEST(TicTacToeBoardTest, getPiece_outOfBounds)
{
	
}

////////////////////////////////////////////////////////////////////////////////

/*
 * @purpose Test to make sure the win condition works
 * @expected Who won. Should be X
 */
TEST(TicTacToeBoardTest, getWinner_winCondition)
{
	
}

/*
 * @purpose Test what happens if the game is not over
 * @expected Invalid
 */
TEST(TicTacToeBoardTest, getWinner_notOver)
{
	
}

/*
 * @purpose Test what happens if game is a draw
 * @expected Blank
 */
TEST(TicTacToeBoardTest, getWinner_tieCondition)
{
	
}

////////////////////////////////////////////////////////////////////////////////