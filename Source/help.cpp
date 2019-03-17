#include "help.hpp"
#include <iostream>


namespace cli
{

void Help::operator()(void)
  {
  for (auto x:v)
    {
    std::cout<<x<<'\n';
    }
  std::cout<<std::endl;
  }

void Help::AddHelp(std::string s)
  {
  v.emplace_back(s);
  }

}
