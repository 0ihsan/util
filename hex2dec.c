// TODO: add process multiple lines from stdin
main(c){unsigned long long r=0;
while(read(0,&c,1))r=c>64?r*16+(c%8+9):c>47?r*16+(c-48):r;
printf("%lld\n",r);}
