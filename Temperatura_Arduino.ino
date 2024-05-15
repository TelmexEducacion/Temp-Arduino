#include <LiquidCrystal.h>

// Definimos los pines del LCD
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Definimos el pin donde está conectado el sensor TMP
#define TMP_PIN A0

void setup() {
  // Inicializamos la pantalla LCD
  lcd.begin(16, 2);
  
  // Imprimimos un mensaje de inicio
  lcd.print("Temp Sensor");
  delay(2000); // Espera 2 segundos antes de borrar el mensaje
  lcd.clear();
}

void loop() {
  // Leemos el valor analógico del sensor TMP
  int sensorValue = analogRead(TMP_PIN);
  
  // Convertimos el valor analógico a voltaje (asumiendo 5V como referencia)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Convertimos el voltaje a temperatura en grados Celsius
  // Supongamos que el sensor TMP36 se usa y tiene una salida de 0.5V a 0°C con una escala de 10mV/°C
  float temperature = (voltage - 0.5) * 100.0;
  
  // Imprimimos la temperatura en la primera línea
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");
  
  // Esperamos 2 segundos antes de la próxima lectura
  delay(2000);
}
