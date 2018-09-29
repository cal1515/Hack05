/* Author: Cal Malone
 * Partner: Taylor Drahota
 *
 * This program uses 3 user defined functions to compute radians from a given
 * degree value, the air distance between locations, and time dilation.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "utils.h"
#define E 0.00001

int main(int argc, char **argv) {

  const double pi = 3.14159265359 ;

  //Test Case 1
  double degToRad1 = degreesToRadians(90) ;
  double actual = pi/2 ;
  if (fabs(actual - degToRad1) <= E)  {
    printf("Expected: %f Program Output: %f\nPASSED\n", actual, degToRad1) ;
}   else  {
    printf("Expected: %f Program Output: %f\nFAILED\n", actual, degToRad1) ;
}
  //Test Case 2
  double degToRad2 = degreesToRadians(180) ;
  actual = pi ;
  if (fabs(actual - degToRad2) <= E)  {
    printf("Expected: %f Program Output: %f\nPASSED\n", actual, degToRad2) ;
}   else  {
    printf("Expected: %f Program Output: %f\nFAILED\n", actual, degToRad2) ;
}
  //Test Case 3
  double degToRad3 = degreesToRadians(45) ;
  actual = pi/4 ;
  if (fabs(actual - degToRad3) <= E)  {
    printf("Expected: %f Program Output: %f\nPASSED\n", actual, degToRad3) ;
}   else  {
    printf("Expected: %f Program Output: %f\nFAILED\n", actual, degToRad3) ;
}

  //Test Case 1
  double airDistance1 = getAirDistance(41.948300, -87.655600, 40.820600, -96.705600) ;
  actual = 764.990931 ;
  if (fabs(actual - airDistance1) <= E)  {
    printf("Expected: %f Program Output: %f\nPASSED\n", actual, airDistance1) ;
}   else  {
    printf("Expected: %f Program Output: %f\nFAILED\n", actual, airDistance1) ;
}

  //Test Case 2
  double airDistance2 = getAirDistance(40.968423, -99.087443, 41.2565369, -95.9345034) ;
  actual = 266.062755 ;
  if (fabs(actual - airDistance2) <= E)  {
  printf("Expected: %f Program Output: %f\nPASSED\n", actual, airDistance2) ;
}   else  {
  printf("Expected: %f Program Output: %f\nFAILED\n", actual, airDistance2) ;
}

  //Test Case 3
  double airDistance3 = getAirDistance(51.5073509, -0.1277583, 55.6760968, 12.5683372) ;
  actual = 955.563236 ;
  if (fabs(actual - airDistance3) <= E)  {
  printf("Expected: %f Program Output: %f\nPASSED\n", actual, airDistance3) ;
}   else  {
  printf("Expected: %f Program Output: %f\nFAILED\n", actual, airDistance3) ;
}

  //Test Case 1
  double timeDilation1 = lorentzTimeDilation(9.9, .01) ;
  actual = 9.900495037 ;
  if (fabs(actual - timeDilation1) <= E)  {
  printf("Expected: %f Program Output: %f\nPASSED\n", actual, timeDilation1) ;
}   else  {
  printf("Expected: %f Program Output: %f\nFAILED\n", actual, timeDilation1) ;
}

  //Test Case 2
  double timeDilation2 = lorentzTimeDilation(2.5, .33) ;
  actual = 2.648358579 ;
  if (fabs(actual - timeDilation2) <= E)  {
  printf("Expected: %f Program Output: %f\nPASSED\n", actual, timeDilation2) ;
}   else  {
  printf("Expected: %f Program Output: %f\nFAILED\n", actual, timeDilation2) ;
}

  //Test Case 3
  double timeDilation3 = lorentzTimeDilation(1,.25) ;
  actual = 1.032795559 ;
  if (fabs(actual - timeDilation3) <= E)  {
  printf("Expected: %f Program Output: %f\nPASSED\n", actual, timeDilation3) ;
}   else  {
  printf("Expected: %f Program Output: %f\nFAILED\n", actual, timeDilation3) ;
}

return 0;
}
