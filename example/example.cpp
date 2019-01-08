#include "cli.hpp"

using namespace cli;






int main(int argc,char** argv)
  {
  ArgumentParser parser;

  parser.AddArgument("-i","--integer","Integer value");
  parser.AddArgument("-s","--string" ,"String value" );
  parser.AddArgument("-d","--double" ,"Double value" );

  parser.ParseArguments(argc,argv);
  }
