#include <pebble.h>
#include "common.h"

bool get_stored_bool(uint32_t key) {
  return persist_exists(key) ? persist_read_bool(key) : false;
}

void set_stored_bool(uint32_t key, bool value) {
  persist_write_bool(key, value);
}