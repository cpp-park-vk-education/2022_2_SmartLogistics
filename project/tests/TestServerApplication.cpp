#include <gtest/gtest.h>
#include "ApplicationServer.hpp"

TEST(ServerApplicationTest, ProcessEventsTest) {
  EXPECT_ANY_THROW({
    ServerApplication server;
    server.run();
  });
}