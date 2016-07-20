#include "Core.h"
#include <iostream>
#include<cstring>
using namespace std;

int scr[2];
int preva, now;
int sta, stb;
int edg[12][12];
int tri[9] = { 14, 304, 104, 704, 68608, 6400, 143360, 25088, 311296 };
int flag;
int trd[19];
int tra[9];
bool vis[19][19];
char name1[90];
char name2[90];


void stpdgm()
{
	ini();
	memset(trd, -1, sizeof(trd));
	memset(tra, -1, sizeof(tra));
	memset(vis, 0, sizeof(vis));
	preva = now = 0;//位棋盘信息初始化
	scr[0] = scr[1] = 0;//分数初始化
	flag = 0;//默认先手下棋
	cout << "请输入先手玩家名称：";
	cin >> name1;
	cout << "请输入后手玩家名称：";
	cin >> name2;
	cout << "当前游戏状态：人人对战   ";
	cout << "先手玩家：" << name1 << "   " << "后手玩家：" << name2 << endl;
	cout << "每次输入包括边的端点序号，以空格隔开，要求前小后大" << endl;
	while (jdg())//判断否出现输赢，即一方分数不小于五分，停止下棋，直接输出结果
	{
		if (!flag)
		{
			cout << "请先手 " << name1 << " 输入落子位置：";
		}
		else
		{
			cout << "请后手 " << name2 << " 出入落子位置：";
		}
		scanf("%d %d", &sta, &stb);//输入棋子位置
		if (sta >= stb || !edg[sta][stb])//棋子有效性判断
		{
			cout << "无效输入，请重新输入！" << endl;
			cout << "每次输入包括边的端点序号，以空格隔开，要求前小后大" << endl;
			continue;
		}
		else if (vis[sta][stb])
		{
			cout << "无效输入，请重新输入！" << endl;
			cout << "每次输入包括边的端点序号，以空格隔开，要求前小后大" << endl;
			continue;
		}
		else
		{
			vis[sta][stb] = 1;
			preva = now;
			now += (1 << edg[sta][stb]);
			trd[edg[sta][stb]] = flag;
			int k = panta(preva,now);//判断该步对棋盘的影响
			if (k)
			{
				ShowTri(trd, tra);
				scr[flag] += k;
				cout << "当前得分：" << "先手 " << name1 << " " << scr[0] << "分，" << "后手 " << name2 << " " << scr[1] << "分。" << endl;
			}
			else
			{
				ShowTri(trd, tra);
				flag = !flag;
				cout << "当前得分：" << "先手 " << name1 << " " << scr[0] << "分，" << "后手 " << name2 << " " << scr[1] << "分。" << endl;
			}
		}
	}
	if (scr[0] == 5)//输赢反馈
	{
		cout << "先手 "<<name1<<" 获胜，比赛结束。" << endl;
	}
	if (scr[1] == 5)//输赢反馈
	{
		cout << "后手 "<<name2<<" 获胜，比赛结束" << endl;
	}
}

void ini()
{
	edg[1][2] = 1;
	edg[1][3] = 2;
	edg[2][3] = 3;
	edg[2][4] = 4;
	edg[2][5] = 5;
	edg[3][5] = 6;
	edg[3][6] = 7;
	edg[4][5] = 8;
	edg[5][6] = 9;
	edg[4][7] = 10;
	edg[4][8] = 11;
	edg[5][8] = 12;
	edg[5][9] = 13;
	edg[6][9] = 14;
	edg[6][10] = 15;
	edg[7][8] = 16;
	edg[8][9] = 17;
	edg[9][10] = 18;
}

int jdg()
{
	if (scr[0] >= 5 || scr[1] >= 5)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
