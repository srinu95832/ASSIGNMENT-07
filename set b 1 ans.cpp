#include <stdio.h>

int main() {
    int i, j;
    int height = 3;
    int width = 5;
    
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 1 && (j == 0 || j == width-1)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}
