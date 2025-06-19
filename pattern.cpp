//square 

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<=n-1;j++)
    {
        cout<<" *";
    }
    cout<<"\n";
    }
}





//lower left triangle

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<=i;j++)
    {
        cout<<" *";
    }
    cout<<"\n";
    }
}





//lower right triangle

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<(n-1)-i;k++){
            
        cout<<"  ";
    }
    for(int j=0;j<=i;j++)
    {
        cout<<" *";
    }
    cout<<"\n";
    }
}






//upper right triangle
#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++){
            
        cout<<"  ";
        }
    for(int j=0;j<n-i;j++)
    {
        cout<<"* ";
    }
    cout<<"\n";
    }
}

//upper opp triangle




//upper left  triangle

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<=(n-1)-i;k++){
            
        cout<<" *";
    }
    for(int j=0;j<i;j++)
    {
        cout<<"  ";
    }
    cout<<"\n";
    }
}







//triangle