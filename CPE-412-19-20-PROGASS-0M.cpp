// 270358

#include<cstring>
#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char* argv[])
{  
    int i,j,k,x,y;
    char str[100],arr[100][100];
    
    cin>>str; 
    x=0;
    y=0;
    k=0;
    
    cout<<"Output:";
    while(str[x]!='\0') {
        if (str[x]=='a'&&str[x+1]=='b'&&str[x+2]=='b'&&str[x+3]=='b') {
            y++;
        }
    if(str[x]=='a') {
        k++;
    }
    x++;
    }
    if (y==k) {
        cout<<"Accepted";
    }
    else {
        cout<<"Not Accepted";
    }
return 0;
}
