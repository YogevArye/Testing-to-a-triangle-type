/*
Implement a function that is given 2 positive integers representing 2 angles of a triangle. If the triangle is right, isosceles, or both, the function should return 1, 2 or 3, respectively. Otherwise it shoud return 0.

Keep in mind that the parameter values may be invalid. How would you handle this?

Study:
What is the difference between the following statements?
if (x == 3) { ... }
if (x = 3) { ... }
What input values are considered to be an error in this exercise?
What are the conventional ways for error handling in C?*/
#include <stdio.h>

int ChecikngTriangleType(int oneAngleSize, int twoAngleSize){
  const int rightAngle = 90;
  if ((oneAngleSize == rightAngle && twoAngleSize == rightAngle-twoAngleSize)||(twoAngleSize == rightAngle && oneAngleSize == rightAngle-oneAngleSize)||(180-oneAngleSize-twoAngleSize ==rightAngle&&oneAngleSize==twoAngleSize)){return 3;}
  else if (oneAngleSize == twoAngleSize || oneAngleSize == 180-oneAngleSize-twoAngleSize || twoAngleSize == 180-oneAngleSize-twoAngleSize){return 2;}
  else if(oneAngleSize == rightAngle || twoAngleSize == rightAngle || 180-oneAngleSize-twoAngleSize == rightAngle){ return 1;}
  else {return 0;}
}
int main()
{
    int a=60;
    int b =60;
    int c=60;
    printf("Your triangle type is %d",ChecikngTriangleType(b,c));
    return 0;
}
