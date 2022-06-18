#include <PS4Controller.h>

int   led1 = 15;
int   led2 = 16;
int   led3 = 17;
int   led4 = 18;
int   led5 = 19;
int   led6 = 21;
int   led7 = 22;
int   led8 = 23;

void notify()
{
  digitalWrite(led1, PS4.Left());
  digitalWrite(led2, PS4.Down());
  digitalWrite(led3, PS4.Right());
  digitalWrite(led4, PS4.Up()); 

  digitalWrite(led5, PS4.Square());
  digitalWrite(led6, PS4.Cross());
  digitalWrite(led7, PS4.Circle());
  digitalWrite(led8, PS4.Triangle()); 
}

void onConnect()
{
  Serial.println("Connected!.");
}

void onDisConnect()
{
  Serial.println("Disconnected!.");    
}

void setUpPinModes()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);      

  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT); 
}

void setup() 
{
  setUpPinModes();
  Serial.begin(115200);
  PS4.attach(notify);
  PS4.attachOnConnect(onConnect);
  PS4.attachOnDisconnect(onDisConnect);
  PS4.begin();
  Serial.println("Ready.");
}

void loop() 
{

}
