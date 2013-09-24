#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;
int num = 1000000;
int base = 3;
int main()
{
    freopen("input_1","w",stdout);
    for(int i = 0; i < num; i++)
    {
        printf("http://");
        for(int j = 0; j < 5 + rand()%2; j++)
        {
            printf("%c", 'a' + rand()%2);
        }
        printf("\t%03d.%03d.%03d.%03d\t\n", rand() % 2, rand() % 2, rand() % 2, rand() % 2);
    }
    return 0;
}
