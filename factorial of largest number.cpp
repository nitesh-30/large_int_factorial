#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  vector<int>factorial(int N)
  {
      vector<int>v;
      long long int f=1;
      for(int i =1;i<=N;i++)
      {
          f=f*i;

      }
      while(f!=0)
      {
          v.push_back(f%10);
          f=f/10;
      }
      reverse(v.begin(),v.end());
      return v;
  }
  int main()
  {

      int n;
      cout<<"Enter the value of N to find the the factorial on N=";
      cin>>n;
      vector<int>v=factorial(n);
      for(int i=0;i<v.size();i++)
      {
          cout<<v[i];
      }
  }
