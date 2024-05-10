# cpp-review-4

Programs use RAM for memory
Smallest memory unit is binary digit/bit (0 or 1)
Memory made up of sequential units called memory addresses, lets us find/access memory contents at particular location
Bit doesn’t get unique memory address (limited memory/don’t need to access bit by bit), each memory address holds 1 byte of data (8 bits operating as unit)
Data type used to tell computer how to interpret memory contents, ex. declaring variable as int of value 65 will store 0100 0001 (65 in binary) at memory address for variable
Void type incomplete, memory amount unknown
Objects in memory can use more than 1 byte of memory address, more bytes=more unique values that can be stored in that memory
Sizeof function gives size of data type’s memory allocation (can vary based on architecture)
Signed integer includes sign of integer as first bit (default), 8 bit integer can safely hold 2^8=256 possible values so signed int can be -128 to 127 (results vary if you add/subtract 1 at end, called overflow, can result in wraparound ex. 127 + 1 = -128)
Unsigned integer ignores sign/uses all 8 bits for int value (0 to 255), use if no negatives needed, easier to overflow since lower limit is 0