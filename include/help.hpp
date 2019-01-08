#ifndef HELP_HPP
#define HELP_HPP

#include <vector>
#include <string>

namespace cli
{

class Help
  {
  public:


  void AddHelp(std::string s);
  void operator()(void);

  private:

  std::vector<std::string> v;

  };




} // end namespace cli



#endif // HELP_HPP
