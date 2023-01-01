/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldertype_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsignfoldertype
 */

#ifndef OAIEzsignfoldertype_createObject_v1_Response_mPayload_H
#define OAIEzsignfoldertype_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldertype_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfoldertype_createObject_v1_Response_mPayload();
    OAIEzsignfoldertype_createObject_v1_Response_mPayload(QString json);
    ~OAIEzsignfoldertype_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignfoldertypeId() const;
    void setAPkiEzsignfoldertypeId(const QList<qint32> &a_pki_ezsignfoldertype_id);
    bool is_a_pki_ezsignfoldertype_id_Set() const;
    bool is_a_pki_ezsignfoldertype_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsignfoldertype_id;
    bool m_a_pki_ezsignfoldertype_id_isSet;
    bool m_a_pki_ezsignfoldertype_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_createObject_v1_Response_mPayload)

#endif // OAIEzsignfoldertype_createObject_v1_Response_mPayload_H
