/*
 * rangetest.cpp
 *
 * Tests for the qx99::Range class
 *
 * (c) 2017 qx99.co.uk
 */
 
/* ************************************************************************* */

#include <gtest/gtest.h>

#include "qx99/range.h"

/* ************************************************************************* */

using qx99::Range;

class RangeTest : public ::testing::Test
{
public:

protected:

private:
};

/* ************************************************************************* */
/* ************************************************************************* */

TEST_F(RangeTest, SingleValueContains)
{
    Range range(0x42);
    
    ASSERT_FALSE(range.Contains(0x41));  // less than...
    ASSERT_TRUE(range.Contains(0x42));   // in range...
    ASSERT_FALSE(range.Contains(0x43));  // greater than...
}

/* ************************************************************************* */

TEST_F(RangeTest, RangeContains)
{
    Range range(0x42, 0x97);
    
    ASSERT_FALSE(range.Contains(0x31));  // less than...
    ASSERT_TRUE(range.Contains(0x42));   // lowest value...
    ASSERT_TRUE(range.Contains(0x5F));   // in range...
    ASSERT_TRUE(range.Contains(0x97));   // highest value...
    ASSERT_FALSE(range.Contains(0xD6));  // greater than...
}

/* ************************************************************************* */
/* ************************************************************************* */
/* ************************************************************************* */
