#include <stdio.h>

int main()
{
    int a[6]={1,1,3,3,3,5};    // ques- find the most occurring element in an array.
    int i,count,digit,max=0;

    for(i=0;i<6;i++){

        count=0;
        for(int j=0 ;j<6;j++){

            if(a[i]==a[j])
            {
                count++;
            }
            //printf("%d occurs %d times\n",a[i],count);
        }
        
        if(count>max){
            max=count;
            digit=a[i];
        }
    }
        printf("%d occurs the most %d times\n",digit,max);
    
    return 0;
}
