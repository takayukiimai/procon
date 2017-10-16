#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<queue>

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;

  vector<pair<int, int> > pairs(n-1);
  vector<int> fen,snk;
  queue<int> nextfen, nextsnk;

  for (int i = 0; i < n-1; i++) {
    int a,b;
    cin >> a >> b;
    pairs[i] = make_pair(a, b);
  }

  fen.push_back(1);
  nextfen.push(1);
  snk.push_back(n);
  nextsnk.push(n);

  while(nextfen.size()!=0 && nextsnk.size()!=0){
    for (int i = 0; i < n-1; i++) {
      if(pars[i])
    }
  }
  return 0;
}
