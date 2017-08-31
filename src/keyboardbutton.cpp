#include "include/keyboardbutton.h"

KeyboardButton::keyboardButton(QJsonObject obj)
{
    root = obj;
    
    text = root["text"].toString();
    
    //Optional types
    if (root.contains("request_contact"))
        requestContact = root["request_contact"].toBool();
    
    if (root.contains("request_location"))
        requestLocation = root["request_location"].toBool();
}

KeyboardButton::KeyboardButton()
{
    
}

KeyboardButton KeyboardButton::fromObject(QJsonObject obj)
{
    return KeyboardButton(obj);
}

QString KeyboardButton::getText() const
{
    return text;
}

void KeyboardButton::setText(const QString &value)
{
    text = value;
}

bool KeyboardButton::getRequestContact() const
{
    return requestContact;
}

void KeyboardButton::setRequestContact(bool value)
{
    requestContact = value;
}

bool KeyboardButton::getRequestLocation() const
{
    return requestLocation;
}

void KeyboardButton::setRequestLocation(bool value)
{
    requestLocation = value;
}