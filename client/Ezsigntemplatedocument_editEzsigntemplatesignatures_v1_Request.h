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
 * Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatesignatures
 */

#ifndef Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request_H
#define Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatesignature_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesignature_RequestCompound;

class Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request : public Object {
public:
    Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request();
    Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request(QString json);
    ~Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatesignature_RequestCompound> getAObjEzsigntemplatesignature() const;
    void setAObjEzsigntemplatesignature(const QList<Ezsigntemplatesignature_RequestCompound> &a_obj_ezsigntemplatesignature);
    bool is_a_obj_ezsigntemplatesignature_Set() const;
    bool is_a_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatesignature_RequestCompound> m_a_obj_ezsigntemplatesignature;
    bool m_a_obj_ezsigntemplatesignature_isSet;
    bool m_a_obj_ezsigntemplatesignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request)

#endif // Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request_H
