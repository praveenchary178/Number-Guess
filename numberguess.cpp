#include<bits/stdc++.h>
using namespace std;
int randgen()
{
    srand(time(0));
     int k=rand()%1000+1;
    cout<<k<<"\n";
    return k;
}
void NumberGuess()  //
{
   // srand(time(0));
    int m= randgen();
    int n;
    while(1)
    {
        cout<<"Please enter a numner to guess:\n";
        cin>>n;
        if(n==m)
        {
            cout<<"Your Guess is correct\n";
            break;
        }
        else cout<<"Your guess is incorrect\nTry again\n";
    }
}
int main()
{
    NumberGuess();
}