#include "version.h"

#include <string>
#include <sstream>

int cv_version() {
	return (CV_VERSION_MAJOR << 16) | (CV_VERSION_MINOR << 8) | (CV_VERSION_REVISION);
}