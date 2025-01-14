#include "Board.h"

Board::Board(sf::Vector2f point, sf::Vector2f size)
{

}

void Board::resetBoard() // open new window
{
    m_board.clear();
    m_guards.clear();
    m_bombs.clear();
    m_stones.clear();
    m_player = { 0, 0 };
    m_limit = { 0, 0 };
}

bool Board::createBoard(ifstream& file)
{
    insertIntoBoard(file);

    if (!lookForObjects())
    {
        cout << "Not valid board! Loading the next level..." << endl;
        std::this_thread::sleep_for(200ms);
        return false;
    }
    return true;
}