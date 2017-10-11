# KxMenu-Objective-C
Import kxMenu on bridgeHeader.h
*** Pop up menu component

* How to use


let menuArray = [KxMenuItem.init(" Hi, Welcome to kxMenu", image: UIImage(named: "Touch"), target: self, action: #selector(onClickWelcome(_:)))]
        
        
KxMenu.setTitleFont(UIFont(name: "HelveticaNeue", size: 17))

//config
let options = OptionalConfiguration(arrowSize: 0,  //Indicates the arrow size
    marginXSpacing: 7,
    marginYSpacing: 7,
    intervalSpacing: 25,
    menuCornerRadius: 6,
    maskToBackground: true,
    shadowOfMenu: false,
    hasSeperatorLine: true,
    seperatorLineHasInsets: false,
    textColor: Colour(R: 0, G: 0, B: 0),
    menuBackgroundColor: Colour(R: 1, G: 1, B: 1)
)
        
        
KxMenu.show(in: self.view, from: (sender as AnyObject).frame, menuItems: menuArray, withOptions: options)
