/*  

# Hackerrank-PLUS-MINUS
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  6 places after the decimal.
Sample Input
6
-4 3 -9 0 4 1  
Sample Output

0.500000
0.333333
0.166667
Explanation

There are 3 positive numbers,  2 negative numbers, and 1 zero in the array.
The proportions of occurrence are
0.500000 
0.333333 
0.166667 








CODE
**/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
#include <iomanip>


/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    double pos=0 ; double neg =0 ; double zero  =0;
// iterator for int vector
vector<int>::iterator iter;

for (iter = arr.begin(); iter != arr.end(); ++iter) {
    if (*iter > 0 ){
        pos +=1;     
    }
    else if (*iter <0){
        neg+=1;
    }
    else{
        zero +=1;
    }
  }
double ratio_pos = pos / arr.size(); 
double ratio_neg = neg / arr.size(); 
double ratio_zero = zero /  arr.size(); 
cout << setprecision(6) << ratio_pos << endl ;
cout <<setprecision(6) <<ratio_neg <<endl;
cout << setprecision(6) <<ratio_zero;
  }

int main(){
      int n ;
      cin >>n ;
      vector<int> arr ;
      for(int i=0 ; i<n ; i++){
          int m ;
          cin >> m ;
          arr.push_back(m);
      }   
      plusMinus(arr);
  }


