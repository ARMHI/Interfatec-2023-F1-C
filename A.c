
#include <stdlib.h>
#include <stdio.h>

int main ( ){


    char *last_order_books, temp;
    int n_books, counter, *initial_position, *distance_from_initial_position, clock, click, times_book_was_read = 0, max_times_book_was_read;

    scanf (" %d\n", &n_books );
    last_order_books = (char*) malloc ( sizeof( char)* n_books);
    distance_from_initial_position = (int*) malloc ( sizeof(int)* n_books);
    initial_position = (int*) malloc ( sizeof(int)* n_books);


    fgets( last_order_books, n_books +1, stdin );

    //printf ("  ------ %s\n", last_order_books);
    
    for ( clock = 0; clock < n_books; clock ++){

        counter = 0;
        for( click = 0; click < n_books; click++){
            if ( last_order_books[clock] > last_order_books[click] ){counter++;}
        }
    *(initial_position + clock) = counter;
    *(distance_from_initial_position + clock) = initial_position[clock] - clock;

    if ( (*(distance_from_initial_position+clock) > 0) && (*(distance_from_initial_position+clock) > max_times_book_was_read)){

        max_times_book_was_read = *(distance_from_initial_position + clock);

    }


    }
    

    for (click = 0; click < n_books - 1; click++)
    {
    for (clock = 0; clock < n_books - 1; clock++)
    {

            if (*(last_order_books + clock) > *(last_order_books + clock + 1))
            {
                temp = *(last_order_books + clock);
                *(last_order_books + clock) = *(last_order_books + clock + 1);
                *(last_order_books + clock + 1) = temp;
                times_book_was_read++;
            }
    }
    }


    if (max_times_book_was_read > 5){ printf ("A Database Systems student read a book.\n");}
    else{printf("%d\n", times_book_was_read);}

    
    

free (last_order_books);
free (distance_from_initial_position);
free (initial_position);
return 0;

}
