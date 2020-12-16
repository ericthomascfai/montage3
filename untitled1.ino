#include <Arduino.h>
/******************************ensemble des pins sur l'arduino********************/
int pinLeds[4]={13,12,11,10}; //tableau de 4 cases entier rempli avec 13,12,11,10
int pinButtons[2]={7,6};  //tableau de 2 cases rempli avec 7 et 6

void setup()
{
    /***************initialisation pin leds*************/
    for(int i=0;i<4;i++)
    {
        pinMode(pinLeds[i],OUTPUT); //met les pins de pinleds en mode sortie

    }
    /************initialisation pin buttons**************/
    for(int i=0;i<2;i++)
    {
        pinMode(pinButtons[i],INPUT); //met les pins de pinbuttons en mode entrée
    }

}
/**************traitement du bouton1 à ON************************/
void button1On()
{
    for(int i=0;i<4;i++)
    {
        if(i==1) //sauf la led de la case1
        {
            continue;
        }
        digitalWrite(pinLeds[i],1); //on allume toutes les leds
    }
}

void buttonOff()
{
    for(int i=0;i<4;i++)
    {
        digitalWrite(pinLeds[i],0); //on éteint toutes les leds
    }
}

void button2On()
{
    for(int i=0;i<4;i++)
    {
        if(i==2) //sauf la led de la case 2
        {
            continue;
        }
        digitalWrite(pinLeds[i],1); //on allume toutes les leds
    }
}
void loop()
{
/*******************code avec montage sur le + ************************/
    if(digitalRead(pinButtons[0])==0) //si le bouton 1 est appuyé
    {
        button1On(); //appel la fonction buttonON
    }
    else
    if(digitalRead(pinButtons[0])==1) //si le bouton est relaché
    {
        buttonOff(); //appel de la fonction buttonOFF
    }
    if(digitalRead(pinButtons[1])==0) //si le bouton 2 est appuyé
    {
        button2On(); //appel de la fonction buttonON
    }
    else
    if(digitalRead(pinButtons[1])==1) //si le bouton est relaché
    {
        buttonOff(); //appel de la fonction buttonOFF
    }


}





