/*************************************************************************
> File Name: union_of_2_arrarys.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 23时10分06秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, cahr* argv[]){

    int m, n, i = 0, j = 0;
    cout << "Enter size of both arrays:";
    cin >> m >> n;
    int a[m];
    int b[n];

    cout << "Enter elements of array 1:";
    for(i=0; i < n; i++){
        cin >> a[i];
    }

    cout << "Enter elements of array 2:";
    for(i=0; i < n; i++){
        cin >> b[i];
    }

    int i = 0;
    int j = 0;
    while((i < m) && (j < n)){
        if(a[i] < b[j]){
            cout << a[i++] << " ";
        }
        else if(a[i] > b[j]){
            cout << b[i++] << " ";
        }
        else{
            cout << a[i++];
            j++;
        }
    }

    while(i < m){
        cout << a[i++] << " ";
    }
    while(j < n){
        cout << b[j++] << " ";
    }

    return 0;
}




