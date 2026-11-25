char estado; 
int tiempo=1000;
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT); 
}

void loop() {
if(Serial.available()>0){
  estado=Serial.read();
  if(estado=='A'){
    digitalWrite (3,HIGH); 

}
if(estado=='E'){
  digitalWrite (3,LOW); 
}
}

} 
