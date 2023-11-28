#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  DIR           *dir;
  struct dirent *dirp;

  if (argc != 2) {
    printf("Usage: ./ls catalog_name\n");
    exit(1);
  }

  if ((dir = opendir(argv[1])) == nullptr) {
    printf("Unable to open %s\n", argv[1]);
    exit(1);
  }

  while ((dirp = readdir(dir)) != nullptr) {
    printf("%s\n", dirp->d_name);
  }

  closedir(dir);
  return 0;
}
