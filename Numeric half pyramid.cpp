#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter number of rows to make half pyramid: ";
  cin>>n;
  for(int row=0;row<=n;row++){
    for(int col=1;col<=row;col++){
      cout<<col;
    }
    cout<<endl;
  }
  return 0;
}
