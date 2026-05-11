// IR Sensor + LED
// If object detected -> LED ON
// Also print on Serial Monitor

int irSensor = 2;   // IR sensor OUT pin
int led = 15;       // LED pin

void setup()
{
    pinMode(irSensor, INPUT);
    pinMode(led, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    int val = digitalRead(irSensor);

    // Most IR sensors give LOW when object detected
    if(val == LOW)
    {
        digitalWrite(led, HIGH);

        Serial.println("Object Detected");
    }
    else
    {
        digitalWrite(led, LOW);

        Serial.println("No Object");
    }

    delay(200);
}