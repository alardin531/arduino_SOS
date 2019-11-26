//
//  main.c
//  arduino_SOS
//
//  Created by s20181102934 on 2019/11/26.
//  Copyright © 2019 win. All rights reserved.
//


int lPin=13;
void setup() {
    // put your setup code here, to run once:
    pinMode(lPin,OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    delay(1000);
    for(int i=0;i<3;i++){
        digitalWrite(lPin,HIGH);
        delay(120);
        digitalWrite(lPin,LOW);
        delay(120);
    }
    delay(500);
    for(int i=0;i<3;i++){
        digitalWrite(lPin,HIGH);
        delay(640);
        digitalWrite(lPin,LOW);
        delay(500);
    }
    delay(200);
    for(int i=0;i<3;i++){
        digitalWrite(lPin,HIGH);
        delay(120);
        digitalWrite(lPin,LOW);
        delay(120);
    }
}
