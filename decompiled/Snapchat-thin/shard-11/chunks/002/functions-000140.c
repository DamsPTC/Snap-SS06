/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082a36a0; end: 1082a36bf;  */

void FUN_1082a36a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001082a36bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -3) + 8))();
  return;
}



/* Entry: 1082a36c0; end: 1082a36ef;  */

long * FUN_1082a36c0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082a36a0(*param_1 + 0xc);
  }
  return param_1;
}



/* Entry: 1082a36f0; end: 1082a3717;  */

undefined8 FUN_1082a36f0(undefined8 param_1)

{
  FUN_1082a309c(param_1,0);
  return param_1;
}



/* Entry: 1082a3718; end: 1082a3743;  */

long * FUN_1082a3718(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001082a3760();
  }
  return param_1;
}



/* Entry: 1082a3744; end: 1082a37af;  */

void FUN_1082a3744(void)

{
  return;
}



/* Entry: 1082a37b0; end: 1082a37e7;  */

void FUN_1082a37b0(void)

{
  undefined1 *unaff_x19;
  
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_1082769ec();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082a37e8; end: 1082a387b;  */

undefined8 FUN_1082a37e8(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000113826ba8 & 1) == 0) {
    iVar2 = 0x13826ba8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10827697c(&uStack_28,0x1000,0x1000);
      uVar1 = uStack_28;
      uStack_28 = 0;
      FUN_1082a3920(&uStack_28);
      uRam0000000113826ba0 = uVar1;
      ___cxa_guard_release(0x113826ba8);
    }
  }
  return uRam0000000113826ba0;
}



/* Entry: 1082a387c; end: 1082a38bf;  */

void FUN_1082a387c(void)

{
  undefined1 *unaff_x19;
  
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_1082769ec();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082a38c0; end: 1082a38f3;  */

void FUN_1082a38c0(void)

{
  undefined1 *unaff_x19;
  
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082a38f4; end: 1082a391f;  */

void FUN_1082a38f4(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1082a3920; end: 1082a3947;  */

undefined8 FUN_1082a3920(undefined8 param_1)

{
  FUN_1082a3948(param_1,0);
  return param_1;
}



/* Entry: 1082a3948; end: 1082a395f;  */

void FUN_1082a3948(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108270280(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a3960; end: 1082a397b;  */

void FUN_1082a3960(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108270280(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a397c; end: 1082a398b;  */

void FUN_1082a397c(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  do {
    bVar3 = bRam0000000113826b98;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113826b98,0x10);
    if (bVar2) {
      bRam0000000113826b98 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
      bVar3 = bRam0000000113826b98;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113826b98,0x10);
      if (bVar2) {
        bRam0000000113826b98 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 1082a398c; end: 1082a3aef;  */

byte * FUN_1082a398c(undefined8 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                    byte *param_5,uint *param_6,long *param_7,uint param_8)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_5[1] = 1;
  param_5[2] = 0;
  uVar3 = *param_6;
  *param_5 = (byte)(uVar3 >> 1) & 1;
  param_5[3] = 0;
  param_5[8] = 0;
  param_5[9] = 0;
  param_5[10] = 0;
  param_5[0xb] = 0;
  if ((uVar3 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_6 + 1);
    *(undefined8 *)(param_5 + 0x14) = *(undefined8 *)(param_6 + 3);
    *(undefined8 *)(param_5 + 0xc) = uVar8;
  }
  uVar4 = uVar3 >> 1 & 0x7f;
  param_5[4] = (byte)uVar3 & 1;
  uVar7 = (ulong)(param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU));
  bVar1 = 1;
  uVar3 = uVar4;
  do {
    if (uVar7 == 0) {
      return param_5;
    }
    plVar2 = (long *)*param_7;
    if (param_5[4] == 1) {
      uStack_48 = *(undefined8 *)(param_5 + 0x14);
      uVar8 = *(undefined8 *)(param_5 + 0xc);
      uVar6 = *(uint *)(plVar2 + 6);
      if ((uVar6 >> 2 & 1) == 0) {
        param_5[4] = 0;
        if ((uVar3 & 1) != 0) goto LAB_1082a3a30;
        uVar3 = 0;
LAB_1082a3a44:
        uVar4 = 0;
        goto LAB_1082a3a94;
      }
      uStack_50 = uVar8;
      (**(code **)(*plVar2 + 0x20))(plVar2,&uStack_50);
      bVar5 = 0;
      *(int *)(param_5 + 0xc) = (int)uVar8;
      *(undefined4 *)(param_5 + 0x10) = param_2;
      *(undefined4 *)(param_5 + 0x14) = param_3;
      *(float *)(param_5 + 0x18) = param_4;
      *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
      uVar3 = (uint)(param_4 == 1.0);
      *param_5 = param_4 == 1.0;
      bVar1 = 1;
      param_5[1] = 1;
      param_5[2] = 0;
      uVar4 = uVar3;
LAB_1082a3ac4:
      param_5[3] = bVar5;
    }
    else {
      param_5[4] = 0;
      uVar6 = *(uint *)(plVar2 + 6);
      if ((uVar4 & 1) == 0) goto LAB_1082a3a44;
LAB_1082a3a30:
      if ((uVar6 >> 1 & 1) == 0) {
        uVar3 = 0;
        uVar4 = 0;
        *param_5 = 0;
      }
      else {
        uVar4 = 1;
      }
LAB_1082a3a94:
      if ((bool)(bVar1 & (uVar6 & 1) == 0)) {
        bVar1 = 0;
        param_5[1] = 0;
      }
      if ((uVar6 & 0x18) != 0) {
        param_5[2] = 1;
      }
      if ((uVar6 >> 6 & 1) != 0) {
        bVar5 = 1;
        goto LAB_1082a3ac4;
      }
    }
    param_7 = param_7 + 1;
    uVar7 = uVar7 - 1;
  } while( true );
}



/* Entry: 1082a3af0; end: 1082a3b47;  */

undefined8 * FUN_1082a3af0(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = *param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_108279a90(param_1,param_2 + 1);
  FUN_108279a90(param_1 + 1,param_2 + 2);
  return param_1;
}



/* Entry: 1082a3b48; end: 1082a3b77;  */

void FUN_1082a3b48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_2[1] = 0;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



/* Entry: 1082a3b78; end: 1082a3bbb;  */

/* WARNING: Possible PIC construction at 0x0001082a3ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082a3ba8) */

undefined8 * FUN_1082a3b78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (param_1[2] != 0)) {
    FUN_1082a36a0(param_1[2] + 0xc);
  }
  puVar1 = param_1 + 1;
  func_0x00010827fe08();
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010827fc1c();
  }
  return param_1;
}



/* Entry: 1082a3bbc; end: 1082a3c97;  */

long * FUN_1082a3bbc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (((1 < (*(byte *)(param_2 + 3) ^ *(byte *)(param_1 + 3))) ||
      (plVar3 = (long *)*param_1, (plVar3 != (long *)0x0) != (*param_2 != 0))) ||
     (plVar1 = (long *)param_1[1], (plVar1 != (long *)0x0) != (param_2[1] != 0))) {
    return (long *)0x0;
  }
  if (plVar3 != (long *)0x0) {
    FUN_108295f54();
    if ((int)plVar3 == 0) {
      return plVar3;
    }
    plVar1 = (long *)param_1[1];
  }
  if ((plVar1 != (long *)0x0) && (FUN_108295f54(plVar1,param_2[1]), (int)plVar1 == 0)) {
    return plVar1;
  }
  plVar3 = (long *)param_1[2];
  if ((long *)param_1[2] == (long *)0x0) {
    if (param_2[2] == 0) {
      return (long *)0x1;
    }
    FUN_1082ca66c();
    plVar3 = plVar1;
  }
  plVar2 = (long *)param_2[2];
  if ((long *)param_2[2] == (long *)0x0) {
    FUN_1082ca66c();
    plVar2 = plVar1;
  }
  if ((((int)plVar3[1] == (int)plVar2[1]) && ((char)plVar3[2] == (char)plVar2[2])) &&
     (*(char *)((long)plVar3 + 0x11) == *(char *)((long)plVar2 + 0x11))) {
                    /* WARNING: Could not recover jumptable at 0x0001082a3cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x40))();
    return plVar3;
  }
  return (long *)0x0;
}



/* Entry: 1082a3c98; end: 1082a3cdb;  */

long * FUN_1082a3c98(long *param_1,long param_2)

{
  if ((((int)param_1[1] == *(int *)(param_2 + 8)) && ((char)param_1[2] == *(char *)(param_2 + 0x10))
      ) && (*(char *)((long)param_1 + 0x11) == *(char *)(param_2 + 0x11))) {
                    /* WARNING: Could not recover jumptable at 0x0001082a3cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 1082a3cdc; end: 1082a3f83;  */

uint FUN_1082a3cdc(long *param_1,undefined8 param_2,uint param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 *param_8)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 extraout_w8;
  uint uVar4;
  undefined4 extraout_w8_00;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lStack_90;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  char cStack_6c;
  char cStack_6b;
  byte bStack_6a;
  char cStack_69;
  char cStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = 0;
  if (param_3 != 2) {
    uVar3 = 2;
  }
  FUN_1082a398c(&cStack_6c,param_2,param_1,*param_1 != 0);
  lVar7 = param_1[1];
  uVar5 = (uint)(lVar7 != 0);
  if (lVar7 == 0) {
    uVar10 = 0;
  }
  else {
    uVar3 = -(*(uint *)(lVar7 + 0x30) & 1) & uVar3;
    uVar10 = (uint)((*(uint *)(lVar7 + 0x30) & 0x18) != 0);
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x40) != 0)) {
    uVar5 = *(uint *)(*(long *)(param_4 + 0x40) + 0x30);
    uVar3 = uVar3 & -(uVar5 & 1);
    if ((uVar5 & 0x18) != 0) {
      uVar10 = 1;
    }
    uVar5 = 1;
  }
  if (0 < iStack_64) {
    param_8[1] = uStack_58;
    *param_8 = uStack_60;
  }
  uVar6 = 0;
  if (iStack_64 != 0) {
    uVar6 = 0x100;
  }
  if (param_3 == 1) {
    uVar5 = 1;
  }
  uStack_70 = param_3;
  if (param_3 != 2) {
    uStack_70 = uVar5;
  }
  uVar5 = (uint)param_1[2];
  bVar2 = cStack_68 == '\x01';
  if (bVar2) {
    FUN_1082a3fcc();
    uStack_84 = extraout_w8;
    if (!bVar2) {
      uStack_84 = 1;
    }
  }
  else {
    uStack_84 = 0;
    if (cStack_6c != '\0') {
      uStack_84 = 2;
    }
    uStack_80 = 0;
    uStack_78 = 0;
  }
  FUN_1082b6fc4();
  if ((uVar5 >> 4 & 1) == 0) {
    if (cStack_69 == '\x01') {
      uVar4 = 0;
      if (*(char *)(*(long *)(param_6 + 0x10) + 0x5c) == '\0') {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 4;
  }
  uVar3 = uVar3 & uVar5;
  uVar1 = uVar4 << 1;
  if ((uVar5 & 0x20) != 0) {
    uVar1 = 8;
  }
  if ((uVar5 >> 2 & 1) == 0) {
    if (cStack_6b == '\0') {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar10 | bStack_6a & 1 | uVar6 | uVar4 | uVar5 & 0xc0 | uVar1;
    plVar8 = (long *)*param_1;
    if ((iStack_64 == 0) || (*param_1 = 0, plVar9 = plVar8, plVar8 == (long *)0x0))
    goto LAB_1082a3ee4;
  }
  else {
    plVar9 = (long *)*param_1;
    uVar3 = uVar4 | uVar5 & 0xc0 | uVar1 | uVar10 | uVar3 | 0x200;
    plVar8 = (long *)0x0;
    if (plVar9 == (long *)0x0) goto LAB_1082a3ee4;
    *param_1 = 0;
  }
  (**(code **)(*plVar9 + 8))(plVar9);
  plVar8 = (long *)*param_1;
LAB_1082a3ee4:
  bVar2 = cStack_68 == '\x01';
  if (bVar2) {
    FUN_1082a3fcc(param_1[2]);
    uStack_84 = extraout_w8_00;
    if (!bVar2) {
      uStack_84 = 1;
    }
  }
  else {
    uStack_84 = 0;
    if (cStack_6c != '\0') {
      uStack_84 = 2;
    }
    uStack_80 = 0;
    uStack_78 = 0;
  }
  FUN_1082b703c(&lStack_90);
  lVar7 = lStack_90;
  lStack_90 = 0;
  param_1[2] = lVar7;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  uVar5 = 0x20;
  if (plVar8 != (long *)0x0) {
    uVar5 = 0x30;
  }
  FUN_1082a36c0(&lStack_90);
  return uVar5 | uVar3;
}



/* Entry: 1082a3f84; end: 1082a3fcb;  */

void FUN_1082a3f84(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  if (*param_1 != 0) {
    FUN_108296038(*param_1,param_2);
  }
  if (param_1[1] == 0) {
    return;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a35a10;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_2;
  FUN_1082960a8(param_1[1],&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_10826e20c();
  func_0x000108298c3c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar2 != (undefined ***)0x0) && (*(int *)(unaff_x20 + 8) == 0x2d)) {
      func_0x0001082987ac(pppuVar1,unaff_x20);
    }
    plVar4 = *(long **)(unaff_x20 + 0x18);
    for (lVar3 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      if (*plVar4 != 0) {
        FUN_1082960a8(*plVar4,pppuVar1);
      }
      plVar4 = plVar4 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1082a3fcc; end: 1082a3fe7;  */

void FUN_1082a3fcc(void)

{
  return;
}



/* Entry: 1082a3fe8; end: 1082a4047;  */

void FUN_1082a3fe8(void)

{
  long unaff_x21;
  undefined **ppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001082a47a8();
  FUN_1082a4048();
  lStack_40 = 0;
  if (unaff_x21 != 0) {
    lStack_40 = unaff_x21 + 0x88;
  }
  ppuStack_48 = &PTR_FUN_110a32f68;
  uStack_38 = 0;
  FUN_1082a40c8(&ppuStack_48);
  *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x21 + 0x90) << 2;
  return;
}



/* Entry: 1082a4048; end: 1082a40c7;  */

void FUN_1082a4048(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined4 uStack_124;
  undefined1 auStack_c8 [136];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = auStack_c8;
  uStack_38 = 0x4400000000;
  uStack_30 = 0;
  puVar4 = auStack_c8;
  FUN_1082a4454();
  ppuVar2 = &puStack_40;
  FUN_108266274();
  func_0x0001082a47d0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_108266274(&puStack_40);
  __Unwind_Resume(ppuVar2);
  plVar6 = *(long **)(puVar4 + 0x98);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  func_0x0001082a4760();
  func_0x0001082a4774();
  (*extraout_x8)(ppuVar2,8);
  (**(code **)(*plVar6 + 0x18))(plVar6,param_3[2],ppuVar2);
  FUN_10829c54c(plVar6,ppuVar2);
  uVar1 = *(uint *)(plVar6 + 8);
  func_0x0001082a4774();
  func_0x0001082a47b8();
  (*extraout_x8_00)();
  for (uVar7 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
    plVar3 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6,uVar7);
    FUN_1082a45e8(*(undefined4 *)((long)plVar3 + 0x7c),(short)plVar3[0x10]);
    func_0x0001082a4774();
    func_0x0001082a47b8();
    (*extraout_x8_01)();
    (**(code **)(*param_3 + 0x80))(param_3,ppuVar2,*plVar3,plVar3[1],plVar3 + 2);
  }
  plVar6 = *(long **)(puVar4 + 0x88);
  func_0x0001082a4774();
  (*extraout_x8_02)(ppuVar2,2);
  func_0x0001082a4774();
  (*extraout_x8_03)(ppuVar2,1);
  for (lVar8 = 0; lVar8 < (int)plVar6[0xf]; lVar8 = lVar8 + 1) {
    FUN_1082a448c(*(undefined8 *)(plVar6[10] + lVar8 * 8),param_3,ppuVar2);
  }
  plVar3 = plVar6;
  FUN_10826c364();
  func_0x0001082a47c4();
  func_0x0001082a4760();
  func_0x0001082a4774();
  func_0x0001082a4788();
  if (*plVar6 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uStack_124 = (undefined4)plVar6[1];
    FUN_1082a45e8(*(undefined4 *)(*plVar6 + 0x8c),*(undefined2 *)((long)plVar6 + 0xc));
    func_0x0001082a4774();
    func_0x0001082a47b8();
    (*extraout_x8_04)();
    puVar5 = &uStack_124;
  }
  FUN_1082b6f30(plVar3,param_3[2],ppuVar2,puVar5,*(uint *)(plVar6 + 3) >> 1 & 1);
  func_0x0001082a4774();
  func_0x0001082a4780(ppuVar2,0x10);
  func_0x0001082a4774();
  func_0x0001082a4780(ppuVar2,1);
  func_0x0001082a4774();
  (*extraout_x8_05)(ppuVar2,1);
  FUN_108265ed0(ppuVar2);
  return;
}



/* Entry: 1082a40c8; end: 1082a435f;  */

void FUN_1082a40c8(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined4 uStack_54;
  
  plVar4 = *(long **)(param_2 + 0x98);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_1082a4760();
  func_0x0001082a4774();
  (*extraout_x8)(param_1,8);
  (**(code **)(*plVar4 + 0x18))(plVar4,param_3[2],param_1);
  FUN_10829c54c(plVar4,param_1);
  uVar1 = *(uint *)(plVar4 + 8);
  func_0x0001082a4774();
  func_0x0001082a47b8();
  (*extraout_x8_00)();
  for (uVar5 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar5; uVar5 = uVar5 + 1) {
    plVar2 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4,uVar5);
    FUN_1082a45e8(*(undefined4 *)((long)plVar2 + 0x7c),(short)plVar2[0x10]);
    func_0x0001082a4774();
    func_0x0001082a47b8();
    (*extraout_x8_01)();
    (**(code **)(*param_3 + 0x80))(param_3,param_1,*plVar2,plVar2[1],plVar2 + 2);
  }
  plVar4 = *(long **)(param_2 + 0x88);
  func_0x0001082a4774();
  (*extraout_x8_02)(param_1,2);
  func_0x0001082a4774();
  (*extraout_x8_03)(param_1,1);
  for (lVar6 = 0; lVar6 < (int)plVar4[0xf]; lVar6 = lVar6 + 1) {
    FUN_1082a448c(*(undefined8 *)(plVar4[10] + lVar6 * 8),param_3,param_1);
  }
  plVar2 = plVar4;
  FUN_10826c364();
  func_0x0001082a47c4();
  FUN_1082a4760();
  func_0x0001082a4774();
  func_0x0001082a4788();
  if (*plVar4 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uStack_54 = (undefined4)plVar4[1];
    FUN_1082a45e8(*(undefined4 *)(*plVar4 + 0x8c),*(undefined2 *)((long)plVar4 + 0xc));
    func_0x0001082a4774();
    func_0x0001082a47b8();
    (*extraout_x8_04)();
    puVar3 = &uStack_54;
  }
  FUN_1082b6f30(plVar2,param_3[2],param_1,puVar3,*(uint *)(plVar4 + 3) >> 1 & 1);
  func_0x0001082a4774();
  func_0x0001082a4780(param_1,0x10);
  func_0x0001082a4774();
  func_0x0001082a4780(param_1,1);
  func_0x0001082a4774();
  (*extraout_x8_05)(param_1,1);
  FUN_108265ed0(param_1);
  return;
}



/* Entry: 1082a4360; end: 1082a444f;  */

undefined1 ** FUN_1082a4360(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 **ppuVar4;
  undefined **ppuStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [136];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = auStack_d8;
  uStack_48 = 0x4400000000;
  uStack_40 = 0;
  uStack_e8 = 0;
  ppuStack_f8 = &PTR_FUN_110a361e0;
  lStack_e0 = 0x1138270b0;
  ppuStack_f0 = &puStack_50;
  FUN_1082a40c8(&ppuStack_f8,param_2,param_3);
  FUN_108265ed0(&ppuStack_f8);
  if ((lStack_e0 != 0) && (in_ZR = lStack_e0 == 0x1138270b0, !(bool)in_ZR)) {
    piVar1 = (int *)(lStack_e0 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_e0;
  FUN_1082a4720(&ppuStack_f8);
  ppuVar4 = &puStack_50;
  FUN_108266274();
  func_0x0001082a47d0(uStack_38);
  if ((bool)in_ZR) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  FUN_1082a4720(&ppuStack_f8);
  FUN_108266274(&puStack_50);
  __Unwind_Resume();
  *ppuVar4 = (undefined1 *)&PTR_FUN_110a361e0;
  FUN_1083a3c7c(ppuVar4 + 3);
  *ppuVar4 = (undefined1 *)&PTR_FUN_110a32f68;
  return ppuVar4;
}



/* Entry: 1082a4450; end: 1082a4453;  */

undefined8 * FUN_1082a4450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a361e0;
  FUN_1083a3c7c(param_1 + 3);
  *param_1 = &PTR_FUN_110a32f68;
  return param_1;
}



/* Entry: 1082a4454; end: 1082a448b;  */

long FUN_1082a4454(long param_1,long param_2)

{
  FUN_108273358(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}



/* Entry: 1082a448c; end: 1082a45e7;  */

void FUN_1082a448c(void)

{
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar1;
  
  func_0x0001082a47a8();
  func_0x0001082a47c4();
  func_0x0001082a4760();
  func_0x0001082a4774();
  func_0x0001082a4788();
  func_0x0001082a4774();
  func_0x0001082a4780();
  if (*(int *)(unaff_x21 + 8) == 0x2d) {
    FUN_1082a45e8(*(undefined4 *)(*(long *)(unaff_x21 + 0x40) + 0x8c),
                  *(undefined2 *)(unaff_x21 + 0x4c));
    func_0x0001082a4774();
    func_0x0001082a47b8();
    func_0x0001082a4780();
    (**(code **)(*unaff_x20 + 0x80))();
  }
  FUN_1082a4638();
  func_0x0001082a4774();
  func_0x0001082a47b8();
  (*extraout_x8)();
  for (lVar1 = 0; lVar1 < *(int *)(unaff_x21 + 0x20); lVar1 = lVar1 + 1) {
    if (*(long *)(*(long *)(unaff_x21 + 0x18) + lVar1 * 8) == 0) {
      (**(code **)(*unaff_x19 + 0x18))();
      func_0x0001082a4774();
      (*extraout_x8_00)();
    }
    else {
      FUN_1082a448c();
    }
  }
  return;
}



/* Entry: 1082a45e8; end: 1082a4637;  */

uint FUN_1082a45e8(int param_1,uint param_2)

{
  code *pcVar1;
  
  if (param_1 - 1U < 3) {
    return *(uint *)(&UNK_10df14814 + (ulong)(param_1 - 1U) * 4) | (param_2 & 0xffff) << 4;
  }
  FUN_10841076c(&UNK_10f480c72);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082a4638);
  (*pcVar1)();
}



/* Entry: 1082a4638; end: 1082a4697;  */

void FUN_1082a4638(long *param_1)

{
  long unaff_x21;
  long lVar1;
  long *plVar2;
  
  func_0x0001082a47a8();
  (**(code **)(*param_1 + 0x30))();
  plVar2 = *(long **)(unaff_x21 + 0x18);
  for (lVar1 = (long)*(int *)(unaff_x21 + 0x20) << 3; lVar1 != 0; lVar1 = lVar1 + -8) {
    if (*plVar2 != 0) {
      FUN_1082a4638();
    }
    plVar2 = plVar2 + 1;
  }
  return;
}



/* Entry: 1082a4698; end: 1082a46ab;  */

void FUN_1082a4698(void)

{
  FUN_1082a4720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a46ac; end: 1082a46f3;  */

void FUN_1082a46ac(long param_1)

{
  FUN_1082660fc();
  FUN_1083a3a90(param_1 + 0x18,&UNK_10f483a82);
  return;
}



/* Entry: 1082a46f4; end: 1082a471f;  */

void FUN_1082a46f4(long param_1)

{
  FUN_1083a3a90(param_1 + 0x18,&UNK_10f63757c);
  return;
}



/* Entry: 1082a4720; end: 1082a475f;  */

undefined8 * FUN_1082a4720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a361e0;
  FUN_1083a3c7c(param_1 + 3);
  *param_1 = &PTR_FUN_110a32f68;
  return param_1;
}



/* Entry: 1082a4760; end: 1082a47e3;  */

void FUN_1082a4760(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001082a4770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x18))();
  return;
}



/* Entry: 1082a47e4; end: 1082a4963;  */

int * FUN_1082a47e4(int *param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined1 param_8,int param_9,int param_10
                   )

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  
  plVar4 = (long *)*param_3;
  (**(code **)(*plVar4 + 0x28))();
  *(bool *)(param_1 + 1) = *(char *)((long)plVar4 + 9) != '\0';
  plVar4 = (long *)(param_1 + 2);
  FUN_108283324(plVar4,*param_3 + 0x20);
  param_1[0x1e] = (int)param_3[1];
  func_0x0001082a49a4();
  (*extraout_x8)();
  if ((*(byte *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) >> 4 & 1) == 0) {
    bVar3 = false;
  }
  else {
    func_0x0001082a49a4();
    (*extraout_x8_00)();
    if ('\x01' < (char)plVar4[1]) {
      plVar4 = (long *)*param_3;
      (**(code **)(*plVar4 + 0x18))();
      if (plVar4 != (long *)0x0) {
        bVar3 = true;
        goto LAB_1082a48bc;
      }
    }
    func_0x0001082a49a4();
    (*extraout_x8_01)();
    bVar3 = (char)plVar4[1] == '\x01';
  }
LAB_1082a48bc:
  *(bool *)(param_1 + 0x1f) = bVar3;
  func_0x0001082a49a4();
  (*extraout_x8_02)();
  cVar2 = (char)plVar4[1];
  param_1[0x20] = (int)cVar2;
  *(undefined8 *)(param_1 + 0x22) = param_5;
  *(undefined8 *)(param_1 + 0x24) = param_6;
  *(undefined8 *)(param_1 + 0x26) = param_7;
  *(undefined1 *)(param_1 + 0x28) = param_8;
  param_1[0x29] = param_9;
  param_1[0x2a] = param_10;
  *param_1 = (int)cVar2;
  if ((param_4 != 0) && (cVar2 == '\x01')) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 2);
    iVar1 = (int)plVar4;
    if (*(int *)((long)param_2 + 0x44) <= (int)plVar4) {
      iVar1 = *(int *)((long)param_2 + 0x44);
    }
    *param_1 = iVar1;
  }
  return param_1;
}



/* Entry: 1082a4964; end: 1082a49b3;  */

void FUN_1082a4964(uint *param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined2 uVar11;
  
  *param_1 = 0x1f;
  puVar1 = *(undefined **)(param_2 + 0x90);
  bVar2 = *(byte *)(*(long *)(param_2 + 0x88) + 0x40);
  if (puVar1 == &UNK_10df14cb4) {
    if ((bVar2 >> 4 & 1) == 0) {
      return;
    }
    uVar8 = 1;
  }
  else {
    uVar8 = (ulong)(bVar2 >> 4 & 1);
  }
  uVar9 = *(ushort *)(puVar1 + uVar8 * 2);
  if ((uVar9 >> 4 & 1) == 0) {
    uVar10 = *(ushort *)(puVar1 + uVar8 * 2 + 0xe);
    uVar6 = uVar10 & uVar9;
    *param_1 = (uint)uVar6;
    if ((uVar6 & 1) != 0) {
      return;
    }
    if ((uVar9 & 1) == 0) {
      FUN_1082b1008(param_1 + 1,puVar1 + 4,uVar8,8);
    }
    else {
      *(undefined2 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((uVar10 & 1) != 0) {
      *(undefined2 *)((long)param_1 + 0x16) = 0;
      *(undefined8 *)((long)param_1 + 0xe) = 0;
      return;
    }
    param_1 = (uint *)((long)param_1 + 0xe);
    puVar7 = (ushort *)(puVar1 + 0x12);
  }
  else {
    *param_1 = (uint)uVar9;
    if ((uVar9 & 1) != 0) {
      return;
    }
    param_1 = param_1 + 1;
    puVar7 = (ushort *)(puVar1 + 4);
  }
  uVar10 = 0x80;
  uVar9 = 0x80;
  bVar2 = (byte)puVar7[3];
  bVar3 = *(byte *)((long)puVar7 + 7);
  bVar4 = bVar2;
  if (bVar2 <= bVar3) {
    bVar4 = bVar3;
  }
  if (bVar4 < 8) {
    uVar9 = puVar7[4] & 0x7f;
  }
  else if (10 < bVar4) {
    uVar9 = puVar7[4] & 0x7f | 0x80;
  }
  uVar5 = (&UNK_10df14cd0)[bVar3];
  *(ushort *)(param_1 + 2) = uVar9;
  *(undefined1 *)((long)param_1 + 7) = uVar5;
  *(undefined *)((long)param_1 + 6) = (&UNK_10df14cd0)[bVar2];
  uVar6 = puVar7[1];
  if (((int)uVar8 == 0) || (3 < uVar6)) {
    uVar10 = puVar7[2] & 0x7f;
  }
  else {
    if (uVar6 == 0) {
      *(undefined2 *)(param_1 + 1) = 0x80;
      uVar11 = 6;
      goto LAB_1082b10b0;
    }
    uVar10 = puVar7[2] & 0x7f | 0x80;
  }
  *(ushort *)(param_1 + 1) = uVar10;
  uVar11 = *(undefined2 *)(&UNK_10df14cde + (ulong)uVar6 * 2);
LAB_1082b10b0:
  *(undefined2 *)((long)param_1 + 2) = uVar11;
  *(ushort *)param_1 = (*puVar7 | 0x80) & (uVar10 | uVar9);
  return;
}



/* Entry: 1082a49b4; end: 1082a49e7;  */

long FUN_1082a49b4(long param_1)

{
  code *extraout_x8;
  
  func_0x0001082a6958(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8)();
  FUN_1082a5d4c(param_1 + 8);
  return param_1;
}



/* Entry: 1082a49e8; end: 1082a4a43;  */

uint FUN_1082a49e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_1082a68ec();
  uVar1 = (uint)uVar2;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    FUN_1082b3484(param_3,param_1,param_2);
    FUN_1082a5e98(param_1,param_3);
  }
  return uVar1 ^ 1;
}



/* Entry: 1082a4a44; end: 1082a4acf;  */

void FUN_1082a4a44(int *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_28;
  
  FUN_1082b3484(param_2,param_1,param_3 + 0x48);
  iVar1 = param_1[1];
  uStack_28 = param_2;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1082a5ef4(param_1,iVar2);
  }
  FUN_1082a5fe0(param_1,&uStack_28);
  return;
}



/* Entry: 1082a4ad0; end: 1082a4ad7;  */

void FUN_1082a4ad0(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  code *extraout_x8;
  long lStack_50;
  long lStack_48;
  
  if (param_3 == 0) {
    param_3 = param_1;
    func_0x0001082a6af4();
  }
  lStack_48 = 0;
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x0001082a6958();
    (*extraout_x8)();
    if (lVar1 != 0) {
      FUN_1082a5c94(&lStack_50,*(undefined8 *)(lVar1 + 0x80),param_2);
      lVar1 = lStack_48;
      lStack_48 = lStack_50;
      lStack_50 = 0;
      FUN_1082a5e88(lVar1);
      FUN_1082837dc(&lStack_50);
    }
  }
  if (param_3 != 0) {
    FUN_1082a66d4(param_1,param_2);
    FUN_1082b34e4(param_3);
  }
  if (lStack_48 != 0) {
    func_0x0001082a0870();
  }
  func_0x0001082a6b6c();
  return;
}



/* Entry: 1082a4ad8; end: 1082a4b3f;  */

void FUN_1082a4ad8(ulong *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  FUN_1082a68ec();
  if (((ulong)param_2 & 1) == 0) {
    func_0x0001082a6af4();
    if (param_2 != (long *)0x0) {
      piVar1 = (int *)((long)param_2 + *(long *)(*param_2 + -0x18) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    param_2 = (long *)0x0;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Entry: 1082a4b40; end: 1082a4c47;  */

void FUN_1082a4b40(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_50;
  plVar2 = (long *)*param_3;
  lVar1 = (long)plVar2 + *(long *)(*plVar2 + -0x18);
  (**(code **)(*(long *)((long)plVar2 + *(long *)(*plVar2 + -0x18)) + 0x68))();
  if (lVar1 == 0) {
    func_0x0001082a69a8();
    lVar3 = *param_3;
    *param_3 = 0;
    uStack_50 = 0;
    if (lVar3 != 0) {
      func_0x0001082a6924();
      uStack_50 = extraout_x8_01;
    }
    func_0x0001082a6958(*(undefined8 *)(param_2 + 0x10));
    (*extraout_x8_02)();
    func_0x0001082a6aa4();
    FUN_1082b3084(lVar1,&uStack_50,param_4);
  }
  else {
    func_0x0001082a6a20();
    lVar3 = *param_3;
    *param_3 = 0;
    uStack_48 = 0;
    if (lVar3 != 0) {
      func_0x0001082a6924();
      uStack_48 = extraout_x8;
    }
    func_0x0001082a6958(*(undefined8 *)(param_2 + 0x10));
    (*extraout_x8_00)();
    func_0x0001082a6aa4();
    FUN_1082b3b3c(lVar1,&uStack_48,param_4);
    lVar1 = lVar1 + 0x30;
    puVar4 = &uStack_48;
  }
  *param_1 = lVar1;
  FUN_10826b5e8(puVar4);
  return;
}



/* Entry: 1082a4c48; end: 1082a4d17;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082a4c48(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plStack_50;
  long alStack_48 [3];
  
  lVar1 = param_2;
  FUN_1082a68ec();
  if ((int)lVar1 == 0) {
    FUN_1082a4ad8(alStack_48 + 2,param_2,param_3);
    if (alStack_48[2] != 0) {
      *param_1 = alStack_48[2];
      return;
    }
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x0001082a68fc();
    if (lVar1 != 0) {
      plVar2 = *(long **)(lVar1 + 0x78);
      FUN_1082a4d18(plVar2,param_3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x58))();
        alStack_48[1] = 0;
        plStack_50 = plVar2;
        FUN_1082a4b40(alStack_48,param_2,&plStack_50,param_4);
        FUN_108283764(&plStack_50);
        *param_1 = alStack_48[0];
        FUN_108283764(alStack_48 + 1);
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082a4d18; end: 1082a4d4f;  */

long FUN_1082a4d18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  FUN_1082a5db4();
  if (lVar1 != 0) {
    func_0x0001082aba34(param_1,lVar1);
  }
  return lVar1;
}



/* Entry: 1082a4d50; end: 1082a4f07;  */

/* WARNING: Possible PIC construction at 0x0001082a51ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082a51f0) */
/* WARNING: Removing unreachable block (ram,0x0001082a52a4) */
/* WARNING: Removing unreachable block (ram,0x0001082a51f4) */
/* WARNING: Removing unreachable block (ram,0x0001082a51f8) */
/* WARNING: Removing unreachable block (ram,0x0001082a5200) */
/* WARNING: Removing unreachable block (ram,0x0001082a5238) */
/* WARNING: Removing unreachable block (ram,0x0001082a5244) */
/* WARNING: Removing unreachable block (ram,0x0001082a52ac) */
/* WARNING: Removing unreachable block (ram,0x0001082a52b4) */
/* WARNING: Removing unreachable block (ram,0x0001082a5250) */

long ** FUN_1082a4d50(long *param_1,long **param_2,long *param_3,undefined4 param_4,long *param_5,
                     long *param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar14;
  long **pplVar15;
  undefined8 uVar16;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long **pplStack_340;
  long **pplStack_338;
  undefined1 **ppuStack_330;
  undefined8 uStack_328;
  long *plStack_308;
  long alStack_300 [3];
  uint uStack_2e8;
  long *plStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [56];
  long lStack_298;
  long *plStack_290;
  long *plStack_288;
  long alStack_280 [3];
  long *plStack_268;
  undefined1 auStack_260 [4];
  char cStack_25c;
  char cStack_208;
  undefined8 uStack_1e8;
  undefined1 *puStack_180;
  code *pcStack_178;
  long *plStack_168;
  uint *puStack_160;
  undefined4 *puStack_158;
  long **pplStack_150;
  uint uStack_144;
  undefined1 auStack_140 [96];
  char cStack_e0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  char cStack_70;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_144 = (uint)param_5;
  plVar12 = (long *)0x1;
  pplVar7 = param_2;
  plVar13 = param_5;
  plVar9 = param_6;
  FUN_1082a4c48(&pplStack_150);
  if (pplStack_150 == (long **)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)((long)param_1 + 0xc) = 0x3210;
  }
  else {
    uVar16 = *(undefined8 *)(param_2[2][2] + 0xb8);
    lVar8 = (long)pplStack_150 + (*pplStack_150)[-3];
    (**(code **)(*(long *)((long)pplStack_150 + (*pplStack_150)[-3]) + 0x28))();
    plVar12 = param_5;
    if (lVar8 != 0) {
      uStack_c8 = 4;
      uStack_c4 = 0;
      cStack_70 = '\0';
      uStack_5c = 0;
      FUN_10828aae8(auStack_140,uVar16,param_5,param_6);
      puStack_160 = &uStack_144;
      puStack_158 = &uStack_c8;
      func_0x0001082a618c(&puStack_160,auStack_140);
      if (cStack_e0 == '\x01') {
        func_0x0001082a6a28();
      }
      in_ZR = cStack_70 == '\x01';
      if ((bool)in_ZR) {
        func_0x0001082a6908(&uStack_c8);
      }
      plVar12 = (long *)(ulong)uStack_144;
    }
    param_3 = (long *)((long)pplStack_150 + (*pplStack_150)[-3] + 0x20);
    func_0x00010828a9ac();
    plStack_168 = (long *)0x0;
    *param_1 = (long)pplStack_150 + (*pplStack_150)[-3];
    *(undefined4 *)(param_1 + 1) = param_4;
    *(short *)((long)param_1 + 0xc) = (short)uVar16;
    pplVar7 = &plStack_168;
    FUN_1082764bc();
  }
  func_0x0001082a693c(uStack_58);
  if ((bool)in_ZR) {
    return pplVar7;
  }
  ___stack_chk_fail();
  if (cStack_e0 == '\x01') {
    func_0x0001082a6a28();
  }
  uVar4 = cStack_70 == '\x01';
  if ((bool)uVar4) {
    func_0x0001082a6908(&uStack_c8);
  }
  pplVar15 = pplStack_150;
  func_0x0001082a615c();
  func_0x0001082a6a3c();
  pcStack_178 = FUN_1082a4f08;
  plVar11 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x0001082a6988();
  uStack_1e8 = extraout_x8;
  func_0x0001082a68ec();
  if ((int)pplVar15 == 0) {
    uVar2 = *(uint *)(param_3 + 5);
    uVar4 = uVar2 == 1;
    if (((((int)uVar2 < 1) ||
         (uVar3 = *(uint *)((long)param_3 + 0x2c), bVar5 = uVar2 >> 0x1d == 0,
         bVar6 = uVar3 >> 0x1d == 0, uVar4 = (0 < (int)uVar3 && bVar5) && bVar6,
         (0 >= (int)uVar3 || !bVar5) || !bVar6)) || ((int)param_3[4] == 0)) ||
       (*(int *)((long)param_3 + 0x24) == 0)) goto LAB_1082a4f70;
    pplVar15 = &plStack_308;
    plVar11 = param_3;
    FUN_10833043c();
    func_0x0001082a6914();
    (*extraout_x8_00)();
    if ((pplVar15 == (long **)0x0) && ((*param_3 == 0 || (*(char *)(*param_3 + 0x59) == '\0')))) {
      FUN_1083309b4(&plStack_308);
      plVar11 = alStack_300;
      uVar16 = 0x1082a51f0;
      plStack_360 = param_3;
      goto FUN_1082a53bc;
    }
    if (((int)plVar12 == 0) || (plVar9 = plStack_2e0, func_0x0001082a53d8(), (int)plVar9 == 0)) {
      pplVar15 = (long **)(ulong)uStack_2e8;
      func_0x0001082a53e0();
      func_0x0001082a6b9c();
      func_0x0001082a6b34();
      plVar12 = plStack_2e0;
      if (cStack_25c != '\x01') goto LAB_1082a5164;
      func_0x0001082a6b00();
      plStack_268 = (long *)0x0;
      param_3 = (long *)0x40;
      __Znwm();
      func_0x0001082a6a74();
      FUN_10833043c();
      plStack_268 = param_3;
      func_0x0001082a6ab0(0x2c);
      plVar11 = alStack_280;
      pplVar15 = pplVar7;
      FUN_1082a53fc(&plStack_288,pplVar7,plVar11,auStack_260,plStack_2e0,0,0,0,plVar13);
      func_0x0001082a6a54();
      func_0x0001082a6b0c();
      plVar9 = plStack_288;
    }
    else {
      pplVar15 = (long **)(ulong)uStack_2e8;
      func_0x0001082a53e0();
      func_0x0001082a6b9c();
      func_0x0001082a6b34();
      if (cStack_25c == '\x01') {
        func_0x0001082a637c(&plStack_288,auStack_2d8);
        if (plStack_288 == (long *)0x0) {
          plVar9 = alStack_300;
          plVar11 = (long *)0x0;
          FUN_1083686ac(plVar9,0,1);
          plVar14 = plStack_288;
          plStack_288 = plVar9;
          FUN_1082a61c4(plVar14);
          if (plStack_288 != (long *)0x0) goto LAB_1082a5038;
          plStack_290 = (long *)0x0;
        }
        else {
LAB_1082a5038:
          func_0x0001082a6b00();
          func_0x0001082a637c(&lStack_298,&plStack_288);
          plStack_268 = (long *)0x0;
          plVar12 = (long *)0x48;
          __Znwm();
          *plVar12 = (long)&PTR_FUN_110a362a8;
          FUN_10833043c(plVar12 + 1,auStack_2d0);
          lVar8 = lStack_298;
          lStack_298 = 0;
          plVar12[8] = lVar8;
          plStack_268 = plVar12;
          func_0x0001082a6ab0(0x29);
          plVar11 = alStack_280;
          FUN_1082a53fc(&plStack_290,pplVar7,plVar11,auStack_260,plStack_2e0,1,2,0,1);
          func_0x0001082a6a54();
          FUN_1082a5520(auStack_2d0);
          plVar13 = plStack_2e0;
        }
        pplVar15 = &plStack_288;
        FUN_1082a619c();
        plVar9 = plStack_290;
      }
      else {
LAB_1082a5164:
        plVar9 = (long *)0x0;
      }
    }
    uVar4 = cStack_208 == '\x01';
    if ((bool)uVar4) {
      func_0x0001082a6908(auStack_260);
    }
    if (plVar9 == (long *)0x0) {
LAB_1082a51b0:
      plVar14 = (long *)0x0;
    }
    else {
      func_0x0001082a6914();
      (*extraout_x8_01)();
      if (pplVar15 != (long **)0x0) {
        func_0x0001082a6b74();
        uVar10 = 0;
        FUN_1082b239c();
        if ((uVar10 & 1) == 0) goto LAB_1082a51b0;
      }
      plVar14 = plVar9;
      plVar9 = (long *)0x0;
    }
    *pplStack_150 = plVar14;
    func_0x0001082a6a6c();
    pplVar15 = &plStack_308;
    FUN_108330548();
    plVar14 = param_3;
  }
  else {
LAB_1082a4f70:
    *pplStack_150 = (long *)0x0;
    plVar14 = param_3;
  }
  func_0x0001082a693c(uStack_1e8);
  if ((bool)uVar4) {
    return pplVar15;
  }
  ___stack_chk_fail();
  FUN_1082a619c(auStack_260);
  param_3 = (long *)0x0;
  FUN_108330548();
  uVar16 = 0x1082a53bc;
  func_0x0001082a6950();
  pplStack_150 = pplVar15;
  plStack_360 = plVar14;
FUN_1082a53bc:
  lVar8 = *plVar11;
  lVar1 = plVar11[1];
  pplVar15 = &plStack_390;
  uStack_370 = 0;
  uStack_388 = 0;
  plStack_390 = (long *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  plStack_358 = plVar12;
  plStack_350 = plVar13;
  plStack_348 = plVar9;
  pplStack_340 = pplVar7;
  pplStack_338 = pplStack_150;
  ppuStack_330 = &puStack_180;
  uStack_328 = uVar16;
  FUN_108330de8();
  if (((ulong)param_3 & 1) == 0) {
    pplVar15 = (long **)0x0;
  }
  else {
    FUN_108384180(&plStack_390,plVar11 + 2,lVar8,lVar1,0,0);
  }
  func_0x0001083313bc();
  return pplVar15;
}



/* Entry: 1082a4f08; end: 1082a53bb;  */

/* WARNING: Possible PIC construction at 0x0001082a51ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082a51f0) */
/* WARNING: Removing unreachable block (ram,0x0001082a52a4) */
/* WARNING: Removing unreachable block (ram,0x0001082a51f4) */
/* WARNING: Removing unreachable block (ram,0x0001082a51f8) */
/* WARNING: Removing unreachable block (ram,0x0001082a5200) */
/* WARNING: Removing unreachable block (ram,0x0001082a5238) */
/* WARNING: Removing unreachable block (ram,0x0001082a5244) */
/* WARNING: Removing unreachable block (ram,0x0001082a52ac) */
/* WARNING: Removing unreachable block (ram,0x0001082a52b4) */
/* WARNING: Removing unreachable block (ram,0x0001082a5250) */

undefined1 *
FUN_1082a4f08(undefined1 *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined1 in_ZR;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  long **pplVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar12;
  undefined8 *unaff_x19;
  undefined8 *puVar13;
  long **unaff_x20;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 auStack_198 [8];
  long alStack_190 [3];
  uint uStack_178;
  long *plStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [56];
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  long alStack_110 [3];
  long *plStack_f8;
  undefined1 auStack_f0 [4];
  char cStack_ec;
  char cStack_98;
  undefined8 uStack_78;
  
  plVar11 = param_2;
  func_0x0001082a6988();
  uStack_78 = extraout_x8;
  func_0x0001082a68ec();
  if ((int)param_1 == 0) {
    uVar3 = *(uint *)(param_2 + 5);
    in_ZR = uVar3 == 1;
    if (((((int)uVar3 < 1) ||
         (uVar4 = *(uint *)((long)param_2 + 0x2c), bVar6 = uVar3 >> 0x1d == 0,
         bVar7 = uVar4 >> 0x1d == 0, in_ZR = (0 < (int)uVar4 && bVar6) && bVar7,
         (0 >= (int)uVar4 || !bVar6) || !bVar7)) || ((int)param_2[4] == 0)) ||
       (*(int *)((long)param_2 + 0x24) == 0)) goto LAB_1082a4f70;
    puVar8 = auStack_198;
    plVar11 = param_2;
    FUN_10833043c();
    func_0x0001082a6914();
    (*extraout_x8_00)();
    if ((puVar8 == (undefined1 *)0x0) && ((*param_2 == 0 || (*(char *)(*param_2 + 0x59) == '\0'))))
    {
      FUN_1083309b4(auStack_198);
      plVar11 = alStack_190;
      plStack_1f0 = param_2;
      goto FUN_1082a53bc;
    }
    if (((int)param_3 == 0) || (plVar12 = plStack_170, func_0x0001082a53d8(), (int)plVar12 == 0)) {
      pplVar9 = (long **)(ulong)uStack_178;
      func_0x0001082a53e0();
      func_0x0001082a6b9c();
      func_0x0001082a6b34();
      param_3 = plStack_170;
      if (cStack_ec != '\x01') goto LAB_1082a5164;
      func_0x0001082a6b00();
      plStack_f8 = (long *)0x0;
      param_2 = (long *)0x40;
      __Znwm();
      func_0x0001082a6a74();
      FUN_10833043c();
      plStack_f8 = param_2;
      func_0x0001082a6ab0(0x2c);
      plVar11 = alStack_110;
      FUN_1082a53fc(&plStack_118);
      func_0x0001082a6a54();
      func_0x0001082a6b0c();
      param_5 = plStack_118;
    }
    else {
      pplVar9 = (long **)(ulong)uStack_178;
      func_0x0001082a53e0();
      func_0x0001082a6b9c();
      func_0x0001082a6b34();
      if (cStack_ec == '\x01') {
        func_0x0001082a637c(&plStack_118,auStack_168);
        if (plStack_118 == (long *)0x0) {
          plVar12 = alStack_190;
          plVar11 = (long *)0x0;
          FUN_1083686ac(plVar12,0,1);
          plVar5 = plStack_118;
          plStack_118 = plVar12;
          FUN_1082a61c4(plVar5);
          if (plStack_118 != (long *)0x0) goto LAB_1082a5038;
          plStack_120 = (long *)0x0;
        }
        else {
LAB_1082a5038:
          func_0x0001082a6b00();
          func_0x0001082a637c(&lStack_128,&plStack_118);
          plStack_f8 = (long *)0x0;
          param_3 = (long *)0x48;
          __Znwm();
          *param_3 = (long)&PTR_FUN_110a362a8;
          FUN_10833043c(param_3 + 1,auStack_160);
          lVar1 = lStack_128;
          lStack_128 = 0;
          param_3[8] = lVar1;
          plStack_f8 = param_3;
          func_0x0001082a6ab0(0x29);
          plVar11 = alStack_110;
          FUN_1082a53fc(&plStack_120);
          func_0x0001082a6a54();
          FUN_1082a5520(auStack_160);
          param_4 = plStack_170;
        }
        unaff_x20 = &plStack_118;
        FUN_1082a619c();
        param_5 = plStack_120;
      }
      else {
LAB_1082a5164:
        unaff_x20 = pplVar9;
        param_5 = (long *)0x0;
      }
    }
    in_ZR = cStack_98 == '\x01';
    if ((bool)in_ZR) {
      func_0x0001082a6908(auStack_f0);
    }
    if (param_5 == (long *)0x0) {
LAB_1082a51b0:
      plVar12 = (long *)0x0;
    }
    else {
      func_0x0001082a6914();
      (*extraout_x8_01)();
      if (unaff_x20 != (long **)0x0) {
        func_0x0001082a6b74();
        uVar10 = 0;
        FUN_1082b239c();
        if ((uVar10 & 1) == 0) goto LAB_1082a51b0;
      }
      plVar12 = param_5;
      param_5 = (long *)0x0;
    }
    *unaff_x19 = plVar12;
    func_0x0001082a6a6c();
    param_1 = auStack_198;
    FUN_108330548();
    plVar12 = param_2;
  }
  else {
LAB_1082a4f70:
    *unaff_x19 = 0;
    plVar12 = param_2;
  }
  func_0x0001082a693c(uStack_78);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1082a619c(auStack_f0);
  param_2 = (long *)0x0;
  FUN_108330548();
  func_0x0001082a6950();
  plStack_1f0 = plVar12;
FUN_1082a53bc:
  lVar1 = *plVar11;
  lVar2 = plVar11[1];
  puVar13 = &uStack_220;
  uStack_200 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  plStack_1e8 = param_3;
  plStack_1e0 = param_4;
  plStack_1d8 = param_5;
  FUN_108330de8();
  if (((ulong)param_2 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    FUN_108384180(&uStack_220,plVar11 + 2,lVar1,lVar2,0,0);
  }
  func_0x0001083313bc();
  return (undefined1 *)puVar13;
}



/* Entry: 1082a53bc; end: 1082a53fb;  */

undefined1 * FUN_1082a53bc(ulong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar3 = &uStack_70;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_108330de8(param_1,&uStack_70);
  if ((param_1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_108384180(&uStack_70,param_2 + 2,uVar1,uVar2,0,0);
  }
  func_0x0001083313bc();
  return (undefined1 *)puVar3;
}



/* Entry: 1082a53fc; end: 1082a551f;  */

void FUN_1082a53fc(long *param_1,long param_2,undefined8 param_3,int *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = param_2;
  FUN_1082a68ec();
  lVar6 = 0;
  if (((int)lVar4 == 0) && ((*(byte *)(param_4 + 1) & 1) != 0)) {
    plVar7 = *(long **)(param_2 + 0x10);
    if (*param_4 == *(int *)(plVar7[2] + 0xc)) {
      iVar1 = *(int *)(*(long *)(plVar7[2] + 0xb8) + 0x3c);
      bVar2 = true;
      bVar3 = false;
      if ((int)param_5 <= iVar1) {
        iVar5 = (int)((ulong)param_5 >> 0x20);
        bVar3 = SBORROW4(iVar1,iVar5);
        bVar2 = iVar1 - iVar5 < 0;
      }
      if (bVar2 == bVar3) {
        func_0x0001082a69a8();
        (**(code **)(*plVar7 + 0x18))();
        FUN_1082b2f40(lVar4,param_3,param_4,param_5,param_6,param_7,param_9,(undefined1)param_10,
                      param_10._1_1_,param_8,param_11,plVar7 == (long *)0x0,param_12,param_13);
        lVar6 = lVar4;
        goto LAB_1082a54ec;
      }
    }
    lVar6 = 0;
  }
LAB_1082a54ec:
  *param_1 = lVar6;
  return;
}



/* Entry: 1082a5520; end: 1082a5547;  */

undefined8 * FUN_1082a5520(undefined8 *param_1)

{
  FUN_1082a619c(param_1 + 7);
  FUN_1082a619c(param_1 + 6);
  FUN_10810a400(param_1 + 3);
  FUN_1083312f4(*param_1);
  return param_1;
}



/* Entry: 1082a5548; end: 1082a5747;  */

void FUN_1082a5548(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
                  undefined1 param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13,
                  uint param_14,undefined4 param_15)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar6;
  long *plVar7;
  undefined4 in_stack_ffffffffffffff50;
  undefined2 uVar8;
  ulong uStack_68;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffff50 >> 0x10);
  uVar1 = param_2;
  uStack_68 = param_4;
  FUN_1082a68ec();
  if ((uVar1 & 1) == 0) {
    plVar6 = *(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0xb8);
    uVar2 = param_3;
    func_0x00010828398c();
    if ((int)uVar2 == 0) {
      if ((int)param_7 != 0) {
        uVar1 = param_4;
        FUN_108368974(param_4,param_4 >> 0x20);
        param_7 = (ulong)((int)uVar1 != 0);
      }
      plVar7 = plVar6;
      FUN_10828a6b0(plVar6,&uStack_68,param_3,param_5,param_6,param_7,1);
      if ((int)plVar7 != 0) {
        if ((int)param_5 == 0) {
          func_0x0001082a69a8();
          lVar5 = *(long *)(param_2 + 0x10);
          func_0x0001082a6958();
          (*extraout_x8_00)();
          FUN_1082b2e8c(plVar7,param_3,param_4,param_7,param_7,param_8,param_9,param_10,param_14,
                        param_15,lVar5 == 0);
        }
        else {
          plVar3 = plVar6;
          (**(code **)(*plVar6 + 0x48))(plVar6,param_6,param_3);
          plVar4 = plVar6;
          (**(code **)(*plVar6 + 0x90))();
          plVar7 = plVar4;
          func_0x0001082a6a20();
          lVar5 = *(long *)(param_2 + 0x10);
          func_0x0001082a6958();
          (*extraout_x8)();
          FUN_1082b3908(plVar7,plVar6,param_3,param_4,(ulong)plVar3 & 0xffffffff,param_7,param_7,
                        param_8,CONCAT31(CONCAT21(uVar8,param_10),(char)param_9),
                        (uint)plVar4 | param_14,param_15,lVar5 == 0,param_12,param_13);
          plVar7 = plVar7 + 6;
        }
        goto LAB_1082a56b8;
      }
    }
  }
  plVar7 = (long *)0x0;
LAB_1082a56b8:
  *param_1 = (ulong)plVar7;
  return;
}



/* Entry: 1082a5748; end: 1082a58e7;  */

void FUN_1082a5748(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                  undefined4 param_5,long *param_6,undefined1 *param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 in_ZR;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  ulong *extraout_x8_03;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 in_stack_fffffffffffffe74;
  undefined2 uVar15;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined8 auStack_e8 [2];
  long alStack_d8 [11];
  char cStack_80;
  undefined8 uStack_68;
  
  uVar15 = (undefined2)((uint)in_stack_fffffffffffffe74 >> 0x10);
  puVar7 = param_2;
  plVar13 = param_3;
  uVar11 = param_4;
  plVar12 = param_6;
  uVar8 = param_5;
  func_0x0001082a6988();
  uVar9 = SUB84(plVar12,0);
  uStack_68 = extraout_x8;
  func_0x0001082a68ec();
  if ((int)param_1 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    func_0x0001082a68fc();
    param_1 = (long *)0x0;
    if (lVar6 == 0) goto LAB_1082a5860;
    plVar13 = *(long **)(*(long *)(*(long *)(unaff_x20 + 0x10) + 0x10) + 0xb8);
    param_1 = *(long **)(lVar6 + 0x80);
    func_0x0001082835f0(alStack_d8,param_2);
    (**(code **)(*plVar13 + 0x48))(plVar13,param_3,alStack_d8);
    in_ZR = cStack_80 == '\x01';
    if ((bool)in_ZR) {
      func_0x0001082a6908(alStack_d8);
    }
    uVar8 = param_5;
    FUN_1082aeda8(alStack_d8,param_1,param_2,plVar13);
    if (alStack_d8[0] == 0) {
      *unaff_x19 = 0;
    }
    else {
      if (*param_6 != 0) {
        func_0x0001082a69e4();
        func_0x0001082a6964();
        func_0x0001082a69a0();
      }
      func_0x0001082a6a20();
      func_0x0001082a6a94();
      auStack_e8[0] = 0;
      if (extraout_x8_00 != 0) {
        func_0x0001082a6924();
        auStack_e8[0] = extraout_x8_01;
      }
      func_0x0001082a6914();
      (*extraout_x8_02)();
      func_0x0001082a6aa4();
      param_2 = auStack_e8;
      plVar13 = (long *)0x0;
      param_1 = param_6;
      FUN_1082b3b3c(param_6,param_2,0);
      *unaff_x19 = (long)(param_6 + 6);
      func_0x0001082a6a04();
    }
    func_0x0001082a69b0();
  }
  else {
LAB_1082a5860:
    param_4 = uVar11;
    param_2 = puVar7;
    *unaff_x19 = 0;
  }
  func_0x0001082a693c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082a697c();
  func_0x0001082a69b0();
  func_0x0001082a6950();
  plVar12 = param_1;
  func_0x0001082a68ec();
  if (((ulong)plVar12 & 1) == 0) {
    plVar14 = (long *)param_1[2];
    iVar1 = *(int *)(*(long *)(plVar14[2] + 0xb8) + 0x30);
    bVar4 = true;
    bVar5 = false;
    if ((int)param_4 <= iVar1) {
      iVar10 = (int)((ulong)param_4 >> 0x20);
      bVar5 = SBORROW4(iVar1,iVar10);
      bVar4 = iVar1 - iVar10 < 0;
    }
    if (bVar4 == bVar5) {
      uVar3 = (undefined4)auStack_e8[0];
      if (param_7 == (undefined1 *)0x0) {
        plVar12 = (long *)0x120;
        __Znwm();
        FUN_1082a81dc();
      }
      else {
        func_0x0001082a6a20();
        uVar11 = *(undefined8 *)(plVar14[2] + 0xb8);
        uVar2 = *param_7;
        (**(code **)(*plVar14 + 0x18))();
        FUN_1082b3a00(plVar12,uVar11,param_2,plVar13,param_4,uVar8,uVar2,param_8,uStack_f0,
                      CONCAT31(CONCAT21(uVar15,uStack_eb),uStack_ec),uVar9,uVar3,
                      plVar14 == (long *)0x0,&UNK_10f483ae3,0x29);
      }
      goto LAB_1082a5958;
    }
  }
  plVar12 = (long *)0x0;
LAB_1082a5958:
  *extraout_x8_03 = (ulong)plVar12;
  return;
}



/* Entry: 1082a58e8; end: 1082a5a7b;  */

void FUN_1082a58e8(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined1 *param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 in_stack_ffffffffffffff64;
  undefined2 uVar9;
  
  uVar9 = (undefined2)((uint)in_stack_ffffffffffffff64 >> 0x10);
  uVar7 = param_2;
  FUN_1082a68ec();
  if ((uVar7 & 1) == 0) {
    plVar8 = *(long **)(param_2 + 0x10);
    iVar1 = *(int *)(*(long *)(plVar8[2] + 0xb8) + 0x30);
    bVar3 = true;
    bVar4 = false;
    if ((int)param_5 <= iVar1) {
      iVar5 = (int)((ulong)param_5 >> 0x20);
      bVar4 = SBORROW4(iVar1,iVar5);
      bVar3 = iVar1 - iVar5 < 0;
    }
    if (bVar3 == bVar4) {
      if (param_8 == (undefined1 *)0x0) {
        uVar7 = 0x120;
        __Znwm();
        FUN_1082a81dc();
      }
      else {
        func_0x0001082a6a20();
        uVar6 = *(undefined8 *)(plVar8[2] + 0xb8);
        uVar2 = *param_8;
        (**(code **)(*plVar8 + 0x18))();
        FUN_1082b3a00(uVar7,uVar6,param_3,param_4,param_5,param_6,uVar2,param_9,param_10,
                      CONCAT31(CONCAT21(uVar9,param_11._1_1_),(undefined1)param_11),param_7,param_12
                      ,plVar8 == (long *)0x0,&UNK_10f483ae3,0x29);
      }
      goto LAB_1082a5958;
    }
  }
  uVar7 = 0;
LAB_1082a5958:
  *param_1 = uVar7;
  return;
}



/* Entry: 1082a5a7c; end: 1082a5bbb;  */

void FUN_1082a5a7c(long *param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  if (*(char *)(param_3 + 4) == '\x01') {
    (**(code **)(*param_7 + 0x90))();
    if (param_4 == 0) {
      func_0x0001082a69a8();
      FUN_1082b2f40();
    }
    else {
      func_0x0001082a6a20();
      FUN_1082b3a00();
      param_7 = param_7 + 6;
    }
  }
  else {
    param_7 = (long *)0x0;
  }
  *param_1 = (long)param_7;
  return;
}



/* Entry: 1082a5bbc; end: 1082a5c93;  */

void FUN_1082a5bbc(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  code *extraout_x8;
  long lStack_50;
  long lStack_48;
  
  if (param_3 == 0) {
    param_3 = param_1;
    func_0x0001082a6af4();
  }
  lStack_48 = 0;
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x0001082a6958();
    (*extraout_x8)();
    if (lVar1 != 0) {
      FUN_1082a5c94(&lStack_50,*(undefined8 *)(lVar1 + 0x80),param_2);
      lVar1 = lStack_48;
      lStack_48 = lStack_50;
      lStack_50 = 0;
      FUN_1082a5e88(lVar1);
      FUN_1082837dc(&lStack_50);
    }
  }
  if (param_3 != 0) {
    if (param_5 == 1) {
      FUN_1082a66d4(param_1,param_2);
    }
    FUN_1082b34e4(param_3);
  }
  if (lStack_48 != 0) {
    func_0x0001082a0870();
  }
  func_0x0001082a6b6c();
  return;
}



/* Entry: 1082a5c94; end: 1082a5cc7;  */

void FUN_1082a5c94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1082aedd4(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x0001082a6b6c();
  return;
}



/* Entry: 1082a5cc8; end: 1082a5d4b;  */

void FUN_1082a5cc8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  for (lVar4 = 0; lVar4 < *(int *)(param_1 + 4); lVar4 = lVar4 + 1) {
    if (*(int *)(*(long *)(param_1 + 8) + lVar3) != 0) {
      plVar2 = *(long **)(*(long *)(param_1 + 8) + lVar3 + 8);
      plVar1 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_1082a5bbc(param_1,plVar1,plVar2,0,0);
    }
    lVar3 = lVar3 + 0x10;
  }
  func_0x0001082a6884(param_1,&stack0xffffffffffffffd0);
  FUN_1082a5d4c(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1082a5d4c; end: 1082a5d6f;  */

undefined8 FUN_1082a5d4c(undefined8 param_1)

{
  FUN_1082a5d70(param_1,0);
  return param_1;
}



/* Entry: 1082a5d70; end: 1082a5db3;  */

void FUN_1082a5d70(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082a5db4; end: 1082a5dcf;  */

void FUN_1082a5db4(void)

{
  FUN_1082a5dd0();
  return;
}



/* Entry: 1082a5dd0; end: 1082a5e3b;  */

int * FUN_1082a5dd0(void)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  ulong unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  
  func_0x0001082a69b8();
  uVar4 = extraout_x8;
  while( true ) {
    if ((int)uVar4 <= unaff_w21) {
      return (int *)0x0;
    }
    piVar1 = (int *)(*(long *)(unaff_x20 + 8) + (long)unaff_w23 * 0x10);
    iVar2 = *piVar1;
    if (iVar2 == 0) break;
    if ((unaff_w22 == iVar2) && (uVar3 = unaff_x19, FUN_1082a5e3c(), (uVar3 & 1) != 0)) {
      return piVar1 + 2;
    }
    func_0x0001082a6ac8();
    uVar4 = extraout_x8_00;
  }
  return (int *)0x0;
}



/* Entry: 1082a5e3c; end: 1082a5e87;  */

bool FUN_1082a5e3c(long *param_1,long *param_2)

{
  long *plVar1;
  
  param_1 = (long *)*param_1;
  if (*param_1 != *(long *)*param_2) {
    return false;
  }
  plVar1 = param_1 + 1;
  _memcmp(plVar1,(long *)*param_2 + 1,(ulong)*(ushort *)((long)param_1 + 6) - 8);
  return (int)plVar1 == 0;
}



/* Entry: 1082a5e88; end: 1082a5e97;  */

void FUN_1082a5e88(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082a5e98; end: 1082a5ef3;  */

void FUN_1082a5e98(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_28 = param_2;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1082a5ef4(param_1,iVar2);
  }
  FUN_1082a5fe0(param_1,&uStack_28);
  return;
}



/* Entry: 1082a5ef4; end: 1082a5fdf;  */

void FUN_1082a5ef4(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  plVar4 = (long *)(param_1 + 2);
  lStack_38 = *plVar4;
  *plVar4 = 0;
  puVar2 = (undefined8 *)((long)param_2 * 0x10 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)param_2 * 0x10) || param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = (long)param_2;
  if (param_2 != 0) {
    lVar3 = (long)param_2 << 4;
    do {
      puVar2 = puVar2 + 2;
      *(undefined4 *)puVar2 = 0;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  FUN_1082a60b8(plVar4);
  for (lVar3 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 4 != lVar3;
      lVar3 = lVar3 + 0x10) {
    if (*(int *)(lStack_38 + lVar3) != 0) {
      FUN_1082a5fe0(param_1,lStack_38 + lVar3 + 8);
    }
  }
  FUN_1082a5d4c(&lStack_38);
  return;
}



/* Entry: 1082a5fe0; end: 1082a60b7;  */

void FUN_1082a5fe0(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  param_2 = (undefined8 *)*param_2;
  func_0x0001082a68fc();
  iVar8 = 0;
  uVar3 = *(uint *)*param_2;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  iVar7 = param_1[1];
  uVar9 = iVar7 - 1U & uVar3;
  while( true ) {
    if (iVar7 <= iVar8) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar9 * 0x10);
    uVar4 = *puVar1;
    if (uVar4 == 0) break;
    if (uVar3 == uVar4) {
      uVar5 = *(undefined8 *)(puVar1 + 2);
      func_0x0001082a68fc(uVar5);
      puVar6 = param_2;
      FUN_1082a5e3c(param_2,uVar5);
      if (((ulong)puVar6 & 1) != 0) {
        func_0x0001082a6b88();
        return;
      }
      iVar7 = param_1[1];
    }
    iVar2 = 0;
    if ((int)uVar9 < 1) {
      iVar2 = iVar7;
    }
    uVar9 = (uVar9 + iVar2) - 1;
    iVar8 = iVar8 + 1;
  }
  func_0x0001082a6b88();
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1082a60b8; end: 1082a60cf;  */

void FUN_1082a60b8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082a60d0; end: 1082a60eb;  */

void FUN_1082a60d0(void)

{
  FUN_1082a60ec();
  return;
}



/* Entry: 1082a60ec; end: 1082a615b;  */

int * FUN_1082a60ec(void)

{
  int *piVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  ulong unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  
  func_0x0001082a69b8();
  uVar3 = extraout_x8;
  while( true ) {
    if ((int)uVar3 <= unaff_w21) {
      return (int *)0x0;
    }
    piVar1 = (int *)(*(long *)(unaff_x20 + 8) + (long)unaff_w23 * 0x10);
    if (*piVar1 == 0) break;
    if (unaff_w22 == *piVar1) {
      func_0x0001082a68fc(*(undefined8 *)(piVar1 + 2));
      uVar2 = unaff_x19;
      FUN_1082a5e3c();
      if ((uVar2 & 1) != 0) {
        return piVar1 + 2;
      }
    }
    func_0x0001082a6ac8();
    uVar3 = extraout_x8_00;
  }
  return (int *)0x0;
}



/* Entry: 1082a615c; end: 1082a619b;  */

void FUN_1082a615c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a6978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1082a619c; end: 1082a61c3;  */

undefined8 * FUN_1082a619c(undefined8 *param_1)

{
  FUN_1082a61c4(*param_1);
  return param_1;
}



/* Entry: 1082a61c4; end: 1082a61d7;  */

void FUN_1082a61c4(long *param_1)

{
  long *plVar1;
  
  if (param_1 != (long *)0x0) {
    func_0x00010833b7ec();
    plVar1 = param_1;
    FUN_10833b630(param_1,0);
    func_0x00010833b7d0();
    if ((int)plVar1 != 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    return;
  }
  return;
}



/* Entry: 1082a61d8; end: 1082a61fb;  */

undefined8 FUN_1082a61d8(undefined8 param_1)

{
  func_0x0001082a6a74();
  FUN_108330548();
  return param_1;
}



/* Entry: 1082a61fc; end: 1082a620f;  */

void FUN_1082a61fc(void)

{
  FUN_1082a61d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a6210; end: 1082a6247;  */

undefined8 FUN_1082a6210(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_1082a6358();
  return uVar1;
}



/* Entry: 1082a6248; end: 1082a626b;  */

undefined8 FUN_1082a6248(long param_1,undefined8 param_2)

{
  func_0x0001082a6a74(param_2,param_1 + 8);
  FUN_10833043c();
  return param_2;
}



/* Entry: 1082a626c; end: 1082a631f;  */

void FUN_1082a626c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_2;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = 0;
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  func_0x0001082a53e0(uVar1);
  FUN_1082ae9a0(auStack_50,uVar2,*param_3,param_3[3],*(undefined4 *)(param_3 + 4),uVar1,
                *(undefined1 *)((long)param_3 + 0xc),*(undefined4 *)(param_3 + 2),
                *(undefined1 *)((long)param_3 + 0x25),*(undefined4 *)(param_3 + 1),
                *(undefined1 *)((long)param_3 + 0x24),&uStack_48,param_3[5],param_3[6]);
  func_0x0001082a6ae0();
  FUN_108283764(auStack_50);
  func_0x0001078bddf8(&uStack_38);
  return;
}



/* Entry: 1082a6320; end: 1082a634b;  */

void FUN_1082a6320(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082a6b2c(param_2,param_1,&PTR_DAT_110a36288);
  func_0x0001082a6a84();
  return;
}



/* Entry: 1082a634c; end: 1082a6357;  */

undefined ** FUN_1082a634c(void)

{
  return &PTR_DAT_110a36288;
}



/* Entry: 1082a6358; end: 1082a63ab;  */

undefined8 FUN_1082a6358(undefined8 param_1)

{
  func_0x0001082a6a74();
  FUN_10833043c();
  return param_1;
}



/* Entry: 1082a63ac; end: 1082a63b3;  */

void FUN_1082a63ac(undefined8 param_1)

{
  func_0x00010833b7ec();
  FUN_10833b57c(param_1,0);
  func_0x00010833b7d0();
  return;
}



/* Entry: 1082a63b4; end: 1082a63df;  */

undefined8 * FUN_1082a63b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a362a8;
  FUN_1082a5520(param_1 + 1);
  return param_1;
}



/* Entry: 1082a63e0; end: 1082a63f3;  */

void FUN_1082a63e0(void)

{
  FUN_1082a63b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a63f4; end: 1082a642b;  */

undefined8 FUN_1082a63f4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_1082a661c();
  return uVar1;
}



/* Entry: 1082a642c; end: 1082a644f;  */

undefined8 * FUN_1082a642c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a362a8;
  FUN_10833043c(param_2 + 1);
  func_0x0001082a637c(param_2 + 8,param_1 + 0x40);
  return param_2;
}



/* Entry: 1082a6450; end: 1082a65e3;  */

void FUN_1082a6450(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_68;
  
  uVar7 = *param_2;
  uVar3 = *(uint *)(*(long *)(param_1 + 0x40) + 0x50);
  uVar1 = uVar3 + 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (long)(int)uVar1;
  uVar8 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + (long)(int)uVar1) *
          8;
  puVar5 = (undefined8 *)(uVar8 + 0x10);
  if (0xffffffffffffffef < uVar8 || SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar5 = 0x18;
  puVar5[1] = (long)(int)uVar1;
  puStack_68 = puVar5 + 2;
  if (uVar3 != 0xffffffff) {
    _bzero(puStack_68,((uVar8 - 0x18) / 0x18) * 0x18 + 0x18);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x28);
  func_0x0001082a53e0(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  puVar5[3] = uVar2;
  puVar5 = puVar5 + 6;
  for (uVar8 = 0; (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != uVar8; uVar8 = uVar8 + 1) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x0001082a6b4c(*(undefined8 *)(param_1 + 0x40));
    puVar5[-1] = uStack_a0;
    *puVar5 = uStack_98;
    FUN_10810a400(&uStack_90);
    puVar5 = puVar5 + 3;
  }
  FUN_1082ae17c(&uStack_a0,uVar7,*param_3,param_3[3],*(undefined4 *)(param_3 + 4),uVar6,0,1,
                *(undefined1 *)((long)param_3 + 0x25),1);
  func_0x0001082a6ae0();
  FUN_108283764(&uStack_a0);
  FUN_1082a6674(&puStack_68);
  return;
}



/* Entry: 1082a65e4; end: 1082a660f;  */

void FUN_1082a65e4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082a6b2c(param_2,param_1,&PTR_DAT_110a36308);
  func_0x0001082a6a84();
  return;
}



/* Entry: 1082a6610; end: 1082a661b;  */

undefined ** FUN_1082a6610(void)

{
  return &PTR_DAT_110a36308;
}



/* Entry: 1082a661c; end: 1082a6673;  */

undefined8 * FUN_1082a661c(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_110a362a8;
  FUN_10833043c(param_1 + 1);
  func_0x0001082a637c(param_1 + 8,param_2 + 0x38);
  return param_1;
}



/* Entry: 1082a6674; end: 1082a66d3;  */

long * FUN_1082a6674(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    if (lVar2 != 0) {
      lVar1 = lVar3 + lVar2 * 0x18 + -8;
      lVar2 = lVar2 * -0x18;
      do {
        func_0x0001078bddf8(lVar1);
        lVar1 = lVar1 + -0x18;
        lVar2 = lVar2 + 0x18;
      } while (lVar2 != 0);
    }
    __ZdaPv(lVar3 + -0x10);
  }
  return param_1;
}



/* Entry: 1082a66d4; end: 1082a6853;  */

byte FUN_1082a66d4(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  
  iVar14 = 0;
  uVar12 = *(uint *)*param_2;
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  iVar9 = param_1[1];
  uVar2 = iVar9 - 1U & uVar12;
  while( true ) {
    uVar13 = (ulong)uVar2;
    bVar10 = iVar14 < iVar9;
    if (iVar9 <= iVar14) break;
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x10);
    uVar5 = *puVar1;
    if (uVar5 == 0) break;
    if (uVar12 == uVar5) {
      uVar6 = *(undefined8 *)(puVar1 + 2);
      func_0x0001082a68fc(uVar6);
      puVar7 = param_2;
      FUN_1082a5e3c(param_2,uVar6);
      if (((ulong)puVar7 & 1) != 0) {
        *param_1 = *param_1 + -1;
        do {
          lVar11 = *(long *)(param_1 + 2);
          uVar12 = (uint)uVar13;
          puVar1 = (uint *)(lVar11 + (long)(int)uVar12 * 0x10);
          do {
            uVar2 = (int)uVar13 - 1;
            if ((int)uVar13 < 1) {
              uVar2 = param_1[1] + uVar2;
            }
            uVar13 = (ulong)uVar2;
            uVar5 = *(uint *)(lVar11 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4))
            ;
            if (uVar5 == 0) {
              if (*puVar1 != 0) {
                *puVar1 = 0;
              }
              uVar12 = param_1[1];
              if ((4 < (int)uVar12) && (*param_1 * 4 <= (int)uVar12)) {
                FUN_1082a5ef4(param_1,uVar12 >> 1);
              }
              bVar10 = true;
              bVar8 = 1;
              goto LAB_1082a676c;
            }
            uVar3 = param_1[1] - 1U & uVar5;
          } while (((int)uVar2 <= (int)uVar3 && (int)uVar3 < (int)uVar12) ||
                  (((int)uVar12 < (int)uVar2 &&
                   ((int)uVar3 < (int)uVar12 || (int)uVar2 <= (int)uVar3))));
          if (uVar12 != uVar2) {
            *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(lVar11 + (long)(int)uVar2 * 0x10 + 8);
            *puVar1 = uVar5;
          }
        } while( true );
      }
      iVar9 = param_1[1];
    }
    iVar4 = 0;
    if ((int)uVar2 < 1) {
      iVar4 = iVar9;
    }
    uVar2 = (uVar2 + iVar4) - 1;
    iVar14 = iVar14 + 1;
  }
  bVar8 = 0;
LAB_1082a676c:
  return bVar10 & bVar8;
}



/* Entry: 1082a6854; end: 1082a68eb;  */

void FUN_1082a6854(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001082a6884(param_1,&uStack_30);
  FUN_1082a5d4c(&uStack_28);
  return;
}



/* Entry: 1082a68ec; end: 1082a6baf;  */

void FUN_1082a68ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082a68f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
  return;
}



/* Entry: 1082a6bb0; end: 1082a6caf;  */

void FUN_1082a6bb0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x0001082a7270();
  FUN_1082a09fc();
  FUN_108267a54(auStack_38);
  *unaff_x19 = &PTR_FUN_110a36328;
  uVar1 = 0x58;
  __Znwm();
  func_0x0001082a6fec();
  unaff_x19[4] = uVar1;
  *(undefined1 *)(unaff_x19 + 5) = param_3;
  unaff_x19[7] = 0;
  unaff_x19[6] = 0;
  unaff_x19[9] = 0;
  unaff_x19[8] = 0;
  FUN_1082a6cb0(&uStack_40,&stack0xffffffffffffffb8);
  uVar1 = uStack_40;
  uStack_40 = 0;
  FUN_1082a7164(unaff_x19 + 9,uVar1);
  func_0x0001082a7144(&uStack_40);
  return;
}



/* Entry: 1082a6cb0; end: 1082a6d3b;  */

void FUN_1082a6cb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  uVar2 = *param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082a6d3c; end: 1082a6d3f;  */

undefined8 * FUN_1082a6d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a36328;
  FUN_1082edbac();
  func_0x0001082a7144(param_1 + 9);
  func_0x0001082a7124(param_1 + 8);
  FUN_1082a6e3c(param_1 + 5);
  FUN_1082a7090(param_1 + 4);
  *param_1 = &PTR_FUN_110a35160;
  FUN_108267a54(param_1 + 2);
  return param_1;
}



/* Entry: 1082a6d40; end: 1082a6d53;  */

void FUN_1082a6d40(void)

{
  func_0x0001082a6ce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a6d54; end: 1082a6df3;  */

undefined8 FUN_1082a6d54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xa0;
  __Znwm(0xa0);
  func_0x000108292434();
  FUN_1082a6df4(param_1 + 0x40,uVar1);
  return 1;
}


