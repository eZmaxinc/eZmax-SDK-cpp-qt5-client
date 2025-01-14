/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Tranqcontract_getCommunicationCount_v1_Response_mPayload.h
 *
 * Response for GET /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationCount
 */

#ifndef Tranqcontract_getCommunicationCount_v1_Response_mPayload_H
#define Tranqcontract_getCommunicationCount_v1_Response_mPayload_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Tranqcontract_getCommunicationCount_v1_Response_mPayload : public Object {
public:
    Tranqcontract_getCommunicationCount_v1_Response_mPayload();
    Tranqcontract_getCommunicationCount_v1_Response_mPayload(QString json);
    ~Tranqcontract_getCommunicationCount_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getICommunicationCount() const;
    void setICommunicationCount(const qint32 &i_communication_count);
    bool is_i_communication_count_Set() const;
    bool is_i_communication_count_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_communication_count;
    bool m_i_communication_count_isSet;
    bool m_i_communication_count_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Tranqcontract_getCommunicationCount_v1_Response_mPayload)

#endif // Tranqcontract_getCommunicationCount_v1_Response_mPayload_H
