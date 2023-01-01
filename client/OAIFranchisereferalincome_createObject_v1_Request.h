/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIFranchisereferalincome_createObject_v1_Request.h
 *
 * Request for POST /1/object/franchisereferalincome
 */

#ifndef OAIFranchisereferalincome_createObject_v1_Request_H
#define OAIFranchisereferalincome_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIFranchisereferalincome_Request.h"
#include "OAIFranchisereferalincome_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIFranchisereferalincome_Request;
class OAIFranchisereferalincome_RequestCompound;

class OAIFranchisereferalincome_createObject_v1_Request : public OAIObject {
public:
    OAIFranchisereferalincome_createObject_v1_Request();
    OAIFranchisereferalincome_createObject_v1_Request(QString json);
    ~OAIFranchisereferalincome_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIFranchisereferalincome_Request getObjFranchisereferalincome() const;
    void setObjFranchisereferalincome(const OAIFranchisereferalincome_Request &obj_franchisereferalincome);
    bool is_obj_franchisereferalincome_Set() const;
    bool is_obj_franchisereferalincome_Valid() const;

    OAIFranchisereferalincome_RequestCompound getObjFranchisereferalincomeCompound() const;
    void setObjFranchisereferalincomeCompound(const OAIFranchisereferalincome_RequestCompound &obj_franchisereferalincome_compound);
    bool is_obj_franchisereferalincome_compound_Set() const;
    bool is_obj_franchisereferalincome_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIFranchisereferalincome_Request obj_franchisereferalincome;
    bool m_obj_franchisereferalincome_isSet;
    bool m_obj_franchisereferalincome_isValid;

    OAIFranchisereferalincome_RequestCompound obj_franchisereferalincome_compound;
    bool m_obj_franchisereferalincome_compound_isSet;
    bool m_obj_franchisereferalincome_compound_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFranchisereferalincome_createObject_v1_Request)

#endif // OAIFranchisereferalincome_createObject_v1_Request_H
