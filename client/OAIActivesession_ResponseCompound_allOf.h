/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIActivesession_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIActivesession_ResponseCompound_allOf_H
#define OAIActivesession_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIActivesession_ResponseCompound_Apikey.h"
#include "OAIActivesession_ResponseCompound_User.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIActivesession_ResponseCompound_User;
class OAIActivesession_ResponseCompound_Apikey;

class OAIActivesession_ResponseCompound_allOf : public OAIObject {
public:
    OAIActivesession_ResponseCompound_allOf();
    OAIActivesession_ResponseCompound_allOf(QString json);
    ~OAIActivesession_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiPermissionId() const;
    void setAPkiPermissionId(const QList<qint32> &a_pki_permission_id);
    bool is_a_pki_permission_id_Set() const;
    bool is_a_pki_permission_id_Valid() const;

    OAIActivesession_ResponseCompound_User getObjUserReal() const;
    void setObjUserReal(const OAIActivesession_ResponseCompound_User &obj_user_real);
    bool is_obj_user_real_Set() const;
    bool is_obj_user_real_Valid() const;

    OAIActivesession_ResponseCompound_User getObjUserCloned() const;
    void setObjUserCloned(const OAIActivesession_ResponseCompound_User &obj_user_cloned);
    bool is_obj_user_cloned_Set() const;
    bool is_obj_user_cloned_Valid() const;

    OAIActivesession_ResponseCompound_Apikey getObjApikey() const;
    void setObjApikey(const OAIActivesession_ResponseCompound_Apikey &obj_apikey);
    bool is_obj_apikey_Set() const;
    bool is_obj_apikey_Valid() const;

    QList<QString> getAEModuleInternalname() const;
    void setAEModuleInternalname(const QList<QString> &a_e_module_internalname);
    bool is_a_e_module_internalname_Set() const;
    bool is_a_e_module_internalname_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_permission_id;
    bool m_a_pki_permission_id_isSet;
    bool m_a_pki_permission_id_isValid;

    OAIActivesession_ResponseCompound_User obj_user_real;
    bool m_obj_user_real_isSet;
    bool m_obj_user_real_isValid;

    OAIActivesession_ResponseCompound_User obj_user_cloned;
    bool m_obj_user_cloned_isSet;
    bool m_obj_user_cloned_isValid;

    OAIActivesession_ResponseCompound_Apikey obj_apikey;
    bool m_obj_apikey_isSet;
    bool m_obj_apikey_isValid;

    QList<QString> a_e_module_internalname;
    bool m_a_e_module_internalname_isSet;
    bool m_a_e_module_internalname_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIActivesession_ResponseCompound_allOf)

#endif // OAIActivesession_ResponseCompound_allOf_H
