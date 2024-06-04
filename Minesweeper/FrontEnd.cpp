#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "FrontEnd.h"

void print9x9Table(easyBoard board) {
	for (int i = 0; i < 9; i++) {
		printf("===========================\n||");
		for (int j = 0; j < 9; j++) {
			printf("%d||", board.boardInfo[i][j].mineInfo);
		}
		printf("\n");
	}
}