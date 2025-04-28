#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
class game
{
    string nm;int arr[5],arr1[5],c=0;
    public:
    game(string n)
    {
        nm=n;
    }
    void score(int a,int b)
    {
        arr[c]=a;arr1[c]=b;int i=0;
        cout<<"\t\t -------Scoreboard-------"<<endl;
        cout<<"\t\t "<<nm<<"\t\t "<<"Bot"<<endl;
        for(int i=0;i<=c;i++)
        {
            cout<<"\t\t "<<arr[i]<<"\t\t "<<arr1[i]<<endl;
        }
        c++;
    }
    void win()
    {
        int sum=0,sum1=0;
        for(int i=0;i<5;i++)
        {
            sum+=arr[i];
            sum1+=arr1[i];
        }
        if(sum>sum1)
        cout<<nm<<" is the winner!!"<<endl;
        else if(sum<sum1)
        cout<<"You loose sad :("<<endl;
        else
        cout<<"Its a draw!! :/"<<endl;
    }
};
int main()
{
    srand(time(0));
    string nm;char ch;int pt=0,bt;
    cout<<"Enter your name : ";
    cin>>nm;
    game ob(nm);
    while(pt<5)
    {
        cout<<"Enter R/r for rock"<<endl<<"Enter P/p for paper"<<endl<<"Enter S/s for scissor"<<endl;
        cin>>ch;
        bt=rand()%3;
        pt++;
        switch(ch)
        {
            case 'R':
            case 'r':if(bt==0)
                   ob.score(0,0);
                   else if(bt==1)
                   ob.score(0,1);
                   else
                   ob.score(1,0);
                   break;
            case 'P':
            case 'p':if(bt==1)
                   ob.score(0,0);
                   else if(bt==0)
                   ob.score(1,0);
                   else
                   ob.score(0,1);
                   break;
            case 'S':
            case 's':if(bt==3)
                   ob.score(0,0);
                   else if(bt==0)
                   ob.score(0,1);
                   else
                   ob.score(1,0);
                   break;
            default:cout<<"Wrong fingers!!"<<endl;
        }
    }
    ob.win();
}