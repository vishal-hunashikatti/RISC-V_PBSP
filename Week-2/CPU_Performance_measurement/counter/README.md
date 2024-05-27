## CPU Performance Measurement

### Assumptions for the performance measurement
- All instructions are executed only once.
- No parallel execution of the instructions.
- ns --------> nanoseconds
- Clock Cycle Time ---------> 1 ns
- Clock Cycles per instruction ---> 5.5 cycles per instruction

#### Measurements
- Total number of instruction -----> 36

```
CPU Execution Time = CPI * Instruction count * Clock cycle time                   
                   = 4 * 36 * 1 ns
                   = 144 ns
```
```

00010054 <delay>:
   10054:	fd010113          	addi	sp,sp,-48
   10058:	02812623          	sw	s0,44(sp)
   1005c:	03010413          	addi	s0,sp,48
   10060:	fca42e23          	sw	a0,-36(s0)
   10064:	fdc42783          	lw	a5,-36(s0)
   10068:	fef42623          	sw	a5,-20(s0)
   1006c:	00000013          	nop
   10070:	02c12403          	lw	s0,44(sp)
   10074:	03010113          	addi	sp,sp,48
   10078:	00008067          	ret

0001007c <display>:
   1007c:	fe010113          	addi	sp,sp,-32
   10080:	00812e23          	sw	s0,28(sp)
   10084:	02010413          	addi	s0,sp,32
   10088:	fea42623          	sw	a0,-20(s0)
   1008c:	00000013          	nop
   10090:	01c12403          	lw	s0,28(sp)
   10094:	02010113          	addi	sp,sp,32
   10098:	00008067          	ret

0001009c <main>:
   1009c:	fe010113          	addi	sp,sp,-32
   100a0:	00112e23          	sw	ra,28(sp)
   100a4:	00812c23          	sw	s0,24(sp)
   100a8:	02010413          	addi	s0,sp,32
   100ac:	fe042623          	sw	zero,-20(s0)
   100b0:	fec42503          	lw	a0,-20(s0)
   100b4:	fc9ff0ef          	jal	ra,1007c <display>
   100b8:	fec42783          	lw	a5,-20(s0)
   100bc:	00178793          	addi	a5,a5,1
   100c0:	fef42623          	sw	a5,-20(s0)
   100c4:	fec42703          	lw	a4,-20(s0)
   100c8:	01000793          	li	a5,16
   100cc:	00f71463          	bne	a4,a5,100d4 <main+0x38>
   100d0:	fe042623          	sw	zero,-20(s0)
   100d4:	0000c7b7          	lui	a5,0xc
   100d8:	35078513          	addi	a0,a5,848 # c350 <delay-0x3d04>
   100dc:	f79ff0ef          	jal	ra,10054 <delay>
   100e0:	fd1ff06f          	j	100b0 <main+0x14>

```
