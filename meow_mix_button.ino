#define led 2
#define button 4
#define out 6
int buttonState = 0;

//Notes defined here as their period in microseconds (Hz -> us)
int b = 2028;
int aSharp = 2145;
int a = 2272;
int gSharp = 2409;
int g = 2551;
int fSharp = 2710;
int f = 2865;
int e = 3039;
int d = 3412;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // On button press, led lights up and song plays uninterrupted
  buttonState = digitalRead(button);
  if (buttonState == HIGH){
    digitalWrite(led, HIGH);
    // The meow mix song, in it's ugly entirety
    playNote(g);
    playNote(fSharp);
    playNote(e);
    playNote(d);
    playNote(g);
    playNote(fSharp);
    playNote(e);
    playNote(d);
    playNote(g);
    playNote(fSharp);
    playNote(g);
    playNote(gSharp);
    playNote(a);
    playNote(fSharp);
    playNote(e);
    playNote(d);
    playNote(a);
    playNote(fSharp);
    playNote(e);
    playNote(d);
    playNote(a);
    playNote(fSharp);
    playNote(e);
    playNote(d);
    playNote(a);
    playNote(fSharp);
    playNote(a);
    playNote(aSharp);
    playNote(b);
    playNote(g);
    playNote(e);
    playNote(d);
    digitalWrite(led, LOW);
  }else{
    digitalWrite(led, LOW);
  }
}

// Creating square wave via microsecond delay function lol
void playNote(int interval){
  // this bit of math normalizes the counters target value so that all notes play
  // for the same length of time. the reason why division happens twice is because my nano
  // refused to divide a larger integer. The idea is t = (some constant)/interval
  int x = 0;
  int i = interval/10;
  int t = 10000/i;
  while (x < t){
    //output 1's and 0's on the provided interval
    digitalWrite(out, HIGH);
    delayMicroseconds(interval);
    digitalWrite(out, LOW);
    delayMicroseconds(interval);
    x+=1;
  }
}
