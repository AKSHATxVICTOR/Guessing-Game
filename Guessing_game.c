#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    const int MIN=1 , MAX=100;
    int g,gs=0,ans;
    srand(time(0));
    ans=(rand()%MAX)+MIN;
    do{
        printf(" Enter a Guess: ");
        scanf("%d",&g);
        if(g>ans)
        {
            printf("Too High");
        }
        else if (g<ans)
        {
            printf("Too Low");
        }
        else
        {
            printf("Correct Answer");
        }gs=gs+1;
    }while (g!=ans);
    printf("\nNumber of Guesses took : %d" , gs);
    
    
    return 0;
    
}