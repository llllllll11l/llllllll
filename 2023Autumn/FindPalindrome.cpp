//palindrome
#include <bits/stdc++.h>

using namespace std;

int n,m,k;
	
void fun(int m,int k)
{
	int a[100],cnt=0,f,t;
	int j;
	for (int i=m+1;cnt<k;i++)
	{
		f=1;
		t=i;
		for (j=0;t!=0;t/=10,j++)
			a[j]=t%10;
		for (int n=j-1;n>=0;n--)
			if (a[n]!=a[j-1-n])
				f=0;
		if(f)
		{
			for(int n=0;n<j;n++)
				cout<<a[n];
			cout<<" ";
			cnt++;
		}
	}
}
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>m>>k;
		fun(m,k);
		cout<<endl;
	}
	return 0;
}
