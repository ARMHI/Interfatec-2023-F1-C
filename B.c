#include <stdlib.h>
#include <stdio.h>




int main()
{

    int clock, points = 0, alternator = 0;
    int p1_set_won = 0, p2_set_won = 0;
    int p1_games_won_this_set = 0, p2_games_won_this_set = 0;
    int p1_points_game = 0, p2_points_game = 0;

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
                p1_points_game++;
                break;

            case 1:
                p2_points_game++;
                break;
            }
        }
        else
        {
            switch (alternator)
            {
            case 0:
                p1_points_game--;
                break;

            case 1:
                p2_points_game--;
                break;
            }
        }
        if( p1_points_game == 5 && p2_points_game ==5 ) {p1_points_game = 4; p2_points_game = 4;}

        if( ((p1_points_game ==6)&&(p2_points_game==4))||((p1_points_game ==4)&&(p2_points_game==6))){
            if (p1_points_game == 6){ p1_games_won_this_set++; p1_points_game = 0; p2_points_game = 0;
                if(alternator == 0){ alternator = 1;} else{alternator = 0;}
            }
            else {p2_games_won_this_set++; p2_points_game = 0; p1_points_game = 0;
                if(alternator == 0){ alternator = 1;} else{alternator = 0;}
            }
        }


