#import <Foundation/Foundation.h>
#import <Silica/Silica.h>
#import "AccessibilityInfo.h"

@interface BBLAccessibilityObserver : NSObject


@property(readonly) NSArray<NSRunningApplication*>* applicationsToObserve;

@property(readonly,copy) NSDictionary<NSNumber*,AccessibilityInfo*>* accessibilityInfosByPid;  // for the focused app / window.


-(void) watchWindows;


-(void) onApplicationActivated:(SIAccessibilityElement*)element;

-(void) onFocusedWindowChanged:(SIWindow*)window;


-(void) onWindowCreated:(SIWindow*)window;

-(void) onWindowMinimised:(SIWindow*)window;

-(void) onWindowUnminimised:(SIWindow*)window;

-(void) onWindowMoved:(SIWindow*)window;

-(void) onWindowResized:(SIWindow*)window;


-(void) onTitleChanged:(SIWindow*)window;

-(void) onTextSelectionChanged:(SIAccessibilityElement*)element;


-(SIWindow*) keyWindowForApplication:(SIApplication*) application;

@end
