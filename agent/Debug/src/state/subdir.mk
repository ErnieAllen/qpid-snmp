################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/state/rhm010ManagementSetupState.c 

OBJS += \
./src/state/rhm010ManagementSetupState.o 

C_DEPS += \
./src/state/rhm010ManagementSetupState.d 


# Each subdirectory must supply rules for building sources it contributes
src/state/%.o: ../src/state/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


