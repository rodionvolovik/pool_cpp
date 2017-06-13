/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 07:28:34 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/08 09:33:39 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/utsname.h>
#include <stdlib.h>
#include <limits.h>

#include <string>
#include <iostream>
#include <ctime>
#include "ncurses.h"

#define __USE_POSIX
#define _POSIX_SOURCE

using namespace	std;

int		main(void) {
	initscr();
	curs_set(0);
	//--------------------------------------------------------HOSTNAME
	char	hostname[_SC_HOST_NAME_MAX];
	char	username[_SC_LOGIN_NAME_MAX];

	if (!gethostname(hostname, _SC_HOST_NAME_MAX))
		cout << "hostname: " << hostname << endl;
	else
		cout << "Oooops! An error ocured ;(" << endl;
	if (!getlogin_r(username, _SC_LOGIN_NAME_MAX))
		cout << "username: " << username << endl;
	else
		cout << "Oooops! An error ocured ;(" << endl;
	//--------------------------------------------------------SYSTEM INFORMATION
	// struct utsname {
	// 	char sysname[];    /* Operating system name (e.g., "Linux") */
	// 	char nodename[];   /* Name within "some implementation-defined
	// 	                     network" */
	// 	char release[];    /* Operating system release (e.g., "2.6.28") */
	// 	char version[];    /* Operating system version */
	// 	char machine[];    /* Hardware identifier */
	// #ifdef _GNU_SOURCE
	// 	char domainname[]; /* NIS or YP domain name */
	// #endif
	// };
	struct utsname	buf;
	int				err = 0;

	if (!(err = uname(&buf))) {
		printw("sysname: %s\n", buf.sysname);
		printw("nodename: %s\n", buf.nodename);
		printw("release: %s\n", buf.release);
		printw("version: %s\n", buf.version);
		printw("machine: %s\n", buf.machine);
	}
	else
		printw("I can't get any sys information, sorry.... Err code [%d]\n");
	//--------------------------------------------------------DATE/TIME MODULE
	time_t		t = time(0);
	struct tm	*now = localtime(&t);

	printw("Time/Date: %s\n", ctime(&t));
	//--------------------------------------------------------CPU
	// /usr/sbin/system_profiler SPHardwareDataType - returns sysconf to console read this file
	long	nproc_conf = sysconf(_SC_NPROCESSORS_CONF);
	printw("_SC_NPROCESSORS_CONF: %d\n", nproc_conf);
	long	nproc_avail = sysconf(_SC_NPROCESSORS_ONLN);
	printw("_SC_NPROCESSORS_ONLN: %d\n", nproc_avail);
	long	nclock_ticks = sysconf(_SC_CLK_TCK);
	printw("Clock ticks/sec: %d\n", nclock_ticks);
	long	nprocesses = sysconf(_SC_CHILD_MAX);
	printw("_SC_CHILD_MAX(nuber of simultaneous processes): %d\n", nprocesses);
	refresh();
	getch();
	clear();
	endwin();
	return 0;
}
