// Author(s): Maurice Laveaux
// Copyright: see the accompanying file COPYING or copy at
// https://github.com/mCRL2org/mCRL2/blob/master/COPYING
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#include "mcrl2/utilities/unordered_set.h"

#include <boost/test/included/unit_test_framework.hpp>

#include <random>
#include <unordered_set>

using namespace mcrl2::utilities;

BOOST_AUTO_TEST_CASE(test_trivial)
{
  // Sanity check, default construction and destruction.
  unordered_set<int> set;

  for (auto& element : set)
  {
    BOOST_FAIL("There should be no elements in this set");
  }
}

template<typename T>
unordered_set<T> construct(std::initializer_list<T> list)
{
  unordered_set<T> set;

  for (auto& element : list)
  {
    set.emplace(element);
  }

  return set;
}

BOOST_AUTO_TEST_CASE(test_small)
{
  // Test with inserting 5, 3, 2, 5 expected { 2,3,5 }
  unordered_set<int> set = construct({5,3,2,5});

  BOOST_CHECK(set.find(5) != set.end());
  BOOST_CHECK(set.find(2) != set.end());
  BOOST_CHECK(set.find(3) != set.end());
}

BOOST_AUTO_TEST_CASE(test_large)
{
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist(1,1000); // distribution in range [1, 6]

  unordered_set<int> test;

  // Here, we assume that the standard library implementation is correct.
  std::unordered_set<int> correct;
  for (std::size_t i = 0; i < 100000; ++i)
  {
    auto value = dist(rng);
    test.emplace(value);
    correct.emplace(value);
  }

  // Check that both contain the same elements.
  for (auto& value : correct)
  {
    BOOST_CHECK(test.find(value) != test.end());
  }

  for (auto& value : test)
  {
    BOOST_CHECK(correct.find(value) != correct.end());
  }
}

BOOST_AUTO_TEST_CASE(test_copy)
{
  unordered_set<int> set = construct({5,3,2,5});

  unordered_set<int> copy(set);
  set.clear();

  BOOST_CHECK(copy.find(5) != copy.end());
  BOOST_CHECK(copy.find(2) != copy.end());
  BOOST_CHECK(copy.find(3) != copy.end());
}

boost::unit_test::test_suite* init_unit_test_suite(int, char*[])
{
  return nullptr;
}
