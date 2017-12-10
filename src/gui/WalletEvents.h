// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Copyright (c) 2017 Wayang developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QEvent>

namespace WalletGui
{
    enum class WalletEventType : quint32 {
        ShowMessage = QEvent::User
    };

    class ShowMessageEvent : public QEvent {
      Q_DISABLE_COPY(ShowMessageEvent)

    public:
        ShowMessageEvent(const QString &_messageText, QtMsgType _messageType) : QEvent(static_cast<QEvent::Type>(WalletEventType::ShowMessage)),
            m_messageText(_messageText), m_messgaeType(_messageType) {
        }

        QString messageText() const {
          return m_messageText;
        }

        QtMsgType messageType() const {
          return m_messgaeType;
        }

    private:
        QString m_messageText;
        QtMsgType m_messgaeType;
    };

}
