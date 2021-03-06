/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/SFReaderEventsListener.h>
#import <libobjc.A.dylib/SFReaderContext.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>

@protocol SFReaderWebProcessControllerProtocol, _SFReaderControllerDelegate, WKUIDelegatePrivate;
@class _WKRemoteObjectInterface, WBSReaderFontManager, WBSReaderConfigurationManager, NSMutableDictionary, NSTimer, WKWebView, NSString;

@interface _SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate> {

	id<SFReaderWebProcessControllerProtocol> _readerControllerProxy;
	_WKRemoteObjectInterface* _eventsListenerInterface;
	WBSReaderFontManager* _fontManager;
	WBSReaderConfigurationManager* _configurationManager;
	/*^block*/id _readerMailContentCompletionHandler;
	/*^block*/id _readerPrintContentCompletionHandler;
	NSMutableDictionary* _bookmarkIdentifierToReadingListItemInfoCompletionMap;
	/*^block*/id _actionsDelayedUntilReaderWebViewIsReady;
	NSTimer* _actionsDelayedUntilReaderWebViewIsReadyTimer;
	BOOL _readerAvailable;
	BOOL _contentIsReady;
	WKWebView* _webView;
	WKWebView* _readerWebView;
	id<_SFReaderControllerDelegate> _delegate;
	id<WKUIDelegatePrivate> _webViewUIDelegate;
	NSString* _articleText;

}

@property (__weak,readonly) WKWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (__weak,readonly) WKWebView * readerWebView;                                      //@synthesize readerWebView=_readerWebView - In the implementation block
@property (__weak) id<_SFReaderControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReaderAvailable) BOOL readerAvailable;                                  //@synthesize readerAvailable=_readerAvailable - In the implementation block
@property (assign,nonatomic) BOOL contentIsReady;                                           //@synthesize contentIsReady=_contentIsReady - In the implementation block
@property (assign,nonatomic,__weak) id<WKUIDelegatePrivate> webViewUIDelegate;              //@synthesize webViewUIDelegate=_webViewUIDelegate - In the implementation block
@property (nonatomic,readonly) NSString * articleText;                                      //@synthesize articleText=_articleText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WKUIDelegatePrivate>)webViewUIDelegate;
-(void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3 ;
-(WKWebView *)webView;
-(WKWebView *)readerWebView;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3 scrollOffsetDictionary:(id)arg4 ;
-(void)_collectReaderContentForMailWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)prepareReaderPrintingIFrameWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)contentIsReady;
-(void)_updateJavaScriptEnabled;
-(BOOL)shouldCreateArticleFinder;
-(BOOL)_readerWebViewIsReady;
-(void)setContentIsReady:(BOOL)arg1 ;
-(void)activateReader;
-(id)readerURL;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)collectArticleContent;
-(void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canIncreaseReaderTextSize;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2 ;
-(void)collectReaderContentForMailWithCompletion:(/*^block*/id)arg1 ;
-(void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2 ;
-(void)dealloc;
-(void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3 ;
-(NSString *)articleText;
-(void)_saveConfigurationAndSendToWebProcess;
-(void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2 ;
-(void)didPrepareReaderContentForPrinting:(id)arg1 ;
-(void)activateFont:(id)arg1 ;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3 ;
-(void)clearAvailability;
-(id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3 ;
-(void)loadNewArticle;
-(id)scrollPositionInformation;
-(BOOL)isReaderAvailable;
-(void)_setUpReaderActivityListener;
-(void)didDetermineReaderAvailabilityForDynamicCheck:(id)arg1 ;
-(void)setReaderLanguageTag:(id)arg1 ;
-(void)didSetReaderConfiguration:(id)arg1 ;
-(id)readerControllerProxy;
-(void)setReaderFont:(id)arg1 ;
-(void)owningWebViewDidCommitNavigation;
-(void)clearUnusedReaderResourcesSoon;
-(void)setDelegate:(id<_SFReaderControllerDelegate>)arg1 ;
-(void)setUpReaderWebViewIfNeededAndPerformBlock:(/*^block*/id)arg1 ;
-(void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1 ;
-(void)checkReaderAvailability;
-(void)deactivateReaderNow:(unsigned long long)arg1 ;
-(void)_sendReaderAvailabilityNotificationForState:(id)arg1 reason:(long long)arg2 ;
-(id)configurationManager;
-(void)increaseReaderTextSize;
-(BOOL)isLoadingNextPage;
-(id)initWithWebView:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setReaderIsActive:(BOOL)arg1 ;
-(void)sendConfigurationToWebProcess;
-(BOOL)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2 ;
-(id<_SFReaderControllerDelegate>)delegate;
-(void)stopLoadingNextPage;
-(void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2 ;
-(void)setWebViewUIDelegate:(id<WKUIDelegatePrivate>)arg1 ;
-(void)_webView:(id)arg1 dataInteractionOperationWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(id)arg4 ;
-(void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4 ;
-(void)decreaseReaderTextSize;
-(void)createArticleFinder;
-(void)clearReaderWebView;
-(void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(BOOL)arg3 ;
-(void)_webView:(id)arg1 getAlternateURLFromImage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performActionsDelayedUntilReaderWebViewIsReadyDidTimeout:(id)arg1 ;
-(BOOL)canDecreaseReaderTextSize;
-(id)fontManager;
-(BOOL)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2 ;
-(void)didCollectArticleContent:(id)arg1 ;
-(void)didCreateReaderWebView:(id)arg1 ;
-(void)setReaderAvailable:(BOOL)arg1 ;
-(void)didCollectReaderContentForMail:(id)arg1 ;
-(unsigned long long)_webView:(id)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3 ;
-(void)_performActionsDelayedUntilReaderWebViewIsReady;
-(void)resetReaderTextSize;
-(void)didDetermineReaderAvailability:(id)arg1 ;
@end

