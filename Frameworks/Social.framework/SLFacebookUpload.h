/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookUpload : NSObject <NSSecureCoding> {
    unsigned long long  _totalBytes;
    unsigned long long  _transferredBytes;
    NSString * _uploadID;
    int  _uploadType;
}

@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long transferredBytes;
@property (nonatomic, retain) NSString *uploadID;
@property (nonatomic) int uploadType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTotalBytes:(unsigned long long)arg1;
- (void)setTransferredBytes:(unsigned long long)arg1;
- (void)setUploadID:(id)arg1;
- (void)setUploadType:(int)arg1;
- (unsigned long long)totalBytes;
- (unsigned long long)transferredBytes;
- (id)uploadID;
- (int)uploadType;

@end
