    #include "stdio.h"
    int     cal(int x)
    {
        if( x == 0 )
        return  0;
        else
        {
            
            return  x + cal(x - 1);
        }
        
    }
    
    int main (void)
    {
        int a = 5;
        int b;
        b = cal(a);
        printf("%d", b);
    }