void setup()
{
  pinMode(7, INPUT); //define al led como entrada 
  pinMode(6, INPUT);//define al led como entrada 
  pinMode(2, OUTPUT);//define al led como salida
  pinMode(9, OUTPUT);//define al led como salida
  pinMode(8, OUTPUT);//define al led como salida
  pinMode(7, OUTPUT);//define al led como  salida
}

void loop()
{
  if (digitalRead(7) == HIGH) { //lee el pin 7, si esta prendido...
    if (digitalRead(6) == HIGH) { //...leo el pin 6, si esta prendido...
      digitalWrite(2, HIGH); //...prendo el led 2...
      tone(9, 548668578, 1000); //...y reproduzco el altavoz con tono 300 durante 1 segundo
    } else { //o...
      digitalWrite(2, LOW); //...apago el led 2...
      noTone(9); //...y no reproduzco el altavoz 
    }
  } else { //o...
    digitalWrite(8, LOW); //...apago el led 8...
    noTone(7); //...y no se reproduce el altavoz
  }
  delay(10); // espero 10 millisegundos y vuelvo a repetir el código
}
