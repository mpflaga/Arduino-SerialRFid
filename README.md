# Arduino-SerialRfid
An example Arduino sketch of a library that decodes predefined RFid tags, generating a known idex character. Along with using a photocell (aka LDR) indicating that the tags has been removed. And will print out the ID of unknown RFid tags. 

##Use
Simply add new tag id's to RFtags[] in the RFidData.h file.
Specify the Serial object interface connected to the RDM6300 in the begin statement. And define the two A2D pins direclty connected to the photocell. No external circuitry is needed as the internal pull up is used and the 2nd pin is tied to ground. 

##Origin
Is that this library was created for the Arduino Impression5-GenomeMap project.