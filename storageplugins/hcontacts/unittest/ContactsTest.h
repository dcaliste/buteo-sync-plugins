/*
 * This file is part of buteo-sync-plugins package
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 * Copyright (C) 2014 Jolla Ltd.
 *
 * Contributors: Sateesh Kavuri <sateesh.kavuri@nokia.com>
 *               Valério Valério <valerio.valerio@jolla.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef TESTCONTACTS_H_
#define TESTCONTACTS_H_

#include <QObject>

#include <QList>
#include <QStringList>
#include <QContactManager>
#include <QContactId>

namespace Buteo
{
    class StoragePlugin;
}

class ContactsTest : public QObject
{

Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();

    void testSuiteSingle();

    void testSuiteBatched();

    //void pf177715();
private:

    void runTestSuite( const QByteArray& aOriginalData, const QByteArray& aModifiedData,
                       Buteo::StoragePlugin& aPlugin, bool aBatched );

    /*
    void directDelete( const QList<QContactLocalId>& aContactIds, QContactManager& manager );

    void directAdd( const QStringList& aVCards, QContactManager& manager );
    */

};

#endif /* TESTCONTACTS_H_ */
