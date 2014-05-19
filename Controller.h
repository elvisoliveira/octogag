#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include <string.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <map>
class Controller
{
public:
    Controller();
    std::vector <std::map<std::string, std::string> > getVector();
    std::map<std::string, std::string> getImage(std::string url);
private:
    std::vector <std::map<std::string, std::string> > vector;
};

#endif	/* CONTROLLER_H */

