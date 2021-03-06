/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLIOReportAgent : PLAgent {
    PLEntryNotificationOperatorComposition * _batteryLevelChangedNotifications;
    NSMutableDictionary * _sampleChannelsDaily;
    NSMutableDictionary * _sampleChannelsHalfHour;
    NSMutableDictionary * _sampleChannelsSignificantBattery;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedNotifications;
@property (nonatomic, retain) NSMutableDictionary *sampleChannelsDaily;
@property (nonatomic, retain) NSMutableDictionary *sampleChannelsHalfHour;
@property (nonatomic, retain) NSMutableDictionary *sampleChannelsSignificantBattery;

+ (double)SOCCorrectionFactor;
+ (id)defaults;
+ (id)energyKeyToRootNodeID;
+ (id)entryEventBackwardDefinitionAmcStatsPerfCounters;
+ (id)entryEventBackwardDefinitionAppleEmbeddedPcieLinkStates;
+ (id)entryEventBackwardDefinitionCLPCStatsControlEffort;
+ (id)entryEventBackwardDefinitionCLPCStatsCounters;
+ (id)entryEventBackwardDefinitionCLPCStatsFrameRateHistogram;
+ (id)entryEventBackwardDefinitionCLPCStatsLeadingController;
+ (id)entryEventBackwardDefinitionCPUStatsActiveTimeHistogram;
+ (id)entryEventBackwardDefinitionCPUStatsCPUPerformanceStates;
+ (id)entryEventBackwardDefinitionCPUStatsDVDStats;
+ (id)entryEventBackwardDefinitionCPUStatsIdleTimeHistogram;
+ (id)entryEventBackwardDefinitionCPUStatsVoltageDomainPerformanceStates;
+ (id)entryEventBackwardDefinitionClpcStatsMetricHistograms;
+ (id)entryEventBackwardDefinitionCorePerformanceLevel;
+ (id)entryEventBackwardDefinitionCpuStatsCpuFeatures;
+ (id)entryEventBackwardDefinitionEnergyModel;
+ (id)entryEventBackwardDefinitionGPUStatsActiveTimeHistogram;
+ (id)entryEventBackwardDefinitionGPUStatsDVDRequestStates;
+ (id)entryEventBackwardDefinitionGPUStatsGPUPerformanceStates;
+ (id)entryEventBackwardDefinitionGPUStatsIdleTimeHistogram;
+ (id)entryEventBackwardDefinitionH6ISPH6ISPPowerState;
+ (id)entryEventBackwardDefinitionIOReport;
+ (id)entryEventBackwardDefinitionMesaMesaPowerState;
+ (id)entryEventBackwardDefinitionOscarPlatformevents;
+ (id)entryEventBackwardDefinitionOscarPlatformpowerstate;
+ (id)entryEventBackwardDefinitionOscarSensorevents;
+ (id)entryEventBackwardDefinitionOscarSensorpowerstate;
+ (id)entryEventBackwardDefinitionSoCStatsDeviceStats;
+ (id)entryEventBackwardDefinitionSoCStatsH6PMGRCounters;
+ (id)entryEventBackwardDefinitionSoCStatsVoltageDomainPerformanceStates;
+ (id)entryEventBackwardDefinitionSocStatsDvdStats;
+ (id)entryEventBackwardDefinitionSocStatsH7PmgrCounters;
+ (id)entryEventBackwardDefinitionWifiChipAWDLActivity;
+ (id)entryEventBackwardDefinitionWifiChipConnectionActivity;
+ (id)entryEventBackwardDefinitionWifiChipHSICActivity;
+ (id)entryEventBackwardDefinitionWifiChipPCIeActivity;
+ (id)entryEventBackwardDefinitionWifiChipPMAwakeActivity;
+ (id)entryEventBackwardDefinitionWifiChipRadioPhyicalLayerActivity;
+ (id)entryEventBackwardDefinitionWifiChipRxChipErrorCounters;
+ (id)entryEventBackwardDefinitionWifiChipRxPerRateCounters;
+ (id)entryEventBackwardDefinitionWifiChipRxStatCounters;
+ (id)entryEventBackwardDefinitionWifiChipScanActivity;
+ (id)entryEventBackwardDefinitionWifiChipTxChipErrorCounters;
+ (id)entryEventBackwardDefinitionWifiChipTxStatCounters;
+ (id)entryEventBackwardDefinitionbacklightreportplaybackbacklightfactorsreport;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (int)addReportSample:(struct __CFDictionary { }*)arg1 toEntry:(id)arg2;
- (void)addReportingGroup:(id)arg1 toEntry:(id)arg2;
- (id)batteryLevelChangedNotifications;
- (id)chanelDictionaryWithChannelSet:(id)arg1 withMinProcessTime:(double)arg2;
- (id)entryForReportingGroup:(id)arg1 withKey:(id)arg2 withChannelGroup:(id)arg3 withEntryDate:(id)arg4;
- (id)entryKeyForEventWithGroupName:(id)arg1 withSubGroupName:(id)arg2;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardIOReport;
- (void)logEventBackwardIOReportWithDelta:(id)arg1 forChannelGroup:(id)arg2;
- (void)mergeServiceName:(id)arg1 withID:(unsigned long long)arg2 toChannels:(struct __CFDictionary { }*)arg3;
- (void)modelAPSoCPower:(id)arg1;
- (BOOL)processNotificationForChannelGroup:(id)arg1;
- (void)pruneAllChannelsWithChannels:(struct __CFDictionary { }*)arg1;
- (void)pruneChannelsWithChannels:(struct __CFDictionary { }*)arg1 withTargetSet:(id)arg2;
- (id)sampleChannelsDaily;
- (id)sampleChannelsHalfHour;
- (id)sampleChannelsSignificantBattery;
- (id)sampleDeltaForChannelGroup:(id)arg1;
- (void)setBatteryLevelChangedNotifications:(id)arg1;
- (void)setSampleChannelsDaily:(id)arg1;
- (void)setSampleChannelsHalfHour:(id)arg1;
- (void)setSampleChannelsSignificantBattery:(id)arg1;

@end
