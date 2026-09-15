#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

// ---- Pines Motor A ----
#define IN1_PIN 5
#define IN2_PIN 4

// ---- Pines Motor B ----
#define IN3_PIN 3
#define IN4_PIN 2

int main(void) {
    stdio_init_all();

    // Inicialización de pines como salidas
    gpio_init(IN1_PIN);  gpio_set_dir(IN1_PIN, GPIO_OUT);
    gpio_init(IN2_PIN);  gpio_set_dir(IN2_PIN, GPIO_OUT);

    gpio_init(IN3_PIN);  gpio_set_dir(IN3_PIN, GPIO_OUT);
    gpio_init(IN4_PIN);  gpio_set_dir(IN4_PIN, GPIO_OUT);

    // Todo apagado al inicio
   

    while (true) {
        // ---- Avanzar ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(2000);

        // ---- Detener ----
    
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Retroceder ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(2000);

        // ---- Detener ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar izquierda ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

  
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Detener ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar derecha ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);


        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(1000);

        // ---- Detener ----
        
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);
    }

    return 0;
}


#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

// ---- Pines Motor A ----
#define IN1_PIN 5
#define IN2_PIN 4

// ---- Pines Motor B ----
#define IN3_PIN 3
#define IN4_PIN 2

int main(void) {
    stdio_init_all();

    // Inicialización de pines como salidas
    gpio_init(IN1_PIN);  gpio_set_dir(IN1_PIN, GPIO_OUT);
    gpio_init(IN2_PIN);  gpio_set_dir(IN2_PIN, GPIO_OUT);

    gpio_init(IN3_PIN);  gpio_set_dir(IN3_PIN, GPIO_OUT);
    gpio_init(IN4_PIN);  gpio_set_dir(IN4_PIN, GPIO_OUT);

    // Todo apagado al inicio
   

    while (true) {
        // ---- Avanzar ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(2000);

        // ---- Detener ----
    
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Retroceder ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(2000);

        // ---- Detener ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar izquierda ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

  
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Detener ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar derecha ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);


        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(1000);

        // ---- Detener ----
        
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);
    }

    return 0;
}


#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

// ---- Pines Motor A ----
#define IN1_PIN 5
#define IN2_PIN 4

// ---- Pines Motor B ----
#define IN3_PIN 3
#define IN4_PIN 2

int main(void) {
    stdio_init_all();

    // Inicialización de pines como salidas
    gpio_init(IN1_PIN);  gpio_set_dir(IN1_PIN, GPIO_OUT);
    gpio_init(IN2_PIN);  gpio_set_dir(IN2_PIN, GPIO_OUT);

    gpio_init(IN3_PIN);  gpio_set_dir(IN3_PIN, GPIO_OUT);
    gpio_init(IN4_PIN);  gpio_set_dir(IN4_PIN, GPIO_OUT);

    // Todo apagado al inicio
   

    while (true) {
        // ---- Avanzar ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(2000);

        // ---- Detener ----
    
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Retroceder ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(2000);

        // ---- Detener ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar izquierda ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

  
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Detener ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar derecha ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);


        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(1000);

        // ---- Detener ----
        
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);
    }

    return 0;
}


#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

// ---- Pines Motor A ----
#define IN1_PIN 5
#define IN2_PIN 4

// ---- Pines Motor B ----
#define IN3_PIN 3
#define IN4_PIN 2

int main(void) {
    stdio_init_all();

    // Inicialización de pines como salidas
    gpio_init(IN1_PIN);  gpio_set_dir(IN1_PIN, GPIO_OUT);
    gpio_init(IN2_PIN);  gpio_set_dir(IN2_PIN, GPIO_OUT);

    gpio_init(IN3_PIN);  gpio_set_dir(IN3_PIN, GPIO_OUT);
    gpio_init(IN4_PIN);  gpio_set_dir(IN4_PIN, GPIO_OUT);

    // Todo apagado al inicio
   

    while (true) {
        // ---- Avanzar ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(2000);

        // ---- Detener ----
    
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Retroceder ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(2000);

        // ---- Detener ----
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar izquierda ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 1);

  
        gpio_put(IN3_PIN, 1);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Detener ----
       
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);

        // ---- Girar derecha ----
    
        gpio_put(IN1_PIN, 1);
        gpio_put(IN2_PIN, 0);


        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 1);

        sleep_ms(1000);

        // ---- Detener ----
        
        gpio_put(IN1_PIN, 0);
        gpio_put(IN2_PIN, 0);

    
        gpio_put(IN3_PIN, 0);
        gpio_put(IN4_PIN, 0);

        sleep_ms(1000);
    }

    return 0;
}


