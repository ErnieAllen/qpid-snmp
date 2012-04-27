################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/cluster/rhm010Cluster.c 

OBJS += \
./src/cluster/rhm010Cluster.o 

C_DEPS += \
./src/cluster/rhm010Cluster.d 


# Each subdirectory must supply rules for building sources it contributes
src/cluster/%.o: ../src/cluster/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


