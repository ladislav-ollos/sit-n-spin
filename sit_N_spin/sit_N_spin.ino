const int in_1 = 9 ;
const int in_2 = 10 ;
long randNumber;
//For providing logic to L298 IC to choose the direction of the DC motor

void setup() {
   pinMode(in_1,OUTPUT) ; //Logic pins are also set as output
   pinMode(in_2,OUTPUT) ;
}

void loop() {
   //For Clock wise motion , in_1 = High , in_2 = Low
   analogWrite(in_1,255) ;
   analogWrite(in_2,0) ;
   
   randNumber = random(3000, 4500);
   delay(randNumber) ;
   
   //For brake
   analogWrite(in_1,255) ;
   analogWrite(in_2,255) ;
   randNumber = random(0, 6000);
   delay(randNumber) ;
   
   //For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
   analogWrite(in_1,0) ;
   analogWrite(in_2,255) ;
   randNumber = random(3000, 4500);
   delay(randNumber) ;
   
   //For brake
   analogWrite(in_1,255) ;
   analogWrite(in_2,255) ;
   randNumber = random(0, 6000);
   delay(randNumber) ;

   delay(7000) ;
}