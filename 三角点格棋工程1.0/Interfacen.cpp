#include<iostream>
#include<cstdio>
#include<cstring>
#include "Interfacen.h"
using namespace std;

int btlcmd, odrcmd;

int main()
{
	cout << "���ǵ���岩������" << endl;
	cout << "�汾��1.4" << " build 07192" << endl;
	int tag = 1;
	while (tag)
	{
		cout << "--------------------------" << endl;
		cout << "�����벩��ģʽ" << endl;
		cout << "1Ϊ���˶�ս��2Ϊ�˻���ս" << endl;
		cin >> btlcmd;//�����սģʽָ��
		if (btlcmd != 1 && btlcmd != 2)
		{
			cout << "��Ч���룬���������룡" << endl;
			continue;
		}
		if (btlcmd == 2)
		{
			cout << "�����벩��˳��" << endl;
			cout << "1Ϊ���֣�2Ϊ����" << endl;
			cin >> odrcmd;//�����ս˳��ָ��
		}
		battle(btlcmd);
		cout << "--------------------------" << endl;
		cout << "��������һ��ָ��" << endl;
		cout << "1Ϊ���¿�ʼ��0Ϊ�˳�����" << endl;
		cin >> tag;
	}
	return 0;
}

void battle(int battlecmd)
{
	if (battlecmd == 1)
	{
		stpdgm();//ִ�����˶�ս����
	}
	else
	{
		smrtgm(odrcmd);//ִ���˻���ս����
	}
}
