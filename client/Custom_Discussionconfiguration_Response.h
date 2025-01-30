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
 * Custom_Discussionconfiguration_Response.h
 *
 * A Custom Discussionconfiguration Object
 */

#ifndef Custom_Discussionconfiguration_Response_H
#define Custom_Discussionconfiguration_Response_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_Discussionconfiguration_Response : public Object {
public:
    Custom_Discussionconfiguration_Response();
    Custom_Discussionconfiguration_Response(QString json);
    ~Custom_Discussionconfiguration_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBDiscussionconfigurationCompletehistorywhenadded() const;
    void setBDiscussionconfigurationCompletehistorywhenadded(const bool &b_discussionconfiguration_completehistorywhenadded);
    bool is_b_discussionconfiguration_completehistorywhenadded_Set() const;
    bool is_b_discussionconfiguration_completehistorywhenadded_Valid() const;

    bool isBDiscussionconfigurationCreateallowed() const;
    void setBDiscussionconfigurationCreateallowed(const bool &b_discussionconfiguration_createallowed);
    bool is_b_discussionconfiguration_createallowed_Set() const;
    bool is_b_discussionconfiguration_createallowed_Valid() const;

    bool isBDiscussionconfigurationDeleteallowed() const;
    void setBDiscussionconfigurationDeleteallowed(const bool &b_discussionconfiguration_deleteallowed);
    bool is_b_discussionconfiguration_deleteallowed_Set() const;
    bool is_b_discussionconfiguration_deleteallowed_Valid() const;

    bool isBDiscussionconfigurationDeletediscussionmessageallowed() const;
    void setBDiscussionconfigurationDeletediscussionmessageallowed(const bool &b_discussionconfiguration_deletediscussionmessageallowed);
    bool is_b_discussionconfiguration_deletediscussionmessageallowed_Set() const;
    bool is_b_discussionconfiguration_deletediscussionmessageallowed_Valid() const;

    bool isBDiscussionconfigurationEditdiscussionmessageallowed() const;
    void setBDiscussionconfigurationEditdiscussionmessageallowed(const bool &b_discussionconfiguration_editdiscussionmessageallowed);
    bool is_b_discussionconfiguration_editdiscussionmessageallowed_Set() const;
    bool is_b_discussionconfiguration_editdiscussionmessageallowed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_b_discussionconfiguration_completehistorywhenadded;
    bool m_b_discussionconfiguration_completehistorywhenadded_isSet;
    bool m_b_discussionconfiguration_completehistorywhenadded_isValid;

    bool m_b_discussionconfiguration_createallowed;
    bool m_b_discussionconfiguration_createallowed_isSet;
    bool m_b_discussionconfiguration_createallowed_isValid;

    bool m_b_discussionconfiguration_deleteallowed;
    bool m_b_discussionconfiguration_deleteallowed_isSet;
    bool m_b_discussionconfiguration_deleteallowed_isValid;

    bool m_b_discussionconfiguration_deletediscussionmessageallowed;
    bool m_b_discussionconfiguration_deletediscussionmessageallowed_isSet;
    bool m_b_discussionconfiguration_deletediscussionmessageallowed_isValid;

    bool m_b_discussionconfiguration_editdiscussionmessageallowed;
    bool m_b_discussionconfiguration_editdiscussionmessageallowed_isSet;
    bool m_b_discussionconfiguration_editdiscussionmessageallowed_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Discussionconfiguration_Response)

#endif // Custom_Discussionconfiguration_Response_H
