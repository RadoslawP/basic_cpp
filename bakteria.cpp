#include <iostream>

using namespace std;

int populacja=1; int godzin=0;

int main()
{
  do
  {
    godzin++;
    populacja = populacja *2;

    cout<<"mielo godzin: "<<godzin;
    cout<<" liczba bakterii: "<<populacja<<endl;
  } while(populacja<=100000);

  return 0;
}
