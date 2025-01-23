#include <stdio.h>

int main() {
    int sec;
    printf("Enter number of seconds: ");
    scanf("%d", &sec);
    printf("%d hours, %d minutes, %d seconds\n", sec/60/60, sec/60%60, sec%60 );
    return 0;
}