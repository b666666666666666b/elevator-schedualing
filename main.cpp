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
	man();
	~man();

private:

};

man::man()
{

}

man::~man()
{
}
int main()
{
	int i, n;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ofstream outfile;
	elevator dianti;
	dianti.lift = 0; dianti.time = 0;
	man men[1000];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> men[i].request >> men[i].from >> men[i].to;
	}
	sort(&men[0].request, &men[n - 1].request);
	for (i = 0; i < n; i++)
	{
		dianti.move(dianti.lift, men[i].from, men[i].to, dianti.time, men[i].request);
	}
	outfile.close();
	return 0;
}