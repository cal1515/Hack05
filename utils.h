//This function computes the radians for a given degree value.

 double degreesToRadians (double degree) ;

/*This function computes the Air Distance between two sets of latitude
  * and longitude coordinates.
  */

  double getAirDistance (double originLatitude, double originLongitude,
                         double destinationLatitude, double destinationLongitude) ;

 //This function computes the dilated time passed given the normal time passed.

 double lorentzTimeDilation (double normalTime, double percentC) ;
