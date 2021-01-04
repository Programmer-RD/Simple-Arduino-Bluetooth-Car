#include <AFMotor.h>
AF_DCMotor A(1);
AF_DCMotor B(2);

void setup(){
A.setSpeed(255);//Max Speed
B.setSpeed(255); //Max Speed
Serial.begin(9600);
}

void loop(){
if (Serial.avalable()){
int command = Serial.read();
if (command == 0){
B.run(FORWARD);
A.run(FORWARD);
}
if (command == 1){
B.run(BACKWARD);
A.run(BACKWARD);
}
if (command == 2){
B.run(BACKWARD);
A.run(FORWARD);
}
if (command == 3){
A.run(BACKWARD);
B.run(FORWARD);
}

}


}
// Ranuga-D
