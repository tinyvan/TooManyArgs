#define Config_Path "tma.list" // Config path here
#include <cstdlib>
#include "Command.hpp"
#include "Error.hpp"
std::map<std::string, Command::Application> commands;
int main(int argc, char **argv)
{
    std::ios::sync_with_stdio(false); //Make stream faster
    //main() is incompleted,but it can do something already...
    if (argc < 2 or
        std::string(argv[1]) == std::string("help") or
        std::string(argv[1]) == std::string("version"))
    {
        help();
        exit(EXIT_SUCCESS);
    }
    Command::load(Config_Path);
    if (commands.find(argv[1]) == commands.end())
    {
        Error(e_notfound, EXIT_FAILURE);
    }
    std::vector<std::string> _argv;
    for (size_t _tmp = 2; _tmp < argc; _tmp++)
    {
        _argv.push_back(argv[_tmp]);
    }
    return commands[argv[1]].run(_argv);
}
