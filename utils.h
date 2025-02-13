#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>

// ANSI colors
constexpr auto RESET = "\033[0m";
constexpr auto RED = "\033[31m";
constexpr auto GREEN = "\033[32m";
constexpr auto YELLOW = "\033[33m";
constexpr auto BLUE = "\033[34m";
constexpr auto PURPLE = "\033[35m";
constexpr auto CYAN = "\033[36m";
constexpr auto WHITE = "\033[37m";

namespace KSharp
{
	namespace utils
	{
		namespace logger
		{
			void message(std::string msg)
			{
				std::cout << CYAN << "- [MESSAGE]: " << RESET << msg << std::endl;
			}

			void error(std::string msg)
			{
				std::cerr << RED << "- [ERROR]: " << RESET << msg << std::endl;
			}

			void fatal(std::string msg)
			{
				std::cerr << RED << "- [FATAL]: " << RESET << msg << std::endl;
			}

			void warning(std::string msg)
			{
				std::cout << YELLOW << "- [WARNING]: " << RESET << msg << std::endl;
			}

			void debug(std::string msg)
			{
				std::cout << GREEN << "- [DEBUG]: " << RESET << msg << std::endl;
			}
		}
	}
}
