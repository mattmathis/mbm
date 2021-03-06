#include "common/config.h"

#include <assert.h>
#include <stdint.h>

#include <string>

namespace mbm {
namespace {
const std::string delimiter = ":";
}

Config::Config()
    : socket_type(static_cast<SocketType>(-1)),
      cbr_kb_s(0),
      loss_threshold(0.0) {
}

Config::Config(SocketType socket_type, uint32_t cbr_kb_s, double loss_threshold)
    : socket_type(socket_type),
      cbr_kb_s(cbr_kb_s),
      loss_threshold(loss_threshold) {
}

}  // namespace mbm
