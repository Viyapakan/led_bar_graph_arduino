How It Works:
A bar graph is a series of LEDs in a line.
It’s made up of a row of LEDs with an analog
input,which is a potentiometer.

The Sketch
The sketch first reads the input from the potentiometer. It maps the
input value to the output range, in this case nine LEDs. Then it sets
up a for loop over the outputs. If the output number of the LED in
the series is lower than the mapped input range, the LED turns on;
if not, it turns off.
