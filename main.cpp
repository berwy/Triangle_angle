#include <iostream>
#include <cmath>
using namespace std;
int S_Triangle_angle()  

{
 int a, b, y, S;
  cout << "Trijstūra pamats ir ";
  cin >> a;
  cout << "Trijstūra sānu mala ir ";
  cin >> b;
  cout << "Trijstura leņķa vērtība ir ";
  cin >> y;
  S=a*b*sin(y)/2;
  return S;
}

void  pri(int S) 
{
  cout << "Trijstūra laukums ir " << S << endl;
}

int main() 
{
  int S;
  S=S_Triangle_angle();    
  pri(S);       
  
  return 0;
}
