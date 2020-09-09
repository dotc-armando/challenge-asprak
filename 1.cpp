#include <iostream>

using namespace std;

void berpola(string kata);
bool isGenap(int pos);
bool isKapital(char huruf);
char toLower(char huruf);
char toUpper(char huruf);

int main()
{
  string kata;
  cout << "Hello Delanika" << endl;

  cout << "Masukan kata: ";
  cin >> kata;
  berpola(kata);
}

void berpola(string kata)
{
  for (int i = 0; i < kata.length(); i++)
  {
    for (int j = 1; j <= i + 1; j++)
    {
      if (isGenap(j))
      {
        cout << toUpper(kata[i]);
      }
      else
      {
        cout << toLower(kata[i]);
      }
    }
  }
}

bool isGenap(int pos)
{
  if (pos % 2 == 0)
    return true;
  return false;
}

bool isKapital(char huruf)
{
  int angka = (int)huruf;
  if (angka >= 65 && angka <= 90)
    return true;
  return false;
}

char toLower(char huruf)
{
  int angka = (int)huruf;
  if (isKapital(angka))
  {
    return (char)(angka + 32);
  }
  return huruf;
}

char toUpper(char huruf)
{
  int angka = (int)huruf;
  return (char)(angka - 32);
}