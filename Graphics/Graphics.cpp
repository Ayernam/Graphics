#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int rand_0toN1(int n);
char *g[11][11];
int x=5,y=5;
string input;
int main() {
    cout << "Welcome to the game!  Press the WASD keys and ENTER to move.  Press 0 to exit." << endl;
    system("PAUSE");
    while(1==1){
        system("CLS");
        for(int i=0;i<11;i++){
            for(int j=0;j<11;j++){
                g[i][j]=" ";
                g[y][x]=">";
                cout << g[i][j];
                if(j==10){
                    cout << endl;
                }
            }
        }
        cin >> input;
        if(input=="W"){
            y-=1;
        }
        if(input=="A"){
            x-=1;
        }
        if(input=="S"){
            y+=1;
        }
        if(input=="D"){
            x+=1;
        }
        if(input=="0"){
            break;
        }
    }
    return 0;
}
int rand_0toN1(int n) {
return rand() % n;
}
