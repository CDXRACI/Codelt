#include "CDP_GPIO.h"
#include "main.h"

void GPIO_BLINK(){
HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
HAL_Delay(500);

}

void GPIO_WRITE_PIN()
{
    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET);
    HAL_Delay(500);
}
void GPIO_READ_PIN();

