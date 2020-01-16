#ifndef TooManyArgs_src_Error_H
#define TooManyArgs_src_Error_H
#include <iostream>
#include "Version.hpp"
const std::string e_notfound = "TMA:Command not found!\n"
                               "Correct your syntax or check config file.\n";
const std::string e_confnotopen = "TMA:Can not read config file!\n"
                                  "Check your config file and make sure that TMA is able to read.\n";
void Error(std::string exception, int status);
void help();
#endif