#include<stdio.h>

void sumDigits(){
    int n, tot=0;

    for(int i=1;i<4;i++){
         printf("Enter value : %d \n ",  i);
         scanf("%d",& n); 
         tot=tot+n;
    }
           printf("sum value is : %d \n",tot);

    }

int main(){
    sumDigits();
    return 0;
}
