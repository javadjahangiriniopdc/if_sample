// if_sample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int i;

    cin >> i;

   /* if (i == 1)
        cout << "shanbeh" << endl;
    else if (i == 2)
    cout << "yekhanbeh" << endl;
    else if (i == 3)
        cout << "doshanbeh" << endl;
    else if (i == 4)
        cout << "seshanbeh" << endl;
    else if (i == 5)
        cout << "charshanbeh" << endl;
    else if (i == 6)
        cout << "panjshanbeh" << endl;
    else if (i == 7)
        cout << "jomeh" << endl;*/
    switch (i)
    {
    case 1:
            cout << "shanbeh" << endl;
            break;
    case 2:
            cout << "yekhanbeh" << endl;
            break;
    case 3:
            cout << "doshanbeh" << endl;
            break;
    case 4:
            cout << "seshanbeh" << endl;
            break;
    case 5:
            cout << "charshanbeh" << endl;
            break;
    case 6: 
            cout << "panjshanbeh" << endl;
            break;
    case   7:
            cout << "jomeh" << endl;
            break;

    default:
        cout << "day < 7";
        break;
    }
    
   
       
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
