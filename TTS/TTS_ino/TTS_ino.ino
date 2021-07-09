#include <TTS.h>
#define ledPin 13
char text [50];
boolean state=0;
TTS text2speech;  
void setup() { 
  pinMode(ledPin, OUTPUT); 
}
void loop(){
    state = !state;
    digitalWrite(ledPin, state);
    Test_Speech();
    delay(1000);    
}  
void Test_Speech() {
 text2speech.setPitch(6); 
 strcpy(text, "WHO ARE YOU ");
 text2speech.say(text);
 delay(1000);
 text2speech.setPitch(1);
 strcpy(text, "I am fine, thankyou.");
 text2speech.say(text);
}

