#include <stdio.h>

void func(int x){
    if (x>0)
    {
        printf("%d \n",x);
        func(x-1);
        printf("%d \n",x);


    }
    
}

int main()
{
    int x=3;
    func(x);


    return 0;
}
