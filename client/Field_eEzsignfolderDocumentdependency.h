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
 * Field_eEzsignfolderDocumentdependency.h
 *
 * Indicates if document dependencies apply to all users or just to Ezsignsigner
 */

#ifndef Field_eEzsignfolderDocumentdependency_H
#define Field_eEzsignfolderDocumentdependency_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsignfolderDocumentdependency : public Enum {
public:
    Field_eEzsignfolderDocumentdependency();
    Field_eEzsignfolderDocumentdependency(QString json);
    ~Field_eEzsignfolderDocumentdependency() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsignfolderDocumentdependency {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ALL, 
        EZSIGNSIGNERONLY
    };
    Field_eEzsignfolderDocumentdependency::eField_eEzsignfolderDocumentdependency getValue() const;
    void setValue(const Field_eEzsignfolderDocumentdependency::eField_eEzsignfolderDocumentdependency& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsignfolderDocumentdependency m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsignfolderDocumentdependency)

#endif // Field_eEzsignfolderDocumentdependency_H
