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
 * OAIEzsignbulksendsignermapping_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsignbulksendsignermapping
 */

#ifndef OAIEzsignbulksendsignermapping_createObject_v1_Request_H
#define OAIEzsignbulksendsignermapping_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignbulksendsignermapping_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksendsignermapping_RequestCompound;

class OAIEzsignbulksendsignermapping_createObject_v1_Request : public OAIObject {
public:
    OAIEzsignbulksendsignermapping_createObject_v1_Request();
    OAIEzsignbulksendsignermapping_createObject_v1_Request(QString json);
    ~OAIEzsignbulksendsignermapping_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignbulksendsignermapping_RequestCompound> getAObjEzsignbulksendsignermapping() const;
    void setAObjEzsignbulksendsignermapping(const QList<OAIEzsignbulksendsignermapping_RequestCompound> &a_obj_ezsignbulksendsignermapping);
    bool is_a_obj_ezsignbulksendsignermapping_Set() const;
    bool is_a_obj_ezsignbulksendsignermapping_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignbulksendsignermapping_RequestCompound> a_obj_ezsignbulksendsignermapping;
    bool m_a_obj_ezsignbulksendsignermapping_isSet;
    bool m_a_obj_ezsignbulksendsignermapping_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksendsignermapping_createObject_v1_Request)

#endif // OAIEzsignbulksendsignermapping_createObject_v1_Request_H
