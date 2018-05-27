#include"elevator.h"
#include<iostream>
#include<math.h>
#include<fstream>
#include<cstdio>
using namespace std;
void elevator::move1(int &lift, int from, int to, int &time, int request)
{
	int ss; ss = lift;
	if (request > time)
		time += request - time;
	time += abs(from - lift);
	lift = from;//去接乘客
	ofstream outfile1("output1.txt", ios::app);
	if (ss != from)
	{
		
		outfile1 << time << " " << lift << endl;time++;
	}
	time += abs(to - lift);
	lift = to;
	outfile1 << time <<" "<< lift << endl;
	if (ss != to)time++;//送乘客
}
void elevator::move2(int &lift, int from, int to, int &time, int request)
{
	int ss; ss = lift;
	if (request > time)
		time += request - time;
	time += abs(from - lift);
	lift = from;//去接乘客
	ofstream outfile2("output2.txt", ios::app);
	if (ss != from)
	{
		
		outfile2 << time << " " << lift << endl; time++;
	}
	time += abs(to - lift);
	lift = to;

	outfile2 << time << " " << lift << endl;
	if (ss != to)time++;//送乘客
}
void elevator::move3(int &lift, int from, int to, int &time, int request)
{
	int ss; ss = lift;
	if (request > time)
		time += request - time;
	time += abs(from - lift);
	lift = from;//去接乘客
	ofstream outfile3("output3.txt", ios::app);
	if (ss != from)
	{
		
		outfile3 << time << " " << lift << endl; time++;
	}
	time += abs(to - lift);
	lift = to;	
	outfile3 << time << " " << lift << endl;
	if (ss != to)time++;//送乘客
}