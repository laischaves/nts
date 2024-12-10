# PLC Programming

**What is a PLC?**

A PLC is a small industrial computer, used in industrial applications,
controlling and monitoring the status for equipment. Some equipment that
can be controlled by PLC are motors, VFDs, solenoids, valves, etc.


PLC elements:

- Processor: to put simply, the _brains_ of the PLC; it stores the programs,
communicates with other cards on rack, executes the code during the scan cycle,


- I/O Cards: input/output interface with the external world, compact PLCs can have
on board I/O, some may allow I/O expansions. Large PLCs require I/O modules or
remote I/O modules.
>	- Digital input cards work with logical values and are configured
>	for 24V DC or 120V AC.
>	- Analog input cards work with raw analog data using analog signals,
>	usually ranging from 4-20 mA or 0-10 V. Those signals will be
>	converted to a numeric value the processor can use.
>	- Output cards take commands from the processor and can send out
>	logical signals, voltages or close internal relay contacts.

- Specialty Cards: extra cards with different functionalities, such as RTD cards,
thermocouple cards, communication cards (ethernet, devicenet, controlnet, etc.).

- Power Supply: powers the processor, internal components of I/O cards and output
modules usually get power from an external source.


- Back Plane: communication between processor and I/O cards, can also provide power
to the processor and I/O cards. Large PLCs have separate backplanes, while compact
ones have built in backplanes.

### Ladder

##### Symbols

![[ladder_symbols_ieec.png]]


