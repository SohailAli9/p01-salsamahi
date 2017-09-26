#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main()
{
srand( time(0) );
int eating; 
int driving;
driving=rand() % 10 + 1;

cout<<"Guess a random number between 1 and 10"<<endl;
cin>>eating;

if(eating==driving)
{
cout<<"You, playing correctly! You win!"<<endl;
}
else if(eating>driving)
{
int C63;
C63= eating - driving;
cout<<"You were off by"<<C63<<" Sorry you lose"<<endl;
}
else if(eating<driving)
{
int C63;
C63= driving - eating;
cout<<"You were off by"<<C63<<" Sorry you lose"<<endl;
}

return 0;
}
