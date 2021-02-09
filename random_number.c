#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    //srand((unsigned) time(&t));
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        printf("%d\n", rand() % 10);
    }
    return 0;
}
