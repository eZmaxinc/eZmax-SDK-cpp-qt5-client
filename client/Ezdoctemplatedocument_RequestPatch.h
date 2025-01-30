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
 * Ezdoctemplatedocument_RequestPatch.h
 *
 * An Ezdoctemplatedocument Object
 */

#ifndef Ezdoctemplatedocument_RequestPatch_H
#define Ezdoctemplatedocument_RequestPatch_H

#include <QJsonObject>

#include <QByteArray>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezdoctemplatedocument_RequestPatch : public Object {
public:
    Ezdoctemplatedocument_RequestPatch();
    Ezdoctemplatedocument_RequestPatch(QString json);
    ~Ezdoctemplatedocument_RequestPatch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEEzdoctemplatedocumentFormat() const;
    void setEEzdoctemplatedocumentFormat(const QString &e_ezdoctemplatedocument_format);
    bool is_e_ezdoctemplatedocument_format_Set() const;
    bool is_e_ezdoctemplatedocument_format_Valid() const;

    QString getSEzdoctemplatedocumentFields() const;
    void setSEzdoctemplatedocumentFields(const QString &s_ezdoctemplatedocument_fields);
    bool is_s_ezdoctemplatedocument_fields_Set() const;
    bool is_s_ezdoctemplatedocument_fields_Valid() const;

    QByteArray getSEzdoctemplatedocumentBase64() const;
    void setSEzdoctemplatedocumentBase64(const QByteArray &s_ezdoctemplatedocument_base64);
    bool is_s_ezdoctemplatedocument_base64_Set() const;
    bool is_s_ezdoctemplatedocument_base64_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_e_ezdoctemplatedocument_format;
    bool m_e_ezdoctemplatedocument_format_isSet;
    bool m_e_ezdoctemplatedocument_format_isValid;

    QString m_s_ezdoctemplatedocument_fields;
    bool m_s_ezdoctemplatedocument_fields_isSet;
    bool m_s_ezdoctemplatedocument_fields_isValid;

    QByteArray m_s_ezdoctemplatedocument_base64;
    bool m_s_ezdoctemplatedocument_base64_isSet;
    bool m_s_ezdoctemplatedocument_base64_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezdoctemplatedocument_RequestPatch)

#endif // Ezdoctemplatedocument_RequestPatch_H
