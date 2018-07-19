/*************************************************************************
> File Name: secant_method.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 22时15分23秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float eq(float i){
    return (pow(i, 3)-(4*i)-9);   // original equation
}

void main(){
    float a, b, z, c, m, n;
    clrscr();

    for(int i=0; i < 100; i++){
        z = eq(i);

        if(z >= 0){
            b = i;
            a=--i;
            goto START;
        }
    }

    START:

    cout << "\nFirst initial: " << a;
    cout << "\nSecond initial: " << b;
    for(i=0; i < 100; i++){
        float h, d;
        m = eq(a);
        n = eq(b);

        c = ((a*n) - (b*m)) / (n - m);
        a = b;
        b = c;

        z = eq(c);
        if(z > 0 && z < 0.09){    // stoping criteria
            goto END;  
        }
    }

    END:
    cout << "\n\nRoot: " << c;
    getch();
}



