/*******************************************************************
*                                                                  *
*     @file         tetris.c                                       *
*                                                                  *
*     @author       Joel Howell                                    *
*                                                                  *
*******************************************************************/	
#include <stdio.h>
#include <stdlib.h>
#include "tetris.h"





void draw(Tetris board)
{
    int i;
    for (i = 0; i < LENGTH; i++)
    {

    }
}


int getIndex(int r, int c)
{
    return --r * COLUMNS + --c;
}

void startGame(void)
{

    int i;
    for (i = 0; i < LENGTH; i++)
        gameBoard[i] = i;
    
    
    draw(gameBoard);
    

  
    
    
   


    // printf("%d", getIndex(4, 2));
}


int rotate(int x, int y, int r)
{
    int i = 0;
    switch (r % 4)
    {
        case 0:
            i = (1;
            break;
        case 1:
            printf("90");
            break;
        case 2:
            printf("180");
            break;
        case 3:
            printf("270");
            break;
        default:
            printf("\nFatal error, unknown rotation.");
            return EXIT_FAILURE;
    }
    return i;
}
