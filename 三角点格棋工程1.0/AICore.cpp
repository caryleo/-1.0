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
	cout << "������������ƣ�";
	cin >> name;
	scr[0] = scr[1] = 0;
	if (cmd == 1)
	{
		cout << "��ǰ��Ϸ״̬���˻���ս   ";
		cout << "������ң�" << name << "   " << "������ң�" << "ZARUMILLA" << endl;
		cout << "ÿ����������ߵĶ˵���ţ��Կո������Ҫ��ǰС���" << endl;
		while (jdg())//�жϷ������Ӯ����һ��������С����֣�ֹͣ���壬ֱ��������
		{
			if (!flag)
			{
				cout << "������ " << name << " ��������λ�ã�";
				scanf("%d %d", &sta, &stb);//��������λ��
				if (sta >= stb || !edg[sta][stb])//������Ч���ж�
				{
					cout << "��Ч���룬���������룡" << endl;
					cout << "ÿ����������ߵĶ˵���ţ��Կո������Ҫ��ǰС���" << endl;
					continue;
				}
				else if (vis[sta][stb])
				{
					cout << "��Ч���룬���������룡" << endl;
					cout << "ÿ����������ߵĶ˵���ţ��Կո������Ҫ��ǰС���" << endl;
					continue;
				}
				else
				{
					vis[sta][stb] = 1;
					preva = now;
					now += (1 << edg[sta][stb]);
					trd[edg[sta][stb]] = flag;
					int k = panta(preva, now);//�жϸò������̵�Ӱ��
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "��ǰ�÷֣�" << "���� " << name << " " << scr[0] << "�֣�" << "���� ZARUMILLA " << scr[1] << "�֡�" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "��ǰ�÷֣�" << "���� " << name << " " << scr[0] << "�֣�" << "���� ZARUMILLA " << scr[1] << "�֡�" << endl;
					}
				}
			}
			else
			{
				cout << "ZARUMILLA��ʼ����" << endl;
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
					cout << "AI����λ�ã�" << s.x << " " << s.y << endl;
					int k = panta(preva, now);
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "��ǰ�÷֣�" << "���� " << name << " " << scr[0] << "�֣�" << "���� ZARUMILLA " << scr[1] << "�֡�" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "��ǰ�÷֣�" << "���� " << name << " " << scr[0] << "�֣�" << "���� ZARUMILLA " << scr[1] << "�֡�" << endl;
					}
				}
				else
				{
					cout << "AI�����䣬��Ϸ����" << endl;
					return;
				}
			}
		}
		if (scr[0] >= 5)//��Ӯ����
		{
			cout << "���� " << name << " ��ʤ������������" << endl;
		}
		if (scr[1] >= 5)//��Ӯ����
		{
			cout << "���� ZARUMILLA ��ʤ����������" << endl;
		}
	}
	if (cmd == 2)
	{
		cout << "��ǰ��Ϸ״̬���˻���ս   ";
		cout << "������ң�" << "ZARUMILLA" << "   " << "������ң�" << name << endl;
		cout << "ÿ����������ߵĶ˵���ţ��Կո������Ҫ��ǰС���" << endl;
		vis[1][2] = 1;
		preva = now;
		now += (1 << edg[1][2]);
		trd[edg[1][2]] = flag;
		flag = 1;
		cout << "AI����λ�ã�1 2" << endl;
		ShowTri(trd, tra);
		while (jdg())//�жϷ������Ӯ����һ��������С����֣�ֹͣ���壬ֱ��������
		{
			if (flag)
			{
				cout << "������ " << name << " ��������λ�ã�";
				scanf("%d %d", &sta, &stb);//��������λ��
				if (sta >= stb || !edg[sta][stb])//������Ч���ж�
				{
					cout << "��Ч���룬���������룡" << endl;
					cout << "ÿ����������ߵĶ˵���ţ��Կո������Ҫ��ǰС���" << endl;
					continue;
				}
				else if (vis[sta][stb])
				{
					cout << "��Ч���룬���������룡" << endl;
					cout << "ÿ����������ߵĶ˵���ţ��Կո������Ҫ��ǰС���" << endl;
					continue;
				}
				else
				{
					vis[sta][stb] = 1;
					preva = now;
					now += (1 << edg[sta][stb]);
					trd[edg[sta][stb]] = flag;
					int k = panta(preva, now);//�жϸò������̵�Ӱ��
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "��ǰ�÷֣�" << "���� ZARYMILLA " << scr[0] << "�֣�" << "���� " << name << " " << scr[1] << "�֡�" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "��ǰ�÷֣�" << "���� ZARYMILLA " << scr[0] << "�֣�" << "���� " << name << " " << scr[1] << "�֡�" << endl;
					}
				}
			}
			else
			{
				cout << "ZARUMILLA��ʼ����" << endl;
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
					cout << "AI����λ�ã�" << s.x << " " << s.y << endl;
					int k = panta(preva, now);
					if (k)
					{
						ShowTri(trd, tra);
						scr[flag] += k;
						cout << "��ǰ�÷֣�" << "���� ZARYMILLA " << scr[0] << "�֣�" << "���� " << name << " " << scr[1] << "�֡�" << endl;
					}
					else
					{
						ShowTri(trd, tra);
						flag = !flag;
						cout << "��ǰ�÷֣�" << "���� ZARYMILLA " << scr[0] << "�֣�" << "���� " << name << " " << scr[1] << "�֡�" << endl;
					}
				}
				else
				{
					cout << "AI�����䣬��Ϸ����" << endl;
					return;
				}
			}
		}
		if (scr[0] >= 5)//��Ӯ����
		{
			cout << "���� ZARUMILLA ��ʤ������������" << endl;
		}
		if (scr[1] >= 5)//��Ӯ����
		{
			cout << "���� " << name << " ��ʤ����������" << endl;
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