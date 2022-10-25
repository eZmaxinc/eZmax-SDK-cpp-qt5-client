/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplate_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef OAIEzsigntemplate_editObject_v1_Request_H
#define OAIEzsigntemplate_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplate_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_RequestCompound;

class OAIEzsigntemplate_editObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplate_editObject_v1_Request();
    OAIEzsigntemplate_editObject_v1_Request(QString json);
    ~OAIEzsigntemplate_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplate_RequestCompound getObjEzsigntemplate() const;
    void setObjEzsigntemplate(const OAIEzsigntemplate_RequestCompound &obj_ezsigntemplate);
    bool is_obj_ezsigntemplate_Set() const;
    bool is_obj_ezsigntemplate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplate_RequestCompound obj_ezsigntemplate;
    bool m_obj_ezsigntemplate_isSet;
    bool m_obj_ezsigntemplate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplate_editObject_v1_Request)

#endif // OAIEzsigntemplate_editObject_v1_Request_H
