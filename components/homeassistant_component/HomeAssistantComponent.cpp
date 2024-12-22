#include "HomeAssistantComponent.h"
#include "esphome/core/log.h"

namespace esphome {
namespace homeassistant_component {

static const char* const TAG = "homeassistant.component";

bool HomeAssistantComponent::can_update_from_api() {
  ESP_LOGD(TAG, "can_update_from_api: true %s", get_entity_id().c_str());
  return true;
}

void HomeAssistantComponent::ignore_api_updates_with_seconds(double seconds) {
  ESP_LOGD(TAG, "ignore_api_updates_with_seconds bypassed: %s %f", get_entity_id().c_str(), seconds);
  // Do nothing or remove the delay setting.
}

bool HomeAssistantComponent::can_publish_to_api() {
  ESP_LOGD(TAG, "can_publish_to_api: true %s", get_entity_id().c_str());
  return true;
}

void HomeAssistantComponent::ignore_publish_with_seconds(double seconds) {
  ESP_LOGD(TAG, "ignore_publish_with_seconds bypassed: %s %f", get_entity_id().c_str(), seconds);
  // Do nothing or remove the delay setting.
}

}  // namespace homeassistant_component
}  // namespace esphome
