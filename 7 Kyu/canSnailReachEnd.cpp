/*
A snail is crawling along a rubber band that has an initial length of x units. The 
snail moves at a constant speed of y units per minute. As the snail crawls from 
the left end of the rubber band to the right end, the rubber band increases in 
length from the right side every minute, adding z units to its length.

The question is: Will the snail be able to reach the right end of the rubber band 
within 1 year?

Parameters:

    x: Initial length of the rubber band (in units), where 0.01 ≤ x ≤ 1,000,000.

    y: Speed of the snail (in units per minute), where 0.01 ≤ y ≤ 1,000,000.

    z: Amount by which the rubber band increases in length every minute (in units), 
       where 0.01 ≤ z ≤ 1,000,000.

*/

// Submitter Comment:
/*
  I chose a careful approach that increments day by day, in the case that the snail
  possibly reaches the end of the rubber band *within* the year, as well as a case 
  that detects if either of the increasing variables fall out of the parameters
*/

using namespace std;

bool canSnailReachEnd(double len, double spd, double lenRate)
{
    // set the snail's position
    double snailPos = 0.0;
  
    for (int i = 0; i < 365; i++){  // day by day increments
      
      // 1440 minutes in a day
      snailPos += (spd * 1440);
      len += (lenRate * 1440);
      
      // remaining within parameter
      if (snailPos >= 1000000 || len >= 1000000){
        break;
      }
      
      if (snailPos >= len) {
        return true;
      }
      
    }
  
    cout << "snail: " << snailPos << " band: " << len << endl;
  
    if (snailPos >= len) {
        return true;
    }
  
    return false;
}