#include<bits/stdc++.h>
using namespace std;

int main (){


    int n;
    string  s;
    cout<<"enter string";
    cin>>s;

    n=s.length();

    string str2;
 for (int i=0;i<n-1;i++){

    while(s[i]>=65 && s[i]<=90){


        str2.push_back(s[i]);
        


        cout<<str2<<endl;
        


    }
    i++;



    }







}