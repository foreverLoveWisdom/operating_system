#include "common.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: CPU <string>\n");
    exit(1);
  }

  char *str = argv[1];

  while (1) {
    Spin(1);
    printf("%s\n", str);
  }

  return 0;
}
