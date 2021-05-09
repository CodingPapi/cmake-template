// @Author: Farmer Li, 公众号: 很酷的程序员/RealCoolEngineer
// @Date: 2021-05-10

#include <stdio.h>
#include <stdlib.h>

#include "math/add.h"

int main(int argc, char* argv[]) {
  if (argc != 4) {
    printf("Usage: test_add v1 v2 expected\n");
    return 1;
  }

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int expected = atoi(argv[3]);
  int res = add_int(x, y);

  if (res != expected) {
    return 1;
  } else {
    return 0;
  }
}
