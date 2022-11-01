/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_getFormsData_v1_Response_mPayload.h
 *
 * Payload for GET/1/object/ezsignbulksend/{pkiEzsignbulksendID}/getFormsData
 */

#ifndef OAIEzsignbulksend_getFormsData_v1_Response_mPayload_H
#define OAIEzsignbulksend_getFormsData_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_FormsDataFolder_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_FormsDataFolder_Response;

class OAIEzsignbulksend_getFormsData_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksend_getFormsData_v1_Response_mPayload();
    OAIEzsignbulksend_getFormsData_v1_Response_mPayload(QString json);
    ~OAIEzsignbulksend_getFormsData_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_FormsDataFolder_Response> getAObjFormsDataFolder() const;
    void setAObjFormsDataFolder(const QList<OAICustom_FormsDataFolder_Response> &a_obj_forms_data_folder);
    bool is_a_obj_forms_data_folder_Set() const;
    bool is_a_obj_forms_data_folder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICustom_FormsDataFolder_Response> a_obj_forms_data_folder;
    bool m_a_obj_forms_data_folder_isSet;
    bool m_a_obj_forms_data_folder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_getFormsData_v1_Response_mPayload)

#endif // OAIEzsignbulksend_getFormsData_v1_Response_mPayload_H
