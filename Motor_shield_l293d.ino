#include <AFMotor.h>
 
AF_DCMotor motor1(1, MOTOR12_64KHZ); // tạo động cơ #1, 64KHz pwm  
AF_DCMotor motor2(2, MOTOR12_64KHZ);
AF_DCMotor motor3(3, MOTOR34_64KHZ);
AF_DCMotor motor4(4, MOTOR34_64KHZ);
 
void setup() {  
    
       
    
    motor1.setSpeed(255);     // chọn tốc độ maximum 255`/255
    motor2.setSpeed(255);
    motor3.setSpeed(255);
    motor4.setSpeed(255);
 
}  
 
void loop() 
{        
    motor1.run(FORWARD);      // động cơ tiến 
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
    //motor.run(BACKWARD);     // động cơ lùi  
    delay(1000);
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);
    //motor.run(RELEASE);      //   dừng động cơ
    
 
}
