# OS-Solenoid-Decoder

## 📘 Introduction

The OS-Solenoid-Decoder is a simple, powerful DCC accessory decoder for switching:

• Turnouts (point motors),  
• Relays,  
• Uncouplers,  
• And other solenoid-driven devices.  

It can handle loads of up to 5 amps and supports almost any type of point motor.  
It can also be used in combination with OS-relays to handle frog polarisation for electrofrog and unifrog points.  

This decoder is designed to be:

• Easy to wire — with pluggable screw terminals,  
• Easy to configure — using only standard DCC accessory commands,  
• Modular — with optional relay and transistor expansion boards,  
• And robust — with built-in overload protection.  

Whether you're building a large layout or just want something that works without hassle:  
this decoder is made to get the job done, without needing a degree in electronics.

---

## Table of Contents

📘 Introduction  

🔧 Features  

🔌 Connecting the Decoder  

🔋 Power Supply  

⚡ Solenoid Outputs  

🔌 Relay Extension – Unifrog Polarization  

⚡ Relay Extension – Electrofrog Polarization  

⚙️ Relay Extension – Open Contact (General Purpose)  

🧲 Decouplers and Other Inductive Loads  

⚙️ Configuring the OS-Solenoid-Decoder  

🔦 LED Behavior in Operating Mode  

🧰 Entering Configuration Mode  

🧠 Before You Start  

📖 Menu Overview  

🟠 Menu 1: DCC Address Assignment  

🟡 Menu 2: Output Type Selection  

🔵 Menu 3: Pulse Time Configuration  

🟣 Menu 4: PWM Duty Cycle  

🔘 Menu 5: Global Settings & Presets  

📟 Loco Function Control Explained

---

## 🔧 Features

• 🔌 Up to 5A total output current  
Drives heavy-duty solenoids, relays or turnout motors without needing external boosters.  

• 🪛 Pluggable screw terminals  
Makes pre-wiring easy and allows quick removal or replacement of the decoder.  

• ⚙️ Multiple output modes:  
Supports the following operating modes:  

◦ Double Pulse (default)  
◦ Single Pulse  
◦ Double Steady  
◦ Single Steady  
◦ Double Pulse with Electrofrog Relay  

• 🔄 One point at a time  
The decoder switches one output pair at a time to avoid overload.  

• ⚡ Optional CDU module support  
Reduces power consumption and increases the life of your turnout motors.  

• 🛡️ Overload detection & protection  
The decoder automatically disables outputs when an overload is detected.  

• 🧠 Easy configuration using DCC accessory commands only  
No programming software or hardware needed. No Computer, no CV, No POM.  

• 🎛️ Predefined configuration presets  
Quickly switch between modes like pulse, steady, or electrofrog using simple DCC commands.  

• 🚂 Can be controlled using loco function (F1–F16)  
For fast switching via throttles like the Roco Lokmaus or Multimaus.  

• 🧮 Roco offset support  
Built-in support for the well-known Roco accessory address offset of 4.  

• 🔌 Expandable with relay and transistor boards:  
◦ Double relay module to polarize electrofrog turnouts  
◦ Single latching relay for unifrog polarity switching  
◦ Open contact relay modules for general-purpose DCC relay control  
◦ Transistor driver module for two-wire turnout motors

---

## 🔌 Connecting the Decoder

The OS-Solenoid-Decoder follows a clear and consistent wiring layout.

---

## 🔋 Power Supply

• Connect either DCC track voltage or a DC power supply (max. 19V) to the decoder.  
• You can connect both the DCC signal and power lines from the top side of the decoder.  
• ⚠️ Do not use AC voltage — this will damage the decoder.

---

## ⚡ Solenoid Outputs

The decoder provides 8 dual output blocks, designed for classic twin-coil turnout motors.  

Each output block has:  

• Two outer screw terminals — for the left and right coil (A and B)  
• One center terminal — for the common wire (COM), shared between the two coils  

This layout allows you to:  

• Drive up to 8 twin-coil point motors (e.g. PECO, Fleischmann, Marklin, Roco, Piko, Hornby),  
• Or connect 3-wire turnout motors like the MTB MP-1 directly.  

Outputs are grouped in pairs — each with clear labeling for A, COM, and B.  

![](image.png)

Although the decoder is not designed for signal control, it can drive simple two-aspect signals using the same outputs.  

![](image-1.png)

---

## 🔌 Relay Extension – Unifrog Polarization

This extension is used to automatically power the frog of unifrog turnouts using self-latching relays.  

• The relay board consists of four small relay units, which can be snapped apart if you need fewer than four.  

![](image-2.png)

⚠️ Note: The 3D model of the plug header is currently missing from the PCB documentation, but functionally everything fits as expected.  

• The relays are latched by the same signal used to trigger the turnout motor — so no extra configuration is needed.  
Each relay unit switches the frog polarity based on the direction of the turnout.  

With one relay per turnout, this extension can handle up to 8 unifrog frogs using two boards.  

![](image-3.png)

• It plugs directly into the decoder using the expansion header, but you can also mount it remotely near the turnout.  

![](image-4.png)

You can also use other decoders to use with this relay module.

---

## ⚡ Relay Extension – Electrofrog Polarization

Electrofrog turnouts need two separate relay switches:  

1. One to disconnect the frog before switching,  
2. One to reconnect it with the correct polarity afterwards.  

This extension handles that sequence automatically. It consists of four dual-relay modules, permanently linked.  

• It plugs into the left side of the decoder (marked for electrofrog use).  
• Each relay pair follows one solenoid output: e.g., output 1 controls relay pair 1, output 2 controls relay pair 2, etc.  
• These modules cannot be separated, as they share track power and internal logic.  

The decoder has a special preset mode that activates this switching behavior.  
If frog polarity is wrong after installation, you can simply flip a set of jumpers on the relay module to correct it — no reprogramming needed.  

**PLACEHOLDER: [Electrofrog wiring image here]**

---

## ⚙️ Relay Extension – Open Contact (General Purpose)

If you just want plain relay contacts to switch external devices (lights, signals, logic circuits), this module is for you.  

• Each unit provides a double-throw (NO/NC) relay, controllable via DCC.  
• You get up to 16 individually addressable relays when fully populated.  
• The modules can be plugged directly into the decoder or used remotely with wires.  
• Available in:  
◦ A through-hole DIY version for easy soldering,  
◦ A compact SMD version for more permanent setups.  

Like the unifrog relays, these modules can be snapped apart and even reused with other DCC solenoid decoders.  

![](image-5.png)

![](image-6.png)

Note, the General Purpose relay extension can also be used to power electrofrog points, only with a little bit more wiring.  
You need to use the NO contacts, and loop both COM contacts. The COM contacts can be connected to the frog.  
The NO contacts can be connected to the track power.  

![](image-7.png)

If the frog is wrongly polarized, you can simply swap the track power lines as is shown with the 4th frog.  

**PLACEHOLDER: [General relay wiring example here]**

---

## 🧲 Decouplers and Other Inductive Loads

The OS-Solenoid-Decoder can also be used to drive decouplers, electromagnets, and other inductive loads — not just turnout motors.  

Depending on how the load behaves, you can choose between:  

• Single Pulse mode (default recommendation)  
Sends a short burst of current — ideal for spring-loaded or time-sensitive coils.  

• Single Steady mode  
Keeps the output continuously on — useful for monostable relays, or simple ON/OFF applications.  

![](image-8.png)

⚠️ Important: Decouplers often can overheat when they are switched for too long — always check the datasheet of your track brand and avoid using long pulses unnecessarily.

---

## ⚙️ Configuring the OS-Solenoid-Decoder

By default, the decoder operates in normal mode when powered.  
Two LEDs provide visual feedback about what’s happening.

---

## 🔦 LED Behavior in Operating Mode

If all outputs are configured the same, you’ll see:  

| LED Pattern | Mode |
|--------------|------|
| Both LEDs blinking | Double Pulse (default) |
| One LED blinking, one OFF | Single Pulse |
| Both LEDs ON | Double Steady |
| One LED ON | Single Steady |
| One LED ON + other LED blink | Electrofrog Mode (double pulse + frog) |

If you use mixed output types, the left LED stays ON, and the right LED blinks once continuously to indicate mixed config mode.  

---

## 🧰 Entering Configuration Mode

To configure the decoder:  

1. Hold the configuration button — the right LED starts blinking:  
◦ 1 blink = Menu 1  
◦ 2 blinks = Menu 2  
◦ ... up to Menu 5  
2. Release the button when the LED reaches the menu you want.  

Once in a menu:  
• The left LED will blink the same number as the menu you selected (e.g., 3x = Menu 3).  
• To exit a menu, press the button again — unless noted otherwise.  

![](image-9.png)

---

## 🧠 Before You Start

If you plan to use a mix of output types (e.g. single steady + double pulse), it’s strongly recommended to plan your outputs on paper first.  

For example:  
If you want outputs 5–8 to be Single Steady (for 8 relays), and 1–4 to be Double Steady (for point motors), then you must:  

• Use Menu 2 to assign output types  
• Then use Menu 1 to assign DCC addresses carefully, since Single types consume more addresses.  

We'll walk through each menu below 👇

---

## 📖 Menu Overview

| Menu # | Function |
|--------|-----------|
| 1 | DCC Address Assignment |
| 2 | Output Type Selection |
| 3 | Pulse Time Configuration |
| 4 | PWM Duty Cycle |
| 5 | Global Settings & Presets |

---

## 🟠 Menu 1: DCC Address Assignment

Use this menu to assign addresses to each output.  

Rules:  
• Double modes use 1 address  
• Single modes use 2 addresses (A + B separately)  

If you assign address 20 to Output 1 in Single mode, it will use address 20 and 21.  
Output 2 will then start at 22, not 21. The decoder automatically handles this shifting.  

Selecting outputs:  
• Send DCC accessory address 1–8 to select an output.  
• Send another address to assign to that output.  
• To apply the same address to all outputs, send address 9 as the selector.  

When using unique addressing, you can give every output a custom address — including repeated or skipped numbers.  
The decoder immediately returns to operating mode after assignment unless unique mode is active. In that case, press the config button again to exit.

---

## 🟡 Menu 2: Output Type Selection

Each output can be set to one of the following modes:  

| Type ID | Mode Description |
|----------|------------------|
| 1 | Double Pulse (default) |
| 2 | Double Steady |
| 3 | Single Pulse |
| 4 | Single Steady |
| 5 | Double Pulse with Electrofrog relay support |

In Electrofrog mode, outputs 1–4 control the relays on outputs 8–5 in reversed order (1→8, 2→7, etc.).  
• Select outputs with DCC address 1–8

---

## 🔵 Menu 3: Pulse Time Configuration

You can fine-tune the pulse time for each output.  

For Single Pulse:  
• Time is set in whole seconds  
• Address 10 = 10 seconds  
• Range: 1–4096 seconds  

For Double Pulse:  
• Time is set in 10ms steps  
• Address 1 = 10ms  
• Max = 40.9 seconds (4096 × 10ms)  

Default values:  
• Double Pulse: 50ms  
• Single Pulse: 5s  

• Use address 9 to apply the same time to all outputs at once.

---

## 🟣 Menu 4: PWM Duty Cycle

Available for outputs in Steady mode only (Single or Double).  

• PWM reduces power or speed — ideal for slow motors like the MTB MP-1.  
• PWM frequency is 50Hz  
• DCC values are mapped as:  

| Address | Duty Cycle |
|----------|-------------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (default) |

Use address 9 to apply the same duty cycle to all outputs.  

---

## 🔘 Menu 5: Global Settings & Presets

This menu lets you set global behavior with specific DCC addresses:  

**Presets (Set all output types at once)**  

| Address | Preset Mode |
|----------|--------------|
| 1 | Double Pulse (default) |
| 2 | Double Steady |
| 3 | Single Pulse |
| 4 | Single Steady |
| 5 | Double Pulse with Electrofrog mode |

**Special Options**  

| Address | Setting |
|----------|----------|
| 20 | Disable unique output addresses (default) |
| 21 | Enable unique output addresses |
| 30 | Disable DCC EXT command support (default) |
| 31 | Enable DCC EXT pulse-length support |
| 40 | Disable loco function control (default) |
| 41 | Enable loco functions (F1–F16, 1 address) |
| 42 | Enable loco functions (F1–F4, 2+ addresses) |
| 996 / 1000 | Disable Roco 4-address offset (default) |
| 997 / 1001 | Enable Roco 4-address offset |

---

## 📟 Loco Function Control Explained

You can control the decoder using locomotive function keys (F1–F16) instead of accessory commands.  

**Benefits:**  
• Works with throttles like Roco Lokmaus 2  
• Very fast switching — ideal for quick layout control  

**Modes:**  
• F1–F16 mode: Uses 1 loco address  
• F1–F4 mode: Uses 2 or more addresses  

➤ Ideal for devices like Lokmaus that only support F1–F4  

The loco address used matches the DCC address assigned to Output 1.
