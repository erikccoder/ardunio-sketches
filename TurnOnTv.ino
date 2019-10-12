/*
 * IRremote: IRsendRawDemo - demonstrates sending IR codes with sendRaw
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 *
 * IRsendRawDemo - added by AnalysIR (via www.AnalysIR.com), 24 August 2015
 *
 * This example shows how to send a RAW signal using the IRremote library.
 * The example signal is actually a 32 bit NEC signal.
 * Remote Control button: LGTV Power On/Off. 
 * Hex Value: 0x20DF10EF, 32 bits
 * 
 * It is more efficient to use the sendNEC function to send NEC signals. 
 * Use of sendRaw here, serves only as an example of using the function.
 * 
 */


#include <IRremote.h>

IRsend irsend;

unsigned int irSignal[] = {4600,4250,700,400,700,1550,700,1500,700,1500,700,400,700,400,700,450,700,400,700,400,700,1500,700,1500,700,1550,700,400,700,400,700,400,700,400,700,400,700,450,700,1500,700,1500,700,400,700,400,700,450,650,450,700,1500,700,1500,700,400,700,400,700,1550,700,1500,700,1500,700,1500,700};
int khz = 38; // 38kHz carrier frequency for the NEC protocol

void setup()
{
  delay(6000); //In this example, the signal will be repeated every 5 seconds, approximately.
  irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz); //Note the approach used to automatically calculate the size of the array.
}

void loop(){
}
