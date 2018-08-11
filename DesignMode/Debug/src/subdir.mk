################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Client.cpp \
../src/GameRules.cpp \
../src/Main.cpp \
../src/TestCase.cpp 

OBJS += \
./src/Client.o \
./src/GameRules.o \
./src/Main.o \
./src/TestCase.o 

CPP_DEPS += \
./src/Client.d \
./src/GameRules.d \
./src/Main.d \
./src/TestCase.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/zzb152/Documents/GameOfCounting/header -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


