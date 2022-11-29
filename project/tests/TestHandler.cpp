#include <gtest/gtest.h>
#include "Handler.hpp"

TEST(HandlerTest, GetHeaderTest) {
    Message m;
    EXPECT_ANY_THROW({
        Handler handler;
        handler.getTaskFromMessage(m);
  });
}