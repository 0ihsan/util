/* usage: echo ff | rev | ./hex2dec | sum-numbers */
#include <stdio.h>
main(c){int k=1,n=0;read(0,&c,1);do{c>64?
printf("+%d",(c%8+9)*k):c>47?printf("+%d",(c-48)*k):0;k=16<<4*n++;}
while(read(0,&c,1));printf("\n");}
