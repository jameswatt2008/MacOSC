/*****************************************************************************************
 ** The MIT License (MIT)

 ** Copyright (c) 2013 BruceZCQ
 ** http://zhucongqi.cn
 ** Contact: brucezcq@gmail.com

 ** Permission is hereby granted, free of charge, to any person obtaining a copy of
 ** this software and associated documentation files (the "Software"), to deal in
 ** the Software without restriction, including without limitation the rights to
 ** use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 ** the Software, and to permit persons to whom the Software is furnished to do so,
 ** subject to the following conditions:

 ** The above copyright notice and this permission notice shall be included in all
 ** copies or substantial portions of the Software.

 ** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 ** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 ** FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 ** COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 ** IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 ** CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *****************************************************************************************/

#ifndef OSCUSER_H
#define OSCUSER_H

#include "Common/common.h"

class OSCUser
{
public:
    OSCUser(QHash<QString,QString> hash);
    quint32 getUid();
    QString getLocation();
    QString getName();
    quint32 getFollowers();
    quint32 getFans();
    quint32 getScore();
    QString getPortrait();

private:
    quint32 uid;                //user id
    QString location;          // user location
    QString name;              // user name
    quint32 followers;          // user follower count
    quint32 fans;               // user fan count
    quint32 score;              // user score
    QString portrait;          // user avatar url
};

#endif // OSCUSER_H
