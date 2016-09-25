/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitiator : NSObject {
    NSString * _UUIDString;
    BOOL  _appleDeviceHasNewFW;
    NSMutableDictionary * _arrayOf64BitFileSizes;
    BOOL  _cancelOp;
    unsigned long  _contentCatalogPercentCompleted;
    double  _currentFDNoteTime;
    PTPWrappedBytes * _dataForTransaction;
    id  _delegate;
    PTPDeviceInfoDataset * _deviceInfo;
    BOOL  _deviceIsDummyPTPDevice;
    BOOL  _deviceIsPairedWithThisHost;
    BOOL  _deviceIsPasscodeLocked;
    unsigned short  _deviceProductID;
    NSString * _deviceSerialNumberString;
    unsigned short  _deviceVendorID;
    unsigned long  _estimatedNumOfDownloadableObjects;
    PTPEventPacket * _event;
    NSMutableArray * _eventQueue;
    unsigned long long  _excessReceivedDataSize;
    unsigned long  _lastAddedObject;
    unsigned long  _maxMetadata;
    unsigned long  _maxMetadataAndThumbnails;
    unsigned long  _maxMetadataBufferSize;
    unsigned long  _maxThumbnails;
    char * _metadataBuffer;
    BOOL  _needToReopenSession;
    unsigned long  _numOfDownloadableObjectsPlusFolders;
    unsigned short  _operationCode;
    BOOL  _requestPending;
    PTPOperationResponsePacket * _response;
    BOOL  _responseReceived;
    BOOL  _sessionOpen;
    NSMutableArray * _storages;
    unsigned long long  _totalFDFileSize;
    unsigned long long  _totalFDReceivedSize;
    unsigned long  _totalFDReportedProgress;
    unsigned long  _transactionID;
    PTPTransport * _transport;
    NSString * _userAssignedDeviceName;
}

- (id)UUIDString;
- (BOOL)allowKeepAwake;
- (void)appendDataBuffer:(void*)arg1 length:(unsigned long)arg2;
- (BOOL)appleDeviceHasNewFW;
- (int)asyncRequestDataOfFiles:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4 forOperation:(unsigned long)arg5;
- (id)asyncRetrieveDataOfFiles:(unsigned short)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (void)cancel;
- (BOOL)closeSession;
- (unsigned long)contentCatalogPercentCompleted;
- (id)dataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (void)dealloc;
- (BOOL)deleteFile:(id)arg1;
- (id)deviceDateTime;
- (id)deviceInfo;
- (BOOL)deviceIsDummyPTPDevice;
- (BOOL)deviceIsPairedWithThisHost;
- (BOOL)deviceIsPasscodeLocked;
- (unsigned short)deviceProductID;
- (id)devicePropertyDescDatasetForProperty:(unsigned short)arg1;
- (id)devicePropertyValueForProperty:(unsigned short)arg1;
- (void)deviceReset;
- (id)deviceSerialNumberString;
- (unsigned short)deviceStatus;
- (unsigned short)deviceVendorID;
- (unsigned long)getMaxObjects:(unsigned short)arg1;
- (void)handleData:(id)arg1;
- (void)handleDeviceRemoval;
- (void)handleEvent:(id)arg1;
- (void)handleReroutedEvent:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleStartData:(id)arg1;
- (id)initWithHostLocationID:(unsigned long)arg1;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6;
- (BOOL)initiateCapture;
- (id)initiator;
- (BOOL)isAccessRestrictedAppleDevice;
- (BOOL)isApplePTPCapable;
- (void)issueCancelEvent:(unsigned long)arg1;
- (void)issueCancelRequest:(unsigned long)arg1;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (unsigned long)maxMetadataBufferSize;
- (char *)metadataBuffer;
- (unsigned long)numObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (unsigned long)numOfDownloadableObjectsPlusFolders;
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectHandlesInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectHandlesInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (unsigned long long)objectInfo64BitSize:(unsigned long)arg1;
- (id)objectInfo:(unsigned long)arg1;
- (id)objectInfosForObjectsInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (BOOL)openSession;
- (id)partialDataFromFile:(id)arg1 fromOffset:(unsigned long)arg2 maxSize:(unsigned long)arg3 actualSize:(unsigned int*)arg4 useBuffer:(char *)arg5;
- (void)processUnhandledEvents;
- (void)readStorages;
- (id)refreshAssignedDeviceName;
- (BOOL)requestPending;
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)arg1;
- (unsigned short)saveFile:(id)arg1 to:(id)arg2;
- (unsigned short)savePartialFile:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4;
- (unsigned short)savePartialFileMD5:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 excessReceivedDataSize:(unsigned long long*)arg3 timeout:(double)arg4;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 maxDataSize:(unsigned long)arg3 excessReceivedDataSize:(unsigned long long*)arg4 timeout:(double)arg5;
- (id)sendRequest:(id)arg1 andSendData:(id)arg2;
- (id)sendRequest:(id)arg1 excessReceivedDataSize:(unsigned long long*)arg2 timeout:(double)arg3;
- (void)sentData:(id)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)setDeviceDateTime:(id)arg1;
- (BOOL)setDevicePropertyValue:(id)arg1 forProperty:(unsigned short)arg2;
- (BOOL)start;
- (void)stop;
- (id)storageForStorageID:(unsigned long)arg1;
- (id)storageIDs;
- (id)storageInfo:(unsigned long)arg1;
- (id)thumbDataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (double)timeOffset;
- (id)transport;
- (void)transportActivated;
- (int)transportConnectionStatus;
- (void)transportDeactivated;
- (id)userAssignedDeviceName;
- (BOOL)waitForResponseWithTimeout:(double)arg1 notifyProgressForFile:(id)arg2;

@end
