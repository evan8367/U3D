#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// FollowPlayer
struct FollowPlayer_t1977798162;
// PickUp
struct PickUp_t2390356668;
// PlayerMoving
struct PlayerMoving_t4030797487;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision
struct Collision_t2494107688;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_FollowPlayer1977798162.h"
#include "AssemblyU2DCSharp_FollowPlayer1977798162MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_PickUp2390356668.h"
#include "AssemblyU2DCSharp_PickUp2390356668MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "AssemblyU2DCSharp_PlayerMoving4030797487.h"
#include "AssemblyU2DCSharp_PlayerMoving4030797487MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"
#include "UnityEngine_UnityEngine_Collision2494107688MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FollowPlayer::.ctor()
extern "C"  void FollowPlayer__ctor_m3596015817 (FollowPlayer_t1977798162 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FollowPlayer::Start()
extern "C"  void FollowPlayer_Start_m2543153609 (FollowPlayer_t1977798162 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		Transform_t1659122786 * L_2 = __this->get__playerTransform_2();
		NullCheck(L_2);
		Vector3_t4282066566  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		__this->set__offset_3(L_4);
		return;
	}
}
// System.Void FollowPlayer::Update()
extern "C"  void FollowPlayer_Update_m1534202724 (FollowPlayer_t1977798162 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_1 = __this->get__playerTransform_2();
		NullCheck(L_1);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = __this->get__offset_3();
		Vector3_t4282066566  L_4 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3111394108(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickUp::.ctor()
extern "C"  void PickUp__ctor_m3368863071 (PickUp_t2390356668 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PickUp::Start()
extern "C"  void PickUp_Start_m2316000863 (PickUp_t2390356668 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PickUp::Update()
extern "C"  void PickUp_Update_m3082402190 (PickUp_t2390356668 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2926210380(&L_1, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m637363399(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMoving::.ctor()
extern "C"  void PlayerMoving__ctor_m2660495564 (PlayerMoving_t4030797487 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMoving::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t PlayerMoving_Start_m1607633356_MetadataUsageId;
extern "C"  void PlayerMoving_Start_m1607633356 (PlayerMoving_t4030797487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMoving_Start_m1607633356_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set__score_3(0);
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set__rigidbody_2(L_0);
		return;
	}
}
// System.Void PlayerMoving::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t PlayerMoving_Update_m2597845953_MetadataUsageId;
extern "C"  void PlayerMoving_Update_m2597845953 (PlayerMoving_t4030797487 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMoving_Update_m2597845953_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3_t4282066566  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2926210380(&L_4, L_2, (0.0f), L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get__forceRatio_4();
		Vector3_t4282066566  L_6 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_4, (((float)((float)L_5))), /*hidden argument*/NULL);
		V_2 = L_6;
		Rigidbody_t3346577219 * L_7 = __this->get__rigidbody_2();
		Vector3_t4282066566  L_8 = V_2;
		NullCheck(L_7);
		Rigidbody_AddForce_m3682301239(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMoving::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppCodeGenString* _stringLiteral2390356668;
extern const uint32_t PlayerMoving_OnCollisionEnter_m3735454362_MetadataUsageId;
extern "C"  void PlayerMoving_OnCollisionEnter_m3735454362 (PlayerMoving_t4030797487 * __this, Collision_t2494107688 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMoving_OnCollisionEnter_m3735454362_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		Collision_t2494107688 * L_0 = ___collision0;
		NullCheck(L_0);
		Collider_t2939674232 * L_1 = Collision_get_collider_m1325344374(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Component_get_tag_m217485006(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_Equals_m3541721061(L_3, _stringLiteral2390356668, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}

IL_001c:
	{
		return;
	}
}
// System.Void PlayerMoving::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2390356668;
extern const uint32_t PlayerMoving_OnTriggerEnter_m1046920748_MetadataUsageId;
extern "C"  void PlayerMoving_OnTriggerEnter_m1046920748 (PlayerMoving_t4030797487 * __this, Collider_t2939674232 * ___collider0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMoving_OnTriggerEnter_m1046920748_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t2939674232 * L_0 = ___collider0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m217485006(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = String_Equals_m3541721061(L_1, _stringLiteral2390356668, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		Collider_t2939674232 * L_3 = ___collider0;
		NullCheck(L_3);
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get__score_3();
		__this->set__score_3(((int32_t)((int32_t)L_5+(int32_t)1)));
		Text_t9039225 * L_6 = __this->get__scoreText_5();
		int32_t* L_7 = __this->get_address_of__score_3();
		String_t* L_8 = Int32_ToString_m1286526384(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		int32_t L_9 = __this->get__score_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)8))))
		{
			goto IL_0061;
		}
	}
	{
		Text_t9039225 * L_10 = __this->get__winText_6();
		NullCheck(L_10);
		GameObject_t3674682005 * L_11 = Component_get_gameObject_m1170635899(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_m3538205401(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
