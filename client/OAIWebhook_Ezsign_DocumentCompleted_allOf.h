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
 * OAIWebhook_Ezsign_DocumentCompleted_allOf.h
 *
 * 
 */

#ifndef OAIWebhook_Ezsign_DocumentCompleted_allOf_H
#define OAIWebhook_Ezsign_DocumentCompleted_allOf_H

#include <QJsonObject>

#include "OAIEzsigndocument_Response.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigndocument_Response;

class OAIWebhook_Ezsign_DocumentCompleted_allOf : public OAIObject {
public:
    OAIWebhook_Ezsign_DocumentCompleted_allOf();
    OAIWebhook_Ezsign_DocumentCompleted_allOf(QString json);
    ~OAIWebhook_Ezsign_DocumentCompleted_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_Response getObjEzsigndocument() const;
    void setObjEzsigndocument(const OAIEzsigndocument_Response &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigndocument_Response obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_Ezsign_DocumentCompleted_allOf)

#endif // OAIWebhook_Ezsign_DocumentCompleted_allOf_H
