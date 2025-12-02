#pragma once
// MESSAGE SIMBA_IMU PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_SIMBA_IMU 71


typedef struct __mavlink_simba_imu_t {
 uint64_t timestamp; /*<  Timestamp [ms]*/
 int32_t altitude; /*<  Altitude (scaled) [cm]*/
 int16_t acc_x; /*<  Acceleration X (scaled)*/
 int16_t acc_y; /*<  Acceleration Y (scaled)*/
 int16_t acc_z; /*<  Acceleration Z (scaled)*/
 int16_t gyro_x; /*<  Gyroscope X (scaled)*/
 int16_t gyro_y; /*<  Gyroscope Y (scaled)*/
 int16_t gyro_z; /*<  Gyroscope Z (scaled)*/
 int16_t roll; /*<  Roll angle (scaled)*/
 int16_t pitch; /*<  Pitch angle (scaled)*/
 int16_t yaw; /*<  Yaw angle (scaled)*/
} mavlink_simba_imu_t;

#define MAVLINK_MSG_ID_SIMBA_IMU_LEN 30
#define MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN 30
#define MAVLINK_MSG_ID_71_LEN 30
#define MAVLINK_MSG_ID_71_MIN_LEN 30

#define MAVLINK_MSG_ID_SIMBA_IMU_CRC 171
#define MAVLINK_MSG_ID_71_CRC 171



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_IMU { \
    71, \
    "SIMBA_IMU", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_imu_t, timestamp) }, \
         { "acc_x", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_simba_imu_t, acc_x) }, \
         { "acc_y", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_simba_imu_t, acc_y) }, \
         { "acc_z", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_simba_imu_t, acc_z) }, \
         { "gyro_x", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_simba_imu_t, gyro_x) }, \
         { "gyro_y", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_simba_imu_t, gyro_y) }, \
         { "gyro_z", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_simba_imu_t, gyro_z) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_simba_imu_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_simba_imu_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_simba_imu_t, yaw) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_simba_imu_t, altitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_IMU { \
    "SIMBA_IMU", \
    11, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_simba_imu_t, timestamp) }, \
         { "acc_x", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_simba_imu_t, acc_x) }, \
         { "acc_y", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_simba_imu_t, acc_y) }, \
         { "acc_z", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_simba_imu_t, acc_z) }, \
         { "gyro_x", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_simba_imu_t, gyro_x) }, \
         { "gyro_y", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_simba_imu_t, gyro_y) }, \
         { "gyro_z", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_simba_imu_t, gyro_z) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_simba_imu_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_simba_imu_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_simba_imu_t, yaw) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_simba_imu_t, altitude) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_imu message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp [ms]
 * @param acc_x  Acceleration X (scaled)
 * @param acc_y  Acceleration Y (scaled)
 * @param acc_z  Acceleration Z (scaled)
 * @param gyro_x  Gyroscope X (scaled)
 * @param gyro_y  Gyroscope Y (scaled)
 * @param gyro_z  Gyroscope Z (scaled)
 * @param roll  Roll angle (scaled)
 * @param pitch  Pitch angle (scaled)
 * @param yaw  Yaw angle (scaled)
 * @param altitude  Altitude (scaled) [cm]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_imu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, int16_t acc_x, int16_t acc_y, int16_t acc_z, int16_t gyro_x, int16_t gyro_y, int16_t gyro_z, int16_t roll, int16_t pitch, int16_t yaw, int32_t altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_IMU_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 12, acc_x);
    _mav_put_int16_t(buf, 14, acc_y);
    _mav_put_int16_t(buf, 16, acc_z);
    _mav_put_int16_t(buf, 18, gyro_x);
    _mav_put_int16_t(buf, 20, gyro_y);
    _mav_put_int16_t(buf, 22, gyro_z);
    _mav_put_int16_t(buf, 24, roll);
    _mav_put_int16_t(buf, 26, pitch);
    _mav_put_int16_t(buf, 28, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
#else
    mavlink_simba_imu_t packet;
    packet.timestamp = timestamp;
    packet.altitude = altitude;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.gyro_x = gyro_x;
    packet.gyro_y = gyro_y;
    packet.gyro_z = gyro_z;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_IMU;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
}

/**
 * @brief Pack a simba_imu message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp [ms]
 * @param acc_x  Acceleration X (scaled)
 * @param acc_y  Acceleration Y (scaled)
 * @param acc_z  Acceleration Z (scaled)
 * @param gyro_x  Gyroscope X (scaled)
 * @param gyro_y  Gyroscope Y (scaled)
 * @param gyro_z  Gyroscope Z (scaled)
 * @param roll  Roll angle (scaled)
 * @param pitch  Pitch angle (scaled)
 * @param yaw  Yaw angle (scaled)
 * @param altitude  Altitude (scaled) [cm]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_imu_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, int16_t acc_x, int16_t acc_y, int16_t acc_z, int16_t gyro_x, int16_t gyro_y, int16_t gyro_z, int16_t roll, int16_t pitch, int16_t yaw, int32_t altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_IMU_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 12, acc_x);
    _mav_put_int16_t(buf, 14, acc_y);
    _mav_put_int16_t(buf, 16, acc_z);
    _mav_put_int16_t(buf, 18, gyro_x);
    _mav_put_int16_t(buf, 20, gyro_y);
    _mav_put_int16_t(buf, 22, gyro_z);
    _mav_put_int16_t(buf, 24, roll);
    _mav_put_int16_t(buf, 26, pitch);
    _mav_put_int16_t(buf, 28, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
#else
    mavlink_simba_imu_t packet;
    packet.timestamp = timestamp;
    packet.altitude = altitude;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.gyro_x = gyro_x;
    packet.gyro_y = gyro_y;
    packet.gyro_z = gyro_z;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_IMU;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
#endif
}

/**
 * @brief Pack a simba_imu message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Timestamp [ms]
 * @param acc_x  Acceleration X (scaled)
 * @param acc_y  Acceleration Y (scaled)
 * @param acc_z  Acceleration Z (scaled)
 * @param gyro_x  Gyroscope X (scaled)
 * @param gyro_y  Gyroscope Y (scaled)
 * @param gyro_z  Gyroscope Z (scaled)
 * @param roll  Roll angle (scaled)
 * @param pitch  Pitch angle (scaled)
 * @param yaw  Yaw angle (scaled)
 * @param altitude  Altitude (scaled) [cm]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_imu_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,int16_t acc_x,int16_t acc_y,int16_t acc_z,int16_t gyro_x,int16_t gyro_y,int16_t gyro_z,int16_t roll,int16_t pitch,int16_t yaw,int32_t altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_IMU_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 12, acc_x);
    _mav_put_int16_t(buf, 14, acc_y);
    _mav_put_int16_t(buf, 16, acc_z);
    _mav_put_int16_t(buf, 18, gyro_x);
    _mav_put_int16_t(buf, 20, gyro_y);
    _mav_put_int16_t(buf, 22, gyro_z);
    _mav_put_int16_t(buf, 24, roll);
    _mav_put_int16_t(buf, 26, pitch);
    _mav_put_int16_t(buf, 28, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
#else
    mavlink_simba_imu_t packet;
    packet.timestamp = timestamp;
    packet.altitude = altitude;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.gyro_x = gyro_x;
    packet.gyro_y = gyro_y;
    packet.gyro_z = gyro_z;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_IMU;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
}

/**
 * @brief Encode a simba_imu struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_imu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_imu_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_imu_t* simba_imu)
{
    return mavlink_msg_simba_imu_pack(system_id, component_id, msg, simba_imu->timestamp, simba_imu->acc_x, simba_imu->acc_y, simba_imu->acc_z, simba_imu->gyro_x, simba_imu->gyro_y, simba_imu->gyro_z, simba_imu->roll, simba_imu->pitch, simba_imu->yaw, simba_imu->altitude);
}

/**
 * @brief Encode a simba_imu struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_imu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_imu_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_imu_t* simba_imu)
{
    return mavlink_msg_simba_imu_pack_chan(system_id, component_id, chan, msg, simba_imu->timestamp, simba_imu->acc_x, simba_imu->acc_y, simba_imu->acc_z, simba_imu->gyro_x, simba_imu->gyro_y, simba_imu->gyro_z, simba_imu->roll, simba_imu->pitch, simba_imu->yaw, simba_imu->altitude);
}

/**
 * @brief Encode a simba_imu struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_imu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_imu_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_imu_t* simba_imu)
{
    return mavlink_msg_simba_imu_pack_status(system_id, component_id, _status, msg,  simba_imu->timestamp, simba_imu->acc_x, simba_imu->acc_y, simba_imu->acc_z, simba_imu->gyro_x, simba_imu->gyro_y, simba_imu->gyro_z, simba_imu->roll, simba_imu->pitch, simba_imu->yaw, simba_imu->altitude);
}

/**
 * @brief Send a simba_imu message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Timestamp [ms]
 * @param acc_x  Acceleration X (scaled)
 * @param acc_y  Acceleration Y (scaled)
 * @param acc_z  Acceleration Z (scaled)
 * @param gyro_x  Gyroscope X (scaled)
 * @param gyro_y  Gyroscope Y (scaled)
 * @param gyro_z  Gyroscope Z (scaled)
 * @param roll  Roll angle (scaled)
 * @param pitch  Pitch angle (scaled)
 * @param yaw  Yaw angle (scaled)
 * @param altitude  Altitude (scaled) [cm]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_imu_send(mavlink_channel_t chan, uint64_t timestamp, int16_t acc_x, int16_t acc_y, int16_t acc_z, int16_t gyro_x, int16_t gyro_y, int16_t gyro_z, int16_t roll, int16_t pitch, int16_t yaw, int32_t altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_IMU_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 12, acc_x);
    _mav_put_int16_t(buf, 14, acc_y);
    _mav_put_int16_t(buf, 16, acc_z);
    _mav_put_int16_t(buf, 18, gyro_x);
    _mav_put_int16_t(buf, 20, gyro_y);
    _mav_put_int16_t(buf, 22, gyro_z);
    _mav_put_int16_t(buf, 24, roll);
    _mav_put_int16_t(buf, 26, pitch);
    _mav_put_int16_t(buf, 28, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_IMU, buf, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
#else
    mavlink_simba_imu_t packet;
    packet.timestamp = timestamp;
    packet.altitude = altitude;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.gyro_x = gyro_x;
    packet.gyro_y = gyro_y;
    packet.gyro_z = gyro_z;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_IMU, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
#endif
}

/**
 * @brief Send a simba_imu message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_imu_send_struct(mavlink_channel_t chan, const mavlink_simba_imu_t* simba_imu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_imu_send(chan, simba_imu->timestamp, simba_imu->acc_x, simba_imu->acc_y, simba_imu->acc_z, simba_imu->gyro_x, simba_imu->gyro_y, simba_imu->gyro_z, simba_imu->roll, simba_imu->pitch, simba_imu->yaw, simba_imu->altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_IMU, (const char *)simba_imu, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_IMU_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_imu_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, int16_t acc_x, int16_t acc_y, int16_t acc_z, int16_t gyro_x, int16_t gyro_y, int16_t gyro_z, int16_t roll, int16_t pitch, int16_t yaw, int32_t altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 12, acc_x);
    _mav_put_int16_t(buf, 14, acc_y);
    _mav_put_int16_t(buf, 16, acc_z);
    _mav_put_int16_t(buf, 18, gyro_x);
    _mav_put_int16_t(buf, 20, gyro_y);
    _mav_put_int16_t(buf, 22, gyro_z);
    _mav_put_int16_t(buf, 24, roll);
    _mav_put_int16_t(buf, 26, pitch);
    _mav_put_int16_t(buf, 28, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_IMU, buf, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
#else
    mavlink_simba_imu_t *packet = (mavlink_simba_imu_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->altitude = altitude;
    packet->acc_x = acc_x;
    packet->acc_y = acc_y;
    packet->acc_z = acc_z;
    packet->gyro_x = gyro_x;
    packet->gyro_y = gyro_y;
    packet->gyro_z = gyro_z;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_IMU, (const char *)packet, MAVLINK_MSG_ID_SIMBA_IMU_MIN_LEN, MAVLINK_MSG_ID_SIMBA_IMU_LEN, MAVLINK_MSG_ID_SIMBA_IMU_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_IMU UNPACKING


/**
 * @brief Get field timestamp from simba_imu message
 *
 * @return  Timestamp [ms]
 */
static inline uint64_t mavlink_msg_simba_imu_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field acc_x from simba_imu message
 *
 * @return  Acceleration X (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_acc_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field acc_y from simba_imu message
 *
 * @return  Acceleration Y (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_acc_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field acc_z from simba_imu message
 *
 * @return  Acceleration Z (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_acc_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field gyro_x from simba_imu message
 *
 * @return  Gyroscope X (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_gyro_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field gyro_y from simba_imu message
 *
 * @return  Gyroscope Y (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_gyro_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field gyro_z from simba_imu message
 *
 * @return  Gyroscope Z (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_gyro_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field roll from simba_imu message
 *
 * @return  Roll angle (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field pitch from simba_imu message
 *
 * @return  Pitch angle (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field yaw from simba_imu message
 *
 * @return  Yaw angle (scaled)
 */
static inline int16_t mavlink_msg_simba_imu_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field altitude from simba_imu message
 *
 * @return  Altitude (scaled) [cm]
 */
static inline int32_t mavlink_msg_simba_imu_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a simba_imu message into a struct
 *
 * @param msg The message to decode
 * @param simba_imu C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_imu_decode(const mavlink_message_t* msg, mavlink_simba_imu_t* simba_imu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_imu->timestamp = mavlink_msg_simba_imu_get_timestamp(msg);
    simba_imu->altitude = mavlink_msg_simba_imu_get_altitude(msg);
    simba_imu->acc_x = mavlink_msg_simba_imu_get_acc_x(msg);
    simba_imu->acc_y = mavlink_msg_simba_imu_get_acc_y(msg);
    simba_imu->acc_z = mavlink_msg_simba_imu_get_acc_z(msg);
    simba_imu->gyro_x = mavlink_msg_simba_imu_get_gyro_x(msg);
    simba_imu->gyro_y = mavlink_msg_simba_imu_get_gyro_y(msg);
    simba_imu->gyro_z = mavlink_msg_simba_imu_get_gyro_z(msg);
    simba_imu->roll = mavlink_msg_simba_imu_get_roll(msg);
    simba_imu->pitch = mavlink_msg_simba_imu_get_pitch(msg);
    simba_imu->yaw = mavlink_msg_simba_imu_get_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_IMU_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_IMU_LEN;
        memset(simba_imu, 0, MAVLINK_MSG_ID_SIMBA_IMU_LEN);
    memcpy(simba_imu, _MAV_PAYLOAD(msg), len);
#endif
}
