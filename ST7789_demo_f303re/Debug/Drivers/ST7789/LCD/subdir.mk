################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/ST7789/LCD/images.c \
../Drivers/ST7789/LCD/lcd.c 

OBJS += \
./Drivers/ST7789/LCD/images.o \
./Drivers/ST7789/LCD/lcd.o 

C_DEPS += \
./Drivers/ST7789/LCD/images.d \
./Drivers/ST7789/LCD/lcd.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/ST7789/LCD/%.o Drivers/ST7789/LCD/%.su Drivers/ST7789/LCD/%.cyclo: ../Drivers/ST7789/LCD/%.c Drivers/ST7789/LCD/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F303xE -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/ankur.gupta/OneDrive/Ankur/STM32/STM32CubeMX_Projects/ST7789_STM32F303_Interface/Drivers/ST7789" -I../Drivers/ST7789 -I../Drivers/ST7789/LCD -I../Drivers/ST7789/UGUI -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-ST7789-2f-LCD

clean-Drivers-2f-ST7789-2f-LCD:
	-$(RM) ./Drivers/ST7789/LCD/images.cyclo ./Drivers/ST7789/LCD/images.d ./Drivers/ST7789/LCD/images.o ./Drivers/ST7789/LCD/images.su ./Drivers/ST7789/LCD/lcd.cyclo ./Drivers/ST7789/LCD/lcd.d ./Drivers/ST7789/LCD/lcd.o ./Drivers/ST7789/LCD/lcd.su

.PHONY: clean-Drivers-2f-ST7789-2f-LCD

