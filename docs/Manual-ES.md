> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; 🇪🇸 ES &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Introducción

El OS-Solenoid-Decoder es un decodificador de accesorios DCC sencillo y potente para conmutar:

- Agujas (motores de aguja)
- Relés
- Desenganchadores
- Cualquier otro dispositivo accionado por solenoide

Puede gestionar cargas de hasta 5 A y es compatible con casi cualquier tipo de motor de aguja.
También puede usarse en combinación con OS-relays para gestionar la polarización de frog tanto en agujas electrofrog como unifrog.

Este decodificador está diseñado para ser:

- **Fácil de cablear** — los bornes de tornillo enchufables facilitan el precableado y permiten la extracción o sustitución rápida
- **Fácil de configurar** — utiliza únicamente comandos de accesorio DCC estándar; sin ordenador, sin CV, sin POM
- **Modular** — placas de expansión de relé y transistor opcionales
- **Robusto** — protección integrada contra sobrecargas

Tanto si está construyendo una gran maqueta como si simplemente quiere algo que funcione sin complicaciones: este decodificador está hecho para cumplir el trabajo.

---

## Tabla de Contenidos

- [Características](#-características)
- [Conexión del Decodificador](#-conexión-del-decodificador)
- [Alimentación](#-alimentación)
- [Salidas de Solenoide](#-salidas-de-solenoide)
- [Extensión de Relé – Polarización Unifrog](#-extensión-de-relé--polarización-unifrog)
- [Extensión de Relé – Polarización Electrofrog](#-extensión-de-relé--polarización-electrofrog)
- [Extensión de Relé – Contacto Abierto (Uso General)](#️-extensión-de-relé--contacto-abierto-uso-general)
- [Desenganchadores y Otras Cargas Inductivas](#-desenganchadores-y-otras-cargas-inductivas)
- [Configuración del OS-Solenoid-Decoder](#️-configuración-del-os-solenoid-decoder)
- [Comportamiento del LED en Modo de Funcionamiento](#-comportamiento-del-led-en-modo-de-funcionamiento)
- [Acceso al Modo de Configuración](#-acceso-al-modo-de-configuración)
- [Antes de Empezar](#-antes-de-empezar)
- [Descripción General del Menú](#-descripción-general-del-menú)
- [Menú 1: Asignación de Dirección DCC](#-menú-1-asignación-de-dirección-dcc)
- [Menú 2: Selección del Tipo de Salida](#-menú-2-selección-del-tipo-de-salida)
- [Menú 3: Configuración del Tiempo de Impulso](#-menú-3-configuración-del-tiempo-de-impulso)
- [Menú 4: Ciclo de Trabajo PWM](#-menú-4-ciclo-de-trabajo-pwm)
- [Menú 5: Ajustes Globales y Preajustes](#-menú-5-ajustes-globales-y-preajustes)
- [Explicación del Control por Función de Locomotora](#-explicación-del-control-por-función-de-locomotora)

---

## 🔧 Características

- **Hasta 5 A de corriente total de salida** — acciona solenoides, relés o motores de aguja de alto rendimiento sin amplificadores externos
- **Bornes de tornillo enchufables** — facilitan el precableado y permiten la extracción o sustitución rápida del decodificador
- **Múltiples modos de salida:**
  - Impulso doble (predeterminado)
  - Impulso simple
  - Continuo doble
  - Continuo simple
  - Impulso doble con relé Electrofrog
- **Una salida a la vez** — el decodificador conmuta un par de salidas a la vez para evitar sobrecargas
- **Compatible con módulo CDU opcional** — reduce el consumo de energía y prolonga la vida del motor de aguja
- **Detección y protección contra sobrecargas** — las salidas se deshabilitan automáticamente si se detecta una sobrecarga
- **Configuración solo mediante comandos DCC** — no se requiere software ni hardware de programación
- **Preajustes de configuración predefinidos** — cambie todas las salidas a modo impulso, continuo o electrofrog con un único comando DCC
- **Control por función de locomotora** (F1–F16) — para conmutación rápida mediante mandos como el Roco Lokmaus o el Multimaus
- **Compatible con el desplazamiento de dirección de Roco** — soporte integrado para el desplazamiento de 4 direcciones de Roco
- **Ampliable con placas de relé y transistor:**
  - Módulo de doble relé para polarización de agujas electrofrog
  - Relé enclavado simple para conmutación de polaridad unifrog
  - Módulos de relé de contacto abierto para control de relé DCC de uso general
  - Módulo de controlador de transistores para motores de aguja de dos hilos

---

## 🔌 Conexión del Decodificador

El OS-Solenoid-Decoder sigue un esquema de cableado claro y coherente. La alimentación se conecta en la parte superior, las salidas están en ambos lados.

---

## 🔋 Alimentación

- Conecte la tensión de vía DCC o una fuente de alimentación DC (máx. 19 V) al decodificador.
- Tanto la señal DCC como los cables de alimentación se conectan por la parte superior del decodificador.
- ⚠️ No use tensión AC — esto dañará el decodificador.

---

## ⚡ Salidas de Solenoide

El decodificador proporciona 8 bloques de salida dual, diseñados para motores de aguja clásicos de doble bobina.

Cada bloque de salida tiene:

- Dos bornes de tornillo exteriores — para la bobina izquierda y derecha (A y B)
- Un borne central — para el cable común (COM), compartido entre las dos bobinas

Este diseño permite:

- Accionar hasta 8 motores de aguja de doble bobina (p. ej. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- O conectar directamente motores de aguja de 3 hilos como el MTB MP-1

Las salidas se agrupan en pares con etiquetado claro de A, COM y B.

![Decodificador de solenoide con 8 motores de aguja de doble bobina conectados](image.png)

Aunque el decodificador no está diseñado para el control de señales, puede accionar señales simples de dos aspectos usando las mismas salidas.

![Ejemplo de cableado de señal de dos aspectos](image-1.png)

---

## 🔌 Extensión de Relé – Polarización Unifrog

Esta extensión alimenta automáticamente el frog de agujas unifrog mediante relés de autoenclavamiento.

- La placa de relé consta de cuatro pequeñas unidades de relé que pueden separarse si se necesitan menos de cuatro.

![Placa de extensión de relé enclavado](image-2.png)

- Los relés se enclavana través de la misma señal utilizada para accionar el motor de aguja — no se necesita configuración adicional.
- Cada unidad de relé conmuta la polaridad del frog según la dirección de la aguja.

Con un relé por aguja, esta extensión gestiona hasta 8 frogs unifrog usando dos placas.

![Extensión de relé montada en el decodificador para cableado unifrog](image-3.png)

- La placa de relé se enchufa directamente en el cabezal de expansión del decodificador, pero también puede montarse de forma remota cerca de la aguja.

![Ejemplo de extensión de relé montada de forma remota](image-4.png)

Este módulo de relé también es compatible con otros decodificadores de solenoide.

---

## ⚡ Extensión de Relé – Polarización Electrofrog

Las agujas electrofrog requieren dos conmutaciones de relé por aguja:

1. Una para desconectar el frog antes de conmutar el motor de aguja
2. Otra para reconectarlo con la polaridad correcta

Esta extensión gestiona esa secuencia automáticamente. Consta de cuatro módulos de doble relé, permanentemente vinculados.

- Se enchufa en el lado izquierdo del decodificador (marcado para uso con electrofrog).
- Cada par de relés está vinculado a una salida de solenoide: salida 1 → par de relés 1, salida 2 → par de relés 2, etc.
- Estos módulos no pueden separarse, ya que comparten la alimentación de vía y la lógica interna.

El decodificador tiene un modo de preajuste especial que activa la secuencia de conmutación electrofrog.
Si la polaridad del frog es incorrecta tras la instalación, invierta los puentes del módulo de relé para corregirla — no es necesario reprogramar.

---

## ⚙️ Extensión de Relé – Contacto Abierto (Uso General)

Para conmutar dispositivos externos (luces, señales, circuitos lógicos) mediante contactos de relé simples:

- Cada unidad proporciona un relé de doble conmutación (NO/NC), controlable mediante DCC.
- Hasta 16 contactos de relé individualmente direccionables cuando está completamente instalado.
- Los módulos se enchufan directamente en el decodificador o pueden usarse de forma remota con cables.
- Disponible en una versión DIY de agujeros pasantes y una versión SMD compacta.

Al igual que las placas de relé unifrog, estos módulos pueden separarse y reutilizarse con otros decodificadores de solenoide DCC.

![Módulos de relé de uso general montados en el decodificador](image-5.png)

![Detalle del módulo de relé de uso general](image-6.png)

La extensión de relé de uso general también puede polarizar agujas electrofrog con un cableado ligeramente más complejo:

- Use los contactos NO (Normalmente Abiertos)
- Una ambos contactos COM y conéctelos al frog
- Conecte los contactos NO a los carriles de alimentación de la vía

![Cableado electrofrog usando módulos de relé de uso general](image-7.png)

Si un frog resulta con la polaridad incorrecta, intercambie las dos líneas de alimentación de vía (como se muestra para el frog 4 en el diagrama anterior).

---

## 🧲 Desenganchadores y Otras Cargas Inductivas

El OS-Solenoid-Decoder puede accionar desenganchadores, electroimanes y otras cargas inductivas además de motores de aguja.

- **Modo de Impulso Simple** (recomendado) — envía una ráfaga corta de corriente, ideal para bobinas con resorte o sensibles al tiempo
- **Modo Continuo Simple** — mantiene la salida encendida de forma continua, útil para relés monoestables o dispositivos simples de ON/OFF

![Ejemplo de cableado de desenganchador](image-8.png)

⚠️ Los desenganchadores pueden sobrecalentarse si se conmutan durante demasiado tiempo — compruebe siempre las especificaciones de su marca de vía y mantenga los tiempos de impulso cortos.

---

## ⚙️ Configuración del OS-Solenoid-Decoder

Por defecto, el decodificador funciona en modo normal al encenderse. Dos LED proporcionan información visual sobre lo que está ocurriendo.

---

## 🔦 Comportamiento del LED en Modo de Funcionamiento

| Patrón de LED | Modo |
|-------------|------|
| Ambos LED parpadeando | Impulso doble (predeterminado) |
| Un LED parpadeando, uno APAGADO | Impulso simple |
| Ambos LED encendidos | Continuo doble |
| Un LED encendido | Continuo simple |
| Un LED encendido + otro LED parpadeando | Modo Electrofrog (impulso doble + relé de frog) |

Cuando las salidas están configuradas con tipos mixtos, el LED izquierdo permanece encendido y el LED derecho parpadea una vez de forma continua para indicar el modo de configuración mixta.

---

## 🧰 Acceso al Modo de Configuración

Para entrar en el modo de configuración:

1. Mantenga pulsado el botón de configuración. El LED derecho empieza a parpadear:
   - 1 parpadeo = Menú 1
   - 2 parpadeos = Menú 2
   - ... hasta el Menú 5
2. Suelte el botón cuando el LED llegue al menú deseado.

Una vez en un menú:

- El LED izquierdo parpadea el mismo número de veces que el número de menú (p. ej. 3 parpadeos = Menú 3).
- Pulse el botón de nuevo para salir del menú, salvo que la sección correspondiente indique otra cosa.

![Diagrama de flujo del menú de configuración](image-9.png)

---

## 🧠 Antes de Empezar

Si planea usar tipos de salida mixtos (p. ej. Continuo Simple para relés junto con Impulso Doble para motores de aguja), planifique previamente las asignaciones de salida en papel.

**Ejemplo:** si las salidas 5–8 deben ser Continuo Simple (para 8 relés) y las salidas 1–4 deben ser Continuo Doble (para motores de aguja), debe:

1. Usar el Menú 2 para asignar los tipos de salida correctos
2. Luego usar el Menú 1 para asignar las direcciones DCC con cuidado, porque las salidas individuales usan más direcciones

---

## 📖 Descripción General del Menú

| Menú | Función |
|------|----------|
| 1 | Asignación de Dirección DCC |
| 2 | Selección del Tipo de Salida |
| 3 | Configuración del Tiempo de Impulso |
| 4 | Ciclo de Trabajo PWM |
| 5 | Ajustes Globales y Preajustes |

---

## 🟠 Menú 1: Asignación de Dirección DCC

Use este menú para asignar direcciones DCC a cada salida.

Reglas:
- Los modos dobles usan 1 dirección
- Los modos individuales usan 2 direcciones (A y B por separado)

Si asigna la dirección 20 a la Salida 1 en modo Individual, ocupará las direcciones 20 y 21. La Salida 2 comenzará entonces en la 22. El decodificador gestiona este desplazamiento automáticamente.

Selección de salidas:
- Envíe la dirección de accesorio DCC 1–8 para seleccionar una salida.
- Envíe una segunda dirección para asignarla a esa salida.
- Envíe la dirección 9 como selector para aplicar la misma dirección a todas las salidas a la vez.

En el modo de direccionamiento único, puede asignar a cada salida una dirección personalizada incluyendo números repetidos u omitidos. El decodificador vuelve al modo de funcionamiento inmediatamente tras la asignación, a menos que el modo único esté activo — en ese caso pulse el botón de configuración para salir.

---

## 🟡 Menú 2: Selección del Tipo de Salida

Cada salida puede configurarse en uno de los siguientes tipos:

| ID de tipo | Descripción del modo |
|---------|-----------------|
| 1 | Impulso doble (predeterminado) |
| 2 | Continuo doble |
| 3 | Impulso simple |
| 4 | Continuo simple |
| 5 | Impulso doble con soporte de relé Electrofrog |

En el modo Electrofrog, las salidas 1–4 controlan los pares de relés en las salidas 8–5 en orden inverso (salida 1 → relé 8, salida 2 → relé 7, etc.).

Seleccione qué salida configurar enviando la dirección DCC 1–8.

---

## 🔵 Menú 3: Configuración del Tiempo de Impulso

Ajuste con precisión el tiempo de impulso de cada salida.

**Salidas de Impulso Simple:**
- El tiempo se establece en segundos enteros
- Dirección 10 = 10 segundos
- Rango: 1–4096 segundos
- Predeterminado: 5 s

**Salidas de Impulso Doble:**
- El tiempo se establece en pasos de 10 ms
- Dirección 1 = 10 ms
- Máximo: 40,9 s (4096 × 10 ms)
- Predeterminado: 50 ms

Envíe la dirección 9 para aplicar el mismo tiempo a todas las salidas a la vez.

---

## 🟣 Menú 4: Ciclo de Trabajo PWM

Disponible para salidas configuradas en modo Continuo (simple o doble).

PWM reduce la potencia media entregada — ideal para motores lentos como el MTB MP-1.

- Frecuencia PWM: 50 Hz
- Dirección 10 = 100% de ciclo de trabajo (predeterminado; potencia máxima, sin PWM)

| Dirección | Ciclo de trabajo |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (predeterminado) |

Envíe la dirección 9 para aplicar el mismo ciclo de trabajo a todas las salidas.

---

## 🔘 Menú 5: Ajustes Globales y Preajustes

**Preajustes — establezca todos los tipos de salida a la vez:**

| Dirección | Modo de preajuste |
|---------|------------|
| 1 | Impulso doble (predeterminado) |
| 2 | Continuo doble |
| 3 | Impulso simple |
| 4 | Continuo simple |
| 5 | Impulso doble con modo Electrofrog |

**Opciones especiales:**

| Dirección | Ajuste |
|---------|---------|
| 20 | Deshabilitar direcciones de salida únicas (predeterminado) |
| 21 | Habilitar direcciones de salida únicas |
| 30 | Deshabilitar soporte de comandos DCC EXT (predeterminado) |
| 31 | Habilitar soporte de longitud de impulso DCC EXT |
| 40 | Deshabilitar control por función de locomotora (predeterminado) |
| 41 | Habilitar funciones de locomotora (F1–F16, 1 dirección) |
| 42 | Habilitar funciones de locomotora (F1–F4, 2+ direcciones) |
| 996 / 1000 | Deshabilitar desplazamiento de 4 direcciones de Roco (predeterminado) |
| 997 / 1001 | Habilitar desplazamiento de 4 direcciones de Roco |

---

## 📟 Explicación del Control por Función de Locomotora

Puede controlar el decodificador usando las teclas de función de locomotora (F1–F16) en lugar de comandos de accesorio DCC.

**Ventajas:**
- Funciona con mandos como el Roco Lokmaus 2
- Conmutación muy rápida — ideal para un control ágil de la maqueta

**Modos:**
- **Modo F1–F16:** usa 1 dirección de locomotora
- **Modo F1–F4:** usa 2 o más direcciones de locomotora (útil para mandos que solo admiten F1–F4)

La dirección de locomotora usada coincide con la dirección DCC asignada a la Salida 1.
