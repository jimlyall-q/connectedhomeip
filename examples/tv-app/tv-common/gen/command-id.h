/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

// Global, non-cluster-specific commands
#define ZCL_READ_ATTRIBUTES_COMMAND_ID (0x00)
#define ZCL_READ_ATTRIBUTES_RESPONSE_COMMAND_ID (0x01)
#define ZCL_WRITE_ATTRIBUTES_COMMAND_ID (0x02)
#define ZCL_WRITE_ATTRIBUTES_UNDIVIDED_COMMAND_ID (0x03)
#define ZCL_WRITE_ATTRIBUTES_RESPONSE_COMMAND_ID (0x04)
#define ZCL_WRITE_ATTRIBUTES_NO_RESPONSE_COMMAND_ID (0x05)
#define ZCL_CONFIGURE_REPORTING_COMMAND_ID (0x06)
#define ZCL_CONFIGURE_REPORTING_RESPONSE_COMMAND_ID (0x07)
#define ZCL_READ_REPORTING_CONFIGURATION_COMMAND_ID (0x08)
#define ZCL_READ_REPORTING_CONFIGURATION_RESPONSE_COMMAND_ID (0x09)
#define ZCL_REPORT_ATTRIBUTES_COMMAND_ID (0x0A)
#define ZCL_DEFAULT_RESPONSE_COMMAND_ID (0x0B)
#define ZCL_DISCOVER_ATTRIBUTES_COMMAND_ID (0x0C)
#define ZCL_DISCOVER_ATTRIBUTES_RESPONSE_COMMAND_ID (0x0D)
#define ZCL_READ_ATTRIBUTES_STRUCTURED_COMMAND_ID (0x0E)
#define ZCL_WRITE_ATTRIBUTES_STRUCTURED_COMMAND_ID (0x0F)
#define ZCL_WRITE_ATTRIBUTES_STRUCTURED_RESPONSE_COMMAND_ID (0x10)
#define ZCL_DISCOVER_COMMANDS_RECEIVED_COMMAND_ID (0x11)
#define ZCL_DISCOVER_COMMANDS_RECEIVED_RESPONSE_COMMAND_ID (0x12)
#define ZCL_DISCOVER_COMMANDS_GENERATED_COMMAND_ID (0x13)
#define ZCL_DISCOVER_COMMANDS_GENERATED_RESPONSE_COMMAND_ID (0x14)
#define ZCL_DISCOVER_ATTRIBUTES_EXTENDED_COMMAND_ID (0x15)
#define ZCL_DISCOVER_ATTRIBUTES_EXTENDED_RESPONSE_COMMAND_ID (0x16)

// Commands for cluster: Basic
#define ZCL_RESET_TO_FACTORY_DEFAULTS_COMMAND_ID (0x00)
#define ZCL_MFG_SPECIFIC_PING_COMMAND_ID (0x00)

// Commands for cluster: Identify
#define ZCL_IDENTIFY_COMMAND_ID (0x00)
#define ZCL_IDENTIFY_QUERY_RESPONSE_COMMAND_ID (0x00)
#define ZCL_IDENTIFY_QUERY_COMMAND_ID (0x01)
#define ZCL_EZ_MODE_INVOKE_COMMAND_ID (0x02)
#define ZCL_UPDATE_COMMISSION_STATE_COMMAND_ID (0x03)
#define ZCL_TRIGGER_EFFECT_COMMAND_ID (0x40)

// Commands for cluster: Groups
#define ZCL_ADD_GROUP_COMMAND_ID (0x00)
#define ZCL_ADD_GROUP_RESPONSE_COMMAND_ID (0x00)
#define ZCL_VIEW_GROUP_COMMAND_ID (0x01)
#define ZCL_VIEW_GROUP_RESPONSE_COMMAND_ID (0x01)
#define ZCL_GET_GROUP_MEMBERSHIP_COMMAND_ID (0x02)
#define ZCL_GET_GROUP_MEMBERSHIP_RESPONSE_COMMAND_ID (0x02)
#define ZCL_REMOVE_GROUP_COMMAND_ID (0x03)
#define ZCL_REMOVE_GROUP_RESPONSE_COMMAND_ID (0x03)
#define ZCL_REMOVE_ALL_GROUPS_COMMAND_ID (0x04)
#define ZCL_ADD_GROUP_IF_IDENTIFYING_COMMAND_ID (0x05)

// Commands for cluster: Scenes
#define ZCL_ADD_SCENE_COMMAND_ID (0x00)
#define ZCL_ADD_SCENE_RESPONSE_COMMAND_ID (0x00)
#define ZCL_VIEW_SCENE_COMMAND_ID (0x01)
#define ZCL_VIEW_SCENE_RESPONSE_COMMAND_ID (0x01)
#define ZCL_REMOVE_SCENE_COMMAND_ID (0x02)
#define ZCL_REMOVE_SCENE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_REMOVE_ALL_SCENES_COMMAND_ID (0x03)
#define ZCL_REMOVE_ALL_SCENES_RESPONSE_COMMAND_ID (0x03)
#define ZCL_STORE_SCENE_COMMAND_ID (0x04)
#define ZCL_STORE_SCENE_RESPONSE_COMMAND_ID (0x04)
#define ZCL_RECALL_SCENE_COMMAND_ID (0x05)
#define ZCL_GET_SCENE_MEMBERSHIP_COMMAND_ID (0x06)
#define ZCL_GET_SCENE_MEMBERSHIP_RESPONSE_COMMAND_ID (0x06)
#define ZCL_ENHANCED_ADD_SCENE_COMMAND_ID (0x40)
#define ZCL_ENHANCED_ADD_SCENE_RESPONSE_COMMAND_ID (0x40)
#define ZCL_ENHANCED_VIEW_SCENE_COMMAND_ID (0x41)
#define ZCL_ENHANCED_VIEW_SCENE_RESPONSE_COMMAND_ID (0x41)
#define ZCL_COPY_SCENE_COMMAND_ID (0x42)
#define ZCL_COPY_SCENE_RESPONSE_COMMAND_ID (0x42)

// Commands for cluster: On/off
#define ZCL_OFF_COMMAND_ID (0x00)
#define ZCL_SAMPLE_MFG_SPECIFIC_OFF_WITH_TRANSITION_COMMAND_ID (0x00)
#define ZCL_ON_COMMAND_ID (0x01)
#define ZCL_SAMPLE_MFG_SPECIFIC_ON_WITH_TRANSITION_COMMAND_ID (0x01)
#define ZCL_SAMPLE_MFG_SPECIFIC_ON_WITH_TRANSITION2_COMMAND_ID (0x01)
#define ZCL_TOGGLE_COMMAND_ID (0x02)
#define ZCL_SAMPLE_MFG_SPECIFIC_TOGGLE_WITH_TRANSITION_COMMAND_ID (0x02)
#define ZCL_SAMPLE_MFG_SPECIFIC_TOGGLE_WITH_TRANSITION2_COMMAND_ID (0x02)
#define ZCL_OFF_WITH_EFFECT_COMMAND_ID (0x40)
#define ZCL_ON_WITH_RECALL_GLOBAL_SCENE_COMMAND_ID (0x41)
#define ZCL_ON_WITH_TIMED_OFF_COMMAND_ID (0x42)

// Commands for cluster: Level Control
#define ZCL_MOVE_TO_LEVEL_COMMAND_ID (0x00)
#define ZCL_MOVE_COMMAND_ID (0x01)
#define ZCL_STEP_COMMAND_ID (0x02)
#define ZCL_STOP_COMMAND_ID (0x03)
#define ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID (0x04)
#define ZCL_MOVE_WITH_ON_OFF_COMMAND_ID (0x05)
#define ZCL_STEP_WITH_ON_OFF_COMMAND_ID (0x06)
#define ZCL_STOP_WITH_ON_OFF_COMMAND_ID (0x07)

// Commands for cluster: Alarms
#define ZCL_RESET_ALARM_COMMAND_ID (0x00)
#define ZCL_ALARM_COMMAND_ID (0x00)
#define ZCL_RESET_ALL_ALARMS_COMMAND_ID (0x01)
#define ZCL_GET_ALARM_RESPONSE_COMMAND_ID (0x01)
#define ZCL_GET_ALARM_COMMAND_ID (0x02)
#define ZCL_RESET_ALARM_LOG_COMMAND_ID (0x03)

// Commands for cluster: RSSI Location
#define ZCL_SET_ABSOLUTE_LOCATION_COMMAND_ID (0x00)
#define ZCL_DEVICE_CONFIGURATION_RESPONSE_COMMAND_ID (0x00)
#define ZCL_SET_DEVICE_CONFIGURATION_COMMAND_ID (0x01)
#define ZCL_LOCATION_DATA_RESPONSE_COMMAND_ID (0x01)
#define ZCL_GET_DEVICE_CONFIGURATION_COMMAND_ID (0x02)
#define ZCL_LOCATION_DATA_NOTIFICATION_COMMAND_ID (0x02)
#define ZCL_GET_LOCATION_DATA_COMMAND_ID (0x03)
#define ZCL_COMPACT_LOCATION_DATA_NOTIFICATION_COMMAND_ID (0x03)
#define ZCL_RSSI_RESPONSE_COMMAND_ID (0x04)
#define ZCL_RSSI_PING_COMMAND_ID (0x04)
#define ZCL_SEND_PINGS_COMMAND_ID (0x05)
#define ZCL_RSSI_REQUEST_COMMAND_ID (0x05)
#define ZCL_ANCHOR_NODE_ANNOUNCE_COMMAND_ID (0x06)
#define ZCL_REPORT_RSSI_MEASUREMENTS_COMMAND_ID (0x06)
#define ZCL_REQUEST_OWN_LOCATION_COMMAND_ID (0x07)

// Commands for cluster: Commissioning
#define ZCL_RESTART_DEVICE_COMMAND_ID (0x00)
#define ZCL_RESTART_DEVICE_RESPONSE_COMMAND_ID (0x00)
#define ZCL_SAVE_STARTUP_PARAMETERS_COMMAND_ID (0x01)
#define ZCL_SAVE_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID (0x01)
#define ZCL_RESTORE_STARTUP_PARAMETERS_COMMAND_ID (0x02)
#define ZCL_RESTORE_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID (0x02)
#define ZCL_RESET_STARTUP_PARAMETERS_COMMAND_ID (0x03)
#define ZCL_RESET_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID (0x03)

// Commands for cluster: Partition
#define ZCL_TRANSFER_PARTITIONED_FRAME_COMMAND_ID (0x00)
#define ZCL_MULTIPLE_ACK_COMMAND_ID (0x00)
#define ZCL_READ_HANDSHAKE_PARAM_COMMAND_ID (0x01)
#define ZCL_READ_HANDSHAKE_PARAM_RESPONSE_COMMAND_ID (0x01)
#define ZCL_WRITE_HANDSHAKE_PARAM_COMMAND_ID (0x02)

// Commands for cluster: Over the Air Bootloading
#define ZCL_IMAGE_NOTIFY_COMMAND_ID (0x00)
#define ZCL_QUERY_NEXT_IMAGE_REQUEST_COMMAND_ID (0x01)
#define ZCL_QUERY_NEXT_IMAGE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_IMAGE_BLOCK_REQUEST_COMMAND_ID (0x03)
#define ZCL_IMAGE_PAGE_REQUEST_COMMAND_ID (0x04)
#define ZCL_IMAGE_BLOCK_RESPONSE_COMMAND_ID (0x05)
#define ZCL_UPGRADE_END_REQUEST_COMMAND_ID (0x06)
#define ZCL_UPGRADE_END_RESPONSE_COMMAND_ID (0x07)
#define ZCL_QUERY_SPECIFIC_FILE_REQUEST_COMMAND_ID (0x08)
#define ZCL_QUERY_SPECIFIC_FILE_RESPONSE_COMMAND_ID (0x09)

// Commands for cluster: Power Profile
#define ZCL_POWER_PROFILE_REQUEST_COMMAND_ID (0x00)
#define ZCL_POWER_PROFILE_NOTIFICATION_COMMAND_ID (0x00)
#define ZCL_POWER_PROFILE_STATE_REQUEST_COMMAND_ID (0x01)
#define ZCL_POWER_PROFILE_RESPONSE_COMMAND_ID (0x01)
#define ZCL_GET_POWER_PROFILE_PRICE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_POWER_PROFILE_STATE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_GET_OVERALL_SCHEDULE_PRICE_RESPONSE_COMMAND_ID (0x03)
#define ZCL_GET_POWER_PROFILE_PRICE_COMMAND_ID (0x03)
#define ZCL_ENERGY_PHASES_SCHEDULE_NOTIFICATION_COMMAND_ID (0x04)
#define ZCL_POWER_PROFILES_STATE_NOTIFICATION_COMMAND_ID (0x04)
#define ZCL_ENERGY_PHASES_SCHEDULE_RESPONSE_COMMAND_ID (0x05)
#define ZCL_GET_OVERALL_SCHEDULE_PRICE_COMMAND_ID (0x05)
#define ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_REQUEST_COMMAND_ID (0x06)
#define ZCL_ENERGY_PHASES_SCHEDULE_REQUEST_COMMAND_ID (0x06)
#define ZCL_ENERGY_PHASES_SCHEDULE_STATE_REQUEST_COMMAND_ID (0x07)
#define ZCL_ENERGY_PHASES_SCHEDULE_STATE_RESPONSE_COMMAND_ID (0x07)
#define ZCL_GET_POWER_PROFILE_PRICE_EXTENDED_RESPONSE_COMMAND_ID (0x08)
#define ZCL_ENERGY_PHASES_SCHEDULE_STATE_NOTIFICATION_COMMAND_ID (0x08)
#define ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_NOTIFICATION_COMMAND_ID (0x09)
#define ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_RESPONSE_COMMAND_ID (0x0A)
#define ZCL_GET_POWER_PROFILE_PRICE_EXTENDED_COMMAND_ID (0x0B)

// Commands for cluster: Appliance Control
#define ZCL_EXECUTION_OF_A_COMMAND_COMMAND_ID (0x00)
#define ZCL_SIGNAL_STATE_RESPONSE_COMMAND_ID (0x00)
#define ZCL_SIGNAL_STATE_COMMAND_ID (0x01)
#define ZCL_SIGNAL_STATE_NOTIFICATION_COMMAND_ID (0x01)
#define ZCL_WRITE_FUNCTIONS_COMMAND_ID (0x02)
#define ZCL_OVERLOAD_PAUSE_RESUME_COMMAND_ID (0x03)
#define ZCL_OVERLOAD_PAUSE_COMMAND_ID (0x04)
#define ZCL_OVERLOAD_WARNING_COMMAND_ID (0x05)

// Commands for cluster: Poll Control
#define ZCL_CHECK_IN_COMMAND_ID (0x00)
#define ZCL_CHECK_IN_RESPONSE_COMMAND_ID (0x00)
#define ZCL_FAST_POLL_STOP_COMMAND_ID (0x01)
#define ZCL_SET_LONG_POLL_INTERVAL_COMMAND_ID (0x02)
#define ZCL_SET_SHORT_POLL_INTERVAL_COMMAND_ID (0x03)

// Commands for cluster: Green Power
#define ZCL_GP_NOTIFICATION_COMMAND_ID (0x00)
#define ZCL_GP_NOTIFICATION_RESPONSE_COMMAND_ID (0x00)
#define ZCL_GP_PAIRING_SEARCH_COMMAND_ID (0x01)
#define ZCL_GP_PAIRING_COMMAND_ID (0x01)
#define ZCL_GP_PROXY_COMMISSIONING_MODE_COMMAND_ID (0x02)
#define ZCL_GP_TUNNELING_STOP_COMMAND_ID (0x03)
#define ZCL_GP_COMMISSIONING_NOTIFICATION_COMMAND_ID (0x04)
#define ZCL_GP_SINK_COMMISSIONING_MODE_COMMAND_ID (0x05)
#define ZCL_GP_RESPONSE_COMMAND_ID (0x06)
#define ZCL_GP_TRANSLATION_TABLE_UPDATE_COMMAND_ID (0x07)
#define ZCL_GP_TRANSLATION_TABLE_REQUEST_COMMAND_ID (0x08)
#define ZCL_GP_TRANSLATION_TABLE_RESPONSE_COMMAND_ID (0x08)
#define ZCL_GP_PAIRING_CONFIGURATION_COMMAND_ID (0x09)
#define ZCL_GP_SINK_TABLE_REQUEST_COMMAND_ID (0x0A)
#define ZCL_GP_SINK_TABLE_RESPONSE_COMMAND_ID (0x0A)
#define ZCL_GP_PROXY_TABLE_RESPONSE_COMMAND_ID (0x0B)
#define ZCL_GP_PROXY_TABLE_REQUEST_COMMAND_ID (0x0B)

// Commands for cluster: Door Lock
#define ZCL_LOCK_DOOR_COMMAND_ID (0x00)
#define ZCL_LOCK_DOOR_RESPONSE_COMMAND_ID (0x00)
#define ZCL_UNLOCK_DOOR_COMMAND_ID (0x01)
#define ZCL_UNLOCK_DOOR_RESPONSE_COMMAND_ID (0x01)
#define ZCL_TOGGLE_COMMAND_ID (0x02)
#define ZCL_TOGGLE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_UNLOCK_WITH_TIMEOUT_COMMAND_ID (0x03)
#define ZCL_UNLOCK_WITH_TIMEOUT_RESPONSE_COMMAND_ID (0x03)
#define ZCL_GET_LOG_RECORD_COMMAND_ID (0x04)
#define ZCL_GET_LOG_RECORD_RESPONSE_COMMAND_ID (0x04)
#define ZCL_SET_PIN_COMMAND_ID (0x05)
#define ZCL_SET_PIN_RESPONSE_COMMAND_ID (0x05)
#define ZCL_GET_PIN_COMMAND_ID (0x06)
#define ZCL_GET_PIN_RESPONSE_COMMAND_ID (0x06)
#define ZCL_CLEAR_PIN_COMMAND_ID (0x07)
#define ZCL_CLEAR_PIN_RESPONSE_COMMAND_ID (0x07)
#define ZCL_CLEAR_ALL_PINS_COMMAND_ID (0x08)
#define ZCL_CLEAR_ALL_PINS_RESPONSE_COMMAND_ID (0x08)
#define ZCL_SET_USER_STATUS_COMMAND_ID (0x09)
#define ZCL_SET_USER_STATUS_RESPONSE_COMMAND_ID (0x09)
#define ZCL_GET_USER_STATUS_COMMAND_ID (0x0A)
#define ZCL_GET_USER_STATUS_RESPONSE_COMMAND_ID (0x0A)
#define ZCL_SET_WEEKDAY_SCHEDULE_COMMAND_ID (0x0B)
#define ZCL_SET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0B)
#define ZCL_GET_WEEKDAY_SCHEDULE_COMMAND_ID (0x0C)
#define ZCL_GET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0C)
#define ZCL_CLEAR_WEEKDAY_SCHEDULE_COMMAND_ID (0x0D)
#define ZCL_CLEAR_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0D)
#define ZCL_SET_YEARDAY_SCHEDULE_COMMAND_ID (0x0E)
#define ZCL_SET_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0E)
#define ZCL_GET_YEARDAY_SCHEDULE_COMMAND_ID (0x0F)
#define ZCL_GET_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0F)
#define ZCL_CLEAR_YEARDAY_SCHEDULE_COMMAND_ID (0x10)
#define ZCL_CLEAR_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x10)
#define ZCL_SET_HOLIDAY_SCHEDULE_COMMAND_ID (0x11)
#define ZCL_SET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x11)
#define ZCL_GET_HOLIDAY_SCHEDULE_COMMAND_ID (0x12)
#define ZCL_GET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x12)
#define ZCL_CLEAR_HOLIDAY_SCHEDULE_COMMAND_ID (0x13)
#define ZCL_CLEAR_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x13)
#define ZCL_SET_USER_TYPE_COMMAND_ID (0x14)
#define ZCL_SET_USER_TYPE_RESPONSE_COMMAND_ID (0x14)
#define ZCL_GET_USER_TYPE_COMMAND_ID (0x15)
#define ZCL_GET_USER_TYPE_RESPONSE_COMMAND_ID (0x15)
#define ZCL_SET_RFID_COMMAND_ID (0x16)
#define ZCL_SET_RFID_RESPONSE_COMMAND_ID (0x16)
#define ZCL_GET_RFID_COMMAND_ID (0x17)
#define ZCL_GET_RFID_RESPONSE_COMMAND_ID (0x17)
#define ZCL_CLEAR_RFID_COMMAND_ID (0x18)
#define ZCL_CLEAR_RFID_RESPONSE_COMMAND_ID (0x18)
#define ZCL_CLEAR_ALL_RFIDS_COMMAND_ID (0x19)
#define ZCL_CLEAR_ALL_RFIDS_RESPONSE_COMMAND_ID (0x19)
#define ZCL_OPERATION_EVENT_NOTIFICATION_COMMAND_ID (0x20)
#define ZCL_PROGRAMMING_EVENT_NOTIFICATION_COMMAND_ID (0x21)

// Commands for cluster: Window Covering
#define ZCL_WINDOW_COVERING_UP_OPEN_COMMAND_ID (0x00)
#define ZCL_WINDOW_COVERING_DOWN_CLOSE_COMMAND_ID (0x01)
#define ZCL_WINDOW_COVERING_STOP_COMMAND_ID (0x02)
#define ZCL_WINDOW_COVERING_GO_TO_LIFT_VALUE_COMMAND_ID (0x04)
#define ZCL_WINDOW_COVERING_GO_TO_LIFT_PERCENTAGE_COMMAND_ID (0x05)
#define ZCL_WINDOW_COVERING_GO_TO_TILT_VALUE_COMMAND_ID (0x07)
#define ZCL_WINDOW_COVERING_GO_TO_TILT_PERCENTAGE_COMMAND_ID (0x08)

// Commands for cluster: Barrier Control
#define ZCL_BARRIER_CONTROL_GO_TO_PERCENT_COMMAND_ID (0x00)
#define ZCL_BARRIER_CONTROL_STOP_COMMAND_ID (0x01)

// Commands for cluster: Thermostat
#define ZCL_SETPOINT_RAISE_LOWER_COMMAND_ID (0x00)
#define ZCL_CURRENT_WEEKLY_SCHEDULE_COMMAND_ID (0x00)
#define ZCL_SET_WEEKLY_SCHEDULE_COMMAND_ID (0x01)
#define ZCL_RELAY_STATUS_LOG_COMMAND_ID (0x01)
#define ZCL_GET_WEEKLY_SCHEDULE_COMMAND_ID (0x02)
#define ZCL_CLEAR_WEEKLY_SCHEDULE_COMMAND_ID (0x03)
#define ZCL_GET_RELAY_STATUS_LOG_COMMAND_ID (0x04)

// Commands for cluster: Color Control
#define ZCL_MOVE_TO_HUE_COMMAND_ID (0x00)
#define ZCL_MOVE_HUE_COMMAND_ID (0x01)
#define ZCL_STEP_HUE_COMMAND_ID (0x02)
#define ZCL_MOVE_TO_SATURATION_COMMAND_ID (0x03)
#define ZCL_MOVE_SATURATION_COMMAND_ID (0x04)
#define ZCL_STEP_SATURATION_COMMAND_ID (0x05)
#define ZCL_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID (0x06)
#define ZCL_MOVE_TO_COLOR_COMMAND_ID (0x07)
#define ZCL_MOVE_COLOR_COMMAND_ID (0x08)
#define ZCL_STEP_COLOR_COMMAND_ID (0x09)
#define ZCL_MOVE_TO_COLOR_TEMPERATURE_COMMAND_ID (0x0A)
#define ZCL_ENHANCED_MOVE_TO_HUE_COMMAND_ID (0x40)
#define ZCL_ENHANCED_MOVE_HUE_COMMAND_ID (0x41)
#define ZCL_ENHANCED_STEP_HUE_COMMAND_ID (0x42)
#define ZCL_ENHANCED_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID (0x43)
#define ZCL_COLOR_LOOP_SET_COMMAND_ID (0x44)
#define ZCL_STOP_MOVE_STEP_COMMAND_ID (0x47)
#define ZCL_MOVE_COLOR_TEMPERATURE_COMMAND_ID (0x4B)
#define ZCL_STEP_COLOR_TEMPERATURE_COMMAND_ID (0x4C)

// Commands for cluster: IAS Zone
#define ZCL_ZONE_ENROLL_RESPONSE_COMMAND_ID (0x00)
#define ZCL_ZONE_STATUS_CHANGE_NOTIFICATION_COMMAND_ID (0x00)
#define ZCL_INITIATE_NORMAL_OPERATION_MODE_COMMAND_ID (0x01)
#define ZCL_ZONE_ENROLL_REQUEST_COMMAND_ID (0x01)
#define ZCL_INITIATE_TEST_MODE_COMMAND_ID (0x02)
#define ZCL_INITIATE_NORMAL_OPERATION_MODE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_INITIATE_TEST_MODE_RESPONSE_COMMAND_ID (0x03)

// Commands for cluster: IAS ACE
#define ZCL_ARM_COMMAND_ID (0x00)
#define ZCL_ARM_RESPONSE_COMMAND_ID (0x00)
#define ZCL_BYPASS_COMMAND_ID (0x01)
#define ZCL_GET_ZONE_ID_MAP_RESPONSE_COMMAND_ID (0x01)
#define ZCL_EMERGENCY_COMMAND_ID (0x02)
#define ZCL_GET_ZONE_INFORMATION_RESPONSE_COMMAND_ID (0x02)
#define ZCL_FIRE_COMMAND_ID (0x03)
#define ZCL_ZONE_STATUS_CHANGED_COMMAND_ID (0x03)
#define ZCL_PANIC_COMMAND_ID (0x04)
#define ZCL_PANEL_STATUS_CHANGED_COMMAND_ID (0x04)
#define ZCL_GET_ZONE_ID_MAP_COMMAND_ID (0x05)
#define ZCL_GET_PANEL_STATUS_RESPONSE_COMMAND_ID (0x05)
#define ZCL_GET_ZONE_INFORMATION_COMMAND_ID (0x06)
#define ZCL_SET_BYPASSED_ZONE_LIST_COMMAND_ID (0x06)
#define ZCL_GET_PANEL_STATUS_COMMAND_ID (0x07)
#define ZCL_BYPASS_RESPONSE_COMMAND_ID (0x07)
#define ZCL_GET_BYPASSED_ZONE_LIST_COMMAND_ID (0x08)
#define ZCL_GET_ZONE_STATUS_RESPONSE_COMMAND_ID (0x08)
#define ZCL_GET_ZONE_STATUS_COMMAND_ID (0x09)

// Commands for cluster: IAS WD
#define ZCL_START_WARNING_COMMAND_ID (0x00)
#define ZCL_SQUAWK_COMMAND_ID (0x01)

// Commands for cluster: Generic Tunnel
#define ZCL_MATCH_PROTOCOL_ADDRESS_COMMAND_ID (0x00)
#define ZCL_MATCH_PROTOCOL_ADDRESS_RESPONSE_COMMAND_ID (0x00)
#define ZCL_ADVERTISE_PROTOCOL_ADDRESS_COMMAND_ID (0x01)

// Commands for cluster: BACnet Protocol Tunnel
#define ZCL_TRANSFER_NPDU_COMMAND_ID (0x00)

// Commands for cluster: 11073 Protocol Tunnel
#define ZCL_TRANSFER_APDU_COMMAND_ID (0x00)
#define ZCL_CONNECT_REQUEST_COMMAND_ID (0x01)
#define ZCL_DISCONNECT_REQUEST_COMMAND_ID (0x02)
#define ZCL_CONNECT_STATUS_NOTIFICATION_COMMAND_ID (0x03)

// Commands for cluster: ISO 7816 Protocol Tunnel
#define ZCL_TRANSFER_APDU_COMMAND_ID (0x00)
#define ZCL_INSERT_SMART_CARD_COMMAND_ID (0x01)
#define ZCL_EXTRACT_SMART_CARD_COMMAND_ID (0x02)

// Commands for cluster: Price
#define ZCL_PUBLISH_PRICE_COMMAND_ID (0x00)
#define ZCL_GET_CURRENT_PRICE_COMMAND_ID (0x00)
#define ZCL_PUBLISH_BLOCK_PERIOD_COMMAND_ID (0x01)
#define ZCL_GET_SCHEDULED_PRICES_COMMAND_ID (0x01)
#define ZCL_PUBLISH_CONVERSION_FACTOR_COMMAND_ID (0x02)
#define ZCL_PRICE_ACKNOWLEDGEMENT_COMMAND_ID (0x02)
#define ZCL_PUBLISH_CALORIFIC_VALUE_COMMAND_ID (0x03)
#define ZCL_GET_BLOCK_PERIODS_COMMAND_ID (0x03)
#define ZCL_PUBLISH_TARIFF_INFORMATION_COMMAND_ID (0x04)
#define ZCL_GET_CONVERSION_FACTOR_COMMAND_ID (0x04)
#define ZCL_PUBLISH_PRICE_MATRIX_COMMAND_ID (0x05)
#define ZCL_GET_CALORIFIC_VALUE_COMMAND_ID (0x05)
#define ZCL_PUBLISH_BLOCK_THRESHOLDS_COMMAND_ID (0x06)
#define ZCL_GET_TARIFF_INFORMATION_COMMAND_ID (0x06)
#define ZCL_PUBLISH_CO2_VALUE_COMMAND_ID (0x07)
#define ZCL_GET_PRICE_MATRIX_COMMAND_ID (0x07)
#define ZCL_PUBLISH_TIER_LABELS_COMMAND_ID (0x08)
#define ZCL_GET_BLOCK_THRESHOLDS_COMMAND_ID (0x08)
#define ZCL_PUBLISH_BILLING_PERIOD_COMMAND_ID (0x09)
#define ZCL_GET_CO2_VALUE_COMMAND_ID (0x09)
#define ZCL_PUBLISH_CONSOLIDATED_BILL_COMMAND_ID (0x0A)
#define ZCL_GET_TIER_LABELS_COMMAND_ID (0x0A)
#define ZCL_PUBLISH_CPP_EVENT_COMMAND_ID (0x0B)
#define ZCL_GET_BILLING_PERIOD_COMMAND_ID (0x0B)
#define ZCL_PUBLISH_CREDIT_PAYMENT_COMMAND_ID (0x0C)
#define ZCL_GET_CONSOLIDATED_BILL_COMMAND_ID (0x0C)
#define ZCL_PUBLISH_CURRENCY_CONVERSION_COMMAND_ID (0x0D)
#define ZCL_CPP_EVENT_RESPONSE_COMMAND_ID (0x0D)
#define ZCL_CANCEL_TARIFF_COMMAND_ID (0x0E)
#define ZCL_GET_CREDIT_PAYMENT_COMMAND_ID (0x0E)
#define ZCL_GET_CURRENCY_CONVERSION_COMMAND_COMMAND_ID (0x0F)
#define ZCL_GET_TARIFF_CANCELLATION_COMMAND_ID (0x10)

// Commands for cluster: Demand Response and Load Control
#define ZCL_LOAD_CONTROL_EVENT_COMMAND_ID (0x00)
#define ZCL_REPORT_EVENT_STATUS_COMMAND_ID (0x00)
#define ZCL_CANCEL_LOAD_CONTROL_EVENT_COMMAND_ID (0x01)
#define ZCL_GET_SCHEDULED_EVENTS_COMMAND_ID (0x01)
#define ZCL_CANCEL_ALL_LOAD_CONTROL_EVENTS_COMMAND_ID (0x02)

// Commands for cluster: Simple Metering
#define ZCL_GET_PROFILE_RESPONSE_COMMAND_ID (0x00)
#define ZCL_GET_PROFILE_COMMAND_ID (0x00)
#define ZCL_REQUEST_MIRROR_COMMAND_ID (0x01)
#define ZCL_REQUEST_MIRROR_RESPONSE_COMMAND_ID (0x01)
#define ZCL_REMOVE_MIRROR_COMMAND_ID (0x02)
#define ZCL_MIRROR_REMOVED_COMMAND_ID (0x02)
#define ZCL_REQUEST_FAST_POLL_MODE_RESPONSE_COMMAND_ID (0x03)
#define ZCL_REQUEST_FAST_POLL_MODE_COMMAND_ID (0x03)
#define ZCL_SCHEDULE_SNAPSHOT_RESPONSE_COMMAND_ID (0x04)
#define ZCL_SCHEDULE_SNAPSHOT_COMMAND_ID (0x04)
#define ZCL_TAKE_SNAPSHOT_RESPONSE_COMMAND_ID (0x05)
#define ZCL_TAKE_SNAPSHOT_COMMAND_ID (0x05)
#define ZCL_PUBLISH_SNAPSHOT_COMMAND_ID (0x06)
#define ZCL_GET_SNAPSHOT_COMMAND_ID (0x06)
#define ZCL_GET_SAMPLED_DATA_RESPONSE_COMMAND_ID (0x07)
#define ZCL_START_SAMPLING_COMMAND_ID (0x07)
#define ZCL_CONFIGURE_MIRROR_COMMAND_ID (0x08)
#define ZCL_GET_SAMPLED_DATA_COMMAND_ID (0x08)
#define ZCL_CONFIGURE_NOTIFICATION_SCHEME_COMMAND_ID (0x09)
#define ZCL_MIRROR_REPORT_ATTRIBUTE_RESPONSE_COMMAND_ID (0x09)
#define ZCL_CONFIGURE_NOTIFICATION_FLAGS_COMMAND_ID (0x0A)
#define ZCL_RESET_LOAD_LIMIT_COUNTER_COMMAND_ID (0x0A)
#define ZCL_GET_NOTIFIED_MESSAGE_COMMAND_ID (0x0B)
#define ZCL_CHANGE_SUPPLY_COMMAND_ID (0x0B)
#define ZCL_SUPPLY_STATUS_RESPONSE_COMMAND_ID (0x0C)
#define ZCL_LOCAL_CHANGE_SUPPLY_COMMAND_ID (0x0C)
#define ZCL_START_SAMPLING_RESPONSE_COMMAND_ID (0x0D)
#define ZCL_SET_SUPPLY_STATUS_COMMAND_ID (0x0D)
#define ZCL_SET_UNCONTROLLED_FLOW_THRESHOLD_COMMAND_ID (0x0E)

// Commands for cluster: Messaging
#define ZCL_DISPLAY_MESSAGE_COMMAND_ID (0x00)
#define ZCL_GET_LAST_MESSAGE_COMMAND_ID (0x00)
#define ZCL_CANCEL_MESSAGE_COMMAND_ID (0x01)
#define ZCL_MESSAGE_CONFIRMATION_COMMAND_ID (0x01)
#define ZCL_DISPLAY_PROTECTED_MESSAGE_COMMAND_ID (0x02)
#define ZCL_GET_MESSAGE_CANCELLATION_COMMAND_ID (0x02)
#define ZCL_CANCEL_ALL_MESSAGES_COMMAND_ID (0x03)

// Commands for cluster: Tunneling
#define ZCL_REQUEST_TUNNEL_COMMAND_ID (0x00)
#define ZCL_REQUEST_TUNNEL_RESPONSE_COMMAND_ID (0x00)
#define ZCL_CLOSE_TUNNEL_COMMAND_ID (0x01)
#define ZCL_TRANSFER_DATA_SERVER_TO_CLIENT_COMMAND_ID (0x01)
#define ZCL_TRANSFER_DATA_CLIENT_TO_SERVER_COMMAND_ID (0x02)
#define ZCL_TRANSFER_DATA_ERROR_SERVER_TO_CLIENT_COMMAND_ID (0x02)
#define ZCL_TRANSFER_DATA_ERROR_CLIENT_TO_SERVER_COMMAND_ID (0x03)
#define ZCL_ACK_TRANSFER_DATA_SERVER_TO_CLIENT_COMMAND_ID (0x03)
#define ZCL_ACK_TRANSFER_DATA_CLIENT_TO_SERVER_COMMAND_ID (0x04)
#define ZCL_READY_DATA_SERVER_TO_CLIENT_COMMAND_ID (0x04)
#define ZCL_READY_DATA_CLIENT_TO_SERVER_COMMAND_ID (0x05)
#define ZCL_SUPPORTED_TUNNEL_PROTOCOLS_RESPONSE_COMMAND_ID (0x05)
#define ZCL_GET_SUPPORTED_TUNNEL_PROTOCOLS_COMMAND_ID (0x06)
#define ZCL_TUNNEL_CLOSURE_NOTIFICATION_COMMAND_ID (0x06)

// Commands for cluster: Prepayment
#define ZCL_SELECT_AVAILABLE_EMERGENCY_CREDIT_COMMAND_ID (0x00)
#define ZCL_PUBLISH_PREPAY_SNAPSHOT_COMMAND_ID (0x01)
#define ZCL_CHANGE_DEBT_COMMAND_ID (0x02)
#define ZCL_CHANGE_PAYMENT_MODE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_EMERGENCY_CREDIT_SETUP_COMMAND_ID (0x03)
#define ZCL_CONSUMER_TOP_UP_RESPONSE_COMMAND_ID (0x03)
#define ZCL_CONSUMER_TOP_UP_COMMAND_ID (0x04)
#define ZCL_CREDIT_ADJUSTMENT_COMMAND_ID (0x05)
#define ZCL_PUBLISH_TOP_UP_LOG_COMMAND_ID (0x05)
#define ZCL_CHANGE_PAYMENT_MODE_COMMAND_ID (0x06)
#define ZCL_PUBLISH_DEBT_LOG_COMMAND_ID (0x06)
#define ZCL_GET_PREPAY_SNAPSHOT_COMMAND_ID (0x07)
#define ZCL_GET_TOP_UP_LOG_COMMAND_ID (0x08)
#define ZCL_SET_LOW_CREDIT_WARNING_LEVEL_COMMAND_ID (0x09)
#define ZCL_GET_DEBT_REPAYMENT_LOG_COMMAND_ID (0x0A)
#define ZCL_SET_MAXIMUM_CREDIT_LIMIT_COMMAND_ID (0x0B)
#define ZCL_SET_OVERALL_DEBT_CAP_COMMAND_ID (0x0C)

// Commands for cluster: Energy Management
#define ZCL_REPORT_EVENT_STATUS_COMMAND_ID (0x00)
#define ZCL_MANAGE_EVENT_COMMAND_ID (0x00)

// Commands for cluster: Calendar
#define ZCL_PUBLISH_CALENDAR_COMMAND_ID (0x00)
#define ZCL_GET_CALENDAR_COMMAND_ID (0x00)
#define ZCL_PUBLISH_DAY_PROFILE_COMMAND_ID (0x01)
#define ZCL_GET_DAY_PROFILES_COMMAND_ID (0x01)
#define ZCL_PUBLISH_WEEK_PROFILE_COMMAND_ID (0x02)
#define ZCL_GET_WEEK_PROFILES_COMMAND_ID (0x02)
#define ZCL_PUBLISH_SEASONS_COMMAND_ID (0x03)
#define ZCL_GET_SEASONS_COMMAND_ID (0x03)
#define ZCL_PUBLISH_SPECIAL_DAYS_COMMAND_ID (0x04)
#define ZCL_GET_SPECIAL_DAYS_COMMAND_ID (0x04)
#define ZCL_CANCEL_CALENDAR_COMMAND_ID (0x05)
#define ZCL_GET_CALENDAR_CANCELLATION_COMMAND_ID (0x05)

// Commands for cluster: Device Management
#define ZCL_GET_CHANGE_OF_TENANCY_COMMAND_ID (0x00)
#define ZCL_PUBLISH_CHANGE_OF_TENANCY_COMMAND_ID (0x00)
#define ZCL_GET_CHANGE_OF_SUPPLIER_COMMAND_ID (0x01)
#define ZCL_PUBLISH_CHANGE_OF_SUPPLIER_COMMAND_ID (0x01)
#define ZCL_REQUEST_NEW_PASSWORD_COMMAND_ID (0x02)
#define ZCL_REQUEST_NEW_PASSWORD_RESPONSE_COMMAND_ID (0x02)
#define ZCL_GET_SITE_ID_COMMAND_ID (0x03)
#define ZCL_UPDATE_SITE_ID_COMMAND_ID (0x03)
#define ZCL_REPORT_EVENT_CONFIGURATION_COMMAND_ID (0x04)
#define ZCL_SET_EVENT_CONFIGURATION_COMMAND_ID (0x04)
#define ZCL_GET_CIN_COMMAND_ID (0x05)
#define ZCL_GET_EVENT_CONFIGURATION_COMMAND_ID (0x05)
#define ZCL_UPDATE_CIN_COMMAND_ID (0x06)

// Commands for cluster: Events
#define ZCL_GET_EVENT_LOG_COMMAND_ID (0x00)
#define ZCL_PUBLISH_EVENT_COMMAND_ID (0x00)
#define ZCL_CLEAR_EVENT_LOG_REQUEST_COMMAND_ID (0x01)
#define ZCL_PUBLISH_EVENT_LOG_COMMAND_ID (0x01)
#define ZCL_CLEAR_EVENT_LOG_RESPONSE_COMMAND_ID (0x02)

// Commands for cluster: MDU Pairing
#define ZCL_PAIRING_RESPONSE_COMMAND_ID (0x00)
#define ZCL_PAIRING_REQUEST_COMMAND_ID (0x00)

// Commands for cluster: Sub-GHz
#define ZCL_SUSPEND_ZCL_MESSAGES_COMMAND_ID (0x00)
#define ZCL_GET_SUSPEND_ZCL_MESSAGES_STATUS_COMMAND_ID (0x00)

// Commands for cluster: Key Establishment
#define ZCL_INITIATE_KEY_ESTABLISHMENT_REQUEST_COMMAND_ID (0x00)
#define ZCL_INITIATE_KEY_ESTABLISHMENT_RESPONSE_COMMAND_ID (0x00)
#define ZCL_EPHEMERAL_DATA_REQUEST_COMMAND_ID (0x01)
#define ZCL_EPHEMERAL_DATA_RESPONSE_COMMAND_ID (0x01)
#define ZCL_CONFIRM_KEY_DATA_REQUEST_COMMAND_ID (0x02)
#define ZCL_CONFIRM_KEY_DATA_RESPONSE_COMMAND_ID (0x02)
#define ZCL_TERMINATE_KEY_ESTABLISHMENT_COMMAND_ID (0x03)

// Commands for cluster: Information
#define ZCL_REQUEST_INFORMATION_COMMAND_ID (0x00)
#define ZCL_REQUEST_INFORMATION_RESPONSE_COMMAND_ID (0x00)
#define ZCL_PUSH_INFORMATION_RESPONSE_COMMAND_ID (0x01)
#define ZCL_PUSH_INFORMATION_COMMAND_ID (0x01)
#define ZCL_SEND_PREFERENCE_COMMAND_ID (0x02)
#define ZCL_SEND_PREFERENCE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_REQUEST_PREFERENCE_RESPONSE_COMMAND_ID (0x03)
#define ZCL_SERVER_REQUEST_PREFERENCE_COMMAND_ID (0x03)
#define ZCL_UPDATE_COMMAND_ID (0x04)
#define ZCL_REQUEST_PREFERENCE_CONFIRMATION_COMMAND_ID (0x04)
#define ZCL_DELETE_COMMAND_ID (0x05)
#define ZCL_UPDATE_RESPONSE_COMMAND_ID (0x05)
#define ZCL_CONFIGURE_NODE_DESCRIPTION_COMMAND_ID (0x06)
#define ZCL_DELETE_RESPONSE_COMMAND_ID (0x06)
#define ZCL_CONFIGURE_DELIVERY_ENABLE_COMMAND_ID (0x07)
#define ZCL_CONFIGURE_PUSH_INFORMATION_TIMER_COMMAND_ID (0x08)
#define ZCL_CONFIGURE_SET_ROOT_ID_COMMAND_ID (0x09)

// Commands for cluster: Data Sharing
#define ZCL_READ_FILE_REQUEST_COMMAND_ID (0x00)
#define ZCL_WRITE_FILE_REQUEST_COMMAND_ID (0x00)
#define ZCL_READ_RECORD_REQUEST_COMMAND_ID (0x01)
#define ZCL_MODIFY_FILE_REQUEST_COMMAND_ID (0x01)
#define ZCL_WRITE_FILE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_MODIFY_RECORD_REQUEST_COMMAND_ID (0x02)
#define ZCL_FILE_TRANSMISSION_COMMAND_ID (0x03)
#define ZCL_RECORD_TRANSMISSION_COMMAND_ID (0x04)

// Commands for cluster: Gaming
#define ZCL_SEARCH_GAME_COMMAND_ID (0x00)
#define ZCL_GAME_ANNOUNCEMENT_COMMAND_ID (0x00)
#define ZCL_JOIN_GAME_COMMAND_ID (0x01)
#define ZCL_GENERAL_RESPONSE_COMMAND_ID (0x01)
#define ZCL_START_GAME_COMMAND_ID (0x02)
#define ZCL_PAUSE_GAME_COMMAND_ID (0x03)
#define ZCL_RESUME_GAME_COMMAND_ID (0x04)
#define ZCL_QUIT_GAME_COMMAND_ID (0x05)
#define ZCL_END_GAME_COMMAND_ID (0x06)
#define ZCL_START_OVER_COMMAND_ID (0x07)
#define ZCL_ACTION_CONTROL_COMMAND_ID (0x08)
#define ZCL_DOWNLOAD_GAME_COMMAND_ID (0x09)

// Commands for cluster: Data Rate Control
#define ZCL_PATH_CREATION_COMMAND_ID (0x00)
#define ZCL_DATA_RATE_CONTROL_COMMAND_ID (0x00)
#define ZCL_DATA_RATE_NOTIFICATION_COMMAND_ID (0x01)
#define ZCL_PATH_DELETION_COMMAND_ID (0x02)

// Commands for cluster: Voice over ZigBee
#define ZCL_ESTABLISHMENT_REQUEST_COMMAND_ID (0x00)
#define ZCL_ESTABLISHMENT_RESPONSE_COMMAND_ID (0x00)
#define ZCL_VOICE_TRANSMISSION_COMMAND_ID (0x01)
#define ZCL_VOICE_TRANSMISSION_RESPONSE_COMMAND_ID (0x01)
#define ZCL_VOICE_TRANSMISSION_COMPLETION_COMMAND_ID (0x02)
#define ZCL_CONTROL_COMMAND_ID (0x02)
#define ZCL_CONTROL_RESPONSE_COMMAND_ID (0x03)

// Commands for cluster: Chatting
#define ZCL_JOIN_CHAT_REQUEST_COMMAND_ID (0x00)
#define ZCL_START_CHAT_RESPONSE_COMMAND_ID (0x00)
#define ZCL_LEAVE_CHAT_REQUEST_COMMAND_ID (0x01)
#define ZCL_JOIN_CHAT_RESPONSE_COMMAND_ID (0x01)
#define ZCL_SEARCH_CHAT_REQUEST_COMMAND_ID (0x02)
#define ZCL_USER_LEFT_COMMAND_ID (0x02)
#define ZCL_SWITCH_CHAIRMAN_RESPONSE_COMMAND_ID (0x03)
#define ZCL_USER_JOINED_COMMAND_ID (0x03)
#define ZCL_START_CHAT_REQUEST_COMMAND_ID (0x04)
#define ZCL_SEARCH_CHAT_RESPONSE_COMMAND_ID (0x04)
#define ZCL_CHAT_MESSAGE_COMMAND_ID (0x05)
#define ZCL_SWITCH_CHAIRMAN_REQUEST_COMMAND_ID (0x05)
#define ZCL_GET_NODE_INFORMATION_REQUEST_COMMAND_ID (0x06)
#define ZCL_SWITCH_CHAIRMAN_CONFIRM_COMMAND_ID (0x06)
#define ZCL_SWITCH_CHAIRMAN_NOTIFICATION_COMMAND_ID (0x07)
#define ZCL_GET_NODE_INFORMATION_RESPONSE_COMMAND_ID (0x08)

// Commands for cluster: Payment
#define ZCL_BUY_REQUEST_COMMAND_ID (0x00)
#define ZCL_BUY_CONFIRM_COMMAND_ID (0x00)
#define ZCL_ACCEPT_PAYMENT_COMMAND_ID (0x01)
#define ZCL_RECEIPT_DELIVERY_COMMAND_ID (0x01)
#define ZCL_PAYMENT_CONFIRM_COMMAND_ID (0x02)
#define ZCL_TRANSACTION_END_COMMAND_ID (0x02)

// Commands for cluster: Billing
#define ZCL_SUBSCRIBE_COMMAND_ID (0x00)
#define ZCL_CHECK_BILL_STATUS_COMMAND_ID (0x00)
#define ZCL_UNSUBSCRIBE_COMMAND_ID (0x01)
#define ZCL_SEND_BILL_RECORD_COMMAND_ID (0x01)
#define ZCL_START_BILLING_SESSION_COMMAND_ID (0x02)
#define ZCL_STOP_BILLING_SESSION_COMMAND_ID (0x03)
#define ZCL_BILL_STATUS_NOTIFICATION_COMMAND_ID (0x04)
#define ZCL_SESSION_KEEP_ALIVE_COMMAND_ID (0x05)

// Commands for cluster: Appliance Events and Alert
#define ZCL_GET_ALERTS_COMMAND_ID (0x00)
#define ZCL_GET_ALERTS_RESPONSE_COMMAND_ID (0x00)
#define ZCL_ALERTS_NOTIFICATION_COMMAND_ID (0x01)
#define ZCL_EVENTS_NOTIFICATION_COMMAND_ID (0x02)

// Commands for cluster: Appliance Statistics
#define ZCL_LOG_NOTIFICATION_COMMAND_ID (0x00)
#define ZCL_LOG_REQUEST_COMMAND_ID (0x00)
#define ZCL_LOG_RESPONSE_COMMAND_ID (0x01)
#define ZCL_LOG_QUEUE_REQUEST_COMMAND_ID (0x01)
#define ZCL_LOG_QUEUE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_STATISTICS_AVAILABLE_COMMAND_ID (0x03)

// Commands for cluster: Electrical Measurement
#define ZCL_GET_PROFILE_INFO_RESPONSE_COMMAND_COMMAND_ID (0x00)
#define ZCL_GET_PROFILE_INFO_COMMAND_COMMAND_ID (0x00)
#define ZCL_GET_MEASUREMENT_PROFILE_RESPONSE_COMMAND_COMMAND_ID (0x01)
#define ZCL_GET_MEASUREMENT_PROFILE_COMMAND_COMMAND_ID (0x01)

// Commands for cluster: ZLL Commissioning
#define ZCL_SCAN_REQUEST_COMMAND_ID (0x00)
#define ZCL_SCAN_RESPONSE_COMMAND_ID (0x01)
#define ZCL_DEVICE_INFORMATION_REQUEST_COMMAND_ID (0x02)
#define ZCL_DEVICE_INFORMATION_RESPONSE_COMMAND_ID (0x03)
#define ZCL_IDENTIFY_REQUEST_COMMAND_ID (0x06)
#define ZCL_RESET_TO_FACTORY_NEW_REQUEST_COMMAND_ID (0x07)
#define ZCL_NETWORK_START_REQUEST_COMMAND_ID (0x10)
#define ZCL_NETWORK_START_RESPONSE_COMMAND_ID (0x11)
#define ZCL_NETWORK_JOIN_ROUTER_REQUEST_COMMAND_ID (0x12)
#define ZCL_NETWORK_JOIN_ROUTER_RESPONSE_COMMAND_ID (0x13)
#define ZCL_NETWORK_JOIN_END_DEVICE_REQUEST_COMMAND_ID (0x14)
#define ZCL_NETWORK_JOIN_END_DEVICE_RESPONSE_COMMAND_ID (0x15)
#define ZCL_NETWORK_UPDATE_REQUEST_COMMAND_ID (0x16)
#define ZCL_ENDPOINT_INFORMATION_COMMAND_ID (0x40)
#define ZCL_GET_GROUP_IDENTIFIERS_REQUEST_COMMAND_ID (0x41)
#define ZCL_GET_GROUP_IDENTIFIERS_RESPONSE_COMMAND_ID (0x41)
#define ZCL_GET_ENDPOINT_LIST_REQUEST_COMMAND_ID (0x42)
#define ZCL_GET_ENDPOINT_LIST_RESPONSE_COMMAND_ID (0x42)

// Commands for cluster: Network Commissioning
#define ZCL_SCAN_NETWORKS_COMMAND_ID (0x00)
#define ZCL_SCAN_NETWORKS_RESPONSE_COMMAND_ID (0x01)
#define ZCL_ADD_WI_FI_NETWORK_COMMAND_ID (0x02)
#define ZCL_ADD_WI_FI_NETWORK_RESPONSE_COMMAND_ID (0x03)
#define ZCL_UPDATE_WI_FI_NETWORK_COMMAND_ID (0x04)
#define ZCL_UPDATE_WI_FI_NETWORK_RESPONSE_COMMAND_ID (0x05)
#define ZCL_ADD_THREAD_NETWORK_COMMAND_ID (0x06)
#define ZCL_ADD_THREAD_NETWORK_RESPONSE_COMMAND_ID (0x07)
#define ZCL_UPDATE_THREAD_NETWORK_COMMAND_ID (0x08)
#define ZCL_UPDATE_THREAD_NETWORK_RESPONSE_COMMAND_ID (0x09)
#define ZCL_REMOVE_NETWORK_COMMAND_ID (0x0A)
#define ZCL_REMOVE_NETWORK_RESPONSE_COMMAND_ID (0x0B)
#define ZCL_ENABLE_NETWORK_COMMAND_ID (0x0C)
#define ZCL_ENABLE_NETWORK_RESPONSE_COMMAND_ID (0x0D)
#define ZCL_DISABLE_NETWORK_COMMAND_ID (0x0E)
#define ZCL_DISABLE_NETWORK_RESPONSE_COMMAND_ID (0x0F)
#define ZCL_GET_LAST_NETWORK_COMMISSIONING_RESULT_COMMAND_ID (0x10)

// Commands for cluster: Binding
#define ZCL_BIND_COMMAND_ID (0x00)
#define ZCL_UNBIND_COMMAND_ID (0x01)

// Commands for cluster: Media Playback
#define ZCL_PLAY_REQUEST_COMMAND_ID (0x00)
#define ZCL_PLAYBACK_COMMAND_ID (0x00)
#define ZCL_PAUSE_REQUEST_COMMAND_ID (0x01)
#define ZCL_STOP_REQUEST_COMMAND_ID (0x02)
#define ZCL_START_OVER_REQUEST_COMMAND_ID (0x03)
#define ZCL_PREVIOUS_REQUEST_COMMAND_ID (0x04)
#define ZCL_NEXT_REQUEST_COMMAND_ID (0x05)
#define ZCL_REWIND_REQUEST_COMMAND_ID (0x06)
#define ZCL_FAST_FORWARD_REQUEST_COMMAND_ID (0x07)
#define ZCL_SKIP_FORWARD_REQUEST_COMMAND_ID (0x08)
#define ZCL_SKIP_BACKWARD_REQUEST_COMMAND_ID (0x09)

// Commands for cluster: Content Launch
#define ZCL_LAUNCH_CONTENT_COMMAND_ID (0x00)
#define ZCL_LAUNCH_CONTENT_RESPONSE_COMMAND_ID (0x00)
#define ZCL_LAUNCH_URL_COMMAND_ID (0x01)
#define ZCL_LAUNCH_URL_RESPONSE_COMMAND_ID (0x01)

// Commands for cluster: Sample Mfg Specific Cluster
#define ZCL_COMMAND_ONE_COMMAND_ID (0x00)

// Commands for cluster: Sample Mfg Specific Cluster 2
#define ZCL_COMMAND_TWO_COMMAND_ID (0x00)

// Commands for cluster: Configuration Cluster
#define ZCL_SET_TOKEN_COMMAND_ID (0x00)
#define ZCL_RETURN_TOKEN_COMMAND_ID (0x00)
#define ZCL_LOCK_TOKENS_COMMAND_ID (0x01)
#define ZCL_READ_TOKENS_COMMAND_ID (0x02)
#define ZCL_UNLOCK_TOKENS_COMMAND_ID (0x03)

// Commands for cluster: MFGLIB Cluster
#define ZCL_STREAM_COMMAND_ID (0x00)
#define ZCL_TONE_COMMAND_ID (0x01)
#define ZCL_RX_MODE_COMMAND_ID (0x02)

// Commands for cluster: SL Works With All Hubs
#define ZCL_ENABLE_APS_LINK_KEY_AUTHORIZATION_COMMAND_ID (0x00)
#define ZCL_APS_LINK_KEY_AUTHORIZATION_QUERY_RESPONSE_COMMAND_ID (0x00)
#define ZCL_DISABLE_APS_LINK_KEY_AUTHORIZATION_COMMAND_ID (0x01)
#define ZCL_POWERING_OFF_NOTIFICATION_COMMAND_ID (0x01)
#define ZCL_APS_LINK_KEY_AUTHORIZATION_QUERY_COMMAND_ID (0x02)
#define ZCL_POWERING_ON_NOTIFICATION_COMMAND_ID (0x02)
#define ZCL_REQUEST_NEW_APS_LINK_KEY_COMMAND_ID (0x03)
#define ZCL_SHORT_ADDRESS_CHANGE_COMMAND_ID (0x03)
#define ZCL_ENABLE_WWAH_APP_EVENT_RETRY_ALGORITHM_COMMAND_ID (0x04)
#define ZCL_APS_ACK_ENABLEMENT_QUERY_RESPONSE_COMMAND_ID (0x04)
#define ZCL_DISABLE_WWAH_APP_EVENT_RETRY_ALGORITHM_COMMAND_ID (0x05)
#define ZCL_POWER_DESCRIPTOR_CHANGE_COMMAND_ID (0x05)
#define ZCL_REQUEST_TIME_COMMAND_ID (0x06)
#define ZCL_NEW_DEBUG_REPORT_NOTIFICATION_COMMAND_ID (0x06)
#define ZCL_ENABLE_WWAH_REJOIN_ALGORITHM_COMMAND_ID (0x07)
#define ZCL_DEBUG_REPORT_QUERY_RESPONSE_COMMAND_ID (0x07)
#define ZCL_DISABLE_WWAH_REJOIN_ALGORITHM_COMMAND_ID (0x08)
#define ZCL_TRUST_CENTER_FOR_CLUSTER_SERVER_QUERY_RESPONSE_COMMAND_ID (0x08)
#define ZCL_SET_IAS_ZONE_ENROLLMENT_METHOD_COMMAND_ID (0x09)
#define ZCL_SURVEY_BEACONS_RESPONSE_COMMAND_ID (0x09)
#define ZCL_CLEAR_BINDING_TABLE_COMMAND_ID (0x0A)
#define ZCL_ENABLE_PERIODIC_ROUTER_CHECK_INS_COMMAND_ID (0x0B)
#define ZCL_DISABLE_PERIODIC_ROUTER_CHECK_INS_COMMAND_ID (0x0C)
#define ZCL_SET_MAC_POLL_FAILURE_WAIT_TIME_COMMAND_ID (0x0D)
#define ZCL_SET_PENDING_NETWORK_UPDATE_COMMAND_ID (0x0E)
#define ZCL_REQUIRE_APS_ACKS_ON_UNICASTS_COMMAND_ID (0x0F)
#define ZCL_REMOVE_APS_ACKS_ON_UNICASTS_REQUIREMENT_COMMAND_ID (0x10)
#define ZCL_APS_ACK_REQUIREMENT_QUERY_COMMAND_ID (0x11)
#define ZCL_DEBUG_REPORT_QUERY_COMMAND_ID (0x12)
#define ZCL_SURVEY_BEACONS_COMMAND_ID (0x13)
#define ZCL_DISABLE_OTA_DOWNGRADES_COMMAND_ID (0x14)
#define ZCL_DISABLE_MGMT_LEAVE_WITHOUT_REJOIN_COMMAND_ID (0x15)
#define ZCL_DISABLE_TOUCHLINK_INTERPAN_MESSAGE_SUPPORT_COMMAND_ID (0x16)
#define ZCL_ENABLE_WWAH_PARENT_CLASSIFICATION_COMMAND_ID (0x17)
#define ZCL_DISABLE_WWAH_PARENT_CLASSIFICATION_COMMAND_ID (0x18)
#define ZCL_ENABLE_TC_SECURITY_ON_NTWK_KEY_ROTATION_COMMAND_ID (0x19)
#define ZCL_ENABLE_WWAH_BAD_PARENT_RECOVERY_COMMAND_ID (0x1A)
#define ZCL_DISABLE_WWAH_BAD_PARENT_RECOVERY_COMMAND_ID (0x1B)
#define ZCL_ENABLE_CONFIGURATION_MODE_COMMAND_ID (0x1C)
#define ZCL_DISABLE_CONFIGURATION_MODE_COMMAND_ID (0x1D)
#define ZCL_USE_TRUST_CENTER_FOR_CLUSTER_SERVER_COMMAND_ID (0x1E)
#define ZCL_TRUST_CENTER_FOR_CLUSTER_SERVER_QUERY_COMMAND_ID (0x1F)
#define ZCL_USE_TRUST_CENTER_FOR_CLUSTER_SERVER_RESPONSE_COMMAND_ID (0x9E)
