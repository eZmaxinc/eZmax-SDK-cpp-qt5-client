/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatedocument_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsigntemplatedocument
 */

#ifndef OAIEzsigntemplatedocument_createObject_v1_Response_mPayload_H
#define OAIEzsigntemplatedocument_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatedocument_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatedocument_createObject_v1_Response_mPayload();
    OAIEzsigntemplatedocument_createObject_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatedocument_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsigntemplatedocumentId() const;
    void setAPkiEzsigntemplatedocumentId(const QList<qint32> &a_pki_ezsigntemplatedocument_id);
    bool is_a_pki_ezsigntemplatedocument_id_Set() const;
    bool is_a_pki_ezsigntemplatedocument_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsigntemplatedocument_id;
    bool m_a_pki_ezsigntemplatedocument_id_isSet;
    bool m_a_pki_ezsigntemplatedocument_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_createObject_v1_Response_mPayload)

#endif // OAIEzsigntemplatedocument_createObject_v1_Response_mPayload_H
