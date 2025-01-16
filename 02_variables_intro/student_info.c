#include <stdio.h>

int main() {
    char name[] = "John Doe";
    int c_id = 2271;
    int s_id = 10234;
    int dif = s_id-c_id;
    printf("Name: %s\nCourse ID: %d\nStudent ID: %d\nStudent ID - Course ID is: %d\n", name, c_id, s_id, dif);
    return 0;
}