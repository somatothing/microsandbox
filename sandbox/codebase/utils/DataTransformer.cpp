#include <string>

struct Message { };

class DataTransformer {
public:
    Message transform(const std::string& input) {
        // TODO: Transform raw data into module messages
        return Message{};
    }
};
