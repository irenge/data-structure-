#include<stdio.h>
void main(){

int array[11];
int i;

for(i=0; i<=11;i++){
if(i<=3) array[i]= i+1;
if(i<=7) array[i]= i+12;
if(i<=11) array[i]= i+32;
}

int count=0;

for(i=0;i<=11;i++){
   count=count + 1;
   printf("%d ",array[i]);
   if(count%4==0) printf("\n");
   
}



}
