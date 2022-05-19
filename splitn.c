#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int x,char** v){if(x>1){

	char l[16384];int n=atoi(v[1]);
	while((fgets(l,16384,stdin))!=NULL){
		strtok(l,"\n");
		for(x=0;x<strlen(l)/n+1;x++) printf("%.*s\t",n,&l[x*n]);
		putchar(10);
		fflush(stdout);
	}
	return 0;

}else{fprintf(stderr,"split \033[31m<number>\033[0m\n");return 1;}}
