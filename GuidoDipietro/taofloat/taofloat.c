#include <stdio.h>
#include "taofloat.h"

double not_a_string[] = {
    4.76463375038899322896761195922e-308
};

int main() {

    // Prints the double number
    printf("%lf\n", not_a_string[0]);

    return EXIT_TO_THE_LEFT;

}