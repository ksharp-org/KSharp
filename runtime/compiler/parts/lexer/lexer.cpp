#include "lexer.hpp"

using namespace std;

namespace ksharp
{
    namespace lexer
    {
        void lexer::setup(string code)
        {
            lexer_data.code = code;
            lexer_data.tokens = vector<string>();
        }
        void lexer::lex()
        {

        }

    }
}
