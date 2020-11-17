#include    <iostream>
#include    <ctime>
#include    <cstdlib>
using namespace std;
void makebinary(int [], int);
void printbinary(int [], int);
void count0cluster(int [], int);
int main()
{
    const int SIZE = 20;
    int     binary[SIZE];

    srand(time(0));
    makebinary(binary, SIZE);
    printbinary(binary, SIZE);
    count0cluster(binary, SIZE);
} //endl
void makebinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 2;
}
void printbinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << " ";
    cout << endl;
}
void count0cluster(int bin[], int size)
{
  int c = 0, side = 1;
  for (int i=0; i<size; i++){
    if (bin[i]==0) {
      if (side == 1)
      c++;
      side = 0;
    }
    else{
      side = 1;
    }
  }
}
cout << "Count of clusters:"<< c << endl;