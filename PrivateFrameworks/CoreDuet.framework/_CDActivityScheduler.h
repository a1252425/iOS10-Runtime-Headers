/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDActivityScheduler : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _swAckPort;
    long long  acPowerActCount;
    long long  acPowerSuspendActCount;
    NSObject<OS_dispatch_source> * activityDispatcher;
    CDAttribute * budgetAttribute;
    long long  completedActCount;
    _CDActivity * currentDeviceRestartActivity;
    long long  currentIntensiveActCount;
    bool  deviceRestartForecastValid;
    _CDDateRange * deviceRestartPeriod1;
    _CDDateRange * deviceRestartPeriod2;
    long long  execActCount;
    long long  execActCountWithNoConditions;
    NSMutableArray * favorableStateQueue;
    NSDate * forecastTimestamp;
    int  idleSleepPreventersToken;
    unsigned char  inactivityForecast;
    bool  inactivityForecastValid;
    unsigned long long  maxConcurrentExec;
    long long  memorySuspendActCount;
    NSDate * nextForecastUpdate;
    NSDate * nextScheduleUpdate;
    _CDDateRange * nextSleepPeriod1;
    _CDDateRange * nextSleepPeriod2;
    NSDate * nextUserWake;
    NSString * nextUserWakeAppName;
    long long  overdueActCount;
    CDAttribute * pluginAttribute;
    unsigned char  pluginForecast;
    bool  pluginForecastValid;
    int  powerStateChangeToken;
    NSMutableArray * requisiteStateQueue;
    unsigned int  restartAssertion;
    unsigned int  restartAssertionCheckId;
    int  restartCheckNotificationToken;
    NSMutableArray * runQueue;
    CDSession * session;
    NSDate * sleepEnd1;
    NSDate * sleepEnd2;
    NSMutableArray * submittedActivities;
    NSMutableArray * suspendQueue;
    unsigned int  swNotifier;
    struct IONotificationPort { } * swNotifyPort;
    _CDSystemMonitor * systemMonitor;
    int  systemSleepPreventersToken;
    long long  thermalSuspendActCount;
    long long  totalActCompletionTime;
    long long  totalActStartTime;
    int  userAssertionsAnyChangeToken;
    long long  userInactiveActCount;
    long long  userInactiveSuspendActCount;
    int  wakeRequestsToken;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic) unsigned int _swAckPort;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_queue;
- (unsigned int)_swAckPort;
- (bool)activityCompleted:(id)arg1 error:(id*)arg2;
- (bool)admissionCheckOnActivity:(id)arg1;
- (bool)assertionCheckForDeviceRestart:(id)arg1;
- (bool)cacheSleepPeriod:(id)arg1 end:(id)arg2 period1:(id*)arg3 period2:(id*)arg4;
- (void)callStartHandler:(id)arg1;
- (bool)cancelActivity:(id)arg1 error:(id*)arg2;
- (id)dateToString:(id)arg1;
- (void)dealloc;
- (void)deregisterForAnyAssertionChange;
- (bool)deviceRestartAdmissionCheck:(id)arg1;
- (void)disableHeySiri;
- (void)enableHeySiri;
- (bool)getDeviceRestartForecast;
- (id)getForecastForAttribute:(id)arg1;
- (bool)getForecastForDevicePlugin:(char *)arg1;
- (bool)getForecastForUserInactivity:(char *)arg1;
- (void)getNextUserWakeEvent;
- (id)getUnrestrictedSleepEnd;
- (void)handleActivitySubmission:(id)arg1;
- (void)handleSystemNotification:(unsigned long long)arg1;
- (id)init;
- (void)insertActivity:(id)arg1 toQueue:(id)arg2 onCondition:(id /* block */)arg3;
- (bool)isUserAsleep;
- (bool)isUserAsleepForDeviceRestart:(id)arg1;
- (void)processActivityQueues;
- (void)processDeviceRestartActivities;
- (void)processDeviceRestartSuspension;
- (void)processFavorableStateQueue;
- (void)processRequisiteStateQueue;
- (void)processSubmittedActivity:(id)arg1;
- (void)registerForAnyAssertionChange;
- (void)registerForDeviceRestartMonitoring;
- (void)retryAdmissionCheck:(long long)arg1;
- (void)scheduleSystemWakeAt:(id)arg1 forActivity:(id)arg2 withLeeway:(long long)arg3;
- (void)setActivityScheduleTime:(id)arg1;
- (void)setDispatchTimer;
- (void)set_queue:(id)arg1;
- (void)set_swAckPort:(unsigned int)arg1;
- (bool)submitActivity:(id)arg1 error:(id*)arg2;
- (bool)submitActivityBatch:(id)arg1 error:(id*)arg2;
- (void)suspendExecutingActivities:(id /* block */)arg1;
- (bool)systemAdmissionCheck;
- (void)updateAggdKeys;
- (bool)updateForecasts;

@end