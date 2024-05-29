#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char>ch;
    char a[10];
    int i=0;
    
    for(int i=0; i<ch.size(); i++) {
        cout << ch[i];
    }
    do
    {
        cin >> a;
        ch.push_back(a[i]);
        ++i;
        cout << a[i-1]<<endl;  
    } while (a[i-1]!='\0');
    
    return 0;
}