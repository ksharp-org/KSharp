#include <iostream>
#include "../utils/logger.h"
#include "cmds/help.hpp"
#include <string>

int main(int argc, char** argv)
{
    if (argc <= 1)
    {
        cli::cmds::help();
        return 1;
    }
    else
    {
        std::string arg = argv[1];

        // Check if the argument is at least 2 characters long (e.g., "-x")
        if (arg[0] == '-' && arg[1] != '\0')
        {
            if (arg == "--help")
            {
                cli::cmds::help();
            }
            else if (arg == "-h")
            {
                cli::cmds::help();
            }
            else
            {
                ksharp::logger::error("Unknown command: " + arg);
            }
        }
        else
        {
            ksharp::logger::error("Invalid command format: " + arg);
            return 1;
        }
    }
    return 0;
}
