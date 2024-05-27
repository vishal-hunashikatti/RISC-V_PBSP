## CPU Performance Measurement

### Assumptions for the performance measurement
- Clock Cycle Time ---------> 1 nanosecond
- Clock Cycles per instruction ---> 5.5 cycles per instruction
- All instructions are executed only once.
- No parallel execution of the instructions

#### Measurements
- Total number of instruction -----> 229

```
                     CPU Clock Cycles     CPI * Instruction count
CPU Execution Time = ----------------- = -------------------------
		        Clock rate(f)           Clock rate(f)
                   
                   = 229 * 5.5 * 1 ns
                   = 1.23 &micro s

```
```

00010054 <add>:
   10054:	fe010113          	addi	sp,sp,-32
   10058:	00812e23          	sw	s0,28(sp)
   1005c:	02010413          	addi	s0,sp,32
   10060:	fea42623          	sw	a0,-20(s0)
   10064:	feb42423          	sw	a1,-24(s0)
   10068:	fec42703          	lw	a4,-20(s0)
   1006c:	fe842783          	lw	a5,-24(s0)
   10070:	00f707b3          	add	a5,a4,a5
   10074:	00f7f793          	andi	a5,a5,15
   10078:	00078513          	mv	a0,a5
   1007c:	01c12403          	lw	s0,28(sp)
   10080:	02010113          	addi	sp,sp,32
   10084:	00008067          	ret

00010088 <sub>:
   10088:	fe010113          	addi	sp,sp,-32
   1008c:	00812e23          	sw	s0,28(sp)
   10090:	02010413          	addi	s0,sp,32
   10094:	fea42623          	sw	a0,-20(s0)
   10098:	feb42423          	sw	a1,-24(s0)
   1009c:	fec42703          	lw	a4,-20(s0)
   100a0:	fe842783          	lw	a5,-24(s0)
   100a4:	40f707b3          	sub	a5,a4,a5
   100a8:	00f7f793          	andi	a5,a5,15
   100ac:	00078513          	mv	a0,a5
   100b0:	01c12403          	lw	s0,28(sp)
   100b4:	02010113          	addi	sp,sp,32
   100b8:	00008067          	ret

000100bc <mul>:
   100bc:	fe010113          	addi	sp,sp,-32
   100c0:	00812e23          	sw	s0,28(sp)
   100c4:	02010413          	addi	s0,sp,32
   100c8:	fea42623          	sw	a0,-20(s0)
   100cc:	feb42423          	sw	a1,-24(s0)
   100d0:	fec42703          	lw	a4,-20(s0)
   100d4:	fe842783          	lw	a5,-24(s0)
   100d8:	02f707b3          	mul	a5,a4,a5
   100dc:	00f7f793          	andi	a5,a5,15
   100e0:	00078513          	mv	a0,a5
   100e4:	01c12403          	lw	s0,28(sp)
   100e8:	02010113          	addi	sp,sp,32
   100ec:	00008067          	ret

000100f0 <div>:
   100f0:	fe010113          	addi	sp,sp,-32
   100f4:	00812e23          	sw	s0,28(sp)
   100f8:	02010413          	addi	s0,sp,32
   100fc:	fea42623          	sw	a0,-20(s0)
   10100:	feb42423          	sw	a1,-24(s0)
   10104:	fec42703          	lw	a4,-20(s0)
   10108:	fe842783          	lw	a5,-24(s0)
   1010c:	02f747b3          	div	a5,a4,a5
   10110:	00f7f793          	andi	a5,a5,15
   10114:	00078513          	mv	a0,a5
   10118:	01c12403          	lw	s0,28(sp)
   1011c:	02010113          	addi	sp,sp,32
   10120:	00008067          	ret

00010124 <mod>:
   10124:	fe010113          	addi	sp,sp,-32
   10128:	00812e23          	sw	s0,28(sp)
   1012c:	02010413          	addi	s0,sp,32
   10130:	fea42623          	sw	a0,-20(s0)
   10134:	feb42423          	sw	a1,-24(s0)
   10138:	fec42703          	lw	a4,-20(s0)
   1013c:	fe842783          	lw	a5,-24(s0)
   10140:	02f767b3          	rem	a5,a4,a5
   10144:	00f7f793          	andi	a5,a5,15
   10148:	00078513          	mv	a0,a5
   1014c:	01c12403          	lw	s0,28(sp)
   10150:	02010113          	addi	sp,sp,32
   10154:	00008067          	ret

00010158 <bitwise_not>:
   10158:	fe010113          	addi	sp,sp,-32
   1015c:	00812e23          	sw	s0,28(sp)
   10160:	02010413          	addi	s0,sp,32
   10164:	fea42623          	sw	a0,-20(s0)
   10168:	fec42783          	lw	a5,-20(s0)
   1016c:	fff7c793          	not	a5,a5
   10170:	00f7f793          	andi	a5,a5,15
   10174:	00078513          	mv	a0,a5
   10178:	01c12403          	lw	s0,28(sp)
   1017c:	02010113          	addi	sp,sp,32
   10180:	00008067          	ret

00010184 <bitwise_or>:
   10184:	fe010113          	addi	sp,sp,-32
   10188:	00812e23          	sw	s0,28(sp)
   1018c:	02010413          	addi	s0,sp,32
   10190:	fea42623          	sw	a0,-20(s0)
   10194:	feb42423          	sw	a1,-24(s0)
   10198:	fec42703          	lw	a4,-20(s0)
   1019c:	fe842783          	lw	a5,-24(s0)
   101a0:	00f767b3          	or	a5,a4,a5
   101a4:	00f7f793          	andi	a5,a5,15
   101a8:	00078513          	mv	a0,a5
   101ac:	01c12403          	lw	s0,28(sp)
   101b0:	02010113          	addi	sp,sp,32
   101b4:	00008067          	ret

000101b8 <bitwise_and>:
   101b8:	fe010113          	addi	sp,sp,-32
   101bc:	00812e23          	sw	s0,28(sp)
   101c0:	02010413          	addi	s0,sp,32
   101c4:	fea42623          	sw	a0,-20(s0)
   101c8:	feb42423          	sw	a1,-24(s0)
   101cc:	fec42703          	lw	a4,-20(s0)
   101d0:	fe842783          	lw	a5,-24(s0)
   101d4:	00f777b3          	and	a5,a4,a5
   101d8:	00f7f793          	andi	a5,a5,15
   101dc:	00078513          	mv	a0,a5
   101e0:	01c12403          	lw	s0,28(sp)
   101e4:	02010113          	addi	sp,sp,32
   101e8:	00008067          	ret

000101ec <main>:
   101ec:	fd010113          	addi	sp,sp,-48
   101f0:	02112623          	sw	ra,44(sp)
   101f4:	02812423          	sw	s0,40(sp)
   101f8:	03010413          	addi	s0,sp,48
   101fc:	fec42703          	lw	a4,-20(s0)
   10200:	02b00793          	li	a5,43
   10204:	06f70e63          	beq	a4,a5,10280 <main+0x94>
   10208:	fec42703          	lw	a4,-20(s0)
   1020c:	02b00793          	li	a5,43
   10210:	02e7c663          	blt	a5,a4,1023c <main+0x50>
   10214:	fec42703          	lw	a4,-20(s0)
   10218:	02600793          	li	a5,38
   1021c:	18f70463          	beq	a4,a5,103a4 <main+0x1b8>
   10220:	fec42703          	lw	a4,-20(s0)
   10224:	02a00793          	li	a5,42
   10228:	0af70863          	beq	a4,a5,102d8 <main+0xec>
   1022c:	fec42703          	lw	a4,-20(s0)
   10230:	02100793          	li	a5,33
   10234:	12f70463          	beq	a4,a5,1035c <main+0x170>
   10238:	1980006f          	j	103d0 <main+0x1e4>
   1023c:	fec42703          	lw	a4,-20(s0)
   10240:	02f00793          	li	a5,47
   10244:	0cf70063          	beq	a4,a5,10304 <main+0x118>
   10248:	fec42703          	lw	a4,-20(s0)
   1024c:	02f00793          	li	a5,47
   10250:	00e7ca63          	blt	a5,a4,10264 <main+0x78>
   10254:	fec42703          	lw	a4,-20(s0)
   10258:	02d00793          	li	a5,45
   1025c:	04f70863          	beq	a4,a5,102ac <main+0xc0>
   10260:	1700006f          	j	103d0 <main+0x1e4>
   10264:	fec42703          	lw	a4,-20(s0)
   10268:	06d00793          	li	a5,109
   1026c:	0cf70263          	beq	a4,a5,10330 <main+0x144>
   10270:	fec42703          	lw	a4,-20(s0)
   10274:	07c00793          	li	a5,124
   10278:	10f70063          	beq	a4,a5,10378 <main+0x18c>
   1027c:	1540006f          	j	103d0 <main+0x1e4>
   10280:	fe842783          	lw	a5,-24(s0)
   10284:	00f7f793          	andi	a5,a5,15
   10288:	fef42423          	sw	a5,-24(s0)
   1028c:	fe442783          	lw	a5,-28(s0)
   10290:	00f7f793          	andi	a5,a5,15
   10294:	fef42223          	sw	a5,-28(s0)
   10298:	fe442583          	lw	a1,-28(s0)
   1029c:	fe842503          	lw	a0,-24(s0)
   102a0:	db5ff0ef          	jal	ra,10054 <add>
   102a4:	fea42023          	sw	a0,-32(s0)
   102a8:	1280006f          	j	103d0 <main+0x1e4>
   102ac:	fe842783          	lw	a5,-24(s0)
   102b0:	00f7f793          	andi	a5,a5,15
   102b4:	fef42423          	sw	a5,-24(s0)
   102b8:	fe442783          	lw	a5,-28(s0)
   102bc:	00f7f793          	andi	a5,a5,15
   102c0:	fef42223          	sw	a5,-28(s0)
   102c4:	fe442583          	lw	a1,-28(s0)
   102c8:	fe842503          	lw	a0,-24(s0)
   102cc:	dbdff0ef          	jal	ra,10088 <sub>
   102d0:	fea42023          	sw	a0,-32(s0)
   102d4:	0fc0006f          	j	103d0 <main+0x1e4>
   102d8:	fe842783          	lw	a5,-24(s0)
   102dc:	00f7f793          	andi	a5,a5,15
   102e0:	fef42423          	sw	a5,-24(s0)
   102e4:	fe442783          	lw	a5,-28(s0)
   102e8:	00f7f793          	andi	a5,a5,15
   102ec:	fef42223          	sw	a5,-28(s0)
   102f0:	fe442583          	lw	a1,-28(s0)
   102f4:	fe842503          	lw	a0,-24(s0)
   102f8:	dc5ff0ef          	jal	ra,100bc <mul>
   102fc:	fea42023          	sw	a0,-32(s0)
   10300:	0d00006f          	j	103d0 <main+0x1e4>
   10304:	fe842783          	lw	a5,-24(s0)
   10308:	00f7f793          	andi	a5,a5,15
   1030c:	fef42423          	sw	a5,-24(s0)
   10310:	fe442783          	lw	a5,-28(s0)
   10314:	00f7f793          	andi	a5,a5,15
   10318:	fef42223          	sw	a5,-28(s0)
   1031c:	fe442583          	lw	a1,-28(s0)
   10320:	fe842503          	lw	a0,-24(s0)
   10324:	dcdff0ef          	jal	ra,100f0 <div>
   10328:	fea42023          	sw	a0,-32(s0)
   1032c:	0a40006f          	j	103d0 <main+0x1e4>
   10330:	fe842783          	lw	a5,-24(s0)
   10334:	00f7f793          	andi	a5,a5,15
   10338:	fef42423          	sw	a5,-24(s0)
   1033c:	fe442783          	lw	a5,-28(s0)
   10340:	00f7f793          	andi	a5,a5,15
   10344:	fef42223          	sw	a5,-28(s0)
   10348:	fe442583          	lw	a1,-28(s0)
   1034c:	fe842503          	lw	a0,-24(s0)
   10350:	dd5ff0ef          	jal	ra,10124 <mod>
   10354:	fea42023          	sw	a0,-32(s0)
   10358:	0780006f          	j	103d0 <main+0x1e4>
   1035c:	fdc42783          	lw	a5,-36(s0)
   10360:	00f7f793          	andi	a5,a5,15
   10364:	fcf42e23          	sw	a5,-36(s0)
   10368:	fdc42503          	lw	a0,-36(s0)
   1036c:	dedff0ef          	jal	ra,10158 <bitwise_not>
   10370:	fea42023          	sw	a0,-32(s0)
   10374:	05c0006f          	j	103d0 <main+0x1e4>
   10378:	fe842783          	lw	a5,-24(s0)
   1037c:	00f7f793          	andi	a5,a5,15
   10380:	fef42423          	sw	a5,-24(s0)
   10384:	fe442783          	lw	a5,-28(s0)
   10388:	00f7f793          	andi	a5,a5,15
   1038c:	fef42223          	sw	a5,-28(s0)
   10390:	fe442583          	lw	a1,-28(s0)
   10394:	fe842503          	lw	a0,-24(s0)
   10398:	dedff0ef          	jal	ra,10184 <bitwise_or>
   1039c:	fea42023          	sw	a0,-32(s0)
   103a0:	0300006f          	j	103d0 <main+0x1e4>
   103a4:	fe842783          	lw	a5,-24(s0)
   103a8:	00f7f793          	andi	a5,a5,15
   103ac:	fef42423          	sw	a5,-24(s0)
   103b0:	fe442783          	lw	a5,-28(s0)
   103b4:	00f7f793          	andi	a5,a5,15
   103b8:	fef42223          	sw	a5,-28(s0)
   103bc:	fe442583          	lw	a1,-28(s0)
   103c0:	fe842503          	lw	a0,-24(s0)
   103c4:	df5ff0ef          	jal	ra,101b8 <bitwise_and>
   103c8:	fea42023          	sw	a0,-32(s0)
   103cc:	00000013          	nop
   103d0:	00000793          	li	a5,0
   103d4:	00078513          	mv	a0,a5
   103d8:	02c12083          	lw	ra,44(sp)
   103dc:	02812403          	lw	s0,40(sp)
   103e0:	03010113          	addi	sp,sp,48
   103e4:	00008067          	ret

```
