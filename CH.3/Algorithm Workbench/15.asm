;15. Show the order of individual bytes in memory (lowest to highest) for the following doubleword variable:
;val1 DWORD 87654321h

COMMENT @
Assuming that memory is byte addressable, i.e at each location of memory a byte of data is stored.

Data can be stored in memory in Little Endian way or Big Endian way.

Little Endian way - lets fill the data 87654321H in memory: (Lowest to Highest)

Memory Loaction	Data | at that Location
xxx0000	               21
xxx0001	               43
xxx0002	               65
xxx0003	               87
In Big Endian way : (Highest to Lowest)

Memory Loaction	|Data at that Location
xxx0000	          87
xxx0001	          65
xxx0002	          43
xxx0003	          21
@
