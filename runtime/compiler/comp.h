#pragma once

#include <string>
#include "parts/lexer/lexer.h"

using namespace std;

namespace ksharp
{
    class compiler
    {
    public:
    
        struct Data
        {
            string code;
            string program;
            bool lexed;
            bool parsed;
            bool compiled;
        };
        Data data;

        compiler()
        {
            data.code = "";
            data.lexed = false;
            data.parsed = false;
            data.compiled = false;
        }
    };
}
