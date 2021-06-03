/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignfoldersignerassociation/createObject API Request
 */

#ifndef OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload_H
#define OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload();
    OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload(QString json);
    ~OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignfoldersignerassociationId() const;
    void setAPkiEzsignfoldersignerassociationId(const QList<qint32> &a_pki_ezsignfoldersignerassociation_id);
    bool is_a_pki_ezsignfoldersignerassociation_id_Set() const;
    bool is_a_pki_ezsignfoldersignerassociation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsignfoldersignerassociation_id;
    bool m_a_pki_ezsignfoldersignerassociation_id_isSet;
    bool m_a_pki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload)

#endif // OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload_H
