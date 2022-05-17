/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Response_Filter.h
 *
 * Definition of Filters for getList
 */

#ifndef OAICommon_Response_Filter_H
#define OAICommon_Response_Filter_H

#include <QJsonObject>

#include <QList>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Response_Filter : public OAIObject {
public:
    OAICommon_Response_Filter();
    OAICommon_Response_Filter(QString json);
    ~OAICommon_Response_Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QMap<QString, QString> getAAutoType() const;
    void setAAutoType(const QMap<QString, QString> &a_auto_type);
    bool is_a_auto_type_Set() const;
    bool is_a_auto_type_Valid() const;

    QMap<QString, QMap<QString, QString>> getAEnum() const;
    void setAEnum(const QMap<QString, QMap<QString, QString>> &a_enum);
    bool is_a_enum_Set() const;
    bool is_a_enum_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QMap<QString, QString> a_auto_type;
    bool m_a_auto_type_isSet;
    bool m_a_auto_type_isValid;

    QMap<QString, QMap<QString, QString>> a_enum;
    bool m_a_enum_isSet;
    bool m_a_enum_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_Filter)

#endif // OAICommon_Response_Filter_H
