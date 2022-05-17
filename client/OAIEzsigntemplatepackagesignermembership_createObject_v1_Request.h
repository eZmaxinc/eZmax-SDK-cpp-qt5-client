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
 * OAIEzsigntemplatepackagesignermembership_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatepackagesignermembership
 */

#ifndef OAIEzsigntemplatepackagesignermembership_createObject_v1_Request_H
#define OAIEzsigntemplatepackagesignermembership_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagesignermembership_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagesignermembership_RequestCompound;

class OAIEzsigntemplatepackagesignermembership_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatepackagesignermembership_createObject_v1_Request();
    OAIEzsigntemplatepackagesignermembership_createObject_v1_Request(QString json);
    ~OAIEzsigntemplatepackagesignermembership_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatepackagesignermembership_RequestCompound> getAObjEzsigntemplatepackagesignermembership() const;
    void setAObjEzsigntemplatepackagesignermembership(const QList<OAIEzsigntemplatepackagesignermembership_RequestCompound> &a_obj_ezsigntemplatepackagesignermembership);
    bool is_a_obj_ezsigntemplatepackagesignermembership_Set() const;
    bool is_a_obj_ezsigntemplatepackagesignermembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatepackagesignermembership_RequestCompound> a_obj_ezsigntemplatepackagesignermembership;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isSet;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagesignermembership_createObject_v1_Request)

#endif // OAIEzsigntemplatepackagesignermembership_createObject_v1_Request_H
