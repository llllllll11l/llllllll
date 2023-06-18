#include <bits/stdc++.h>

using namespace std;

int cnt;
int n,a[100][100];

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
			
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int flag=1;
			for(int m=0;m<n;m++)
			{
				if(a[i][j]>a[m][j])
					flag=0;
				if(a[i][j]<a[i][m])
					flag=0;
			}
			if(flag)
			{
				cnt++;
				cout<<i<<" "<<j<<" ";
			}
		}
	}
	if (cnt == 0)
		cout << "NO";
	return 0;
}
