#include <stdio.h>

    int main(void)
        {
           int n;

            do {
               	n = printf("Altura: ");
            	scanf("%d", &n);
            }
            while(n<1 || n> 8);

            for(int lin = 0; lin < n; lin= lin + 1)
                {
                   for(int a= n - 1; a>lin; a= a - 1){
                        printf(" ");
                    }
                    for(int h= 0; h < lin; h= h + 1)
        {
            printf("#");
        }
        printf("#\n");
            }
            }
