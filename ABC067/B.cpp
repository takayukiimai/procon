#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,k,ans=0;
  cin >> n >> k;
  int* bou = new int[n];
  for (int i = 0; i < n; i++) {
    cin >>bou[i];
  }
  sort(bou,bou+n);

  for (int i = 0; i < k; i++) {
    ans += bou[n-1-i];
  }
  cout << ans<<endl;
  return 0;
}
