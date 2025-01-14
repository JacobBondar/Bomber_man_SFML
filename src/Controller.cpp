#include "Controller.h"

Controller::Controller()
{
}

void Controller::run()
{
    ifstream file, fileLevel;
    string nameLevel;
    int numLevel = 0;

    file.open("Playlist.txt");
    if (!file)
    {
        std::cerr << "Can't open the main file\n";
        exit(EXIT_FAILURE);
    }

    while (file >> nameLevel)
    {
        fileLevel.open(nameLevel);
        if (!fileLevel)
        {
            std::cerr << "Can't open the game file, moving to the next one...\n";
            std::this_thread::sleep_for(2000ms);
            continue;
        }

        if (!m_board.createBoard(fileLevel))
        {
            std::cout << "Invalid level, loading the next level...\n";
            std::this_thread::sleep_for(2000ms);
            m_board.resetBoard();
            fileLevel.close();
            continue;
        }
        numLevel++;
    }
}

