#include <gazebo/gazebo.hh>

namespace gazebo

{

	class WorldPluginMyOfficeRobot : public WorldPlugin
	{
		public: WorldPluginMyOfficeRobot() : WorldPlugin()
		{
			printf("Welcome to Shahudullah's World!\n");
		}
	
	public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
	{
	}
	};

GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyOfficeRobot)
}
