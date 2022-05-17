/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsignbulksend
 */

#ifndef OAIEzsignbulksend_createObject_v1_Response_mPayload_H
#define OAIEzsignbulksend_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignbulksend_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksend_createObject_v1_Response_mPayload();
    OAIEzsignbulksend_createObject_v1_Response_mPayload(QString json);
    ~OAIEzsignbulksend_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignbulksendId() const;
    void setAPkiEzsignbulksendId(const QList<qint32> &a_pki_ezsignbulksend_id);
    bool is_a_pki_ezsignbulksend_id_Set() const;
    bool is_a_pki_ezsignbulksend_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsignbulksend_id;
    bool m_a_pki_ezsignbulksend_id_isSet;
    bool m_a_pki_ezsignbulksend_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_createObject_v1_Response_mPayload)

#endif // OAIEzsignbulksend_createObject_v1_Response_mPayload_H
