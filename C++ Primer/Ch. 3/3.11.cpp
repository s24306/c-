const string s = "Keep out!";
for (auto &c : s) {} // The range is legal. c should be const char reference.
