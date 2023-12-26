#include <stdio.h>
#include <sys/resource.h>

int main() {
  struct rlimit lim;

  // Get the stack size limit
  getrlimit(RLIMIT_STACK, &lim);
  printf("stack size: %ld\n", lim.rlim_cur);

  // Get the process limit
  getrlimit(RLIMIT_NPROC, &lim);
  printf("process limit: %ld\n", lim.rlim_cur);

  // Get the maximum file descriptors limit
  getrlimit(RLIMIT_NOFILE, &lim);
  printf("max file descriptors: %ld\n", lim.rlim_cur);

  return 0;
}