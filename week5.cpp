#include <iostream>
using namespace std;

float product(float a, float b){
  return a*b;
}

float _negate(float x){
  return -x;
}

float negated_product(float a, float b){
  return -(a*b);
}

int main(){
  float x, y;
  cin >> x >> y;
  float neg_xy = negated_product(x,y);
  cout << neg_xy;
}

float a = product(x,y);
