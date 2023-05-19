/*-------------------------------------------------------------------*/
/* Jashan Rai                                                         */ 
/* Ruthann Biel                                                      */
/* get_stats_me is a function to do figure the best throw for each   */
/* thrower, compute the all-over average of the best throws, and     */
/* find the longest throw  on the track and each thrower's deviation */
/* from the winning throw                                            */

#include "lab8.h"

void get_stats(thrower_t throw_list[NCOMPETITORS], /* in & out */
               stats_t *throw_stats)      	   /* output   */
{ 
    throw_stats->average_of_best_throws=0;
    throw_stats->winning_throw=0;
    int c;
    for(c=0; c<NCOMPETITORS; c++){
        throw_list[c].best_throw=throw_list[c].tries[0];
        int r;
        for(r=0; r<N_TRIES; r++){
            if(throw_list[c].tries[r]>throw_list[c].best_throw){
                throw_list[c].best_throw=throw_list[c].tries[r];
            }
        }
        throw_stats->average_of_best_throws+=throw_list[c].best_throw;
        if(throw_list[c].best_throw>throw_stats->winning_throw){
            throw_stats->winning_throw=throw_list[c].best_throw;
    }
    }
    throw_stats->average_of_best_throws/=NCOMPETITORS;
    for(c=0; c<NCOMPETITORS;c++){
        throw_list[c].deviation=throw_stats->winning_throw-throw_list[c].best_throw;
    }

}

/*--------------------------------------------------------*/
