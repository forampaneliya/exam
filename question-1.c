#include <stdio.h>  
void main()  
{ 
    int number1, number2;   
    float answer;
    char op;
    
    
    printf (" Enter the first number:\n ");  
    scanf(" %d", &number1); 
    printf (" Enter the second number:\n ");  
    scanf (" %d", &number2); 
    printf (" Enter the operation to perform(+, -, *, /) \n ");  
    scanf ("%c", &op);
    
    if (op == '+')  
    {  
        answer = number1 + number2; 
        printf (" %d + %d = %f", number1, number2, answer);  
    }  
    
    else if (op == '-')  
    {  
        answer = number1 - number2; 
        printf (" %d - %d = %f", number1, number2, answer);  
    }  
    
    else if (op == '*')  
    {  
        answer = number1 * number2;  
        printf (" %d * %d = %f", number1, number2, answer);  
    }  
    
    else if (op == '/')  
    {  
        if (number2 == 0) 
        {  
            printf (" \n Divisor cannot be zero. Please enter another value ");  
            scanf ("%d", &number2);        
        }  
        answer = number1 / number2; 
        printf (" %d / %d = %.2f", number1, number2, answer);  
    }  
    else  
    {  
        printf(" \n Enter valid operator ");  
    }  
}