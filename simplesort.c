#include<stdio.h>
int main(void){


int d[6]={60,40,30,10,20,50};
int i=0,j=0,temp=0;
for(i=0;i<=4;i++){
	for(j=i+1;j<=5;j++){
		if(d[i]>d[j]){
		temp=d[i];
		d[i]=d[j];
		d[j]=temp;
		}
	}
}
for(i=0;i<=5;i++){
printf("%d,",d[i]);
}
return 0;
}
