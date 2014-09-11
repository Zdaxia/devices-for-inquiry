const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int buttonPin = A1; 

const int mainLedPin =  13;

const int led1 =  5;
const int led2 =  6;
const int led3 =  7;
const int led4 =  8;
const int led5 =  9;
const int led6 =  10;
const int led7 =  11;
const int led8 =  12;

int sensorValue = 0;        // value read from the pot  
int buttonState = 0; 


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  pinMode(buttonPin, INPUT); 
  pinMode(mainLedPin, OUTPUT);
  pinMode(led1, OUTPUT); 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(led5, OUTPUT); 
  pinMode(led6, OUTPUT); 
  pinMode(led7, OUTPUT); 
  pinMode(led8, OUTPUT); 

}

void loop() {


  buttonState = digitalRead(buttonPin);  

  if(buttonState==HIGH){
    Serial.println("TESING");
    sensorValue = analogRead(analogInPin);  
    digitalWrite(mainLedPin, HIGH);
    Serial.println(sensorValue);

    if(sensorValue>750){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    }else if(sensorValue<=750&&sensorValue>720){
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    }else if(sensorValue<=720&&sensorValue>690){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    }else if(sensorValue<=690&&sensorValue>660){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    }else if(sensorValue<=660&&sensorValue>630){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    }else if(sensorValue<=630&&sensorValue>600){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    }else if(sensorValue<=600&&sensorValue>570){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    }else if(sensorValue<570){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
    };

  }
  else{
    Serial.println("OVER"); 
    digitalWrite(mainLedPin, LOW);  
  };       



  delay(200);                     
}







