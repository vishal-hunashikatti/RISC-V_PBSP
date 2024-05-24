# Tasks

## 1. Binary Arithmetic

### A. 10 - 19

##### Binary representations
- `10 --------> 00001010`
- `19 --------> 00010011`

##### 1's complement arithmetic for A
- Since `10` is positive the binary representation remains same.
- `-19 -------> 11101100`
- `10 + (-19)`
- Perform the addition:

    ```
      00001010   (10)
    + 11101100   (-19)
    ------------
      11110110
    ```

- The result `11110110` is in 1's complement form. 
   - Since the result starts with `1`, it represents a negative number.
   - Invert the bits to find the magnitude:
     - `11110110` -> `00001001`
   - The result is `-9`.

##### 2's complement arithmetic for A
- Add `1` to LSB to the 1's complement of `19`
	- 1's complement 0f `19` ----> `11101100`
	- 2's complement of `19` ----> `11101101`
- Perform the addition:

    ```
      00001010   (10)
    + 11101101   (-19)
    ------------
      11110111
    ```

- The result `11110110` is in 2's complement form. 
   - Since the result starts with `1`, it represents a negative number.
   - Invert the bits and add `1` to LSB to find the magnitude:
     - `11110111` -> `00001000`
     - adding `1` to LSB ---> `00001001`
   - The result is `-9`.

### B. 20 + 30
#### Binary representations
- `20` --------> `00010100`
- `30` --------> `00011110`
- Since both are positive integers there will be no change in 1's or 2's complement the operations remains same
- Perform the addition:

    ```
      00010100   (20)
    + 00011110   (30)
    ------------
      00110010   (50)
    ```
- The result `00110010` is a positive number which is `50` in decimal.

### C. 36 - 12

##### Binary representations
- `36` --------> `00100100`
- `12` --------> `00001100`

##### 1's complement arithmetic for C
- Since `36` is positive the binary representation remains same.
- `-12` -------> `11110011`
- `36 + (-12)`
- Perform the addition:

    ```
      00100100   (36)
    + 11110011   (-12)
    ------------
    1 00010111
    ```

- The result `1 00010111` is in 1's complement form. 
   - Ignore the carry. 
   - Since the result starts with `0`, it represents a positive number.
   - Add `1` from carry to LSB `00010111` --> `00011000`
   - The result is `00011000` -> `24`.

##### 2's complement arithmetic for C
- Add 1 to LSB to the 1's complement of 12.
	- 1's complement 0f `12` ----> `11110011`
	- 2's complement of `12` ----> `11110100`
- Perform the addition:

    ```
      00100100   (36)
    + 11110100   (-12)
    ------------
    1 00011000
    ```

- The result `11110110` is in 2's complement form. 
   - Ignore the carry. 
   - Since the result starts with `0`, it represents a positive number.
   - The result is 00011000 ----> `24`.

## 2. 4-Bit ALU in C-programming language

Arithmetic and Logical operations included while designing ALU in C program

- Arithmetic
	+ Addition
	+ Subtraction
	+ Multiplication
	+ Division
	+ Modulus
- Logical
	+ NOT
	+ AND
	+ OR

## 3. 4-Bit ALU in Verilog

Arithmetic and Logical operations included while designing ALU in Verilog

- Arithmetic
	+ Addition
	+ Subtraction
	+ Multiplication
	+ Division

- Logical
	+ AND
	+ OR
  	+ NOT
  default case is for XOR operation
