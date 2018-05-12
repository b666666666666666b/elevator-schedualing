#pragma once
class elevator
{
public:
	int lift;//电梯所在楼层
	int request;//请求的时间
	int from;//请求的楼层
	int to;//目的地楼层
	int time;//总时间
	void move1(int &lift, int from, int to, int &time, int request);
	void move2(int &lift, int from, int to, int &time, int request);
	void move3(int &lift, int from, int to, int &time, int request);
};

