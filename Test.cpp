#include<iostream>

using namespace std;

// Calculate the average of 3 values


void CalcAvg(int [3]);

int main(){
    
  const int size=3;
  int array[size];

  cout << "Enter the values: " << endl;
  
  for (int i=0; i<size; i++){
    cin >> array[i];
  }

  CalcAvg(array);

  return 0;

}

void CalcAvg(int arr[3]) {

  double sum=0, avg;


  for (int i=0; i<3; i++){
    sum+=arr[i];
  }

  avg = sum/3;

  cout << "The average value is: " << avg << endl;

}


