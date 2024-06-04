#pragma once
#ifndef Struct_h
#define Struct_h

#define BEGINNER_MINE_TOTAL 10
#define INTERMEDIATE_MINE_TOTAL 40

typedef struct {
	int mineInfo;
	bool isMine;
	bool isDug;
	bool isFlag;
}cell;

typedef struct {
	cell boardInfo[9][9];
	int mineLeft;
	int flagTotal;
	int flagCorrect;
	int flagWrong;
}easyBoard;

typedef struct {
	cell boardInfo[16][16];
	int mineLeft;
	int flagTotal;
	int flagCorrect;
	int flagWrong;
}normalBoard;


#endif