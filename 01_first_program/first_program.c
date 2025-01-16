// One-line comment
// This is the first program which prints a welcoming message

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int play = 0;
    int guess = 0;
    int value;
    while(play==0){
        srand(time(0));
        value = rand() % (11);
        int num;
        printf("its %d\n", value);
        printf("Guess a number between 1-10\n");
        scanf("%d", &num);
        guess = num;
        if(guess == value) {
            printf("You got it!");
        }
        else if (guess = 12)
        {
            break;
        }
        else {
            printf("Thats not it! It was %d!\n", value);
        }
    };
    return 0;
}