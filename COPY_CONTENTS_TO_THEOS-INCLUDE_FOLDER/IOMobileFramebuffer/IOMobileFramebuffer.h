#ifndef IOMOBILEFRAMEBUFFER_H_
#define IOMOBILEFRAMEBUFFER_H_

#include <mach/mach_types.h>
#include <IOKit/IOTypes.h>
#include <CoreSurface/CoreSurface.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void *IOMobileFramebufferRef;

kern_return_t IOMobileFramebufferSwapSetLayer(
    IOMobileFramebufferRef fb,
    int layer,
    CoreSurfaceBufferRef buffer,
    CGRect bounds,
    CGRect frame,
    int flags
);

kern_return_t IOMobileFramebufferGetLayerDefaultSurface(IOMobileFramebufferRef connect, int zero, CoreSurfaceBufferRef *surface);
kern_return_t IOMobileFramebufferOpen(io_service_t service, task_port_t task, uint32_t type, IOMobileFramebufferRef *connect);

void IOMobileFramebufferGetDisplaySize(IOMobileFramebufferRef connect, CGSize *size);
void IOMobileFramebufferIsMainDisplay(IOMobileFramebufferRef connect, int *main);

#ifdef __cplusplus
}
#endif

#endif//IOMOBILEFRAMEBUFFER_H_
