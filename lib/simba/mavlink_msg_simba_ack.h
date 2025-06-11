#pragma once
// MESSAGE SIMBA_ACK PACKING

#define MAVLINK_MSG_ID_SIMBA_ACK 148


typedef struct __mavlink_simba_ack_t {
 uint8_t state; /*<  Current rocket state*/
 uint8_t status; /*<  Completion status*/
} mavlink_simba_ack_t;

#define MAVLINK_MSG_ID_SIMBA_ACK_LEN 2
#define MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN 2
#define MAVLINK_MSG_ID_148_LEN 2
#define MAVLINK_MSG_ID_148_MIN_LEN 2

#define MAVLINK_MSG_ID_SIMBA_ACK_CRC 67
#define MAVLINK_MSG_ID_148_CRC 67



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_ACK { \
    148, \
    "SIMBA_ACK", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_ack_t, state) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_simba_ack_t, status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_ACK { \
    "SIMBA_ACK", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_simba_ack_t, state) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_simba_ack_t, status) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Current rocket state
 * @param status  Completion status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACK_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
#else
    mavlink_simba_ack_t packet;
    packet.state = state;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
}

/**
 * @brief Pack a simba_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Current rocket state
 * @param status  Completion status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_ack_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t state, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACK_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
#else
    mavlink_simba_ack_t packet;
    packet.state = state;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
#endif
}

/**
 * @brief Pack a simba_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  Current rocket state
 * @param status  Completion status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACK_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
#else
    mavlink_simba_ack_t packet;
    packet.state = state;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
}

/**
 * @brief Encode a simba_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_ack_t* simba_ack)
{
    return mavlink_msg_simba_ack_pack(system_id, component_id, msg, simba_ack->state, simba_ack->status);
}

/**
 * @brief Encode a simba_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_ack_t* simba_ack)
{
    return mavlink_msg_simba_ack_pack_chan(system_id, component_id, chan, msg, simba_ack->state, simba_ack->status);
}

/**
 * @brief Encode a simba_ack struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_ack_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_ack_t* simba_ack)
{
    return mavlink_msg_simba_ack_pack_status(system_id, component_id, _status, msg,  simba_ack->state, simba_ack->status);
}

/**
 * @brief Send a simba_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param state  Current rocket state
 * @param status  Completion status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_ack_send(mavlink_channel_t chan, uint8_t state, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_ACK_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACK, buf, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
#else
    mavlink_simba_ack_t packet;
    packet.state = state;
    packet.status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACK, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
#endif
}

/**
 * @brief Send a simba_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_ack_send_struct(mavlink_channel_t chan, const mavlink_simba_ack_t* simba_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_ack_send(chan, simba_ack->state, simba_ack->status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACK, (const char *)simba_ack, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACK, buf, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
#else
    mavlink_simba_ack_t *packet = (mavlink_simba_ack_t *)msgbuf;
    packet->state = state;
    packet->status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_ACK, (const char *)packet, MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN, MAVLINK_MSG_ID_SIMBA_ACK_LEN, MAVLINK_MSG_ID_SIMBA_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_ACK UNPACKING


/**
 * @brief Get field state from simba_ack message
 *
 * @return  Current rocket state
 */
static inline uint8_t mavlink_msg_simba_ack_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field status from simba_ack message
 *
 * @return  Completion status
 */
static inline uint8_t mavlink_msg_simba_ack_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a simba_ack message into a struct
 *
 * @param msg The message to decode
 * @param simba_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_ack_decode(const mavlink_message_t* msg, mavlink_simba_ack_t* simba_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_ack->state = mavlink_msg_simba_ack_get_state(msg);
    simba_ack->status = mavlink_msg_simba_ack_get_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_ACK_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_ACK_LEN;
        memset(simba_ack, 0, MAVLINK_MSG_ID_SIMBA_ACK_LEN);
    memcpy(simba_ack, _MAV_PAYLOAD(msg), len);
#endif
}
