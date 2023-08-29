/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Response_Error_EzsignformValidation.h
 *
 * Generic Error Message
 */

#ifndef OAICommon_Response_Error_EzsignformValidation_H
#define OAICommon_Response_Error_EzsignformValidation_H

#include <QJsonObject>

#include "OAICustom_Ezsignformfielderror_Response.h"
#include "OAIField_eErrorCode.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_Ezsignformfielderror_Response;

class OAICommon_Response_Error_EzsignformValidation : public OAIObject {
public:
    OAICommon_Response_Error_EzsignformValidation();
    OAICommon_Response_Error_EzsignformValidation(QString json);
    ~OAICommon_Response_Error_EzsignformValidation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_Ezsignformfielderror_Response> getAObjEzsignformfielderror() const;
    void setAObjEzsignformfielderror(const QList<OAICustom_Ezsignformfielderror_Response> &a_obj_ezsignformfielderror);
    bool is_a_obj_ezsignformfielderror_Set() const;
    bool is_a_obj_ezsignformfielderror_Valid() const;

    QString getSErrorMessage() const;
    void setSErrorMessage(const QString &s_error_message);
    bool is_s_error_message_Set() const;
    bool is_s_error_message_Valid() const;

    OAIField_eErrorCode getEErrorCode() const;
    void setEErrorCode(const OAIField_eErrorCode &e_error_code);
    bool is_e_error_code_Set() const;
    bool is_e_error_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICustom_Ezsignformfielderror_Response> m_a_obj_ezsignformfielderror;
    bool m_a_obj_ezsignformfielderror_isSet;
    bool m_a_obj_ezsignformfielderror_isValid;

    QString m_s_error_message;
    bool m_s_error_message_isSet;
    bool m_s_error_message_isValid;

    OAIField_eErrorCode m_e_error_code;
    bool m_e_error_code_isSet;
    bool m_e_error_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_Error_EzsignformValidation)

#endif // OAICommon_Response_Error_EzsignformValidation_H
