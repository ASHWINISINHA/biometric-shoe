MIT License

Copyright (c) [2017] [Ashwini kumar sinha]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


int s1=A1;
int s2=A2;
int s3=A3;
int s4=A4;
int s5=A5;
int s6=A0;


void setup()
{

Serial.begin(9600);


  
}

void loop()
{
  
Serial.print("\t");
Serial.print("First sensor val= ");
Serial.println(analogRead(A0)* (5.0 / 1023.0));


Serial.print("\t");
Serial.print("Second sensor val= ");
Serial.print(analogRead(A1)* (5.0 / 1023.0));


Serial.print("\t");
Serial.print("Third sensor val= ");
Serial.print(analogRead(A2)* (5.0 / 1023.0));



Serial.print("\t");
Serial.print("Forth sensor val= ");
Serial.print(analogRead(A3)* (5.0 / 1023.0));



Serial.print("\t");
Serial.print("Fiftht sensor val= ");
Serial.print(analogRead(A4)* (5.0 / 1023.0));



Serial.print("\t");
Serial.print("sixth sensor val= ");
Serial.print(analogRead(A5)* (5.0 / 1023.0));





  
  
  
  
  }

