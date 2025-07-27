/* 
 * File:   washing_machine_header.h
 * Author: abinash
 *
 * Created on 26 June, 2025, 4:03 AM
 */

#ifndef WASHING_MACHINE_HEADER_H
#define	WASHING_MACHINE_HEADER_H

void power_on_screen();
void clear_screen();
void washing_program_display(unsigned char key);
void water_level_screen(unsigned char key);
void run_program(unsigned char key);
void set_time(void);
void door_status_check(void);
#endif	/* WASHING_MACHINE_HEADER_H */

