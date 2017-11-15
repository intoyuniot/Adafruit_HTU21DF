#include <Adafruit_HTU21DF.h>

//  引脚
//  SCL --- D9
//  SDA --- D8

Adafruit_HTU21DF htu = Adafruit_HTU21DF();

void setup()
{
    Serial.begin(115200);
    Serial.println("HTU21D-F test");

    if (!htu.begin())
    {
        Serial.println("找不到传感器!");
        while (1);
    }
}


void loop()
{
    Serial.print("Temp: ");
    Serial.print(htu.readTemperature()); //温度
    Serial.print("\t\tHum: ");
    Serial.println(htu.readHumidity()); //湿度
    delay(500);
}
