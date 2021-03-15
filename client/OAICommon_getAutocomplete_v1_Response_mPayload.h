/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_getAutocomplete_v1_Response_mPayload.h
 *
 * Generic Autocomplete Response
 */

#ifndef OAICommon_getAutocomplete_v1_Response_mPayload_H
#define OAICommon_getAutocomplete_v1_Response_mPayload_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_getAutocomplete_v1_Response_mPayload : public OAIObject {
public:
    OAICommon_getAutocomplete_v1_Response_mPayload();
    OAICommon_getAutocomplete_v1_Response_mPayload(QString json);
    ~OAICommon_getAutocomplete_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getGroup() const;
    void setGroup(const QString &group);
    bool is_group_Set() const;
    bool is_group_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getOption() const;
    void setOption(const QString &option);
    bool is_option_Set() const;
    bool is_option_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString group;
    bool m_group_isSet;
    bool m_group_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString option;
    bool m_option_isSet;
    bool m_option_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_getAutocomplete_v1_Response_mPayload)

#endif // OAICommon_getAutocomplete_v1_Response_mPayload_H
