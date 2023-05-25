#include <iostream>

using namespace std;

int d(int number){
    int sum = number;
    
    while(number != 0){
        sum += number%10;
        number = number/10;
    }
    return sum;
    // test

}

int main(int argc, char const *argv[]){
    bool check[10001]={false, };
    // 1부터 1000까지 검사
    for(int i=1;i<10001;i++){
        int n = d(i);
        if(n<10001) check[n]=true; // 셀프넘버는 true
    }
    for(int i=1;i<10001;i++){
        if(!check[i]) cout << i << "\n";
    }
    return 0;
};