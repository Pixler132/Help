#include "mover.h"

Mover::Mover(QObject *parent) : QObject(parent)
{
m_position = 33;
}

Mover::Mover(const double position, QObject *parent) : QObject(parent)
{
    m_position=position;
}


void Mover::set_position(double m_position)
{
        m_position = m_position - 1;
        emit position_changed();

}
