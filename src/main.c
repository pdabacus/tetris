/*******************************************************************
*                                                                  *
*     @file         main.c                                         *
*                                                                  *
*     @author       Joel Howell                                    *
*                                                                  *
*     @date         Created Thursday, June 25th, 2020              *
*                                                                  *
*     @brief        A simple tetris game written in C.             *
*                                                                  *
*     @copyright    Copyright (c) 2020 Joel Howell. All rights     *
*                   reserved. Licensed under the MIT License.      *
*                   See LICENSE for details.                       *
*                                                                  *
*******************************************************************/	

#define VERSION 1.0
#define PROGAM_NAME "Tetris"

#include "tetris.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

#if defined(_WIN32) || defined(_WIN64)
    #define PLATFORM_NAME "WINDOWS"
#elif defined(__linux__)
    #define PLATFORM_NAME "LINUX"
#else
    #define PLATFORM_NAME NULL
#endif

void help(const char *prog, char *argv[]);
void usage(const char *prog);
void version(const char *prog);
const char *getPlatformName();

int main(int argc, char *argv[])
{
	if (getPlatformName() == NULL)
	{
		puts("Unknown platform. ");
		exit(EXIT_FAILURE);
	}

	if (argc == 1)
	{
		puts("NORMAL MODE");
		puts(getPlatformName());
	}
	else
	{
		char opt;
		const char *prog = argv[0];
		
		while ((++argv)[0])
		{
			if (!strstr(argv[0], "-") && !strstr(argv[0], "--"))
			{
				help(prog, argv);
				exit(EXIT_FAILURE);
			}

			if(!strcmp(argv[0], "--help"))
			{
				usage(prog);
				exit(EXIT_SUCCESS);
			}
			
			if(!strcmp(argv[0], "--verbose"))
			{
				puts("VERBOSE LONG");
				continue;
			}

			if(!strcmp(argv[0], "--version"))
			{
				version(prog);
				exit(EXIT_SUCCESS);
			}
		
			while ((opt = *++argv[0]))
			{
				switch(opt)
				{
					case 'h':
						usage(prog);
						exit(EXIT_SUCCESS);
						break;
					case 'w':
						puts("VERBOSE");
						break;
					case 'v':
						version(prog);
						exit(EXIT_SUCCESS);
						break;
					default:
						--argv[0];
						help(prog, argv);
						exit(EXIT_FAILURE);
				}
			}
		}		
	}
	return EXIT_SUCCESS;
}

void help(const char *prog, char *argv[])
{
	printf("%s: unrecognized option -- '%s'\n", prog, argv[0]);
	printf("Try '%s --help' for more information.\n", prog);
}

void usage(const char *prog)
{
	printf("%s - %s Version %.1f\n", prog, PROGAM_NAME, VERSION);
	printf("Usage %s --help\n", prog);
	puts("  -h, --help             Display this help, then exit.");
	puts("  -w, --verbose          Display verbose informations.");
	puts("  -v, --version          Display version information, then exit.\n");
}

void version(const char *prog)
{
	printf("%s - Version %.1f\n", prog, VERSION);
	puts("Copyright (c) 2020 Joel Howell");
	puts("All rights reserved. Licensed under the MIT License.");
	puts("See LICENSE for details.");
}

const char *getPlatformName()
{
	return (PLATFORM_NAME == NULL) ? "UNKNOWN PLATFORM" : PLATFORM_NAME;	
}