#include <stdio.h>

void two(){
    printf("two\n");
}

void one_three() {
    printf("one\n");
    two();
    printf("three\n");
}

void main() {
    printf("starting now;\n");
    one_three();
    printf("done!\n");
}