/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContinuityPaymentCoordinator : NSObject <PKContinuityPaymentServiceDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    PKContinuityPaymentService * _continuityPaymentService;
    PKRemotePaymentRequest * _currentRemotePaymentRequest;
    <PKContinuityPaymentCoordinatorDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _deviceTotalUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> * _deviceUpdateTimeoutTimer;
    NSObject<OS_dispatch_queue> * _internalQueue;
    BOOL  _isUpdatingDevices;
    int  _messageSendCompleteCount;
    int  _messageSendCount;
    double  _updatePaymentDeviceTimeout;
}

@property (getter=isAwaitingReply, nonatomic, readonly) BOOL awaitingReply;
@property (nonatomic, readonly) PKRemotePaymentRequest *currentRemotePaymentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKContinuityPaymentCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) double updatePaymentDeviceTimeout;

- (void).cxx_destruct;
- (void)_deviceUpdateTimerDidTimeout;
- (void)_deviceUpdateTotalTimerDidTimeout;
- (void)_queue_sendPaymentStatus:(int)arg1 completion:(id /* block */)arg2;
- (void)_resetRequest;
- (void)_send_didReceiveCancellation;
- (void)_send_didReceivePayment:(id)arg1;
- (void)_send_didReceiveUpdatedPaymentDevice:(id)arg1;
- (void)_send_didTimeoutTotalUpdatePaymentDevices;
- (void)_send_didTimeoutUpdatePaymentDevices;
- (void)cancelRemotePaymentRequestWithCompletion:(id /* block */)arg1;
- (id)currentRemotePaymentRequest;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (id)initWithContinuityPaymentService:(id)arg1;
- (BOOL)isAwaitingReply;
- (void)sendPaymentClientUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)sendPaymentStatus:(int)arg1 completion:(id /* block */)arg2;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUpdatePaymentDeviceTimeout:(double)arg1;
- (double)updatePaymentDeviceTimeout;
- (void)updatePaymentDevices;

@end
