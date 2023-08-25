#include<iostream>
#include<string>

using namespace std;

class ISender{

public:
    virtual void sendContent() = 0;

};

class BluetoothManager: public ISender{
public:
	void searchDevices() {}
    void pairdevice(){}
	void turnOn() {}
	void turnOff(){}
    
    virtual void sendContent() {
        cout << "Bluetooth Sent" << endl;
    }

};

class WhatsUpManager : public ISender {
public:
	void turnOn() {}
	void turnOff() {}
	void joinGroup() {}
	void addMember(){}
	void createGroup() {}

    virtual void sendContent() {
        cout << "Whatsup Sent" << endl;
    }
};

class MailManager : public ISender{
public:
	void pullNewMails() {}
	void composeEmail(){}
	void addAttachement() {}

    virtual void sendContent() {
        cout << "Bluetooth Sent" << endl;
    }
};

class ImageGallery {
private:
	string images[5] = { "one.jpg","two.jpg","three.jpg","four.jpg","fiv.jpg"};
	ISender * ObjSender = nullptr;
public:
    //ImageGallery(ISender* ObjSenderParm):ObjSender{ObjSenderParm}{}
    
    void share(ISender* ObjSenderParm) {
        ObjSenderParm ->sendContent();
    }
};

int main() {

	MailManager* _mailManager = new  MailManager();
	BluetoothManager* _BluetoothManager = new  BluetoothManager();
	WhatsUpManager* _WhatsUpManager = new  WhatsUpManager();
	
	ImageGallery* imageMgmt = new  ImageGallery();
	imageMgmt->share(_BluetoothManager);
}