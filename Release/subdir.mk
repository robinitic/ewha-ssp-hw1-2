################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ewha-ssp-hw1-2.cpp 

OBJS += \
./ewha-ssp-hw1-2.o 

CPP_DEPS += \
./ewha-ssp-hw1-2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"C:\AndroXStudio\legacy\arduino\hardware\arduino\cores\arduino" -I"C:\AndroXStudio\legacy\arduino\hardware\arduino\variants\mega" -I"C:\AndroXStudio\workspace\ewha-ssp-hw1-2" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=103 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '


