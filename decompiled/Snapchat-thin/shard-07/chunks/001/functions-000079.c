/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105179178; end: 10517917f; -[SCAddFriendsSectionHeaderViewModel primaryViewModel] */

undefined8 FUN_105179178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105179180; end: 10517918b; -[SCAddFriendsSectionHeaderViewModel actionButtonContentInsets] */

undefined8 FUN_105179180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10517918c; end: 105179193; -[SCAddFriendsSectionHeaderViewModel actionButtonViewModel] */

undefined8 FUN_10517918c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105179194; end: 10517919b; -[SCAddFriendsSectionHeaderViewModel backgroundColor] */

undefined8 FUN_105179194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10517919c; end: 1051791a3; -[SCAddFriendsSectionHeaderViewModel scrollShadowViewModel] */

undefined8 FUN_10517919c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051791a4; end: 1051791ab; -[SCAddFriendsSectionHeaderViewModel badgeViewModel] */

undefined8 FUN_1051791a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1051791ac; end: 10517920b; -[SCAddFriendsSectionHeaderViewModel .cxx_destruct] */

void FUN_1051791ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10517920c; end: 1051792af; -[SCAddFriendsShadowViewModel initWithOffset:radius:color:opacity:] */

undefined1 *
FUN_10517920c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e68e8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1051792b0; end: 1051792d3; -[SCAddFriendsShadowViewModel copyWithZone:] */

undefined8 FUN_1051792b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1051792d4; end: 1051793c7; -[SCAddFriendsShadowViewModel hash] */

ulong * FUN_1051792d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uVar5 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_30 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_1051794a8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1051794b4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)((long)puVar3 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar1 = false, !NAN(*(double *)((long)puVar3 + 0x28)) && !NAN(*(double *)(param_3 + 0x28))
         )) {
        bVar1 = *(double *)((long)puVar3 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
        dVar8 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar8))) {
          bVar1 = dVar10 < dVar8;
        }
        if (bVar1) {
          fVar9 = ABS(*(float *)((long)puVar3 + 8) - *(float *)(param_3 + 8));
          fVar7 = ABS(*(float *)((long)puVar3 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar7))) {
            bVar1 = fVar9 < fVar7;
          }
          if (bVar1) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
            if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
              func_0x00010c071c60();
              goto LAB_1051794b4;
            }
            goto LAB_1051794a8;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1051794b4:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 1051793c8; end: 1051794cf; -[SCAddFriendsShadowViewModel isEqual:] */

long FUN_1051793c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1051794a8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1051794b4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x28)) && !NAN(*(double *)(param_3 + 0x28)))) {
        bVar1 = *(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (bVar1) {
        dVar8 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar6 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar6))) {
          bVar1 = dVar8 < dVar6;
        }
        if (bVar1) {
          fVar7 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
          fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5))) {
            bVar1 = fVar7 < fVar5;
          }
          if (bVar1) {
            lVar4 = *(long *)(param_1 + 0x18);
            if (lVar4 != *(long *)(param_3 + 0x18)) {
              func_0x00010c071c60();
              goto LAB_1051794b4;
            }
            goto LAB_1051794a8;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1051794b4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1051794d0; end: 1051794d7; -[SCAddFriendsShadowViewModel offset] */

undefined1  [16] FUN_1051794d0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 1051794d8; end: 1051794df; -[SCAddFriendsShadowViewModel radius] */

undefined8 FUN_1051794d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051794e0; end: 1051794e7; -[SCAddFriendsShadowViewModel color] */

undefined8 FUN_1051794e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051794e8; end: 1051794ef; -[SCAddFriendsShadowViewModel opacity] */

undefined4 FUN_1051794e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1051794f0; end: 1051794fb; -[SCAddFriendsShadowViewModel .cxx_destruct] */

void FUN_1051794f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1051794fc; end: 10517966f; -[SCStandardExternalContentShareWorkflow initWithUiContainer:viewContainer:externalShareSheetScopeExposer:externalShareSheetScopeServices:actionHandler:eventSubject:delegate:] */

undefined1 *
FUN_1051794fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e68f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105179670; end: 10517971b; -[SCStandardExternalContentShareWorkflow beginStandardExternalContentShareWithShareOptions:shareOptionsOrder:shareSource:shareSheetBottomPaddingSpace:dismissDisabledRects:] */

void FUN_105179670(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be0ce00(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10517971c; end: 10517975f; -[SCStandardExternalContentShareWorkflow shareSheetRendered] */

void FUN_10517971c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126b5630;
  func_0x00010c22af60(PTR_PTR_1126b5630);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105179760; end: 105179767; -[SCStandardExternalContentShareWorkflow shareOptionSelected:] */

void FUN_105179760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd26f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_handleShareDestination__1125d2360);
  return;
}



/* Entry: 105179768; end: 10517976f; -[SCStandardExternalContentShareWorkflow dismiss] */

void FUN_105179768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_handleDismiss_1125d1d40);
  return;
}



/* Entry: 105179770; end: 10517989b; -[SCStandardExternalContentShareWorkflow _exposeExternalShareSheetScope:shareOptionsOrder:shareSource:shareSheetBottomPaddingSpace:dismissDisabledRects:] */

void FUN_105179770(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  puVar2 = PTR_PTR_1126b5630;
  func_0x00010c136660(PTR_PTR_1126b5630);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_3,puVar2);
  _objc_release(puVar2);
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) == 0) {
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bf24060(uVar3,param_3,lVar1,param_4,param_5,param_6,param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105179858;
    }
  }
  else if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf24720(param_1,uVar3,param_3,*(long *)(param_2 + 0x10),param_4,param_5,param_6,
                        param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105179858;
  }
  uVar3 = 0;
LAB_105179858:
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x18),param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10517989c; end: 105179903; -[SCStandardExternalContentShareWorkflow .cxx_destruct] */

void FUN_10517989c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105179904; end: 105179bb7; -[SCStandardExternalContentShareEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105179904(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_11271e0f0;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11271e0f4;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = lVar3;
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar12);
  _objc_release(lVar1);
  lVar12 = (long)_DAT_11271e0f8;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 3;
  if (lVar2 == 0) {
    uVar9 = 1;
  }
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271e0fc;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x000108f936e8(lVar4,lVar5,lVar2 != 0,0,1,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c0d3c80();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar1 = lVar12;
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar12);
  if (lVar1 == 0) {
    func_0x00010bdd3bc0(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar11 = *(undefined8 *)(param_1 + lVar10);
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = uVar9;
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(uVar11);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105179bb8; end: 105179bef;  */

void FUN_105179bb8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105179bf0; end: 105179d3f; -[SCStandardExternalContentShareEntryPoint _handleTextConfigurationWithShareUIType:availableShareDestinations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105179bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar1 = param_1 + _DAT_11271e0f8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105179d40;
    puStack_68 = &UNK_110842a68;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010be31f20(param_1);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 105179d40; end: 105179d77;  */

void FUN_105179d40(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105179d78; end: 105179e7b; -[SCStandardExternalContentShareEntryPoint _handleTextConfigFuture:shareUIType:availableShareDestinations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105179d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  uStack_50 = param_4;
  func_0x00010c297260(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105179e7c; end: 105179f7f;  */

void FUN_105179e7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf681e0();
    if (lVar2 == 0x13) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(puVar3);
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105179f80;
    puStack_60 = &UNK_110844b80;
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lStack_58 = lVar1;
    _objc_retain(uVar4);
    uStack_50 = uVar4;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105179f80; end: 105179f8f;  */

void FUN_105179f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__beginShareWithShareUIType_share_112552890,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105179f90; end: 10517abe3; -[SCStandardExternalContentShareEntryPoint _beginShareWithShareUIType:shareDestinations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105179f90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  undefined *puStack_e0;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  lVar36 = param_2 + _DAT_11271e0f8;
  lVar1 = lVar36;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126b5688;
  _objc_alloc();
  lVar1 = param_2 + _DAT_11271e100;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2 + _DAT_11271e104;
  lVar6 = lVar33;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2 + _DAT_11271e0f0;
  lVar8 = lVar32;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2 + _DAT_11271e108;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2 + _DAT_11271e10c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c06a980();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_2 + _DAT_11271e0fc;
  lVar14 = lVar35;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar36;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2 + _DAT_11271e110;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar36;
  _objc_loadWeakRetained();
  func_0x00010c22b040();
  lVar37 = param_2 + _DAT_11271e114;
  _objc_loadWeakRetained();
  lVar21 = lVar37;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058480();
  _objc_release(lVar21);
  _objc_release(lVar37);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126b5698;
  _objc_alloc();
  lVar5 = lVar36;
  _objc_loadWeakRetained();
  func_0x00010c22b040();
  lVar37 = (long)_DAT_11271e118;
  lVar10 = param_2 + lVar37;
  _objc_loadWeakRetained();
  lVar6 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar36;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar36;
  _objc_loadWeakRetained();
  lVar11 = lVar9;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar32;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2 + _DAT_11271e11c;
  _objc_loadWeakRetained();
  lVar15 = lVar12;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar36;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf8a6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar36;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c22c620();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar27;
  func_0x00010c1057c0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar36;
  _objc_loadWeakRetained();
  lVar19 = lVar20;
  func_0x00010c22c620();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar19;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2 + _DAT_11271e120;
  _objc_loadWeakRetained();
  lVar16 = lVar18;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar35;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar36;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c22c620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045a80();
  uVar38 = *(undefined8 *)(param_2 + _DAT_11271e124);
  *(undefined **)(param_2 + _DAT_11271e124) = puVar22;
  _objc_release(uVar38);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar16);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar19);
  _objc_release(lVar20);
  _objc_release(lVar21);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar15);
  _objc_release(lVar12);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar5);
  puVar22 = PTR_PTR_1126b5680;
  _objc_alloc();
  lVar37 = param_2 + lVar37;
  _objc_loadWeakRetained();
  lVar5 = lVar37;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar36;
  _objc_loadWeakRetained(lVar36);
  func_0x00010c22b040();
  lVar12 = lVar32;
  _objc_loadWeakRetained(lVar32);
  lVar10 = lVar12;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar35;
  _objc_loadWeakRetained();
  lVar6 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f160();
  uVar38 = *(undefined8 *)(param_2 + _DAT_11271e128);
  *(undefined **)(param_2 + _DAT_11271e128) = puVar22;
  _objc_release(uVar38);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar12);
  _objc_release(lVar18);
  _objc_release(lVar5);
  _objc_release(lVar37);
  lVar18 = lVar36;
  _objc_loadWeakRetained();
  lVar12 = lVar18;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar12;
  func_0x00010bf8a6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar12);
  _objc_release(lVar18);
  if (lVar10 == 0) {
    puVar22 = (undefined *)(param_2 + _DAT_11271e140);
    _objc_loadWeakRetained();
    puStack_e0 = puVar22;
    func_0x00010c2a29c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
  }
  else {
    _objc_initWeak(auStack_80,param_2);
    puStack_e0 = PTR_PTR_1126ae720;
    param_1 = 0xc2000000;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  puVar22 = PTR_PTR_1126b5690;
  _objc_alloc();
  lVar5 = lVar36;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar36;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar36;
  _objc_loadWeakRetained();
  lVar11 = lVar9;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar36;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar36;
  _objc_loadWeakRetained();
  func_0x00010c22b040();
  _objc_loadWeakRetained();
  lVar16 = lVar32;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2 + _DAT_11271e12c;
  _objc_loadWeakRetained();
  lVar17 = lVar10;
  func_0x00010bf9e340();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2 + _DAT_11271e144;
  _objc_loadWeakRetained();
  lVar19 = lVar12;
  func_0x00010c29bd40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar35;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar27 = lVar33;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2 + _DAT_11271e148;
  _objc_loadWeakRetained();
  lVar26 = lVar18;
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_2 + _DAT_11271e130;
  _objc_loadWeakRetained();
  lVar25 = lVar37;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058880(puVar22);
  _objc_release(lVar25);
  _objc_release(lVar37);
  _objc_release(lVar26);
  _objc_release(lVar18);
  _objc_release(lVar27);
  _objc_release(lVar33);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar17);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar32);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar34 = PTR_PTR_1126b5728;
  _objc_alloc();
  lVar32 = lVar36;
  _objc_loadWeakRetained(lVar36);
  lVar10 = lVar32;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar36;
  _objc_loadWeakRetained(lVar36);
  lVar18 = lVar12;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2 + _DAT_11271e138;
  _objc_loadWeakRetained(lVar33);
  func_0x00010c058aa0();
  lVar37 = (long)_DAT_11271e13c;
  uVar38 = *(undefined8 *)(param_2 + lVar37);
  *(undefined **)(param_2 + lVar37) = puVar34;
  _objc_release(uVar38);
  _objc_release(lVar33);
  _objc_release(lVar18);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar32);
  lVar33 = lVar35;
  _objc_loadWeakRetained();
  lVar32 = lVar33;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar32;
  func_0x000108faa784();
  _objc_release(lVar32);
  _objc_release(lVar33);
  if ((int)lVar10 != 0) {
    func_0x00010bfd26e0(puVar22);
  }
  uVar38 = *(undefined8 *)(param_2 + lVar37);
  _objc_loadWeakRetained(lVar35);
  lVar33 = lVar35;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar33;
  func_0x000108f930fc();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar36;
  _objc_loadWeakRetained(lVar36);
  func_0x00010c22b040();
  lVar12 = lVar36;
  _objc_loadWeakRetained(lVar36);
  func_0x00010c22aea0();
  _objc_loadWeakRetained(lVar36);
  lVar18 = lVar36;
  func_0x00010bf837c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18a60(param_1,uVar38);
  _objc_release(lVar18);
  _objc_release(lVar36);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar32);
  _objc_release(lVar33);
  _objc_release(lVar35);
  _objc_release(puVar22);
  _objc_release(puStack_e0);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 10517abe4; end: 10517ac67;  */

void FUN_10517abe4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_10517ac68();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a29c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  func_0x00010c0f05c0(lVar3,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10517ac68; end: 10517ac8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517ac68(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271e140);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10517ac8c; end: 10517ad17; -[SCStandardExternalContentShareEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517ac8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271e0f8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e68f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10517ad18; end: 10517aea7; -[SCStandardExternalContentShareEntryPoint handleShareDestination:standardExternalContentShareScope:] */

byte FUN_10517ad18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  if (param_3 == 0x19) {
    bVar2 = 0;
  }
  else {
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    puStack_58 = &uStack_60;
    _objc_initWeak(auStack_68,param_1);
    uVar1 = 0;
    _dispatch_semaphore_create();
    func_0x00010bebf440();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10517aea8;
    puStack_98 = &UNK_11086d048;
    puStack_80 = &uStack_60;
    _objc_copyWeak(auStack_78,auStack_68);
    lStack_70 = param_3;
    _objc_retain(param_1);
    uStack_90 = param_1;
    _objc_retain(uVar1);
    uStack_88 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_b0);
    _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
    bVar2 = *(byte *)(puStack_58 + 3);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_4);
  return bVar2 & 1;
}



/* Entry: 10517aea8; end: 10517aef3;  */

void FUN_10517aea8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be2ff80();
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)lVar2;
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10517aef4; end: 10517afa7; -[SCStandardExternalContentShareEntryPoint shareSheetDismissedWithShareDestination:] */

void FUN_10517aef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined1 auStack_28 [8];
  
  if (param_3 != 0x19) {
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10517afa8;
    puStack_40 = &UNK_110846540;
    _objc_copyWeak(auStack_38,auStack_28);
    lStack_30 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10517afa8; end: 10517afdb;  */

void FUN_10517afa8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb1ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517afdc; end: 10517b06f; -[SCStandardExternalContentShareEntryPoint _shareSheetDismissedWithShareDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517afdc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e134;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + _DAT_11271e0f8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22af00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517b070; end: 10517b0ff; -[SCStandardExternalContentShareEntryPoint _handleShareDestination:standardExternalContentShareScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10517b070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271e0f8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar3 = lVar2;
  func_0x00010bfd2720(lVar2,param_2,param_3,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 10517b100; end: 10517b11f; -[SCStandardExternalContentShareEntryPoint _standardExternalContentShareScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517b100(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271e0f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10517b120; end: 10517b267; -[SCStandardExternalContentShareEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517b120(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e134,0);
  _objc_destroyWeak(param_1 + _DAT_11271e138);
  _objc_destroyWeak(param_1 + _DAT_11271e114);
  _objc_destroyWeak(param_1 + _DAT_11271e120);
  _objc_destroyWeak(param_1 + _DAT_11271e110);
  _objc_destroyWeak(param_1 + _DAT_11271e10c);
  _objc_destroyWeak(param_1 + _DAT_11271e130);
  _objc_destroyWeak(param_1 + _DAT_11271e148);
  _objc_destroyWeak(param_1 + _DAT_11271e144);
  _objc_destroyWeak(param_1 + _DAT_11271e140);
  _objc_destroyWeak(param_1 + _DAT_11271e12c);
  _objc_destroyWeak(param_1 + _DAT_11271e108);
  _objc_destroyWeak(param_1 + _DAT_11271e11c);
  _objc_destroyWeak(param_1 + _DAT_11271e0f0);
  _objc_destroyWeak(param_1 + _DAT_11271e0fc);
  _objc_destroyWeak(param_1 + _DAT_11271e0f8);
  _objc_destroyWeak(param_1 + _DAT_11271e118);
  _objc_destroyWeak(param_1 + _DAT_11271e100);
  _objc_destroyWeak(param_1 + _DAT_11271e104);
  _objc_storeStrong(param_1 + _DAT_11271e0f4,0);
  _objc_storeStrong(param_1 + _DAT_11271e128,0);
  _objc_storeStrong(param_1 + _DAT_11271e124,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e13c,0);
  return;
}



/* Entry: 10517b268; end: 10517b273; +[SCCIncentiveCampaignInviteDetailsComponent componentPath] */

undefined ** FUN_10517b268(void)

{
  return &PTR____CFConstantStringClassReference_110dc8a18;
}



/* Entry: 10517b274; end: 10517b2a7; -[SCCIncentiveCampaignInviteDetailsComponent initWithViewModel:componentContext:runtime:] */

void FUN_10517b274(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6900;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10517b2a8; end: 10517b2f7; -[SCCIncentiveCampaignInviteDetailsComponent setViewModel:] */

void FUN_10517b2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517b2f8; end: 10517b33b; -[SCCIncentiveCampaignInviteDetailsComponent viewModel] */

void FUN_10517b2f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10517b33c; end: 10517b407; -[SCCIncentiveCampaignInviteDetailsComponentContext initWithShareInviteClicked:dismiss:openTermsAndConditions:] */

undefined8 *
FUN_10517b33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126e6908;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10517b408; end: 10517b417; +[SCCIncentiveCampaignInviteDetailsComponentContext valdiMarshallableObjectDescriptor] */

void FUN_10517b408(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_shareInviteClicked_11086d078;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10517b418; end: 10517b44b; -[SCCIncentiveCampaignInviteDetailsComponentViewModel init] */

void FUN_10517b418(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6910;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10517b44c; end: 10517b467; +[SCCIncentiveCampaignInviteDetailsComponentViewModel valdiMarshallableObjectDescriptor] */

void FUN_10517b44c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dd901d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10517b468; end: 10517b473; +[SCCIncentiveCampaignPlusTakeoverComponent componentPath] */

undefined ** FUN_10517b468(void)

{
  return &PTR____CFConstantStringClassReference_110dc8a38;
}



/* Entry: 10517b474; end: 10517b4a7; -[SCCIncentiveCampaignPlusTakeoverComponent initWithViewModel:componentContext:runtime:] */

void FUN_10517b474(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6918;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10517b4a8; end: 10517b4f7; -[SCCIncentiveCampaignPlusTakeoverComponent setViewModel:] */

void FUN_10517b4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517b4f8; end: 10517b53b; -[SCCIncentiveCampaignPlusTakeoverComponent viewModel] */

void FUN_10517b4f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10517b53c; end: 10517b5db; -[SCCIncentiveCampaignPlusTakeoverType__Enum init] */

undefined **
FUN_10517b53c(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_38 = PTR_PTR_1130c6130;
  puStack_30 = PTR_PTR_1130c6138;
  uVar5 = 2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0105e0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(puVar4);
  _objc_retainBlock();
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_88 = PTR_PTR_1126e6920;
  ppuVar3 = &puStack_90;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(ppuVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  return ppuVar3;
}



/* Entry: 10517b5dc; end: 10517b693; -[SCCIncentiveCampaignPlusTakeoverContext initWithTakeoverType:onPrimaryButtonClicked:onSecondaryButtonClicked:] */

undefined8 *
FUN_10517b5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126e6920;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 10517b694; end: 10517b6b3; +[SCCIncentiveCampaignPlusTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_10517b694(undefined8 *param_1)

{
  *param_1 = &PTR_s_takeoverType_11086d0d8;
  param_1[1] = &PTR_s_SCCIncentiveCampaignPlusTakeover_11086d138;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10517b6b4; end: 10517b6e7; -[SCCInventiveCampaignPlusTakeoverViewModel init] */

void FUN_10517b6b4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6928;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10517b6e8; end: 10517b703; +[SCCInventiveCampaignPlusTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_10517b6e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dd901f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10517b704; end: 10517b77b;  */

void FUN_10517b704(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar1 = param_4;
    func_0x00010c252ee0();
    if (lVar1 < 400) {
      bVar2 = true;
    }
    else {
      lVar1 = param_4;
      func_0x00010c252ee0(param_4);
      bVar2 = 599 < lVar1;
    }
  }
  else {
    bVar2 = false;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),bVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10517b77c; end: 10517b857;  */

ulong FUN_10517b77c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8ab8);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_1,
       func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8ad8),
       (uVar1 & 1) == 0)) &&
      (uVar1 = param_1,
      func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8af8),
      (uVar1 & 1) == 0)) &&
     (uVar1 = param_1,
     func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8b18),
     (int)uVar1 == 0)) {
    uVar1 = param_1;
    func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8b58);
    _objc_release(param_1);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_1,
       func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8b38),
       (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc8b78);
      goto LAB_10517b7f4;
    }
  }
  else {
    _objc_release(param_1);
  }
  uVar1 = 1;
LAB_10517b7f4:
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10517b858; end: 10517ba63; -[SCMemoryDeepLinkImplementation initWithNavigationDelegate:immediateUserFeatureLaunchServices:grapheneRegistry:smsReceiver:boltURLMediaOperaService:circumstanceEngine:notificationPool:systemNetworkServices:blockedSnapchatterFetcher:addFriendSheetScopeExposer:addFriendSheetScopeServices:] */

undefined8 *
FUN_10517b858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e6930;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_storeWeak(puVar1 + 6,param_7);
    _objc_storeWeak(puVar1 + 7,param_8);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_storeWeak(puVar1 + 9,param_10);
    _objc_storeWeak(puVar1 + 10,param_11);
    _objc_storeWeak(puVar1 + 0xb,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xf) = 0;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10517ba64; end: 10517ba77; -[SCMemoryDeepLinkImplementation identifier] */

void FUN_10517ba64(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10517ba78; end: 10517ba7f; -[SCMemoryDeepLinkImplementation priority] */

undefined8 FUN_10517ba78(void)

{
  return 1000;
}



/* Entry: 10517ba80; end: 10517baff; -[SCMemoryDeepLinkImplementation canProvideProcessorForFeature:] */

ulong FUN_10517ba80(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e192d8);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbddd8),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba938);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10517bb00; end: 10517bd33; -[SCMemoryDeepLinkImplementation isValidDeepLink:] */

undefined8 FUN_10517bb00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
LAB_10517bcd8:
    uVar2 = param_3;
    func_0x00010bfa1820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2d2a0(param_1,param_2,uVar2);
  }
  else {
    uVar1 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf529e0();
    if (1 < uVar1) {
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          &PTR____CFConstantStringClassReference_110f83c38);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puVar4 = puVar3;
      func_0x00010bf529e0();
      func_0x00010c225ec0(puVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10517bd34;
      puStack_60 = &UNK_11085b220;
      puStack_58 = puVar5;
      func_0x00010bf97e80(puVar3,param_2,&puStack_78);
      uVar1 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf4b900(puVar5,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(uVar2);
      if (((ulong)puVar4 & 1) != 0) {
        param_1 = 0;
        goto LAB_10517bd0c;
      }
      goto LAB_10517bcd8;
    }
    param_1 = 0;
  }
  _objc_release(uVar2);
LAB_10517bd0c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10517bd34; end: 10517bdb3;  */

void FUN_10517bd34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08fa60(param_2);
  uVar1 = param_2;
  func_0x00010c25cfe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10517bdb4; end: 10517bdb7; -[SCMemoryDeepLinkImplementation makeDeepLinkProcessor] */

void FUN_10517bdb4(void)

{
  return;
}



/* Entry: 10517bdb8; end: 10517c313; -[SCMemoryDeepLinkImplementation processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10517bdb8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined **ppuVar12;
  undefined **ppuStack_e0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ca160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b5738;
  func_0x00010bf0d880(PTR_PTR_1126b5738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(lVar3);
  _objc_release(puVar4);
  ppuVar5 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  FUN_10517b77c();
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar7 = ppuVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar12 = ppuVar7;
    func_0x00010bfda7c0();
    if (((((ulong)ppuVar12 & 1) == 0) &&
        (ppuVar12 = ppuVar7, func_0x00010bfda7c0(), ((ulong)ppuVar12 & 1) == 0)) &&
       (ppuVar12 = ppuVar7, func_0x00010bfda7c0(), ((ulong)ppuVar12 & 1) == 0)) {
      ppuVar12 = ppuVar7;
      func_0x00010bfda7c0();
    }
    else {
      ppuVar12 = (undefined **)0x1;
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar7);
    if (ppuVar5 != (undefined **)0x0) {
      if (((ulong)ppuVar12 & 1) != 0) goto LAB_10517bf14;
      ppuStack_e0 = ppuVar5;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuStack_e0;
      FUN_10517b77c();
      if (((ulong)ppuVar7 & 1) != 0) {
        uVar11 = 0;
        goto LAB_10517bf28;
      }
      _objc_release(ppuStack_e0);
    }
  }
  else if (ppuVar5 != (undefined **)0x0) {
LAB_10517bf14:
    uVar11 = 1;
LAB_10517bf28:
    ppuVar12 = ppuVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar12;
    func_0x00010c08fa60();
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc8b38;
    func_0x00010c08fa60();
    _objc_release(ppuVar12);
    if (uVar11 == 0) {
      _objc_release(ppuStack_e0);
    }
    if (ppuVar7 < ppuVar8) {
      ppuVar7 = ppuVar6;
      func_0x00010bfda7c0();
      lVar1 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf1f440();
      _objc_release(lVar1);
      if (((uVar11 & ((uint)ppuVar7 ^ 1)) == 1) && ((int)lVar2 != 0)) {
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_10517c314;
        puStack_80 = &UNK_110848ba8;
        lStack_78 = param_1;
        _objc_retain(param_3);
        ppuStack_70 = param_3;
        _objc_retain(param_4);
        uStack_68 = param_4;
        func_0x000100162d98("APPSTORE",&puStack_98);
        _objc_release(uStack_68);
        _objc_release(ppuStack_70);
      }
      else {
        func_0x00010be92140(param_1);
        _objc_storeWeak(param_1 + 0x20,param_5);
        ppuVar7 = param_3;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar7;
        if (uVar11 == 0) {
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c11db20();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar7);
        _objc_retain(ppuVar12);
        uVar9 = *(undefined8 *)(param_1 + 0x88);
        *(undefined ***)(param_1 + 0x88) = ppuVar12;
        _objc_release(uVar9);
        puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar4;
        func_0x00010c11db20();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x80);
        *(undefined **)(param_1 + 0x80) = puVar10;
        _objc_release(uVar9);
        _objc_release(puVar4);
        _objc_initWeak(auStack_a0,param_1);
        puVar4 = PTR_PTR_1126b5740;
        _objc_alloc(PTR_PTR_1126b5740);
        func_0x00010c0261a0();
        param_1 = param_1 + 0x28;
        _objc_loadWeakRetained(param_1);
        lVar1 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_a8,auStack_a0);
        _objc_retain(ppuVar12);
        func_0x00010c15bf00(lVar1);
        _objc_release(lVar1);
        _objc_release(param_1);
        _objc_release(ppuVar12);
        _objc_destroyWeak(auStack_a8);
        _objc_release(puVar4);
        _objc_destroyWeak(auStack_a0);
        _objc_release(ppuVar12);
      }
      goto LAB_10517c134;
    }
  }
  puVar4 = PTR_PTR_1126b5738;
  func_0x00010bf9fac0(PTR_PTR_1126b5738);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(lVar3);
  _objc_release(puVar10);
  _objc_release(puVar4);
  func_0x00010c0a5fe0(param_5);
  func_0x00010bf94700(param_5);
LAB_10517c134:
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10517c314; end: 10517c353;  */

void FUN_10517c314(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10d420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10517c354; end: 10517c413;  */

void FUN_10517c354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10517c414;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10517c414; end: 10517c447;  */

void FUN_10517c414(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be309c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517c448; end: 10517c44f; -[SCMemoryDeepLinkImplementation shouldForceNavigation] */

undefined8 FUN_10517c448(void)

{
  return 0;
}



/* Entry: 10517c450; end: 10517c453; -[SCMemoryDeepLinkImplementation processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10517c450(void)

{
  return;
}



/* Entry: 10517c454; end: 10517c4cf; -[SCMemoryDeepLinkImplementation endAddFriendSheetScope] */

void FUN_10517c454(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10517c4d0; end: 10517c933; -[SCMemoryDeepLinkImplementation _handleSocialSMSResponse:shareURL:] */

void FUN_10517c4d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ca160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) goto LAB_10517c564;
    lVar2 = param_3;
    func_0x00010c0c5520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0c4040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar6 == 0) goto LAB_10517c56c;
    lVar2 = param_3;
    func_0x00010c0c5520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0c4040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    _dispatch_group_create();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10517c9e4;
    puStack_c0 = &UNK_11086d1f8;
    lStack_b8 = lVar5;
    lStack_b0 = param_1;
    _objc_retain();
    func_0x00010bf97e80(lVar1);
    _objc_initWeak(auStack_78,param_1);
    puStack_118 = puVar4;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10517ce20;
    puStack_100 = &UNK_110850cf8;
    _objc_copyWeak(auStack_e0,auStack_78);
    _objc_retain(param_3);
    lStack_f8 = param_3;
    lStack_f0 = lVar2;
    _objc_retain(param_4);
    uStack_e8 = param_4;
    func_0x000100bc0718(lVar5,PTR___dispatch_main_q_11034be20,&puStack_118);
    _objc_release(uStack_e8);
    _objc_release(lStack_f8);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_78);
    _objc_release(lStack_b8);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  else {
LAB_10517c564:
    _objc_release(lVar1);
LAB_10517c56c:
    lVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_3 == 0) || (lVar1 != 0)) {
      puVar4 = PTR_PTR_1126b5738;
      func_0x00010bf9fac0(PTR_PTR_1126b5738);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126b5738;
      func_0x00010bf9fac0(PTR_PTR_1126b5738);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(lVar3);
    _objc_release(puVar7);
    _objc_release(puVar4);
    lVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_78,param_1);
      lVar1 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10517c934;
      puStack_90 = &UNK_11084b7a0;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(param_3);
      lStack_88 = param_3;
      func_0x00010be10260(param_1);
      _objc_release(lVar1);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      goto LAB_10517c8d4;
    }
    func_0x00010be04500(param_1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0a5fe0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf94700();
  }
  _objc_release(lVar1);
LAB_10517c8d4:
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10517c934; end: 10517c9e3;  */

void FUN_10517c934(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7dbe0(lVar1);
      _objc_release(uVar3);
      func_0x00010be04500(lVar1);
    }
    else {
      func_0x00010be04500(lVar1);
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c0a5fe0();
      _objc_release(lVar2);
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf94700();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10517c9e4; end: 10517cd33;  */

void FUN_10517c9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  
  _objc_retain(param_2);
  uVar10 = param_2;
  func_0x00010c074fe0();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = param_2;
  func_0x00010c0b6b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_a8,*(undefined8 *)(param_1 + 0x28));
  lVar4 = *(long *)(param_1 + 0x28) + 0x48;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_10517cd34;
  puStack_e8 = &UNK_11086d1c8;
  _objc_retain(param_2);
  uStack_b0 = (undefined1)uVar10;
  uStack_e0 = param_2;
  puStack_d8 = puVar3;
  uStack_d0 = uVar2;
  uStack_b8 = param_3;
  _objc_copyWeak(auStack_c0,auStack_a8);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  uStack_c8 = uVar10;
  _objc_retain(puVar3);
  _objc_retain(lVar4);
  _objc_retain(&puStack_100);
  if (lVar4 != 0) {
    puVar5 = puVar3;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar3;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      if (puVar6 != (undefined *)0x0) {
        lVar7 = lVar4;
        func_0x00010bfe4d40(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf225e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar7);
        puVar5 = PTR_PTR_1126b5730;
        _objc_alloc(PTR_PTR_1126b5730);
        func_0x00010c01b560();
        lVar7 = lVar4;
        func_0x00010bfe4c00(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = puVar1;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_10517b704;
        puStack_88 = &UNK_11086d168;
        _objc_retain(&puStack_100);
        ppuStack_80 = &puStack_100;
        func_0x00010c25f600(lVar8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(ppuStack_80);
        _objc_release(puVar5);
        _objc_release(lVar9);
        goto LAB_10517cc9c;
      }
    }
    (*pcStack_f0)(&puStack_100,0);
  }
LAB_10517cc9c:
  _objc_release(&puStack_100);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10517cd34; end: 10517ce1f;  */

void FUN_10517cd34(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b5748;
    _objc_alloc(PTR_PTR_1126b5748);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0b6b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b4e0(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    func_0x00010be98bc0();
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10517ce20; end: 10517cf13;  */

void FUN_10517ce20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b5750;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c099720(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = lVar2;
    func_0x00010be1d540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026280(puVar3,param_2,uVar4,uVar7,uVar1,lVar5,0);
    uVar7 = *(undefined8 *)(lVar2 + 0x68);
    *(undefined **)(lVar2 + 0x68) = puVar3;
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(uVar4);
    lVar6 = *(long *)(lVar2 + 0x68);
    func_0x00010c0c4040(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bf529e0();
    func_0x00010be26840(lVar2,param_2,lVar5 != 0,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10517cf14; end: 10517cf6f; -[SCMemoryDeepLinkImplementation _saveBoltMediaDataModel:] */

void FUN_10517cf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x78);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10517cf70; end: 10517cfbf; -[SCMemoryDeepLinkImplementation _getBoltPlayableMedia] */

void FUN_10517cf70(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10517cfc0; end: 10517d0ab; -[SCMemoryDeepLinkImplementation _handleBoltURLValidation:userId:] */

void FUN_10517cfc0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if ((param_3 & 1) == 0) {
    func_0x00010be2aee0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010be10260(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10517d0ac; end: 10517d103;  */

void FUN_10517d0ac(long param_1,int param_2)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010be7dbe0(param_1);
    }
    else {
      func_0x00010be267a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517d104; end: 10517d1ff; -[SCMemoryDeepLinkImplementation _fetchBlockedStatusForUserId:completion:] */

void FUN_10517d104(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar1 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_retain(param_4);
    func_0x00010bf1d780(lVar1);
    _objc_release(param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10517d200; end: 10517d217;  */

void FUN_10517d200(long param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010517d214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2 != 0 && param_3 == 0);
  return;
}



/* Entry: 10517d218; end: 10517d30b; -[SCMemoryDeepLinkImplementation _handleInvalidBoltURL] */

void FUN_10517d218(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ca160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b5738;
  func_0x00010bf9fac0(PTR_PTR_1126b5738);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(lVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be04500(param_1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a5fe0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94700();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10517d30c; end: 10517d3f3; -[SCMemoryDeepLinkImplementation _presentAddFriendPrompt] */

void FUN_10517d30c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1;
  func_0x00010be60dc0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x80) != 0 && lVar2 != 0) {
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      uVar5 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010bdc1b20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23ba0(uVar6,param_2,lVar2,param_1,uVar1,0,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      param_1 = param_1 + 0x58;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf9d620();
      _objc_release(param_1);
      _objc_release(uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10517d3f4; end: 10517d4db; -[SCMemoryDeepLinkImplementation _handleBlockedUserPlayback] */

void FUN_10517d3f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010be5f4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be2c500(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x90) = 1;
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0a5fe0();
    _objc_release(lVar2);
    func_0x00010be7c700(param_1,param_2,lVar1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ca160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126b5738;
    func_0x00010c261740(PTR_PTR_1126b5738);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(lVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10517d4dc; end: 10517d5e3; -[SCMemoryDeepLinkImplementation _memoryPlaybackPresentingViewController] */

void FUN_10517d4dc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar6 = lVar4;
    func_0x00010c275b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar6 != 0) goto LAB_10517d594;
  }
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar6 = param_1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
LAB_10517d594:
  puVar1 = PTR_DAT_1126a4e58;
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010010fab4(lVar6,puVar1);
  lVar4 = lVar6;
  if ((int)lVar5 == 0) {
    lVar4 = 0;
  }
  _objc_retain(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10517d5e4; end: 10517d703; -[SCMemoryDeepLinkImplementation _handleMissingMemoryPlaybackPresentingViewController] */

void FUN_10517d5e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ca160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b5738;
  func_0x00010bf9fac0(PTR_PTR_1126b5738);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(lVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110dc8a98,
                      &PTR____CFConstantStringClassReference_110dc8cb8,3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a5fe0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94700();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10517d704; end: 10517d7a3; -[SCMemoryDeepLinkImplementation _presentMemoryPlaybackOnViewController:] */

void FUN_10517d704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c10fa00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c18b5e0(lVar3,param_2,param_1);
  func_0x00010c10d640(lVar3,param_2,*(undefined8 *)(param_1 + 0x68),param_3,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10517d7a4; end: 10517d9e3; -[SCMemoryDeepLinkImplementation _presentProfileForUserId:] */

void FUN_10517d7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ca160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be60dc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b5738;
    func_0x00010bf9fac0(PTR_PTR_1126b5738);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(lVar3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dc8a98,
                        &PTR____CFConstantStringClassReference_110dc3498,2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0a5fe0();
    _objc_release(lVar2);
    puVar4 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained(puVar4);
    func_0x00010bf94700();
  }
  else {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0a5fe0();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bfb8800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(lVar2);
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126b5738;
    func_0x00010c261740(PTR_PTR_1126b5738);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(lVar3,param_2,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10517d9e4; end: 10517da7b; -[SCMemoryDeepLinkImplementation _displayError] */

void FUN_10517d9e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  FUN_10517e088();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10517da7c; end: 10517dafb; -[SCMemoryDeepLinkImplementation _modalContainer] */

void FUN_10517da7c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10517dafc; end: 10517db27; -[SCMemoryDeepLinkImplementation _reset] */

void FUN_10517dafc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 10517db28; end: 10517dba7; -[SCMemoryDeepLinkImplementation friendProfileDidDismiss:] */

void FUN_10517db28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf94700();
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfb8800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c80();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517dba8; end: 10517dbd7; -[SCMemoryDeepLinkImplementation friendProfileWillAppear] */

void FUN_10517dba8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a6880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517dbd8; end: 10517dc3f; -[SCMemoryDeepLinkImplementation friendProfileDidAppear:] */

void FUN_10517dbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c0c4040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be7c700(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10517dc40; end: 10517dcab; -[SCMemoryDeepLinkImplementation boltURLMediaOperaPresenterOperaPresenterDidFinishPresenting] */

void FUN_10517dc40(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0a6880();
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf94700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be79f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAddFriendPrompt_11257c168);
  return;
}


