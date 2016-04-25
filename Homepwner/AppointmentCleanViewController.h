#import <UIKit/UIKit.h>
#import <TapkuLibrary/TapkuLibrary.h>
#import <MessageUI/MessageUI.h>
#import "RNGridMenu.h"
#import "MCTReachability.h"

@import Contacts;
@interface AppointmentCleanViewController : UITableViewController <MFMailComposeViewControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, RNGridMenuDelegate>

@property (nonatomic,strong) NSArray *cells;

@property (nonatomic, strong) NSString  *nameString;
@property (nonatomic, strong) NSString  *emailString;

@property (nonatomic, strong) NSString  *phoneString;
@property (nonatomic, strong) NSString  *moveInDateString;
@property (nonatomic, strong) NSString  *petsString;
@property (nonatomic, strong) NSString  *priceString;
@property (nonatomic, strong) NSString  *neighborhoodString;
@property (nonatomic, strong) NSString  *aptsizeString;
@property (nonatomic, strong) NSString  *roomsString;
@property (nonatomic, strong) NSString  *bathsString;
@property (nonatomic, strong) NSString  *accessString;
@property (nonatomic, strong) NSString  *guarantorString;
@property (nonatomic, strong) NSString  *timeString;
@property (nonatomic, strong) NSString  *addressString;

@property (nonatomic, strong) MCTReachability *reach;

@property (nonatomic, strong) NSString *calendarNotesString;

@property (nonatomic, strong) CNContactStore *contactStore;// = [[CNContactStore alloc] init];
@property (nonatomic, strong) CNMutableContact *contact;//  = [[CNMutableContact alloc] init];



@end