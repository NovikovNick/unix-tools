
#include <unistd.h>

int main(int argc, char *argv[]) {
  const int BUF_SIZE = 4096;
  char      buf[BUF_SIZE];

  int n;
  while ((n = read(STDIN_FILENO, buf, BUF_SIZE)) > 0) {
    if (write(STDOUT_FILENO, buf, n) != n) {
      write(STDERR_FILENO, "write error", 12);
      return 1;
    }
  }
  if (n < 0) {
    write(STDERR_FILENO, "read error", 11);
    return 1;
  }

  return 0;
}
