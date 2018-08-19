//
// Created by Kiro47 on 8/18/18.
// Copyright (c) 2018 Kiro47 
// For more information see LICENSE and FULL_LICENSE files.
//

#ifndef SMARTDISKMONITOR_SMARTCTLHOOK_H
#define SMARTDISKMONITOR_SMARTCTLHOOK_H

// TODO: Replace with custom struct return type
void get_output_of_smarthctl (char **device);

/**
 * Scans a drive with smartctl
 *
 * Returns the status code smartctl returned
 */
int scan_drive (char **device);

#endif //SMARTDISKMONITOR_SMARTCTLHOOK_H
