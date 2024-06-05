#include <stdio.h>

int TriangleType(unsigned angle1, unsigned angle2){
  const int rightAngle = 90;
  const unsigned angle3 = 180 - angle1 - angle2;
      /*Invalid angles*/                                                                                       
   if (angle1 + angle2 >= 180 ||angle1 + angle3 >= 180 || angle2 + angle3 >= 180 ){return -1;}
      /*A right-angled and isosceles triangle*/                                                                                       
  else if ((angle1 == rightAngle && angle2 == rightAngle-angle2)||(angle2 == rightAngle && angle1 == rightAngle-angle1)||(angle3 ==rightAngle&&angle1==angle2)){return 3;}
        /*A isosceles triangle*/                                                                                       
  else if (angle1 == angle2 || angle1 == angle3|| angle2 == angle3){
      return 2;}
          /*A right-angled triangle*/                                                                                       
  else if (angle1 == rightAngle || angle2 == rightAngle || angle3 == rightAngle){ return 1;}
                                                                                        
                                                                                          
  else {return 0;}
      
}


int main()
{
    unsigned a = 60;
    unsigned b = 60;
    printf("Your triangle type is %d\n", TriangleType(a, b));
    return 0;
}
