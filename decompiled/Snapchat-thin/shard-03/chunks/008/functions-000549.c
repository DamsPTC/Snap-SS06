/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d69c50; end: 102d69ce7;  */

int FUN_102d69c50(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102d69ce8; end: 102d69d27;  */

void FUN_102d69ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f13430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db4791c;
  func_0x000107c61520(&DAT_10db4791c,&UNK_1105cb458);
  puRam0000000112f13430 = puVar1;
  return;
}



/* Entry: 102d69d28; end: 102d69d2f;  */

undefined8 * FUN_102d69d28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 102d69d30; end: 102d69da7; +[SCCameraReplyCameraAnimationsExperiment areReplyCameraPresentationAnimationsDisabledWithCircumstanceEngine:] */

undefined8 FUN_102d69d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f10bdf0);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return uVar2;
}



/* Entry: 102d69da8; end: 102d69e1f; +[SCCameraReplyCameraAnimationsExperiment areLegacyReplyCameraPresentationAnimationsDisabledWithCircumstanceEngine:] */

undefined8 FUN_102d69da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f10be30);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return uVar2;
}



/* Entry: 102d69e20; end: 102d69e3f;  */

void FUN_102d69e20(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3150);
  return;
}



/* Entry: 102d69e40; end: 102d69e7b; -[SCCameraReplyCameraAnimationsExperiment init] */

void FUN_102d69e40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102d69e20();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d69e7c; end: 102d69eab;  */

void FUN_102d69e7c(void)

{
  FUN_102d69e20();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d69eac; end: 102d69eaf; -[SCCameraReplyCameraAnimationsExperiment .cxx_destruct] */

void FUN_102d69eac(void)

{
  return;
}



/* Entry: 102d69eb0; end: 102d69f53; -[SCReplyCameraPreviewWarmupSchedulerImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d69eb0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f13460;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(param_1 + lVar2) = uVar4;
  *(undefined8 *)(param_1 + _DAT_112f13468) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f13470);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + _DAT_112f13478) = 0;
  *(undefined1 *)(param_1 + _DAT_112f13480) = 0;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d69f54; end: 102d69f97;  */

void FUN_102d69f54(void)

{
  func_0x000107c614f0();
  FUN_102d69f98();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d69f98; end: 102d6a033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d69f98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar3 = _DAT_112f13468;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f13468);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c6157c(lVar5);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar5);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61574(uVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f13470);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar4,uVar2);
  func_0x000100c82230();
  return;
}



/* Entry: 102d6a034; end: 102d6a08b; -[SCReplyCameraPreviewWarmupSchedulerImpl dealloc] */

void FUN_102d6a034(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_102d69f98();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d6a08c; end: 102d6a0d7; -[SCReplyCameraPreviewWarmupSchedulerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d6a0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d6a0ac) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6a08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f13460));
  return;
}



/* Entry: 102d6a0d8; end: 102d6a0ef;  */

void FUN_102d6a0d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d6a0f0,0,0);
  return;
}



/* Entry: 102d6a0f0; end: 102d6a1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6a0f0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    pcVar1 = *(code **)(lVar2 + _DAT_112f13470);
    if (pcVar1 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar3 = ((undefined8 *)(lVar2 + _DAT_112f13470))[1];
      func_0x000100b64c10(pcVar1,uVar3);
      func_0x000107c61170(lVar2);
      (*pcVar1)();
      func_0x00010058d43c(pcVar1,uVar3);
    }
  }
  lVar2 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x28,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102d69f98();
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102d6a1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102d6a1c0; end: 102d6a1eb;  */

void FUN_102d6a1c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c49820();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102d6a1ec; end: 102d6a363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6a1ec(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + _DAT_112f13478) = 1;
      func_0x000107c61170();
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    if ((*(char *)(lVar1 + _DAT_112f13478) == '\x01') &&
       (*(char *)(lVar1 + _DAT_112f13480) == '\x01')) {
      puVar2 = &UNK_1105cb638;
      func_0x000107c613fc(&UNK_1105cb638,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      uVar3 = 0xc1;
      func_0x0001001ca524(0xc1,0,0x14,2,0,0,&UNK_10db47b48,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112f13468);
      *(undefined8 *)(lVar1 + _DAT_112f13468) = uVar3;
      func_0x000107c61574(uVar4);
      func_0x000100c82230();
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    FUN_102d69f98();
  }
  func_0x000107c61170();
  return;
}



/* Entry: 102d6a364; end: 102d6a3cf; -[SCReplyCameraPreviewWarmupSchedulerImpl startObservingToSnappableCompleteWithObservable:] */

/* WARNING: Possible PIC construction at 0x000102d6a3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d6a3bc) */

void FUN_102d6a364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d6a3d0(param_3,FUN_102d6a1c0,PTR___sSiN_11034deb0,FUN_102d6a1ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d6a3d0; end: 102d6a4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6a3d0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    func_0x000107c61174(param_1);
    lVar1 = param_1;
    func_0x0001000b637c();
    func_0x0001000d5158(param_2,0,param_3);
    func_0x000107c61574(lVar1);
    puVar2 = &UNK_1105cb638;
    func_0x000107c613fc(&UNK_1105cb638,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar4 = puVar2;
    (**(code **)(*param_2 + 0x60))(param_4);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar2);
    uVar3 = param_4;
    func_0x000107c614f0(param_4);
    (**(code **)(puVar4 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f13460),uVar3,puVar4);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
    return;
  }
  return;
}



/* Entry: 102d6a4ec; end: 102d6a513;  */

void FUN_102d6a4ec(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6a514; end: 102d6a65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6a514(char *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + _DAT_112f13480) = 1;
      func_0x000107c61170();
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      if ((*(char *)(lVar1 + _DAT_112f13478) == '\x01') &&
         (*(char *)(lVar1 + _DAT_112f13480) == '\x01')) {
        puVar2 = &UNK_1105cb638;
        func_0x000107c613fc(&UNK_1105cb638,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,lVar1);
        uVar3 = 0xc1;
        func_0x0001001ca524(0xc1,0,0x14,2,0,0,&UNK_10db47b40,puVar2,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar2);
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112f13468);
        *(undefined8 *)(lVar1 + _DAT_112f13468) = uVar3;
        func_0x000107c61574(uVar4);
        func_0x000100c82230();
      }
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 102d6a660; end: 102d6a6cb; -[SCReplyCameraPreviewWarmupSchedulerImpl startObservingLensActiveStateWithObservable:] */

/* WARNING: Possible PIC construction at 0x000102d6a6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d6a6b8) */

void FUN_102d6a660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d6a3d0(param_3,FUN_102d6a4ec,PTR___sSbN_11034dd40,FUN_102d6a514);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d6a6cc; end: 102d6a6eb;  */

void FUN_102d6a6cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3200);
  return;
}



/* Entry: 102d6a6ec; end: 102d6a76b; -[SCReplyCameraPreviewWarmupSchedulerImpl configurePreviewWarmupInStartupWorkflowWithPreviewWarmupBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6a6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  puVar4 = &UNK_1105cb660;
  func_0x000107c613fc(&UNK_1105cb660,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f13470);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_102d6a76c;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d6a76c; end: 102d6a777;  */

void FUN_102d6a76c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d6a774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102d6a778; end: 102d6a843;  */

void FUN_102d6a778(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102d6a844;
  plVar1[8] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102d6a0f0,0,0);
  return;
}



/* Entry: 102d6a844; end: 102d6a847;  */

void FUN_102d6a844(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d6a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d6a848; end: 102d6a8bf; +[SCPlanStickerConfigurationHelpers cofEnabled:] */

undefined8 FUN_102d6a848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f10be70);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102d6a8c0; end: 102d6a937; +[SCPlanStickerConfigurationHelpers directInviteEnabled:] */

undefined8 FUN_102d6a8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f10be90);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102d6a938; end: 102d6a96f; +[SCPlanStickerConfigurationHelpers enabledForContextLaunchSource:directInviteEnabled:] */

uint FUN_102d6a938(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_3 < 0x23) {
    uVar1 = (uint)(0x2fffffe07 >> (param_3 & 0x3f));
  }
  if (param_4 != 0) {
    uVar1 = (uint)(param_3 - 0xf < 2);
  }
  return uVar1 & 1;
}



/* Entry: 102d6a970; end: 102d6a9ab; -[SCPlanStickerConfigurationHelpers init] */

void FUN_102d6a970(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d6a9ac; end: 102d6a9df;  */

void FUN_102d6a9ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d6a9e0; end: 102d6a9e3; -[SCPlanStickerConfigurationHelpers .cxx_destruct] */

void FUN_102d6a9e0(void)

{
  return;
}



/* Entry: 102d6a9e4; end: 102d6aa03;  */

void FUN_102d6a9e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a32d8);
  return;
}



/* Entry: 102d6aa04; end: 102d6aa73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102d6aa04(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112f134e0) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 102d6aa74; end: 102d6aa83; -[SCContextMemoriesConfigurationServices configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6aa74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f134e0));
  return;
}



/* Entry: 102d6aa84; end: 102d6aae3; -[SCContextMemoriesConfigurationServices init] */

void FUN_102d6aa84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextMemoriesConfigurationServices.SCContextMemoriesConfigurationServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d6aab0);
  (*pcVar1)();
}



/* Entry: 102d6aae4; end: 102d6ab03; -[SCContextMemoriesConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6aae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f134e0));
  return;
}



/* Entry: 102d6ab04; end: 102d6ab13; -[SCContextStoryPlaybackScope target] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6ab04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f13510));
  return;
}



/* Entry: 102d6ab14; end: 102d6ab1f; -[SCContextStoryPlaybackScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6ab14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f13518;
  func_0x000107c61428(param_1 + _DAT_112f13518,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d6ab20; end: 102d6ab2b; -[SCContextStoryPlaybackScope setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6ab20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f13518;
  func_0x000107c61428(param_1 + _DAT_112f13518,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d6ab2c; end: 102d6ab37; -[SCContextStoryPlaybackScope baseViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6ab2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f13520;
  func_0x000107c61428(param_1 + _DAT_112f13520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d6ab38; end: 102d6ab43; -[SCContextStoryPlaybackScope setBaseViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6ab38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f13520;
  func_0x000107c61428(param_1 + _DAT_112f13520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d6ab44; end: 102d6ab4f; -[SCContextStoryPlaybackScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6ab44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f13528;
  func_0x000107c61428(param_1 + _DAT_112f13528,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d6ab50; end: 102d6ab93;  */

void FUN_102d6ab50(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d6ab94; end: 102d6ab9f; -[SCContextStoryPlaybackScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6ab94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f13528;
  func_0x000107c61428(param_1 + _DAT_112f13528,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d6aba0; end: 102d6abf3;  */

void FUN_102d6aba0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d6abf4; end: 102d6ad47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d6abf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f13518;
  func_0x000107c61614(unaff_x20 + _DAT_112f13518,0);
  lVar3 = _DAT_112f13520;
  func_0x000107c61614(unaff_x20 + _DAT_112f13520,0);
  lVar4 = _DAT_112f13528;
  func_0x000107c61614(unaff_x20 + _DAT_112f13528,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f13510) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar5 = auStack_b8;
  func_0x000107c61154(puVar5,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar5;
}



/* Entry: 102d6ad48; end: 102d6adf3; -[SCContextStoryPlaybackScope initWithTarget:baseView:baseViewController:delegate:] */

undefined8
FUN_102d6ad48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar3 = param_3;
  FUN_102d6aeac(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_6);
  return uVar3;
}



/* Entry: 102d6adf4; end: 102d6ae53; -[SCContextStoryPlaybackScope init] */

void FUN_102d6adf4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextStoryPlaybackScope.SCContextStoryPlaybackScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d6ae20);
  (*pcVar1)();
}



/* Entry: 102d6ae54; end: 102d6aeab; -[SCContextStoryPlaybackScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d6ae90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d6ae94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d6ae54(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f13510));
  func_0x000107c61610(param_1 + _DAT_112f13518);
  param_1 = param_1 + _DAT_112f13520;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d6aeac; end: 102d6afcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6aeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f13518;
  func_0x000107c61614(unaff_x20 + _DAT_112f13518,0);
  lVar3 = _DAT_112f13520;
  func_0x000107c61614(unaff_x20 + _DAT_112f13520,0);
  lVar4 = _DAT_112f13528;
  func_0x000107c61614(unaff_x20 + _DAT_112f13528,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f13510) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffff48,puVar1);
  return;
}



/* Entry: 102d6afd0; end: 102d6b1a7;  */

void FUN_102d6afd0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102d6b1a8; end: 102d6b253;  */

void FUN_102d6b1a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d6b254; end: 102d6b293;  */

void FUN_102d6b254(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6b294; end: 102d6b2ef; -[SCContextStoryPlaybackTarget description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6b294(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112f13558) == '\x01') {
    if (*(long *)(param_1 + _DAT_112f13568) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d6b2bc);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112f13560 + 8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d6b2f0);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d6b2f0; end: 102d6b337; -[SCContextStoryPlaybackTarget init] */

void FUN_102d6b2f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCContextStoryPlaybackScope/SCContextStoryPlaybackTargetWrapper.swift",0x45,2
                      ,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d6b338);
  (*pcVar1)();
}



/* Entry: 102d6b338; end: 102d6b33b; -[SCContextStoryPlaybackTarget copyWithZone:] */

void FUN_102d6b338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d6b33c; end: 102d6b3c3; +[SCContextStoryPlaybackTarget userWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6b33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f13558) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f13560);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar2 + _DAT_112f13568) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d6b3c4; end: 102d6b43f; +[SCContextStoryPlaybackTarget storyWithSummaryInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6b3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar3 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112f13558) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f13560);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112f13568) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d6b440; end: 102d6b4f3; -[SCContextStoryPlaybackTarget matchUser:story:] */

/* WARNING: Possible PIC construction at 0x000102d6b4d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d6b4d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6b440(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_112f13558) != '\x01') {
    lVar2 = ((undefined8 *)(param_1 + _DAT_112f13560))[1];
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112f13560);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar3,lVar2);
      (**(code **)(param_3 + 0x10))(param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d6b4f4);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + _DAT_112f13568) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102d6b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d6b4f0);
  (*pcVar1)();
}



/* Entry: 102d6b4f4; end: 102d6b527;  */

void FUN_102d6b4f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d6b528; end: 102d6b563; -[SCContextStoryPlaybackTarget .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d6b528(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f13560 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f13568));
  return;
}



/* Entry: 102d6b564; end: 102d6b583;  */

void FUN_102d6b564(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3520);
  return;
}



/* Entry: 102d6b584; end: 102d6b6eb;  */

int FUN_102d6b584(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d6b600;
        goto LAB_102d6b5e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d6b5e4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102d6b600:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d6b6ec; end: 102d6b72b;  */

void FUN_102d6b6ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f13598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db47c84;
  func_0x000107c61520(&UNK_10db47c84,&UNK_1105cb930);
  puRam0000000112f13598 = puVar1;
  return;
}



/* Entry: 102d6b72c; end: 102d6b8d3;  */

void FUN_102d6b72c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100322f0c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_102d8ab90(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000102d8a770();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_102d8a7b8();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102d6b8d4; end: 102d6b8e3;  */

void FUN_102d6b8d4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100322f0c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_102d8ab90(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x000102d8a770();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_102d8a7b8();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102d6b8e4; end: 102d6ba2f;  */

long FUN_102d6b8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_102d8ab90(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102d8a770();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102d8a7b8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 102d6ba30; end: 102d6ba7b;  */

void FUN_102d6ba30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d6ba7c; end: 102d6bacf;  */

void FUN_102d6ba7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6bad0; end: 102d6bb1b;  */

void FUN_102d6bad0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6bb1c; end: 102d6bb6f;  */

void FUN_102d6bb1c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d6bb70; end: 102d6bd57;  */

void FUN_102d6bb70(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010036e2e4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  FUN_102d76a0c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar4 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar4;
  func_0x000102d76640();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x000102d76688();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102d6bd58; end: 102d6bd67;  */

void FUN_102d6bd58(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010036e2e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x18) = puVar6;
  FUN_102d76a0c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar5;
  func_0x000102d76640();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x000102d76688();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102d6bd68; end: 102d6beef;  */

long FUN_102d6bd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_102d76a0c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102d76640();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  func_0x000102d76688();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  return unaff_x20;
}



/* Entry: 102d6bef0; end: 102d6bf3b;  */

void FUN_102d6bef0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d6bf3c; end: 102d6bf8f;  */

void FUN_102d6bf3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6bf90; end: 102d6bfdb;  */

void FUN_102d6bf90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6bfdc; end: 102d6c02f;  */

void FUN_102d6bfdc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d6c030; end: 102d6c0c3;  */

void FUN_102d6c030(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010032bf18();
  func_0x000107c613fc();
  FUN_102d6c124(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102d6c0c4; end: 102d6c0cf;  */

void FUN_102d6c0c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010032bf18();
  func_0x000107c613fc();
  FUN_102d6c124(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6c0d0; end: 102d6c123;  */

undefined8 FUN_102d6c0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102d6c124(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102d6c124; end: 102d6c2ff;  */

void FUN_102d6c124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126ac3e8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102d6c300; end: 102d6c33b;  */

void FUN_102d6c300(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d6c33c; end: 102d6c38f;  */

void FUN_102d6c33c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6c390; end: 102d6c397;  */

void FUN_102d6c390(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6c398; end: 102d6c3e7;  */

undefined8 FUN_102d6c398(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d6c3e8; end: 102d6c42b;  */

undefined1  [16] FUN_102d6c3e8(void)

{
  return ZEXT816(0x1105cbc48);
}



/* Entry: 102d6c42c; end: 102d6c453;  */

void FUN_102d6c42c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d6c454; end: 102d6c45b;  */

undefined8 FUN_102d6c454(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102d6c45c; end: 102d6c4cf;  */

void FUN_102d6c45c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010032c604();
  func_0x000107c613fc();
  FUN_102d6c524(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 102d6c4d0; end: 102d6c4d7;  */

void FUN_102d6c4d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x00010032c604();
  func_0x000107c613fc();
  FUN_102d6c524(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6c4d8; end: 102d6c523;  */

undefined8 FUN_102d6c4d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102d6c524(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102d6c524; end: 102d6c67b;  */

void FUN_102d6c524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ac3f0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 102d6c67c; end: 102d6c6af;  */

void FUN_102d6c67c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d6c6b0; end: 102d6c703;  */

void FUN_102d6c6b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6c704; end: 102d6c70b;  */

void FUN_102d6c704(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d6c70c; end: 102d6c75b;  */

undefined8 FUN_102d6c70c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


