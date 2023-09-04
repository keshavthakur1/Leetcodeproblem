#include<iostream>
using namespace std;
  
  int count(int n ){
   int cnt =0;
   while(n>0){
   cnt = cnt +1;
   n =n /10 ;
   }

   return cnt;
  }

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    int digitCount = count(n);
    cout << "Number of digits: " << digitCount << endl;

    return 0;
}
