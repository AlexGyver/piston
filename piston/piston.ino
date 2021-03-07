/*
Created 2016
by AlexGyver
AlexGyver Home Labs Inc.
*/

int flag=0;

void setup()    
{       
	pinMode(2, OUTPUT);   
	pinMode(3, OUTPUT); 
	pinMode(4, INPUT); 
} 

void loop() { 

	if(digitalRead(4)==HIGH&&flag==0)//если кнопка нажата    
	{ 
		digitalWrite(3,HIGH); 
		delay(40);
		digitalWrite(3,LOW);
		delay(700);
		digitalWrite(2,HIGH);        
		flag=1;         
	} 
	if(digitalRead(4)==LOW&&flag==1)
	{  
		digitalWrite(2,LOW);          
		flag=0;//обнуляем переменную flag 
	}
	delay(100); 
} 


