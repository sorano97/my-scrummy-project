#include <SchooMyUtilities.h>
SchooMyUtilities scmUtils = SchooMyUtilities();

void setup() {
  Serial.begin(9600);
  pinMode(19, OUTPUT);
  digitalWrite(19, HIGH);
}

void loop() {
  digitalWrite(19, LOW);
}
