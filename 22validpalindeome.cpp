#include <iostream>
using namespace std;
bool valid(char ch)
{
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
        return 1;
    else
        return 0;
}
char tolower(char ch)
{
    if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        return ch;
    else
        return (ch-'A'+'a');
}
bool palindrome(string temp,int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if( temp[s]!=temp[e] )
            return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int getlength(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        count++;
    return count;
}
int main() 
{
    char str[20];
    cin>>str;

    //faltu character hatao
    string temp="";
    for(int i=0;i<getlength(str);i++)
    {
        if( valid(str[i]) )
            temp.push_back(str[i]);
    }

    //lowercase me kardo
    int n=temp.size();
    cout<<temp<<endl<<n<<endl;
    for(int i=0;i<n;i++)
    {
       temp[i]=tolower(temp[i]);
    }

    //check palindrome or not
    int result=palindrome(temp,n);
    if(result)
        cout<<"Palindrome";
    else
        cout<<"Not Pilandrome";
}