#ifndef SPMAINAUX_H_
#define SPMAINAUX_H_
#include <stdbool.h>
#include <stdio.h>
#include "SPFIARParser.h"
#include "SPFIARGame.h"
#include "SPMiniMax.h"

#define HISTORY_SIZE 20


//put auxiliary functions and constants used by the main function here.

int checkValidInputNum(int num);
int undoMove(SPFiarGame* game);
int difficultyLevel();
void winnerPrint(char winner);
char gamePlay(SPFiarGame* game, int difficulty);
char gameProgress(SPFiarGame* game,int difficulty);
void exceptionPrintAndExit(int functionType);


#endif
