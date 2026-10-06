/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105294bc8; end: 105294c6b;  */

undefined8 *
FUN_105294bc8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_105294c6c(param_1 + 6,param_4);
  FUN_105294cc0(param_1 + 0x11,param_5);
  param_1[0x97] = param_6;
  param_1[0x98] = param_7;
  param_1[0x99] = param_8;
  return param_1;
}



/* Entry: 105294c6c; end: 105294cbf;  */

void FUN_105294c6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



/* Entry: 105294cc0; end: 105294ceb;  */

undefined1 * FUN_105294cc0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x428] = 0;
  FUN_105294cec();
  return param_1;
}



/* Entry: 105294cec; end: 105294cff;  */

void FUN_105294cec(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x428) == '\x01') {
    func_0x0001006b7234();
    *(undefined1 *)(param_1 + 0x428) = 1;
    return;
  }
  return;
}



/* Entry: 105294d00; end: 105294d1b;  */

void FUN_105294d00(long param_1)

{
  func_0x0001006b7234();
  *(undefined1 *)(param_1 + 0x428) = 1;
  return;
}



/* Entry: 105294d1c; end: 105294da3;  */

void FUN_105294d1c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x28) < param_2) {
    if ((undefined8 *)0x666666666666666 < param_2) {
      FUN_105294da4();
      func_0x000105295220();
      func_0x000105295218();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x28) * 0x28;
      FUN_105294ee0(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_105294e44(auStack_48,param_2,(param_1[1] - *param_1) / 0x28);
    func_0x000105295230();
    func_0x000105295220();
  }
  return;
}



/* Entry: 105294da4; end: 105294db7;  */

void FUN_105294da4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x28) * 0x28;
  FUN_105294ee0(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 105294db8; end: 105294e43;  */

void FUN_105294db8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_105294ee0(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 105294e44; end: 105294eb3;  */

long * FUN_105294e44(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000105294e90();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 105294eb4; end: 105294edf;  */

void FUN_105294eb4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x28) {
    func_0x000105294fb4(param_4,uVar1);
    param_4 = lStack_48 + 0x28;
  }
  uStack_58 = 1;
  func_0x000105294f84(param_1,param_2,param_3);
  FUN_105294fd8(&uStack_70);
  return;
}



/* Entry: 105294ee0; end: 105294f83;  */

void FUN_105294ee0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    func_0x000105294fb4(param_4,lVar1);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  func_0x000105294f84(param_1,param_2,param_3);
  FUN_105294fd8(&uStack_60);
  return;
}



/* Entry: 105294f84; end: 105294fd7;  */

void FUN_105294f84(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105294fd8; end: 105295007;  */

long FUN_105294fd8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105295008(param_1);
  }
  return param_1;
}



/* Entry: 105295008; end: 105295027;  */

void FUN_105295008(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105295028; end: 105295083;  */

void FUN_105295028(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105295084; end: 10529508b;  */

void FUN_105295084(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 10529508c; end: 105295127;  */

void FUN_10529508c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105295128; end: 1052951bf;  */

long FUN_105295128(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_1052951c0(param_1,(param_1[1] - *param_1) / 0x28 + 1);
  FUN_105294e44(auStack_58,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
  func_0x000105294fb4(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x28;
  func_0x000105295230();
  lVar2 = param_1[1];
  func_0x000105295220();
  return lVar2;
}



/* Entry: 1052951c0; end: 10529520f;  */

long * FUN_1052951c0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x666666666666666 < param_2) {
    FUN_105294da4();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x28;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x333333333333332 < uVar1) {
    plVar2 = (long *)0x666666666666666;
  }
  return plVar2;
}



/* Entry: 105295210; end: 10529524f;  */

void FUN_105295210(void)

{
  return;
}



/* Entry: 105295250; end: 105295367;  */

undefined1 * FUN_105295250(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105295368();
  func_0x0001003b2110(auStack_68,0x1138188a0);
  FUN_10528f724(auStack_58,param_2);
  FUN_10529a8dc(auStack_48,param_2 + 0x5d8);
  puVar8 = (undefined1 *)0x2;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  func_0x0001052954f4(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar9 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_105295368;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar9;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138188a8 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138188a8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_MessageWithServerId");
      pcVar5 = "message";
      func_0x0001003a83dc(auStack_d8,"message");
      FUN_10528f8a4();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "serverId";
      func_0x0001003a83dc(auStack_e0,"serverId");
      FUN_10529a9e4();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      puVar8 = auStack_c8;
      uVar7 = 0;
      func_0x000104bdbd44(0x113818898,auStack_d0,0,puVar8,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar9);
        iVar6 = (int)uVar7;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x1138188a8;
      ___cxa_guard_release(0x1138188a8);
    }
  }
  func_0x0001052954f4(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818898;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar2 = puVar4;
  func_0x00010069e734();
  func_0x0001052954cc(puVar2 + 0x5d8,puVar8);
  return puVar4;
}



/* Entry: 105295368; end: 105295497;  */

long FUN_105295368(long param_1,int param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138188a8 & 1) == 0) {
    param_1 = 0x1138188a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_MessageWithServerId");
      pcVar1 = "message";
      func_0x0001003a83dc(auStack_68,"message");
      FUN_10528f8a4();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "serverId";
      func_0x0001003a83dc(auStack_70,"serverId");
      FUN_10529a9e4();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      param_3 = auStack_58;
      uVar2 = 0;
      func_0x000104bdbd44(0x113818898,auStack_60,0,param_3,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x1138188a8;
      ___cxa_guard_release(0x1138188a8);
    }
  }
  func_0x0001052954f4(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818898;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lVar3 = param_1;
  func_0x00010069e734();
  func_0x0001052954cc(lVar3 + 0x5d8,param_3);
  return param_1;
}



/* Entry: 105295498; end: 1052954cb;  */

long FUN_105295498(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010069e734();
  FUN_1052954cc(lVar1 + 0x5d8,param_3);
  return param_1;
}



/* Entry: 1052954cc; end: 105295507;  */

void FUN_1052954cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 105295508; end: 105295643;  */

undefined1 * FUN_105295508(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105295644();
  func_0x0001003b2110(auStack_78,0x1138188b8);
  FUN_105284f10(auStack_68,param_2);
  uStack_58 = *(undefined4 *)(param_2 + 0x10);
  uStack_50 = 4;
  FUN_105284f10(auStack_48,param_2 + 0x18);
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_1052957a4(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x30;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_105295644;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar8;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138188c0 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138188c0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_NotificationSettings");
      pcVar5 = "chatNotificationPreference";
      func_0x0001003a83dc(auStack_100,"chatNotificationPreference");
      FUN_105285014();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "gameNotificationPreference";
      func_0x0001003a83dc(auStack_108,"gameNotificationPreference");
      func_0x000104bef6ac();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "callingNotificationPreference";
      func_0x0001003a83dc(auStack_110,"callingNotificationPreference");
      FUN_105285014();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138188b0,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar4 = (undefined1 *)0x1138188c0;
      ___cxa_guard_release(0x1138188c0);
    }
  }
  FUN_1052957a4(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138188b0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105295644; end: 1052957a3;  */

undefined8 FUN_105295644(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138188c0 & 1) == 0) {
    param_1 = 0x1138188c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_NotificationSettings");
      pcVar1 = "chatNotificationPreference";
      func_0x0001003a83dc(auStack_80,"chatNotificationPreference");
      FUN_105285014();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "gameNotificationPreference";
      func_0x0001003a83dc(auStack_88,"gameNotificationPreference");
      func_0x000104bef6ac();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "callingNotificationPreference";
      func_0x0001003a83dc(auStack_90,"callingNotificationPreference");
      FUN_105285014();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138188b0,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x1138188c0;
      ___cxa_guard_release(0x1138188c0);
    }
  }
  FUN_1052957a4(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138188b0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052957a4; end: 1052957b7;  */

void FUN_1052957a4(void)

{
  return;
}



/* Entry: 1052957b8; end: 105295877;  */

long * FUN_1052957b8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105295878();
  func_0x0001003b2110(&lStack_48,0x1138188d0);
  FUN_10529595c(auStack_38,param_2);
  func_0x000104bdb9bc(&lStack_40,&lStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(&lStack_48);
  iVar3 = (int)&lStack_40;
  func_0x00010b9a8f60(param_1);
  plVar1 = &lStack_40;
  func_0x000104bdbf78();
  func_0x000105295c9c(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  plVar1 = &lStack_48;
  func_0x0001003b1f60();
  func_0x000105295c78();
  pcStack_58 = FUN_105295878;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138188d8 & 1) == 0) {
    plVar1 = (long *)0x1138188d8;
    ___cxa_guard_acquire();
    if ((int)plVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_OpenPollVoteMetadata");
      pcVar2 = "voteIndexVotes";
      func_0x0001003a83dc(auStack_90,"voteIndexVotes");
      FUN_105295a24();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x1138188c8,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      plVar1 = (long *)0x1138188d8;
      ___cxa_guard_release();
    }
  }
  func_0x000105295c9c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_d8,(plVar1[1] - *plVar1) / 0x28);
    lVar4 = 0;
    lVar6 = 0x18;
    for (uVar5 = 0; uVar5 < (ulong)((plVar1[1] - *plVar1) / 0x28); uVar5 = uVar5 + 1) {
      FUN_105295bfc(auStack_e8,*plVar1 + lVar4);
      func_0x00010b9a9020(lStack_d8 + lVar6,auStack_e8);
      func_0x00010b9a8d98(auStack_e8);
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x28;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_d8);
    plVar1 = &lStack_d8;
    func_0x000104bddf38(plVar1);
    return plVar1;
  }
  return (long *)0x1138188c8;
}



/* Entry: 105295878; end: 10529595b;  */

long * FUN_105295878(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138188d8 & 1) == 0) {
    param_1 = (long *)0x1138188d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_OpenPollVoteMetadata");
      pcVar1 = "voteIndexVotes";
      func_0x0001003a83dc(auStack_40,"voteIndexVotes");
      FUN_105295a24();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x1138188c8,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = (long *)0x1138188d8;
      ___cxa_guard_release();
    }
  }
  func_0x000105295c9c(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_88,(param_1[1] - *param_1) / 0x28);
    lVar3 = 0;
    lVar5 = 0x18;
    for (uVar4 = 0; uVar4 < (ulong)((param_1[1] - *param_1) / 0x28); uVar4 = uVar4 + 1) {
      FUN_105295bfc(auStack_98,*param_1 + lVar3);
      func_0x00010b9a9020(lStack_88 + lVar5,auStack_98);
      func_0x00010b9a8d98(auStack_98);
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar3 + 0x28;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_88);
    plVar2 = &lStack_88;
    func_0x000104bddf38(plVar2);
    return plVar2;
  }
  return (long *)0x1138188c8;
}



/* Entry: 10529595c; end: 105295a23;  */

void FUN_10529595c(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0x28);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0x28); uVar2 = uVar2 + 1) {
    FUN_105295bfc(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x28;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 105295a24; end: 105295a7f;  */

undefined8 FUN_105295a24(void)

{
  int iVar1;
  
  if ((bRam00000001130cc008 & 1) == 0) {
    iVar1 = 0x130cc008;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105295c1c();
      func_0x00010b990868(0x1130cbff8);
      ___cxa_guard_release(0x1130cc008);
    }
  }
  return 0x1130cbff8;
}



/* Entry: 105295a80; end: 105295a93;  */

void FUN_105295a80(void)

{
  func_0x000104bd47e8("vector");
  FUN_105295ab8();
  return;
}



/* Entry: 105295a94; end: 105295ab7;  */

void FUN_105295a94(void)

{
  FUN_105295ab8();
  return;
}



/* Entry: 105295ab8; end: 105295aff;  */

void FUN_105295ab8(long param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  FUN_105295b00();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 105295b00; end: 105295b2b;  */

void FUN_105295b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



/* Entry: 105295b2c; end: 105295b5b;  */

long FUN_105295b2c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105295b5c(param_1);
  }
  return param_1;
}



/* Entry: 105295b5c; end: 105295b7b;  */

void FUN_105295b5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    func_0x000104be13c8();
  }
  return;
}



/* Entry: 105295b7c; end: 105295bab;  */

void FUN_105295b7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    func_0x000104be13c8();
  }
  return;
}



/* Entry: 105295bac; end: 105295bfb;  */

long * FUN_105295bac(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long *plVar8;
  long lVar9;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar8 = (long *)(uVar1 * 2);
    if (plVar8 < param_2 || (long)plVar8 - (long)param_2 == 0) {
      plVar8 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar8 = (long *)0x666666666666666;
    }
    return plVar8;
  }
  FUN_105295a80();
  if ((char)param_1[4] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_18 = FUN_105295bfc;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_105297038();
  func_0x0001003b2110(auStack_78,0x113818960);
  FUN_105282834(auStack_68,param_1);
  auStack_58[0] = (undefined1)param_1[3];
  uStack_50 = 7;
  func_0x000104bdb9bc(&lStack_70,auStack_78,auStack_68,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar2 = lVar9 == -0x10;
  } while (!(bool)uVar2);
  func_0x0001003b1f60(auStack_78);
  plVar8 = &lStack_70;
  func_0x00010b9a8f60(extraout_x8);
  plVar3 = &lStack_70;
  func_0x000104bdbf78();
  FUN_105297168(uStack_48);
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_58;
  lVar9 = -0x20;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar6 = (int)plVar8;
    puVar4 = puVar4 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar2 = lVar9 == 0;
  } while (!(bool)uVar2);
  func_0x0001003b1f60(auStack_78);
  plVar8 = plVar3;
  __Unwind_Resume(plVar3);
  pcStack_88 = FUN_105297038;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar9;
  plStack_98 = plVar3;
  ppuStack_90 = &puStack_20;
  if ((bRam0000000113818968 & 1) == 0) {
    plVar8 = (long *)0x113818968;
    ___cxa_guard_acquire();
    if ((int)plVar8 != 0) {
      func_0x0001003a83dc(auStack_e0,"_djinni_record_PollVoteList");
      pcVar5 = "votes";
      func_0x0001003a83dc(auStack_e8,"votes");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_d8,auStack_e8,pcVar5);
      pcVar5 = "didUserVote";
      func_0x0001003a83dc(auStack_f0,"didUserVote");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_c0,auStack_f0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818958,auStack_e0,0,auStack_d8,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_d8 + lVar9);
        iVar6 = (int)uVar7;
        lVar9 = lVar9 + -0x18;
        uVar2 = lVar9 == -0x18;
      } while (!(bool)uVar2);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      plVar8 = (long *)0x113818968;
      ___cxa_guard_release(0x113818968);
    }
  }
  FUN_105297168(uStack_a8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    return plVar8;
  }
  return (long *)0x113818958;
}



/* Entry: 105295bfc; end: 105295c1b;  */

undefined1 * FUN_105295bfc(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (param_2[0x20] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105297038();
  func_0x0001003b2110(auStack_68,0x113818960);
  FUN_105282834(auStack_58,param_2);
  auStack_48[0] = param_2[0x18];
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_105297168(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_105297038;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818968 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818968;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_PollVoteList");
      pcVar5 = "votes";
      func_0x0001003a83dc(auStack_d8,"votes");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "didUserVote";
      func_0x0001003a83dc(auStack_e0,"didUserVote");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818958,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113818968;
      ___cxa_guard_release(0x113818968);
    }
  }
  FUN_105297168(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818958;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105295c1c; end: 105295c77;  */

undefined8 FUN_105295c1c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc020 & 1) == 0) {
    iVar1 = 0x130cc020;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105297038();
      func_0x00010b990784(0x1130cc010);
      ___cxa_guard_release(0x1130cc020);
    }
  }
  return 0x1130cc010;
}



/* Entry: 105295c78; end: 105295caf;  */

void FUN_105295c78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 105295cb0; end: 105295dbf;  */

undefined1 * FUN_105295cb0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined4 auStack_48 [2];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105295dc0();
  func_0x0001003b2110(auStack_78,0x1138188e8);
  FUN_10529dd1c(auStack_68,param_2);
  uStack_50 = 4;
  uStack_58 = *(undefined4 *)(param_2 + 0x18);
  auStack_48[0] = *(undefined4 *)(param_2 + 0x1c);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_105295f20(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x30;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -4;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_105295dc0;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar8;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138188f0 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138188f0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_Participant");
      pcVar5 = "participantId";
      func_0x0001003a83dc(auStack_100,"participantId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "color";
      func_0x0001003a83dc(auStack_108,"color");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "colorOption";
      func_0x0001003a83dc(auStack_110,"colorOption");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138188e0,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar4 = (undefined1 *)0x1138188f0;
      ___cxa_guard_release(0x1138188f0);
    }
  }
  FUN_105295f20(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138188e0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105295dc0; end: 105295f1f;  */

undefined8 FUN_105295dc0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138188f0 & 1) == 0) {
    param_1 = 0x1138188f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_Participant");
      pcVar1 = "participantId";
      func_0x0001003a83dc(auStack_80,"participantId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "color";
      func_0x0001003a83dc(auStack_88,"color");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "colorOption";
      func_0x0001003a83dc(auStack_90,"colorOption");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138188e0,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x1138188f0;
      ___cxa_guard_release(0x1138188f0);
    }
  }
  FUN_105295f20(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138188e0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105295f20; end: 105295f33;  */

void FUN_105295f20(void)

{
  return;
}



/* Entry: 105295f34; end: 105295f97;  */

void FUN_105295f34(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000104bdbf60(&uStack_40,lStack_28 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 105295f98; end: 10529607b;  */

undefined8 FUN_105295f98(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818908 & 1) == 0) {
    param_1 = 0x113818908;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_PhoneNumber");
      pcVar1 = "number";
      func_0x0001003a83dc(auStack_40,"number");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x1138188f8,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818908;
      ___cxa_guard_release(0x113818908);
    }
  }
  FUN_10529607c(uStack_18);
  if ((bool)in_ZR) {
    return 0x1138188f8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529607c; end: 10529608f;  */

void FUN_10529607c(void)

{
  return;
}



/* Entry: 105296090; end: 1052961e3;  */

void FUN_105296090(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 in_x7;
  undefined1 auStack_210 [360];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  long lStack_68;
  
  func_0x00010b9a97d0(&lStack_68);
  FUN_105280c90(auStack_88,lStack_68 + 0x18);
  lVar1 = lStack_68 + 0x28;
  func_0x00010b9a9518(lVar1);
  lVar2 = lStack_68 + 0x38;
  func_0x00010b9a9518(lVar2);
  uVar3 = lStack_68 + 0x48;
  FUN_1052961e4(uVar3);
  uVar4 = lStack_68 + 0x58;
  func_0x000105296214(uVar4);
  func_0x000104bf1090(auStack_a8,lStack_68 + 0x68);
  lVar5 = lStack_68 + 0x78;
  func_0x000104bedf58();
  FUN_105296244(auStack_210,lStack_68 + 0x88);
  FUN_10529669c(param_1,auStack_88,lVar1,lVar2,uVar3 & 0xffffffffff,uVar4 & 0xffffffffff,auStack_a8,
                in_x7,lVar5,param_3 & 0xff,auStack_210);
  func_0x000104bee6e8(auStack_210);
  func_0x0001005fce88(auStack_a8);
  func_0x0001002a2294(auStack_88);
  func_0x000104bdbf78(&lStack_68);
  return;
}



/* Entry: 1052961e4; end: 105296243;  */

ulong FUN_1052961e4(ulong param_1)

{
  if (*(byte *)(param_1 + 8) < 2) {
    return 0;
  }
  func_0x00010b9a9518();
  return param_1 & 0xffffffff | 0x100000000;
}



/* Entry: 105296244; end: 10529629b;  */

void FUN_105296244(undefined1 *param_1,long param_2)

{
  undefined1 auStack_180 [352];
  
  if (*(byte *)(param_2 + 8) < 2) {
    *param_1 = 0;
    param_1[0x160] = 0;
  }
  else {
    FUN_105299fc0(auStack_180);
    FUN_105296720(param_1,auStack_180);
    func_0x000104bee708(auStack_180);
  }
  return;
}



/* Entry: 10529629c; end: 1052964d7;  */

undefined8 FUN_10529629c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000105296804();
  if ((bRam0000000113818920 & 1) == 0) {
    iVar1 = 0x13818920;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_100,"_djinni_record_PlatformAnalytics");
      pcVar2 = "content";
      func_0x0001003a83dc(auStack_108,"content");
      FUN_1052810e0();
      func_0x0001003b1b50(auStack_f8,auStack_108,pcVar2);
      pcVar2 = "metricsMessageType";
      func_0x0001003a83dc(auStack_110,"metricsMessageType");
      FUN_1052964d8();
      func_0x0001003b1b50(auStack_e0,auStack_110,pcVar2);
      pcVar2 = "metricsMessageMediaType";
      func_0x0001003a83dc(auStack_118,"metricsMessageMediaType");
      FUN_105296530();
      func_0x0001003b1b50(auStack_c8,auStack_118,pcVar2);
      pcVar2 = "reactionSource";
      func_0x0001003a83dc(auStack_120,"reactionSource");
      FUN_105296588();
      func_0x0001003b1b50(auStack_b0,auStack_120,pcVar2);
      pcVar2 = "reactionSendSource";
      func_0x0001003a83dc(auStack_128,"reactionSendSource");
      FUN_1052965e4();
      func_0x0001003b1b50(auStack_98,auStack_128,pcVar2);
      pcVar2 = "attemptId";
      func_0x0001003a83dc(auStack_130,"attemptId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_80,auStack_130,pcVar2);
      pcVar2 = "userActionTimestamp";
      func_0x0001003a83dc(auStack_138,"userActionTimestamp");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_68,auStack_138,pcVar2);
      pcVar2 = "sendMessageAnalytics";
      func_0x0001003a83dc(auStack_140,"sendMessageAnalytics");
      FUN_105296640();
      func_0x0001003b1b50(auStack_50,auStack_140,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818910,auStack_100,0,auStack_f8,8);
      lVar4 = 0xa8;
      do {
        func_0x0001003b1c5c(auStack_f8 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      func_0x0001003a8c94(auStack_118);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      ___cxa_guard_release(0x113818920);
    }
  }
  func_0x0001052967ec();
  if ((bool)in_ZR) {
    return 0x113818910;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc038 & 1) == 0) {
    iVar1 = 0x130cc038;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc028);
      ___cxa_guard_release(0x1130cc038);
    }
  }
  return 0x1130cc028;
}



/* Entry: 1052964d8; end: 10529652f;  */

undefined8 FUN_1052964d8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc038 & 1) == 0) {
    iVar1 = 0x130cc038;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc028);
      ___cxa_guard_release(0x1130cc038);
    }
  }
  return 0x1130cc028;
}



/* Entry: 105296530; end: 105296587;  */

undefined8 FUN_105296530(void)

{
  int iVar1;
  
  if ((bRam00000001130cc050 & 1) == 0) {
    iVar1 = 0x130cc050;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc040);
      ___cxa_guard_release(0x1130cc050);
    }
  }
  return 0x1130cc040;
}



/* Entry: 105296588; end: 1052965e3;  */

undefined8 FUN_105296588(void)

{
  int iVar1;
  
  if ((bRam00000001130cc068 & 1) == 0) {
    iVar1 = 0x130cc068;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529673c();
      func_0x00010b990784(0x1130cc058);
      ___cxa_guard_release(0x1130cc068);
    }
  }
  return 0x1130cc058;
}



/* Entry: 1052965e4; end: 10529663f;  */

undefined8 FUN_1052965e4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc098 & 1) == 0) {
    iVar1 = 0x130cc098;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105296794();
      func_0x00010b990784(0x1130cc088);
      ___cxa_guard_release(0x1130cc098);
    }
  }
  return 0x1130cc088;
}



/* Entry: 105296640; end: 10529669b;  */

undefined8 FUN_105296640(void)

{
  int iVar1;
  
  if ((bRam00000001130cc0c8 & 1) == 0) {
    iVar1 = 0x130cc0c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529a15c();
      func_0x00010b990784(0x1130cc0b8);
      ___cxa_guard_release(0x1130cc0c8);
    }
  }
  return 0x1130cc0b8;
}



/* Entry: 10529669c; end: 10529671f;  */

long FUN_10529669c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001006b78fc();
  *(undefined4 *)(lVar1 + 0x20) = param_3;
  *(undefined4 *)(lVar1 + 0x24) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  func_0x00010061fb2c(lVar1 + 0x38,param_7);
  *(undefined8 *)(param_1 + 0x58) = param_9;
  *(undefined8 *)(param_1 + 0x60) = param_10;
  FUN_10528cfbc(param_1 + 0x68,param_11);
  return param_1;
}



/* Entry: 105296720; end: 10529673b;  */

void FUN_105296720(long param_1)

{
  FUN_10528d018();
  *(undefined1 *)(param_1 + 0x160) = 1;
  return;
}



/* Entry: 10529673c; end: 105296793;  */

undefined8 FUN_10529673c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc080 & 1) == 0) {
    iVar1 = 0x130cc080;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc070);
      ___cxa_guard_release(0x1130cc080);
    }
  }
  return 0x1130cc070;
}



/* Entry: 105296794; end: 1052967eb;  */

undefined8 FUN_105296794(void)

{
  int iVar1;
  
  if ((bRam00000001130cc0b0 & 1) == 0) {
    iVar1 = 0x130cc0b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc0a0);
      ___cxa_guard_release(0x1130cc0b0);
    }
  }
  return 0x1130cc0a0;
}



/* Entry: 1052967ec; end: 105296817;  */

void FUN_1052967ec(void)

{
  return;
}



/* Entry: 105296818; end: 105296967;  */

undefined1 * FUN_105296818(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105296968();
  func_0x0001003b2110(auStack_88,0x113818930);
  auStack_78[0] = *param_2;
  uStack_68 = param_2[1];
  uStack_70 = 4;
  uStack_60 = 4;
  uStack_58 = *(undefined8 *)(param_2 + 2);
  uStack_50 = 5;
  if (*(char *)(param_2 + 4) == '\0') {
    uStack_50 = 1;
    uStack_58 = 0;
  }
  uStack_4f = 0;
  FUN_105296b94(auStack_48,param_2 + 6);
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar9 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar7 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_80;
  func_0x000104bdbf78();
  FUN_105296b80(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar9 = -0x40;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar6 = (int)puVar7;
    puVar4 = puVar4 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  __Unwind_Resume(puVar3);
  pcStack_98 = FUN_105296968;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar9;
  puStack_a8 = puVar3;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818938 & 1) == 0) {
    iVar2 = 0x13818938;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_PollMetadata");
      pcVar5 = "pollType";
      func_0x0001003a83dc(auStack_128,"pollType");
      FUN_105296af4();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "numOptions";
      func_0x0001003a83dc(auStack_130,"numOptions");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "timeRemainingMs";
      func_0x0001003a83dc(auStack_138,"timeRemainingMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "typeMetadata";
      func_0x0001003a83dc(auStack_140,"typeMetadata");
      FUN_105296cac();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      uVar8 = 0;
      func_0x000104bdbd44(0x113818928,auStack_120,0,auStack_118,4);
      lVar9 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_118 + lVar9);
        iVar6 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      ___cxa_guard_release(0x113818938);
    }
  }
  FUN_105296b80(uStack_b8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    if ((bRam00000001130cc0e0 & 1) == 0) {
      iVar6 = 0x130cc0e0;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        func_0x00010b990e20(0x1130cc0d0);
        ___cxa_guard_release(0x1130cc0e0);
      }
    }
    return (undefined1 *)0x1130cc0d0;
  }
  return (undefined1 *)0x113818928;
}



/* Entry: 105296968; end: 105296af3;  */

undefined8 FUN_105296968(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818938 & 1) == 0) {
    iVar1 = 0x13818938;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_PollMetadata");
      pcVar2 = "pollType";
      func_0x0001003a83dc(auStack_98,"pollType");
      FUN_105296af4();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar2);
      pcVar2 = "numOptions";
      func_0x0001003a83dc(auStack_a0,"numOptions");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar2);
      pcVar2 = "timeRemainingMs";
      func_0x0001003a83dc(auStack_a8,"timeRemainingMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar2);
      pcVar2 = "typeMetadata";
      func_0x0001003a83dc(auStack_b0,"typeMetadata");
      FUN_105296cac();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818928,auStack_90,0,auStack_88,4);
      lVar4 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      ___cxa_guard_release(0x113818938);
    }
  }
  FUN_105296b80(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818928;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc0e0 & 1) == 0) {
    iVar1 = 0x130cc0e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc0d0);
      ___cxa_guard_release(0x1130cc0e0);
    }
  }
  return 0x1130cc0d0;
}



/* Entry: 105296af4; end: 105296b4b;  */

undefined8 FUN_105296af4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc0e0 & 1) == 0) {
    iVar1 = 0x130cc0e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc0d0);
      ___cxa_guard_release(0x1130cc0e0);
    }
  }
  return 0x1130cc0d0;
}



/* Entry: 105296b4c; end: 105296b7f;  */

undefined4 *
FUN_105296b4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = param_4;
  *(undefined8 *)(param_1 + 4) = param_5;
  func_0x000104be715c(param_1 + 6,param_6);
  return param_1;
}



/* Entry: 105296b80; end: 105296b93;  */

void FUN_105296b80(void)

{
  return;
}



/* Entry: 105296b94; end: 105296cab;  */

long * FUN_105296b94(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar9;
  long lVar10;
  undefined4 auStack_218 [2];
  undefined2 uStack_210;
  long lStack_208;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  long lStack_170;
  long *plStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined8 uStack_118;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105296cac();
  func_0x0001003b2110(auStack_68,0x113818948);
  FUN_105296ddc(auStack_58,param_2);
  func_0x000105296df0(auStack_48,param_2 + 0x28);
  func_0x000104bdb9bc(&lStack_60,auStack_68,auStack_58,2);
  lVar10 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  plVar5 = &lStack_60;
  func_0x00010b9a8f60(param_1);
  plVar3 = &lStack_60;
  func_0x000104bdbf78();
  func_0x000105296f1c(uStack_38);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar10 = -0x20;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar7 = (int)plVar5;
    puVar4 = puVar4 + -0x10;
    lVar10 = lVar10 + 0x10;
    uVar1 = lVar10 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  plVar5 = plVar3;
  __Unwind_Resume();
  pcStack_78 = FUN_105296cac;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar10;
  plStack_88 = plVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818950 & 1) == 0) {
    plVar5 = (long *)0x113818950;
    ___cxa_guard_acquire();
    if ((int)plVar5 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_PollTypeMetadata");
      pcVar6 = "anonymous";
      func_0x0001003a83dc(auStack_d8,"anonymous");
      FUN_105296e04();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar6);
      pcVar6 = "open";
      func_0x0001003a83dc(auStack_e0,"open");
      FUN_105296e60();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar6);
      uVar8 = 0;
      func_0x000104bdbd44(0x113818940,auStack_d0,0,auStack_c8,2);
      lVar10 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar10);
        iVar7 = (int)uVar8;
        lVar10 = lVar10 + -0x18;
        uVar1 = lVar10 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      plVar5 = (long *)0x113818950;
      ___cxa_guard_release();
    }
  }
  func_0x000105296f1c(uStack_98);
  if ((bool)uVar1) {
    return (long *)0x113818940;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)plVar5[4] != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return plVar5;
  }
  pcStack_e8 = FUN_105296ddc;
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = &puStack_80;
  FUN_10527eb88();
  func_0x0001003b2110(&lStack_148,0x113818148);
  FUN_10527ecb8(auStack_138,plVar5);
  if (*(char *)((long)plVar5 + 0x1c) == '\x01') {
    uStack_128 = CONCAT44(uStack_128._4_4_,(int)plVar5[3]);
    uStack_120 = 4;
  }
  else {
    uStack_128 = 0;
    uStack_120 = 1;
  }
  uStack_11f = 0;
  func_0x000104bdb9bc(&lStack_140,&lStack_148,auStack_138,2);
  lVar10 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_138 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_148);
  plVar5 = &lStack_140;
  func_0x00010b9a8f60(extraout_x8_00);
  plVar3 = &lStack_140;
  func_0x000104bdbf78();
  func_0x00010527edc8(uStack_118);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_128;
  lVar10 = -0x20;
  do {
    func_0x00010b9a8d98(puVar2);
    iVar7 = (int)plVar5;
    puVar2 = puVar2 + -2;
    lVar10 = lVar10 + 0x10;
    uVar1 = lVar10 == 0;
  } while (!(bool)uVar1);
  plVar5 = &lStack_148;
  func_0x0001003b1f60();
  func_0x00010527edc0();
  pcStack_158 = FUN_10527eb88;
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_170 = lVar10;
  plStack_168 = plVar3;
  pppuStack_160 = &ppuStack_f0;
  if ((bRam0000000113818150 & 1) == 0) {
    plVar5 = (long *)0x113818150;
    ___cxa_guard_acquire();
    if ((int)plVar5 != 0) {
      func_0x0001003a83dc(auStack_1b0,"_djinni_record_AnonymousPollVoteMetadata");
      pcVar6 = "voteIndexCounts";
      func_0x0001003a83dc(auStack_1b8,"voteIndexCounts");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_1a8,auStack_1b8,pcVar6);
      pcVar6 = "userVoteIndices";
      func_0x0001003a83dc(auStack_1c0,"userVoteIndices");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_190,auStack_1c0,pcVar6);
      uVar8 = 0;
      func_0x000104bdbd44(0x113818140,auStack_1b0,0,auStack_1a8,2);
      lVar10 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_1a8 + lVar10);
        iVar7 = (int)uVar8;
        lVar10 = lVar10 + -0x18;
        uVar1 = lVar10 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1c0);
      func_0x0001003a8c94(auStack_1b8);
      func_0x0001003a8c94(auStack_1b0);
      plVar5 = (long *)0x113818150;
      ___cxa_guard_release();
    }
  }
  func_0x00010527edc8(uStack_178);
  if ((bool)uVar1) {
    return (long *)0x113818140;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_208,plVar5[1] - *plVar5 >> 2);
  lVar10 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(plVar5[1] - *plVar5 >> 2); uVar9 = uVar9 + 1) {
    auStack_218[0] = *(undefined4 *)(*plVar5 + uVar9 * 4);
    uStack_210 = 4;
    func_0x00010b9a9020(lStack_208 + lVar10,auStack_218);
    func_0x00010b9a8d98(auStack_218);
    lVar10 = lVar10 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_208);
  plVar5 = &lStack_208;
  func_0x000104bddf38(plVar5);
  return plVar5;
}



/* Entry: 105296cac; end: 105296ddb;  */

long * FUN_105296cac(long *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar8;
  ulong uVar9;
  undefined4 auStack_1a8 [2];
  undefined2 uStack_1a0;
  long lStack_198;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818950 & 1) == 0) {
    param_1 = (long *)0x113818950;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_PollTypeMetadata");
      pcVar5 = "anonymous";
      func_0x0001003a83dc(auStack_68,"anonymous");
      FUN_105296e04();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar5);
      pcVar5 = "open";
      func_0x0001003a83dc(auStack_70,"open");
      FUN_105296e60();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818940,auStack_60,0,auStack_58,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (long *)0x113818950;
      ___cxa_guard_release();
    }
  }
  func_0x000105296f1c(uStack_28);
  if ((bool)in_ZR) {
    return (long *)0x113818940;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)param_1[4] != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return param_1;
  }
  pcStack_78 = FUN_105296ddc;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10527eb88();
  func_0x0001003b2110(&lStack_d8,0x113818148);
  FUN_10527ecb8(auStack_c8,param_1);
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)param_1[3]);
    uStack_b0 = 4;
  }
  else {
    uStack_b8 = 0;
    uStack_b0 = 1;
  }
  uStack_af = 0;
  func_0x000104bdb9bc(&lStack_d0,&lStack_d8,auStack_c8,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_c8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_d8);
  plVar4 = &lStack_d0;
  func_0x00010b9a8f60(extraout_x8_00);
  plVar2 = &lStack_d0;
  func_0x000104bdbf78();
  func_0x00010527edc8(uStack_a8);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_b8;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_d8;
  func_0x0001003b1f60();
  func_0x00010527edc0();
  pcStack_e8 = FUN_10527eb88;
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_100 = lVar8;
  plStack_f8 = plVar2;
  ppuStack_f0 = &puStack_80;
  if ((bRam0000000113818150 & 1) == 0) {
    plVar4 = (long *)0x113818150;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_140,"_djinni_record_AnonymousPollVoteMetadata");
      pcVar5 = "voteIndexCounts";
      func_0x0001003a83dc(auStack_148,"voteIndexCounts");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_138,auStack_148,pcVar5);
      pcVar5 = "userVoteIndices";
      func_0x0001003a83dc(auStack_150,"userVoteIndices");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_120,auStack_150,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818140,auStack_140,0,auStack_138,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_138 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      func_0x0001003a8c94(auStack_140);
      plVar4 = (long *)0x113818150;
      ___cxa_guard_release();
    }
  }
  func_0x00010527edc8(uStack_108);
  if ((bool)uVar1) {
    return (long *)0x113818140;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_198,plVar4[1] - *plVar4 >> 2);
  lVar8 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(plVar4[1] - *plVar4 >> 2); uVar9 = uVar9 + 1) {
    auStack_1a8[0] = *(undefined4 *)(*plVar4 + uVar9 * 4);
    uStack_1a0 = 4;
    func_0x00010b9a9020(lStack_198 + lVar8,auStack_1a8);
    func_0x00010b9a8d98(auStack_1a8);
    lVar8 = lVar8 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_198);
  plVar4 = &lStack_198;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 105296ddc; end: 105296e03;  */

long * FUN_105296ddc(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined4 auStack_138 [2];
  undefined2 uStack_130;
  long lStack_128;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  if ((char)param_2[4] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527eb88();
  func_0x0001003b2110(&lStack_68,0x113818148);
  FUN_10527ecb8(auStack_58,param_2);
  if (*(char *)((long)param_2 + 0x1c) == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,(int)param_2[3]);
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(&lStack_60,&lStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_68);
  plVar4 = &lStack_60;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_60;
  func_0x000104bdbf78();
  func_0x00010527edc8(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_68;
  func_0x0001003b1f60();
  func_0x00010527edc0();
  pcStack_78 = FUN_10527eb88;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  plStack_88 = plVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818150 & 1) == 0) {
    plVar4 = (long *)0x113818150;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_AnonymousPollVoteMetadata");
      pcVar5 = "voteIndexCounts";
      func_0x0001003a83dc(auStack_d8,"voteIndexCounts");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "userVoteIndices";
      func_0x0001003a83dc(auStack_e0,"userVoteIndices");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818140,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      plVar4 = (long *)0x113818150;
      ___cxa_guard_release();
    }
  }
  func_0x00010527edc8(uStack_98);
  if ((bool)uVar1) {
    return (long *)0x113818140;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_128,plVar4[1] - *plVar4 >> 2);
  lVar8 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(plVar4[1] - *plVar4 >> 2); uVar9 = uVar9 + 1) {
    auStack_138[0] = *(undefined4 *)(*plVar4 + uVar9 * 4);
    uStack_130 = 4;
    func_0x00010b9a9020(lStack_128 + lVar8,auStack_138);
    func_0x00010b9a8d98(auStack_138);
    lVar8 = lVar8 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_128);
  plVar4 = &lStack_128;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 105296e04; end: 105296e5f;  */

undefined8 FUN_105296e04(void)

{
  int iVar1;
  
  if ((bRam00000001130cc0f8 & 1) == 0) {
    iVar1 = 0x130cc0f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10527eb88();
      func_0x00010b990784(0x1130cc0e8);
      ___cxa_guard_release(0x1130cc0f8);
    }
  }
  return 0x1130cc0e8;
}



/* Entry: 105296e60; end: 105296ebb;  */

undefined8 FUN_105296e60(void)

{
  int iVar1;
  
  if ((bRam00000001130cc110 & 1) == 0) {
    iVar1 = 0x130cc110;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105295878();
      func_0x00010b990784(0x1130cc100);
      ___cxa_guard_release(0x1130cc110);
    }
  }
  return 0x1130cc100;
}



/* Entry: 105296ebc; end: 105296eef;  */

long FUN_105296ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104be7188();
  func_0x000104be71f4(lVar1 + 0x28,param_3);
  return param_1;
}



/* Entry: 105296ef0; end: 105296f0b;  */

void FUN_105296ef0(long param_1)

{
  func_0x000104be71dc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 105296f0c; end: 105296f2f;  */

void FUN_105296f0c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105296f30; end: 105297037;  */

undefined1 * FUN_105296f30(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105297038();
  func_0x0001003b2110(auStack_68,0x113818960);
  FUN_105282834(auStack_58,param_2);
  auStack_48[0] = *(undefined1 *)(param_2 + 0x18);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_105297168(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_105297038;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818968 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818968;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_PollVoteList");
      pcVar5 = "votes";
      func_0x0001003a83dc(auStack_d8,"votes");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "didUserVote";
      func_0x0001003a83dc(auStack_e0,"didUserVote");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818958,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113818968;
      ___cxa_guard_release(0x113818968);
    }
  }
  FUN_105297168(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818958;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105297038; end: 105297167;  */

undefined8 FUN_105297038(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818968 & 1) == 0) {
    param_1 = 0x113818968;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_PollVoteList");
      pcVar1 = "votes";
      func_0x0001003a83dc(auStack_68,"votes");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "didUserVote";
      func_0x0001003a83dc(auStack_70,"didUserVote");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818958,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818968;
      ___cxa_guard_release(0x113818968);
    }
  }
  FUN_105297168(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818958;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105297168; end: 10529717b;  */

void FUN_105297168(void)

{
  return;
}



/* Entry: 10529717c; end: 10529725f;  */

undefined1 * FUN_10529717c(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105297260();
  func_0x0001003b2110(auStack_48,0x113818978);
  uVar1 = param_2[1] == '\x01';
  if ((bool)uVar1) {
    uStack_38 = CONCAT71(uStack_38._1_7_,*param_2);
    uStack_30 = 7;
  }
  else {
    uStack_38 = 0;
    uStack_30 = 1;
  }
  uStack_2f = 0;
  func_0x000104bdb9bc(auStack_40,auStack_48,&uStack_38,1);
  func_0x00010b9a8d98(&uStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar4 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_40;
  func_0x000104bdbf78(puVar2);
  FUN_105297344(uStack_28);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(&uStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar2);
  pcStack_58 = FUN_105297260;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818980 & 1) == 0) {
    puVar2 = (undefined1 *)0x113818980;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_PrefetchFeedUpdateMetadata");
      pcVar3 = "loginPaginationComplete";
      func_0x0001003a83dc(auStack_90,"loginPaginationComplete");
      FUN_105288360();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar3);
      iVar4 = 0;
      func_0x000104bdbd44(0x113818970,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar2 = (undefined1 *)0x113818980;
      ___cxa_guard_release(0x113818980);
    }
  }
  FUN_105297344(uStack_68);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818970;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar2;
}



/* Entry: 105297260; end: 105297343;  */

undefined8 FUN_105297260(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818980 & 1) == 0) {
    param_1 = 0x113818980;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_PrefetchFeedUpdateMetadata");
      pcVar1 = "loginPaginationComplete";
      func_0x0001003a83dc(auStack_40,"loginPaginationComplete");
      FUN_105288360();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818970,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818980;
      ___cxa_guard_release(0x113818980);
    }
  }
  FUN_105297344(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818970;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105297344; end: 105297357;  */

void FUN_105297344(void)

{
  return;
}



/* Entry: 105297358; end: 10529740f;  */

void FUN_105297358(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar2 = *param_2, lVar2 != 0)) {
    func_0x0001000fc044(param_1,*(undefined8 *)(lVar2 + 0x10));
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      func_0x000104bdbf60(auStack_48,lVar1);
      func_0x0001000fecf4(param_1,auStack_48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 105297410; end: 10529756b;  */

long * FUN_105297410(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529756c();
  func_0x0001003b2110(auStack_98,0x113818990);
  FUN_10529dd1c(auStack_88,param_2);
  FUN_1052808e4(auStack_78,param_2 + 0x18);
  FUN_105297a50(auStack_68,param_2 + 0x30);
  func_0x000105282930(auStack_58,param_2 + 0x80);
  FUN_105297728(auStack_48,param_2 + 0x90);
  func_0x000104bdb9bc(&lStack_90,auStack_98,auStack_88,5);
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_88 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  plVar4 = &lStack_90;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_90;
  func_0x000104bdbf78();
  func_0x0001052978e4(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x50;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  plVar4 = plVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_10529756c;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_c0 = lVar8;
  plStack_b8 = plVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818998 & 1) == 0) {
    plVar4 = (long *)0x113818998;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_PublicGroup");
      pcVar5 = "groupId";
      func_0x0001003a83dc(auStack_150,"groupId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar5);
      pcVar5 = "groupTitle";
      func_0x0001003a83dc(auStack_158,"groupTitle");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar5);
      pcVar5 = "metadata";
      func_0x0001003a83dc(auStack_160,"metadata");
      FUN_105297ba4();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar5);
      pcVar5 = "activityData";
      func_0x0001003a83dc(auStack_168,"activityData");
      FUN_105282ab4();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar5);
      pcVar5 = "categories";
      func_0x0001003a83dc(auStack_170,"categories");
      FUN_1052977e0();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818988,auStack_148,0,auStack_140,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      plVar4 = (long *)0x113818998;
      ___cxa_guard_release();
    }
  }
  func_0x0001052978e4(uStack_c8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_1b8,(plVar4[1] - *plVar4) / 0x18);
    lVar9 = 0;
    lVar8 = 0x18;
    for (uVar10 = 0; uVar10 < (ulong)((plVar4[1] - *plVar4) / 0x18); uVar10 = uVar10 + 1) {
      FUN_1052808e4(auStack_1c8,*plVar4 + lVar9);
      func_0x00010b9a9020(lStack_1b8 + lVar8,auStack_1c8);
      func_0x00010b9a8d98(auStack_1c8);
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + 0x18;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_1b8);
    plVar4 = &lStack_1b8;
    func_0x000104bddf38(plVar4);
    return plVar4;
  }
  return (long *)0x113818988;
}



/* Entry: 10529756c; end: 105297727;  */

long * FUN_10529756c(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_128 [16];
  long lStack_118;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818998 & 1) == 0) {
    param_1 = (long *)0x113818998;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_PublicGroup");
      pcVar1 = "groupId";
      func_0x0001003a83dc(auStack_b0,"groupId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar1);
      pcVar1 = "groupTitle";
      func_0x0001003a83dc(auStack_b8,"groupTitle");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar1);
      pcVar1 = "metadata";
      func_0x0001003a83dc(auStack_c0,"metadata");
      FUN_105297ba4();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar1);
      pcVar1 = "activityData";
      func_0x0001003a83dc(auStack_c8,"activityData");
      FUN_105282ab4();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar1);
      pcVar1 = "categories";
      func_0x0001003a83dc(auStack_d0,"categories");
      FUN_1052977e0();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818988,auStack_a8,0,auStack_a0,5);
      lVar6 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar6);
        param_2 = (int)uVar3;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = (long *)0x113818998;
      ___cxa_guard_release();
    }
  }
  func_0x0001052978e4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_118,(param_1[1] - *param_1) / 0x18);
    lVar4 = 0;
    lVar6 = 0x18;
    for (uVar5 = 0; uVar5 < (ulong)((param_1[1] - *param_1) / 0x18); uVar5 = uVar5 + 1) {
      FUN_1052808e4(auStack_128,*param_1 + lVar4);
      func_0x00010b9a9020(lStack_118 + lVar6,auStack_128);
      func_0x00010b9a8d98(auStack_128);
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x18;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_118);
    plVar2 = &lStack_118;
    func_0x000104bddf38(plVar2);
    return plVar2;
  }
  return (long *)0x113818988;
}



/* Entry: 105297728; end: 1052977df;  */

void FUN_105297728(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0x18);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0x18); uVar2 = uVar2 + 1) {
    FUN_1052808e4(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x18;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 1052977e0; end: 10529783b;  */

undefined8 FUN_1052977e0(void)

{
  int iVar1;
  
  if ((bRam00000001130cc128 & 1) == 0) {
    iVar1 = 0x130cc128;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bdbd7c();
      func_0x00010b990868(0x1130cc118);
      ___cxa_guard_release(0x1130cc128);
    }
  }
  return 0x1130cc118;
}



/* Entry: 10529783c; end: 1052978f7;  */

void FUN_10529783c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[8] = param_4[2];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_4 + 3);
  uVar2 = param_4[5];
  uVar1 = param_4[4];
  param_1[0xc] = param_4[6];
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[4] = 0;
  uVar2 = param_4[8];
  uVar1 = param_4[7];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_4 + 9);
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  param_1[0x10] = param_5;
  param_1[0x11] = param_6;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  uVar1 = *param_7;
  param_1[0x13] = param_7[1];
  param_1[0x12] = uVar1;
  param_1[0x14] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  return;
}



/* Entry: 1052978f8; end: 105297a1f;  */

void FUN_1052978f8(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010b9a97d0(&lStack_48);
  func_0x000104bdbf60(&uStack_60,lStack_48 + 0x18);
  iVar3 = (int)lStack_48 + 0x28;
  func_0x00010b9a9518();
  func_0x000104bdbf60(&uStack_78,lStack_48 + 0x38);
  cVar1 = (char)lStack_48 + 'H';
  func_0x00010b9a9608();
  iVar4 = (int)lStack_48 + 0x58;
  func_0x00010b9a9518();
  cVar2 = (char)lStack_48 + 'h';
  func_0x00010b9a9608();
  uVar5 = lStack_48 + 0x78;
  FUN_105297a20();
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[2] = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 3) = iVar3;
  param_1[5] = uStack_70;
  param_1[4] = uStack_78;
  param_1[6] = uStack_68;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  *(char *)(param_1 + 7) = cVar1;
  *(int *)((long)param_1 + 0x3c) = iVar4;
  *(char *)(param_1 + 8) = cVar2;
  *(ulong *)((long)param_1 + 0x44) = uVar5 & 0xffffffffff;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  func_0x000104bdbf78(&lStack_48);
  return;
}



/* Entry: 105297a20; end: 105297a4f;  */

ulong FUN_105297a20(ulong param_1)

{
  if (*(byte *)(param_1 + 8) < 2) {
    return 0;
  }
  func_0x00010b9a9518();
  return param_1 & 0xffffffff | 0x100000000;
}



/* Entry: 105297a50; end: 105297ba3;  */

undefined1 * FUN_105297a50(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [32];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  
  func_0x000105297ed8();
  FUN_105297ba4();
  func_0x0001003b2110(auStack_b8,0x1138189a8);
  FUN_1052808e4(auStack_a8,param_2);
  uStack_98 = *(undefined4 *)(param_2 + 0x18);
  uStack_90 = 4;
  FUN_1052808e4(auStack_88,param_2 + 0x20);
  uStack_78 = *(undefined1 *)(param_2 + 0x38);
  uStack_70 = 7;
  uStack_68 = *(undefined4 *)(param_2 + 0x3c);
  uStack_60 = 4;
  uStack_58 = *(undefined1 *)(param_2 + 0x40);
  uStack_50 = 7;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,*(undefined4 *)(param_2 + 0x44));
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_b0,auStack_b8,auStack_a8,7);
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_a8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_b8);
  puVar6 = auStack_b0;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_b0;
  func_0x000104bdbf78();
  func_0x000105297ec0();
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_a8 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_b8);
  __Unwind_Resume(puVar3);
  func_0x000105297ed8();
  if ((bRam00000001138189b0 & 1) == 0) {
    iVar2 = 0x138189b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_1a8,"_djinni_record_PublicGroupConversationMetadata");
      pcVar4 = "topicId";
      func_0x0001003a83dc(auStack_1b0,"topicId");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_1a0,auStack_1b0,pcVar4);
      pcVar4 = "totalParticipantCount";
      func_0x0001003a83dc(auStack_1b8,"totalParticipantCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_188,auStack_1b8,pcVar4);
      pcVar4 = "thumbnailURL";
      func_0x0001003a83dc(auStack_1c0,"thumbnailURL");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_170,auStack_1c0,pcVar4);
      pcVar4 = "isCurrentUserMember";
      func_0x0001003a83dc(auStack_1c8,"isCurrentUserMember");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_158,auStack_1c8,pcVar4);
      pcVar4 = "bannerEligibility";
      func_0x0001003a83dc(auStack_1d0,"bannerEligibility");
      FUN_105297db4();
      func_0x0001003b1b50(auStack_140,auStack_1d0,pcVar4);
      pcVar4 = "isLive";
      func_0x0001003a83dc(auStack_1d8,"isLive");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_128,auStack_1d8,pcVar4);
      pcVar4 = "enterConvHint";
      func_0x0001003a83dc(auStack_1e0,"enterConvHint");
      FUN_105297e0c();
      func_0x0001003b1b50(auStack_110,auStack_1e0,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138189a0,auStack_1a8,0,auStack_1a0,7);
      lVar8 = 0x90;
      do {
        func_0x0001003b1c5c(auStack_1a0 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1e0);
      func_0x0001003a8c94(auStack_1d8);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      func_0x0001003a8c94(auStack_1c0);
      func_0x0001003a8c94(auStack_1b8);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      ___cxa_guard_release(0x1138189b0);
    }
  }
  func_0x000105297ec0();
  if ((bool)uVar1) {
    return (undefined1 *)0x1138189a0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc140 & 1) == 0) {
    iVar5 = 0x130cc140;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cc130);
      ___cxa_guard_release(0x1130cc140);
    }
  }
  return (undefined1 *)0x1130cc130;
}



/* Entry: 105297ba4; end: 105297db3;  */

undefined8 FUN_105297ba4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000105297ed8();
  if ((bRam00000001138189b0 & 1) == 0) {
    iVar1 = 0x138189b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_e8,"_djinni_record_PublicGroupConversationMetadata");
      pcVar2 = "topicId";
      func_0x0001003a83dc(auStack_f0,"topicId");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_e0,auStack_f0,pcVar2);
      pcVar2 = "totalParticipantCount";
      func_0x0001003a83dc(auStack_f8,"totalParticipantCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_c8,auStack_f8,pcVar2);
      pcVar2 = "thumbnailURL";
      func_0x0001003a83dc(auStack_100,"thumbnailURL");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_b0,auStack_100,pcVar2);
      pcVar2 = "isCurrentUserMember";
      func_0x0001003a83dc(auStack_108,"isCurrentUserMember");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_98,auStack_108,pcVar2);
      pcVar2 = "bannerEligibility";
      func_0x0001003a83dc(auStack_110,"bannerEligibility");
      FUN_105297db4();
      func_0x0001003b1b50(auStack_80,auStack_110,pcVar2);
      pcVar2 = "isLive";
      func_0x0001003a83dc(auStack_118,"isLive");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_68,auStack_118,pcVar2);
      pcVar2 = "enterConvHint";
      func_0x0001003a83dc(auStack_120,"enterConvHint");
      FUN_105297e0c();
      func_0x0001003b1b50(auStack_50,auStack_120,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138189a0,auStack_e8,0,auStack_e0,7);
      lVar4 = 0x90;
      do {
        func_0x0001003b1c5c(auStack_e0 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_120);
      func_0x0001003a8c94(auStack_118);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      ___cxa_guard_release(0x1138189b0);
    }
  }
  func_0x000105297ec0();
  if ((bool)in_ZR) {
    return 0x1138189a0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc140 & 1) == 0) {
    iVar1 = 0x130cc140;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc130);
      ___cxa_guard_release(0x1130cc140);
    }
  }
  return 0x1130cc130;
}



/* Entry: 105297db4; end: 105297e0b;  */

undefined8 FUN_105297db4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc140 & 1) == 0) {
    iVar1 = 0x130cc140;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc130);
      ___cxa_guard_release(0x1130cc140);
    }
  }
  return 0x1130cc130;
}



/* Entry: 105297e0c; end: 105297e67;  */

undefined8 FUN_105297e0c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc158 & 1) == 0) {
    iVar1 = 0x130cc158;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105297e68();
      func_0x00010b990784(0x1130cc148);
      ___cxa_guard_release(0x1130cc158);
    }
  }
  return 0x1130cc148;
}



/* Entry: 105297e68; end: 105297ebf;  */

undefined8 FUN_105297e68(void)

{
  int iVar1;
  
  if ((bRam00000001130cc170 & 1) == 0) {
    iVar1 = 0x130cc170;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc160);
      ___cxa_guard_release(0x1130cc170);
    }
  }
  return 0x1130cc160;
}



/* Entry: 105297ec0; end: 105297eeb;  */

void FUN_105297ec0(void)

{
  return;
}



/* Entry: 105297eec; end: 105297ffb;  */

undefined1 * FUN_105297eec(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105297ffc();
  func_0x0001003b2110(auStack_78,0x1138189c0);
  func_0x000105280820(auStack_68,param_2);
  uStack_58 = *(undefined4 *)(param_2 + 0x20);
  uStack_50 = 4;
  uStack_48 = *(undefined1 *)(param_2 + 0x24);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar6 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_70;
  func_0x000104bdbf78();
  FUN_1052981b4(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  __Unwind_Resume(puVar3);
  pcStack_88 = FUN_105297ffc;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar8;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138189c8 & 1) == 0) {
    iVar2 = 0x138189c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_PublicGroupMessageMetadata");
      pcVar4 = "senderDisplayName";
      func_0x0001003a83dc(auStack_100,"senderDisplayName");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "senderType";
      func_0x0001003a83dc(auStack_108,"senderType");
      FUN_10529815c();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "isHidden";
      func_0x0001003a83dc(auStack_110,"isHidden");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138189b8,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      ___cxa_guard_release(0x1138189c8);
    }
  }
  FUN_1052981b4(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138189b8;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc188 & 1) == 0) {
    iVar5 = 0x130cc188;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cc178);
      ___cxa_guard_release(0x1130cc188);
    }
  }
  return (undefined1 *)0x1130cc178;
}



/* Entry: 105297ffc; end: 10529815b;  */

undefined8 FUN_105297ffc(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138189c8 & 1) == 0) {
    iVar1 = 0x138189c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_PublicGroupMessageMetadata");
      pcVar2 = "senderDisplayName";
      func_0x0001003a83dc(auStack_80,"senderDisplayName");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "senderType";
      func_0x0001003a83dc(auStack_88,"senderType");
      FUN_10529815c();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "isHidden";
      func_0x0001003a83dc(auStack_90,"isHidden");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138189b8,auStack_78,0,auStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      ___cxa_guard_release(0x1138189c8);
    }
  }
  FUN_1052981b4(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138189b8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc188 & 1) == 0) {
    iVar1 = 0x130cc188;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc178);
      ___cxa_guard_release(0x1130cc188);
    }
  }
  return 0x1130cc178;
}



/* Entry: 10529815c; end: 1052981b3;  */

undefined8 FUN_10529815c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc188 & 1) == 0) {
    iVar1 = 0x130cc188;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc178);
      ___cxa_guard_release(0x1130cc188);
    }
  }
  return 0x1130cc178;
}



/* Entry: 1052981b4; end: 1052981c7;  */

void FUN_1052981b4(void)

{
  return;
}



/* Entry: 1052981c8; end: 1052982db;  */

undefined8 *
FUN_1052981c8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_520;
  undefined8 *puStack_518;
  undefined1 auStack_510 [8];
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined1 auStack_4b8 [8];
  undefined1 auStack_4b0 [8];
  undefined1 auStack_4a8 [8];
  undefined1 auStack_4a0 [8];
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [8];
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined8 uStack_2b8;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  undefined4 uStack_258;
  undefined2 uStack_250;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined1 uStack_1d8;
  undefined2 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052982dc();
  func_0x0001003b2110(auStack_68,0x1138189d8);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  FUN_10529840c(auStack_48,param_2 + 2);
  func_0x000104bdb9bc(&uStack_60,auStack_68,auStack_58,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = &uStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_60;
  func_0x000104bdbf78();
  FUN_1052984fc(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar9 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar5 = (int)puVar6;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_78 = FUN_1052982dc;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar9;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138189e0 & 1) == 0) {
    puVar6 = (undefined8 *)0x1138189e0;
    ___cxa_guard_acquire();
    if ((int)puVar6 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_QuotedMessage");
      pcVar4 = "status";
      func_0x0001003a83dc(auStack_d8,"status");
      FUN_10529842c();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_e0,"content");
      FUN_105298484();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar8 = 0;
      param_5 = 2;
      func_0x000104bdbd44(0x1138189d0,auStack_d0,0,auStack_c8,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar9);
        iVar5 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar6 = (undefined8 *)0x1138189e0;
      ___cxa_guard_release();
    }
  }
  FUN_1052984fc(uStack_98);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138189d0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar6 + 0x45) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar6;
  }
  uStack_138 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105298770();
  func_0x0001003b2110(auStack_278,0x1136b9a78);
  func_0x000108b80a1c(auStack_268,puVar6);
  uStack_258 = *(undefined4 *)(puVar6 + 3);
  uStack_250 = 4;
  func_0x00010528cbb4(auStack_248,puVar6 + 4);
  func_0x000105290520(auStack_238,puVar6 + 8);
  FUN_105290534(auStack_228,puVar6 + 0xc);
  FUN_10529dd1c(auStack_218,puVar6 + 0xf);
  uStack_200 = 5;
  uStack_208 = puVar6[0x12];
  uStack_1f8 = puVar6[0x13];
  uStack_1f0 = 5;
  FUN_10529dd1c(auStack_1e8,puVar6 + 0x14);
  uStack_1d0 = 7;
  uStack_1d8 = *(undefined1 *)(puVar6 + 0x17);
  uStack_1c8 = puVar6[0x18];
  uStack_1c0 = 5;
  func_0x000105280820(auStack_1b8,puVar6 + 0x19);
  FUN_105282834(auStack_1a8,puVar6 + 0x1d);
  func_0x00010528cba0(auStack_198,puVar6 + 0x20);
  if (*(char *)((long)puVar6 + 0x144) == '\x01') {
    uStack_188 = CONCAT44(uStack_188._4_4_,*(undefined4 *)(puVar6 + 0x28));
    uStack_180 = 4;
  }
  else {
    uStack_188 = 0;
    uStack_180 = 1;
  }
  uStack_17f = 0;
  func_0x00010528cbdc(auStack_178,puVar6 + 0x29);
  func_0x0001052905e0(auStack_168,puVar6 + 0x2d);
  func_0x0001052905f4(auStack_158,puVar6 + 0x33);
  FUN_105292f00(auStack_148,puVar6 + 0x38);
  uVar8 = 0x13;
  func_0x000104bdb9bc(&uStack_270,auStack_278,auStack_268);
  lVar9 = 0x120;
  do {
    func_0x00010b9a8d98(auStack_268 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_278);
  puVar6 = &uStack_270;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = &uStack_270;
  func_0x000104bdbf78();
  FUN_105298d98(uStack_138);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_148;
  lVar9 = -0x130;
  do {
    func_0x00010b9a8d98(puVar3);
    uVar7 = (undefined4)uVar8;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_278);
  __Unwind_Resume();
  uStack_2b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9a68 & 1) == 0) {
    puVar2 = (undefined8 *)0x1136b9a68;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_488,"_djinni_record_QuotedMessageContent");
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_490,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_480,auStack_490,pcVar4);
      pcVar4 = "contentType";
      func_0x0001003a83dc(auStack_498,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_468,auStack_498,pcVar4);
      pcVar4 = "remoteMediaReferences";
      func_0x0001003a83dc(auStack_4a0,"remoteMediaReferences");
      FUN_10528cd00();
      func_0x0001003b1b50(auStack_450,auStack_4a0,pcVar4);
      pcVar4 = "localMediaReferences";
      func_0x0001003a83dc(auStack_4a8,"localMediaReferences");
      FUN_105290608();
      func_0x0001003b1b50(auStack_438,auStack_4a8,pcVar4);
      pcVar4 = "thumbnailIndexLists";
      func_0x0001003a83dc(auStack_4b0,"thumbnailIndexLists");
      FUN_105290664();
      func_0x0001003b1b50(auStack_420,auStack_4b0,pcVar4);
      pcVar4 = "conversationId";
      func_0x0001003a83dc(auStack_4b8,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_408,auStack_4b8,pcVar4);
      pcVar4 = "messageId";
      func_0x0001003a83dc(auStack_4c0,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_3f0,auStack_4c0,pcVar4);
      pcVar4 = "orderKey";
      func_0x0001003a83dc(&uStack_4c8,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_3d8,&uStack_4c8,pcVar4);
      pcVar4 = "senderId";
      func_0x0001003a83dc(&uStack_4d0,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_3c0,&uStack_4d0,pcVar4);
      pcVar4 = "isSaved";
      func_0x0001003a83dc(&uStack_4d8,"isSaved");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3a8,&uStack_4d8,pcVar4);
      pcVar4 = "createdAt";
      func_0x0001003a83dc(&puStack_4e0,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_390,&puStack_4e0,pcVar4);
      pcVar4 = "analyticsMessageId";
      func_0x0001003a83dc(&uStack_4e8,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_378,&uStack_4e8,pcVar4);
      pcVar4 = "openedBy";
      func_0x0001003a83dc(&uStack_4f0,"openedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_360,&uStack_4f0,pcVar4);
      pcVar4 = "messageTypeMetadata";
      func_0x0001003a83dc(&puStack_4f8);
      FUN_10528cca4();
      func_0x0001003b1b50(auStack_348,&puStack_4f8,pcVar4);
      pcVar4 = "snapPostOpenViewingState";
      func_0x0001003a83dc(&puStack_500,"snapPostOpenViewingState");
      FUN_105292f20();
      func_0x0001003b1b50(auStack_330,&puStack_500,pcVar4);
      pcVar4 = "snapModeInfo";
      func_0x0001003a83dc(&uStack_508);
      FUN_10528cdb8();
      func_0x0001003b1b50(auStack_318,&uStack_508,pcVar4);
      pcVar4 = "publicGroupMessageMetadata";
      func_0x0001003a83dc(auStack_510);
      FUN_1052906c0();
      func_0x0001003b1b50(auStack_300,auStack_510,pcVar4);
      pcVar4 = "massSnapMessageMetadata";
      func_0x0001003a83dc(&puStack_518);
      FUN_10529071c();
      func_0x0001003b1b50(auStack_2e8,&puStack_518,pcVar4);
      pcVar4 = "pollMetadata";
      func_0x0001003a83dc(&uStack_520);
      FUN_105292f7c();
      func_0x0001003b1b50(auStack_2d0,&uStack_520,pcVar4);
      puVar3 = auStack_480;
      puVar6 = (undefined8 *)0x0;
      param_5 = 0x13;
      func_0x000104bdbd44(0x1136b9a70,auStack_488,0,puVar3,0x13);
      lVar9 = 0x1b0;
      do {
        func_0x0001003b1c5c(auStack_480 + lVar9);
        uVar7 = SUB84(puVar3,0);
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(&uStack_520);
      func_0x0001003a8c94(&puStack_518);
      func_0x0001003a8c94(auStack_510);
      func_0x0001003a8c94(&uStack_508);
      func_0x0001003a8c94(&puStack_500);
      func_0x0001003a8c94(&puStack_4f8);
      func_0x0001003a8c94(&uStack_4f0);
      func_0x0001003a8c94(&uStack_4e8);
      func_0x0001003a8c94(&puStack_4e0);
      func_0x0001003a8c94(&uStack_4d8);
      func_0x0001003a8c94(&uStack_4d0);
      func_0x0001003a8c94(&uStack_4c8);
      func_0x0001003a8c94(auStack_4c0);
      func_0x0001003a8c94(auStack_4b8);
      func_0x0001003a8c94(auStack_4b0);
      func_0x0001003a8c94(auStack_4a8);
      func_0x0001003a8c94(auStack_4a0);
      func_0x0001003a8c94(auStack_498);
      func_0x0001003a8c94(auStack_490);
      func_0x0001003a8c94(auStack_488);
      puVar2 = (undefined8 *)0x1136b9a68;
      ___cxa_guard_release();
    }
  }
  FUN_105298d98(uStack_2b8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1136b9a70;
  }
  ___stack_chk_fail();
  if ((int)puVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar8 = *puVar6;
  puVar2[1] = puVar6[1];
  *puVar2 = uVar8;
  puVar2[2] = puVar6[2];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar2 + 3) = uVar7;
  func_0x000100699ef0(puVar2 + 4,param_5);
  func_0x00010069957c(puVar2 + 8,param_6);
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  uVar8 = *param_7;
  puVar2[0xd] = param_7[1];
  puVar2[0xc] = uVar8;
  puVar2[0xe] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  uVar8 = *param_8;
  puVar2[0x10] = param_8[1];
  puVar2[0xf] = uVar8;
  puVar2[0x11] = param_8[2];
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  puVar2[0x12] = param_9;
  puVar2[0x13] = uStack_520;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x14] = 0;
  uVar8 = *puStack_518;
  puVar2[0x15] = puStack_518[1];
  puVar2[0x14] = uVar8;
  puVar2[0x16] = puStack_518[2];
  *puStack_518 = 0;
  puStack_518[1] = 0;
  puStack_518[2] = 0;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  *(undefined1 *)(puVar2 + 0x17) = auStack_510[0];
  puVar2[0x18] = uStack_508;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  if (*(char *)(puStack_500 + 3) == '\x01') {
    uVar10 = puStack_500[1];
    uVar8 = *puStack_500;
    puVar2[0x1b] = puStack_500[2];
    puVar2[0x1a] = uVar10;
    puVar2[0x19] = uVar8;
    puStack_500[1] = 0;
    puStack_500[2] = 0;
    *puStack_500 = 0;
    *(undefined1 *)(puVar2 + 0x1c) = 1;
  }
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  uVar8 = *puStack_4f8;
  puVar2[0x1e] = puStack_4f8[1];
  puVar2[0x1d] = uVar8;
  puVar2[0x1f] = puStack_4f8[2];
  *puStack_4f8 = 0;
  puStack_4f8[1] = 0;
  puStack_4f8[2] = 0;
  func_0x000100699f98(puVar2 + 0x20,uStack_4f0);
  puVar2[0x28] = uStack_4e8;
  uVar8 = *puStack_4e0;
  uVar11 = puStack_4e0[3];
  uVar10 = puStack_4e0[2];
  puVar2[0x2a] = puStack_4e0[1];
  puVar2[0x29] = uVar8;
  puVar2[0x2c] = uVar11;
  puVar2[0x2b] = uVar10;
  func_0x000100699fd4(puVar2 + 0x2d,uStack_4d8);
  func_0x00010069a010(puVar2 + 0x33,uStack_4d0);
  func_0x00010069aaa0(puVar2 + 0x38,uStack_4c8);
  return puVar2;
}


