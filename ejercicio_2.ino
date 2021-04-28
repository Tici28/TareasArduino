void setup()
{
  pinMode(7, OUTPUT); //define al led como salida
  pinMode(2, OUTPUT); //define al led como salida
  pinMode(6, OUTPUT); //define al led como salida
  pinMode(5, OUTPUT); //define al led como salida
  pinMode(4, OUTPUT); //define al led como salida
  pinMode(3, OUTPUT); //define al led como salida
}

void loop()
{
  digitalWrite(7, HIGH); //prende el led 7
  digitalWrite(2, HIGH); //prende el led 2
  delay(3000); // espera 3000 milligundos
  digitalWrite(6, HIGH); //prende el led 6
  digitalWrite(7, LOW); //apaga el led 7
  delay(3000); // espera 3000 milligundos
  digitalWrite(6, LOW); //apaga el led 6
  digitalWrite(2, LOW); //apaga el led 2
  digitalWrite(5, HIGH); //prende el led 5
  digitalWrite(4, HIGH); //prende el led 4
  delay(3000); // espera 3000 milligundos
  digitalWrite(4, LOW); //apaga el led 4
  digitalWrite(3, HIGH); //prende el led 3
  delay(3000); // espera 3000 milligundos
  digitalWrite(3, LOW); //apaga el led 3
  digitalWrite(5, LOW); //apaga el led 5
}
