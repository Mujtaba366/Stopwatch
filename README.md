# Arduino LCD Random Number + Countdown Timer

A simple Arduino project using a **16x2 LCD** and a **button**.

The LCD shows:
- A **random number** on the top line
- A **10-second countdown** on the bottom line

When the countdown reaches 0:
- A new random number appears
- Countdown resets and starts again

---

## Tools & Parts

### Hardware
- 1x Breadboard
- 1x Arduino Nano / Uno / Pro Mini
- 1x 16x2 LCD (HD44780 compatible)
- 1x 10k potentiometer
- 1x Push button
- Jumper wires

### Software
- Arduino IDE

---

## Wiring

### Connect the Arduino Nano to the breadboard.

---

### 16x2 LCD (HD44780 compatible)

VSS → GND  
VDD → 5V  
V0 → Middle pin of 10k potentiometer  
RS → D9  
RW → GND  
E → D8  
D4 (Display) → D2  
D5 (Display) → D3  
D6 (Display) → D4  
D7 (Display) → D5  
A → 5V  
K → GND  

---

### Potentiometer (10k)

One side → 5V  
Other side → GND  
Middle pin → V0 (LCD contrast)

---

### Button

One side → D12  
Other side → D10

---

## Step-by-Step

### 1. Connect the Arduino
Place the Arduino on the breadboard or beside it.

### 2. Wire the LCD
Connect all LCD pins using the wiring list above.

### 3. Connect the potentiometer
Wire the contrast control.

### 4. Connect the button
One side to D12  
Other side to D10

### 5. Plug in USB
Connect Arduino to your computer.

### 6. Open Arduino IDE

### 7. Select board
Tools → Board

### 8. Select port
Tools → Port

### 9. Upload the code

---

## Testing

### Turn potentiometer
Adjust until text appears.

### LCD display

Top line:
- Random number

Bottom line:
- Countdown from **10 → 1**

### Every 10 seconds
- Countdown resets
- Random number changes

---

## Result

The LCD continuously shows a random number and updates it every 10 seconds while displaying a live countdown.
