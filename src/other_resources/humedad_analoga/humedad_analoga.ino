int sensor_pin = A0; 
int output_value;
void setup() {
  Serial.begin(9600);
  Serial.println("Reading From the Sensor ...");
  delay(2000);
  }

void loop() {
  output_value= analogRead(sensor_pin);
  // 1024 = seco 100%, 500 = humedo 100%
  output_value = map(output_value,1024,500,0,100);
  Serial.print("Mositure : ");
  Serial.print(output_value);
  Serial.println("%");
  delay(500);
  }
