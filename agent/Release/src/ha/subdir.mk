################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ha/rhm010HaBroker.c 

OBJS += \
./src/ha/rhm010HaBroker.o 

C_DEPS += \
./src/ha/rhm010HaBroker.d 


# Each subdirectory must supply rules for building sources it contributes
src/ha/%.o: ../src/ha/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


