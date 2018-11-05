#include<iostream>

using namespace std;


int main()
{

int n,k,count=0;
long t;
cin>>n>>k;

 while(n--)
{
 cin>>t;
if(t % k == 0)
count++;

}

cout<<count;
return 0;
}
