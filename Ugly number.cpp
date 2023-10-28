/*The ugly number is a positive integer
whose prime factors are limited to 2,3,5.
  Given a integer neturn true if n is 
ugly number*/
class Solution {
public:
bool isUgly(int n) {
  if(n<=0) return false;
while(n%2==0) {
n/=2;
}
while(n%3==0) {
n/=3;
}
while(n%5==0) {
n/=5;
}
return n==1;
}
};
