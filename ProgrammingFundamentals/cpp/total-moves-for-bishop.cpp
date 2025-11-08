#include<iostream.h>

using namespace std;

int totalBishopMoves(int &A, int &B){
    int leftUp = min(A-1,B-1);;
    int rightUp = min(A-1,8-B);
    int leftDown = min(8-A,B-1);
    int rightDown = min(8-A,8-B);
    return leftUp + leftDown + rightDown + rightUp;
}

int main(){
    int a=4,b=4;

    cout<<totalBishopMoves(a,b);
}