#pragma once

#include <string>
#include <vector>

#include "../../../../utils/logger.h"

using namespace std;

namespace ksharp
{
    namespace lexer
    {
        class lexer
        {
        public:
            struct lexerStruct
            {
                string code;
                vector<string> tokens;
            };

            lexerStruct lexerData = lexerStruct();
            lexer()
            {
                lexerData.code = "";
                lexerData.tokens = vector<string>();
            }
            
            void setup(string code);
            void lex();
        };
    }
}