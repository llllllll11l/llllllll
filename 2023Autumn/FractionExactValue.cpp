//fraction_exact_value.h
#ifndef _FRACTION_EXACT_VALUE_H_
#define _FRACTION_EXACT_VALUE_H_

#include <bits/stdc++.h>
using namespace std;


class FEV
{
	static const int MAXL=10000+5;
	public:
		FEV(int a,int b,int d=200);
		~FEV();
		void SetF(int a,int b);
		void SetD(int d);
		int Calc();
		void Output()const;
		void Fun();
	private:
		int n,m;
		int dgt;
		int decimal[FEV::MAXL];
		int integer;
		int sgn;
		int err;
};

#endif

//fraction_exact_value_.h

//#include "fraction_exact_value.h"

FEV::FEV(int a,int b,int d)
{
	n=a;m=b;
	dgt=d;
	sgn=0;
	err=0;
	integer=0;
	memset(decimal,0,sizeof(decimal));
	return;
}

FEV::~FEV(){}

void FEV::SetD(int d){dgt=d;return;}

void FEV::SetF(int a,int b){n=a;m=b;return;}

int FEV::Calc()
{
	int tn=n,tm=m;
	
	if(tn==0)
	{
		integer=0;
		return 1;
	}
	if(tm==0)
	{
		err=1;
		return -1;
	}
	if(tn<0||tm<0)
	{
		sgn=(tn*tm<0);
		tn=tn>0?tn:-tn;
		tm=tm>0?tm:-tm;
	}
	integer=tn/tm;
	tn-=integer*tm;
	
	for(int i=0;i<dgt;i++)
	{
		decimal[i]=tn*10/tm;
		tn=tn*10-decimal[i]*tm;
	}
	
	return 1;
}

void FEV::Output() const
{
	cout<<(sgn?"-":"");
	cout<<integer;
	cout<<".";
	for(int i=0;i<dgt;i++)
		cout<<decimal[i];
	return;
}

void FEV::Fun()
{
	Calc();
	if(err)
	{
		cout<<"Error!\n";
		return;
	}
	Output();
	return;
}

//main.cpp
//#include "fraction_exact_value.h"
//#include "fraction_exact_value_.h"

int main()
{
	int n,m;
	cin>>n>>m;
	FEV solve(n,m);
	solve.Fun();
	return 0;
}
