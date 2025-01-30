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
 * Tranqcontract_getCommunicationsenders_v1_Response_mPayload.h
 *
 * Response for GET /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationsenders
 */

#ifndef Tranqcontract_getCommunicationsenders_v1_Response_mPayload_H
#define Tranqcontract_getCommunicationsenders_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_Communicationsender_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Communicationsender_Response;

class Tranqcontract_getCommunicationsenders_v1_Response_mPayload : public Object {
public:
    Tranqcontract_getCommunicationsenders_v1_Response_mPayload();
    Tranqcontract_getCommunicationsenders_v1_Response_mPayload(QString json);
    ~Tranqcontract_getCommunicationsenders_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Custom_Communicationsender_Response> getAObjCommunicationsenders() const;
    void setAObjCommunicationsenders(const QList<Custom_Communicationsender_Response> &a_obj_communicationsenders);
    bool is_a_obj_communicationsenders_Set() const;
    bool is_a_obj_communicationsenders_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Custom_Communicationsender_Response> m_a_obj_communicationsenders;
    bool m_a_obj_communicationsenders_isSet;
    bool m_a_obj_communicationsenders_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Tranqcontract_getCommunicationsenders_v1_Response_mPayload)

#endif // Tranqcontract_getCommunicationsenders_v1_Response_mPayload_H
