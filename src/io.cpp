/**
 * This file is part of Ool cpp package
 * 
 * This is a header file for input output
 * 
 */
#include <iostream>
#include <string>
#include "headers/io.h"

void IO::Input::command()
{
    std::cout << "This is user command";
};

void IO::Input::subCommand()
{
    std::cout << "This is user sub command";
};

int IO::Input::params(int p[])
{
    std::cout << "This is user params";
    return p[0];
};
