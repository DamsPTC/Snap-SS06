/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004a1600; end: 1004a16db; -[SCNGrpcHeader initWithKey:value:] */

undefined1 *
FUN_1004a1600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270b0b8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004a16dc; end: 1004a184f; -[SCNGrpcAuthContext initWithHeaders:authTokenErrorCode:argosTokenErrorCode:argosLatencyInMs:authLatencyInMs:] */

undefined1 *
FUN_1004a16dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_11270b098;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004a1850; end: 1004a1913; -[SCNGrpcAuthContextCallback onComplete:] */

void FUN_1004a1850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_68 [56];
  
  func_0x000107c61174(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_1004a1914(auStack_68,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_68);
  func_0x0001004a21bc(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004a1914; end: 1004a1abb;  */

void FUN_1004a1914(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174();
  uVar2 = param_2;
  func_0x000107c44d80(param_2);
  func_0x000107c61180();
  FUN_1004a1ac4(&uStack_80);
  uVar3 = param_2;
  func_0x000107c3e458();
  func_0x000107c61180();
  uVar4 = uVar3;
  FUN_1004a2130();
  uVar5 = param_2;
  func_0x000107c3e138();
  func_0x000107c61180();
  uVar6 = uVar5;
  FUN_1004a2130();
  uVar7 = param_2;
  func_0x000107c3e130();
  func_0x000107c61180();
  uVar8 = uVar7;
  FUN_1004a2160();
  func_0x000107c3e438();
  func_0x000107c61180();
  uVar9 = param_2;
  FUN_1004a2160();
  uVar1 = uStack_70;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar4 & 0xffffffffff;
  param_1[4] = uVar6 & 0xffffffffff;
  param_1[5] = uVar8 & 0xffffffffff;
  param_1[6] = uVar9 & 0xffffffffff;
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x0001004a21bc(&uStack_80);
  func_0x000107c61170(uVar2);
  FUN_1004a21e8();
  return;
}



/* Entry: 1004a1abc; end: 1004a1ac3; -[SCNGrpcAuthContext headers] */

undefined8 FUN_1004a1abc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004a1ac4; end: 1004a1c3f;  */

void FUN_1004a1ac4(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_150 [48];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x000107c40808();
  FUN_1004a1cdc(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  func_0x000107c61174();
  FUN_1004a1f68();
  if (puVar2 != (undefined1 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          func_0x000107c61128(param_2);
        }
        puVar4 = *(undefined1 **)(lStack_118 + (long)puVar6 * 8);
        func_0x000107c61174(puVar4);
        FUN_1004a1f7c(auStack_150,puVar4);
        puVar1 = auStack_150;
        FUN_1004a2090(param_1);
        func_0x0001004a20fc(auStack_150);
        func_0x000107c61170();
        puVar6 = puVar6 + 1;
      } while (puVar6 < puVar2);
      FUN_1004a1f68();
      puVar2 = puVar4;
    } while (puVar4 != (undefined1 *)0x0);
  }
  uVar3 = 0;
  FUN_1004a2120();
  FUN_1004a2120();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004a2120();
  func_0x0001004a21bc(param_1);
  FUN_1004a2120();
  func_0x000107c60bd8(uVar3);
  if (puVar1 < (undefined1 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)puVar1 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  FUN_1004a1c40();
  return;
}



/* Entry: 1004a1c40; end: 1004a1c6b;  */

void FUN_1004a1c40(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  FUN_1004a1c40();
  return;
}



/* Entry: 1004a1c6c; end: 1004a1cdb;  */

void FUN_1004a1c6c(void)

{
  FUN_1004a1c40();
  return;
}



/* Entry: 1004a1cdc; end: 1004a1d77;  */

void FUN_1004a1cdc(long *param_1,ulong param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x30) < param_2) {
    if (0x555555555555555 < param_2) {
      func_0x000104bff778();
      FUN_1004a1f08(auStack_48);
      plVar1 = param_1;
      func_0x000107c60bd8();
      FUN_1001246dc();
      lVar2 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x30) * 0x30;
      FUN_1004a1df8(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    func_0x0001004a1c90(auStack_48,param_2,(param_1[1] - *param_1) / 0x30);
    FUN_1004a1d78(param_1,auStack_48);
    FUN_1004a1f08(auStack_48);
  }
  return;
}



/* Entry: 1004a1d78; end: 1004a1df7;  */

void FUN_1004a1d78(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  FUN_1001246dc();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_1004a1df8(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1004a1df8; end: 1004a1e93;  */

void FUN_1004a1df8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_28[2] = param_2[2];
    puStack_28[1] = uVar2;
    *puStack_28 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    puStack_28[5] = param_2[5];
    puStack_28[4] = uVar2;
    puStack_28[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puStack_28 = puStack_28 + 6;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_1004a1e94();
  FUN_1004a1ec4(&uStack_50);
  return;
}



/* Entry: 1004a1e94; end: 1004a1ec3;  */

void FUN_1004a1e94(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x0001004a20fc();
  }
  return;
}



/* Entry: 1004a1ec4; end: 1004a1ef3;  */

long FUN_1004a1ec4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000104bff78c(param_1);
  }
  return param_1;
}



/* Entry: 1004a1ef4; end: 1004a1f07;  */

void FUN_1004a1ef4(void)

{
  return;
}



/* Entry: 1004a1f08; end: 1004a1f67;  */

long * FUN_1004a1f08(long *param_1)

{
  func_0x0001004a1f00();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1004a1f68; end: 1004a1f7b;  */

void FUN_1004a1f68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1004a1f7c; end: 1004a206f;  */

void FUN_1004a1f7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000107c4a8c4(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_48);
  func_0x000107c5dc0c(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c60ca0(&uStack_60);
  func_0x000107c61170(param_2);
  func_0x000107c60ca0(&uStack_48);
  func_0x0001004a2080();
  func_0x0001004a2088();
  return;
}



/* Entry: 1004a2070; end: 1004a2077; -[SCNGrpcHeader key] */

undefined8 FUN_1004a2070(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004a2078; end: 1004a208f; -[SCNGrpcHeader value] */

undefined8 FUN_1004a2078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004a2090; end: 1004a211f;  */

undefined8 * FUN_1004a2090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar3;
    puVar1[3] = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puVar1 = puVar1 + 6;
  }
  else {
    puVar1 = param_1;
    func_0x000104bff6c0();
  }
  param_1[1] = puVar1;
  return puVar1 + -6;
}



/* Entry: 1004a2120; end: 1004a2127;  */

void FUN_1004a2120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1004a2128; end: 1004a212f; -[SCNGrpcAuthContext authTokenErrorCode] */

undefined8 FUN_1004a2128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004a2130; end: 1004a214f;  */

ulong FUN_1004a2130(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    func_0x000107c2c498();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 1004a2150; end: 1004a2157; -[SCNGrpcAuthContext argosTokenErrorCode] */

undefined8 FUN_1004a2150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004a2158; end: 1004a215f; -[SCNGrpcAuthContext argosLatencyInMs] */

undefined8 FUN_1004a2158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1004a2160; end: 1004a217f;  */

ulong FUN_1004a2160(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_10049c78c();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 1004a2180; end: 1004a2187; -[SCNGrpcAuthContext authLatencyInMs] */

undefined8 FUN_1004a2180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1004a2188; end: 1004a21e7;  */

void FUN_1004a2188(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010046e2dc();
  if (*param_1 != 0) {
    FUN_1004a5084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*unaff_x19);
    return;
  }
  return;
}



/* Entry: 1004a21e8; end: 1004a21ef;  */

void FUN_1004a21e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1004a21f0; end: 1004a2387;  */

void FUN_1004a21f0(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long alStack_b8 [2];
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  FUN_100489ca8();
  uStack_48 = extraout_x8;
  FUN_100492e28(alStack_b8,param_1 + 8);
  if ((alStack_b8[0] != 0) &&
     (in_ZR = 0, *(int *)(param_1 + 0x18) == *(int *)(alStack_b8[0] + 0xb8))) {
    lStack_108 = *(long *)(param_1 + 0x10);
    uStack_110 = *(undefined8 *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        FUN_10048a5a8();
      } while (extraout_w10 != 0);
    }
    func_0x0001004a2448(auStack_100,param_2);
    uStack_c0 = *(undefined8 *)(param_1 + 0x28);
    uStack_c8 = *(undefined8 *)(param_1 + 0x20);
    ppuVar1 = &PTR___tlv_bootstrap_11340e260;
    (*(code *)PTR___tlv_bootstrap_11340e260)();
    in_ZR = *ppuVar1 == *(undefined **)(alStack_b8[0] + 0x20);
    if ((bool)in_ZR) {
      FUN_1004a25fc(&uStack_110);
    }
    else {
      puStack_a8 = &UNK_108c73264;
      ppuStack_a0 = &PTR_DAT_110abd8e8;
      puVar2 = (undefined8 *)0x58;
      func_0x000107c60e20();
      puVar2[1] = lStack_108;
      *puVar2 = uStack_110;
      if (lStack_108 != 0) {
        do {
          FUN_10048a5a8();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001004a2448(puVar2 + 2,auStack_100);
      puVar2[10] = uStack_c0;
      puVar2[9] = uStack_c8;
      puStack_98 = puVar2;
      func_0x000100493174();
      func_0x000100493180();
      func_0x000107c34df4();
    }
    FUN_1004a5130(&uStack_110);
  }
  func_0x00010048b4a0(alStack_b8);
  FUN_10048b398(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c34df4();
    FUN_1004a5130(&uStack_110);
    func_0x00010048b4a0(alStack_b8);
    func_0x000107c34d70();
    return;
  }
  return;
}



/* Entry: 1004a2388; end: 1004a2393;  */

void FUN_1004a2388(void)

{
  return;
}



/* Entry: 1004a2394; end: 1004a240b;  */

void FUN_1004a2394(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_1004a2388();
    func_0x0001004a2474();
    FUN_1004a2554(param_1,param_2);
  }
  uStack_38 = 1;
  FUN_1004a25d0(&uStack_40);
  return;
}



/* Entry: 1004a240c; end: 1004a24bb;  */

undefined8 * FUN_1004a240c(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1004a2394(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x30);
  return param_1;
}



/* Entry: 1004a24bc; end: 1004a253f;  */

long FUN_1004a24bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_4;
  FUN_1004899d8();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = lVar1;
  lStack_38 = lVar1;
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x30) {
    FUN_1004a2588(param_4,unaff_x21);
    param_4 = lStack_38 + 0x30;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_1004a1ec4(&uStack_60);
  return param_4;
}



/* Entry: 1004a2540; end: 1004a2553;  */

void FUN_1004a2540(void)

{
  FUN_1004a24bc();
  return;
}



/* Entry: 1004a2554; end: 1004a2587;  */

void FUN_1004a2554(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1004a2540();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1004a2588; end: 1004a25bf;  */

void FUN_1004a2588(long param_1)

{
  long unaff_x20;
  
  FUN_10048971c();
  func_0x000107c60c94();
  func_0x000107c60c94(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1004a25c0; end: 1004a25cf;  */

void FUN_1004a25c0(void)

{
  return;
}



/* Entry: 1004a25d0; end: 1004a25fb;  */

long FUN_1004a25d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1004a2188(param_1);
  }
  return param_1;
}



/* Entry: 1004a25fc; end: 1004a26f3;  */

void FUN_1004a25fc(double param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_90 [56];
  long lStack_58;
  long alStack_50 [2];
  
  FUN_100492e28(alStack_50,param_2);
  if (alStack_50[0] != 0) {
    FUN_100467380(0);
    FUN_10046778c();
    FUN_100467768();
    FUN_100493cd8();
    FUN_10048a654();
    lVar2 = (long)param_1;
    FUN_1004a2704(auStack_90,lVar2);
    func_0x00010048a704();
    iVar1 = (int)param_2 + 0x10;
    FUN_1004a4bf8();
    lStack_58 = lVar2;
    if (iVar1 == 0) {
      FUN_1004a4c94();
      func_0x0001004a4ca0();
    }
    else {
      FUN_1004a4c94();
      func_0x0001004a4ca0();
    }
    func_0x0001004a21bc(auStack_90);
  }
  func_0x00010048b4a0(alStack_50);
  return;
}



/* Entry: 1004a26f4; end: 1004a2703;  */

undefined8 FUN_1004a26f4(void)

{
  return uRam000000011383a240;
}



/* Entry: 1004a2704; end: 1004a275f;  */

void FUN_1004a2704(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  FUN_1004a26f4(param_1,param_2,param_1);
  if (param_1 != (undefined8 *)0x0) {
    auStack_40[0] = 0;
    uStack_28 = 0;
    (**(code **)*param_1)();
    FUN_1004a4bcc(auStack_40);
  }
  return;
}



/* Entry: 1004a2760; end: 1004a27f7;  */

void FUN_1004a2760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_58;
  undefined8 **ppuStack_50;
  long *plStack_48;
  
  lStack_58 = param_1;
  if (*(long *)(param_1 + 0x38) != -1) {
    plStack_48 = &lStack_58;
    ppuStack_50 = &plStack_48;
    func_0x000107c60c38((long *)(param_1 + 0x38),&ppuStack_50,FUN_1004a285c);
  }
  (**(code **)**(undefined8 **)(param_1 + 8))
            (*(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1004a27f8; end: 1004a285b;  */

void FUN_1004a27f8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x8;
    func_0x000107c60e20();
    puVar1 = puVar2;
    FUN_100077ef8();
    *puVar2 = puVar1;
  }
  puStack_28 = puVar2;
  FUN_1004a28ec(param_1,&puStack_28);
  return;
}



/* Entry: 1004a285c; end: 1004a28eb;  */

void FUN_1004a285c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = **(long **)*param_1;
  FUN_1004a27f8(&lStack_38,*(undefined8 *)(lVar2 + 0x28));
  if (lStack_38 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    func_0x000107c60e20();
    *puVar1 = &PTR_DAT_110ccdda8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lStack_38;
  }
  uStack_28 = *(undefined8 *)(lVar2 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  *(long *)(lVar2 + 8) = lStack_38;
  *(undefined8 **)(lVar2 + 0x10) = puVar1;
  func_0x0001004a2928(&uStack_30);
  return;
}



/* Entry: 1004a28ec; end: 1004a294f;  */

void FUN_1004a28ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  func_0x000107c60e20();
  uVar2 = *param_2;
  *puVar1 = &PTR_FUN_110ccde08;
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1004a2950; end: 1004a2957;  */

void FUN_1004a2950(void)

{
  return;
}



/* Entry: 1004a2958; end: 1004a4a7f;  */

void FUN_1004a2958(long param_1,ulong param_2,char *param_3,undefined8 param_4,long *param_5)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  ulong extraout_x8;
  ulong uVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar9;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  ulong extraout_x9;
  ulong uVar10;
  long extraout_x9_00;
  byte extraout_w10;
  byte bVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 ****ppppuVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined1 auStack_1208 [24];
  undefined1 auStack_11f0 [24];
  undefined1 auStack_11d8 [24];
  undefined1 auStack_11c0 [24];
  undefined1 auStack_11a8 [24];
  undefined1 auStack_1190 [24];
  undefined1 auStack_1178 [24];
  undefined1 auStack_1160 [24];
  undefined1 auStack_1148 [24];
  undefined1 auStack_1130 [24];
  undefined1 auStack_1118 [24];
  undefined1 auStack_1100 [24];
  undefined1 auStack_10e8 [24];
  undefined1 auStack_10d0 [24];
  undefined1 auStack_10b8 [24];
  undefined1 auStack_10a0 [24];
  undefined1 auStack_1088 [24];
  undefined1 auStack_1070 [24];
  undefined1 auStack_1058 [24];
  undefined1 auStack_1040 [24];
  undefined1 auStack_1028 [24];
  undefined1 auStack_1010 [24];
  undefined1 auStack_ff8 [24];
  undefined1 auStack_fe0 [24];
  undefined1 auStack_fc8 [24];
  undefined1 auStack_fb0 [24];
  undefined1 auStack_f98 [24];
  undefined1 auStack_f80 [24];
  undefined1 auStack_f68 [24];
  undefined1 auStack_f50 [24];
  undefined1 auStack_f38 [24];
  undefined1 auStack_f20 [24];
  undefined1 auStack_f08 [24];
  undefined1 auStack_ef0 [24];
  undefined1 auStack_ed8 [24];
  undefined1 auStack_ec0 [24];
  undefined1 auStack_ea8 [24];
  undefined1 auStack_e90 [24];
  undefined1 auStack_e78 [24];
  undefined1 auStack_e60 [24];
  undefined1 auStack_e48 [24];
  undefined1 auStack_e30 [24];
  undefined1 auStack_e18 [24];
  undefined1 auStack_e00 [24];
  undefined1 auStack_de8 [24];
  undefined1 auStack_dd0 [24];
  undefined1 auStack_db8 [24];
  undefined1 auStack_da0 [24];
  undefined1 auStack_d88 [24];
  undefined1 auStack_d70 [24];
  undefined1 auStack_d58 [24];
  undefined1 auStack_d40 [24];
  undefined1 auStack_d28 [24];
  undefined1 auStack_d10 [24];
  undefined1 auStack_cf8 [24];
  undefined1 auStack_ce0 [24];
  undefined1 auStack_cc8 [24];
  undefined1 auStack_cb0 [24];
  undefined1 auStack_c98 [24];
  undefined1 auStack_c80 [24];
  undefined1 auStack_c68 [24];
  undefined1 auStack_c50 [24];
  undefined1 auStack_c38 [24];
  undefined1 auStack_c20 [24];
  undefined1 auStack_c08 [24];
  undefined1 auStack_bf0 [24];
  undefined1 auStack_bd8 [24];
  undefined1 auStack_bc0 [24];
  undefined1 auStack_ba8 [24];
  undefined1 auStack_b90 [24];
  undefined1 auStack_b78 [24];
  undefined1 auStack_b60 [24];
  undefined1 auStack_b48 [24];
  undefined1 auStack_b30 [24];
  undefined1 auStack_b18 [24];
  undefined1 auStack_b00 [24];
  undefined1 auStack_ae8 [24];
  undefined1 auStack_ad0 [24];
  undefined1 auStack_ab8 [24];
  undefined1 auStack_aa0 [24];
  undefined1 auStack_a88 [24];
  undefined1 auStack_a70 [24];
  undefined1 auStack_a58 [24];
  undefined1 auStack_a40 [24];
  undefined1 auStack_a28 [24];
  undefined1 auStack_a10 [24];
  undefined1 auStack_9f8 [24];
  undefined1 auStack_9e0 [24];
  undefined1 auStack_9c8 [24];
  undefined1 auStack_9b0 [24];
  undefined1 auStack_998 [24];
  undefined1 auStack_980 [24];
  undefined1 auStack_968 [24];
  undefined1 auStack_950 [24];
  undefined1 auStack_938 [24];
  undefined1 auStack_920 [24];
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [24];
  undefined1 auStack_8a8 [24];
  undefined1 auStack_890 [24];
  undefined1 auStack_878 [24];
  undefined1 auStack_860 [24];
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [24];
  undefined1 auStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined1 auStack_7d0 [24];
  undefined1 auStack_7b8 [24];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined1 auStack_770 [24];
  undefined1 auStack_758 [24];
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuStack_98 = (undefined8 ****)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  pppuStack_b0 = (undefined8 ****)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (param_3[0x17] < '\0') {
    if (*(ulong *)(param_3 + 8) < 4) goto LAB_1004a3f64;
    pcVar7 = *(char **)param_3;
  }
  else {
    pcVar7 = param_3;
    if ((byte)param_3[0x17] < 4) goto LAB_1004a3f64;
  }
  if (*pcVar7 != '/') goto LAB_1004a3f64;
  pcVar7 = param_3;
  func_0x000107c60be8(param_3,0x2f,0xffffffffffffffff);
  cVar3 = SCARRY8((long)pcVar7,1);
  cVar4 = (long)(pcVar7 + 1) < 0;
  if (pcVar7 == (char *)0xffffffffffffffff) goto LAB_1004a3f64;
  FUN_1000e1048(auStack_78,param_3,1,pcVar7 + -1);
  FUN_1004a4a80(&pppuStack_98);
  func_0x0001004a4a88();
  func_0x0001004a4a90();
  uVar1 = extraout_x9;
  if (cVar4 == cVar3) {
    uVar1 = extraout_x8;
  }
  uVar8 = extraout_x8;
  uVar10 = extraout_x9;
  bVar11 = extraout_w10;
  if (0x40 < uVar1) {
    FUN_1000e1048(auStack_78,&pppuStack_98,uVar1 - 0x40,0xffffffffffffffff);
    FUN_1004a4a80(&pppuStack_98);
    func_0x0001004a4a88();
    uVar8 = (ulong)uStack_88._7_1_;
    uVar10 = uStack_90;
    bVar11 = uStack_88._7_1_;
  }
  cVar4 = (char)bVar11 < '\0';
  cVar3 = '\0';
  ppppuVar2 = (undefined8 ****)pppuStack_98;
  if (!(bool)cVar4) {
    uVar10 = uVar8;
    ppppuVar2 = &pppuStack_98;
  }
  auStack_78[0] = 0x2e;
  uStack_79 = 0x5f;
  func_0x0001004a4aa4(ppppuVar2,(undefined1 *)((long)ppppuVar2 + uVar10),auStack_78,&uStack_79);
  FUN_1000e1048(auStack_78,param_3,pcVar7 + 1,0xffffffffffffffff);
  FUN_1004a4a80(&pppuStack_b0);
  func_0x0001004a4a88();
  func_0x0001004a4a90();
  lVar9 = extraout_x9_00;
  if (cVar4 == cVar3) {
    lVar9 = extraout_x8_00;
  }
  if (lVar9 == 0) goto LAB_1004a3f64;
  uVar1 = uStack_a8;
  if (-1 < (long)uStack_a0) {
    uVar1 = uStack_a0 >> 0x38;
  }
  if (uVar1 == 0) goto LAB_1004a3f64;
  ppppuVar17 = (undefined8 ****)pppuStack_98;
  ppppuVar2 = (undefined8 ****)((long)pppuStack_98 + extraout_x9_00);
  if (-1 < (char)extraout_x8_00) {
    ppppuVar17 = &pppuStack_98;
    ppppuVar2 = (undefined8 ****)((long)&pppuStack_98 + extraout_x8_00);
  }
  for (; ppppuVar17 != ppppuVar2; ppppuVar17 = (undefined8 ****)((long)ppppuVar17 + 1)) {
    uVar6 = *(undefined1 *)ppppuVar17;
    func_0x000107c60e80();
    *(undefined1 *)ppppuVar17 = uVar6;
  }
  ppppuVar17 = (undefined8 ****)pppuStack_b0;
  ppppuVar2 = (undefined8 ****)((long)pppuStack_b0 + uStack_a8);
  if (-1 < (long)uStack_a0) {
    ppppuVar17 = &pppuStack_b0;
    ppppuVar2 = (undefined8 ****)((long)&pppuStack_b0 + (uStack_a0 >> 0x38));
  }
  for (; ppppuVar17 != ppppuVar2; ppppuVar17 = (undefined8 ****)((long)ppppuVar17 + 1)) {
    uVar6 = *(undefined1 *)ppppuVar17;
    func_0x000107c60e80();
    *(undefined1 *)ppppuVar17 = uVar6;
  }
  bVar5 = (int)param_2 == 0x22;
  switch(param_2 & 0xffffffff) {
  case 0:
    func_0x0001004a4ad0(auStack_410);
    func_0x0001004a4ad8(auStack_428);
    puVar13 = auStack_410;
    puVar14 = auStack_428;
    func_0x000100613394();
    FUN_1006133e8();
    break;
  case 1:
    func_0x0001004a4ad0(auStack_c8);
    func_0x0001004a4ad8(auStack_e0);
    puVar13 = auStack_c8;
    puVar14 = auStack_e0;
    func_0x000100613394();
    func_0x000107c2c11c();
    break;
  case 2:
    func_0x0001004a4ad0(auStack_440);
    func_0x0001004a4ad8(auStack_458);
    puVar13 = auStack_440;
    puVar14 = auStack_458;
    func_0x000100613394();
    FUN_100861044();
    break;
  case 3:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_950);
      func_0x0001004a4ad0(auStack_968);
      func_0x0001004a4ad8(auStack_980);
      func_0x0001008343d0();
      puVar13 = auStack_950;
      puVar14 = auStack_968;
      puVar15 = auStack_980;
      FUN_1008343f0(uVar18,auStack_950,auStack_968,auStack_980);
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_09 != 0x60) goto LAB_1004a3f64;
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_8f0);
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_908);
    func_0x0001004a4ad0(auStack_920);
    func_0x0001004a4ad8(auStack_938);
    func_0x0001008611ac();
    puVar13 = auStack_8f0;
    puVar14 = auStack_908;
    puVar15 = auStack_920;
    puVar16 = auStack_938;
    FUN_1008611b8(uVar18,auStack_8f0,auStack_908,auStack_920,auStack_938);
    goto code_r0x0001004a3f44;
  case 4:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    lVar9 = param_5[1] - *param_5;
    if (lVar9 == 0x90) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_e78);
      func_0x0001008343a8();
      func_0x000100834728(*param_5,auStack_e90);
      func_0x0001004a4ad0(auStack_ea8);
      func_0x0001004a4ad8(auStack_ec0);
      func_0x0001008343a8();
      FUN_1008612ec(*param_5,auStack_ed8);
      func_0x000100834730(auStack_ef0);
      puVar13 = auStack_e78;
      puVar14 = auStack_e90;
      puVar15 = auStack_ea8;
      puVar16 = auStack_ec0;
      puVar19 = auStack_ed8;
      puVar12 = auStack_ef0;
      FUN_1008612f4(uVar18,auStack_e78,auStack_e90,auStack_ea8,auStack_ec0,auStack_ed8,auStack_ef0,1
                   );
code_r0x0001004a3f34:
      func_0x000107c60ca0(puVar12);
code_r0x0001004a3f3c:
      func_0x000107c60ca0(puVar19);
    }
    else {
      if (lVar9 == 0x60) {
        func_0x0001008343a8();
        FUN_1008343c8(*param_5,auStack_e00);
        func_0x0001004a4ad0(auStack_e18);
        func_0x0001004a4ad8(auStack_e30);
        func_0x0001008343a8();
        func_0x000100834728(*param_5,auStack_e48);
        func_0x000100834730(auStack_e60);
        puVar13 = auStack_e00;
        puVar14 = auStack_e18;
        puVar15 = auStack_e30;
        puVar16 = auStack_e48;
        puVar19 = auStack_e60;
        func_0x000100834738();
        FUN_10083475c();
        goto code_r0x0001004a3f3c;
      }
      if (lVar9 != 0x30) goto LAB_1004a3f64;
      func_0x0001004a4ad0(auStack_da0);
      func_0x0001004a4ad8(auStack_db8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_dd0);
      func_0x000100834730(auStack_de8);
      puVar13 = auStack_da0;
      puVar14 = auStack_db8;
      puVar15 = auStack_dd0;
      puVar16 = auStack_de8;
      func_0x000100835998();
      func_0x000107c2c0cc();
    }
    goto code_r0x0001004a3f44;
  case 5:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_158);
      func_0x0001004a4ad0(auStack_170);
      func_0x0001004a4ad8(auStack_188);
      puVar13 = auStack_158;
      puVar14 = auStack_170;
      puVar15 = auStack_188;
      func_0x000107c35404();
      func_0x000107c2c0fc();
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_06 != 0x60) goto LAB_1004a3f64;
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_f8);
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_110);
    func_0x0001004a4ad0(auStack_128);
    func_0x0001004a4ad8(auStack_140);
    puVar13 = auStack_f8;
    puVar14 = auStack_110;
    puVar15 = auStack_128;
    puVar16 = auStack_140;
    func_0x000107c3540c();
    func_0x000107c2c0f8();
    goto code_r0x0001004a3f44;
  default:
    goto LAB_1004a3f64;
  case 8:
    func_0x0001004a4ad0(auStack_470);
    func_0x0001004a4ad8(auStack_488);
    puVar13 = auStack_470;
    puVar14 = auStack_488;
    func_0x000100613394();
    func_0x000107c2c100();
    break;
  case 9:
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001004a4ad0(auStack_ae8);
    func_0x0001004a4ad8(auStack_b00);
    func_0x0001004a4ae0();
    puVar13 = auStack_ae8;
    puVar14 = auStack_b00;
    FUN_1004a4b1c(uVar18,auStack_ae8,auStack_b00);
    break;
  case 10:
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001004a4ad0(auStack_b18);
    func_0x0001004a4ad8(auStack_b30);
    func_0x0001004a4ae0();
    puVar13 = auStack_b18;
    puVar14 = auStack_b30;
    FUN_100613558(uVar18,auStack_b18,auStack_b30);
    break;
  case 0xb:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_c50);
      func_0x0001004a4ad0(auStack_c68);
      func_0x0001004a4ad8(auStack_c80);
      func_0x0001008343d0();
      puVar13 = auStack_c50;
      puVar14 = auStack_c68;
      puVar15 = auStack_c80;
      FUN_1008344e8(uVar18,auStack_c50,auStack_c68,auStack_c80);
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_10 != 0x60) goto LAB_1004a3f64;
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_bf0);
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_c08);
    func_0x0001004a4ad0(auStack_c20);
    func_0x0001004a4ad8(auStack_c38);
    func_0x0001008611ac();
    puVar13 = auStack_bf0;
    puVar14 = auStack_c08;
    puVar15 = auStack_c20;
    puVar16 = auStack_c38;
    FUN_100861268(uVar18,auStack_bf0,auStack_c08,auStack_c20,auStack_c38);
    goto code_r0x0001004a3f44;
  case 0xc:
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001004a4ad0(auStack_c98);
    func_0x0001004a4ad8(auStack_cb0);
    func_0x0001004a4ae0();
    puVar13 = auStack_c98;
    puVar14 = auStack_cb0;
    FUN_100833540(uVar18,auStack_c98,auStack_cb0);
    break;
  case 0xd:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (!bVar5) {
      if (extraout_x8_07 != 0x60) goto LAB_1004a3f64;
      func_0x0001008343a8();
      func_0x000100834728(*param_5,auStack_1070);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_1088);
      func_0x0001004a4ad0(auStack_10a0);
      func_0x0001004a4ad8(auStack_10b8);
      func_0x000100834730(auStack_10d0);
      puVar13 = auStack_1070;
      puVar14 = auStack_1088;
      puVar15 = auStack_10a0;
      puVar16 = auStack_10b8;
      puVar19 = auStack_10d0;
      func_0x000100834738();
      FUN_1008627c0();
      goto code_r0x0001004a3f3c;
    }
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_10e8);
    func_0x0001004a4ad0(auStack_1100);
    func_0x0001004a4ad8(auStack_1118);
    func_0x000100834730(auStack_1130);
    puVar13 = auStack_10e8;
    puVar14 = auStack_1100;
    puVar15 = auStack_1118;
    puVar16 = auStack_1130;
    func_0x000100835998();
    FUN_1008359b8();
    goto code_r0x0001004a3f44;
  case 0xe:
    func_0x00010083438c();
    if ((!bVar5) || (func_0x000100834398(), !bVar5)) {
      func_0x0001004a4ad0(auStack_1e8);
      func_0x0001004a4ad8(auStack_200);
      puVar13 = auStack_1e8;
      puVar14 = auStack_200;
      func_0x000100613394();
      func_0x000107c2c09c();
      break;
    }
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_1a0);
    func_0x0001004a4ad0(auStack_1b8);
    func_0x0001004a4ad8(auStack_1d0);
    puVar13 = auStack_1a0;
    puVar14 = auStack_1b8;
    puVar15 = auStack_1d0;
    func_0x000107c35404();
    func_0x000107c2c098();
    goto code_r0x0001004a3f4c;
  case 0xf:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001004a4ad0(auStack_9f8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_a10);
      func_0x0001004a4ad8(auStack_a28);
      func_0x0001008343d0();
      puVar13 = auStack_9f8;
      puVar14 = auStack_a10;
      puVar15 = auStack_a28;
      FUN_100835e58(uVar18,auStack_9f8,auStack_a10,auStack_a28);
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_02 != 0x60) goto LAB_1004a3f64;
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_998);
    func_0x0001004a4ad0(auStack_9b0);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_9c8);
    func_0x0001004a4ad8(auStack_9e0);
    func_0x0001008611ac();
    puVar13 = auStack_998;
    puVar14 = auStack_9b0;
    puVar15 = auStack_9c8;
    puVar16 = auStack_9e0;
    FUN_1008629d4(uVar18,auStack_998,auStack_9b0,auStack_9c8,auStack_9e0);
    goto code_r0x0001004a3f44;
  case 0x10:
    func_0x00010083438c();
    if ((bVar5) && (func_0x000100834398(), bVar5)) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_4a0);
      func_0x0001004a4ad0(auStack_4b8);
      func_0x0001004a4ad8(auStack_4d0);
      puVar13 = auStack_4a0;
      puVar14 = auStack_4b8;
      puVar15 = auStack_4d0;
      func_0x000107c35404();
      func_0x000107c2c0a0();
      goto code_r0x0001004a3f4c;
    }
    func_0x0001004a4ad0(auStack_4e8);
    func_0x0001004a4ad8(auStack_500);
    puVar13 = auStack_4e8;
    puVar14 = auStack_500;
    func_0x000100613394();
    FUN_100835b08();
    break;
  case 0x12:
    func_0x00010083438c();
    if ((bVar5) && (func_0x000100834398(), bVar5)) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_518);
      func_0x0001004a4ad0(auStack_530);
      func_0x0001004a4ad8(auStack_548);
      puVar13 = auStack_518;
      puVar14 = auStack_530;
      puVar15 = auStack_548;
      func_0x000107c35404();
      func_0x000107c2c114();
      goto code_r0x0001004a3f4c;
    }
    func_0x0001004a4ad0(auStack_560);
    func_0x0001004a4ad8(auStack_578);
    puVar13 = auStack_560;
    puVar14 = auStack_578;
    func_0x000100613394();
    func_0x000107c2c118();
    break;
  case 0x13:
    func_0x00010083438c();
    if ((bVar5) && (func_0x000100834398(), bVar5)) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_590);
      func_0x0001004a4ad0(auStack_5a8);
      func_0x0001004a4ad8(auStack_5c0);
      puVar13 = auStack_590;
      puVar14 = auStack_5a8;
      puVar15 = auStack_5c0;
      func_0x000107c35404();
      func_0x000107c2c07c();
      goto code_r0x0001004a3f4c;
    }
    func_0x0001004a4ad0(auStack_5d8);
    func_0x0001004a4ad8(auStack_5f0);
    puVar13 = auStack_5d8;
    puVar14 = auStack_5f0;
    func_0x000100613394();
    func_0x000107c2c080();
    break;
  case 0x14:
    func_0x00010083438c();
    if ((bVar5) && (func_0x000100834398(), bVar5)) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_608);
      func_0x0001004a4ad0(auStack_620);
      func_0x0001004a4ad8(auStack_638);
      puVar13 = auStack_608;
      puVar14 = auStack_620;
      puVar15 = auStack_638;
      func_0x000107c35404();
      func_0x000107c2c090();
      goto code_r0x0001004a3f4c;
    }
    func_0x0001004a4ad0(auStack_650);
    func_0x0001004a4ad8(auStack_668);
    puVar13 = auStack_650;
    puVar14 = auStack_668;
    func_0x000100613394();
    func_0x000107c2c094();
    break;
  case 0x15:
    func_0x00010083438c();
    if ((bVar5) && (func_0x000100834398(), bVar5)) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_680);
      func_0x0001004a4ad0(auStack_698);
      func_0x0001004a4ad8(auStack_6b0);
      puVar13 = auStack_680;
      puVar14 = auStack_698;
      puVar15 = auStack_6b0;
      func_0x000107c35404();
      func_0x000107c2c0d8();
      goto code_r0x0001004a3f4c;
    }
    func_0x0001004a4ad0(auStack_6c8);
    func_0x0001004a4ad8(auStack_6e0);
    puVar13 = auStack_6c8;
    puVar14 = auStack_6e0;
    func_0x000100613394();
    func_0x000107c2c0dc();
    break;
  case 0x16:
    func_0x00010083438c();
    if ((bVar5) && (func_0x000100834398(), bVar5)) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_6f8);
      func_0x0001004a4ad0(auStack_710);
      func_0x0001004a4ad8(auStack_728);
      puVar13 = auStack_6f8;
      puVar14 = auStack_710;
      puVar15 = auStack_728;
      func_0x000107c35404();
      func_0x000107c2c0bc();
      goto code_r0x0001004a3f4c;
    }
    func_0x0001004a4ad0(auStack_740);
    func_0x0001004a4ad8(auStack_758);
    puVar13 = auStack_740;
    puVar14 = auStack_758;
    func_0x000100613394();
    func_0x000107c2c0c0();
    break;
  case 0x17:
    func_0x00010083438c();
    if (bVar5) {
      func_0x000100834398();
      if (bVar5) {
        func_0x0001008343a8();
        FUN_1008343c8(*param_5,auStack_7d0);
        func_0x0001004a4ad0(auStack_7e8);
        func_0x0001004a4ad8(auStack_800);
        puVar13 = auStack_7d0;
        puVar14 = auStack_7e8;
        puVar15 = auStack_800;
        func_0x000107c35404();
        func_0x000107c2c088();
        goto code_r0x0001004a3f4c;
      }
      if (extraout_x8_11 == 0x60) {
        func_0x0001008343a8();
        FUN_1008343c8(*param_5,auStack_770);
        func_0x0001008343a8();
        func_0x000100834728(*param_5,auStack_788);
        func_0x0001004a4ad0(auStack_7a0);
        func_0x0001004a4ad8(auStack_7b8);
        puVar13 = auStack_770;
        puVar14 = auStack_788;
        puVar15 = auStack_7a0;
        puVar16 = auStack_7b8;
        func_0x000107c3540c();
        func_0x000107c2c084();
        goto code_r0x0001004a3f44;
      }
    }
    func_0x0001004a4ad0(auStack_818);
    func_0x0001004a4ad8(auStack_830);
    puVar13 = auStack_818;
    puVar14 = auStack_830;
    func_0x000100613394();
    func_0x000107c2c08c();
    break;
  case 0x18:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_aa0);
      func_0x0001004a4ad0(auStack_ab8);
      func_0x0001004a4ad8(auStack_ad0);
      func_0x0001008343d0();
      puVar13 = auStack_aa0;
      puVar14 = auStack_ab8;
      puVar15 = auStack_ad0;
      func_0x000107c2c0e8(uVar18,auStack_aa0,auStack_ab8,auStack_ad0);
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_01 != 0x60) goto LAB_1004a3f64;
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_a40);
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_a58);
    func_0x0001004a4ad0(auStack_a70);
    func_0x0001004a4ad8(auStack_a88);
    func_0x0001008611ac();
    puVar13 = auStack_a40;
    puVar14 = auStack_a58;
    puVar15 = auStack_a70;
    puVar16 = auStack_a88;
    func_0x000107c2c0e4(uVar18,auStack_a40,auStack_a58,auStack_a70,auStack_a88);
    goto code_r0x0001004a3f44;
  case 0x19:
    func_0x00010083438c();
    if (bVar5) {
      func_0x000100834398();
      if (bVar5) {
        func_0x0001008343a8();
        FUN_1008343c8(*param_5,auStack_320);
        func_0x0001004a4ad0(auStack_338);
        func_0x0001004a4ad8(auStack_350);
        puVar13 = auStack_320;
        puVar14 = auStack_338;
        puVar15 = auStack_350;
        func_0x000107c35404();
        func_0x000107c2c0b4();
        goto code_r0x0001004a3f4c;
      }
      if (extraout_x8_04 == 0x60) {
        func_0x0001008343a8();
        FUN_1008343c8(*param_5,auStack_2c0);
        func_0x0001008343a8();
        func_0x000100834728(*param_5,auStack_2d8);
        func_0x0001004a4ad0(auStack_2f0);
        func_0x0001004a4ad8(auStack_308);
        puVar13 = auStack_2c0;
        puVar14 = auStack_2d8;
        puVar15 = auStack_2f0;
        puVar16 = auStack_308;
        func_0x000107c3540c();
        func_0x000107c2c0b0();
        goto code_r0x0001004a3f44;
      }
      if (extraout_x8_04 == 0x90) {
        uVar18 = *(undefined8 *)(param_1 + 8);
        func_0x0001008343a8();
        FUN_1008612ec(*param_5,auStack_248);
        func_0x0001008343a8();
        FUN_1008343c8(*param_5,auStack_260);
        func_0x0001008343a8();
        func_0x000100834728(*param_5,auStack_278);
        func_0x0001004a4ad0(auStack_290);
        func_0x0001004a4ad8(auStack_2a8);
        puVar13 = auStack_248;
        puVar14 = auStack_260;
        puVar15 = auStack_278;
        puVar16 = auStack_290;
        puVar19 = auStack_2a8;
        func_0x000107c2c0ac(uVar18,auStack_248,auStack_260,auStack_278,auStack_290,auStack_2a8,
                            param_4);
        goto code_r0x0001004a3f3c;
      }
    }
    func_0x0001004a4ad0(auStack_368);
    func_0x0001004a4ad8(auStack_380);
    puVar13 = auStack_368;
    puVar14 = auStack_380;
    func_0x000100613394();
    func_0x000107c2c0b8();
    break;
  case 0x1a:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    lVar9 = param_5[1] - *param_5;
    if (lVar9 == 0x90) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_fe0);
      func_0x0001008343a8();
      func_0x000100834728(*param_5,auStack_ff8);
      func_0x0001004a4ad0(auStack_1010);
      func_0x0001004a4ad8(auStack_1028);
      func_0x0001008343a8();
      FUN_1008612ec(*param_5,auStack_1040);
      func_0x000100834730(auStack_1058);
      puVar13 = auStack_fe0;
      puVar14 = auStack_ff8;
      puVar15 = auStack_1010;
      puVar16 = auStack_1028;
      puVar19 = auStack_1040;
      puVar12 = auStack_1058;
      func_0x000107c2c0ec(uVar18,auStack_fe0,auStack_ff8,auStack_1010,auStack_1028,auStack_1040,
                          auStack_1058,1);
      goto code_r0x0001004a3f34;
    }
    if (lVar9 == 0x60) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_f68);
      func_0x0001004a4ad0(auStack_f80);
      func_0x0001004a4ad8(auStack_f98);
      func_0x0001008343a8();
      func_0x000100834728(*param_5,auStack_fb0);
      func_0x000100834730(auStack_fc8);
      puVar13 = auStack_f68;
      puVar14 = auStack_f80;
      puVar15 = auStack_f98;
      puVar16 = auStack_fb0;
      puVar19 = auStack_fc8;
      func_0x000100834738();
      func_0x000107c2c0f0();
      goto code_r0x0001004a3f3c;
    }
    if (lVar9 != 0x30) goto LAB_1004a3f64;
    func_0x0001004a4ad0(auStack_f08);
    func_0x0001004a4ad8(auStack_f20);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_f38);
    func_0x000100834730(auStack_f50);
    puVar13 = auStack_f08;
    puVar14 = auStack_f20;
    puVar15 = auStack_f38;
    puVar16 = auStack_f50;
    func_0x000100835998();
    func_0x000107c2c0f4();
    goto code_r0x0001004a3f44;
  case 0x1b:
    func_0x0001004a4ad0(auStack_218);
    func_0x0001004a4ad8(auStack_230);
    puVar13 = auStack_218;
    puVar14 = auStack_230;
    func_0x000100613394();
    func_0x000107c2c0e0();
    break;
  case 0x1d:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_d28);
      func_0x0001004a4ad0(auStack_d40);
      func_0x0001004a4ad8(auStack_d58);
      func_0x0001008343d0();
      puVar13 = auStack_d28;
      puVar14 = auStack_d40;
      puVar15 = auStack_d58;
      func_0x000107c2c0a8(uVar18,auStack_d28,auStack_d40,auStack_d58);
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_03 != 0x60) goto LAB_1004a3f64;
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_cc8);
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_ce0);
    func_0x0001004a4ad0(auStack_cf8);
    func_0x0001004a4ad8(auStack_d10);
    func_0x0001008611ac();
    puVar13 = auStack_cc8;
    puVar14 = auStack_ce0;
    puVar15 = auStack_cf8;
    puVar16 = auStack_d10;
    func_0x000107c2c0a4(uVar18,auStack_cc8,auStack_ce0,auStack_cf8,auStack_d10);
    goto code_r0x0001004a3f44;
  case 0x1e:
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001004a4ad0(auStack_d70);
    func_0x0001004a4ad8(auStack_d88);
    func_0x0001004a4ae0();
    puVar13 = auStack_d70;
    puVar14 = auStack_d88;
    func_0x000100c7cddc(uVar18,auStack_d70,auStack_d88);
    break;
  case 0x1f:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (!bVar5) {
      if (extraout_x8_12 != 0x60) goto LAB_1004a3f64;
      func_0x0001008343a8();
      func_0x000100834728(*param_5,auStack_1148);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_1160);
      func_0x0001004a4ad0(auStack_1178);
      func_0x0001004a4ad8(auStack_1190);
      func_0x000100834730(auStack_11a8);
      puVar13 = auStack_1148;
      puVar14 = auStack_1160;
      puVar15 = auStack_1178;
      puVar16 = auStack_1190;
      puVar19 = auStack_11a8;
      func_0x000100834738();
      func_0x000107c2c104();
      goto code_r0x0001004a3f3c;
    }
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_11c0);
    func_0x0001004a4ad0(auStack_11d8);
    func_0x0001004a4ad8(auStack_11f0);
    func_0x000100834730(auStack_1208);
    puVar13 = auStack_11c0;
    puVar14 = auStack_11d8;
    puVar15 = auStack_11f0;
    puVar16 = auStack_1208;
    func_0x000100835998();
    func_0x000107c2c108();
    goto code_r0x0001004a3f44;
  case 0x20:
    func_0x00010083438c();
    if ((bVar5) && (func_0x000100834398(), bVar5)) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_398);
      func_0x0001004a4ad0(auStack_3b0);
      func_0x0001004a4ad8(auStack_3c8);
      puVar13 = auStack_398;
      puVar14 = auStack_3b0;
      puVar15 = auStack_3c8;
      func_0x000107c35404();
      func_0x000107c2c10c();
      goto code_r0x0001004a3f4c;
    }
    func_0x0001004a4ad0(auStack_3e0);
    func_0x0001004a4ad8(auStack_3f8);
    puVar13 = auStack_3e0;
    puVar14 = auStack_3f8;
    func_0x000100613394();
    func_0x000107c2c110();
    break;
  case 0x21:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x0001004a4ad0(auStack_ba8);
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_bc0);
      func_0x0001004a4ad8(auStack_bd8);
      func_0x0001008343d0();
      puVar13 = auStack_ba8;
      puVar14 = auStack_bc0;
      puVar15 = auStack_bd8;
      func_0x000107c2c0d4(uVar18,auStack_ba8,auStack_bc0,auStack_bd8);
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_05 != 0x60) goto LAB_1004a3f64;
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_b48);
    func_0x0001004a4ad0(auStack_b60);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_b78);
    func_0x0001004a4ad8(auStack_b90);
    func_0x0001008611ac();
    puVar13 = auStack_b48;
    puVar14 = auStack_b60;
    puVar15 = auStack_b78;
    puVar16 = auStack_b90;
    func_0x000107c2c0d0(uVar18,auStack_b48,auStack_b60,auStack_b78,auStack_b90);
    goto code_r0x0001004a3f44;
  case 0x22:
    func_0x00010083438c();
    if (!bVar5) goto LAB_1004a3f64;
    func_0x000100834398();
    if (bVar5) {
      func_0x0001008343a8();
      FUN_1008343c8(*param_5,auStack_8a8);
      func_0x0001004a4ad0(auStack_8c0);
      func_0x0001004a4ad8(auStack_8d8);
      puVar13 = auStack_8a8;
      puVar14 = auStack_8c0;
      puVar15 = auStack_8d8;
      func_0x000107c35404();
      func_0x000107c2c0c8();
      goto code_r0x0001004a3f4c;
    }
    if (extraout_x8_08 != 0x60) goto LAB_1004a3f64;
    func_0x0001008343a8();
    func_0x000100834728(*param_5,auStack_848);
    func_0x0001008343a8();
    FUN_1008343c8(*param_5,auStack_860);
    func_0x0001004a4ad0(auStack_878);
    func_0x0001004a4ad8(auStack_890);
    puVar13 = auStack_848;
    puVar14 = auStack_860;
    puVar15 = auStack_878;
    puVar16 = auStack_890;
    func_0x000107c3540c();
    func_0x000107c2c0c4();
code_r0x0001004a3f44:
    func_0x000107c60ca0(puVar16);
code_r0x0001004a3f4c:
    func_0x000107c60ca0(puVar15);
  }
  func_0x000107c60ca0(puVar14);
  func_0x000107c60ca0(puVar13);
LAB_1004a3f64:
  func_0x000107c60ca0(&pppuStack_b0);
  func_0x000107c60ca0(&pppuStack_98);
  return;
}



/* Entry: 1004a4a80; end: 1004a4b1b;  */

void FUN_1004a4a80(undefined8 *param_1)

{
  long unaff_x29;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar2 = *(undefined8 *)(unaff_x29 + -0x60);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x68);
  param_1[2] = *(undefined8 *)(unaff_x29 + -0x58);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(unaff_x29 + -0x51) = 0;
  *(undefined1 *)(unaff_x29 + -0x68) = 0;
  return;
}



/* Entry: 1004a4b1c; end: 1004a4ba3;  */

void FUN_1004a4b1c(int param_1)

{
  undefined1 in_ZR;
  code *extraout_x8;
  
  func_0x0001004a4aec();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000107c35424();
    FUN_100613460();
    func_0x000107c3545c();
    func_0x000107c3548c();
    func_0x00010061348c();
    func_0x000100613494();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  return;
}



/* Entry: 1004a4ba4; end: 1004a4bcb;  */

void FUN_1004a4ba4(void)

{
  return;
}



/* Entry: 1004a4bcc; end: 1004a4beb;  */

void FUN_1004a4bcc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010015b888();
  }
  return;
}



/* Entry: 1004a4bec; end: 1004a4bf7;  */

void FUN_1004a4bec(void)

{
  return;
}



/* Entry: 1004a4bf8; end: 1004a4c93;  */

undefined1 FUN_1004a4bf8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if (((*(byte *)((long)param_1 + 0x1c) & 1) == 0) && ((*(byte *)((long)param_1 + 0x24) & 1) == 0))
  {
    uVar4 = *param_1;
    uVar1 = param_1[1];
    do {
      if (uVar4 == uVar1) {
        return 0;
      }
      uVar2 = uVar4;
      FUN_100152bb8(uVar4,&UNK_10f73f6e9);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = uVar4;
      FUN_100152bb8(uVar4,&UNK_10f73f6fd);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = uVar4;
      FUN_100152bb8(uVar4,&UNK_10f73f70b);
      uVar4 = uVar4 + 0x30;
      uVar3 = 1;
    } while ((int)uVar2 == 0);
  }
  return uVar3;
}



/* Entry: 1004a4c94; end: 1004a4cef;  */

void FUN_1004a4c94(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1004a240c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x35);
  *(undefined8 *)((long)register0x00000008 + 0x2d) = *(undefined8 *)(unaff_x19 + 0x3d);
  *(undefined8 *)((long)register0x00000008 + 0x25) = uVar3;
  *(undefined8 *)((long)register0x00000008 + 0x20) = uVar2;
  *(undefined8 *)((long)register0x00000008 + 0x18) = uVar1;
  return;
}



/* Entry: 1004a4cf0; end: 1004a500b;  */

void FUN_1004a4cf0(int param_1,code **param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  code **ppcVar7;
  uint uVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined1 *unaff_x19;
  long *unaff_x21;
  ulong unaff_x23;
  undefined8 uVar10;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 *apuStack_130 [7];
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001004a4cd8();
  FUN_100489ca8();
  uStack_68 = extraout_x8;
  FUN_1004a4bf8();
  if (param_1 == 0) {
    uVar5 = unaff_x23;
    FUN_1004a4bf8();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      lVar9 = *unaff_x21;
      FUN_100493cd8();
      FUN_10002b838(&pcStack_f0);
      uVar6 = unaff_x23;
      func_0x000107c2bfa4();
      func_0x000107c2bfac(&pcStack_f0,uVar6);
      func_0x00010048a9fc();
      FUN_100493cd8();
      FUN_10002b838(&pcStack_140);
      func_0x000107c60c94(&uStack_158,lVar9 + 0x78);
      uVar3 = *(undefined4 *)(lVar9 + 0x70);
      FUN_10002b838(&uStack_170,"unknown");
      FUN_10002b838(&uStack_188,"");
      puStack_e0 = apuStack_130[0];
      uStack_78 = uStack_178;
      ppuStack_e8 = ppuStack_138;
      pcStack_f0 = pcStack_140;
      ppuStack_138 = (undefined **)0x0;
      apuStack_130[0] = (undefined8 *)0x0;
      uStack_d0 = uStack_150;
      uStack_d8 = uStack_158;
      uStack_c8 = uStack_148;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      pcStack_140 = (code *)0x0;
      uStack_b0 = uStack_168;
      uStack_b8 = uStack_170;
      uStack_a8 = uStack_160;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_a0 = 0;
      uStack_8c = 0xffffffff;
      uStack_94 = 0xffffffffffffffff;
      uStack_9c = 0xffffffffffffffff;
      uStack_80 = uStack_180;
      uStack_88 = uStack_188;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_70 = 0;
      uVar6 = unaff_x23;
      uStack_c0 = uVar3;
      func_0x000107c2bfa4();
      func_0x000107c2bfc4(&pcStack_f0,uVar6);
      func_0x000100bf5670(&pcStack_f0);
      FUN_10048aa74();
      FUN_1004a5688();
      func_0x000107c60ca0(&uStack_158);
      func_0x000107c60ca0(&pcStack_140);
      if (((*(byte *)(unaff_x23 + 0x1c) & 1) == 0) && ((*(byte *)(unaff_x23 + 0x24) & 1) == 0)) {
        param_2 = (code **)0x4;
      }
      else {
        lVar1 = 0x18;
        if (*(byte *)(unaff_x23 + 0x1c) == 0) {
          lVar1 = 0x20;
        }
        in_ZR = *(int *)(unaff_x23 + lVar1) == 0;
        uVar8 = 3;
        if (!(bool)in_ZR) {
          uVar8 = 4;
        }
        param_2 = (code **)(ulong)uVar8;
      }
      FUN_1004a56b8(lVar9);
      func_0x0001004a50c8();
      func_0x0001004a50e0(&pcStack_f0);
    }
    uVar8 = (uint)uVar5 ^ 1;
  }
  else {
    *unaff_x19 = 3;
    lVar9 = *unaff_x21;
    uVar10 = *(undefined8 *)(unaff_x23 + 0x38);
    plVar2 = *(long **)(lVar9 + 0x20);
    FUN_10049311c(&pcStack_140,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18));
    func_0x0001004a2448(apuStack_130);
    pcStack_f0 = FUN_1004a5790;
    ppuStack_e8 = &PTR_FUN_110abdd88;
    puVar4 = (undefined8 *)0x50;
    uStack_f8 = uVar10;
    func_0x000107c60e20();
    puVar4[1] = ppuStack_138;
    *puVar4 = pcStack_140;
    pcStack_140 = (code *)0x0;
    ppuStack_138 = (undefined **)0x0;
    func_0x0001004a2448(puVar4 + 2,apuStack_130);
    puVar4[9] = uStack_f8;
    param_2 = &pcStack_f0;
    puStack_e0 = puVar4;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_1004a5048();
    FUN_1004a5064(&pcStack_140);
    func_0x0001004a50c8();
    func_0x0001004a50e0(&pcStack_f0);
    uVar8 = 1;
  }
  FUN_10048b398(uStack_68,uVar8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100bf5670(&pcStack_f0);
  FUN_10048aa74();
  FUN_1004a5688();
  func_0x000107c60ca0(&uStack_158);
  ppcVar7 = &pcStack_140;
  func_0x000107c60ca0();
  func_0x000107c34d70();
  *ppcVar7 = *param_2;
  ppcVar7[1] = param_2[1];
  param_2[1] = (code *)0x0;
  return;
}



/* Entry: 1004a500c; end: 1004a5027;  */

void FUN_1004a500c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1004a5028; end: 1004a5047;  */

void FUN_1004a5028(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1004a5064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1004a5048; end: 1004a5063;  */

void FUN_1004a5048(void)

{
  long unaff_x26;
  undefined8 *in_stack_000000a8;
  
                    /* WARNING: Could not recover jumptable at 0x0001004a5054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_000000a8)(unaff_x26 + 8);
  return;
}



/* Entry: 1004a5064; end: 1004a5083;  */

long FUN_1004a5064(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001004a5058();
  func_0x0001004a21bc();
  lVar1 = unaff_x19;
  FUN_10048b470();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1004a5084; end: 1004a508b;  */

void FUN_1004a5084(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1001246dc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x0001004a20fc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1004a508c; end: 1004a50bf;  */

void FUN_1004a508c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1001246dc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x0001004a20fc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1004a50c0; end: 1004a50ff;  */

undefined8 FUN_1004a50c0(long param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_10048b470();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return in_stack_00000008;
}



/* Entry: 1004a5100; end: 1004a512f;  */

undefined8 FUN_1004a5100(void)

{
  func_0x0001004a50f4();
  FUN_10048aa48();
  FUN_10048aa74();
  return 1;
}



/* Entry: 1004a5130; end: 1004a5153;  */

long FUN_1004a5130(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001004a5058();
  func_0x0001004a21bc();
  lVar1 = unaff_x19;
  FUN_10048b470();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1004a5154; end: 1004a5197; -[SCNGrpcAuthContext .cxx_destruct] */

void FUN_1004a5154(long param_1)

{
  FUN_1004a5198(param_1 + 0x28);
  FUN_1004a5198(param_1 + 0x20);
  FUN_1004a5198(param_1 + 0x18);
  FUN_1004a5198(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1004a5198; end: 1004a519f;  */

void FUN_1004a5198(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1004a51a0; end: 1004a51cf; -[SCNGrpcHeader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004a51b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004a51bc) */

void FUN_1004a51a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1004a51d0; end: 1004a51d7;  */

void FUN_1004a51d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1004a51d8; end: 1004a529f;  */

void FUN_1004a51d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1004a531c();
  func_0x000107c60d88();
  uStack_50 = *param_2;
  uStack_48 = *param_3;
  lVar1 = param_1;
  FUN_10015c3e8(param_1,&uStack_50);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1 + 0x20;
    func_0x000107c61148(lVar3);
    FUN_1004a53c4();
    func_0x000107c61180();
    func_0x000107c61170();
    lVar2 = lVar1 + 0x20;
    func_0x000107c61148();
    func_0x000107c61170();
    if (lVar2 == 0) {
      FUN_1004a54dc(param_1,lVar1);
    }
  }
  func_0x0001004a5580();
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1004a52a0; end: 1004a52c7;  */

void FUN_1004a52a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_1004a51d8(*param_1,param_2,&uStack_18);
  return;
}



/* Entry: 1004a52c8; end: 1004a531b; -[SCNGrpcAuthContextCallback .cxx_destruct] */

void FUN_1004a52c8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ccfd38;
    FUN_1004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010049410c((long *)(param_1 + 0x18));
  FUN_1004a5588(param_1 + 8);
  return;
}



/* Entry: 1004a531c; end: 1004a532f;  */

void FUN_1004a531c(void)

{
  return;
}



/* Entry: 1004a5330; end: 1004a534f;  */

void FUN_1004a5330(void)

{
  FUN_1004a5350();
  FUN_1004a53b0();
  return;
}



/* Entry: 1004a5350; end: 1004a5363;  */

bool FUN_1004a5350(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(*param_1 + 8);
  uVar2 = *(ulong *)(*param_2 + 8);
  if (uVar1 == uVar2) {
    return true;
  }
  if (-1 < (long)(uVar2 & uVar1)) {
    return false;
  }
  uVar1 = uVar1 & 0x7fffffffffffffff;
  func_0x000107c613c0(uVar1,uVar2 & 0x7fffffffffffffff);
  return (int)uVar1 == 0;
}



/* Entry: 1004a5364; end: 1004a53af;  */

bool FUN_1004a5364(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar1 == uVar2) {
    return true;
  }
  if (-1 < (long)(uVar2 & uVar1)) {
    return false;
  }
  uVar1 = uVar1 & 0x7fffffffffffffff;
  func_0x000107c613c0(uVar1,uVar2 & 0x7fffffffffffffff);
  return (int)uVar1 == 0;
}



/* Entry: 1004a53b0; end: 1004a53c3;  */

undefined4 FUN_1004a53b0(undefined4 param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 8) == *(long *)(unaff_x19 + 8)) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 1004a53c4; end: 1004a53e7;  */

void FUN_1004a53c4(undefined8 param_1)

{
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1004a53e8; end: 1004a54db;  */

void FUN_1004a53e8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1004a549c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1004a549c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1004a549c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1004a54dc; end: 1004a5507;  */

undefined8 FUN_1004a54dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1004a53e8(auStack_38);
  func_0x00010015ca8c();
  return uVar1;
}



/* Entry: 1004a5508; end: 1004a5533;  */

void FUN_1004a5508(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *in_x11;
  undefined8 in_x12;
  undefined8 in_x15;
  
  *in_x11 = in_x15;
  *param_3 = 0;
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + -1;
  *param_1 = param_3;
  param_1[1] = in_x12;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1004a5534; end: 1004a5573;  */

void FUN_1004a5534(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c61120(param_2 + 0x20);
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1004a5574; end: 1004a5587;  */

void FUN_1004a5574(void)

{
  return;
}



/* Entry: 1004a5588; end: 1004a55af;  */

long FUN_1004a5588(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1004a55b0; end: 1004a55b7;  */

void FUN_1004a55b0(void)

{
  return;
}



/* Entry: 1004a55b8; end: 1004a55e7; -[SCNGrpcAuthContextRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004a55d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004a55d4) */

void FUN_1004a55b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1004a55e8; end: 1004a55f7;  */

void FUN_1004a55e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004a55f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1004a55f8; end: 1004a5623;  */

undefined8 * FUN_1004a55f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd848;
  FUN_10048b47c(param_1 + 1);
  return param_1;
}



/* Entry: 1004a5624; end: 1004a5633;  */

void FUN_1004a5624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1004a5634; end: 1004a5657;  */

void FUN_1004a5634(long param_1)

{
  FUN_1004a5624();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1004a5658; end: 1004a5663;  */

void FUN_1004a5658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x20);
  return;
}



/* Entry: 1004a5664; end: 1004a5687;  */

void FUN_1004a5664(void)

{
  long unaff_x19;
  
  FUN_1004a5658();
  func_0x000107c60ca0(unaff_x19 + 8);
  return;
}



/* Entry: 1004a5688; end: 1004a568f;  */

void FUN_1004a5688(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000020);
  return;
}



/* Entry: 1004a5690; end: 1004a56b7;  */

undefined8 FUN_1004a5690(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10048b47c(param_1 + 0x18);
  FUN_10048b470();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1004a56b8; end: 1004a5753;  */

void FUN_1004a56b8(undefined8 *param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined4 uStack_78;
  undefined8 uStack_38;
  
  FUN_100489ca8();
  uStack_38 = extraout_x8;
  FUN_100493108();
  func_0x000100493114();
  func_0x000100493160(FUN_1004c16ec);
  uStack_78 = param_2;
  func_0x000100493174();
  puVar1 = auStack_98;
  func_0x000100493180();
  func_0x0001004a5764(uStack_90);
  func_0x0001004931c0();
  FUN_10048b398(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001004a5764(uStack_90);
  func_0x0001004931c0();
  func_0x000107c34d70();
  *param_1 = &PTR_DAT_110abdf10;
  uVar2 = *(undefined8 *)(puVar1 + 8);
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  param_1[1] = uVar2;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar1 + 0x18);
  return;
}



/* Entry: 1004a5754; end: 1004a578f;  */

void FUN_1004a5754(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110abdf10;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1004a5790; end: 1004a5a57;  */

void FUN_1004a5790(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [3];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  FUN_100489ca8();
  plVar9 = (long *)param_1[2];
  uStack_58 = extraout_x8;
  if ((*(byte *)(*(long *)(*plVar9 + 0x30) + 0x80) & 1) == 0) {
    lVar4 = *(long *)(*plVar9 + 0x38);
    lStack_90 = *(long *)(*plVar9 + 0x40);
    lStack_98 = lVar4;
    if (lStack_90 != 0) {
      do {
        func_0x000100493ce4();
        lVar4 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    if (lVar4 != 0) {
      uStack_68 = 1;
      puVar3 = (undefined8 *)0x38;
      func_0x000107c60e20();
      plVar7 = puVar3 + 1;
      *plVar7 = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_DAT_110abdb90;
      puVar10 = puVar3 + 3;
      *puVar10 = &PTR_FUN_110abdbe0;
      lVar8 = plVar9[9];
      puVar6 = puVar3 + 4;
      *puVar6 = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puStack_60 = puVar3;
      FUN_1004a5a58(&lStack_d0);
      lVar4 = lStack_d0;
      lStack_d0 = 0;
      func_0x0001004a5c78(puVar6,lVar4);
      FUN_1004a5c90(&lStack_d0);
      FUN_10048a654();
      FUN_1004a5ccc(auStack_88);
      func_0x0001004b5ca4();
      FUN_1004b5f84();
      func_0x00010048a704();
      FUN_10048a654();
      func_0x000107c60de8(auStack_88,lVar8);
      func_0x0001004b5ca4();
      FUN_1004b5f84();
      func_0x00010048a704();
      FUN_1004b6020(*puVar6,plVar9 + 2);
      puStack_60 = (undefined8 *)0x0;
      puStack_a8 = puVar10;
      puStack_a0 = puVar3;
      FUN_1004b6068(auStack_70);
      auStack_88[0] = 0;
      FUN_1004b608c(&lStack_d0,&lStack_98,auStack_88);
      lVar4 = puVar3[6];
      puVar3[6] = lStack_d0;
      if (lVar4 != 0) {
        FUN_1008e319c();
      }
      lStack_d0 = *plVar9;
      lStack_c8 = plVar9[1];
      if (lStack_c8 != 0) {
        do {
          FUN_10048a5a8();
        } while (extraout_w10 != 0);
      }
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar5 = (undefined8 *)0x40;
      puStack_c0 = puVar10;
      puStack_b8 = puVar3;
      func_0x000107c60e20();
      puVar6 = puVar5;
      func_0x0001004b6e88();
      lVar8 = lStack_c8;
      lVar4 = lStack_d0;
      *puVar6 = &PTR_FUN_110abdc10;
      lStack_d0 = 0;
      lStack_c8 = 0;
      puVar6[5] = lVar8;
      puVar6[4] = lVar4;
      puVar6[7] = puStack_b8;
      puVar6[6] = puStack_c0;
      puStack_c0 = (undefined8 *)0x0;
      puStack_b8 = (undefined8 *)0x0;
      FUN_1004b6ec4(&lStack_d0);
      plVar7 = (long *)puVar3[6];
      (**(code **)(*plVar7 + 0x20))(plVar7,puVar3[4],*(undefined8 *)(*plVar9 + 0x30),puVar5);
      lVar4 = puVar3[5];
      puVar3[5] = plVar7;
      if (lVar4 != 0) {
        FUN_1008e319c();
      }
      func_0x0001004b6ee4(&puStack_a8);
    }
    param_1 = &lStack_98;
    FUN_10048b3ac(param_1);
  }
  FUN_10048b398(uStack_58);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001004b6ee4(&puStack_a8);
    do {
      FUN_10048b3ac(&lStack_98);
      func_0x000107c60bd8(param_1);
    } while( true );
  }
  return;
}



/* Entry: 1004a5a58; end: 1004a5a8b;  */

void FUN_1004a5a58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1c0;
  func_0x000107c60e20();
  FUN_1004a5a8c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1004a5a8c; end: 1004a5a8f;  */

undefined2 * FUN_1004a5a8c(undefined2 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar2 = param_1 + 0xc;
  (**(code **)(*plRam0000000113815c70 + 0x70))();
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = 1;
  FUN_100466584();
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined2 **)(param_1 + 0x38) = puVar2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 **)(param_1 + 0x5c) = param_1 + 0x60;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined2 **)(param_1 + 0x78) = param_1 + 0x7c;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 **)(param_1 + 0x94) = param_1 + 0x98;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffff;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 4;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  (**(code **)(*plRam00000001136a2bc8 + 0x10))(plRam00000001136a2bc8,param_1);
  return param_1;
}



/* Entry: 1004a5a90; end: 1004a5c6b;  */

undefined2 * FUN_1004a5a90(undefined2 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar2 = param_1 + 0xc;
  (**(code **)(*plRam0000000113815c70 + 0x70))();
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = 1;
  FUN_100466584();
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined2 **)(param_1 + 0x38) = puVar2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 **)(param_1 + 0x5c) = param_1 + 0x60;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined2 **)(param_1 + 0x78) = param_1 + 0x7c;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 **)(param_1 + 0x94) = param_1 + 0x98;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffff;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 4;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  (**(code **)(*plRam00000001136a2bc8 + 0x10))(plRam00000001136a2bc8,param_1);
  return param_1;
}


