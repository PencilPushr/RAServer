#pragma once

#include <string>

class Config
{
private:
	int port = 8080;
	std::string rootDir = "./files";
	std::string webDir = "./web";
public:
	Config();

	int GetPort();
	const std::string* GetRootDir();
	const std::string* GetWebDir();
private:
	bool ParseEnv();
};