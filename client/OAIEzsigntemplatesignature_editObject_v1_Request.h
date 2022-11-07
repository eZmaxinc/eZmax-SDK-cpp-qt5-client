/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatesignature_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef OAIEzsigntemplatesignature_editObject_v1_Request_H
#define OAIEzsigntemplatesignature_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatesignature_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatesignature_RequestCompound;

class OAIEzsigntemplatesignature_editObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatesignature_editObject_v1_Request();
    OAIEzsigntemplatesignature_editObject_v1_Request(QString json);
    ~OAIEzsigntemplatesignature_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatesignature_RequestCompound getObjEzsigntemplatesignature() const;
    void setObjEzsigntemplatesignature(const OAIEzsigntemplatesignature_RequestCompound &obj_ezsigntemplatesignature);
    bool is_obj_ezsigntemplatesignature_Set() const;
    bool is_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatesignature_RequestCompound obj_ezsigntemplatesignature;
    bool m_obj_ezsigntemplatesignature_isSet;
    bool m_obj_ezsigntemplatesignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesignature_editObject_v1_Request)

#endif // OAIEzsigntemplatesignature_editObject_v1_Request_H
