//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup()
{
}

// the loop function runs over and over again forever
void loop()
{
    static int potPosition;
    potPosition = analogRead(A1);
}
