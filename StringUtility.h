#pragma once
#include <string>
#include <vector>

namespace String
{
	std::vector<std::string> Split(const std::string& value, const std::string& separator);
	
	std::string Replace(const std::string& value, const std::string& find, const std::string& replace);
}

