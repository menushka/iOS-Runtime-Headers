/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPersistentTimer : NSObject {
    NSDate * _cachedDate;
    double  _cachedInterval;
    double  _cachedLeeway;
    BOOL  _cachedRepeating;
    BOOL  _cachedUseXPC;
    BOOL  _cachedWakeSystem;
    NSDate * _date;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _identifier;
    double  _interval;
    BOOL  _invalidateCalled;
    id /* block */  _invalidationHandler;
    double  _leeway;
    PCPersistentTimer * _pcPersistentTimer;
    BOOL  _repeating;
    id /* block */  _timerHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    BOOL  _useXPC;
    BOOL  _wakeSystem;
    BOOL  _xpcRegistered;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double interval;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) double leeway;
@property (nonatomic) BOOL repeating;
@property (nonatomic, copy) id /* block */ timerHandler;
@property (nonatomic) BOOL useXPC;
@property (nonatomic) BOOL wakeSystem;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_pcTimerFired:(id)arg1;
- (void)_start;
- (void)_startPCPersistentTimer;
- (void)_startXPCActivity;
- (void)_xpcTimerFired:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (double)interval;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (double)leeway;
- (BOOL)repeating;
- (void)setDate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLeeway:(double)arg1;
- (void)setRepeating:(BOOL)arg1;
- (void)setTimerHandler:(id /* block */)arg1;
- (void)setUseXPC:(BOOL)arg1;
- (void)setWakeSystem:(BOOL)arg1;
- (void)start;
- (id /* block */)timerHandler;
- (BOOL)useXPC;
- (BOOL)wakeSystem;

@end
