#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int m=n;
  while(n>0)
  {
    int d=n%10;
    s=s+(d*d*d);
    n=n/10;
  }
  if(s==m)
  cout<<"ARMSTRONG NUMBER"<<endl;
  else
  cout<<"NOT AN ARMSTRONG NUMBER"<<endl;
}
