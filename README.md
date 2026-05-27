# Arduino LCD Stopwatch

A simple stopwatch using an Arduino and a 16x2 LCD display.

Features:
- Start stopwatch with button press
- Stop stopwatch with button press
- Hold button to reset
- LCD shows time in **MM:SS:HH** format
- Adjustable LCD contrast with potentiometer

---

## Tools & Parts

- 1x Breadboard
- 1x Arduino Nano / Uno / Pro Mini
- 1x 16x2 LCD (HD44780 compatible)
- 1x 10k potentiometer
- 1x Push button
- Jumper wires
- USB cable

---

## Wiring

### Connect the Arduino Nano to the breadboard.

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

### 1. Connect Arduino
Place the Arduino on the breadboard.

### 2. Wire the LCD
Connect all LCD pins to the Arduino and power.

### 3. Wire the potentiometer
Connect it to control LCD contrast.

### 4. Wire the button
Connect between D12 and D10.

### 5. Plug in USB
Connect Arduino to your computer.

### 6. Open Arduino IDE

### 7. Select board
Choose Arduino Nano / Uno / Pro Mini.

### 8. Select port

### 9. Upload the code

---

## Testing

### Turn potentiometer
Adjust until text appears.

### Press button once
Stopwatch starts.

### Press again
Stopwatch stops.

### Press and hold
Stopwatch resets back to **00:00:00**

---

## Display

Example:

00:00:00

Format:

MM:SS:HH

- MM = minutes
- SS = seconds
- HH = hundredths
