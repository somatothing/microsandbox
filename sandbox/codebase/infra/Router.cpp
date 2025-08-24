#include <iostream>
#include <vector>
#include "GaslessExchange.h"

class OnchainRouter {
public:
    void route(const std::vector<std::string>& tokens) {
        GaslessExchange exchange;
        exchange.fetchQuote("ETH/DAI");
        // TODO: Implement gasless exchange routing logic
        std::cout << "Routing " << tokens.size() << " tokens" << std::endl;
    }
};

int main() {
    OnchainRouter router;
    router.route({"ETH", "DAI"});
    return 0;
}
