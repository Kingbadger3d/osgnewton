
/* Copyright (c) <2003-2011> <Julio Jerez, Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
* 
* 1. The origin of this software must not be misrepresented; you must not
* claim that you wrote the original software. If you use this software
* in a product, an acknowledgment in the product documentation would be
* appreciated but is not required.
* 
* 2. Altered source versions must be plainly marked as such, and must not be
* misrepresented as being the original software.
* 
* 3. This notice may not be removed or altered from any source distribution.
*/


#include "HelpersStdAfx.h"

#ifndef _FORKLIFT_DEMO_H_
#define _FORKLIFT_DEMO_H_

using namespace osg;


class DemoApplication;

class ForkliftPhysicsModel: public newtonArticulationManager::articulatedTransformController
{
	public:
	class InputRecored
	{
		public:
		InputRecored()
		{
			memset (this, 0, sizeof (InputRecored));
		}

		int m_throtler;
		int m_steering;
		int m_lift;
		int m_tilt;
		int m_palette;
	};

	class TraverseNode;
	class ForkliftTireBody;
	class ARTICULATED_VEHICLE_DEFINITION;

	ForkliftPhysicsModel (osgViewer::Viewer* const viewer, osg::newtonWorld* const world, const char* const fileName, const Vec3& origin);
	~ForkliftPhysicsModel();

	virtual void OnPreUpdate (dFloat timestep);
	virtual void OnUpdateBoneTransform (dNewtonBody* const bone, const dFloat* const localMatrix);

/*
	void ApplyInputs(const InputRecored& inputs);
	virtual void* AddBone (dNewtonBody* const bone, const dFloat* const bindMatrix, void* const parentBodne);


	OgreNewtonDynamicBody* CreateRootBody (SceneNode* const node, const Vec3& origin);
	OgreNewtonDynamicBody* CreateTireBody (SceneNode* const tireNode, const Vec3& origin);
	OgreNewtonDynamicBody* CreateBasePlatform (SceneNode* const baseNode, const Vec3& origin);
	OgreNewtonDynamicBody* CreateTooth (SceneNode* const baseNode, const Vec3& origin);

	dNewtonHingeJoint* LinkFrontTire (OgreNewtonDynamicBody* const tire);
	dNewtonUniversalActuator* LinkRearTire (OgreNewtonDynamicBody* const tire);
	

	dNewtonHingeActuator* LinkBasePlatform (OgreNewtonDynamicBody* const platform);
	dNewtonSliderActuator* LinkBasePlatform (OgreNewtonDynamicBody* const parent, OgreNewtonDynamicBody* const platform);
	dNewtonSliderActuator* LinkTooth(OgreNewtonDynamicBody* const parent, OgreNewtonDynamicBody* const child, Real dir);
	void CalculateEngine(OgreNewtonDynamicBody* const tire);
*/

//	DemoApplication* m_application;
//	OgreNewtonDynamicBody* m_rootBody;
//	OgreNewtonDynamicBody* m_frontTireBody[2];
//	dNewtonHingeJoint* m_frontTire[2];
//	dNewtonUniversalActuator* m_rearTire[2];
//	dNewtonHingeActuator* m_revolvePlatform;
//	dNewtonSliderActuator* m_slidePlaforms[3];
//	dNewtonSliderActuator* m_slideTooth[2];
//	Real m_liftPosit;
//	Real m_openPosit;
//	Real m_tiltAngle;
//	Real m_maxEngineTorque;
//	Real m_omegaResistance;
	InputRecored m_inputRecored;
};




#endif