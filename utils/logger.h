#pragma once

#include <iostream>
#include <string>

const std::string ANSI_RESET = "\033[0m";
const std::string ANSI_BLACK = "\033[30m";
const std::string ANSI_RED = "\033[31m";
const std::string ANSI_GREEN = "\033[32m";
const std::string ANSI_YELLOW = "\033[33m";
const std::string ANSI_BLUE = "\033[34m";
const std::string ANSI_PURPLE = "\033[35m";
const std::string ANSI_CYAN = "\033[36m";
const std::string ANSI_WHITE = "\033[37m";

using namespace std;

namespace ksharp
{
    namespace logger
    {
        void message(std::string message)
        {
            cout << ANSI_CYAN << " - [ MESSAGE ] " << ANSI_RESET << message << endl;
        }

        void error(std::string message)
        {
            cout << ANSI_RED << " - [ ERROR ] " << ANSI_RESET << message << endl;
        }

        void warning(std::string message)
        {
            cerr << ANSI_YELLOW << " - [ WARNING ] " << ANSI_RESET << message << endl;
        }

        void debug(std::string message)
        {
            cout << ANSI_GREEN << " - [ DEBUG ] " << ANSI_RESET << message << endl;
        }
    }
}