/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054f6d9c; end: 1054f6ef3; -[SCGrapheneRegistry chatContentDeliveryGraphene] */

void FUN_1054f6d9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1054f6e24;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bc810 != -1) {
    func_0x00010002a2fc(0x1136bc810,&puStack_48);
  }
  uVar1 = uRam00000001136bc808;
  _objc_retain(uRam00000001136bc808);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f6ef4; end: 1054f6f67; -[SCGrapheneChatContentDeliveryMetric2 init] */

undefined1 * FUN_1054f6ef4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8bf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054f6f68; end: 1054f7227;  */

/* WARNING: Removing unreachable block (ram,0x0001054f71f0) */

char * FUN_1054f6f68(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *unaff_x24;
  char *pcStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  pcVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar7 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1054f7228;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar9 = pcVar4;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar12 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar8 = acStack_158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110892b38);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar11 = 0;
    puVar12 = auStack_138;
    pcVar9 = pcVar4;
    do {
      if ((&cStack_109)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    pcVar2 = pcVar4;
    __Unwind_Resume();
    ppcVar5 = &pcStack_1a0;
    pcStack_168 = FUN_1054f7458;
    puStack_190 = puVar12;
    pcStack_188 = pcVar4;
    pcStack_180 = pcVar7;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    _objc_retain(pcVar10);
    puStack_198 = PTR_PTR_1126e8c00;
    pcStack_1a0 = pcVar2;
    _objc_msgSendSuper2(&pcStack_1a0,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      _objc_retain(pcVar8);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
      *(char **)((long)ppcVar5 + 8) = pcVar8;
      _objc_release(uVar6);
      _objc_retain(pcVar9);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 0x10);
      *(char **)((long)ppcVar5 + 0x10) = pcVar9;
      _objc_release(uVar6);
      _objc_retain(pcVar10);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 0x18);
      *(char **)((long)ppcVar5 + 0x18) = pcVar10;
      _objc_release(uVar6);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    return (char *)ppcVar5;
  }
  return pcVar4;
}



/* Entry: 1054f7228; end: 1054f7457;  */

char * FUN_1054f7228(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110892b38);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_e0;
  pcStack_a8 = FUN_1054f7458;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126e8c00;
  pcStack_e0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar5);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = uVar6;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 1054f7458; end: 1054f7523; -[SCCameraRollSaveableModelWrapper initWithChatMediaContent:chatMediaFetcher:contentDelivery:] */

undefined1 *
FUN_1054f7458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e8c00;
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



/* Entry: 1054f7524; end: 1054f759b; -[SCCameraRollSaveableModelWrapper saveableVideoURL] */

void FUN_1054f7524(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c29bc40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1054f759c; end: 1054f763b; -[SCCameraRollSaveableModelWrapper fetchVideoOverlayForExportWithCompletionHandler:] */

void FUN_1054f759c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054f763c;
  puStack_40 = &UNK_110892bd8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0efa00(uVar2,param_2,uVar1,0x11,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054f763c; end: 1054f7647;  */

void FUN_1054f763c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054f7644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1054f7648; end: 1054f768b; -[SCCameraRollSaveableModelWrapper isCircular] */

bool FUN_1054f7648(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0c6c20();
  if ((lVar2 + 1U < 0xd) && ((0x129fU >> (ulong)((uint)(lVar2 + 1U) & 0x1f) & 1) != 0)) {
    bVar1 = false;
  }
  else {
    func_0x0001085440bc();
    bVar1 = (uint)lVar2 < 9;
  }
  return bVar1;
}



/* Entry: 1054f768c; end: 1054f76ff; -[SCCameraRollSaveableModelWrapper thumbnailSize] */

undefined1  [16] FUN_1054f768c(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2a5040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar3 = (double)param_1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfe0640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  auVar4._8_8_ = (double)param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 1054f7700; end: 1054f77a3; -[SCCameraRollSaveableModelWrapper fetchImageToSaveWithCompletionHandler:] */

void FUN_1054f7700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054f77a4;
  puStack_40 = &UNK_110892bd8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c26de20(uVar2,param_2,uVar1,1,0x11,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054f77a4; end: 1054f77af;  */

void FUN_1054f77a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054f77ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1054f77b0; end: 1054f784f; -[SCCameraRollSaveableModelWrapper fetchMediaAvailability] */

void FUN_1054f77b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1054f7850;
    puStack_30 = &UNK_11088e668;
    lStack_28 = param_1;
    func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054f7850; end: 1054f799b;  */

void FUN_1054f7850(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bf4b540(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054f799c; end: 1054f79d7; -[SCCameraRollSaveableModelWrapper .cxx_destruct] */

void FUN_1054f799c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054f79d8; end: 1054f7b1f; -[SCChatAudioNoteAnimationCacheItem initWithMessage:conversationId:mediaId:sampleCount:completion:] */

undefined8 *
FUN_1054f79d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8c08;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar1[7] = param_6;
    uVar2 = puVar1[2];
    puVar1[2] = 0;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054f7b20; end: 1054f7b5f; -[SCChatAudioNoteAnimationCacheItem setCoverAnimationImages:] */

void FUN_1054f7b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 1054f7b60; end: 1054f7b9b; -[SCChatAudioNoteAnimationCacheItem getCoverAnimationImages] */

void FUN_1054f7b60(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f7b9c; end: 1054f7ba3; -[SCChatAudioNoteAnimationCacheItem coverAnimationImages] */

undefined8 FUN_1054f7b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054f7ba4; end: 1054f7bab; -[SCChatAudioNoteAnimationCacheItem message] */

undefined8 FUN_1054f7ba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054f7bac; end: 1054f7bb3; -[SCChatAudioNoteAnimationCacheItem conversationId] */

undefined8 FUN_1054f7bac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1054f7bb4; end: 1054f7bbb; -[SCChatAudioNoteAnimationCacheItem mediaId] */

undefined8 FUN_1054f7bb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1054f7bbc; end: 1054f7bc3; -[SCChatAudioNoteAnimationCacheItem animationMediaId] */

undefined8 FUN_1054f7bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1054f7bc4; end: 1054f7bcb; -[SCChatAudioNoteAnimationCacheItem sampleCount] */

undefined8 FUN_1054f7bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1054f7bcc; end: 1054f7bd3; -[SCChatAudioNoteAnimationCacheItem completion] */

undefined8 FUN_1054f7bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1054f7bd4; end: 1054f7bdb; -[SCChatAudioNoteAnimationCacheItem setCompletion:] */

void FUN_1054f7bd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1054f7bdc; end: 1054f7c3b; -[SCChatAudioNoteAnimationCacheItem .cxx_destruct] */

void FUN_1054f7bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1054f7c3c; end: 1054f7d7f; -[SCChatAudioNoteAnimationThumbnailFetcher initWithContentDelivery:loadMessageLogger:timeProvider:decoder:userTrackedLogger:] */

undefined1 *
FUN_1054f7c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e8c10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054f7d80; end: 1054f809b; -[SCChatAudioNoteAnimationThumbnailFetcher processSamplesForMessage:conversationId:sampleCount:metricsInfo:completion:] */

void FUN_1054f7d80(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) goto LAB_1054f8028;
  lVar2 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (((param_7 == 0) || (param_4 == 0)) || (lVar1 == 0)) goto LAB_1054f8028;
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar5 = PTR_PTR_1126ba180;
    _objc_alloc(PTR_PTR_1126ba180);
    func_0x00010c02b320();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar5);
LAB_1054f7f20:
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf03da0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar6);
    _objc_retain(param_6);
    func_0x00010c13e4e0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(param_6);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_68);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17fb20();
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf53820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar2 == 0) goto LAB_1054f7f20;
    (**(code **)(param_7 + 0x10))(param_7,1);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
LAB_1054f8028:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054f809c; end: 1054f80ef;  */

void FUN_1054f809c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054f80f0; end: 1054f817f; -[SCChatAudioNoteAnimationThumbnailFetcher coverAnimationImagesForMediaId:] */

void FUN_1054f80f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf53820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054f8180; end: 1054f831b; -[SCChatAudioNoteAnimationThumbnailFetcher _processCachedAnimationData:cacheItem:metricsInfo:] */

void FUN_1054f8180(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    _objc_initWeak(auStack_58,param_2);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0c5180(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_1;
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c13e4e0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be80520(param_2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f831c; end: 1054f8377;  */

void FUN_1054f831c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be80860(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054f8378; end: 1054f84a7; -[SCChatAudioNoteAnimationThumbnailFetcher _processAnimationData:cacheItem:] */

void FUN_1054f8378(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126ba188;
    if (lVar1 == 0) {
      func_0x00010c2a2ac0(PTR_PTR_1126ba188);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c184c00(param_4);
    }
    else {
      func_0x00010c2a2ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126ba188;
      _objc_alloc(PTR_PTR_1126ba188);
      func_0x00010bff2fc0();
      func_0x00010c149760(param_4);
      puVar3 = puVar2;
      func_0x00010c149900(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c184c00(param_4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
    lVar1 = param_4;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054f84a8; end: 1054f8717; -[SCChatAudioNoteAnimationThumbnailFetcher _processCachedAudioNoteData:startTimestamp:cacheItem:shouldFetch:metricsInfo:] */

void FUN_1054f84a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  int param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010c0c5180(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be59040(param_2);
  _objc_release(lVar1);
  if (param_4 == 0) {
    if (param_6 != 0) {
      lVar1 = param_5;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        _objc_initWeak(auStack_68,param_2);
        lVar1 = param_5;
        func_0x00010c0cb140(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
        uVar2 = *(undefined8 *)(param_2 + 8);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0c3fe0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010bf026e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_78,auStack_68);
        _objc_retain(param_5);
        uStack_70 = param_1;
        _objc_retain(param_7);
        func_0x00010c13e920(uVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(uVar2);
        _objc_release(param_7);
        _objc_release(param_5);
        _objc_destroyWeak(auStack_78);
        _objc_release(lVar1);
        _objc_destroyWeak(auStack_68);
        goto LAB_1054f86b8;
      }
    }
    lVar1 = param_5;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  else {
    func_0x00010be80600(param_2);
  }
LAB_1054f86b8:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f8718; end: 1054f875f;  */

void FUN_1054f8718(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be69240(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054f8760; end: 1054f8923; -[SCChatAudioNoteAnimationThumbnailFetcher _processAudioNoteData:cacheItem:] */

void FUN_1054f8760(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_68,param_2);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1054f8924;
    puStack_88 = &UNK_110892c98;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_5);
    uStack_80 = param_5;
    uStack_70 = param_1;
    _objc_copyWeak(auStack_b0,auStack_68);
    _objc_retain(param_5);
    uStack_a8 = param_1;
    func_0x00010bfc29e0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f8924; end: 1054f8a0b;  */

void FUN_1054f8924(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be805e0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054f8a0c; end: 1054f8b5b; -[SCChatAudioNoteAnimationThumbnailFetcher _processAudioLinearPCMData:cacheItem:startTimestamp:] */

void FUN_1054f8a0c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_5;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba188;
  if (lVar1 == 0) {
    func_0x00010bfbef20(0x40e5888000000000,PTR_PTR_1126ba188,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfbef40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf03da0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a8a0(uVar3,param_3,puVar2,lVar1,0,0);
  _objc_release(lVar1);
  _objc_release(uVar3);
  func_0x00010be80520(param_2,param_3,puVar2,param_5);
  lVar1 = param_5;
  func_0x00010c0c5180(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be59040(param_1,param_2,param_3,9,lVar1,1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054f8b5c; end: 1054f8d0b; -[SCChatAudioNoteAnimationThumbnailFetcher _onFetchAudioNoteDataForCacheItem:success:startTime:metricsInfo:] */

void FUN_1054f8b5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar3 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 == 0) {
    lVar2 = param_4;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
  else {
    _objc_initWeak(auStack_68,param_2);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = uVar3;
    _objc_retain(param_4);
    func_0x00010c13e4e0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  func_0x00010be5a860(param_1,param_2);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f8d0c; end: 1054f8d6b;  */

void FUN_1054f8d0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be80860(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054f8d6c; end: 1054f8e93; -[SCChatAudioNoteAnimationThumbnailFetcher _logVoiceNoteFetchWithSuccess:startTime:metricsInfo:] */

void FUN_1054f8d6c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR_PTR_1126ba190;
  if (param_5 != 0) {
    dVar4 = param_1;
    _objc_retain(param_5);
    _objc_opt_new(puVar1);
    lVar2 = param_5;
    func_0x00010bf026e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167c40(puVar1,param_3,lVar2);
    _objc_release(lVar2);
    func_0x00010c19b520(puVar1,param_3,param_4);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
    dVar4 = (dVar4 - param_1) * 1000.0;
    func_0x00010c19b540(dVar4,puVar1);
    lVar2 = param_5;
    func_0x00010c0748c0(param_5);
    func_0x00010c1b1940(puVar1,param_3,lVar2);
    lVar2 = param_5;
    func_0x00010c07d860(param_5);
    func_0x00010c1b4340(puVar1,param_3,lVar2);
    func_0x00010c0dbac0(param_5);
    _objc_release(param_5);
    func_0x00010c1cdd60(dVar4,puVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1054f8e94; end: 1054f8f2f; -[SCChatAudioNoteAnimationThumbnailFetcher _logStep:mediaId:startTimestamp:success:] */

void FUN_1054f8e94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  if (param_6 == 0) {
    uVar1 = 2;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = param_1;
  _objc_retain(param_5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
  func_0x00010c0b0a20(param_1,uVar3,uVar2,param_3,param_5,param_4,uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054f8f30; end: 1054f8f8f; -[SCChatAudioNoteAnimationThumbnailFetcher .cxx_destruct] */

void FUN_1054f8f30(long param_1)

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



/* Entry: 1054f8f90; end: 1054f90e3; -[SCChatMediaFetcher initWithChatContentDelivery:messagingExperimentService:loadMessageLogger:grapheneRegistry:timeProvider:userInitiatedQueue:] */

undefined1 *
FUN_1054f8f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126e8c18;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054f90e4; end: 1054f91ab; -[SCChatMediaFetcher bundleForMediaId:mediaType:requestSource:completion:] */

void FUN_1054f90e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_3 != 0) && (param_6 != 0)) {
    _objc_retain(param_6);
    uVar1 = 0;
    func_0x0001085436d4(0,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be5cf80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    func_0x00010bdf7be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054f91ac; end: 1054f9273; -[SCChatMediaFetcher contentForMediaId:mediaType:requestSource:completion:] */

void FUN_1054f91ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_3 != 0) && (param_6 != 0)) {
    _objc_retain(param_6);
    uVar1 = 1;
    func_0x0001085436d4(1,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be5cf80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    func_0x00010bdf7be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054f9274; end: 1054f930f; -[SCChatMediaFetcher imageForKey:requestSource:completion:] */

void FUN_1054f9274(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 != 0) && (param_5 != 0)) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010be5cac0(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7be0(param_1,param_2,param_3,0,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f9310; end: 1054f935b; -[SCChatMediaFetcher overlayImageForMediaContent:requestSource:completion:] */

void FUN_1054f9310(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 != 0) && (param_5 != 0)) {
    func_0x00010c0efa20(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f935c; end: 1054f9497; -[SCChatMediaFetcher overlayImageForMediaContent:scaledToSize:blendSpectaclesOverlays:isCircular:requestSource:completion:] */

void FUN_1054f935c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_9);
  lVar1 = param_5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if (((param_9 != 0) && (param_5 != 0)) && (lVar1 != 0)) {
    lVar2 = param_5;
    func_0x000108543920(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010be9aa60(param_1,param_2,param_3,param_4,param_6,param_9,param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010be5cfa0(param_3,param_4,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be37100(param_3,param_4,lVar2,param_8,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar2);
    uVar4 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1054f9498; end: 1054f961f; -[SCChatMediaFetcher registerAndFetchThumbnailImageForMediaContent:cacheOnly:requestSource:completion:] */

void FUN_1054f9498(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = (undefined *)0x0;
  if ((param_3 != 0) && (param_6 != 0)) {
    puVar2 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_initWeak(auStack_58,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1054f9620;
    puStack_98 = &UNK_110892cf8;
    _objc_retain(puVar2);
    puStack_90 = puVar2;
    _objc_retain(param_3);
    lStack_88 = param_3;
    _objc_retain(param_6);
    lStack_80 = param_1;
    lStack_78 = param_6;
    _objc_copyWeak(auStack_70,auStack_58);
    uStack_68 = param_5;
    uStack_60 = param_4;
    _objc_retainBlock();
    if (*(long *)(param_1 + 0x30) == 0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    }
    else {
      func_0x00010007380c(*(long *)(param_1 + 0x30),ppuVar1);
    }
    _objc_retain(puVar2);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_70);
    _objc_release(lStack_78);
    _objc_release(lStack_88);
    _objc_release(puStack_90);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054f9620; end: 1054f975b;  */

void FUN_1054f9620(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054f9664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0);
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uStack_38 = *(undefined1 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c125f80(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 1054f975c; end: 1054f97e7;  */

void FUN_1054f975c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 & 1) != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c26de20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bef7460(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001054f97e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,4);
  return;
}



/* Entry: 1054f97e8; end: 1054f9937; -[SCChatMediaFetcher thumbnailImageForMediaContent:cacheOnly:requestSource:completion:] */

void FUN_1054f97e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined1 param_5,undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar2 = (undefined *)0x0;
  if ((param_4 != 0) && (param_7 != 0)) {
    puVar2 = PTR_PTR_1126b2798;
    _objc_opt_new();
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x28));
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1054f9938;
    puStack_90 = &UNK_110892d28;
    _objc_retain(param_4);
    lStack_88 = param_4;
    lStack_80 = param_2;
    uStack_58 = param_5;
    _objc_retain(param_7);
    lStack_70 = param_7;
    _objc_retain(puVar2);
    ppuVar1 = &puStack_a8;
    puStack_78 = puVar2;
    uStack_68 = param_1;
    uStack_60 = param_6;
    _objc_retainBlock();
    if (*(long *)(param_2 + 0x30) == 0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      func_0x00010007380c(*(long *)(param_2 + 0x30),ppuVar1);
    }
    _objc_retain(puVar2);
    _objc_release(ppuVar1);
    _objc_release(puStack_78);
    _objc_release(lStack_70);
    _objc_release(lStack_88);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054f9938; end: 1054f9a3f;  */

void FUN_1054f9938(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x0001085436d4(0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4b4c0();
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) goto LAB_1054f99bc;
    lVar6 = *(long *)(param_1 + 0x38);
    pcVar7 = *(code **)(lVar6 + 0x10);
    uVar2 = 3;
  }
  else {
LAB_1054f99bc:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c06e0e0();
    if (iVar1 == 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010becbba0(*(undefined8 *)(param_1 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        func_0x00010bef7460(*(undefined8 *)(param_1 + 0x30));
      }
      _objc_release(lVar6);
      goto LAB_1054f9a2c;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    pcVar7 = *(code **)(lVar6 + 0x10);
    uVar2 = 0;
  }
  (*pcVar7)(lVar6,0,uVar2);
LAB_1054f9a2c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1054f9a40; end: 1054f9af3; -[SCChatMediaFetcher thumbnailImageForMediaContent:scaledToSize:requestSource:completion:] */

void FUN_1054f9a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_5 != 0) && (param_7 != 0)) {
    _objc_retain(param_5);
    uVar1 = param_3;
    func_0x00010be9a9e0(param_1,param_2,param_3,param_4,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26de20(param_3,param_4,param_5,1,param_6,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(uVar1);
    uVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f9af4; end: 1054f9bb7; -[SCChatMediaFetcher thumbnailImageForMediaContent:scale:maximumSize:requestSource:completion:] */

void FUN_1054f9af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_6 != 0) && (param_8 != 0)) {
    _objc_retain(param_6);
    uVar1 = param_4;
    func_0x00010be9a9c0(param_1,param_2,param_3,param_4,param_5,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26de20(param_4,param_5,param_6,1,param_7,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(uVar1);
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f9bb8; end: 1054f9d7b; -[SCChatMediaFetcher profileThumbnailImageForMediaContent:requestSource:completion:] */

void FUN_1054f9bb8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar3 = 0;
  if ((param_4 != 0) && (param_6 != 0)) {
    lVar3 = param_4;
    func_0x00010c26d980();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,3);
      lVar3 = 0;
    }
    else {
      func_0x00010beec800(*(undefined8 *)(param_2 + 0x28));
      _objc_initWeak(auStack_68,param_2);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1054f9d7c;
      puStack_90 = &UNK_110892d58;
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_4);
      lStack_88 = param_4;
      uStack_70 = param_1;
      _objc_retain(param_6);
      ppuVar2 = &puStack_a8;
      lStack_80 = param_6;
      _objc_retainBlock(ppuVar2);
      lVar3 = param_2;
      func_0x00010c117340(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be37100(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(ppuVar2);
      _objc_release(lStack_80);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      lVar3 = param_2;
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1054f9d7c; end: 1054f9e2b;  */

void FUN_1054f9d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be53420(*(undefined8 *)(param_1 + 0x38),lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054f9e2c; end: 1054f9fd7; -[SCChatMediaFetcher gifDataForMediaId:requestSource:completion:] */

void FUN_1054f9e2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar2 = 0;
  if ((param_4 != 0) && (param_6 != 0)) {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x28));
    _objc_initWeak(auStack_78,param_2);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1054f9fd8;
    puStack_a0 = &UNK_11085f0d0;
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_4);
    lStack_98 = param_4;
    uStack_80 = param_1;
    _objc_retain(param_6);
    ppuVar1 = &puStack_b8;
    lStack_90 = param_6;
    _objc_retainBlock(ppuVar1);
    lVar2 = param_2;
    func_0x00010bee79a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010be5cf80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_90);
    _objc_release(lStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    lVar2 = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1054f9fd8; end: 1054fa063;  */

void FUN_1054f9fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be53420(*(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054fa064; end: 1054fa1d7; -[SCChatMediaFetcher storyThumbnailImageForMediaId:mediaType:scaledToSize:isCircular:requestSource:completion:] */

void FUN_1054fa064(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,long param_9
                  )

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  ppuVar1 = &puStack_e0;
  uVar3 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_9);
  puVar2 = (undefined *)0x0;
  if ((param_5 != 0) && (param_9 != 0)) {
    puVar2 = PTR_PTR_1126b2798;
    _objc_opt_new();
    func_0x00010beec800(*(undefined8 *)(param_3 + 0x28));
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1054fa1d8;
    puStack_c8 = &UNK_110892d88;
    _objc_retain(param_5);
    lStack_c0 = param_5;
    lStack_b8 = param_3;
    _objc_retain(param_9);
    lStack_a8 = param_9;
    _objc_retain(puVar2);
    puStack_b0 = puVar2;
    uStack_a0 = param_6;
    uStack_98 = uVar3;
    uStack_90 = param_8;
    uStack_88 = param_1;
    uStack_80 = param_2;
    uStack_78 = param_7;
    _objc_retainBlock();
    if (*(long *)(param_3 + 0x30) == 0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    }
    else {
      func_0x00010007380c(*(long *)(param_3 + 0x30),ppuVar1);
    }
    _objc_retain(puVar2);
    _objc_release(ppuVar1);
    _objc_release(puStack_b0);
    _objc_release(lStack_a8);
    _objc_release(lStack_c0);
    _objc_release(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054fa1d8; end: 1054fa32b;  */

void FUN_1054fa1d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar2 = 0;
  func_0x000108543814(0,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b4c0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    pcVar9 = *(code **)(lVar5 + 0x10);
    uVar8 = 3;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c06e0e0();
    if (iVar1 == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      lVar6 = lVar5;
      func_0x00010be9aa00(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010be5cfa0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec4f00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      if (lVar5 != 0) {
        func_0x00010bef7460(*(undefined8 *)(param_1 + 0x30));
      }
      _objc_release(lVar5);
      goto LAB_1054fa30c;
    }
    lVar5 = *(long *)(param_1 + 0x38);
    pcVar9 = *(code **)(lVar5 + 0x10);
    uVar8 = 0;
  }
  (*pcVar9)(lVar5,0,uVar8);
LAB_1054fa30c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054fa32c; end: 1054fa367; -[SCChatMediaFetcher storyOverlayImageForMediaId:requestSource:completion:] */

void FUN_1054fa32c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  if ((param_3 != 0) && (param_5 != 0)) {
    func_0x00010c25a680(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054fa368; end: 1054fa457; -[SCChatMediaFetcher storyOverlayImageForMediaId:scaledToSize:requestSource:completion:] */

void FUN_1054fa368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if ((param_5 != 0) && (param_7 != 0)) {
    _objc_retain(param_7);
    uVar1 = 2;
    func_0x000108543814(2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010be9a9e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    uVar3 = param_3;
    func_0x00010be5cfa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be37100(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054fa458; end: 1054fa467; -[SCChatMediaFetcher isMediaContentReadyForDisplay:thumbnailOptional:] */

undefined8 FUN_1054fa458(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be5ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaThumbnailIsReadyForDisplay_1125754b8)
    ;
    return param_1;
  }
  return 0;
}



/* Entry: 1054fa468; end: 1054fa477; -[SCChatMediaFetcher isStoryMediaContentReadyForDisplay:mediaType:] */

undefined8 FUN_1054fa468(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec4f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__storyThumbnailIsReadyForDisplay_11258ed70)
    ;
    return param_1;
  }
  return 0;
}



/* Entry: 1054fa478; end: 1054fa52f; -[SCChatMediaFetcher isProfileThumbnailAvailable:] */

undefined8 FUN_1054fa478(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c26d980();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c117340(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4b4c0();
      _objc_release(uVar3);
      _objc_release(lVar1);
      goto LAB_1054fa514;
    }
  }
  uVar4 = 0;
LAB_1054fa514:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1054fa530; end: 1054fa58f; -[SCChatMediaFetcher saveableModelForMediaContent:] */

void FUN_1054fa530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba198;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffdba0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054fa590; end: 1054fa60f; -[SCChatMediaFetcher videoUrlForMediaContent:] */

void FUN_1054fa590(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29bc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054fa610; end: 1054fa66f; -[SCChatMediaFetcher logConsumedForMediaId:useCase:] */

void FUN_1054fa610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a39a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054fa670; end: 1054fa70b; -[SCChatMediaFetcher _imageForDedupeKey:requestSource:completion:] */

void FUN_1054fa670(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_3 != 0) && (param_5 != 0)) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010be5caa0(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7be0(param_1,param_2,param_3,0,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054fa70c; end: 1054fa803; -[SCChatMediaFetcher _dataForDedupeKey:mediaType:requestSource:completion:] */

void FUN_1054fa70c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_6);
  uVar1 = 0;
  if ((param_3 != 0) && (param_6 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1054fa804;
    puStack_50 = &UNK_11085a668;
    _objc_retain(param_6);
    uVar1 = uVar2;
    lStack_48 = param_6;
    func_0x00010c13e4e0(uVar2,param_2,param_3,param_4,param_5,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(lStack_48);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054fa804; end: 1054fa81b;  */

void FUN_1054fa804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054fa818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1054fa81c; end: 1054faa2f; -[SCChatMediaFetcher _thumbnailImageForMediaContent:startTimestamp:requestSource:completion:] */

void FUN_1054fa81c(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  ppuVar2 = &puStack_c0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c0c6c20();
  uVar3 = 3;
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  _objc_initWeak(auStack_78,param_2);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1054faa30;
  puStack_a8 = &UNK_110892db8;
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_4);
  lStack_a0 = param_4;
  uStack_88 = uVar3;
  uStack_80 = param_1;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retainBlock(&puStack_c0);
  lVar1 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085436d4(uVar3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = param_2;
  func_0x00010be5ec60();
  if ((int)puVar4 == 0) {
    puVar4 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
    puVar5 = param_2;
    func_0x00010be14ee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed0e20(param_2);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be37100(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
  }
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054faa30; end: 1054faaff;  */

void FUN_1054faa30(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if ((param_3 == 1) || (param_4 != 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be53420(*(undefined8 *)(param_1 + 0x40),lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054fab00; end: 1054fabcb; -[SCChatMediaFetcher _unarchiveMediaContent:requestSource:completion:] */

void FUN_1054fab00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054fabcc;
  puStack_40 = &UNK_110892de8;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c104be0(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 1054fabcc; end: 1054fabdb;  */

void FUN_1054fabcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001054fabd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1054fabdc; end: 1054fadb3; -[SCChatMediaFetcher _mediaThumbnailIsReadyForDisplayForMediaContent:thumbnailOptional:] */

uint FUN_1054fabdc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  func_0x0001085436d4(1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 3;
  func_0x0001085436d4(3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c6c20();
  if ((uVar2 < 0x16) && ((1L << (uVar2 & 0x3f) & 0x363f36U) != 0)) {
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c299f80();
    uVar9 = (uint)uVar2;
    if (((param_4 & 1) == 0) && (uVar9 != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf4b4c0();
      uVar9 = (uint)uVar7;
      _objc_release(uVar6);
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010c0c6c20();
    uVar1 = 0x9c080U >> (ulong)((uint)uVar2 & 0x1f) ^ 1;
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf4b4c0();
    uVar9 = (0x13 < uVar2 | uVar1) & (uint)uVar8;
    if ((0x13 < uVar2 != 0 || (uVar1 & 1) != 0) || ((uVar8 & 1) == 0)) goto LAB_1054fad08;
    uVar8 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf4b4c0();
    uVar9 = (uint)uVar2;
  }
  _objc_release(uVar8);
LAB_1054fad08:
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1054fadb4; end: 1054fae3b; -[SCChatMediaFetcher _unarchiveStoryMediaId:mediaType:requestSource:completion:] */

void FUN_1054fadb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104c00();
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054fae3c; end: 1054faee7; -[SCChatMediaFetcher _storyThumbnailIsReadyForDisplay:mediaType:] */

undefined8 FUN_1054fae3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_4 - 1U < 0x15) {
    uVar3 = *(undefined8 *)(&UNK_10ddb1050 + (param_4 - 1U) * 8);
  }
  else {
    uVar3 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108543814(uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf4b4c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054faee8; end: 1054fb0e3; -[SCChatMediaFetcher _storyThumbnailImageForMediaId:mediaType:startTimestamp:requestSource:completion:] */

void FUN_1054faee8(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar2 = 3;
  if (param_5 == 7 || param_5 == 0) {
    uVar2 = 1;
  }
  _objc_initWeak(auStack_78,param_2);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1054fb0e4;
  puStack_b0 = &UNK_110892e18;
  _objc_copyWeak(auStack_98,auStack_78);
  _objc_retain(param_4);
  uStack_a8 = param_4;
  lStack_90 = param_5;
  uStack_88 = uVar2;
  uStack_80 = param_1;
  _objc_retain(param_7);
  ppuVar1 = &puStack_c8;
  uStack_a0 = param_7;
  _objc_retainBlock(ppuVar1);
  func_0x000108543814(uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010bec4f20();
  if ((int)puVar3 == 0) {
    puVar3 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
    puVar4 = param_2;
    func_0x00010be14ee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed0e60(param_2);
    _objc_release(puVar4);
  }
  else {
    func_0x00010be37100(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
  }
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054fb0e4; end: 1054fb18b;  */

void FUN_1054fb0e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_3 == 1) || (param_4 != 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be53420(*(undefined8 *)(param_1 + 0x48));
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3,param_4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054fb18c; end: 1054fb22b; -[SCChatMediaFetcher _scaleImage:toSize:cropCircularly:] */

void FUN_1054fb18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1054fb22c;
  puStack_58 = &UNK_110892e48;
  uStack_50 = param_5;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_6;
  _objc_retain(param_5);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fb22c; end: 1054fb35b;  */

void FUN_1054fb22c(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    pcVar6 = *(code **)(lVar4 + 0x10);
    lVar5 = 0;
  }
  else {
    dVar7 = *(double *)(param_1 + 0x28);
    dVar9 = *(double *)(param_1 + 0x30);
    dVar8 = *(double *)PTR__CGSizeZero_110347620;
    bVar2 = false;
    if ((dVar7 == dVar8) &&
       (bVar2 = false, !NAN(dVar9) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = dVar9 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if ((!bVar2) &&
       ((func_0x00010c23d0a0(param_2), dVar9 < dVar8 ||
        (dVar8 = *(double *)(param_1 + 0x28), func_0x00010c23d0a0(param_2), dVar8 < dVar7)))) {
      bVar1 = *(byte *)(param_1 + 0x38);
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      if ((bVar1 & 1) == 0) {
        func_0x00010c14e120();
        func_0x00010c14e6c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),dVar7,
                            param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf20c00();
        func_0x00010bf5c720(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2)
        ;
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar5,0);
      _objc_release(lVar5);
      goto LAB_1054fb344;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    pcVar6 = *(code **)(lVar4 + 0x10);
    param_3 = 0;
    lVar5 = param_2;
  }
  (*pcVar6)(lVar4,lVar5,param_3);
LAB_1054fb344:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054fb35c; end: 1054fb403; -[SCChatMediaFetcher _scaleImage:scale:maximumSize:] */

void FUN_1054fb35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1054fb404;
  puStack_68 = &UNK_110892e78;
  uStack_60 = param_6;
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  _objc_retain(param_6);
  _objc_retainBlock(&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fb404; end: 1054fb56b;  */

void FUN_1054fb404(undefined8 param_1,double param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar1 = *(long *)(param_3 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    lVar3 = 0;
  }
  else {
    dVar5 = *(double *)(param_3 + 0x28);
    if (dVar5 != 0.0) {
      func_0x00010c23d0a0(param_4);
      dVar8 = dVar5 * *(double *)(param_3 + 0x28);
      if (*(double *)(param_3 + 0x30) < dVar8) {
LAB_1054fb490:
        func_0x00010c23d0a0(param_4);
        dVar7 = *(double *)(param_3 + 0x38);
        dVar8 = 0.0;
        if (dVar5 != 0.0) {
          dVar6 = *(double *)(param_3 + 0x30);
          if (param_2 == 0.0) {
LAB_1054fb4b4:
            dVar7 = 0.0;
            dVar8 = dVar6;
          }
          else {
            dVar5 = dVar5 / param_2;
            if (dVar5 != 0.0) {
              if (dVar5 == INFINITY) goto LAB_1054fb4b4;
              dVar8 = dVar5 * dVar7;
              if (dVar6 <= dVar5 * dVar7) {
                dVar7 = dVar6 / dVar5;
                dVar8 = dVar6;
              }
            }
          }
        }
      }
      else {
        dVar7 = param_2 * *(double *)(param_3 + 0x28);
        dVar5 = *(double *)(param_3 + 0x38);
        if (dVar5 < dVar7) goto LAB_1054fb490;
      }
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      lVar3 = param_4;
      func_0x00010c14e6c0(dVar8,dVar7,dVar5,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),lVar3,0);
      _objc_release(lVar3);
      goto LAB_1054fb52c;
    }
    lVar1 = *(long *)(param_3 + 0x20);
    pcVar4 = *(code **)(lVar1 + 0x10);
    param_5 = 0;
    lVar3 = param_4;
  }
  (*pcVar4)(lVar1,lVar3,param_5);
LAB_1054fb52c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054fb56c; end: 1054fb603; -[SCChatMediaFetcher _scaleImage:toSize:] */

void FUN_1054fb56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054fb604;
  puStack_50 = &UNK_110892ea8;
  uStack_48 = param_5;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_5);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fb604; end: 1054fb70f;  */

void FUN_1054fb604(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar3 + 0x10);
    lVar4 = 0;
  }
  else {
    dVar6 = *(double *)(param_1 + 0x28);
    dVar8 = *(double *)(param_1 + 0x30);
    dVar7 = *(double *)PTR__CGSizeZero_110347620;
    bVar1 = false;
    if ((dVar6 == dVar7) &&
       (bVar1 = false, !NAN(dVar8) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = dVar8 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if ((!bVar1) &&
       ((func_0x00010c23d0a0(param_2), dVar8 < dVar7 ||
        (dVar7 = *(double *)(param_1 + 0x28), func_0x00010c23d0a0(param_2), dVar7 < dVar6)))) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      lVar4 = param_2;
      func_0x00010c14e6c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),dVar6,
                          param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar4,0);
      _objc_release(lVar4);
      goto LAB_1054fb6f8;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar3 + 0x10);
    param_3 = 0;
    lVar4 = param_2;
  }
  (*pcVar5)(lVar3,lVar4,param_3);
LAB_1054fb6f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054fb710; end: 1054fb7af; -[SCChatMediaFetcher _blendOverlayImage:toSize:isCircular:] */

void FUN_1054fb710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1054fb7b0;
  puStack_58 = &UNK_110892e48;
  uStack_50 = param_5;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_6;
  _objc_retain(param_5);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fb7b0; end: 1054fb86f;  */

void FUN_1054fb7b0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0,param_4);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    lVar2 = param_3;
    func_0x00010854478c(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),param_1,
                        0x3ff0000000000000,param_3,0,0,*(undefined1 *)(param_2 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),lVar2,0);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054fb870; end: 1054fb8cb; -[SCChatMediaFetcher _scaleOrBlend:image:toSize:isCircular:] */

void FUN_1054fb870(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) == 0) {
    func_0x00010be9a9e0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdd4c20(param_1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_1;
  _objc_retainBlock();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054fb8cc; end: 1054fb94f; -[SCChatMediaFetcher _validateGifData:] */

void FUN_1054fb8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054fb950;
  puStack_30 = &UNK_11085a668;
  uStack_28 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fb950; end: 1054fb9e7;  */

void FUN_1054fb950(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  else {
    puVar1 = PTR_PTR_1126b4690;
    _objc_alloc();
    func_0x00010bff2e60();
    if (puVar1 == (undefined *)0x0) {
      lVar2 = 0;
      uVar3 = 8;
    }
    else {
      uVar3 = 0;
      lVar2 = param_2;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2,uVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054fb9e8; end: 1054fba6b; -[SCChatMediaFetcher _mapDataToImage:] */

void FUN_1054fb9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054fba6c;
  puStack_30 = &UNK_110892ed8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fba6c; end: 1054fbaf3;  */

void FUN_1054fba6c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 8;
    if (puVar2 != (undefined *)0x0) {
      uVar1 = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001054fbaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  return;
}



/* Entry: 1054fbaf4; end: 1054fbb77; -[SCChatMediaFetcher _mapDataToImageWithLatency:] */

void FUN_1054fbaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054fbb78;
  puStack_30 = &UNK_110892ed8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fbb78; end: 1054fbc37;  */

void FUN_1054fbb78(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(0,*(long *)(param_2 + 0x20),0,param_5);
  }
  else {
    _CACurrentMediaTime();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    dVar3 = param_1;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 8;
    if (puVar2 != (undefined *)0x0) {
      uVar1 = 0;
    }
    _CACurrentMediaTime();
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))
              ((dVar3 - param_1) * 1000.0,*(long *)(param_2 + 0x20),puVar2,uVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054fbc38; end: 1054fbcbb; -[SCChatMediaFetcher _mapToDataWithMetrics:] */

void FUN_1054fbc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054fbcbc;
  puStack_30 = &UNK_110892ed8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fbcbc; end: 1054fbccb;  */

void FUN_1054fbcbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001054fbcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_4);
  return;
}


