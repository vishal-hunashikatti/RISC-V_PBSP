## CPU Performance Measurement

### Assumptions for the performance measurement
- All instructions are executed only once.
- No parallel execution of the instructions.
- ns --------> nanoseconds
- Clock Cycle Time ---------> 1 ns
- Clock Cycles per instruction ---> 5.5 cycles per instruction

#### Measurements
- Total number of instruction -----> 110.

```
CPU Execution Time = CPI * Instruction count * Clock cycle time  
                   = 2.675 * 110 * 1 ns
                   = 294.25 ns

```
```

00010054 <mulMat>:
   10054:	fc010113          	addi	sp,sp,-64
   10058:	02812e23          	sw	s0,60(sp)
   1005c:	04010413          	addi	s0,sp,64
   10060:	fca42623          	sw	a0,-52(s0)
   10064:	fcb42423          	sw	a1,-56(s0)
   10068:	fe042623          	sw	zero,-20(s0)
   1006c:	0f80006f          	j	10164 <mulMat+0x110>
   10070:	fe042423          	sw	zero,-24(s0)
   10074:	0d80006f          	j	1014c <mulMat+0xf8>
   10078:	fec42783          	lw	a5,-20(s0)
   1007c:	00179713          	slli	a4,a5,0x1
   10080:	fe842783          	lw	a5,-24(s0)
   10084:	00f707b3          	add	a5,a4,a5
   10088:	00279793          	slli	a5,a5,0x2
   1008c:	ff040713          	addi	a4,s0,-16
   10090:	00f707b3          	add	a5,a4,a5
   10094:	fe07a223          	sw	zero,-28(a5)
   10098:	fe042223          	sw	zero,-28(s0)
   1009c:	0980006f          	j	10134 <mulMat+0xe0>
   100a0:	fec42783          	lw	a5,-20(s0)
   100a4:	00179713          	slli	a4,a5,0x1
   100a8:	fe842783          	lw	a5,-24(s0)
   100ac:	00f707b3          	add	a5,a4,a5
   100b0:	00279793          	slli	a5,a5,0x2
   100b4:	ff040713          	addi	a4,s0,-16
   100b8:	00f707b3          	add	a5,a4,a5
   100bc:	fe47a703          	lw	a4,-28(a5)
   100c0:	fec42783          	lw	a5,-20(s0)
   100c4:	00379793          	slli	a5,a5,0x3
   100c8:	fcc42683          	lw	a3,-52(s0)
   100cc:	00f686b3          	add	a3,a3,a5
   100d0:	fe442783          	lw	a5,-28(s0)
   100d4:	00279793          	slli	a5,a5,0x2
   100d8:	00f687b3          	add	a5,a3,a5
   100dc:	0007a683          	lw	a3,0(a5)
   100e0:	fe442783          	lw	a5,-28(s0)
   100e4:	00379793          	slli	a5,a5,0x3
   100e8:	fc842603          	lw	a2,-56(s0)
   100ec:	00f60633          	add	a2,a2,a5
   100f0:	fe842783          	lw	a5,-24(s0)
   100f4:	00279793          	slli	a5,a5,0x2
   100f8:	00f607b3          	add	a5,a2,a5
   100fc:	0007a783          	lw	a5,0(a5)
   10100:	02f687b3          	mul	a5,a3,a5
   10104:	00f70733          	add	a4,a4,a5
   10108:	fec42783          	lw	a5,-20(s0)
   1010c:	00179693          	slli	a3,a5,0x1
   10110:	fe842783          	lw	a5,-24(s0)
   10114:	00f687b3          	add	a5,a3,a5
   10118:	00279793          	slli	a5,a5,0x2
   1011c:	ff040693          	addi	a3,s0,-16
   10120:	00f687b3          	add	a5,a3,a5
   10124:	fee7a223          	sw	a4,-28(a5)
   10128:	fe442783          	lw	a5,-28(s0)
   1012c:	00178793          	addi	a5,a5,1
   10130:	fef42223          	sw	a5,-28(s0)
   10134:	fe442703          	lw	a4,-28(s0)
   10138:	00100793          	li	a5,1
   1013c:	f6e7d2e3          	bge	a5,a4,100a0 <mulMat+0x4c>
   10140:	fe842783          	lw	a5,-24(s0)
   10144:	00178793          	addi	a5,a5,1
   10148:	fef42423          	sw	a5,-24(s0)
   1014c:	fe842703          	lw	a4,-24(s0)
   10150:	00100793          	li	a5,1
   10154:	f2e7d2e3          	bge	a5,a4,10078 <mulMat+0x24>
   10158:	fec42783          	lw	a5,-20(s0)
   1015c:	00178793          	addi	a5,a5,1
   10160:	fef42623          	sw	a5,-20(s0)
   10164:	fec42703          	lw	a4,-20(s0)
   10168:	00100793          	li	a5,1
   1016c:	f0e7d2e3          	bge	a5,a4,10070 <mulMat+0x1c>
   10170:	00000013          	nop
   10174:	03c12403          	lw	s0,60(sp)
   10178:	04010113          	addi	sp,sp,64
   1017c:	00008067          	ret

00010180 <main>:
   10180:	fd010113          	addi	sp,sp,-48
   10184:	02112623          	sw	ra,44(sp)
   10188:	02812423          	sw	s0,40(sp)
   1018c:	03010413          	addi	s0,sp,48
   10190:	000107b7          	lui	a5,0x10
   10194:	20c78793          	addi	a5,a5,524 # 1020c <main+0x8c>
   10198:	0007a603          	lw	a2,0(a5)
   1019c:	0047a683          	lw	a3,4(a5)
   101a0:	0087a703          	lw	a4,8(a5)
   101a4:	00c7a783          	lw	a5,12(a5)
   101a8:	fec42023          	sw	a2,-32(s0)
   101ac:	fed42223          	sw	a3,-28(s0)
   101b0:	fee42423          	sw	a4,-24(s0)
   101b4:	fef42623          	sw	a5,-20(s0)
   101b8:	000107b7          	lui	a5,0x10
   101bc:	20c78793          	addi	a5,a5,524 # 1020c <main+0x8c>
   101c0:	0007a603          	lw	a2,0(a5)
   101c4:	0047a683          	lw	a3,4(a5)
   101c8:	0087a703          	lw	a4,8(a5)
   101cc:	00c7a783          	lw	a5,12(a5)
   101d0:	fcc42823          	sw	a2,-48(s0)
   101d4:	fcd42a23          	sw	a3,-44(s0)
   101d8:	fce42c23          	sw	a4,-40(s0)
   101dc:	fcf42e23          	sw	a5,-36(s0)
   101e0:	fd040713          	addi	a4,s0,-48
   101e4:	fe040793          	addi	a5,s0,-32
   101e8:	00070593          	mv	a1,a4
   101ec:	00078513          	mv	a0,a5
   101f0:	e65ff0ef          	jal	ra,10054 <mulMat>
   101f4:	00000793          	li	a5,0
   101f8:	00078513          	mv	a0,a5
   101fc:	02c12083          	lw	ra,44(sp)
   10200:	02812403          	lw	s0,40(sp)
   10204:	03010113          	addi	sp,sp,48
   10208:	00008067          	ret

```
