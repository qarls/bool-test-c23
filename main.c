#include <stdbool.h>
#include <stdio.h>

void putseq(bool a);

void putseq_implicit(int a);

int main(void) {
    putseq(-1 == true); // false
    putseq(0 == true);  // false
    putseq(1 == true);  // true
    putseq(2 == true);  // false

    puts("=Testing false equalities!=");

    putseq(-1 == false); // false
    putseq(0 == false);  // true
    putseq(1 == false);  // false
    putseq(2 == false);  // false

    puts("=Testing implicit conversions!=");

    putseq_implicit(-1); // true
    putseq_implicit(0);  // false
    putseq_implicit(1);  // true
    putseq_implicit(2);  // true
}

void putseq(bool a) {
    if (a) {
        puts("true");
    } else {
        puts("false");
    }
}

void putseq_implicit(int a) {
    if (a) {
        puts("true");
    } else {
        puts("false");
    }
}
