#include<iostream>
using namespace std;

int main()
{
  int n;
  std::cout<<"Input n:";
  cin>>n;
  cout<<n <<" ";
  
  for(;n!=1;)
  {
    if( (n%2)!=0 )
    {
       n=n*3+1;
       cout<<n <<" ";
    }
    else
    {
       n=n/2;
       cout<<n <<" ";
    }
  }
  cout<<endl;
  return 0;
}
