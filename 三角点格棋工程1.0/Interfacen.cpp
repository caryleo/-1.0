#include<iostream>
#include<cstdio>
#include<cstring>
#include "Interfacen.h"
using namespace std;

int btlcmd, odrcmd;

int main()
{
	cout << "三角点格棋博弈引擎" << endl;
	cout << "版本：1.4" << " build 07192" << endl;
	int tag = 1;
	while (tag)
	{
		cout << "--------------------------" << endl;
		cout << "请输入博弈模式" << endl;
		cout << "1为人人对战，2为人机对战" << endl;
		cin >> btlcmd;//输入对战模式指令
		if (btlcmd != 1 && btlcmd != 2)
		{
			cout << "无效输入，请重新输入！" << endl;
			continue;
		}
		if (btlcmd == 2)
		{
			cout << "请输入博弈顺序" << endl;
			cout << "1为先手，2为后手" << endl;
			cin >> odrcmd;//输入对战顺序指令
		}
		battle(btlcmd);
		cout << "--------------------------" << endl;
		cout << "请输入下一步指令" << endl;
		cout << "1为重新开始，0为退出程序" << endl;
		cin >> tag;
	}
	return 0;
}

void battle(int battlecmd)
{
	if (battlecmd == 1)
	{
		stpdgm();//执行人人对战程序
	}
	else
	{
		smrtgm(odrcmd);//执行人机对战程序
	}
}
