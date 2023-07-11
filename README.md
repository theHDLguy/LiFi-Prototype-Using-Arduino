# LiFi: Prototype Using Arduino

## What's Li-Fi?
Consider a LED bulb in your house - it just gives off light.

Consider a router in a common household - it's used to emit WiFi signal which enables us to use internet wirelessly.

Now Imagine a scenario where a single light bulb can perform both the functionalities of a normal household LED bulb and a router - thats LiFi or Light Fidelity!

LiFi connects devices using visible spectrum of electromagnetic spectrum unlike WiFi which makes use of radio waves for the same. In layman’s terms, It makes use of visible light to connect/communicate between two or more devices and hence is also known as Visible Light Communication or VLC.

---

## How Does It Work?
LiFi makes use of visible light through overhead lighting for the transmission of data. A typical VLC system has two qualifying components:
1. At least one device containing a photodiode in order to receive light signals; and
2. A light source equipped with a signal processing unit for the transmission of signals.

   
The VLC light source can be in the form of a fluorescent bulb or an LED. However, LED bulbs are the most optimum VLC light source since a robust LiFi system requires extremely high rates of light output. Fluorescent bulbs emit light in a much wider band of wavelengths, which makes it a relatively less efficient light source than LED. LED, on the other hand, is a light source that emits light in a very narrow band of wavelengths, making it a more efficient light source.


LED is also a semiconductor, which implies that it can amplify light intensity and switch rapidly. This is an important quality to look for in a VLC light source because LiFi relies on the constant stream of photons emitted as visible light for the transfer of data. When the current applied to the light source is varied slowly, the light source dims up and down, which makes it unsuitable as a source of light for household illumination. To strike a balance between VLC light source and household illumination, this current as well as the optical output is modulated at extremely high speeds, making it detectable by the photodiode device and converted back into electrical current, but unperceivable by the human eye. 

Once these signals are received and demodulated, they can now be converted into a continuous stream of binary data that contain videos, images, audio, text, or applications that are readily-consumable on any internet-enabled device.

![image](https://github.com/theHDLguy/LiFi-Prototype-Using-Arduino/assets/76950564/3bb2ee2c-77bb-4211-801e-f3e38eccd2c2)

---
## Wifi vs Lifi

&#x200B;

||**Wifi**|**Lifi**|
|:-|:-|:-|
|**Data Transmission Speed**|Maximum speeds of Wifi 5 and 6 are 1.3 Gbps and 9.6 Gbps respectively. This is due to visible light spectrum being 1,000 times larger than RF spectrum (300 GHz).|Over a controlled environment, LiFi has revealed to produce speeds of over 100 Gbps. Some tests even showed that it can deliver data for up to 224 Gbps.|
|**Energy Effieciency**|Requires having 2 radios for the transmission of radio waves which communicate with each other continuously through RF transmitters installed within the radio and a baseband chip - takes up a lot of energy just to discern data signals from the noise from several other devices using the same radio frequency|Makes use of overhead LED lights as a medium for data transmission. Since it only requires a light source & a photodiode to decode the light signals, the entire process of data transmission and communication requires lower overall energy.|
|**Coverage**|Since WiFi makes use of radio waves as a medium for the transfer of data, it boasts of a wider range of coverage of distances up to 32 m (although connections are slow at those distances). This is because radio waves are able to pass through walls.|This is perhaps the greatest limitation for LiFi since visible light cannot pass through walls, limiting the area of coverage to rooms where the LED transmitter is installed.|
|**Security**|Wifi signals can be breached remotely through DNS Hijacking.|The limited coverage of LiFi increases network security. Since LiFi signals cannot pass through walls, interference from outside forces is limited. This also makes it ideal for use in sensitive areas where remote piracy & hacking is prevalent.|
|**Data Density**|One of the biggest limitations of WiFi is its vulnerability in areas with high congestion. The transfer of data within areas with a high volume of users tend to be slower than areas with lower volumes of users. |LiFi works well in very dense environments. Especially in areas where many light bulbs are present, LiFi can still produce high speeds as each VLC light source can deliver the same speed, even with multiple users.|

&#x200B;



## Components Used

### Receiver:
- Arduino UNO
- Solar Panel
- Current Sensor 5A ACS712
- LCD 16 X 2
- LCM 1602 I2C

### Transmitter:
- Arduino UNO
- LCD 16 X 2
- LCM 1602 I2C
- High Power LED SMD 3535
- 4x4 Keypad




## Usecases
- **Dense Urban Environments**: Dense urban environments by their nature tend to have complete artificial lighting coverage. This lighting infrastructure can provide always available high data rate access for users as they move through that environment. For example, along a hotel corridor or reception hall a number of users can receive high data rate downloads at any point. Moreover, high speed wireless communication would be available in every room since the light waves do not propagate through walls. This results in interference-free wireless communication, and spectrum does not have to be shared among a large number of users in the rooms.

- **EMI sensitive Environments**: On aircraft, Li-Fi enabled lighting will allow high data rate connectivity for each passenger. It will allow connectivity at all times, without creating electromagnetic interference (EMI) with sensitive radio equipment on the flight deck. The reduction in cabling requirement also means a lighter aircraft.

- **Augmented Reality**: Exhibits in museums and galleries are illuminated with specific lighting. Li-Fi enabled lighting can provide localised information within that light. This means that a visitor’s camera or mobile phone can be used to download further information regarding the object being viewed from the light that illuminates the exhibit.

- **Underwater Communication**: Radio waves are quickly absorbed in water, preventing underwater radio communications, but light can penetrate for large distances. Therefore, LiFi can enable communication from diver to diver, diver to mini-sub, diver to drilling rig, etc.

- **Intelligent Transportation System**: Car headlights and tail lights are steadily being replaced with LED versions. This offers the prospect of car-to-car communication over LiFi, allowing development of anti-collision systems and exchange of information on driving conditions between vehicles. Traffic lights already use LED lighting, so that there is also the prospect offered of city wide traffic management systems. This would enable car systems to download information from the network and have real time information on optimal routes to take, and update the network regarding conditions recently experienced by individual vehicles.


## Limitations
1. **Need for Special Hardware**: LiFi needs special LED bulbs for transmission and photo-detector for reception. The need for special LED bulbs has made it difficult to implement LiFi on a large scale as these bulbs are not yet mass produced.
   
2. **Uplink Issues**: Every LiFi presentation has always missed out a major part of its implementation, the uplink or uploading from a device. There isn't any technology available for mobile devices to transmit LiFi signals.

3. **Limited Range**: LiFi is developed with an intention to replace the traditional WiFi systems to increase the bandwidth. But one major problem with LiFi lies within its basic principle of using light for transmission. It limits the range of LiFi. A common household can get along with a single WiFi router whereas the same household would need multiple LiFi bulbs for covering the whole house.

4. **Light Intensity**: Since LiFi uses light to transmit data, we must take into account the regular lighting in a common household which could interfere with the connection. If the LiFi bulb has an intensity which is not easily distinguishable from other sources of light such as regular bulbs or sunlight, it would cause the whole system to fail.

5. **LiFi vs WiFi**: WiFi is used everywhere for wireless communication. For LiFi to replace WiFi, it needs to convince consumers that it is indeed much better than WiFi. But it has failed to do so due to the numerous shortcomings when compared to WiFi.
