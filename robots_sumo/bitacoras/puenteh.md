EL PUENTE H

Circuito para el control de motores de corriente continua

Trabajo de investigación

Índice
1. Introducción
2. ¿Qué es un puente H?
3. Principio de funcionamiento
4. Estados de operación
5. Implementación con transistores y con circuitos integrados
6. Circuitos integrados comerciales
7. Aplicaciones
8. Ventajas y limitaciones
9. Conclusión
10. Referencias

1. Introducción
En robótica y electrónica de control es habitual necesitar que un motor de corriente continua (DC) gire en ambos
sentidos y con distintas velocidades, utilizando únicamente señales digitales de baja potencia provenientes de un
microcontrolador. El circuito que permite resolver este problema se conoce como puente H (H-bridge, en inglés),
llamado así porque la disposición de sus componentes recuerda a la letra H. Este trabajo describe su estructura, su
principio de funcionamiento, las formas más comunes de implementarlo y sus aplicaciones prácticas.
2. ¿Qué es un puente H?
Un puente H es un circuito electrónico compuesto por cuatro interruptores (generalmente transistores) dispuestos en
dos ramas paralelas, con el motor conectado entre el punto medio de cada rama. Esta disposición permite invertir la
polaridad de la tensión aplicada al motor sin necesidad de invertir físicamente los cables de alimentación,
simplemente activando distintas combinaciones de los interruptores.
Su función principal es actuar como interfaz entre la parte de control (señales digitales de bajo voltaje y corriente,
típicamente 3.3 V o 5 V) y la parte de potencia (el motor, que puede requerir varios amperios y voltajes más altos).
3. Principio de funcionamiento
Los cuatro interruptores del puente H suelen identificarse como S1, S2, S3 y S4, ubicados de la siguiente manera:
• S1 y S2: rama izquierda (S1 arriba, conectado a +V; S2 abajo, conectado a GND)
• S3 y S4: rama derecha (S3 arriba, conectado a +V; S4 abajo, conectado a GND)
• El motor se conecta entre el punto medio de la rama izquierda y el punto medio de la rama derecha
Cerrando distintas combinaciones de estos interruptores, la corriente puede circular por el motor en un sentido o en
el opuesto, lo que determina la dirección de giro.
4. Estados de operación
Interruptores cerrados Efecto sobre el motor
S1 y S4 Gira en sentido horario (adelante)
S2 y S3 Gira en sentido antihorario (atrás)
Todos abiertos Motor en &quot;rueda libre&quot; (sin torque)
S1 y S3 (o S2 y S4) Frenado (cortocircuito entre terminales del motor)
S1 y S2 juntos, o S3 y S4 juntos PROHIBIDO: cortocircuito directo entre +V y

GND

La combinación de velocidad se logra aplicando una señal PWM (modulación por ancho de pulso) sobre uno de los
interruptores de cada rama, en lugar de mantenerlo simplemente encendido o apagado. Cuanto mayor es el ciclo de
trabajo (duty cycle) de la señal PWM, mayor es la tensión efectiva promedio aplicada al motor y, por lo tanto, mayor
su velocidad.
5. Implementación con transistores y con circuitos integrados
5.1 Con transistores discretos
Puede construirse un puente H con cuatro transistores (BJT o MOSFET), diodos de protección (llamados diodos de
rueda libre o flyback) en paralelo con cada interruptor, y una etapa de control que evite que se cierren
simultáneamente los interruptores de una misma rama. Este enfoque es económico pero requiere más componentes y
cuidado en el diseño.

5.2 Con circuitos integrados
En la práctica, especialmente en proyectos educativos y de robótica, se utilizan circuitos integrados que ya incluyen
el puente H completo, junto con los diodos de protección y, en muchos casos, protección térmica y contra
sobrecorriente.
6. Circuitos integrados comerciales
Circuito integrado Características principales
L298N Doble puente H, hasta 2 A por canal, admite motores de 5 a 35 V. Muy usado en

robótica educativa

L293D Doble puente H integrado, hasta 600 mA por canal, más compacto que el L298N
TB6612FNG Más eficiente (menor disipación de calor) que el L298N, tensiones y corrientes

moderadas

DRV8833 Compacto, orientado a robots pequeños y motores de baja potencia
7. Aplicaciones
• Robots móviles (seguidores de línea, robots de competencia, brazos robóticos)
• Vehículos a control remoto
• Sistemas de posicionamiento y automatización industrial
• Electrodomésticos con motores reversibles (por ejemplo, persianas o ventanas eléctricas)
• Drones y sistemas de dirección
8. Ventajas y limitaciones
8.1 Ventajas
• Permite controlar la dirección de giro sin invertir cables manualmente
• Combinado con PWM, permite además regular la velocidad
• Aísla la parte de control (microcontrolador) de la parte de potencia (motor)
• Los circuitos integrados comerciales son económicos y fáciles de conseguir
8.2 Limitaciones
• Genera calor, especialmente con corrientes altas, por lo que puede requerir disipador
• Un error de control (cerrar dos interruptores de la misma rama) puede dañar el circuito
• Los módulos integrados tienen límites de corriente y voltaje que deben respetarse
9. Conclusión
El puente H es uno de los circuitos más utilizados en electrónica de control de motores debido a su simplicidad
conceptual y su versatilidad: con solo cuatro interruptores permite controlar tanto el sentido de giro como,
combinado con PWM, la velocidad de un motor DC. Su disponibilidad en circuitos integrados económicos como el
L298N lo ha convertido en un componente estándar en proyectos de robótica educativa y en aplicaciones
industriales de mayor escala.
10. Referencias
-Datasheet

-Google
-Wikipedia
