#include <Arduino.h>

int pinLeds[4]={13,12,11,10};
int pinButtons[2]={7,6};

void setup()
{
    /***************initialisation pin leds*************/
    for(int i=0;i<4;i++)
    {
        pinMode(pinLeds[i],OUTPUT);

    }
    /************initialisation pin buttons**************/
    for(int i=0;i<2;i++)
    {
        pinMode(pinButtons[i],INPUT);
    }

}

void button1On()
{
    for(int i=0;i<4;i++)
    {
        if(i==1)
        {
            continue;
        }
        digitalWrite(pinLeds[i],1);
    }
}

void buttonOff()
{
    for(int i=0;i<4;i++)
    {
        digitalWrite(pinLeds[i],0);
    }
}

void button2On()
{
    for(int i=0;i<4;i++)
    {
        if(i==2)
        {
            continue;
        }
        digitalWrite(pinLeds[i],1);
    }
}
void loop()
{

    if(digitalRead(pinButtons[0])==0)
    {
        button1On();
    }
    else
    if(digitalRead(pinButtons[0])==1)
    {
        buttonOff();
    }
    if(digitalRead(pinButtons[1])==0)
    {
        button2On();
    }
    else
    if(digitalRead(pinButtons[1])==1)
    {
        buttonOff();
    }


}





