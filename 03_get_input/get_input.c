#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int square_side;
    int perim = 0;
    int area = 0;
    printf("Side length: ");
    scanf("%d", &square_side);
    perim = square_side*4;
    area = square_side*square_side;
    printf("The perimiter is %d and the area is %d.\n", perim, area);
    printf("%d\n", 603/100);
    return 0;
}