#include <bits/stdc++.h>

using namespace std;

char str1[100],str2[100];
int k,m,n,cnt=1;
	
int main()
{
	cin>>str1;
	cin>>k;
	int i,j;
	for(n=0;str1[n]>0&&str1[n]<256;n++,m++)
		if(str1[n]=='-')
			m--;
	for(i=0;i<=n;i++)
	{
		if(j!=m%k&&j+1!=cnt*k+cnt||j==0)
		{
			if(str1[i]!='-')
			{
				if (str1[i]>='a'&&str1[i]<='z')
					str2[j]=str1[i]+'A'-'a';
				else 
					str2[j]=str1[i];
				j++;
			}
		}
		else
		{
			if(j<=m)
				str2[j] = '-';
			cnt++;
			i--;
			j++;
		}
	}
	for (j=0;str2[j]>0&&str2[j]<256;j++)
		cout<<str2[j];
	return 0;
}
