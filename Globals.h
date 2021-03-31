//
//  Globals.h
//  BacTrack_Demo
//
//  Created by Kevin Johnson, Punch Through Design on 9/11/12.
//  Copyright (c) 2012 KHN Solutions LLC. All rights reserved.
//

#ifdef DEBUG
#   define NSLog(...) NSLog(__VA_ARGS__)
#else
#   define NSLog(...)
#endif

typedef NS_ENUM(NSInteger, BACtrackDeviceType) {
	BACtrackDeviceType_Mobile = 0,
	BACtrackDeviceType_Vio,
    BACtrackDeviceType_C6,
    BACtrackDeviceType_C8,
    BACtrackDeviceType_Skyn,
    BACtrackDeviceType_MobileV2,
    BACtrackDeviceType_Unknown,
    BACtrackDeviceType_SkynBackground,  // This reports its type as Skyn once discovered
};

typedef enum {
    BACtrackUnit_bac,
    BACtrackUnit_mgL,
    BACtrackUnit_permille,
    BACtrackUnit_permilleByMass,
    BACtrackUnit_mg
} BACtrackUnit;


#define SIMPLE_GATT_SERVICE_READ_LEN                    6

// Universal Services
#define GLOBAL_BACTRACK_SERVICE_BATTERY @"180F"
#define GLOBAL_BACTRACK_SERVICE_VERSIONS  @"180A"

// DATech Services
#define MOBILE__BACTRACK_SERVICE_ONE     @"FFF0"
#define MOBILE__BACTRACK_SERVICE_TWO     @"FFA0"

// VIO Services
#define VIO_BACTRACK_SERVICE_ONE                  @"0xCD06FD00-4AFF-11E3-8F96-0800200C9A66"

// VIO Characteristics
#define VIO_BACTRACK_CHARACTERISTIC_SERIAL_TRANSMIT   @"0xCD06FD03-4AFF-11E3-8F96-0800200C9A66"
#define VIO_BACTRACK_CHARACTERISTIC_SERIAL_RECEIVE    @"0xCD06FD04-4AFF-11E3-8F96-0800200C9A66"


// Serial Protocol
#define SERIAL_PROTOCOL_SOP                                  @"1002"
#define SERIAL_PROTOCOL_EOP                                  @"1017"

#define C6_ADVERTISED_SERVICE_UUID @"d12eFFF0-1243-47a9-952c-f962382d49bb"
#define C6_SERIAL_GATT_SERVICE_UUID @"862BFFF0-7D59-4359-8B59-A96DB28BC679"
#define C6_SERIAL_GATT_CHAR_UUID @"862BFFF1-7D59-4359-8B59-A96DB28BC679"

// Mobile V2
// IMPORTANT: The Skyn's TX/RX are from the vantage point of the app, whereas the
// MobileV2's TX/RX are from the point of view of the device. So, we write to RX
// and read from TX.
#define MOBILEV2_ADVERTISED_SERVICE_UUID @"3CAA0001-0060-4787-9DA2-533C53B399A0"
#define MOBILEV2_BREATH_SERVICE_UUID @"3CAA0001-0060-4787-9DA2-533C53B399A0"
#define MOBILEV2_GENERIC_SERVICE_UUID @"3CAA1001-0060-4787-9DA2-533C53B399A0"
#define MOBILEV2_BREATH_GATT_TX_CHAR_UUID @"3CAA0003-0060-4787-9DA2-533C53B399A0"
#define MOBILEV2_BREATH_GATT_RX_CHAR_UUID @"3CAA0002-0060-4787-9DA2-533C53B399A0"
#define MOBILEV2_GENERIC_GATT_TX_CHAR_UUID @"3CAA1003-0060-4787-9DA2-533C53B399A0"
#define MOBILEV2_GENERIC_GATT_RX_CHAR_UUID @"3CAA1002-0060-4787-9DA2-533C53B399A0"

// Skyn Protocol
#define SKYN_ADVERTISED_SERVICE_UUID        @"e8f90001-0708-430d-93c2-37a17a6191fc"
#define SKYN_ADVERTISED_SYNC_SERVICE_UUID   @"e8f90002-0708-430d-93c2-37a17a6191fc"
#define SKYN_SERIAL_GATT_SERVICE_UUID       @"e8f90001-0708-430d-93c2-37a17a6191fc"
#define SKYN_SERIAL_GATT_TX_CHAR_UUID       @"e8f90002-0708-430d-93c2-37a17a6191fc"
#define SKYN_SERIAL_GATT_RX_CHAR_UUID       @"e8f90003-0708-430d-93c2-37a17a6191fc"


// Characteristics
#define GLOBAL_BACTRACK_CHARACTERISTIC_TRANSMIT    @"FFA1"
#define GLOBAL_BACTRACK_CHARACTERISTIC_RECEIVE     @"FFA2"


#define GLOBAL_BACTRACK_CHARACTERISTIC_MODEL       @"2A24"
#define GLOBAL_BACTRACK_CHARACTERISTIC_BATTERY     @"2A19"
#define GLOBAL_BACTRACK_CHARACTERISTIC_HARDWARE_VERSION @"2A27"
#define GLOBAL_BACTRACK_CHARACTERISTIC_FIRMWARE_VERSION @"2A26"
#define GLOBAL_BACTRACK_CHARACTERISTIC_SOFTWARE_VERSION @"2A28"

#define GLOBAL_BACTRACK_CHARACTERISTIC_SHUTDOWN    @"FFF3"

#define GLOBAL_BACTRACK_CHARACTERISTIC_COUNTDOWN_NOTIFY  @"FFF5"

#define GLOBAL_CHARACTERISTIC_LED_ONE             @"FFF6"
#define GLOBAL_CHARACTERISTIC_LED_TWO             @"FFF7"
#define GLOBAL_CHARACTERISTIC_PULSE_LED           @"FFF8"

#define GLOBAL_CHARACTERISTIC_SERIAL               @"2A25"
#define GLOBAL_CHARACTERISTIC_PROTECTION           @"FFF9"
#define GLOBAL_CHARACTERISTIC_ADVERTISING          @"FFFA"
#define GLOBAL_CHARACTERISTIC_RESET_TIMEOUT        @"FFFB"
#define GLOBAL_CHARACTERISTIC_CALIBRATION_RESULTS  @"FFFC"
#define GLOBAL_CHARACTERISTIC_POWER_MANGEMENT      @"FFFD"
#define GLOBAL_CHARACTERISTIC_TRANSMIT_POWER       @"FFFE"
#define GLOBAL_CHARACTERISTIC_BLOW_COUNT           @"FFFF"

#define GLOBAL_BACTRACK_SERVICE_OAD                @"0xF000FFC0-0451-4000-B000-000000000000"
#define GLOBAL_CHARACTERISTIC_OAD_ONE              @"0xF000FFC1-0451-4000-B000-000000000000"
#define GLOBAL_CHARACTERISTIC_OAD_TWO              @"0xF000FFC2-0451-4000-B000-000000000000"
#define GLOBAL_CHARACTERISTIC_OAD_IDENTIFY         @"F000FFC1-0451-4000-B000-000000000000"
#define GLOBAL_CHARACTERISTIC_OAD_BLOCK            @"F000FFC2-0451-4000-B000-000000000000"
#define GLOBAL_CHARACTERISTIC_OAD_COUNT            @"F000FFC3-0451-4000-B000-000000000000"
#define GLOBAL_CHARACTERISTIC_OAD_STATUS           @"F000FFC4-0451-4000-B000-000000000000"


#define MOBILE__SOF                                  0x02
#define MOBILE__EOF                                  0xE0

#define MOBILE__COMMAND_RECEIVE_ACK                  0xA0
#define MOBILE__COMMAND_RECEIVE_NACK                 0xB0
#define MOBILE__COMMAND_RECEIVE_STATUS               0x81
#define MOBILE__COMMAND_RECEIVE_ERROR                0x82
#define MOBILE__COMMAND_RECEIVE_BLOW_SETTING         0x83
#define MOBILE__COMMAND_RECEIVE_USE_COUNT            0x85
#define MOBILE__COMMAND_RECEIVE_CALIBRATION_STATUS   0xA1
#define MOBILE__COMMAND_RECEIVE_CALIBRATION_RESULTS_V2  0xA2
#define MOBILE__COMMAND_RECEIVE_CALIBRATION_RESULTS  0xA3
#define MOBILE__COMMAND_TRANSMIT_POWERSTATE          0x72
#define MOBILE__COMMAND_TRANSMIT_BLOWSETTING_READ    0x73
#define MOBILE__COMMAND_TRANSMIT_BLOWSETTING_SET     0x74
#define MOBILE__COMMAND_TRANSMIT_REQUEST_USE_COUNT   0x75
#define MOBILE__COMMAND_TRANSMIT_CALIBRATION_START   0x90
#define MOBILE__COMMAND_TRANSMIT_CALIBRATION_READ    0x91
#define MOBILE__COMMAND_TRANSMIT_FACTORY_RESET       0x92

#define MOBILE__COMMAND_TRANSMIT_CHARACTERISTIC_SIZE                 20
#define MOBILE__COMMAND_RECEIVE_CHARACTERISTIC_SIZE                  20

#define MOBILE__COMMAND_RECEIVE_STATUS_DATALENGTH                    9
#define MOBILE__COMMAND_RECEIVE_ERROR_DATALENGTH                     2
#define MOBILE__COMMAND_RECEIVE_BLOW_SETTING_DATALENGTH              2
#define MOBILE__COMMAND_RECEIVE_USE_COUNT_DATALENGTH                 4
#define MOBILE__COMMAND_RECEIVE_CALIBRATION_STATUS_DATALENGTH        3
#define MOBILE__COMMAND_RECEIVE_CALIBRATION_RESULTS_DATALENGTH       3  
#define MOBILE__COMMAND_TRANSMIT_POWERSTATE_DATALENGTH               1
#define MOBILE__COMMAND_TRANSMIT_BLOWSETTING_READ_DATALENGTH         1
#define MOBILE__COMMAND_TRANSMIT_BLOWSETTING_SET_DATALENGTH          2
#define MOBILE__COMMAND_TRANSMIT_REQUEST_USE_COUNT_DATALENGTH        0
#define MOBILE__COMMAND_TRANSMIT_CALIBRATION_START_DATALENGTH        0
#define MOBILE__COMMAND_TRANSMIT_CALIBRATION_READ_DATALENGTH         0
#define MOBILE__COMMAND_TRANSMIT_FACTORY_RESET_DATALENGTH            0

 
#define MOBILE__STATUS_COUNT                     0x01
#define MOBILE__STATUS_START                     0x02
#define MOBILE__STATUS_BLOW                      0x03
#define MOBILE__STATUS_ANALYZING                 0x04
#define MOBILE__STATUS_RESULT                    0x05

#define MOBILE__ERROR_TIME_OUT                   0x01
#define MOBILE__ERROR_BLOW_ERROR                 0x02
#define MOBILE__ERROR_OUT_OF_TEMPERATURE         0x03
#define MOBILE__ERROR_LOW_BATTERY                0x04
#define MOBILE__ERROR_CALIBRATION_FAIL           0x05
#define MOBILE__ERROR_NOT_CALIBRATED             0x06
#define MOBILE__ERROR_COM_ERROR                  0x07
#define MOBILE__ERROR_INFLOW_ERROR               0x08
#define MOBILE__ERROR_SOLENOID_ERROR             0x09
#define ERROR_SENSOR                            0x0a
#define ERROR_BAC_UPPER_LIMIT                   0x0b

#define MOBILE__ERROR_TEMPERATURE_HIGH           0x01
#define MOBILE__ERROR_TEMPERATURE_LOW            0x02

#define MOBILE__POWERSTATE_ON                    0x01
#define MOBILE__POWERSTATE_OFF                   0x02
#define MOBILE__POWERSTATE_RESTART               0x03

#define MOBILE__BLOWSETTING_TIME                 0x01
#define MOBILE__BLOWSETTING_LEVEL                0x02

#define MOBILE__BLOWSETTING_TIME_3SEC            0x03
#define MOBILE__BLOWSETTING_TIME_4SEC            0x04
#define MOBILE__BLOWSETTING_TIME_5SEC            0x05

#define MOBILE__BLOWSETTING_LEVEL_LOW            0x01
#define MOBILE__BLOWSETTING_LEVEL_HIGH           0x02

#define MOBILE__BATTERYLEVEL_EMPTY               0x01
#define MOBILE__BATTERYLEVEL_1                   0x02
#define MOBILE__BATTERYLEVEL_2                   0x03
#define MOBILE__BATTERYLEVEL_FULL                0x04

#define MOBILE__CALIBRATION_RESULTS_STEP_FIRST_LOW           0x01
#define MOBILE__CALIBRATION_RESULTS_STEP_SECOND_LOW          0x02

#define MOBILE__CALIBRATION_RESULTS_STATUS_COUNT                0x01
#define MOBILE__CALIBRATION_RESULTS_STATUS_START                0x02
#define MOBILE__CALIBRATION_RESULTS_STATUS_BLOW                 0x03
#define MOBILE__CALIBRATION_RESULTS_STATUS_ANALYZING            0x04
#define MOBILE__CALIBRATION_RESULTS_STATUS_TIMEOUT              0x05
#define MOBILE__CALIBRATION_RESULTS_STATUS_BLOW_ERROR           0x06

#define MOBILE__CALIBRATION_STATE_STATUS_COUNT               0x01
#define MOBILE__CALIBRATION_STATE_STATUS_START               0x02
#define MOBILE__CALIBRATION_STATE_STATUS_BLOW                0x03
#define MOBILE__CALIBRATION_STATE_STATUS_ANALYZING           0x04
#define MOBILE__CALIBRATION_STATE_STATUS_SUCCESS             0x05

#define READ_PERSISTENT_SETTING                              0x05
#define WRITE_PERSISTENT_SETTING                             0x06
#define UNITS_SETTING_ID                                     0x09
#define USECOUNT_SETTING_ID                                  0x0A

#define SKYN_INSUFFICIENT_AUTH_ERROR                         0x05

// Key names for batch result dictionary

#define SKYN_RESULT_KEY_RECORDS                 @"records"
#define SKYN_RESULT_KEY_RECORDCOUNT             @"record_count"

#define SKYN_RESULT_KEY_RECORD_TYPE             @"record_type"

#define SKYN_RESULT_KEY_SAMPLE_POINTS           @"sample_points"

// A sensor chunk is a contiguous run of sensor data beginning at a given timestamp
// and defined by equidistant points
#define SKYN_RECORD_TYPE_SENSORCHUNK            @"sensor_chunk"


#define SKYN_RESULT_KEY_CALIBRATION             @"calibration_points"
#define SKYN_RESULT_KEY_CALIBRATION_VERSION     @"version"
#define SKYN_RESULT_KEY_CALIBRATION_LOW         @"low_point"
#define SKYN_RESULT_KEY_CALIBRATION_HIGH        @"high_point"
#define SKYN_RESULT_KEY_CALIBRATION_CONCENTRATION_LOW @"concentration_low"
#define SKYN_RESULT_KEY_CALIBRATION_CONCENTRATION_HIGH @"concentration_high"

#define SKYN_RECORD_TYPE_TIMINGINFO             @"timing_info"
#define SKYN_RESULT_KEY_TIMESTAMP               @"timestamp"
#define SKYN_RESULT_KEY_SAMPLERATE              @"samplerate"

#define SKYN_RECORD_TYPE_EVENT                  @"event"
// Also uses SKYN_RESULT_KEY_TIMESTAMP
#define SKYN_RESULT_KEY_EVENT_CODE              @"event_code"
#define SKYN_RESULT_KEY_EVENT_PAYLOAD           @"event_payload"

#define SKYN_RESULT_KEY_FIRMWARE                @"firmware"




