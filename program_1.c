#include<stdio.h>
char getGrade(int  mark){
    if(mark>=90)
       return 'A';

    
    else if(mark>=80)
         return 'B';
    
    else if(mark>=70)
        return 'C';
    
    else if(mark>=60)
         return 'D';
    
    else
         return 'F';
}



int main(){
    char name[10];
    int  maths,science,english;
    int  total;

    for(int i = 1; i <= 5; i++){
    printf("Enter details for students %d\n",i);

    printf("Name : ");
    scanf("%s",name);

    printf("Maths marks : ");
    scanf("%d",&maths);

    printf("Science marks : ");
    scanf("%d",&science);

    printf("English marks : ");
    scanf("%d",&english);

    total=maths+science+english;

    printf("---Student Result !---\n");
    printf("Name: %s\n",name);
     printf("Maths Grade: %c\n",getGrade(maths));
     printf("Science Grade: %c\n",getGrade(science));
     printf("English Grade: %c\n",getGrade(english));
      printf("Total marks: %d\n",total);
    }
    return 0;
}
    

    




      

      

      

   
