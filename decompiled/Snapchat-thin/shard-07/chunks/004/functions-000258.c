/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054b8484; end: 1054b85eb; -[SCBloopsGrpcConverterImpl cameosUpdateDataRequstForImageDescriptor:preprocessedDataDescriptor:genderType:formatVersion:sdkVersion:userId:] */

void FUN_1054b8484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b9a10;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010bdd90e0(param_1,param_2,param_5);
  func_0x00010c1a2620(puVar1,param_2,uVar2);
  func_0x00010c19ec80(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1f8040(puVar1,param_2,param_7);
  _objc_release(param_7);
  uVar2 = param_1;
  func_0x00010bdd90c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1e7860(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bdd90c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1e3780(puVar1,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c21e620(puVar1,param_2,param_8);
  _objc_release(param_8);
  puVar3 = PTR_PTR_1126b9a18;
  _objc_alloc_init(PTR_PTR_1126b9a18);
  func_0x00010c1722c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054b85ec; end: 1054b8997; -[SCBloopsGrpcConverterImpl bloopsMyUserDataForUpdateFriendBloopsDataResponse:] */

void FUN_1054b85ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd58e0();
  if ((int)uVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf1dc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c102fa0();
    uVar3 = param_1;
    func_0x00010bf1e0e0(param_1,param_2,uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf1dc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010befe0e0();
    uVar4 = param_1;
    func_0x00010bf1db20(param_1,param_2,uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf1dc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfbeb80();
    uVar5 = param_1;
    func_0x00010bdd4fc0(param_1,param_2,uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdaea0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uStack_68 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf1dc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c120120();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = param_1;
      func_0x00010bdd4f80(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfda9e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uStack_88 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf1dc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c115740();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = param_1;
      func_0x00010bdd4f80(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010bfd58e0();
    if ((int)uVar1 == 0) {
      uStack_90 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf45e20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf1dc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bfbeb80();
      func_0x00010bdd4f60(param_1,param_2,uVar1,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uStack_90 = param_1;
    }
    puVar7 = PTR_PTR_1126b9a20;
    _objc_alloc(PTR_PTR_1126b9a20);
    uVar1 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bfb5ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c1530c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfcfe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05be00(puVar7,param_2,uVar2,uVar5,uVar3,uVar4,uStack_68,uStack_88,uVar8,uVar10,
                        uVar12);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar13 = PTR_PTR_1126b9a28;
    _objc_alloc(PTR_PTR_1126b9a28);
    func_0x00010c05ab20();
    _objc_release(puVar7);
    _objc_release(uStack_90);
    _objc_release(uStack_88);
    _objc_release(uStack_68);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1054b8998; end: 1054b8a0f; -[SCBloopsGrpcConverterImpl cameosGetMyDataRequestForSdkVersion:useCase:] */

void FUN_1054b8998(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9a30;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1f8040();
  _objc_release(param_3);
  if (param_4 == 0) {
    uVar2 = 1;
  }
  else {
    if (param_4 != 1) goto LAB_1054b89fc;
    uVar2 = 2;
  }
  func_0x00010c21d640(puVar1,param_2,uVar2);
LAB_1054b89fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b8a10; end: 1054b8dbb; -[SCBloopsGrpcConverterImpl bloopsMyUserDataForGetMyBloopsDataResponse:] */

void FUN_1054b8a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd58e0();
  if ((int)uVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf1dc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c102fa0();
    uVar3 = param_1;
    func_0x00010bf1e0e0(param_1,param_2,uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf1dc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010befe0e0();
    uVar4 = param_1;
    func_0x00010bf1db20(param_1,param_2,uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf1dc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfbeb80();
    uVar5 = param_1;
    func_0x00010bdd4fc0(param_1,param_2,uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdaea0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uStack_68 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf1dc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c120120();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = param_1;
      func_0x00010bdd4f80(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfda9e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uStack_88 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf1dc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c115740();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = param_1;
      func_0x00010bdd4f80(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010bfd58e0();
    if ((int)uVar1 == 0) {
      uStack_90 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bf45e20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf1dc80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bfbeb80();
      func_0x00010bdd4f60(param_1,param_2,uVar1,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uStack_90 = param_1;
    }
    puVar7 = PTR_PTR_1126b9a20;
    _objc_alloc(PTR_PTR_1126b9a20);
    uVar1 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bfb5ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c1530c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    func_0x00010bf1dc80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfcfe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05be00(puVar7,param_2,uVar2,uVar5,uVar3,uVar4,uStack_68,uStack_88,uVar8,uVar10,
                        uVar12);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar13 = PTR_PTR_1126b9a28;
    _objc_alloc(PTR_PTR_1126b9a28);
    func_0x00010c05ab20();
    _objc_release(puVar7);
    _objc_release(uStack_90);
    _objc_release(uStack_88);
    _objc_release(uStack_68);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1054b8dbc; end: 1054b8e17; -[SCBloopsGrpcConverterImpl cameosFriendBloopsPolicyRequestForSojuPolicy:] */

void FUN_1054b8dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c067fc0(param_3);
  puVar1 = PTR_PTR_1126b9a38;
  _objc_alloc_init(PTR_PTR_1126b9a38);
  func_0x00010bf28da0(param_1,param_2,param_3);
  func_0x00010c19fac0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b8e18; end: 1054b8e6b; -[SCBloopsGrpcConverterImpl cameosSetGenderRequestForGenderType:] */

void FUN_1054b8e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9a40;
  _objc_alloc_init(PTR_PTR_1126b9a40);
  func_0x00010bdd90e0(param_1,param_2,param_3);
  func_0x00010c1a2620(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b8e6c; end: 1054b8ebf; -[SCBloopsGrpcConverterImpl cameosAdsPolicyRequestForAdsPolicyType:] */

void FUN_1054b8e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9a48;
  _objc_alloc_init(PTR_PTR_1126b9a48);
  func_0x00010bf28c60(param_1,param_2,param_3);
  func_0x00010c175ec0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b8ec0; end: 1054b8f6b; -[SCBloopsGrpcConverterImpl bloopsGetUserResponseDataForCameosGetFriendBloopsDataResponse:] */

void FUN_1054b8ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf1dca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b99d8;
  _objc_alloc(PTR_PTR_1126b99d8);
  func_0x00010bff8f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054b8f6c; end: 1054b8f77;  */

void FUN_1054b8f6c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd4fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__bloopsFriendDataForCameosData__112552d88,param_2
            );
  return;
}



/* Entry: 1054b8f78; end: 1054b8f87; -[SCBloopsGrpcConverterImpl bloopsPolicyTypeFromCameosPolicy:] */

long FUN_1054b8f78(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 < 3) {
    lVar1 = (ulong)param_3 + 1;
  }
  return lVar1;
}



/* Entry: 1054b8f88; end: 1054b8f97; -[SCBloopsGrpcConverterImpl bloopsAdsPolicyTypeFromCameosAdsPolicy:] */

long FUN_1054b8f88(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 1054b8f98; end: 1054b8faf; -[SCBloopsGrpcConverterImpl cameosPolicyFromBloopsPolicy:] */

undefined4 FUN_1054b8f98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = (int)(param_3 - 1U);
  if (2 < param_3 - 1U) {
    uVar1 = 0xfbadbeef;
  }
  return uVar1;
}



/* Entry: 1054b8fb0; end: 1054b8fbf; -[SCBloopsGrpcConverterImpl cameosAdsPolicyFromBloopsAdsPolicy:] */

int FUN_1054b8fb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1054b8fc0; end: 1054b8fcf; -[SCBloopsGrpcConverterImpl cameosFriendBloopsOriginFromBloopsRequestSource:] */

int FUN_1054b8fc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 5) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1054b8fd0; end: 1054b91bf; -[SCBloopsGrpcConverterImpl _bloopsFriendDataForCameosData:] */

void FUN_1054b8fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010bfbeb80(param_3);
  uVar1 = param_1;
  func_0x00010bdd4fc0(param_1,param_2,uVar9);
  uVar9 = param_3;
  func_0x00010c102fa0(param_3);
  uVar2 = param_1;
  func_0x00010bf1e0e0(param_1,param_2,uVar9);
  uVar9 = param_3;
  func_0x00010befe0e0(param_3);
  uVar3 = param_1;
  func_0x00010bf1db20(param_1,param_2,uVar9);
  uVar9 = param_3;
  func_0x00010bfdaea0();
  if ((int)uVar9 == 0) {
    uVar9 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c120120(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010bdd4f80(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = param_3;
  func_0x00010bfda9e0();
  if ((int)uVar4 == 0) {
    param_1 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c115740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd4f80(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  puVar5 = PTR_PTR_1126b9a20;
  _objc_alloc(PTR_PTR_1126b9a20);
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfb5ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c1530c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfcfe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05be00(puVar5,param_2,uVar4,uVar1,uVar2,uVar3,uVar9,param_1,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054b91c0; end: 1054b91d7; -[SCBloopsGrpcConverterImpl _cameosGenderFromBloopsGenderType:] */

undefined4 FUN_1054b91c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = (int)(param_3 - 1U);
  if (2 < param_3 - 1U) {
    uVar1 = 0xfbadbeef;
  }
  return uVar1;
}



/* Entry: 1054b91d8; end: 1054b91e7; -[SCBloopsGrpcConverterImpl _bloopsGenderTypeFromCameosGender:] */

long FUN_1054b91d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 < 3) {
    lVar1 = (ulong)param_3 + 1;
  }
  return lVar1;
}



/* Entry: 1054b91e8; end: 1054b92ab; -[SCBloopsGrpcConverterImpl _cameosEncryptedDataFromContentDescriptor:] */

void FUN_1054b91e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b97d8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c28f7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c085300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1b64a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b92ac; end: 1054b92b3; -[SCBloopsGrpcConverterImpl _cameosEncryptedDataFromBloopsEncryptedDataModel:] */

void FUN_1054b92ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b97d8;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf92c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf92c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1b64a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b92b4; end: 1054b92bb; -[SCBloopsGrpcConverterImpl _bloopsEncryptedDataFromCameosEncryptedData:] */

void FUN_1054b92b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b9a78;
    _objc_alloc(PTR_PTR_1126b9a78);
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c085300(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00fb00(puVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054b92bc; end: 1054b9417; -[SCBloopsGrpcConverterImpl _bloopsConfigFromCameosConfig:gender:] */

void FUN_1054b92bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b9a50;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf42ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000120(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b9a58;
  _objc_alloc(PTR_PTR_1126b9a58);
  uVar2 = param_3;
  func_0x00010c0e7de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031980(puVar3,param_2,0,0,uVar2,puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf45ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b9a60;
  _objc_alloc(PTR_PTR_1126b9a60);
  uVar2 = param_3;
  func_0x00010c0d0220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0015c0(puVar5,param_2,uVar4,uVar2,puVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054b9418; end: 1054b94cb;  */

void FUN_1054b9418(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xa1);
  return;
}



/* Entry: 1054b94cc; end: 1054b954b;  */

undefined8 FUN_1054b94cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3958;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de3958,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de3978;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de3978,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 2;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110de3998;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de3998,param_2,param_1);
      uVar2 = 3;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1054b954c; end: 1054b9573;  */

undefined ** FUN_1054b954c(long param_1)

{
  if (param_1 - 1U < 3) {
    return (undefined **)(&PTR_PTR_11088fef8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110de39b8;
}



/* Entry: 1054b9574; end: 1054b957b; -[SCBloopsCTAOnboardingStateProviderImpl bloopsNeedShowOnboardingContextAction] */

undefined8 FUN_1054b9574(void)

{
  return 0;
}



/* Entry: 1054b957c; end: 1054b95ef; -[SCBloopsMetricsServiceImpl initWithGrapheneServices:] */

undefined1 * FUN_1054b957c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8858;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b95f0; end: 1054b972f; -[SCBloopsMetricsServiceImpl reportBloopsExport:success:] */

void FUN_1054b95f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_3);
  func_0x00010bf1db00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054b9730; end: 1054b98a3; -[SCBloopsMetricsServiceImpl reportOnboardingFinishWithSuccess:resultType:errorType:] */

void FUN_1054b9730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_5);
  func_0x00010c0e7fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar5 = param_1;
  func_0x00010be6cb80(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dce878,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054b98a4; end: 1054b9973; -[SCBloopsMetricsServiceImpl reportChatStickerPickerCloseWithBloopsStatus:] */

void FUN_1054b98a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_3);
  func_0x00010bf377e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054b9974; end: 1054b9a73; -[SCBloopsMetricsServiceImpl reportBloopsStickerViewWithSource:] */

void FUN_1054b9974(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010c255280(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054b9a74; end: 1054b9b73; -[SCBloopsMetricsServiceImpl reportBloopsStickerPickWithSource:] */

void FUN_1054b9a74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010c2545c0(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054b9b74; end: 1054b9c2f; -[SCBloopsMetricsServiceImpl reportDiscoverTileView] */

void FUN_1054b9b74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf82bc0(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054b9c30; end: 1054b9cd3; -[SCBloopsMetricsServiceImpl reportDiscoverTileDisplayDelay:] */

void FUN_1054b9c30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf82b60(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054b9cd4; end: 1054b9da3; -[SCBloopsMetricsServiceImpl reportDiscoverTileReenactmentStatus:] */

void FUN_1054b9cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_3);
  func_0x00010bf82b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054b9da4; end: 1054b9e8b; -[SCBloopsMetricsServiceImpl reportDiscoverSnapFreezeCount:sourceTab:] */

void FUN_1054b9da4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf82980(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_4 != 0) {
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3eb8,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054b9e8c; end: 1054b9f73; -[SCBloopsMetricsServiceImpl reportDiscoverSnapDisplayDelay:sourceTab:] */

void FUN_1054b9e8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf82960(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_4 != 0) {
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3eb8,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054b9f74; end: 1054ba05b; -[SCBloopsMetricsServiceImpl reportDiscoverSnapGenerationLatency:sourceTab:] */

void FUN_1054b9f74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf829a0(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_4 != 0) {
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3eb8,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ba05c; end: 1054ba177; -[SCBloopsMetricsServiceImpl reportDiscoverSnapReenactmentStatus:sourceTab:] */

void FUN_1054ba05c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf829e0(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_4 != 0) {
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3eb8,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054ba178; end: 1054ba2c3; -[SCBloopsMetricsServiceImpl reportDiscoverSnapView:viewSource:] */

void FUN_1054ba178(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  func_0x00010bf82a00(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baed1d8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3ed8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de3eb8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  func_0x00010ba53b04(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110de10d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054ba2c4; end: 1054ba3c7; -[SCBloopsMetricsServiceImpl reportDiscoverShare:] */

void FUN_1054ba2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf82900(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010ba53b04(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de10d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054ba3c8; end: 1054ba45b; -[SCBloopsMetricsServiceImpl reportDiscoverPostToStory] */

void FUN_1054ba3c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf82720(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054ba45c; end: 1054ba5f3; -[SCBloopsMetricsServiceImpl reportDiscoverShareStatus:preparingTime:source:] */

void FUN_1054ba45c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  func_0x00010bf82920(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3c58;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de3c78;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dae8d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar6,param_3,puVar2,(long)param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054ba5f4; end: 1054ba6d3; -[SCBloopsMetricsServiceImpl reportRequestNonAcceptableWithRequestSource:] */

void FUN_1054ba5f4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1e1c0(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 - 1U < 0xb) {
    ppuVar6 = (undefined **)(&PTR_PTR_11088ff60)[param_3 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110de3ad8;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3ef8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054ba6d4; end: 1054ba94f; -[SCBloopsMetricsServiceImpl reportNeutralizationWithStatus:sentImageWasCalled:sendImageResultNonNil:sendLandmarksWasCalled:isLandmarksNonNil:] */

void FUN_1054ba6d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1e080(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de3f18,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db6dd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110de3f38,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110de3f58,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054ba950; end: 1054baafb; -[SCBloopsMetricsServiceImpl reportSegmentationWithStatus:sendTargetWasCalled:isTargetNonNil:] */

void FUN_1054ba950(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1e200(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de3f78,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110de3f98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054baafc; end: 1054badd7; -[SCBloopsMetricsServiceImpl reportStaticEmotionLensApplyingWithStatus:lensId:segmentationPatchWasCalled:error:timeSec:] */

void FUN_1054baafc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010bf1dfa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110db19f8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110de3fb8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar4;
  if (param_7 != 0) {
    _objc_retain(param_7);
    lVar5 = param_7;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    _objc_release(param_7);
    func_0x00010c14de00(puVar1,param_3,&PTR____CFConstantStringClassReference_110ddd4f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110daeeb8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bf885a0(param_8);
  _objc_release(param_8);
  func_0x00010c155420(param_1,puVar1);
  func_0x00010bef9180(uVar8,param_3,puVar2,(long)param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1054badd8; end: 1054baee7; -[SCBloopsMetricsServiceImpl reportLensObtainingWithStatus:errorType:] */

void FUN_1054badd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_4);
  func_0x00010bf1dec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd6078,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054baee8; end: 1054baf8b; -[SCBloopsMetricsServiceImpl reportBloopsHometabStickersCount:] */

void FUN_1054baee8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1e100(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054baf8c; end: 1054bb0b7; -[SCBloopsMetricsServiceImpl reportLensId:status:] */

void FUN_1054baf8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_3);
  func_0x00010bf1df00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (param_4 - 1U < 10) {
    ppuVar6 = (undefined **)(&PTR_PTR_11088ffb8)[param_4 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd32f8;
  }
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054bb0b8; end: 1054bb2ef; -[SCBloopsMetricsServiceImpl reportSingleImageLensApplying:totalTime:status:] */

void FUN_1054bb0b8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1df20(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar7 = param_5 - 1;
  if (uVar7 < 10) {
    ppuVar6 = (undefined **)(&PTR_PTR_11088ffb8)[uVar7];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd32f8;
  }
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar5,param_3,puVar1,(long)param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1df00(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (uVar7 < 10) {
    ppuVar6 = (undefined **)(&PTR_PTR_11088ffb8)[uVar7];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd32f8;
  }
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054bb2f0; end: 1054bb487; -[SCBloopsMetricsServiceImpl reportLensId:initialisationTime:status:] */

void FUN_1054bb2f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  _objc_retain(param_4);
  func_0x00010bf1de80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar6,param_3,puVar2,(long)param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054bb488; end: 1054bb61f; -[SCBloopsMetricsServiceImpl reportLensId:setupEffectTime:status:] */

void FUN_1054bb488(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  _objc_retain(param_4);
  func_0x00010bf1df60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar6,param_3,puVar2,(long)param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054bb620; end: 1054bb7b7; -[SCBloopsMetricsServiceImpl reportLensId:setupProcessingModeTime:status:] */

void FUN_1054bb620(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  _objc_retain(param_4);
  func_0x00010bf1df80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar6,param_3,puVar2,(long)param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054bb7b8; end: 1054bb993; -[SCBloopsMetricsServiceImpl reportLensId:obtainingTime:cacheStatus:status:] */

void FUN_1054bb7b8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  _objc_retain(param_4);
  func_0x00010bf1dee0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3db8;
  if (param_5 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de3dd8;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110de39d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_6 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar6,param_3,puVar3,(long)param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054bb994; end: 1054bbb2b; -[SCBloopsMetricsServiceImpl reportLensId:imageProcessingTime:status:] */

void FUN_1054bb994(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  _objc_retain(param_4);
  func_0x00010bf1dea0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar6,param_3,puVar2,(long)param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054bbb2c; end: 1054bbcc3; -[SCBloopsMetricsServiceImpl reportLensId:remoteAssetsLoadingTime:status:] */

void FUN_1054bbb2c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b9a68;
  _objc_retain(param_4);
  func_0x00010bf1df40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar6,param_3,puVar2,(long)param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054bbcc4; end: 1054bbda7; -[SCBloopsMetricsServiceImpl reportFriendsIdsObtainingStart:] */

void FUN_1054bbcc4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1dda0(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 - 1U < 5) {
    ppuVar6 = (undefined **)(&PTR_PTR_110890008)[param_3 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbb9d8;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054bbda8; end: 1054bc043; -[SCBloopsMetricsServiceImpl reportFriendsIdsObtainingCompletion:success:idsCount:latencySec:] */

void FUN_1054bbda8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1dd80(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4 - 1;
  if (uVar9 < 5) {
    ppuVar8 = (undefined **)(&PTR_PTR_110890008)[uVar9];
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dbb9d8;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dae8d8,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar7,param_3,puVar4,(long)param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if ((int)param_5 != 0) {
    puVar1 = PTR_PTR_1126b9a68;
    func_0x00010bf1dd60(PTR_PTR_1126b9a68);
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 < 5) {
      ppuVar8 = (undefined **)(&PTR_PTR_110890008)[uVar9];
    }
    else {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dbb9d8;
    }
    puVar2 = puVar1;
    func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dae8d8,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_2 + 8);
    func_0x00010bfcdfa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054bc044; end: 1054bc10f; -[SCBloopsMetricsServiceImpl reportDiscoverFriendTargetFetchingTime:isSendToProvider:] */

void FUN_1054bc044(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b9a68;
  if (param_4 == 0) {
    func_0x00010bf82b20(PTR_PTR_1126b9a68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf82b00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010bef9180(uVar4,param_3,puVar1,(long)param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054bc110; end: 1054bc1e3; -[SCBloopsMetricsServiceImpl reportFriendSelfieStatus:] */

void FUN_1054bc110(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b9a68;
  func_0x00010bf1dd40(PTR_PTR_1126b9a68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054bc1e4; end: 1054bc43b; -[SCBloopsMetricsServiceImpl reportReenactmentRequestWithType:groupID:viewLocation:deviceCluster:pendingRequestCount:] */

void FUN_1054bc1e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf1e160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbce78,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc41b8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar4);
  uVar5 = param_6;
  func_0x00010c25d700(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de39f8,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar5);
  uVar5 = param_7;
  func_0x00010c25d700(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de3a18,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054bc43c; end: 1054bc5e7; -[SCBloopsMetricsServiceImpl reportReenactmentRequestCacheHit:viewLocation:deviceCluster:] */

void FUN_1054bc43c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b9a68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf1e140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  uVar3 = param_5;
  func_0x00010c25d700(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110de39f8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3a38,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf1de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1054bc5e8; end: 1054bc65b; -[SCBloopsMetricsServiceImpl _onboardingTextResultFromResultType:errorType:] */

void FUN_1054bc5e8(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  if (param_4 == 0) {
    func_0x0001054b81a8(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2827c0(param_4);
    FUN_1054b8184();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &PTR____CFConstantStringClassReference_110de3ff8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de3ff8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1054bc65c; end: 1054bc667; -[SCBloopsMetricsServiceImpl .cxx_destruct] */

void FUN_1054bc65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054bc668; end: 1054bc7af; -[SCBloopsFriendsBloopsDataCacheImpl initWithTTLInSeconds:retrieveCount:retryProgression:cache:isEnabled:diskCacheTTLInSecond:] */

undefined1 *
FUN_1054bc668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e8860;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_7;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1054bc7b0; end: 1054bc863; -[SCBloopsFriendsBloopsDataCacheImpl configureForNewConversation] */

void FUN_1054bc7b0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1054bc864; end: 1054bc89b;  */

void FUN_1054bc864(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054bc89c; end: 1054bc9bb; -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendsBloopsDataForConversationId:completion:] */

void FUN_1054bc89c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054bc9bc; end: 1054bcc43;  */

void FUN_1054bc9bc(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  double dVar11;
  
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_1054bcab0;
  lVar3 = *(long *)(lVar2 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
LAB_1054bca98:
    lVar5 = *(long *)(param_2 + 0x28);
    pcVar9 = *(code **)(lVar5 + 0x10);
    lVar7 = 0;
LAB_1054bcaa4:
    (*pcVar9)(lVar5,lVar7);
  }
  else {
    lVar7 = lVar3;
    func_0x00010bfb9be0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf529e0();
    _objc_release(lVar7);
    if (lVar5 == 0) goto LAB_1054bca98;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bf5a700(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar4);
    _objc_release(lVar7);
    _objc_release(puVar4);
    dVar11 = (double)NEON_ucvtf(*(undefined8 *)(lVar2 + 8));
    if (dVar11 < param_1) {
      func_0x00010c12d3e0(*(undefined8 *)(lVar2 + 0x28));
      goto LAB_1054bca98;
    }
    lVar7 = lVar3;
    func_0x00010bfe3980();
    lVar5 = lVar3;
    func_0x00010bfe39a0();
    if (lVar7 < lVar5) {
      iVar1 = (int)*(undefined8 *)(lVar2 + 0x40);
      func_0x00010c0720c0();
      if (iVar1 == 0) {
        puVar8 = PTR_PTR_1126b9a70;
        _objc_alloc(PTR_PTR_1126b9a70);
        lVar7 = lVar3;
        func_0x00010bf5a700(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe3980(lVar3);
        func_0x00010bfe39a0(lVar3);
        lVar5 = lVar3;
        func_0x00010bfb9be0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c006740(puVar8);
        _objc_release(lVar5);
        _objc_release(lVar7);
        func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x28));
        uVar10 = *(undefined8 *)(param_2 + 0x20);
        _objc_retain(uVar10);
        uVar6 = *(undefined8 *)(lVar2 + 0x40);
        *(undefined8 *)(lVar2 + 0x40) = uVar10;
        _objc_release(uVar6);
        lVar7 = *(long *)(param_2 + 0x28);
        pcVar9 = *(code **)(lVar7 + 0x10);
        puVar4 = puVar8;
        goto LAB_1054bcc34;
      }
      lVar5 = *(long *)(param_2 + 0x28);
      pcVar9 = *(code **)(lVar5 + 0x10);
      lVar7 = lVar3;
      goto LAB_1054bcaa4;
    }
    puVar4 = PTR_PTR_1126b9a70;
    _objc_alloc(PTR_PTR_1126b9a70);
    lVar7 = lVar3;
    func_0x00010bf5a700(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe39a0(lVar3);
    func_0x00010c006740(puVar4);
    _objc_release(lVar7);
    func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x28));
    lVar7 = *(long *)(param_2 + 0x28);
    pcVar9 = *(code **)(lVar7 + 0x10);
    puVar8 = (undefined *)0x0;
LAB_1054bcc34:
    (*pcVar9)(lVar7,puVar8);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
LAB_1054bcab0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1054bcc44; end: 1054bcd53; -[SCBloopsFriendsBloopsDataCacheImpl addFriendsBloopsTargetsData:forConversationId:] */

void FUN_1054bcc44(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) && ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054bcd54; end: 1054bd147;  */

void FUN_1054bcd54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x19;
  undefined8 uVar6;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  ulong uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    puVar1 = *(undefined **)(lVar7 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_238 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      unaff_x22 = *(undefined **)(lVar7 + 0x10);
    }
    else {
      func_0x00010bfe39a0();
      unaff_x22 = puVar1;
    }
    unaff_x21 = PTR_PTR_1126b9a70;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x21;
    func_0x00010c006740();
    _objc_release(puVar1);
    puStack_240 = unaff_x19;
    func_0x00010c1d0640(*(undefined8 *)(lVar7 + 0x28));
    dVar12 = 0.0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    puVar1 = *(undefined **)(lVar7 + 0x28);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_1c0;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_1b0;
      lStack_230 = lVar7;
      puStack_228 = puVar1;
      lStack_220 = lVar9;
      do {
        unaff_x19 = (undefined *)0x0;
        puStack_218 = puVar2;
        do {
          dVar11 = dVar12;
          if (*plStack_1b0 != lVar9) {
            _objc_enumerationMutation(puVar1);
            dVar11 = dVar12;
          }
          uVar10 = *(ulong *)(lStack_1b8 + (long)unaff_x19 * 8);
          uVar3 = uVar10;
          func_0x00010c0720c0();
          dVar12 = dVar11;
          if ((uVar3 & 1) == 0) {
            puVar4 = *(undefined **)(lVar7 + 0x28);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x21 = puVar4;
            func_0x00010bf5a700();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380(unaff_x21);
            _objc_release(unaff_x22);
            _objc_release(unaff_x21);
            dVar12 = (double)NEON_ucvtf(*(undefined8 *)(lVar7 + 8));
            if (dVar11 <= dVar12) {
              unaff_x21 = puVar4;
              uStack_210 = uVar10;
              func_0x00010bfb9be0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = unaff_x21;
              func_0x00010c0d3c80();
              _objc_release(unaff_x21);
              dVar12 = 0.0;
              uStack_1d8 = 0;
              uStack_1e0 = 0;
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              uStack_1e8 = 0;
              plStack_1f0 = (long *)0x0;
              puStack_208 = puVar4;
              func_0x00010bfb9be0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010bf52a60();
              if (puVar5 == (undefined *)0x0) {
LAB_1054bd0a0:
                _objc_release(puVar4);
              }
              else {
                bVar8 = false;
                lVar7 = *plStack_1f0;
                do {
                  puVar1 = (undefined *)0x0;
                  do {
                    if (*plStack_1f0 != lVar7) {
                      _objc_enumerationMutation(puVar4);
                    }
                    unaff_x21 = *(undefined **)(param_1 + 0x28);
                    func_0x00010c0dff20();
                    _objc_retainAutoreleasedReturnValue();
                    if (unaff_x21 != (undefined *)0x0) {
                      func_0x00010c1d0640(puVar2);
                      bVar8 = true;
                    }
                    _objc_release(unaff_x21);
                    puVar1 = puVar1 + 1;
                  } while (puVar5 != puVar1);
                  puVar5 = puVar4;
                  func_0x00010bf52a60();
                } while (puVar5 != (undefined *)0x0);
                _objc_release(puVar4);
                lVar7 = lStack_230;
                unaff_x22 = (undefined *)0x0;
                puVar1 = puStack_228;
                if (bVar8) {
                  unaff_x21 = PTR_PTR_1126b9a70;
                  _objc_alloc();
                  puVar1 = puStack_208;
                  unaff_x22 = puStack_208;
                  func_0x00010bf5a700();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfe3980(puVar1);
                  func_0x00010bfe39a0(puVar1);
                  puVar1 = puStack_228;
                  puVar4 = unaff_x21;
                  func_0x00010c006740(unaff_x21);
                  _objc_release(unaff_x22);
                  func_0x00010c1d0640(*(undefined8 *)(lVar7 + 0x28));
                  goto LAB_1054bd0a0;
                }
              }
              _objc_release(puVar2);
              lVar9 = lStack_220;
              puVar2 = puStack_218;
              puVar4 = puStack_208;
            }
            else {
              func_0x00010c12d3e0(*(undefined8 *)(lVar7 + 0x28));
            }
            _objc_release(puVar4);
          }
          unaff_x19 = unaff_x19 + 1;
        } while (unaff_x19 != puVar2);
        param_3 = &uStack_1c0;
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puStack_240);
    _objc_release(puStack_238);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_1054bd148;
  puStack_270 = unaff_x22;
  puStack_268 = unaff_x21;
  lStack_260 = param_1;
  puStack_258 = unaff_x19;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  if (*(char *)(lVar7 + 0x20) == '\x01') {
    _objc_initWeak(auStack_278,lVar7);
    uVar6 = *(undefined8 *)(lVar7 + 0x30);
    _objc_copyWeak(auStack_280,auStack_278);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_280);
    _objc_destroyWeak(auStack_278);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1054bd148; end: 1054bd22b; -[SCBloopsFriendsBloopsDataCacheImpl removeCachedFriendsBloopsDataForConversationId:] */

void FUN_1054bd148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1054bd22c; end: 1054bd267;  */

void FUN_1054bd22c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054bd268; end: 1054bd497; -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendBloopsDataForUsers:completion:] */

void FUN_1054bd268(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(param_3);
      param_2 = 0;
      (**(code **)(param_4 + 0x10))(param_4);
LAB_1054bd44c:
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
      if (param_2 != 0) {
        func_0x000100408474(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bdd7a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf4b4c0();
      _objc_release(lVar4);
      _objc_release(uVar3);
      if ((int)uVar5 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdd7a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        func_0x00010c0dff80(0,uVar5);
        _objc_release(param_1);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_release(param_3);
        goto LAB_1054bd44c;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1054bd498; end: 1054bd4c3;  */

void FUN_1054bd498(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100408474(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054bd4c4; end: 1054bd53b;  */

void FUN_1054bd4c4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126b9a20;
  _objc_opt_class(PTR_PTR_1126b9a20);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054bd53c; end: 1054bd8eb; -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendsBloopsDataArrayForUsers:callbackPerformer:completion:] */

void FUN_1054bd53c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1054bd8ec;
  uStack_110 = 0x1054bd8fc;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar1;
  _dispatch_group_create();
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar7 = *plStack_160;
    do {
      lVar6 = 0;
      do {
        if (*plStack_160 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bdd7a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bf4b4c0();
        _objc_release(lVar3);
        _objc_release(uVar2);
        if ((int)uVar4 != 0) {
          _objc_initWeak(auStack_178,param_1);
          _dispatch_group_enter(puVar1);
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_1;
          func_0x00010bdd7a80(param_1);
          _objc_retainAutoreleasedReturnValue();
          puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1a8 = 0xc2000000;
          pcStack_1a0 = FUN_1054bd930;
          puStack_198 = &UNK_1108900c0;
          _objc_copyWeak(auStack_180,auStack_178);
          puStack_188 = &uStack_130;
          _objc_retain(puVar1);
          puStack_190 = puVar1;
          func_0x00010c0dff80(0,uVar4);
          _objc_release(lVar3);
          _objc_release(uVar4);
          _objc_release(puStack_190);
          _objc_destroyWeak(auStack_180);
          _objc_destroyWeak(auStack_178);
        }
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  uVar4 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_1054bd9e0;
  puStack_1c8 = &UNK_1108647e8;
  puStack_1b8 = &uStack_130;
  uStack_1c0 = param_5;
  _objc_retain();
  func_0x000100bc0718(puVar1,uVar4,&puStack_1e0);
  _objc_release(uVar4);
  _objc_release(uStack_1c0);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 1054bd8ec; end: 1054bd903;  */

void FUN_1054bd8ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054bd904; end: 1054bd92f;  */

void FUN_1054bd904(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100408474(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054bd930; end: 1054bd9df;  */

void FUN_1054bd930(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b9a20;
  if (lVar2 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    if (uVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054bd9e0; end: 1054bda03;  */

void FUN_1054bd9e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054bd9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    return;
  }
  return;
}



/* Entry: 1054bda04; end: 1054bdde3; -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendsBloopsDataForUsers:completion:] */

void FUN_1054bda04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **unaff_x20;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_108,param_1);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar10 = *plStack_140;
      do {
        lVar11 = 0;
        do {
          if (*plStack_140 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          lVar2 = param_1;
          func_0x00010bdd7a80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(ulong *)(param_1 + 0x48);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf4b4c0();
          _objc_release(uVar3);
          puVar5 = PTR_PTR_1126ae6b8;
          if ((uVar4 & 1) != 0) {
            puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_178 = 0xc2000000;
            pcStack_170 = FUN_1054bdde4;
            puStack_168 = &UNK_110851360;
            _objc_copyWeak(auStack_158,auStack_108);
            _objc_retain(lVar2);
            lStack_160 = lVar2;
            func_0x00010bf54280(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar9);
            _objc_release(puVar5);
            _objc_release(lStack_160);
            _objc_destroyWeak(auStack_158);
          }
          _objc_release(lVar2);
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        lVar1 = param_3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    puVar5 = PTR_PTR_1126ae6b8;
    uStack_1b0 = 0;
    uStack_1a0 = 0x3032000000;
    pcStack_198 = FUN_1054bd8ec;
    uStack_190 = 0x1054bd8fc;
    uStack_188 = 0;
    puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d8 = 0xc2000000;
    unaff_x20 = &puStack_1e0;
    uStack_1d0 = 0x1054bdf8c;
    puStack_1c8 = &UNK_110890140;
    puStack_1a8 = &uStack_1b0;
    _objc_copyWeak(auStack_1b8,auStack_108);
    puStack_1c0 = &uStack_1b0;
    func_0x00010bf41860(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar6 = puVar5;
    func_0x00010c25ff20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar6);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_1b8);
    __Block_object_dispose(&uStack_1b0,8);
    _objc_release(uStack_188);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 5);
  uVar8 = 8;
  __Block_object_dispose(&uStack_1b0);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(uVar8);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    func_0x00010c0dff80(0,uVar7);
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  _objc_release(param_3);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1054bdde4; end: 1054bdee7;  */

void FUN_1054bdde4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c0dff80(0,uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054bdee8; end: 1054bdf13;  */

void FUN_1054bdee8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100408474(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054bdf14; end: 1054be11b;  */

void FUN_1054bdf14(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b9a20;
  _objc_opt_class(PTR_PTR_1126b9a20);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054be11c; end: 1054be19f; -[SCBloopsFriendsBloopsDataCacheImpl removeCachedFriendBloopsDataForUserId:] */

void FUN_1054be11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7a80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d400(uVar1,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054be1a0; end: 1054be477; -[SCBloopsFriendsBloopsDataCacheImpl addFriendBloopsData:forUserId:] */

void FUN_1054be1a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c120120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_78 = (undefined *)0x0;
  }
  else {
    puStack_78 = PTR_PTR_1126b9a78;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c120120(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00fb00(puStack_78,param_2,0,0,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c115740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b9a78;
    _objc_alloc(PTR_PTR_1126b9a78);
    lVar1 = param_3;
    func_0x00010c115740(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00fb00(puVar3,param_2,0,0,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126b9a20;
  _objc_alloc(PTR_PTR_1126b9a20);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c292180(param_3);
  lVar5 = param_3;
  func_0x00010c2931e0(param_3);
  lVar6 = param_3;
  func_0x00010c291180(param_3);
  lVar7 = param_3;
  func_0x00010bfb5ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c1530c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bfcfe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05be00(puVar4,param_2,lVar1,lVar2,lVar5,lVar6,puStack_78,puVar3,lVar7,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bdd7a80(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar12 = NEON_ucvtf(*(undefined8 *)(param_1 + 0x50));
  puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(uVar12,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0500(uVar10,param_2,puVar4,&PTR___NSConcreteGlobalBlock_1108901d0,lVar1,puVar11,0);
  _objc_release(puVar11);
  _objc_release(lVar1);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054be478; end: 1054be4a3;  */

void FUN_1054be478(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b7392a8(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054be4a4; end: 1054be5c7; -[SCBloopsFriendsBloopsDataCacheImpl addFriendsBloopsData:] */

void FUN_1054be4a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010c2923e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef8760(param_1,param_2,uVar4,uVar2);
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1054be5c8;
  uStack_140 = param_1;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  uVar2 = *(undefined8 *)(lVar1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1054be668;
  puStack_150 = &UNK_1108901f0;
  puStack_148 = (undefined1 *)puVar3;
  _objc_retain(puVar3);
  func_0x00010c12aec0(uVar2,param_2,&puStack_168);
  _objc_release(uVar2);
  _objc_release(puStack_148);
  _objc_release(puVar3);
  return;
}



/* Entry: 1054be5c8; end: 1054be667; -[SCBloopsFriendsBloopsDataCacheImpl removeAllFriendsWithCompletion:] */

void FUN_1054be5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054be668;
  puStack_30 = &UNK_1108901f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c12aec0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1054be668; end: 1054be67b;  */

void FUN_1054be668(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054be674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1054be67c; end: 1054be70f; -[SCBloopsFriendsBloopsDataCacheImpl _cacheKeyForUserId:] */

void FUN_1054be67c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010befa120(puVar1,param_2,param_3);
  }
  func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110de4018);
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054be710; end: 1054be763; -[SCBloopsFriendsBloopsDataCacheImpl .cxx_destruct] */

void FUN_1054be710(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1054be764; end: 1054be807; -[SCBloopsGetMyDataCacheImpl initWithCache:config:] */

undefined1 *
FUN_1054be764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8868;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054be808; end: 1054be927; -[SCBloopsGetMyDataCacheImpl getUserBloopsTargetDataFromCacheForApiVersion:locale:useCase:completion:] */

void FUN_1054be808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd79c0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054be954;
  puStack_50 = &UNK_110890070;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010c0dff80(0,uVar1,param_2,param_1,&PTR___NSConcreteGlobalBlock_110890220,0,&puStack_68,0
                     );
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_6);
  return;
}



/* Entry: 1054be928; end: 1054be953;  */

void FUN_1054be928(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100408474(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054be954; end: 1054be963;  */

void FUN_1054be954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001054be960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
  return;
}



/* Entry: 1054be964; end: 1054bea5f; -[SCBloopsGetMyDataCacheImpl addUserBloopsTargetDataToCache:apiVersion:locale:useCase:responseStatusCode:] */

void FUN_1054be964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bdd79c0(param_1,param_2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010be0bec0(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0500(uVar2,param_2,param_3,&PTR___NSConcreteGlobalBlock_110890240,lVar1,param_1,0);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054bea60; end: 1054bea8b;  */

void FUN_1054bea60(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b7392a8(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054bea8c; end: 1054beac3; -[SCBloopsGetMyDataCacheImpl cleanCachedUserBloopsTargetData] */

void FUN_1054bea8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


