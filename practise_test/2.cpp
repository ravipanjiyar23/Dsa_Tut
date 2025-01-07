#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    string str;
    cout<<"enter your string :";
    cin>>str;
    // string temp="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            continue;
        }
        for(int j=i+1;j<str.size();j++)
        {
            if(str[j]=='0')
            {
                char temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
            else{
                continue;
            }
        }

    }
    cout<<str;
    return 0;

}