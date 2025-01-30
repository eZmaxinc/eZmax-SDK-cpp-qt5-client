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
 * Ezsigndocument_RequestPatch.h
 *
 * An Ezsigndocument Object
 */

#ifndef Ezsigndocument_RequestPatch_H
#define Ezsigndocument_RequestPatch_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigndocument_RequestPatch : public Object {
public:
    Ezsigndocument_RequestPatch();
    Ezsigndocument_RequestPatch(QString json);
    ~Ezsigndocument_RequestPatch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDtEzsigndocumentDuedate() const;
    void setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate);
    bool is_dt_ezsigndocument_duedate_Set() const;
    bool is_dt_ezsigndocument_duedate_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_dt_ezsigndocument_duedate;
    bool m_dt_ezsigndocument_duedate_isSet;
    bool m_dt_ezsigndocument_duedate_isValid;

    QString m_s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_RequestPatch)

#endif // Ezsigndocument_RequestPatch_H
