//
//  main.cpp
//  UVA-10055-Hashmat the Brave Warrior
//
//  Created by Tina Tsai on 2017/12/6.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//
/*
 Sample Input
 10 12
 10 14
 100 200
 Sample Output
 2
 4
 100
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(){
    long long n1,n2,r;
    while(scanf("%lld%lld",&n1,&n2)!=EOF){
         r = abs(n1-n2);
        printf("%lld\n",r);
    }
    return 0 ;
}
