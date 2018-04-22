#include"elevator.h"
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
void elevator::move(int &lift, int from, int to, int &time, int request)
{
	int ss,sss; ss = lift;
	if (request > time)
		time += request - time;
	time += abs(from - lift);
	lift = from;
	if (ss != from)
	{
		
		cout << time << " " << lift << endl;time++;
	}
	time += abs(to - lift);
	lift = to;
	cout << time <<" "<< lift << endl;
	if (ss != to)time++;
}