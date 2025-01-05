## motion detector using Passive infared sensor(PIR) sensor
the link for the circuit is :- https://www.tinkercad.com/things/44gAyzY0kZI-motion-detector?sharecode=undefined
## Description
in the circuit we use a passive infared sensor to detect motion

## Connections

power of pir sensor to 5v or pin

signal pin of pir sensor to digital pin

grond pin of PIR to GND pin

connect a led pin to the arduino

1. **Infrared Radiation (IR):**
    - All objects emit infrared radiation (heat energy) proportional to their temperature.
    - A PIR sensor detects the IR emitted by objects in its field of view.
2. **Dual Pyroelectric Sensors:**
    - Inside a PIR sensor, there are two pyroelectric sensors placed side by side.
    - These sensors measure the IR radiation in their field of view.
    - When no motion is present, both sensors detect similar levels of IR radiation, and the output remains stable.
3. **Motion Detection:**
    - When a warm object (like a person or animal) moves across the sensor's field of view, it causes a change in the IR levels detected by the two sensors.
    - As the object moves from one side of the sensor to the other, the IR radiation fluctuates between the two pyroelectric elements.
    - This change is processed by the sensor's internal circuitry, which triggers the output signal.
4. **Output Signal:**
    - The sensor generates a digital **HIGH** (5V) signal when motion is detected.
    - When no motion is detected, the output remains **LOW** (0V).

---

### **Key Components of a PIR Sensor**

1. **Pyroelectric Element:**
    - Detects infrared radiation changes.
2. **Fresnel Lens:**
    - A semi-spherical plastic lens that focuses IR radiation onto the pyroelectric sensors.
    - It expands the sensor's field of view and improves sensitivity.
3. **Control Circuit:**
    - Processes the signals from the pyroelectric elements.
    - Outputs a digital signal (`HIGH` or `LOW`) to indicate motion.
4. **Adjustable Potentiometers:**
    - **Sensitivity Control:** Adjusts the range of detection.
    - **Time Delay Control:** Sets how long the output signal remains HIGH after detecting motion.

---

### **Key Features of PIR Sensors**

1. **Passive Nature:**
    - PIR sensors do not emit radiation themselves. They only "sense" infrared radiation from objects, making them energy-efficient.
2. **Detection Range:**
    - Typically 5–10 meters, depending on the model.
3. **Field of View:**
    - Often a wide angle, usually around 120° or more, defined by the Fresnel lens.
  
      refrence pdf:-https://cdn-learn.adafruit.com/downloads/pdf/pir-passive-infrared-proximity-motion-sensor.pdf
