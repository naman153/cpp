#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    cin>>a;
    string b;
    cin>>b;
    string d;
    cout<<a.size()<<" "<<b.size()<<endl;
    string c=a+b;
    cout<<c<<endl;
    d[0]=a[0];
    a[0]=b[0];
    b[0]=d[0];
    cout<<a<<" "<<b;
  
    return 0;
}
