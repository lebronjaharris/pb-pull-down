// Define the pin numbers
const int buttonPin = 2;  // Pin connected to the push button
const int ledPin = 13;     // Pin connected to the built-in LED

// Variable to store the button state
int buttonState = 0;       // Variable to hold the current button state

void setup() {
  // Initialize the button pin as an input with an internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
  
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the state of the push button
  buttonState = digitalRead(buttonPin);
  
  // Check if the button is pressed
  if (buttonState == LOW) {  // Button is pressed (LOW due to pull-up)
    digitalWrite(ledPin, HIGH); // Turn the LED on
  } else {
    digitalWrite(ledPin, LOW);  // Turn the LED off
  }

  // Small delay to debounce the button (optional)
  delay(50); // 50 ms delay for button debounce
}



