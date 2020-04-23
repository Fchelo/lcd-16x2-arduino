#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
// Arrancar la librería con el numero de pines que se utilizaran
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  // defnir el numero de filas y columnas que tiene nuestra LCD
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to column 0, line 0
  // colocar el cursor en la columna 0, fila 0
  
  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("HOLA MUNDO"); // the message you want to show
                           // el mensaje que quieres mostrar
  
  // (note: line 1 is the second row, since counting begins with 0)
  //(nota: la linea 1 es la segunda fila, recuerda que siempre empezamos a contar desde 0)
  lcd.setCursor(0,1);
  lcd.print("Franklin");// message in the secund  row
  lcd.clear();          // otro mensaje en la segunda línea
  
}
