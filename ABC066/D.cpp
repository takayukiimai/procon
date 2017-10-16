#include <cstdio>
#include <vector>

int main(int argc, char const *argv[]) {
  int n,x,y,waru = 1000000007;
  scanf("%d", &n);
  std::vector<int> b;
  std::vector<int> a(n,0);

  for (int i = 0; i < n+1; i++) {
    scanf(" %d", &x);
    b.push_back(x);
    if(a[x] == 0){
      a[x] =1;
    }else{
      y = x;
    }
  }

  for (int i = 0; i < n+1; i++) {
    int res = 0;
    for (int j = 0; j < i; j++) {
      if(i == y){
        continue;
      }else{
        res +=
      }
    }
  }

  }
