#ifndef Core
#define Core

extern int sta, stb;
extern int preva, now;
extern void ini();
extern int edg[12][12];
extern int tri[9];
extern int jdg();
extern int scr[2];
extern int panta(int preva, int now);
extern int flag;
extern int trd[19];
extern int tra[9];
void ShowTri(int *trd, int *tra);

#endif // !Core