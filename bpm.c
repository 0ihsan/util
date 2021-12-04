#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LEN 7

double now() {
	struct timespec n;clock_gettime(CLOCK_REALTIME,&n);
	return n.tv_sec+n.tv_nsec*1e-9;
}

int main(int a, char **v) {
	double prev, delta, bpm, average_bpm, sum;
	double history[LEN] = {0};
	int index=0, i=LEN;

	system("/bin/stty raw");
	fprintf(stderr, "any key to keep tempo. ctrl-c to quit.\033[1E");
	if (getchar()!=3) {
		for(prev=now(); getchar()!=3; prev=now()) { // 3: ctrl-c

			index = (index+1)%LEN;
			delta = now()-prev;
			bpm = 1/(delta/60);
			history[index] = bpm;

			while(i-->=0)sum+=history[i]; // sum(history);

			average_bpm = sum / (double)LEN; sum = 0; i=LEN;

			printf("   last: %5.2f\033[1E"
			       "average: \033[1;m%5.0f\033[0m\033[1E\033[2A",
			bpm, average_bpm);


		};system("/bin/stty cooked");
		printf("\033[1A\033[3E");
	}
	return 0;
}
