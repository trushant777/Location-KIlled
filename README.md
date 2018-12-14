Getting Location Updates for iOS 7 and 8 Even when the App is Killed/Terminated/Suspended
============================

A couple months ago, I found a way to get the location update from iOS 7 and 8 even when the app is not 
active on foreground and not in the background. Yes, you may get the GPS coordinates from the iOS devices 
even when the app is killed/terminated either by the user or the iOS itself.

Steps to Test this Solution
============================

Here are the steps to use this solution:-

    1. Download the project from Git Hub.
    2. Change to your own Bundle Identifier (If need to)
    3. Connect your iPhone with your mac.
    4. Launch the app into your iPhone.
    5. Killed the app. (Double tap and remove the app from the App Preview)
    6. Travel around with your iPhone for a few days.
    7. Download the LocationArray.plist to inspect from the File Sharing interface in iTunes.
    8. From the PLIst, you will see something like the screen shot below:-
