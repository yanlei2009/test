#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y,a,b;
	cin>>x>>a>>y>>b;
	cout<<fixed<<setprecision(2)<<(x*a - y*b)/(a-b); 
	return 0;
}