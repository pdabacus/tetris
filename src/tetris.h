/*******************************************************************
*                                                                  *
*     @file         tetris.h                                       *
*                                                                  *
*     @author       Joel Howell                                    *
*                                                                  *
*******************************************************************/

#ifndef _TETRIS_H_
#define _TETRIS_H_

#define ROWS 16
#define COLUMNS 8

#define NUM_TETROMINOES 7




typedef struct
{
    char **array;
    int row, col;
} Shape;

void startGame();
int getIndex(int r, int c);
void flip();




#endif /* _TETRIS_H_ */
