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
Unsigned integer ignores sign/uses all 8 bits for int value (0 to 255), use if no negatives needed, easier to overflow since lower limit is 0, signed/unsigned operations generally converted to unsigned (can cause issues), good for embedded systems when performance counts
Can use special int types with specified sizes, ex. std::int8_t has 1 byte always, may be nonexistent/slower on some architectures
Can also use guaranteed int types, ex. std::int_fast32_t is fastest int type available with at least 4 bytes, std::uint_least32_t is smallest int type available with at least 4 bytes (not necessarily fastest to process), can produce unexpected behavior depending on architecture
Best practice to use int when size doesn't matter, std::int#_t when guaranteed range needed, std::uint#t when bit manipulation/well-defined wrap-around behavior needed, avoid short & long/unsigned types for quantities/8 bit fixed integers (use char which can cause issues)/fast & least when possible
std::size_t is implementation defined unsigned integral type, imposes upper limit on size of objects created in system, varies depending on architecture
Floating point types are decimals (decimal floats depending on number of decimal digits wanted), also different float representations with different byte amounts, all floats signed, float 4 bytes (add f at end)/double 8 bytes (default), may use scientfic notation
Floating point has default of 6 significant digits, can change with std:setprecision(digits) in iomanip library, may only have precision up to certain number of digits even with significant digit change so values may not be correct
Floating points hard to compare (difficult to store in binary, value may change when precision changes)
Bool has value of true/false (casting to 0 makes it false, casting to anything else makes it true, std::cin only accepts 0 for false/1 for true, need to set std::boolalpha to use "true"/"false"), always 1 byte
Char holds single character, always 1 byte