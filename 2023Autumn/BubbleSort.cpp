#include <bits/stdc++.h>

using namespace std;

int num[100];
int n;

void PSort(int num[],int n)
{
	int temp;
	for(int i=1;i<=n;i++)
		for (int j=0;j<n-1;j++)
		{
			if (num[j]>num[j+1])
			{
				temp=num[j+1];
				num[j+1]=num[j];
				num[j]=temp;
			}
		}
	return;
}

int main()
{
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>num[i];
	PSort(num,n);
	for (int i=0;i<n;i++)
		cout<<num[i]<<" ";
	cout<<endl;
	return 0;
}
