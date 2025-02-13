#pragma once

#include <string>

namespace KSharp
{
	namespace runtime
	{
		namespace compiler
		{
			namespace tokenizer
	    	{
				enum TokenTypes
                {
					EOF,
					IDENT,
  					SYMBOL,
 					BLOCK,
					OPERATOR,
					KEYWORD,
					CONDITIONAL_EXPR,
					// Data types
					BOOL,
					INT8,
					INT16,
					INT32,
					INT64,
					UINT8,
					UINT16,
					UINT32,
					UINT64,
					FLOAT,
					DOUBLE,
					STRING,
					BINARY,
 				}
	    		struct Token
	    		{
				   int type;
                   std::string value;
                   unsigned int ln
				   unsigned int col
				};

				struct Tokenizer
				{
	            }
	    	}
	    }
	}
}
