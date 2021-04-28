void setup()
{
  pinMode(8, INPUT); //define al pin como una entrada
  pinMode(7, OUTPUT); //define al pin como salida
  pinMode(6, OUTPUT); //define al pin como salida
}

void loop()
{
  if (digitalRead(8) == HIGH) { //lee el pin 8, si esta prendido...
    digitalWrite(7, HIGH); //prende el led 7
    digitalWrite(6, LOW); //y apaga al led 6
  } else { //o, si no se cumple la condición anterior...
    digitalWrite(7, LOW); //...se apaga el led 7...
    digitalWrite(6, HIGH); //...y se prende el led 6
  }
  delay(10);//esperar 10 segundos y volver a repetir el código // Delay a little bit to improve simulation performance 
}
