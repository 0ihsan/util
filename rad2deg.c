#include <stdio.h>
#define t(n) scanf("%lf", &n)
#define d(e) printf("%lf\n", e)
#define p 3.14159265358979323846264338327950288
main(int argc){double f;while(t(f)!=EOF)d(argc>1?f*180.0/p:f*p/180.0);}
