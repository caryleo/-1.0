#include"Core.h"

int AIpanta(int preva, int now)
{
	int countn = 0;
	for (int i = 0; i < 9; i++)
	{
		if ((preva & tri[i]) != tri[i] && (now & tri[i]) == tri[i])//ÅÐ¶ÏÎ»ÆåÅÌ×´Ì¬
		{
			countn++;
		}
	}
	return countn;
}