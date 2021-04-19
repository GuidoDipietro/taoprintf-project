#include <math.h>
#include <stdio.h>

int main() {
	for (double i = 0; i < 5; i++) {
		printf("%c",(int)round(1.125*i*i*i*i-12.917*i*i*i+47.375*i*i-54.583*i+116));
	}
	return 0;
}