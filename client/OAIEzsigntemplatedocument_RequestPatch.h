/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatedocument_RequestPatch.h
 *
 * An Ezsigntemplatedocument Object
 */

#ifndef OAIEzsigntemplatedocument_RequestPatch_H
#define OAIEzsigntemplatedocument_RequestPatch_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatedocument_RequestPatch : public OAIObject {
public:
    OAIEzsigntemplatedocument_RequestPatch();
    OAIEzsigntemplatedocument_RequestPatch(QString json);
    ~OAIEzsigntemplatedocument_RequestPatch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsigntemplatedocumentName() const;
    void setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name);
    bool is_s_ezsigntemplatedocument_name_Set() const;
    bool is_s_ezsigntemplatedocument_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_ezsigntemplatedocument_name;
    bool m_s_ezsigntemplatedocument_name_isSet;
    bool m_s_ezsigntemplatedocument_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_RequestPatch)

#endif // OAIEzsigntemplatedocument_RequestPatch_H
