#include <cstdio>
#include <algorithm>

int main(int argc, char const *argv[]) {
  int val[3];
  for (int i = 0; i < 3; i++) {
    scanf(" %d", &val[i]);
  }
  std::sort(val, val+3);
  int min = val[0] + val[1];
  printf("%d\n",min );
  return 0;
}
