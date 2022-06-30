
#include <iostream>

using namespace std;

bool checkpalindrom(string s,int i,int j)
{
    if(i>j)
    return true;
    
    if(s[i]!=s[j])
    {
        return false;
    }
    else
    {
        return checkpalindrom(s,i+1,j-1);
    }
    
    
}

int main()
{
    string name="SHANKAR";
    
    bool ispalindrom=checkpalindrom(name,0,name.size()-1);
    
    if(ispalindrom)
    {
        cout<<"it is palindrom "<<endl;
    }
    else
    {
        cout<<"it is not palindrom "<<endl;
    }

    return 0;
}
