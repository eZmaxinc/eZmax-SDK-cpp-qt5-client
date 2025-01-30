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
 * Modulegroup_Response.h
 *
 * A Modulegroup Object
 */

#ifndef Modulegroup_Response_H
#define Modulegroup_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Modulegroup_Response : public Object {
public:
    Modulegroup_Response();
    Modulegroup_Response(QString json);
    ~Modulegroup_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiModulegroupId() const;
    void setPkiModulegroupId(const qint32 &pki_modulegroup_id);
    bool is_pki_modulegroup_id_Set() const;
    bool is_pki_modulegroup_id_Valid() const;

    QString getSModulegroupNameX() const;
    void setSModulegroupNameX(const QString &s_modulegroup_name_x);
    bool is_s_modulegroup_name_x_Set() const;
    bool is_s_modulegroup_name_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_modulegroup_id;
    bool m_pki_modulegroup_id_isSet;
    bool m_pki_modulegroup_id_isValid;

    QString m_s_modulegroup_name_x;
    bool m_s_modulegroup_name_x_isSet;
    bool m_s_modulegroup_name_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Modulegroup_Response)

#endif // Modulegroup_Response_H
