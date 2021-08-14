/*#include<stdio.h>
int main(){
int x;
int y;
int a;
int b;
int c;
int d;
printf("Enter number = ");
scanf("%d", &x );
scanf("%d" ,&y);
a = x+y ,
b = x-y ,
c = x*y ,
d = x/y ;
printf("%d ",a);
printf("%d ",b);
printf("%d ",c);
printf("%d ",d);


return 0;
}*/

  
#include<stdio.h>
int main()
{
    char num;
    float input;
    float result=0;
       printf("Enter number : ");
    while(1)
    {
        scanf(" %c %f", &num, &input );
          
        if(num == 'q')
        {
            break;
        }
          
        switch(num)
        {
            case '+':
                result += input;
                break;
            case '-':
                result -= input;
                break;
            case '*':
                result *= input;
                break;
            case '/':
                result /= input;
                break;
        }
        printf(" Result is %.2f\n", result);    
    }
      
    return 0;
}