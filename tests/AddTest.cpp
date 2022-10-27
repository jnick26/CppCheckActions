#include "Add.h"
#include <gmock/gmock.h>

namespace {
using ::testing::Eq;

TEST(Add, when_two_numbers_added_then_result_returned) {
  EXPECT_THAT(lib::add(0, 0), Eq(0));
}
} // namespace