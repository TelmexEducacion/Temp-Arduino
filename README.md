Proyecto de Sensor de Temperatura con LCD
Este proyecto de Arduino utiliza un sensor de temperatura TMP36 para medir la temperatura ambiental y muestra los resultados en una pantalla LCD de 16x2. Es un ejemplo simple de cómo integrar sensores analógicos y dispositivos de visualización en proyectos de Arduino.

Descripción
El código lee valores de un sensor de temperatura TMP36 conectado al pin analógico A0 del Arduino. Estos valores se convierten de una lectura analógica a un voltaje y luego a una temperatura en grados Celsius. La temperatura se muestra en una pantalla LCD, actualizándose cada 2 segundos.

Componentes Necesarios
Arduino Uno (o cualquier otra placa compatible con Arduino)
Sensor de temperatura TMP36
Pantalla LCD 16x2
Potenciómetro (para ajustar el contraste del LCD)
Cables de conexión
Protoboard
Conexiones
Sensor TMP36:

VCC -> 5V en Arduino
GND -> GND en Arduino
OUT -> A0 en Arduino
Pantalla LCD 16x2:

RS -> Pin 7 en Arduino
EN -> Pin 8 en Arduino
D4 -> Pin 9 en Arduino
D5 -> Pin 10 en Arduino
D6 -> Pin 11 en Arduino
D7 -> Pin 12 en Arduino
VSS -> GND en Arduino
VDD -> 5V en Arduino
V0 (contraste) -> Centro del potenciómetro (los extremos del potenciómetro a 5V y GND)
A (anodo de retroiluminación) -> 5V en Arduino (puede necesitar una resistencia)
K (cátodo de retroiluminación) -> GND en Arduino


Instrucciones
Conecte los componentes según las conexiones indicadas.
Suba el código a su placa Arduino utilizando el IDE de Arduino.
Observe la temperatura actual mostrada en la pantalla LCD.

Notas
Este ejemplo asume que está utilizando un sensor TMP36. Si utiliza un sensor diferente, es posible que necesite ajustar la conversión de voltaje a temperatura.
Asegúrese de que su pantalla LCD está correctamente conectada y ajustada para el mejor contraste utilizando el potenciómetro.
