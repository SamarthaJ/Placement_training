/*
Problem: how people having blood group A, AB, O and A can denote blood to A and AB,B can denote to B and AB ,AB can donote to A and B, O can denote to all
*/

#include <stdio.h>
#include <string.h>

int main() {
    char getInput[3];
    scanf("%s", getInput);

    if (strcmp(getInput, "A") == 0) {
        printf("blood to A, AB\n");
    } else if (strcmp(getInput, "B") == 0) {
        printf("blood to B, AB\n");
    } else if (strcmp(getInput, "AB") == 0) {
        printf("blood to A, B\n");
    } else if (strcmp(getInput, "O") == 0) {
        printf("blood to all\n");
    } else {
        printf("invalid input\n");
    }
    
    return 0;
}
