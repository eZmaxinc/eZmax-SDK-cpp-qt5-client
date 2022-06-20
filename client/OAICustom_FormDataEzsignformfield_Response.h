/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_FormDataEzsignformfield_Response.h
 *
 * An Ezsignformfield Object
 */

#ifndef OAICustom_FormDataEzsignformfield_Response_H
#define OAICustom_FormDataEzsignformfield_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_FormDataEzsignformfield_Response : public OAIObject {
public:
    OAICustom_FormDataEzsignformfield_Response();
    OAICustom_FormDataEzsignformfield_Response(QString json);
    ~OAICustom_FormDataEzsignformfield_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignformfieldLabel() const;
    void setSEzsignformfieldLabel(const QString &s_ezsignformfield_label);
    bool is_s_ezsignformfield_label_Set() const;
    bool is_s_ezsignformfield_label_Valid() const;

    QString getSEzsignformfieldValue() const;
    void setSEzsignformfieldValue(const QString &s_ezsignformfield_value);
    bool is_s_ezsignformfield_value_Set() const;
    bool is_s_ezsignformfield_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_ezsignformfield_label;
    bool m_s_ezsignformfield_label_isSet;
    bool m_s_ezsignformfield_label_isValid;

    QString s_ezsignformfield_value;
    bool m_s_ezsignformfield_value_isSet;
    bool m_s_ezsignformfield_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_FormDataEzsignformfield_Response)

#endif // OAICustom_FormDataEzsignformfield_Response_H
