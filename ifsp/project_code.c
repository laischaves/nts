/*
Code Name: Arduino Wifi Control Car
Code URI: https://circuitbest.com/category/arduino-projects/
Additional Board Manager URL: http://arduino.esp8266.com/stable/package_esp8266com_index.json
Install: ESP8266 by ESP8266 Community
Author: M Tech-Ideas
Author URI: https://circuitbest.com/author/admin/
Description: This program is used to control a robot using a app
that communicates with Arduino through a ESP8266 Module.
App URI: https://drive.google.com/file/d/1pvtWsTeXhcJdpHMfGlFmbGDuH7eoLfoP/view?usp=sharing
Version: 2.0
License: Remixing or Changing this Thing is allowed. Commercial use is not allowed.
*/


#define ENA   14          // Enable/speed motors Right        GPIO14(D5) | Habilitar/velocidade motores Direita
#define ENB   12          // Enable/speed motors Left         GPIO12(D6) | Habilitar/velocidade motores Esquerda
#define IN_1  15          // L298N in1 motors Rightx          GPIO15(D8) | L298N in1 motores Direita
#define IN_2  13          // L298N in2 motors Right           GPIO13(D7) | L298N in2 motores Direita
#define IN_3  2           // L298N in3 motors Left            GPIO2(D4)  | L298N in3 motores Esquerda
#define IN_4  0           // L298N in4 motors Left            GPIO0(D3)  | L298N in4 motores Esquerda

#include <ESP8266WiFi.h> // biblioteca pra usar o WIFI
#include <WiFiClient.h> // biblioteca de cliente de WIFI
#include <ESP8266WebServer.h> // Biblioteca de WebServer

String command;             //String to store app command state. | string para guardar o comando de estado do app
int speedCar = 800;         // 400 - 1023.                       | velocidade do carro entre 400 - 1023
int speed_Coeff = 3;                                           //| coeficiente de velocidade (?)

const char* ssid = "Wifi Robot by Monalisa";                   // nsei o que eh isso
ESP8266WebServer server(80);                                   // num do server?

void setup() {  // definição de pins

 pinMode(ENA, OUTPUT);
 pinMode(ENB, OUTPUT);
 pinMode(IN_1, OUTPUT);
 pinMode(IN_2, OUTPUT);
 pinMode(IN_3, OUTPUT);
 pinMode(IN_4, OUTPUT);

  Serial.begin(115200);

// Connecting WiFi || conexão do WiFi

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);

 // Starting WEB-server || Começar o web-server
     server.on ( "/", HTTP_handleRoot );
     server.onNotFound ( HTTP_handleRoot );
     server.begin();
}

void goAhead(){ // ir pra frente

      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, HIGH);
      analogWrite(ENA, speedCar);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, HIGH);
      analogWrite(ENB, speedCar);
  }

void goBack(){ // ir pra trás

      digitalWrite(IN_1, HIGH);
      digitalWrite(IN_2, LOW);
      analogWrite(ENA, speedCar);

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      analogWrite(ENB, speedCar);
  }

void goRight(){ // ir pra direita

      digitalWrite(IN_1, HIGH);
      digitalWrite(IN_2, LOW);
      analogWrite(ENA, speedCar);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, HIGH);
      analogWrite(ENB, speedCar);
  }

void goLeft(){ // ir pra esquerda

      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, HIGH);
      analogWrite(ENA, speedCar);

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      analogWrite(ENB, speedCar);
  }

void goAheadRight(){ // ir pra frente e pra direita

      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, HIGH);
      analogWrite(ENA, speedCar/speed_Coeff);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, HIGH);
      analogWrite(ENB, speedCar);
   }

void goAheadLeft(){ ir pra frente e pra esquerda

      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, HIGH);
      analogWrite(ENA, speedCar);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, HIGH);
      analogWrite(ENB, speedCar/speed_Coeff);
  }

void goBackRight(){ // ir pra tras e pra direita

      digitalWrite(IN_1, HIGH);
      digitalWrite(IN_2, LOW);
      analogWrite(ENA, speedCar/speed_Coeff);

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      analogWrite(ENB, speedCar);
  }

void goBackLeft(){ // ir pra tras e pra esquerda

      digitalWrite(IN_1, HIGH);
      digitalWrite(IN_2, LOW);
      analogWrite(ENA, speedCar);

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      analogWrite(ENB, speedCar/speed_Coeff);
  }

void stopRobot(){ // parar o robo

      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, LOW);
      analogWrite(ENA, speedCar);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, LOW);
      analogWrite(ENB, speedCar);
 }

void loop() {
    server.handleClient(); // comandos e funções

      command = server.arg("State");
      if (command == "F") goAhead();
      else if (command == "B") goBack(); // comando B, função ir para trás
      else if (command == "L") goLeft(); // etc
      else if (command == "R") goRight();
      else if (command == "I") goAheadRight();
      else if (command == "G") goAheadLeft();
      else if (command == "J") goBackRight();
      else if (command == "H") goBackLeft();
      else if (command == "0") speedCar = 400; // velocidades
      else if (command == "1") speedCar = 470;
      else if (command == "2") speedCar = 540;
      else if (command == "3") speedCar = 610;
      else if (command == "4") speedCar = 680;
      else if (command == "5") speedCar = 750;
      else if (command == "6") speedCar = 820;
      else if (command == "7") speedCar = 890;
      else if (command == "8") speedCar = 960;
      else if (command == "9") speedCar = 1023;
      else if (command == "S") stopRobot(); // parada
}

void HTTP_handleRoot(void) { // comunicação com o servidor

if( server.hasArg("State") ){
       Serial.println(server.arg("State")); // print do estado no serial
  }
  server.send ( 200, "text/html", "" );
  delay(1);
}


