#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <cstdlib>
#include <map>
#include <set>
using namespace std;

int main( int argc, char** argv)
{
        map< string,set<string> >Map;
        printf("%s \n %s\n", argv[0],argv[1]);
        float start = clock();
        freopen(argv[1],"r",stdin);
        char url[125];
        char ip[125];
        while(scanf("%s %s",url, ip)!=EOF)
        {
           Map[string(url)].insert(string(ip));
        }
        float end = clock();
        printf("time = %f\n", (end - start) /  CLOCKS_PER_SEC);
        map< string,set<string> >::iterator it;
        int i = 0;
        for(it = Map.begin(), i = 0; i < 10 && it != Map.end() ; i++, it++)
        {
            printf("===========URL: %s - %d unique ip accesses===========\n",
                   it->first.c_str(), it->second.size());
            set<string>::iterator it1 = it->second.begin();
            for(; it1 != it->second.end(); it1++)
            {
                printf("ip %s\n", (*it1).c_str());
            }
        }
        return 0;
}

