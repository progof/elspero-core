// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ESCCOIN_QT_ESCCOINADDRESSVALIDATOR_H
#define ESCCOIN_QT_ESCCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ElsperoAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ElsperoAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Elspero address widget validator, checks for a valid elspero address.
 */
class ElsperoAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ElsperoAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // ESCCOIN_QT_ESCCOINADDRESSVALIDATOR_H
