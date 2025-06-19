/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int w1l,w2b,p1l,p2b,p3l,p4b,wa,pt;
    cin>>w1l>>w2b>>p1l>>p2b>>p3l>>p4b;
    wa=w1l*w2b;
    pt=(p1l*p2b)+(p3l*p4b);
    if(wa>pt)
    {
        cout<<"Raj can fix both painting";
    }
else{
    cout<<"Raj cannot fix both painting";
    return 0;
}
}