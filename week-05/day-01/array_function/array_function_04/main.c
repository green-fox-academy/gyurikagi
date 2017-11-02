#include <stdio.h>
#include <stdlib.h>

/*
 * Create a representation of a chess board in the form of a two dimensional character array.
 * Each figure should have a character representing it. Empty places should be a single space: ' '.
 *
 * Create a function which sets up the board.
 *
 * Create a function for checking the moves for each of the figurs. They should get coordinates for the figure and where to move it.
 * They should return 0 if the move is acceptable in chess and -1 if not.
 *
 * Create a function which moves figures by getting the initial coordinate and the target coordinate.
 * This should return -1 if the move was not successful and 0 if all is right and if all is right then also move the figure.
 *
 * Determine what kind of arguments You need for the functions. Write them accordingly.
 *
 * For the sake of this exercise it's enough if You write the specific functions for peasants and horse.
 *
 * In the main functions set up the board and try them. Check if they work as intended.
 */

int start_game (char* );

int main()
{   //empty chess table:

    char chess_array[8][8];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if ((i%2 ==0 && j%2 ==0) || (i%2 ==1 && j%2 ==1) )
                chess_array[i][j] = 'X';
            else if (i%2 ==1 && j%2 ==0 )
                chess_array[i][j] = ' ';
            else
                chess_array[i][j] = ' ';
        }
    }
   // print table

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%c ", chess_array[i][j] );
            }
        printf("\n");
    }

    //start game

   /* chess_array[0][0] = chess_array[0][7] = chess_array[7][7] = chess_array[7][0] = 'R';
    chess_array[0][1] =  chess_array[0][6] =  chess_array[7][1] =  chess_array[7][6] = 'K';
    chess_array[0][2] = chess_array[0][5] = chess_array[7][2] = chess_array[7][5] = 'B';
    chess_array[0][3] = chess_array[7][4] = 'Q';
    chess_array[0][4] = chess_array[7][3] = 'I';
    for (int j = 0; j < 8; j++){
        chess_array[1][j] = 'P';
        }
    for (int j = 0; j < 8; j++){
        chess_array[6][j] = 'P';
        }
*/
    start_game (chess_array);
     // print table

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%c ", chess_array[i][j] );
            }
        printf("\n");
    }

    return 0;
}

int *start_game (char *(chess_array)[]) {
    chess_array[0][0] = chess_array[0][7] = chess_array[7][7] = chess_array[7][0] = 'R';
    chess_array[0][1] =  chess_array[0][6] =  chess_array[7][1] =  chess_array[7][6] = 'K';
    chess_array[0][2] = chess_array[0][5] = chess_array[7][2] = chess_array[7][5] = 'B';
    chess_array[0][3] = chess_array[7][4] = 'Q';
    chess_array[0][4] = chess_array[7][3] = 'I';
    for (int j = 0; j < 8; j++){
        chess_array[1][j] = 'P';
        }
    for (int j = 0; j < 8; j++){
        chess_array[6][j] = 'P';
        }return chess_array;
    }

