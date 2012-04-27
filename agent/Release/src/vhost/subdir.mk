################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/vhost/rhm010VhostTable.c \
../src/vhost/rhm010VhostTable_data_access.c \
../src/vhost/rhm010VhostTable_data_get.c \
../src/vhost/rhm010VhostTable_data_set.c \
../src/vhost/rhm010VhostTable_interface.c 

OBJS += \
./src/vhost/rhm010VhostTable.o \
./src/vhost/rhm010VhostTable_data_access.o \
./src/vhost/rhm010VhostTable_data_get.o \
./src/vhost/rhm010VhostTable_data_set.o \
./src/vhost/rhm010VhostTable_interface.o 

C_DEPS += \
./src/vhost/rhm010VhostTable.d \
./src/vhost/rhm010VhostTable_data_access.d \
./src/vhost/rhm010VhostTable_data_get.d \
./src/vhost/rhm010VhostTable_data_set.d \
./src/vhost/rhm010VhostTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/vhost/%.o: ../src/vhost/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


