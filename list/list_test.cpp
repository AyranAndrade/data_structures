#include <gtest/gtest.h>

#include "list.hpp"

using namespace testing;

TEST(ListTest, MustAppendAndGetRightly) {
    List<int> l;

    l.append(1);
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);
    l.append(6);
    l.append(7);
    l.append(8);
    l.append(9);
    l.append(10);

    EXPECT_EQ(l.get(3), 4);
    EXPECT_EQ(l.get(8), 9);
    EXPECT_EQ(l.get(9), 10);
    EXPECT_EQ(l.get(4), 5);
    EXPECT_EQ(l.get(6), 7);
}

TEST(ListTest, MustThrowExceptionWithIndexOutOfRange) {
    EXPECT_THROW({
        List<int> l;
        l.append(0);
        l.get(2);
    }, out_of_range);

    EXPECT_THROW({
        List<int> l;
        l.get(0);
    }, out_of_range);
}

TEST(ListTest, MustPrintContentRightly) {
    List<int> l;

    l.append(1);
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);
    l.append(6);
    l.append(7);
    l.append(8);
    l.append(9);
    l.append(10);

    ostringstream out;
    out << l;
    EXPECT_EQ("[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]", out.str());
}

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}