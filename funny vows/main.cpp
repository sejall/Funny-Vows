#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j=0;
        cin>>n>>k;
        char s[n];
        for(i=0;i<n;i++)
            cin>>s[i];
            for(i=0;i<n;i++)
            {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            j++;
            }
        if(k==j)
            cout<<"Bad"<<endl;
        else
            cout<<"Good"<<endl;
    }
    return 0;
}
