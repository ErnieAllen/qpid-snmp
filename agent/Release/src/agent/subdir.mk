################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/agent/rhm010Agent.c 

OBJS += \
./src/agent/rhm010Agent.o 

C_DEPS += \
./src/agent/rhm010Agent.d 


# Each subdirectory must supply rules for building sources it contributes
src/agent/%.o: ../src/agent/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


