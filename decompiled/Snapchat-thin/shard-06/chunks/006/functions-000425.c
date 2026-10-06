/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c00d5c; end: 104c00da3;  */

void FUN_104c00d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010048971c();
  *(undefined1 *)(param_4 + 0x58) = 0;
  func_0x0001004b94ac();
  func_0x0001004b94f4();
  *(undefined8 *)(unaff_x19 + 0x50) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x48) = param_3;
  *(undefined8 *)(unaff_x19 + 0x40) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x38) = param_2;
  *(undefined8 *)(unaff_x19 + 0x30) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x28) = param_1;
  func_0x000104c00e90();
  if ((int)unaff_x19 != 0) {
    func_0x000104c01aa0();
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 104c00da4; end: 104c00dc3;  */

undefined8 FUN_104c00da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104c00dc4; end: 104c00e17;  */

void FUN_104c00dc4(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack_48;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x0001004bad1c();
  func_0x0001006136e8();
  func_0x0001006137b4();
  func_0x0001006137c4();
  func_0x0001006137e0();
  if (iVar1 != 0) {
    func_0x000104c019e4();
  }
  func_0x0001004b9658(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0x58) = 1;
  func_0x000100834b98();
  func_0x000100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c00e18; end: 104c00e57;  */

void FUN_104c00e18(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  func_0x000100834b98();
  func_0x000100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c00e58; end: 104c00eeb;  */

undefined8 FUN_104c00e58(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x0001008333cc(param_1 + 0x60);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x88) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x88) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    FUN_104c0070c(param_1 + 0x60);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0x60);
  }
  return 0;
}



/* Entry: 104c00eec; end: 104c00eff;  */

void FUN_104c00eec(void)

{
  func_0x000104c011b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c00f00; end: 104c00f2f;  */

void FUN_104c00f00(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x8d) = 1;
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined1 *)(param_1 + 0x8e) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



/* Entry: 104c00f30; end: 104c00f43;  */

void FUN_104c00f30(void)

{
  func_0x000104c01188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c00f44; end: 104c00fbb;  */

void FUN_104c00f44(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0001004bb09c();
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x000100834c2c(*(undefined8 *)(unaff_x19 + 0x80));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x70);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 400);
  }
  else {
    func_0x00010083320c(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 400) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_104c010d8();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x70);
  }
  func_0x000100612124();
  func_0x000100834c68();
  return;
}



/* Entry: 104c00fbc; end: 104c01003;  */

void FUN_104c00fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010048971c();
  *(undefined1 *)(param_4 + 0xa8) = 0;
  func_0x0001004b94ac();
  func_0x0001004b94f4();
  *(undefined8 *)(unaff_x19 + 0xa0) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x98) = param_3;
  *(undefined8 *)(unaff_x19 + 0x90) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x88) = param_2;
  *(undefined8 *)(unaff_x19 + 0x80) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x78) = param_1;
  func_0x000104c01124();
  if ((int)unaff_x19 != 0) {
    func_0x000104c01aa0();
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 104c01004; end: 104c01037;  */

undefined8 FUN_104c01004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104c01038; end: 104c01097;  */

void FUN_104c01038(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x0001004bad1c();
  func_0x0001006136e8();
  lVar2 = unaff_x19 + 0x18;
  func_0x0001004bb090();
  func_0x000100613760();
  func_0x0001006137b4();
  func_0x0001006137c4();
  func_0x0001006137e0();
  if ((int)lVar2 != 0) {
    func_0x000104c019e4();
  }
  func_0x0001004b9658(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0xa8) = 1;
  func_0x000100834b98();
  iVar1 = (int)lVar2;
  func_0x000100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c01098; end: 104c010d7;  */

void FUN_104c01098(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  func_0x000100834b98();
  func_0x000100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c010d8; end: 104c0129b;  */

undefined8 FUN_104c010d8(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x0001008333cc(param_1 + 0xb0);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined1 *)(param_1 + 0xc2) = 1;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xd8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    FUN_104c0070c(param_1 + 0xb0);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0xb0);
  }
  return 0;
}



/* Entry: 104c0129c; end: 104c0130b;  */

void FUN_104c0129c(void)

{
  code *extraout_x8;
  code *extraout_x9;
  
  func_0x00010061165c();
  (*extraout_x9)();
  func_0x000100612124();
  func_0x000100612134();
  (*extraout_x8)();
  func_0x000100c21a90();
  FUN_104c01338();
  return;
}



/* Entry: 104c0130c; end: 104c01337;  */

void FUN_104c0130c(undefined8 param_1)

{
  code *extraout_x8;
  
  func_0x000104c019cc();
  func_0x000104c01ab8(param_1,&DAT_10f6842c6);
  (*extraout_x8)();
  return;
}



/* Entry: 104c01338; end: 104c01423;  */

undefined8 *
FUN_104c01338(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4,long param_5)

{
  code *extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_1107ea730;
  param_1[1] = &PTR_FUN_1107ea788;
  param_1[2] = &PTR_DAT_1107ea7b8;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[7] = param_2[3];
  param_1[6] = uVar3;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  *(char *)(param_1 + 10) = (char)param_4;
  func_0x0001004b91c8(param_1 + 0xb);
  func_0x000100c21bfc(param_1 + 0x34);
  func_0x0001004b9300(param_1 + 0x61);
  func_0x0001004b9360(param_1 + 0x96);
  if (param_4 == 0) {
    if (param_5 != 0) {
      func_0x000104c019cc();
      func_0x000104c01ab8();
      (*extraout_x8)();
    }
  }
  else {
    func_0x00010016ca30();
    FUN_104c01424();
  }
  return param_1;
}



/* Entry: 104c01424; end: 104c01487;  */

void FUN_104c01424(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010048971c();
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
  func_0x000100612df4(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c01488; end: 104c0148f;  */

long FUN_104c01488(long param_1)

{
  func_0x000104c01188(param_1 + 0x4b0);
  func_0x000104c01224(param_1 + 0x308);
  func_0x000104c011b8(param_1 + 0x1a0);
  func_0x000104c011f4(param_1 + 0x58);
  return param_1;
}



/* Entry: 104c01490; end: 104c014db;  */

void FUN_104c01490(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001001246dc();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000104c019cc();
    func_0x000104c01ab8();
    UNRECOVERED_JUMPTABLE = (code *)0x211;
    (*extraout_x8)();
  }
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  func_0x000100c21ce0();
  func_0x00010048971c();
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(unaff_x19 + 0x330) = 0;
  *(undefined1 *)(unaff_x19 + 0x311) = 1;
  *(int *)(unaff_x19 + 0x314) = (int)lVar2;
  *(long *)(unaff_x19 + 800) = lVar1;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x18) + 0x150) & 1) != 0) {
    return;
  }
  *(long *)(unaff_x19 + 0x388) = unaff_x20;
  func_0x000100612df4(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c014dc; end: 104c015cf;  */

void FUN_104c014dc(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  char *pcVar1;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010048971c();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000104c01a08(uRam0000000113815c70);
    UNRECOVERED_JUMPTABLE = (code *)0x21e;
    (*extraout_x8)();
  }
  pcVar1 = *(char **)(unaff_x19 + 0x18);
  if (*pcVar1 == '\x01') {
    func_0x000104c01a80(uRam0000000113815c70);
    func_0x000104c01ab8();
    UNRECOVERED_JUMPTABLE = (code *)0x21f;
    (*extraout_x8_00)();
    pcVar1 = *(char **)(unaff_x19 + 0x18);
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x20;
  func_0x000100c229d0(pcVar1,*(undefined8 *)(unaff_x19 + 0x20));
  *(undefined8 *)(unaff_x19 + 0x68) = extraout_x8_01;
  func_0x000100612df4();
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c015d0; end: 104c0161f;  */

void FUN_104c015d0(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010048971c();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000104c019cc();
    func_0x000104c01a48();
    UNRECOVERED_JUMPTABLE = (code *)0x245;
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x388) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x379) = 1;
  func_0x000100612df4(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000104c0161c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c01620; end: 104c01707;  */

void FUN_104c01620(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001004bb09c();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000104c019cc();
    func_0x000104c01a48();
    UNRECOVERED_JUMPTABLE = (code *)0x227;
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x19 + 0x1e0) = unaff_x21;
  if ((**(byte **)(unaff_x19 + 0x18) & 1) == 0) {
    func_0x000100c229d0();
    *(undefined8 *)(unaff_x19 + 0x1b0) = extraout_x8_00;
  }
  *(undefined8 *)(unaff_x19 + 0x1c0) = unaff_x20;
  func_0x000100612df4(*(undefined8 *)(unaff_x19 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100c21d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 104c01708; end: 104c017bb;  */

void FUN_104c01708(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *extraout_x8;
  ulong uVar1;
  code *extraout_x8_00;
  int aiStack_78 [14];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000104c01a08(uRam0000000113815c70);
    (*extraout_x8)();
  }
  *(undefined8 *)(param_1 + 0x388) = param_4;
  uVar1 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar1 = param_3 | 1;
    *(undefined1 *)(param_1 + 0x379) = 1;
  }
  func_0x0001006122bc(aiStack_78,param_1 + 0x338,param_2,
                      param_3 & 0xffffffff00000000 | uVar1 & 0xffffffff);
  func_0x000100612328();
  if (aiStack_78[0] != 0) {
    func_0x000104c01a80(uRam0000000113815c70);
    func_0x000104c01ab8();
    (*extraout_x8_00)();
  }
  func_0x000104c01a80(*(undefined8 *)(param_1 + 0x20));
  func_0x000104c01bb8();
  return;
}



/* Entry: 104c017bc; end: 104c017f3;  */

long FUN_104c017bc(long param_1)

{
  func_0x000104c01188(param_1 + 0x4a8);
  func_0x000104c01224(param_1 + 0x300);
  func_0x000104c011b8(param_1 + 0x198);
  func_0x000104c011f4(param_1 + 0x50);
  return param_1 + -8;
}



/* Entry: 104c017f4; end: 104c01863;  */

long FUN_104c017f4(long param_1)

{
  func_0x000104c01188(param_1 + 0x4b0);
  func_0x000104c01224(param_1 + 0x308);
  func_0x000104c011b8(param_1 + 0x1a0);
  func_0x000104c011f4(param_1 + 0x58);
  return param_1;
}



/* Entry: 104c01864; end: 104c018f3;  */

void FUN_104c01864(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined **ppuVar3;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_28;
  
  func_0x0001004b9648();
  ppuStack_80 = &PTR_DAT_1107ea858;
  uStack_78 = *param_2;
  *param_2 = 0;
  uStack_28 = extraout_x8;
  func_0x000104c01a80();
  (*extraout_x8_00)();
  (*(code *)*ppuStack_80)();
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  func_0x000104c01a98();
  ppuVar2 = pppuVar1[2];
  ppuVar3 = ppuVar2 + 2;
  while (ppuVar3 = (undefined **)*ppuVar3, ppuVar3 != (undefined **)0x0) {
    (**(code **)(*(long *)ppuVar3[0x22] + 0x20))();
  }
  func_0x00010b282ccc(ppuVar2);
  *(undefined1 *)(ppuVar2 + 5) = 1;
  return;
}



/* Entry: 104c018f4; end: 104c01923;  */

void FUN_104c018f4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = (long *)(lVar1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    (**(code **)(*(long *)plVar2[0x22] + 0x20))();
  }
  func_0x00010b282ccc(lVar1);
  *(undefined1 *)(lVar1 + 0x28) = 1;
  return;
}



/* Entry: 104c01924; end: 104c019bf;  */

long FUN_104c01924(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  func_0x000104c01b44(&UNK_1107e9c90);
  *unaff_x20 = extraout_x8;
  __ZNSt3__15mutexD1Ev(lVar2 + 0x220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x200);
  func_0x0001001148fc(param_1 + 0x1e0);
  func_0x0001001148fc(param_1 + 0x1c0);
  func_0x0001006038cc(param_1 + 0x108);
  func_0x0001001148fc(param_1 + 0xe8);
  func_0x000104c01994(param_1 + 0xe0);
  func_0x000100450be4(unaff_x20 + 0x1a);
  lVar2 = param_1;
  func_0x00010055f1dc();
  if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340e260;
    (*(code *)PTR___tlv_bootstrap_11340e260)();
    if (*ppuVar1 == *(undefined **)(param_1 + 0x38)) {
      func_0x000104c01830(param_1);
    }
    else {
      uStack_28 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_104c01864(*(undefined **)(param_1 + 0x38),&uStack_28);
      func_0x000104bffcac(&uStack_28);
    }
  }
  func_0x00010046997c(param_1 + 0xb8);
  func_0x0001004699a0(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x000104bffcac(param_1 + 0x80);
  func_0x00010048ac10(param_1 + 0x70);
  func_0x000100561bd0(param_1 + 0x68);
  func_0x000100561d44(param_1 + 0x58);
  func_0x00010048b4e8(param_1 + 0x48);
  func_0x000100450be4(param_1 + 0x38);
  func_0x000100488b84(param_1 + 0x20);
  func_0x00010055f5a0(param_1 + 0x18);
  func_0x000100561e24(param_1 + 8);
  return param_1;
}



/* Entry: 104c019c0; end: 104c01bf3;  */

void FUN_104c019c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e9bc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c01bf4; end: 104c020eb;  */

/* WARNING: Removing unreachable block (ram,0x000104c01f80) */
/* WARNING: Removing unreachable block (ram,0x000104c01f84) */
/* WARNING: Removing unreachable block (ram,0x000104c01f88) */
/* WARNING: Removing unreachable block (ram,0x000104c01fa0) */

long FUN_104c01bf4(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
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
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  
  func_0x000104c05768();
  uStack_78 = extraout_x8;
  func_0x000104c058a4();
  puVar2 = (undefined8 *)0x230;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = puVar2 + 3;
  *puVar2 = &PTR_FUN_1107ea9c0;
  func_0x000108b8411c(puVar3,0x10000,0x400);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  puVar2 = (undefined8 *)0x10;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  uVar4 = 0xd0;
  __Znwm();
  func_0x000108985efc();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xe0) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0x1e0000012c;
  *(undefined8 *)(param_1 + 0x128) = 0x28000000168;
  *(undefined4 *)(param_1 + 0x138) = 0x5dc;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0x3400000004;
  *(undefined8 *)(param_1 + 0x144) = 0x18000003e8;
  uStack_f8 = 0x3e800000000;
  uStack_100 = 0x28000000168;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000104c05644(auStack_158,&uStack_100);
  auStack_d8[0] = 1;
  FUN_104c038b0(auStack_d0,auStack_158);
  uStack_118 = 0x3e800000000;
  uStack_120 = 0x28000000168;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x000104c05644(auStack_170,&uStack_120);
  uStack_b8 = 2;
  FUN_104c038b0(auStack_b0,auStack_170);
  uStack_138 = 0x3e800000000;
  uStack_140 = 0x28000000168;
  uStack_128 = 0;
  uStack_130 = 0;
  func_0x000104c05644(auStack_188,&uStack_140);
  uStack_98 = 4;
  func_0x000104c05820(auStack_d8);
  func_0x000104c05750(param_1 + 0x158);
  auVar8 = NEON_fmov(0x3ff0000000000000,8);
  *(long *)(param_1 + 0x178) = auVar8._8_8_;
  *(long *)(param_1 + 0x170) = auVar8._0_8_;
  lVar7 = 0x48;
  do {
    FUN_104c03854((long)auStack_d8 + lVar7);
    lVar7 = lVar7 + -0x20;
  } while (lVar7 != -0x18);
  func_0x000104c05760();
  func_0x000104c056dc();
  func_0x000104c056fc();
  *(undefined8 *)(param_1 + 0x188) = 0x1e000002bc;
  *(undefined8 *)(param_1 + 0x180) = 0x500000002d0;
  *(undefined4 *)(param_1 + 400) = 0x898;
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0x3400000004;
  *(undefined8 *)(param_1 + 0x19c) = 0xf000007d0;
  uStack_f8 = 0x89800000000;
  uStack_100 = 0x500000002d0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000104c05644(auStack_158,&uStack_100);
  auStack_d8[0] = 1;
  FUN_104c038b0(auStack_d0,auStack_158);
  uStack_118 = 0x89800000000;
  uStack_120 = 0x500000002d0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x000104c05644(auStack_170,&uStack_120);
  uStack_b8 = 2;
  FUN_104c038b0(auStack_b0,auStack_170);
  uStack_138 = 0x89800000000;
  uStack_140 = 0x500000002d0;
  uStack_128 = 0;
  uStack_130 = 0;
  func_0x000104c05644(auStack_188,&uStack_140);
  uStack_98 = 4;
  func_0x000104c05820(auStack_d8);
  func_0x000104c05750(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1c8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x1d0) = 0x3ff0000000000000;
  lVar7 = 0x48;
  do {
    lVar6 = lVar7;
    FUN_104c03854();
    uVar1 = lVar6 + -0x20 == -0x18;
    lVar7 = lVar6 + -0x20;
  } while (!(bool)uVar1);
  func_0x000104c05760();
  func_0x000104c056dc();
  func_0x000104c056fc();
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  func_0x000104c05684(uStack_78);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar5 = auStack_90;
    lVar7 = -0x60;
    do {
      FUN_104c03854(puVar5);
      puVar5 = puVar5 + -0x20;
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != 0);
    func_0x000104c05760();
    func_0x000104c056dc();
    func_0x000104c056fc();
    func_0x000104c03d34(lVar6 + 0x108);
    func_0x000104c04af4(lVar6 + 0xd0);
    __ZNSt3__15mutexD1Ev((undefined8 *)(param_1 + 0xe0));
    func_0x000104c04ab0((undefined8 *)(param_1 + 0xb8));
    func_0x00010028ad98((undefined8 *)(param_1 + 0x88));
    func_0x000104c04a8c((undefined8 *)(param_1 + 0x78));
    func_0x000104c04a68((undefined8 *)(param_1 + 0x68));
    func_0x000104c04a44((undefined8 *)(param_1 + 0x58));
    func_0x000104c04a20((undefined8 *)(param_1 + 0x48));
    FUN_104c049d8((undefined8 *)(param_1 + 0x38));
    func_0x000104c04990(0xffffffffffffffe8);
    func_0x000104c04968(param_1 + 0x28);
    do {
      func_0x000104c04918(param_1 + 0x20);
      func_0x000104c048f4(param_1 + 0x10);
      __Unwind_Resume();
      __ZdlPv(1);
    } while( true );
  }
  return param_1;
}



/* Entry: 104c020ec; end: 104c02407;  */

undefined8 * FUN_104c020ec(undefined8 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined1 *unaff_x22;
  long lVar8;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar3 = param_1;
    func_0x000104c05768();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x000104c058a4();
    *(undefined1 *)(puVar3 + 8) = 0;
    unaff_x20 = puVar3 + 0x1c;
    *(undefined8 **)((long)register0x00000008 + -0x68) = unaff_x20;
    *(undefined1 *)((long)register0x00000008 + -0x60) = 1;
    __ZNSt3__15mutex4lockEv(unaff_x20);
    uVar7 = param_1[0x1a];
    puVar3 = (undefined8 *)0x78;
    __Znwm();
    *puVar3 = 0x32aaaba7;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0x3cb0b1bb;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
    *(short *)(puVar3 + 0xe) = (short)uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    FUN_104c04b14(param_1 + 0x24);
    func_0x000104c04af4((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001000df5a0((undefined1 *)((long)register0x00000008 + -0x68));
    lVar4 = param_1[0x24];
    FUN_104c02528(lVar4,5);
    uVar2 = *(char *)((long)param_1 + 0x1d9) == '\x01';
    if (((bool)uVar2) &&
       (bVar1 = *(byte *)(param_1 + 0x3b), *(undefined1 *)(param_1 + 0x3b) = 1, (bVar1 & 1) == 0)) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108b83ef8((undefined1 *)((long)register0x00000008 + -0x80),1);
      lVar8 = param_1[2];
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        do {
          func_0x000104c055a8();
        } while (extraout_w10 != 0);
      }
      *(undefined1 **)((long)register0x00000008 + -0x68) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined1 **)((long)register0x00000008 + -0xa0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      puVar3 = (undefined8 *)0x30;
      func_0x00010bd3faa4();
      *(undefined8 **)((long)register0x00000008 + -0x60) = puVar3;
      *puVar3 = 0;
      puVar3[1] = FUN_104c03de4;
      *(undefined4 *)(puVar3 + 2) = 0;
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x90);
      puVar3[4] = *(undefined8 *)((long)register0x00000008 + -0x88);
      puVar3[3] = uVar7;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x58) = puVar3;
      func_0x00010bd4058c(*(undefined8 *)(lVar8 + 0x138),puVar3,0);
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      FUN_104c03dc0((undefined1 *)((long)register0x00000008 + -0x68));
      FUN_104c05208((undefined1 *)((long)register0x00000008 + -0x90));
      puVar5 = *(undefined8 **)((long)register0x00000008 + -0x80);
      FUN_104c02528(puVar5,2);
      func_0x0001089a3c0c();
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined ***)((long)register0x00000008 + -0x68) = &PTR_FUN_1107eac58;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x48) = 0x75;
      puVar3 = puVar5;
      __ZNSt3__16chrono12steady_clock3nowEv();
      (*(code *)**(undefined8 **)*puVar5)
                ((undefined8 *)*puVar5,(undefined1 *)((long)register0x00000008 + -0x68),
                 (long)puVar3 - lVar4);
      FUN_104c03ee4((undefined1 *)((long)register0x00000008 + -0x68));
      FUN_104c05208((undefined1 *)((long)register0x00000008 + -0x80));
    }
    unaff_x21 = param_1 + 2;
    uVar7 = *unaff_x21;
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x68);
    *(code **)((long)register0x00000008 + -0x68) = FUN_104c05188;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_FUN_1107eaae0;
    *(undefined8 **)((long)register0x00000008 + -0x58) = param_1;
    iVar6 = (int)(undefined1 *)((long)register0x00000008 + -0x68);
    func_0x000108b844f8(uVar7);
    func_0x000104c056e4();
    func_0x000104c03d34(param_1 + 0x36);
    func_0x000104c03d34(param_1 + 0x2b);
    func_0x000104c04af4(param_1 + 0x24);
    __ZNSt3__15mutexD1Ev(unaff_x20);
    func_0x000104c04ab0(param_1 + 0x17);
    func_0x00010028ad98(param_1 + 0x11);
    func_0x000104c04a8c(param_1 + 0xf);
    func_0x000104c04a68(param_1 + 0xd);
    func_0x000104c04a44(param_1 + 0xb);
    func_0x000104c04a20(param_1 + 9);
    FUN_104c049d8(param_1 + 7);
    func_0x000104c04990(param_1 + 6);
    func_0x000104c04968(param_1 + 5);
    func_0x000104c04918(param_1 + 4);
    unaff_x19 = unaff_x21;
    func_0x000104c048f4();
    func_0x000104c05684(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    if (iVar6 == 0) {
      func_0x000104c055b8();
    }
    else {
      FUN_104c03ee4((undefined1 *)((long)register0x00000008 + -0x68));
      FUN_104c05208((undefined1 *)((long)register0x00000008 + -0x80));
    }
    unaff_x30 = FUN_104c02408;
    param_1 = unaff_x19;
    FUN_104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  }
  return param_1;
}



/* Entry: 104c02408; end: 104c02413;  */

undefined8 * FUN_104c02408(undefined8 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 *unaff_x21;
  long lVar8;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar3 = param_1;
    func_0x000104c05768();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x000104c058a4();
    *(undefined1 *)(puVar3 + 8) = 0;
    unaff_x20 = puVar3 + 0x1c;
    *(undefined8 **)((long)register0x00000008 + -0x68) = unaff_x20;
    *(undefined1 *)((long)register0x00000008 + -0x60) = 1;
    __ZNSt3__15mutex4lockEv(unaff_x20);
    uVar7 = param_1[0x1a];
    puVar3 = (undefined8 *)0x78;
    __Znwm();
    *puVar3 = 0x32aaaba7;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0x3cb0b1bb;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
    *(short *)(puVar3 + 0xe) = (short)uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    FUN_104c04b14(param_1 + 0x24);
    func_0x000104c04af4((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001000df5a0((undefined1 *)((long)register0x00000008 + -0x68));
    lVar4 = param_1[0x24];
    FUN_104c02528(lVar4,5);
    uVar2 = *(char *)((long)param_1 + 0x1d9) == '\x01';
    if (((bool)uVar2) &&
       (bVar1 = *(byte *)(param_1 + 0x3b), *(undefined1 *)(param_1 + 0x3b) = 1, (bVar1 & 1) == 0)) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108b83ef8((undefined1 *)((long)register0x00000008 + -0x80),1);
      lVar8 = param_1[2];
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        do {
          func_0x000104c055a8();
        } while (extraout_w10 != 0);
      }
      *(undefined1 **)((long)register0x00000008 + -0x68) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined1 **)((long)register0x00000008 + -0xa0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      puVar3 = (undefined8 *)0x30;
      func_0x00010bd3faa4();
      *(undefined8 **)((long)register0x00000008 + -0x60) = puVar3;
      *puVar3 = 0;
      puVar3[1] = FUN_104c03de4;
      *(undefined4 *)(puVar3 + 2) = 0;
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x90);
      puVar3[4] = *(undefined8 *)((long)register0x00000008 + -0x88);
      puVar3[3] = uVar7;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x58) = puVar3;
      func_0x00010bd4058c(*(undefined8 *)(lVar8 + 0x138),puVar3,0);
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      FUN_104c03dc0((undefined1 *)((long)register0x00000008 + -0x68));
      FUN_104c05208((undefined1 *)((long)register0x00000008 + -0x90));
      puVar5 = *(undefined8 **)((long)register0x00000008 + -0x80);
      FUN_104c02528(puVar5,2);
      func_0x0001089a3c0c();
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined ***)((long)register0x00000008 + -0x68) = &PTR_FUN_1107eac58;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x48) = 0x75;
      puVar3 = puVar5;
      __ZNSt3__16chrono12steady_clock3nowEv();
      (*(code *)**(undefined8 **)*puVar5)
                ((undefined8 *)*puVar5,(undefined1 *)((long)register0x00000008 + -0x68),
                 (long)puVar3 - lVar4);
      FUN_104c03ee4((undefined1 *)((long)register0x00000008 + -0x68));
      FUN_104c05208((undefined1 *)((long)register0x00000008 + -0x80));
    }
    unaff_x21 = param_1 + 2;
    uVar7 = *unaff_x21;
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x68);
    *(code **)((long)register0x00000008 + -0x68) = FUN_104c05188;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_FUN_1107eaae0;
    *(undefined8 **)((long)register0x00000008 + -0x58) = param_1;
    iVar6 = (int)(undefined1 *)((long)register0x00000008 + -0x68);
    func_0x000108b844f8(uVar7);
    func_0x000104c056e4();
    func_0x000104c03d34(param_1 + 0x36);
    func_0x000104c03d34(param_1 + 0x2b);
    func_0x000104c04af4(param_1 + 0x24);
    __ZNSt3__15mutexD1Ev(unaff_x20);
    func_0x000104c04ab0(param_1 + 0x17);
    func_0x00010028ad98(param_1 + 0x11);
    func_0x000104c04a8c(param_1 + 0xf);
    func_0x000104c04a68(param_1 + 0xd);
    func_0x000104c04a44(param_1 + 0xb);
    func_0x000104c04a20(param_1 + 9);
    FUN_104c049d8(param_1 + 7);
    func_0x000104c04990(param_1 + 6);
    func_0x000104c04968(param_1 + 5);
    func_0x000104c04918(param_1 + 4);
    unaff_x19 = unaff_x21;
    func_0x000104c048f4();
    func_0x000104c05684(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    if (iVar6 == 0) {
      func_0x000104c055b8();
    }
    else {
      FUN_104c03ee4((undefined1 *)((long)register0x00000008 + -0x68));
      FUN_104c05208((undefined1 *)((long)register0x00000008 + -0x80));
    }
    unaff_x30 = FUN_104c02408;
    param_1 = unaff_x19;
    FUN_104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  }
  return param_1;
}



/* Entry: 104c02414; end: 104c02427;  */

void FUN_104c02414(void)

{
  FUN_104c020ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c02428; end: 104c0242f;  */

void FUN_104c02428(long param_1)

{
  FUN_104c020ec(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c02430; end: 104c02527;  */

void FUN_104c02430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 unaff_x20;
  long lStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x000100152bac();
  func_0x000104c05768();
  uStack_38 = extraout_x8;
  func_0x000108b847cc(*(long *)(param_1 + 0x10));
  func_0x000104c03d98(auStack_68);
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_1107eaa10;
  puVar1[2] = 0;
  puVar1[3] = unaff_x20;
  func_0x000104c03d98(puVar1 + 4,auStack_68);
  puStack_78 = puVar1;
  func_0x000104c056d4(lVar3,lVar3 + 0x70,&puStack_78,param_4,lVar3 + 0x10);
  func_0x000104c05878();
  if (lVar3 != 0) {
    func_0x000104c0559c();
  }
  func_0x000104c056c0();
  func_0x000104c05684(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar3;
  func_0x000104c05878();
  if (lVar2 != 0) {
    func_0x000104c0559c();
  }
  func_0x000104c056c0();
  func_0x000104c055b8();
  pcStack_88 = FUN_104c02528;
  puStack_a0 = puVar1;
  lStack_98 = lVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001006202e8();
  __ZNSt3__16chrono12system_clock3nowEv();
  lStack_a8 = lVar2 + (long)puVar1 * 1000000;
  uStack_b0 = 1;
  lStack_b8 = lVar3;
  __ZNSt3__15mutex4lockEv(lVar3);
  do {
    if (*(short *)(lVar3 + 0x70) == 0) break;
    lVar2 = lVar3 + 0x40;
    FUN_104c050cc(lVar2,&lStack_b8,&lStack_a8);
  } while ((int)lVar2 != 1);
  func_0x0001000df5a0(&lStack_b8);
  return;
}



/* Entry: 104c02528; end: 104c025a3;  */

void FUN_104c02528(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lStack_28;
  
  func_0x0001006202e8();
  __ZNSt3__16chrono12system_clock3nowEv();
  lStack_28 = param_1 + unaff_x20 * 1000000;
  __ZNSt3__15mutex4lockEv();
  do {
    if (*(short *)(unaff_x19 + 0x70) == 0) break;
    lVar1 = unaff_x19 + 0x40;
    FUN_104c050cc(lVar1,&stack0xffffffffffffffc8,&lStack_28);
  } while ((int)lVar1 != 1);
  func_0x0001000df5a0(&stack0xffffffffffffffc8);
  return;
}



/* Entry: 104c025a4; end: 104c025a7;  */

undefined8 * FUN_104c025a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107eacc0;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 104c025a8; end: 104c026ff;  */

void FUN_104c025a8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 *puStack_38;
  
  uVar2 = param_2;
  func_0x000100152bb8(param_2,"app.version");
  if ((int)uVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    lStack_70 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_68,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50,param_3);
    puVar3 = (undefined8 *)0x50;
    __Znwm();
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR_SUB_1107eab08;
    puVar3[2] = 0;
    puVar3[3] = lStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 4,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 7,auStack_50);
    puStack_38 = puVar3;
    func_0x000104c056d4(lVar4,lVar4 + 0x70,&puStack_38,param_4,lVar4 + 0x10);
    puVar3 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000104c0559c();
    }
    FUN_104c02700(&lStack_70);
    return;
  }
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  func_0x000108b81334(puVar3,uVar1);
  uRam00000001138286d8 = (long)puVar3 << 0x10 | 3;
  return;
}



/* Entry: 104c02700; end: 104c0272b;  */

long FUN_104c02700(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 104c0272c; end: 104c02777;  */

long * FUN_104c0272c(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000104c02748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return plVar1;
  }
  return (long *)0xffffffff;
}



/* Entry: 104c02778; end: 104c027b3;  */

void FUN_104c02778(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000100152bac();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  FUN_104c03f9c(param_1 + 6,param_2 + 6);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  return;
}



/* Entry: 104c027b4; end: 104c0288b;  */

void FUN_104c027b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001006202e8();
  uVar3 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000104c055a8();
    } while (extraout_w10 != 0);
  }
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x50);
  lStack_40 = *(long *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  FUN_104c04a20(&lStack_40);
  if ((*(byte *)(unaff_x19 + 0x40) & 1) == 0) {
    (**(code **)(*(long *)*unaff_x20 + 0x20))(&lStack_50);
    if (lStack_50 != 0) {
      uVar1 = 0xe0;
      __Znwm();
      lStack_40 = lStack_50;
      uStack_38 = uStack_48;
      lStack_50 = 0;
      uStack_48 = 0;
      func_0x000108985e64();
      func_0x000104c052b8(&lStack_40);
      lVar2 = *(long *)(unaff_x19 + 0x28);
      *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
      if (lVar2 != 0) {
        func_0x000104c0559c();
      }
    }
    func_0x000104c052b8(&lStack_50);
  }
  return;
}



/* Entry: 104c0288c; end: 104c0298b;  */

void FUN_104c0288c(long param_1)

{
  long unaff_x20;
  
  func_0x000100152bac();
  func_0x000104c028cc(param_1 + 0x58);
  if (*(long **)(unaff_x20 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c028c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(unaff_x20 + 0x78) + 8))();
    return;
  }
  return;
}



/* Entry: 104c0298c; end: 104c03243;  */

void FUN_104c0298c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *extraout_x8;
  ulong uVar13;
  undefined8 *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined1 auStack_1f8 [28];
  undefined8 uStack_1dc;
  undefined2 uStack_1d4;
  undefined8 auStack_1d0 [3];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined4 uStack_130;
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  *(int *)(param_2 + 0xb0) = *(int *)(param_2 + 0xb0) + 1;
  iVar7 = 0xf245378;
  func_0x00010011bfd4("adl_enable_watchdog",0x13,0);
  if (iVar7 != 0) {
    lVar17 = *(long *)(param_2 + 0x10);
    puVar8 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR_FUN_1107eab98;
    puVar8[2] = 0;
    puVar8[3] = param_2;
    puStack_200 = puVar8;
    func_0x000104c056d4(lVar17,lVar17 + 0x70,&puStack_200);
    puVar8 = puStack_200;
    puStack_200 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000104c0559c();
    }
  }
  func_0x000108973a58(&puStack_200);
  puStack_200 = (undefined8 *)*param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_1f8,param_3 + 1);
  uStack_130 = *(undefined4 *)(param_3 + 4);
  uStack_1d4 = *(undefined2 *)(param_3 + 0x1b);
  uStack_1dc = *(undefined8 *)((long)param_3 + 0xdc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (auStack_110,param_3 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (auStack_1d0,param_3 + 0x25);
  uStack_1b0 = param_3[0x29];
  uStack_1b8 = param_3[0x28];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (auStack_1a8,param_3 + 0x2a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (auStack_190,param_3 + 0x2d);
  if (auStack_1d0 != param_3 + 0x25) {
    lVar17 = param_3[0x30];
    lVar14 = param_3[0x31];
    uVar11 = lVar14 - lVar17;
    lVar18 = (long)uVar11 >> 5;
    if ((ulong)(lStack_168 - lStack_178) < uVar11) {
      if (lStack_178 != 0) {
        lStack_170 = lStack_178;
        __ZdlPv(lStack_178);
        lStack_178 = 0;
        lStack_170 = 0;
        lStack_168 = 0;
      }
      plVar9 = &lStack_178;
      FUN_104c047a4(plVar9,lVar18);
      FUN_104c0476c(&lStack_178,plVar9);
      lVar19 = lVar17;
    }
    else {
      if (uVar11 <= (ulong)(lStack_170 - lStack_178)) {
        func_0x000104c04820(lVar17,lVar14);
        lStack_170 = lVar17;
        goto LAB_104c02b5c;
      }
      lVar19 = lVar17 + (lStack_170 - lStack_178);
      func_0x000104c04820(lVar17,lVar19);
      lVar18 = lVar18 - (lStack_170 - lStack_178 >> 5);
    }
    FUN_104c04738(&lStack_178,lVar19,lVar14,lVar18);
  }
LAB_104c02b5c:
  uStack_150 = param_3[0x35];
  uStack_158 = param_3[0x34];
  uStack_160 = param_3[0x33];
  func_0x0001006202b4(auStack_148,param_3 + 0x36);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&lStack_218,param_3 + 0x15);
  lVar17 = *(long *)(param_2 + 0x10);
  plVar9 = (long *)0x38;
  __Znwm();
  *(undefined4 *)(plVar9 + 1) = 0;
  *plVar9 = (long)&PTR_FUN_1107eabd8;
  plVar9[2] = 0;
  plVar9[3] = param_2;
  plVar9[5] = lStack_210;
  plVar9[4] = lStack_218;
  plVar9[6] = lStack_208;
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  plStack_80 = plVar9;
  func_0x000104c056d4(lVar17,lVar17 + 0x70,&plStack_80);
  plVar9 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    func_0x000104c0559c();
  }
  lVar17 = lStack_178;
  do {
    lVar14 = lVar17;
    if (lVar14 == lStack_170) break;
    lVar17 = lVar14 + 0x20;
  } while (*(char *)(lVar14 + 0x1e) != '\x01');
  *(byte *)(param_2 + 0x1d9) = *(byte *)(param_2 + 0x1d9) | lVar14 != lStack_170;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar23 = **(undefined8 **)(param_2 + 0x20);
  uVar22 = *(undefined8 *)(param_2 + 0x78);
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  lVar17 = param_4[1];
  plVar24 = (long *)param_4[1];
  plVar12 = (long *)*param_4;
  puVar8 = (undefined8 *)0x420;
  __Znwm();
  plVar9 = puVar8 + 1;
  *plVar9 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_1107eab48;
  plStack_80 = plVar12;
  plStack_78 = plVar24;
  if (lVar17 != 0) {
    do {
      func_0x000104c055a8();
    } while (extraout_w10 != 0);
  }
  puStack_88 = (undefined8 *)param_3[0x1e];
  puStack_90 = (undefined8 *)param_3[0x1d];
  if (param_3[0x1e] != 0) {
    do {
      func_0x000104c055a8();
    } while (extraout_w10_00 != 0);
  }
  puVar16 = puVar8 + 3;
  puStack_98 = (undefined8 *)param_3[0x20];
  puStack_a0 = (undefined8 *)param_3[0x1f];
  if (param_3[0x20] != 0) {
    plVar1 = (long *)(param_3[0x20] + 8);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_b0 = param_3[0x23];
  lStack_a8 = param_3[0x24];
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x0001089742cc(puVar16,uVar22,(long *)(param_2 + 0x10),uVar20,&puStack_200,param_3 + 5,
                      &plStack_80,&puStack_90,&puStack_a0,param_3 + 0x21,&uStack_b0,uVar23,uVar2,
                      param_3 + 0x11,param_2 + 0x48,param_2 + 8,param_2 + 0x128,param_2 + 0x180,
                      plVar12,plVar24);
  FUN_104c05304(&uStack_b0);
  func_0x000104c05328(&puStack_a0);
  func_0x000104c05328(&puStack_90);
  func_0x000104c0534c(&plStack_80);
  plVar12 = (long *)puVar8[6];
  if ((plVar12 == (long *)0x0) || (plVar12[1] == -1)) {
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = puVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_80 = (long *)puVar8[5];
    puVar8[5] = puVar16;
    puVar8[6] = puVar8;
    puStack_a0 = puVar16;
    puStack_98 = puVar8;
    puStack_90 = puVar16;
    puStack_88 = puVar8;
    plStack_78 = plVar12;
    FUN_104c0537c(&plStack_80);
    func_0x000104c053a0(&puStack_90);
    puVar8 = puStack_98;
    puVar16 = puStack_a0;
  }
  *param_1 = puVar16;
  param_1[1] = puVar8;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  func_0x000104c053a0(&puStack_a0);
  puStack_90 = (undefined8 *)(param_2 + 0xe0);
  puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  puVar10 = puVar16;
  FUN_104c053e8();
  puVar21 = *(undefined8 **)(param_2 + 0xc0);
  if (puVar21 != (undefined8 *)0x0) {
    uVar11 = (long)puVar21 - 1;
    if (((ulong)puVar21 & uVar11) == 0) {
      puVar8 = (undefined8 *)(uVar11 & (ulong)puVar10);
    }
    else {
      puVar8 = puVar10;
      if (puVar21 <= puVar10) {
        uVar13 = 0;
        if (puVar21 != (undefined8 *)0x0) {
          uVar13 = (ulong)puVar10 / (ulong)puVar21;
        }
        puVar8 = (undefined8 *)((long)puVar10 - uVar13 * (long)puVar21);
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0xb8) + (long)puVar8 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_104c02e98;
          puVar15 = (undefined8 *)plVar9[1];
          if (puVar15 != puVar10) break;
          if ((undefined8 *)plVar9[2] == puVar16) goto LAB_104c03140;
        }
        if (((ulong)puVar21 & uVar11) == 0) {
          puVar15 = (undefined8 *)((ulong)puVar15 & uVar11);
        }
        else if (puVar21 <= puVar15) {
          uVar13 = 0;
          if (puVar21 != (undefined8 *)0x0) {
            uVar13 = (ulong)puVar15 / (ulong)puVar21;
          }
          puVar15 = (undefined8 *)((long)puVar15 - uVar13 * (long)puVar21);
        }
      } while (puVar15 == puVar8);
    }
  }
LAB_104c02e98:
  plVar12 = (long *)0x18;
  __Znwm();
  plVar9 = (long *)(param_2 + 200);
  uStack_70 = 1;
  *plVar12 = 0;
  plVar12[1] = (long)puVar10;
  plVar12[2] = (long)puVar16;
  plStack_80 = plVar12;
  plStack_78 = plVar9;
  if ((puVar21 != (undefined8 *)0x0) &&
     ((float)(*(long *)(param_2 + 0xd0) + 1) <= *(float *)(param_2 + 0xd8) * (float)puVar21))
  goto LAB_104c030bc;
  bVar5 = (undefined8 *)0x2 < puVar21;
  bVar6 = puVar21 == (undefined8 *)0x3;
  func_0x000100604200((long)puVar21 << 1);
  puVar8 = extraout_x8;
  if (!bVar5 || bVar6) {
    puVar8 = extraout_x9;
  }
  if ((long)puVar8 - 1U == 0) {
    puVar8 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar8 & (long)puVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar21 = *(undefined8 **)(param_2 + 0xc0);
  }
  if (puVar21 < puVar8) {
LAB_104c02f30:
    if ((ulong)puVar8 >> 0x3d != 0) {
      FUN_104bd35f4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104c0318c);
      (*pcVar4)();
    }
    lVar17 = (long)puVar8 << 3;
    __Znwm(lVar17);
    FUN_104c0540c(param_2 + 0xb8,lVar17);
    *(undefined8 **)(param_2 + 0xc0) = puVar8;
    for (puVar21 = (undefined8 *)0x0; puVar8 != puVar21; puVar21 = (undefined8 *)((long)puVar21 + 1)
        ) {
      *(undefined8 *)(*(long *)(param_2 + 0xb8) + (long)puVar21 * 8) = 0;
    }
    plVar12 = (long *)*plVar9;
    if (plVar12 != (long *)0x0) {
      puVar21 = (undefined8 *)plVar12[1];
      uVar13 = (long)puVar8 - 1;
      uVar11 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        uVar11 = (ulong)puVar21 / (ulong)puVar8;
      }
      puVar15 = puVar21;
      if (puVar8 <= puVar21) {
        puVar15 = (undefined8 *)((long)puVar21 - uVar11 * (long)puVar8);
      }
      if (((ulong)puVar8 & uVar13) == 0) {
        puVar15 = (undefined8 *)((ulong)puVar21 & uVar13);
      }
      *(long **)(*(long *)(param_2 + 0xb8) + (long)puVar15 * 8) = plVar9;
      while (plVar24 = plVar12, plVar12 = (long *)*plVar24, plVar12 != (long *)0x0) {
        puVar21 = (undefined8 *)plVar12[1];
        if (((ulong)puVar8 & uVar13) == 0) {
          puVar21 = (undefined8 *)((ulong)puVar21 & uVar13);
        }
        else if (puVar8 <= puVar21) {
          uVar11 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            uVar11 = (ulong)puVar21 / (ulong)puVar8;
          }
          puVar21 = (undefined8 *)((long)puVar21 - uVar11 * (long)puVar8);
        }
        if (puVar21 != puVar15) {
          if (*(long *)(*(long *)(param_2 + 0xb8) + (long)puVar21 * 8) == 0) {
            *(long **)(*(long *)(param_2 + 0xb8) + (long)puVar21 * 8) = plVar24;
            puVar15 = puVar21;
          }
          else {
            *plVar24 = *plVar12;
            *plVar12 = **(undefined8 **)(*(long *)(param_2 + 0xb8) + (long)puVar21 * 8);
            **(long **)(*(long *)(param_2 + 0xb8) + (long)puVar21 * 8) = (long)plVar12;
            plVar12 = plVar24;
          }
        }
      }
    }
  }
  else if (puVar8 < puVar21) {
    puVar15 = (undefined8 *)(long)((float)*(ulong *)(param_2 + 0xd0) / *(float *)(param_2 + 0xd8));
    if ((puVar21 < (undefined8 *)0x3) || (((ulong)puVar21 & (long)puVar21 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined8 *)0x1 < puVar15) {
      puVar15 = (undefined8 *)(1L << (-LZCOUNT((long)puVar15 + -1) & 0x3fU));
    }
    if (puVar8 <= puVar15) {
      puVar8 = puVar15;
    }
    if (puVar8 < puVar21) {
      if (puVar8 != (undefined8 *)0x0) goto LAB_104c02f30;
      FUN_104c0540c(param_2 + 0xb8,0);
      *(undefined8 *)(param_2 + 0xc0) = 0;
    }
  }
  puVar21 = *(undefined8 **)(param_2 + 0xc0);
  if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
    puVar8 = (undefined8 *)((long)puVar21 - 1U & (ulong)puVar10);
  }
  else {
    puVar8 = puVar10;
    if (puVar21 <= puVar10) {
      uVar11 = 0;
      if (puVar21 != (undefined8 *)0x0) {
        uVar11 = (ulong)puVar10 / (ulong)puVar21;
      }
      puVar8 = (undefined8 *)((long)puVar10 - uVar11 * (long)puVar21);
    }
  }
LAB_104c030bc:
  plVar12 = *(long **)(*(long *)(param_2 + 0xb8) + (long)puVar8 * 8);
  if (plVar12 == (long *)0x0) {
    *plStack_80 = *plVar9;
    *plVar9 = (long)plStack_80;
    *(long **)(*(long *)(param_2 + 0xb8) + (long)puVar8 * 8) = plVar9;
    if (*plStack_80 != 0) {
      puVar8 = *(undefined8 **)(*plStack_80 + 8);
      if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
        puVar8 = (undefined8 *)((ulong)puVar8 & (long)puVar21 - 1U);
      }
      else if (puVar21 <= puVar8) {
        uVar11 = 0;
        if (puVar21 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar8 / (ulong)puVar21;
        }
        puVar8 = (undefined8 *)((long)puVar8 - uVar11 * (long)puVar21);
      }
      *(long **)(*(long *)(param_2 + 0xb8) + (long)puVar8 * 8) = plStack_80;
    }
  }
  else {
    *plStack_80 = *plVar12;
    *plVar12 = (long)plStack_80;
  }
  plStack_80 = (long *)0x0;
  *(long *)(param_2 + 0xd0) = *(long *)(param_2 + 0xd0) + 1;
  FUN_104c05424(&plStack_80);
LAB_104c03140:
  func_0x0001000df5a0(&puStack_90);
  (**(code **)*puVar16)(puVar16);
  func_0x000104c057e4();
  func_0x000108973b3c(&puStack_200);
  return;
}



/* Entry: 104c03244; end: 104c032c7;  */

void FUN_104c03244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_28;
  
  iVar1 = *(int *)(param_1 + 0xb0) + -1;
  *(int *)(param_1 + 0xb0) = iVar1;
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    puVar2 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_1107eac18;
    puVar2[2] = 0;
    puVar2[3] = param_1;
    puStack_28 = puVar2;
    func_0x000104c056d4(lVar3,lVar3 + 0x70,&puStack_28,param_4,lVar3 + 0x10);
    func_0x000104c05878();
    if (lVar3 != 0) {
      func_0x000104c0559c();
    }
  }
  return;
}



/* Entry: 104c032c8; end: 104c034e3;  */

void FUN_104c032c8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  long lStack_58;
  undefined1 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  
  func_0x0001006202e8();
  lStack_58 = param_1 + 0xe0;
  uStack_50 = 1;
  __ZNSt3__15mutex4lockEv();
  uVar11 = *(ulong *)(unaff_x19 + 0xc0);
  if ((uVar11 != 0) && (*(long *)(unaff_x19 + 0xd0) != 0)) {
    uVar3 = unaff_x20;
    FUN_104c053e8();
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      uVar8 = uVar3 & uVar6;
    }
    else {
      uVar8 = uVar3;
      if (uVar11 <= uVar3) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar3 / uVar11;
        }
        uVar8 = uVar3 - uVar8 * uVar11;
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0xb8);
    plVar4 = *(long **)(lVar5 + uVar8 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_104c034b0;
          uVar9 = plVar4[1];
          if (uVar9 != uVar3) break;
          if (plVar4[2] == unaff_x20) {
            lVar7 = *plVar4;
            uVar11 = *(ulong *)(unaff_x19 + 0xc0);
            uVar6 = uVar11 - 1;
            if ((uVar11 & uVar6) == 0) {
              uVar3 = uVar6 & uVar3;
            }
            else if (uVar11 <= uVar3) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar3 / uVar11;
              }
              uVar3 = uVar3 - uVar8 * uVar11;
            }
            plVar2 = *(long **)(lVar5 + uVar3 * 8);
            do {
              plVar10 = plVar2;
              plVar2 = (long *)*plVar10;
            } while ((long *)*plVar10 != plVar4);
            plStack_40 = (long *)(unaff_x19 + 200);
            if (plVar10 == plStack_40) {
LAB_104c03408:
              if (lVar7 == 0) {
LAB_104c0343c:
                *(undefined8 *)(lVar5 + uVar3 * 8) = 0;
                lVar7 = *plVar4;
                goto LAB_104c03444;
              }
              uVar8 = *(ulong *)(lVar7 + 8);
              if ((uVar11 & uVar6) == 0) {
                uVar9 = uVar8 & uVar6;
              }
              else {
                uVar9 = uVar8;
                if (uVar11 <= uVar8) {
                  uVar9 = 0;
                  if (uVar11 != 0) {
                    uVar9 = uVar8 / uVar11;
                  }
                  uVar9 = uVar8 - uVar9 * uVar11;
                }
              }
              if (uVar9 != uVar3) goto LAB_104c0343c;
LAB_104c0344c:
              if ((uVar11 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar11 <= uVar8) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar6 * uVar11;
              }
              if (uVar8 != uVar3) {
                *(long **)(*(long *)(unaff_x19 + 0xb8) + uVar8 * 8) = plVar10;
                lVar7 = *plVar4;
              }
            }
            else {
              uVar8 = plVar10[1];
              if ((uVar11 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar11 <= uVar8) {
                uVar9 = 0;
                if (uVar11 != 0) {
                  uVar9 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar9 * uVar11;
              }
              if (uVar8 != uVar3) goto LAB_104c03408;
LAB_104c03444:
              if (lVar7 != 0) {
                uVar8 = *(ulong *)(lVar7 + 8);
                goto LAB_104c0344c;
              }
            }
            *plVar10 = lVar7;
            *plVar4 = 0;
            *(long *)(unaff_x19 + 0xd0) = *(long *)(unaff_x19 + 0xd0) + -1;
            uStack_38 = 1;
            uStack_37 = 0;
            uStack_33 = 0;
            plStack_48 = plVar4;
            FUN_104c05424(&plStack_48);
            goto LAB_104c034b0;
          }
        }
        if ((uVar11 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar11 <= uVar9) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar9 / uVar11;
          }
          uVar9 = uVar9 - uVar1 * uVar11;
        }
      } while (uVar9 == uVar8);
    }
  }
LAB_104c034b0:
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    func_0x000108b83f68();
  }
  func_0x0001000df5a0(&lStack_58);
  return;
}



/* Entry: 104c034e4; end: 104c034eb;  */

void FUN_104c034e4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  long lStack_58;
  undefined1 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  
  param_1 = param_1 + -8;
  func_0x0001006202e8();
  lStack_58 = param_1 + 0xe0;
  uStack_50 = 1;
  __ZNSt3__15mutex4lockEv();
  uVar11 = *(ulong *)(unaff_x19 + 0xc0);
  if ((uVar11 != 0) && (*(long *)(unaff_x19 + 0xd0) != 0)) {
    uVar3 = unaff_x20;
    FUN_104c053e8();
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      uVar8 = uVar3 & uVar6;
    }
    else {
      uVar8 = uVar3;
      if (uVar11 <= uVar3) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar3 / uVar11;
        }
        uVar8 = uVar3 - uVar8 * uVar11;
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0xb8);
    plVar4 = *(long **)(lVar5 + uVar8 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_104c034b0;
          uVar9 = plVar4[1];
          if (uVar9 != uVar3) break;
          if (plVar4[2] == unaff_x20) {
            lVar7 = *plVar4;
            uVar11 = *(ulong *)(unaff_x19 + 0xc0);
            uVar6 = uVar11 - 1;
            if ((uVar11 & uVar6) == 0) {
              uVar3 = uVar6 & uVar3;
            }
            else if (uVar11 <= uVar3) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar3 / uVar11;
              }
              uVar3 = uVar3 - uVar8 * uVar11;
            }
            plVar2 = *(long **)(lVar5 + uVar3 * 8);
            do {
              plVar10 = plVar2;
              plVar2 = (long *)*plVar10;
            } while ((long *)*plVar10 != plVar4);
            plStack_40 = (long *)(unaff_x19 + 200);
            if (plVar10 == plStack_40) {
LAB_104c03408:
              if (lVar7 == 0) {
LAB_104c0343c:
                *(undefined8 *)(lVar5 + uVar3 * 8) = 0;
                lVar7 = *plVar4;
                goto LAB_104c03444;
              }
              uVar8 = *(ulong *)(lVar7 + 8);
              if ((uVar11 & uVar6) == 0) {
                uVar9 = uVar8 & uVar6;
              }
              else {
                uVar9 = uVar8;
                if (uVar11 <= uVar8) {
                  uVar9 = 0;
                  if (uVar11 != 0) {
                    uVar9 = uVar8 / uVar11;
                  }
                  uVar9 = uVar8 - uVar9 * uVar11;
                }
              }
              if (uVar9 != uVar3) goto LAB_104c0343c;
LAB_104c0344c:
              if ((uVar11 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar11 <= uVar8) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar6 * uVar11;
              }
              if (uVar8 != uVar3) {
                *(long **)(*(long *)(unaff_x19 + 0xb8) + uVar8 * 8) = plVar10;
                lVar7 = *plVar4;
              }
            }
            else {
              uVar8 = plVar10[1];
              if ((uVar11 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar11 <= uVar8) {
                uVar9 = 0;
                if (uVar11 != 0) {
                  uVar9 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar9 * uVar11;
              }
              if (uVar8 != uVar3) goto LAB_104c03408;
LAB_104c03444:
              if (lVar7 != 0) {
                uVar8 = *(ulong *)(lVar7 + 8);
                goto LAB_104c0344c;
              }
            }
            *plVar10 = lVar7;
            *plVar4 = 0;
            *(long *)(unaff_x19 + 0xd0) = *(long *)(unaff_x19 + 0xd0) + -1;
            uStack_38 = 1;
            uStack_37 = 0;
            uStack_33 = 0;
            plStack_48 = plVar4;
            FUN_104c05424(&plStack_48);
            goto LAB_104c034b0;
          }
        }
        if ((uVar11 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar11 <= uVar9) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar9 / uVar11;
          }
          uVar9 = uVar9 - uVar1 * uVar11;
        }
      } while (uVar9 == uVar8);
    }
  }
LAB_104c034b0:
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    func_0x000108b83f68();
  }
  func_0x0001000df5a0(&lStack_58);
  return;
}



/* Entry: 104c034ec; end: 104c03547;  */

void FUN_104c034ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  func_0x0001006202e8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  for (param_3 = param_3 << 5; param_3 != 0; param_3 = param_3 + -0x20) {
    FUN_104c03548();
  }
  return;
}



/* Entry: 104c03548; end: 104c0354f;  */

undefined1  [16] FUN_104c03548(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000104c035ec(param_1,param_2,&uStack_48,auStack_50,param_3);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    plVar3 = plVar2;
    func_0x000100604178();
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)((long)plVar3 + 0x24) = param_3[1];
    *(undefined8 *)((long)plVar3 + 0x1c) = uVar4;
    *(undefined8 *)((long)plVar3 + 0x34) = uVar6;
    *(undefined8 *)((long)plVar3 + 0x2c) = uVar5;
    FUN_104c036e4(param_1,uStack_48,plVar2,plVar3);
    func_0x000104c05808();
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = plVar3;
  auVar7._9_7_ = 0;
  return auVar7;
}



/* Entry: 104c03550; end: 104c036e3;  */

undefined1  [16]
FUN_104c03550(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000104c035ec(param_1,param_2,&uStack_48,auStack_50,param_3);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    plVar3 = plVar2;
    func_0x000100604178();
    uVar4 = *param_4;
    uVar6 = param_4[3];
    uVar5 = param_4[2];
    *(undefined8 *)((long)plVar3 + 0x24) = param_4[1];
    *(undefined8 *)((long)plVar3 + 0x1c) = uVar4;
    *(undefined8 *)((long)plVar3 + 0x34) = uVar6;
    *(undefined8 *)((long)plVar3 + 0x2c) = uVar5;
    FUN_104c036e4(param_1,uStack_48,plVar2,plVar3);
    func_0x000104c05808();
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = plVar3;
  auVar7._9_7_ = 0;
  return auVar7;
}



/* Entry: 104c036e4; end: 104c03737;  */

void FUN_104c036e4(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000104c0572c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000104c057a8();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 104c03738; end: 104c03793;  */

long * FUN_104c03738(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar4 = (long *)*plVar2;
    do {
      while (iVar1 = (int)plVar4[4] * *(int *)((long)plVar4 + 0x1c), plVar3 = plVar4,
            iVar1 <= param_3[1] * *param_3) {
        if (param_3[1] * *param_3 <= iVar1) goto LAB_104c0378c;
        plVar2 = plVar4 + 1;
        plVar4 = (long *)*plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_104c0378c;
      }
      plVar5 = (long *)*plVar4;
      plVar2 = plVar4;
      plVar4 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
LAB_104c0378c:
  *param_2 = (long)plVar3;
  return plVar2;
}



/* Entry: 104c03794; end: 104c037b7;  */

undefined8 FUN_104c03794(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_104c037b8(&uStack_18);
  return uStack_18;
}



/* Entry: 104c037b8; end: 104c0383b;  */

void FUN_104c037b8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000100152bac();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      func_0x000104c03718();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x000104c037fc();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 104c0383c; end: 104c03853;  */

void FUN_104c0383c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104c03854; end: 104c038af;  */

long FUN_104c03854(long param_1)

{
  func_0x000104c03878(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 104c038b0; end: 104c038df;  */

void FUN_104c038b0(void)

{
  func_0x000104c05784();
  FUN_104c038e0();
  return;
}



/* Entry: 104c038e0; end: 104c03923;  */

void FUN_104c038e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000104c05698();
  while (unaff_x21 != param_3) {
    unaff_x21 = unaff_x20;
    FUN_104c03548();
    func_0x000104c056b0();
  }
  return;
}



/* Entry: 104c03924; end: 104c03957;  */

void FUN_104c03924(void)

{
  func_0x000104c05784();
  FUN_104c03958();
  return;
}



/* Entry: 104c03958; end: 104c0399b;  */

void FUN_104c03958(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_104c0399c(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 104c0399c; end: 104c039a3;  */

undefined1  [16] FUN_104c0399c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_104c03a28(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010060416c(alStack_58);
    FUN_104c03b14();
    FUN_104c03b68(param_1,uStack_38,plVar2,alStack_58[0]);
    func_0x000104c057fc();
    lVar3 = alStack_58[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 104c039a4; end: 104c03a27;  */

undefined1  [16] FUN_104c039a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_104c03a28(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010060416c(alStack_58);
    FUN_104c03b14();
    FUN_104c03b68(param_1,uStack_38,plVar2,alStack_58[0]);
    func_0x000104c057fc();
    lVar3 = alStack_58[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 104c03a28; end: 104c03b13;  */

long * FUN_104c03a28(long *param_1,long *param_2,int *param_3,long *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x000104c0564c();
  plVar4 = param_1 + 1;
  bVar3 = param_2 == plVar4;
  if (!bVar3) {
    iVar1 = *param_5;
    iVar2 = (int)unaff_x19[4];
    bVar3 = iVar1 == iVar2;
    if (iVar2 <= iVar1) {
      if (iVar1 <= iVar2) {
        *unaff_x20 = (long)unaff_x19;
        *param_4 = (long)unaff_x19;
        return param_4;
      }
      param_2 = (long *)0x1;
      param_1 = unaff_x19;
      FUN_104c03c0c();
      if ((plVar4 == param_1) || (*param_5 < (int)param_1[4])) {
        if (unaff_x19[1] != 0) {
          *unaff_x20 = (long)param_1;
          return param_1;
        }
        *unaff_x20 = (long)unaff_x19;
        return unaff_x19 + 1;
      }
      goto LAB_104c03ad0;
    }
  }
  func_0x000104c0565c();
  if ((bVar3) || (func_0x000104c0571c(), (int)param_1[4] < *param_5)) {
    if (*unaff_x19 == 0) {
      *unaff_x20 = (long)unaff_x19;
    }
    else {
      func_0x000104c05884();
    }
    return unaff_x19;
  }
LAB_104c03ad0:
  func_0x000100620408();
  param_1 = param_1 + 1;
  plVar4 = param_1;
  if ((long *)*param_1 != (long *)0x0) {
    plVar5 = (long *)*param_1;
    do {
      while (plVar4 = plVar5, *param_3 < (int)plVar5[4]) {
        plVar6 = (long *)*plVar5;
        param_1 = plVar5;
        plVar5 = plVar6;
        if (plVar6 == (long *)0x0) goto LAB_104c03c04;
      }
      if (*param_3 <= (int)plVar5[4]) break;
      param_1 = plVar5 + 1;
      plVar5 = (long *)*param_1;
    } while ((long *)*param_1 != (long *)0x0);
  }
LAB_104c03c04:
  *param_2 = (long)plVar4;
  return param_1;
}



/* Entry: 104c03b14; end: 104c03b67;  */

void FUN_104c03b14(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + 8;
  func_0x000100604178();
  *param_1 = param_2;
  param_1[1] = lVar1;
  param_1[2] = 0;
  func_0x000104c03c94(param_2 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 104c03b68; end: 104c03bbb;  */

void FUN_104c03b68(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000104c0572c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000104c057a8();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 104c03bbc; end: 104c03c0b;  */

long * FUN_104c03bbc(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (int)plVar3[4] <= *param_3) {
        if (*param_3 <= (int)plVar3[4]) goto LAB_104c03c04;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_104c03c04;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_104c03c04:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 104c03c0c; end: 104c03c2f;  */

undefined8 FUN_104c03c0c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_104c03c30(&uStack_18);
  return uStack_18;
}



/* Entry: 104c03c30; end: 104c03cdb;  */

void FUN_104c03c30(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000100152bac();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      func_0x000104c03b9c();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x000104c03c74();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 104c03cdc; end: 104c03cf3;  */

void FUN_104c03cdc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_104c03854(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 104c03cf4; end: 104c03dbf;  */

void FUN_104c03cf4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_104c03854(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 104c03dc0; end: 104c03de3;  */

undefined8 FUN_104c03dc0(undefined8 param_1)

{
  FUN_104c03e64();
  return param_1;
}



/* Entry: 104c03de4; end: 104c03e63;  */

void FUN_104c03de4(long param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_38 = (undefined1 *)&uStack_50;
  uStack_48 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  lStack_30 = param_2;
  lStack_28 = param_2;
  FUN_104c03e64(&puStack_38);
  if (param_1 != 0) {
    func_0x000108b83f68(uStack_50);
    DataMemoryBarrier(2,3);
  }
  FUN_104c05208(&uStack_50);
  FUN_104c03dc0(&puStack_38);
  return;
}



/* Entry: 104c03e64; end: 104c03eaf;  */

void FUN_104c03e64(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_104c05208(*(long *)(param_1 + 0x10) + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(param_1 + 8),0x30);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 104c03eb0; end: 104c03ec3;  */

void FUN_104c03eb0(void)

{
  FUN_104c03ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c03ec4; end: 104c03ee3;  */

undefined4 FUN_104c03ec4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 104c03ee4; end: 104c03f13;  */

undefined8 * FUN_104c03ee4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107eacc0;
  func_0x0001000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 104c03f14; end: 104c03f27;  */

void FUN_104c03f14(void)

{
  long *plVar1;
  
  FUN_104c03f28("basic_string");
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104c03f74();
  ___cxa_throw(plVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception();
  func_0x000104c05614();
  __ZNSt11logic_errorC2EPKc();
  *plVar1 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 104c03f28; end: 104c03f73;  */

void FUN_104c03f28(void)

{
  long *plVar1;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104c03f74();
  ___cxa_throw(plVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception();
  func_0x000104c05614();
  __ZNSt11logic_errorC2EPKc();
  *plVar1 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 104c03f74; end: 104c03f77;  */

void FUN_104c03f74(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 104c03f78; end: 104c03f9b;  */

void FUN_104c03f78(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 104c03f9c; end: 104c03fcf;  */

undefined8 * FUN_104c03f9c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_104c03fd0(param_1,*param_2,param_2 + 1);
  }
  return param_1;
}



/* Entry: 104c03fd0; end: 104c0407b;  */

void FUN_104c03fd0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000104c05698();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_104c04150(auStack_48);
    while (lStack_38 != 0 && unaff_x21 != param_3) {
      FUN_104c0407c(lStack_38 + 0x20,unaff_x21 + 0x20);
      FUN_104c04088();
      unaff_x21 = auStack_48;
      func_0x000104c040bc();
      func_0x000104c056b0();
    }
    FUN_104c04610(auStack_48);
  }
  while (unaff_x21 != param_3) {
    unaff_x21 = unaff_x20;
    FUN_104c040e4();
    func_0x000104c056b0();
  }
  return;
}



/* Entry: 104c0407c; end: 104c04087;  */

undefined8 * FUN_104c0407c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (puVar1 != (undefined8 *)(param_2 + 2)) {
    FUN_104c041bc(puVar1,*(undefined8 *)(param_2 + 2),param_2 + 4);
  }
  return puVar1;
}



/* Entry: 104c04088; end: 104c040e3;  */

void FUN_104c04088(void)

{
  func_0x000100152bac();
  func_0x000104c04584();
  func_0x000104c058b8();
  FUN_104c03b68();
  return;
}



/* Entry: 104c040e4; end: 104c0414f;  */

undefined8 FUN_104c040e4(void)

{
  undefined8 auStack_38 [3];
  
  func_0x0001006202e8();
  FUN_104c03b14(auStack_38);
  func_0x00010060416c();
  FUN_104c04658();
  FUN_104c03b68();
  func_0x000104c057fc();
  return auStack_38[0];
}



/* Entry: 104c04150; end: 104c04183;  */

undefined8 * FUN_104c04150(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_104c04184();
  param_1[1] = param_2;
  func_0x000104c040bc(param_1);
  return param_1;
}



/* Entry: 104c04184; end: 104c04187;  */

long FUN_104c04184(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *param_1;
  plVar2 = param_1 + 1;
  *param_1 = (long)plVar2;
  *(undefined8 *)(*plVar2 + 0x10) = 0;
  param_1[2] = 0;
  *plVar2 = 0;
  lVar3 = *(long *)(lVar1 + 8);
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 104c04188; end: 104c041bb;  */

undefined8 * FUN_104c04188(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_104c041bc(param_1,*param_2,param_2 + 1);
  }
  return param_1;
}



/* Entry: 104c041bc; end: 104c04267;  */

void FUN_104c041bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000104c05698();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_104c04364(auStack_48);
    while (lStack_38 != 0 && unaff_x21 != param_3) {
      uVar2 = *(undefined8 *)(unaff_x21 + 0x24);
      uVar1 = *(undefined8 *)(unaff_x21 + 0x1c);
      uVar3 = *(undefined8 *)(unaff_x21 + 0x2c);
      *(undefined8 *)(lStack_38 + 0x34) = *(undefined8 *)(unaff_x21 + 0x34);
      *(undefined8 *)(lStack_38 + 0x2c) = uVar3;
      *(undefined8 *)(lStack_38 + 0x24) = uVar2;
      *(undefined8 *)(lStack_38 + 0x1c) = uVar1;
      FUN_104c04268();
      unaff_x21 = auStack_48;
      func_0x000104c0429c();
      func_0x000104c056b0();
    }
    FUN_104c0444c(auStack_48);
  }
  while (unaff_x21 != param_3) {
    unaff_x21 = unaff_x20;
    FUN_104c042c4();
    func_0x000104c056b0();
  }
  return;
}



/* Entry: 104c04268; end: 104c042c3;  */

void FUN_104c04268(void)

{
  func_0x000100152bac();
  FUN_104c04398();
  func_0x000104c058b8();
  FUN_104c036e4();
  return;
}



/* Entry: 104c042c4; end: 104c04363;  */

long FUN_104c042c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x000100604178();
  uStack_48 = 1;
  uVar3 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  *(undefined8 *)(lVar1 + 0x24) = param_3[1];
  *(undefined8 *)(lVar1 + 0x1c) = uVar3;
  *(undefined8 *)(lVar1 + 0x34) = uVar5;
  *(undefined8 *)(lVar1 + 0x2c) = uVar4;
  lVar2 = param_1;
  lStack_58 = lVar1;
  lStack_50 = param_1 + 8;
  FUN_104c04494(param_1,param_2,&uStack_60,lVar1 + 0x1c);
  FUN_104c036e4(param_1,uStack_60,lVar2,lVar1);
  lVar1 = lStack_58;
  func_0x000104c05808();
  return lVar1;
}



/* Entry: 104c04364; end: 104c04397;  */

undefined8 * FUN_104c04364(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_104c04398();
  param_1[1] = param_2;
  func_0x000104c0429c(param_1);
  return param_1;
}



/* Entry: 104c04398; end: 104c0444b;  */

long FUN_104c04398(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *param_1;
  plVar2 = param_1 + 1;
  *param_1 = (long)plVar2;
  *(undefined8 *)(*plVar2 + 0x10) = 0;
  param_1[2] = 0;
  *plVar2 = 0;
  lVar3 = *(long *)(lVar1 + 8);
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 104c0444c; end: 104c04493;  */

void FUN_104c0444c(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  func_0x0001006203c8();
  func_0x000104c03878();
  lVar1 = unaff_x19[1];
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0) {
      unaff_x19[1] = lVar1;
    }
    func_0x000104c03878(*unaff_x19);
  }
  return;
}



/* Entry: 104c04494; end: 104c04533;  */

long * FUN_104c04494(long param_1,long *param_2,int *param_3,int *param_4)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000104c0564c();
  plVar6 = (long *)(param_1 + 8);
  cVar2 = SBORROW8((long)param_2,(long)plVar6);
  cVar3 = (long)param_2 - (long)plVar6 < 0;
  uVar4 = param_2 == plVar6;
  if ((!(bool)uVar4) &&
     (func_0x000104c05778((int)unaff_x19[4] * *(int *)((long)unaff_x19 + 0x1c)), cVar3 != cVar2)) {
    func_0x000100620408();
    plVar5 = (long *)(param_1 + 8);
    plVar6 = plVar5;
    if ((long *)*plVar5 != (long *)0x0) {
      plVar1 = (long *)*plVar5;
      do {
        while (plVar5 = plVar1,
              (int)plVar5[4] * *(int *)((long)plVar5 + 0x1c) < param_3[1] * *param_3) {
          plVar1 = (long *)plVar5[1];
          if ((long *)plVar5[1] == (long *)0x0) {
            plVar6 = plVar5 + 1;
            goto LAB_104c055cc;
          }
        }
        plVar6 = plVar5;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
LAB_104c055cc:
    *param_2 = (long)plVar5;
    return plVar6;
  }
  func_0x000104c0565c();
  if (!(bool)uVar4) {
    func_0x000104c0571c();
    func_0x000104c05778(param_4[1] * *param_4);
    if (cVar3 != cVar2) {
      func_0x000100620408();
      plVar5 = (long *)(param_1 + 8);
      plVar6 = plVar5;
      if ((long *)*plVar5 != (long *)0x0) {
        plVar1 = (long *)*plVar5;
        do {
          while (plVar5 = plVar1,
                (int)plVar5[4] * *(int *)((long)plVar5 + 0x1c) <= param_3[1] * *param_3) {
            plVar1 = (long *)plVar5[1];
            if ((long *)plVar5[1] == (long *)0x0) {
              plVar6 = plVar5 + 1;
              goto LAB_104c055cc;
            }
          }
          plVar6 = plVar5;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      goto LAB_104c055cc;
    }
  }
  if (*unaff_x19 == 0) {
    *unaff_x20 = unaff_x19;
  }
  else {
    func_0x000104c05884();
  }
  return unaff_x19;
}



/* Entry: 104c04534; end: 104c0460f;  */

long * FUN_104c04534(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, (int)plVar2[4] * *(int *)((long)plVar2 + 0x1c) < param_3[1] * *param_3
            ) {
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar3 = plVar2 + 1;
          goto LAB_104c04580;
        }
      }
      plVar3 = plVar2;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_104c04580:
  *param_2 = (long)plVar2;
  return plVar3;
}



/* Entry: 104c04610; end: 104c04657;  */

void FUN_104c04610(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  func_0x0001006203c8();
  func_0x000104c03d58();
  lVar1 = unaff_x19[1];
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0) {
      unaff_x19[1] = lVar1;
    }
    func_0x000104c03d58(*unaff_x19);
  }
  return;
}



/* Entry: 104c04658; end: 104c046ef;  */

long * FUN_104c04658(long param_1,long *param_2,int *param_3,int *param_4)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000104c0564c();
  bVar2 = true;
  if ((param_2 == (long *)(param_1 + 8)) ||
     (bVar2 = (int)unaff_x19[4] == *param_4, *param_4 <= (int)unaff_x19[4])) {
    func_0x000104c0565c();
    if ((bVar2) || (func_0x000104c0571c(), *(int *)(param_1 + 0x20) <= *param_4)) {
      if (*unaff_x19 == 0) {
        *unaff_x20 = unaff_x19;
      }
      else {
        func_0x000104c05884();
      }
      return unaff_x19;
    }
    func_0x000100620408();
    plVar3 = (long *)(param_1 + 8);
    plVar4 = plVar3;
    if ((long *)*plVar3 != (long *)0x0) {
      plVar1 = (long *)*plVar3;
      do {
        while (plVar3 = plVar1, (int)plVar3[4] <= *param_3) {
          plVar1 = (long *)plVar3[1];
          if ((long *)plVar3[1] == (long *)0x0) {
            plVar4 = plVar3 + 1;
            goto LAB_104c055cc;
          }
        }
        plVar4 = plVar3;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  else {
    func_0x000100620408();
    plVar3 = (long *)(param_1 + 8);
    plVar4 = plVar3;
    if ((long *)*plVar3 != (long *)0x0) {
      plVar1 = (long *)*plVar3;
      do {
        while (plVar3 = plVar1, (int)plVar3[4] < *param_3) {
          plVar1 = (long *)plVar3[1];
          if ((long *)plVar3[1] == (long *)0x0) {
            plVar4 = plVar3 + 1;
            goto LAB_104c055cc;
          }
        }
        plVar4 = plVar3;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
LAB_104c055cc:
  *param_2 = (long)plVar3;
  return plVar4;
}



/* Entry: 104c046f0; end: 104c04737;  */

long * FUN_104c046f0(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, (int)plVar2[4] < *param_3) {
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar3 = plVar2 + 1;
          goto LAB_104c04734;
        }
      }
      plVar3 = plVar2;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_104c04734:
  *param_2 = (long)plVar2;
  return plVar3;
}


