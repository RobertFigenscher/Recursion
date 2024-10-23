#include <iostream> 
using namespace std; 
int succesion (int n) 
{
  if (n == 0)
    return 1; 
  else if (n == 1) 
    return 2; 
  else 
    return 5 * succesion(n-1) - 6 * succesion(n-2);
}
int main ()
{ 
int num
cout << "Entre un entero no negativo" << endl;
cin >> num; 
cout << succesion(num) << endl;
return 0;
}

  
