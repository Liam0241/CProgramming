#include <stdio.h>

void print_course() {
    printf("You are in COP%d\n", 2271);
}

void draw_circle() {
    printf("  *\n*   *\n * *\n");
    
}

void draw_carrot(int height) {
    for(int i = 0; i < height; i++){
        for(int j = height-1; j > -1; j--){
            if(j!=i){
                printf(" ");
            } else {
                printf("/");
            }
        }
        for(int j = 0; j <height; j++){
            if(j!=i){
                printf(" ");
            } else {
                printf("\\");
            }
        }
        printf("\n");
    }
    //printf("  /\\\n /  \\\n/    \\\n");
}

void draw_line(int length){
    for(int i = length; i > 0; i--){printf("-");};
    printf("\n");
}

void draw_triangle(int height) {
    draw_carrot(height);
    draw_line(height*2);
}

int main() {
    draw_triangle(6);
    return 0;
}
