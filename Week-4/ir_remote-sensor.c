#include <stdio.h>

#define ON 1
#define OFF 0

// Enabled to check the functionality using scanf functions from the keyboard
#define DEBUG

int main (void)	{
	int ir_input, ir_input_array[2] = {5, 5};
#ifndef DEBUG
    /*
    
    Definitions to receive code from IR sensor
    
    */ 
#endif

    while (1)   {
#ifdef DEBUG
        //printf("Before any input from keyboard:\n");
        //printf("ir_input_array[0] = %d\n", ir_input_array[0]);
        //printf("ir_input_array[1] = %d\n", ir_input_array[1]);
        scanf("%d", &ir_input);
        if(5 == ir_input_array[0])   {
            ir_input_array[0] = ir_input;
        } else  {
            ir_input_array[1] = ir_input;
        }
        //printf("After any input from keyboard:\n");
        //printf("ir_input_array[0] = %d\n", ir_input_array[0]);
        //printf("ir_input_array[1] = %d\n", ir_input_array[1]);
        if (ir_input_array[0] == ir_input_array[1]) {
            if(0 == ir_input_array[0])   {
                printf("The new input is same as the old one that is OFF\n");
            } else {
                printf("The new input is same as the old one that is ON\n");
            }
        }
        if (5 == ir_input_array[1]) {
            continue;
        } else  {
            ir_input_array[0] = ir_input_array[1];
        }
        
        //ir_input_array[1] = 5;
#endif
#ifndef DEBUG
    /*
    
    Data recieving and comparing after receiving it from IR sensor
    
    */ 
#endif
    }    
    
    return 0;

}