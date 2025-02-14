#pragma once

#include <string>
#include <vector>
#include "../../../../tools/types/lookup_hash.h"

namespace KSharp
{
	namespace runtime
	{
		namespace compiler
		{
			namespace lexer
			{
				typedef enum
				{
					end_of_file,
					ident,
					symbol,
					st_block,
					ed_block,
					operator_,
					keyword,
					st_conditional_expr,
					ed_conditional_expr,
					// Data types
					boolean,
					int8,
					int16,
					int32,
					int64,
					uint8,
					uint16,
					uint32,
					uint64,
					float_num,
					double_num,
					string,
					binary,

					// Symbols
					function,
					class_,
					struct_,
					enum_,
					namespace_,
					static_,
					const_,
					auto_,
					immutable,

					// more things IDK how to name
					export_,
					import_,
					public_,
					private_,


				} TokenTypes;
				struct LexerBase
				{
					std::vector<std::string> tokens;

				};

				LookupHash<std::string> keywords_hash;

				int setup(std::string code, std::string file)
				{
					// Setup keywords
					keywords_hash.add("if", TokenTypes::keyword);
					keywords_hash.add("else", TokenTypes::keyword);
					keywords_hash.add("while", TokenTypes::keyword);
					keywords_hash.add("for", TokenTypes::keyword);
					keywords_hash.add("break", TokenTypes::keyword);
					keywords_hash.add("continue", TokenTypes::keyword);
					keywords_hash.add("return", TokenTypes::keyword);
					keywords_hash.add("true", TokenTypes::keyword);
					keywords_hash.add("false", TokenTypes::keyword);
					keywords_hash.add("and", TokenTypes::keyword);
					keywords_hash.add("or", TokenTypes::keyword);
					keywords_hash.add("not", TokenTypes::keyword);

					// Setup operators
					keywords_hash.add("+", TokenTypes::operator_);
					keywords_hash.add("-", TokenTypes::operator_);
					keywords_hash.add("*", TokenTypes::operator_);
					keywords_hash.add("/", TokenTypes::operator_);
					keywords_hash.add("%", TokenTypes::operator_);
					keywords_hash.add("==", TokenTypes::operator_);
					keywords_hash.add("!=", TokenTypes::operator_);
					keywords_hash.add(">", TokenTypes::operator_);
					keywords_hash.add("<", TokenTypes::operator_);
					keywords_hash.add(">=", TokenTypes::operator_);
					keywords_hash.add("<=", TokenTypes::operator_);
					keywords_hash.add("&&", TokenTypes::operator_);
					keywords_hash.add("||", TokenTypes::operator_);
					keywords_hash.add("!", TokenTypes::operator_);

					// Setup data types
					keywords_hash.add("bool", TokenTypes::boolean);
					keywords_hash.add("int8", TokenTypes::int8);
					keywords_hash.add("int16", TokenTypes::int16);
					keywords_hash.add("int32", TokenTypes::int32);
					keywords_hash.add("int64", TokenTypes::int64);
					keywords_hash.add("snt", TokenTypes::int64);
					keywords_hash.add("uint8", TokenTypes::uint8);
					keywords_hash.add("uint16", TokenTypes::uint16);
					keywords_hash.add("uint32", TokenTypes::uint32);
					keywords_hash.add("uint64", TokenTypes::uint64);
					keywords_hash.add("uns", TokenTypes::uint64);
					keywords_hash.add("float", TokenTypes::float_num);
					keywords_hash.add("double", TokenTypes::double_num);
					keywords_hash.add("string", TokenTypes::string);
					keywords_hash.add("binary", TokenTypes::binary);

					// Setup punctuation
					keywords_hash.add("{", TokenTypes::st_block);
					keywords_hash.add("}", TokenTypes::ed_block);
					keywords_hash.add("[", TokenTypes::st_conditional_expr);
					keywords_hash.add("]", TokenTypes::ed_conditional_expr);


				}
			}
		}
	}
}
