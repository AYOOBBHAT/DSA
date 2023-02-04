#include<bits/stdc++.h>
using namespace std;
class vector{

int *arr;
int cs;
int ms;

public:


vector(){

    cs=0;
    ms=1;

    arr=new int [ms];




}


void push_back(int d){

    int *oldarr=arr;
    ms=2*ms;
    arr= new int [ms];

    for(int i=0;i<cs;i++){

        arr[i]=oldarr[i];

    }


    arr[cs]=d;
    cs++;


}


}
;


int main(){





}