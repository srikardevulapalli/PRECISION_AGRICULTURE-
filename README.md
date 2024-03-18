# PRECISION_AGRICULTURE

Link to Publication:
https://ieeexplore.ieee.org/document/8554601

The project work is based on the usage of  precision agriculture system which is a technique used in farming to observe, measure and respond to various factors in crops using Cyber Physical system, which involves monitoring system using IoT model and an actuator. Rapid socio-economic changes in some developing countries, including India, are creating new scopes for application of precision agriculture. The implications of dramatic shifts for economic development, urbanization and energy consumption in some developing countries are immense. This precision agriculture based on Cyber Physical system (PACPS) is developed to facilitate constant monitoring of the water       requirements in plants and thereby provides automated water supply which considerably         decreases the physical labor cost, it also enables a constant nourishment to plant, reducing soil erosion. This system also provides data set to user which facilitates to perform further analysis of data.
CHAPTER 1
                       INTRODUCTION

1.1	Objective 
Precision agriculture is used to identify and take into account soil and yield variability within a single field. It can be used to guide and better define the farmer’s decisions.

1.2	Motivation

Agriculture has been a traditional lifestyle practice in India since ages. Even today it is practiced on a large scale. Farming involves laborious work and farmers have to work physically throughout the day to maintain and nourish the crop. In India, majority of the farms have small field size. More than 58 percent of operational holdings in the country have size less than 1ha. There is a scope of implementing precision agriculture for crops like, rice and wheat. Commercial as well as horticultural crops also show a wider scope for precision agriculture in the cooperative farms. Nearly two-third arable land in India is rain-fed. The crop yields are very low (≈1t ha-1) and very good potential exists for increasing productivity of rain-fed Cropping systems.
In order to employ working labour every day for work is also expensive. There is a partial shift in the trend of farming from traditional practices to using machines which are used for faster harvesting, ploughing of crops etc. They have reduced the physical human effort up to some extent. There is also a significant growth and inclination towards using IoT based systems for automation and supervision.
In addition to that IoT provides an opportunity to store data from sensors on larger scale and enables accurate processing of data in real time. This gives an opportunity to implement IoT based technology in farming sector so as to maintain the crops under constant supervision. This proposed PACPS system focuses on the aspect of automating the part of agriculture process which involves watering the plants whenever required in contrast to the would be watered only at a particular time of day in large quantities. In order to leverage the water usage and reduce the supervision, this system is helpful. The automation of this process saves time, labour and also limits nutrient erosion from soil due to constant and small flow of water. This system also solves the problem of drying of the soil, especially in summer season. The PACPS system is designed in a way to monitor the water requirement in the soil and appropriately deliver the required water quantity. This system can also be used in home gardens, especially it helps the owners in watering plants even if there isn’t anybody at home. The system design also facilitates to upload data online so that users can access the data remotely and perform further analysis. 

 1.3 Problem Statement
             
In traditional agriculture practices, the plants would be watered only at a particular time of day in large quantities. It is observed that large scale watering at a time isn’t recommended because roots in the plants would absorb the water at a slower, considerable rate and meanwhile the water is absorbed by the plants, the water might evaporate and lead to water loss. In order to maintain a garden or a farm, daily supervision is required.   It takes more time to water whole farm manually. 

1.4 Precision agriculture
Precision agriculture is one of many modern farming practices that make production more efficient. With precision agriculture, farmers and soils work better, not harder.
A better name for precision agriculture might be “site-specific agriculture”. Growers are able to take large fields and manage them as though they are a group of small fields. This reduces the misapplication of products and increases crop and farm efficiency. It has been said farmers were the first land stewards. They use research about weather patterns, soil temperature and humidity, growth, and other factors. They rotate crops to improve diversity, and monitor irrigation rates so that salts do not accumulate. They also use precision agriculture practices to apply nutrients, water, seed, and other agricultural inputs to grow more crops in a wide range of soil environments. Precision agriculture can help farmers know how much and when to apply these inputs.
 1.5 Cyber Physical System
 A cyber-physical system (CPS) is a mechanism that is controlled or monitored by computer-based algorithms, tightly integrated with the Internet and its users. In cyber-physical systems, physical and software components are deeply intertwined, each operating on different spatial and temporal scales, exhibiting multiple and distinct behavioral modalities, and interacting with each other in a myriad of ways that change with context. Examples of CPS include smart grid, autonomous automobile systems, medical monitoring, process control systems, robotics systems, and automatic pilot avionics. CPS involves transdisciplinary approaches, merging theory of cybernetics, mechatronics, and design and process science. The process control is often referred to as embedded systems. In embedded systems, the emphasis tends to be more on the computational elements, and less on an intense link between the computational and physical elements. CPS is also similar to the Internet of Things (IoT), sharing the same basic architecture; nevertheless, CPS presents a higher combination and coordination between physical and computational elements. Precursors of cyber-physical systems can be found in areas as diverse as aerospace, automotive, chemical processes, civil infrastructure, energy, healthcare, manufacturing, transportation, entertainment, and consumer appliances.




1.6 Differences between Wireless Sensor Networks and Cyber   Physical System
A Wireless sensor network can be defined as a network of devices that can communicate the information gathered from a monitored field through wireless links. The data is forwarded through multiple nodes, and with a gateway, the data is connected to other networks like wireless Ethernet. WSN is a wireless network that consists of base stations and numbers of nodes (wireless sensors).These networks are used to monitor physical or environmental conditions like sound, pressure, temperature and co-operatively pass data through the network to a main location whereas Cyber-Physical System is a holonic system which consists of a 'physical entity' and its 'cyber-twin' connected together. This 'cyber-twin' is basically a 'computational-relation-model' of the physical entity which means that it can virtually replicate the behavior of the physical machine, and give an insight on how will the machine react when prompted with various actions. The connection can be done using sensors and actuators. They come from different research communities, though, and so they have different emphasis. CPS has roots in control, computer science, real-time systems, and sensor networks. IoT has roots in communication networks and wireless communication. This tends to influence the focus of research in conferences that highlight the particular topic. CPS emphasizes hybrids systems and formal verification of dynamical systems. IoT emphasizes communication protocols. Both also consider issues of privacy and security, among many others.



 
CHAPTER 2
LITERATURE SURVEY


2.1	PREVIOUS WORKS
The work in [1] describes a real-time, in-situ agricultural internet of things (IoT) device designed to monitor the state of the soil and the environment. This device was designed to be compatible with open hardware and it is composed of temperature and humidity sensors (soil and environment), electrical conductivity of the soil and luminosity, Global Positioning System (GPS) and a ZigBee radio for data communication.
The work in paper [2] describes the design and making of  simple prototype of monitoring precision agriculture system using wireless sensor modules. It is accomplished by optimizing the designed communication using Zigbee communication module and other sensor modules. We have several sensors for monitoring the precision agriculture, such as temperature, humidity, pressure, and 
soil moisture. The result of the measuring experiment shows the agriculture data sensors by real time communication.
The work in paper [3] proposes and demonstrates an economical and easy to use Arduino based controlled irrigation system. The proposed system also uses the Arduino microcontroller which is an effective tool to use easy to code and troubleshoot the errors. Arduino programming language is developed using Embedded C and easy to learn for students and beginners.
The work in paper [4] proposes a LoRa- based smart irrigation system. In this 
system, the irrigation node is mainly composed of LoRa communication module, solenoid valve and hydroelectric generator. The irrigation node sends data to cloud through LoRa gateways via wireless transmission. The system can be controlled remotely by mobile applications. Experimental results show that both transmission distance and energy consumption in the proposed system are reliable the proposed system are reliable. The work in [5] illustrated the use of Wi-Fi module to upload the data online so as to access data remotely. The proposed model implements uses the LAN of the system to which the microcontroller and uploads the data to an online web portal Plotly, which receives the data through the Arduino board and performs the required analysis.
The authors of [7] focused on the needs of precision agriculture, especially in the regions where situations like frequent earthquakes and volcanoes, which might pose a risk to farmers as well as the farming land. The automated system of agriculture facilitates less human interference, which in turn reduce the risk to humans in adverse situations















                               CHAPTER 3
         DESCRIPTION OF USED COMPONENTS

LIST OF USED COMPONENTS

•	Arduino Uno
•	Soil Moisture Sensor
•	Solenoid Valve
•	RF transceiver module (NRF24L01)
•	Relay
•	ESP8266 Wi-Fi module
•	Solar Panel

3.1 ARDUINO UNO
The Arduino Uno is a microcontroller board based on the ATmega328. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz crystal oscillator, a USB connection, a power jack, an ICSP header, and a reset button. It contains everything needed to support the microcontroller. The Uno differs from all preceding boards in that it does not use the FTDI USB-to-serial driver chip. Instead, it features the Atmega8U2 programmed as a USB-to-serial converter.
Arduino Open Source Platform
The Arduino Uno can be powered via the USB connection or with an external power supply. The power source is selected automatically.
External (non-USB) power can come either from an AC-to-DC adapter (wall-wart) or battery. The adapter can be connected by plugging a 2.1mm center-positive plug into the board's power jack. Leads from a battery can be inserted in the Gnd and Vin pin headers of the POWER connector.
The board can operate on an external supply of 6 to 20 volts. If supplied with less than 7V, however, the 5V pin may supply less than five volts and the board may be unstable. If using more than 12V, the voltage regulator may overheat and damage the board. The recommended range is 7 to 12 volts.
The power pins are as follows:
VIN
The input voltage to the Arduino board when it's using an external power source (as opposed to 5 volts from the USB connection or other regulated power source). You can supply voltage through this pin, or, if supplying voltage via the power jack, access it through this pin.
5V
The regulated power supply used to power the microcontroller and other components on the board. This can come either from VIN via an on-board regulator, or be supplied by USB or another regulated 5V supply.
3V3
A 3.3 volt supply generated by the on-board regulator. Maximum current draw is 50 mA.
GND
Ground pins.
![image](https://user-images.githubusercontent.com/111369239/189751708-71a3599a-ebac-4b20-ba92-a4741e689fc9.png)


Fig [3.1] Arduino UNO
 

SPECIFICATIONS

Microcontroller	ATmega328
Operating Voltage	5V
Input Voltage (recommended)	7-12V
Input Voltage (limit)	6-20V
Digital I/O Pins	14 (of which 6 provide PWM
output)
Analog Input Pins	6
DC Current per I/O Pin	40 mA
DC Current for 3.3V Pin	50 mA
Flash Memory	32 KB of which 0.5 KB used by
Bootloader
SRAM	2 KB
EEPROM	1 KB
Clock Speed	16 MHz
LED_BUILTIN	13
Length	101.52 mm
Width	53.3 mm
Weight	37 g

 





![image](https://user-images.githubusercontent.com/111369239/189751677-15f716c9-c681-4a98-ae69-a64786388b76.png)



Table[3.1] Specifications of Arduino UNO






 
Input and Output
Each of the 14 digital pins on the Uno can be used as an input or output, using pinMode(), digitalWrite(), and digitalRead() functions. They operate at 5 volts. Each pin can provide or receive a maximum of 40 mA and has an internal pull-up resistor (disconnected by default) of 20-50 k Ohms.
In addition, some pins have specialized functions:
Serial 0 (RX) and 1 (TX), Used to receive (RX) and transmit (TX) TTL serial data. These pins are connected to the corresponding pins of the ATmega8U2 USB-to-TTL Serial chip.

External Interrupts
2 and 3 pins can be configured to trigger an interrupt on a low value, a rising or falling edge, or a change in value. See the attachInterrupt () function for details.
PWM
3, 5, 6, 9, 10, and 11, provide 8-bit PWM output with the analogWrite () function.
SPI
10 (SS), 11 (MOSI), 12 (MISO), 13 (SCK), these pins support SPI communication, which, although provided by the underlying hardware, is not currently included in the Arduino language.
LED
There is a built-in LED connected to digital pin 13. When the pin is HIGH value, the LED is on, when the pin is LOW, it's off.
The Uno has 6 analog inputs, each of which provide 10 bits of resolution (i.e. 1024 different values). By default they measure from ground to 5 volts, though is it possible to change the upper end of their range using the AREF pin and the analogReference function.
Additionally, some pins have specialized functionality:
I2C
4 (SDA) and 5 (SCL),Support I2C (TWI) communication using the Wire library. There are a couple of other pins on the board.
AREF	
Reference voltage for the analog inputs. Used with analogReference().
RESET
Bring this line LOW to reset the microcontroller. Typically used to add a reset button to shields which block the one on the board.
Communication
The Arduino Uno has a number of facilities for communicating with a computer, another Arduino or other microcontrollers. The ATmega328 provides UART TTL (5V) serial communication, which is available on digital pins 0 (RX) and 1 (TX). An ATmega8U2 on the board channels this serial communication over USB and appears as a virtual com port to software on the computer. The ‘8U2 firmware uses the standard USB COM drivers, and no external driver is needed. However, on Windows, an *.inf file is required..
The Arduino software includes a serial monitor which allows simple textual data to be sent to and from the Arduino board. The RX and TX LEDs on the board will flash when data is being transmitted via the USB-to serial chip and USB connection to the computer (but not for serial communication on pins 0 and 1).
3.2 SOIL MOISTURE SENSOR





![image](https://user-images.githubusercontent.com/111369239/189751612-cb4e55c0-c835-4345-b554-dbe984b2b5ae.png)


                                 Fig. [3.2] Soil moisture sensor
Soil moisture sensors measure the volumetric water content in soil. Since the direct gravimetric measurement of free soil moisture requires removing, drying, and weighting of a sample, soil moisture sensors measure the volumetric water content indirectly by using some other property of the soil, such as electrical resistance, dielectric constant, or interaction with neutrons, as a proxy for the moisture content. The relation between the measured property and soil moisture must be calibrated and may vary depending on environmental factors such as soil type, temperature, or electric conductivity. Reflected microwave radiation is affected by the soil moisture and is used for remote sensing in hydrology and agriculture. Portable probe instruments can be used by farmers or gardeners. The soil moisture sensor used in the project is shown in Fig. [3.2].
Soil moisture sensors typically refer to sensors that estimate volumetric water content. Another class of sensors measure another property of moisture in soils called water potential; these sensors are usually referred to as soil water potential sensors and include tensiometers and gypsum blocks.
Technologies commonly used to indirectly measure volumetric water content (soil moisture) include:
Frequency Domain Reflectometry (FDR): The dielectric constant of a certain volume element around the sensor is obtained by measuring the operating frequency of an oscillating circuit.
Time Domain Transmission (TDT) and Time Domain Reflectometry (TDR): The dielectric constant of a certain volume element around the sensor is obtained by measuring the speed of propagation along a buried transmission line.
 Neutron moisture gauges: The moderator properties of water for neutrons are utilized to estimate soil moisture content between a source and detector probe.
Soil resistivity: Measuring how strongly the soil resists the flow of electricity between two electrodes can be used to determine the soil moisture content.
Galvanic cell: The amount of water present can be determined based on the voltage the soil produces because water acts as an electrolyte and produces electricity. The technology behind this concept is the galvanic cell. 
      
Specifications
Range: 0 to 45% volumetric water content in soil (capable of 0 to 100% VWC with alternate calibration) 
Accuracy: 4% typical 
13- bit resolution : 0.05% 12-bit resolution: 0.1% 
10- bit resolution : 0.4%
 Power: 3 mA @ 5VDC 
Operating temperature: –400C to +600C
 Dimensions: 8.9 cm  1.8 cm  0.7 cm (active sensor len gth 5 cm) 
Stored calibration Slope: 108%/volt 
Intercept: –42%

Working

![image](https://user-images.githubusercontent.com/111369239/189751589-9118f695-ba4c-4777-ae65-7f86c0c13462.png)




 
 Fig[3.3] Soil moisture sensor working

The Soil Moisture Sensor uses capacitance to measure dielectric permittivity of the surrounding medium. In soil, dielectric permittivity is a function of the water content. The sensor creates a voltage proportional to the dielectric permittivity, and therefore the water content of the soil. The sensor averages the water content over the entire length of the sensor. There is a 2 cm zone of influence with respect to the flat surface of the sensor, but it has little or no sensitivity at the extreme edges. The figure above shows the electromagnetic field lines along a cross-section of the sensor, illustrating the 2 cm zone of influence. The module also contains a potentiometer, which will set the threshold value. This threshold value will be compared by the LM393 comparator. The output LED will light up and down according to this threshold value. 

          
3.3 SOLENOID VALVE

Solenoid valve is used wherever fluid flow has to be controlled automatically. They are being used to an increasing degree in the most varied types of plants and equipment. The variety of different designs which are available enables a valve to be selected to specifically suit the application in question. 
Operation of solenoid valve
To the mode of actuation, a distinction is made between direct- valves, internally piloted valves, and externally piloted valves. A further distinguishing feature is the number of port connections or the number of flow paths ("ways"). 
Direct-acting solenoid valve
With a direct-acting solenoid valve, the seat seal is attached to the solenoid core. In the de-energized condition, a seat orifice is closed, which opens when the valve is energized. 
Direct-acting 2-way solenoid valve


![image](https://user-images.githubusercontent.com/111369239/189751564-b50c481c-24df-4e18-aeb3-88a4153c3e86.png)



Fig[3.4] Direct-acting 2-way solenoid valve

Two-way solenoid operated valves are shut-off valves with one inlet port and    one outlet port (Fig. [3.4]). In the de-energized condition, the core spring, assisted by the fluid pressure, holds the valve seal on the valve seat to shut off the flow. When energized, the core and seal are pulled into the solenoid coil and the valve opens.
The electro-magnetic force is greater than the combined spring force and the    
static and dynamic pressure forces of the medium.
 Direct-acting 3-way solenoid valve operation
![image](https://user-images.githubusercontent.com/111369239/189751538-68d25a54-97d1-489d-91d0-e3a596feb39b.png)





                           Fig[3.5] Direct-acting 3-way solenoid valve	
Three-way solenoid operated valves have three port connections and two valve seats. One valve seal always remains open and the other closed in the de-energized mode. When the coil is energized, the mode reverses. The 3-way solenoid valve shown in Fig [3.5] is designed with a plunger type core. Various valve operations can be obtained according to how the fluid medium is connected to the working ports in Fig.[3.5]. The fluid pressure builds up under the valve seat. With the solenoid coil de-energized, a conical spring holds the lower core seal tightly against the valve seat and shuts off the fluid flow. Port A is exhausted through R. When the coil is energized the core is pulled in, the valve seat at Port R is sealed off by the spring-loaded upper core seal. The fluid medium now flows from P to A. Unlike the versions with plunger-type cores, pivoted-armature valves have all port connections in the valve body. An isolating diaphragm ensures that the fluid medium does not come into contact with the solenoid coil chamber. Pivoted-armature valves can be used to obtain any 3-way valve operation.


![image](https://user-images.githubusercontent.com/111369239/189751503-000dfd54-d9e9-4e4a-a4bd-939c96f3eadd.png)


                                 
                                     Fig[3.6] Pivoted armature valve
The basic design principle is shown in Fig. [3.6] Pivoted-armature valves are provided with manual override as a standard feature. 
       Internally piloted 2-way solenoid valve




![image](https://user-images.githubusercontent.com/111369239/189751487-802a1a15-ec18-4b17-b69f-062f31e2f0ab.png)

                                Fig[3.7] Internally piloted solenoid valve  
Internally piloted solenoid valves are fitted with either a 2- or 3-way solenoid valve. A diaphragm or a piston provides the seal for the main valve seat. The operation of such a valve is indicated in Fig. [3.7]. When the pilot valve is closed, the fluid pressure builds up on both sides of the diaphragm via a bleed orifice. As long as there is a pressure differential between the inlet and outlet ports, a shut-off force is available by virtue of the larger effective area on the top of the diaphragm. When the pilot valve is opened, the pressure is relieved from the upper side of the diaphragm. 



![image](https://user-images.githubusercontent.com/111369239/189751464-ac8c51db-f25e-4583-9c4d-3ce56f00eb57.png)




                                          Fig. [3.8] Solenoid valve 
Fig. [3.8] shows the solenoid valve used in the project.



Specifications
Thread Size: 1/2"BSP inlet and 12mm outlet 
Material: Plastic and Brass
Working Temp: 0~100℃ 
Working Pressure: 400 millimeter water column 
Voltage: DC12V, DC24V, AC220V 
Voltage Range: 15% 
Style: Opened Valve 
Working Environment: Water, Gas and Oil 
Lifespan: More than 200,000 times 

3.4 nRF24L01 transceiver IC
The nRF24L01 is a single chip 2.4GHz transceiver with an embedded baseband protocol engine (Enhanced Shock Burst™), designed for ultra-low power wireless applications. The nRF24L01 is designed for operation in the world wide ISM frequency band at 2.400 - 2.4835GHz. An MCU (microcontroller) and very few external passive components are needed to design a radio system with the nRF24L01. The nRF24L01 is configured and operated through a Serial Peripheral Interface (SPI.) Through this interface the register map is available. The register map contains all configuration registers in the nRF24L01 and is accessible in all operation modes of the chip. The embedded baseband protocol engine (Enhanced Shock Burst™) is based on packet communication and supports various modes from manual operation to advanced autonomous protocol operation. Internal FIFOs ensure a smooth data flow between the radio front end and the system’s MCU. Enhanced Shock Burst™ reduces system cost by handling all the high-speed link layer operations. The radio front end uses GFSK modulation. It has user configurable parameters like frequency channel, output power and air data rate. The air data rate supported by the nRF24L01 is configurable to 2Mbps. The high air data rate combined with two power saving modes makes the nRF24L01 very suitable for ultra-low power designs. Internal voltage regulators ensure a high Power Supply Rejection Ratio (PSRR) and a wide power supply range. If used in open space and with lower baud rate its range can reach up to 100 meters. The module can use 125 different channels which gives a possibility to have a network of 125 independently working modems in one place. Each channel can have up to 6 addresses, or each unit can communicate with up to 6 other units at the same time. The power consumption of this module is just around 12mA during transmission, which is even lower than a single LED. The operating voltage of the module is from 1.9 to 3.6V, but the good thing is that the other pins tolerate 5V logic, so we can easily connect it to an Arduino without using any logic level converters.

![image](https://user-images.githubusercontent.com/111369239/189751440-6edb7612-db3c-4965-a72e-8143d21df908.png)

 

 
                          
             Fig. [3.9] nRF24L01 transceiver IC module
Fig. [3.9] shows the transceiver IC module with the pin description.
    Specifications
   



![image](https://user-images.githubusercontent.com/111369239/189751391-dedcf039-35ff-469a-bb43-fc5473ae73ad.png)


                           
                                               
                                            Table[3.2] Absolute maximum ratings     
Table [3.2] shows the maximum threshold ratings of the nRF24L01 module.
Exceeding one or more of the limiting values may cause permanent damage to nRF24L01.
nRF24L01 Hardware Interface  
 
             

![image](https://user-images.githubusercontent.com/111369239/189751370-5e4fa4f2-119e-4024-884e-67e69a359e54.png)







                                         Fig[3.10] nRF24L01 block diagram   
Fig. [3.10] shows the pin out diagram of nRF24L01 transceiver IC module. More
than likely, you are using a breakout for the nRF24L01 of some sort. If so, you will likely have eight pins to interface with, and these are Vcc, GND, IRQ, CE, and the four SPI-related pins (CSN, SCK, MISO, and MOSI). If you are dealing with the bare chip, IO pins are 5V-tolerant. We can’t run the 24L01 at 5V – the data sheet gives an operating range of 1.9 to 3.6V for VCC (the chip will be run at 3.3V in most circumstances). The SPI interface uses four pins, CSN, SCK, MISO, and MOSI for data transmission and reception. The CSN (chip select not) pin is active-low, and is normally kept high. When this pin goes low, the 24L01 begins listening on its SPI port for data and processes it accordingly. The remaining three pins should be tied to the user’s hardware SPI interface, to the same pins as their name suggests (SCK to SCK, MISO to MISO, and MOSI to MOSI). The remaining two pins are CE and IRQ. CE is used to control data transmission and reception when in TX and RX modes, respectively. IRQ is the interrupt pin, and is active-low. There are three internal interrupts that can cause this pin to go low when they are active. Each of these bits can be masked out such that when the bit’s respective interrupt becomes active, the status of the IRQ pin is not changed.
3.5 Relay
A relay is an electrically operated switch. Current flowing through the coil of the relay creates a magnetic field which attracts a lever and changes the switch contacts. The coil current can be on or off so relays have two switch positions and most have double throw (changeover) switch contacts as shown in the Fig[3.11].

![image](https://user-images.githubusercontent.com/111369239/189751342-cc5e5fa3-d75f-4d71-b2df-95cecb69c171.png)

              
                                                     Fig.[3.11] Relay circuit symbol
 Relays allow one circuit to switch a second circuit which can be completely separate from the first. For example a low voltage battery circuit can use a relay to switch a 230V AC mains circuit. There is no electrical connection inside the relay between the two circuits, the link is magnetic and mechanical.
The coil of a relay passes a relatively large current, typically 30mA for a 12V relay, but it can be as much as 100mA for relays designed to operate from lower voltages. Most ICs cannot provide this current and a transistor is usually used to amplify the small IC current to the larger value required for the relay coil. 
The maximum output current for the popular 555 timer IC is 200mA, enough to supply a relay coil directly.



![image](https://user-images.githubusercontent.com/111369239/189751331-63adbd46-a27d-4692-9b1d-6b029a3d34a0.png)



                                      Fig. [3.12] Relay board
Fig. [3.12] shows the relay board used in the project. Most relays are designed for PCB mounting but you can solder wires directly to the pins providing you take care to avoid melting the plastic case of the relay.
The relay's switch connections are usually labelled COM, NC and NO:
COM = Common, always connect to this, it is the moving part of the switch.
NC = Normally Closed, COM is connected to this when the relay coil is off.
NO = Normally Open, COM is connected to this when the relay coil is on.
Connect to COM and NO if you want the switched circuit to be on when the relay coil is on. Connect to COM and NC if you want the switched circuit to be on when the relay coil is off.
 Protection diodes for relays



![image](https://user-images.githubusercontent.com/111369239/189751308-a71a4b76-c960-40a9-8274-2ee41124d172.png)


                                          
                                    Fig. [3.13] Protection diode for relay
Transistors and ICs must be protected from the brief high voltage produced when a relay coil is switched off. The diagram shows how a signal diode  is connected 'backwards' across the relay coil to provide this protection.
Current flowing through a relay coil creates a magnetic field which collapses suddenly when the current is switched off. The sudden collapse of the magnetic field induces a brief high voltage across the relay coil which is very likely to damage transistors and ICs. 
The protection diode allows the induced voltage to drive a brief current through the coil (and diode) so the magnetic field dies away quickly rather than instantly. This prevents the induced voltage becoming high enough to cause damage to transistors and ICs.

3.6 ESP8266 Wi-Fi module
ESP8266 is the most popular and low cost WiFi SoC with TCP/IP stack and a low power 32 bit microcontroller manufactured by Espressif, a Shanghai based Chinese manufacture. ESP8266 belongs to Espressif System’s Smart Connectivity Platform (ESCP) which is a set of high performance, high integration wireless SoC (System on Chip) intended for power and space constrained mobile platform designers. It is a self-contained WiFi networking solution, which means that we can store and run the application in it without the aid of any external processors. We can also integrate it with another application processor if required by using SPI/SDIO or I2C/UART interface. 
Features
•	Supports 802.11 b/g/n
•	Integrated low power 32 bit microcontroller
•	Integrated 10 bit analog to digital converter
•	Integrated full TCP/IP stack
•	Supports Station, Soft Access Point, Station + Soft Access Point modes
•	Built in TR switch, balun, LNA, power amplifier and matching network
•	Have internal PLL, regulators and power management units
•	Supports space diversity / antenna diversity
•	2.4 GHz WiFi with support for WPA/WPA2
•	Supports WiFi Direct
•	Smart Link function supports for both Android and iOS devices
•	SDIO 2.0, (H) SPI, UART, I2C, I2S, IR Remote Control, PWM, GPIO
•	STBC, 1×1 MIMO, 2×1 MIMO
•	A-MPDU & A-MSDU aggregation and 0.4s guard interval
•	Wake up and transmit packets in less than 2mS
•	Up to +20 dBm output power in 802.11b mode
•	Standby power consumption is less than 1mW.
•	Deep sleep power is less than 10μA and power down leakage current is less than 5μA
Specifications
•	Operating Voltage : 3.0 ~ 3.6V
•	Average Operating Current : 80mA
•	Tensilica Xtensa LX106 32 bit RISC CPU running at 80 MHz
•	16 GPIO Pins,  SPI
•	I2C, I2S
•	UART – 2x TX and 1x RX
•	1x 10bit ADC
•	Operating Temperature: -40°C ~ 125°C
•	Frequency Range: 2400 ~ 2483.5MHz    
3.7 Solar Panel
A solar panel works by allowing photons, or particles of light, to knock electrons free from atoms, generating a flow of electricity. Solar panels actually comprise many, smaller units called photovoltaic cells. (Photovoltaic simply means they convert sunlight into electricity.) Many cells linked together make up a solar panel. ach photovoltaic cell is basically a sandwich made up of two slices of semi-conducting material, usually silicon — the same stuff used in microelectronics.
To work, photovoltaic cells need to establish an electric field. Much like a magnetic field, which occurs due to opposite poles, an electric field occurs when opposite charges are separated. To get this field, manufacturers "dope" silicon with other materials, giving each slice of the sandwich a positive or negative electrical charge.
Specifically, they seed phosphorous into the top layer of silicon, which adds extra electrons, with a negative charge, to that layer. Meanwhile, the bottom layer gets a dose of boron, which results in fewer electrons, or a positive charge. This all adds up to an electric field at the junction between the silicon layers. Then, when a photon of sunlight knocks an electron free, the electric field will push that electron out of the silicon junction.
A couple of other components of the cell turn these electrons into usable power. Metal conductive plates on the sides of the cell collect the electrons and transfer them to wires. At that point, the electrons can flow like any other source of electricity.
Recently, researchers have produced ultrathin, flexible solar cells that are only 1.3 microns thick — about 1/100th the width of a human hair — and are 20 times lighter than a sheet of office paper. Lighter, more flexible solar cells such as these could be integrated into architecture, aerospace technology, or even wearable electronics.  


                                           
                     






                                                    CHAPTER 4
               WORKING OF PACPS SYSTEM
 
4.1 Schematic arrangement of the system
The block diagram of the schematic arrangement of the components used in the PACPS system is illustrated in the Fig. [4.1]

                                             
    
 
           
![image](https://user-images.githubusercontent.com/111369239/189751201-13d3a383-2d81-4d99-8e4b-367cd03e8c88.png)

  

                          Fig.[4.1] The schematic arrangement of components     
Fig. [4.1] shows the schematic arrangement of the components used in PACPS system. This system consists of two stations: a plant station and a base station. The plant station comprises of soil moisture sensor, solenoid valve and a RF transceiver module connected to Arduino Uno microcontroller.
Soil moisture sensor interfacing with Arduino 
In this application, we use the analogue mode in the soil moisture sensor, so that we get a range of values from which we can set the threshold more accurately, without repeated calibration. To connect the sensor in the analog mode, we will need to use the analog output of the sensor. When taking the analog output from the soil moisture sensor, the sensor gives us a value from 0 to 1023. The moisture is measured in percentages, so we will map these values from 0 to 100, and then show them on the serial monitor. We can set different ranges of the moisture values and turn the water pump on or off according to it.
The TDT soil water content sensor is provided with a calibration by the sensor manufacturer, which enables the sensor to give a direct reading of volumetric soil water content (θv), soil temperature (°C), and electrical conductivity (EC, dS/m). According to the Cut Sheet TDT soil moisture sensor (2010), the volumetric 31 water content accuracy of the sensor is ±1% (full scale) under temperature conditions of 0.5 to 50 °C and EC of 0 to 3 dS/m. Laboratory and field tests were conducted to test this claim of accuracy. The Watermark sensor directly measures voltage excitation (in mV) which is converted to electrical resistance (in kOhms) through the data logger’s internal program. Soil water potential (SWP, kPa) is then estimated using the electrical resistance through another internal correction. The equations used in the data loggers are shown as Equations 4.1 and 4.2.

                           Rs = Vr / (1 + Vr)   ---  4.1
                           SWP = 7.407 * Rs / (1 - 0.018 * (T - 21)) - 3.704  ---  4.2 
where Vr (mV) is the ratio of the measured voltage divided by the excitation voltage, Rs (kOhms) is the measured resistance, T (°C) is the soil temperature measured by the TDT sensor, and SWP (kPa) is the soil water potential. SWP is directly related to θv through water retention (or release) curves, which vary by soil type. The manufacturer of the Watermark sensor recommended relating the SWP to volumetric water content through curves for general soil types. 
This curve was generalized using equation 4.3. 
                                                       θv = αXβ   ---   4.3 
where α and β are coefficients and X is the sensor-based soil water potential (millibars, mb). The α and β coefficients for the soil in this study are 104.63 and - 0.19, respectively. SWP is converted to an analogue value and shown in Arduino Serial Monitor which is in between 0 and 1023. The sample data is shown in Fig. [4.5]. The communication between Arduino and soil moisture sensor is accomplished through Serial Peripheral Interface (SPI).






![image](https://user-images.githubusercontent.com/111369239/189751172-d6d50df5-8d97-4d32-a10b-a12fe7391126.png)









                           Fig. [4.2] Serial monitor readings
Solenoid valve interfacing with Arduino through Relay
The solenoid valve is connected to the relay which in turn is operated in the Arduino. When an small electric current is passed through the coil, which is fed as an Arduino from the output pin of the Arduino microcontroller, it generates a magnetic field that activates the armature, and the consequent movement of the movable contact(s) either makes or breaks (depending upon construction) a connection with a fixed contact. If the set of contacts was closed when the relay was de-energized, then the movement opens the contacts and breaks the connection, and vice versa if the contacts were open. When the current to the coil is switched off, the armature is returned by a force, approximately half as strong as the magnetic force, to its relaxed position. Usually this force is provided by a spring, but gravity is also used commonly in industrial motor starters. Most relays are manufactured to operate quickly. In a low-voltage application this reduces noise; in a high voltage or current application it reduces arcing. Taking inputs from the relay, solenoid valve either switches ON/OFF. The solenoid valve operates at 12V. When the relay switches on the valve, electric current flows through the solenoid creating a magnetic flux and moving the piston upwards so that the water is free to flow. On the other hand when valve switches off, the outlet of water is blocked by stopping the magnetic flux and moving the piston downwards.
RF transceiver module interfacing with Arduino
At the transmitter
At the beginning of the sketch we inform the program that we’ll use libraries.
•	SPI.h – to handle the communication interface with the modem
•	nRF24L01.h – to handle this particular modem driver
•	RF24.h – the library which helps us to control the radio modem
Then a global array is created. In this array we wrote the address of the modem that will receive data from Arduino. Address has value, but if you want you can change it to any other 5-letter string. The address is necessary if you have a few modems in the network, thanks to the address, you can choose a particular modem to which you are sending the data. In the setup function we call the method which activates the modem. Next we call a function which shows how many times the modem will retry to the send data in case of not receiving by another modem. If the recipient does not receive data, modem will try to send them every 3.75 milliseconds. Modem will try to send 15 times before it will stop and finds that the receiver is out of range, or is turned off. Another method sets the address of the receiver to which the program will send data. Another method in the setup function is to switch the modem to data transmission mode. We also loop the data we want to send continuously. Through this method, you can send up to 32 bytes at one time, because that is the maximum size of a single packet data modem. We receive confirmation that the receiver received data, if that method returns “true” If it returns “false” this data has not been received.



At the receiver
The receiver part is waiting for the Arduino USB port switches to serial COM port when USB cable is connected. That is true for Arduino with ATmega32u4 – like Leonardo, for ATmega328 based boards, which have separate chip for USB/Serial communication Serial is available always. The baud rate is set with the computer via USB / COM. The next part of the function is to set the nRF24L01 modem. The next part of program determines the address of our modem which receives data. 
The next step is to enable receiving data via modem. From that moment the modem waits for data sent to the specified address. Then program checks whether any data have arrived at the address of the modem. If the data was received, then it creates a 32-element array called and filled with zeros (later the program will fill it with the received data). 
When data is received, it sends the data to the computer, where you can see it in the serial monitor using the Arduino IDE. The transmission and reception of data takes place at both plant station and the base station.

 

![image](https://user-images.githubusercontent.com/111369239/189751123-1c58e0e7-3baa-45bb-a085-b08682e19506.png)



                                 Fig. [4.3] Physical arrangement of the system


Fig. [4.3] shows the physical arrangement of the PACPS system. The system at the plant station uses solar panel for powering the system.

4.1 Working algorithm of PACPS system
![image](https://user-images.githubusercontent.com/111369239/189751106-b070163a-7ea0-4fcf-8dde-e8285a438c9d.png)

             Fig. [4.4] Flow chart of the working algorithm of PACPS system

Fig [4.4] illustrates the flow of logic of the algorithm used in PACPS system. Initially, soil moisture sensor at the plant station reads the moisture content in the soil through the transducer operation and sends the moisture content to the Arduino board at the plant station through the serial peripheral interface.
The Arduino board at the plant station then prints the soil moisture data content on the serial monitor and redirects the soil moisture data to the base station’s Arduino micro-controller through. The transmission process takes place through nRF24L01 transceiver module.
The Arduino at the plant station uploads the data onto the RF transceiver module at the plant station through serial peripheral interface, then the RF transceiver at the plant station uses GFSK modulation for data transmission. 
GFSK modulation
Gaussian frequency shift keying (GFSK) is a modulation method for digital communication found in many standards such as Bluetooth, DECT and Wavenis. Digital communication amounts to translating symbols from a discrete alphabet into a signal that the transmitting side can send into a transmission medium and from which the receiving side can recover the original symbols. In the context of this example, the alphabet has only two symbols 0 and 1. When the alphabet consists of just two symbols, the symbols are called bits. The modulation method is a variant of frequency modulation (FM) of some carrier frequency ωc. Frequency shift keying (FSK) conveys information by decreasing the carrier frequency for the duration of a 0 symbol and increasing the frequency for the duration of a 1 symbol. If one applies Gaussian filtering to the square-wave signal that would shift the carrier frequency, one gets GFSK. The models presented here are restricted to the digital part of the entire communication system using an intermediate frequency ωIF as carrier frequency. In a real-life system, the signals traveling between antennas have a (much) higher carrier frequency, the so-called radio frequency ωRF. Analog circuits are normally used for up conversion to RF at the transmitter and down conversion to IF at the receiver. An analog-to-digital converter (ADC) at the receiver side, brings the signal back to the digital domain. 

Data is then converted into packets and sends it over RF channel in ISM band abiding to RF protocol to the RF transceiver module at the plant station.
RF protocol
For improved robustness of the RF link Cyclic Redundancy Check (CRC) values are often generated and transmitted as part of the frame. The receiver may clearly identify any bit errors by recalculating the CRC values of the received data frame and compared with the one generated before transmission. The transmitter’s battery charging level may be signalized with a complete 4-bit or 8-bit data field representing the measured battery voltage. The systems allow one way communication between two nodes namely transmission and reception.
The RF modules have been used in conjunction with a set of four channel encoder and decoder ICs. HT-12E and HT-12D or HT-640 and HT-648 are the most commonly used encoders and decoders respectively in RF communication. The encoder is used for encoding transmission data while reception is decoded by decoder. Encoder will be used for transmitting the data serially instead of sending parallel. These signals are serially transmitted through RF to the reception point. Decoder is used for decoding the serial data at the receiver and coverts as parallel data.
 The RF transceiver module at the base station then receives the data packets, decodes it and microcontroller reads the soil moisture sensor of the respective plant station through serial peripheral interface.
At the base station, after receiving the soil moisture content data, two processes takes place. Firstly, the ESP8266 Wi-Fi module embedded on the Arduino microcontroller (collectively called Node MCU) connects to a router and uploads the data online through a server into a Google sheet attached with a timestamp so that remote users can access the data conveniently. 

















![image](https://user-images.githubusercontent.com/111369239/189751054-b0491987-e039-427d-9749-439d026082c9.png)





                                
                              Fig. [4.5] Data uploaded online        
This process is accomplished using TCP/IP protocol.
TCP / IP protocol
Transmission Control Protocol/Internet Protocol (TCP/IP) is the language a computer uses to access the internet. It consists of a suite of protocols designed to establish a network of networks to provide a host with access to the internet.
TCP/IP is responsible for full-fledged data connectivity and transmitting the data end to end by providing other functions, including addressing, mapping and acknowledgment. TCP/IP contains four layers, which differ slightly from the OSI model.
The technology is so common that one would rarely use the full name. In other words, in common usage the acronym is now the term itself.

As with any form of communication, two things are needed: a message to transmit and the means to reliably transmit the message. The TCP layer handles the message part. The message is broken down into smaller units, called packets, which are then transmitted over the network. The packets are received by the corresponding TCP layer in the receiver and reassembled into the original message.
The IP layer is primarily concerned with the transmission portion. This is done by means of a unique IP address assigned to each and every active recipient on the network.
TCP/IP is considered a stateless protocol suite because each client connection is newly made without regard to whether a previous connection had been established.
The microcontroller then compares the soil moisture value with threshold moisture value of the respective plant. If the moisture content is lower than the required lower threshold water content, the microcontroller at the base station, sends the instructions to solenoid valve at the respective plant station to turn on the water supply. This message is channelled over RF transceiver system. 
Lower threshold value for a particular plant is determined by observing the plant growth characteristics by testing with different threshold values. Suitable lower threshold value is chosen among the set of threshold values, where plant growth is maximum and water requirement is optimum.
This process loops until the required water content for a plant is reached. We then compare the moisture content value against the upper threshold content. If the soil moisture content is greater than the upper threshold moisture content, then the base station sends signal to the plant station instructing to switch off the solenoid valve. 
The upper threshold content for a plant is determined by testing the plant growth for a different set of values. Suitable upper threshold is chosen by observing the optimum plant growth characteristics with minimum water requirements, so that entire water is absorbed by the roots and there is no water loss due to evaporation. 
4.3 Results
The PACPS system also makes graphical plot of soil moisture content available to the user, so that user can easily understand water requirement during different times of the day and the data is useful for further analysis. 
The microcontroller at the base station retrieves the data from plant station and makes it available on a computer before uploading it to the server. The computer accomplishes the task of plotting the data against time using Python programming language.
Python
Python is a high-level, interpreted and general-purpose dynamic programming language that focuses on code readability. The syntax in Python helps the programmers to do coding in fewer steps as compared to Java or C++. The language has the programming easy and fun to do. The Python is widely used in bigger organizations because of its multiple programming paradigms. They usually involve imperative and object-oriented functional programming. It has a comprehensive and large standard library that has automatic memory management and dynamic features.
The Python language has diversified application in the software development companies such as in gaming, web frameworks and applications, language development, prototyping, graphic design applications, etc. This provides the language a higher plethora over other programming languages used in the industry. Some of its advantages are-
•	Extensive Support Libraries
It provides large standard libraries that include the areas like string operations, Internet, web service tools, operating system interfaces and protocols. Most of the highly used programming tasks are already scripted into it that limits the length of the codes to be written in Python.
•	Integration Feature
Python integrates the Enterprise Application Integration that makes it easy to develop Web services by invoking COM or COBRA components. It has powerful control capabilities as it calls directly through C, C++ or Java via Jython. Python also processes XML and other markup languages as it can run on all modern operating systems through same byte code.
•	Improved Programmer’s Productivity
The language has extensive support libraries and clean object-oriented designs that increase two to ten fold of programmer’s productivity while using the languages like Java, VB, Perl, C, C++ and C#.
•	Productivity
With its strong process integration features, unit testing framework and enhanced control capabilities contribute towards the increased speed for most applications and productivity of applications. It is a great option for building scalable multi-protocol network applications.

Python takes soil moisture readings from the Serial communication port and attaches time stamp to the data and plots the readings.



 

	



 
       






![image](https://user-images.githubusercontent.com/111369239/189750946-5ddf276b-9d34-4b56-a464-791c35a13dc1.png)



                                                 

                  Fig. [4.6] Soil moisture sensor data with the time stamp                                      

Fig. [4.6] shows the soil moisture sensor data along with the time stamp in Python tool.




 ![image](https://user-images.githubusercontent.com/111369239/189750500-f328867a-6da7-4ca9-a20d-7beb98af3969.png)

                                 Fig. [4.7] Graphical plot of soil moisture sensor data
 
Fig. [4.7] shows the graphical plot of the soil moisture data plotted in Python along with current time. This provides a graphical plot available to the local users. If a user wants to access the data or behavior of the moisture content remotely, it is accomplished using a tool called Plotly. Plotly tool enables the remote users to access the graphical plots of the moisture content behavior by uploading the data online and plotting in a website. Remote users can access the plot by entering the user credentials to ensure privacy of data.
Plotly
•	Plotly creates leading open source tools for composing, editing, and sharing interactive data visualization via the Web. Plotly’s collaboration servers (available in cloud or on premises) allow data scientists to showcase their work, make graphs without coding etc., 
•	Visualization Types Supported: Pie Charts, Bar Charts, Line Charts, Area Charts, Scatter Charts, Bubble Charts, Error Bars, Box Plots, Wind Rose Charts, Heatmaps, Bubble Maps, Choropleth Maps, 3D Scatter Plots, Ribbon Plots, the list goes on and on.
•	Data Input Sources: As with other javascript libraries, any data that can be added to the graph structure, but data bundles aren’t imported automatically
•	Data Output: HTML, SVG, WebGL (for 3d) 
 ![image](https://user-images.githubusercontent.com/111369239/189750808-0d445808-f038-48b7-934d-fbc9db60d9f2.png)


                    Fig. [4.8] Graphical plot of soil moisture content available online



Fig. [4.8] shows the soil moisture data plotted and uploaded online in Plotly.
From the graph, we can observe that, initially there is a decreasing trend of moisture value. When the moisture value drops below the threshold water content, the solenoid valve turns on, and then the graph changes its slope from negative to positive, which implies there is an increasing trend of moisture content in the soil. As it keeps on increasing, once it crosses the upper threshold water level content, then the solenoid valve turns off the water supply to the plant and this cycle repeats.























                                  CHAPTER 5
          CONCLUSION AND FUTURE SCOPE
Simulation results have made it clear that there is no need for constant supervision by humans in order to water plants. These type of systems can be set up in the areas where it is not able for humans to reach. These type of systems can be implemented in parks and on dividers which do not need by watered daily, especially helpful on busy highways where water tankers daily provide water to the plants on dividers, obstructing trafﬁc. This saves farmer space on a farm, since farmer need not leave spaces in between, in order to commute through daily to water and spray pesticides. As a result, more crops can be accommodated, and increase the yield. The power costs in villages for the operation of manual water pumps also nullify because this system uses solar power. It saves time for farmer so that farmer can leverage the free time.
Suggestions on further improvisation
•	Our work focused on automating the actuator part i.e., solenoid valve and obtaining the real time plot online. This data can be made to store in a database, or in a cloud storage so that the data can be easily accessed for data analytics.
•	In addition to the existing system, remote control by the user to actuate the infield actuator i.e., solenoid valve, irrespective of the soil moisture content can be added.
•	The system can also be improvised to take its own decisions by artificial intelligence based on the inputs from weather forecast. For example, in summer season the threshold of the soil moisture sensor can be higher while compared to rainy and winter seasons  
•	This work can be further developed by integrating the image processing techniques to analyze the growth of the plants and automatically harvest the crops by employing automated heavy machines.
•	The water usage in traditional agriculture system and PACPS can be compared and reported monthly.
