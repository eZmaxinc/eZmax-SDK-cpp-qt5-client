/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Supply_Request.h
 *
 * A Supply Object
 */

#ifndef Supply_Request_H
#define Supply_Request_H

#include <QJsonObject>

#include "Multilingual_SupplyDescription.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_SupplyDescription;

class Supply_Request : public Object {
public:
    Supply_Request();
    Supply_Request(QString json);
    ~Supply_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiSupplyId() const;
    void setPkiSupplyId(const qint32 &pki_supply_id);
    bool is_pki_supply_id_Set() const;
    bool is_pki_supply_id_Valid() const;

    qint32 getFkiGlaccountId() const;
    void setFkiGlaccountId(const qint32 &fki_glaccount_id);
    bool is_fki_glaccount_id_Set() const;
    bool is_fki_glaccount_id_Valid() const;

    qint32 getFkiGlaccountcontainerId() const;
    void setFkiGlaccountcontainerId(const qint32 &fki_glaccountcontainer_id);
    bool is_fki_glaccountcontainer_id_Set() const;
    bool is_fki_glaccountcontainer_id_Valid() const;

    qint32 getFkiVariableexpenseId() const;
    void setFkiVariableexpenseId(const qint32 &fki_variableexpense_id);
    bool is_fki_variableexpense_id_Set() const;
    bool is_fki_variableexpense_id_Valid() const;

    QString getSSupplyCode() const;
    void setSSupplyCode(const QString &s_supply_code);
    bool is_s_supply_code_Set() const;
    bool is_s_supply_code_Valid() const;

    Multilingual_SupplyDescription getObjSupplyDescription() const;
    void setObjSupplyDescription(const Multilingual_SupplyDescription &obj_supply_description);
    bool is_obj_supply_description_Set() const;
    bool is_obj_supply_description_Valid() const;

    QString getDSupplyUnitprice() const;
    void setDSupplyUnitprice(const QString &d_supply_unitprice);
    bool is_d_supply_unitprice_Set() const;
    bool is_d_supply_unitprice_Valid() const;

    bool isBSupplyIsactive() const;
    void setBSupplyIsactive(const bool &b_supply_isactive);
    bool is_b_supply_isactive_Set() const;
    bool is_b_supply_isactive_Valid() const;

    bool isBSupplyVariableprice() const;
    void setBSupplyVariableprice(const bool &b_supply_variableprice);
    bool is_b_supply_variableprice_Set() const;
    bool is_b_supply_variableprice_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_supply_id;
    bool m_pki_supply_id_isSet;
    bool m_pki_supply_id_isValid;

    qint32 m_fki_glaccount_id;
    bool m_fki_glaccount_id_isSet;
    bool m_fki_glaccount_id_isValid;

    qint32 m_fki_glaccountcontainer_id;
    bool m_fki_glaccountcontainer_id_isSet;
    bool m_fki_glaccountcontainer_id_isValid;

    qint32 m_fki_variableexpense_id;
    bool m_fki_variableexpense_id_isSet;
    bool m_fki_variableexpense_id_isValid;

    QString m_s_supply_code;
    bool m_s_supply_code_isSet;
    bool m_s_supply_code_isValid;

    Multilingual_SupplyDescription m_obj_supply_description;
    bool m_obj_supply_description_isSet;
    bool m_obj_supply_description_isValid;

    QString m_d_supply_unitprice;
    bool m_d_supply_unitprice_isSet;
    bool m_d_supply_unitprice_isValid;

    bool m_b_supply_isactive;
    bool m_b_supply_isactive_isSet;
    bool m_b_supply_isactive_isValid;

    bool m_b_supply_variableprice;
    bool m_b_supply_variableprice_isSet;
    bool m_b_supply_variableprice_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Supply_Request)

#endif // Supply_Request_H
