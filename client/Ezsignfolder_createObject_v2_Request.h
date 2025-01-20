/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfolder_createObject_v2_Request.h
 *
 * Request for POST /2/object/ezsignfolder
 */

#ifndef Ezsignfolder_createObject_v2_Request_H
#define Ezsignfolder_createObject_v2_Request_H

#include <QJsonObject>

#include "Ezsignfolder_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfolder_RequestCompound;

class Ezsignfolder_createObject_v2_Request : public Object {
public:
    Ezsignfolder_createObject_v2_Request();
    Ezsignfolder_createObject_v2_Request(QString json);
    ~Ezsignfolder_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignfolder_RequestCompound> getAObjEzsignfolder() const;
    void setAObjEzsignfolder(const QList<Ezsignfolder_RequestCompound> &a_obj_ezsignfolder);
    bool is_a_obj_ezsignfolder_Set() const;
    bool is_a_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignfolder_RequestCompound> m_a_obj_ezsignfolder;
    bool m_a_obj_ezsignfolder_isSet;
    bool m_a_obj_ezsignfolder_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_createObject_v2_Request)

#endif // Ezsignfolder_createObject_v2_Request_H
