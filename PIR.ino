int led = 13;                
int pir = 2;              
int state = LOW;             
int val = 0;                 

void setup() {
  pinMode(led, OUTPUT);      
  pinMode(pir, INPUT);    
  Serial.begin(9600);        
}

void loop(){
  val = digitalRead(pir); 
  if (val == HIGH) {         
    digitalWrite(led, HIGH); 
    delay(500);               
    
    if (state == LOW) {
      Serial.println("Motion detected!"); 
      state = HIGH;       
    }
  } 
  else {
      digitalWrite(led, LOW); 
      delay(500);              
      
      if (state == HIGH){
        Serial.println("Motion stopped!");
        state = LOW;       
    }
  }
}
