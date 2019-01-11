#include "cli.hpp"
#include <vector>
#include <string>
#include <iostream>

namespace cli
{

ArgumentParser::ArgumentParser()
  {
  h = std::shared_ptr<Help>(new Help);
  }


void ArgumentParser::AddArgument(const char* short_name,const char* long_name,const char* help)
  {
  h->AddHelp(help);
  }


void ArgumentParser::ParseArguments(int argc,char** argv)
  {
  if (argc==1)
     {
     (*h)();
     }

  std::vector<std::string> arguments(argv + 1, argv + argc);

  for (auto x:arguments)
    {
    std::cout<<x<<std::endl;    
    }
  
  
  
  }


}
