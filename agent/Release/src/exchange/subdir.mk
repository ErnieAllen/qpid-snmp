################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/exchange/rhm010ExchangeTable.c \
../src/exchange/rhm010ExchangeTable_data_access.c \
../src/exchange/rhm010ExchangeTable_data_get.c \
../src/exchange/rhm010ExchangeTable_data_set.c \
../src/exchange/rhm010ExchangeTable_interface.c 

OBJS += \
./src/exchange/rhm010ExchangeTable.o \
./src/exchange/rhm010ExchangeTable_data_access.o \
./src/exchange/rhm010ExchangeTable_data_get.o \
./src/exchange/rhm010ExchangeTable_data_set.o \
./src/exchange/rhm010ExchangeTable_interface.o 

C_DEPS += \
./src/exchange/rhm010ExchangeTable.d \
./src/exchange/rhm010ExchangeTable_data_access.d \
./src/exchange/rhm010ExchangeTable_data_get.d \
./src/exchange/rhm010ExchangeTable_data_set.d \
./src/exchange/rhm010ExchangeTable_interface.d 


# Each subdirectory must supply rules for building sources it contributes
src/exchange/%.o: ../src/exchange/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


