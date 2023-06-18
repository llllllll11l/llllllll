#include <bits/stdc++.h>

using namespace std;

int n,a[5];

int main()
{
	cin>>n;
	for (int i=4;i>=0;i--,n/=8)
		a[i]=n%8;
	for (int i=0;i<5;i++)
		cout<<a[i];
	return 0;
}
