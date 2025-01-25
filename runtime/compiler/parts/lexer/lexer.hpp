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
        	typedef enum
			{} token_type;
            struct lexer_struct
            {
                string code;
                vector<string> tokens;
            };

            lexer_struct lexer_data = lexer_struct();
            lexer()
            {
                lexer_data.code = "";
                lexer_data.tokens = vector<string>();
            }

            void setup(string code);
            void lex();
        };
    }
}
