
#ifndef TELEOP_PAD_H
#define TELEOP_PAD_H

#include <ros/ros.h>
#include <ros/console.h>


#include <rviz/panel.h>

class QLineEdit;

namespace rviz_telop_commander
{

class TeleopPanel: public rviz::Panel
{

Q_OBJECT
public:

  TeleopPanel( QWidget* parent = 0 );

  virtual void load( const rviz::Config& config );
  virtual void save( rviz::Config config ) const;


public Q_SLOTS:

  void setTopic( const QString& topic );

protected Q_SLOTS:

  void sendVel();
  void update_Linear_Velocity();
  void update_Angular_Velocity();
  void updateTopic();

protected:

  QLineEdit* output_topic_editor_;
  QString output_topic_;

  QLineEdit* output_topic_editor_1;.
  QString output_topic_1;

  QLineEdit* output_topic_editor_2;
  QString output_topic_2;

  ros::Publisher velocity_publisher_;
  ros::NodeHandle nh_;

  float linear_velocity_;
  float angular_velocity_;
  // END_TUTORIAL
};

} // end namespace rviz_plugin_tutorials

#endif // TELEOP_PANEL_H
