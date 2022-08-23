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
 * OAIEzsigndocument_getFormData_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getFormData
 */

#ifndef OAIEzsigndocument_getFormData_v1_Response_mPayload_H
#define OAIEzsigndocument_getFormData_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_FormDataDocument_Response.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_FormDataDocument_Response;

class OAIEzsigndocument_getFormData_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_getFormData_v1_Response_mPayload();
    OAIEzsigndocument_getFormData_v1_Response_mPayload(QString json);
    ~OAIEzsigndocument_getFormData_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICustom_FormDataDocument_Response getObjFormDataDocument() const;
    void setObjFormDataDocument(const OAICustom_FormDataDocument_Response &obj_form_data_document);
    bool is_obj_form_data_document_Set() const;
    bool is_obj_form_data_document_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICustom_FormDataDocument_Response obj_form_data_document;
    bool m_obj_form_data_document_isSet;
    bool m_obj_form_data_document_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_getFormData_v1_Response_mPayload)

#endif // OAIEzsigndocument_getFormData_v1_Response_mPayload_H
