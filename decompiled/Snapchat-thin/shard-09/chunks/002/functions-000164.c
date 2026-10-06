/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b054b0; end: 106b054bf;  */

void FUN_106b054b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 106b054c0; end: 106b0568b; -[SCLensExplorerStoriesGroupPlaybackWorkflow _storyIdFromPlaybackSequence:] */

void FUN_106b054c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106b0568c;
  uStack_40 = 0x106b0569c;
  uStack_38 = 0;
  func_0x00010c0bdf40(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b0568c; end: 106b056a3;  */

void FUN_106b0568c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b056a4; end: 106b058a3;  */

void FUN_106b056a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b058a4; end: 106b0592f; -[SCLensExplorerStoriesGroupPlaybackWorkflow .cxx_destruct] */

void FUN_106b058a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106b05930; end: 106b05973; -[SCLensExplorerStoryPlaybackEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b05930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdf5ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112758128;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar3),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 106b05974; end: 106b059d7; -[SCLensExplorerStoryPlaybackEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b05974(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112758128;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07ab40();
  if (iVar1 != 0) {
    func_0x00010bf82f40(*(undefined8 *)(param_1 + lVar2));
  }
  puStack_28 = PTR_PTR_1126f4e90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b059d8; end: 106b05afb; -[SCLensExplorerStoryPlaybackEntryPoint _createWorkflow] */

void FUN_106b059d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106b05afc;
  uStack_40 = 0x106b05b0c;
  uStack_38 = 0;
  FUN_106b05b14();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c259da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd1e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b05afc; end: 106b05b13;  */

void FUN_106b05afc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b05b14; end: 106b05b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b05b14(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112758130);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b05b38; end: 106b05bbf;  */

void FUN_106b05b38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf5cc0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b05bc0; end: 106b05c93; -[SCLensExplorerStoryPlaybackEntryPoint _createWorkflowWithCreatorInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b05bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0798;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  FUN_106b05b14(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112758138);
  }
  _objc_retain(uVar3);
  FUN_106b05c94(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ec0(puVar1,param_2,lVar2,param_3,uVar3,param_1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b05c94; end: 106b05cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b05c94(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112758134);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b05cb8; end: 106b05e2f; -[SCLensExplorerStoryPlaybackEntryPoint _createWorkflowWithStoryGroupDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b05cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  FUN_106b05b14(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c247e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar6,1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d07a0;
  _objc_alloc(PTR_PTR_1126d07a0);
  lVar2 = param_1;
  FUN_106b05b14(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112758138);
  }
  lVar6 = (long)_DAT_11275812c;
  _objc_retain(uVar5);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  FUN_106b05c94(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ea0(puVar3,param_2,lVar2,param_3,uVar5,puVar1,lVar4,param_1);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b05e30; end: 106b05e93; -[SCLensExplorerStoryPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b05e30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758138,0);
  _objc_destroyWeak(param_1 + _DAT_112758134);
  _objc_destroyWeak(param_1 + _DAT_11275812c);
  _objc_destroyWeak(param_1 + _DAT_112758130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758128,0);
  return;
}



/* Entry: 106b05e94; end: 106b05f57; -[SCCommerceReportProductScope initWithReportProductParams:uiContainer:delegate:] */

undefined1 *
FUN_106b05e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4e98;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b05f58; end: 106b05f5f; -[SCCommerceReportProductScope reportProductParams] */

undefined8 FUN_106b05f58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b05f60; end: 106b05f67; -[SCCommerceReportProductScope uiContainer] */

undefined8 FUN_106b05f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b05f68; end: 106b05f7f; -[SCCommerceReportProductScope delegate] */

void FUN_106b05f68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b05f80; end: 106b05fb7; -[SCCommerceReportProductScope .cxx_destruct] */

void FUN_106b05f80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b05fb8; end: 106b0607b; -[SCCommerceReportProductParams initWithSnapItemId:categoryId:storeId:isLensProduct:] */

undefined1 *
FUN_106b05fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f4ea0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0607c; end: 106b0609f; -[SCCommerceReportProductParams copyWithZone:] */

undefined8 FUN_106b0607c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b060a0; end: 106b06123; -[SCCommerceReportProductParams hash] */

long * FUN_106b060a0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  plVar3 = &lStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_106b061c4:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_106b061d0;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) &&
       ((plVar3[2] == param_3[2] && ((char)plVar3[1] == (char)param_3[1])))) {
      lVar5 = plVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        plVar6 = (long *)plVar3[4];
        if (plVar6 != (long *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_106b061d0;
        }
        goto LAB_106b061c4;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_106b061d0:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 106b06124; end: 106b061eb; -[SCCommerceReportProductParams isEqual:] */

long FUN_106b06124(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b061c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b061d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_106b061d0;
        }
        goto LAB_106b061c4;
      }
    }
    lVar3 = 0;
  }
LAB_106b061d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b061ec; end: 106b061f3; -[SCCommerceReportProductParams snapItemId] */

undefined8 FUN_106b061ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b061f4; end: 106b061fb; -[SCCommerceReportProductParams categoryId] */

undefined8 FUN_106b061f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b061fc; end: 106b06203; -[SCCommerceReportProductParams storeId] */

undefined8 FUN_106b061fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b06204; end: 106b0620b; -[SCCommerceReportProductParams isLensProduct] */

undefined1 FUN_106b06204(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b0620c; end: 106b0623b; -[SCCommerceReportProductParams .cxx_destruct] */

void FUN_106b0620c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106b0623c; end: 106b06337; -[SCLensProcessingTalkConversationMetadataProvider initWithTalkContext:snapchattersDataFetcher:groupsDataFetcher:selfUserId:] */

undefined1 *
FUN_106b0623c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4ea8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b06338; end: 106b066d3; -[SCLensProcessingTalkConversationMetadataProvider currentRemoteUsers:] */

void FUN_106b06338(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_106b06680;
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  if (lVar5 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,PTR____NSArray0__struct_11034ab48);
  }
  else {
    lVar1 = lVar5;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_106b066d4;
    uStack_a8 = 0x106b066e4;
    uStack_a0 = 0;
    lVar3 = lVar1;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be200();
    _objc_release(lVar3);
    if ((*(byte *)(puStack_90 + 3) & 1) == 0) {
      lVar3 = puStack_c0[5];
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        uVar4 = uVar6;
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_retain(param_3);
        func_0x00010c2448c0(uVar4);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uVar4);
        lVar3 = param_3;
        goto LAB_106b06630;
      }
      (**(code **)(param_3 + 0x10))(param_3,PTR____NSArray0__struct_11034ab48);
    }
    else {
      lVar3 = lVar1;
      func_0x00010bf517c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,PTR____NSArray0__struct_11034ab48);
      }
      else {
        uVar4 = uVar7;
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar3);
        _objc_retain(param_3);
        _objc_retain(uVar8);
        _objc_retain(uVar6);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010bfc6120(uVar4);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uVar4);
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(param_3);
        _objc_release(lVar3);
      }
LAB_106b06630:
      _objc_release(lVar3);
    }
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(lVar1);
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
LAB_106b06680:
  _objc_release(param_3);
  return;
}



/* Entry: 106b066d4; end: 106b066ff;  */

void FUN_106b066d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b06700; end: 106b06737;  */

void FUN_106b06700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b06738; end: 106b0680b;  */

void FUN_106b06738(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    pcVar11 = *(code **)(lVar10 + 0x10);
    _objc_retain(0);
    puVar7 = PTR____NSArray0__struct_11034ab48;
    (*pcVar11)(lVar10);
    puVar12 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar12;
    (**(code **)(lVar10 + 0x10))(lVar10);
    _objc_release(param_2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  _objc_retain(puVar7);
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR____NSArray0__struct_11034ab48;
    (**(code **)(*(long *)(puVar12 + 0x38) + 0x10))();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        uVar4 = *(ulong *)((long)puVar15 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        if ((uVar5 != 0) && (uVar5 = uVar4, func_0x00010c0720c0(), (uVar5 & 1) == 0)) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(uVar4);
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar8 = PTR____NSArray0__struct_11034ab48;
      (**(code **)(*(long *)(puVar12 + 0x38) + 0x10))();
    }
    else {
      uVar6 = *(undefined8 *)(puVar12 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar12 + 0x20);
      _objc_retain(uVar14);
      uVar13 = *(undefined8 *)(puVar12 + 0x38);
      _objc_retain(uVar13);
      func_0x00010c244e80(uVar6);
      _objc_release(uVar6);
      _objc_release(uVar13);
      _objc_release(uVar14);
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = PTR____NSArray0__struct_11034ab48;
  if (puVar8 != (undefined *)0x0) {
    puVar12 = puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x000106b06a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar7 + 0x28) + 0x10))(*(long *)(puVar7 + 0x28),puVar12);
  return;
}



/* Entry: 106b0680c; end: 106b06a4f;  */

void FUN_106b0680c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar8 = PTR____NSArray0__struct_11034ab48;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        uVar5 = *(ulong *)((long)puVar12 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c08fa60();
        if ((uVar6 != 0) && (uVar6 = uVar5, func_0x00010c0720c0(), (uVar6 & 1) == 0)) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(uVar5);
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar8 = PTR____NSArray0__struct_11034ab48;
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar11);
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar10);
      func_0x00010c244e80(uVar7);
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(uVar11);
    }
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar8 != (undefined *)0x0) {
    puVar4 = puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x000106b06a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),puVar4);
  return;
}



/* Entry: 106b06a50; end: 106b06a6b;  */

void FUN_106b06a50(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000106b06a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
  return;
}



/* Entry: 106b06a6c; end: 106b06a73; -[SCLensProcessingTalkConversationMetadataProvider replyConfiguration] */

undefined8 FUN_106b06a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b06a74; end: 106b06aa3; -[SCLensProcessingTalkConversationMetadataProvider setReplyConfiguration:] */

void FUN_106b06a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b06aa4; end: 106b06af7; -[SCLensProcessingTalkConversationMetadataProvider .cxx_destruct] */

void FUN_106b06aa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b06af8; end: 106b06beb; -[SCLensProcessingURIServiceChatHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06af8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d07a8;
  _objc_alloc(PTR_PTR_1126d07a8);
  lVar2 = param_1 + _DAT_11275816c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf506a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005840(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112758174;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c28f2a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b06bec; end: 106b06c2f; -[SCLensProcessingURIServiceChatHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06bec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275816c);
  _objc_destroyWeak(param_1 + _DAT_112758174);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758170);
  return;
}



/* Entry: 106b06c30; end: 106b06cdf; -[SCLensProcessingURIServiceEchoHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06c30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d07b0;
  _objc_alloc_init(PTR_PTR_1126d07b0);
  puVar2 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112758178;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010c28f2a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b06ce0; end: 106b06cef; -[SCLensProcessingURIServiceEchoHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758178);
  return;
}



/* Entry: 106b06cf0; end: 106b06f6f; -[SCLensProcessingURIServiceFriendDataRequestHandlerPreviewEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06cf0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112758180;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar8;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3770;
  func_0x00010c104620(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c0720c0(lVar9,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar8);
  if ((int)lVar3 != 0) {
    puVar2 = PTR_PTR_1126d07b8;
    _objc_alloc(PTR_PTR_1126d07b8);
    lVar8 = param_1;
    FUN_106b06f70(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_1 + _DAT_112758190;
      _objc_loadWeakRetained(lVar9);
    }
    lVar3 = lVar9;
    func_0x00010bf506a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_1 + _DAT_11275818c;
      _objc_loadWeakRetained(lVar10);
    }
    lVar4 = lVar10;
    func_0x00010c0b97a0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    FUN_106b06f70(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2445a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049720(puVar2,param_2,lVar1,lVar3,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar1);
    _objc_release(lVar8);
    puVar7 = PTR_PTR_1126b1cb0;
    _objc_alloc(PTR_PTR_1126b1cb0);
    func_0x00010c0199e0();
    lVar8 = 0;
    if (param_1 != 0) {
      lVar8 = param_1 + _DAT_112758184;
      _objc_loadWeakRetained(lVar8);
    }
    lVar1 = lVar8;
    func_0x00010c28f2a0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106b06f70; end: 106b06f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06f70(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112758188);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b06f94; end: 106b06ffb; -[SCLensProcessingURIServiceFriendDataRequestHandlerPreviewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06f94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758190);
  _objc_destroyWeak(param_1 + _DAT_11275818c);
  _objc_destroyWeak(param_1 + _DAT_112758188);
  _objc_destroyWeak(param_1 + _DAT_112758184);
  _objc_destroyWeak(param_1 + _DAT_112758180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275817c);
  return;
}



/* Entry: 106b06ffc; end: 106b0735b; -[SCLensProcessingURIServiceFriendDataRequestHandlerTalkEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b06ffc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112758198;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar12;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_1;
  FUN_106b0735c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127581a0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar12;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127581a4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar12;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar12);
  puVar6 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b07380;
  puStack_88 = &UNK_110960f98;
  lStack_80 = lVar1;
  lStack_78 = lVar2;
  lStack_70 = lVar3;
  lStack_68 = lVar5;
  _objc_retain(lVar5);
  _objc_retain(lVar3);
  _objc_retain(lVar2);
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar6,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d07b8;
  _objc_alloc(PTR_PTR_1126d07b8);
  lVar12 = param_1;
  FUN_106b0735c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127581a8;
    _objc_loadWeakRetained(lVar13);
  }
  lVar8 = lVar13;
  func_0x00010c0b97a0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_106b0735c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049720(puVar7,param_2,lVar4,puVar6,lVar8,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  puVar11 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar12 = 0;
  if (param_1 != 0) {
    lVar12 = param_1 + _DAT_112758194;
    _objc_loadWeakRetained(lVar12);
  }
  lVar4 = lVar12;
  func_0x00010c28f2a0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lStack_68);
  _objc_release(lStack_70);
  _objc_release(lStack_78);
  _objc_release(lStack_80);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106b0735c; end: 106b0737f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b0735c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275819c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b07380; end: 106b073b3;  */

void FUN_106b07380(void)

{
  _objc_alloc(PTR_PTR_1126d07c0);
  func_0x00010c050620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b073b4; end: 106b0741b; -[SCLensProcessingURIServiceFriendDataRequestHandlerTalkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b073b4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127581a8);
  _objc_destroyWeak(param_1 + _DAT_1127581a4);
  _objc_destroyWeak(param_1 + _DAT_1127581a0);
  _objc_destroyWeak(param_1 + _DAT_11275819c);
  _objc_destroyWeak(param_1 + _DAT_112758198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758194);
  return;
}



/* Entry: 106b0741c; end: 106b0754f; -[SCLensProcessingURIServiceGroupsDataRequestHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b0741c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126d07c8;
  _objc_alloc(PTR_PTR_1126d07c8);
  lVar2 = param_1;
  FUN_106b07550(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106b07550(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019440(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127581b0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c28f2a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b07550; end: 106b07573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07550(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127581b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b07574; end: 106b075b7; -[SCLensProcessingURIServiceGroupsDataRequestHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07574(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127581b4);
  _objc_destroyWeak(param_1 + _DAT_1127581b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127581ac);
  return;
}



/* Entry: 106b075b8; end: 106b07773; -[SCLensProcessingURIServiceRemoteHttpApiHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b075b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126d07d0;
  _objc_alloc(PTR_PTR_1126d07d0);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127581bc;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010bf10b80(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127581c0;
    _objc_loadWeakRetained(lVar8);
  }
  lVar4 = lVar8;
  func_0x00010c273160(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127581c4;
    _objc_loadWeakRetained(lVar9);
  }
  lVar5 = lVar9;
  func_0x00010c0966a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f3e0(puVar1,param_2,lVar3,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  puVar6 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_1127581b8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010c28f2a0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b07774; end: 106b077c3; -[SCLensProcessingURIServiceRemoteHttpApiHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07774(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127581c4);
  _objc_destroyWeak(param_1 + _DAT_1127581c0);
  _objc_destroyWeak(param_1 + _DAT_1127581bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127581b8);
  return;
}



/* Entry: 106b077c4; end: 106b07a0f; -[SCLensProcessingURIServiceSaveTextureHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b077c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126d07d8;
  _objc_alloc(PTR_PTR_1126d07d8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127581e0;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c242d80(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127581d4;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010befb6a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127581dc;
    _objc_loadWeakRetained(lVar10);
  }
  lVar5 = lVar10;
  func_0x00010bfa2b80(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048520(puVar1,param_2,lVar3,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  puVar6 = PTR_PTR_1126d07e0;
  _objc_alloc(PTR_PTR_1126d07e0);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127581d8;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c094e60(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0173c0(puVar6,param_2,puVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  puVar7 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_1127581d0;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c28f2a0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b07a10; end: 106b07a83; -[SCLensProcessingURIServiceSaveTextureHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07a10(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127581e0);
  _objc_destroyWeak(param_1 + _DAT_1127581dc);
  _objc_destroyWeak(param_1 + _DAT_1127581d8);
  _objc_destroyWeak(param_1 + _DAT_1127581d4);
  _objc_destroyWeak(param_1 + _DAT_1127581d0);
  _objc_destroyWeak(param_1 + _DAT_1127581cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127581c8);
  return;
}



/* Entry: 106b07a84; end: 106b07b97; -[SCLensProcessingURIServiceSnapActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07a84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_1127581e4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf29780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d07e8;
  _objc_alloc(PTR_PTR_1126d07e8);
  func_0x00010c025400();
  puVar5 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127581ec;
    _objc_loadWeakRetained(lVar1);
  }
  lVar2 = lVar1;
  func_0x00010c28f2a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106b07b98; end: 106b07bff;  */

void FUN_106b07b98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c11a2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c096000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b07c00; end: 106b07c43; -[SCLensProcessingURIServiceSnapActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07c00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127581e4);
  _objc_destroyWeak(param_1 + _DAT_1127581ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127581e8);
  return;
}



/* Entry: 106b07c44; end: 106b07ceb; -[SCLensProcessingURIServiceSnapchatDeeplinkHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07c44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d07f0;
  _objc_alloc_init(PTR_PTR_1126d07f0);
  puVar2 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127581f0;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010c28f2a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b07cec; end: 106b07cfb; -[SCLensProcessingURIServiceSnapchatDeeplinkHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127581f0);
  return;
}



/* Entry: 106b07cfc; end: 106b07fe3; -[SCLensProcessingURIServiceUcoTextInputHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b07cfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar8 = (long)_DAT_1127581f4;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3770;
  func_0x00010c104620(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    _objc_copyWeak(auStack_68,param_1 + _DAT_1127581f8);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar8);
    lVar1 = lVar8;
    func_0x00010c1510c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar8);
    puVar6 = PTR_PTR_1126d07f8;
    _objc_alloc(PTR_PTR_1126d07f8);
    lVar9 = (long)_DAT_1127581fc;
    lVar1 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf07dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112758200;
    _objc_loadWeakRetained(lVar8);
    lVar5 = lVar8;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033d40(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126b1cb0;
    _objc_alloc(PTR_PTR_1126b1cb0);
    func_0x00010c0199e0();
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + lVar9;
      _objc_loadWeakRetained(lVar1);
    }
    lVar8 = lVar1;
    func_0x00010c28f2a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 106b07fe4; end: 106b08023;  */

void FUN_106b07fe4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106b08024; end: 106b0812f;  */

void FUN_106b08024(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106b08130;
  uStack_30 = 0x106b08140;
  uStack_28 = 0;
  func_0x00010c0c15c0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b08130; end: 106b0818b;  */

void FUN_106b08130(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b0818c; end: 106b081db; -[SCLensProcessingURIServiceUcoTextInputHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b0818c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758200);
  _objc_destroyWeak(param_1 + _DAT_1127581f8);
  _objc_destroyWeak(param_1 + _DAT_1127581fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127581f4);
  return;
}



/* Entry: 106b081dc; end: 106b082f7; -[SCLensProcessingURIServiceUniverseRequestHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b081dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d0800;
  _objc_alloc(PTR_PTR_1126d0800);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112758208;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bf10b80(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f100(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112758204;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c28f2a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b082f8; end: 106b0832f; -[SCLensProcessingURIServiceUniverseRequestHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b082f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758204);
  return;
}



/* Entry: 106b08330; end: 106b0851f; -[SCLensProcessingURIServiceVideoTransformationHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08330(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112758218;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar7;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11275821c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar7;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar7);
  puVar4 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b08520;
  puStack_68 = &UNK_11084d508;
  lStack_60 = lVar1;
  lStack_58 = lVar3;
  _objc_retain(lVar3);
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d0808;
  _objc_alloc(PTR_PTR_1126d0808);
  func_0x00010c016c40();
  puVar6 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112758214;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010c28f2a0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lStack_58);
  _objc_release(lStack_60);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 106b08520; end: 106b085ef;  */

void FUN_106b08520(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c196320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1c3360(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8368);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ab80(puVar2,param_2,3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106b085f0; end: 106b0864b; -[SCLensProcessingURIServiceVideoTransformationHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b085f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275821c);
  _objc_destroyWeak(param_1 + _DAT_112758218);
  _objc_destroyWeak(param_1 + _DAT_112758214);
  _objc_destroyWeak(param_1 + _DAT_112758210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275820c);
  return;
}



/* Entry: 106b0864c; end: 106b0874f; -[SCLensProcessingURIServiceVoiceMLHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b0864c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d0810;
  _objc_alloc(PTR_PTR_1126d0810);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112758224;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c273160(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048900(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112758220;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c28f2a0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b08750; end: 106b08787; -[SCLensProcessingURIServiceVoiceMLHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08750(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758224);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758220);
  return;
}



/* Entry: 106b08788; end: 106b088bb; -[SCLensProcessingURIServiceWeatherHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08788(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126d0818;
  _objc_alloc(PTR_PTR_1126d0818);
  lVar2 = param_1;
  FUN_106b088bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a2da0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106b088bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a2d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062b60(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275822c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c28f2a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b088bc; end: 106b088df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b088bc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112758230);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b088e0; end: 106b08923; -[SCLensProcessingURIServiceWeatherHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b088e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758230);
  _objc_destroyWeak(param_1 + _DAT_11275822c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758228);
  return;
}



/* Entry: 106b08924; end: 106b08af7; -[SCLensProcessingURIServiceFriendDataRequestHandlerSnapRendererEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126d07b8;
  _objc_alloc(PTR_PTR_1126d07b8);
  lVar2 = param_1;
  FUN_106b08af8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112758244;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010bf506a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112758240;
    _objc_loadWeakRetained(lVar10);
  }
  lVar5 = lVar10;
  func_0x00010c0b97a0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_106b08af8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049720(puVar1,param_2,lVar3,lVar4,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112758238;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c28f2a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b08af8; end: 106b08b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08af8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275823c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b08b1c; end: 106b08b77; -[SCLensProcessingURIServiceFriendDataRequestHandlerSnapRendererEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08b1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758244);
  _objc_destroyWeak(param_1 + _DAT_112758240);
  _objc_destroyWeak(param_1 + _DAT_11275823c);
  _objc_destroyWeak(param_1 + _DAT_112758238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758234);
  return;
}



/* Entry: 106b08b78; end: 106b08cab; -[SCLensProcessingURIServiceGroupsDataRequestHandlerSnapRendererEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08b78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126d07c8;
  _objc_alloc(PTR_PTR_1126d07c8);
  lVar2 = param_1;
  FUN_106b08cac(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106b08cac(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019440(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275824c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c28f2a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b08cac; end: 106b08ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08cac(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112758250);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b08cd0; end: 106b08d13; -[SCLensProcessingURIServiceGroupsDataRequestHandlerSnapRendererEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b08cd0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758250);
  _objc_destroyWeak(param_1 + _DAT_11275824c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758248);
  return;
}



/* Entry: 106b08d14; end: 106b08d7f; -[SCLensProcessingURIServiceChatHandler initWithConversationMetadataProvider:] */

undefined1 * FUN_106b08d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4eb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b08d80; end: 106b08ec3; -[SCLensProcessingURIServiceChatHandler handleWithRequest:completion:] */

void FUN_106b08d80(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c135e00();
  if (uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106b08ec4;
      puStack_60 = &UNK_11084a9e8;
      uStack_58 = param_1;
      _objc_retain(param_4);
      uStack_48 = param_4;
      _objc_retain(param_3);
      uStack_50 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_release(uStack_50);
      uVar1 = uStack_48;
      goto LAB_106b08e98;
    }
  }
  uVar1 = param_3;
  func_0x00010c069c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar1);
LAB_106b08e98:
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b08ec4; end: 106b08f87;  */

void FUN_106b08ec4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b08f88;
  puStack_48 = &UNK_110858190;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar4;
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  func_0x00010bf5fda0(lVar2,param_2,&puStack_60);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  return;
}



/* Entry: 106b08f88; end: 106b09357;  */

void FUN_106b08f88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar12 = *(undefined **)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf98ee0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar12);
  }
  else {
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar15 = *(undefined8 *)(lVar14 * 8);
        uVar10 = uVar15;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar15;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar15;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar15;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar15;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar15);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar10);
        func_0x00010befa120(puVar12);
        _objc_release(puVar8);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c28f280(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar9);
    _objc_release(puVar11);
    _objc_release(uVar10);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar12);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106b09358; end: 106b0935b; -[SCLensProcessingURIServiceChatHandler reset] */

void FUN_106b09358(void)

{
  return;
}



/* Entry: 106b0935c; end: 106b09363; -[SCLensProcessingURIServiceChatHandler .cxx_destruct] */

void FUN_106b0935c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b09364; end: 106b09517; -[SCLensProcessingURIServiceEchoHandler handleWithRequest:completion:] */

void FUN_106b09364(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c135e00();
  if (puVar1 != (undefined *)0x1) goto LAB_106b094cc;
  puVar1 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) != 0) goto LAB_106b094f8;
  puVar1 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_release(puVar2);
    _objc_release(puVar1);
LAB_106b094cc:
    puVar1 = param_3;
    func_0x00010c069c60(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_3;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 == (undefined *)0x0) goto LAB_106b094cc;
    puVar1 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    puVar2 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf1e9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  (**(code **)(param_4 + 0x10))(param_4,puVar1);
  _objc_release(puVar1);
LAB_106b094f8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b09518; end: 106b0951b; -[SCLensProcessingURIServiceEchoHandler reset] */

void FUN_106b09518(void)

{
  return;
}



/* Entry: 106b0951c; end: 106b0967f; -[SCLensProcessingURIServiceFriendDataRequestHandler initWithSnapchattersDataFetcher:conversationMetadataProvider:friendLocationProvider:snapchattersObservableRepository:] */

undefined1 *
FUN_106b0951c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f4eb8;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b09680; end: 106b096b3; -[SCLensProcessingURIServiceFriendDataRequestHandler dealloc] */

void FUN_106b09680(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4eb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b096b4; end: 106b0983b; -[SCLensProcessingURIServiceFriendDataRequestHandler handleWithRequest:completion:] */

void FUN_106b096b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c069c60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c135e00();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128900(0x4072c00000000000);
      _objc_release(uVar3);
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(lVar1);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4,lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0983c; end: 106b09ab3;  */

void FUN_106b0983c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c28f280();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((int)uVar4 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c28f280();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((int)uVar4 == 0) {
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c28f280();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0f5800();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((int)uVar4 == 0) {
              uVar2 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010c28f280();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c0f5800();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c0720c0();
              _objc_release(uVar3);
              _objc_release(uVar2);
              if ((int)uVar4 == 0) {
                (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                          (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
              }
              else {
                func_0x00010be1f540(lVar1);
              }
            }
            else {
              func_0x00010be217c0(lVar1);
            }
          }
          else {
            func_0x00010be1f460(lVar1);
          }
        }
        else {
          func_0x00010be1f520(lVar1);
        }
      }
      else {
        func_0x00010be1d340(lVar1);
      }
    }
    else {
      func_0x00010be1cea0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b09ab4; end: 106b09ab7; -[SCLensProcessingURIServiceFriendDataRequestHandler reset] */

void FUN_106b09ab4(void)

{
  return;
}



/* Entry: 106b09ab8; end: 106b0a0a3; -[SCLensProcessingURIServiceFriendDataRequestHandler _lensUserDataListFromSnapchatters:] */

void FUN_106b09ab8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x22;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  uStack_168 = param_1;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined8 *)0x0) {
    ppuStack_160 = (undefined **)0x0;
  }
  else {
    ppuVar2 = (undefined **)PTR_PTR_1126d0820;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuStack_160 = ppuVar2;
    _objc_retain(param_3);
    puVar14 = &uStack_130;
    param_4 = auStack_f0;
    puVar1 = param_3;
    func_0x00010bf52a60();
    puStack_140 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      lStack_148 = *plStack_120;
      puStack_170 = param_3;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lStack_148) {
            _objc_enumerationMutation(param_3);
          }
          puVar13 = *(undefined **)(lStack_128 + (long)puVar14 * 8);
          puVar3 = puVar13;
          func_0x00010bfb8280();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c261440();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf0a8a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (puVar5 != (undefined *)0x0) {
            puVar4 = PTR_PTR_1126d0828;
            _objc_alloc_init(PTR_PTR_1126d0828);
            puVar3 = puVar13;
            func_0x00010c2923e0(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar4,param_2,puVar3);
            _objc_release(puVar3);
            puVar3 = puVar13;
            func_0x00010c294420(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21f760(puVar4,param_2,puVar3);
            _objc_release(puVar3);
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar5 = puVar13;
            func_0x00010bf85d80(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c078c00(puVar3,param_2,puVar5);
            puVar6 = puVar13;
            puStack_138 = puVar14;
            if (((ulong)puVar3 & 1) == 0) {
              func_0x00010bf85d80(puVar13);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010c294420(puVar13);
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c18fca0(puVar4,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(puVar5);
            puVar3 = puVar13;
            func_0x00010bfb8280();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c261440();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf0a8a0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010bf1a5c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar3);
            if (puVar7 != (undefined *)0x0) {
              puStack_158 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar3 = puVar13;
              func_0x00010bfb8280();
              _objc_retainAutoreleasedReturnValue();
              puStack_150 = puVar3;
              func_0x00010c261440();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar3;
              func_0x00010bf0a8a0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010bf1a5c0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010c0d0e40();
              puVar8 = puVar13;
              func_0x00010bfb8280();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = puVar8;
              func_0x00010c261440();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = unaff_x22;
              func_0x00010bf0a8a0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010bf1a5c0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010bf65700();
              unaff_x20 = puStack_158;
              puStack_180 = puVar7;
              puStack_178 = puVar11;
              func_0x00010c14de00(puStack_158,param_2,
                                  &PTR____CFConstantStringClassReference_110e72918);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c170360(puVar4,param_2,unaff_x20);
              _objc_release(unaff_x20);
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(unaff_x22);
              _objc_release(puVar8);
              _objc_release(puVar6);
              _objc_release(puVar5);
              _objc_release(puVar3);
              _objc_release(puStack_150);
            }
            puVar3 = puVar13;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c08fa60();
            if (puVar6 == (undefined *)0x0) {
LAB_106b09f9c:
              _objc_release(puVar5);
              param_3 = puStack_170;
              puVar14 = puStack_138;
LAB_106b09fac:
              _objc_release(puVar3);
            }
            else {
              puVar6 = puVar13;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010bf1c0a0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c08fa60();
              if (puVar8 == (undefined *)0x0) {
                _objc_release(puVar7);
                _objc_release(puVar6);
                goto LAB_106b09f9c;
              }
              puVar8 = puVar13;
              func_0x00010bfb8280();
              _objc_retainAutoreleasedReturnValue();
              unaff_x20 = puVar8;
              func_0x00010c261440();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = unaff_x20;
              func_0x00010bf0a8a0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = puVar9;
              func_0x00010c06d440();
              _objc_release(puVar9);
              _objc_release(unaff_x20);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar6);
              _objc_release(puVar5);
              _objc_release(puVar3);
              puVar14 = puStack_138;
              param_3 = puStack_170;
              if ((int)unaff_x22 != 0) {
                puVar3 = PTR_PTR_1126d0830;
                _objc_alloc_init(PTR_PTR_1126d0830);
                puVar5 = puVar13;
                func_0x00010bf1bae0(puVar13);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                func_0x00010bf1acc0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c16da00(puVar3,param_2,puVar6);
                _objc_release(puVar6);
                _objc_release(puVar5);
                puVar5 = puVar13;
                func_0x00010bf1bae0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x20 = puVar5;
                func_0x00010bf1c0a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1fbc60(puVar3,param_2,unaff_x20);
                _objc_release(unaff_x20);
                _objc_release(puVar5);
                func_0x00010c171180(puVar4,param_2,puVar3);
                goto LAB_106b09fac;
              }
            }
            uVar12 = uStack_168;
            func_0x00010be192e0(uStack_168,param_2,puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c19fda0(puVar4,param_2,uVar12);
            _objc_release(uVar12);
            FUN_106b122e8(puVar13);
            func_0x00010c227a20(puVar4,param_2,puVar13);
            unaff_x19 = ppuStack_160;
            func_0x00010c291860();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(unaff_x19);
            _objc_release(puVar4);
          }
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puStack_140 != puVar14);
        puVar14 = &uStack_130;
        param_4 = auStack_f0;
        puVar1 = param_3;
        func_0x00010bf52a60();
        puStack_140 = puVar1;
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
  }
  puVar1 = param_3;
  _objc_release();
  ppuVar2 = ppuStack_160;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_188 = FUN_106b0a0a4;
    puStack_1b0 = unaff_x22;
    puStack_1a8 = param_3;
    puStack_1a0 = unaff_x20;
    ppuStack_198 = unaff_x19;
    puStack_190 = &stack0xfffffffffffffff0;
    _objc_retain(puVar14);
    _objc_retain(param_4);
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_106b0a15c;
    puStack_1d0 = &UNK_11086f388;
    puStack_1c8 = puVar1;
    puStack_1c0 = puVar14;
    puStack_1b8 = param_4;
    _objc_retain(puVar14);
    _objc_retain(param_4);
    ppuVar2 = &puStack_1e8;
    _objc_retainBlock(ppuVar2);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puVar14);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b0a0a4; end: 106b0a15b; -[SCLensProcessingURIServiceFriendDataRequestHandler _snapchattersCompletionBlockWithRequest:completion:] */

void FUN_106b0a0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b0a15c;
  puStack_50 = &UNK_11086f388;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106b0a15c; end: 106b0a22f;  */

void FUN_106b0a15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4c1a0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x30);
  puVar2 = PTR_PTR_1126b1ce0;
  _objc_alloc(PTR_PTR_1126b1ce0);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c28f280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e80(puVar2);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b0a230; end: 106b0a3bb; -[SCLensProcessingURIServiceFriendDataRequestHandler _getPinnedBestFriendWithCompletion:request:] */

void FUN_106b0a230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106b0a3bc;
  uStack_60 = 0x106b0a3cc;
  uStack_58 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0fc3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = puStack_78[5];
  puStack_78[5] = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}


