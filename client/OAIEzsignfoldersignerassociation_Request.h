/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.47
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_Request.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef OAIEzsignfoldersignerassociation_Request_H
#define OAIEzsignfoldersignerassociation_Request_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_Request : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_Request();
    OAIEzsignfoldersignerassociation_Request(QString json);
    ~OAIEzsignfoldersignerassociation_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_Request)

#endif // OAIEzsignfoldersignerassociation_Request_H
