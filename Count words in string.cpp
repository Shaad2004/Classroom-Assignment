#include<iostream>
#include<string>
using namespace std;

int main() {
    string z ="Hi My name is shaad";
    int d=1;
    for (int j=0;j<=z.size();j++){
        if (z[j]==' '){
            d++;
        }
    }
    cout<<d;
}
