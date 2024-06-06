# AC Remote Control Signal Reader

This application is developed to read digital signals from AC remote control using IR receiver sensors and then record th ON and OFF signals and store them. The new signal read from the receiver is now compared with the previous input and display if they are same. Considering TSOP1738 IR receiver.

### Flowchart

[AC remote receiver flow chart](https://github.com/vishal-hunashikatti/riscv/blob/main/Week-3/IR_reciever-flow_chart.png)

### Block Diagram

[AC remote receiver block diagram](https://github.com/vishal-hunashikatti/riscv/blob/main/Week-3/IR_reciever_block-diagram.png)

### I/O Mapping

#### GPIO mapping

- X30[0] --> IR receiver input pin.
- X30[1] --> Output pin for LED display.

### IR Receiver

An infrared (IR) receiver is a device used to detect and decode infrared signals transmitted by an IR emitter, commonly used in remote control systems for TVs, air conditioners, and other electronic devices. Here's a detailed description of how an IR receiver functions:

#### Components of an IR Receiver TSOP1738

- **Photodiode:** Detects incoming IR light and converts it into a small electrical signal.
- **Pre-amplifier:** Amplifies the small electrical signal from the photodiode.
- **Automatic Gain Control (AGC):** Adjusts the gain to filter out interference from ambient light and other IR sources.
- **Bandpass Filter:** Filters the signal to only allow the 38 kHz modulated carrier frequency to pass through.
- **Demodulator:** Extracts the original data signal from the 38 kHz carrier wave.
- **Output Stage:** Provides the demodulated signal to the microcontroller or processing unit for further decoding.

Some examples for suitable data format that are accepted by the receiver:

- NEC Code
- Toshiba Micom Format
- Sharp Code
- RC5 Code
- RC6 Code
- R±2000 Code
- Sony Format (SIRCS).

## Block Diagram of a IR receiver TSOP1738

![image](https://github.com/vishal-hunashikatti/riscv/assets/93430948/df208f18-1ec4-4c52-8312-6293adc63e02)

## [NEC Infrared Transmission Protocol](https://techdocs.altium.com/display/FPGA/NEC+Infrared+Transmission+Protocol)
