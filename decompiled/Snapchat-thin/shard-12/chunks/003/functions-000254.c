/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090534e4; end: 109053513; -[SCManagedVideoFrameSamplerImpl setCiContext:] */

void FUN_1090534e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109053514; end: 109053543; -[SCManagedVideoFrameSamplerImpl .cxx_destruct] */

void FUN_109053514(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109053544; end: 1090535ff; -[SCManagedVideoMusicAVSyncer init] */

undefined1 * FUN_109053544(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700088;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eee80();
    if (0.004999999888241291 < param_1) {
      func_0x00010c0eee80(puVar2);
      dVar3 = param_1;
      func_0x00010bdc1740(puVar2);
      *(double *)((long)puVar1 + 0x10) = param_1 + dVar3;
    }
    dVar3 = -1.0;
    func_0x00010c1ca060(puVar1);
    _CACurrentMediaTime();
    *(double *)((long)puVar1 + 8) = dVar3 + 1.0;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109053600; end: 109053667; -[SCManagedVideoMusicAVSyncer shouldSkipVideoFrameWithPresentationTime:] */

bool FUN_109053600(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 8);
  if (param_1 <= dVar2) {
    func_0x00010c0d35c0();
    if (dVar2 <= 0.0) {
      bVar1 = true;
    }
    else {
      func_0x00010c0d35c0(param_2);
      bVar1 = param_1 < dVar2 + *(double *)(param_2 + 0x10);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 109053668; end: 10905369f; -[SCManagedVideoMusicAVSyncer presentationTimeForFrame:] */

double FUN_109053668(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c0d35c0();
  return (param_1 - dVar1) - *(double *)(param_2 + 0x10);
}



/* Entry: 1090536a0; end: 1090536a7; -[SCManagedVideoMusicAVSyncer musicPlayerReadyTimestamp] */

undefined8 FUN_1090536a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090536a8; end: 1090536af; -[SCManagedVideoMusicAVSyncer setMusicPlayerReadyTimestamp:] */

void FUN_1090536a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1090536b0; end: 1090536d3; +[SCMicInputDescription nameForMicrophoneMode:] */

undefined ** FUN_1090536b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    return (undefined **)(&PTR_PTR_110ad64f0)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1090536d4; end: 109053887; +[SCMicInputDescription commaJoinedBuiltInMicDataSourceNamesFromInputs:] */

void FUN_1090536d4(undefined8 param_1,undefined **param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      lVar5 = 0;
LAB_109053838:
      _objc_release(param_3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf645d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dataSourceName_1125b6b18);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      lVar6 = *(long *)(lVar7 * 8);
      lVar2 = lVar6;
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      if ((int)lVar3 != 0) {
        func_0x00010bf646e0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = &PTR___NSConcreteGlobalBlock_110ad64d0;
        lVar1 = lVar6;
        func_0x000107c31908();
        _objc_release(lVar6);
        lVar5 = lVar1;
        func_0x00010bf529e0();
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = lVar1;
          func_0x00010bf446e0(lVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar1);
        goto LAB_109053838;
      }
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 109053888; end: 10905388f;  */

void FUN_109053888(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf645d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dataSourceName_1125b6b18);
  return;
}



/* Entry: 109053890; end: 109053923; -[SCTimedTask initWithTargetTime:task:] */

undefined1 *
FUN_109053890(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3[1];
    uVar3 = *param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    uVar3 = param_4;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109053924; end: 109053937; -[SCTimedTask targetTime] */

void FUN_109053924(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 109053938; end: 10905394b; -[SCTimedTask setTargetTime:] */

void FUN_109053938(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[2];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 10905394c; end: 109053953; -[SCTimedTask task] */

undefined8 FUN_10905394c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109053954; end: 10905395b; -[SCTimedTask setTask:] */

void FUN_109053954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10905395c; end: 109053967; -[SCTimedTask .cxx_destruct] */

void FUN_10905395c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109053968; end: 109053a07; -[SCBrightnessSettleDetector init] */

undefined1 * FUN_109053968(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700098;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = 6;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    do {
      func_0x00010befa120(*(undefined8 *)((long)puVar1 + 0x20));
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    func_0x00010c137fe0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109053a08; end: 109053aaf; -[SCBrightnessSettleDetector reset] */

void FUN_109053a08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1fe620(param_1,param_2,0);
  func_0x00010c19f640(param_1,param_2,0);
  func_0x00010c194060(param_1,param_2,0);
  func_0x00010c194040(0,param_1);
  func_0x00010c1ee460(param_1,param_2,0);
  func_0x00010c1ee300(param_1,param_2,0);
  lVar2 = 0;
  do {
    uVar1 = param_1;
    func_0x00010c140ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0();
    _objc_release(uVar1);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 6);
  return;
}



/* Entry: 109053ab0; end: 109053d4b; -[SCBrightnessSettleDetector observeEV:] */

/* WARNING: Possible PIC construction at 0x000109053ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109053d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109053ad4) */
/* WARNING: Removing unreachable block (ram,0x000109053af4) */
/* WARNING: Removing unreachable block (ram,0x000109053b08) */
/* WARNING: Removing unreachable block (ram,0x000109053b0c) */
/* WARNING: Removing unreachable block (ram,0x000109053b10) */
/* WARNING: Removing unreachable block (ram,0x000109053b14) */
/* WARNING: Removing unreachable block (ram,0x000109053b18) */
/* WARNING: Removing unreachable block (ram,0x000109053b1c) */
/* WARNING: Removing unreachable block (ram,0x000109053b20) */
/* WARNING: Removing unreachable block (ram,0x000109053b24) */
/* WARNING: Removing unreachable block (ram,0x000109053b6c) */
/* WARNING: Removing unreachable block (ram,0x000109053b44) */
/* WARNING: Removing unreachable block (ram,0x000109053b84) */
/* WARNING: Removing unreachable block (ram,0x000109053c20) */
/* WARNING: Removing unreachable block (ram,0x000109053c34) */
/* WARNING: Removing unreachable block (ram,0x000109053c44) */
/* WARNING: Removing unreachable block (ram,0x000109053c8c) */
/* WARNING: Removing unreachable block (ram,0x000109053ccc) */
/* WARNING: Removing unreachable block (ram,0x000109053cd0) */
/* WARNING: Removing unreachable block (ram,0x000109053cd4) */
/* WARNING: Removing unreachable block (ram,0x000109053cd8) */
/* WARNING: Removing unreachable block (ram,0x000109053cdc) */
/* WARNING: Removing unreachable block (ram,0x000109053ce8) */
/* WARNING: Removing unreachable block (ram,0x000109053cf4) */
/* WARNING: Removing unreachable block (ram,0x000109053cf8) */
/* WARNING: Removing unreachable block (ram,0x000109053cfc) */
/* WARNING: Removing unreachable block (ram,0x000109053d08) */
/* WARNING: Removing unreachable block (ram,0x000109053ad8) */
/* WARNING: Removing unreachable block (ram,0x000109053d10) */
/* WARNING: Removing unreachable block (ram,0x000109053d14) */
/* WARNING: Removing unreachable block (ram,0x000109053d24) */
/* WARNING: Removing unreachable block (ram,0x000109053d30) */

void FUN_109053ab0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c228390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_settled_112667b08);
  return;
}



/* Entry: 109053d4c; end: 109053d57; -[SCBrightnessSettleDetector settled] */

byte FUN_109053d4c(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 109053d58; end: 109053d5f; -[SCBrightnessSettleDetector setSettled:] */

void FUN_109053d58(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 109053d60; end: 109053d67; -[SCBrightnessSettleDetector framesSeen] */

undefined8 FUN_109053d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109053d68; end: 109053d6f; -[SCBrightnessSettleDetector setFramesSeen:] */

void FUN_109053d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 109053d70; end: 109053d77; -[SCBrightnessSettleDetector emaPrimed] */

undefined1 FUN_109053d70(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 109053d78; end: 109053d7f; -[SCBrightnessSettleDetector setEmaPrimed:] */

void FUN_109053d78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 109053d80; end: 109053d87; -[SCBrightnessSettleDetector ema] */

undefined8 FUN_109053d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109053d88; end: 109053d8f; -[SCBrightnessSettleDetector setEma:] */

void FUN_109053d88(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 109053d90; end: 109053d97; -[SCBrightnessSettleDetector ring] */

undefined8 FUN_109053d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109053d98; end: 109053dc7; -[SCBrightnessSettleDetector setRing:] */

void FUN_109053d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109053dc8; end: 109053dcf; -[SCBrightnessSettleDetector ringIndex] */

undefined8 FUN_109053dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109053dd0; end: 109053dd7; -[SCBrightnessSettleDetector setRingIndex:] */

void FUN_109053dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 109053dd8; end: 109053ddf; -[SCBrightnessSettleDetector ringCount] */

undefined8 FUN_109053dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109053de0; end: 109053de7; -[SCBrightnessSettleDetector setRingCount:] */

void FUN_109053de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 109053de8; end: 109053df3; -[SCBrightnessSettleDetector .cxx_destruct] */

void FUN_109053de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 109053df4; end: 109053f67;  */

undefined1  [16] FUN_109053df4(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auStack_a0 [16];
  double dStack_90;
  double dStack_88;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010c279200(param_3,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = lVar4;
  dVar7 = (double)func_0x00010c0d5d20();
  if (dVar7 == 0.0) {
    if ((int)param_4 == 0) goto LAB_109053ef4;
  }
  else {
    lVar5 = lVar4;
    func_0x00010c0d5d20();
    if (((int)param_4 == 0) || (param_2 != 0.0)) goto LAB_109053ef4;
  }
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_109053f68;
  puStack_50 = &UNK_110842e18;
  lStack_48 = lVar5;
  _objc_retain(lVar5);
  func_0x00010c09c640(lVar4);
  uVar6 = 0;
  _dispatch_time(0,400000000);
  _dispatch_group_wait(lVar5,uVar6);
  _objc_release(lStack_48);
  _objc_release(lVar5);
LAB_109053ef4:
  dVar7 = (double)func_0x00010c0d5d20(lVar4);
  if (lVar4 == 0) {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    dStack_90 = 0.0;
    dStack_88 = 0.0;
  }
  else {
    func_0x00010c106f40(auStack_a0,lVar4);
    uVar19 = (undefined1)auStack_a0._8_8_;
    uVar20 = SUB81(auStack_a0._8_8_,1);
    uVar21 = SUB81(auStack_a0._8_8_,2);
    uVar22 = SUB81(auStack_a0._8_8_,3);
    uVar23 = SUB81(auStack_a0._8_8_,4);
    uVar24 = SUB81(auStack_a0._8_8_,5);
    uVar25 = SUB81(auStack_a0._8_8_,6);
    uVar26 = SUB81(auStack_a0._8_8_,7);
    uVar11 = (undefined1)auStack_a0._0_8_;
    uVar12 = SUB81(auStack_a0._0_8_,1);
    uVar13 = SUB81(auStack_a0._0_8_,2);
    uVar14 = SUB81(auStack_a0._0_8_,3);
    uVar15 = SUB81(auStack_a0._0_8_,4);
    uVar16 = SUB81(auStack_a0._0_8_,5);
    uVar17 = SUB81(auStack_a0._0_8_,6);
    uVar18 = SUB81(auStack_a0._0_8_,7);
  }
  dVar9 = dStack_90 * param_2 +
          (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))))) *
          dVar7;
  dVar10 = dStack_88 * param_2 +
           (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19))))))) *
           dVar7;
  auVar8._0_8_ = -(ulong)(dVar9 < 0.0);
  auVar8._8_8_ = -(ulong)(dVar10 < 0.0);
  dVar7 = -dVar10;
  auVar1._8_8_ = dVar10;
  auVar1._0_8_ = dVar9;
  auVar3[8] = SUB81(dVar7,0);
  auVar3._0_8_ = -dVar9;
  auVar3[9] = (char)((ulong)dVar7 >> 8);
  auVar3[10] = (char)((ulong)dVar7 >> 0x10);
  auVar3[0xb] = (char)((ulong)dVar7 >> 0x18);
  auVar3[0xc] = (char)((ulong)dVar7 >> 0x20);
  auVar3[0xd] = (char)((ulong)dVar7 >> 0x28);
  auVar3[0xe] = (char)((ulong)dVar7 >> 0x30);
  auVar3[0xf] = (char)((ulong)dVar7 >> 0x38);
  auVar2._8_8_ = dVar10;
  auVar2._0_8_ = dVar9;
  _objc_release(lVar4);
  return auVar2 ^ (auVar1 ^ auVar3) & auVar8;
}



/* Entry: 109053f68; end: 109053f6f;  */

void FUN_109053f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109053f70; end: 1090541d7;  */

void FUN_109053f70(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = param_1;
  func_0x00010bf3ec40(param_1);
  func_0x00010c0df780(puVar3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar1 = ppuVar2;
  func_0x00010bf3ec40(ppuVar2);
  func_0x00010c0df780(puVar4,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110ddd478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010bf3ec40(param_1);
    func_0x00010c0df780(puVar3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4,param_2,puVar6,&PTR____CFConstantStringClassReference_110f1db78);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
    func_0x00010bf3ec40(ppuVar2);
    func_0x00010c0df780(puVar3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4,param_2,puVar6,&PTR____CFConstantStringClassReference_110f1db98);
    _objc_release(puVar6);
    _objc_release(puVar3);
    ppuVar7 = ppuVar2;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7;
    }
    func_0x00010c1d0640(puVar4,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110f1dbb8);
    _objc_release(ppuVar7);
  }
  puVar3 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090541d8; end: 10905434f;  */

void FUN_1090541d8(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  _objc_retain();
  ppuVar1 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0d3c80();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar2);
      ppuVar3 = ppuVar2;
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar3;
    func_0x00010c0e00e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f1dbd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar1 = param_1;
      func_0x00010bf3ec40(param_1);
      func_0x00010c0df780(puVar4,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f1dbd8);
      _objc_release(puVar4);
    }
    ppuVar1 = ppuVar3;
    func_0x00010c0e00e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110ee3858);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = param_1;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2;
      }
      func_0x00010c1d0640(ppuVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110ee3858);
      _objc_release(ppuVar2);
    }
    ppuVar1 = ppuVar3;
    func_0x00010bf51e00(ppuVar3);
    _objc_release(ppuVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 109054350; end: 1090543ef; -[SCSnapVideoFrameRawData initWithFrameNum:width:height:bytesPerRow:rawLumaData:] */

undefined1 *
FUN_109054350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127000a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1090543f0; end: 109054413; -[SCSnapVideoFrameRawData copyWithZone:] */

undefined8 FUN_1090543f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109054414; end: 1090544eb; -[SCSnapVideoFrameRawData initWithCoder:] */

undefined1 * FUN_109054414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127000a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090544ec; end: 109054587; -[SCSnapVideoFrameRawData encodeWithCoder:] */

void FUN_1090544ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f1dbf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110db1238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110db1258);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f1dc18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f1dc38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109054588; end: 10905458f; -[SCSnapVideoFrameRawData preferFasterCoding] */

undefined8 FUN_109054588(void)

{
  return 1;
}



/* Entry: 109054590; end: 109054603; -[SCSnapVideoFrameRawData encodeWithFasterCoder:] */

void FUN_109054590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf93100(param_3,param_2,uVar1);
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109054604; end: 10905468f; -[SCSnapVideoFrameRawData decodeWithFasterDecoder:] */

void FUN_109054604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67140();
  _objc_release(param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 109054690; end: 1090546f3; -[SCSnapVideoFrameRawData setObject:forUInt64Key:] */

void FUN_109054690(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0x7db9451988bb64) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090546f4; end: 10905478f; -[SCSnapVideoFrameRawData setSInt64:forUInt64Key:] */

void FUN_1090546f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0x62027b31ccb62b) {
    if (param_4 == 0x1c020b758ca80a) {
      lVar1 = 0x10;
    }
    else {
      if (param_4 != 0x5b456500fe9ca7) {
        return;
      }
      lVar1 = 8;
    }
  }
  else if (param_4 == 0x62027b31ccb62b) {
    lVar1 = 0x20;
  }
  else {
    if (param_4 != 0xa668c821696c25) {
      return;
    }
    lVar1 = 0x18;
  }
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 109054790; end: 1090547a3; +[SCSnapVideoFrameRawData fasterCodingVersion] */

undefined8 FUN_109054790(void)

{
  return 0x2c3914994b002cfb;
}



/* Entry: 1090547a4; end: 1090547af; +[SCSnapVideoFrameRawData fasterCodingKeys] */

undefined8 FUN_1090547a4(void)

{
  return 0x1132c0a58;
}



/* Entry: 1090547b0; end: 109054867; -[SCSnapVideoFrameRawData isEqual:] */

bool FUN_1090547b0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x113730790,0x113730798,5,1);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    if (((*(long *)(param_3 + 8) == *(long *)(param_1 + 8)) &&
        (*(long *)(param_3 + 0x10) == *(long *)(param_1 + 0x10))) &&
       (*(long *)(param_3 + 0x18) == *(long *)(param_1 + 0x18))) {
      bVar1 = *(long *)(param_3 + 0x20) == *(long *)(param_1 + 0x20);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109054868; end: 10905490f; -[SCSnapVideoFrameRawData hash] */

ulong FUN_109054868(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ulong *)(param_1 + 8);
  auStack_50[2] = *(undefined8 *)(param_1 + 0x18);
  auStack_50[1] = *(undefined8 *)(param_1 + 0x10);
  auStack_50[3] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfde980();
  auStack_50[4] = lVar1;
  lVar2 = 8;
  do {
    uVar3 = *(ulong *)((long)auStack_50 + lVar2) | uVar3 << 0x20;
    uVar3 = ~uVar3 + uVar3 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar3;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar1 + 8);
}



/* Entry: 109054910; end: 109054917; -[SCSnapVideoFrameRawData frameNum] */

undefined8 FUN_109054910(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109054918; end: 10905491f; -[SCSnapVideoFrameRawData width] */

undefined8 FUN_109054918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109054920; end: 109054927; -[SCSnapVideoFrameRawData height] */

undefined8 FUN_109054920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109054928; end: 10905492f; -[SCSnapVideoFrameRawData bytesPerRow] */

undefined8 FUN_109054928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109054930; end: 109054937; -[SCSnapVideoFrameRawData rawLumaData] */

undefined8 FUN_109054930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109054938; end: 109054943; -[SCSnapVideoFrameRawData .cxx_destruct] */

void FUN_109054938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 109054944; end: 109054aaf; +[SCVideoContentComplexityAnalyzer deriveVideoContentComplexityWithVideoFrames:videoAsset:keyFrameInterval:] */

undefined8
FUN_109054944(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    uVar5 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dd148;
    func_0x00010c29a220(PTR_PTR_1126dd148,param_3,param_4,param_5,0,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    if ((puVar2 == (undefined *)0x0) ||
       (puVar4 = puVar2, func_0x00010bf529e0(), puVar4 == (undefined *)0x0)) {
      uVar5 = 0;
    }
    else {
      puVar4 = puVar2;
      func_0x00010bf529e0();
      if (puVar4 == (undefined *)0x0) {
        dVar7 = 0.0;
      }
      else {
        puVar4 = (undefined *)0x0;
        dVar7 = 0.0;
        do {
          puVar3 = puVar2;
          func_0x00010c0dfd40(puVar2,param_3,puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          fVar6 = (float)param_1;
          _objc_release(puVar3);
          if (dVar7 < (double)fVar6) {
            puVar3 = puVar2;
            func_0x00010c0dfd40(puVar2,param_3,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar7 = (double)(float)param_1;
            _objc_release(puVar3);
          }
          puVar4 = puVar4 + 1;
          puVar3 = puVar2;
          func_0x00010bf529e0();
        } while (puVar4 < puVar3);
      }
      uVar5 = 0;
      if (dVar7 <= 6.3) {
        uVar5 = 2;
      }
      if (10.0 <= dVar7) {
        uVar5 = 1;
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 109054ab0; end: 109054f47; +[SCVideoFrameMeanSquaredErrorCollector videoFrameMeanSquaredErrorsWithVideoFrames:videoAsset:videoOrientation:keyFrameInterval:shouldScaleVideo:] */

void FUN_109054ab0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  ,undefined8 param_6,long param_7,undefined8 param_8,ulong param_9)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar14 = param_5;
  func_0x00010bf529e0();
  if (uVar14 == 0) {
    puVar13 = (undefined *)0x0;
    goto LAB_109054b74;
  }
  puVar3 = PTR_PTR_1126da0f0;
  _objc_alloc();
  func_0x00010c060bc0();
  lStack_a0 = 0;
  func_0x00010c24da40();
  lVar1 = lStack_a0;
  _objc_retain(lStack_a0);
  if (((lVar1 != 0) || (param_1 <= 0.0)) || (param_2 <= 0.0)) {
    func_0x00010c2557e0(puVar3);
LAB_109054b58:
    puVar13 = (undefined *)0x0;
  }
  else {
    if (param_7 == 0) {
      dVar16 = 0.0;
      dVar17 = 0.0;
    }
    else {
      if (param_7 != 3) goto LAB_109054b58;
      dVar16 = -param_2;
      dVar17 = 1.5707963267948966;
    }
    dVar18 = param_2;
    if (param_2 <= param_1) {
      dVar18 = param_1;
      param_1 = param_2;
    }
    uVar14 = param_5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010c2a5040();
    if (dVar18 == (double)(long)uVar4) {
      uVar4 = param_5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe0640();
      bVar2 = param_1 == (double)(long)uVar5;
      _objc_release(uVar4);
    }
    else {
      bVar2 = false;
    }
    _objc_release(uVar14);
    if (((param_9 & 1) == 0) && (!bVar2)) goto LAB_109054b58;
    uVar14 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010c2a5040();
    _objc_release(uVar14);
    uVar14 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bfe0640();
    _objc_release(uVar14);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_5;
    func_0x00010bf529e0();
    if (uVar14 != 0) {
      uVar14 = 0;
      do {
        if (puVar3 == (undefined *)0x0) {
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          puStack_b8 = (undefined *)0x0;
          uStack_c0 = 0;
LAB_109054f30:
          func_0x00010c2557e0(puVar3);
          puVar13 = (undefined *)0x0;
          goto LAB_109054f3c;
        }
        func_0x00010beeccc0(&uStack_d0,puVar3);
        if (puStack_b8 == (undefined *)0x0) {
          uVar15 = 0;
LAB_109054f28:
          _objc_release(uVar15);
          goto LAB_109054f30;
        }
        uVar9 = 0;
        while( true ) {
          uVar15 = param_5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          uVar9 = uStack_b0;
          uVar7 = uVar15;
          func_0x00010bfb6e20();
          puVar13 = puStack_b8;
          if (uVar9 == uVar7) break;
          func_0x00010beeccc0(&uStack_f8,puVar3);
          puStack_b8 = puStack_e0;
          uStack_c0 = uStack_e8;
          uStack_c8 = uStack_f0;
          uStack_d0 = uStack_f8;
          uStack_b0 = uStack_d8;
          uVar9 = uVar15;
          if (puStack_e0 == (undefined *)0x0) goto LAB_109054f28;
        }
        if (puStack_b8 == (undefined *)0x0) goto LAB_109054f28;
        _CVPixelBufferLockBaseAddress(puStack_b8,0);
        puVar8 = puVar13;
        if (dVar17 != 0.0) {
          puVar8 = PTR_PTR_1126dd148;
          func_0x00010be97740(dVar17,0,dVar16);
          _CVPixelBufferUnlockBaseAddress(puVar13,0);
          _CVBufferRelease(puVar13);
          _CVPixelBufferLockBaseAddress(puVar8,0);
        }
        puVar13 = puVar8;
        if (!bVar2) {
          puVar13 = PTR_PTR_1126dd148;
          func_0x00010be9aa80((double)(long)uVar4 / dVar18,(double)(long)uVar5 / param_1);
          _CVPixelBufferUnlockBaseAddress(puVar8,0);
          _CVBufferRelease(puVar8);
          _CVPixelBufferLockBaseAddress(puVar13,0);
        }
        uVar9 = uVar15;
        func_0x00010c120280();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        _objc_release(uVar9);
        puVar8 = puVar13;
        _CVPixelBufferGetBaseAddressOfPlane(puVar13,0);
        uVar9 = uVar15;
        func_0x00010c2a5040(uVar15);
        uVar10 = uVar15;
        func_0x00010bfe0640(uVar15);
        uVar11 = uVar15;
        func_0x00010bf25f80(uVar15);
        puVar12 = puVar13;
        _CVPixelBufferGetBytesPerRowOfPlane(puVar13,0);
        FUN_109055c60(uVar7,puVar8,uVar9,uVar10,uVar11,puVar12);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar8);
        _CVPixelBufferUnlockBaseAddress(puVar13,0);
        _CVBufferRelease(puVar13);
        _objc_release(uVar15);
        uVar14 = uVar14 + 1;
        uVar15 = param_5;
        func_0x00010bf529e0();
      } while (uVar14 < uVar15);
    }
    func_0x00010c2557e0(puVar3);
    puVar13 = puVar6;
    func_0x00010bf51e00(puVar6);
LAB_109054f3c:
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
LAB_109054b74:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 109054f48; end: 1090550bf; +[SCVideoFrameMeanSquaredErrorCollector _rotatePixelBuffer:withRotationAngle:translationPoint:] */

undefined8
FUN_109054f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_autoreleasePoolPush();
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9320(PTR__OBJC_CLASS___CIImage_1126b3128);
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeRotation(&uStack_a0,param_1);
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  _CGAffineTransformTranslate(&uStack_d0,param_2,param_3,&uStack_100);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  puVar2 = puVar1;
  func_0x00010bfe6dc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = 0;
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar3 = param_6;
  _CVPixelBufferGetHeight(param_6);
  uVar4 = param_6;
  _CVPixelBufferGetWidth(param_6);
  _CVPixelBufferGetPixelFormatType(param_6);
  _CVPixelBufferCreate(uVar5,uVar3,uVar4,param_6,0,&uStack_d0);
  uVar3 = uStack_d0;
  _CVPixelBufferLockBaseAddress(uStack_d0,0);
  FUN_1090550c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f5e0();
  _objc_release(uVar3);
  uVar3 = uStack_d0;
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_autoreleasePoolPop(param_4);
  return uVar3;
}



/* Entry: 1090550c0; end: 109055113;  */

void FUN_1090550c0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137307a8 != -1) {
    func_0x000107c27d9c(0x1137307a8,&PTR___NSConcreteGlobalBlock_110ad6528);
  }
  uVar1 = uRam00000001137307a0;
  _objc_retain(uRam00000001137307a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109055114; end: 10905526b; +[SCVideoFrameMeanSquaredErrorCollector _scalePixelBuffer:withScaleX:ScaleY:] */

undefined8
FUN_109055114(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_autoreleasePoolPush();
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9320(PTR__OBJC_CLASS___CIImage_1126b3128);
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeScale(&uStack_90,param_1,param_2);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  puVar2 = puVar1;
  func_0x00010bfe6dc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = 0;
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar3 = param_5;
  _CVPixelBufferGetWidth(param_5);
  uVar4 = param_5;
  _CVPixelBufferGetHeight(param_5);
  _CVPixelBufferGetPixelFormatType(param_5);
  _CVPixelBufferCreate
            (uVar5,(long)(param_1 * (double)uVar3),(long)(param_2 * (double)uVar4),param_5,0,
             &uStack_c0);
  uVar5 = uStack_c0;
  _CVPixelBufferLockBaseAddress(uStack_c0,0);
  FUN_1090550c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f5e0();
  _objc_release(uVar5);
  uVar5 = uStack_c0;
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_autoreleasePoolPop(param_3);
  return uVar5;
}



/* Entry: 10905526c; end: 10905532f;  */

undefined * FUN_10905526c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___CIContext_1126b3120;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__kCIContextUseSoftwareRenderer_11034ad20;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puVar6 = puVar2;
  func_0x00010bf4f640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puRam00000001137307a0;
  puRam00000001137307a0 = puVar3;
  _objc_release(uVar5);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_70;
  puStack_58 = puVar1;
  pcStack_48 = FUN_109055330;
  puStack_60 = puVar2;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_68 = PTR_PTR_1127000a8;
  puStack_70 = puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x20);
    *(undefined8 *)((long)ppuVar4 + 0x20) = 0;
    _objc_release(uVar5);
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined **)((long)ppuVar4 + 8) = puVar6;
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  return (undefined *)ppuVar4;
}



/* Entry: 109055330; end: 1090553af; -[SCVideoFrameRawDataCollector initWithPerformer:] */

undefined1 * FUN_109055330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127000a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090553b0; end: 10905543f; -[SCVideoFrameRawDataCollector prepareForCollectingVideoFrameRawDataWithRawDataURL:] */

void FUN_1090553b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_109055440;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 109055440; end: 109055483;  */

void FUN_109055440(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109055484; end: 109055527; -[SCVideoFrameRawDataCollector collectVideoFrameRawDataWithImageBuffer:frameNum:completion:] */

void FUN_109055484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_109055528;
  puStack_68 = &UNK_1108bb538;
  lStack_60 = param_1;
  uStack_58 = param_5;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 109055528; end: 1090557b3;  */

/* WARNING: Removing unreachable block (ram,0x0001090556d0) */

void FUN_109055528(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) == 0) {
    if (lVar6 != 0) goto LAB_109055770;
  }
  else if (2 < lVar6) goto LAB_109055770;
  _CACurrentMediaTime();
  _CVPixelBufferLockBaseAddress(*(undefined8 *)(param_1 + 0x30),0);
  _CVPixelBufferGetWidthOfPlane(*(undefined8 *)(param_1 + 0x30),0);
  lVar6 = *(long *)(param_1 + 0x30);
  _CVPixelBufferGetHeightOfPlane(lVar6,0);
  if (0x438 < lVar6) {
    _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001090555d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  _CVPixelBufferGetBytesPerRowOfPlane(*(undefined8 *)(param_1 + 0x30),0);
  _CVPixelBufferGetBaseAddressOfPlane(*(undefined8 *)(param_1 + 0x30),0);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd150;
  _objc_alloc(PTR_PTR_1126dd150);
  func_0x00010c015220();
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc_init();
  func_0x00010c08fa60();
  func_0x00010bf06a40(puVar4);
  func_0x00010bf06ae0(puVar4);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) == 0) {
    puVar5 = puVar4;
    func_0x00010c14e060();
    *(char *)(*(long *)(param_1 + 0x20) + 0x18) = (char)puVar5;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
    func_0x00010bfacd20(PTR__OBJC_CLASS___NSFileHandle_1126bc690);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    func_0x00010c157180(puVar5);
    func_0x00010c2bda00(puVar5);
    func_0x00010bf3dba0(puVar5);
    *(byte *)(*(long *)(param_1 + 0x20) + 0x18) = *(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1;
    _objc_release(puVar5);
    _objc_release(0);
  }
  *(long *)(*(long *)(param_1 + 0x20) + 0x10) = *(long *)(*(long *)(param_1 + 0x20) + 0x10) + 1;
  _CVPixelBufferUnlockBaseAddress(*(undefined8 *)(param_1 + 0x30),0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_109055770:
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  return;
}



/* Entry: 1090557b4; end: 1090558eb; -[SCVideoFrameRawDataCollector drainFrameDataCollectionWithCompletionHandler:] */

void FUN_1090557b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x109055844;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1090558ec; end: 109055a57; +[SCVideoFrameRawDataCollector generateVideoFrameRawDataArrayWithRawDataURL:] */

void FUN_1090558ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c08fa60();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    uVar7 = *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518;
    do {
      puVar4 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uVar1 = *(uint *)(puVar4 + (long)puVar8);
      puVar4 = puVar8 + 4;
      puVar8 = puVar4 + uVar1;
      puVar5 = puVar3;
      func_0x00010c08fa60();
      if (puVar8 <= puVar5) {
        puVar5 = puVar3;
        func_0x00010c25eac0(puVar3,param_2,puVar4,(ulong)uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
        func_0x00010bfeea60();
        func_0x00010c1ec620();
        puVar6 = puVar4;
        func_0x00010bf67000(puVar4,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar5);
      }
      puVar4 = puVar3;
      func_0x00010c08fa60();
    } while (puVar8 < puVar4);
  }
  puVar8 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 109055a58; end: 109055a87; -[SCVideoFrameRawDataCollector .cxx_destruct] */

void FUN_109055a58(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109055a88; end: 109055c5f;  */

void FUN_109055a88(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain();
  if (param_1 != 0) {
    puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f5800(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bfacbe0(puVar9,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar9);
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c08fa60();
      if (puVar9 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        uVar8 = *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518;
        do {
          puVar5 = puVar4;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          uVar1 = *(uint *)(puVar5 + (long)puVar9);
          puVar5 = puVar9 + 4;
          puVar9 = puVar5 + uVar1;
          puVar6 = puVar4;
          func_0x00010c08fa60();
          if (puVar9 <= puVar6) {
            puVar6 = puVar4;
            func_0x00010c25eac0(puVar4,param_2,puVar5,(ulong)uVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
            _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
            func_0x00010bfeea60();
            func_0x00010c1ec620();
            puVar7 = puVar5;
            func_0x00010bf67000(puVar5,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3,param_2,puVar7);
            _objc_release(puVar7);
            _objc_release(puVar5);
            _objc_release(puVar6);
          }
          puVar5 = puVar4;
          func_0x00010c08fa60();
        } while (puVar9 < puVar5);
      }
      puVar9 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_109055c38;
    }
  }
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
LAB_109055c38:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 109055c60; end: 109055cdf;  */

double FUN_109055c60(long param_1,long param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = -1.0;
  if (((param_4 != 0 || param_3 != 0) && (param_3 <= param_5)) && (param_3 <= param_6)) {
    if (param_4 == 0) {
      dVar3 = 0.0;
    }
    else {
      lVar1 = 0;
      dVar3 = 0.0;
      do {
        if (param_3 != 0) {
          uVar2 = 0;
          do {
            dVar4 = (double)NEON_ucvtf((ulong)*(byte *)(param_1 + uVar2));
            dVar5 = (double)NEON_ucvtf((ulong)*(byte *)(param_2 + uVar2));
            dVar3 = dVar3 + (dVar4 - dVar5) * (dVar4 - dVar5);
            uVar2 = uVar2 + 1;
          } while (param_3 != uVar2);
        }
        param_1 = param_1 + param_5;
        param_2 = param_2 + param_6;
        lVar1 = lVar1 + 1;
      } while (lVar1 != param_4);
    }
    dVar3 = dVar3 / (double)(param_4 * param_3);
  }
  return dVar3;
}



/* Entry: 109055ce0; end: 109055e77; -[SCMediaCompositionDecoder initWithMediaInputs:shouldMuteAudio:enableStereoAudio:audioProcessingWrapper:audioProcessingSessionFactory:overrideAudioAsset:visualRenderSize:useIOSurfaceBacking:] */

long FUN_109055ce0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined1 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_3 != 0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_3 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(param_3 + 0x10) = param_6;
    *(undefined1 *)(param_3 + 0x11) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    *(long *)(param_3 + 0x28) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined8 *)(param_3 + 0x50) = 0;
    if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
      if (param_10 == 0) {
        uVar2 = param_5;
        func_0x00010bf529e0();
      }
      else {
        uVar2 = 1;
      }
      *(undefined8 *)(param_3 + 0x50) = uVar2;
    }
    *(undefined8 *)(param_3 + 0x48) = 0;
    puVar1 = PTR__kCMTimeZero_110348670;
    uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)(param_3 + 0x60) = uVar5;
    *(undefined8 *)(param_3 + 0x58) = uVar4;
    uVar3 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(param_3 + 0x68) = uVar3;
    *(undefined8 *)(param_3 + 0x78) = uVar5;
    *(undefined8 *)(param_3 + 0x70) = uVar4;
    *(undefined8 *)(param_3 + 0x80) = uVar3;
    *(undefined8 *)(param_3 + 0x90) = uVar5;
    *(undefined8 *)(param_3 + 0x88) = uVar4;
    *(undefined8 *)(param_3 + 0x98) = uVar3;
    *(undefined8 *)(param_3 + 0xb0) = 0;
    uVar2 = param_5;
    func_0x00010bf529e0();
    *(undefined8 *)(param_3 + 0xb8) = 0;
    *(undefined8 *)(param_3 + 0xc0) = uVar2;
    *(undefined8 *)(param_3 + 0xd0) = uVar5;
    *(undefined8 *)(param_3 + 200) = uVar4;
    *(undefined8 *)(param_3 + 0xd8) = uVar3;
    *(undefined8 *)(param_3 + 0xe8) = uVar5;
    *(undefined8 *)(param_3 + 0xe0) = uVar4;
    *(undefined8 *)(param_3 + 0xf0) = uVar3;
    *(undefined8 *)(param_3 + 0x100) = uVar5;
    *(undefined8 *)(param_3 + 0xf8) = uVar4;
    *(undefined8 *)(param_3 + 0x108) = uVar3;
    *(undefined8 *)(param_3 + 0x110) = param_1;
    *(undefined8 *)(param_3 + 0x118) = param_2;
    *(undefined1 *)(param_3 + 0xa8) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  return param_3;
}



/* Entry: 109055e78; end: 109055f23; -[SCMediaCompositionDecoder prepareFetchingFrameWithError:] */

ulong FUN_109055e78(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x00010be78300();
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uStack_38 = 0;
    func_0x00010be78380(param_1,param_2,&uStack_38);
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_3 != (undefined8 *)0x0) && ((param_1 & 1) == 0)) {
      uVar3 = uVar1;
      func_0x00010bf3ec40(uVar1);
      func_0x00010bf99240(puVar4,param_2,&PTR____CFConstantStringClassReference_110f1dc58,uVar3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_3 = puVar4;
    }
    _objc_release(uVar1);
  }
  return param_1;
}



/* Entry: 109055f24; end: 109055f87; -[SCMediaCompositionDecoder decodeNextAudioSampleBuffer] */

long FUN_109055f24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return 0;
  }
  do {
    lVar2 = param_1;
    func_0x00010bde9b40();
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar1 = *(long *)(param_1 + 0x40) + 1;
    *(ulong *)(param_1 + 0x40) = uVar1;
  } while ((uVar1 < *(ulong *)(param_1 + 0x50)) &&
          (lVar2 = param_1, func_0x00010be78300(param_1,param_2,0), (int)lVar2 != 0));
  return 0;
}



/* Entry: 109055f88; end: 109055f8f; -[SCMediaCompositionDecoder audioProviderStatus] */

void FUN_109055f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_status_112672580);
  return;
}



/* Entry: 109055f90; end: 1090560b3; -[SCMediaCompositionDecoder decodeNextVideoFrame:] */

/* WARNING: Removing unreachable block (ram,0x00010905603c) */

undefined1  [16] FUN_109055f90(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bdf8860();
  if (uVar1 == 0) {
    do {
      uVar1 = *(long *)(param_1 + 0xb0) + 1;
      *(ulong *)(param_1 + 0xb0) = uVar1;
      if (*(ulong *)(param_1 + 0xc0) <= uVar1) {
        uVar1 = 0;
        param_2 = 0;
        break;
      }
      uVar1 = param_1;
      func_0x00010be78380();
      _objc_retain(0);
      _objc_release(0);
      if ((uVar1 & 1) == 0) {
        uVar1 = 0;
        param_2 = 0;
        goto LAB_109056088;
      }
      uVar1 = param_1;
      func_0x00010bdf8860();
    } while (uVar1 == 0);
    _objc_release(0);
  }
LAB_109056088:
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 1090560b4; end: 1090560bb; -[SCMediaCompositionDecoder videoProviderStatus] */

void FUN_1090560b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29aeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_videoProviderStatus_1126845d0);
  return;
}



/* Entry: 1090560bc; end: 1090560e3; -[SCMediaCompositionDecoder cancelFetching] */

void FUN_1090560bc(long param_1)

{
  func_0x00010bf2eca0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bf2e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_cancelFetching_1125a92a8);
  return;
}



/* Entry: 1090560e4; end: 1090560ff; -[SCMediaCompositionDecoder avgFrameDuration] */

void FUN_1090560e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 109056100; end: 10905640f; -[SCMediaCompositionDecoder _prepareFetchingAudioFrameWithError:] */

long FUN_109056100(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) ||
     (*(ulong *)(param_1 + 0x50) <= *(ulong *)(param_1 + 0x40))) {
    return 1;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  uStack_58 = *(undefined8 *)(param_1 + 0x78);
  uStack_60 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x80);
  uStack_78 = *(undefined8 *)(param_1 + 0x90);
  uStack_80 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = *(undefined8 *)(param_1 + 0x98);
  _CMTimeAdd(&uStack_b0,&uStack_60,&uStack_80);
  *(undefined8 *)(param_1 + 0x78) = uStack_a8;
  *(undefined8 *)(param_1 + 0x70) = uStack_b0;
  *(undefined8 *)(param_1 + 0x80) = uStack_a0;
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd158;
  _objc_opt_class(PTR_PTR_1126dd158);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  puVar3 = PTR_PTR_1126dd158;
  uVar6 = uVar2;
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126dd160;
    _objc_opt_class(PTR_PTR_1126dd160);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    puVar3 = PTR_PTR_1126dd160;
    if ((uVar4 & 1) == 0) {
      if (param_3 == (undefined8 *)0x0) {
        param_1 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        param_1 = 0;
        *param_3 = puVar3;
      }
      goto LAB_1090563ec;
    }
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar2);
    if (uVar6 == 0) {
      _objc_retain(0);
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      _objc_release(0);
      _objc_retain(0);
LAB_10905635c:
      lVar7 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      lVar7 = *(long *)(uVar2 + 8);
      _objc_retain(lVar7);
      if (lVar7 == 0) {
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_60,lVar7);
      }
      _objc_release(lVar7);
      lVar7 = *(long *)(uVar2 + 0x10);
      _objc_retain(lVar7);
      if (lVar7 == 0) goto LAB_10905635c;
      func_0x00010bdc1120(&uStack_b0,lVar7);
    }
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    _objc_release(lVar7);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_a0 = uStack_70;
    uStack_c8 = uStack_58;
    uStack_d0 = uStack_60;
    uStack_c0 = uStack_50;
    puVar5 = &uStack_b0;
    _CMTimeCompare(puVar5,&uStack_d0);
    puVar1 = &uStack_80;
    if (-1 < (int)puVar5) {
      puVar1 = &uStack_60;
    }
    uVar8 = *puVar1;
    *(undefined8 *)(param_1 + 0x90) = puVar1[1];
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    *(undefined8 *)(param_1 + 0x98) = puVar1[2];
    func_0x00010be78340(param_1);
  }
  else {
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar2);
    if (uVar6 == 0) {
      _objc_retain(0);
LAB_109056304:
      lVar7 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar7 = *(long *)(uVar2 + 0x20);
      _objc_retain(lVar7);
      if (lVar7 == 0) goto LAB_109056304;
      func_0x00010bdc1140(&uStack_b0,lVar7);
    }
    *(undefined8 *)(param_1 + 0x90) = uStack_a8;
    *(undefined8 *)(param_1 + 0x88) = uStack_b0;
    *(undefined8 *)(param_1 + 0x98) = uStack_a0;
    _objc_release(lVar7);
    func_0x00010be78320(param_1);
  }
  _objc_release(uVar6);
LAB_1090563ec:
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 109056410; end: 109056717; -[SCMediaCompositionDecoder _prepareFetchingVideoFrameWithError:] */

long FUN_109056410(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (*(ulong *)(param_1 + 0xc0) <= *(ulong *)(param_1 + 0xb0)) {
    return 1;
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uStack_58 = *(undefined8 *)(param_1 + 0xe8);
  uStack_60 = *(undefined8 *)(param_1 + 0xe0);
  uStack_50 = *(undefined8 *)(param_1 + 0xf0);
  uStack_78 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined8 *)(param_1 + 0x108);
  _CMTimeAdd(&uStack_b0,&uStack_60,&uStack_80);
  *(undefined8 *)(param_1 + 0xe8) = uStack_a8;
  *(undefined8 *)(param_1 + 0xe0) = uStack_b0;
  *(undefined8 *)(param_1 + 0xf0) = uStack_a0;
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd158;
  _objc_opt_class(PTR_PTR_1126dd158);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  puVar3 = PTR_PTR_1126dd158;
  uVar6 = uVar2;
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126dd160;
    _objc_opt_class(PTR_PTR_1126dd160);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    puVar3 = PTR_PTR_1126dd160;
    if ((uVar4 & 1) == 0) {
      if (param_3 == (undefined8 *)0x0) {
        param_1 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        param_1 = 0;
        *param_3 = puVar3;
      }
      goto LAB_1090566f4;
    }
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar2);
    if (uVar6 == 0) {
      _objc_retain(0);
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      _objc_release(0);
      _objc_retain(0);
LAB_109056664:
      lVar7 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      lVar7 = *(long *)(uVar2 + 8);
      _objc_retain(lVar7);
      if (lVar7 == 0) {
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_60,lVar7);
      }
      _objc_release(lVar7);
      lVar7 = *(long *)(uVar2 + 0x10);
      _objc_retain(lVar7);
      if (lVar7 == 0) goto LAB_109056664;
      func_0x00010bdc1120(&uStack_b0,lVar7);
    }
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    _objc_release(lVar7);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_a0 = uStack_70;
    uStack_c8 = uStack_58;
    uStack_d0 = uStack_60;
    uStack_c0 = uStack_50;
    puVar5 = &uStack_b0;
    _CMTimeCompare(puVar5,&uStack_d0);
    puVar1 = &uStack_80;
    if (-1 < (int)puVar5) {
      puVar1 = &uStack_60;
    }
    uVar8 = *puVar1;
    *(undefined8 *)(param_1 + 0x100) = puVar1[1];
    *(undefined8 *)(param_1 + 0xf8) = uVar8;
    *(undefined8 *)(param_1 + 0x108) = puVar1[2];
    func_0x00010be783c0(param_1);
  }
  else {
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar2);
    if (uVar6 == 0) {
      _objc_retain(0);
LAB_10905660c:
      lVar7 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar7 = *(long *)(uVar2 + 0x20);
      _objc_retain(lVar7);
      if (lVar7 == 0) goto LAB_10905660c;
      func_0x00010bdc1140(&uStack_b0,lVar7);
    }
    *(undefined8 *)(param_1 + 0x100) = uStack_a8;
    *(undefined8 *)(param_1 + 0xf8) = uStack_b0;
    *(undefined8 *)(param_1 + 0x108) = uStack_a0;
    _objc_release(lVar7);
    func_0x00010be783a0(param_1);
  }
  _objc_release(uVar6);
LAB_1090566f4:
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 109056718; end: 1090567f3; -[SCMediaCompositionDecoder _prepareFetchingAudioFrameWithImageInput:error:] */

undefined8 FUN_109056718(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [48];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = lVar2;
    if (lVar2 == 0) {
      if (param_3 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = *(long *)(param_3 + 0x10);
      }
      _objc_retain(lVar1);
    }
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_a8 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    uStack_b0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    uStack_a0 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    _CMTimeRangeMake(auStack_70,&uStack_90,&uStack_b0);
    func_0x00010bebf780(param_1);
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 1090567f4; end: 1090568fb; -[SCMediaCompositionDecoder _prepareFetchingVideoFrameWithImageInput:error:] */

undefined8 FUN_1090567f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126dd168;
  _objc_retain(param_3);
  _objc_alloc();
  if (param_3 == 0) {
    _objc_retain(0);
    uVar2 = 0;
    uVar3 = 0;
    lVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 8);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x20);
  }
  _objc_retain(lVar4);
  _objc_release(param_3);
  if (lVar4 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_68,lVar4);
  }
  _CMTimeGetSeconds(&uStack_68);
  func_0x00010c01c080(puVar1,param_2,uVar3,uVar2,0,*(undefined1 *)(param_1 + 0xa8));
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar1;
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(uVar3);
  func_0x00010c1093e0(*(undefined8 *)(param_1 + 0xa0),param_2,param_4);
  return 1;
}



/* Entry: 1090568fc; end: 109056a2b; -[SCMediaCompositionDecoder _prepareFetchingAudioFrameWithVideoInput:error:] */

undefined8 FUN_1090568fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) goto LAB_109056a08;
  if (*(long *)(param_1 + 0x28) != 0) {
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_a8 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    uStack_b0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    uStack_a0 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    _CMTimeRangeMake(&uStack_70,&uStack_90,&uStack_b0);
    func_0x00010bebf780(param_1);
    goto LAB_109056a08;
  }
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uVar1 = 0;
LAB_1090569d4:
    lVar2 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 8);
    _objc_retain(uVar1);
    lVar2 = *(long *)(param_3 + 0x10);
    _objc_retain(lVar2);
    if (lVar2 == 0) goto LAB_1090569d4;
    func_0x00010bdc1120(&uStack_70,lVar2);
  }
  func_0x00010bebf780(param_1);
  _objc_release(lVar2);
  _objc_release(uVar1);
LAB_109056a08:
  _objc_release(param_3);
  return 1;
}



/* Entry: 109056a2c; end: 109056bb7; -[SCMediaCompositionDecoder _prepareFetchingVideoFrameWithVideoInput:error:] */

undefined8 FUN_109056a2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  bVar1 = false;
  if ((*(double *)(param_1 + 0x110) == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false,
     !NAN(*(double *)(param_1 + 0x118)) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = *(double *)(param_1 + 0x118) == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_3 + 8);
    }
    _objc_retain(uVar5);
    uVar4 = uVar5;
    func_0x0001091273a4(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  puVar2 = PTR_PTR_1126dd170;
  _objc_alloc();
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar5);
  func_0x00010c060ca0(puVar2,param_2,uVar5,uVar4,0,0,1,0,0,*(undefined8 *)(param_1 + 0x20),param_4);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
  if (param_3 == 0) {
    _objc_retain(0);
  }
  else {
    lVar6 = *(long *)(param_3 + 0x10);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      func_0x00010bdc1120(&uStack_70,lVar6);
      goto LAB_109056b54;
    }
  }
  lVar6 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_109056b54:
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c214ec0(*(undefined8 *)(param_1 + 0xa0),param_2,&uStack_a0);
  _objc_release(lVar6);
  func_0x00010c1093e0(*(undefined8 *)(param_1 + 0xa0),param_2,param_4);
  _objc_release(uVar4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 109056bb8; end: 109056ee7; -[SCMediaCompositionDecoder _startAudioDecodingWithAsset:timeRange:error:] */

long FUN_109056bb8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar10 != 0) {
    puVar3 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    _objc_alloc();
    func_0x00010bff4200();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar1);
    if (*(char *)(param_1 + 0x11) == '\x01') {
      lVar10 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010bfb5b00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        _CMAudioFormatDescriptionGetStreamBasicDescription();
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar10);
    }
    puVar3 = PTR__OBJC_CLASS___AVAssetReaderAudioMixOutput_1126dc5c0;
    _objc_alloc();
    uStack_78 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
    uStack_70 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
    ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1db8;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5700();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar3;
    _objc_release(uVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c16c4c0(*(undefined8 *)(param_1 + 0x38));
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar2;
      func_0x00010bfb1920(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar8;
      func_0x00010bf54ac0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(uVar8);
      uVar8 = uVar1;
      func_0x00010bf0f320(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16be60(*(undefined8 *)(param_1 + 0x38));
      _objc_release(uVar8);
      _objc_release(uVar1);
    }
    uVar9 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf2c480();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((uVar9 & 1) != 0) {
      func_0x00010befa4c0(*(undefined8 *)(param_1 + 0x30));
      func_0x00010c250140(*(undefined8 *)(param_1 + 0x30));
      lVar10 = 1;
      goto LAB_109056e9c;
    }
  }
  PTR__OBJC_CLASS___NSError_1126ae858 = puVar3;
  if (param_5 == (undefined8 *)0x0) {
    lVar10 = 0;
  }
  else {
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar10 = 0;
    *param_5 = puVar3;
  }
LAB_109056e9c:
  _objc_release(lVar2);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_88 = FUN_109056ee8;
    if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
      lVar10 = *(long *)(lVar4 + 0x38);
      lStack_a0 = lVar2;
      lStack_98 = param_3;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x00010bf52120();
      if (lVar10 != 0) {
        _CMSampleBufferGetPresentationTimeStamp(&uStack_b8,lVar10);
        if (*(long *)(lVar4 + 0x48) == 0) {
          uStack_c8 = *(undefined8 *)(lVar4 + 0x78);
          uStack_d0 = *(undefined8 *)(lVar4 + 0x70);
          uStack_c0 = *(undefined8 *)(lVar4 + 0x80);
          *(undefined8 *)(lVar4 + 0x60) = uStack_b0;
          *(undefined8 *)(lVar4 + 0x58) = uStack_b8;
          *(undefined8 *)(lVar4 + 0x68) = uStack_a8;
        }
        else {
          uStack_c8 = uStack_b0;
          uStack_d0 = uStack_b8;
          uStack_c0 = uStack_a8;
          uStack_108 = *(undefined8 *)(lVar4 + 0x60);
          uStack_110 = *(undefined8 *)(lVar4 + 0x58);
          uStack_100 = *(undefined8 *)(lVar4 + 0x68);
          _CMTimeSubtract(&uStack_f0,&uStack_d0,&uStack_110);
          uStack_108 = *(undefined8 *)(lVar4 + 0x78);
          uStack_110 = *(undefined8 *)(lVar4 + 0x70);
          uStack_100 = *(undefined8 *)(lVar4 + 0x80);
          _CMTimeAdd(&uStack_d0,&uStack_110,&uStack_f0);
        }
        uStack_e8 = uStack_c8;
        uStack_f0 = uStack_d0;
        uStack_e0 = uStack_c0;
        _CMSampleBufferSetOutputPresentationTimeStamp(lVar10,&uStack_f0);
        *(long *)(lVar4 + 0x48) = *(long *)(lVar4 + 0x48) + 1;
      }
    }
    else {
      lVar10 = 0;
    }
    return lVar10;
  }
  return lVar10;
}



/* Entry: 109056ee8; end: 109056fdf; -[SCMediaCompositionDecoder _copyNextAudioSampleBufferAndSetOutputTimeStamp] */

long FUN_109056ee8(long param_1)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010bf52120();
    if (lVar1 != 0) {
      _CMSampleBufferGetPresentationTimeStamp(&uStack_38,lVar1);
      if (*(long *)(param_1 + 0x48) == 0) {
        uStack_48 = *(undefined8 *)(param_1 + 0x78);
        uStack_50 = *(undefined8 *)(param_1 + 0x70);
        uStack_40 = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x60) = uStack_30;
        *(undefined8 *)(param_1 + 0x58) = uStack_38;
        *(undefined8 *)(param_1 + 0x68) = uStack_28;
      }
      else {
        uStack_48 = uStack_30;
        uStack_50 = uStack_38;
        uStack_40 = uStack_28;
        uStack_88 = *(undefined8 *)(param_1 + 0x60);
        uStack_90 = *(undefined8 *)(param_1 + 0x58);
        uStack_80 = *(undefined8 *)(param_1 + 0x68);
        _CMTimeSubtract(&uStack_70,&uStack_50,&uStack_90);
        uStack_88 = *(undefined8 *)(param_1 + 0x78);
        uStack_90 = *(undefined8 *)(param_1 + 0x70);
        uStack_80 = *(undefined8 *)(param_1 + 0x80);
        _CMTimeAdd(&uStack_50,&uStack_90,&uStack_70);
      }
      uStack_68 = uStack_48;
      uStack_70 = uStack_50;
      uStack_60 = uStack_40;
      _CMSampleBufferSetOutputPresentationTimeStamp(lVar1,&uStack_70);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 109056fe0; end: 109057183; -[SCMediaCompositionDecoder _decodeNextVideoFrameAndSetOutputTimeStamp:] */

undefined1  [16] FUN_109056fe0(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 != 0) {
    func_0x00010bf66fc0();
    if (lVar3 == 0) goto LAB_1090570dc;
    _CMSampleBufferGetOutputPresentationTimeStamp(&dStack_58,lVar3);
    uStack_88 = uStack_50;
    dStack_90 = dStack_58;
    uStack_80 = uStack_48;
    uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
    dStack_b0 = *(double *)(param_1 + 200);
    uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
    _CMTimeSubtract(&dStack_70,&dStack_90,&dStack_b0);
    uStack_88 = uStack_68;
    dStack_90 = dStack_70;
    uStack_80 = uStack_60;
    dVar6 = dStack_70;
    _CMTimeGetSeconds(&dStack_90);
    fVar8 = (float)(dVar6 + 0.02);
    uStack_88 = *(undefined8 *)(param_1 + 0x100);
    dVar6 = *(double *)(param_1 + 0xf8);
    uStack_80 = *(undefined8 *)(param_1 + 0x108);
    dStack_90 = dVar6;
    _CMTimeGetSeconds(&dStack_90);
    fVar4 = (float)dVar6;
    fVar7 = ABS(fVar8 - fVar4);
    fVar5 = ABS(fVar8 + fVar4) * 1.1920929e-07;
    bVar1 = true;
    if ((fVar8 < fVar4) && (bVar1 = false, !NAN(fVar7))) {
      bVar1 = fVar7 < 1.1754944e-38;
    }
    bVar2 = true;
    if ((!bVar1) && (bVar2 = false, !NAN(fVar7) && !NAN(fVar5))) {
      bVar2 = fVar7 < fVar5;
    }
    if (!bVar2) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uStack_88 = *(undefined8 *)(param_1 + 0xe8);
        dStack_90 = *(double *)(param_1 + 0xe0);
        uStack_80 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 *)(param_1 + 0xd0) = uStack_50;
        *(double *)(param_1 + 200) = dStack_58;
        *(undefined8 *)(param_1 + 0xd8) = uStack_48;
      }
      else {
        uStack_a8 = *(undefined8 *)(param_1 + 0xe8);
        dStack_b0 = *(double *)(param_1 + 0xe0);
        uStack_a0 = *(undefined8 *)(param_1 + 0xf0);
        uStack_c8 = uStack_68;
        dStack_d0 = dStack_70;
        uStack_c0 = uStack_60;
        _CMTimeAdd(&dStack_90,&dStack_b0,&dStack_d0);
      }
      uStack_a8 = uStack_88;
      dStack_b0 = dStack_90;
      uStack_a0 = uStack_80;
      _CMSampleBufferSetOutputPresentationTimeStamp(lVar3,&dStack_b0);
      *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
      goto LAB_1090570dc;
    }
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    _CFRelease(lVar3);
  }
  lVar3 = 0;
  param_2 = 0;
LAB_1090570dc:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar3;
  return auVar9;
}



/* Entry: 109057184; end: 109057197; -[SCMediaCompositionDecoder timeRange] */

void FUN_109057184(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  uVar3 = *(undefined8 *)(param_2 + 0x138);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  param_1[1] = *(undefined8 *)(param_2 + 0x128);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  param_1[5] = *(undefined8 *)(param_2 + 0x148);
  param_1[4] = uVar1;
  return;
}



/* Entry: 109057198; end: 1090571ab; -[SCMediaCompositionDecoder setTimeRange:] */

void FUN_109057198(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  *(undefined8 *)(param_1 + 0x138) = param_3[3];
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar5;
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  return;
}



/* Entry: 1090571ac; end: 109057217; -[SCMediaCompositionDecoder .cxx_destruct] */

void FUN_1090571ac(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109057218; end: 109057443; -[SCVideoDecoder initWithVideoAsset:videoComposition:assetReaderCompositionOutputBuilder:assetAudioMix:shouldMuteAudio:enableStereoAudio:audioProcessingWrapper:audioProcessingSessionFactory:error:] */

undefined8 *
FUN_109057218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined1 param_7,undefined1 param_8,long param_9,
             undefined8 param_10,long *param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if ((param_6 != 0) && (param_9 != 0)) {
    _objc_release(param_9);
    param_9 = 0;
  }
  puStack_68 = PTR_PTR_1127000b0;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar1 = puVar3[1];
    puVar3[1] = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = puVar3[9];
    puVar3[9] = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = puVar3[10];
    puVar3[10] = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = puVar3[0xb];
    puVar3[0xb] = param_6;
    _objc_release(uVar1);
    *(undefined1 *)(puVar3 + 2) = param_7;
    *(undefined1 *)((long)puVar3 + 0x11) = param_8;
    _objc_retain(param_9);
    uVar1 = puVar3[3];
    puVar3[3] = param_9;
    _objc_release(uVar1);
    _objc_retain(param_10);
    uVar1 = puVar3[4];
    puVar3[4] = param_10;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    _objc_alloc();
    func_0x00010bff4200();
    uVar1 = puVar3[6];
    puVar3[6] = puVar2;
    _objc_release(uVar1);
    uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_d8 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    uStack_e0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    uStack_d0 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    _CMTimeRangeMake(&uStack_a0,&uStack_c0,&uStack_e0);
    *(undefined8 *)((long)puVar3 + 0x84) = uStack_98;
    *(undefined8 *)((long)puVar3 + 0x7c) = uStack_a0;
    *(undefined8 *)((long)puVar3 + 0x94) = uStack_88;
    *(undefined8 *)((long)puVar3 + 0x8c) = uStack_90;
    *(undefined8 *)((long)puVar3 + 0xa4) = uStack_78;
    *(undefined8 *)((long)puVar3 + 0x9c) = uStack_80;
    puVar2 = PTR__kCMTimeInvalid_110348648;
    uVar1 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar3[0xd] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    puVar3[0xc] = uVar1;
    puVar3[0xe] = *(undefined8 *)(puVar2 + 0x10);
    *(undefined4 *)(puVar3 + 0xf) = 0;
    if (*param_11 != 0) {
      _objc_release(puVar3);
      puVar3 = (undefined8 *)0x0;
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 109057444; end: 109057a23; -[SCVideoDecoder prepareFetchingFrameWithError:] */

undefined * FUN_109057444(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
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
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 8) == 0) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_f0);
  }
  uStack_118 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_120 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_110 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(&uStack_c0,&uStack_120,&uStack_f0);
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_118 = *(undefined8 *)(param_1 + 0x84);
  uStack_120 = *(undefined8 *)(param_1 + 0x7c);
  uStack_108 = *(undefined8 *)(param_1 + 0x94);
  uStack_110 = *(undefined8 *)(param_1 + 0x8c);
  uStack_f8 = *(undefined8 *)(param_1 + 0xa4);
  uStack_100 = *(undefined8 *)(param_1 + 0x9c);
  _CMTimeRangeContainsTimeRange(&uStack_f0,&uStack_120);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_148 = *(undefined8 *)(param_1 + 0x84);
  uStack_150 = *(undefined8 *)(param_1 + 0x7c);
  uStack_138 = *(undefined8 *)(param_1 + 0x94);
  uStack_140 = *(undefined8 *)(param_1 + 0x8c);
  uStack_128 = *(undefined8 *)(param_1 + 0xa4);
  uVar10 = *(undefined8 *)(param_1 + 0x9c);
  uStack_130 = uVar10;
  _CMTimeRangeGetIntersection(&uStack_f0,&uStack_120,&uStack_150);
  fVar9 = (float)uVar10;
  func_0x00010c214ec0(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar8);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
LAB_109057760:
      _objc_release(puVar1);
      goto LAB_109057768;
    }
    if (*(char *)(param_1 + 0x11) == '\x01') {
      puVar5 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bfb5b00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        _CMAudioFormatDescriptionGetStreamBasicDescription();
      }
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
    puVar5 = PTR__OBJC_CLASS___AVAssetReaderAudioMixOutput_1126dc5c0;
    _objc_alloc();
    uStack_78 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
    uStack_70 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
    ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1dd0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5700();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar5;
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010c16c4c0(*(undefined8 *)(param_1 + 0x38));
    if (*(long *)(param_1 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x58) != 0) {
        func_0x00010c16be60(*(undefined8 *)(param_1 + 0x38));
      }
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bfb1920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf54ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010bf0f320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16be60(*(undefined8 *)(param_1 + 0x38));
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    uVar6 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf2c480();
    if ((uVar6 & 1) != 0) {
      func_0x00010befa4c0(*(undefined8 *)(param_1 + 0x30));
      goto LAB_109057760;
    }
    if (param_3 == (undefined8 *)0x0) goto LAB_109057940;
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
  }
  else {
LAB_109057768:
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c106f40(&uStack_f0,puVar1);
      puVar4 = &uStack_f0;
      func_0x00010b691288();
      *(undefined8 **)(param_1 + 0x28) = puVar4;
      func_0x00010c0da9e0(puVar1);
      if (0.0 < fVar9) {
        _CMTimeMakeWithSeconds(&uStack_f0,1.0 / (double)fVar9,600);
        *(undefined8 *)(param_1 + 0x68) = uStack_e8;
        *(undefined8 *)(param_1 + 0x60) = uStack_f0;
        *(undefined8 *)(param_1 + 0x70) = uStack_e0;
      }
      uStack_88 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
      ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1de8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = *(undefined **)(param_1 + 0x50);
      if (puVar5 == (undefined *)0x0) {
        if (*(long *)(param_1 + 0x48) == 0) {
          puVar5 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
          _objc_alloc();
          func_0x00010c054b20();
        }
        else {
          puVar5 = PTR__OBJC_CLASS___AVAssetReaderVideoCompositionOutput_1126da1e0;
          _objc_alloc();
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_90 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0612c0();
          _objc_release(puVar2);
          func_0x00010c2213a0(puVar5);
        }
LAB_109057964:
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        *(undefined **)(param_1 + 0x40) = puVar5;
        _objc_release(uVar8);
        uVar6 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf2c480();
        if ((uVar6 & 1) == 0) {
          if (param_3 == (undefined8 *)0x0) goto LAB_1090579d4;
LAB_1090579b4:
          puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar5 = (undefined *)0x0;
          *param_3 = puVar2;
        }
        else {
          func_0x00010befa4c0(*(undefined8 *)(param_1 + 0x30));
          func_0x00010c250140(*(undefined8 *)(param_1 + 0x30));
          puVar5 = (undefined *)0x1;
        }
      }
      else {
        func_0x00010bf220c0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) goto LAB_109057964;
        if (param_3 != (undefined8 *)0x0) goto LAB_1090579b4;
LAB_1090579d4:
        puVar5 = (undefined *)0x0;
      }
      _objc_release(puVar3);
      goto LAB_1090579e0;
    }
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined *)0x0;
LAB_109057940:
      puVar5 = (undefined *)0x0;
      goto LAB_1090579e0;
    }
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar1 = (undefined *)0x0;
  }
  puVar5 = (undefined *)0x0;
  *param_3 = puVar2;
LAB_1090579e0:
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_109057a24;
  if ((puVar2[0x10] & 1) == 0) {
    puStack_180 = puVar3;
    puStack_178 = puVar5;
    puStack_170 = puVar1;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _os_unfair_lock_lock(puVar2 + 0x78);
    lVar7 = *(long *)(puVar2 + 0x30);
    func_0x00010c252d60();
    if (lVar7 == 1) {
      puVar1 = *(undefined **)(puVar2 + 0x38);
      func_0x00010bf52120();
      puVar5 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        _CMSampleBufferGetPresentationTimeStamp(&uStack_198,puVar1);
        uStack_1c8 = uStack_190;
        uStack_1d0 = uStack_198;
        uStack_1c0 = uStack_188;
        uStack_1e8 = *(undefined8 *)(puVar2 + 0x84);
        uStack_1f0 = *(undefined8 *)(puVar2 + 0x7c);
        uStack_1e0 = *(undefined8 *)(puVar2 + 0x8c);
        _CMTimeSubtract(&uStack_1b0,&uStack_1d0,&uStack_1f0);
        uStack_1c8 = uStack_1a8;
        uStack_1d0 = uStack_1b0;
        uStack_1c0 = uStack_1a0;
        _CMSampleBufferSetOutputPresentationTimeStamp(puVar1,&uStack_1d0);
        uStack_1c8 = *(undefined8 *)(puVar2 + 0x84);
        uStack_1d0 = *(undefined8 *)(puVar2 + 0x7c);
        uStack_1c0 = *(undefined8 *)(puVar2 + 0x8c);
        uStack_1e8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_1f0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_1e0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        puVar4 = &uStack_1d0;
        _CMTimeCompare(puVar4,&uStack_1f0);
        if (0 < (int)puVar4) {
          uStack_1c8 = *(undefined8 *)(puVar2 + 0x84);
          uStack_1d0 = *(undefined8 *)(puVar2 + 0x7c);
          uStack_1c0 = *(undefined8 *)(puVar2 + 0x8c);
          puVar5 = puVar2;
          func_0x00010bdeafc0(puVar2);
          _CFRelease(puVar1);
        }
      }
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _os_unfair_lock_unlock(puVar2 + 0x78);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}



/* Entry: 109057a24; end: 109057b5f; -[SCVideoDecoder decodeNextAudioSampleBuffer] */

long FUN_109057a24(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x78);
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c252d60();
    if (lVar3 == 1) {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010bf52120();
      lVar3 = lVar1;
      if (lVar1 != 0) {
        _CMSampleBufferGetPresentationTimeStamp(&uStack_48,lVar1);
        uStack_78 = uStack_40;
        uStack_80 = uStack_48;
        uStack_70 = uStack_38;
        uStack_98 = *(undefined8 *)(param_1 + 0x84);
        uStack_a0 = *(undefined8 *)(param_1 + 0x7c);
        uStack_90 = *(undefined8 *)(param_1 + 0x8c);
        _CMTimeSubtract(&uStack_60,&uStack_80,&uStack_a0);
        uStack_78 = uStack_58;
        uStack_80 = uStack_60;
        uStack_70 = uStack_50;
        _CMSampleBufferSetOutputPresentationTimeStamp(lVar1,&uStack_80);
        uStack_78 = *(undefined8 *)(param_1 + 0x84);
        uStack_80 = *(undefined8 *)(param_1 + 0x7c);
        uStack_70 = *(undefined8 *)(param_1 + 0x8c);
        uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        puVar2 = &uStack_80;
        _CMTimeCompare(puVar2,&uStack_a0);
        if (0 < (int)puVar2) {
          uStack_78 = *(undefined8 *)(param_1 + 0x84);
          uStack_80 = *(undefined8 *)(param_1 + 0x7c);
          uStack_70 = *(undefined8 *)(param_1 + 0x8c);
          lVar3 = param_1;
          func_0x00010bdeafc0(param_1);
          _CFRelease(lVar1);
        }
      }
    }
    else {
      lVar3 = 0;
    }
    _os_unfair_lock_unlock(param_1 + 0x78);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 109057b60; end: 109057b67; -[SCVideoDecoder audioProviderStatus] */

void FUN_109057b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_status_112672580);
  return;
}



/* Entry: 109057b68; end: 109057c83; -[SCVideoDecoder decodeNextVideoFrame:] */

undefined1  [16] FUN_109057b68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _os_unfair_lock_lock(param_1 + 0x78);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c252d60();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010bf52120();
    if (lVar1 != 0) {
      _CMSampleBufferGetPresentationTimeStamp(&uStack_58,lVar1);
      uStack_88 = uStack_50;
      uStack_90 = uStack_58;
      uStack_80 = uStack_48;
      uStack_a8 = *(undefined8 *)(param_1 + 0x84);
      uStack_b0 = *(undefined8 *)(param_1 + 0x7c);
      uStack_a0 = *(undefined8 *)(param_1 + 0x8c);
      _CMTimeSubtract(&uStack_70,&uStack_90,&uStack_b0);
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      uStack_80 = uStack_60;
      _CMSampleBufferSetOutputPresentationTimeStamp(lVar1,&uStack_90);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      goto LAB_109057c18;
    }
  }
  else {
    lVar1 = 0;
  }
  uVar5 = 0;
LAB_109057c18:
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    _objc_autorelease();
    *param_3 = uVar4;
    _objc_release(uVar3);
  }
  _os_unfair_lock_unlock(param_1 + 0x78);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar1;
  return auVar6;
}



/* Entry: 109057c84; end: 109057c8b; -[SCVideoDecoder videoProviderStatus] */

void FUN_109057c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_status_112672580);
  return;
}



/* Entry: 109057c8c; end: 109057cbb; -[SCVideoDecoder cancelFetching] */

void FUN_109057c8c(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x78);
  func_0x00010bf2eca0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x78);
  return;
}


