## CPU Performance

### CPU Execution Time
- Time spent on executing instructions of a program excluding time spent on I/O operations or other processes.
- CPU Execution time comprises of:
	+ **User CPU time:** Time spent of user mode, executing application code. The criterion to measure the CPU performance
	+ **System CPU time:** Time spent in kernel mode, executing system calls or operating system tasks

```
				 1
	Clock rate(f) = ---------------------
			(Clock cycle time(T))
```
```
CPU Execution Time = CPU Clock Cycles * Clock Cycle Time(T) = CPI * Instruction count * Clock cycle time
```
```
                     CPU Clock Cycles     CPI * Instruction count
CPU Execution Time = ----------------- = -------------------------
		        Clock rate(f)           Clock rate(f)
```

CPI: Clock cycles per instruction

## RISC-V Micro-architecture