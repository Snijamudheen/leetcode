#include <iostream>
using namespace std;

int main()
{
   char status;
   
   cout << "Are you married?(y/n): " << endl;
   cin >> status;
   
   switch (status)
   {
        case 'y':
           cout << "You are allotted the family suite." << endl;
           break;
           
        case 'n':
           cout << "You are allotted the bachelor suite." << endl;
           break;
           
        default :
           cout << "Invalid status" << endl;
   }
}
