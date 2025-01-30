/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getFormsData
 */

#ifndef Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload_H
#define Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_FormsDataFolder_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_FormsDataFolder_Response;

class Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload : public Object {
public:
    Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload();
    Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload(QString json);
    ~Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Custom_FormsDataFolder_Response> getAObjFormsDataFolder() const;
    void setAObjFormsDataFolder(const QList<Custom_FormsDataFolder_Response> &a_obj_forms_data_folder);
    bool is_a_obj_forms_data_folder_Set() const;
    bool is_a_obj_forms_data_folder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Custom_FormsDataFolder_Response> m_a_obj_forms_data_folder;
    bool m_a_obj_forms_data_folder_isSet;
    bool m_a_obj_forms_data_folder_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload)

#endif // Ezsignbulksendtransmission_getFormsData_v1_Response_mPayload_H
