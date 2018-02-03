
short CountBits(unsigned int x) {
  // Iterate over each bit
	short count = 0;
	while (x) {
		count += x & 1;
		x = x >> 1;
	}
	return count;
}

#include "test_framework/test_utils_generic_main.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> param_names{"x"};
  generic_test_main(argc, argv, param_names, "count_bits.tsv", &CountBits);
  return 0;
}
