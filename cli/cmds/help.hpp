#pragma once

#include <iostream>

using namespace std;

namespace cli
{
    namespace cmds
    {
        void help()
        {
            cout << "USAGE:" << endl;
            cout << "  ksharp [options] [file]\n" << endl;
            cout << "OPTIONS:" << endl;
            cout << "  -h, --help      Show this help message and exit." << endl;
            cout << "  -v, --version   Show the version and exit." << endl;
            cout << "  -c, --compile   Compile the file and exit." << endl;
            cout << "  -e, --execute   Execute the file and exit." << endl;
            cout << "  -r, --run       Run the file and exit." << endl;
            cout << "  -v, --eval      Evaluate the file and exit." << endl;
            cout << "  -x, --explain   Explain the error code and exit." << endl;
        }
    }
}