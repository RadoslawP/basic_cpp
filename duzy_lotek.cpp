#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
  cout <<"Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady." << endl;
  sleep(3);
  srand(time(NULL));

  for (int i=1; i<=6; i++)
  {
    liczba=rand()%49+1;
    sleep(1);
    cout<<liczba<<"\a"<<endl;
  }

  return 0;
}
