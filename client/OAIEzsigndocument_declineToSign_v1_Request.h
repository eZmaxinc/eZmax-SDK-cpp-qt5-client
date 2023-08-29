/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_declineToSign_v1_Request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/declineToSign
 */

#ifndef OAIEzsigndocument_declineToSign_v1_Request_H
#define OAIEzsigndocument_declineToSign_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_declineToSign_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_declineToSign_v1_Request();
    OAIEzsigndocument_declineToSign_v1_Request(QString json);
    ~OAIEzsigndocument_declineToSign_v1_Request() override;

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

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_declineToSign_v1_Request)

#endif // OAIEzsigndocument_declineToSign_v1_Request_H
