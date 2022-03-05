#include <bits/stdc++.h>
using namespace std;
int armstrong(int a){
    int count=0;
    int temp=a;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp=a;
    int sum=0;
    while(temp>0){
        sum += pow((temp%10),count);
        temp/=10;
    }
    return sum==a;

}
int main(){
    int in=135;
    int ans= armstrong(in);

    if(ans==1){
        printf("Armstrong number");
    }
    else{
        printf("Not Armstrong number");

    }
    return 0;
}
