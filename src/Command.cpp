#include "Command.hpp"
#include "Error.hpp"
extern std::map<std::string, Command::Application> commands;
void Command::Application::setArg(std::string arg)
{
    this->_arg = arg;
}
int Command::Application::run(std::vector<std::string> &args)
{
    std::string __arg = this->_arg;
    for (auto &&_tmp : args)
    {
        __arg = __arg.replace(__arg.find(Cutter), 1, _tmp);
    }
    return system(__arg.c_str());
}
void Command::load(std::string list)
{
    std::fstream s_list;
    s_list.open(list, std::ios::in);
    if (s_list.fail())
    {
        Error(e_confnotopen, EXIT_FAILURE);
    }
    std::string _cmd, _name;
    while (not s_list.eof())
    {
        getline(s_list, _name, ':');
        if (s_list.peek() == '\n')
        {
            s_list.ignore();
        }
        getline(s_list, _cmd);
        commands[_name].setArg(_cmd);
    }
    s_list.close();
}
