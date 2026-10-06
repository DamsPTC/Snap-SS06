/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107268a34; end: 107268ae7;  */

undefined1  [16]
FUN_107268a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [256];
  undefined8 uStack_38;
  
  pppuVar3 = &ppuStack_170;
  pppuVar4 = &ppuStack_170;
  func_0x000107274388();
  lStack_150 = 0;
  puStack_168 = auStack_138;
  uStack_158 = 0x100;
  lStack_160 = 0;
  ppuStack_170 = &PTR_FUN_110996600;
  uStack_148 = param_2;
  uStack_140 = param_1;
  uStack_38 = extraout_x8;
  func_0x00010727569c(&ppuStack_170,param_3,param_4,param_5,param_6);
  FUN_107268ae8();
  lVar2 = lStack_150;
  lVar1 = lStack_160;
  FUN_107268b74();
  func_0x00010727416c(uStack_38);
  if ((bool)in_ZR) {
    auVar6._8_8_ = lVar1 + lVar2;
    auVar6._0_8_ = pppuVar3;
    return auVar6;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  FUN_107268b74();
  func_0x00010727477c();
  FUN_107268b1c();
  auVar5._0_8_ = *(undefined8 *)((long)pppuVar4 + 0x30);
  auVar5._8_8_ = param_3;
  return auVar5;
}



/* Entry: 107268ae8; end: 107268b07;  */

undefined8 FUN_107268ae8(long param_1)

{
  FUN_107268b1c();
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107268b08; end: 107268b1b;  */

void FUN_107268b08(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == 0x100) {
    func_0x000107274f8c();
    uVar2 = *(ulong *)(param_1 + 0x20);
    uVar1 = 0;
    if (uVar2 <= *(ulong *)(param_1 + 0x28)) {
      uVar1 = *(ulong *)(param_1 + 0x28) - uVar2;
    }
    *(ulong *)(param_1 + 0x20) = uVar2 + extraout_x8;
    uVar2 = extraout_x8;
    if (uVar1 <= extraout_x8) {
      uVar2 = uVar1;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    if (uVar2 != 0) {
      func_0x0001072755bc(lVar3,unaff_x19 + 0x38);
    }
    *(ulong *)(unaff_x19 + 0x30) = lVar3 + uVar2;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    return;
  }
  return;
}



/* Entry: 107268b1c; end: 107268b73;  */

void FUN_107268b1c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long lVar3;
  
  func_0x000107274f8c();
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = 0;
  if (uVar2 <= *(ulong *)(param_1 + 0x28)) {
    uVar1 = *(ulong *)(param_1 + 0x28) - uVar2;
  }
  *(ulong *)(param_1 + 0x20) = uVar2 + extraout_x8;
  uVar2 = extraout_x8;
  if (uVar1 <= extraout_x8) {
    uVar2 = uVar1;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (uVar2 != 0) {
    func_0x0001072755bc(lVar3,unaff_x19 + 0x38);
  }
  *(ulong *)(unaff_x19 + 0x30) = lVar3 + uVar2;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  return;
}



/* Entry: 107268b74; end: 107268b97;  */

undefined8 FUN_107268b74(undefined8 param_1)

{
  FUN_107268b1c();
  return param_1;
}



/* Entry: 107268b98; end: 107268bc3;  */

void FUN_107268b98(undefined8 param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "spotify";
  if (param_2 != 1) {
    pcVar1 = "";
  }
  pcVar2 = "apple_music";
  if (param_2 != 2) {
    pcVar2 = pcVar1;
  }
  func_0x00010002b82c(param_1,pcVar2);
  func_0x000107c613d0(pcVar2);
  func_0x000107c60c50();
  return;
}



/* Entry: 107268bc4; end: 107268be3;  */

void FUN_107268bc4(void)

{
  func_0x0001072752cc();
  FUN_107268be4();
  return;
}



/* Entry: 107268be4; end: 107268c2f;  */

void FUN_107268be4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_107268e98(auStack_38);
  FUN_107268c30(param_1,param_2,auStack_38);
  func_0x000107269124(auStack_38);
  return;
}



/* Entry: 107268c30; end: 107268c47;  */

void FUN_107268c30(undefined8 param_1,long *param_2)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if (*param_2 == param_2[1]) {
    if ((bRam00000001131acf10 & 1) == 0) {
      iVar1 = 0x131acf10;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_107268ccc(0x1131acf00);
        ___cxa_guard_release(0x1131acf10);
      }
    }
    func_0x000107275304();
    if (extraout_x8 != 0) {
      do {
        func_0x000107274880();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x00010727527c(param_2);
  FUN_107268dec();
  return;
}



/* Entry: 107268c48; end: 107268ccb;  */

void FUN_107268c48(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131acf10 & 1) == 0) {
    iVar1 = 0x131acf10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_107268ccc(0x1131acf00);
      ___cxa_guard_release(0x1131acf10);
    }
  }
  func_0x000107275304();
  if (extraout_x8 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107268ccc; end: 107268ce7;  */

void FUN_107268ccc(void)

{
  undefined1 uStack_11;
  
  FUN_107268ce8(&uStack_11);
  return;
}



/* Entry: 107268ce8; end: 107268d4f;  */

void FUN_107268ce8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  FUN_107268d50();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110996660;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x00010727428c();
  func_0x000107268dc0();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072752c0();
  FUN_107268d70();
  func_0x000107275158();
  return;
}



/* Entry: 107268d50; end: 107268d6f;  */

void FUN_107268d50(void)

{
  func_0x0001072752c0();
  FUN_107268d70();
  func_0x000107275158();
  return;
}



/* Entry: 107268d70; end: 107268d8f;  */

void FUN_107268d70(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *unaff_x30;
  
  func_0x000107274e9c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *unaff_x30 = &PTR_FUN_110996660;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107268d90; end: 107268d93;  */

void FUN_107268d90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996660;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107268d94; end: 107268da7;  */

void FUN_107268d94(void)

{
  func_0x000107268db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107268da8; end: 107268dcf;  */

void FUN_107268da8(long param_1)

{
  func_0x0001072745e4(param_1 + 0x18);
  func_0x0001072690bc();
  return;
}



/* Entry: 107268dd0; end: 107268deb;  */

void FUN_107268dd0(void)

{
  func_0x00010727527c();
  FUN_107268dec();
  return;
}



/* Entry: 107268dec; end: 107268e4f;  */

undefined8 * FUN_107268dec(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  FUN_107268d50();
  FUN_107268e50(puStack_30,param_2);
  func_0x00010727428c();
  func_0x000107268dc0();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  func_0x000107268dc0();
  func_0x00010727477c();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110996660;
  puStack_30[1] = 0;
  FUN_107268e84(puStack_30 + 3);
  return puStack_30;
}



/* Entry: 107268e50; end: 107268e83;  */

undefined8 * FUN_107268e50(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110996660;
  param_1[1] = 0;
  FUN_107268e84(param_1 + 3);
  return param_1;
}



/* Entry: 107268e84; end: 107268e97;  */

void FUN_107268e84(long param_1)

{
  func_0x000107274934();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 107268e98; end: 107268ec7;  */

undefined8 * FUN_107268e98(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_107268ec8(param_1,param_2,param_2 + param_3 * 0x40,param_3);
  return param_1;
}



/* Entry: 107268ec8; end: 107268f0f;  */

void FUN_107268ec8(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_107268f10();
    func_0x0001072743a8();
    FUN_107268f44();
  }
  func_0x0001072745c0();
  func_0x000107269094();
  return;
}



/* Entry: 107268f10; end: 107268f43;  */

void FUN_107268f10(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3a == 0) {
    func_0x000107274c40();
    FUN_107268f78();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x40;
  }
  else {
    FUN_107268f6c();
    func_0x000107274d4c();
    func_0x000107274cd8();
    func_0x000107268fb0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 107268f44; end: 107268f6b;  */

void FUN_107268f44(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x000107268fb0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107268f6c; end: 107268f77;  */

void FUN_107268f6c(void)

{
  func_0x00010727455c();
  FUN_107268f98();
  return;
}



/* Entry: 107268f78; end: 107268f97;  */

void FUN_107268f78(void)

{
  FUN_107268f98();
  return;
}



/* Entry: 107268f98; end: 107268fc3;  */

void FUN_107268f98(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  FUN_107268fc4();
  return;
}



/* Entry: 107268fc4; end: 10726902b;  */

long FUN_107268fc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000107274180();
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x40) {
    func_0x000107274c6c();
    FUN_107268350();
    param_4 = uStack_38 + 0x40;
    uStack_38 = param_4;
  }
  func_0x00010727461c();
  FUN_10726902c();
  return param_4;
}



/* Entry: 10726902c; end: 107269057;  */

void FUN_10726902c(void)

{
  uint extraout_w8;
  
  func_0x0001072752d8();
  if ((extraout_w8 & 1) == 0) {
    FUN_107269058();
  }
  return;
}



/* Entry: 107269058; end: 107269067;  */

void FUN_107269058(long param_1)

{
  long unaff_x19;
  
  func_0x000107274bfc();
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x40;
    func_0x000104c3323c();
  }
  return;
}



/* Entry: 107269068; end: 1072690e7;  */

void FUN_107269068(long param_1)

{
  long unaff_x19;
  
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x40;
    func_0x000104c3323c();
  }
  return;
}



/* Entry: 1072690e8; end: 1072690ef;  */

void FUN_1072690e8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x000104c3323c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072690f0; end: 107269147;  */

void FUN_1072690f0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x000104c3323c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107269148; end: 10726918b;  */

long FUN_107269148(long param_1)

{
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  uStack_18 = 0x107269164;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_1072691d4(auStack_38);
  return lStack_30 + 0x38;
}



/* Entry: 10726918c; end: 1072691d3;  */

void FUN_10726918c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong auStack_30 [2];
  
  auStack_30[0] = param_3 & 0xffffffff;
  auStack_30[1] = 0;
  FUN_107268a34(param_4,param_5,param_1,param_2,2,auStack_30);
  *(undefined1 *)(param_4 + param_5) = 0;
  return;
}



/* Entry: 1072691d4; end: 10726920b;  */

void FUN_1072691d4(undefined8 param_1,ulong param_2)

{
  func_0x000107275180();
  if ((param_2 & 1) != 0) {
    func_0x00010727582c();
    FUN_10726920c();
  }
  func_0x000107275190();
  return;
}



/* Entry: 10726920c; end: 107269227;  */

void FUN_10726920c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined4 *)(param_1 + 0x38) = 7;
  return;
}



/* Entry: 107269228; end: 10726924b;  */

undefined4 * FUN_107269228(undefined4 *param_1)

{
  *param_1 = 0;
  func_0x000104c2fe00(param_1 + 2);
  return param_1;
}



/* Entry: 10726924c; end: 10726928b;  */

long FUN_10726924c(long param_1)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072749e4();
  lVar1 = param_1;
  FUN_10726928c();
  uVar2 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  FUN_1072692b0(lVar1 + 0x30);
  return param_1;
}



/* Entry: 10726928c; end: 1072692af;  */

void FUN_10726928c(void)

{
  func_0x00010727473c();
  func_0x000104c31c14();
  return;
}



/* Entry: 1072692b0; end: 1072692d3;  */

void FUN_1072692b0(void)

{
  func_0x00010727473c();
  func_0x000104c31830();
  return;
}



/* Entry: 1072692d4; end: 10726933b;  */

long FUN_1072692d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10726933c();
  func_0x000104c2f64c(lVar1 + 0x70);
  func_0x000104c2f64c(param_1 + 0xa8);
  FUN_107269c1c(param_1 + 0xe0);
  return param_1;
}



/* Entry: 10726933c; end: 107269393;  */

void FUN_10726933c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  func_0x0001072693c4();
  FUN_107268400(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000107269bac(unaff_x19 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 107269394; end: 1072693e3;  */

undefined8 FUN_107269394(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c319e0(param_1 + 0x30);
  func_0x000104c335c0(param_1 + 0x20);
  func_0x000104c3463c(param_1);
  func_0x000104c31c04();
  return unaff_x19;
}



/* Entry: 1072693e4; end: 107269433;  */

void FUN_1072693e4(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    uVar1 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar1;
    return;
  }
  if (param_1 != 5) {
    if (param_1 == 4) {
      func_0x00010727420c(param_3);
      func_0x0001072750c0();
      FUN_10726955c();
      return;
    }
    if (param_1 != 3) {
      if (param_1 == 2) {
        func_0x00010727420c(param_3);
        func_0x0001072750c0();
        FUN_1072696e4();
        return;
      }
      if (param_1 == 1) {
        func_0x00010727420c(param_3);
        func_0x0001072750c0();
        FUN_107269854();
        return;
      }
      if (param_1 == 0) {
        func_0x00010727420c(param_3);
        FUN_1072699b4();
        return;
      }
      return;
    }
  }
  func_0x00010727420c(param_3);
  FUN_10726945c();
  return;
}



/* Entry: 107269434; end: 10726945b;  */

void FUN_107269434(void)

{
  func_0x00010727420c();
  FUN_10726945c();
  return;
}



/* Entry: 10726945c; end: 1072694c3;  */

void FUN_10726945c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107274c2c();
  if (param_4 != 0) {
    func_0x0001072747cc();
    FUN_1072694c4(param_1,param_4);
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x000107275288();
      _memmove();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x0001072745c0();
  func_0x0001072694f8();
  return;
}



/* Entry: 1072694c4; end: 10726951f;  */

void FUN_1072694c4(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000107274c40();
    func_0x000104c31b20();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return;
  }
  func_0x000104c31ae4();
  func_0x000107274c84();
  if ((extraout_x8 & 1) == 0) {
    func_0x000104c31c80();
  }
  return;
}



/* Entry: 107269520; end: 107269533;  */

void FUN_107269520(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 3) {
    func_0x00010727420c(param_3);
    FUN_10726945c();
  }
  else if (param_1 == 2) {
    func_0x00010727420c(param_3);
    func_0x0001072750c0();
    FUN_1072696e4();
  }
  else if (param_1 == 1) {
    func_0x00010727420c(param_3);
    func_0x0001072750c0();
    FUN_107269854();
  }
  else {
    if (param_1 != 0) {
      return;
    }
    func_0x00010727420c(param_3);
    FUN_1072699b4();
  }
  return;
}



/* Entry: 107269534; end: 10726955b;  */

void FUN_107269534(void)

{
  func_0x00010727420c();
  func_0x0001072750c0();
  FUN_10726955c();
  return;
}



/* Entry: 10726955c; end: 1072695a3;  */

void FUN_10726955c(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_1072695a4();
    func_0x0001072743a8();
    FUN_1072695d0();
  }
  func_0x0001072745c0();
  FUN_10726966c();
  return;
}



/* Entry: 1072695a4; end: 1072695cf;  */

void FUN_1072695a4(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x000107274d98();
  if ((bool)in_CY) {
    func_0x000104c32314();
    func_0x000107274d4c();
    func_0x000107274cd8();
    FUN_1072695f8();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x000107274c40();
    func_0x000104c32350();
    func_0x000107274e80();
  }
  return;
}



/* Entry: 1072695d0; end: 1072695f7;  */

void FUN_1072695d0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  FUN_1072695f8();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072695f8; end: 10726960b;  */

void FUN_1072695f8(void)

{
  FUN_10726960c();
  return;
}



/* Entry: 10726960c; end: 107269653;  */

void FUN_10726960c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072749e4();
  func_0x000107274180();
  while (unaff_x21 != unaff_x20) {
    func_0x000107274b34();
    FUN_107269654();
    func_0x000107274d64();
  }
  func_0x00010727461c();
  func_0x000104c32408();
  return;
}



/* Entry: 107269654; end: 10726966b;  */

void FUN_107269654(void)

{
  FUN_107269434();
  return;
}



/* Entry: 10726966c; end: 107269693;  */

void FUN_10726966c(void)

{
  uint extraout_w8;
  
  func_0x000107274c84();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104c31ccc();
  }
  return;
}



/* Entry: 107269694; end: 1072696bb;  */

void FUN_107269694(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 2) {
    func_0x00010727420c(param_3);
    func_0x0001072750c0();
    FUN_1072696e4();
  }
  else if (param_1 == 1) {
    func_0x00010727420c(param_3);
    func_0x0001072750c0();
    FUN_107269854();
  }
  else {
    if (param_1 != 0) {
      return;
    }
    func_0x00010727420c(param_3);
    FUN_1072699b4();
  }
  return;
}



/* Entry: 1072696bc; end: 1072696e3;  */

void FUN_1072696bc(void)

{
  func_0x00010727420c();
  func_0x0001072750c0();
  FUN_1072696e4();
  return;
}



/* Entry: 1072696e4; end: 10726972b;  */

void FUN_1072696e4(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_10726972c();
    func_0x0001072743a8();
    FUN_107269758();
  }
  func_0x0001072745c0();
  FUN_1072697f4();
  return;
}



/* Entry: 10726972c; end: 107269757;  */

void FUN_10726972c(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x000107274d98();
  if ((bool)in_CY) {
    func_0x000104c3205c();
    func_0x000107274d4c();
    func_0x000107274cd8();
    FUN_107269780();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x000107274c40();
    func_0x000104c32098();
    func_0x000107274e80();
  }
  return;
}



/* Entry: 107269758; end: 10726977f;  */

void FUN_107269758(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  FUN_107269780();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107269780; end: 107269793;  */

void FUN_107269780(void)

{
  FUN_107269794();
  return;
}



/* Entry: 107269794; end: 1072697db;  */

void FUN_107269794(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072749e4();
  func_0x000107274180();
  while (unaff_x21 != unaff_x20) {
    func_0x000107274b34();
    FUN_1072697dc();
    func_0x000107274d64();
  }
  func_0x00010727461c();
  func_0x000104c32150();
  return;
}



/* Entry: 1072697dc; end: 1072697f3;  */

void FUN_1072697dc(void)

{
  FUN_107269434();
  return;
}



/* Entry: 1072697f4; end: 10726981b;  */

void FUN_1072697f4(void)

{
  uint extraout_w8;
  
  func_0x000107274c84();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104c31d7c();
  }
  return;
}



/* Entry: 10726981c; end: 10726982b;  */

void FUN_10726981c(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    return;
  }
  func_0x00010727420c(param_3);
  FUN_1072699b4();
  return;
}



/* Entry: 10726982c; end: 107269853;  */

void FUN_10726982c(void)

{
  func_0x00010727420c();
  func_0x0001072750c0();
  FUN_107269854();
  return;
}



/* Entry: 107269854; end: 10726989b;  */

void FUN_107269854(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_10726989c();
    func_0x0001072743a8();
    FUN_1072698c8();
  }
  func_0x0001072745c0();
  FUN_107269964();
  return;
}



/* Entry: 10726989c; end: 1072698c7;  */

void FUN_10726989c(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x000107274d98();
  if ((bool)in_CY) {
    func_0x000104c325b4();
    func_0x000107274d4c();
    func_0x000107274cd8();
    FUN_1072698f0();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x000107274c40();
    func_0x000104c325f0();
    func_0x000107274e80();
  }
  return;
}



/* Entry: 1072698c8; end: 1072698ef;  */

void FUN_1072698c8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  FUN_1072698f0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072698f0; end: 107269903;  */

void FUN_1072698f0(void)

{
  FUN_107269904();
  return;
}



/* Entry: 107269904; end: 10726994b;  */

void FUN_107269904(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072749e4();
  func_0x000107274180();
  while (unaff_x21 != unaff_x20) {
    func_0x000107274b34();
    FUN_10726994c();
    func_0x000107274d64();
  }
  func_0x00010727461c();
  func_0x000104c326a8();
  return;
}



/* Entry: 10726994c; end: 107269963;  */

void FUN_10726994c(void)

{
  FUN_107269534();
  return;
}



/* Entry: 107269964; end: 1072699b3;  */

void FUN_107269964(void)

{
  uint extraout_w8;
  
  func_0x000107274c84();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104c31e14();
  }
  return;
}



/* Entry: 1072699b4; end: 1072699fb;  */

void FUN_1072699b4(void)

{
  long in_x3;
  
  func_0x000107274c2c();
  if (in_x3 != 0) {
    func_0x0001072741f4();
    FUN_1072699fc();
    func_0x0001072743a8();
    FUN_107269a30();
  }
  func_0x0001072745c0();
  func_0x000107269b84();
  return;
}



/* Entry: 1072699fc; end: 107269a2f;  */

void FUN_1072699fc(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x000107274c40();
    FUN_107269a64();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_107269a58();
    func_0x000107274d4c();
    func_0x000107274cd8();
    func_0x000107269aa0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 107269a30; end: 107269a57;  */

void FUN_107269a30(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107274d4c();
  func_0x000107274cd8();
  func_0x000107269aa0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107269a58; end: 107269a63;  */

void FUN_107269a58(void)

{
  func_0x00010727455c();
  FUN_107269a84();
  return;
}



/* Entry: 107269a64; end: 107269a83;  */

void FUN_107269a64(void)

{
  FUN_107269a84();
  return;
}



/* Entry: 107269a84; end: 107269ab3;  */

void FUN_107269a84(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_107269ab4();
  return;
}



/* Entry: 107269ab4; end: 107269b1b;  */

long FUN_107269ab4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000107274180();
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 0x20) {
    func_0x000107274c6c();
    func_0x0001072693c4();
    param_4 = uStack_38 + 0x20;
    uStack_38 = param_4;
  }
  func_0x00010727461c();
  FUN_107269b1c();
  return param_4;
}



/* Entry: 107269b1c; end: 107269b47;  */

void FUN_107269b1c(void)

{
  uint extraout_w8;
  
  func_0x0001072752d8();
  if ((extraout_w8 & 1) == 0) {
    FUN_107269b48();
  }
  return;
}



/* Entry: 107269b48; end: 107269b57;  */

void FUN_107269b48(long param_1)

{
  long unaff_x19;
  
  func_0x000107274bfc();
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000104c3365c();
  }
  return;
}



/* Entry: 107269b58; end: 107269bcb;  */

void FUN_107269b58(long param_1)

{
  long unaff_x19;
  
  func_0x000107275458();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x000104c3365c();
  }
  return;
}



/* Entry: 107269bcc; end: 107269c1b;  */

void FUN_107269bcc(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (param_1 == 4) {
    return;
  }
  if ((param_1 == 3) || (param_1 == 2)) {
    *param_3 = *param_2;
    return;
  }
  if (param_1 == 1) {
    *param_3 = *param_2;
    return;
  }
  if (param_1 == 0) {
    func_0x0001000d03a8(param_3);
    func_0x000104c2feb0();
    *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
    func_0x000104c2fe38();
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
    return;
  }
  return;
}



/* Entry: 107269c1c; end: 107269c63;  */

void FUN_107269c1c(void)

{
  func_0x0001072752cc();
  func_0x000104c3329c();
  return;
}



/* Entry: 107269c64; end: 107269ccb;  */

void FUN_107269c64(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107274c2c();
  if (param_4 != 0) {
    func_0x0001072747cc();
    FUN_107269ccc(param_1,param_4);
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x000107275288();
      _memmove();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x0001072745c0();
  FUN_107269d44();
  return;
}



/* Entry: 107269ccc; end: 107269cff;  */

void FUN_107269ccc(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x000107274c40();
    FUN_107269d0c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 8;
    return;
  }
  FUN_107269d00();
  func_0x00010727455c();
  FUN_107269d2c();
  return;
}



/* Entry: 107269d00; end: 107269d0b;  */

void FUN_107269d00(void)

{
  func_0x00010727455c();
  FUN_107269d2c();
  return;
}



/* Entry: 107269d0c; end: 107269d2b;  */

void FUN_107269d0c(void)

{
  FUN_107269d2c();
  return;
}



/* Entry: 107269d2c; end: 107269d43;  */

void FUN_107269d2c(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107274c84();
  if ((extraout_x8 & 1) == 0) {
    FUN_107269d6c();
  }
  return;
}



/* Entry: 107269d44; end: 107269d6b;  */

void FUN_107269d44(void)

{
  uint extraout_w8;
  
  func_0x000107274c84();
  if ((extraout_w8 & 1) == 0) {
    FUN_107269d6c();
  }
  return;
}



/* Entry: 107269d6c; end: 107269d7f;  */

void FUN_107269d6c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107269d80; end: 107269dd3;  */

void FUN_107269d80(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072747d8();
  func_0x000104c318bc();
  func_0x000107275648();
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined4 *)(unaff_x20 + 0xc0) = *(undefined4 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar1;
  return;
}



/* Entry: 107269dd4; end: 107269df3;  */

void FUN_107269dd4(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_107269ea4();
  }
  return;
}



/* Entry: 107269df4; end: 107269e97;  */

void FUN_107269df4(void)

{
  func_0x0001072747d8();
  func_0x000107269e14();
  func_0x000107274600();
  return;
}



/* Entry: 107269e98; end: 107269ea3;  */

long FUN_107269e98(long param_1)

{
  func_0x00010727455c();
  func_0x000107269e3c(param_1 + 0x98);
  FUN_107261ecc(param_1 + 0x38);
  func_0x000107274878();
  return param_1;
}



/* Entry: 107269ea4; end: 107269ed3;  */

long FUN_107269ea4(long param_1)

{
  func_0x000107269e3c(param_1 + 0x98);
  FUN_107261ecc(param_1 + 0x38);
  func_0x000107274878();
  return param_1;
}


