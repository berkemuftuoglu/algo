// Bitwise AND (&)
// Compares each bit of the first operand to the corresponding bit of the second operand. 
// If both bits are 1, the corresponding result bit is set to 1. Otherwise, it's set to 0.
int andResult = 5 & 3;  // 5 (0101) & 3 (0011) = 1 (0001)
// Tip: To check if an integer is even, use (n & 1) == 0

// Bitwise OR (|)
// Compares each bit of the first operand to the corresponding bit of the second operand. 
// If at least one of the bits is 1, the corresponding result bit is set to 1.
int orResult = 5 | 3;  // 5 (0101) | 3 (0011) = 7 (0111)
// Tip: To set the nth bit, use (n | (1 << bitPosition))

// Bitwise XOR (^)
// Compares each bit of the first operand to the corresponding bit of the second operand. 
// If the bits are different, the corresponding result bit is set to 1.
int xorResult = 5 ^ 3;  // 5 (0101) ^ 3 (0011) = 6 (0110)
// Tip: To toggle the nth bit, use (n ^ (1 << bitPosition))

// Bitwise NOT (~)
// Inverts the bits of the number. 0 becomes 1, and 1 becomes 0.
int notResult = ~5;  // ~5 (0101) = 10 (in 4-bit representation: 1010)
// Tip: Often used in bit masks to invert specific bits.

// Left Shift (<<)
// Shifts the bits of the number to the left by the specified positions, filling with zeros.
int leftShiftResult = 3 << 2;  // 3 (0011) << 2 = 12 (1100)
// Tip: To multiply by a power of 2, shift left.

// Right Shift (>>)
// Shifts the bits of the number to the right by the specified positions.
int rightShiftResult = 11 >> 1;  // 11 (1011) >> 1 = 5 (0101)
// Tip: To divide by a power of 2, shift right.
