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
 * OAIDepartment_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/department/getAutocomplete
 */

#ifndef OAIDepartment_getAutocomplete_v2_Response_mPayload_H
#define OAIDepartment_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIDepartment_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIDepartment_AutocompleteElement_Response;

class OAIDepartment_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIDepartment_getAutocomplete_v2_Response_mPayload();
    OAIDepartment_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIDepartment_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIDepartment_AutocompleteElement_Response> getAObjDepartment() const;
    void setAObjDepartment(const QList<OAIDepartment_AutocompleteElement_Response> &a_obj_department);
    bool is_a_obj_department_Set() const;
    bool is_a_obj_department_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIDepartment_AutocompleteElement_Response> a_obj_department;
    bool m_a_obj_department_isSet;
    bool m_a_obj_department_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDepartment_getAutocomplete_v2_Response_mPayload)

#endif // OAIDepartment_getAutocomplete_v2_Response_mPayload_H
