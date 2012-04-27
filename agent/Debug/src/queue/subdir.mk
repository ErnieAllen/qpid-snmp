################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/queue/rhm010QueueTable.c \
../src/queue/rhm010QueueTable_data_access.c \
../src/queue/rhm010QueueTable_data_get.c \
../src/queue/rhm010QueueTable_data_set.c \
../src/queue/rhm010QueueTable_interface.c 

OBJS += \
./src/queue/rhm010QueueTable.o \
./src/queue/rhm010QueueTable_data_access.o \
./src/queue/rhm010QueueTable_data_get.o \
./src/queue/rhm010QueueTable_data_set.o \
./src/queue/rhm010QueueTable_interface.o 

C_DEPS += \
./src/queue/rhm010QueueTable.d \
./src/queue/rhm010QueueTable_data_access.d \
./src/queue/rhm010QueueTable_data_get.d \
./src/queue/rhm010QueueTable_data_set.d \
./src/queue/rhm010QueueTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/queue/%.o: ../src/queue/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


