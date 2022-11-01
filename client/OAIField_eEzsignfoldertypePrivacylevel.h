/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsignfoldertypePrivacylevel.h
 *
 * The Privacy level of the Ezsignfolder type.  * **User** is for personal folders use and cannot be shared * **Usergroup** is for shared folders and complex permission can be configured to control access
 */

#ifndef OAIField_eEzsignfoldertypePrivacylevel_H
#define OAIField_eEzsignfoldertypePrivacylevel_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignfoldertypePrivacylevel : public OAIEnum {
public:
    OAIField_eEzsignfoldertypePrivacylevel();
    OAIField_eEzsignfoldertypePrivacylevel(QString json);
    ~OAIField_eEzsignfoldertypePrivacylevel() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignfoldertypePrivacylevel {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        USER, 
        USERGROUP
    };
    OAIField_eEzsignfoldertypePrivacylevel::eOAIField_eEzsignfoldertypePrivacylevel getValue() const;
    void setValue(const OAIField_eEzsignfoldertypePrivacylevel::eOAIField_eEzsignfoldertypePrivacylevel& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignfoldertypePrivacylevel m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignfoldertypePrivacylevel)

#endif // OAIField_eEzsignfoldertypePrivacylevel_H
