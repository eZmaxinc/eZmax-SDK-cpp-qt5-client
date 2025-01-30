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
 * Common_Response_Error_sTemporaryFileUrl.h
 *
 * Generic Error Message
 */

#ifndef Common_Response_Error_sTemporaryFileUrl_H
#define Common_Response_Error_sTemporaryFileUrl_H

#include <QJsonObject>

#include "Field_eErrorCode.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Common_Response_Error_sTemporaryFileUrl : public Object {
public:
    Common_Response_Error_sTemporaryFileUrl();
    Common_Response_Error_sTemporaryFileUrl(QString json);
    ~Common_Response_Error_sTemporaryFileUrl() override;

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

    QString getSTemporaryFileUrl() const;
    void setSTemporaryFileUrl(const QString &s_temporary_file_url);
    bool is_s_temporary_file_url_Set() const;
    bool is_s_temporary_file_url_Valid() const;

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

    QString m_s_temporary_file_url;
    bool m_s_temporary_file_url_isSet;
    bool m_s_temporary_file_url_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Response_Error_sTemporaryFileUrl)

#endif // Common_Response_Error_sTemporaryFileUrl_H
