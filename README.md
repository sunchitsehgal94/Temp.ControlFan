# Temp.ControlFan
Regulating the fan speed on the basis of varying temperature.

The hardware for the fan is pretty basic, wherein we have used:

  1) LM35 Temperature Sensor
  2) Arduino Uno ATMEGA 328P
  3) 12V DC Fan
  4) ESC (Electronic Speed Controller)
  
  The code defines a specified threshold temperature. If the temperature of the Surrounding shoots above a specified 
  temperature, The fan starts working using the digital.write() function.. The ESC Controls the speed of the working fan.
  
The analog output from the LM35 temperature sensor is converted into actual temperature value using
tempC= (5.0*tempC*100.0)/1024.0;

  The processing code provides a graphical visual of the temperature versus time graph.
