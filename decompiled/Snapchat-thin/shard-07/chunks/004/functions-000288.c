/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105531738; end: 105531897; -[SCPureArroyoConversationIdResolver _resolveUserIdsWithGetOneOnOneConversationIds:nativeSessionManager:completion:] */

void FUN_105531738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ba6f0;
  _objc_alloc(PTR_PTR_1126ba6f0);
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar2);
  uVar3 = param_4;
  func_0x00010bfc7e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfc83a0(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 105531898; end: 1055318a7;  */

void FUN_105531898(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 1055318a8; end: 105531923;  */

void FUN_1055318a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110895f10);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105531924; end: 10553196b;  */

void FUN_105531924(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10553196c; end: 105531983;  */

void FUN_10553196c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010553197c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 105531984; end: 1055319cb; -[SCPureArroyoConversationIdResolver .cxx_destruct] */

void FUN_105531984(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055319cc; end: 105531a3f; -[SCComposerUrlPreviewProvider initWithUrlPreviewProvider:] */

undefined1 * FUN_1055319cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8e38;
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



/* Entry: 105531a40; end: 105531b5f; -[SCComposerUrlPreviewProvider fetchPreviewForUrlWithUrl:] */

void FUN_105531a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfa9620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105531b60; end: 105531c63;  */

void FUN_105531b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105531c64;
  uStack_40 = 0x105531c74;
  puVar1 = PTR_PTR_1126ba6f8;
  _objc_alloc();
  func_0x00010c05a4e0();
  puStack_38 = puVar1;
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105531c64; end: 105531c7b;  */

void FUN_105531c64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105531c7c; end: 10553219b;  */

void FUN_105531c7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c260dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c28f560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d3e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c26e500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfa0ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a4e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07efa0(param_2);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4880(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar2);
  uVar1 = param_2;
  func_0x00010beed1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100504554();
  func_0x00010c161200(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c1407e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0be3a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10553219c; end: 10553219f;  */

void FUN_10553219c(void)

{
  return;
}



/* Entry: 1055321a0; end: 1055321ab; -[SCComposerUrlPreviewProvider .cxx_destruct] */

void FUN_1055321a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055321ac; end: 1055322a7;  */

void FUN_1055321ac(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba740;
  _objc_alloc(PTR_PTR_1126ba740);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf68280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfd7ce0();
  if ((uVar4 & 1) == 0) {
    func_0x00010c0517c0(puVar1);
  }
  else {
    uVar4 = param_2;
    func_0x00010bfe5400(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0517c0(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055322a8; end: 105532373; -[SCUrlPreviewProvider initWithUrlPreviewFetcher:urlPreviewRepository:grapheneRegistry:] */

undefined1 *
FUN_1055322a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8e40;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105532374; end: 1055323fb; -[SCUrlPreviewProvider doesUrlPreviewNeedRefresh:] */

bool FUN_105532374(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar2 = param_4;
    func_0x00010c0ed220(param_4);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar3 = param_4;
    func_0x00010bf9c820();
    if ((uVar3 == 0) || (uVar3 = param_4, func_0x00010bf9c820(), param_1 < (double)uVar3)) {
      bVar1 = (uVar2 & 0xfffffffffffffffd) != 0;
      goto LAB_1055323e0;
    }
  }
  bVar1 = true;
LAB_1055323e0:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 1055323fc; end: 10553258b; -[SCUrlPreviewProvider fetchPreviewForUrl:senderUserId:observationQueue:] */

void FUN_1055323fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = uVar3;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10553258c; end: 105532643;  */

void FUN_10553258c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf87a80();
  puVar3 = PTR_PTR_1126ae6b8;
  if (iVar1 == 0) {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010be132a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105532644; end: 105532dbb; -[SCUrlPreviewProvider _handleUrlPreviewFetchResponse:url:error:] */

void FUN_105532644(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x26;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lStack_c8;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfd9d00(param_3);
  func_0x00010be56020(param_1);
  if (param_5 != 0) {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105532d80;
  }
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar11 = param_3;
  func_0x00010bfda8c0();
  if ((int)lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_3;
    func_0x00010c110360();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = lVar11;
  func_0x00010bfdd480();
  if ((int)lVar12 == 0) {
    lStack_68 = 0;
  }
  else {
    lVar12 = lVar11;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = lVar12;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
  }
  lVar12 = lVar11;
  func_0x00010bf68ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010bf529e0();
  _objc_release(lVar12);
  if (lVar2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar2 = lVar11;
    func_0x00010bf68ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x000100504554();
    _objc_release(lVar2);
  }
  lVar2 = lVar11;
  func_0x00010c069b00();
  if (lVar2 != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
  }
  lVar2 = lVar11;
  func_0x00010bfe4900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar3 = lVar11;
    func_0x00010c27dd80();
    puStack_70 = (undefined *)0x0;
    if (((int)lVar3 == 0x17) && (lStack_68 != 0)) {
      puVar4 = PTR_PTR_1126ba730;
      _objc_alloc(PTR_PTR_1126ba730);
      lVar3 = lVar11;
      func_0x00010bfda0c0();
      if ((int)lVar3 == 0) {
        bVar1 = false;
        puVar13 = (undefined *)0x0;
      }
      else {
        lVar2 = lVar11;
        func_0x00010c0f6c80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c0de500();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)lVar5 < 1) {
          bVar1 = false;
          puVar13 = (undefined *)0x0;
        }
        else {
          unaff_x26 = lVar11;
          func_0x00010c0f6c80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0de500();
          func_0x00010c0df760(puVar13);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
        }
      }
      lVar5 = lVar11;
      func_0x00010bfda0c0();
      if ((int)lVar5 == 0) {
        func_0x00010c05a1e0(puVar4);
      }
      else {
        lVar5 = lVar11;
        func_0x00010c0f6c80();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c23d0a0();
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar7 < 1) {
          func_0x00010c05a1e0(puVar4);
        }
        else {
          lVar7 = lVar11;
          func_0x00010c0f6c80(lVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0();
          func_0x00010c0df7c0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05a1e0(puVar4);
          _objc_release(puVar14);
          _objc_release(lVar7);
        }
        _objc_release(lVar5);
      }
      if (bVar1) {
        _objc_release(puVar13);
        _objc_release(unaff_x26);
      }
      if ((int)lVar3 != 0) {
        _objc_release(lVar2);
      }
      puStack_70 = PTR_PTR_1126ba728;
      func_0x00010c0f6c40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105532b2c;
    }
  }
  else {
    puVar4 = PTR_PTR_1126ba720;
    _objc_alloc(PTR_PTR_1126ba720);
    lVar2 = lVar11;
    func_0x00010bfe4900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010bfe49e0();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      func_0x00010bfe49e0(lVar11);
      func_0x00010c0df880(puVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = lVar11;
    func_0x00010bfe4ae0();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar5 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      func_0x00010bfe4ae0(lVar11);
      func_0x00010c0df880(puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar7 = lVar11;
    func_0x00010bfe4ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      func_0x00010c01abe0(puVar4);
    }
    else {
      lVar6 = lVar11;
      func_0x00010bfe4ac0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01abe0(puVar4);
      _objc_release(lVar6);
    }
    _objc_release(lVar7);
    if (lVar5 != 0) {
      _objc_release(puVar14);
    }
    if (lVar3 != 0) {
      _objc_release(puVar13);
    }
    _objc_release(lVar2);
    puStack_70 = PTR_PTR_1126ba728;
    func_0x00010bfe4960();
    _objc_retainAutoreleasedReturnValue();
LAB_105532b2c:
    _objc_release(puVar4);
  }
  puVar13 = PTR_PTR_1126ba738;
  _objc_alloc();
  lVar2 = lVar11;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = lVar11;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  lVar7 = param_4;
  if (((ulong)puVar4 & 1) == 0) {
    lVar7 = lVar11;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = lVar11;
  func_0x00010bfd6fc0();
  if ((int)lVar6 == 0) {
    lVar15 = 0;
  }
  else {
    lStack_c8 = lVar11;
    func_0x00010bfa0e60();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lStack_c8;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = param_3;
  func_0x00010c110360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bfd9d00();
  if ((int)lVar9 != 0) {
    lVar9 = param_3;
    func_0x00010c0ed1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fae0();
    _objc_release(lVar9);
  }
  _objc_release(param_3);
  func_0x00010c0538e0(puVar13);
  _objc_release(param_4);
  _objc_release(lVar8);
  if ((int)lVar6 != 0) {
    _objc_release(lVar15);
    _objc_release(lStack_c8);
  }
  if (((ulong)puVar4 & 1) == 0) {
    _objc_release(lVar7);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puStack_70);
  _objc_release(lVar12);
  _objc_release(lStack_68);
  _objc_release(lVar11);
  _objc_release(param_3);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257b20();
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
LAB_105532d80:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105532dbc; end: 105532eff; -[SCUrlPreviewProvider _fetchPreviewForUrl:senderUserId:] */

void FUN_105532dbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105532f00; end: 105533023;  */

void FUN_105532f00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bfab300(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105533024; end: 1055330c3;  */

void FUN_105533024(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be32d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c0d9840(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1055330c4; end: 1055332f3; -[SCUrlPreviewProvider _logMetricForFetchWithResponse:error:] */

void FUN_1055330c4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010c28f840(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    puVar2 = PTR____kCFBooleanFalse_11034ab60;
    func_0x00010c25d700(PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea2b8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar2 = param_3;
    func_0x00010bfd9d00(param_3);
    func_0x00010c0df6e0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dea2d8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = param_3;
    func_0x00010bfda8c0();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)puVar2 == 0) goto LAB_105533294;
    puVar2 = param_3;
    func_0x00010c110360(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c27dd80();
    func_0x00010c0df760(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dea2f8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR____kCFBooleanTrue_11034ab68;
    func_0x00010c25d700(PTR____kCFBooleanTrue_11034ab68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea2b8,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar4 = puVar5;
LAB_105533294:
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055332f4; end: 1055333b7; -[SCUrlPreviewProvider .cxx_destruct] */

void FUN_1055332f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055333b8; end: 105533563; -[SCUrlPreviewServiceProvider _urlPreviewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055333b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105533564;
  puStack_78 = &UNK_110896120;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba750;
  _objc_alloc(PTR_PTR_1126ba750);
  param_1 = param_1 + _DAT_11272568c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a460(puVar3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105533564; end: 1055335e3;  */

void FUN_105533564(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee6400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055335e4; end: 10553365f; -[SCUrlPreviewServiceProvider _urlPreviewFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055335e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ba758;
  _objc_alloc(PTR_PTR_1126ba758);
  param_1 = param_1 + _DAT_112725690;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ca0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105533660; end: 1055336f3; -[SCUrlPreviewServiceProvider _urlPreviewRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105533660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba760;
  _objc_alloc(PTR_PTR_1126ba760);
  param_1 = param_1 + _DAT_112725694;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055336f4; end: 10553373f; -[SCUrlPreviewServiceProvider _composerUrlPreviewProviderWithUrlPreviewProvider:] */

void FUN_1055336f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba768;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05a480();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105533740; end: 10553378f; -[SCUrlPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105533740(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272568c);
  _objc_destroyWeak(param_1 + _DAT_112725690);
  _objc_destroyWeak(param_1 + _DAT_112725694);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725698);
  return;
}



/* Entry: 105533790; end: 10553390f; -[SCUrlPreviewFetcher initWithUnifiedGRPCClientFactory:] */

undefined1 * FUN_105533790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ba770;
    _objc_alloc();
    func_0x00010c058f80();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105533910; end: 105533b03; -[SCUrlPreviewFetcher fetchUrl:senderUserId:handler:] */

void FUN_105533910(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ba778;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c21afe0();
  _objc_release(param_3);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    func_0x00010c057ea0();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010bfcb980(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcb80(puVar1);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  func_0x00010c226480(puVar1);
  func_0x00010c226500(puVar1);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  FUN_1059b8ad0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfc90a0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 105533b04; end: 105533b3f; -[SCUrlPreviewFetcher .cxx_destruct] */

void FUN_105533b04(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105533b40; end: 105533c3f;  */

void FUN_105533b40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba740;
  _objc_alloc(PTR_PTR_1126ba740);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0517c0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105533c40; end: 105533d3f;  */

void FUN_105533c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba780;
  _objc_alloc(PTR_PTR_1126ba780);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe5be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c28f560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051420(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105533d40; end: 105533d57;  */

void FUN_105533d40(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105533d58; end: 105533ec7;  */

void FUN_105533d58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  puVar1 = PTR_PTR_1126ba788;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bfe4900(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe49e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282800();
  uVar4 = param_2;
  func_0x00010bfe4ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282800();
  uVar5 = param_2;
  func_0x00010bfe4ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01abe0();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105533ec8; end: 105533f8b;  */

void FUN_105533ec8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = param_2;
  func_0x00010c0f6ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282760();
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (int)uVar2;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0f6cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282800();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105533f8c; end: 105534013;  */

void FUN_105533f8c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 105534014; end: 10553409b; -[SCUrlPreviewRepository initWithDocObjectContext:] */

undefined1 * FUN_105534014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8e50;
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



/* Entry: 10553409c; end: 10553417b; -[SCUrlPreviewRepository storePreviewForURL:preview:] */

void FUN_10553409c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 10553417c; end: 105534613;  */

void FUN_10553417c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lStack_168;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_2);
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  if (lVar9 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar9;
    func_0x00010beed1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lStack_168 = 0;
    }
    else {
      lVar1 = lVar9;
      func_0x00010beed1e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_168 = lVar1;
      func_0x000100504554();
      _objc_release(lVar1);
    }
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_105533d40;
    uStack_98 = 0x105533d50;
    uStack_90 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x2020000000;
    uStack_c0 = 0;
    puStack_f0 = &uStack_f8;
    uStack_f8 = 0;
    uStack_e8 = 0x2020000000;
    uStack_e0 = 0;
    lVar1 = lVar9;
    func_0x00010c1407e0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be3a0();
    _objc_release(lVar1);
    puVar10 = PTR_PTR_1126ba790;
    _objc_alloc(PTR_PTR_1126ba790);
    lVar1 = lVar9;
    func_0x00010c28f9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x00010c28f560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c2711a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010c260dc0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010c26e500(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x00010bfa0ea0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010c0ed220();
    if (lVar7 != 0) {
      func_0x00010c0ed220();
    }
    func_0x00010c0ed220();
    func_0x00010bf9c820();
    func_0x00010c07efa0();
    func_0x00010c05a220(puVar10);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_f8,8);
    __Block_object_dispose(&uStack_d8,8);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(lStack_168);
  }
  _objc_release(lVar9);
  _objc_retain(param_2);
  puVar8 = puVar10;
  FUN_105537b60(puVar10,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(param_2);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105534614; end: 105534617;  */

void FUN_105534614(void)

{
  return;
}



/* Entry: 105534618; end: 1055348bb; -[SCUrlPreviewRepository fetchAndObservePreviewForUrl:observationQueue:] */

void FUN_105534618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 uStack_e9;
  undefined **ppuStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined1 *puStack_b0;
  undefined ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126ba790);
  if (lVar5 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_78,lVar5);
  }
  puVar2 = &uStack_e9;
  FUN_105535c4c();
  uStack_158 = 0xf;
  uStack_148 = 0x100;
  _objc_retain(param_3);
  ppuStack_160 = &PTR_SUB_110862760;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  plStack_100 = (long *)0x0;
  uStack_108 = 0;
  plStack_f8 = (long *)0x0;
  uStack_ce = *(undefined2 *)(puVar2 + 0x1a);
  uStack_e0 = 10;
  uStack_d0 = 0x100;
  ppuStack_e8 = &PTR_FUN_110862700;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_80 = (long *)0x0;
  puStack_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  uStack_17c = 0;
  puVar3 = &uStack_78;
  uStack_130 = param_3;
  puStack_b0 = puVar2;
  pppuStack_a8 = &ppuStack_160;
  func_0x000108c7f678(puVar3,&ppuStack_e8,&puStack_178,&uStack_17c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_178 != (undefined8 *)0x0) {
    puStack_170 = puStack_178;
    __ZdlPv();
  }
  plVar1 = plStack_80;
  ppuStack_e8 = &PTR_FUN_110862700;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_178 = &uStack_a0;
  func_0x000100105004(&puStack_178);
  plVar1 = plStack_f8;
  ppuStack_160 = &PTR_SUB_110862760;
  plStack_f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_178 = &uStack_118;
  func_0x000100105004(&puStack_178);
  _objc_release(uStack_130);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar5);
  puVar4 = puVar3;
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055348bc; end: 105534fcf;  */

void FUN_1055348bc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong unaff_x24;
  undefined *puVar14;
  ulong uStack_a8;
  undefined *puStack_90;
  ulong uStack_78;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126ae750;
  if (uVar1 == 0) {
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105534df8;
  }
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bfdb440();
    if ((uVar2 & 1) == 0) {
      func_0x00010bfd6f80();
    }
    uVar2 = uVar1;
    func_0x00010bf28a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 == 0) {
      uStack_78 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x00010bf28a00();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = uVar2;
      func_0x000100504554();
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010c239a60();
    if ((int)uVar2 == 0) {
LAB_105534ae0:
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar2 = uVar1;
      func_0x00010bfe4920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        uVar2 = uVar1;
        func_0x00010c26e500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar2 == 0) goto LAB_105534ae0;
        uVar2 = uVar1;
        func_0x00010c0f6ca0();
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar2 == 0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          func_0x00010c0f6ca0(uVar1);
          func_0x00010c0df820(puVar14);
          _objc_retainAutoreleasedReturnValue();
        }
        uVar2 = uVar1;
        func_0x00010c0f6c60();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (uVar2 == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          func_0x00010c0f6c60(uVar1);
          func_0x00010c0df880(puVar13);
          _objc_retainAutoreleasedReturnValue();
        }
        puVar11 = PTR_PTR_1126ba730;
        _objc_alloc(PTR_PTR_1126ba730);
        uVar2 = uVar1;
        func_0x00010c26e500(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05a1e0(puVar11);
        _objc_release(uVar2);
        puVar12 = PTR_PTR_1126ba728;
        func_0x00010c0f6c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar13);
      }
      else {
        puVar14 = PTR_PTR_1126ba720;
        _objc_alloc(PTR_PTR_1126ba720);
        uVar2 = uVar1;
        func_0x00010bfe4920();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bfe4900();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bfe4920();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfe49e0();
        puStack_90 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (uVar6 == 0) {
          puStack_90 = (undefined *)0x0;
        }
        else {
          uStack_a8 = uVar1;
          func_0x00010bfe4920();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe49e0();
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar7 = uVar1;
        func_0x00010bfe4920();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfe4ae0();
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (uVar8 == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          unaff_x24 = uVar1;
          func_0x00010bfe4920(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe4ae0();
          func_0x00010c0df880(puVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        uVar9 = uVar1;
        func_0x00010bfe4920(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bfe4ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01abe0(puVar14);
        _objc_release(uVar10);
        _objc_release(uVar9);
        if (uVar8 != 0) {
          _objc_release(puVar12);
          _objc_release(unaff_x24);
        }
        _objc_release(uVar7);
        if (uVar6 != 0) {
          _objc_release(puStack_90);
          _objc_release(uStack_a8);
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar2);
        puVar12 = PTR_PTR_1126ba728;
        func_0x00010bfe4960();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar14);
    }
    puVar14 = PTR_PTR_1126ba738;
    _objc_alloc(PTR_PTR_1126ba738);
    uVar2 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c260dc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c28f340(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c13b100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c26e500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010bfa0ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07efa0();
    func_0x00010bf9c820();
    func_0x00010c0538e0(puVar14);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar12);
    _objc_release(uStack_78);
  }
  _objc_release(uVar1);
  func_0x00010c2468a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(uVar1);
LAB_105534df8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105534fd0; end: 105534fdb; -[SCUrlPreviewRepository .cxx_destruct] */

void FUN_105534fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105534fdc; end: 105535253; -[SCConversationUrlPreview initWithUrl:resolvedUrl:title:subtitle:thumbnailUrl:faviconUrl:callsToAction:hasFailure:hasRetryableFailure:expirationTimeMillis:isSpam:htmlContent:showRichPreview:pdfNumPages:pdfFileSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105534fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e8e58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256c8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256c8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256cc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256d0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256d4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256d4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256dc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256dc) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256e0) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127256e4) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127256e8) = param_10._1_1_;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256ec) = param_12;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127256f0) = param_13;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127256f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127256f4) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127256f8) = param_16;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127256fc) = param_17;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112725700) = param_18;
  }
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105535254; end: 105535277; -[SCConversationUrlPreview copyWithZone:] */

undefined8 FUN_105535254(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105535278; end: 105535393; -[SCConversationUrlPreview hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105535278(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127256c8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127256cc);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127256d0);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127256d4);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127256d8);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127256dc);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127256e0);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + _DAT_1127256e4);
  uStack_60 = (ulong)*(byte *)(param_1 + _DAT_1127256e8);
  uStack_58 = *(undefined8 *)(param_1 + _DAT_1127256ec);
  uStack_50 = (ulong)*(byte *)(param_1 + _DAT_1127256f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127256f4);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_1127256f8);
  uStack_38 = (ulong)*(uint *)(param_1 + _DAT_1127256fc);
  uStack_30 = *(undefined8 *)(param_1 + _DAT_112725700);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10553558c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105535598;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(char *)((long)puVar3 + (long)_DAT_1127256e4) == param_3[_DAT_1127256e4] &&
            (*(char *)((long)puVar3 + (long)_DAT_1127256e8) == param_3[_DAT_1127256e8])) &&
           (*(long *)((long)puVar3 + (long)_DAT_1127256ec) == *(long *)(param_3 + _DAT_1127256ec)))
          && ((*(char *)((long)puVar3 + (long)_DAT_1127256f0) == param_3[_DAT_1127256f0] &&
              (*(char *)((long)puVar3 + (long)_DAT_1127256f8) == param_3[_DAT_1127256f8])))))) &&
        (*(int *)((long)puVar3 + (long)_DAT_1127256fc) == *(int *)(param_3 + _DAT_1127256fc))) &&
       (*(long *)((long)puVar3 + (long)_DAT_112725700) == *(long *)(param_3 + _DAT_112725700))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127256c8);
      if ((lVar5 == *(long *)(param_3 + _DAT_1127256c8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127256cc);
        if ((lVar5 == *(long *)(param_3 + _DAT_1127256cc)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127256d0);
          if ((lVar5 == *(long *)(param_3 + _DAT_1127256d0)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127256d4);
            if ((lVar5 == *(long *)(param_3 + _DAT_1127256d4)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127256d8);
              if ((lVar5 == *(long *)(param_3 + _DAT_1127256d8)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127256dc);
                if ((lVar5 == *(long *)(param_3 + _DAT_1127256dc)) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127256e0);
                  if ((lVar5 == *(long *)(param_3 + _DAT_1127256e0)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_1127256f4);
                    if (puVar6 != *(undefined1 **)(param_3 + _DAT_1127256f4)) {
                      func_0x00010c071ae0();
                      goto LAB_105535598;
                    }
                    goto LAB_10553558c;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105535598:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105535394; end: 1055355b3; -[SCConversationUrlPreview isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105535394(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10553558c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105535598;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + (long)_DAT_1127256e4) == *(char *)(param_3 + (long)_DAT_1127256e4)
            && (*(char *)(param_1 + (long)_DAT_1127256e8) ==
                *(char *)(param_3 + (long)_DAT_1127256e8))) &&
           (*(long *)(param_1 + (long)_DAT_1127256ec) == *(long *)(param_3 + (long)_DAT_1127256ec)))
          && ((*(char *)(param_1 + (long)_DAT_1127256f0) ==
               *(char *)(param_3 + (long)_DAT_1127256f0) &&
              (*(char *)(param_1 + (long)_DAT_1127256f8) ==
               *(char *)(param_3 + (long)_DAT_1127256f8))))))) &&
        (*(int *)(param_1 + (long)_DAT_1127256fc) == *(int *)(param_3 + (long)_DAT_1127256fc))) &&
       (*(long *)(param_1 + (long)_DAT_112725700) == *(long *)(param_3 + (long)_DAT_112725700))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127256c8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127256c8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127256cc);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127256cc)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_1127256d0);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127256d0)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_1127256d4);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127256d4)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_1127256d8);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127256d8)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_1127256dc);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127256dc)) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_1127256e0);
                  if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127256e0)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + (long)_DAT_1127256f4);
                    if (lVar3 != *(long *)(param_3 + (long)_DAT_1127256f4)) {
                      func_0x00010c071ae0();
                      goto LAB_105535598;
                    }
                    goto LAB_10553558c;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105535598:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055355b4; end: 1055355c3; -[SCConversationUrlPreview url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055355b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256c8);
}



/* Entry: 1055355c4; end: 1055355d3; -[SCConversationUrlPreview resolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055355c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256cc);
}



/* Entry: 1055355d4; end: 1055355e3; -[SCConversationUrlPreview title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055355d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256d0);
}



/* Entry: 1055355e4; end: 1055355f3; -[SCConversationUrlPreview subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055355e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256d4);
}



/* Entry: 1055355f4; end: 105535603; -[SCConversationUrlPreview thumbnailUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055355f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256d8);
}



/* Entry: 105535604; end: 105535613; -[SCConversationUrlPreview faviconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105535604(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256dc);
}



/* Entry: 105535614; end: 105535623; -[SCConversationUrlPreview callsToAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105535614(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256e0);
}



/* Entry: 105535624; end: 105535633; -[SCConversationUrlPreview hasFailure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105535624(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127256e4);
}



/* Entry: 105535634; end: 105535643; -[SCConversationUrlPreview hasRetryableFailure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105535634(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127256e8);
}



/* Entry: 105535644; end: 105535653; -[SCConversationUrlPreview expirationTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105535644(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256ec);
}



/* Entry: 105535654; end: 105535663; -[SCConversationUrlPreview isSpam] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105535654(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127256f0);
}



/* Entry: 105535664; end: 105535673; -[SCConversationUrlPreview htmlContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105535664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127256f4);
}



/* Entry: 105535674; end: 105535683; -[SCConversationUrlPreview showRichPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105535674(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127256f8);
}



/* Entry: 105535684; end: 105535693; -[SCConversationUrlPreview pdfNumPages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105535684(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127256fc);
}



/* Entry: 105535694; end: 1055356a3; -[SCConversationUrlPreview pdfFileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105535694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725700);
}



/* Entry: 1055356a4; end: 105535743; -[SCConversationUrlPreview .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055356a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127256f4,0);
  _objc_storeStrong(param_1 + _DAT_1127256e0,0);
  _objc_storeStrong(param_1 + _DAT_1127256dc,0);
  _objc_storeStrong(param_1 + _DAT_1127256d8,0);
  _objc_storeStrong(param_1 + _DAT_1127256d4,0);
  _objc_storeStrong(param_1 + _DAT_1127256d0,0);
  _objc_storeStrong(param_1 + _DAT_1127256cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127256c8,0);
  return;
}



/* Entry: 105535744; end: 10553581b; -[SCConversationUrlPreviewAccessoryLink initWithText:iconUrl:url:] */

undefined1 *
FUN_105535744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8e60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10553581c; end: 10553583f; -[SCConversationUrlPreviewAccessoryLink copyWithZone:] */

undefined8 FUN_10553581c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105535840; end: 1055358bf; -[SCConversationUrlPreviewAccessoryLink hash] */

undefined8 * FUN_105535840(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105535958:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105535964;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105535964;
          }
          goto LAB_105535958;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105535964:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1055358c0; end: 10553597f; -[SCConversationUrlPreviewAccessoryLink isEqual:] */

long FUN_1055358c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105535958:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105535964;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105535964;
          }
          goto LAB_105535958;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105535964:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105535980; end: 105535987; -[SCConversationUrlPreviewAccessoryLink text] */

undefined8 FUN_105535980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105535988; end: 10553598f; -[SCConversationUrlPreviewAccessoryLink iconUrl] */

undefined8 FUN_105535988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105535990; end: 105535997; -[SCConversationUrlPreviewAccessoryLink url] */

undefined8 FUN_105535990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105535998; end: 1055359d3; -[SCConversationUrlPreviewAccessoryLink .cxx_destruct] */

void FUN_105535998(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055359d4; end: 105535a93; -[SCConversationUrlHtmlContent initWithHtml:htmlHeight:htmlWidth:htmlThumbnail:] */

undefined1 *
FUN_1055359d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e8e68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105535a94; end: 105535ab7; -[SCConversationUrlHtmlContent copyWithZone:] */

undefined8 FUN_105535a94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105535ab8; end: 105535b33; -[SCConversationUrlHtmlContent hash] */

undefined8 * FUN_105535ab8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105535bd4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105535be0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_105535be0;
        }
        goto LAB_105535bd4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105535be0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105535b34; end: 105535bfb; -[SCConversationUrlHtmlContent isEqual:] */

long FUN_105535b34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105535bd4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105535be0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_105535be0;
        }
        goto LAB_105535bd4;
      }
    }
    lVar3 = 0;
  }
LAB_105535be0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105535bfc; end: 105535c03; -[SCConversationUrlHtmlContent html] */

undefined8 FUN_105535bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105535c04; end: 105535c0b; -[SCConversationUrlHtmlContent htmlHeight] */

undefined8 FUN_105535c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105535c0c; end: 105535c13; -[SCConversationUrlHtmlContent htmlWidth] */

undefined8 FUN_105535c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105535c14; end: 105535c1b; -[SCConversationUrlHtmlContent htmlThumbnail] */

undefined8 FUN_105535c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105535c1c; end: 105535c4b; -[SCConversationUrlHtmlContent .cxx_destruct] */

void FUN_105535c1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105535c4c; end: 105535caf;  */

undefined ** FUN_105535c4c(void)

{
  int iVar1;
  
  if ((bRam0000000113819820 & 1) == 0) {
    iVar1 = 0x13819820;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130e31e0,0x100000000);
      ___cxa_guard_release(0x113819820);
    }
  }
  return &PTR_PTR_1130e31e0;
}



/* Entry: 105535cb0; end: 105535d37;  */

void FUN_105535cb0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105535d38; end: 105535dc3;  */

void FUN_105535d38(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c28f340(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105535dc4; end: 105535ea3;  */

undefined8 * FUN_105535dc4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108962d0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105535ea4; end: 10553655f;  */

void FUN_105535ea4(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000105536504;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105536524;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105536524;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000105536498:
                    /* WARNING: Could not recover jumptable at 0x0001055364bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105536498;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000105536524;
    }
    goto code_r0x000105536518;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105536518;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000105536524;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105536524;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_105536534;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105536504:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105536518:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105536524:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105536534:
  return;
}



/* Entry: 105536560; end: 1055365e7;  */

void FUN_105536560(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001055365d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1055365e8; end: 10553671b;  */

void FUN_1055365e8(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105536710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 10553671c; end: 105536a2b;  */

long * FUN_10553671c(long param_1,long *param_2,long *param_3,byte *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  byte bVar8;
  long *plVar9;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_52;
  byte bStack_51;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xe) {
    if (iVar2 - 1U < 2) {
      plVar9 = (long *)0x0;
      *param_4 = 0;
      goto LAB_105536a00;
    }
    if (iVar2 - 0xcU < 2) {
      plVar9 = (long *)0x0;
      goto LAB_105536a00;
    }
  }
  else {
    if (iVar2 - 0xfU < 2) {
      *param_4 = 0;
      plVar9 = (long *)(ulong)*(uint *)(param_1 + 0x30);
      goto LAB_105536a00;
    }
    if (iVar2 == 0xe) {
      lVar1 = 0x28;
      plVar9 = param_3;
      if (param_2 != (long *)0x0) {
        lVar1 = 0x20;
        plVar9 = param_2;
      }
      (**(code **)(param_1 + lVar1))(plVar9,param_4);
      goto LAB_105536a00;
    }
  }
  plVar6 = *(long **)(param_1 + 0x38);
  plVar7 = *(long **)(param_1 + 0x40);
  _objc_retain(param_3);
  plVar9 = (long *)0x0;
  if (iVar2 < 5) {
    if (iVar2 == 0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,param_4);
      plVar9 = (long *)(ulong)((int)plVar6 == 0);
    }
    else if (iVar2 == 3) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&uStack_58);
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&uStack_5c);
      *param_4 = ((byte)uStack_58 | (byte)uStack_5c) & 1;
      uVar3 = 0;
      uVar5 = (uint)plVar7;
      if (uVar5 != 0) {
        uVar3 = (uint)plVar6 / uVar5;
      }
      plVar9 = (long *)(ulong)((uint)plVar6 - uVar3 * uVar5);
    }
    else if (iVar2 == 4) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&uStack_58);
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&uStack_5c);
      if (((int)plVar6 == 0) && (bVar8 = (byte)uStack_5c, (uStack_58 & 1) == 0)) {
LAB_1055368d4:
        bVar8 = (byte)uStack_58 & bVar8;
      }
      else {
        if (((int)plVar7 == 0) && ((uStack_5c & 1) == 0)) {
          bVar8 = 0;
          goto LAB_1055368d4;
        }
        bVar8 = (byte)uStack_58 | (byte)uStack_5c;
      }
      *param_4 = bVar8 & 1;
      bVar4 = (int)plVar6 == 0 || (int)plVar7 == 0;
      goto LAB_1055369f4;
    }
  }
  else if (iVar2 - 6U < 6) {
    plVar9 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&bStack_51);
    uStack_58 = (uint)plVar9;
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_52);
    uStack_5c = (uint)plVar7;
    *param_4 = (bStack_51 | bStack_52) & 1;
    FUN_105536a68(plVar6,&uStack_58,&uStack_5c,iVar2,0);
    plVar9 = plVar6;
  }
  else if (iVar2 == 5) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&uStack_58);
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&uStack_5c);
    if (((int)plVar6 == 0) || (bVar8 = (byte)uStack_5c, (uStack_58 & 1) != 0)) {
      if (((int)plVar7 != 0) && ((uStack_5c & 1) == 0)) {
        bVar8 = 0;
        goto LAB_10553693c;
      }
      bVar8 = (byte)uStack_58 | (byte)uStack_5c;
    }
    else {
LAB_10553693c:
      bVar8 = (byte)uStack_58 & bVar8;
    }
    *param_4 = bVar8 & 1;
    bVar4 = (int)plVar6 == 0 && (int)plVar7 == 0;
LAB_1055369f4:
    plVar9 = (long *)(ulong)!bVar4;
  }
  _objc_release(param_3);
LAB_105536a00:
  _objc_release(param_3);
  return plVar9;
}



/* Entry: 105536a2c; end: 105536a67;  */

undefined8 FUN_105536a2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_105536b1c(uVar1,param_1);
  return uVar1;
}



/* Entry: 105536a68; end: 105536b1b;  */

bool FUN_105536a68(undefined8 param_1,uint *param_2,uint *param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_4 < 9) {
    if (param_4 == 6) {
      return *param_2 < *param_3;
    }
    if (param_4 == 7) {
      return *param_2 <= *param_3;
    }
    if (param_4 == 8) {
      return *param_3 < *param_2;
    }
  }
  else {
    if (param_4 == 9) {
      return *param_3 <= *param_2;
    }
    if (param_4 == 10) {
      bVar1 = *param_2 == *param_3;
    }
    else if (param_4 == 0xb) {
      return *param_2 != *param_3;
    }
  }
  return bVar1;
}



/* Entry: 105536b1c; end: 105536cc7;  */

void FUN_105536b1c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000105536d5c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000105536cc8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_105536c08:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_105536e5c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_105536c08;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_FUN_1108962d0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 105536cc8; end: 105536e5b;  */

undefined8 * FUN_105536cc8(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_1108962d0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105536e5c; end: 105536ef3;  */

undefined8 * FUN_105536e5c(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_1108962d0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_105536ef4(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105536ef4; end: 105536f6b;  */

void FUN_105536ef4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_105536f6c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 105536f6c; end: 105536fa7;  */

long * FUN_105536f6c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1 + 2;
    func_0x00010014b23c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    return plVar1;
  }
  FUN_105536fa8();
  func_0x000104bd47e8(&UNK_10f2d07cb);
  return (long *)&UNK_10f2d07d2;
}



/* Entry: 105536fa8; end: 105536fbb;  */

undefined * FUN_105536fa8(void)

{
  func_0x000104bd47e8(&UNK_10f2d07cb);
  return &UNK_10f2d07d2;
}



/* Entry: 105536fbc; end: 105536fc7; +[SCConversationUrlPreview table] */

undefined * FUN_105536fbc(void)

{
  return &UNK_10f2d07d2;
}


