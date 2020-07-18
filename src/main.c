/*******************************************************************
*                                                                  *
*     @file         main.c                                         *
*                                                                  *
*     @author       Joel Howell                                    *
*                                                                  *
*     @date         Created Thursday, June 25th, 2020              *
*                                                                  *
*     @brief        A simple tetris game written in C.             *
*                   main.c  controls main game.                    *
*                                                                  *
*     @copyright    Copyright (c) 2020 Joel Howell. All rights     *
*                   reserved. Licensed under the MIT License.      *
*                   See LICENSE for details.                       *
*                                                                  *
*******************************************************************/	

#include <stdlib.h>
#include "tetris.h"

int main(int argc, char *argv[])
{
	//resetBoard();
	startGame();		
	return EXIT_SUCCESS;
}
