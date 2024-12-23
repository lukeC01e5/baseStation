#include <vector>
#include <string>
#include <sstream>

class Player
{
public:
  std::string name;
  std::string mainCreature;
  std::string characterType; // Add this line
  std::vector<std::string> items;
  std::vector<std::string> creatures;

  Player(const std::string &name, const std::string &mainCreature, const std::string &characterType, const std::vector<std::string> &items, const std::vector<std::string> &creatures)
      : name(name), mainCreature(mainCreature), characterType(characterType), items(items), creatures(creatures) {} // Modify this line

  std::string toString() const
  {
    std::ostringstream oss;
    oss << "Name: " << name << ", Character Type: " << characterType; // Modify this line

    for (const auto &item : items)
    {
      oss << " " << item;
    }
    for (const auto &creature : creatures)
    {
      oss << " " << creature;
    }
    return oss.str();
  }
};