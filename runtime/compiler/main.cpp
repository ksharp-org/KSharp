// Copyright (c) 2022 Mario Rosell and Contributors | The KSharp Project | GNU GPLv3

#include <iostream>
#include <string>

#include "../../utils/logger.h"
#include "comp.h"

using namespace std;

int main(int argc, char** argv)
{
    ksharp::logger::warning("Running the compiler directly is not recommended.");
    cout << "Reading from stdin, use .comp! to compile and .exit! to exit." << endl;

    string line;
    while (getline(cin, line))
    {
        if (line == ".exit!")
        {
            break;
        }
        else if (line == ".comp!")
        {
            cout << "Compiling..." << endl;
            ksharp::logger::debug("Compiling...");
            ksharp::logger::debug("Compiling...");
        }
        else if (line.empty())
        {
            continue;
        }
    }
}