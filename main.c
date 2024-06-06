#include <stdio.h>

int TriangleType (unsigned angle1, unsigned angle2){
  const unsigned RIGHT_ANGLE = 90;
  const unsigned ANGLE_3 = 180 - angle1 - angle2;
      /*Invalid angles*/                                                                                       
   if (angle1 + angle2 >= 180 ||angle1 + ANGLE_3 >= 180 || angle2 + ANGLE_3 >= 180 ){return -1;}
      /*A right-angled and isosceles triangle*/                                                                                       
  else if ((angle1 == RIGHT_ANGLE && angle2 == RIGHT_ANGLE-angle2)||(angle2 == RIGHT_ANGLE && angle1 == RIGHT_ANGLE-angle1)||(ANGLE_3 ==RIGHT_ANGLE&&angle1==angle2)){return 3;}
        /*A isosceles triangle*/                                                                                       
  else if (angle1 == angle2 || angle1 == ANGLE_3|| angle2 == ANGLE_3){return 2;}
      
          /*A right-angled triangle*/                                                                                       
  else if (angle1 == RIGHT_ANGLE || angle2 == RIGHT_ANGLE || ANGLE_3 == RIGHT_ANGLE){return 1;}
                                                                                        
                                                                                          
  else {return 0;}
      
}

int main()
{
    unsigned a = 90;
    unsigned b = 60;
    printf("Your triangle type is %d\n", TriangleType (a, b));
    return 0;
}
