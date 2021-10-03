#include <stdio.h>
#define takeld(x) scanf("%ld", &x)
#define putld(e) printf("%ld\n", e)
main(){long p,n;takeld(p);while(takeld(n)!=EOF){putld(n-p);p=n;}}
