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
 * OAIEzsigndocumentlog_Response.h
 *
 * An Ezsigndocumentlog Object
 */

#ifndef OAIEzsigndocumentlog_Response_H
#define OAIEzsigndocumentlog_Response_H

#include <QJsonObject>

#include "OAIField_eEzsigndocumentlogType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocumentlog_Response : public OAIObject {
public:
    OAIEzsigndocumentlog_Response();
    OAIEzsigndocumentlog_Response(QString json);
    ~OAIEzsigndocumentlog_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiEzsignsignerId() const;
    void setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id);
    bool is_fki_ezsignsigner_id_Set() const;
    bool is_fki_ezsignsigner_id_Valid() const;

    QString getDtEzsigndocumentlogDatetime() const;
    void setDtEzsigndocumentlogDatetime(const QString &dt_ezsigndocumentlog_datetime);
    bool is_dt_ezsigndocumentlog_datetime_Set() const;
    bool is_dt_ezsigndocumentlog_datetime_Valid() const;

    OAIField_eEzsigndocumentlogType getEEzsigndocumentlogType() const;
    void setEEzsigndocumentlogType(const OAIField_eEzsigndocumentlogType &e_ezsigndocumentlog_type);
    bool is_e_ezsigndocumentlog_type_Set() const;
    bool is_e_ezsigndocumentlog_type_Valid() const;

    QString getSEzsigndocumentlogDetail() const;
    void setSEzsigndocumentlogDetail(const QString &s_ezsigndocumentlog_detail);
    bool is_s_ezsigndocumentlog_detail_Set() const;
    bool is_s_ezsigndocumentlog_detail_Valid() const;

    QString getSEzsigndocumentlogLastname() const;
    void setSEzsigndocumentlogLastname(const QString &s_ezsigndocumentlog_lastname);
    bool is_s_ezsigndocumentlog_lastname_Set() const;
    bool is_s_ezsigndocumentlog_lastname_Valid() const;

    QString getSEzsigndocumentlogFirstname() const;
    void setSEzsigndocumentlogFirstname(const QString &s_ezsigndocumentlog_firstname);
    bool is_s_ezsigndocumentlog_firstname_Set() const;
    bool is_s_ezsigndocumentlog_firstname_Valid() const;

    QString getSEzsigndocumentlogIp() const;
    void setSEzsigndocumentlogIp(const QString &s_ezsigndocumentlog_ip);
    bool is_s_ezsigndocumentlog_ip_Set() const;
    bool is_s_ezsigndocumentlog_ip_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 fki_ezsignsigner_id;
    bool m_fki_ezsignsigner_id_isSet;
    bool m_fki_ezsignsigner_id_isValid;

    QString dt_ezsigndocumentlog_datetime;
    bool m_dt_ezsigndocumentlog_datetime_isSet;
    bool m_dt_ezsigndocumentlog_datetime_isValid;

    OAIField_eEzsigndocumentlogType e_ezsigndocumentlog_type;
    bool m_e_ezsigndocumentlog_type_isSet;
    bool m_e_ezsigndocumentlog_type_isValid;

    QString s_ezsigndocumentlog_detail;
    bool m_s_ezsigndocumentlog_detail_isSet;
    bool m_s_ezsigndocumentlog_detail_isValid;

    QString s_ezsigndocumentlog_lastname;
    bool m_s_ezsigndocumentlog_lastname_isSet;
    bool m_s_ezsigndocumentlog_lastname_isValid;

    QString s_ezsigndocumentlog_firstname;
    bool m_s_ezsigndocumentlog_firstname_isSet;
    bool m_s_ezsigndocumentlog_firstname_isValid;

    QString s_ezsigndocumentlog_ip;
    bool m_s_ezsigndocumentlog_ip_isSet;
    bool m_s_ezsigndocumentlog_ip_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocumentlog_Response)

#endif // OAIEzsigndocumentlog_Response_H
