#define _CRT_SECURE_NO_WARNINGS    
#include <iostream>
#include <windows.h>
#include "defines.h"
using namespace std;

void ChingShowColor(int x)
{
	switch (x)
	{
	case 0:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf); break;
	case RED:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED); break;
	case BLUE:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE); break;
	default:
		break;
	}
}

void ShowTri(int *Map, int *Tir)
{
	int Map_i = 0, Tir_i = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "         01" << endl;//1#
	ChingShowColor(Map[Map_i++]);
	cout << "        /";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¡ø";
	ChingShowColor(Map[Map_i++]);
	cout << "\\" << endl;//2#
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "      02";
	ChingShowColor(Map[Map_i++]);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "03" << endl;//3#
	ChingShowColor(Map[Map_i++]);
	cout << "     /";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¡ø";
	ChingShowColor(Map[Map_i++]);
	cout << "\\";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¨‹";
	ChingShowColor(Map[Map_i++]);
	cout << "/";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¡ø";
	ChingShowColor(Map[Map_i++]);
	cout << "\\" << endl;//4#
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "   04";
	ChingShowColor(Map[Map_i++]);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "05";
	ChingShowColor(Map[Map_i++]);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "06" << endl;//5#
	ChingShowColor(Map[Map_i++]);
	cout << "  /";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¡ø";
	ChingShowColor(Map[Map_i++]);
	cout << "\\";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¨‹";
	ChingShowColor(Map[Map_i++]);
	cout << "/";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¡ø";
	ChingShowColor(Map[Map_i++]);
	cout << "\\";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¨‹";
	ChingShowColor(Map[Map_i++]);
	cout << "/";
	ChingShowColor(Tir[Tir_i++]);
	cout << "¡ø";
	ChingShowColor(Map[Map_i++]);
	cout << "\\" << endl;//6#
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "07";
	ChingShowColor(Map[Map_i++]);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "08";
	ChingShowColor(Map[Map_i++]);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "09";
	ChingShowColor(Map[Map_i++]);
	cout << "----";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xf);
	cout << "10" << endl;//7#
}
