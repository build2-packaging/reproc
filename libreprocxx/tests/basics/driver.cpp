#include <reproc++/run.hpp>

#undef NDEBUG
#include <cassert>

int main ()
{
  // Call a non-inline API so shared library symbol export is exercised.
  const char *argv[] = {
#ifdef _WIN32
    "cmd", "/c", "echo", "hello",
#else
    "echo", "hello",
#endif
    nullptr
  };

  int status = -1;
  std::error_code ec;
  std::tie (status, ec) = reproc::run (argv);

  assert (!ec);
  assert (status >= 0);
  return 0;
}
