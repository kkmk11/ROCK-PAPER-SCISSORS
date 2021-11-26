//NOTE : THIS IS A C PROGRAM.NOT A CPP PROGRAM.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void clear(char enter);
int main()
{
	char enter,str[40];
	printf("\n\n\n\n\t\t\t\t********* ROCK ! PAPER !! SCISSORS !!! *********");
	clear(enter);
	printf("\n\t\t\t\t\tNOTE:PLEASE TURN ON CAPS LOCK\n\n");
	clear(enter);
	system("cls");
	printf("\nEnter your name :");	
	gets(str);
	printf("Hi %s",str);
	clear(enter);
	printf("PLAYER 1 = %s\n",str);
	printf("PLAYER 2 = COMPUTER\n\n");
	printf("INSTRUCTIONS:\n");
	printf("1)In ROCK-PAPER-SCISSORS, two players will each randomly choose one of the three:\n");
	printf(" a)R-ROCK\n b)P-PAPER\n c)S-SCISSORS\n");
	printf("2)Here are the rules that determine the winner:\n");
	printf(" a)Rock wins over scissors (because rock smashes scissors)\n");
	printf(" b)Scissors wins over paper (because scissors cut paper)\n");
	printf(" c)Paper wins over rock (because paper covers rock)\n");
	printf("\n\nNOTE: The one who wins more among the all 5 attempts will be the winner.\n");
	clear(enter);
	printf("\n\n\n\n\t\t\t\t\t\tALL THE BEST!\n\n\n\n");
	clear(enter);
	jump:
	{
		int number,no_of_games=1;
		char you,com;
		int a=1,b=1,i,p=5;
		do{
			printf("\nChoose among R/P/S :      ");
			for(i=p;i>=1;i--){
				printf(" %c ",3);
			}
			printf("\n%s = ",str);
			scanf(" %c",&you);
			srand(time(0));
			number=rand()%3+1;
			if(number==1){
				com = 'R';	
			}
			if(number==2){
				com = 'P';
			}	
			if(number==3){
				com = 'S';
			}
			printf("computer = %c\n",com);
			if((((you=='R') || (you=='r')) && com=='R') || (((you=='P') || (you=='p'))  && com=='P') || (((you=='S') || (you=='s')) && com=='S')){
			printf("-----TIE-----\n");
			}
			if((((you=='R') || (you=='r')) && com=='P') || (((you=='P') || (you=='p')) && com=='S') || (((you=='S') || (you=='s')) && com=='R')){
			printf("-----LOST-----\n");
			a++;
			}
			if((((you=='R') || (you=='r')) && com=='S') || (((you=='P') || (you=='p')) && com=='R') || (((you=='S') || (you=='s')) && com=='P')){
			printf("-----WON-----\n");
			b++;
			}
			no_of_games++;
			p--;
		}while(no_of_games<=5);
		if(a>b){
			printf("\n\n\t\t\t\t-----------------------------\n");
			printf("\t\t\t\t| FINAL REPORT : YOU LOST ! |\n");
			printf("\t\t\t\t-----------------------------\n\n");
		}
		else if(b>a){ 	
			printf("\n\n\t\t\t\t----------------------------\n");
			printf("\t\t\t\t| FINAL REPORT : YOU WON ! |\n");
			printf("\t\t\t\t----------------------------\n\n");
		}  
		else{
			printf("\n\n\t\t\t\t--------------------------------\n");
			printf("\t\t\t\t| FINAL REPORT : IT'S A DRAW ! |\n");
			printf("\t\t\t\t--------------------------------\n\n");
		}     
	}
	printf("\n\n\t\t\t      Do you want to play again (Y/N):");
	char c;
	scanf(" %c",&c);
	if((c=='Y') || (c=='y')){
		system("cls");
		goto jump;
	}
	else{
		system("cls");
		printf("\n\n\n\n\t\t\t\t----------! THANK YOU !----------\n\n\n\n");
	}
	return 0;
}
void clear(char enter)
{
	printf("\n\n\n\n\t\t\t\t\t   Press ENTER to continue");
	scanf("%c",&enter);
	system("cls");
}
