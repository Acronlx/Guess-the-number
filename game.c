#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; //GENERATES A RANDOM NUMBER B/W 1 AND 100
    //printf("The number is %d", number);
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Please guess the lower number!\n");
        }
        else if(guess<number){
            printf("Please guess the higher number!\n");
        }
        else{
            printf("CONGRATS! You guess the number in %d attempts\n",nguesses);
        }
        nguesses++;
    }
    while(guess!=number);
    return 0;

}