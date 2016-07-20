#ifndef AICORE
#define AICORE

extern int sta, stb;
extern int flag;
extern void ini();
extern int vis[19][19];
extern int preva, now;
extern int jdg();
extern int scr[2];
extern int panta(int preva, int now);
extern int trd[19];
extern int tra[9];
void ShowTri(int *trd, int *tra);
extern int edg[12][12];
extern int dots(int depth, int alpha, int beta);
extern int tmpscr[2];
extern int AIpanta(int preva, int now);

#endif // !AICORE
