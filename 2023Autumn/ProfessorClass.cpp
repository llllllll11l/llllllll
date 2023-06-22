#include <bits/stdc++.h>

using namespace std;

int a[1000];
int n,k;
int cnt;

int main()
{
	cin>>n>>k;
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<n;i++)
		if (a[i]<=0)
			cnt++;
	cout<<(cnt<k?"Yes":"No")<<endl;
	return 0;
}
