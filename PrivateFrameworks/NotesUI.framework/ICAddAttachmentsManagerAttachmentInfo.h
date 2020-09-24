/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICAttachment, NSString, NSURL, NSData, NSDictionary, UIImage, NSAttributedString;

@interface ICAddAttachmentsManagerAttachmentInfo : NSObject {

	BOOL _usesTemporaryFile;
	ICAttachment* _attachment;
	NSString* _title;
	NSURL* _mediaURL;
	NSString* _mediaUTI;
	NSData* _mediaData;
	NSDictionary* _metadata;
	NSString* _mediaFilenameExtension;
	UIImage* _image;
	NSAttributedString* _attributedContentText;

}

@property (nonatomic,retain) ICAttachment * attachment;                               //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                        //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) NSString * mediaUTI;                                     //@synthesize mediaUTI=_mediaUTI - In the implementation block
@property (nonatomic,retain) NSData * mediaData;                                      //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSString * mediaFilenameExtension;                       //@synthesize mediaFilenameExtension=_mediaFilenameExtension - In the implementation block
@property (nonatomic,retain) UIImage * image;                                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedContentText;              //@synthesize attributedContentText=_attributedContentText - In the implementation block
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (assign,nonatomic) BOOL usesTemporaryFile;                                  //@synthesize usesTemporaryFile=_usesTemporaryFile - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isPhoto;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)title;
-(void)setAttributedContentText:(NSAttributedString *)arg1 ;
-(ICAttachment *)attachment;
-(NSData *)mediaData;
-(void)setMediaData:(NSData *)arg1 ;
-(NSAttributedString *)attributedContentText;
-(UIImage *)image;
-(BOOL)isVideo;
-(NSURL *)mediaURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setMediaUTI:(NSString *)arg1 ;
-(NSString *)mediaUTI;
-(NSString *)mediaFilenameExtension;
-(BOOL)usesTemporaryFile;
-(id)attachmentIfExistsForAccount:(id)arg1 ;
-(unsigned long long)mediaSize;
-(void)deleteTemporaryImageFileIfNecessary;
-(void)setMediaFilenameExtension:(NSString *)arg1 ;
-(void)setUsesTemporaryFile:(BOOL)arg1 ;
@end
