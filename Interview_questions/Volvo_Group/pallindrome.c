#include<stdio.h>

int main()
{
    int pallindrome = 121;
    int buff ,count = 0;
    buff = pallindrome;
    int tens = 1; 
    while(buff!=0)
    {
        buff = buff/10;
        count++;
        tens = 10*tens;
    }
    printf("%d \n",count);
    /*
    // this is optimized , added in above while loop 
    int tens = 1;
    for(int i = 0 ; i<(count-1);i++)
    {
        tens = 10*tens;
    }*/
    printf("%d \n",tens);
    int reversed = 0;
    buff = pallindrome;
    for(int i = 0 ; i<count;i++)
    {
        reversed = reversed+(buff%10)*(tens); //main
        tens = tens/10;
        buff = buff/10;
    }

    printf("%d \n",reversed);
    


    if(reversed == pallindrome)
    {
        printf("is pallindrome \n");
    }
    else
    {
        printf("not a pallindrome \n");
    }
    return 0 ;
}





