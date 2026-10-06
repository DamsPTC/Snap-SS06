/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0042ac6c; end: 0042ac73; -[SCSnapTokenAccessTokenFetchOperation successQueue] */

undefined8 FUN_0042ac6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0042ac74; end: 0042ac7b; -[SCSnapTokenAccessTokenFetchOperation failureQueue] */

undefined8 FUN_0042ac74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0042ac7c; end: 0042ac83; -[SCSnapTokenAccessTokenFetchOperation successBlock] */

undefined8 FUN_0042ac7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0042ac84; end: 0042ac8b; -[SCSnapTokenAccessTokenFetchOperation setSuccessBlock:] */

void FUN_0042ac84(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0042ac8c; end: 0042ac93; -[SCSnapTokenAccessTokenFetchOperation failureBlock] */

undefined8 FUN_0042ac8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0042ac94; end: 0042ac9b; -[SCSnapTokenAccessTokenFetchOperation setFailureBlock:] */

void FUN_0042ac94(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0042ac9c; end: 0042aca3; -[SCSnapTokenAccessTokenFetchOperation metricsInfo] */

undefined8 FUN_0042ac9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 0042aca4; end: 0042acf7; -[SCSnapTokenAccessTokenFetchOperation .cxx_destruct] */

void FUN_0042aca4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 0042acf8; end: 0042ad9b; -[SCSnapTokenStorageLatencyOperation initWithLogger:name:] */

undefined1 *
FUN_0042acf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3b10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0042ad9c; end: 0042adbf; -[SCSnapTokenStorageLatencyOperation begin] */

void FUN_0042ad9c(undefined8 param_1,long param_2)

{
  FUN_007347a4();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 0042adc0; end: 0042adff; -[SCSnapTokenStorageLatencyOperation end] */

void FUN_0042adc0(double param_1,long param_2)

{
  FUN_007347a4();
  if (0.0 < param_1 - *(double *)(param_2 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x007889f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(param_2 + 8),PTR_s_logSnapTokenStorageLatency_forMe_00abcf80,
               *(undefined8 *)(param_2 + 0x10));
    return;
  }
  return;
}



/* Entry: 0042ae00; end: 0042ae2f; -[SCSnapTokenStorageLatencyOperation .cxx_destruct] */

void FUN_0042ae00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0042ae30; end: 0042aea3; -[SCSnapTokenLatencyInstrumentor initWithLogger:] */

undefined1 * FUN_0042ae30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3b18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0042aea4; end: 0042aeab; -[SCSnapTokenLatencyInstrumentor beginStorageLatencyOperationWithName:] */

undefined8 FUN_0042aea4(void)

{
  return 0;
}



/* Entry: 0042aeac; end: 0042aeb7; -[SCSnapTokenLatencyInstrumentor .cxx_destruct] */

void FUN_0042aeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0042aeb8; end: 0042afb3;  */

void FUN_0042aeb8(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  puVar3 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar3 = (ulong *)(*param_2 + 7);
  }
  if ((int)param_2[1] != 0) {
    lVar2 = (long)(int)param_2[1] << 3;
    do {
      uVar1 = *puVar3;
      FUN_0042afb4(*(ulong *)(uVar1 + 0x18) & 0xfffffffffffffffc,
                   *(ulong *)(uVar1 + 0x10) & 0xfffffffffffffffc,*(undefined8 *)(uVar1 + 0x20),
                   *(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),param_6,
                   &uStack_70,param_5);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  FUN_0042c074(param_1,&uStack_70);
  FUN_0042c000(&uStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 0042afb4; end: 0042b287;  */

void FUN_0042afb4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_138 [88];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined **ppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 *apuStack_70 [2];
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_00ac2c90;
  func_0x0077e240();
  apuStack_70[0] = puVar4;
  if ((dword *)puVar4 != &MACH_HEADER.filetype) {
    puVar5 = puVar4;
    FUN_0042b74c();
    ppuStack_c8 = &PTR_FUN_009e3ef0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puStack_a0 = &DAT_00b69408;
    puStack_98 = &DAT_00b69408;
    puStack_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    puStack_80 = (undefined1 *)0x0;
    uStack_78 = 0;
    func_0x00532e08(&puStack_a0,param_2,0);
    FUN_0042b548(auStack_e0,param_8);
    uVar6 = uStack_c0;
    if ((uStack_c0 & 1) != 0) {
      uVar6 = *(ulong *)(uStack_c0 & 0xfffffffffffffffe);
    }
    FUN_00532e74(&puStack_98,auStack_e0,uVar6);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
    puStack_80 = puVar5;
    if (param_3 != 0) {
      puVar7 = puVar5 + (param_3 - param_5);
      if ((long)puVar7 <= (long)puVar5) {
        func_0x007886a0(param_6);
        puVar7 = (undefined1 *)(long)((double)(long)puVar5 + (double)(param_3 - param_4) * 0.8);
      }
      puStack_90 = puVar5 + (param_3 - param_4);
      puStack_88 = puVar7;
    }
    puVar2 = PTR_PTR_00ac2c90;
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.cpusubtype + 3)) {
      FUN_00437f0c(auStack_138,0,&ppuStack_c8);
      func_0x00782f60(puVar2);
      FUN_00437fe8(auStack_138);
    }
    else {
      func_0x0054d0b8(&uStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      FUN_0042b9e0(param_7,puVar4,apuStack_70);
      pppuVar1 = (undefined ***)(param_7 + 0x18);
      if (&ppuStack_c8 != pppuVar1) {
        FUN_00438050(pppuVar1);
        FUN_0043874c(pppuVar1,&ppuStack_c8);
      }
    }
    FUN_00437fe8(&ppuStack_c8);
  }
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  return;
}



/* Entry: 0042b288; end: 0042b547;  */

void FUN_0042b288(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00780ea0();
  if (lVar1 != 0) {
    lVar7 = *plStack_150;
    do {
      lVar6 = 0;
      do {
        if (*plStack_150 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(undefined8 *)(lStack_158 + lVar6 * 8);
        uVar2 = uVar8;
        func_0x0078c3c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0042b548(auStack_178);
        uVar3 = uVar8;
        func_0x0077e1e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0042b548(auStack_190);
        func_0x00782fc0(uVar8);
        uVar4 = param_4;
        func_0x007824e0(param_4);
        uVar5 = param_4;
        func_0x00782500(param_4);
        FUN_0042afb4(auStack_178,auStack_190,uVar8,uVar4,uVar5,param_6,&uStack_120,param_5);
        if (cStack_179 < '\0') {
          __ZdlPv(auStack_190[0]);
        }
        _objc_release(uVar3);
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_2;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  _objc_release(param_2);
  FUN_0042c074(param_1,&uStack_120);
  FUN_0042c000(&uStack_120);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_0042c000(&uStack_120);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  __Unwind_Resume(lVar1);
  _objc_retain();
  lVar7 = lVar1;
  _objc_retainAutorelease(lVar1);
  func_0x0077bcc0();
  lVar6 = lVar1;
  func_0x00788320(lVar1);
  FUN_0042bf60(extraout_x8,lVar7,lVar6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0042b548; end: 0042b5b7;  */

void FUN_0042b548(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_2;
  _objc_retainAutorelease(param_2);
  func_0x0077bcc0();
  uVar2 = param_2;
  func_0x00788320(param_2);
  FUN_0042bf60(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0042b5b8; end: 0042b64f;  */

void FUN_0042b5b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_0042aeb8(param_1,param_2 + 0x18);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042b650; end: 0042b74b;  */

void FUN_0042b650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x007919a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784320(param_2);
  uVar2 = param_2;
  func_0x0078a880(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0042b288(param_1,uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0042b74c; end: 0042b7a3;  */

long FUN_0042b74c(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x007928e0();
  _objc_release(puVar1);
  return (long)param_1;
}



/* Entry: 0042b7a4; end: 0042b91f;  */

void FUN_0042b7a4(long param_1,long param_2)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  if ((param_2 != 6) && (param_2 != 10)) {
    lVar2 = *(long *)(param_1 + 0x20);
    lStack_38 = param_2;
    func_0x0042b938(lVar2,&lStack_38);
    if (lVar2 == 0) {
      ppuStack_90 = &PTR_FUN_009e3ef0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      puStack_68 = &DAT_00b69408;
      puStack_60 = &DAT_00b69408;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      if ((undefined ***)(param_1 + 0x28) != &ppuStack_90) {
        FUN_00438050(&ppuStack_90);
        FUN_0043874c(&ppuStack_90,(undefined ***)(param_1 + 0x28));
      }
      puVar3 = PTR_PTR_00ac2c90;
      func_0x0078c7e0(PTR_PTR_00ac2c90);
      _objc_retainAutoreleasedReturnValue();
      FUN_0042b548(&uStack_a8);
      puVar4 = &uStack_80;
      func_0x0054d0b8();
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        __ZdlPv(*puVar4);
      }
      puVar4[2] = CONCAT17(uStack_91,uStack_98);
      puVar4[1] = uStack_a0;
      *puVar4 = CONCAT71(uStack_a7,uStack_a8);
      uStack_91 = 0;
      uStack_a8 = 0;
      _objc_release(puVar3);
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_0042b9e0(lVar2,lStack_38,&lStack_38);
      pppuVar1 = (undefined ***)(lVar2 + 0x18);
      if (&ppuStack_90 != pppuVar1) {
        FUN_00438050(pppuVar1);
        FUN_0043874c(pppuVar1,&ppuStack_90);
      }
      FUN_00437fe8(&ppuStack_90);
    }
  }
  return;
}



/* Entry: 0042b920; end: 0042b9df;  */

undefined8 * FUN_0042b920(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = &PTR_FUN_009e3ef0;
  if ((*(ulong *)(param_2 + 0x30) & 1) != 0) {
    FUN_0054a3dc((undefined8 *)(param_1 + 0x30),
                 (*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffe) + 8);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_2 + 0x40) != 0) {
    FUN_0054d20c((undefined8 *)(param_1 + 0x38),param_2 + 0x38);
  }
  puVar2 = (ulong *)(param_2 + 0x50);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x00532d08(puVar2,0);
    puVar1 = puVar2;
  }
  *(ulong **)(param_1 + 0x50) = puVar1;
  puVar2 = (ulong *)(param_2 + 0x58);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x00532d08(puVar2,0);
    puVar1 = puVar2;
  }
  *(ulong **)(param_1 + 0x58) = puVar1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  return (undefined8 *)(param_1 + 0x28);
}



/* Entry: 0042b9e0; end: 0042bc1f;  */

char * FUN_0042b9e0(long *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  ulong unaff_x24;
  
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar2 = uVar9 - 1;
    if ((uVar9 & uVar2) == 0) {
      unaff_x24 = uVar2 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = param_2 / uVar9;
        }
        unaff_x24 = param_2 - uVar6 * uVar9;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (pcVar8 = (char *)*plVar5; pcVar8 != (char *)0x0; pcVar8 = *(char **)pcVar8) {
        uVar6 = *(ulong *)(pcVar8 + 8);
        if (uVar6 == param_2) {
          if (*(ulong *)(pcVar8 + 0x10) == param_2) {
            return pcVar8;
          }
        }
        else {
          if ((uVar9 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = param_1 + 2;
  pcVar8 = section_00000068.sectname + 8;
  __Znwm();
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
  pcVar8[4] = '\0';
  pcVar8[5] = '\0';
  pcVar8[6] = '\0';
  pcVar8[7] = '\0';
  *(ulong *)(pcVar8 + 8) = param_2;
  uVar3 = *param_3;
  *(qword *)(pcVar8 + 0x20) = 0;
  *(undefined8 *)(pcVar8 + 0x28) = 0;
  *(undefined8 *)(pcVar8 + 0x10) = uVar3;
  *(undefined ***)(pcVar8 + 0x18) = &PTR_FUN_009e3ef0;
  *(undefined8 *)(pcVar8 + 0x30) = 0;
  *(undefined8 *)(pcVar8 + 0x38) = 0;
  *(undefined **)(pcVar8 + 0x40) = &DAT_00b69408;
  *(undefined **)(pcVar8 + 0x48) = &DAT_00b69408;
  *(undefined8 *)(pcVar8 + 0x58) = 0;
  *(undefined8 *)(pcVar8 + 0x60) = 0;
  *(undefined8 *)(pcVar8 + 0x50) = 0;
  *(undefined4 *)(pcVar8 + 0x68) = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar9) {
      uVar2 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar2 = uVar2 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    FUN_0042bc20(param_1,uVar2);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = param_2 / uVar9;
        }
        unaff_x24 = param_2 - uVar2 * uVar9;
      }
    }
  }
  lVar4 = *param_1;
  puVar7 = *(undefined8 **)(lVar4 + unaff_x24 * 8);
  if (puVar7 == (undefined8 *)0x0) {
    *(long *)pcVar8 = *plVar5;
    *plVar5 = (long)pcVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*(long *)pcVar8 != 0) {
      uVar2 = *(ulong *)(*(long *)pcVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar2 = uVar2 & uVar9 - 1;
      }
      else if (uVar9 <= uVar2) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar2 / uVar9;
        }
        uVar2 = uVar2 - uVar6 * uVar9;
      }
      *(char **)(lVar4 + uVar2 * 8) = pcVar8;
    }
  }
  else {
    *(undefined8 *)pcVar8 = *puVar7;
    *puVar7 = pcVar8;
  }
  param_1[3] = param_1[3] + 1;
  return pcVar8;
}



/* Entry: 0042bc20; end: 0042be23;  */

void FUN_0042bc20(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar8 = param_1[1];
  if (uVar8 < param_2) {
LAB_0042bc68:
    if (param_2 == 0) {
      uVar8 = *param_1;
      *param_1 = 0;
      if (uVar8 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        FUN_0040cee8();
        uVar8 = *param_1;
        *param_1 = param_2;
        if (uVar8 != 0) {
          if ((char)param_1[2] == '\x01') {
            FUN_00437fe8(uVar8 + 0x18);
          }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_0099c620)(uVar8);
          return;
        }
        return;
      }
      uVar8 = param_2 << 3;
      __Znwm();
      uVar2 = *param_1;
      *param_1 = uVar8;
      if (uVar2 != 0) {
        __ZdlPv();
        uVar8 = *param_1;
      }
      param_1[1] = param_2;
      _bzero(uVar8,param_2 << 3);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        uVar2 = plVar4[1];
        uVar3 = param_2 - 1;
        if ((param_2 & uVar3) == 0) {
          uVar2 = uVar2 & uVar3;
        }
        else if (param_2 <= uVar2) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar7 * param_2;
        }
        *(ulong **)(uVar8 + uVar2 * 8) = param_1 + 2;
        plVar5 = (long *)*plVar4;
        while (plVar5 != (long *)0x0) {
          uVar7 = plVar5[1];
          if ((param_2 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          plVar6 = plVar5;
          if (uVar7 != uVar2) {
            if (*(long *)(uVar8 + uVar7 * 8) == 0) {
              *(long **)(uVar8 + uVar7 * 8) = plVar4;
              uVar2 = uVar7;
            }
            else {
              *plVar4 = *plVar5;
              *plVar5 = **(undefined8 **)(uVar8 + uVar7 * 8);
              **(long **)(uVar8 + uVar7 * 8) = (long)plVar5;
              plVar6 = plVar4;
            }
          }
          plVar4 = plVar6;
          plVar5 = (long *)*plVar6;
        }
      }
    }
    return;
  }
  if (param_2 < uVar8) {
    uVar2 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar2) {
      uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar8) goto LAB_0042bc68;
  }
  return;
}



/* Entry: 0042be24; end: 0042be6b;  */

void FUN_0042be24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_00437fe8(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 0042be6c; end: 0042beef;  */

long * FUN_0042be6c(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1[2] & 0x7fffffffffffffff;
  if (param_3 < uVar1) {
    lVar2 = *param_1;
    param_1[1] = param_3;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    *(undefined1 *)(lVar2 + param_3) = 0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              (param_1,uVar1 - 1,(param_3 - uVar1) + 1,param_1[1],0,param_1[1],param_3);
  }
  return param_1;
}



/* Entry: 0042bef0; end: 0042bf5f;  */

long FUN_0042bef0(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x16 || param_3 - 0x16 == 0) {
    *(char *)(param_1 + 0x17) = (char)param_3;
    if (param_3 != 0) {
      _memmove(param_1,param_2,param_3);
    }
    *(undefined1 *)(param_1 + param_3) = 0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              (param_1,0x16,param_3 - 0x16,*(byte *)(param_1 + 0x17) & 0x7f,0,
               *(byte *)(param_1 + 0x17) & 0x7f,param_3);
  }
  return param_1;
}



/* Entry: 0042bf60; end: 0042bfff;  */

long * FUN_0042bf60(long *param_1,undefined8 param_2,ulong param_3)

{
  dword *pdVar1;
  long *plVar2;
  long lVar3;
  
  if (0x7ffffffffffffff6 < param_3) {
    FUN_0040d740();
    func_0x0042c038();
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    plVar2 = param_1;
    if (param_3 == 0) goto LAB_0042bfe0;
  }
  else {
    pdVar1 = &MACH_HEADER.flags;
    if ((dword *)(param_3 | 7) != (dword *)0x17) {
      pdVar1 = (dword *)(param_3 | 7);
    }
    plVar2 = (long *)((long)pdVar1 + 1);
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)((long)pdVar1 + 1) | 0x8000000000000000;
    *param_1 = (long)plVar2;
  }
  _memmove(plVar2,param_2,param_3);
LAB_0042bfe0:
  *(undefined1 *)((long)plVar2 + param_3) = 0;
  return param_1;
}



/* Entry: 0042c000; end: 0042c073;  */

long * FUN_0042c000(long *param_1)

{
  long lVar1;
  
  func_0x0042c038(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0042c074; end: 0042c0e7;  */

undefined8 * FUN_0042c074(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_0042bc20(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_0042c0e8(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 0042c0e8; end: 0042c313;  */

void FUN_0042c0e8(long *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x23;
  
  uVar9 = *param_2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar9) {
          if (plVar5[2] == uVar9) {
            return;
          }
        }
        else {
          if ((uVar8 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar1 * uVar8;
          }
          if (uVar6 != unaff_x23) break;
        }
      }
    }
  }
  plVar5 = param_1 + 2;
  pcVar2 = section_00000068.sectname + 8;
  __Znwm();
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  *(ulong *)(pcVar2 + 8) = uVar9;
  *(undefined8 *)(pcVar2 + 0x10) = *param_3;
  FUN_00437f0c(pcVar2 + 0x18,0,param_3 + 1);
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    FUN_0042bc20(param_1,uVar3);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_1;
  puVar7 = *(undefined8 **)(lVar4 + unaff_x23 * 8);
  if (puVar7 == (undefined8 *)0x0) {
    *(long *)pcVar2 = *plVar5;
    *plVar5 = (long)pcVar2;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar5;
    if (*(long *)pcVar2 != 0) {
      uVar9 = *(ulong *)(*(long *)pcVar2 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(char **)(lVar4 + uVar9 * 8) = pcVar2;
    }
  }
  else {
    *(undefined8 *)pcVar2 = *puVar7;
    *puVar7 = pcVar2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 0042c314; end: 0042c477; -[SCSnapTokenDefaultValidator isValidAccessToken:accessType:] */

/* WARNING: Type propagation algorithm not settling */

bool FUN_0042c314(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *******pppppppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  uVar10 = *(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar10 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar10 + 8) == 0) {
      return false;
    }
  }
  else if (cVar5 == '\0') {
    return false;
  }
  FUN_0042b74c();
  if (((*(long *)(param_3 + 0x38) != 0) && (*(long *)(param_3 + 0x38) <= param_1)) ||
     ((*(long *)(param_3 + 0x48) != 0 && (param_1 < *(long *)(param_3 + 0x48))))) {
    return false;
  }
  puVar7 = PTR_PTR_00ac2c90;
  func_0x0078c7e0(PTR_PTR_00ac2c90);
  _objc_retainAutoreleasedReturnValue();
  FUN_0042b548(&pppppppuStack_58);
  _objc_release(puVar7);
  uVar10 = *(ulong *)(param_3 + 0x10);
  puVar11 = (ulong *)(param_3 + 0x10);
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)(uVar10 + 7);
  }
  iVar6 = *(int *)(param_3 + 0x18);
  puVar1 = puVar11 + iVar6;
  puVar9 = puVar11;
  if (iVar6 != 0) {
    lVar12 = (long)iVar6 << 3;
    uVar10 = uStack_50;
    pppppppuVar2 = pppppppuStack_58;
    if (-1 < (char)bStack_41) {
      uVar10 = (ulong)bStack_41;
      pppppppuVar2 = &pppppppuStack_58;
    }
    do {
      puVar9 = (ulong *)*puVar11;
      bVar4 = *(byte *)((long)puVar9 + 0x17);
      uVar3 = puVar9[1];
      if (-1 < (char)bVar4) {
        uVar3 = (ulong)bVar4;
      }
      if (uVar3 == uVar10) {
        puVar8 = (ulong *)*puVar9;
        if (-1 < (char)bVar4) {
          puVar8 = puVar9;
        }
        _memcmp(puVar8,pppppppuVar2,uVar10);
        puVar9 = puVar11;
        if ((int)puVar8 == 0) break;
      }
      puVar11 = puVar11 + 1;
      lVar12 = lVar12 + -8;
      puVar9 = puVar1;
    } while (lVar12 != 0);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(pppppppuStack_58);
    return puVar1 != puVar9;
  }
  return puVar1 != puVar9;
}



/* Entry: 0042c478; end: 0042c66f; -[SCSnapTokenManager initWithRequestsProvider:circumstanceEngine:logger:userId:internalDelegate:snapTokenStorageBackedUp:isMainAppInstance:source:] */

undefined8
FUN_0042c478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_00ac2c98;
  _objc_alloc(PTR_PTR_00ac2c98);
  func_0x00784c80();
  puVar2 = PTR_PTR_00ac2ca0;
  _objc_alloc_init(PTR_PTR_00ac2ca0);
  puVar3 = PTR_PTR_00ac2ca8;
  _objc_alloc(PTR_PTR_00ac2ca8);
  func_0x00785ae0();
  func_0x00786a80(param_1,param_2,puVar3,puVar3,puVar1,param_4,param_5,param_6,param_7,param_9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 0042c670; end: 0042c69f; -[SCSnapTokenManager initWithRequestsProvider:circumstanceEngine:logger:userId:snapTokenStorageBackedUp:source:] */

void FUN_0042c670(void)

{
  func_0x00786600();
  return;
}



/* Entry: 0042c6a0; end: 0042c6b7; -[SCSnapTokenManager initWithRequestsProvider:logger:userId:snapTokenStorageBackedUp:source:] */

void FUN_0042c6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00786630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_initWithRequestsProvider_circums_00abc690,param_3,0,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 0042c6b8; end: 0042cc4f; -[SCSnapTokenManager initWithTokenStorage:snapTokenStore:networkRequests:circumstanceEngine:logger:userId:internalDelegate:isMainAppInstance:source:] */

undefined8 *
FUN_0042c6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_80 = PTR_PTR_00ac3b20;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[10];
    puVar1[10] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    _objc_alloc_init();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 6) = param_10;
    puVar3 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    func_0x00784a80();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined1 *)(puVar1 + 8) = 0;
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    puVar1[4] = 0;
    _objc_release(uVar2);
    if (param_9 != 0) {
      _objc_retain(param_9);
      uVar2 = puVar1[2];
      puVar1[2] = param_9;
      _objc_release(uVar2);
      uVar2 = puVar1[4];
      func_0x0077f920();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_90,puVar1);
      puVar5 = puVar1;
      func_0x00792b00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x0078a680(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x007933e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_00999f30;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_0042cc50;
      puStack_a8 = &UNK_009e3730;
      _objc_copyWeak(auStack_98,auStack_90);
      _objc_retain(uVar2);
      uStack_a0 = uVar2;
      func_0x00784040(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar8 = puVar1[4];
      func_0x0077f920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00792b00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x0078a680(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x007933e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_c8,auStack_90);
      _objc_retain(uVar8);
      func_0x00783d60(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_c8);
      _objc_release(uVar8);
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_release(uVar2);
    }
    _objc_retain(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 0042cc50; end: 0042ccd7;  */

void FUN_0042cc50(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00782800(*(undefined8 *)(param_1 + 0x20));
    func_0x0078b140(*(undefined8 *)(lVar1 + 0x10));
    if (param_2 == 0) {
      func_0x00788900(*(undefined8 *)(lVar1 + 8));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0042ccd8; end: 0042cd2f;  */

void FUN_0042ccd8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 0042cd30; end: 0042cdab;  */

void FUN_0042cd30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00782800(*(undefined8 *)(param_1 + 0x20));
    func_0x00780420(*(undefined8 *)(lVar1 + 0x10));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0042cdac; end: 0042cdd3; -[SCSnapTokenManager snapTokenStore] */

void FUN_0042cdac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0042cdd4; end: 0042cf17; -[SCSnapTokenManager fetchAccessTokenForAccessType:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_0042cdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  pcVar1 = "fetchAccessTokenForAccessType";
  func_0x00634fc8("fetchAccessTokenForAccessType");
  puVar2 = PTR_PTR_00ac2cb8;
  _objc_alloc(PTR_PTR_00ac2cb8);
  func_0x00784b20();
  func_0x0077dc60(param_1,param_2,puVar2);
  _objc_release(puVar2);
  FUN_00635084(pcVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 0042cf18; end: 0042cf53; -[SCSnapTokenManager fetchAccessTokenTrySyncFirstForAccessType:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_0042cf18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x007831c0(param_1,param_2,0,0,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 0042cf54; end: 0042d4af; -[SCSnapTokenManager fetchAccessTokenTrySyncFirstWithLoggingParams:requestId:accessType:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_0042cf54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
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
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  pcVar1 = "fetchAccessTokenTrySyncFirstWithLoggingParams";
  func_0x00634fc8();
  puVar6 = PTR___NSConcreteStackBlock_00999f30;
  if (param_8 == 0) {
    ppuStack_178 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_00999f30;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_0042d4b0;
    puStack_78 = &UNK_009e3760;
    _objc_retain(param_8);
    ppuStack_178 = &puStack_90;
    lStack_70 = param_8;
    _objc_retainBlock();
    _objc_release(lStack_70);
  }
  if (param_9 == 0) {
    ppuStack_180 = (undefined **)0x0;
  }
  else {
    puStack_b8 = puVar6;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x42d4d0;
    puStack_a0 = &UNK_009e3790;
    _objc_retain(param_9);
    lStack_98 = param_9;
    ppuStack_180 = &puStack_b8;
    _objc_retainBlock();
    _objc_release(lStack_98);
  }
  puVar2 = PTR_PTR_00ac2cb8;
  _objc_alloc();
  func_0x00784b20();
  puVar4 = puVar2;
  func_0x00789420();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fe60();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00789420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fde0();
  _objc_release(puVar4);
  lVar3 = param_1;
  func_0x00787360();
  if ((int)lVar3 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x0077f920(puVar4,param_2,&PTR____CFConstantStringClassReference_00a245a0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00792b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x007933e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
    }
    else {
      func_0x00783f80(&uStack_120,lVar3,param_2,puVar2,lVar5);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00782800(puVar4);
    if ((char)uStack_c8 == '\x01') {
      puVar6 = puVar2;
      func_0x00789420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078e7c0();
      _objc_release(puVar6);
      puVar6 = puVar2;
      func_0x00789420(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078e300();
      _objc_release(puVar6);
      func_0x0077bdc0(param_1,param_2,puVar2,&uStack_120);
    }
    else {
      func_0x0078e920(puVar2,param_2,0);
      puVar7 = puVar2;
      func_0x007924e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar7 != (undefined *)0x0) {
        puStack_148 = puVar6;
        uStack_140 = 0xc2000000;
        uStack_138 = 0x42d4e0;
        puStack_130 = &UNK_009e3760;
        _objc_retain(param_8);
        lStack_128 = param_8;
        func_0x007908a0(puVar2,param_2,&puStack_148);
        _objc_release(lStack_128);
      }
      puVar7 = puVar2;
      func_0x007830a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar7 != (undefined *)0x0) {
        puStack_170 = puVar6;
        uStack_168 = 0xc2000000;
        uStack_160 = 0x42d4f0;
        puStack_158 = &UNK_009e3790;
        _objc_retain(param_9);
        lStack_150 = param_9;
        func_0x0078dee0(puVar2,param_2,&puStack_170);
        _objc_release(lStack_150);
      }
      func_0x0077dc60(param_1,param_2,puVar2);
    }
    if ((char)uStack_c8 == '\x01') {
      FUN_00437fe8(&uStack_120);
    }
  }
  else {
    func_0x00788920(*(undefined8 *)(param_1 + 8));
    puVar4 = PTR_PTR_00ac2c78;
    func_0x0077c580(PTR_PTR_00ac2c78,param_2,6,&PTR____CFConstantStringClassReference_00a24580,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077bda0(param_1,param_2,puVar2,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(ppuStack_180);
  _objc_release(ppuStack_178);
  FUN_00635084(pcVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0042d4b0; end: 0042d4ff;  */

void FUN_0042d4b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0042d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,1);
  return;
}



/* Entry: 0042d500; end: 0042d737; -[SCSnapTokenManager invalidate] */

void FUN_0042d500(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  pcVar1 = "invalidate";
  FUN_00634ecc();
  pcStack_38 = pcVar1;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x0078a680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a560();
  }
  else {
    lVar2 = param_1;
    func_0x0077ce00();
    if ((int)lVar2 == 0) {
      func_0x0078a680(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078a560();
    }
    else {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x0077f920(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00792b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x007933e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00784200(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar2);
      func_0x00782800(lVar3);
      func_0x0078a680(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078a560();
      _objc_release(param_1);
      param_1 = lVar3;
    }
  }
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 0042d738; end: 0042d7cf;  */

void FUN_0042d738(long param_1)

{
  FUN_00634f88(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0078e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setInvalidated__00abe6e0,1);
  return;
}



/* Entry: 0042d7d0; end: 0042d9ef; -[SCSnapTokenManager getRefreshTokenWithCompletionBlock:] */

void FUN_0042d7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077f920();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  lVar2 = param_1;
  func_0x0077d5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00792b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x0078a680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x007933e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar1);
  _objc_retain(lVar2);
  _objc_retain(param_3);
  func_0x00784040(lVar3);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 0042d9f0; end: 0042da6f;  */

void FUN_0042d9f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00782800(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0042da70; end: 0042daef;  */

void FUN_0042da70(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 0042daf0; end: 0042dc53; +[SCSnapTokenManager _createNSErrorWithCode:errorReason:origError:] */

void FUN_0042daf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  func_0x0078f4e0();
  puVar2 = PTR_PTR_00ac2ae0;
  func_0x0077ba40(PTR_PTR_00ac2ae0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1,param_2,puVar2,*(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38);
  _objc_release(puVar2);
  if (param_5 != 0) {
    func_0x0078f4e0(puVar1,param_2,param_5,*(undefined8 *)PTR__NSUnderlyingErrorKey_00998fa8);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
  puVar3 = PTR_PTR_00ac2ad8;
  func_0x007823e0(PTR_PTR_00ac2ad8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782e40(puVar2,param_2,puVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0042dc54; end: 0042dd23; -[SCSnapTokenManager _handleInvalidate] */

void FUN_0042dc54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077f920(uVar1,param_2,&PTR____CFConstantStringClassReference_00a245c0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00792b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x007933e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784200(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00782800(uVar1);
  func_0x0078e740(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0042dd24; end: 0042e13b; -[SCSnapTokenManager _startAccessTokenFetchForOp:] */

void FUN_0042dd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [88];
  char cStack_d8;
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
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  pcVar1 = "_startAccessTokenFetchForOp";
  func_0x00634fc8("_startAccessTokenFetchForOp");
  lVar2 = param_1;
  func_0x00787360();
  if ((int)lVar2 == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar5 = param_3;
    func_0x00789420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00787be0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if ((int)uVar4 == 0) {
      func_0x0077f920();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00792b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x007933e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078a680(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_138,auStack_68);
      _objc_retain(uVar5);
      _objc_retain(param_3);
      func_0x00783c80(lVar2);
      _objc_release(param_1);
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(param_3);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_138);
    }
    else {
      func_0x0077f920();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00792b00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x007933e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e220(param_3);
      if (lVar2 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00788400(&uStack_d0,lVar2);
      }
      _objc_release(lVar6);
      _objc_release(lVar2);
      if ((char)uStack_78 == '\x01') {
        uVar4 = param_3;
        func_0x00789420(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078e300();
        _objc_release(uVar4);
      }
      func_0x00782800(uVar5);
      FUN_004307bc(auStack_130,&uStack_d0);
      func_0x0077ca00(param_1);
      if (cStack_d8 == '\x01') {
        FUN_00437fe8(auStack_130);
      }
      if ((char)uStack_78 == '\x01') {
        FUN_00437fe8(&uStack_d0);
      }
    }
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_68);
  }
  else {
    puVar3 = PTR_PTR_00ac2c78;
    func_0x0077c580(PTR_PTR_00ac2c78);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077bda0(param_1);
    _objc_release(puVar3);
  }
  FUN_00635084(pcVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 0042e13c; end: 0042e1ef;  */

void FUN_0042e13c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_90 [88];
  char cStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00782800(*(undefined8 *)(param_1 + 0x20));
    FUN_004307bc(auStack_90,param_2);
    func_0x0077ca00(lVar1);
    if (cStack_38 == '\x01') {
      FUN_00437fe8(auStack_90);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 0042e1f0; end: 0042e257;  */

void FUN_0042e1f0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 0042e258; end: 0042e46f; -[SCSnapTokenManager _fetchAccessTokenFromStorageDoneForOp:token:] */

void FUN_0042e258(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  pcVar1 = "_fetchAccessTokenFromStorageDoneForOp";
  func_0x00634fc8("_fetchAccessTokenFromStorageDoneForOp");
  if (*(char *)(param_4 + 0x58) == '\x01') {
    lVar2 = param_3;
    func_0x00789420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e7c0();
    _objc_release(lVar2);
    func_0x0077bdc0(param_1,param_2,param_3,param_4);
    uVar3 = param_1;
    func_0x0077dbe0(param_1,param_2,param_4);
    if ((int)uVar3 != 0) {
      lVar2 = param_3;
      func_0x00789420();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00783fa0();
      _objc_release(lVar2);
      if (lVar4 == 2) {
        ppuVar6 = &PTR____CFConstantStringClassReference_00a24640;
      }
      else {
        lVar2 = param_3;
        func_0x00789420();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00783fa0();
        _objc_release(lVar2);
        if (lVar4 == 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_00a24660;
        }
        else {
          lVar2 = param_3;
          func_0x00789420();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          func_0x00783fa0();
          _objc_release(lVar2);
          ppuVar6 = &PTR____CFConstantStringClassReference_00a24680;
          if (lVar4 != 1) {
            ppuVar6 = &PTR____CFConstantStringClassReference_00a246a0;
          }
        }
      }
      lVar2 = param_3;
      func_0x0077e220(param_3);
      lVar4 = param_3;
      func_0x00789420(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x007881a0();
      func_0x0077c940(param_1,param_2,lVar2,ppuVar6,0,lVar5,0);
      _objc_release(lVar4);
    }
  }
  else {
    func_0x0077cb60(param_1,param_2,param_3);
  }
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042e470; end: 0042e4a7; -[SCSnapTokenManager _shouldPrefetchForToken:] */

undefined8 FUN_0042e470(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x40);
  if ((lVar2 == 0) || (FUN_0042b74c(), param_1 < lVar2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 0042e4a8; end: 0042e677; -[SCSnapTokenManager doPrefetchForAccessType:referrer:tryDiskFirst:lastFetchTokenAgeInSeconds:successBlock:] */

void FUN_0042e4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  pcVar1 = "doPrefetchForAccessType";
  func_0x00634fc8("doPrefetchForAccessType");
  uVar2 = param_1;
  func_0x0078a680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x007875c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar2 = param_1;
    func_0x0078a680(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_0042e678;
    puStack_98 = &UNK_009e3820;
    uStack_90 = param_1;
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_68 = (undefined1)param_5;
    uStack_88 = param_4;
    uStack_70 = param_6;
    _objc_retain(param_7);
    uStack_80 = param_7;
    func_0x0078a560(uVar2,param_2,&puStack_b0);
    _objc_release(uVar2);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
  }
  else {
    func_0x0077c940(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  FUN_00635084(pcVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 0042e678; end: 0042e68f;  */

void FUN_0042e678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__executeDoPrefetchForAccessType__00ab9f48,
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 0042e690; end: 0042ea53; -[SCSnapTokenManager _executeDoPrefetchForAccessType:referrer:tryDiskFirst:lastFetchTokenAgeInSeconds:successBlock:] */

void FUN_0042e690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  pcVar1 = "_executeDoPrefetchForAccessType";
  func_0x00634fc8();
  puVar2 = PTR_PTR_00ac2c90;
  func_0x00791680(PTR_PTR_00ac2c90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0077d5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_00ac2cb8;
  _objc_alloc(PTR_PTR_00ac2cb8);
  uVar5 = param_1;
  func_0x0078a680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0078ace0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x0078a680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x0078ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_00999f30;
  puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_0042ea54;
  puStack_98 = &UNK_009e3850;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  _objc_retain(puVar2);
  puStack_e0 = puVar9;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x42ea68;
  puStack_c8 = &UNK_009e3880;
  puStack_88 = puVar2;
  _objc_retain(uVar3);
  uStack_c0 = uVar3;
  _objc_retain(puVar2);
  puStack_b8 = puVar2;
  func_0x00784b20(puVar4,param_2,param_3,1,0,0,uVar6,uVar8,&puStack_b0,&puStack_e0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar9 = puVar4;
  func_0x00789420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fba0();
  _objc_release(puVar9);
  puVar9 = puVar4;
  func_0x00789420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078eb00();
  _objc_release(puVar9);
  if (param_5 == 0) {
    func_0x0077cb60(param_1,param_2,puVar4);
  }
  else {
    func_0x0077dc60(param_1,param_2,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puStack_b8);
  _objc_release(uStack_c0);
  _objc_release(puStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_80);
  _objc_release(uVar3);
  _objc_release(puVar2);
  FUN_00635084(pcVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 0042ea54; end: 0042ea6b;  */

void FUN_0042ea54(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0042ea60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 0042ea6c; end: 0042eabb;  */

void FUN_0042ea6c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 0042eabc; end: 0042eecf; -[SCSnapTokenManager _getRefreshTokenToExchangeForOp:] */

void FUN_0042eabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [8];
  char *pcStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  char *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  pcVar2 = "_getRefreshTokenToExchangeForOp";
  FUN_00634ecc();
  pcVar3 = pcVar2;
  _dispatch_group_create();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077f920();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_0042eed0;
  uStack_88 = 0x42eee0;
  uStack_80 = 0;
  _dispatch_group_enter(pcVar3);
  lVar5 = param_1;
  func_0x00792b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x0078a680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x007933e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  puStack_d8 = PTR___NSConcreteStackBlock_00999f30;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_0042eee8;
  puStack_c0 = &UNK_009e38b0;
  puStack_b0 = &uStack_a8;
  _objc_retain(pcVar3);
  pcStack_b8 = pcVar3;
  func_0x00784040(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  _dispatch_group_enter(pcVar3);
  lVar5 = param_1;
  func_0x00792b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x0078a680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x007933e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_0042ef44;
  puStack_110 = &UNK_009e38b0;
  puStack_100 = &uStack_f8;
  _objc_retain(pcVar3);
  pcStack_108 = pcVar3;
  func_0x00783d60(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_initWeak(auStack_130,param_1);
  func_0x0078a680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x0078ace0();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_0042efa8;
  puStack_168 = &UNK_009e38e0;
  _objc_copyWeak(auStack_140,auStack_130);
  puStack_150 = &uStack_a8;
  puStack_148 = &uStack_f8;
  uStack_160 = uVar4;
  uStack_158 = param_3;
  pcStack_138 = pcVar2;
  _objc_retain(param_3);
  _objc_retain(uVar4);
  _dispatch_group_notify(pcVar3,lVar5,&puStack_180);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_130);
  _objc_release(pcStack_108);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(pcStack_b8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(pcVar3);
  return;
}



/* Entry: 0042eed0; end: 0042eee7;  */

void FUN_0042eed0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 0042eee8; end: 0042ef43;  */

void FUN_0042eee8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0042ef44; end: 0042efa7;  */

void FUN_0042ef44(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x007882e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 == 0;
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0042efa8; end: 0042f01b;  */

void FUN_0042efa8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00782800(*(undefined8 *)(param_1 + 0x20));
    FUN_00634f88(*(undefined8 *)(param_1 + 0x48));
    func_0x0077d720(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
                    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0042f01c; end: 0042f0bb;  */

void FUN_0042f01c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 0042f0bc; end: 0042f153; -[SCSnapTokenManager _refreshTokenFetchDoneForOp:refreshToken:needsCloud1TLToken:] */

void FUN_0042f0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x007882e0();
  if (lVar1 == 0) {
    func_0x0077cce0(param_1,param_2,param_3);
  }
  else {
    func_0x0077d440(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042f154; end: 0042f1f3; -[SCSnapTokenManager _handleMissingRefreshTokenForOp:] */

void FUN_0042f154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x0077c080(param_1);
  puVar1 = PTR_PTR_00ac2c78;
  func_0x0077c580(PTR_PTR_00ac2c78,param_2,0,&PTR____CFConstantStringClassReference_00a246c0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077bda0(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042f1f4; end: 0042f46b; -[SCSnapTokenManager _networkFetchAccessTokenForOp:refreshToken:needsCloud1TLToken:] */

void FUN_0042f1f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x0078a520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00780e80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x0078a520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00789420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e300();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    func_0x00788680(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1;
    func_0x007898e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_00ac2c90;
    func_0x0078a9c0(PTR_PTR_00ac2c90);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a680(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_00999f30;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_0042f46c;
    puStack_78 = &UNK_009e3910;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x007831e0(lVar1);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0042f46c; end: 0042f4bb;  */

void FUN_0042f46c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x0077cc80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0042f4bc; end: 0042f4cf;  */

void FUN_0042f4bc(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 0042f4d0; end: 0042f58b;  */

void FUN_0042f4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_00ac2c78;
    func_0x0077c580(PTR_PTR_00ac2c78);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077cc60(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042f58c; end: 0042fa0b; -[SCSnapTokenManager _handleAccessTokenNetworkFetchSuccessForResponse:] */

void FUN_0042f58c(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *unaff_x20;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *apuStack_118 [21];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar7 = param_1;
  func_0x00787360();
  if ((int)ppuVar7 == 0) {
    ppuVar7 = param_1;
    func_0x007933e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_0042b5b8(apuStack_118,param_3,ppuVar7,param_1[1]);
    _objc_release(ppuVar7);
    puVar4 = param_1[4];
    func_0x0077f920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR_s_initWithExecutionStartDateNanos__00ac2000;
    unaff_x20 = PTR__OBJC_CLASS___NSString_00ac2988;
    puStack_170 = puVar4;
    func_0x00792220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x20;
    func_0x007882e0();
    if (puVar4 != (undefined *)0x0) {
      ppuVar1 = param_1;
      func_0x00792b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_1;
      func_0x007933e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078d500(ppuVar1);
      _objc_release(puVar4);
      _objc_release(unaff_x24);
      _objc_release(ppuVar1);
      func_0x00780420(param_1[2]);
    }
    ppuVar1 = param_1;
    func_0x00792b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x007933e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c9e0(ppuVar1);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    func_0x00782800(puStack_170);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    ppuVar2 = param_1;
    func_0x0078a520();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &puStack_160;
    ppuVar8 = ppuVar2;
    func_0x00780ea0();
    if (ppuVar8 != (undefined **)0x0) {
      unaff_x27 = *plStack_150;
      unaff_x28 = &PTR_s_initWithExecutionStartDateNanos__00ac2000;
      unaff_x24 = &PTR____CFConstantStringClassReference_00a24740;
      do {
        ppuVar7 = (undefined **)0x0;
        do {
          if (*plStack_150 != unaff_x27) {
            _objc_enumerationMutation(ppuVar2);
          }
          uVar9 = *(undefined8 *)(lStack_158 + (long)ppuVar7 * 8);
          func_0x0077e220();
          ppuVar1 = apuStack_118;
          uStack_168 = uVar9;
          FUN_00430828(ppuVar1,&uStack_168);
          if (ppuVar1 == (undefined **)0x0) {
            puVar4 = PTR_PTR_00ac2c78;
            func_0x0077c580(PTR_PTR_00ac2c78);
            _objc_retainAutoreleasedReturnValue();
            func_0x0077bda0(param_1);
            _objc_release(puVar4);
          }
          else {
            func_0x0077bdc0(param_1);
          }
          ppuVar7 = (undefined **)((long)ppuVar7 + 1);
        } while (ppuVar8 != ppuVar7);
        ppuVar1 = &puStack_160;
        ppuVar8 = ppuVar2;
        func_0x00780ea0();
      } while (ppuVar8 != (undefined **)0x0);
    }
    unaff_x23 = (undefined **)0x0;
    _objc_release(ppuVar2);
    func_0x0078a520();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078b280();
    _objc_release(param_1);
    _objc_release(unaff_x20);
    _objc_release(puStack_170);
    ppuVar2 = apuStack_118;
    FUN_0042c000();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
      return;
    }
  }
  else {
    func_0x00788920(param_1[1]);
    ppuVar8 = (undefined **)PTR_PTR_00ac2c78;
    func_0x0077c580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar8;
    func_0x0077cc60();
    ppuVar2 = param_1;
    ppuVar7 = ppuVar8;
    param_1 = param_3;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) goto code_r0x0077aa60;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(unaff_x20);
  _objc_release(puStack_170);
  FUN_0042c000(apuStack_118);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  ppuVar8 = &puStack_2b0;
  pcStack_178 = FUN_0042fa0c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_1c0 = unaff_x28;
  lStack_1b8 = unaff_x27;
  ppuStack_1b0 = unaff_x24;
  ppuStack_1a8 = unaff_x23;
  ppuStack_1a0 = param_1;
  ppuStack_198 = ppuVar2;
  puStack_190 = unaff_x20;
  ppuStack_188 = ppuVar7;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  ppuVar7 = ppuVar1;
  func_0x00780460();
  if ((ppuVar7 == (undefined **)((long)&MACH_HEADER.magic + 1)) &&
     (*(char *)(ppuVar3 + 6) == '\x01')) {
    puVar4 = ppuVar3[4];
    func_0x0077f920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar3;
    func_0x00792b00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_250 = 0x3f800000;
    unaff_x23 = ppuVar3;
    func_0x007933e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x007905e0(ppuVar7);
    _objc_release(unaff_x23);
    FUN_0042c000(&uStack_270);
    _objc_release(ppuVar7);
    func_0x00782800(puVar4);
    _objc_release(puVar4);
  }
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  puStack_2b0 = (undefined *)0x0;
  uStack_298 = 0;
  puStack_2a0 = (undefined8 *)0x0;
  ppuVar7 = ppuVar3;
  func_0x0078a520();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar7;
  func_0x00780ea0();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*puStack_2a0;
    do {
      ppuVar8 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_2a0 != unaff_x23) {
          _objc_enumerationMutation(ppuVar7);
        }
        func_0x0077bda0(ppuVar3);
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar2 != ppuVar8);
      ppuVar2 = ppuVar7;
      ppuVar8 = &puStack_2b0;
      func_0x00780ea0();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar7);
  func_0x0078a520();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b280();
  _objc_release(ppuVar3);
  ppuVar7 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  FUN_0042c000(&uStack_270);
  _objc_release(0);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  __Unwind_Resume();
  _objc_retain(ppuVar8);
  pcVar5 = "_accessTokenDoneWithSuccessForOp";
  func_0x00634fc8("_accessTokenDoneWithSuccessForOp");
  puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = ppuVar7[1];
  ppuVar7 = ppuVar8;
  func_0x00789420(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x007886e0(puVar4);
  _objc_release(ppuVar7);
  puVar4 = PTR_PTR_00ac2c90;
  func_0x0077e220(ppuVar8);
  func_0x00791680(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c6a0(ppuVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
  FUN_00635084(pcVar5);
code_r0x0077aa60:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(ppuVar8);
  return;
}



/* Entry: 0042fa0c; end: 0042fc77; -[SCSnapTokenManager _handleAccessTokenNetworkFetchForError:] */

void FUN_0042fa0c(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long unaff_x23;
  long lVar11;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00780460();
  if ((lVar2 == 1) && (*(char *)(param_1 + 0x30) == '\x01')) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x0077f920(uVar3,param_2,&PTR____CFConstantStringClassReference_00a24760);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00792b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0x3f800000;
    unaff_x23 = param_1;
    func_0x007933e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x007905e0(lVar2,param_2,0,&uStack_100,unaff_x23);
    _objc_release(unaff_x23);
    FUN_0042c000(&uStack_100);
    _objc_release(lVar2);
    func_0x00782800(uVar3);
    _objc_release(uVar3);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar2 = param_1;
  func_0x0078a520();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_d8;
  lVar4 = lVar2;
  func_0x00780ea0();
  if (lVar4 != 0) {
    unaff_x23 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != unaff_x23) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x0077bda0(param_1,param_2,*(undefined8 *)(lStack_138 + lVar11 * 8),param_3);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar7 = auStack_d8;
      lVar4 = lVar2;
      puVar9 = &uStack_140;
      func_0x00780ea0(lVar2,param_2,&uStack_140,puVar7,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  func_0x0078a520();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b280();
  _objc_release(param_1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  FUN_0042c000(&uStack_100);
  _objc_release(0);
  _objc_release(param_1);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar9);
  pcVar5 = "_accessTokenDoneWithSuccessForOp";
  func_0x00634fc8("_accessTokenDoneWithSuccessForOp");
  puVar10 = (ulong *)(*(ulong *)(puVar7 + 0x28) & 0xfffffffffffffffc);
  puVar1 = (ulong *)*puVar10;
  if (-1 < *(char *)((long)puVar10 + 0x17)) {
    puVar1 = puVar10;
  }
  puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + 8);
  puVar7 = (undefined1 *)puVar9;
  func_0x00789420(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x007886e0(uVar3,param_2,puVar7,puVar6);
  _objc_release(puVar7);
  puVar8 = PTR_PTR_00ac2c90;
  puVar7 = (undefined1 *)puVar9;
  func_0x0077e220(puVar9);
  func_0x00791680(puVar8,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c6a0(puVar9,param_2,puVar6);
  _objc_release(puVar8);
  _objc_release(puVar6);
  FUN_00635084(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar9);
  return;
}



/* Entry: 0042fc78; end: 0042fdd3; -[SCSnapTokenManager _accessTokenDoneWithSuccessForOp:accessToken:] */

void FUN_0042fc78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  pcVar2 = "_accessTokenDoneWithSuccessForOp";
  func_0x00634fc8("_accessTokenDoneWithSuccessForOp");
  puVar6 = (ulong *)(*(ulong *)(param_4 + 0x28) & 0xfffffffffffffffc);
  puVar1 = (ulong *)*puVar6;
  if (-1 < *(char *)((long)puVar6 + 0x17)) {
    puVar1 = puVar6;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00789420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x007886e0(uVar7,param_2,uVar4,puVar3);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_00ac2c90;
  uVar4 = param_3;
  func_0x0077e220(param_3);
  func_0x00791680(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c6a0(param_3,param_2,puVar3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  FUN_00635084(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042fdd4; end: 0042fed7; -[SCSnapTokenManager _accessTokenDoneWithErrorForOp:error:] */

void FUN_0042fdd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_00ac2c90;
  uVar1 = param_3;
  func_0x0077e220(param_3);
  func_0x00791680(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_4;
  func_0x00780460(param_4);
  uVar3 = param_3;
  func_0x00789420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x007886c0(uVar4,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  func_0x0078c660(param_3,param_2,param_4);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0042fed8; end: 0042ff63; -[SCSnapTokenManager _assertMissingRefreshToken] */

long FUN_0042fed8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0077fbe0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 0042ff64; end: 0042ffef; -[SCSnapTokenManager _immediateSnaptokenStorageCleanupOnLogout] */

long FUN_0042ff64(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0077fbe0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 0042fff0; end: 00430157; -[SCSnapTokenManager cleanOldTokensOnLogin] */

void FUN_0042fff0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar1 = "cleanOldTokensOnLogin";
  func_0x00634fc8("cleanOldTokensOnLogin");
  lVar2 = param_1;
  func_0x007933e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x007882e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x0077f920(uVar4,param_2,&PTR____CFConstantStringClassReference_00a24760);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00792b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0x3f800000;
    func_0x007933e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x007905e0(lVar2,param_2,0,&uStack_60,param_1);
    _objc_release(param_1);
    FUN_0042c000(&uStack_60);
    _objc_release(lVar2);
    func_0x00782800(uVar4);
    _objc_release(uVar4);
  }
  FUN_00635084(pcVar1);
  return;
}



/* Entry: 00430158; end: 0043029f; -[SCSnapTokenManager clearAccessTokens] */

bool FUN_00430158(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  pcVar1 = "clearAccessTokens";
  func_0x00634fc8("clearAccessTokens");
  lVar2 = param_1;
  func_0x007933e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x007882e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x0077f920(uVar4,param_2,&PTR____CFConstantStringClassReference_00a247c0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00792b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x007933e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x007802a0(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
    func_0x00782800(uVar4);
    _objc_release(uVar4);
  }
  FUN_00635084(pcVar1);
  return lVar3 != 0;
}



/* Entry: 004302a0; end: 004303e7; -[SCSnapTokenManager clearInMemoryAccessTokens] */

bool FUN_004302a0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  pcVar1 = "clearInMemoryAccessTokens";
  func_0x00634fc8("clearInMemoryAccessTokens");
  lVar2 = param_1;
  func_0x007933e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x007882e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x0077f920(uVar4,param_2,&PTR____CFConstantStringClassReference_00a247e0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00792b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x007933e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x007802c0(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
    func_0x00782800(uVar4);
    _objc_release(uVar4);
  }
  FUN_00635084(pcVar1);
  return lVar3 != 0;
}



/* Entry: 004303e8; end: 004306b3; -[SCSnapTokenManager invalidateApiGwAccessToken] */

bool FUN_004303e8(long param_1)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_110 [88];
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar2 = "invalidateApiGwAccessToken";
  func_0x00634fc8("invalidateApiGwAccessToken");
  lVar7 = param_1;
  func_0x007933e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x007882e0();
  _objc_release(lVar7);
  bVar1 = false;
  if (lVar3 == 0) goto LAB_004305c8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077f920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00792b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x007933e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00783ca0(&uStack_b0,lVar7);
  }
  _objc_release(lVar3);
  _objc_release(lVar7);
  uVar5 = uVar4;
  func_0x00782800();
  if ((char)uStack_58 == '\x01') {
    lVar7 = (long)*(char *)((uStack_88 & 0xfffffffffffffffc) + 0x17);
    if (lVar7 < 0) {
      lVar7 = *(long *)((uStack_88 & 0xfffffffffffffffc) + 8);
    }
    bVar1 = lVar7 != 0;
    if (lVar7 != 0) {
      FUN_0042b74c();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uStack_78 = uVar5;
      func_0x0077f920(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00792b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x007933e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_004307bc(auStack_110,&uStack_b0);
      func_0x0078c9c0(lVar7);
      if (cStack_b8 == '\x01') {
        FUN_00437fe8(auStack_110);
      }
      _objc_release(param_1);
      _objc_release(lVar7);
      func_0x00782800(uVar6);
      _objc_release(uVar6);
      if ((char)uStack_58 != '\x01') {
        bVar1 = true;
        goto LAB_004305c0;
      }
    }
    FUN_00437fe8(&uStack_b0);
  }
  else {
    bVar1 = false;
  }
LAB_004305c0:
  _objc_release(uVar4);
LAB_004305c8:
  FUN_00635084(pcVar2);
  return bVar1;
}



/* Entry: 004306b4; end: 004306e7; -[SCSnapTokenManager _prefix] */

void FUN_004306b4(undefined8 param_1,undefined8 param_2)

{
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a24840);
  return;
}



/* Entry: 004306e8; end: 004306ef; -[SCSnapTokenManager pendingAccessTokenFetchWaiters] */

undefined8 FUN_004306e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 004306f0; end: 004306fb; -[SCSnapTokenManager invalidated] */

byte FUN_004306f0(long param_1)

{
  return *(byte *)(param_1 + 0x40) & 1;
}



/* Entry: 004306fc; end: 00430703; -[SCSnapTokenManager setInvalidated:] */

void FUN_004306fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 00430704; end: 0043070b; -[SCSnapTokenManager tokenStorage] */

undefined8 FUN_00430704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 0043070c; end: 00430713; -[SCSnapTokenManager networkRequests] */

undefined8 FUN_0043070c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 00430714; end: 0043071b; -[SCSnapTokenManager userId] */

undefined8 FUN_00430714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 0043071c; end: 00430723; -[SCSnapTokenManager performer] */

undefined8 FUN_0043071c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 00430724; end: 004307bb; -[SCSnapTokenManager .cxx_destruct] */

void FUN_00430724(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004307bc; end: 00430827;  */

undefined1 * FUN_004307bc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_00437f0c(param_1,0,param_2);
    param_1[0x58] = 1;
  }
  return param_1;
}



/* Entry: 00430828; end: 004308cf;  */

long * FUN_00430828(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 004308d0; end: 004309ff; -[SCSnapTokenNetworkRequests initWithAuthenticatedRequestsProvider:logger:circumstanceEngine:] */

undefined1 *
FUN_004308d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac3b28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    pcVar3 = "com.snapchat.snaptoken.requestbuild.serial";
    _dispatch_queue_create("com.snapchat.snaptoken.requestbuild.serial",0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(char **)((long)puVar1 + 0x20) = pcVar3;
    _objc_release(uVar2);
    pcVar3 = "com.snapchat.snaptoken.attestation.serial";
    _dispatch_queue_create("com.snapchat.snaptoken.attestation.serial",0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(char **)((long)puVar1 + 0x18) = pcVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00430a00; end: 00430beb; -[SCSnapTokenNetworkRequests fetchAccessTokensForServerScopeNames:refreshToken:needsCloud1TLToken:op:completionPerformer:successBlock:failureBlock:] */

void FUN_00430a00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x0077dba0();
  if ((int)lVar1 == 0) {
    func_0x0077c1e0(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_c0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_00430bec;
    puStack_a8 = &UNK_009e3970;
    lStack_a0 = param_1;
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(param_4);
    uStack_90 = param_4;
    uStack_68 = param_5;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_retain(param_7);
    uStack_80 = param_7;
    _objc_retain(param_8);
    uStack_78 = param_8;
    _objc_retain(param_9);
    uStack_70 = param_9;
    _dispatch_async(uVar2,&puStack_c0);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00430bec; end: 00430c23;  */

void FUN_00430bec(long param_1,undefined8 param_2)

{
  func_0x0077c1e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                  *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 00430c24; end: 00430cd7;  */

void FUN_00430c24(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  return;
}


