/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108945664; end: 1089456f7;  */

long FUN_108945664(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9b948;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1089456f8; end: 108945707;  */

void FUN_1089456f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9b988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108945708; end: 10894572f;  */

long FUN_108945708(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108945730; end: 10894578f;  */

void FUN_108945730(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108945790; end: 108945807; -[ADLEncoderCallback initWithCpp:] */

undefined1 * FUN_108945790(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd430;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108945aa0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108945a74(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108945808; end: 108945863; -[ADLEncoderCallback onFrameEncoded:] */

void FUN_108945808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_58 [56];
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108947498(auStack_58,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_58);
  func_0x00010894593c(auStack_58);
  return;
}



/* Entry: 108945864; end: 108945873; -[ADLEncoderCallback onFrameProcess] */

void FUN_108945864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108945870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 108945874; end: 10894589f;  */

void FUN_108945874(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108945990();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1089458a0; end: 1089458f3; -[ADLEncoderCallback .cxx_destruct] */

void FUN_1089458a0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a9ba38;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108945a74((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1089458f4; end: 10894596f; -[ADLEncoderCallback .cxx_construct] */

undefined8 * FUN_1089458f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  
  puVar1 = param_1;
  func_0x000107c31704();
  param_1[1] = *puVar1;
  lVar2 = puVar1[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_108945aa0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108945970; end: 10894598f;  */

void FUN_108945970(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 108945990; end: 108945a03;  */

void FUN_108945990(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a9ba38;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108945aa0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108945a04);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108945abc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108945a04; end: 108945a73;  */

void FUN_108945a04(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dadd8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108945aa0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108945a74(&uStack_30);
  return;
}



/* Entry: 108945a74; end: 108945a9f;  */

long FUN_108945a74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108945aa0; end: 108945acf;  */

void FUN_108945aa0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108945ad0; end: 108945b3f;  */

void FUN_108945ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dade0;
  _objc_alloc(PTR_PTR_1126dade0);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02bfc0(puVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x18),
                      *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                      *(undefined4 *)(param_1 + 0x24));
  FUN_108945b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108945b40; end: 108945b4b;  */

void FUN_108945b40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108945b4c; end: 108945bf3; -[ADLEncoderConfig initWithMimeType:initialBitrateKbps:initialFrameRate:width:height:] */

undefined1 * FUN_108945b4c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000108945c88();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = unaff_x19;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = unaff_w23;
    *(undefined4 *)(puVar1 + 0xc) = unaff_w22;
    *(undefined4 *)(puVar1 + 0x10) = unaff_w21;
    *(undefined4 *)(puVar1 + 0x14) = unaff_w20;
  }
  _objc_release();
  return puVar1;
}



/* Entry: 108945bf4; end: 108945c53; +[ADLEncoderConfig EncoderConfigWithMimeType:initialBitrateKbps:initialFrameRate:width:height:] */

void FUN_108945bf4(void)

{
  func_0x000108945c88();
  _objc_alloc();
  func_0x00010c02bfc0();
  func_0x000108945ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108945c54; end: 108945c5b; -[ADLEncoderConfig mimeType] */

undefined8 FUN_108945c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108945c5c; end: 108945c63; -[ADLEncoderConfig initialBitrateKbps] */

undefined4 FUN_108945c5c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108945c64; end: 108945c6b; -[ADLEncoderConfig initialFrameRate] */

undefined4 FUN_108945c64(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108945c6c; end: 108945c73; -[ADLEncoderConfig width] */

undefined4 FUN_108945c6c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108945c74; end: 108945c7b; -[ADLEncoderConfig height] */

undefined4 FUN_108945c74(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108945c7c; end: 108945cb3; -[ADLEncoderConfig .cxx_destruct] */

void FUN_108945c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108945cb4; end: 108945e2f;  */

void FUN_108945cb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c4520();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_78);
  uVar2 = param_2;
  func_0x00010c0c44e0();
  uVar3 = param_2;
  func_0x00010c0c4500();
  uVar4 = param_2;
  func_0x00010c0c4460();
  uVar5 = param_2;
  func_0x00010c0c4480();
  uVar6 = param_2;
  func_0x00010c0c44a0();
  uVar7 = param_2;
  func_0x00010c0c44c0();
  uVar8 = param_2;
  func_0x00010bfe6a80();
  uVar9 = param_2;
  func_0x00010bfe6aa0();
  func_0x00010bf67500(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108945e30(&uStack_98);
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[10] = uStack_80;
  param_1[9] = uStack_88;
  param_1[2] = uStack_68;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  *(int *)(param_1 + 3) = (int)uVar2;
  *(int *)((long)param_1 + 0x1c) = (int)uVar3;
  *(int *)(param_1 + 4) = (int)uVar4;
  *(int *)((long)param_1 + 0x24) = (int)uVar5;
  *(int *)(param_1 + 5) = (int)uVar6;
  *(int *)((long)param_1 + 0x2c) = (int)uVar7;
  *(int *)(param_1 + 6) = (int)uVar8;
  *(int *)((long)param_1 + 0x34) = (int)uVar9;
  param_1[8] = uStack_90;
  param_1[7] = uStack_98;
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  _objc_release(uVar1);
  FUN_108945ea4();
  return;
}



/* Entry: 108945e30; end: 108945ea3;  */

void FUN_108945e30(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_108946100(&uStack_38,param_2);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    *(undefined1 *)(param_1 + 3) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108945ea4; end: 108945eab;  */

void FUN_108945ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108945eac; end: 108945f9b; -[ADLExternalAndroidCodecStats initWithMediaCodecName:mediaCodecInitAttemptCount:mediaCodecInitAttemptFailure:mediaCodecExceptionCount:mediaCodecExceptionRecoverableCount:mediaCodecExceptionTransientCount:mediaCodecFallbackDepth:illegalStateExceptionCount:illegalStateExceptionPerSetParametersCount:decoderStats:] */

undefined1 * FUN_108945eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 in_w7;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  func_0x0001089460d0();
  _objc_retain(param_3);
  func_0x0001089460f8();
  puVar1 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar1 + 0x28) = unaff_x19;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = unaff_w25;
    *(undefined4 *)(puVar1 + 0xc) = unaff_w24;
    *(undefined4 *)(puVar1 + 0x10) = unaff_w23;
    *(undefined4 *)(puVar1 + 0x14) = unaff_w22;
    *(undefined4 *)(puVar1 + 0x18) = in_w7;
    *(undefined4 *)(puVar1 + 0x1c) = in_stack_00000000;
    *(undefined4 *)(puVar1 + 0x20) = in_stack_00000004;
    *(undefined4 *)(puVar1 + 0x24) = in_stack_00000008;
    func_0x0001089460f8();
    uVar2 = *(undefined8 *)(puVar1 + 0x30);
    *(undefined8 *)(puVar1 + 0x30) = unaff_x20;
    _objc_release(uVar2);
  }
  _objc_release();
  func_0x0001089460f0();
  return puVar1;
}



/* Entry: 108945f9c; end: 108946043; +[ADLExternalAndroidCodecStats ExternalAndroidCodecStatsWithMediaCodecName:mediaCodecInitAttemptCount:mediaCodecInitAttemptFailure:mediaCodecExceptionCount:mediaCodecExceptionRecoverableCount:mediaCodecExceptionTransientCount:mediaCodecFallbackDepth:illegalStateExceptionCount:illegalStateExceptionPerSetParametersCount:decoderStats:] */

void FUN_108945f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 in_stack_00000000;
  
  func_0x0001089460d0();
  _objc_retain(param_3);
  func_0x0001089460f8();
  _objc_alloc();
  func_0x00010c029060();
  func_0x0001089460c4();
  func_0x0001089460f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_stack_00000000);
  return;
}



/* Entry: 108946044; end: 10894604b; -[ADLExternalAndroidCodecStats mediaCodecName] */

undefined8 FUN_108946044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10894604c; end: 108946053; -[ADLExternalAndroidCodecStats mediaCodecInitAttemptCount] */

undefined4 FUN_10894604c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108946054; end: 10894605b; -[ADLExternalAndroidCodecStats mediaCodecInitAttemptFailure] */

undefined4 FUN_108946054(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10894605c; end: 108946063; -[ADLExternalAndroidCodecStats mediaCodecExceptionCount] */

undefined4 FUN_10894605c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108946064; end: 10894606b; -[ADLExternalAndroidCodecStats mediaCodecExceptionRecoverableCount] */

undefined4 FUN_108946064(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10894606c; end: 108946073; -[ADLExternalAndroidCodecStats mediaCodecExceptionTransientCount] */

undefined4 FUN_10894606c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108946074; end: 10894607b; -[ADLExternalAndroidCodecStats mediaCodecFallbackDepth] */

undefined4 FUN_108946074(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10894607c; end: 108946083; -[ADLExternalAndroidCodecStats illegalStateExceptionCount] */

undefined4 FUN_10894607c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 108946084; end: 10894608b; -[ADLExternalAndroidCodecStats illegalStateExceptionPerSetParametersCount] */

undefined4 FUN_108946084(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 10894608c; end: 108946093; -[ADLExternalAndroidCodecStats decoderStats] */

undefined8 FUN_10894608c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108946094; end: 1089460c3; -[ADLExternalAndroidCodecStats .cxx_destruct] */

void FUN_108946094(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1089460c4; end: 1089460ff;  */

void FUN_1089460c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108946100; end: 108946183;  */

void FUN_108946100(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c15d1e0();
  uVar2 = param_2;
  func_0x00010bf9d980();
  uVar3 = param_2;
  func_0x00010bf9d940();
  uVar4 = param_2;
  func_0x00010bf9d960();
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar2;
  param_1[2] = (int)uVar3;
  *(undefined8 *)(param_1 + 4) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108946184; end: 1089461db; -[ADLExternalAndroidDecoderStats initWithSendToExtBufferCount:extBufferToInputBufferCount:extBufferFullCount:extBufferFullTimeMs:] */

void FUN_108946184(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000108946238();
  puStack_38 = PTR_PTR_1126fd448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = unaff_w22;
    *(undefined4 *)((long)puVar1 + 0xc) = unaff_w21;
    *(undefined4 *)((long)puVar1 + 0x10) = unaff_w20;
    *(undefined8 *)((long)puVar1 + 0x18) = unaff_x19;
  }
  return;
}



/* Entry: 1089461dc; end: 108946217; +[ADLExternalAndroidDecoderStats ExternalAndroidDecoderStatsWithSendToExtBufferCount:extBufferToInputBufferCount:extBufferFullCount:extBufferFullTimeMs:] */

void FUN_1089461dc(void)

{
  func_0x000108946238();
  _objc_alloc();
  func_0x00010c0443e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108946218; end: 10894621f; -[ADLExternalAndroidDecoderStats sendToExtBufferCount] */

undefined4 FUN_108946218(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108946220; end: 108946227; -[ADLExternalAndroidDecoderStats extBufferToInputBufferCount] */

undefined4 FUN_108946220(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108946228; end: 10894622f; -[ADLExternalAndroidDecoderStats extBufferFullCount] */

undefined4 FUN_108946228(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108946230; end: 10894624b; -[ADLExternalAndroidDecoderStats extBufferFullTimeMs] */

undefined8 FUN_108946230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10894624c; end: 10894639b;  */

void FUN_10894624c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  char cStack_68;
  
  func_0x00010894645c();
  uVar1 = unaff_x19;
  func_0x00010c252d60();
  uVar2 = unaff_x19;
  func_0x00010bfee3e0();
  uVar3 = unaff_x19;
  func_0x00010bfee400();
  uVar4 = unaff_x19;
  func_0x00010c25f120();
  uVar5 = unaff_x19;
  func_0x00010c25f140();
  uVar6 = unaff_x19;
  func_0x00010c114b00();
  uVar7 = unaff_x19;
  func_0x00010bf135a0();
  func_0x00010c0c4540();
  _objc_retainAutoreleasedReturnValue();
  FUN_10894639c(&uStack_c0);
  *unaff_x20 = (int)uVar1;
  unaff_x20[1] = (int)uVar2;
  unaff_x20[2] = (int)uVar3;
  unaff_x20[3] = (int)uVar4;
  unaff_x20[4] = (int)uVar5;
  unaff_x20[5] = (int)uVar6;
  *(undefined8 *)(unaff_x20 + 6) = uVar7;
  *(undefined1 *)(unaff_x20 + 8) = 0;
  *(undefined1 *)(unaff_x20 + 0x1e) = 0;
  if (cStack_68 == '\x01') {
    *(undefined8 *)(unaff_x20 + 10) = uStack_b8;
    *(undefined8 *)(unaff_x20 + 8) = uStack_c0;
    *(undefined8 *)(unaff_x20 + 0xc) = uStack_b0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    *(undefined8 *)(unaff_x20 + 0x10) = uStack_a0;
    *(undefined8 *)(unaff_x20 + 0xe) = uStack_a8;
    *(undefined8 *)(unaff_x20 + 0x14) = uStack_90;
    *(undefined8 *)(unaff_x20 + 0x12) = uStack_98;
    *(ulong *)(unaff_x20 + 0x18) = CONCAT71(uStack_7f,uStack_80);
    *(undefined8 *)(unaff_x20 + 0x16) = uStack_88;
    *(undefined8 *)((long)unaff_x20 + 0x69) = uStack_77;
    *(ulong *)((long)unaff_x20 + 0x61) = CONCAT17(uStack_78,uStack_7f);
    *(undefined1 *)(unaff_x20 + 0x1e) = 1;
  }
  FUN_108946434(&uStack_c0);
  _objc_release(unaff_x19);
  func_0x000108946454();
  return;
}



/* Entry: 10894639c; end: 108946433;  */

void FUN_10894639c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  func_0x00010894645c();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 0xb) = 0;
  }
  else {
    FUN_108945cb4(&uStack_78);
    unaff_x20[1] = uStack_70;
    *unaff_x20 = uStack_78;
    unaff_x20[2] = uStack_68;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    unaff_x20[4] = uStack_58;
    unaff_x20[3] = uStack_60;
    unaff_x20[6] = uStack_48;
    unaff_x20[5] = uStack_50;
    unaff_x20[8] = CONCAT71(uStack_37,uStack_38);
    unaff_x20[7] = uStack_40;
    *(undefined8 *)((long)unaff_x20 + 0x49) = uStack_2f;
    *(ulong *)((long)unaff_x20 + 0x41) = CONCAT17(uStack_30,uStack_37);
    *(undefined1 *)(unaff_x20 + 0xb) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  }
  func_0x000108946454();
  return;
}



/* Entry: 108946434; end: 108946453;  */

void FUN_108946434(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 108946454; end: 108946467;  */

void FUN_108946454(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108946468; end: 108946523; -[ADLExternalCodecStats initWithStatus:initAttemptCount:initAttemptFailure:submitFrameCount:submitFrameFailureCount:processFrameFailureCount:avgFrameProcessTimeUs:mediaCodecStats:] */

undefined1 *
FUN_108946468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x00010894661c();
  puStack_58 = PTR_PTR_1126fd450;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    *(undefined4 *)((long)puVar1 + 0x18) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    func_0x00010894661c();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 108946524; end: 1089465c3; +[ADLExternalCodecStats ExternalCodecStatsWithStatus:initAttemptCount:initAttemptFailure:submitFrameCount:submitFrameFailureCount:processFrameFailureCount:avgFrameProcessTimeUs:mediaCodecStats:] */

void FUN_108946524(undefined8 param_1)

{
  undefined8 in_x7;
  
  func_0x00010894661c();
  _objc_alloc(param_1);
  func_0x00010c04c2e0();
  func_0x000108946610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x7);
  return;
}



/* Entry: 1089465c4; end: 1089465cb; -[ADLExternalCodecStats status] */

undefined8 FUN_1089465c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1089465cc; end: 1089465d3; -[ADLExternalCodecStats initAttemptCount] */

undefined4 FUN_1089465cc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1089465d4; end: 1089465db; -[ADLExternalCodecStats initAttemptFailure] */

undefined4 FUN_1089465d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1089465dc; end: 1089465e3; -[ADLExternalCodecStats submitFrameCount] */

undefined4 FUN_1089465dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1089465e4; end: 1089465eb; -[ADLExternalCodecStats submitFrameFailureCount] */

undefined4 FUN_1089465e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1089465ec; end: 1089465f3; -[ADLExternalCodecStats processFrameFailureCount] */

undefined4 FUN_1089465ec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 1089465f4; end: 1089465fb; -[ADLExternalCodecStats avgFrameProcessTimeUs] */

undefined8 FUN_1089465f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1089465fc; end: 108946603; -[ADLExternalCodecStats mediaCodecStats] */

undefined8 FUN_1089465fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108946604; end: 108946623; -[ADLExternalCodecStats .cxx_destruct] */

void FUN_108946604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 108946624; end: 1089466db;  */

void FUN_108946624(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a9baa0;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_1089466dc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108946a78(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1089466dc; end: 1089467db;  */

void FUN_1089466dc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9bae0;
  puVar4[3] = &PTR_DAT_110a9bb80;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  puVar4[4] = *puVar6;
  lVar7 = puVar6[1];
  puVar4[5] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a9bb30;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108946a78(&uStack_50);
  return;
}



/* Entry: 1089467dc; end: 1089467df;  */

void FUN_1089467dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bae0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089467e0; end: 1089467f3;  */

void FUN_1089467e0(void)

{
  FUN_108946a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089467f4; end: 1089467ff;  */

void FUN_1089467f4(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000108946ac0(param_1);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 108946800; end: 10894683f;  */

void FUN_108946800(void)

{
  func_0x000108946ad4();
  return;
}



/* Entry: 108946840; end: 108946897;  */

void FUN_108946840(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000108946ac8();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_108948ec4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66ea0(uVar1,param_2,unaff_x20);
  func_0x000108946aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 108946898; end: 1089468ef;  */

void FUN_108946898(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000108946ac8();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_10894771c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66e80(uVar1,param_2,unaff_x20);
  func_0x000108946aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1089468f0; end: 108946947;  */

void FUN_1089468f0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000108946ac0();
  func_0x00010c255780(*(undefined8 *)(unaff_x19 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 108946948; end: 10894699f;  */

void FUN_108946948(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  func_0x00010bfc3ce0(*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  FUN_10894624c(param_1);
  FUN_108946aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1089469a0; end: 1089469d7;  */

undefined8 FUN_1089469a0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108946ac0();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x00010bfc3d00(uVar1);
  _objc_autoreleasePoolPop(param_1);
  return uVar1;
}



/* Entry: 1089469d8; end: 108946a67;  */

void FUN_1089469d8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x000108946ac0();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 108946a68; end: 108946a77;  */

void FUN_108946a68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bae0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108946a78; end: 108946aa3;  */

long FUN_108946a78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108946aa4; end: 108946adf;  */

void FUN_108946aa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108946ae0; end: 108946b97;  */

void FUN_108946ae0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a9bc18;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108946b98);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108946f30(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108946b98; end: 108946c9b;  */

void FUN_108946b98(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9bc58;
  puVar4[3] = &PTR_DAT_110a9bd08;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  puVar4[4] = *puVar6;
  lVar7 = puVar6[1];
  puVar4[5] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a9bca8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108946f30(&uStack_50);
  return;
}



/* Entry: 108946c9c; end: 108946c9f;  */

void FUN_108946c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bc58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108946ca0; end: 108946cb3;  */

void FUN_108946ca0(void)

{
  FUN_108946f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108946cb4; end: 108946cbf;  */

void FUN_108946cb4(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  FUN_108946f5c(param_1);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 108946cc0; end: 108946cff;  */

void FUN_108946cc0(void)

{
  func_0x000108946f84();
  return;
}



/* Entry: 108946d00; end: 108946d37;  */

void FUN_108946d00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c170580(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108946d38; end: 108946deb;  */

void FUN_108946d38(void)

{
  FUN_108946f5c();
  func_0x000108946f78();
  func_0x00010bfb4ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108946dec; end: 108946e2b;  */

void FUN_108946dec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c1ec9c0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108946e2c; end: 108946e8f;  */

void FUN_108946e2c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bfc3ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10894624c(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108946e90; end: 108946f1f;  */

void FUN_108946e90(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  FUN_108946f5c();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 108946f20; end: 108946f2f;  */

void FUN_108946f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bc58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108946f30; end: 108946f5b;  */

long FUN_108946f30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108946f5c; end: 108946f8f;  */

void FUN_108946f5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 108946f90; end: 10894703b;  */

void FUN_108946f90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a9bdb0;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10894703c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108947428(&uStack_50);
  }
  FUN_108947454();
  return;
}



/* Entry: 10894703c; end: 108947137;  */

void FUN_10894703c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9bdf0;
  puVar4[3] = &PTR_DAT_110a9be78;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  puVar4[4] = *puVar6;
  lVar7 = puVar6[1];
  puVar4[5] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010894746c();
  puVar4[3] = &PTR_FUN_110a9be40;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108947428(&uStack_50);
  return;
}



/* Entry: 108947138; end: 10894713b;  */

void FUN_108947138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9bdf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10894713c; end: 10894714f;  */

void FUN_10894713c(void)

{
  FUN_108947418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108947150; end: 10894715b;  */

long FUN_108947150(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9bdb0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10894715c; end: 10894719b;  */

void FUN_10894715c(void)

{
  func_0x000108947484();
  return;
}



/* Entry: 10894719c; end: 10894725b;  */

void FUN_10894719c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000108947490();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_108945ad0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108945874(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108947474();
  func_0x000108947454();
  FUN_108946ae0(uVar2);
  func_0x00010894746c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}


