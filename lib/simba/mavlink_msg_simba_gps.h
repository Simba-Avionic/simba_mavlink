#pragma once
// MESSAGE SIMBA_GPS PACKING

#define MAVLINK_MSG_ID_SIMBA_GPS 72


typedef struct __mavlink_simba_gps_t {
 int32_t lat; /*<  Latitude*/
 int32_t lon; /*<  Longitude*/
 int32_t alt; /*<  Altitude*/
} mavlink_simba_gps_t;

#define MAVLINK_MSG_ID_SIMBA_GPS_LEN 12
#define MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN 12
#define MAVLINK_MSG_ID_72_LEN 12
#define MAVLINK_MSG_ID_72_MIN_LEN 12

#define MAVLINK_MSG_ID_SIMBA_GPS_CRC 248
#define MAVLINK_MSG_ID_72_CRC 248



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SIMBA_GPS { \
    72, \
    "SIMBA_GPS", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_simba_gps_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_simba_gps_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_simba_gps_t, alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SIMBA_GPS { \
    "SIMBA_GPS", \
    3, \
    {  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_simba_gps_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_simba_gps_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_simba_gps_t, alt) }, \
         } \
}
#endif

/**
 * @brief Pack a simba_gps message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat  Latitude
 * @param lon  Longitude
 * @param alt  Altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_gps_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GPS_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
#else
    mavlink_simba_gps_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_GPS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
}

/**
 * @brief Pack a simba_gps message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param lat  Latitude
 * @param lon  Longitude
 * @param alt  Altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_gps_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GPS_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
#else
    mavlink_simba_gps_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_GPS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
#endif
}

/**
 * @brief Pack a simba_gps message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lat  Latitude
 * @param lon  Longitude
 * @param alt  Altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_simba_gps_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t lat,int32_t lon,int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GPS_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
#else
    mavlink_simba_gps_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SIMBA_GPS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
}

/**
 * @brief Encode a simba_gps struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param simba_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_gps_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_simba_gps_t* simba_gps)
{
    return mavlink_msg_simba_gps_pack(system_id, component_id, msg, simba_gps->lat, simba_gps->lon, simba_gps->alt);
}

/**
 * @brief Encode a simba_gps struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param simba_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_gps_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_simba_gps_t* simba_gps)
{
    return mavlink_msg_simba_gps_pack_chan(system_id, component_id, chan, msg, simba_gps->lat, simba_gps->lon, simba_gps->alt);
}

/**
 * @brief Encode a simba_gps struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param simba_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_simba_gps_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_simba_gps_t* simba_gps)
{
    return mavlink_msg_simba_gps_pack_status(system_id, component_id, _status, msg,  simba_gps->lat, simba_gps->lon, simba_gps->alt);
}

/**
 * @brief Send a simba_gps message
 * @param chan MAVLink channel to send the message
 *
 * @param lat  Latitude
 * @param lon  Longitude
 * @param alt  Altitude
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_simba_gps_send(mavlink_channel_t chan, int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SIMBA_GPS_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GPS, buf, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
#else
    mavlink_simba_gps_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GPS, (const char *)&packet, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
#endif
}

/**
 * @brief Send a simba_gps message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_simba_gps_send_struct(mavlink_channel_t chan, const mavlink_simba_gps_t* simba_gps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_simba_gps_send(chan, simba_gps->lat, simba_gps->lon, simba_gps->alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GPS, (const char *)simba_gps, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SIMBA_GPS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_simba_gps_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t lat, int32_t lon, int32_t alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_int32_t(buf, 8, alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GPS, buf, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
#else
    mavlink_simba_gps_t *packet = (mavlink_simba_gps_t *)msgbuf;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SIMBA_GPS, (const char *)packet, MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN, MAVLINK_MSG_ID_SIMBA_GPS_LEN, MAVLINK_MSG_ID_SIMBA_GPS_CRC);
#endif
}
#endif

#endif

// MESSAGE SIMBA_GPS UNPACKING


/**
 * @brief Get field lat from simba_gps message
 *
 * @return  Latitude
 */
static inline int32_t mavlink_msg_simba_gps_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lon from simba_gps message
 *
 * @return  Longitude
 */
static inline int32_t mavlink_msg_simba_gps_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field alt from simba_gps message
 *
 * @return  Altitude
 */
static inline int32_t mavlink_msg_simba_gps_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a simba_gps message into a struct
 *
 * @param msg The message to decode
 * @param simba_gps C-struct to decode the message contents into
 */
static inline void mavlink_msg_simba_gps_decode(const mavlink_message_t* msg, mavlink_simba_gps_t* simba_gps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    simba_gps->lat = mavlink_msg_simba_gps_get_lat(msg);
    simba_gps->lon = mavlink_msg_simba_gps_get_lon(msg);
    simba_gps->alt = mavlink_msg_simba_gps_get_alt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SIMBA_GPS_LEN? msg->len : MAVLINK_MSG_ID_SIMBA_GPS_LEN;
        memset(simba_gps, 0, MAVLINK_MSG_ID_SIMBA_GPS_LEN);
    memcpy(simba_gps, _MAV_PAYLOAD(msg), len);
#endif
}
