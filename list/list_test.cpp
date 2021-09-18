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

TEST(ListTest, MustGetMaxValueRightly) {
    List<int> l;

    l.append(1);
    l.append(2);
    l.append(33);
    l.append(42);
    l.append(5);
    l.append(6);
    l.append(3);
    l.append(8);
    l.append(2);
    l.append(10);
    EXPECT_EQ(l.max(), 42);

    l.append(50);
    EXPECT_EQ(l.max(), 50);

    l.append(-1);
    EXPECT_EQ(l.max(), 50);

    l.append(54590);
    EXPECT_EQ(l.max(), 54590);
}

TEST(ListTest, MustGetSizeRightly) {
    List<int> l;
    EXPECT_EQ(l.size(), 0);

    l.append(1);
    l.append(2);
    l.append(33);
    l.append(42);
    EXPECT_EQ(l.size(), 4);

    l.append(50);
    EXPECT_EQ(l.size(), 5);

    l.append(-1);
    l.append(-1);
    l.append(-1);
    l.append(-1);
    EXPECT_EQ(l.size(), 9);
}

TEST(ListTest, MustVerifyIfListContainsElementsRightly) {
    List<int> l;
    EXPECT_FALSE(l.contains(1));

    l.append(1);
    EXPECT_TRUE(l.contains(1));

    l.append(5);
    l.append(3);
    l.append(23);
    l.append(10);
    l.append(76);
    EXPECT_TRUE(l.contains(5));
    EXPECT_FALSE(l.contains(500));
    EXPECT_TRUE(l.contains(23));
}

TEST(ListTest, MustGetCorrectIndex) {
    List<int> l;

    l.append(10);
    EXPECT_EQ(l.index_of(10), 0);

    l.append(5);
    l.append(3);
    l.append(23);
    l.append(10);
    l.append(76);
    l.append(3);
    EXPECT_EQ(l.index_of(23), 3);
    EXPECT_EQ(l.index_of(3), 2);
}

TEST(ListTest, MustThrowExceptionIfIndexMethodGetsInvalidIndex) {
    List<int> l;

    EXPECT_THROW(l.index_of(2), invalid_argument);

    l.append(10);
    l.append(5);
    l.append(3);
    l.append(23);
    l.append(10);
    l.append(76);
    l.append(3);
    EXPECT_THROW(l.index_of(300), invalid_argument);
}

TEST(ListTest, MustGetCorrectLastIndex) {
    List<int> l;

    l.append(10);
    EXPECT_EQ(l.last_index_of(10), 0);

    l.append(5);
    l.append(3);
    l.append(3);
    l.append(1);
    l.append(10);
    EXPECT_EQ(l.last_index_of(3), 3);
    EXPECT_EQ(l.last_index_of(10), 5);
}

TEST(ListTest, MustThrowExceptionIfLastIndexGetsInvalidIndex) {
    List<int> l;
    EXPECT_THROW(l.last_index_of(2), invalid_argument);

    l.append(10);
    l.append(5);
    l.append(3);
    l.append(3);
    l.append(1);
    l.append(10);
    EXPECT_THROW(l.index_of(300), invalid_argument);
}

TEST(ListTest, MustRemoveElements) {
    List<int> l;

    l.append(10);
    l.remove(0);
    EXPECT_EQ(l.size(), 0);
    EXPECT_FALSE(l.contains(10));

    l.append(5);
    l.append(3);
    l.append(3);
    l.append(1);
    l.append(10);

    l.remove(3);
    EXPECT_EQ(l.size(), 4);
    EXPECT_FALSE(l.contains(1));

    l.remove(1);
    EXPECT_EQ(l.size(), 3);
    EXPECT_TRUE(l.contains(3));
}

TEST(ListTest, MustThrowExceptionIfRemoveGetsInvalidIndex) {
    List<int> l;

    EXPECT_THROW(l.remove(0), out_of_range);

    l.append(10);

    EXPECT_THROW(l.remove(1), out_of_range);
    EXPECT_THROW(l.remove(700), out_of_range);
}

TEST(ListTest, MustRemoveLastElement) {
    List<int> l;
    l.append(5);
    l.append(3);
    l.append(3);
    l.append(1);
    l.append(10);

    l.remove(l.size() - 1);
    EXPECT_EQ(l.size(), 4);
    EXPECT_FALSE(l.contains(10));
}

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}