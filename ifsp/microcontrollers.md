# Microcontrollers

**Microprocessor**:
- Focus on processing speed;
- Needs other components for functioning;
- Used for applications that need a lot of computing power (OSs).

**Microcontrollers**:
- Focus on versatility;
- Has all necessary components;
- Used for dedicated applications.

### Microcontroller types

### Executable file types

### Frequency and processing

### Microprocessors

Is part of a computing system resposible for the logic and arithmetic
part of the computer instructions.

Dividing the processment by using multiple cores optimizes for the
limitations of physical materials. The dissipated power is way less
when considering multiple cores with less speed versus a single
core with high frequency (1x4Ghz vs. 4x1.6Ghz).

A _bus_ is simply a mesh of _wires_. A processor of 8 bits, has 8 wires
on its _bus_, that goes for 32 and 64 bits as well.

The maximum RAM that can be used in a system is defined by the bit number,
such that is simply $2^x$:
32 bits system: $2^{32} = 4$GB RAM.

Processors have:
- A control unit (CU), which manages signals orders;
- Instruction registers (IR), which decodes instructions;
- Address control (MAR), which is a memory address register;
- Data control;
- Arithmetic Logic Unit (ALU), which runs calculations;
- Registers;


### Architecture

There are two main types of processor archictecure: Von-Newumann and Harvard.

A basic operating cycle for a processor is:
1. Search for instructions;
2. Decode instructions;
3. Find operands (data);
4. Execute;
5. Present results.

The Von-Neumann architecture came first and handles instructions by machine cycle,
which means it does not have a pipeline cycle. The cycle goes: Search
cycle $\circlearrowright$ Execution cycle.

The Harvard architecture, on the other hand, uses a pipeline cycle, which is,
basically, as soon as the execution cycle starts, the search cycle for the
next instruction begins, thus making sure that all resources are used to optimize
time with a constant flow.

|Example| of| pipeline| cycle|
|---|---|---|---|
| Search | Execution | --- | --- |
|---| Search| Execution | ---|
|---|---|Search| Execution |


### Mnemonics and Opcodes

Opcode is binary code that represents instructions for procssors.
Mnemonic is a reserved word that represents an opcode.

==Example:==

|Mnemonic|Opcode|
|---|---|
|INC A| 0x04|
|DEC A| 0x14|


- CISC: complex instruction set computer
- RISC: reduced instruction set computer


**AVR:**
- Single chip RISC Microcontroller
- Harvard based 8-bit architecture
- Developed by ATMEL
- 132 instructions in Assembly

### Clock System
- Higher frequencies consume more power;
- There can be external and internal clock input
fonts, external ones tend to allow more control; internal
ones have simpler systems (usually an oscillator of
register + capacitor (RC)) and are by fabrication default;
- There can be multiple clock generators for the same system.

**MIPS:** million instructions per second.

### Reset System
- There are different reset systems;
- Can be by hardware or software;
- Can be programmed to happen after erros (watchdog timer).







