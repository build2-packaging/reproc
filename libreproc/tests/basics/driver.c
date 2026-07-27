#include <reproc/run.h>

#undef NDEBUG
#include <assert.h>

int main (void)
{
  /* Call a non-inline API so shared library symbol export is exercised. */
  const char *argv[] = {
#ifdef _WIN32
    "cmd", "/c", "echo", "hello",
#else
    "echo", "hello",
#endif
    NULL
  };

  int r = reproc_run (argv, (reproc_options){0});
  assert (r >= 0);
  return 0;
}
