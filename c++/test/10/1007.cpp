#include<bits/stdc++.h>
using namespace std;

int f(int a,int b,int c)
{
	return (a+b)*c;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<f(a,b,c);
}