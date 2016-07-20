#include<iostream>
#include<cstring>
#include"AICore.h"
using namespace std;

const int INF = 0x3fffff;

struct node
{
	int x, y;
}s;
char name[90];
int last, nexta;
int hashi;
int haha;
int tmpscr[2];
int vis[19][19];

void smrtgm(int cmd)
{
	ini();
	memset(trd, -1, sizeof(trd));
	memset(tra, -1, sizeof(tra));
	memset(vis, 0, sizeof(vis));
	flag = 0;
	preva = now = 0;
	cout << "请输入玩家名称：";
	cin >> name;
	scr[0] = scr[1] = 0;
	if (cmd == 1)
	{
		cout << "当前游戏状态：人机对战   ";
		cout << "先手玩家：" << name << "   " << "后手玩家：" << "ZARUMILLA" << endl;
		cout << "每次输入包括边的端点序号，以空格隔开，要求前小后大" << endl;
		while (jdg())//判断否出现输赢，即一方分数不小于五分，停止下棋，直接输出结果
		{
			if (!flag)
			{
				cout << "请先手 " << name << " 输入落子位置：";
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
					int k = panta(preva, now);//判断该步对棋盘的影响
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "当前得分：" << "先手 " << name << " " << scr[0] << "分，" << "后手 ZARUMILLA " << scr[1] << "分。" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "当前得分：" << "先手 " << name << " " << scr[0] << "分，" << "后手 ZARUMILLA " << scr[1] << "分。" << endl;
					}
				}
			}
			else
			{
				cout << "ZARUMILLA开始落子" << endl;
				last = nexta = now;
				haha = hashi = flag;
				tmpscr[0] = scr[0];
				tmpscr[1] = scr[1];
				s.x = s.y = 0;
				int ans = dots(0, -INF, INF);
				if (ans >= 0 && s.x != 0 && s.y != 0)
				{
					vis[s.x][s.y] = 1;
					preva = now;
					now += (1 << edg[s.x][s.y]);
					trd[edg[s.x][s.y]] = flag;
					cout << "AI落子位置：" << s.x << " " << s.y << endl;
					int k = panta(preva, now);
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "当前得分：" << "先手 " << name << " " << scr[0] << "分，" << "后手 ZARUMILLA " << scr[1] << "分。" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "当前得分：" << "先手 " << name << " " << scr[0] << "分，" << "后手 ZARUMILLA " << scr[1] << "分。" << endl;
					}
				}
				else
				{
					cout << "AI已认输，游戏结束" << endl;
					return;
				}
			}
		}
		if (scr[0] >= 5)//输赢反馈
		{
			cout << "先手 " << name << " 获胜，比赛结束。" << endl;
		}
		if (scr[1] >= 5)//输赢反馈
		{
			cout << "后手 ZARUMILLA 获胜，比赛结束" << endl;
		}
	}
	if (cmd == 2)
	{
		cout << "当前游戏状态：人机对战   ";
		cout << "先手玩家：" << "ZARUMILLA" << "   " << "后手玩家：" << name << endl;
		cout << "每次输入包括边的端点序号，以空格隔开，要求前小后大" << endl;
		vis[1][2] = 1;
		preva = now;
		now += (1 << edg[1][2]);
		trd[edg[1][2]] = flag;
		flag = 1;
		cout << "AI落子位置：1 2" << endl;
		ShowTri(trd, tra);
		while (jdg())//判断否出现输赢，即一方分数不小于五分，停止下棋，直接输出结果
		{
			if (flag)
			{
				cout << "请先手 " << name << " 输入落子位置：";
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
					int k = panta(preva, now);//判断该步对棋盘的影响
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "当前得分：" << "先手 ZARYMILLA " << scr[0] << "分，" << "后手 " << name << " " << scr[1] << "分。" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "当前得分：" << "先手 ZARYMILLA " << scr[0] << "分，" << "后手 " << name << " " << scr[1] << "分。" << endl;
					}
				}
			}
			else
			{
				cout << "ZARUMILLA开始落子" << endl;
				last = nexta = now;
				haha = hashi = flag;
				tmpscr[0] = scr[0];
				tmpscr[1] = scr[1];
				s.x = s.y = 0;
				int ans = dots(0, -INF, INF);
				if (ans >= 0 && s.x != 0 && s.y != 0)
				{
					vis[s.x][s.y] = 1;
					preva = now;
					now += (1 << edg[s.x][s.y]);
					trd[edg[s.x][s.y]] = flag;
					cout << "AI落子位置：" << s.x << " " << s.y << endl;
					int k = panta(preva, now);
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "当前得分：" << "先手 ZARYMILLA " << scr[0] << "分，" << "后手 " << name << " " << scr[1] << "分。" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "当前得分：" << "先手 ZARYMILLA " << scr[0] << "分，" << "后手 " << name << " " << scr[1] << "分。" << endl;
					}
				}
				else
				{
					cout << "AI已认输，游戏结束" << endl;
					return;
				}
			}
		}
		if (scr[0] >= 5)//输赢反馈
		{
			cout << "先手 ZARUMILLA 获胜，比赛结束。" << endl;
		}
		if (scr[1] >= 5)//输赢反馈
		{
			cout << "后手 " << name << " 获胜，比赛结束" << endl;
		}
	}
}


int dots(int depth, int alpha, int beta)
{
	if (!hashi && tmpscr[0] >= 5)
	{
		return tmpscr[0] - tmpscr[1];
	}
	if (hashi && tmpscr[1] >= 5)
	{
		return tmpscr[1] - tmpscr[0];
	}
	if (depth >= 11)
	{
		if (!haha)
		{
			return tmpscr[0] - tmpscr[1];
		}
		else
		{
			return tmpscr[1] - tmpscr[0];
		}
	}
	int val;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			if (edg[i][j])
			{
				if ((nexta & (1 << edg[i][j])) != (1 << edg[i][j]))
				{
					last = nexta;
					nexta += (1 << edg[i][j]);
					int tmp = AIpanta(last, nexta);
					if (tmp)
					{
						tmpscr[flag] += tmp;
					}
					else
					{
						hashi = !hashi;
					}
					if (tmp)
					{
						val = dots(depth + 1, alpha, beta);
						tmpscr[flag] -= tmp;
					}
					else
					{
						val = -dots(depth + 1, -beta, -alpha);
						hashi = !hashi;
					}
					nexta -= (1 << edg[i][j]);
					if (val >= beta)
					{
						return beta;
					}
					if (val > alpha)
					{
						alpha = val;
						if (depth == 0)
						{
							s.x = i;
							s.y = j;
						}
					}
				}
			}
		}
	}
	return alpha;
}