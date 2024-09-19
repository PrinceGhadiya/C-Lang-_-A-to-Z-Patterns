#include <stdio.h>
int main() {
    
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            if(j == 1 || (i == 1 && j <= 4) || (i == 3 && j <= 4) || (j == 5 && i <= 3) || (i == j && i >= 3)) { 
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
