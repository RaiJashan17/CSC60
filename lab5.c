/*--------------------------------------------*/
/* Jashan Rai                                 */
/* Lab 5                                      */
/* Figure the area of a parabola using files  */

#include <stdio.h>
#include <stdlib.h>

#define IN_FILE_NAME "lab5.dat"
#define OUT_FILE_NAME "lab5.txt"

int main(void)
{
    double length, depth, area;
    FILE *infile;
    FILE *outfile;
    
    infile=fopen("lab5.dat","r");
    if(infile==NULL){
        printf("Error on opening the input file \n");
        exit(EXIT_FAILURE);
    }
    outfile=fopen("lab5.txt","w");
    if(outfile==NULL){
        printf("Error on opening the output file \n");
        exit(EXIT_FAILURE);
    }

    fprintf(outfile, "\nJashan Rai.  Lab 5. \n\n");
    fprintf(outfile, "Data on Parabolas \n\n");
    fprintf(outfile, " Length      Depth        Area   \n");
    fprintf(outfile, "--------   ---------   --------- \n");
    while((fscanf(infile,"%lf%lf", &length, &depth))==2){
    area=(2*length*depth)/3;
    fprintf(outfile, "%7.2lf %10.2lf %12.3lf %s", length, depth, area,"\n");
    }                           

    fprintf(outfile, "\n\n");


    return EXIT_SUCCESS;
}
/*---------------------------------------------------*/
