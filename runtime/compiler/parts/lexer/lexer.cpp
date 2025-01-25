#include "lexer.h"

using namespace std;

namespace ksharp
{
    namespace lexer
    {
        void lexer::setup(string code)
        {
            lexerData.code = code;
            lexerData.tokens = vector<string>();
        }
        void lexer::lex()
        {

        }

    }
}
