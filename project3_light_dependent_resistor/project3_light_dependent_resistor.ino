//pin constants
const int sensorPin = A0;
const int lightPin = 6;

const int MAX_LIGHT = 255;
//DISTINCT_INPUT_VALUES = 1024 / DISTINCT_OUTPUT_VALUES = 256
const float INPUTS_PER_OUTPUT = 0.16;

//state
int lightIntensity = 0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600); //sets serial port for communication
}
void loop() {
  sensorValue = analogRead(sensorPin);

  int sensorValueInRange = (int) (sensorValue / INPUTS_PER_OUTPUT);

  lightIntensity = MAX_LIGHT - sensorValueInRange;

  analogWrite(lightPin, lightIntensity);
  
  Serial.println(sensorValue);
  Serial.print("Light value: ");
  Serial.println(lightIntensity);
}
