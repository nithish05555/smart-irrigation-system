# Smart Irrigation System 🌱

An automated IoT irrigation framework that monitors soil moisture and ambient conditions, then controls water distribution automatically — reducing manual monitoring and improving water efficiency.

## Features
- Real-time soil moisture monitoring via analog sensor
- Ambient temperature & humidity tracking with a DHT sensor
- Automatic relay-controlled water pump activation
- Threshold-based logic to prevent overwatering

## Hardware Used
- Arduino UNO
- Soil Moisture Sensor
- DHT11 Temperature & Humidity Sensor
- Relay Module + Water Pump

## How It Works
The system continuously reads soil moisture levels. When moisture drops below a set threshold, it automatically activates the pump via a relay, then deactivates it once the soil is sufficiently moist — all logged in real time over Serial for monitoring.

## Tech Stack
`Arduino IDE` · `C++` · `Embedded Systems` · `IoT`

## Author
**Nithish K** — [Portfolio](https://nithish05555.github.io/nithish05555/) · [LinkedIn](https://linkedin.com/in/nithish-profile)
