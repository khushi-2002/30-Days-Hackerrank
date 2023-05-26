#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    while(t--){
     string input;
     string even;
     string odd;

     for(int i=0;i<input.length();i++){
        if(i%2==0){
            // even+=input[i];
            even.push_back(input[i]);
     }
     else{
        // odd+=input[i];
        odd.push_back(input[i]);
        odd
     }
    }
    cout<<even+ " "+ odd;
    cout<<endl;
}