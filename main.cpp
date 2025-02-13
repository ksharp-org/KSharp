#include "utils.h"

/**
 * @file main.cpp
 * @brief Main file for the K# programming language
 * @version 0.1
 * @date 2025-02-01
 */
namespace KSharp
{
	/**
	* @brief The utils namespace has different utilities for developing K#.
	*/
	namespace utils
	{
		/**
		 * @brief The logger namespace is used to log things.
		 * @author Mario Rosell
		 * @file main.cpp
		*/
		namespace logger {}
	}
	/**
	* @brief The cli namespace is used to interact with the K# Runtime easily.
	* @author Mario Rosell
	* @file main.cpp
	*/
	namespace cli
	{
		/**
		 * @brief The cmds are the commands for the CLI
		 * @file main.cpp
		*/
		namespace cmds {}
	}
	/**
	 * @brief The runtime namespace is used to interact with the K# runtime.
	 * @author Mario Rosell
	 * @file main.cpp
	*/
	namespace runtime
	{
		/**
		* @brief The linter namespace is used to lint the K# code.
		* @author Mario Rosell
		* @file main.cpp
		*/
		namespace linter {}

		/**
		 * @brief The compiler namespace is used to interact with the K# compiler.
		 * @author Mario Rosell
		 * @file main.cpp
		*/
		namespace compiler
		{
			/**
			 * @brief The tokenizer namespace is used to interact with the K# tokenizer.
			 * @author Mario Rosell
			 * @file main.cpp
			*/
			namespace tokenizer {}

			/**
			 * @brief The parser namespace is used to interact with the K# parser.
			 * @author Mario Rosell
			 * @file main.cpp
			*/
			namespace parser {}

			/**
			 * @brief The irgen namespace is used to make the LLVM IR.
			 * @author Mario Rosell
			 * @file main.cpp
			*/
			namespace irgen {}

			/**
			 * @brief The linker namespace is used to link libraries.
			 * @author Mario Rosell
			 * @file main.cpp
			*/
			namespace linker {}

			/**
			 * @brief The optimizer namespace is used to optimize the LLVM IR code.
			 * @file main.cpp
			*/
			namespace optimizer {}
		}
	}
}

int main(int argc, char* argv[])
{
	KSharp::utils::logger::warning("You are calling the compiler directly. Please use the K# CLI.");
	std::cout << "Reading from stdin... use .exit to exit and .comp to compile." << std::endl;
	std::string line;
	std::string code;

	while (line != ".exit")
	{
		std::getline(std::cin, line);
		code += line + "\n";
		if (line == ".comp")
		{
			KSharp::utils::logger::message("Compiling code...");
		}
	}
	return 0;
}
