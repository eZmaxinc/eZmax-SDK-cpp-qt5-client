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
 * OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf.h
 *
 * 
 */

#ifndef OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf_H
#define OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf : public OAIObject {
public:
    OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf();
    OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf(QString json);
    ~OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBEzsignfoldersignerassociationHasactionableelementsCurrent() const;
    void setBEzsignfoldersignerassociationHasactionableelementsCurrent(const bool &b_ezsignfoldersignerassociation_hasactionableelements_current);
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_current_Set() const;
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_current_Valid() const;

    bool isBEzsignfoldersignerassociationHasactionableelementsFuture() const;
    void setBEzsignfoldersignerassociationHasactionableelementsFuture(const bool &b_ezsignfoldersignerassociation_hasactionableelements_future);
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_future_Set() const;
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_future_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool b_ezsignfoldersignerassociation_hasactionableelements_current;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid;

    bool b_ezsignfoldersignerassociation_hasactionableelements_future;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf)

#endif // OAICustom_EzsignfoldersignerassociationActionableElement_Response_allOf_H
