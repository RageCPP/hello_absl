#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"

ABSL_FLAG(uint16_t, port, 50051, "Server port for the service");

int main(int argc, char** argv) {
  absl::ParseCommandLine(argc, argv);
  return 0;
}
