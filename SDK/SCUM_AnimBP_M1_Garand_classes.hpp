#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_M1_Garand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_M1_Garand.AnimBP_M1_Garand_C
// 0x0618 (0x09E8 - 0x03D0)
class UAnimBP_M1_Garand_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6F71B4C7423C95033A5C87A899B0AE29;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8294A27F44603971F65B4AA3275AC367;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_691755064022CD1D993437B08F3558C2;      // 0x0490(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79EB480F4ED06C783E5B86A362D43861;// 0x04F8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8A2B163847006A5819849C9892867A35;// 0x0568(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3DA257674074096421533B966A347072;      // 0x0638(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F7FB8E9945CB5CD5585EF0B4FF6A04E8;      // 0x06A0(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAF9C17E4713A7671A5F65B74E70EF4F;      // 0x0708(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3729C5464B0DF27BCE3D2889ABF2AEA1;// 0x0770(0x00A8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_29A75D9D44E7D309501EAC9E3447B978;// 0x0818(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BBA56529494844AC826F538A029C6D7A;// 0x08F8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57F0E76F4A6C212A1A2083A0F8D678DF;// 0x0948(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73918AA54FEA39C01E86DC9140B62004;// 0x0998(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_M1_Garand.AnimBP_M1_Garand_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M1_Garand_AnimGraphNode_BlendListByEnum_29A75D9D44E7D309501EAC9E3447B978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M1_Garand_AnimGraphNode_BlendListByBool_8A2B163847006A5819849C9892867A35();
	void ExecuteUbergraph_AnimBP_M1_Garand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
