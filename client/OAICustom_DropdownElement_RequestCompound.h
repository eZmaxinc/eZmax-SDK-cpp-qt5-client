/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_DropdownElement_RequestCompound.h
 *
 * A Generic DropdownElement Object and children to create a complete structure
 */

#ifndef OAICustom_DropdownElement_RequestCompound_H
#define OAICustom_DropdownElement_RequestCompound_H

#include <QJsonObject>

#include "OAICustom_DropdownElement_Request.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_DropdownElement_RequestCompound : public OAIObject {
public:
    OAICustom_DropdownElement_RequestCompound();
    OAICustom_DropdownElement_RequestCompound(QString json);
    ~OAICustom_DropdownElement_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSLabel() const;
    void setSLabel(const QString &s_label);
    bool is_s_label_Set() const;
    bool is_s_label_Valid() const;

    QString getSValue() const;
    void setSValue(const QString &s_value);
    bool is_s_value_Set() const;
    bool is_s_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_label;
    bool m_s_label_isSet;
    bool m_s_label_isValid;

    QString s_value;
    bool m_s_value_isSet;
    bool m_s_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_DropdownElement_RequestCompound)

#endif // OAICustom_DropdownElement_RequestCompound_H
