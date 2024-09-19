#include <stdio.h>

int main() {
    
    
    for(int i=1; i<=5; i++){
        if(i==1 || i==5){
            printf("*****\n");
        } else {
            printf("*\t*\n");
        }
    }
    
    return 0;
}
