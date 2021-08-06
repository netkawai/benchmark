#define HAVE_THREAD_SAFETY_ATTRIBUTES
#include "../src/mutex.h"

int main() {}

namespace benchmark {
namespace internal {

int InitializeStreams() {
  static std::ios_base::Init init;
  return 0;
}
}
}

