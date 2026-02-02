
#include <iostream>
using namespace std;

void printpattern1(int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void printpattern2(int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void printpattern3(int n)
{

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void printpattern4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < n - i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void printpattern5(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}

void printpattern6(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i+1; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void printpattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    //space
    for (int j = 0; j < n-i-1; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2*i +1; j++)
    {
      cout << "*";
    }

    // space

    for (int j = 0; j < n-i-1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void printpattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    //space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2*n-(2*i +1); j++)
    {
      cout << "*";
    }

    // space

    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

// void printpattern9 is the combination of printpattern7 and printpattern8

void printpattern10(int n)
{
  for (int i = 0; i <= 2*n-1; i++)
  {
    int stars = i;
    if(i>n) stars = 2*n-i;
    for (int j = 1; j < stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void printpattern11(int n)
{
  for (int i = 1; i <n; i++)
  {
    int start =1;
    if (i%2==0) start =1;
    else start =0;
    for (int j = 1; j <i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void printpattern12(int n)
{
  int space = 2*(n-1);
  for (int i = 1; i <= n; i++)
  {
    //numbers
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    // space
    for (int j = 1; j<=space; j++)
    {
      cout << " ";
    }

    // numbers

    for (int j = i; j>=1; j--)
    {
      cout << j;
    }
    cout << endl;
    space -= 2;
  }
}

void printpattern13(int n)
{
  int num=1;
  for (int i = 1; i <= n; i++)
  {
    
    for (int j = 1; j <= i; j++)
    {
      cout << num<< " ";
      num=num+1;
    }
    cout << endl; 
  }
}

int main()
{
  int n;
  cin >> n;
  // printpattern1(n);
  // printpattern2(n);
  // printpattern3(n);
  // printpattern4(n);
  // printpattern5(n);
  // printpattern6(n);
  // printpattern7(n);
  // printpattern8(n);
  // printpattern10(n);
  // printpattern11(n);
  // printpattern12(n);
  printpattern13(n);
 

  return 0;
}
