#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "BingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand( (unsigned)time(NULL) ); // 랜덤한 수열의 생성  
	
	//1. Opening 
	printf("==========================================\n");
	printf("                BINGO GAME                \n");
	printf("==========================================\n");
	
	printf("\n\n\n");
	printf("==========================================\n");
	printf("     CONGRATULATION! BINGO! YOU WIN!      \n");
	printf("==========================================\n");
	
	//2. Game
	
	bingo_init();
	bingo_inputNum(9);
	bingo_print();
	//bingo_printNum();
	
	//2-1. initializing the bingo board -> while(홀수가 N_BINGO 미만) 
	
	// print bingo board
	// print No. of complited lime
	// select a number 
	// update the board status
	
	//3. ending
	
	
	
	
	return 0;
}
