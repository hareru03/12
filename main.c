#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "BingoBoard.h"

#define BINGO_RES_UNFINISHED -1
#define BINGO_RES_FINISHED 0

int check_gameEnd(void) {
	int res = BINGO_RES_UNFINISHED;
	if(bingo_countCompletedLine() >= N_LINE)
		res = BINGO_RES_FINISHED;
		
	return res;
	
} 

int get_number(void) {
	
	int selNum=0;
	
	do {
		printf("select a number : ");
		scanf("%d",&selNum);
		fflush(stdin);
		
		if(selNum<1 || selNum>N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT) {
			printf("%i is not on the board! select other one. \n",selNum);
		}
		
	} while(selNum<1 || selNum>N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT);
	
	return selNum;
}


int main(int argc, char *argv[]) {
	
	srand( (unsigned)time(NULL) ); // 랜덤한 수열의 생성  
	
	//1. Opening 
	printf("==========================================\n");
	printf("                BINGO GAME                \n");
	printf("==========================================\n");
	
	int selNum;

	bingo_init();
	
	while(check_gameEnd() == BINGO_RES_UNFINISHED) {
		
		bingo_print();
		selNum=get_number();
		bingo_inputNum(selNum);
		printf("No. of completed line : %i\n", bingo_countCompletedLine());
	}
		

	printf("\n\n\n");
	printf("==========================================\n");
	printf("     CONGRATULATION! BINGO! YOU WIN!      \n");
	printf("==========================================\n");
	
	
	//2-1. initializing the bingo board -> while(홀수가 N_BINGO 미만) 
	
	// print bingo board
	// print No. of complited lime
	// select a number 
	// update the board status
	
	//3. ending
	
	
	
	
	return 0;
}
