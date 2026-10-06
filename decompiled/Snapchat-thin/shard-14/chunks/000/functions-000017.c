/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af1ec84; end: 10af1ec8f; -[SCUploadMediaDataManagerServices .cxx_destruct] */

void FUN_10af1ec84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ec90; end: 10af1ec97; -[SCUploadPerformerServices performer] */

undefined8 FUN_10af1ec90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1ec98; end: 10af1eca3; -[SCUploadPerformerServices .cxx_destruct] */

void FUN_10af1ec98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1eca4; end: 10af1ecab; -[SCSnapRendererServices snapRenderer] */

undefined8 FUN_10af1eca4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1ecac; end: 10af1ecdb; -[SCSnapRendererServices .cxx_destruct] */

void FUN_10af1ecac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ecdc; end: 10af1ed0b; -[SCContentProductSnapRendererServices .cxx_destruct] */

void FUN_10af1ecdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ed0c; end: 10af1ed8f; -[SCSnapRendererPluginSampleBuffer initWithSampleBuffer:contentIsUnchanged:] */

undefined1 *
FUN_10af1ed0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127020b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1ed90; end: 10af1ed97; -[SCSnapRendererPluginSampleBuffer sampleBuffer] */

undefined8 FUN_10af1ed90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1ed98; end: 10af1ed9f; -[SCSnapRendererPluginSampleBuffer contentIsUnchanged] */

undefined1 FUN_10af1ed98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af1eda0; end: 10af1edab; -[SCSnapRendererPluginSampleBuffer .cxx_destruct] */

void FUN_10af1eda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af1edac; end: 10af1ede7; -[SCMemoriesSnapRendererServices .cxx_destruct] */

void FUN_10af1edac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ede8; end: 10af1ee23; -[SCMemoriesSnapRendererQCServices .cxx_destruct] */

void FUN_10af1ede8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ee24; end: 10af1ee2f; -[SCPreviewRewriteSnapRendererServices .cxx_destruct] */

void FUN_10af1ee24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ee30; end: 10af1ee5f; -[SCLensProcessingSnapRendererScope .cxx_destruct] */

void FUN_10af1ee30(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10af1ee60; end: 10af1ee6b; -[SCLensProcessingSnapRendererScopedMemoriesSnapRendererServices .cxx_destruct] */

void FUN_10af1ee60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ee6c; end: 10af1ee77; -[SCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServices .cxx_destruct] */

void FUN_10af1ee6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ee78; end: 10af1ee83; -[SCLensProcessingSnapRendererScopedContentProductSnapRendererServices .cxx_destruct] */

void FUN_10af1ee78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ee84; end: 10af1eef7; -[SCSnapRendererPluginOutputFrame initWithSampleBuffer:] */

undefined1 * FUN_10af1ee84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127020f8;
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



/* Entry: 10af1eef8; end: 10af1ef1b; -[SCSnapRendererPluginOutputFrame copyWithZone:] */

undefined8 FUN_10af1eef8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1ef1c; end: 10af1ef23; -[SCSnapRendererPluginOutputFrame hash] */

void FUN_10af1ef1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af1ef24; end: 10af1efb3; -[SCSnapRendererPluginOutputFrame isEqual:] */

long FUN_10af1ef24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1ef98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af1ef98;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af1ef98;
    }
  }
  lVar3 = 1;
LAB_10af1ef98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1efb4; end: 10af1efbb; -[SCSnapRendererPluginOutputFrame sampleBuffer] */

undefined8 FUN_10af1efb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1efbc; end: 10af1efc7; -[SCSnapRendererPluginOutputFrame .cxx_destruct] */

void FUN_10af1efbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1efc8; end: 10af1f073;  */

undefined1 *
FUN_10af1efc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_112702100;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar4 = param_2;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      uVar2 = param_5[1];
      uVar4 = *param_5;
      *(undefined8 *)((long)plVar1 + 0x30) = param_5[2];
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      *(undefined8 *)((long)plVar1 + 0x20) = uVar4;
    }
  }
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 10af1f074; end: 10af1f097; -[SCSnapRendererPluginSnapInfo copyWithZone:] */

undefined8 FUN_10af1f074(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1f098; end: 10af1f11f; -[SCSnapRendererPluginSnapInfo hash] */

undefined8 * FUN_10af1f098(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = (ulong)*(uint *)(param_1 + 0x2c);
  lStack_40 = (long)*(int *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10af1f1e4:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af1f1e8;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)((long)puVar2 + 0x18) == *(long *)(param_3 + 0x18))))) {
      uStack_a8 = *(undefined8 *)((long)puVar2 + 0x28);
      uStack_b0 = *(undefined8 *)((long)puVar2 + 0x20);
      uStack_a0 = *(undefined8 *)((long)puVar2 + 0x30);
      uStack_c8 = *(undefined8 *)(param_3 + 0x28);
      uStack_d0 = *(undefined8 *)(param_3 + 0x20);
      uStack_c0 = *(undefined8 *)(param_3 + 0x30);
      puVar4 = &uStack_b0;
      _CMTimeCompare(puVar4,&uStack_d0);
      if ((int)puVar4 == 0) {
        puVar5 = *(undefined1 **)((long)puVar2 + 8);
        if (puVar5 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10af1f1e8;
        }
        goto LAB_10af1f1e4;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10af1f1e8:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10af1f120; end: 10af1f207; -[SCSnapRendererPluginSnapInfo isEqual:] */

long FUN_10af1f120(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1f1e4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1f1e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      uStack_48 = *(undefined8 *)(param_1 + 0x28);
      uStack_50 = *(undefined8 *)(param_1 + 0x20);
      uStack_40 = *(undefined8 *)(param_1 + 0x30);
      uStack_68 = *(undefined8 *)(param_3 + 0x28);
      uStack_70 = *(undefined8 *)(param_3 + 0x20);
      uStack_60 = *(undefined8 *)(param_3 + 0x30);
      puVar3 = &uStack_50;
      _CMTimeCompare(puVar3,&uStack_70);
      if ((int)puVar3 == 0) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10af1f1e8;
        }
        goto LAB_10af1f1e4;
      }
    }
    lVar4 = 0;
  }
LAB_10af1f1e8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af1f208; end: 10af1f213; -[SCSnapRendererPluginSnapInfo .cxx_destruct] */

void FUN_10af1f208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1f214; end: 10af1f21f; -[SCMemoriesNavigationServices .cxx_destruct] */

void FUN_10af1f214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1f220; end: 10af1f227; -[SCNGSMEPlaybackServices ngsmePlayerFactory] */

undefined8 FUN_10af1f220(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1f228; end: 10af1f233; -[SCNGSMEPlaybackServices .cxx_destruct] */

void FUN_10af1f228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1f234; end: 10af1f2fb;  */

undefined1 *
FUN_10af1f234(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_58 = PTR_PTR_112702118;
    lStack_60 = param_3;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      *(undefined4 *)((long)plVar1 + 8) = param_1;
      uVar2 = param_5[1];
      uVar4 = *param_5;
      *(undefined8 *)((long)plVar1 + 0x38) = param_5[2];
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      *(undefined8 *)((long)plVar1 + 0x28) = uVar4;
      uVar4 = param_6;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_7;
      *(undefined4 *)((long)plVar1 + 0xc) = param_2;
    }
  }
  _objc_release(param_6);
  return puVar3;
}



/* Entry: 10af1f2fc; end: 10af1f31f; -[SCNGSMEPlayerStatusValue copyWithZone:] */

undefined8 FUN_10af1f2fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1f320; end: 10af1f413; -[SCNGSMEPlayerStatusValue hash] */

long * FUN_10af1f320(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_80 = -lVar6;
  if (-1 < lVar6) {
    lStack_80 = lVar6;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_78 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = (ulong)*(uint *)(param_1 + 0x34);
  lStack_68 = (long)*(int *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x20);
  lStack_48 = -lVar6;
  if (-1 < lVar6) {
    lStack_48 = lVar6;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_40 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uStack_50 = uVar2;
  func_0x000107c3191c(&lStack_80,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10af1f530:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af1f53c;
    puVar8 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)plVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)((long)plVar3 + 0x20) == *(long *)(param_3 + 0x20))))) {
      fVar10 = ABS(*(float *)((long)plVar3 + 8) - *(float *)(param_3 + 8));
      fVar9 = ABS(*(float *)((long)plVar3 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if (bVar1) {
        uStack_c8 = *(undefined8 *)((long)plVar3 + 0x30);
        uStack_d0 = *(undefined8 *)((long)plVar3 + 0x28);
        uStack_c0 = *(undefined8 *)((long)plVar3 + 0x38);
        uStack_e8 = *(undefined8 *)(param_3 + 0x30);
        uStack_f0 = *(undefined8 *)(param_3 + 0x28);
        uStack_e0 = *(undefined8 *)(param_3 + 0x38);
        puVar5 = &uStack_d0;
        _CMTimeCompare(puVar5,&uStack_f0);
        if ((int)puVar5 == 0) {
          fVar10 = ABS(*(float *)((long)plVar3 + 0xc) - *(float *)(param_3 + 0xc));
          fVar9 = ABS(*(float *)((long)plVar3 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
            bVar1 = fVar10 < fVar9;
          }
          if (bVar1) {
            puVar8 = *(undefined1 **)((long)plVar3 + 0x18);
            if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
              func_0x00010c071ae0();
              goto LAB_10af1f53c;
            }
            goto LAB_10af1f530;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10af1f53c:
  _objc_release(param_3);
  return (long *)puVar8;
}



/* Entry: 10af1f414; end: 10af1f55b; -[SCNGSMEPlayerStatusValue isEqual:] */

long FUN_10af1f414(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1f530:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1f53c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      fVar7 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar6 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
        bVar1 = fVar7 < fVar6;
      }
      if (bVar1) {
        uStack_48 = *(undefined8 *)(param_1 + 0x30);
        uStack_50 = *(undefined8 *)(param_1 + 0x28);
        uStack_40 = *(undefined8 *)(param_1 + 0x38);
        uStack_68 = *(undefined8 *)(param_3 + 0x30);
        uStack_70 = *(undefined8 *)(param_3 + 0x28);
        uStack_60 = *(undefined8 *)(param_3 + 0x38);
        puVar4 = &uStack_50;
        _CMTimeCompare(puVar4,&uStack_70);
        if ((int)puVar4 == 0) {
          fVar7 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
          fVar6 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
            bVar1 = fVar7 < fVar6;
          }
          if (bVar1) {
            lVar5 = *(long *)(param_1 + 0x18);
            if (lVar5 != *(long *)(param_3 + 0x18)) {
              func_0x00010c071ae0();
              goto LAB_10af1f53c;
            }
            goto LAB_10af1f530;
          }
        }
      }
    }
    lVar5 = 0;
  }
LAB_10af1f53c:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10af1f55c; end: 10af1f58b;  */

undefined8 FUN_10af1f55c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10af1f58c; end: 10af1f597; -[SCNGSMEPlayerStatusValue .cxx_destruct] */

void FUN_10af1f58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af1f598; end: 10af1f643;  */

undefined1 * FUN_10af1f598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112702120;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10af1f644; end: 10af1f667; -[SCNGSMEPlayerPlaybackPackage copyWithZone:] */

undefined8 FUN_10af1f644(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1f668; end: 10af1f6db; -[SCNGSMEPlayerPlaybackPackage hash] */

undefined8 * FUN_10af1f668(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af1f75c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af1f768;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af1f768;
        }
        goto LAB_10af1f75c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af1f768:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af1f6dc; end: 10af1f783; -[SCNGSMEPlayerPlaybackPackage isEqual:] */

long FUN_10af1f6dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1f75c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1f768;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af1f768;
        }
        goto LAB_10af1f75c;
      }
    }
    lVar3 = 0;
  }
LAB_10af1f768:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1f784; end: 10af1f78f;  */

undefined8 FUN_10af1f784(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10af1f790; end: 10af1f80b; -[SCNGSMEPlayerPlaybackPackage .cxx_destruct] */

void FUN_10af1f790(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1f80c; end: 10af1f82f; -[SCNGSMEPlayerPhaseEvent copyWithZone:] */

undefined8 FUN_10af1f80c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1f830; end: 10af1f83f; -[SCNGSMEPlayerPhaseEvent hash] */

long FUN_10af1f830(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10af1f840; end: 10af1f8c7; -[SCNGSMEPlayerPhaseEvent isEqual:] */

bool FUN_10af1f840(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af1f8c8; end: 10af1f8d3;  */

undefined8 FUN_10af1f8c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10af1f8d4; end: 10af1f947; -[SCPreviewFeatureImagePlaybackServices initWithImagePlayback:] */

undefined1 * FUN_10af1f8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702130;
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



/* Entry: 10af1f948; end: 10af1f94f; -[SCPreviewFeatureImagePlaybackServices imagePlayback] */

undefined8 FUN_10af1f948(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1f950; end: 10af1f95b; -[SCPreviewFeatureImagePlaybackServices .cxx_destruct] */

void FUN_10af1f950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1f95c; end: 10af1f9a3; +[SCPreviewImagePlaybackEvent didRenderImage] */

void FUN_10af1f95c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d89f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af1f9a4; end: 10af1f9c7; -[SCPreviewImagePlaybackEvent copyWithZone:] */

undefined8 FUN_10af1f9a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1f9c8; end: 10af1f9cf; -[SCPreviewImagePlaybackEvent hash] */

undefined8 FUN_10af1f9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1f9d0; end: 10af1fa13; -[SCPreviewImagePlaybackEvent internalInit] */

void FUN_10af1f9d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af1fa14; end: 10af1fa9b; -[SCPreviewImagePlaybackEvent isEqual:] */

bool FUN_10af1fa14(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af1fa9c; end: 10af1fab7; -[SCPreviewImagePlaybackEvent matchDidRenderImage:] */

void FUN_10af1fa9c(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010af1fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10af1fab8; end: 10af1fadb; +[SCCUploadIUploader valdiMarshallableObjectDescriptor] */

void FUN_10af1fab8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c919d0;
  param_1[1] = &PTR_DAT_110c91a00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af1fadc; end: 10af1fb3b;  */

undefined8 FUN_10af1fadc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de9e0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10af1fb3c; end: 10af1fb83; -[SCCUploadUploadConfig initWithDestinations:] */

void FUN_10af1fb3c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112702140;
  uStack_20 = param_1;
  func_0x00010af1fc48(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10af1fb84; end: 10af1fb97; +[SCCUploadUploadConfig valdiMarshallableObjectDescriptor] */

void FUN_10af1fb84(undefined8 *param_1)

{
  *param_1 = &PTR_s_encryptionKey_110c91a18;
  param_1[1] = &PTR_DAT_110c91ad8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af1fb98; end: 10af1fbcf; -[SCCUploadUploadRequest initWithSnap:config:] */

void FUN_10af1fb98(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112702148;
  uStack_20 = param_1;
  func_0x00010af1fc48(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10af1fbd0; end: 10af1fbe3; +[SCCUploadUploadRequest valdiMarshallableObjectDescriptor] */

void FUN_10af1fbd0(undefined8 *param_1)

{
  *param_1 = &PTR_s_snap_110c91ae8;
  param_1[1] = &PTR_DAT_110c91b30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af1fbe4; end: 10af1fc23; -[SCCUploadUploadResult initWithSnap:dataUploaded:isDataUploadedZipped:] */

void FUN_10af1fbe4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112702150;
  uStack_20 = param_1;
  func_0x00010af1fc48(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10af1fc24; end: 10af1fc4f; +[SCCUploadUploadResult valdiMarshallableObjectDescriptor] */

void FUN_10af1fc24(undefined8 *param_1)

{
  *param_1 = &PTR_s_snap_110c91b48;
  param_1[1] = &PTR_DAT_110c91bd8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af1fc50; end: 10af1fcc3; -[SCMediaRecipientDeviceCapabilitiesWarmupServices initWithWarmupPerformer:] */

undefined1 * FUN_10af1fc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702158;
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



/* Entry: 10af1fcc4; end: 10af1fccb; -[SCMediaRecipientDeviceCapabilitiesWarmupServices warmupPerformer] */

undefined8 FUN_10af1fcc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1fccc; end: 10af1fcd7; -[SCMediaRecipientDeviceCapabilitiesWarmupServices .cxx_destruct] */

void FUN_10af1fccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1fcd8; end: 10af1fce3; -[SCMediaTranscodingLoggingServices .cxx_destruct] */

void FUN_10af1fcd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1fce4; end: 10af1fd13; -[SCMediaTranscodingServices .cxx_destruct] */

void FUN_10af1fce4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1fd14; end: 10af1fdc3;  */

undefined1 * FUN_10af1fd14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112702170;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10af1fdc4; end: 10af1fde7; -[SCVideoTranscodingRequestInput copyWithZone:] */

undefined8 FUN_10af1fdc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1fde8; end: 10af1fe5b; -[SCVideoTranscodingRequestInput hash] */

undefined8 * FUN_10af1fde8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af1fedc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af1fee8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af1fee8;
        }
        goto LAB_10af1fedc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af1fee8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af1fe5c; end: 10af1ff03; -[SCVideoTranscodingRequestInput isEqual:] */

long FUN_10af1fe5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af1fedc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1fee8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af1fee8;
        }
        goto LAB_10af1fedc;
      }
    }
    lVar3 = 0;
  }
LAB_10af1fee8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1ff04; end: 10af1ff33; -[SCVideoTranscodingRequestInput .cxx_destruct] */

void FUN_10af1ff04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ff34; end: 10af1ffdf; -[SCVideoTranscodingRequestInputBuilder .cxx_destruct] */

void FUN_10af1ff34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1ffe0; end: 10af20003; -[SCVideoTranscodingRequestOutput copyWithZone:] */

undefined8 FUN_10af1ffe0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af20004; end: 10af2000b; -[SCVideoTranscodingRequestOutput hash] */

void FUN_10af20004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af2000c; end: 10af2009b; -[SCVideoTranscodingRequestOutput isEqual:] */

long FUN_10af2000c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af20080;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af20080;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af20080;
    }
  }
  lVar3 = 1;
LAB_10af20080:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af2009c; end: 10af200a7; -[SCVideoTranscodingRequestOutput .cxx_destruct] */

void FUN_10af2009c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af200a8; end: 10af200c7;  */

void FUN_10af200a8(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126c4a88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af200c8; end: 10af2013f;  */

void FUN_10af200c8(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126bf7c8);
    func_0x00010af1ff64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af20140; end: 10af2014b; -[SCVideoTranscodingRequestOutputBuilder .cxx_destruct] */

void FUN_10af20140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2014c; end: 10af20203;  */

undefined1 * FUN_10af2014c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112702180;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10af20204; end: 10af20227; -[SCVideoTranscodingRequestOutputData copyWithZone:] */

undefined8 FUN_10af20204(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af20228; end: 10af202a7; -[SCVideoTranscodingRequestOutputData hash] */

undefined8 * FUN_10af20228(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af20338:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af20344;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af20344;
        }
        goto LAB_10af20338;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af20344:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af202a8; end: 10af2035f; -[SCVideoTranscodingRequestOutputData isEqual:] */

long FUN_10af202a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af20338:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af20344;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af20344;
        }
        goto LAB_10af20338;
      }
    }
    lVar3 = 0;
  }
LAB_10af20344:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af20360; end: 10af20377;  */

undefined8 FUN_10af20360(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10af20378; end: 10af203a7; -[SCVideoTranscodingRequestOutputData .cxx_destruct] */

void FUN_10af20378(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af203a8; end: 10af203c7;  */

void FUN_10af203a8(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126da180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af203c8; end: 10af20487;  */

void FUN_10af203c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_2;
    _objc_release(uVar1);
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af20488; end: 10af204b7; -[SCVideoTranscodingRequestOutputDataBuilder .cxx_destruct] */

void FUN_10af20488(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af204b8; end: 10af20567;  */

undefined1 * FUN_10af204b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112702188;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10af20568; end: 10af2058b; -[SCVideoTranscodingRequestConfiguration copyWithZone:] */

undefined8 FUN_10af20568(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af2058c; end: 10af205ff; -[SCVideoTranscodingRequestConfiguration hash] */

undefined8 * FUN_10af2058c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af20680:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af2068c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af2068c;
        }
        goto LAB_10af20680;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af2068c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af20600; end: 10af206a7; -[SCVideoTranscodingRequestConfiguration isEqual:] */

long FUN_10af20600(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af20680:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af2068c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af2068c;
        }
        goto LAB_10af20680;
      }
    }
    lVar3 = 0;
  }
LAB_10af2068c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af206a8; end: 10af206d7; -[SCVideoTranscodingRequestConfiguration .cxx_destruct] */

void FUN_10af206a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af206d8; end: 10af206f7;  */

void FUN_10af206d8(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126bf7b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af206f8; end: 10af207cb;  */

void FUN_10af206f8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar1 = PTR_PTR_1126bf7b8;
  FUN_10af206d8(PTR_PTR_1126bf7b8);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  FUN_10af207cc(puVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
  }
  _objc_retain(uVar3);
  _objc_release(param_2);
  func_0x00010af20810(puVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af207cc; end: 10af20887;  */

void FUN_10af207cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_2;
    _objc_release(uVar1);
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af20888; end: 10af208b7; -[SCVideoTranscodingRequestConfigurationBuilder .cxx_destruct] */

void FUN_10af20888(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


