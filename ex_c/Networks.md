# Networks 101

**Network**: an internconection of devices.

## Basic concepts and acromyms

- **LAN**: local access network
- **CAN**: campus area network
- **PAN**: personal access network
- **MAN**: metropolitan area network
- **WAN**: wide area network
- **VPN**: virtual private network
- **VOIP**: voice over IP.
- **IP**: internet protocol
	- is a logical address assigned to a device
	- can be IPV4 (32 bit) or IPV6 (128 bit, 2^128 possible)
	- the first part of an IP refers to the network
	- the second part of an IP refers to the host
- **MAC**: media access control (address)
	- are unique
	- contain vendor identifiers (Organizationally Unique Identifier)
	- 48 bits -> 24 bits are the OUI (or vendor code)
- **NIC**: network interface card
	- basically a network adapter, that can be external or external
	to the motherboard
- **Subnetwork (subnet):** a logical subdivision of an IP network.
- **Subnet Mask**: is used to identify network address of an IP by
performing a bitwise AND operation on the net mask. A subnet mask
separates the IP address into the network and host addresses
(\<network\>\<host\>). It can be done more than once, by dividing
the host part into a subnet and host address (\<network\>\<subnet\>\<host\>).

- **Ethernet Switch**:
	- can inteligently foward network traffic
	- learns what MAC address is connected to each port
	- network traffic is commonly called frames

- **Router**: device used to interconnect multiple networks
	- have specific protocols
	- the route (_the default route_) 0.0.0.0/0
	is commonly used for the *internet*, it contains
	all possible IP addresses
	- the router tends to select the most *specific* route
	(the route with the longest prefix -- most bits in it's
	subnet mask)
	- router traffic is mostly called _packets_
	instead of frames

**UTP**: unshielded twisted pair (wires)

**STP**: shielded twisted pair (wires)

**RG45 connector**: the connector that goes on the end of an
ethernet cable
	- has 8 conductors/pins
	- there's two color coding standards for connecting the
	pins on a RG45, called the *T568A* and *T568B* standards
	both configurations perform and function identically,
	it is, however, necessary that both ends of the cable
	are configured the same, and the B config is the most
	common.

> ![[network_001_ethernetcon.png]]

There are different categories of Twisted Pair cables:

| category |             common use             | distance limitations |
| -------- |:----------------------------------:| --------------------:|
| 3        |      10BASE-T and 100BASE-T4       |                 100m |
| 5        |     100BASE0-TX and 1000BASE-T     |                 100m |
| 5e       |     100BASE-TX and 1000BASE-T      |                 100m |
| 6        |      1000BASE-T and 10GBASE-T      |         100m and 55m |
| 6a       |      1000BASE-T and 10GBASE-T      |                 100m |
| 7        | 10GBASE-T and POTS/CATV/1000BASE-T |                 100m |




