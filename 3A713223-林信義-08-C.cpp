#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int max,time=0;
	
	printf("�п�J�@�ӼƦr�A�P1���@�ӽd��:");
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
		printf("�z��J���O���~���Ʀr�A�L�k�P1�Φ��@�ӥ��T�d��A�Ͽ�X��ơC");
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
