/*
 * range.h
 *
 * Contains the headers for the Range object
 *
 * (c) 2017 qx99.co.uk
 */
 
/* ************************************************************************* */

#pragma once

#include <cstdint>  // std::uint8_t

namespace qx99
{

/* ************************************************************************* */

// for now, we only support basic ASCII
using RangeDigitType = std::uint8_t;

/* ************************************************************************* */

/// <summary>
/// Represents a range of numbers
/// </summary>
class Range
{
public:

    /// <summary>
    /// constructor (single value)
    /// </summary>
    /// <param name="value">The single value in the Range</param>
    Range(RangeDigitType value);

    /// <summary>
    /// constructor (range)
    /// </summary>
    /// <param name="low">The lowest value in the Range</param>
    /// <param name="high">The highest value in the Range</param>
    Range(RangeDigitType low, RangeDigitType high);

    /// <summary>
    /// default destructor
    /// </summary>
    ~Range() = default;

protected:

private:

    /// <summary>
    /// no default constructor
    /// </summary>
    Range() = delete;

    /// <summary>
    /// The lowest number in the range
    /// </summary>
    RangeDigitType _low;

    /// <summary>
    /// The highest number in the range
    /// </summary>
    RangeDigitType _high;
};

/* ************************************************************************* */

}  // namespace qx99
