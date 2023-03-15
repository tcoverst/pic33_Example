#include <p33FJ128GP804.h> // Include the PIC33 header file

int main() {

    // Configure the digital input and output pins
    TRISAbits.TRISA0 = 1; // Configure RA0 as input
    TRISBbits.TRISB0 = 0; // Configure RB0 as output

    // Set the initial state of the output pin
    LATBbits.LATB0 = 0; // Set RB0 to low

    // Loop indefinitely
    while(1) {

        // Read the state of the input pin
        if(PORTAbits.RA0 == 1) {
            // If RA0 is high, set RB0 to high
            LATBbits.LATB0 = 1;
        } else {
            // If RA0 is low, set RB0 to low
            LATBbits.LATB0 = 0;
        }

    }

    return 0;
}
