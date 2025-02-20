#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    // convert intger le string ss stream 
int x=333;
stringstream ss;
ss<<x;
string c;
ss>>c;
cout<<c;
  // convert string  le intge ssstream
  string o="123";
  int h;
  stringstream m;
  m<<o;
  m>>h;
  cout<<h;
// parse string  int char int .
string title ="12355my,phone is lost ";
stringstream dd;
dd<<title;
int num;
while (dd>>num>>title)
{
    /* code */
    cout<<num<<"\n"<<title<<"\n";
}

}