#include <Arduino.h>

void setup()
{
    pinMode(PC13, OUTPUT);

    Serial.begin(115200);
}

void loop()
{
    if (Serial.available() > 0)
    {
        char inByte = Serial.read();

        Serial.println(inByte);

        if (inByte == '0')
        {
            digitalWrite(PC13, HIGH);
        }
        else
        {
            if (inByte == '1')
            {
                digitalWrite(PC13, LOW);
            }
        }
    }
}