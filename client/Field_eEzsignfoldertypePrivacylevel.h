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
 * Field_eEzsignfoldertypePrivacylevel.h
 *
 * The Privacy level of the Ezsignfolder type.  * **User** is for personal folders use and cannot be shared * **Usergroup** is for shared folders and complex permission can be configured to control access
 */

#ifndef Field_eEzsignfoldertypePrivacylevel_H
#define Field_eEzsignfoldertypePrivacylevel_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsignfoldertypePrivacylevel : public Enum {
public:
    Field_eEzsignfoldertypePrivacylevel();
    Field_eEzsignfoldertypePrivacylevel(QString json);
    ~Field_eEzsignfoldertypePrivacylevel() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsignfoldertypePrivacylevel {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        USER, 
        USERGROUP
    };
    Field_eEzsignfoldertypePrivacylevel::eField_eEzsignfoldertypePrivacylevel getValue() const;
    void setValue(const Field_eEzsignfoldertypePrivacylevel::eField_eEzsignfoldertypePrivacylevel& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsignfoldertypePrivacylevel m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsignfoldertypePrivacylevel)

#endif // Field_eEzsignfoldertypePrivacylevel_H
