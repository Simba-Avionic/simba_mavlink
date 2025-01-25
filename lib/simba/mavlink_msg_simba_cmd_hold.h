#pragma once
// MESSAGE SIMBA_CMD_HOLD PACKING

#define MAVLINK_MSG_ID_SIMBA_CMD_HOLD 144


typedef struct __mavlink_simba_cmd_hold_t {
 uint8_t cmd_abort; /*<  Command for hold*/
} mavlink_simba_cmd_hold_t;

#define MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN 1
#define MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN 1
#define MAVLINK_MSG_ID_144_LEN 1
#define MAVLINK_MSG_ID_144_MIN_LEN 1

#define MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC 249
#define MAVLINK_MSG_ID_144_CRC 249



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_CMD_HOLD { \
    144, \
    "SIMBA_CMD_HOLD", \
    1, \
    {  { "cmd_abort", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_cmd_hold_t, cmd_abort) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_CMD_HOLD { \
    "SIMBA_CMD_HOLD", \
    1, \
    {  { "cmd_abort", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_cmd_hold_t, cmd_abort) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_cmd_hold message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd_abort  Command for hold
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_hold_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cmd_abort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN];
    _mav_put_uint8_t(buf, 0, cmd_abort);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
#else
    mavlink_simba_cmd_hold_t packet;
    packet.cmd_abort = cmd_abort;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_HOLD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
}

/**
 * @brief Pack a simba_cmd_hold message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd_abort  Command for hold
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_hold_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cmd_abort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN];
    _mav_put_uint8_t(buf, 0, cmd_abort);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
#else
    mavlink_simba_cmd_hold_t packet;
    packet.cmd_abort = cmd_abort;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_HOLD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
#endif
}

/**
 * @brief Pack a simba_cmd_hold message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_abort  Command for hold
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_cmd_hold_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cmd_abort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN];
    _mav_put_uint8_t(buf, 0, cmd_abort);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
#else
    mavlink_simba_cmd_hold_t packet;
    packet.cmd_abort = cmd_abort;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_CMD_HOLD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
}

/**
 * @brief Encode a simba_cmd_hold struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_hold C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_hold_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_cmd_hold_t* simba_cmd_hold)
{
    return mavlink_msg_simba_cmd_hold_pack(system_id, component_id, msg, simba_cmd_hold->cmd_abort);
}

/**
 * @brief Encode a simba_cmd_hold struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_hold C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_hold_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_cmd_hold_t* simba_cmd_hold)
{
    return mavlink_msg_simba_cmd_hold_pack_chan(system_id, component_id, chan, msg, simba_cmd_hold->cmd_abort);
}

/**
 * @brief Encode a simba_cmd_hold struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_cmd_hold C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_cmd_hold_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_cmd_hold_t* simba_cmd_hold)
{
    return mavlink_msg_simba_cmd_hold_pack_status(system_id, component_id, _status, msg,  simba_cmd_hold->cmd_abort);
}

/**
 * @brief Send a simba_cmd_hold message
 * @param chan MAVLink channel to send the message
 *
 * @param cmd_abort  Command for hold
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_cmd_hold_send(mavlink_channel_t chan, uint8_t cmd_abort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN];
    _mav_put_uint8_t(buf, 0, cmd_abort);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_HOLD, buf, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
#else
    mavlink_simba_cmd_hold_t packet;
    packet.cmd_abort = cmd_abort;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_HOLD, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
#endif
}

/**
 * @brief Send a simba_cmd_hold message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_cmd_hold_send_struct(mavlink_channel_t chan, const mavlink_simba_cmd_hold_t* simba_cmd_hold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_cmd_hold_send(chan, simba_cmd_hold->cmd_abort);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_HOLD, (const char *)simba_cmd_hold, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_cmd_hold_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cmd_abort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, cmd_abort);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_HOLD, buf, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
#else
    mavlink_simba_cmd_hold_t *packet = (mavlink_simba_cmd_hold_t *)msgbuf;
    packet->cmd_abort = cmd_abort;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_CMD_HOLD, (const char *)packet, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_MIN_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_CMD_HOLD UNPACKING


/**
 * @brief Get field cmd_abort from simba_cmd_hold message
 *
 * @return  Command for hold
 */
static inline uint8_t mavlink_msg_simba_cmd_hold_get_cmd_abort(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a simba_cmd_hold message into a struct
 *
 * @param msg The message to decode
 * @param simba_cmd_hold C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_cmd_hold_decode(const mavlink_message_t* msg, mavlink_simba_cmd_hold_t* simba_cmd_hold)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_cmd_hold->cmd_abort = mavlink_msg_simba_cmd_hold_get_cmd_abort(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN;
        memset(simba_cmd_hold, 0, MAVLINK_MSG_ID_SIMBA_CMD_HOLD_LEN);
    memcpy(simba_cmd_hold, _MAV_PAYLOAD(msg), len);
#endif
}
