#include<bits/stdc++.h>
using namespace std;

int findUser(int users[],int n,int userId)
{
    for(int i=0;i<n;i++)
    {
        if(users[i]==userId)
        {
            return i;
        }
    }
    return -1;
}
void sortUsers(int users[],int balances[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++) 
        {
            if (balances[j]>balances[j+1]) 
            {
              swap(balances[j],balances[j+1]);
              swap(users[j],users[j+1]);
            }
            else if(balances[j]==balances[j+1]&&users[j]>users[j+1])
            {
                swap(balances[j],balances[j+1]);
                swap(users[j],users[j+1]);
            }
        }
    }

}
int main() 
{
    int n; 
    cin >> n;
    int users[n];
    int balances[n];
    for(int i=0;i<n;i++) 
    {
        cin>>users[i]>>balances[i];
    }
    int t; 
    cin >> t;
    for(int i=0;i<t;i++) 
    {
        int from,to,amount;
        cin>>from>>to>>amount;
        from=findUser(users,n,from);
        to=findUser(users,n,to);
        if(from==-1||to==-1)
        {
            cout<<"Failure"<<endl;
            continue;
        }
        if(balances[from]>=amount)
        {
            balances[from]-=amount;
            balances[to]+=amount;
            cout<<"Success"<<endl;
        } 
        else 
        {
            cout<<"Failure"<<endl;
        }
    }
    cout<<"\n";
    sortUsers(users,balances,n);
    for(int i=0;i<n;i++) 
    {
        if (balances[i]>0) 
        {
            cout<<users[i]<<" "<<balances[i]<<endl;
        }
    }
    return 0;
}