#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int p_hand[5];
int d_hand[5];


int choice() {
    printf("1 for hit, 2 for stand, 3 for end: ");
    int input;
    scanf("%d", &input);
    printf("%d\n", input);
    return input;
}
void rand_hand() {
    p_hand[0] = rand() % (11 + 1) + 1;
    p_hand[1] = rand() % (11 + 1) + 1;
    d_hand[0] = rand() % (11 + 1) + 1;
    d_hand[1] = rand() % (11 + 1) + 1;
    if(d_hand[0]+d_hand[1]);
}
int main() {
    srand(time(NULL));
    char go_on;

    printf("Welcome to SimpleBlackJack!\n"
	"Anytime you can press Ctrl+C to exit.\n"
	"Enjoy! Press Enter to go on......\n");
    do{
		go_on = getchar();
	} while (go_on != '\n');

    rand_hand();
    for (int i = 0; i < 2; i++) {
        printf("%d,", p_hand[i]);
    }
    return 0;
}