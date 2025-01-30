/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_declineToSign_v1_Request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/declineToSign
 */

#ifndef Ezsigndocument_declineToSign_v1_Request_H
#define Ezsigndocument_declineToSign_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigndocument_declineToSign_v1_Request : public Object {
public:
    Ezsigndocument_declineToSign_v1_Request();
    Ezsigndocument_declineToSign_v1_Request(QString json);
    ~Ezsigndocument_declineToSign_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSReason() const;
    void setSReason(const QString &s_reason);
    bool is_s_reason_Set() const;
    bool is_s_reason_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_reason;
    bool m_s_reason_isSet;
    bool m_s_reason_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_declineToSign_v1_Request)

#endif // Ezsigndocument_declineToSign_v1_Request_H
