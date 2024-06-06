# AC Remote Control Signal Reader
This application is developed to read digital signals from AC remote control using IR receiver sensors and then record th ON and OFF signals and store them. The new signal read from the receiver is now compared with the previous input and display if they are same.

### Flowchart 
[AC remote receiver flow chart](https://github.com/vishal-hunashikatti/riscv/blob/main/Week-3/IR_reciever-flow_chart.png)

### Block Diagram 
[AC remote receiver block diagram](https://github.com/vishal-hunashikatti/riscv/blob/main/Week-3/IR_reciever_block-diagram.png)

### I/O Mapping
#### GPIO mapping
- X30[0] --> IR receiver input
- X30[1] --> Output for LED display
## IR Receiver

Some examples for suitable data format that are accepted by the receiver: 
- NEC Code
- Toshiba Micom Format
- Sharp Code
- RC5 Code
- RC6 Code
- R±2000 Code
- Sony Format (SIRCS).

## Block Diagram of a IR receiver TSOP1730

![image](https://github.com/vishal-hunashikatti/riscv/assets/93430948/df208f18-1ec4-4c52-8312-6293adc63e02)

