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

#define LENGTH ROWS * COLUMNS


#define NUM_TETROMINOES 7




typedef struct
{
    char **array;
    int row, col;
} Shape;


typedef int Tetris[LENGTH];
Tetris gameBoard;

void startGame();
int rotate(int x, int y, int r);
int getIndex(int r, int c);
void flip();
void draw(Tetris board);



#endif /* _TETRIS_H_ */
