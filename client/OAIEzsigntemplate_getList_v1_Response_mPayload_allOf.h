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
 * OAIEzsigntemplate_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplate_getList_v1_Response_mPayload_allOf_H
#define OAIEzsigntemplate_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplate_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_ListElement;

class OAIEzsigntemplate_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIEzsigntemplate_getList_v1_Response_mPayload_allOf();
    OAIEzsigntemplate_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIEzsigntemplate_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplate_ListElement> getAObjEzsigntemplate() const;
    void setAObjEzsigntemplate(const QList<OAIEzsigntemplate_ListElement> &a_obj_ezsigntemplate);
    bool is_a_obj_ezsigntemplate_Set() const;
    bool is_a_obj_ezsigntemplate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplate_ListElement> a_obj_ezsigntemplate;
    bool m_a_obj_ezsigntemplate_isSet;
    bool m_a_obj_ezsigntemplate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplate_getList_v1_Response_mPayload_allOf)

#endif // OAIEzsigntemplate_getList_v1_Response_mPayload_allOf_H
