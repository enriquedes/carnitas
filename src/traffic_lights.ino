/* Arduino traffic light system
 * Written by: Enrique Desentis
 * Date: 11/21/2019
 */

int red = 10;
int yellow = 9;
int green = 8;
const int photo = A0;

int pot_value;


void setup()
  {

  Serial.begin(9600); //Read and set treshold from console
  
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);

    digitalWrite(green, HIGH); //Keep green on
  }

void loop()
{

  pot_value = analogRead(photo); //Assign value from photo to pot_value

  Serial.print("I just read: ");
  Serial.println(pot_value);     //Print pot_value and go to next line
    
        if (pot_value > 1000) // photoresistor treshold
        {
            changeLights(); // function call
            //delay(2000); // wait for 2 seconds
        }   
}

void changeLights() // change lights function to change lights
{
    // green off, yellow on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);

    // yellow off, then turn red on for 5 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);

    // red and yellow on for 2 seconds (red is already on though)
    digitalWrite(yellow, HIGH);
    delay(2000);

    // turn off red and yellow, then turn on green
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
}
