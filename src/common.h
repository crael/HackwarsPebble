#pragma once
  
#define BEVERAGE_SERVICE_PKEY 0
#define CAPTAIN_ANNOUNCEMENT_PKEY 1
#define LAVATORY_AVAILABILITY_PKEY 2
  
bool get_stored_bool(uint32_t key);
void set_stored_bool(uint32_t key, bool value);