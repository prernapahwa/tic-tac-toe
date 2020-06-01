#include<stdio.h>
int logic(int ch[0]) {
	if(ch[0]==ch[1]&&ch[1]==ch[2]) {
		return ch[0];
	}
	if(ch[0]==ch[4]&&ch[4]==ch[8]) {
		return ch[0];
	}
	if(ch[0]==ch[3]&&ch[3]==ch[6]) {
		return ch[0];
	}
	if(ch[1]==ch[4]&&ch[4]==ch[7]) {
		return ch[1];
	}
	if(ch[2]==ch[5]&&ch[5]==ch[8]) {
		return ch[2];
	}
	if(ch[3]==ch[4]&&ch[4]==ch[5]) {
		return ch[3];
	}
	if(ch[6]==ch[7]&&ch[7]==ch[8]) {
		return ch[6];
	}
	return 0;
}
int main() {
	printf("_1_|_2_|_3_\n_4_|_5_|_6_\n 7 | 8 | 9 ");
	printf("\n\nrefer the above image to see the position you want to fill\n\n");
	int pos[9];
	int ch[9];
	int i;
	for(i=0;i<6;i++) {
		ch[i]=95;
		pos[i]=0;
	}
	for(i=6;i<9;i++) {
		ch[i]=32;
		pos[i]=0;
	}
	int n=9;
	int p;
	while(n--) {
		printf("PLAYER %d\n\n",(n%2)+1);
		
		printf("Enter the poition you want to fill : ");
		scanf("%d",&p);
		if(pos[p-1]==0) {
			if((n%2)==0) {
				ch[p-1]=0;
			}
			else {
				ch[p-1]=1;
			}
			pos[p-1]=1;
			
			if(ch[p-1]==0) {
				ch[p-1]=48;
			}
			if(ch[p-1]==1) {
				ch[p-1]=49;
			}
			printf("_%c_|_%c_|_%c_\n_%c_|_%c_|_%c_\n %c | %c | %c \n\n",ch[0],ch[1],ch[2],ch[3],ch[4],ch[5],ch[6],ch[7],ch[8]);
		}
		else {
			printf("\n\nERROR  :  Already Filled\n\n");
			n++;
		}
		if(n<4) {
			int r=logic(&ch[0]);
			if(r!=0) {
				printf("Player %c wins",r+1);
				return 0;
			}
			
		}
		if(n==0) {
			printf("DRAW");
			return 0;
		}
	}
}
