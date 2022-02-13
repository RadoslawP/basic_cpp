#include <iostream>

using namespace std;

string login, haslo;

int main()
{
  cout << "Podaj login: " << endl;
  cin >> login;
  cout << "Podaj haslo: " << endl;
  cin >> haslo;

  if ((login == "admin") && (haslo == "szarlotka"))
  {
    cout << "Udalo sie! Jestes zalogowany." << endl;
  }
  else
  {
    cout << "Nie udalo sie zalogowac." << endl;
  }

  return 0;
}
