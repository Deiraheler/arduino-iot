# Arduino IOT project

## Automated Irrigation System: A Solution to Support Zero Hunger

### Materials and Components

Our project utilizes various components to create an automated irrigation system. This system is designed to support UN Sustainable Development Goal No. 2, "Zero Hunger", by optimizing water usage and ensuring that crops receive adequate hydration.

The components used in our system include:

1. **Arduino Nano**: It serves as the central processing unit of our system, controlling the relay and reading the input from the moisture sensor.

2. **Capacitive Soil Moisture Sensor v2.0**: This sensor continuously monitors the moisture levels in the soil. When the soil becomes too dry, the Arduino triggers the relay, which activates the water pump.

3. **SRD-05VDC-SL-C Relay**: This relay is used to control the high-power water pump from the low-power Arduino.

4. **Mini Water Pump**: It is crucial for delivering water from the source to the plants.

5. **Water Tubing**: This tubing is installed across the field to transport water from the pump to the plants.

6. **Wires and Connectors**: Various wires and connectors are used to wire the components together, ensuring safe and reliable operation of the system.

---------------------------------------------------------------
** API and Internet connection is not included in project**

The current design of this project operates without internet connectivity, hence it doesn't incorporate any API integrations or remote control via applications or websites. I dedicated several months to integrating the ESP8266-01 internet module, experimenting with varied configurations and circuitry arrangements. While I faced challenges in this phase, I remain undeterred. My ongoing research aims to successfully incorporate this module into the system. Once achieved, my next goal is to develop a web application to interface with the Arduino through an API. This would be similar to the demonstration I presented in class, where I utilized 'HTML, CSS, JS, AJAX, PHP, and CURL' to remotely control lighting without needing to navigate to different pages, thanks to AJAX and PHP.
