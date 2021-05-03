#import "cpp-install.h"
#import "prima-factor-decomposition.h"
#include <iostream>
#include <sstream>

using namespace facebook;

void installPrimeFactorDecomposition(jsi::Runtime& jsiRuntime) {
  std::cout << "Initializing akimoto-prime-factor-decomposition" << "\n";

  auto primeFactorDecompose = jsi::Function::createFromHostFunction(
      jsiRuntime,
      jsi::PropNameID::forAscii(jsiRuntime, "primeFactorDecompose"),
      1,
      [](jsi::Runtime& runtime, const jsi::Value& thisValue, const jsi::Value* arguments, size_t count) -> jsi::Value {
        std::string str;
        return jsi::Value(-1);
      }
  );
  jsiRuntime.global().setProperty(jsiRuntime, "primeFactorDecompose ", std::move(primeFactorDecompose));
}

void cleanupPrimeFactorDecomposition() {
}
