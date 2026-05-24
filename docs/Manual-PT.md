> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; 🇵🇹 PT

# OS-Solenoid-Decoder

## 📘 Introdução

O OS-Solenoid-Decoder é um decoder de acessórios DCC simples e potente para comutar:

- Agulhas (motores de agulha)
- Relés
- Desacopladores
- Qualquer outro dispositivo accionado por solenóide

Consegue suportar cargas de até 5 amperes e é compatível com praticamente qualquer tipo de motor de agulha.
Pode também ser utilizado em combinação com OS-relays para tratar a polarização de frog em agulhas electrofrog e unifrog.

Este decoder foi concebido para ser:

- **Fácil de ligar** — os bornes de parafuso amovíveis facilitam a pré-cablagem e permitem a remoção ou substituição rápida
- **Fácil de configurar** — utiliza apenas comandos de acessório DCC normais; sem computador, sem CV, sem POM
- **Modular** — placas de expansão opcionais com relé e transístor
- **Robusto** — protecção contra sobrecarga integrada

Quer esteja a construir uma grande maquete ou simplesmente queira algo que funcione sem complicações: este decoder foi feito para a tarefa.

---

## Índice

- [Características](#-características)
- [Ligar o Decoder](#-ligar-o-decoder)
- [Alimentação](#-alimentação)
- [Saídas de Solenóide](#-saídas-de-solenóide)
- [Extensão de Relé – Polarização Unifrog](#-extensão-de-relé--polarização-unifrog)
- [Extensão de Relé – Polarização Electrofrog](#-extensão-de-relé--polarização-electrofrog)
- [Extensão de Relé – Contacto Aberto (Uso Geral)](#️-extensão-de-relé--contacto-aberto-uso-geral)
- [Desacopladores e Outras Cargas Indutivas](#-desacopladores-e-outras-cargas-indutivas)
- [Configurar o OS-Solenoid-Decoder](#️-configurar-o-os-solenoid-decoder)
- [Comportamento dos LED no Modo de Operação](#-comportamento-dos-led-no-modo-de-operação)
- [Entrar no Modo de Configuração](#-entrar-no-modo-de-configuração)
- [Antes de Começar](#-antes-de-começar)
- [Visão Geral dos Menus](#-visão-geral-dos-menus)
- [Menu 1: Atribuição de Endereços DCC](#-menu-1-atribuição-de-endereços-dcc)
- [Menu 2: Selecção do Tipo de Saída](#-menu-2-selecção-do-tipo-de-saída)
- [Menu 3: Configuração do Tempo de Impulso](#-menu-3-configuração-do-tempo-de-impulso)
- [Menu 4: Ciclo de Trabalho PWM](#-menu-4-ciclo-de-trabalho-pwm)
- [Menu 5: Definições Globais e Predefinições](#-menu-5-definições-globais-e-predefinições)
- [Controlo por Função de Locomotiva Explicado](#-controlo-por-função-de-locomotiva-explicado)

---

## 🔧 Características

- **Até 5 A de corrente de saída total** — acciona solenóides de alta potência, relés ou motores de agulha sem boosters externos
- **Bornes de parafuso amovíveis** — facilitam a pré-cablagem e permitem a remoção ou substituição rápida do decoder
- **Múltiplos modos de saída:**
  - Impulso Duplo (predefinição)
  - Impulso Simples
  - Contínuo Duplo
  - Contínuo Simples
  - Impulso Duplo com Relé Electrofrog
- **Uma saída de cada vez** — o decoder comuta um par de saídas de cada vez para evitar sobrecarga
- **Suporte opcional de módulo CDU** — reduz o consumo de energia e prolonga a vida do motor de agulha
- **Detecção e protecção contra sobrecarga** — as saídas são automaticamente desactivadas se for detectada uma sobrecarga
- **Configuração apenas por comandos DCC** — sem software nem hardware de programação necessários
- **Predefinições de configuração pré-programadas** — mude rapidamente todas as saídas para modo de impulso, contínuo ou electrofrog com um único comando DCC
- **Controlo por função de locomotiva** (F1–F16) — para comutação rápida com manípulos como o Roco Lokmaus ou Multimaus
- **Suporte de desvio de endereço Roco** — suporte integrado para o desvio de 4 endereços da Roco
- **Expansível com placas de relé e transístor:**
  - Módulo de relé duplo para polarização de agulha electrofrog
  - Relé de retenção simples para comutação de polaridade unifrog
  - Módulos de relé de contacto aberto para controlo DCC de relé de uso geral
  - Módulo driver de transístor para motores de agulha de dois fios

---

## 🔌 Ligar o Decoder

O OS-Solenoid-Decoder segue um esquema de cablagem claro e consistente. A alimentação é ligada no topo e as saídas ficam em ambos os lados.

---

## 🔋 Alimentação

- Ligue tensão de via DCC ou uma fonte de alimentação DC (máx. 19 V) ao decoder.
- Tanto o sinal DCC como os fios de alimentação ligam-se pelo lado superior do decoder.
- ⚠️ Não utilize tensão AC — isto danificará o decoder.

---

## ⚡ Saídas de Solenóide

O decoder fornece 8 blocos de saída dupla, concebidos para motores de agulha de bobine dupla clássicos.

Cada bloco de saída tem:

- Dois bornes exteriores — para a bobine esquerda e direita (A e B)
- Um terminal central — para o fio comum (COM), partilhado entre as duas bobines

Este esquema permite:

- Accionar até 8 motores de agulha de bobine dupla (ex. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Ou ligar directamente motores de agulha de 3 fios como o MTB MP-1

As saídas estão agrupadas em pares com etiquetagem clara A, COM e B.

![Decoder de solenóide com 8 motores de agulha de bobine dupla ligados](image.png)

Embora o decoder não tenha sido concebido para controlo de sinais, pode accionar sinais simples de dois aspectos utilizando as mesmas saídas.

![Exemplo de ligação de sinal de dois aspectos](image-1.png)

---

## 🔌 Extensão de Relé – Polarização Unifrog

Esta extensão alimenta automaticamente o frog de agulhas unifrog utilizando relés de auto-retenção.

- A placa de relé é composta por quatro pequenas unidades de relé, que podem ser separadas se precisar de menos de quatro.

![Placa de extensão com relé de retenção](image-2.png)

- Os relés são retidos pelo mesmo sinal utilizado para accionar o motor de agulha — sem configuração adicional necessária.
- Cada unidade de relé comuta a polaridade do frog em função da direcção da agulha.

Com um relé por agulha, esta extensão trata até 8 frogs unifrog com duas placas.

![Extensão de relé instalada no decoder para ligação unifrog](image-3.png)

- A placa de relé liga directamente ao header de expansão do decoder, mas pode também ser montada remotamente perto da agulha.

![Exemplo de extensão de relé com montagem remota](image-4.png)

Este módulo de relé é também compatível com outros decoders solenóide.

---

## ⚡ Extensão de Relé – Polarização Electrofrog

As agulhas electrofrog requerem dois comutadores de relé por agulha:

1. Um para desligar o frog antes de comutar o motor de agulha
2. Um para religá-lo com a polaridade correcta a seguir

Esta extensão trata essa sequência automaticamente. É composta por quatro módulos de relé duplo, ligados permanentemente.

- Liga-se ao lado esquerdo do decoder (marcado para uso electrofrog).
- Cada par de relés está ligado a uma saída de solenóide: saída 1 → par de relés 1, saída 2 → par de relés 2, etc.
- Estes módulos não podem ser separados, pois partilham a alimentação de via e a lógica interna.

O decoder tem um modo de predefinição especial que activa a sequência de comutação electrofrog.
Se a polaridade do frog estiver errada após a instalação, inverta os jumpers no módulo de relé para a corrigir — sem necessidade de reprogramação.

---

## ⚙️ Extensão de Relé – Contacto Aberto (Uso Geral)

Para comutar dispositivos externos (luzes, sinais, circuitos lógicos) usando contactos de relé simples:

- Cada unidade fornece um relé de dupla comutação (NO/NC), controlável por DCC.
- Até 16 contactos de relé com endereçamento individual quando totalmente equipado.
- Os módulos ligam directamente ao decoder ou podem ser utilizados remotamente com fios.
- Disponível numa versão DIY de furos passantes e numa versão SMD compacta.

Tal como as placas de relé unifrog, estes módulos podem ser separados e reutilizados com outros decoders solenóide DCC.

![Módulos de relé de uso geral instalados no decoder](image-5.png)

![Detalhe do módulo de relé de uso geral](image-6.png)

A extensão de relé de Uso Geral também pode polarizar agulhas electrofrog com uma cablagem ligeiramente mais complexa:

- Utilize os contactos NO (Normalmente Aberto)
- Ligue ambos os contactos COM em conjunto e ligue-os ao frog
- Ligue os contactos NO aos carris de alimentação de via

![Ligação electrofrog usando módulos de relé de Uso Geral](image-7.png)

Se um frog ficar com a polaridade errada, troque as duas linhas de alimentação de via (conforme indicado para o frog 4 no diagrama acima).

---

## 🧲 Desacopladores e Outras Cargas Indutivas

O OS-Solenoid-Decoder pode accionar desacopladores, electroímanes e outras cargas indutivas além de motores de agulha.

- **Modo de Impulso Simples** (recomendado) — envia uma breve corrente, ideal para bobines accionadas por mola ou sensíveis ao tempo
- **Modo Contínuo Simples** — mantém a saída continuamente activa, útil para relés monostáveis ou dispositivos simples LIGAR/DESLIGAR

![Exemplo de ligação de desacoplador](image-8.png)

⚠️ Os desacopladores podem sobreaquecer se permanecerem activos por demasiado tempo — consulte sempre as especificações da marca de via e mantenha os tempos de impulso curtos.

---

## ⚙️ Configurar o OS-Solenoid-Decoder

Por predefinição o decoder funciona em modo normal quando ligado. Dois LED fornecem retorno visual sobre o que está a acontecer.

---

## 🔦 Comportamento dos LED no Modo de Operação

| Padrão LED | Modo |
|-------------|------|
| Ambos os LED a piscar | Impulso Duplo (predefinição) |
| Um LED a piscar, outro APAGADO | Impulso Simples |
| Ambos os LED ACESOS | Contínuo Duplo |
| Um LED ACESO | Contínuo Simples |
| Um LED ACESO + outro LED a piscar | Modo Electrofrog (impulso duplo + relé de frog) |

Quando as saídas estão configuradas com tipos mistos, o LED esquerdo permanece ACESO e o LED direito pisca continuamente uma vez para indicar o modo de configuração mista.

---

## 🧰 Entrar no Modo de Configuração

Para entrar no modo de configuração:

1. Mantenha premido o botão de configuração. O LED direito começa a piscar:
   - 1 pisco = Menu 1
   - 2 piscos = Menu 2
   - ... até ao Menu 5
2. Solte o botão quando o LED atingir o menu pretendido.

Estando num menu:

- O LED esquerdo pisca o mesmo número de vezes que o número do menu (ex. 3 piscos = Menu 3).
- Prima o botão novamente para sair do menu, a não ser que a secção abaixo indique o contrário.

![Fluxograma do menu de configuração](image-9.png)

---

## 🧠 Antes de Começar

Se pretende utilizar tipos de saída mistos (ex. Contínuo Simples para relés juntamente com Impulso Duplo para motores de agulha), planeie as atribuições de saída no papel primeiro.

**Exemplo:** se as saídas 5–8 devem ser Contínuo Simples (para 8 relés) e as saídas 1–4 devem ser Contínuo Duplo (para motores de agulha), tem de:

1. Usar o Menu 2 para atribuir os tipos de saída correctos
2. Depois usar o Menu 1 para atribuir endereços DCC com cuidado, pois as saídas Simples utilizam mais endereços

---

## 📖 Visão Geral dos Menus

| Menu | Função |
|------|----------|
| 1 | Atribuição de Endereços DCC |
| 2 | Selecção do Tipo de Saída |
| 3 | Configuração do Tempo de Impulso |
| 4 | Ciclo de Trabalho PWM |
| 5 | Definições Globais e Predefinições |

---

## 🟠 Menu 1: Atribuição de Endereços DCC

Use este menu para atribuir endereços DCC a cada saída.

Regras:
- Os modos Duplos utilizam 1 endereço
- Os modos Simples utilizam 2 endereços (A e B separadamente)

Se atribuir o endereço 20 à Saída 1 em modo Simples, esta ocupará os endereços 20 e 21. A Saída 2 começa então no 22. O decoder trata este deslocamento automaticamente.

Seleccionar saídas:
- Envie o endereço de acessório DCC 1–8 para seleccionar uma saída.
- Envie um segundo endereço para atribuí-lo a essa saída.
- Envie o endereço 9 como selector para aplicar o mesmo endereço a todas as saídas de uma vez.

No modo de endereçamento único, pode dar a cada saída um endereço personalizado, incluindo números repetidos ou omitidos. O decoder regressa ao modo de operação imediatamente após a atribuição, a não ser que o modo único esteja activo — nesse caso prima o botão de configuração para sair.

---

## 🟡 Menu 2: Selecção do Tipo de Saída

Cada saída pode ser configurada para um dos seguintes tipos:

| ID do Tipo | Descrição do Modo |
|---------|-----------------|
| 1 | Impulso Duplo (predefinição) |
| 2 | Contínuo Duplo |
| 3 | Impulso Simples |
| 4 | Contínuo Simples |
| 5 | Impulso Duplo com suporte de relé Electrofrog |

No modo Electrofrog, as saídas 1–4 controlam os pares de relés nas saídas 8–5 em ordem inversa (saída 1 → relé 8, saída 2 → relé 7, etc.).

Seleccione a saída a configurar enviando o endereço DCC 1–8.

---

## 🔵 Menu 3: Configuração do Tempo de Impulso

Ajuste fino do tempo de impulso para cada saída.

**Saídas de Impulso Simples:**
- O tempo é definido em segundos inteiros
- Endereço 10 = 10 segundos
- Intervalo: 1–4096 segundos
- Predefinição: 5 s

**Saídas de Impulso Duplo:**
- O tempo é definido em passos de 10 ms
- Endereço 1 = 10 ms
- Máximo: 40,9 s (4096 × 10 ms)
- Predefinição: 50 ms

Envie o endereço 9 para aplicar o mesmo tempo a todas as saídas de uma vez.

---

## 🟣 Menu 4: Ciclo de Trabalho PWM

Disponível para saídas configuradas em modo Contínuo (Simples ou Duplo).

O PWM reduz a potência média fornecida — ideal para motores lentos como o MTB MP-1.

- Frequência PWM: 50 Hz
- Endereço 10 = 100% de ciclo de trabalho (predefinição; potência total, sem PWM)

| Endereço | Ciclo de Trabalho |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (predefinição) |

Envie o endereço 9 para aplicar o mesmo ciclo de trabalho a todas as saídas.

---

## 🔘 Menu 5: Definições Globais e Predefinições

**Predefinições — define todos os tipos de saída de uma vez:**

| Endereço | Modo de Predefinição |
|---------|------------|
| 1 | Impulso Duplo (predefinição) |
| 2 | Contínuo Duplo |
| 3 | Impulso Simples |
| 4 | Contínuo Simples |
| 5 | Impulso Duplo com modo Electrofrog |

**Opções especiais:**

| Endereço | Configuração |
|---------|---------|
| 20 | Desactivar endereços de saída únicos (predefinição) |
| 21 | Activar endereços de saída únicos |
| 30 | Desactivar suporte de comando DCC EXT (predefinição) |
| 31 | Activar suporte de comprimento de impulso DCC EXT |
| 40 | Desactivar controlo por função de locomotiva (predefinição) |
| 41 | Activar funções de locomotiva (F1–F16, 1 endereço) |
| 42 | Activar funções de locomotiva (F1–F4, 2+ endereços) |
| 996 / 1000 | Desactivar desvio de 4 endereços Roco (predefinição) |
| 997 / 1001 | Activar desvio de 4 endereços Roco |

---

## 📟 Controlo por Função de Locomotiva Explicado

Pode controlar o decoder usando teclas de função de locomotiva (F1–F16) em vez de comandos de acessório DCC.

**Vantagens:**
- Funciona com manípulos como o Roco Lokmaus 2
- Comutação muito rápida — ideal para controlo rápido da maquete

**Modos:**
- **Modo F1–F16:** utiliza 1 endereço de locomotiva
- **Modo F1–F4:** utiliza 2 ou mais endereços de locomotiva (útil para manípulos que suportam apenas F1–F4)

O endereço de locomotiva utilizado corresponde ao endereço DCC atribuído à Saída 1.
