#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "utils.h"

double degreesToRadians (double degree)  {
  const double pi = 3.14159265359 ;
  return (degree * pi)/180 ;
}

double getAirDistance (double originLatitude, double originLongitude,
                       double destinationLatitude, double destinationLongitude) {
  const double pi = 3.14159265359 ;
  originLatitude = (originLatitude * pi)/180 ;
  originLongitude = (originLongitude * pi)/180 ;
  destinationLatitude = (destinationLatitude * pi)/180 ;
  destinationLongitude = (destinationLongitude * pi)/180 ;
  return acos((sin(originLatitude) * sin(destinationLatitude)) +
  (cos(originLatitude) * cos(destinationLatitude) *
  cos(destinationLongitude - originLongitude))) * 6371 ;
}

double lorentzTimeDilation (double normalTime, double percentC)  {
  return normalTime/(sqrt(1-(percentC * percentC))) ;
}
