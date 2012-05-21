################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/connection/rhm010ConnectionTable.c \
../src/connection/rhm010ConnectionTable_data_access.c \
../src/connection/rhm010ConnectionTable_data_get.c \
../src/connection/rhm010ConnectionTable_data_set.c \
../src/connection/rhm010ConnectionTable_interface.c 

OBJS += \
./src/connection/rhm010ConnectionTable.o \
./src/connection/rhm010ConnectionTable_data_access.o \
./src/connection/rhm010ConnectionTable_data_get.o \
./src/connection/rhm010ConnectionTable_data_set.o \
./src/connection/rhm010ConnectionTable_interface.o 

C_DEPS += \
./src/connection/rhm010ConnectionTable.d \
./src/connection/rhm010ConnectionTable_data_access.d \
./src/connection/rhm010ConnectionTable_data_get.d \
./src/connection/rhm010ConnectionTable_data_set.d \
./src/connection/rhm010ConnectionTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/connection/%.o: ../src/connection/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


