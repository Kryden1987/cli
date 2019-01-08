#ifndef CLI_HPP
#define CLI_HPP

#include "help.hpp"

namespace cli
  {


  class Argument
    {
    public:

    Argument(const char* argument);

    private:



    };






  class ArgumentParser
    {
    public:

    ArgumentParser();


    void AddArgument(const char* short_name,const char* long_name,const char* help);


    void ParseArguments(int argc,char** argv);

    private:

    Help h;
    };


  } // end namespace cli


#endif // CLI_HPP
