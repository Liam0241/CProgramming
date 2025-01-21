#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int years;
    printf("Enter years: ");
    scanf("%d", &years);
    printf("\"%d\" years is \"%d\" minutes.", years, years*525600);
    return 0;
}