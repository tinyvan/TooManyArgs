#define CONFIG_LIST "tma.list"
#include "Command.hpp"
std::map<std::string, Command::Application> commands;
int main(int argc, char **argv)
{
    //main() is incompleted,but it can do something already...
    Command::load(CONFIG_LIST);
    if (argc < 2)
        return 0;
    if (commands.find(argv[1]) == commands.end())
        return 1;
    std::vector<std::string> _argv;
    for (size_t _tmp = 2; _tmp < argc; _tmp++)
    {
        _argv.push_back(argv[_tmp]);
    }
    return commands[argv[1]].run(_argv);
}