# Remote-Controlled Air Boat Project

## Overview

This project involves the development of a remote-controlled airboat, utilizing an Arduino Uno to manage both a servo for steering and an Electronic Speed Controller (ESC) to regulate the speed of a brushless motor. The Arduino reads input signals from a radio receiver and adjusts the motor speed and steering angle according to remote control inputs.



## Features

- **Servo and ESC Control**: A servo motor controls the steering, while the ESC regulates the speed of the brushless motor to drive the boat forward.
- **Remote Input**: The Arduino reads input from a radio control receiver, mapping the values to the correct ranges for steering and throttle control.
- **Safety Mechanism**: When the control switch is off, the system stops both the motor and the servo, ensuring safe operation when the boat is not in use.



## Hardware Components

- **Arduino Uno**: The central control unit that reads signals from the radio receiver and adjusts the motor speed and steering angle.
- **Servo Motor**: Controls the steering mechanism of the boat.
- **Electronic Speed Controller (ESC)**: Regulates the speed of the brushless motor based on throttle input.
- **Brushless Motor**: Propels the airboat according to the throttle commands.
- **Lipo Battery**: Powers the ESC and motor for efficient operation.
- **Radio Receiver**: Receives throttle and steering inputs from the remote control. (FlySky A6B receiver used)
- **Radio Transmitter**: Sends commands to the radio receiver for real-time control. (FlySky FS-i6x transmitter used)


## Project Collaboration

This project was developed in collaboration with an industrial design student, who created the 3D model of the boat. The physical design was integrated with the Arduino-based control system to create a fully functional airboat.


## Code Functionality

1. **Reading Remote Signals**:
   - The Arduino reads throttle and steering inputs from the radio receiver, mapping them to suitable ranges for ESC and servo control.
2. **Controlling the Motor and Steering**:
   - The ESC adjusts the motor speed based on throttle input, and the servo motor adjusts the boat's direction.
3. **Safety Protocol**:
   - If the control switch is turned off, the Arduino halts both the motor and steering, ensuring safe handling of the boat.


## Possible Future Improvements

- **Advanced Stabilization**: Integrate a gyroscope and accelerometer to improve the boat's stability, especially in turbulent water.
- **Battery Monitoring**: Add a voltage sensor to monitor battery levels, notifying the operator of low power.
- **Enhanced Remote Features**: Add fine-tuning adjustments for throttle and steering control on the transmitter side.

---
