/** @file
 *    @brief MAVLink comm protocol testsuite generated from simba.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef SIMBA_TESTSUITE_H
#define SIMBA_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_simba(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_simba(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_simba_actuator(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_ACTUATOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_actuator_t packet_in = {
        5
    };
    mavlink_simba_actuator_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.values = packet_in.values;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_ACTUATOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_actuator_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_pack(system_id, component_id, &msg , packet1.values );
    mavlink_msg_simba_actuator_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.values );
    mavlink_msg_simba_actuator_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_actuator_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_send(MAVLINK_COMM_1 , packet1.values );
    mavlink_msg_simba_actuator_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_ACTUATOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_ACTUATOR) != NULL);
#endif
}

static void mavlink_test_simba_tank_temperature(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_TANK_TEMPERATURE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_tank_temperature_t packet_in = {
        17235,17339,17443
    };
    mavlink_simba_tank_temperature_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.temp1 = packet_in.temp1;
        packet1.temp2 = packet_in.temp2;
        packet1.temp3 = packet_in.temp3;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_TANK_TEMPERATURE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_TANK_TEMPERATURE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_temperature_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_tank_temperature_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_temperature_pack(system_id, component_id, &msg , packet1.temp1 , packet1.temp2 , packet1.temp3 );
    mavlink_msg_simba_tank_temperature_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_temperature_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.temp1 , packet1.temp2 , packet1.temp3 );
    mavlink_msg_simba_tank_temperature_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_tank_temperature_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_temperature_send(MAVLINK_COMM_1 , packet1.temp1 , packet1.temp2 , packet1.temp3 );
    mavlink_msg_simba_tank_temperature_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_TANK_TEMPERATURE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_TANK_TEMPERATURE) != NULL);
#endif
}

static void mavlink_test_simba_tank_pressure(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_tank_pressure_t packet_in = {
        17.0,45.0
    };
    mavlink_simba_tank_pressure_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pressure = packet_in.pressure;
        packet1.d_pressure = packet_in.d_pressure;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_pressure_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_tank_pressure_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_pressure_pack(system_id, component_id, &msg , packet1.pressure , packet1.d_pressure );
    mavlink_msg_simba_tank_pressure_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_pressure_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pressure , packet1.d_pressure );
    mavlink_msg_simba_tank_pressure_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_tank_pressure_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_tank_pressure_send(MAVLINK_COMM_1 , packet1.pressure , packet1.d_pressure );
    mavlink_msg_simba_tank_pressure_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_TANK_PRESSURE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_TANK_PRESSURE) != NULL);
#endif
}

static void mavlink_test_simba_altitude_orientation(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_altitude_orientation_t packet_in = {
        5
    };
    mavlink_simba_altitude_orientation_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TODO = packet_in.TODO;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_altitude_orientation_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_altitude_orientation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_altitude_orientation_pack(system_id, component_id, &msg , packet1.TODO );
    mavlink_msg_simba_altitude_orientation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_altitude_orientation_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TODO );
    mavlink_msg_simba_altitude_orientation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_altitude_orientation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_altitude_orientation_send(MAVLINK_COMM_1 , packet1.TODO );
    mavlink_msg_simba_altitude_orientation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_ALTITUDE_ORIENTATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_ALTITUDE_ORIENTATION) != NULL);
#endif
}

static void mavlink_test_simba_gps(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_GPS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_gps_t packet_in = {
        963497464,963497672,963497880
    };
    mavlink_simba_gps_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_GPS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_gps_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_gps_pack(system_id, component_id, &msg , packet1.lat , packet1.lon , packet1.alt );
    mavlink_msg_simba_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_gps_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.lat , packet1.lon , packet1.alt );
    mavlink_msg_simba_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_gps_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_gps_send(MAVLINK_COMM_1 , packet1.lat , packet1.lon , packet1.alt );
    mavlink_msg_simba_gps_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_GPS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_GPS) != NULL);
#endif
}

static void mavlink_test_simba_heartbeat(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_HEARTBEAT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_heartbeat_t packet_in = {
        93372036854775807ULL,29,96
    };
    mavlink_simba_heartbeat_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.flight_computer_status = packet_in.flight_computer_status;
        packet1.engine_computer_status = packet_in.engine_computer_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_HEARTBEAT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_HEARTBEAT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_heartbeat_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_heartbeat_pack(system_id, component_id, &msg , packet1.timestamp , packet1.flight_computer_status , packet1.engine_computer_status );
    mavlink_msg_simba_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_heartbeat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.flight_computer_status , packet1.engine_computer_status );
    mavlink_msg_simba_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_heartbeat_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.flight_computer_status , packet1.engine_computer_status );
    mavlink_msg_simba_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_HEARTBEAT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_HEARTBEAT) != NULL);
#endif
}

static void mavlink_test_simba_max_altitude(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_max_altitude_t packet_in = {
        963497464
    };
    mavlink_simba_max_altitude_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.alt = packet_in.alt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_max_altitude_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_max_altitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_max_altitude_pack(system_id, component_id, &msg , packet1.alt );
    mavlink_msg_simba_max_altitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_max_altitude_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.alt );
    mavlink_msg_simba_max_altitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_max_altitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_max_altitude_send(MAVLINK_COMM_1 , packet1.alt );
    mavlink_msg_simba_max_altitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_MAX_ALTITUDE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_MAX_ALTITUDE) != NULL);
#endif
}

static void mavlink_test_simba_cmd_change_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_cmd_change_state_t packet_in = {
        5
    };
    mavlink_simba_cmd_change_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.new_state = packet_in.new_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_cmd_change_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_cmd_change_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_cmd_change_state_pack(system_id, component_id, &msg , packet1.new_state );
    mavlink_msg_simba_cmd_change_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_cmd_change_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.new_state );
    mavlink_msg_simba_cmd_change_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_cmd_change_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_cmd_change_state_send(MAVLINK_COMM_1 , packet1.new_state );
    mavlink_msg_simba_cmd_change_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_CMD_CHANGE_STATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_CMD_CHANGE_STATE) != NULL);
#endif
}

static void mavlink_test_simba_actuator_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_actuator_cmd_t packet_in = {
        5,72
    };
    mavlink_simba_actuator_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.actuator_id = packet_in.actuator_id;
        packet1.value = packet_in.value;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_actuator_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_cmd_pack(system_id, component_id, &msg , packet1.actuator_id , packet1.value );
    mavlink_msg_simba_actuator_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.actuator_id , packet1.value );
    mavlink_msg_simba_actuator_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_actuator_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_actuator_cmd_send(MAVLINK_COMM_1 , packet1.actuator_id , packet1.value );
    mavlink_msg_simba_actuator_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_ACTUATOR_CMD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_ACTUATOR_CMD) != NULL);
#endif
}

static void mavlink_test_simba_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SIMBA_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_simba_ack_t packet_in = {
        5,72
    };
    mavlink_simba_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.state = packet_in.state;
        packet1.status = packet_in.status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SIMBA_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_simba_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_ack_pack(system_id, component_id, &msg , packet1.state , packet1.status );
    mavlink_msg_simba_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.state , packet1.status );
    mavlink_msg_simba_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_simba_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_simba_ack_send(MAVLINK_COMM_1 , packet1.state , packet1.status );
    mavlink_msg_simba_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SIMBA_ACK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SIMBA_ACK) != NULL);
#endif
}

static void mavlink_test_simba(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_simba_actuator(system_id, component_id, last_msg);
    mavlink_test_simba_tank_temperature(system_id, component_id, last_msg);
    mavlink_test_simba_tank_pressure(system_id, component_id, last_msg);
    mavlink_test_simba_altitude_orientation(system_id, component_id, last_msg);
    mavlink_test_simba_gps(system_id, component_id, last_msg);
    mavlink_test_simba_heartbeat(system_id, component_id, last_msg);
    mavlink_test_simba_max_altitude(system_id, component_id, last_msg);
    mavlink_test_simba_cmd_change_state(system_id, component_id, last_msg);
    mavlink_test_simba_actuator_cmd(system_id, component_id, last_msg);
    mavlink_test_simba_ack(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SIMBA_TESTSUITE_H
