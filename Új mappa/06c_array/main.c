#include <stdio.h>
#include <stdlib.h>


/*
 * Create a 2 dimensonal array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */
int main()
{   char chess_array[8][8];

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

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
        printf("%c ", chess_array[i][j] );
        }
        printf("\n");
    }
    // chess table with figures

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
        }

        printf("\n");
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                printf("%c ", chess_array[i][j] );
            }
        printf("\n");
    }

    chess_array[0][1] = ' ';
    chess_array[2][2] = 'K';

    printf("\n");
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%c ", chess_array[i][j] );
        }
        printf("\n");
    }


    return 0;
}

