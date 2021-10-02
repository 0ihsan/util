#include <stdio.h>
#define takeld(n) scanf("%ld", &n)
#define putld(e) printf("%ld\n", e)
int main(){long p,n;takeld(p);while(takeld(n)!=EOF){putld(n-p);p=n;}return 0;}
