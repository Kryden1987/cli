#include "cli.hpp"
#include <vector>

namespace cli
{

ArgumentParser::ArgumentParser()
  {

  }


void ArgumentParser::AddArgument(const char* short_name,const char* long_name,const char* help)
  {
  h.AddHelp(help);
  }


void ArgumentParser::ParseArguments(int argc,char** argv)
  {
  if (argc==1)
     {
     h();
     }




  }


}
