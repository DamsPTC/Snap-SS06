/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105224938; end: 105224b23;  */

void FUN_105224938(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x0001090252b8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000109025078();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000109025210();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000109025228();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf0c980(param_2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000105224b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),1);
  return;
}



/* Entry: 105224b24; end: 105224b5b;  */

void FUN_105224b24(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105224b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105224b5c; end: 105224b6b;  */

void FUN_105224b5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105224b6c; end: 105224ca7; -[SCSpectaclesContentPageInterceptorsProvider batteryLevelInterceptorWithIsExport:] */

void FUN_105224b6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6658;
  _objc_alloc(PTR_PTR_1126b6658);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105224c44;
  puStack_40 = &UNK_110848868;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc0000000;
  pcStack_70 = FUN_105224ca8;
  puStack_68 = &UNK_110870dc0;
  uStack_60 = param_3;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c000d40(puVar2,param_2,&puStack_58,&puStack_80);
  _objc_release(uStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105224ca8; end: 105224eef;  */

void FUN_105224ca8(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain(param_3);
  bVar1 = *(byte *)(param_1 + 0x20);
  lVar2 = param_2;
  _objc_retain();
  if ((bVar1 & 1) == 0) {
    func_0x0001090252e8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001090252d0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126aed70;
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed70;
  puVar4 = puVar3;
  func_0x000109025078();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar4;
  func_0x000109025300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000109025318();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar4);
  func_0x00010bf0c980(param_2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(lVar9);
                    /* WARNING: Could not recover jumptable at 0x000105224f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))(*(long *)(lVar2 + 0x20),1);
  return;
}



/* Entry: 105224ef0; end: 105224f5f;  */

void FUN_105224ef0(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105224f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105224f60; end: 10522502f; -[SCSpectaclesContentPageInterceptorsProvider diskSpaceInterceptorWithExtraSizeNeededForContent:] */

void FUN_105224f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126b6658;
  _objc_alloc(PTR_PTR_1126b6658);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105225030;
  puStack_48 = &UNK_110870de0;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c000d40(puVar2,param_2,&puStack_60,&PTR___NSConcreteGlobalBlock_110870e10);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105225030; end: 10522507b;  */

bool FUN_105225030(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  uVar2 = *(ulong *)(param_1 + 0x28);
  (**(code **)(uVar2 + 0x10))();
  if (uVar2 < 0x3200001) {
    uVar2 = 0x3200000;
  }
  return lVar1 < (long)uVar2;
}



/* Entry: 10522507c; end: 10522522f;  */

void FUN_10522507c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000109025330();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109025348();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010bf0c980(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000105225264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 105225230; end: 105225267;  */

void FUN_105225230(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105225264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105225268; end: 105225307; -[SCSpectaclesContentPageInterceptorsProvider ongoingTransferInterceptorWithOngoingTransferResultBlock:] */

void FUN_105225268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6658;
  _objc_alloc(PTR_PTR_1126b6658);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105225308;
  puStack_30 = &UNK_110870e30;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c000d40(puVar1,param_2,&puStack_48,&PTR___NSConcreteGlobalBlock_110870e60);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105225308; end: 105225313;  */

void FUN_105225308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105225310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105225314; end: 1052254c7;  */

void FUN_105225314(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000109025360();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109025378();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010bf0c980(param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001052254fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 1052254c8; end: 1052254ff;  */

void FUN_1052254c8(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x0001052254fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105225500; end: 10522560f; -[SCSpectaclesContentPageInterceptorsProvider saveToDestinationInterceptor] */

void FUN_105225500(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  puVar2 = PTR_PTR_1126b6658;
  _objc_alloc(PTR_PTR_1126b6658);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105225610;
  puStack_60 = &UNK_110848868;
  _objc_retain(uVar3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105225650;
  puStack_98 = &UNK_110870e80;
  uStack_90 = uVar3;
  lStack_88 = param_1;
  uStack_80 = uVar4;
  uStack_58 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010c000d40(puVar2,param_2,&puStack_78,&puStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105225610; end: 10522564f;  */

uint FUN_105225610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbaa0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105225650; end: 1052257ff;  */

void FUN_105225650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6660;
  _objc_alloc(PTR_PTR_1126b6660);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0415a0(puVar1);
  puVar2 = PTR_PTR_1126b6668;
  _objc_alloc(PTR_PTR_1126b6668);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004380(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1c8b80(puVar2);
  func_0x00010bf0c980(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105225800; end: 105225837;  */

void FUN_105225800(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105225838; end: 10522590f;  */

void FUN_105225838(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_90 [6];
  undefined8 auStack_60 [6];
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfdbaa0();
  _objc_release(uVar4);
  bVar3 = (int)uVar5 == 0;
  puVar1 = auStack_60;
  if (bVar3) {
    puVar1 = auStack_90;
  }
  pcVar2 = FUN_105225910;
  if (bVar3) {
    pcVar2 = (code *)0x105225944;
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_11084aaa8;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  puVar1[4] = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  puVar1[5] = uVar5;
  func_0x0001000d76cc("APPSTORE",puVar1);
  _objc_release(puVar1[5]);
  _objc_release(puVar1[4]);
  return;
}



/* Entry: 105225910; end: 105225977;  */

void FUN_105225910(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000105225940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
  return;
}



/* Entry: 105225978; end: 105225a47; -[SCSpectaclesContentPageInterceptorsProvider transferCapabilityInterceptorWithTransferCapabilityResultBlock:isExport:] */

void FUN_105225978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6658;
  _objc_alloc(PTR_PTR_1126b6658);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105225a48;
  puStack_40 = &UNK_110870e30;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc0000000;
  pcStack_70 = FUN_105225a54;
  puStack_68 = &UNK_110870dc0;
  uStack_60 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c000d40(puVar1,param_2,&puStack_58,&puStack_80);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105225a48; end: 105225a53;  */

void FUN_105225a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105225a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105225a54; end: 105225c9b;  */

void FUN_105225a54(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain(param_3);
  bVar1 = *(byte *)(param_1 + 0x20);
  lVar2 = param_2;
  _objc_retain();
  if ((bVar1 & 1) == 0) {
    func_0x0001090252e8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001090252d0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126aed70;
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed70;
  puVar4 = puVar3;
  func_0x000109025078();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar4;
  func_0x000109025390();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x0001090253a8();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar4);
  func_0x00010bf0c980(param_2);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(lVar9);
                    /* WARNING: Could not recover jumptable at 0x000105225cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))(*(long *)(lVar2 + 0x20),1);
  return;
}



/* Entry: 105225c9c; end: 105225d0b;  */

void FUN_105225c9c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000105225cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105225d0c; end: 105225d83; -[SCSpectaclesContentPageInterceptorsProvider .cxx_destruct] */

void FUN_105225d0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105225d84; end: 105225df7; -[SCSpectaclesContentPageRecursiveInterceptorsCheck initWithUIContainer:] */

undefined1 * FUN_105225d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7020;
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



/* Entry: 105225df8; end: 105225e5b; -[SCSpectaclesContentPageRecursiveInterceptorsCheck checkInterceptors:withCompletion:] */

void FUN_105225df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010c0d3c80(param_3);
    func_0x00010bdddf00(param_1,param_2,param_3,param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105225e5c; end: 105225fa3; -[SCSpectaclesContentPageRecursiveInterceptorsCheck _checkMutableInterceptors:withCompletion:] */

void FUN_105225e5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c103880(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c068e60(lVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105225fa4; end: 105225fef;  */

void FUN_105225fa4(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdddf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105225fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105225ff0; end: 105225ffb; -[SCSpectaclesContentPageRecursiveInterceptorsCheck .cxx_destruct] */

void FUN_105225ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105225ffc; end: 10522633f; -[SCSpectaclesContentPageAssetResources initWithOnDemandResourceFetching:] */

undefined1 * FUN_105225ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf03600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105226340; end: 10522638b; -[SCSpectaclesContentPageAssetResources iconImageWithContentState:] */

void FUN_105226340(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x10;
  if ((param_3 != 0) && (param_3 != 4)) {
    if (param_3 != 2) {
      uVar2 = 0;
      goto LAB_10522637c;
    }
    lVar1 = 0x18;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
LAB_10522637c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10522638c; end: 1052263bf; -[SCSpectaclesContentPageAssetResources iconImageWithWiFiState:] */

void FUN_10522638c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    unaff_x19 = *(undefined8 *)(param_1 + param_3 * -8 + 0x30);
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1052263c0; end: 1052263c7; -[SCSpectaclesContentPageAssetResources contentPageActionBarImportIconFuture] */

undefined8 FUN_1052263c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1052263c8; end: 1052263cf; -[SCSpectaclesContentPageAssetResources contentPageActionBarExportIconFuture] */

undefined8 FUN_1052263c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1052263d0; end: 1052263d7; -[SCSpectaclesContentPageAssetResources contentPageActionBarDeleteIconFuture] */

undefined8 FUN_1052263d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1052263d8; end: 1052263df; -[SCSpectaclesContentPageAssetResources actionButtonSelectedIcon] */

undefined8 FUN_1052263d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1052263e0; end: 1052263e7; -[SCSpectaclesContentPageAssetResources actionButtonUnselectedIcon] */

undefined8 FUN_1052263e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1052263e8; end: 105226483; -[SCSpectaclesContentPageAssetResources .cxx_destruct] */

void FUN_1052263e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105226484; end: 105226823; -[SCSpectaclesContentPageActionBar initWithActionItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105226484(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar27 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar29 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar29,uVar30,uVar31,uVar32);
  puStack_c0 = PTR_PTR_1126e7030;
  puVar1 = &uStack_c8;
  puVar6 = puVar27;
  uStack_c8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithContentView__1125de998);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    lVar23 = (long)_DAT_11271ffc8;
    _objc_retain(puVar27);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 **)((long)puVar1 + lVar23) = puVar27;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar29,uVar30,uVar31,uVar32);
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    puStack_b8 = puVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    puStack_b0 = puVar10;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    puStack_a8 = puVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar27;
    puStack_a0 = puVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf49420(0x4050000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = param_3;
    func_0x00010c161aa0(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar27);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  lVar25 = (long)_DAT_11271ffcc;
  uVar19 = *(ulong *)((long)param_3 + lVar25);
  func_0x00010c071ae0();
  if (((uVar19 & 1) == 0) &&
     (puVar1 = puVar6, func_0x00010bf529e0(), (undefined *)((long)puVar1 + -1) < (undefined *)0x4))
  {
    lVar22 = (long)_DAT_11271ffd0;
    lVar24 = *(long *)((long)param_3 + lVar22);
    _objc_retain(lVar24);
    lVar20 = lVar24;
    func_0x00010bf52a60();
    lVar28 = lRam0000000000000000;
    while (lVar20 != 0) {
      lVar26 = 0;
      do {
        if (lRam0000000000000000 != lVar28) {
          _objc_enumerationMutation(lVar24);
        }
        func_0x00010c12c960(*(undefined8 *)(lVar26 * 8));
        lVar26 = lVar26 + 1;
      } while (lVar20 != lVar26);
      lVar20 = lVar24;
      func_0x00010bf52a60();
    }
    _objc_release(lVar24);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    puVar1 = puVar6;
    func_0x00010bf52a60();
    lVar20 = lRam0000000000000000;
    while (puVar1 != (undefined8 *)0x0) {
      puVar27 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar6);
        }
        puVar4 = PTR_PTR_1126b6670;
        func_0x00010beedd60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c219b60();
        func_0x00010c23d620(puVar4);
        func_0x00010befa120(puVar2);
        func_0x00010befbb60(*(undefined8 *)((long)param_3 + (long)_DAT_11271ffc8));
        _objc_release(puVar4);
        puVar27 = (undefined8 *)((long)puVar27 + 1);
      } while (puVar1 != puVar27);
      puVar1 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_retain(puVar6);
    uVar29 = *(undefined8 *)((long)param_3 + lVar25);
    *(undefined8 **)((long)param_3 + lVar25) = puVar6;
    _objc_release(uVar29);
    uVar29 = *(undefined8 *)((long)param_3 + lVar22);
    *(undefined **)((long)param_3 + lVar22) = puVar2;
    _objc_release(uVar29);
    func_0x00010beaab60(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return puVar6;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = (long)_DAT_11271ffd4;
  if (*(long *)((long)puVar6 + lVar25) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_11271ffd0;
  lVar20 = *(long *)((long)puVar6 + lVar28);
  func_0x00010bf529e0();
  if (lVar20 != 0) {
    uVar19 = 0;
    do {
      uVar29 = *(undefined8 *)((long)puVar6 + lVar28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar19 == 0) {
        uVar30 = uVar29;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar32 = *(undefined8 *)((long)puVar6 + (long)_DAT_11271ffc8);
        func_0x00010c08de00(uVar32);
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar30;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar30 = *(undefined8 *)((long)puVar6 + lVar28);
        func_0x00010c0dfd40(uVar30);
        _objc_retainAutoreleasedReturnValue();
        uVar32 = uVar29;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar30;
        func_0x00010c2793a0(uVar30);
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar32;
        func_0x00010bf493c0(0x4030000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      _objc_release(uVar32);
      _objc_release(uVar30);
      uVar30 = uVar29;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar6 + (long)_DAT_11271ffc8);
      func_0x00010c274200(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar30;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1);
      _objc_release(puVar2);
      _objc_release(uVar32);
      _objc_release(uVar3);
      _objc_release(uVar30);
      _objc_release(uVar31);
      _objc_release(uVar29);
      uVar19 = uVar19 + 1;
      uVar21 = *(ulong *)((long)puVar6 + lVar28);
      func_0x00010bf529e0();
    } while (uVar19 < uVar21);
  }
  uVar29 = *(undefined8 *)((long)puVar6 + lVar25);
  *(undefined8 **)((long)puVar6 + lVar25) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar29);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return puVar1;
  }
  ___stack_chk_fail();
  return puVar1;
}



/* Entry: 105226824; end: 105226a93; -[SCSpectaclesContentPageActionBar setActionItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105226824(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *unaff_x21;
  long lVar11;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  long lVar12;
  long unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  long lVar13;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar12 = (long)_DAT_11271ffcc;
  uVar1 = *(ulong *)(param_2 + lVar12);
  func_0x00010c071ae0(uVar1,param_3,param_4);
  if (((uVar1 & 1) == 0) && (lVar2 = param_4, func_0x00010bf529e0(), lVar2 - 1U < 4)) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined8 *)0x0;
    lStack_1f8 = (long)_DAT_11271ffd0;
    lVar11 = *(long *)(param_2 + lStack_1f8);
    _objc_retain(lVar11);
    lVar2 = lVar11;
    func_0x00010bf52a60(lVar11,param_3,&uStack_1b0,auStack_f0,0x10);
    if (lVar2 != 0) {
      unaff_x23 = (undefined *)*puStack_1a0;
      do {
        unaff_x25 = 0;
        do {
          if ((undefined *)*puStack_1a0 != unaff_x23) {
            _objc_enumerationMutation(lVar11);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_1a8 + unaff_x25 * 8));
          unaff_x25 = unaff_x25 + 1;
        } while (lVar2 != unaff_x25);
        lVar2 = lVar11;
        func_0x00010bf52a60(lVar11,param_3,&uStack_1b0,auStack_f0,0x10);
        unaff_x22 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(lVar11);
    unaff_x21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60(param_4,param_3,&uStack_1f0,auStack_170,0x10);
    if (lVar2 != 0) {
      unaff_x26 = *plStack_1e0;
      unaff_x27 = &PTR_PTR_1126b6000;
      unaff_x28 = &DAT_11271f000;
      do {
        unaff_x25 = 0;
        do {
          if (*plStack_1e0 != unaff_x26) {
            _objc_enumerationMutation(param_4);
          }
          unaff_x23 = PTR_PTR_1126b6670;
          func_0x00010beedd60(PTR_PTR_1126b6670,param_3,*(undefined8 *)(lStack_1e8 + unaff_x25 * 8))
          ;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c219b60();
          func_0x00010c23d620(unaff_x23);
          func_0x00010befa120(unaff_x21,param_3,unaff_x23);
          func_0x00010befbb60(*(undefined8 *)(param_2 + _DAT_11271ffc8),param_3,unaff_x23);
          _objc_release(unaff_x23);
          unaff_x25 = unaff_x25 + 1;
        } while (lVar2 != unaff_x25);
        lVar2 = param_4;
        func_0x00010bf52a60(param_4,param_3,&uStack_1f0,auStack_170,0x10);
        unaff_x22 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(param_4);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + lVar12);
    *(long *)(param_2 + lVar12) = param_4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lStack_1f8);
    *(undefined **)(param_2 + lStack_1f8) = unaff_x21;
    _objc_release(uVar3);
    func_0x00010beaab60(param_2);
  }
  lVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_105226a94;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11271ffd4;
  puStack_260 = unaff_x28;
  ppuStack_258 = unaff_x27;
  lStack_250 = unaff_x26;
  lStack_248 = unaff_x25;
  lStack_240 = lVar12;
  puStack_238 = unaff_x23;
  uStack_230 = unaff_x22;
  puStack_228 = unaff_x21;
  lStack_220 = param_2;
  lStack_218 = param_4;
  puStack_210 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar2 + lVar11) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11271ffd0;
  lVar12 = *(long *)(lVar2 + lVar13);
  func_0x00010bf529e0();
  if (lVar12 != 0) {
    uVar1 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar13);
      func_0x00010c0dfd40(uVar3,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        uVar5 = uVar3;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar2 + _DAT_11271ffc8);
        func_0x00010c08de00(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bf493c0(0x4030000000000000,uVar5,param_3,uVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar5 = *(undefined8 *)(lVar2 + lVar13);
        func_0x00010c0dfd40(uVar5,param_3,uVar1 - 1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010c2793a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf493c0(0x4030000000000000,uVar6,param_3,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar5 = uVar3;
      uStack_278 = uVar7;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar2 + _DAT_11271ffc8);
      func_0x00010c274200(uVar8);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0x4024000000000000;
      uVar6 = uVar5;
      func_0x00010bf493c0(0x4024000000000000,uVar5,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_270 = uVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_278,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4,param_3,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar3);
      uVar1 = uVar1 + 1;
      uVar10 = *(ulong *)(lVar2 + lVar13);
      func_0x00010bf529e0();
    } while (uVar1 < uVar10);
  }
  uVar3 = *(undefined8 *)(lVar2 + lVar11);
  *(undefined **)(lVar2 + lVar11) = puVar4;
  _objc_retain(puVar4);
  _objc_release(uVar3);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  return 0x4050c00000000000;
}



/* Entry: 105226a94; end: 105226d2b; -[SCSpectaclesContentPageActionBar _setupAutolayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105226a94(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11271ffd4;
  if (*(long *)(param_2 + lVar10) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11271ffd0;
  lVar2 = *(long *)(param_2 + lVar12);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar11 = 0;
    do {
      uVar3 = *(undefined8 *)(param_2 + lVar12);
      func_0x00010c0dfd40(uVar3,param_3,uVar11);
      _objc_retainAutoreleasedReturnValue();
      if (uVar11 == 0) {
        uVar4 = uVar3;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + _DAT_11271ffc8);
        func_0x00010c08de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bf493c0(0x4030000000000000,uVar4,param_3,uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + lVar12);
        func_0x00010c0dfd40(uVar4,param_3,uVar11 - 1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c2793a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf493c0(0x4030000000000000,uVar5,param_3,uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = uVar3;
      uStack_78 = uVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + _DAT_11271ffc8);
      func_0x00010c274200(uVar7);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0x4024000000000000;
      uVar5 = uVar4;
      func_0x00010bf493c0(0x4024000000000000,uVar4,param_3,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_78,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar1,param_3,puVar8);
      _objc_release(puVar8);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar3);
      uVar11 = uVar11 + 1;
      uVar9 = *(ulong *)(param_2 + lVar12);
      func_0x00010bf529e0();
    } while (uVar11 < uVar9);
  }
  uVar3 = *(undefined8 *)(param_2 + lVar10);
  *(undefined **)(param_2 + lVar10) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  return 0x4050c00000000000;
}



/* Entry: 105226d2c; end: 105226d37; +[SCSpectaclesContentPageActionBar height] */

undefined8 FUN_105226d2c(void)

{
  return 0x4050c00000000000;
}



/* Entry: 105226d38; end: 105226d47; -[SCSpectaclesContentPageActionBar actionItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105226d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ffcc);
}



/* Entry: 105226d48; end: 105226da7; -[SCSpectaclesContentPageActionBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105226d48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ffcc,0);
  _objc_storeStrong(param_1 + _DAT_11271ffc8,0);
  _objc_storeStrong(param_1 + _DAT_11271ffd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ffd0,0);
  return;
}



/* Entry: 105226da8; end: 105226e57; -[SCSpectaclesContentPageAnimatedImage initWithData:contentId:imageType:isComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105226da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7038;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithData__1125dfa60,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271ffdc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271ffe0) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271ffe4) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105226e58; end: 105226e67; -[SCSpectaclesContentPageAnimatedImage animatedImageLoopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105226e58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ffd8);
}



/* Entry: 105226e68; end: 105226f2f; -[SCSpectaclesContentPageAnimatedImage isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105226e68(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11271ffdc);
        if (((lVar4 == *(long *)(param_3 + (long)_DAT_11271ffdc)) ||
            (func_0x00010c0720c0(), (int)lVar4 != 0)) &&
           (*(long *)(param_1 + (long)_DAT_11271ffe4) == *(long *)(param_3 + (long)_DAT_11271ffe4)))
        {
          bVar1 = *(char *)(param_1 + (long)_DAT_11271ffe0) ==
                  *(char *)(param_3 + (long)_DAT_11271ffe0);
          goto LAB_105226f14;
        }
      }
      bVar1 = false;
    }
  }
LAB_105226f14:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105226f30; end: 105226f3f; -[SCSpectaclesContentPageAnimatedImage contentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105226f30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ffdc);
}



/* Entry: 105226f40; end: 105226f4f; -[SCSpectaclesContentPageAnimatedImage imageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105226f40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ffe4);
}



/* Entry: 105226f50; end: 105226f5f; -[SCSpectaclesContentPageAnimatedImage isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105226f50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271ffe0);
}



/* Entry: 105226f60; end: 105226f6f; -[SCSpectaclesContentPageAnimatedImage loopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105226f60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271ffd8);
}



/* Entry: 105226f70; end: 105226f7f; -[SCSpectaclesContentPageAnimatedImage setLoopCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105226f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11271ffd8) = param_3;
  return;
}



/* Entry: 105226f80; end: 105226f93; -[SCSpectaclesContentPageAnimatedImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105226f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ffdc,0);
  return;
}



/* Entry: 105226f94; end: 105226f97; -[SCSpectaclesContentPageCellAnimatedImageView setHighlighted:] */

void FUN_105226f94(void)

{
  return;
}



/* Entry: 105226f98; end: 105226fa3; +[SCSpectaclesContentPageCellGradientView layerClass] */

void FUN_105226f98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 105226fa4; end: 105227183; -[SCSpectaclesContentPageCellGradientView initWithFrame:] */

undefined8 * FUN_105226fa4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_1126e7040;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = puVar1;
    func_0x00010bfcd9c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bfcd9c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
    _objc_release(puVar2);
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar4;
    puStack_68 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bfcd9c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar2;
}



/* Entry: 105227184; end: 105227187; -[SCSpectaclesContentPageCellGradientView gradientLayer] */

void FUN_105227184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 105227188; end: 10522839f; -[SCSpectaclesContentPageCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105227188(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_158 = PTR_PTR_1126e7048;
  puVar1 = &uStack_160;
  uStack_160 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar23 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b6678;
    _objc_alloc();
    uVar24 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar16 = (long)_DAT_11271ffe8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar21 = (long)_DAT_11271ffec;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar21));
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b6680;
    _objc_alloc_init();
    lVar17 = (long)_DAT_11271fff0;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar15);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar22 = (long)_DAT_11271fff4;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = puVar2;
    _objc_release(uVar15);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c219b60(uVar5);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf338a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar22));
    _objc_release(uVar15);
    _objc_release(uVar5);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar22));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar23 = (long)_DAT_11271fff8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar23));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar23));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar23));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar23 = (long)_DAT_11271fffc;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar23));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar23));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar23));
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar23 = (long)_DAT_112720000;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c1b9ba0(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar23));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar24,uVar25,uVar26,uVar27);
    lVar18 = (long)_DAT_112720004;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar18));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar18));
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_112720008;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c16e480(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1bec80(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar20 = (long)_DAT_11272000c;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar26 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar24;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar15;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar5;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar25);
    _objc_release(puVar12);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar27);
    _objc_release(uVar24);
    _objc_release(puVar13);
    _objc_release(uVar26);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar26 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar25;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar24;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar5;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(puVar14);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar6);
    _objc_release(uVar24);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar27);
    _objc_release(uVar25);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar26);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar26 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar25;
    uVar27 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar27;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar24;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar15;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar6);
    _objc_release(uVar24);
    _objc_release(puVar13);
    _objc_release(uVar27);
    _objc_release(uVar25);
    _objc_release(puVar12);
    _objc_release(uVar26);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar24;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar5;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar25;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(uVar25);
    _objc_release(uVar5);
    _objc_release(puVar14);
    _objc_release(uVar24);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar24;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar5;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar25;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar25);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar24);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar24;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar5;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar25;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(uVar25);
    _objc_release(uVar5);
    _objc_release(puVar14);
    _objc_release(uVar24);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar5;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(uVar25);
    _objc_release(uVar5);
    _objc_release(puVar14);
    _objc_release(uVar24);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar23 = *(long *)((long)puVar1 + lVar22);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_150 = lVar16;
    uVar26 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar15;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar22);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar7;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar24;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar24);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(lVar16);
    _objc_release(uVar25);
    _objc_release(lVar23);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)(lVar23 + _DAT_112720010);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf4cec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1052283a0; end: 1052283db; -[SCSpectaclesContentPageCell importButtonClicked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052283a0(long param_1)

{
  param_1 = param_1 + _DAT_112720010;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4cec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052283dc; end: 10522845b; -[SCSpectaclesContentPageCell setInSelectingMode:] */

/* WARNING: Possible PIC construction at 0x00010522840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105228444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105228410) */
/* WARNING: Removing unreachable block (ram,0x000105228448) */
/* WARNING: Removing unreachable block (ram,0x00010c1fadc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052283dc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + _DAT_112720014) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fff4);
  if (param_3 == 0) {
    func_0x00010c1a7f60(uVar1,param_2,1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112720008);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 10522845c; end: 10522852b; -[SCSpectaclesContentPageCell setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522845c(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126e7048;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setSelected__11265c598);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)plVar1;
  if (param_3 == 0) {
    func_0x00010bf338a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf338e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11271fff4));
  _objc_release(puVar2);
  _objc_release(plVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271ffec));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271fff0));
  return;
}



/* Entry: 10522852c; end: 10522854f; -[SCSpectaclesContentPageCell setInThumbnailLoadingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522852c(long param_1,undefined8 param_2,int param_3)

{
  *(char *)(param_1 + _DAT_112720018) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11272000c),PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272000c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105228550; end: 1052285b7; -[SCSpectaclesContentPageCell setUserInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105228550(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7048;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setUserInteractionEnabled__112665468);
  uVar1 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar1 = 0x3fd3333333333333;
  }
  func_0x00010c1677c0(uVar1,*(undefined8 *)(param_1 + _DAT_112720008));
  return;
}



/* Entry: 1052285b8; end: 1052286b3; -[SCSpectaclesContentPageCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052285b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26f440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11271fff8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf653c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11271fffc));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf8b320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720004));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010beee0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(*(undefined8 *)(param_1 + _DAT_112720008));
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272001c);
  *(undefined8 *)(param_1 + _DAT_11272001c) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtonImageIfNeeded_112592b08);
  return;
}



/* Entry: 1052286b4; end: 1052286f3; -[SCSpectaclesContentPageCell setAssetResources:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052286b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720020);
  *(undefined8 *)(param_1 + _DAT_112720020) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtonImageIfNeeded_112592b08);
  return;
}



/* Entry: 1052286f4; end: 1052287e7; -[SCSpectaclesContentPageCell _updateButtonImageIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052286f4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b6608;
  lVar6 = (long)_DAT_112720020;
  if ((*(long *)(param_1 + lVar6) != 0) &&
     (uVar4 = *(ulong *)(param_1 + _DAT_11272001c), uVar4 != 0)) {
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf4d6e0();
    if (uVar4 < 6) {
      func_0x00010c1beb60(*(undefined8 *)(param_1 + _DAT_112720008));
    }
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf4d6e0(uVar1);
    func_0x00010bfe57a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea18c0(param_1);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1052287e8; end: 105228933; -[SCSpectaclesContentPageCell _setActionButtonIconWithFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052287e8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112720024;
  if (param_3 != *(long *)(param_1 + lVar3)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112720008);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc_init(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c1a9fc0(uVar1);
    _objc_release(puVar2);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar3 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_3);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105228934; end: 1052289af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105228934(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + _DAT_112720024))) {
    func_0x00010c1a9fc0(*(undefined8 *)(lVar1 + _DAT_112720008));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052289b0; end: 105228a2f; -[SCSpectaclesContentPageCell setContentImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052289b0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271ffe8;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((param_3 != 0) && ((uVar2 & 1) == 0)) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105228a30; end: 105228aa3; -[SCSpectaclesContentPageCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105228a30(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e7048;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar1 = (long)_DAT_11271ffe8;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11272000c));
  return;
}



/* Entry: 105228aa4; end: 105228ab3; -[SCSpectaclesContentPageCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105228aa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272001c);
}



/* Entry: 105228ab4; end: 105228ad3; -[SCSpectaclesContentPageCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105228ab4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112720010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105228ad4; end: 105228ae7; -[SCSpectaclesContentPageCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105228ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112720010,param_3);
  return;
}



/* Entry: 105228ae8; end: 105228af7; -[SCSpectaclesContentPageCell isInSelectingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105228ae8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112720014);
}



/* Entry: 105228af8; end: 105228b07; -[SCSpectaclesContentPageCell isInThumbnailLoadingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105228af8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112720018);
}



/* Entry: 105228b08; end: 105228c03; -[SCSpectaclesContentPageCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105228b08(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112720010);
  _objc_storeStrong(param_1 + _DAT_11272001c,0);
  _objc_storeStrong(param_1 + _DAT_11271fff0,0);
  _objc_storeStrong(param_1 + _DAT_11271ffec,0);
  _objc_storeStrong(param_1 + _DAT_112720024,0);
  _objc_storeStrong(param_1 + _DAT_112720020,0);
  _objc_storeStrong(param_1 + _DAT_11272000c,0);
  _objc_storeStrong(param_1 + _DAT_112720008,0);
  _objc_storeStrong(param_1 + _DAT_112720000,0);
  _objc_storeStrong(param_1 + _DAT_112720004,0);
  _objc_storeStrong(param_1 + _DAT_11271fffc,0);
  _objc_storeStrong(param_1 + _DAT_11271fff8,0);
  _objc_storeStrong(param_1 + _DAT_11271fff4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ffe8,0);
  return;
}



/* Entry: 105228c04; end: 105228c53; -[SCSpectaclesContentPageCollectionViewFlowLayout initWithScreenMidX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105228c04(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7050;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112720028) = param_1;
  }
  return;
}



/* Entry: 105228c54; end: 105228dab; -[SCSpectaclesContentPageCollectionViewFlowLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_105228c54(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  plVar19 = &lStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126e7050;
  plVar1 = &lStack_e8;
  lStack_e8 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  dVar20 = 0.0;
  lStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  plVar2 = plVar1;
  func_0x00010bf52a60();
  if (plVar2 != (long *)0x0) {
    lVar18 = *plStack_120;
    do {
      plVar19 = (long *)0x0;
      do {
        if (*plStack_120 != lVar18) {
          _objc_enumerationMutation(plVar1);
        }
        lVar17 = *(long *)(lStack_128 + (long)plVar19 * 8);
        lVar16 = lVar17;
        func_0x00010c1345a0();
        if (((lVar16 == 0) && (func_0x00010bfb68e0(lVar17), 0.0 < dVar20)) &&
           (func_0x00010bfb68e0(lVar17), dVar20 < *(double *)(param_1 + _DAT_112720028))) {
          func_0x00010bfb68e0(lVar17);
          dVar20 = 0.0;
          func_0x00010c19f0e0(lVar17);
        }
        plVar19 = (long *)((long)plVar19 + 1);
      } while (plVar2 != plVar19);
      plVar2 = plVar1;
      plVar19 = &lStack_130;
      func_0x00010bf52a60();
    } while (plVar2 != (long *)0x0);
  }
  lVar18 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
    return plVar1;
  }
  ___stack_chk_fail();
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_228 = PTR_PTR_1126e7058;
  plVar1 = &lStack_230;
  lStack_230 = lVar18;
  _objc_msgSendSuper2(plVar1,PTR_s_initWithFrame__1125e2948);
  lVar18 = 0;
  if (plVar1 != (long *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(plVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar21 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    lVar16 = (long)_DAT_11272002c;
    uVar15 = *(undefined8 *)((long)plVar1 + lVar16);
    *(undefined **)((long)plVar1 + lVar16) = puVar3;
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(uVar15);
    func_0x00010befbb60(plVar1);
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar16));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_1e0 = uVar15;
    uVar5 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    plVar19 = plVar1;
    func_0x00010c08de00(plVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_1d8 = uVar14;
    uVar6 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    plVar7 = plVar1;
    func_0x00010bf1ff80(plVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uVar12;
    uVar8 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    plVar9 = plVar1;
    func_0x00010c2793a0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1c8 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar10);
    _objc_release(uVar13);
    _objc_release(plVar9);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(plVar7);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(plVar19);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(plVar2);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    lVar18 = (long)_DAT_112720030;
    uVar15 = *(undefined8 *)((long)plVar1 + lVar18);
    *(undefined **)((long)plVar1 + lVar18) = puVar3;
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar15);
    func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar18));
    func_0x00010c182220(*(undefined8 *)((long)plVar1 + lVar18));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_200 = uVar15;
    uVar6 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar6;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_1f8 = uVar13;
    uVar8 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_1f0 = uVar12;
    uVar11 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1e8 = uVar14;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar10);
    _objc_release(uVar14);
    _objc_release(plVar2);
    _objc_release(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar13);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    lVar17 = (long)_DAT_112720034;
    uVar15 = *(undefined8 *)((long)plVar1 + lVar17);
    *(undefined **)((long)plVar1 + lVar17) = puVar3;
    _objc_release(uVar15);
    func_0x00010c21ad00(*(undefined8 *)((long)plVar1 + lVar17));
    func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar17));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)plVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_210 = uVar14;
    uVar4 = *(undefined8 *)((long)plVar1 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_208 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar10);
    _objc_release(uVar15);
    _objc_release(plVar2);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    puVar3 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar17 = (long)_DAT_112720038;
    uVar15 = *(undefined8 *)((long)plVar1 + lVar17);
    *(undefined **)((long)plVar1 + lVar17) = puVar3;
    _objc_release(uVar15);
    func_0x00010c1a7f60(*(undefined8 *)((long)plVar1 + lVar17));
    func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar17));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar18 = *(long *)((long)plVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)plVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar18;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_220 = lVar16;
    uVar12 = *(undefined8 *)((long)plVar1 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    plVar7 = plVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_218 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    plVar19 = plVar2;
    func_0x00010beef8c0(puVar3);
    _objc_release(plVar2);
    _objc_release(uVar15);
    _objc_release(plVar7);
    _objc_release(uVar12);
    _objc_release(lVar16);
    _objc_release(uVar14);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(plVar19);
  lVar16 = (long)_DAT_11272003c;
  _objc_retain(plVar19);
  uVar15 = *(undefined8 *)(lVar18 + lVar16);
  *(long **)(lVar18 + lVar16) = plVar19;
  _objc_release(uVar15);
  if (plVar19 == (long *)0x0) goto LAB_105229760;
  plVar1 = plVar19;
  func_0x00010bf4d6e0();
  if ((long)plVar1 < 3) {
    if (plVar1 == (long *)0x0) goto LAB_105229654;
    if (plVar1 == (long *)0x1) {
      lVar16 = (long)_DAT_112720038;
      func_0x00010c1a7f60(*(undefined8 *)(lVar18 + lVar16));
      func_0x00010c24dbc0(*(undefined8 *)(lVar18 + lVar16));
    }
    else {
      if (plVar1 != (long *)0x2) goto LAB_105229760;
      lVar16 = (long)_DAT_112720038;
      func_0x00010c1a7f60(*(undefined8 *)(lVar18 + lVar16));
      func_0x00010c2558c0(*(undefined8 *)(lVar18 + lVar16));
    }
  }
  else {
    if ((undefined *)0x3 < (undefined *)((long)plVar1 + -3)) goto LAB_105229760;
LAB_105229654:
    lVar16 = (long)_DAT_112720038;
    func_0x00010c1a7f60(*(undefined8 *)(lVar18 + lVar16));
    func_0x00010c2558c0(*(undefined8 *)(lVar18 + lVar16));
  }
  plVar1 = plVar19;
  func_0x00010c0cb140(plVar19);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112720034;
  func_0x00010c212f20(*(undefined8 *)(lVar18 + lVar16));
  _objc_release(plVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar18 + lVar16));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11272002c;
  func_0x00010c16e440(*(undefined8 *)(lVar18 + lVar16));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar15 = *(undefined8 *)(lVar18 + lVar16);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar15);
  _objc_release(puVar3);
LAB_105229760:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar19);
  return plVar19;
}



/* Entry: 105228dac; end: 1052295ef; -[SCSpectaclesContentPageProgressBar initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105228dac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f8 = PTR_PTR_1126e7058;
  puVar1 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar18 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar17 = (long)_DAT_11272002c;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(uVar16);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar16;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar15;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar14);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar18 = (long)_DAT_112720030;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar16);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar16;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar14;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar13;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(uVar12);
    _objc_release(uVar13);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(uVar16);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar19 = (long)_DAT_112720034;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar16);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar15;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar19 = (long)_DAT_112720038;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar16);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar18 = *(long *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar18;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = lVar17;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar4;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar16);
    _objc_release(puVar6);
    _objc_release(uVar13);
    _objc_release(lVar17);
    _objc_release(uVar15);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar17 = (long)_DAT_11272003c;
  _objc_retain(param_3);
  uVar16 = *(undefined8 *)(lVar18 + lVar17);
  *(undefined8 **)(lVar18 + lVar17) = param_3;
  _objc_release(uVar16);
  if (param_3 == (undefined8 *)0x0) goto LAB_105229760;
  puVar1 = param_3;
  func_0x00010bf4d6e0();
  if ((long)puVar1 < 3) {
    if (puVar1 == (undefined8 *)0x0) goto LAB_105229654;
    if (puVar1 == (undefined8 *)0x1) {
      lVar17 = (long)_DAT_112720038;
      func_0x00010c1a7f60(*(undefined8 *)(lVar18 + lVar17));
      func_0x00010c24dbc0(*(undefined8 *)(lVar18 + lVar17));
    }
    else {
      if (puVar1 != (undefined8 *)0x2) goto LAB_105229760;
      lVar17 = (long)_DAT_112720038;
      func_0x00010c1a7f60(*(undefined8 *)(lVar18 + lVar17));
      func_0x00010c2558c0(*(undefined8 *)(lVar18 + lVar17));
    }
  }
  else {
    if ((undefined *)0x3 < (undefined *)((long)puVar1 + -3)) goto LAB_105229760;
LAB_105229654:
    lVar17 = (long)_DAT_112720038;
    func_0x00010c1a7f60(*(undefined8 *)(lVar18 + lVar17));
    func_0x00010c2558c0(*(undefined8 *)(lVar18 + lVar17));
  }
  puVar1 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112720034;
  func_0x00010c212f20(*(undefined8 *)(lVar18 + lVar17));
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar18 + lVar17));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11272002c;
  func_0x00010c16e440(*(undefined8 *)(lVar18 + lVar17));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar16 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar16);
  _objc_release(puVar2);
LAB_105229760:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 1052295f0; end: 1052297df; -[SCSpectaclesContentPageProgressBar setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052295f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272003c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  if (param_3 == 0) goto LAB_105229760;
  lVar3 = param_3;
  func_0x00010bf4d6e0();
  if (lVar3 < 3) {
    if (lVar3 == 0) goto LAB_105229654;
    if (lVar3 == 1) {
      lVar3 = (long)_DAT_112720038;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar3));
      uVar1 = 0xce;
      goto LAB_105229674;
    }
    if (lVar3 != 2) goto LAB_105229760;
    lVar3 = (long)_DAT_112720038;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
    uVar4 = 0x3a;
    uVar5 = 0xd5;
    uVar1 = 0x3a;
  }
  else {
    if (3 < lVar3 - 3U) goto LAB_105229760;
LAB_105229654:
    lVar3 = (long)_DAT_112720038;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
    uVar1 = 0xd6;
LAB_105229674:
    uVar4 = 0x21;
    uVar5 = 0xbf;
  }
  lVar3 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112720034;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,lVar3);
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11272002c;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  _objc_release(puVar2);
LAB_105229760:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052297e0; end: 1052297ef; -[SCSpectaclesContentPageProgressBar setContentImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052297e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112720030),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 1052297f0; end: 1052297fb; +[SCSpectaclesContentPageProgressBar height] */

undefined8 FUN_1052297f0(void)

{
  return 0x4050000000000000;
}



/* Entry: 1052297fc; end: 10522980b; -[SCSpectaclesContentPageProgressBar viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1052297fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272003c);
}



/* Entry: 10522980c; end: 10522987b; -[SCSpectaclesContentPageProgressBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522980c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272003c,0);
  _objc_storeStrong(param_1 + _DAT_112720038,0);
  _objc_storeStrong(param_1 + _DAT_112720034,0);
  _objc_storeStrong(param_1 + _DAT_112720030,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272002c,0);
  return;
}



/* Entry: 10522987c; end: 1052298df; -[SCSpectaclesContentPageSectionHeader initWithFrame:] */

undefined1 * FUN_10522987c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7060;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
    func_0x00010beb11a0(puVar1);
    func_0x00010c1abae0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052298e0; end: 105229963; -[SCSpectaclesContentPageSectionHeader setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052298e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720040);
  *(undefined8 *)(param_1 + _DAT_112720040) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720044),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105229964; end: 1052299c7; -[SCSpectaclesContentPageSectionHeader setInSelectingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105229964(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  *(char *)(param_1 + _DAT_112720048) = (char)param_3;
  lVar1 = param_1;
  if (param_3 == 0) {
    func_0x0001090253d8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001090253c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11272004c),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052299c8; end: 105229a1f; -[SCSpectaclesContentPageSectionHeader setUserInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052299c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7060;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setUserInteractionEnabled__112665468);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272004c));
  return;
}



/* Entry: 105229a20; end: 105229a6b; -[SCSpectaclesContentPageSectionHeader prepareForReuse] */

void FUN_105229a20(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7060;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1abae0(param_1);
  return;
}



/* Entry: 105229a6c; end: 105229c43; -[SCSpectaclesContentPageSectionHeader _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105229a6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_112720044;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,10);
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11272004c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c181cc0(0x443b8000,*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105229c44; end: 10522a003; -[SCSpectaclesContentPageSectionHeader _setupViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105229c44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112720044;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493c0(0x4030000000000000,uVar2,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0x4028000000000000,uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bf493c0(0xc020000000000000,uVar7,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11272004c;
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  func_0x00010bf493c0(0xc030000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar12;
  func_0x00010bf493c0(0xc030000000000000,lVar12,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  lStack_a0 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf493c0(0x4028000000000000,uVar13,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  uStack_98 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bf493c0(0xc020000000000000,uVar14,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(lVar15);
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = lVar12 + _DAT_112720050;
  _objc_loadWeakRetained(lVar12);
  func_0x00010bf4cee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 10522a004; end: 10522a03f; -[SCSpectaclesContentPageSectionHeader _selectAllTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522a004(long param_1)

{
  param_1 = param_1 + _DAT_112720050;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4cee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10522a040; end: 10522a04f; -[SCSpectaclesContentPageSectionHeader viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10522a040(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112720040);
}



/* Entry: 10522a050; end: 10522a06f; -[SCSpectaclesContentPageSectionHeader delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522a050(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112720050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10522a070; end: 10522a083; -[SCSpectaclesContentPageSectionHeader setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522a070(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112720050,param_3);
  return;
}



/* Entry: 10522a084; end: 10522a093; -[SCSpectaclesContentPageSectionHeader isInSelectingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10522a084(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112720048);
}



/* Entry: 10522a094; end: 10522a0ef; -[SCSpectaclesContentPageSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522a094(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112720050);
  _objc_storeStrong(param_1 + _DAT_112720040,0);
  _objc_storeStrong(param_1 + _DAT_11272004c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720044,0);
  return;
}



/* Entry: 10522a0f0; end: 10522a1d3;  */

void FUN_10522a0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfed1e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10522a1d4;
  puStack_50 = &UNK_110870eb0;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010bfb2040(uVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10522a1d4; end: 10522a21b;  */

bool FUN_10522a1d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c262e00(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_release();
  return lVar1 == lVar2;
}


