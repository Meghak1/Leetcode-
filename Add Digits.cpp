class solution {
public:
int addDigits(int num) {
  if(num==0) return 0;
while(num>9) {
int result, remainder=0;
while(num!=0) {
remainder=num%10;
result=result+remainder;
num=num/10;
}
num=result;
}
return num;
}
};


##updated code

return 1+(num-1)%9.....(1)

ex: if num=38
  38-1=37
  37%9=1
  (1)->1+1=2

  
