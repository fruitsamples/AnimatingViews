#import <AppKit/NSView.h>

typedef enum {
    ColumnLayout = 0,
    RowLayout,
    GridLayout
} Layout;


@interface SimpleLayoutView : NSView {
    Layout layoutStyle;
    IBOutlet NSColorWell *boxColorField;
}

/* How the subviews are organized
*/
- (Layout)layoutStyle;
- (void)setLayoutStyle:(Layout)newLayoutStyle;

/* Method to relayout the subviews
*/
- (void)layout;

/* Action methods for demo purposes
*/
- (IBAction)changeLayout:(id)sender;
- (IBAction)addABox:(id)sender;
- (IBAction)removeLastBox:(id)sender;

@end
