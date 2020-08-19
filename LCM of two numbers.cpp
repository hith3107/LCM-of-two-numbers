#include <stdio.h>
int lcm (int a,int b );
int main()
{
     int a,b,x;
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &a, &b);

    if(a> b)
        x= lcm (b, a);
    else
       x= lcm (a, b);
        
    printf("LCM of %d and %d = %d", a, b, x);
    
    return 0;
}
 int lcm (int a, int b)
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}
