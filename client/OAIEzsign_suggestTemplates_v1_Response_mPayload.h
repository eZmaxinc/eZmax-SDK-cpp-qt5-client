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
 * OAIEzsign_suggestTemplates_v1_Response_mPayload.h
 *
 * Payload for GET /1/module/ezsign/suggestTemplates
 */

#ifndef OAIEzsign_suggestTemplates_v1_Response_mPayload_H
#define OAIEzsign_suggestTemplates_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplate_ResponseCompound.h"
#include "OAIEzsigntemplatepackage_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_ResponseCompound;
class OAIEzsigntemplatepackage_ResponseCompound;

class OAIEzsign_suggestTemplates_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsign_suggestTemplates_v1_Response_mPayload();
    OAIEzsign_suggestTemplates_v1_Response_mPayload(QString json);
    ~OAIEzsign_suggestTemplates_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplate_ResponseCompound> getAObjEzsigntemplate() const;
    void setAObjEzsigntemplate(const QList<OAIEzsigntemplate_ResponseCompound> &a_obj_ezsigntemplate);
    bool is_a_obj_ezsigntemplate_Set() const;
    bool is_a_obj_ezsigntemplate_Valid() const;

    QList<OAIEzsigntemplatepackage_ResponseCompound> getAObjEzsigntemplatepackage() const;
    void setAObjEzsigntemplatepackage(const QList<OAIEzsigntemplatepackage_ResponseCompound> &a_obj_ezsigntemplatepackage);
    bool is_a_obj_ezsigntemplatepackage_Set() const;
    bool is_a_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplate_ResponseCompound> a_obj_ezsigntemplate;
    bool m_a_obj_ezsigntemplate_isSet;
    bool m_a_obj_ezsigntemplate_isValid;

    QList<OAIEzsigntemplatepackage_ResponseCompound> a_obj_ezsigntemplatepackage;
    bool m_a_obj_ezsigntemplatepackage_isSet;
    bool m_a_obj_ezsigntemplatepackage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsign_suggestTemplates_v1_Response_mPayload)

#endif // OAIEzsign_suggestTemplates_v1_Response_mPayload_H
