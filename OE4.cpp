//Name: Kim Carlo Larino
//Activity Name: OE-4
//Description: Postcard From Gizah

#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

int main(){

    system("Color 06");

    system("CLS");

    int a=1;
    int z;

    cout << endl;
    cout << "Enter Desired Height of Your Triange: ";
    cin >> z;
    cout << endl;
    cout << endl;
  

  for (int q=0; q<z; q++) {
    for (int w=z; w>q; w--)
    {
      cout<<" ";
    }
    cout << "*";

    if (q!=0) {
      for (int e=1; e<=a; e++)
      {
        cout<<" ";
      }

      cout<<"*";
      a+=2;
    }
    cout<<endl;
  }

  for (int q=0; q<=a+1; q++) {
    cout<<"*";
  }

cout << endl;
cout << endl;
system("pause");
return 0;
}