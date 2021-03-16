#include <stdio.h>
#include <string.h>


int main()
{

    int personCount;
    printf("How many people are going to eat?: ");
    scanf("%d", &personCount);
    char menu[6][10] = {"1-Kebap","2-Burger","3-Pasta","4-Lahmacun","5-Salad","6-Others"};
    int firstRound[6] = {0,0,0,0,0,0};
    
    //0 kebap 1 burger 2 pasta 3 lahmacun 4 salad 5 other
    for (int i = 1; i <= personCount; ++i)
    {
        int o1;
        int point=5;
        printf("Person %d\nWhat do you want to order? (from most to least)\n" "1-Kebab, 2-Burger, 3-Pasta, 4-Lahmacun, 5-Salad, 6-Others\nEnter your preference like this('1 2 3 4 5 6')\n",i);
        for(int j=0;j<6;j++){
            scanf("%d",&o1);
            if(o1-1 ==0) {
                firstRound[0] += point;
            }
            if (o1-1 == 1)
            {
                firstRound[1] += point;
            }
            if (o1-1 == 2)
            {
                firstRound[2] += point;
            }

            if (o1-1 == 3)
            {
                firstRound[3] += point;
            }

            if (o1-1 == 4)
            {
                firstRound[4] += point;
            }

            if (o1-1 == 5)
            {
                firstRound[5] += point;
            }
            point--;
        
        }
    }
    int counter = 0;
    int treshold = 7;
    for(int k=0;k<6;k++){
        if(firstRound[k]>treshold){
            counter++;
        }
    }
    if(counter == 0) {
        printf("You are eating at dorm today.");
        return 1;
    }
    int secondRound[6] = {0,0,0,0,0,0};
    for(int k=0;k<6;k++){
        if(firstRound[k]>treshold){
            secondRound[k] = 1;
        }
    }
    int howmanytimes =0;
    printf("First Round is over now you can only choose from this list.\n");
    for(int k=0;k<6;k++){
        if(secondRound[k]==1){
            printf("%s \n",menu[k]);
            howmanytimes++;
        }
    }
    int finalRound[6] = {0,0,0,0,0,0};
    for (int i = 1; i <= personCount; ++i)
    {
        int o1;
        int point=5;
        printf("Person %d\nEnter your preference:\n",i);
        for(int j=0;j<howmanytimes;j++){
            scanf("%d",&o1);
            if(o1-1 ==0) {
                finalRound[0] += point;
            }
            if (o1-1 == 1)
            {
                finalRound[1] += point;
            }
            if (o1-1 == 2)
            {
                finalRound[2] += point;
            }

            if (o1-1 == 3)
            {
                finalRound[3] += point;
            }

            if (o1-1 == 4)
            {
                finalRound[4] += point;
            }

            if (o1-1 == 5)
            {
                finalRound[5] += point;
            }
            point--;
        }
    }
    
    int k = 0;
    int max = finalRound[k];
    int x;
    for (x = 0; x < 6; ++x)
    {
        if (finalRound[x] > max)
        {
            max = (int)finalRound[x];
            k = x;
        }
    }
    printf("You are eating %s today.",menu[k]);


    return 0;
}
