#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int  a,b;

    while( scanf("%d %d",&a,&b) == 2 )
    {
        printf("%d\n",(( a * b ) - 1));
    }
}
