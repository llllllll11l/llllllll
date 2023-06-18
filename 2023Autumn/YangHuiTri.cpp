#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(i==0)
			{
				cout<<"1";
				break;
			}
			else
			{
				t=1;
				if(j)
				{
					for(int n=1;n<=j;n++)
						t=t*(i-n+1)/n;
					cout<<t<< " ";
				}
			}
			if(!j)
				cout<<"1 ";
		}
		cout<<endl;
	}
	return 0;
}
