/* Arduino traffic light system
 * Written by: Enrique Desentis
 * Date: 11/21/2019
 * Modified: 12/06/2019
 */

//Declaring variables
int green1 = 13;
int red1 = 12;
int green2 = 11;
int red2 = 10;
const int photo = A0;

//declaring photoresistor light value measurement
int pot_value;


void setup()
  {

  Serial.begin(9600); //Read and set treshold for photoresistor from console

    //setting LEDs as output
    pinMode(red1, OUTPUT);
    pinMode(green1, OUTPUT);
    pinMode(green2, OUTPUT);
    pinMode(red2, OUTPUT);

    //keep green and red on of the opposite traffic light intersection
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
  }


void loop()
{

  pot_value = analogRead(photo); //Assign value from photoresistor to pot_value

  Serial.print("I just read: ");
  Serial.println(pot_value);     //Print photoresistor light value in console and go to next line
    
        if (pot_value > 1000) // if photoresistor light value more than 1000 perform condition (treshold)
        {
            changeLights(); // function call to switch lights
            delay(2000); // wait for 2 seconds to perform loop again
        }   
}

void changeLights() // change lights function to switch lights
{
    // green1 off red1 off, green2 on red2 on 
    digitalWrite(green1, LOW);
    digitalWrite(red1, HIGH);
    digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);
    delay(10000); //delay of 10 seconds to switch back to original setup

    //green1 on red1 on, green2 off red2 off
    digitalWrite(green1, HIGH);
    digitalWrite(red1, LOW);
    digitalWrite(red2, HIGH);
    digitalWrite(green2, LOW);
    delay(3000);

}// end of program
