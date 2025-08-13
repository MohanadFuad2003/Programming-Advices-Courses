

#include <iostream>
#include <string> 
using namespace std;

void PrintName(string Name) {
    cout << "\nYour Name Is : " << Name << endl;
}

string readName() {
    string Name;
    cout << "\n Enter Your Name : ";
    getline(cin, Name);
    return Name;
}
int main()
{   
   PrintName(readName());
}

