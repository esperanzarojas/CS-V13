#include    <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;

    //*** my code  
    for(int i=0; i<SIZE; i++){
      sum = sum + numbers[i];
    }
    
   //calculate difference
    for (int i =0; i< SIZE; i++) {
      diff[i] = sum-numbers[i];
    }
    //set width and print results
    for (int i=0;i<SIZE;i++){
      cout<< " "<<numbers[i]<<setw(2);
    }
      
    cout<<endl;
    for(int i=0; i<SIZE;i++){
      cout<<diff[i]<<" ";
    }

    retun 0;  
  

}
