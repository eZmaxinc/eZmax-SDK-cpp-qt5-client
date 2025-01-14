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
 * Ezdoctemplatetype_AutocompleteElement_Response.h
 *
 * A Ezdoctemplatetype AutocompleteElement Response
 */

#ifndef Ezdoctemplatetype_AutocompleteElement_Response_H
#define Ezdoctemplatetype_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezdoctemplatetype_AutocompleteElement_Response : public Object {
public:
    Ezdoctemplatetype_AutocompleteElement_Response();
    Ezdoctemplatetype_AutocompleteElement_Response(QString json);
    ~Ezdoctemplatetype_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzdoctemplatetypeId() const;
    void setPkiEzdoctemplatetypeId(const qint32 &pki_ezdoctemplatetype_id);
    bool is_pki_ezdoctemplatetype_id_Set() const;
    bool is_pki_ezdoctemplatetype_id_Valid() const;

    QString getSEzdoctemplatetypeDescriptionX() const;
    void setSEzdoctemplatetypeDescriptionX(const QString &s_ezdoctemplatetype_description_x);
    bool is_s_ezdoctemplatetype_description_x_Set() const;
    bool is_s_ezdoctemplatetype_description_x_Valid() const;

    bool isBEzdoctemplatetypeIsactive() const;
    void setBEzdoctemplatetypeIsactive(const bool &b_ezdoctemplatetype_isactive);
    bool is_b_ezdoctemplatetype_isactive_Set() const;
    bool is_b_ezdoctemplatetype_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezdoctemplatetype_id;
    bool m_pki_ezdoctemplatetype_id_isSet;
    bool m_pki_ezdoctemplatetype_id_isValid;

    QString m_s_ezdoctemplatetype_description_x;
    bool m_s_ezdoctemplatetype_description_x_isSet;
    bool m_s_ezdoctemplatetype_description_x_isValid;

    bool m_b_ezdoctemplatetype_isactive;
    bool m_b_ezdoctemplatetype_isactive_isSet;
    bool m_b_ezdoctemplatetype_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezdoctemplatetype_AutocompleteElement_Response)

#endif // Ezdoctemplatetype_AutocompleteElement_Response_H
