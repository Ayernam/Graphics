#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int rand_0toN1(int n);
char *g[20][50];
int x=25,y=10, ex, ey;
string input;
int main() {
    cout << "Welcome to the game!  Press the WASD keys and ENTER to move.  Press 0 to exit." << endl;
    system("PAUSE");
    while(1==1){
        system("CLS");
        for(int i=0;i<20;i++){
            for(int j=0;j<50;j++){
                g[i][j]=" ";
                g[y][x]=">";
                cout << g[i][j];
                if(j==49){
                    cout << endl;
                }
            }
        }
        cin >> input;
        if(input=="W" && y>0){
            y-=1;
        }
        if(input=="A" && x>0){
            x-=1;
        }
        if(input=="S" && y<20){
            y+=1;
        }
        if(input=="D" && x<50){
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
