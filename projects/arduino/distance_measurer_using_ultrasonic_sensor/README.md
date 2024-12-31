#Distance measurer using ultrasonic sensor
## Description
this project measures the distance between itself and the object in front of it and displays it
this project is made on tinkercad
the link to accses it is below
https://www.tinkercad.com/things/lbSUoqXfsbG-ultrasonic-sensor-distance-measurer?sharecode=90bjyFp1r8R3ps6TguoQeQNAuNJn3cV_rWiUgmrL4h8
#Connections
the connections are as shown
![image.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/adc59644-d100-4eeb-a002-8eca00da8117/45e5a5e3-5cbe-41e8-a9bb-208f3b5c337c/image.png)

VCC to 5v 

GND to GND

trig to n pin

echo to n pin
#working of sensor
the sequence of events are:-
1.emission:-when the trigger pin is activated it emits a ultrasonic soundwave
2.sound wave travels to object:- the sound wave travels untill it hits an object(wall,person)
3.sound wave returns:-after hitting the object the sound wave reflects back to the sensor
4.echo pin becomes HIGH:-the echo pin stays HIGH for the duration the sound wave to travel back to the sensor after the emission
5.the measurement of distance: The pulseIn() function measures the length of time (in microseconds) that the Echo pin is HIGH. This time is proportional to how far the object is from the sensor.

#explnation of code(reason for delay)
We need to provide the HC-SR04 with a fitting trigger signal. When you read the datasheet of the HC-SR04 you will see that it needs a 10us trigger pulse.
the link below is the datasheet of the sensor
https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf

The first delay of 2us is to make sure we are at an established LOW level on the trigger pin, since the pin might have been HIGH before that. We are delaying here to make sure, that the HC-SR04 actually registered the level as LOW, even if it was HIGH before. If we would change from HIGH to LOW and back to HIGH as fast as we can, then the HC-SR04 might not have enough time to actually see the pin going low. Its mostly a measure to ensure the code working correctly here . 
 
The second delay is for the actual trigger pulse. The datasheet specifies it as 10us length, so that is what we delay here. After that we go back to LOW to end the trigger pulse and wait for the echo pulse to come.

#working of the math
time=distance/speed
thersfore:-
distance=time*speed(of ultrasonic wave i.e. 0.034 at 20degree celcius)cm/us
Since the sound travels both to the object and back, the actual distance to the object is half the time calculated from the Echo pin's HIGH duration.
