#pragma once

#include <QPalette>
#include <QObject>

class PaletteManager: public QObject
{
    Q_OBJECT
public:
    static PaletteManager& instance();
    void applyPalette(QPalette& palette, bool isDark = true) const;

private:
    explicit PaletteManager(): QObject(nullptr) {}

    void applyLight(QPalette& palette) const;
    void applyDark(QPalette& palette) const;
};
