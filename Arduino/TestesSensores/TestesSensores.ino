#define analogico A0
#define digital 2

float leituraAnalogica;
float leituraDigital;


void setup() {
  // put your setup code here, to run once:
  pinMode(analogico, INPUT);
  pinMode(digital, INPUT);
  Serial.begin(9600);

}

void loop() {
  leituraAnalogica = analogRead(analogico); //leitura analogica do sensor
  //leituraDigital = digitalRead(digital); //leitura digital do sensor
  
  
  //mostrando as variaveis no monitor serial
  Serial.println(leituraAnalogica); 
  Serial.println(leituraDigital);

  delay(10);
}
