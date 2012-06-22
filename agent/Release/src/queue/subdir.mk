################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/queue/QueueTable.c \
../src/queue/QueueTable_data_access.c \
../src/queue/QueueTable_data_get.c \
../src/queue/QueueTable_data_set.c \
../src/queue/QueueTable_interface.c 

OBJS += \
./src/queue/QueueTable.o \
./src/queue/QueueTable_data_access.o \
./src/queue/QueueTable_data_get.o \
./src/queue/QueueTable_data_set.o \
./src/queue/QueueTable_interface.o 

C_DEPS += \
./src/queue/QueueTable.d \
./src/queue/QueueTable_data_access.d \
./src/queue/QueueTable_data_get.d \
./src/queue/QueueTable_data_set.d \
./src/queue/QueueTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/queue/%.o: ../src/queue/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


