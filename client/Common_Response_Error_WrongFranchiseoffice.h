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
 * Common_Response_Error_WrongFranchiseoffice.h
 *
 * Error Message when a Franchisebroker is not in this Franchiseoffice.
 */

#ifndef Common_Response_Error_WrongFranchiseoffice_H
#define Common_Response_Error_WrongFranchiseoffice_H

#include <QJsonObject>

#include "Field_eErrorCode.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Common_Response_Error_WrongFranchiseoffice : public Object {
public:
    Common_Response_Error_WrongFranchiseoffice();
    Common_Response_Error_WrongFranchiseoffice(QString json);
    ~Common_Response_Error_WrongFranchiseoffice() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSErrorMessage() const;
    void setSErrorMessage(const QString &s_error_message);
    bool is_s_error_message_Set() const;
    bool is_s_error_message_Valid() const;

    Field_eErrorCode getEErrorCode() const;
    void setEErrorCode(const Field_eErrorCode &e_error_code);
    bool is_e_error_code_Set() const;
    bool is_e_error_code_Valid() const;

    QList<QString> getASErrorMessagedetail() const;
    void setASErrorMessagedetail(const QList<QString> &a_s_error_messagedetail);
    bool is_a_s_error_messagedetail_Set() const;
    bool is_a_s_error_messagedetail_Valid() const;

    qint32 getFkiFranchiseagenceId() const;
    void setFkiFranchiseagenceId(const qint32 &fki_franchiseagence_id);
    bool is_fki_franchiseagence_id_Set() const;
    bool is_fki_franchiseagence_id_Valid() const;

    QString getSFranchiseagenceName() const;
    void setSFranchiseagenceName(const QString &s_franchiseagence_name);
    bool is_s_franchiseagence_name_Set() const;
    bool is_s_franchiseagence_name_Valid() const;

    qint32 getFkiFranchiseofficeId() const;
    void setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id);
    bool is_fki_franchiseoffice_id_Set() const;
    bool is_fki_franchiseoffice_id_Valid() const;

    QString getIFranchiseofficeCode() const;
    void setIFranchiseofficeCode(const QString &i_franchiseoffice_code);
    bool is_i_franchiseoffice_code_Set() const;
    bool is_i_franchiseoffice_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_error_message;
    bool m_s_error_message_isSet;
    bool m_s_error_message_isValid;

    Field_eErrorCode m_e_error_code;
    bool m_e_error_code_isSet;
    bool m_e_error_code_isValid;

    QList<QString> m_a_s_error_messagedetail;
    bool m_a_s_error_messagedetail_isSet;
    bool m_a_s_error_messagedetail_isValid;

    qint32 m_fki_franchiseagence_id;
    bool m_fki_franchiseagence_id_isSet;
    bool m_fki_franchiseagence_id_isValid;

    QString m_s_franchiseagence_name;
    bool m_s_franchiseagence_name_isSet;
    bool m_s_franchiseagence_name_isValid;

    qint32 m_fki_franchiseoffice_id;
    bool m_fki_franchiseoffice_id_isSet;
    bool m_fki_franchiseoffice_id_isValid;

    QString m_i_franchiseoffice_code;
    bool m_i_franchiseoffice_code_isSet;
    bool m_i_franchiseoffice_code_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Response_Error_WrongFranchiseoffice)

#endif // Common_Response_Error_WrongFranchiseoffice_H
