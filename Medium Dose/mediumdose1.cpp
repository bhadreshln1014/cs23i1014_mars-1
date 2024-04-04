#include <iostream>
#include <string>

class MarsClub {
public:
    std::string name;
    std::string rollNumber;
    int age;
    std::string subteam;
    std::string role;

    MarsClub(std::string n, std::string r, int a, std::string s, std::string rl)
        : name(n), rollNumber(r), age(a), subteam(s), role(rl) {}

    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Subteam: " << subteam << std::endl;
        std::cout << "Role: " << role << std::endl;
    }
};

int main() {
    MarsClub member("Bhadresh", "CS23I1014", 19, "Software", "Member");

    auto changeRole = [](MarsClub& clubMember, const std::string& newRole) {
        clubMember.role = newRole;
    };
    std::cout <<"Information before updation: " << std::endl;
    member.displayInfo();
    std::cout <<"" <<std::endl;
    changeRole(member, "Lead");

    std::cout << "Updated Information:" << std::endl;
    member.displayInfo();
    return 0;
}
