################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/memory/rhm010Memory.c 

OBJS += \
./src/memory/rhm010Memory.o 

C_DEPS += \
./src/memory/rhm010Memory.d 


# Each subdirectory must supply rules for building sources it contributes
src/memory/%.o: ../src/memory/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


