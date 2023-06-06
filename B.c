#include <stdlib.h>
#include <stdio.h>




int main()
{

    int clock, points = 0, alternator = 0;
    int a3 = 0, b3 = 0;
    int a2 = 0, b2 = 0;
    int a1 = 0, b1 = 0;

    char *player_serving_w_or_l;
    scanf(" %d\n", &points);

    player_serving_w_or_l = (char *)malloc(sizeof(char) * (points + 1));

    fgets(player_serving_w_or_l, points + 1, stdin);

    while (*(player_serving_w_or_l + clock) != '\n')
    {

        if (*(player_serving_w_or_l + clock) == 'W')
        {
            switch (alternator)
            {
            case 0:
                a1++;
                break;

            case 1:
                b1++;
                break;
            }
        }
        else
        {
            switch (alternator)
            {
            case 0:
                a1--;
                break;

            case 1:
                b1--;
                break;
            }
        }
        if( a1 == 5 && b1 ==5 ) {a1 = 4; b1 = 4;}

        if( ((a1 ==6)&&(b1==4))||((a1 ==4)&&(b1==6))){
            if (a1 == 6){ a2++; a1 = 0; b1 = 0;
                if(alternator == 0){ alternator = 1;} else{alternator = 0;}
            }
            else {b2++; b1 = 0; a1 = 0;
                if(alternator == 0){ alternator = 1;} else{alternator = 0;}
            }
        }

    }


    free(player_serving_w_or_l);

    return 0;

}


