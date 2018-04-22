#pragma once
class elevator
{
public:
	int lift;
	int request;
	int from;
	int to;
	int time;
	void move(int &lift, int from, int to, int &time, int request);
};

