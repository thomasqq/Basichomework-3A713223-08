#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int max,time=0;
	
	printf("請輸入一個數字，與1成一個範圍:");
	scanf("%d",&max);
	
	if(max>=2){
		for(int num1=1;num1<=max;num1++){
		time=0;
		if(num1==1){
		
		}
		else{
			for(int num2=2;num2<=num1;num2++){
				if(num1%num2==0){
					time++;
				}
			}
			if(time==1){
				printf("%d ",num1);
			}	
		} 
	}
	}
	else{
		printf("您輸入的是錯誤的數字，無法與1形成一個正確範圍，使輸出質數。");
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
