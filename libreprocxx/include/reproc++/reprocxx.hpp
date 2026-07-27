#pragma once

#include <iosfwd>
#include <string>

namespace reprocxx
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  void
  say_hello (std::ostream&, const std::string& name);
}
