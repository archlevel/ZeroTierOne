/*
 * ZeroTier One - Network Virtualization Everywhere
 * Copyright (C) 2011-2015  ZeroTier, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * --
 *
 * ZeroTier may be used and distributed under the terms of the GPLv3, which
 * are available at: http://www.gnu.org/licenses/gpl-3.0.html
 *
 * If you would like to embed ZeroTier into a commercial application or
 * redistribute it in a modified binary form, please contact ZeroTier Networks
 * LLC. Start here: http://www.zerotier.com/
 */


#ifdef __cplusplus
extern "C" {
#endif
	
#if defined(__ANDROID__)	
	#include <jni.h>
#endif

#ifndef ONE_SERVICE_SETUP_HPP
#define ONE_SERVICE_SETUP_HPP

#define INTERCEPT_ENABLED   111
#define INTERCEPT_DISABLED  222

#if defined(__ANDROID__)	
	JNIEXPORT void JNICALL Java_Netcon_NetconWrapper_startOneService(JNIEnv *env, jobject thisObj);
#else
	void *startOneService(void *thread_id);
	void init_service(int key, const char * path);
	void init_intercept(int key);
#endif
void set_intercept_status(int mode);

#endif


#ifdef __cplusplus
}
#endif