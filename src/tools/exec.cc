#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  char  buf[1024];
  pid_t pid;
  int   status;

  printf("%% ");

  while (fgets(buf, 1024, stdin) != nullptr) {
    if (buf[strlen(buf) - 1] == '\n') {
      buf[strlen(buf) - 1] = 0;
    }

    if ((pid = fork()) < 0) {
      std::cout << "Unable to fork" << std::endl;
    } else if (pid == 0) {
      execlp(buf, buf, (char *)0);
      std::cout << "Unable to exec: " << buf << std::endl;
      exit(127);
    }

    if ((pid = waitpid(pid, &status, 0)) < 0) {
      std::cout << "wait process error " << std::endl;
    }
    printf("%% ");
  }
  return 0;
}
