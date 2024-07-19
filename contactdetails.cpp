#include "contactdetails.h"

ContactDetails::ContactDetails(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant ContactDetails::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex ContactDetails::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex ContactDetails::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int ContactDetails::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int ContactDetails::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant ContactDetails::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
