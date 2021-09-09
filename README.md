# doorbell for my cat
This repository serves as a personal portal for a DIY arduino project I designed and implemented. 
I recently moved and my cat has been leaving the house for concerning lengths of time. It is hard to know when he wants in, because I cannot hear him from my room.
The solution is a cat doorbell. I've include the Arduino suite save file (.ino) from my programming session as well as a diagram for the circuit I designed.
### In short, upon button press: 
 - the meow mix jingle is sent out as a square wave through one of the digital pins on my nano v3 
 - the signal goes through a voltage reduction, and then out to a speaker
 - an led lights up for the duration of the jingle

If you wish to use this, simply upload meow_mix_button.ino to your arduino, paying attention to digital pins I defined, as well as the diagram.
This design is for 5V, use any other voltage and you'll likely have to modify resistor values.
