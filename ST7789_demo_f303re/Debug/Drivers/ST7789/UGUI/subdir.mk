################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/ST7789/UGUI/ugui.c \
../Drivers/ST7789/UGUI/ugui_button.c \
../Drivers/ST7789/UGUI/ugui_checkbox.c \
../Drivers/ST7789/UGUI/ugui_image.c \
../Drivers/ST7789/UGUI/ugui_progress.c \
../Drivers/ST7789/UGUI/ugui_sim.c \
../Drivers/ST7789/UGUI/ugui_textbox.c 

OBJS += \
./Drivers/ST7789/UGUI/ugui.o \
./Drivers/ST7789/UGUI/ugui_button.o \
./Drivers/ST7789/UGUI/ugui_checkbox.o \
./Drivers/ST7789/UGUI/ugui_image.o \
./Drivers/ST7789/UGUI/ugui_progress.o \
./Drivers/ST7789/UGUI/ugui_sim.o \
./Drivers/ST7789/UGUI/ugui_textbox.o 

C_DEPS += \
./Drivers/ST7789/UGUI/ugui.d \
./Drivers/ST7789/UGUI/ugui_button.d \
./Drivers/ST7789/UGUI/ugui_checkbox.d \
./Drivers/ST7789/UGUI/ugui_image.d \
./Drivers/ST7789/UGUI/ugui_progress.d \
./Drivers/ST7789/UGUI/ugui_sim.d \
./Drivers/ST7789/UGUI/ugui_textbox.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/ST7789/UGUI/%.o Drivers/ST7789/UGUI/%.su Drivers/ST7789/UGUI/%.cyclo: ../Drivers/ST7789/UGUI/%.c Drivers/ST7789/UGUI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F303xE -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/ankur.gupta/OneDrive/Ankur/STM32/STM32CubeMX_Projects/ST7789_STM32F303_Interface/Drivers/ST7789" -I../Drivers/ST7789 -I../Drivers/ST7789/LCD -I../Drivers/ST7789/UGUI -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-ST7789-2f-UGUI

clean-Drivers-2f-ST7789-2f-UGUI:
	-$(RM) ./Drivers/ST7789/UGUI/ugui.cyclo ./Drivers/ST7789/UGUI/ugui.d ./Drivers/ST7789/UGUI/ugui.o ./Drivers/ST7789/UGUI/ugui.su ./Drivers/ST7789/UGUI/ugui_button.cyclo ./Drivers/ST7789/UGUI/ugui_button.d ./Drivers/ST7789/UGUI/ugui_button.o ./Drivers/ST7789/UGUI/ugui_button.su ./Drivers/ST7789/UGUI/ugui_checkbox.cyclo ./Drivers/ST7789/UGUI/ugui_checkbox.d ./Drivers/ST7789/UGUI/ugui_checkbox.o ./Drivers/ST7789/UGUI/ugui_checkbox.su ./Drivers/ST7789/UGUI/ugui_image.cyclo ./Drivers/ST7789/UGUI/ugui_image.d ./Drivers/ST7789/UGUI/ugui_image.o ./Drivers/ST7789/UGUI/ugui_image.su ./Drivers/ST7789/UGUI/ugui_progress.cyclo ./Drivers/ST7789/UGUI/ugui_progress.d ./Drivers/ST7789/UGUI/ugui_progress.o ./Drivers/ST7789/UGUI/ugui_progress.su ./Drivers/ST7789/UGUI/ugui_sim.cyclo ./Drivers/ST7789/UGUI/ugui_sim.d ./Drivers/ST7789/UGUI/ugui_sim.o ./Drivers/ST7789/UGUI/ugui_sim.su ./Drivers/ST7789/UGUI/ugui_textbox.cyclo ./Drivers/ST7789/UGUI/ugui_textbox.d ./Drivers/ST7789/UGUI/ugui_textbox.o ./Drivers/ST7789/UGUI/ugui_textbox.su

.PHONY: clean-Drivers-2f-ST7789-2f-UGUI

