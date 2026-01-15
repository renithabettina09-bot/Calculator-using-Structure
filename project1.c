#include<stdio.h>

struct input{
float a,b;
};
struct calculate{
float add,sub,mult,div;
};

int main(){
struct input in;
struct calculate cal;
int choice;
printf("Enter the numbers\n");
scanf("%f %f",&in.a,&in.b);
printf("Menu\n");
printf("1.addition\n");
printf("2.subtracion\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("Enter choice\n");
scanf("%d",&choice);
switch(choice){
case 1:
    cal.add=in.a+in.b;
    printf("Addition of two numbers=%.2f",cal.add);
    break;
case 2:
    cal.sub=in.a-in.b;
    printf("Subtracion of two numbers=%.2f",cal.sub);
    break;
case 3:
    cal.mult=in.a*in.b;
    printf("Multiplication of two numbers=%.2f",cal.mult);
    break;
case 4:
    if(in.b==0){
        printf("Division is not possible");

    }
    else{
            cal.div=in.a/in.b;
        printf("Division of two numbers=%.2f",cal.div);
    }
    break;
    }
    return 0;
}
