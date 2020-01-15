#ifndef TooMangArgs_src_Command_H
#define TooMangArgs_src_Command_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#define Cutter '$'
namespace Command
{
class Application
{
public:
    void setArg(std::string arg);
    int run(std::vector<std::string> &args);

private:
    std::string _arg;
};
void load(std::string list);
}; // namespace Command
#endif