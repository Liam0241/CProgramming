#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int years;
    printf("Enter years: ");
    scanf("%d", &years);
    int min = years*525600;
    printf("\"%d\" years is \"%d\" minutes.", years, min);
    return 0;
}