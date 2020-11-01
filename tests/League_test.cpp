
#include "gtest/gtest.h"
#include "LeagueManager.h"
#include "League.h"
#include "Player.h"
#include "Soccer.h"
#include "Sport.h"
#include "Team.h"
#include "UltimateFrisbee.h"
#include "Baseball.h"
#include "Basketball.h"
#include "Division.h"
//hi here, charlie. I love ou!

TEST(Baseball, getSportName) {
  Baseball base;
  
  EXPECT_EQ(base.getSportName(), "Baseball");
}

TEST(Basketball, getSportName) {
  Basketball basket;
  
  EXPECT_EQ(basket.getSportName(), "Basketball");
}

TEST(Soccer, getSportName) {
  Soccer s;
  
  EXPECT_EQ(s.getSportName(), "Soccer");
}

TEST(UltimateFrisbee, getSportName) {
  UltimateFrisbee fris;
  
  EXPECT_EQ(fris.getSportName(), "Ultimate Frisbee");
}

TEST(LeagueManager, generateName) {
  LeagueManager lm;
  
  EXPECT_EQ(lm.generateName("tests"), "The No Names");
}

TEST(Division, divName) {
  Division div;
  
  EXPECT_EQ(div.divName, "");
}

TEST(League, sportType) {
  League lg;
  
  EXPECT_EQ(lg.sportType, nullptr);
}

TEST(Player, getName) {
  Player p;
  
  EXPECT_EQ(p.getName(), "Free Position");
}

TEST(Team, getTeamName) {
  Team tm;
  
  EXPECT_EQ(tm.getTeamName(), "");
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}