#include <gtest/gtest.h>

#include "list.hpp"

using namespace testing;

class ListTest : public Test {
    protected:
        void SetUp() override {
            l0.append(5);
            l0.append(3);
            l0.append(23);
            l0.append(10);
            l0.append(76);

            l1.append(1);
            l1.append(2);
            l1.append(3);
            l1.append(4);
            l1.append(5);
            l1.append(6);
            l1.append(7);
            l1.append(8);
            l1.append(9);
            l1.append(10);
        }

    List<int> l0;
    List<int> l1;
    List<int> l2;
};

TEST_F(ListTest, MustGetElementsRightly) {
    EXPECT_EQ(l1.get(3), 4);
    EXPECT_EQ(l1.get(8), 9);
    EXPECT_EQ(l1.get(9), 10);
    EXPECT_EQ(l1.get(4), 5);
    EXPECT_EQ(l1.get(6), 7);
}

TEST_F(ListTest, MustThrowExceptionWithIndexOutOfRange1) {
    EXPECT_THROW({
        l2.append(0);
        l2.get(2);
    }, out_of_range);
}

TEST_F(ListTest, MustThrowExceptionWithIndexOutOfRange2) {
    EXPECT_THROW(l2.get(0), out_of_range);
}

TEST_F(ListTest, MustPrintContentRightly) {
    ostringstream out;
    out << l1;
    EXPECT_EQ("[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]", out.str());
}

TEST_F(ListTest, MustGetMaxValueRightly) {
    EXPECT_EQ(l0.max(), 76);

    l0.append(50);
    EXPECT_EQ(l0.max(), 76);

    l0.append(-1);
    EXPECT_EQ(l0.max(), 76);

    l0.append(54590);
    EXPECT_EQ(l0.max(), 54590);
}

TEST_F(ListTest, MustGetSizeRightly) {
    EXPECT_EQ(l2.size(), 0);

    EXPECT_EQ(l0.size(), 5);

    l0.append(50);
    EXPECT_EQ(l0.size(), 6);

    l0.append(-1);
    l0.append(-1);
    l0.append(-1);
    l0.append(-1);
    EXPECT_EQ(l0.size(), 10);
}

TEST_F(ListTest, MustVerifyIfListContainsElementsRightly) {
    EXPECT_FALSE(l2.contains(0));

    l2.append(1);
    EXPECT_TRUE(l2.contains(1));

    EXPECT_TRUE(l0.contains(5));
    EXPECT_FALSE(l0.contains(500));
    EXPECT_TRUE(l0.contains(23));
}

TEST_F(ListTest, MustGetCorrectIndex) {
    l2.append(10);
    EXPECT_EQ(l2.index_of(10), 0);

    l0.append(3);
    EXPECT_EQ(l0.index_of(23), 2);
    EXPECT_EQ(l0.index_of(3), 1);
}

TEST_F(ListTest, MustThrowExceptionIfIndexMethodGetsInvalidIndex) {
    EXPECT_THROW(l2.index_of(2), invalid_argument);

    EXPECT_THROW(l0.index_of(300), invalid_argument);
}

TEST_F(ListTest, MustGetCorrectLastIndex) {
    l2.append(10);
    EXPECT_EQ(l2.last_index_of(10), 0);

    l0.append(3);
    EXPECT_EQ(l0.last_index_of(3), 5);
    EXPECT_EQ(l0.last_index_of(10), 3);
}

TEST_F(ListTest, MustThrowExceptionIfLastIndexGetsInvalidIndex) {
    EXPECT_THROW(l2.last_index_of(2), invalid_argument);

    EXPECT_THROW(l0.last_index_of(300), invalid_argument);
}

TEST_F(ListTest, MustRemoveElements) {
    l2.append(10);
    l2.remove(0);
    EXPECT_EQ(l2.size(), 0);
    EXPECT_FALSE(l2.contains(10));

    l0.remove(3);
    EXPECT_EQ(l0.size(), 4);
    EXPECT_FALSE(l0.contains(10));

    l0.remove(1);
    EXPECT_EQ(l0.size(), 3);
    EXPECT_FALSE(l0.contains(3));
}

TEST_F(ListTest, MustThrowExceptionIfRemoveGetsInvalidIndex) {
    EXPECT_THROW(l2.remove(0), out_of_range);

    l2.append(10);
    EXPECT_THROW(l2.remove(1), out_of_range);
    EXPECT_THROW(l2.remove(700), out_of_range);
}

TEST_F(ListTest, MustRemoveLastElement) {
    l0.remove(l0.size() - 1);
    EXPECT_EQ(l0.size(), 4);
    EXPECT_FALSE(l0.contains(76));
}

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}