// file Log.h
#ifndef SETTINGSLOADER_LOG_H
#define SETTINGSLOADER_LOG_H

#ifdef DEBUG
#include <Foundation/Foundation.h>
#define NSLog(args...) _Log(@"DEBUG ", __FILE__,__LINE__,__PRETTY_FUNCTION__,args);
__BEGIN_DECLS

@interface Log : NSObject
void _Log(NSString *prefix, const char *file, int lineNumber, const char *funcName, NSString *format,...);
@end

__END_DECLS
#endif

#endif
