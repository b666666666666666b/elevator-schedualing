#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include"elevator.h"
#pragma warning(disable : 4996)
using namespace std;
class man
{
public:
	int request;
	int from;
	int to;
};

int main()
{
	int i, n,n1=0,n2=0,n3=0,m1=0,m2=0,m3=0;
	freopen("input.txt", "r", stdin);
	elevator dianti;
	dianti.lift = 0; dianti.time = 0;
	man men[1000], men1[1000], men2[1000], men3[1000];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> men[i].request >> men[i].from >> men[i].to;
	}
	for (i = 0; i < n; i++)
	{
		if (men[i].from % 2 != 0 && men[i].to%2 != 0)
		{
			men1[m1++] = men[i];
		}
		else if ((men[i].from == 1 && men[i].to % 2 == 0) || (men[i].from % 2 == 0 && men[i].to == 1)||(men[i].from%2==0&& men[i].to%2==0))
		{
			men3[m3++] = men[i];
		}
		else
			men2[m2++] = men[i];
	}
	for (i = 0; i < n; i++)
	{
		n1++;
		if (men1[i].request == 0 && men1[i].from == 0 && men1[i].to == 0)
		{
			n1--;
			break;
		}
	}
	for (i = 0; i < n; i++)
	{
		n2++;
		if (men2[i].request == 0 && men2[i].from == 0 && men2[i].to == 0)
		{
			n2--;
			break;
		}
	}
	for (i = 0; i < n; i++)
	{
		n3++;
		if (men3[i].request == 0 && men3[i].from == 0 && men3[i].to == 0)
		{
			n3--;
			break;
		}
	}
	for (i = 0; i < n1; i++)
	{
		dianti.move1(dianti.lift, men1[i].from, men1[i].to, dianti.time, men1[i].request);
	}
	dianti.lift = 0; dianti.time = 0;
	for (i = 0; i < n2; i++)
	{
		dianti.move2(dianti.lift, men2[i].from, men2[i].to, dianti.time, men2[i].request);
	}
	dianti.lift = 0; dianti.time = 0;
	for (i = 0; i < n3; i++)
	{
		dianti.move3(dianti.lift, men3[i].from, men3[i].to, dianti.time, men3[i].request);
	}
	return 0;
}