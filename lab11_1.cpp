#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
    string G[]={"A","B+","B","C+","C","D+","D","F","W" };
    cout<<"Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int a =rand()%9;
    cout<<"You will get "<<G[a]<<" in this 261102.";
}