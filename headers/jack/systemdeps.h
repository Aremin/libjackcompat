/*
Copyright (C) 2004-2012 Grame

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#ifndef __jack_systemdeps_h__
#define __jack_systemdeps_h__

    #ifdef __GNUC__
        /* POST_PACKED_STRUCTURE needs to be a macro which
           expands into a compiler directive. The directive must
           tell the compiler to arrange the preceding structure
           declaration so that it is packed on byte-boundaries rather 
           than use the natural alignment of the processor and/or
           compiler.
        */

        #define PRE_PACKED_STRUCTURE
        #define POST_PACKED_STRUCTURE __attribute__((__packed__))
	#endif

    #include <inttypes.h>
    #include <pthread.h>
    #include <sys/types.h>
    
    /**
      *  to make jack API independent of different thread implementations,
      *  we define jack_native_thread_t to pthread_t here.
      */
   typedef pthread_t jack_native_thread_t;

#endif
