#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main()
{
srand( time(0) );
int apple; 
int pizza;
pizza=rand() % 10 + 1;

cout<<"Write any random number between 1-10"<<endl;
cin>>apple;

if(apple==pizza)
{
cout<<"You were right! You win!"<<endl;
}
else if(apple>pizza)
{
int C63;
C63= apple - pizza;
cout<<"You were off by"<<C63<<" Uh oh! You lose!"<<endl;
}
else if(apple<pizza)
{
int C63;
C63= pizza - apple;
cout<<"You were off by"<<C63<<" Uh oh! You lose!"<<endl;
}

return 0;
}
