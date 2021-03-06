/**
 * Copyright 20xx sirius
 * All right reserved
 */
#ifndef CONFIG_H_
#    define CONFIG_H_

struct config_opts_t {
	char *config_dir;
	char *dest_dir;
};

extern struct config_opts_t config_opts;

#    define G_DIR_SEPARATOR_S "/"

#    if defined(__APPLE__)
#        include <sys/syslimits.h>
#    elif defined(__CYGWIN__)
#        include <limits.h>
#    else
#        include <linux/limits.h>
#    endif

#    ifndef PATH_MAX
#        define PATH_MAX        4096	/* # chars in a path name including nul */
#    endif

#endif /* CONFIG_H_ */
