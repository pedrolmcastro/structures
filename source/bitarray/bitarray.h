/**
 * @author Pedro Lucas de Moliner de Castro
 * @copyright MIT License
 * @file bitarray.h
 * 
 * @brief Bitarray implementation using bytes as buckets
 */


#ifndef BITARRAY_H
#define BITARRAY_H


#include <stddef.h>
#include <stdbool.h>


typedef struct _BitArray bitarray_t;


/**
 * @brief Tests if all bits in bitarray are set to 1
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in] bitarray Bitarray reference
 * @return If all bits in bitarray are set to 1 or false in errors
 */
bool bitarray_all(const bitarray_t *bitarray);

/**
 * @brief Performs an and operation
 * @throw EINVAL If first or second are NULL
 * @throw ENOMEM If there is not enough memory
 * 
 * @param[in] first First operand reference
 * @param[in] second Second operand reference
 * @return Resultant bitarray reference or NULL in errors
 */
bitarray_t *bitarray_and(const bitarray_t *first, const bitarray_t *second);

/**
 * @brief Tests if any bit in bitarray is set to 1
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in] bitarray Bitarray reference
 * @return If any bit in bitarray is set to 1 or false in errors
 */
bool bitarray_any(const bitarray_t *bitarray);

/**
 * @brief Gets the bitarray buckets
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in] bitarray Bitarray reference
 * @return The bitarray buckets or 0 in errors
 */
size_t bitarray_buckets(const bitarray_t *bitarray);

/**
 * @brief Resets to 0 all bits in bitarray
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in, out] bitarray Bitarray reference
 * @return If the operation succeeded
 */
bool bitarray_clear(bitarray_t *bitarray);

/**
 * @brief Constructs a bitarray initialized with 0
 * @throw EINVAL If size is 0
 * @throw ENOMEM If there is not enough memory
 * 
 * @param[in] size Number of bits
 * @return Bitarray reference or NULL in errors
 */
bitarray_t *bitarray_construct(size_t size);

/**
 * @brief Copies the bitarray
 * @throw EINVAL If bitarray is NULL
 * @throw ENOMEM If there is not enough memory
 * 
 * @param[in] bitarray Bitarray reference
 * @return Copied bitarray reference or NULL in errors
 */
bitarray_t *bitarray_copy(const bitarray_t *bitarray);

/**
 * @brief Counts the number of bits set to 1 in bitarray
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in] bitarray Bitarray reference
 * @return Number of bits set to 1 in bitarray or 0 in errors
 */
size_t bitarray_count(const bitarray_t *bitarray);

/**
 * @brief Sets to 1 all bits in bitarray
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in, out] bitarray Bitarray reference
 * @return If the operation succeeded
 */
bool bitarray_fill(bitarray_t *bitarray);

/**
 * @brief Flips the bit at index
 * @throw EINVAL If bitarray is NULL or index is out of range
 * 
 * @param[in, out] bitarray Bitarray reference
 * @param[in] index Bit index
 * @return If the operation succeeded
 */
bool bitarray_flip(bitarray_t *bitarray, size_t index);

/**
 * @brief Frees the memory used by bitarray
 * 
 * @param[in, out] bitarray Bitarray reference
 */
void bitarray_free(bitarray_t *bitarray);

/**
 * @brief Tests if no bit in bitarray is set to 1
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in] bitarray Bitarray reference
 * @return If no bit in bitarray is set to 1 or false in errors
 */
bool bitarray_none(const bitarray_t *bitarray);

/**
 * @brief Performs a not operation
 * @throw EINVAL If bitarray is NULL
 * @throw ENOMEM If there is not enough memory
 * 
 * @param[in] bitarray Operand reference
 * @return Resultant bitarray reference or NULL in errors
 */
bitarray_t *bitarray_not(const bitarray_t *bitarray);

/**
 * @brief Performs an or operation
 * @throw EINVAL If first or second are NULL
 * @throw ENOMEM If there is not enough memory
 * 
 * @param[in] first First operand reference
 * @param[in] second Second operand reference
 * @return Resultant bitarray reference or NULL in errors
 */
bitarray_t *bitarray_or(const bitarray_t *first, const bitarray_t *second);

/**
 * @brief Resets to 0 the bit at index
 * @throw EINVAL If bitarray is NULL or index is out of range
 * 
 * @param[in, out] bitarray Bitarray reference
 * @param[in] index Bit index
 * @return If the operation succeeded
 */
bool bitarray_reset(bitarray_t *bitarray, size_t index);

/**
 * @brief Sets to 1 the bit at index
 * @throw EINVAL If bitarray is NULL or index is out of range
 * 
 * @param[in, out] bitarray Bitarray reference
 * @param[in] index Bit index
 * @return If the operation succeeded
 */
bool bitarray_set(bitarray_t *bitarray, size_t index);

/**
 * @brief Gets the bitarray size
 * @throw EINVAL If bitarray is NULL
 * 
 * @param[in] bitarray Bitarray reference
 * @return The bitarray size or 0 in errors
 */
size_t bitarray_size(const bitarray_t *bitarray);

/**
 * @brief Tests if the bit at index is set to 1
 * @throw EINVAL If bitarray is NULL or index is out of range
 * 
 * @param[in] bitarray Bitarray reference
 * @param[in] index Bit index
 * @return If the bit at index is set to 1 or false in errors
 */
bool bitarray_test(const bitarray_t *bitarray, size_t index);

/**
 * @brief Performs a xor operation
 * @throw EINVAL If first or second are NULL
 * @throw ENOMEM If there is not enough memory
 * 
 * @param[in] first First operand reference
 * @param[in] second Second operand reference
 * @return Resultant bitarray reference or NULL in errors
 */
bitarray_t *bitarray_xor(const bitarray_t *first, const bitarray_t *second);


#endif // BITARRAY_H
