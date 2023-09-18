const float referenciaTensao = 5.0; // Referência de tensão (em volts)

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
    // Realiza a leitura analógica
    //int valorAnalogico = analogRead(A0);
    int valorDigital = digitalRead(2);

    // Converte o valor para tensão (em volts)
    //float tensao = valorAnalogico / 1023.0 * referenciaTensao;
    // Obtém o tempo em segundos
    double tempoEmMilissegundos = millis();
    double tempoEmSegundos = tempoEmMilissegundos / 1000;

    // Envia o valor da tensão e o tempo para o computador via serial
    Serial.print(tempoEmSegundos); // Tempo em segundos
    Serial.print(",");
    //Serial.println(tensao, 4); // 4 casas decimais para a tensão
    Serial.println(valorDigital*5); // Leitura Digital
    delay(1); // Pequeno atraso para evitar sobrecarga da porta serial

}