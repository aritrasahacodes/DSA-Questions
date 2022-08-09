#include <iostream>
#include<string>
using namespace std;

int main() {
    string s("0334223");
    std::string::iterator it;
    it=s.begin();
    s.erase(it);
    s.erase(it);
    cout<<s;
}