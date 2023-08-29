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
 * OAIScim_GroupMember.h
 *
 * 
 */

#ifndef OAIScim_GroupMember_H
#define OAIScim_GroupMember_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIScim_GroupMember : public OAIObject {
public:
    OAIScim_GroupMember();
    OAIScim_GroupMember(QString json);
    ~OAIScim_GroupMember() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getValue() const;
    void setValue(const QString &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    QString getDisplay() const;
    void setDisplay(const QString &display);
    bool is_display_Set() const;
    bool is_display_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getRef() const;
    void setRef(const QString &ref);
    bool is_ref_Set() const;
    bool is_ref_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_value;
    bool m_value_isSet;
    bool m_value_isValid;

    QString m_display;
    bool m_display_isSet;
    bool m_display_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_ref;
    bool m_ref_isSet;
    bool m_ref_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIScim_GroupMember)

#endif // OAIScim_GroupMember_H
