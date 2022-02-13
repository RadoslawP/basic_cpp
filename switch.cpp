#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main()
{
  for(;;)
  {
    cout<<endl<<"Podaj 1 liczbe: ";
    cin>>x;
    cout<<"Podaj 2 liczbe: ";
    cin>>y;

    cout<<endl;
    cout<<"MENU GLOWNE"<<endl;
    cout<<"_____________________"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Wyjscie"<<endl;

    cout<<"Wybierz: ";
    wybor=getch();

    switch(wybor)
    {
      case '1':
          cout<<"suma = "<<x+y;
      break;
      case '2':
          cout<<"roznica = "<<x-y;
      break;
      case '3':
          cout<<"iloczyn = "<<x*y;
      break;
      case '4':
          if (y==0) cout<<"Nie dzielimy przez zero!";
          else cout<<"iloraz = "<<x/y;
      break;
      case '5':
          exit(0);
      break;

      default: cout<<"Nie ma takiej opcji w menu!";
    }
    getchar();
    system("clear");
  }
    return 0;
}
