/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsignbulksendsignermapping
 */

#ifndef OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload_H
#define OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload();
    OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload(QString json);
    ~OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignbulksendsignermappingId() const;
    void setAPkiEzsignbulksendsignermappingId(const QList<qint32> &a_pki_ezsignbulksendsignermapping_id);
    bool is_a_pki_ezsignbulksendsignermapping_id_Set() const;
    bool is_a_pki_ezsignbulksendsignermapping_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsignbulksendsignermapping_id;
    bool m_a_pki_ezsignbulksendsignermapping_id_isSet;
    bool m_a_pki_ezsignbulksendsignermapping_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload)

#endif // OAIEzsignbulksendsignermapping_createObject_v1_Response_mPayload_H
