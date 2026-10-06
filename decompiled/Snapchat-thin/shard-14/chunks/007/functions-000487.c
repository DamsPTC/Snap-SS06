/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6036bc; end: 10b6036c3; -[SCGenerativeContentDreamsSnapReportParams iv] */

undefined8 FUN_10b6036bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6036c4; end: 10b6036cb; -[SCGenerativeContentDreamsSnapReportParams lensId] */

undefined8 FUN_10b6036c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6036cc; end: 10b603743; -[SCGenerativeContentDreamsSnapReportParams .cxx_destruct] */

void FUN_10b6036cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b603744; end: 10b6038b7; -[SCMemoriesGenAIFeaturedStoryReportParams initWithSnapID:collectionId:promptID:requestID:genAIFeaturedStoryType:contentImage:dreamsMetadata:] */

undefined1 *
FUN_10b603744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112706778;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6038b8; end: 10b6038db; -[SCMemoriesGenAIFeaturedStoryReportParams copyWithZone:] */

undefined8 FUN_10b6038b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6038dc; end: 10b603983; -[SCMemoriesGenAIFeaturedStoryReportParams hash] */

undefined8 * FUN_10b6038dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b603a74:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b603a80;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b603a80;
                }
                goto LAB_10b603a74;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b603a80:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b603984; end: 10b603a9b; -[SCMemoriesGenAIFeaturedStoryReportParams isEqual:] */

long FUN_10b603984(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b603a74:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b603a80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10b603a80;
                }
                goto LAB_10b603a74;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b603a80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b603a9c; end: 10b603aa3; -[SCMemoriesGenAIFeaturedStoryReportParams snapID] */

undefined8 FUN_10b603a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b603aa4; end: 10b603aab; -[SCMemoriesGenAIFeaturedStoryReportParams collectionId] */

undefined8 FUN_10b603aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b603aac; end: 10b603ab3; -[SCMemoriesGenAIFeaturedStoryReportParams promptID] */

undefined8 FUN_10b603aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b603ab4; end: 10b603abb; -[SCMemoriesGenAIFeaturedStoryReportParams requestID] */

undefined8 FUN_10b603ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b603abc; end: 10b603ac3; -[SCMemoriesGenAIFeaturedStoryReportParams genAIFeaturedStoryType] */

undefined8 FUN_10b603abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b603ac4; end: 10b603acb; -[SCMemoriesGenAIFeaturedStoryReportParams contentImage] */

undefined8 FUN_10b603ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b603acc; end: 10b603ad3; -[SCMemoriesGenAIFeaturedStoryReportParams dreamsMetadata] */

undefined8 FUN_10b603acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b603ad4; end: 10b603b33; -[SCMemoriesGenAIFeaturedStoryReportParams .cxx_destruct] */

void FUN_10b603ad4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b603b34; end: 10b603bbf; -[SCAIContentReportParams initWithAiLensMetaData:contentType:selfieSource:] */

undefined1 *
FUN_10b603b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706780;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b603bc0; end: 10b603be3; -[SCAIContentReportParams copyWithZone:] */

undefined8 FUN_10b603bc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b603be4; end: 10b603c5b; -[SCAIContentReportParams hash] */

undefined8 * FUN_10b603be4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar5 = MP_INT_ABS((int)*(undefined8 *)(param_1 + 8));
  uVar6 = MP_INT_ABS((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  uStack_38 = (ulong)uVar5;
  uStack_30 = (ulong)uVar6;
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b603cf0;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)((long)puVar2 + 0xc) != *(int *)(param_3 + 0xc))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b603cf0;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b603cf0;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b603cf0:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b603c5c; end: 10b603d0b; -[SCAIContentReportParams isEqual:] */

long FUN_10b603c5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b603cf0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
      lVar3 = 0;
      goto LAB_10b603cf0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b603cf0;
    }
  }
  lVar3 = 1;
LAB_10b603cf0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b603d0c; end: 10b603d13; -[SCAIContentReportParams aiLensMetaData] */

undefined8 FUN_10b603d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b603d14; end: 10b603d1b; -[SCAIContentReportParams contentType] */

undefined4 FUN_10b603d14(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b603d1c; end: 10b603d23; -[SCAIContentReportParams selfieSource] */

undefined4 FUN_10b603d1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b603d24; end: 10b603d2f; -[SCAIContentReportParams .cxx_destruct] */

void FUN_10b603d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b603d30; end: 10b603d37; -[SCCGenAIFeaturedStoryType__Enum init] */

void FUN_10b603d30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,9);
  return;
}



/* Entry: 10b603d38; end: 10b603d3f; -[SCCGenAISelfieSource__Enum init] */

void FUN_10b603d38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b603d40; end: 10b603d47; -[SCCGenerativeContentType__Enum init] */

void FUN_10b603d40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xb);
  return;
}



/* Entry: 10b603d48; end: 10b603e03; -[SCCCameosReportType__Enum init] */

undefined1 * FUN_10b603d48(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1133b8420;
  puStack_48 = PTR_PTR_1133b8428;
  puStack_40 = PTR_PTR_1133b8430;
  puStack_38 = PTR_PTR_1133b8438;
  puStack_30 = PTR_PTR_1133b8440;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10b603e04;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010b6041b4(PTR_PTR_112706788);
  puVar2 = auStack_70;
  func_0x00010b6041d4(puVar2);
  return puVar2;
}



/* Entry: 10b603e04; end: 10b603e4b; -[SCCAIContentReportParams initWithContentType:selfieSource:lensID:templateId:mlModelId:] */

void FUN_10b603e04(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6041b4(PTR_PTR_112706788);
  func_0x00010b6041d4(auStack_20);
  return;
}



/* Entry: 10b603e4c; end: 10b603e5f; +[SCCAIContentReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b603e4c(undefined8 *param_1)

{
  *param_1 = &PTR_s_contentType_110d26000;
  param_1[1] = &PTR_DAT_110d26108;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b603e60; end: 10b603e8f; -[SCCCameosReportConfigViewModel initWithParams:] */

void FUN_10b603e60(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6041b4(PTR_PTR_112706790);
  func_0x00010b6041d4(auStack_20);
  return;
}



/* Entry: 10b603e90; end: 10b603ea3; +[SCCCameosReportConfigViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b603e90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d26128;
  param_1[1] = &PTR_DAT_110d261a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b603ea4; end: 10b603edb; -[SCCCameosReportContext initWithCameosDeps:coreDeps:] */

void FUN_10b603ea4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112706798;
  uStack_20 = param_1;
  func_0x00010b6041d4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b603edc; end: 10b603eef; +[SCCCameosReportContext valdiMarshallableObjectDescriptor] */

void FUN_10b603edc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d261c0;
  param_1[1] = &PTR_DAT_110d26208;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b603ef0; end: 10b603f23; -[SCCCameosReportDependencies init] */

void FUN_10b603ef0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127067a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b603f24; end: 10b603f37; +[SCCCameosReportDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b603f24(undefined8 *param_1)

{
  *param_1 = &PTR_s_grpcServiceFactory_110d26220;
  param_1[1] = &PTR_s_SCComposerNetworkingGrpcServiceF_110d26250;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b603f38; end: 10b603f73; -[SCCCameosReportParams initWithReportType:] */

void FUN_10b603f38(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6041b4(PTR_PTR_1127067a8);
  func_0x00010b6041d4(auStack_20);
  return;
}



/* Entry: 10b603f74; end: 10b603f87; +[SCCCameosReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b603f74(undefined8 *param_1)

{
  *param_1 = &PTR_s_reportType_110d26260;
  param_1[1] = &PTR_DAT_110d26308;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b603f88; end: 10b603fbb; -[SCCCameosStoryReportParams initWithPublisherId:publisherName:storyId:cameoId:additionalUserIds:] */

void FUN_10b603f88(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6041b4(PTR_PTR_1127067b0);
  func_0x00010b6041d4(auStack_20);
  return;
}



/* Entry: 10b603fbc; end: 10b603fcf; +[SCCCameosStoryReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b603fbc(undefined8 *param_1)

{
  *param_1 = &PTR_s_publisherId_110d26340;
  param_1[1] = &PTR_s_SCBridgeObservable_110d263e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b603fd0; end: 10b603ffb; -[SCCDreamsReportMetadata initWithDreamPackId:dreamId:identityIds:userIds:] */

void FUN_10b603fd0(void)

{
  func_0x00010b6041b4(PTR_PTR_1127067b8);
  func_0x00010b6041c4();
  return;
}



/* Entry: 10b603ffc; end: 10b60400b; +[SCCDreamsReportMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b603ffc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_dreamPackId_110d26400;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b60400c; end: 10b604033; -[SCCDreamsSnapReportParams initWithContentType:generativeContentMetadata:] */

void FUN_10b60400c(void)

{
  func_0x00010b6041b4(PTR_PTR_1127067c0);
  func_0x00010b6041c4();
  return;
}



/* Entry: 10b604034; end: 10b604047; +[SCCDreamsSnapReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b604034(undefined8 *param_1)

{
  *param_1 = &PTR_s_contentType_110d26490;
  param_1[1] = &PTR_DAT_110d264f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b604048; end: 10b60406f; -[SCCGenerativeContentReportMediaData initWithBoltUrl:] */

void FUN_10b604048(void)

{
  func_0x00010b6041b4(PTR_PTR_1127067c8);
  func_0x00010b6041c4();
  return;
}



/* Entry: 10b604070; end: 10b60407f; +[SCCGenerativeContentReportMediaData valdiMarshallableObjectDescriptor] */

void FUN_10b604070(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d26510;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b604080; end: 10b6040b7; -[SCCGenerativeContentReportMetadata initWithDreamsMetadata:] */

void FUN_10b604080(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127067d0;
  uStack_20 = param_1;
  func_0x00010b6041d4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b6040b8; end: 10b6040cb; +[SCCGenerativeContentReportMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b6040b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_dreamsMetadata_110d26570;
  param_1[1] = &PTR_DAT_110d265a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6040cc; end: 10b6040fb; -[SCCGenerativeContentReportParams initWithContentType:prompt:] */

void FUN_10b6040cc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6041b4(PTR_PTR_1127067d8);
  func_0x00010b6041d4(auStack_20);
  return;
}



/* Entry: 10b6040fc; end: 10b60410f; +[SCCGenerativeContentReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b6040fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_contentType_110d265b0;
  param_1[1] = &PTR_DAT_110d26628;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b604110; end: 10b60418f; -[SCCMemoriesGenAIFeaturedStoryReportParams initWithGenAIFeaturedStoryType:uploadReportMedia:] */

undefined8 *
FUN_10b604110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1127067e0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x00010b6041d4(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b604190; end: 10b6041f7; +[SCCMemoriesGenAIFeaturedStoryReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b604190(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d26640;
  param_1[1] = &PTR_DAT_110d26700;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6041f8; end: 10b60430b; -[SCContextConversationParams initWithConversationId:isGroupConversation:recipientUsername:recipientUserId:displayName:] */

undefined1 *
FUN_10b6041f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127067e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b60430c; end: 10b60432f; -[SCContextConversationParams copyWithZone:] */

undefined8 FUN_10b60430c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b604330; end: 10b6043bf; -[SCContextConversationParams hash] */

undefined8 * FUN_10b604330(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b604480:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b60448c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b60448c;
            }
            goto LAB_10b604480;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b60448c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6043c0; end: 10b6044a7; -[SCContextConversationParams isEqual:] */

long FUN_10b6043c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b604480:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b60448c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b60448c;
            }
            goto LAB_10b604480;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b60448c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6044a8; end: 10b6044af; -[SCContextConversationParams conversationId] */

undefined8 FUN_10b6044a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6044b0; end: 10b6044b7; -[SCContextConversationParams isGroupConversation] */

undefined1 FUN_10b6044b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6044b8; end: 10b6044bf; -[SCContextConversationParams recipientUsername] */

undefined8 FUN_10b6044b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6044c0; end: 10b6044c7; -[SCContextConversationParams recipientUserId] */

undefined8 FUN_10b6044c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6044c8; end: 10b6044cf; -[SCContextConversationParams displayName] */

undefined8 FUN_10b6044c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6044d0; end: 10b604517; -[SCContextConversationParams .cxx_destruct] */

void FUN_10b6044d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b604518; end: 10b6045e3; -[SCContextReplyParams initWithUser:conversationId:isGroup:isDirectSnap:isSpotlightRecommendReply:] */

undefined1 *
FUN_10b604518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127067f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6045e4; end: 10b604607; -[SCContextReplyParams copyWithZone:] */

undefined8 FUN_10b6045e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b604608; end: 10b60468b; -[SCContextReplyParams hash] */

undefined8 * FUN_10b604608(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b60473c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b604748;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b604748;
        }
        goto LAB_10b60473c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b604748:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b60468c; end: 10b604763; -[SCContextReplyParams isEqual:] */

long FUN_10b60468c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b60473c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b604748;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b604748;
        }
        goto LAB_10b60473c;
      }
    }
    lVar3 = 0;
  }
LAB_10b604748:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b604764; end: 10b60476b; -[SCContextReplyParams user] */

undefined8 FUN_10b604764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b60476c; end: 10b604773; -[SCContextReplyParams conversationId] */

undefined8 FUN_10b60476c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b604774; end: 10b60477b; -[SCContextReplyParams isGroup] */

undefined1 FUN_10b604774(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b60477c; end: 10b604783; -[SCContextReplyParams isDirectSnap] */

undefined1 FUN_10b60477c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b604784; end: 10b60478b; -[SCContextReplyParams isSpotlightRecommendReply] */

undefined1 FUN_10b604784(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b60478c; end: 10b6047bb; -[SCContextReplyParams .cxx_destruct] */

void FUN_10b60478c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6047bc; end: 10b604873; -[SCContextSessionConfigurationParams initWithIsReplyEnabled:isSharingEnabled:isContextDisabled:isBoostingEnabled:isActionMenuEnabled:isRemixIconEnabled:isSaveIconEligible:swipeDirection:isSpotlightRepliesEnabledOnSnap:isScanOnPublicContentEnabled:isSnapReplyUpsellEnabled:isSnapSaveToCameraRollEnabled:isSharingRestricted:] */

void FUN_10b6047bc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
                  undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127067f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9;
    *(undefined8 *)((long)puVar1 + 0x18) = param_11;
    *(undefined1 *)((long)puVar1 + 0xf) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 0x10) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_12._2_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_12._3_1_;
    *(undefined1 *)((long)puVar1 + 0x13) = param_13;
  }
  return;
}



/* Entry: 10b604874; end: 10b604897; -[SCContextSessionConfigurationParams copyWithZone:] */

undefined8 FUN_10b604874(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b604898; end: 10b60495b; -[SCContextSessionConfigurationParams hash] */

ulong * FUN_10b604898(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_80;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar8 >> 0x30);
  uStack_80 = (ulong)uVar1 & 0xff;
  uStack_78 = uVar8 >> 0x10 & 0xff;
  uStack_70 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_68 = (ulong)uVar6;
  uStack_60 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_58 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_50 = (ulong)*(byte *)(param_1 + 0xe);
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uVar7 = *(undefined4 *)(param_1 + 0xf);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9);
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar8 >> 0x30);
  uStack_40 = (ulong)uVar1 & 0xff;
  uStack_38 = uVar8 >> 0x10 & 0xff;
  uStack_30 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_28 = (ulong)uVar6;
  uStack_20 = (ulong)*(byte *)(param_1 + 0x13);
  func_0x000107c3191c(&uStack_80,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((((ulong)puVar3 & 1) == 0) ||
           (((*(char *)((long)puVar2 + 8) != param_3[8] ||
             (*(char *)((long)puVar2 + 9) != param_3[9])) ||
            (*(char *)((long)puVar2 + 10) != param_3[10])))) ||
          ((((*(char *)((long)puVar2 + 0xb) != param_3[0xb] ||
             (*(char *)((long)puVar2 + 0xc) != param_3[0xc])) ||
            (*(char *)((long)puVar2 + 0xd) != param_3[0xd])) ||
           ((*(char *)((long)puVar2 + 0xe) != param_3[0xe] ||
            (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))))) ||
         ((*(char *)((long)puVar2 + 0xf) != param_3[0xf] ||
          (((*(char *)((long)puVar2 + 0x10) != param_3[0x10] ||
            (*(char *)((long)puVar2 + 0x11) != param_3[0x11])) ||
           (*(char *)((long)puVar2 + 0x12) != param_3[0x12])))))) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)(ulong)(*(char *)((long)puVar2 + 0x13) == param_3[0x13]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 10b60495c; end: 10b604aa3; -[SCContextSessionConfigurationParams isEqual:] */

bool FUN_10b60495c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if (((((uVar3 & 1) == 0) ||
           (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
             (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
            (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
          ((((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
             (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
            (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))) ||
           ((*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))))) ||
         ((*(char *)(param_1 + 0xf) != *(char *)(param_3 + 0xf) ||
          (((*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10) ||
            (*(char *)(param_1 + 0x11) != *(char *)(param_3 + 0x11))) ||
           (*(char *)(param_1 + 0x12) != *(char *)(param_3 + 0x12))))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b604aa4; end: 10b604aab; -[SCContextSessionConfigurationParams isReplyEnabled] */

undefined1 FUN_10b604aa4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b604aac; end: 10b604ab3; -[SCContextSessionConfigurationParams isSharingEnabled] */

undefined1 FUN_10b604aac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b604ab4; end: 10b604abb; -[SCContextSessionConfigurationParams isContextDisabled] */

undefined1 FUN_10b604ab4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b604abc; end: 10b604ac3; -[SCContextSessionConfigurationParams isBoostingEnabled] */

undefined1 FUN_10b604abc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b604ac4; end: 10b604acb; -[SCContextSessionConfigurationParams isActionMenuEnabled] */

undefined1 FUN_10b604ac4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b604acc; end: 10b604ad3; -[SCContextSessionConfigurationParams isRemixIconEnabled] */

undefined1 FUN_10b604acc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b604ad4; end: 10b604adb; -[SCContextSessionConfigurationParams isSaveIconEligible] */

undefined1 FUN_10b604ad4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b604adc; end: 10b604ae3; -[SCContextSessionConfigurationParams swipeDirection] */

undefined8 FUN_10b604adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b604ae4; end: 10b604aeb; -[SCContextSessionConfigurationParams isSpotlightRepliesEnabledOnSnap] */

undefined1 FUN_10b604ae4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b604aec; end: 10b604af3; -[SCContextSessionConfigurationParams isScanOnPublicContentEnabled] */

undefined1 FUN_10b604aec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b604af4; end: 10b604afb; -[SCContextSessionConfigurationParams isSnapReplyUpsellEnabled] */

undefined1 FUN_10b604af4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b604afc; end: 10b604b03; -[SCContextSessionConfigurationParams isSnapSaveToCameraRollEnabled] */

undefined1 FUN_10b604afc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10b604b04; end: 10b604b0b; -[SCContextSessionConfigurationParams isSharingRestricted] */

undefined1 FUN_10b604b04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 10b604b0c; end: 10b604ca3; -[SCContextSessionContentInfo initWithVenueId:attachmentUrl:lensId:previewLensIds:filterId:multiSnapMetadata:unlockablesSnapInfo:] */

undefined1 *
FUN_10b604b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_58 = PTR_PTR_112706800;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10b604ca4; end: 10b604cc7; -[SCContextSessionContentInfo copyWithZone:] */

undefined8 FUN_10b604ca4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b604cc8; end: 10b604d77; -[SCContextSessionContentInfo hash] */

undefined8 * FUN_10b604cc8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b604e70:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b604e7c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b604e7c;
                  }
                  goto LAB_10b604e70;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b604e7c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b604d78; end: 10b604e97; -[SCContextSessionContentInfo isEqual:] */

long FUN_10b604d78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b604e70:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b604e7c;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10b604e7c;
                  }
                  goto LAB_10b604e70;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b604e7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b604e98; end: 10b604e9f; -[SCContextSessionContentInfo venueId] */

undefined8 FUN_10b604e98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b604ea0; end: 10b604ea7; -[SCContextSessionContentInfo attachmentUrl] */

undefined8 FUN_10b604ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b604ea8; end: 10b604eaf; -[SCContextSessionContentInfo lensId] */

undefined8 FUN_10b604ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b604eb0; end: 10b604eb7; -[SCContextSessionContentInfo previewLensIds] */

undefined8 FUN_10b604eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b604eb8; end: 10b604ebf; -[SCContextSessionContentInfo filterId] */

undefined8 FUN_10b604eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b604ec0; end: 10b604ec7; -[SCContextSessionContentInfo multiSnapMetadata] */

undefined8 FUN_10b604ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b604ec8; end: 10b604ecf; -[SCContextSessionContentInfo unlockablesSnapInfo] */

undefined8 FUN_10b604ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b604ed0; end: 10b604f3b; -[SCContextSessionContentInfo .cxx_destruct] */

void FUN_10b604ed0(long param_1)

{
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


