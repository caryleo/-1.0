#include"Core.h"
#include<iostream>


int panta(int preva, int now)
{
	int countn = 0;
	for (int i = 0; i < 9; i++)
	{
		if ((preva & tri[i]) != tri[i] && (now & tri[i]) == tri[i])//ÅÐ¶ÏÎ»ÆåÅÌ×´Ì¬
		{
			countn++;
			tra[i] = flag;
		}
	}
	return countn;
}