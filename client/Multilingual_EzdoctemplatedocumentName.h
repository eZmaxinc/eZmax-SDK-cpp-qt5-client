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
 * Multilingual_EzdoctemplatedocumentName.h
 *
 * The name1 of the Ezdoctemplatedocument
 */

#ifndef Multilingual_EzdoctemplatedocumentName_H
#define Multilingual_EzdoctemplatedocumentName_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_EzdoctemplatedocumentName : public Object {
public:
    Multilingual_EzdoctemplatedocumentName();
    Multilingual_EzdoctemplatedocumentName(QString json);
    ~Multilingual_EzdoctemplatedocumentName() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzdoctemplatedocumentName1() const;
    void setSEzdoctemplatedocumentName1(const QString &s_ezdoctemplatedocument_name1);
    bool is_s_ezdoctemplatedocument_name1_Set() const;
    bool is_s_ezdoctemplatedocument_name1_Valid() const;

    QString getSEzdoctemplatedocumentName2() const;
    void setSEzdoctemplatedocumentName2(const QString &s_ezdoctemplatedocument_name2);
    bool is_s_ezdoctemplatedocument_name2_Set() const;
    bool is_s_ezdoctemplatedocument_name2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_ezdoctemplatedocument_name1;
    bool m_s_ezdoctemplatedocument_name1_isSet;
    bool m_s_ezdoctemplatedocument_name1_isValid;

    QString m_s_ezdoctemplatedocument_name2;
    bool m_s_ezdoctemplatedocument_name2_isSet;
    bool m_s_ezdoctemplatedocument_name2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_EzdoctemplatedocumentName)

#endif // Multilingual_EzdoctemplatedocumentName_H
