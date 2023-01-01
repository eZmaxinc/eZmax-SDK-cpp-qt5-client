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
 * OAICommon_Auditdetail.h
 *
 * Gives informations about the user that created the object or the last user to have modified it.  If the object was never modified after creation, both Created and Modified informations will be the same. 
 */

#ifndef OAICommon_Auditdetail_H
#define OAICommon_Auditdetail_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Auditdetail : public OAIObject {
public:
    OAICommon_Auditdetail();
    OAICommon_Auditdetail(QString json);
    ~OAICommon_Auditdetail() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiApikeyId() const;
    void setFkiApikeyId(const qint32 &fki_apikey_id);
    bool is_fki_apikey_id_Set() const;
    bool is_fki_apikey_id_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    QString getSUserLastname() const;
    void setSUserLastname(const QString &s_user_lastname);
    bool is_s_user_lastname_Set() const;
    bool is_s_user_lastname_Valid() const;

    QString getSUserFirstname() const;
    void setSUserFirstname(const QString &s_user_firstname);
    bool is_s_user_firstname_Set() const;
    bool is_s_user_firstname_Valid() const;

    QString getSApikeyDescriptionX() const;
    void setSApikeyDescriptionX(const QString &s_apikey_description_x);
    bool is_s_apikey_description_x_Set() const;
    bool is_s_apikey_description_x_Valid() const;

    QString getDtAuditdetailDate() const;
    void setDtAuditdetailDate(const QString &dt_auditdetail_date);
    bool is_dt_auditdetail_date_Set() const;
    bool is_dt_auditdetail_date_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 fki_apikey_id;
    bool m_fki_apikey_id_isSet;
    bool m_fki_apikey_id_isValid;

    QString s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    QString s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString s_apikey_description_x;
    bool m_s_apikey_description_x_isSet;
    bool m_s_apikey_description_x_isValid;

    QString dt_auditdetail_date;
    bool m_dt_auditdetail_date_isSet;
    bool m_dt_auditdetail_date_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Auditdetail)

#endif // OAICommon_Auditdetail_H
