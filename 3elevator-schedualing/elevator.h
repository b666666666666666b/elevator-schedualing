#pragma once
class elevator
{
public:
	int lift;//��������¥��
	int request;//�����ʱ��
	int from;//�����¥��
	int to;//Ŀ�ĵ�¥��
	int time;//��ʱ��
	void move1(int &lift, int from, int to, int &time, int request);
	void move2(int &lift, int from, int to, int &time, int request);
	void move3(int &lift, int from, int to, int &time, int request);
};

