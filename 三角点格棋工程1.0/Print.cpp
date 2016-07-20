#include <iostream>
#include "Print.h"
#include <windows.h>
using namespace std;

int Map[19];
int Tir[9];

void ChingShowColor(int x)//调色
{
	switch (x)
	{
	case 0:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf); break;
	case 1:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE); break;
	case 2:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN); break;
	default:break;
	}
}

void ShowTri(int *Map, int *Tir)//输出图形
{
	int Map_i = 1, Tir_i = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "         01" << endl;//1#
	ChingShowColor(Map[Map_i++] + 1);
	cout << "        /";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▲";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "\\" << endl;//2#
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "      02";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "03" << endl;//3#
	ChingShowColor(Map[Map_i++] + 1);
	cout << "     /";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▲";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "\\";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▼";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "/";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▲";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "\\" << endl;//4#
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "   04";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "05";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "06" << endl;//5#
	ChingShowColor(Map[Map_i++] + 1);
	cout << "  /";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▲";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "\\";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▼";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "/";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▲";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "\\";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▼";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "/";
	ChingShowColor(Tir[Tir_i++] + 1);
	cout << "▲";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "\\" << endl;//6#
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "07";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "08";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "09";
	ChingShowColor(Map[Map_i++] + 1);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "10" << endl;//7#
}
