#include <cstdio>
#include <string>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::string str;
  std::cin >> str;
  int N = str.length();
  if (N%2 == 0) {
    str.pop_back();
    str.pop_back();
    N -= 2;
  }else{
    str.pop_back();
    N--;
  }

  while (str.length() > 2) {
    std::string sub1 = str.substr(0,N/2), sub2 = str.substr(N/2,N/2);
    if(sub1 == sub2){
      printf("%d\n", (int)str.length());
      return 0;
    }
    str.pop_back();
    str.pop_back();
    N -= 2;
  }
  printf("%d\n", (int)str.length());
  return 0;
}
