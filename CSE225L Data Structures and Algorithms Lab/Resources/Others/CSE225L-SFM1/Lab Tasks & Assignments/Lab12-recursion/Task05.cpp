#include<bits/stdc++.h>

using namespace std;

int DecToBin(int dec){
    if(dec==0){return 0;}
    return (dec%2+10*DecToBin(dec/2));
}

int main(){
  int n;
  cin>>n;
  cout<<DecToBin(n);
}
