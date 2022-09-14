#include <stdio.h>

void Piramis(int input);

int main()
{
    int input;
    scanf("%d", &input);
    Piramis(input);
    return 0;
}

void Piramis(int n)
{
    if(n>=1){
        for(int i=n; i>=0; i--){
            int hanyszor=n-i;
            for(int j=0; j<i; j++){
                printf(" ");
                }
            for(int x=0; x<hanyszor; x++){
                printf("X");
                }
            printf("  ");
            for(int x=0; x<hanyszor; x++){
                printf("X");
                }
            printf("\n");
            }
    }
}