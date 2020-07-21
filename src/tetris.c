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






int getIndex(int r, int c)
{
    return --r * COLUMNS + --c;
}

void startGame(void)
{

    
    

  
    
    
   


    // printf("%d", getIndex(4, 2));
}


// int rotate(int x, int y, int r)
// {
//     int i = 0;
//     switch (r % 4)
//     {
//         case 0:
//             printf("90");
//             break;
//         case 1:
//             printf("90");
//             break;
//         case 2:
//             printf("180");
//             break;
//         case 3:
//             printf("270");
//             break;
//         default:
//             printf("\nFatal error, unknown rotation.");
//             return EXIT_FAILURE;
//     }
//     return i;
// }
