#include "Error.hpp"
void Error(std::string exception, int status)
{
    std::cerr << exception << std::endl;
    exit(status);
}
void help()
{
    std::cout << "TooManyArgs v"
              << getVersion()
              << std::endl
              << ""; //TODO:Make it beautiful!
}
