/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_Response_Error_EzsignformValidation.h
 *
 * Generic Error Message
 */

#ifndef Common_Response_Error_EzsignformValidation_H
#define Common_Response_Error_EzsignformValidation_H

#include <QJsonObject>

#include "Custom_Ezsignformfielderror_Response.h"
#include "Field_eErrorCode.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Ezsignformfielderror_Response;

class Common_Response_Error_EzsignformValidation : public Object {
public:
    Common_Response_Error_EzsignformValidation();
    Common_Response_Error_EzsignformValidation(QString json);
    ~Common_Response_Error_EzsignformValidation() override;

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

    QList<Custom_Ezsignformfielderror_Response> getAObjEzsignformfielderror() const;
    void setAObjEzsignformfielderror(const QList<Custom_Ezsignformfielderror_Response> &a_obj_ezsignformfielderror);
    bool is_a_obj_ezsignformfielderror_Set() const;
    bool is_a_obj_ezsignformfielderror_Valid() const;

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

    QList<Custom_Ezsignformfielderror_Response> m_a_obj_ezsignformfielderror;
    bool m_a_obj_ezsignformfielderror_isSet;
    bool m_a_obj_ezsignformfielderror_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Response_Error_EzsignformValidation)

#endif // Common_Response_Error_EzsignformValidation_H
