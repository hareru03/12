#include "BingoBoard.h" // BingoBoard.h에서 사용한 것들을 다른 page에서도 사용하기 위함  
#include <stdio.h>

#define BINGONUM_HOLE -1

static int BingoBoard[N_SIZE][N_SIZE]; // 모든 함수에서 사용하기 위해 전역변수로 선언  
static int numberStatus[N_SIZE*N_SIZE];

void bingo_init(void) {
	
	int i,j;
	int cnt=1;
	
	
	for(i=0;i<N_SIZE;i++) {
		for(j=0;j<N_SIZE;j++) {
			
			if(cnt==15) {
				BingoBoard[i][j] = BINGONUM_HOLE;
				numberStatus[cnt-1] = BINGONUM_HOLE;
				cnt++;
			}
			else {
				numberStatus[cnt-1] = i*N_SIZE+j;
				BingoBoard[i][j]=cnt++;
				
			}
			
		}
	}	
	
}


void bingo_print(void) 
{	
	int i,j;
	  
	printf("================================\n");
	
	for(i=0;i<N_SIZE;i++) {
		for(j=0;j<N_SIZE;j++) {
			
			if(BingoBoard[i][j] == BINGONUM_HOLE)
				printf("X\t");
			else
				printf("%i\t",BingoBoard[i][j]);
			
		}
		printf("\n");
	}
	printf("================================\n\n");
}

void bingo_inputNum(int sel) {
	
	int i,j;
	i=numberStatus[sel-1]/N_SIZE;
	j=numberStatus[sel-1]%N_SIZE;
	BingoBoard[i][j] = BINGONUM_HOLE;
}

/* int bingo_countCompletedLine(void) {



}
*/
