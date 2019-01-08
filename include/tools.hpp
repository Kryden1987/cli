#ifndef TOOLS_HPP
#define TOOLS_HPP

#include <utility>

namespace cli
{

class NamedType
  {
  public:



  struct NamedArgument
    {
    template<typename UnderlyingType>
    NamedType operator=(UnderlyingType&& value) const
        {
        return NamedType(std::forward<UnderlyingType>(value));
        }
    };

  private:


  };



} // end namespace cli



#endif // TOOLS_HPP
