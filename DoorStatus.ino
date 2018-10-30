#include "AlertMe.h"
AlertMe alert;
void setup() {
  Serial.begin(9600);
  alert.connect();
  alert.send("AlertMe Demo", "This is an email demonstrating the AlertMe library!", "mahtabkamal2010@gmail.com");
  Serial.println("Testing");
}
void loop(){
   
  }
