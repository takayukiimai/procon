#include <cstdio>
#include <vector>

int main(int argc, char const *argv[]) {
  int n, x;
  scanf("%d", &n);
  std::vector<int> b;
  scanf(" %d", &x);
  b.push_back(x);
  for (int i = 1; i < n; i++) {
    scanf(" %d", &x);
    if (i%2 == 0) {
      b.insert(b.begin(), x);
    }else{
      b.push_back(x);
    }
  }

  if(n%2 == 0){
    for (int i = n-1; i >= 0; i--) {
      printf("%d ", b[i]);
    }
  }else{
    for (int i = 0; i < n; i++) {
      printf("%d ", b[i]);
    }
  }
  printf("\n");
  return 0;
}
