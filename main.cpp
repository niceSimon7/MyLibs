#include <iostream>
#include "WallSec.h"
#include "Range.h"

using namespace std;

int main()
{
    double fStart, fFinish, fDuring1, fDuring2;
    fStart = getWallSec();
    ///////////////////////////////////
    for(auto i : Range(0,10000000))
        cout << i <<" ";
    ///////////////////////////////////
    fFinish = getWallSec();
    fDuring1 = fFinish - fStart;


    fStart = getWallSec();
    ///////////////////////////////////
    for(int i =0; i < 10000000; i++)
        cout << i <<" ";
    ///////////////////////////////////
    fFinish = getWallSec();
    fDuring2 = fFinish - fStart;

    cout <<"Range:"<<fDuring1 << endl;
    cout <<"For:"<<fDuring2 << endl;
    return 0;
}
