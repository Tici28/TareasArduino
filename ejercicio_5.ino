int distancia = 0; //función que te duevelve un valor en relacion a la distancia

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600); //inicia el puerto serial a una velocidad 9600

  pinMode(8, OUTPUT); //define al led como salida
  pinMode(7, OUTPUT); //define al led como salida
}

void loop()
{
  distancia = 0; //llama a la función para que se ejecute
  Serial.println(distancia); //mide la distancia mediante las ondas ultreasóniucas
  if (0.01723 * readUltrasonicDistance(6, 5) < 150) { //si la distancia es mayor a 150...
    digitalWrite(8, HIGH); //...prende el led 8...
    tone(7, 548668578, 1000); // play tone 300 (C25 = 548668578 Hz) //...y reproduce el altavoz con tono 300 durante 1 segundo
  } else { //o...
    noTone(7); //...no reproduce el altavoz...
    digitalWrite(8, LOW); //...y apaga el led 8
  }
  delay(10); //espera 10 millisegundos y vuelve a repetir el código
}
