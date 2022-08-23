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
 * OAIFranchisereferalincome_createObject_v2_Request.h
 *
 * Request for POST /2/object/franchisereferalincome
 */

#ifndef OAIFranchisereferalincome_createObject_v2_Request_H
#define OAIFranchisereferalincome_createObject_v2_Request_H

#include <QJsonObject>

#include "OAIFranchisereferalincome_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIFranchisereferalincome_RequestCompound;

class OAIFranchisereferalincome_createObject_v2_Request : public OAIObject {
public:
    OAIFranchisereferalincome_createObject_v2_Request();
    OAIFranchisereferalincome_createObject_v2_Request(QString json);
    ~OAIFranchisereferalincome_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIFranchisereferalincome_RequestCompound> getAObjFranchisereferalincome() const;
    void setAObjFranchisereferalincome(const QList<OAIFranchisereferalincome_RequestCompound> &a_obj_franchisereferalincome);
    bool is_a_obj_franchisereferalincome_Set() const;
    bool is_a_obj_franchisereferalincome_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIFranchisereferalincome_RequestCompound> a_obj_franchisereferalincome;
    bool m_a_obj_franchisereferalincome_isSet;
    bool m_a_obj_franchisereferalincome_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFranchisereferalincome_createObject_v2_Request)

#endif // OAIFranchisereferalincome_createObject_v2_Request_H
