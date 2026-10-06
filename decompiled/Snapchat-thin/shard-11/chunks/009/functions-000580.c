/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1089a2f50; end: 1089a3007;  */

void FUN_1089a2f50(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x12;
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    func_0x0001089a3b6c();
  }
  func_0x000107c30248(param_1 + 0x20,param_2 + 2);
  func_0x0001089a3ba0(*(uint *)(param_1 + 0x10) | 1);
  if ((uVar2 & 1) != 0) {
    func_0x0001089a3b6c();
  }
  func_0x000107c30248(param_1 + 0x18,param_4);
  func_0x0001089a3ba0(*(uint *)(param_1 + 0x10) | 4);
  if ((uVar2 & 1) != 0) {
    func_0x0001089a3b6c();
  }
  func_0x000107c30248(param_1 + 0x28,param_2 + 5);
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 8;
  *(undefined8 *)(param_1 + 0x40) = param_2[1];
  *(uint *)(param_1 + 0x10) = uVar1 | 0x28;
  return;
}



/* Entry: 1089a3008; end: 1089a30cf;  */

void FUN_1089a3008(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined4 uStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  
  puVar1 = param_2;
  FUN_1089768dc();
  puStack_50 = param_2;
  puStack_48 = puVar1;
  while (puStack_50 != (undefined4 *)0x0) {
    uStack_70 = 0;
    ppuStack_78 = &PTR_DAT_110cf58d8;
    puStack_60 = &DAT_11383d918;
    uStack_58 = *puStack_48;
    uStack_68 = 3;
    func_0x000107c30248(&puStack_60,puStack_48 + 2,0);
    FUN_1089a38f0(param_1 + 0x58,&ppuStack_78);
    func_0x00010b502674(&ppuStack_78);
    func_0x000108976960(&puStack_50);
  }
  return;
}



/* Entry: 1089a30d0; end: 1089a314f;  */

void FUN_1089a30d0(long param_1,undefined1 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  FUN_1089a3150();
  FUN_1089a2c7c();
  func_0x0001089a3bb8(*param_2);
  func_0x0001089a2c8c(lVar1);
  func_0x0001089a3adc(param_2[1]);
  FUN_1089a2cf8(lVar1);
  FUN_1089a2c9c();
  func_0x0001089a2d08(lVar1);
  func_0x0001089a3bb8(param_2[2]);
  func_0x0001089a3160();
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(param_1 + 0x18,param_2 + 0x40,uVar2);
  *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_2 + 0x58) != 0);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  return;
}



/* Entry: 1089a3150; end: 1089a316f;  */

void FUN_1089a3150(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x0001089a3248();
    *(ulong *)(param_1 + 0xb0) = uVar1;
  }
  return;
}



/* Entry: 1089a3170; end: 1089a31f7;  */

void FUN_1089a3170(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  undefined4 uStack_3c;
  
  puVar1 = auStack_f0;
  func_0x0001089a3a9c();
  func_0x0001089a3bf8();
  uStack_e0 = uStack_e0 | 0x1000;
  uStack_3c = 0x16;
  func_0x000108962dcc();
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x0001089a3b5c();
  FUN_1089a31f8(auStack_f0);
  FUN_1089a56b4();
  func_0x0001089a3b08();
  func_0x0001089a3b40();
  return;
}



/* Entry: 1089a31f8; end: 1089a3207;  */

void FUN_1089a31f8(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x0001089a38b4();
    *(ulong *)(param_1 + 0xa0) = uVar1;
  }
  return;
}



/* Entry: 1089a3208; end: 1089a3287;  */

void FUN_1089a3208(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x0001089a3b78();
  }
  else {
    func_0x0001089a3afc();
  }
  func_0x0001089a3ad0(&UNK_110cf5aa8);
  func_0x0001089a3b90();
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1089a3288; end: 1089a3297;  */

void FUN_1089a3288(long param_1)

{
  ulong uVar1;
  
  func_0x0001089a3b5c();
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x0001089a32cc();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1089a3298; end: 1089a33ab;  */

void FUN_1089a3298(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x0001089a32cc();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1089a33ac; end: 1089a33c7;  */

void FUN_1089a33ac(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x20) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001089a3c00();
  if (*(int *)(unaff_x19 + 0x1c) != 1) {
    func_0x00010b500e80();
    *(undefined4 *)(unaff_x19 + 0x1c) = 1;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x000107c287f8();
    *(ulong *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1089a33c8; end: 1089a3457;  */

void FUN_1089a33c8(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001089a3c00();
  if (*(int *)(unaff_x19 + 0x1c) != 1) {
    func_0x00010b500e80();
    *(undefined4 *)(unaff_x19 + 0x1c) = 1;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001089a3a80();
    }
    func_0x000107c287f8();
    *(ulong *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1089a3458; end: 1089a3567;  */

void FUN_1089a3458(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined1 *puStack_48;
  
  lVar5 = *(long *)*param_1;
  puVar3 = param_2;
  if (*(int *)(lVar5 + 0x1c) == 3) {
    uVar4 = *(ulong *)(lVar5 + 0x10);
  }
  else {
    func_0x00010b500e80(lVar5);
    *(undefined4 *)(lVar5 + 0x1c) = 3;
    uVar4 = *(ulong *)(lVar5 + 8);
    if ((uVar4 & 1) != 0) {
      func_0x0001089a3a80();
    }
    FUN_1089a3568();
    *(ulong *)(lVar5 + 0x10) = uVar4;
  }
  FUN_1089766b0();
  puStack_58 = param_2;
  while( true ) {
    if (puStack_58 == (undefined8 *)0x0) {
      return;
    }
    lVar5 = uVar4 + 0x10;
    puStack_50 = puVar3;
    func_0x000107c303b0(lVar5,0x1089a35a8);
    lVar1 = lVar5;
    func_0x0001089a3b5c();
    uVar2 = *(ulong *)(lVar1 + 0x18);
    if (uVar2 == 0) {
      uVar2 = *(ulong *)(lVar5 + 8);
      if ((uVar2 & 1) != 0) {
        func_0x0001089a3a80();
      }
      func_0x0001089630d4();
      *(ulong *)(lVar5 + 0x18) = uVar2;
    }
    *(undefined8 *)(uVar2 + 0x18) = *puVar3;
    func_0x0001089a3b5c();
    lStack_60 = lVar5;
    if (*(int *)(puVar3 + 2) == -1) break;
    uVar2 = (ulong)*(uint *)(puVar3 + 2);
    if (*(uint *)(puVar3 + 2) == 0xffffffff) {
      uVar2 = 0xffffffffffffffff;
    }
    puStack_48 = (undefined1 *)&lStack_60;
    (*(code *)(&PTR_DAT_110aa4f48)[uVar2])(&puStack_48,puVar3 + 1);
    FUN_108976724(&puStack_58);
    puVar3 = puStack_50;
  }
  func_0x00010563ab98();
  if (uVar2 == 0) {
    uVar4 = 0x30;
    __Znwm();
  }
  else {
    uVar4 = uVar2;
    func_0x0001089a3be4();
  }
  func_0x0001089a3a8c(&UNK_110cf5fa8);
  *(ulong *)(uVar4 + 0x20) = uVar2;
  *(undefined4 *)(uVar4 + 0x28) = 0;
  return;
}



/* Entry: 1089a3568; end: 1089a37cf;  */

void FUN_1089a3568(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0x30;
    __Znwm();
  }
  else {
    lVar1 = param_1;
    func_0x0001089a3be4();
  }
  func_0x0001089a3a8c(&UNK_110cf5fa8);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 1089a37d0; end: 1089a37db;  */

void FUN_1089a37d0(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1089a37dc);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1089a37dc);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1089a37dc; end: 1089a38ef;  */

void FUN_1089a37dc(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x0001089a3b78();
  }
  else {
    func_0x0001089a3afc();
  }
  func_0x0001089a3ad0(&UNK_110cf5af8);
  func_0x0001089a3b90();
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined8 *)(param_1 + 0x20) = extraout_x8;
  return;
}



/* Entry: 1089a38f0; end: 1089a396b;  */

ulong FUN_1089a38f0(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1[1];
  puVar1 = param_1;
  func_0x000107c28174();
  if ((int)uVar2 < (int)puVar1) {
    func_0x0001089a3b1c();
    uVar2 = *extraout_x8;
    if (uVar2 != param_2) {
      uVar3 = *(ulong *)(uVar2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if (uVar3 == uVar4) {
        func_0x00010b50286c(uVar2);
      }
      else {
        func_0x00010b502838(uVar2);
      }
    }
    return uVar2;
  }
  func_0x00010563f22c(param_1);
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    *(int *)(uVar2 - 1) = *(int *)(uVar2 - 1) + 1;
  }
  uVar2 = param_1[2];
  FUN_1089a39d0(uVar2,param_2);
  func_0x0001089a3b1c();
  *extraout_x8_00 = uVar2;
  return uVar2;
}



/* Entry: 1089a396c; end: 1089a39cf;  */

long FUN_1089a396c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b50286c(param_1);
    }
    else {
      func_0x00010b502838(param_1);
    }
  }
  return param_1;
}



/* Entry: 1089a39d0; end: 1089a39f3;  */

void FUN_1089a39d0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1089a39f4(&uStack_18);
  return;
}



/* Entry: 1089a39f4; end: 1089a3a77;  */

void FUN_1089a39f4(long *param_1)

{
  if (*param_1 == 0) {
    func_0x0001089a3b78();
  }
  else {
    func_0x00010b4d80e0(*param_1,0x28);
  }
  func_0x0001089a3a38();
  return;
}



/* Entry: 1089a3a78; end: 1089a3c0b;  */

void FUN_1089a3a78(void)

{
  return;
}



/* Entry: 1089a3c0c; end: 1089a3cab;  */

undefined8 FUN_1089a3c0c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113828148 & 1) == 0) {
    iVar1 = 0x13828148;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1089a3cac(auStack_68);
      puVar2 = auStack_68;
      func_0x000107c301a0();
      puRam0000000113828140 = puVar2;
      func_0x000107c27974(auStack_68);
      ___cxa_guard_release(0x113828148);
    }
  }
  return 0x113828140;
}



/* Entry: 1089a3cac; end: 1089a4663;  */

/* WARNING: Possible PIC construction at 0x0001089a3ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089a3d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001089a3ce4) */
/* WARNING: Removing unreachable block (ram,0x0001089a3d08) */
/* WARNING: Removing unreachable block (ram,0x0001089a45a4) */
/* WARNING: Removing unreachable block (ram,0x0001089a45b8) */
/* WARNING: Removing unreachable block (ram,0x0001089a45f4) */
/* WARNING: Removing unreachable block (ram,0x0001089a4604) */
/* WARNING: Removing unreachable block (ram,0x0001089a4614) */
/* WARNING: Removing unreachable block (ram,0x0001089a464c) */
/* WARNING: Removing unreachable block (ram,0x0001089a45e0) */

void FUN_1089a3cac(void)

{
  undefined *puVar1;
  undefined1 auStack_b60 [2856];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f4ee3d7;
  func_0x00010002b82c(auStack_b60,&UNK_10f4ee3d7);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1089a4664; end: 1089a466b;  */

void FUN_1089a4664(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 1089a466c; end: 1089a46bf;  */

undefined8 * FUN_1089a466c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110aa4f70;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 4);
  param_1[9] = param_3;
  return param_1;
}



/* Entry: 1089a46c0; end: 1089a46e3;  */

void FUN_1089a46c0(long *param_1)

{
  if ((char)param_1[2] == '\x01') {
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001089a46dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 1089a46e4; end: 1089a482f;  */

void FUN_1089a46e4(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int extraout_w10;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  lStack_48 = param_1 + 0x10;
  uStack_40 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar7 = *(ulong **)(param_1 + 0x50);
  uVar3 = *(ulong *)(param_1 + 0x58);
  uVar4 = *param_2;
  puVar2 = puVar7;
  uVar5 = uVar3;
  while (puVar1 = puVar2, uVar5 != 0) {
    uVar6 = uVar5 >> 1;
    puVar2 = puVar1 + uVar6 * 2 + 2;
    uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
    if (uVar4 <= puVar1[uVar6 * 2]) {
      puVar2 = puVar1;
      uVar5 = uVar6;
    }
  }
  puVar7 = puVar7 + uVar3 * 2;
  if (puVar1 == puVar7) {
    if (*(ulong *)(param_1 + 0x60) != uVar3) {
      uVar5 = param_2[1];
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      if (uVar5 != 0) {
        do {
          func_0x0001089a4f08();
        } while (extraout_w10 != 0);
        uVar3 = *(ulong *)(param_1 + 0x58);
      }
      *(ulong *)(param_1 + 0x58) = uVar3 + 1;
      goto LAB_1089a47f0;
    }
  }
  else {
    if (*puVar1 <= uVar4) goto LAB_1089a47f0;
    if (*(ulong *)(param_1 + 0x60) != uVar3) {
      puVar7[1] = puVar7[-1];
      *puVar7 = puVar7[-2];
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
      for (puVar7 = puVar7 + -4; puVar7 + 2 != puVar1; puVar7 = puVar7 + -2) {
        FUN_1089a4e4c(puVar7 + 2,puVar7);
      }
      func_0x0001089a4e88(puVar1,*param_2,param_2[1]);
      goto LAB_1089a47f0;
    }
  }
  FUN_1089a4d18(auStack_38,(long *)(param_1 + 0x50),puVar1,param_2);
LAB_1089a47f0:
  func_0x000107c2798c(&lStack_48);
  return;
}



/* Entry: 1089a4830; end: 1089a48df;  */

void FUN_1089a4830(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  func_0x0001089a4f24();
  puVar3 = *(ulong **)(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x58);
  while (puVar4 = puVar3, uVar2 != 0) {
    uVar5 = uVar2 >> 1;
    puVar3 = puVar4 + uVar5 * 2 + 2;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    if (*param_2 <= puVar4[uVar5 * 2]) {
      puVar3 = puVar4;
      uVar2 = uVar5;
    }
  }
  puVar3 = *(ulong **)(param_1 + 0x50) + *(ulong *)(param_1 + 0x58) * 2;
  if ((puVar4 != puVar3) && (*puVar4 <= *param_2)) {
    while (puVar1 = puVar4 + 2, puVar1 != puVar3) {
      FUN_1089a4e4c(puVar4,puVar1);
      puVar4 = puVar1;
    }
    func_0x00010894c7d0(puVar3 + -2);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
  }
  func_0x0001089a4f64();
  return;
}



/* Entry: 1089a48e0; end: 1089a4aa7;  */

void FUN_1089a48e0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = param_2;
    func_0x0001089a4f24();
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x68);
    *(undefined1 **)((long)register0x00000008 + -0x80) = puVar1;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    unaff_x24 = *(undefined8 **)(param_1 + 0x50);
    unaff_x22 = *(undefined8 **)(param_1 + 0x58);
    if (unaff_x22 < (undefined8 *)0x2) {
      if (unaff_x22 == (undefined8 *)0x1) {
        lVar8 = unaff_x24[1];
        uVar9 = *unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24[1];
        *(undefined8 *)((long)register0x00000008 + -0x68) = uVar9;
        if (lVar8 == 0) {
          lVar8 = 1;
        }
        else {
          plVar2 = (long *)(lVar8 + 8);
          lVar8 = 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        uVar7 = 0;
        func_0x0001089a4c80(puVar1,0);
        lVar8 = 0;
      }
    }
    else {
      puVar6 = unaff_x22;
      FUN_1089a4ecc();
      unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x80);
      if (unaff_x23 != (undefined1 *)0x0) {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x78);
        func_0x0001089a4c80(unaff_x23,uVar7);
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        if (puVar1 != unaff_x23) {
          __ZdlPv(unaff_x23);
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x70) = unaff_x22;
      puVar3 = unaff_x24 + (long)unaff_x22 * 2;
      *(undefined8 **)((long)register0x00000008 + -0x80) = puVar6;
      unaff_x25 = puVar6;
      for (; unaff_x24 != puVar3; unaff_x24 = unaff_x24 + 2) {
        lVar8 = unaff_x24[1];
        uVar9 = *unaff_x24;
        unaff_x25[1] = unaff_x24[1];
        *unaff_x25 = uVar9;
        if (lVar8 != 0) {
          plVar2 = (long *)(lVar8 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        unaff_x25 = unaff_x25 + 2;
      }
      lVar8 = *(long *)((long)register0x00000008 + -0x78) + ((long)unaff_x25 - (long)puVar6 >> 4);
    }
    *(long *)((long)register0x00000008 + -0x78) = lVar8;
    func_0x000107c280c4((undefined1 *)((long)register0x00000008 + -0x90));
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0x80);
    for (lVar8 = *(long *)((long)register0x00000008 + -0x78) << 4; lVar8 != 0; lVar8 = lVar8 + -0x10
        ) {
      uVar7 = param_2;
      (**(code **)(*(long *)*unaff_x20 + 0x10))((long *)*unaff_x20,param_2);
      unaff_x20 = unaff_x20 + 2;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x0001089a4c3c();
    func_0x0001089a4f64();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x0001089a4c3c();
    func_0x0001089a4f64();
    unaff_x30 = FUN_1089a4aa8;
    func_0x0001089a4f5c();
    param_1 = param_1 + -8;
    unaff_x21 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_2 = uVar7;
  }
  return;
}



/* Entry: 1089a4aa8; end: 1089a4aaf;  */

void FUN_1089a4aa8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = param_2;
    func_0x0001089a4f24();
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x68);
    *(undefined1 **)((long)register0x00000008 + -0x80) = puVar1;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    unaff_x24 = *(undefined8 **)(param_1 + 0x48);
    unaff_x22 = *(undefined8 **)(param_1 + 0x50);
    if (unaff_x22 < (undefined8 *)0x2) {
      if (unaff_x22 == (undefined8 *)0x1) {
        lVar8 = unaff_x24[1];
        uVar9 = *unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24[1];
        *(undefined8 *)((long)register0x00000008 + -0x68) = uVar9;
        if (lVar8 == 0) {
          lVar8 = 1;
        }
        else {
          plVar2 = (long *)(lVar8 + 8);
          lVar8 = 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        uVar7 = 0;
        func_0x0001089a4c80(puVar1,0);
        lVar8 = 0;
      }
    }
    else {
      puVar6 = unaff_x22;
      FUN_1089a4ecc();
      unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x80);
      if (unaff_x23 != (undefined1 *)0x0) {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x78);
        func_0x0001089a4c80(unaff_x23,uVar7);
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        if (puVar1 != unaff_x23) {
          __ZdlPv(unaff_x23);
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x70) = unaff_x22;
      puVar3 = unaff_x24 + (long)unaff_x22 * 2;
      *(undefined8 **)((long)register0x00000008 + -0x80) = puVar6;
      unaff_x25 = puVar6;
      for (; unaff_x24 != puVar3; unaff_x24 = unaff_x24 + 2) {
        lVar8 = unaff_x24[1];
        uVar9 = *unaff_x24;
        unaff_x25[1] = unaff_x24[1];
        *unaff_x25 = uVar9;
        if (lVar8 != 0) {
          plVar2 = (long *)(lVar8 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        unaff_x25 = unaff_x25 + 2;
      }
      lVar8 = *(long *)((long)register0x00000008 + -0x78) + ((long)unaff_x25 - (long)puVar6 >> 4);
    }
    *(long *)((long)register0x00000008 + -0x78) = lVar8;
    func_0x000107c280c4((undefined1 *)((long)register0x00000008 + -0x90));
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0x80);
    for (lVar8 = *(long *)((long)register0x00000008 + -0x78) << 4; lVar8 != 0; lVar8 = lVar8 + -0x10
        ) {
      uVar7 = param_2;
      (**(code **)(*(long *)*unaff_x20 + 0x10))((long *)*unaff_x20,param_2);
      unaff_x20 = unaff_x20 + 2;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x0001089a4c3c();
    func_0x0001089a4f64();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x0001089a4c3c();
    func_0x0001089a4f64();
    unaff_x30 = FUN_1089a4aa8;
    func_0x0001089a4f5c();
    unaff_x21 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_2 = uVar7;
  }
  return;
}



/* Entry: 1089a4ab0; end: 1089a4afb;  */

undefined8 * FUN_1089a4ab0(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001089a4f08();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001089a4cf0(&uStack_30);
  return param_1;
}



/* Entry: 1089a4afc; end: 1089a4b93;  */

void FUN_1089a4afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plStack_40;
  long lStack_38;
  
  if (((int)param_2 != *(int *)(param_1 + 0x88)) || ((int)param_3 != *(int *)(param_1 + 0x8c))) {
    *(int *)(param_1 + 0x88) = (int)param_2;
    *(int *)(param_1 + 0x8c) = (int)param_3;
    plStack_40 = (long *)0x0;
    lStack_38 = 0;
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      lStack_38 = lVar1;
      if (lVar1 != 0) {
        plStack_40 = *(long **)(param_1 + 0x78);
        if (plStack_40 != (long *)0x0) {
          (**(code **)(*plStack_40 + 0x18))(plStack_40,0,param_2,param_3);
        }
      }
    }
    func_0x000108938338(&plStack_40);
  }
  return;
}



/* Entry: 1089a4b94; end: 1089a4bdf;  */

undefined8 FUN_1089a4b94(undefined8 param_1,long param_2)

{
  FUN_108949b60();
  return CONCAT44(*(int *)(param_2 + 4),
                  (int)(((double)(int)param_1 / (double)(int)((ulong)param_1 >> 0x20)) *
                        (double)*(int *)(param_2 + 4) * 0.25) << 2);
}



/* Entry: 1089a4be0; end: 1089a4be3;  */

undefined8 * FUN_1089a4be0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa4fb0;
  param_1[1] = &PTR_DAT_110aa4ff8;
  func_0x0001089a4cf0(param_1 + 0xf);
  func_0x0001089a4c3c(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1089a4be4; end: 1089a4bf7;  */

void FUN_1089a4be4(void)

{
  func_0x0001089a4cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089a4bf8; end: 1089a4c13;  */

undefined8 FUN_1089a4bf8(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 1089a4c14; end: 1089a4c27;  */

void FUN_1089a4c14(void)

{
  func_0x0001089a4cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089a4c28; end: 1089a4c3b;  */

void FUN_1089a4c28(void)

{
  return;
}



/* Entry: 1089a4c3c; end: 1089a4d17;  */

undefined8 * FUN_1089a4c3c(undefined8 *param_1)

{
  func_0x0001089a4c80(*param_1,param_1[1]);
  if (param_1[2] != 0) {
    if (param_1 + 3 != (undefined8 *)*param_1) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1089a4d18; end: 1089a4e4b;  */

ulong * FUN_1089a4d18(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  int extraout_w10;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uStack_90;
  ulong uStack_88;
  
  uVar7 = param_2[2];
  uVar9 = param_2[1] + 1;
  if (uVar9 - uVar7 <= 0x7ffffffffffffff - uVar7) {
    if (uVar7 >> 0x3d == 0) {
      uVar6 = (uVar7 << 3) / 5;
    }
    else {
      uVar6 = uVar7 << 3;
      if (4 < uVar7 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    uVar7 = *param_2;
    if (0x7fffffffffffffe < uVar6) {
      uVar6 = 0x7ffffffffffffff;
    }
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    uVar2 = uVar9;
    FUN_1089a4ecc();
    puVar1 = (undefined8 *)*param_2;
    uVar6 = param_2[1];
    puVar3 = puVar1;
    FUN_1089a4ee8(puVar1,param_3,uVar2);
    lVar5 = param_4[1];
    uVar8 = *param_4;
    puVar3[1] = param_4[1];
    *puVar3 = uVar8;
    if (lVar5 != 0) {
      do {
        func_0x0001089a4f08();
      } while (extraout_w10 != 0);
    }
    puVar4 = param_3;
    FUN_1089a4ee8(param_3,puVar1 + uVar6 * 2,puVar3 + 2);
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001089a4c80(puVar1,param_2[1]);
      puVar4 = (ulong *)*param_2;
      if (param_2 + 3 != puVar4) {
        __ZdlPv();
      }
    }
    *param_2 = uVar2;
    param_2[1] = param_2[1] + 1;
    param_2[2] = uVar9;
    *param_1 = (long)param_3 + (uVar2 - uVar7);
    return puVar4;
  }
  func_0x0001089a4f50();
  uVar7 = param_2[1];
  uVar9 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  param_1[1] = uVar7;
  *param_1 = uVar9;
  func_0x00010894c7d0(&uStack_90);
  return param_1;
}



/* Entry: 1089a4e4c; end: 1089a4ecb;  */

undefined8 * FUN_1089a4e4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010894c7d0(&uStack_30);
  return param_1;
}



/* Entry: 1089a4ecc; end: 1089a4ee7;  */

undefined8 * FUN_1089a4ecc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((ulong)param_1 >> 0x3b == 0) {
    param_1 = (undefined8 *)((long)param_1 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1);
    return param_1;
  }
  func_0x0001089a4f50();
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar1 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar1;
    *param_1 = 0;
    param_1[1] = 0;
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 1089a4ee8; end: 1089a4f6b;  */

undefined8 * FUN_1089a4ee8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar1 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar1;
    *param_1 = 0;
    param_1[1] = 0;
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 1089a4f6c; end: 1089a504f;  */

void FUN_1089a4f6c(ulong *param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  ulong uStack_38;
  
  bVar2 = *(char *)(param_2 + 1) != '\x02';
  if (bVar2) {
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
    uStack_58 = *(undefined8 *)(param_2 + 8);
    uStack_48 = *(undefined4 *)(param_2 + 0x18);
    lStack_60 = 1;
    func_0x00010bd43538(&uStack_40,&lStack_60);
    uVar3 = CONCAT44(uStack_3c,uStack_40);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_60 = (ulong)*(uint *)(param_2 + 4) << 0x20;
    func_0x00010bd434a4(&uStack_40,&lStack_60);
    uVar3 = (ulong)uStack_40;
    uStack_38 = 0;
  }
  uVar1 = *(ushort *)(param_2 + 2);
  param_1[1] = uStack_38;
  *param_1 = uVar3;
  *(uint *)(param_1 + 2) = (uint)bVar2;
  *(ushort *)((long)param_1 + 0x14) = uVar1 >> 8 | uVar1 << 8;
  return;
}



/* Entry: 1089a5050; end: 1089a5063;  */

void FUN_1089a5050(void)

{
  return;
}



/* Entry: 1089a5064; end: 1089a54a7;  */

void FUN_1089a5064(void)

{
  func_0x0001089e2c48();
  func_0x0001089a50ac();
  return;
}



/* Entry: 1089a54a8; end: 1089a5527;  */

void FUN_1089a54a8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_54 [28];
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010bd43490(auStack_54,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,&uStack_38);
  if (((uStack_28 & 1) == 0) || (uStack_28 == 1 && (int)uStack_38 == 0)) {
    func_0x00010bd43838(param_1,auStack_54,*(undefined2 *)(param_2 + 0x20));
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *param_1 = 0;
  }
  param_1[0x1c] = uVar1;
  return;
}



/* Entry: 1089a5528; end: 1089a56b3;  */

void FUN_1089a5528(undefined1 *param_1,long param_2)

{
  ulong *puVar1;
  bool bVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined4 uStack_6c;
  uint auStack_68 [2];
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    puStack_60 = &UNK_10e52b660;
    lStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    if (*(uint *)(param_2 + 0x30) < 2) {
      auStack_68[0] = *(uint *)(param_2 + 0x30);
    }
    uVar5 = *(ulong *)(param_2 + 0x18);
    puVar1 = (ulong *)(param_2 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + 7);
    }
    for (lVar7 = (long)*(int *)(param_2 + 0x20) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      uVar5 = *puVar1;
      if ((*(uint *)(uVar5 + 0x10) >> 1 & 1) != 0) {
        uStack_6c = *(undefined4 *)(uVar5 + 0x20);
        if ((*(uint *)(uVar5 + 0x10) & 1) == 0) {
          uStack_90 = uStack_90 & 0xffffffffffffff00;
          cStack_78 = '\0';
        }
        else {
          func_0x000107c27f70(&uStack_90,*(ulong *)(uVar5 + 0x18) & 0xfffffffffffffffc);
        }
        ppuVar4 = &puStack_60;
        uVar5 = 0;
        FUN_108940d10();
        if ((uVar5 & 1) != 0) {
          puVar6 = (undefined4 *)(lStack_58 + (long)ppuVar4 * 0x28);
          *puVar6 = uStack_6c;
          *(undefined1 *)(puVar6 + 2) = 0;
          *(undefined1 *)(puVar6 + 8) = 0;
          if (cStack_78 == '\x01') {
            *(undefined8 *)(puVar6 + 6) = uStack_80;
            *(undefined8 *)(puVar6 + 4) = uStack_88;
            *(ulong *)(puVar6 + 2) = uStack_90;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            *(undefined1 *)(puVar6 + 8) = 1;
          }
        }
        func_0x000107c279a4(&uStack_90);
      }
      puVar1 = puVar1 + 1;
    }
    bVar2 = auStack_68[0] == 1;
    bVar3 = lStack_48 == 0;
    if (bVar2 && bVar3) {
      *param_1 = 0;
    }
    else {
      FUN_108977868(param_1,auStack_68);
    }
    param_1[0x28] = !bVar2 || !bVar3;
    FUN_10893d574(&puStack_60);
  }
  return;
}



/* Entry: 1089a56b4; end: 1089a57b3;  */

void FUN_1089a56b4(long param_1,uint *param_2)

{
  uint *puVar1;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  uint uStack_58;
  uint *puStack_50;
  uint *puStack_48;
  
  if (*param_2 < 2) {
    *(uint *)(param_1 + 0x30) = *param_2;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  }
  puVar1 = param_2 + 2;
  FUN_108940f84();
  puStack_50 = puVar1;
  puStack_48 = param_2;
  while (puStack_50 != (uint *)0x0) {
    uStack_70 = 0;
    ppuStack_78 = &PTR_DAT_110cf58d8;
    puStack_60 = &DAT_11383d918;
    uStack_58 = *puStack_48;
    uStack_68 = 2;
    if ((char)puStack_48[8] == '\x01') {
      uStack_68 = 3;
      func_0x000107c30248(&puStack_60,puStack_48 + 2,0);
    }
    FUN_1089a38f0(param_1 + 0x18,&ppuStack_78);
    func_0x00010b502674(&ppuStack_78);
    FUN_108941008(&puStack_50);
  }
  return;
}



/* Entry: 1089a57b4; end: 1089a5817;  */

void FUN_1089a57b4(long param_1,long param_2)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(param_1 + 0x18,param_2,uVar1);
  *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_2 + 0x18) != 0);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  return;
}



/* Entry: 1089a5818; end: 1089a583b;  */

void FUN_1089a5818(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1089a583c(&uStack_18);
  return;
}



/* Entry: 1089a583c; end: 1089a583f;  */

void FUN_1089a583c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1089a5874(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1089a5840; end: 1089a5873;  */

void FUN_1089a5840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1089a5874(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1089a5874; end: 1089a58ff;  */

void FUN_1089a5874(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_108940a40();
  if ((param_3 & 1) != 0) {
    FUN_1089a5900(*(long *)(*param_2 + 8) + lVar2 * 0x20,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x20;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 1089a5900; end: 1089a590b;  */

void FUN_1089a5900(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_3;
  uStack_20 = *param_4;
  FUN_1089a5934(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1089a590c; end: 1089a5933;  */

void FUN_1089a590c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1089a5934(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1089a5934; end: 1089a5967;  */

undefined4 * FUN_1089a5934(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = *(undefined4 *)*param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,*param_3);
  return param_1;
}



/* Entry: 1089a5968; end: 1089f4aab;  */

bool FUN_1089a5968(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  lVar3 = lVar1;
  if (lVar1 != lVar2) {
    _memcpy(param_2,*param_1 + lVar2,1);
    lVar3 = param_1[2] + 1;
  }
  param_1[2] = lVar3;
  return lVar1 != lVar2;
}



/* Entry: 1089f4aac; end: 1089f4b87;  */

void FUN_1089f4aac(ulong param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uStack_40;
  long lStack_38;
  
  if ((0xffffffffffffff02 < param_2 - 0xfeU) &&
     (uVar2 = param_1, uStack_40 = param_1, lStack_38 = param_2,
     func_0x000107c27944(param_1,param_2,&UNK_10f4f56e9,1), (uVar2 & 1) == 0)) {
    if (*(char *)(param_1 + param_2 + -1) == '.') {
      lStack_38 = param_2 + -1;
    }
    lVar5 = 0;
    puVar4 = (undefined1 *)0x0;
    while (puVar3 = &uStack_40, func_0x0001057fa6dc(&uStack_40,0x2e,puVar4),
          puVar3 != (ulong *)0xffffffffffffffff) {
      iVar1 = (int)&uStack_40;
      func_0x000107c2810c(&uStack_40,puVar4,(long)puVar3 - (long)puVar4);
      FUN_1089f4b88();
      if (iVar1 == 0) {
        return;
      }
      puVar4 = (undefined1 *)((long)puVar3 + 1);
      lVar5 = lVar5 + -1;
    }
    if (lVar5 != 0) {
      func_0x000107c2810c(&uStack_40,puVar4,0xffffffffffffffff);
      FUN_1089f4b88();
    }
  }
  return;
}



/* Entry: 1089f4b88; end: 1089f4cc7;  */

char * FUN_1089f4b88(char *param_1,long param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  char acStack_a0 [72];
  char acStack_58 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  builtin_strncpy(acStack_58,"0123456789",10);
  builtin_strncpy(acStack_a0,"-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",0x3f)
  ;
  if (((0xffffffffffffffc0 < param_2 - 0x40U) && (*param_1 != '-')) &&
     (param_1[param_2 + -1] != '-')) {
    lVar2 = param_2;
    do {
      if (lVar2 == 0) {
        if (param_3 == 0) {
          pcVar1 = (char *)0x1;
          goto LAB_1089f4c50;
        }
        goto LAB_1089f4c90;
      }
      param_1 = acStack_a0;
      FUN_1089f4cc8();
      lVar2 = lVar2 + -1;
    } while (param_1 != acStack_a0 + 0x3f);
  }
  pcVar1 = (char *)0x0;
  goto LAB_1089f4c50;
  while( true ) {
    param_1 = acStack_58;
    FUN_1089f4cc8();
    param_2 = param_2 + -1;
    if (param_1 == acStack_58 + 10) break;
LAB_1089f4c90:
    pcVar1 = (char *)(ulong)(param_2 != 0);
    if (param_2 == 0) break;
  }
LAB_1089f4c50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010061f9cc();
    return param_1;
  }
  return pcVar1;
}



/* Entry: 1089f4cc8; end: 1089f4d07;  */

void FUN_1089f4cc8(void)

{
  func_0x00010061f9cc();
  return;
}



/* Entry: 1089f4d08; end: 1089f4d2b;  */

undefined8 FUN_1089f4d08(undefined8 param_1)

{
  func_0x0001089f5a08();
  return param_1;
}



/* Entry: 1089f4d2c; end: 1089f4d2f;  */

undefined8 FUN_1089f4d2c(undefined8 param_1)

{
  func_0x0001089f5a08();
  return param_1;
}



/* Entry: 1089f4d30; end: 1089f4d43;  */

void FUN_1089f4d30(void)

{
  FUN_1089f4d08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089f4d44; end: 1089f4d63;  */

undefined ** FUN_1089f4d44(void)

{
  return &PTR_DAT_110aa8c58;
}



/* Entry: 1089f4d64; end: 1089f4dd7;  */

long * FUN_1089f4d64(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001089f59ec();
  if ((int)param_1[2] != 0) {
    func_0x0001089f5978();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001089f5978();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return param_4;
}



/* Entry: 1089f4dd8; end: 1089f4e47;  */

ulong FUN_1089f4dd8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 1089f4e48; end: 1089f4e7b;  */

long FUN_1089f4e48(long param_1)

{
  func_0x0001089f5a08();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1089f4d08();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1089f4e7c; end: 1089f4e7f;  */

long FUN_1089f4e7c(long param_1)

{
  func_0x0001089f5a08();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1089f4d08();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1089f4e80; end: 1089f4e93;  */

void FUN_1089f4e80(void)

{
  FUN_1089f4e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089f4e94; end: 1089f4e9f;  */

undefined ** FUN_1089f4e94(void)

{
  return &PTR_DAT_110aa8c90;
}



/* Entry: 1089f4ea0; end: 1089f503f;  */

void FUN_1089f4ea0(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001089f4d50(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1089f5040; end: 1089f5057;  */

void FUN_1089f5040(void)

{
  FUN_1089f4dd8();
  func_0x0001089f59a4();
  return;
}



/* Entry: 1089f5058; end: 1089f511b;  */

void FUN_1089f5058(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_1089f58d8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x0001089f4cd4(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089f511c; end: 1089f5147;  */

undefined8 FUN_1089f511c(undefined8 param_1)

{
  func_0x0001089f5a08();
  FUN_1089f5148(param_1);
  return param_1;
}



/* Entry: 1089f5148; end: 1089f5177;  */

long FUN_1089f5148(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1089f4d08();
  }
  __ZdlPv();
  FUN_1089f5774(param_1 + 0x30);
  FUN_1089f5774(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1089f5178; end: 1089f517b;  */

undefined8 FUN_1089f5178(undefined8 param_1)

{
  func_0x0001089f5a08();
  FUN_1089f5148(param_1);
  return param_1;
}



/* Entry: 1089f517c; end: 1089f518f;  */

void FUN_1089f517c(void)

{
  FUN_1089f511c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089f5190; end: 1089f519b;  */

undefined ** FUN_1089f5190(void)

{
  return &PTR_DAT_110aa8cd8;
}



/* Entry: 1089f519c; end: 1089f5203;  */

void FUN_1089f519c(long param_1)

{
  ulong *puVar1;
  
  FUN_1089f58c4(param_1 + 0x18);
  FUN_1089f58c4(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001089f4d50(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1089f5204; end: 1089f53c7;  */

long * FUN_1089f5204(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  int iVar7;
  int iVar8;
  
  func_0x0001089f59ec();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_1 = (long *)0x1;
    func_0x0001089f59c0(1,*(long *)(unaff_x20 + 0x48),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x48) + 0x18));
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x0001089f5978();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    func_0x0001089f5978();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    func_0x0001089f5978();
    FUN_1088b96ec();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    func_0x0001089f5978();
    FUN_1089f53c8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    func_0x0001089f5978();
    func_0x00010598f468();
    param_4 = param_1;
  }
  iVar8 = *(int *)(unaff_x20 + 0x20);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    func_0x0001089f5984();
    param_1 = (long *)0x8;
    func_0x0001089f59c0();
    param_4 = param_1;
  }
  iVar8 = *(int *)(unaff_x20 + 0x38);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    func_0x0001089f5984();
    param_1 = (long *)0x9;
    func_0x0001089f59c0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 100) != 0) {
    func_0x0001089f5978();
    func_0x0001089f53f0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    func_0x0001089f5978();
    func_0x0001089f5418();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x0001089f59fc();
    lVar6 = *(long *)(unaff_x20 + 0x68);
    plVar2 = (long *)0x61;
    func_0x000107c280a8(0x61,param_1);
    param_4 = plVar2 + 1;
    *plVar2 = lVar6;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x0001089f59fc();
    lVar6 = *(long *)(unaff_x20 + 0x78);
    plVar3 = (long *)0x69;
    func_0x000107c280a8(0x69,plVar2);
    param_4 = plVar3 + 1;
    *plVar3 = lVar6;
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x0001089f5978();
    func_0x0001089f5440();
    param_4 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar4;
        uVar1 = iVar7 - iVar8;
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar6,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 1089f53c8; end: 1089f5467;  */

void FUN_1089f53c8(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  
  FUN_1089f594c();
  iVar1 = 0x30;
  func_0x000107c280a8();
  func_0x0001089f5a1c();
  for (uVar2 = (ulong)iVar1; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_1 = (byte)uVar2 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar2;
  return;
}



/* Entry: 1089f5468; end: 1089f55fb;  */

void FUN_1089f5468(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int extraout_w8;
  int extraout_w9;
  ulong uVar3;
  int extraout_w10;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar4 = (long)*(int *)(param_1 + 0x20) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    FUN_1089f55fc(*puVar1);
    puVar1 = puVar1 + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar4 = (long)*(int *)(param_1 + 0x38) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    FUN_1089f55fc(*puVar1);
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1089f5040(*(undefined8 *)(param_1 + 0x48));
  }
  func_0x0001089f59d0(0xfffffff7);
  func_0x0001089f59d0();
  iVar2 = extraout_w10;
  if (*(long *)(param_1 + 0x68) != 0) {
    iVar2 = extraout_w10 + 9;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar2 = ((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0x70)) * extraout_w8) >> 6)
            + iVar2;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = ((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * extraout_w8) >> 6)
            + iVar2;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    iVar2 = iVar2 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 1089f55fc; end: 1089f5613;  */

void FUN_1089f55fc(void)

{
  func_0x0001089f4fa4();
  func_0x0001089f59a4();
  return;
}



/* Entry: 1089f5614; end: 1089f574b;  */

void FUN_1089f5614(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_1089f574c(param_1 + 0x18,param_2 + 0x18);
  FUN_1089f574c(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_1089f58d8(uVar2,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar2;
    }
    else {
      func_0x0001089f4cd4();
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_2 + 0x78);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1089f574c; end: 1089f5773;  */

void FUN_1089f574c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1089f5774; end: 1089f57a3;  */

long * FUN_1089f5774(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1089f57a4; end: 1089f58c3;  */

long FUN_1089f57a4(long param_1)

{
  FUN_1089f5774(param_1 + 0x20);
  FUN_1089f5774(param_1 + 8);
  return param_1;
}



/* Entry: 1089f58c4; end: 1089f58d7;  */

void FUN_1089f58c4(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1089f58d8; end: 1089f594b;  */

undefined8 * FUN_1089f58d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110aa8b78;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x0001089f4cd4();
  return puVar1;
}



/* Entry: 1089f594c; end: 1089f5a27;  */

ulong * FUN_1089f594c(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_3 < (ulong *)*param_1) {
    return param_3;
  }
  do {
    if ((char)param_1[7] == '\x01') {
      return param_1 + 2;
    }
    uVar1 = *param_1;
    puVar2 = param_1;
    func_0x0001006b07dc();
    param_3 = (ulong *)((long)puVar2 + (long)((int)param_3 - (int)uVar1));
  } while ((ulong *)*param_1 <= param_3);
  return param_3;
}



/* Entry: 1089f5a28; end: 1089f5ab3;  */

void FUN_1089f5a28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined2 *puVar3;
  long *plVar4;
  long lVar5;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined2 uStack_a0;
  byte bStack_9e;
  uint uStack_9c;
  long lStack_98;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  FUN_1089f5b74(alStack_48);
  plVar4 = alStack_48;
  FUN_1089f5ab4(&uStack_60,plVar4);
  plVar2 = alStack_48;
  FUN_1089667b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_1089667b4(alStack_48);
  __Unwind_Resume();
  lVar5 = *plVar2;
  lVar1 = lVar5 + plVar2[1];
  uStack_a0 = 0;
  bStack_9e = 0;
  uStack_9c = 0;
  lStack_98 = 0;
  while( true ) {
    if (lVar5 == lVar1) {
      return;
    }
    puVar3 = &uStack_a0;
    func_0x000108aa86ac(puVar3,lVar5,lVar1 - lVar5);
    if ((int)puVar3 == 0) break;
    lStack_b0 = (ulong)uStack_9c + (ulong)bStack_9e + 4;
    lStack_b8 = lVar5;
    lStack_a8 = lStack_b0;
    FUN_1089f5b54(plVar4,&uStack_a0,&lStack_b8);
    lVar5 = lStack_98 + (ulong)uStack_9c + (ulong)bStack_9e;
  }
  return;
}



/* Entry: 1089f5ab4; end: 1089f5b53;  */

void FUN_1089f5ab4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined2 uStack_40;
  byte bStack_3e;
  uint uStack_3c;
  long lStack_38;
  
  lVar3 = *param_1;
  lVar1 = lVar3 + param_1[1];
  uStack_40 = 0;
  bStack_3e = 0;
  uStack_3c = 0;
  lStack_38 = 0;
  while( true ) {
    if (lVar3 == lVar1) {
      return;
    }
    puVar2 = &uStack_40;
    func_0x000108aa86ac(puVar2,lVar3,lVar1 - lVar3);
    if ((int)puVar2 == 0) break;
    lStack_50 = (ulong)uStack_3c + (ulong)bStack_3e + 4;
    lStack_58 = lVar3;
    lStack_48 = lStack_50;
    FUN_1089f5b54(param_2,&uStack_40,&lStack_58);
    lVar3 = lStack_38 + (ulong)uStack_3c + (ulong)bStack_3e;
  }
  return;
}



/* Entry: 1089f5b54; end: 1089f5b73;  */

long * FUN_1089f5b54(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001089f5b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    plVar1[3] = 0;
  }
  else if (lVar2 == param_2) {
    plVar1[3] = (long)plVar1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),plVar1);
  }
  else {
    plVar1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return plVar1;
}



/* Entry: 1089f5b74; end: 1089f5bd3;  */

long FUN_1089f5b74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1089f5bd4; end: 108a3e1ef;  */

void FUN_1089f5bd4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x200000004;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0xf12) = 1;
  param_1[0xf13] = 0;
  *(undefined1 *)(param_1 + 0xf14) = 0;
  *(undefined1 *)(param_1 + 0xf16) = 0;
  return;
}



/* Entry: 108a3e1f0; end: 108a3eb23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108a3e1f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined ********param_5,undefined ********param_6,long param_7,uint param_8,
                  undefined *******param_9,undefined4 param_10,undefined4 param_11,uint param_12,
                  undefined4 param_13,undefined ********param_14)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  long lVar9;
  undefined *******pppppppuVar10;
  undefined ******ppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined8 *puVar13;
  undefined ********ppppppppuVar14;
  uint uVar15;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined *******pppppppuVar16;
  undefined ********ppppppppuVar17;
  undefined ******ppppppuVar18;
  undefined *******pppppppuVar19;
  undefined ********ppppppppuVar20;
  undefined ********unaff_x20;
  ulong *unaff_x21;
  undefined ********unaff_x22;
  long unaff_x23;
  undefined ******ppppppuVar21;
  undefined ********unaff_x24;
  undefined *******pppppppuVar22;
  undefined ********unaff_x25;
  undefined ********unaff_x26;
  undefined *******pppppppuVar23;
  undefined ********unaff_x28;
  int iVar24;
  ulong uVar25;
  int iVar27;
  undefined *******pppppppuVar26;
  undefined *******pppppppuVar28;
  undefined4 uVar29;
  undefined ******ppppppuVar30;
  undefined ******ppppppuVar31;
  undefined4 uVar32;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined ********ppppppppuStack_270;
  undefined ********ppppppppuStack_268;
  undefined ********ppppppppuStack_260;
  undefined ********ppppppppuStack_258;
  undefined ********ppppppppuStack_250;
  long lStack_248;
  undefined ********ppppppppuStack_240;
  ulong *puStack_238;
  undefined ********ppppppppuStack_230;
  undefined ********ppppppppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 *puStack_208;
  uint uStack_1fc;
  undefined *******pppppppuStack_1f8;
  undefined *******pppppppuStack_1f0;
  long lStack_1e8;
  undefined *******pppppppuStack_1e0;
  undefined8 *puStack_1d8;
  uint uStack_1cc;
  undefined ********ppppppppuStack_1c8;
  uint uStack_1bc;
  undefined *******pppppppuStack_1b8;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long lStack_1a0;
  undefined *******pppppppuStack_198;
  undefined ********ppppppppuStack_190;
  undefined4 uStack_184;
  undefined ********ppppppppuStack_180;
  undefined ********ppppppppuStack_178;
  long lStack_170;
  undefined ********ppppppppuStack_168;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined *******pppppppuStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *******pppppppuStack_108;
  undefined ******ppppppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 *puStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined *******pppppppuStack_90;
  undefined ******ppppppuStack_88;
  long lStack_80;
  
  pppppppuStack_150 = (undefined *******)&PTR_FUN_110ab2c50;
  uStack_148 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_120 = 0;
  ppppppppuVar20 = (undefined ********)&uStack_d8;
  ppppppppuVar14 = param_6;
  puStack_208 = param_1;
  ppppppppuStack_1c8 = param_5;
  uStack_1bc = param_8;
  pppppppuStack_1b8 = param_9;
  lStack_1a8 = param_7;
  lStack_1a0 = param_2;
  uStack_118 = param_3;
  uStack_110 = param_4;
  func_0x000107c28520(&uStack_d8,&uStack_118);
  uVar25 = CONCAT44(uStack_cc,uStack_d0);
  ppppppppuVar12 = (undefined ********)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
  if (-1 < (char)uStack_c4._3_1_) {
    uVar25 = (ulong)uStack_c4._3_1_;
    ppppppppuVar12 = ppppppppuVar20;
  }
  ppppppppuVar7 = &pppppppuStack_150;
  func_0x000107c30344(ppppppppuVar7,ppppppppuVar12,uVar25);
  if (((ulong)ppppppppuVar7 & 1) == 0) {
LAB_108a3eadc:
    func_0x000108a3ffc4();
    func_0x000108a3ffb8();
    func_0x000108aed9a4();
  }
  else {
    uStack_1cc = param_12 >> 8 & 0xff;
    uStack_1fc = param_12 & 0xff;
    ppppppppuVar7 = (undefined ********)&uStack_d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    if (param_14 != (undefined ********)0x0) {
      uVar6 = *(undefined8 *)(lStack_1a0 + 0x10);
      func_0x00010894b400(uVar6);
      ppppppppuVar7 = param_14;
      (*(code *)(*param_14)[4])(param_14,&pppppppuStack_150,uVar6);
    }
    unaff_x23 = 0;
    uStack_1ac = param_11;
    uStack_184 = param_10;
    ppppppppuStack_168 = (undefined ********)0x0;
    ppppppppuStack_160 = (undefined ********)0x0;
    unaff_x24 = (undefined ********)&ppppppppuStack_178;
    ppppppppuStack_158 = (undefined ********)0x0;
    unaff_x21 = &uStack_138;
    ppppppppuStack_178 = (undefined ********)0x0;
    lStack_170 = 0;
    ppppppppuStack_190 = (undefined ********)0x0;
    if (lStack_1a8 != 0) {
      ppppppppuStack_190 = param_6;
    }
    pppppppuStack_198 = &ppppppuStack_88;
    puStack_1d8 = &uStack_e8;
    pppppppuStack_1e0 = &ppppppuStack_100;
    lStack_1e8 = lStack_1a8 << 2;
    pppppppuStack_1f8 = (undefined *******)&PTR_FUN_110aab290;
    pppppppuStack_1f0 = (undefined *******)&PTR_DAT_110aab230;
    ppppppppuVar20 = param_14;
    unaff_x22 = (undefined ********)0x0;
    unaff_x26 = (undefined ********)0x0;
    ppppppppuStack_180 = unaff_x24;
    for (; unaff_x23 < (int)uStack_130; unaff_x23 = unaff_x23 + 1) {
      puVar1 = unaff_x21;
      if ((uStack_138 & 1) != 0) {
        puVar1 = (ulong *)(uStack_138 + unaff_x23 * 8 + 7);
      }
      param_6 = (undefined ********)*puVar1;
      ppppppppuVar12 = unaff_x22;
      ppppppppuVar8 = unaff_x26;
      switch(*(undefined4 *)(param_6 + 5)) {
      case 0x15:
        func_0x000108a4005c();
        if ((extraout_x8 & 1) == 0) goto code_r0x000108a3e944;
        if (((uint)extraout_x8 >> 1 & 1) == 0) goto code_r0x000108a3e95c;
        if (((uint)extraout_x8 >> 2 & 1) == 0) goto code_r0x000108a3e9ec;
        pppppppuVar16 = ppppppppuVar20[3];
        uVar15 = *(uint *)(pppppppuVar16 + 2);
        if ((uVar15 & 1) == 0) goto code_r0x000108a3e974;
        if ((uVar15 >> 1 & 1) == 0) goto code_r0x000108a3ea34;
        if ((uVar15 >> 2 & 1) == 0) goto code_r0x000108a3ea04;
        if ((uVar15 >> 3 & 1) == 0) goto code_r0x000108a3e98c;
        unaff_x25 = (undefined ********)ppppppppuVar20[4];
        uVar15 = *(uint *)(unaff_x25 + 2);
        if ((uVar15 & 1) == 0) goto code_r0x000108a3ea4c;
        if ((uVar15 >> 1 & 1) == 0) goto code_r0x000108a3ea1c;
        if ((uVar15 >> 2 & 1) == 0) goto code_r0x000108a3e9a4;
        if ((uVar15 >> 3 & 1) != 0) {
          FUN_108a3f138((float)*(int *)(pppppppuVar16 + 3),
                        *(undefined4 *)((long)pppppppuVar16 + 0x1c),
                        (float)*(int *)(pppppppuVar16 + 4),
                        *(undefined4 *)((long)pppppppuVar16 + 0x24),&pppppppuStack_90);
          FUN_108a3f138((float)*(int *)(unaff_x25 + 3),*(undefined4 *)((long)unaff_x25 + 0x1c),
                        (float)*(int *)(unaff_x25 + 4),*(undefined4 *)((long)unaff_x25 + 0x24),
                        &uStack_f0);
          uStack_a4 = *(undefined4 *)(ppppppppuVar20 + 5);
          uStack_d8._0_4_ = CONCAT31(uStack_d8._1_3_,(char)uStack_1fc);
          uStack_cc = SUB84(ppppppuStack_88,0);
          uStack_c8 = (undefined4)((ulong)ppppppuStack_88 >> 0x20);
          uStack_d8._4_4_ = SUB84(pppppppuStack_90,0);
          uStack_d0 = (undefined4)((ulong)pppppppuStack_90 >> 0x20);
          uStack_c4 = lStack_80;
          uStack_b4 = uStack_e8;
          puStack_bc = uStack_f0;
          uStack_ac = uStack_e0;
          unaff_x28 = (undefined ********)0x80;
          __Znwm();
          ppppppppuVar7 = unaff_x28;
          func_0x000108a40434();
          break;
        }
        goto code_r0x000108a3ea64;
      case 0x16:
        func_0x000108a4005c();
        uVar15 = (uint)extraout_x8_01;
        if ((extraout_x8_01 & 1) != 0) {
          if ((uVar15 >> 1 & 1) != 0) {
            *pppppppuStack_198 = (undefined ******)0x0;
            pppppppuStack_198[1] = (undefined ******)0x0;
            pppppppuStack_90 = pppppppuStack_198;
            if ((uVar15 >> 2 & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)(ppppppppuVar20 + 4));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            if ((uVar15 >> 3 & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)((long)ppppppppuVar20 + 0x24));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            if ((uVar15 >> 8 & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)(ppppppppuVar20 + 7));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            if ((uVar15 >> 9 & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)((long)ppppppppuVar20 + 0x3c));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            if ((uVar15 >> 10 & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)(ppppppppuVar20 + 8));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            if ((uVar15 >> 0xb & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)((long)ppppppppuVar20 + 0x44));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            if ((uVar15 >> 4 & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)(ppppppppuVar20 + 5));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            if ((uVar15 >> 5 & 1) != 0) {
              func_0x000108a3ffa4(*(undefined4 *)((long)ppppppppuVar20 + 0x2c));
              uVar15 = *(uint *)(ppppppppuVar20 + 2);
            }
            uVar2 = *(uint *)(ppppppppuVar20 + 6);
            uVar3 = *(uint *)((long)ppppppppuVar20 + 0x34);
            *puStack_1d8 = 0;
            puStack_1d8[1] = 0;
            uStack_f0 = puStack_1d8;
            uVar32 = *(undefined4 *)(ppppppppuVar20 + 3);
            uVar29 = *(undefined4 *)((long)ppppppppuVar20 + 0x1c);
            pppppppuStack_108 = pppppppuStack_90;
            ppppppuStack_100 = ppppppuStack_88;
            lStack_f8 = lStack_80;
            if (lStack_80 == 0) {
              pppppppuStack_108 = pppppppuStack_1e0;
            }
            else {
              ppppppuStack_88[2] = (undefined *****)pppppppuStack_1e0;
              pppppppuStack_90 = pppppppuStack_198;
              *pppppppuStack_198 = (undefined ******)0x0;
              pppppppuStack_198[1] = (undefined ******)0x0;
            }
            ppppppppuVar14 = (undefined ********)(ulong)(uVar2 & (int)(uVar15 << 0x19) >> 0x1f);
            param_5 = (undefined ********)(ulong)uStack_1bc;
            func_0x000108a406f4(uVar32,uVar29,&uStack_d8,&uStack_f0,uStack_184,param_5,
                                ppppppppuVar14,uVar3 & (int)(uVar15 << 0x18) >> 0x1f,
                                &pppppppuStack_108);
            FUN_108a3f36c(&pppppppuStack_108);
            func_0x000105340e64(&uStack_f0);
            unaff_x20 = ppppppppuStack_190;
            for (lVar9 = lStack_1e8; lVar9 != 0; lVar9 = lVar9 + -4) {
              uVar25 = (ulong)uStack_f0 >> 0x20;
              uStack_f0 = (undefined8 *)CONCAT44((int)uVar25,*(undefined4 *)unaff_x20);
              FUN_108a3f24c(&uStack_d8,&uStack_f0);
              unaff_x20 = (undefined ********)((long)unaff_x20 + 4);
            }
            unaff_x28 = (undefined ********)0x80;
            __Znwm();
            func_0x000108a407cc();
            func_0x000108a407a4(&uStack_d8);
            ppppppppuVar7 = &pppppppuStack_90;
            FUN_108a3f36c();
            ppppppppuVar20 = (undefined ********)0x0;
            break;
          }
          goto code_r0x000108a3e9d4;
        }
        goto code_r0x000108a3eaac;
      case 0x17:
        func_0x000108a4005c();
        if ((extraout_x8_02 & 1) != 0) {
          if (((uint)extraout_x8_02 >> 1 & 1) != 0) {
            func_0x000108a40034();
            *ppppppppuVar7 = pppppppuStack_1f0;
            pppppppuVar16 = ppppppppuVar20[3];
            ppppppppuVar7[1] = (undefined *******)ppppppppuStack_1c8;
            ppppppppuVar7[2] = pppppppuStack_1b8;
            ppppppppuVar7[3] = pppppppuVar16;
            ppppppppuVar7[4] = pppppppuStack_1b8;
            *(undefined1 *)(ppppppppuVar7 + 5) = 0;
            *(undefined1 *)((long)ppppppppuVar7 + 0x2c) = 0;
            unaff_x28 = ppppppppuVar7;
            break;
          }
          goto code_r0x000108a3ea7c;
        }
        goto code_r0x000108a3eac4;
      case 0x18:
        func_0x000108a4005c();
        if ((extraout_x8_00 & 1) == 0) goto code_r0x000108a3e9bc;
        if (((uint)extraout_x8_00 >> 1 & 1) != 0) {
          ppppppppuVar7 = (undefined ********)0x20;
          __Znwm();
          *ppppppppuVar7 = pppppppuStack_1f8;
          pppppppuVar16 = ppppppppuVar20[3];
          *(char *)(ppppppppuVar7 + 1) = (char)uStack_1cc;
          *(undefined ********)((long)ppppppppuVar7 + 0xc) = pppppppuVar16;
          *(char *)((long)ppppppppuVar7 + 0x14) = (char)uStack_1cc;
          *(undefined1 *)(ppppppppuVar7 + 3) = 0;
          *(undefined1 *)((long)ppppppppuVar7 + 0x1c) = 0;
          unaff_x28 = ppppppppuVar7;
          break;
        }
        goto code_r0x000108a3ea94;
      case 0x19:
        uVar32 = *(undefined4 *)(param_6[4] + 2);
        uVar25 = CONCAT44(uVar32,uVar32) & 0x200000001;
        ppppppuVar11 = param_6[4][3];
        iVar24 = -(uint)((int)uVar25 == 0);
        iVar27 = -(uint)((int)(uVar25 >> 0x20) == 0);
        uVar32 = CONCAT13((byte)((ulong)ppppppuVar11 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                          CONCAT12((byte)((ulong)ppppppuVar11 >> 0x10) &
                                   ~(byte)((uint)iVar24 >> 0x10),
                                   CONCAT11((byte)((ulong)ppppppuVar11 >> 8) &
                                            ~(byte)((uint)iVar24 >> 8),
                                            (byte)ppppppuVar11 & ~(byte)iVar24)));
        unaff_x28 = (undefined ********)0x38;
        __Znwm();
        uStack_d8._0_4_ = uStack_1ac;
        uStack_d8._4_4_ = uStack_184;
        uStack_cc = (undefined4)
                    (CONCAT17((byte)((ulong)ppppppuVar11 >> 0x38) & ~(byte)((uint)iVar27 >> 0x18),
                              CONCAT16((byte)((ulong)ppppppuVar11 >> 0x30) &
                                       ~(byte)((uint)iVar27 >> 0x10),
                                       CONCAT15((byte)((ulong)ppppppuVar11 >> 0x28) &
                                                ~(byte)((uint)iVar27 >> 8),
                                                CONCAT14((byte)((ulong)ppppppuVar11 >> 0x20) &
                                                         ~(byte)iVar27,uVar32)))) >> 0x20);
        ppppppppuVar7 = unaff_x28;
        uStack_d0 = uVar32;
        func_0x000108a3e028();
        break;
      case 0x1a:
        goto code_r0x000108a3e880;
      case 0x1b:
        ppppppppuVar20 = (undefined ********)(ulong)*(uint *)(param_6[4] + 3);
        unaff_x25 = (undefined ********)(ulong)*(byte *)((long)param_6[4] + 0x1c);
        unaff_x28 = (undefined ********)0x40;
        __Znwm();
        ppppppppuVar7 = unaff_x28;
        param_5 = ppppppppuVar20;
        ppppppppuVar14 = unaff_x25;
        func_0x000108a40e58();
        break;
      default:
        unaff_x28 = (undefined ********)0x0;
      }
      ppppppppuVar8 = ppppppppuVar7;
      if (((ulong)param_6[2] & 1) != 0) {
        pppppppuVar16 = param_6[3];
        if ((*(uint *)(pppppppuVar16 + 2) & 1) == 0) {
          func_0x000108a3ffc4();
          func_0x000108a3ffb8();
          func_0x000108aed9a4();
LAB_108a3e924:
          func_0x00010bdb1f6c();
          ppppppppuVar8 = ppppppppuVar7;
        }
        else if ((*(uint *)(pppppppuVar16 + 2) >> 1 & 1) != 0) {
          uVar15 = *(uint *)(pppppppuVar16 + 3);
          unaff_x25 = (undefined ********)(ulong)uVar15;
          uVar32 = *(undefined4 *)((long)pppppppuVar16 + 0x1c);
          unaff_x20 = unaff_x24;
          ppppppppuVar17 = ppppppppuStack_178;
          while (param_6 = unaff_x20, ppppppppuVar17 != (undefined ********)0x0) {
            while (param_6 = ppppppppuVar17, param_6[4] <= unaff_x28) {
              if (unaff_x28 <= param_6[4]) goto LAB_108a3e7dc;
              ppppppppuVar17 = (undefined ********)param_6[1];
              if ((undefined ********)param_6[1] == (undefined ********)0x0) {
                unaff_x20 = param_6 + 1;
                goto LAB_108a3e798;
              }
            }
            unaff_x20 = param_6;
            ppppppppuVar17 = (undefined ********)*param_6;
          }
LAB_108a3e798:
          func_0x000108a40034();
          ppppppppuVar7[4] = (undefined *******)unaff_x28;
          ppppppppuVar7[5] = (undefined *******)0x0;
          *ppppppppuVar7 = (undefined *******)0x0;
          ppppppppuVar7[1] = (undefined *******)0x0;
          ppppppppuVar7[2] = (undefined *******)param_6;
          *unaff_x20 = (undefined *******)ppppppppuVar7;
          if ((undefined ********)*ppppppppuStack_180 != (undefined ********)0x0) {
            ppppppppuStack_180 = (undefined ********)*ppppppppuStack_180;
          }
          ppppppppuVar8 = ppppppppuStack_178;
          func_0x0001089ad0fc(ppppppppuStack_178,ppppppppuVar7);
          lStack_170 = lStack_170 + 1;
          ppppppppuVar20 = ppppppppuVar7;
          param_6 = ppppppppuVar7;
LAB_108a3e7dc:
          *(uint *)(param_6 + 5) = uVar15;
          *(undefined4 *)((long)param_6 + 0x2c) = uVar32;
          goto LAB_108a3e7e4;
        }
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
LAB_108a3e940:
        func_0x000104bfe188();
        ppppppppuVar7 = ppppppppuVar8;
code_r0x000108a3e944:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3e95c:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3e974:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3e98c:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3e9a4:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3e9bc:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3e9d4:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3e9ec:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3ea04:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3ea1c:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3ea34:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3ea4c:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3ea64:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3ea7c:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3ea94:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3eaac:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
code_r0x000108a3eac4:
        func_0x000108a3ffc4();
        func_0x000108a3ffb8();
        func_0x000108aed9a4();
        goto LAB_108a3eadc;
      }
LAB_108a3e7e4:
      ppppppppuVar7 = ppppppppuVar8;
      if (unaff_x26 < ppppppppuStack_158) {
        ppppppppuVar8 = unaff_x26 + 1;
        *unaff_x26 = (undefined *******)unaff_x28;
      }
      else {
        ppppppppuVar20 = (undefined ********)((long)unaff_x26 - (long)unaff_x22);
        unaff_x25 = (undefined ********)((long)ppppppppuVar20 >> 3);
        ppppppppuVar12 = (undefined ********)((long)unaff_x25 + 1);
        if ((ulong)ppppppppuVar12 >> 0x3d != 0) goto LAB_108a3e924;
        unaff_x20 = (undefined ********)((long)ppppppppuStack_158 - (long)unaff_x22 >> 2);
        if (unaff_x20 <= ppppppppuVar12) {
          unaff_x20 = ppppppppuVar12;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppppppppuStack_158 - (long)unaff_x22)) {
          unaff_x20 = (undefined ********)0x1fffffffffffffff;
        }
        if (unaff_x20 == (undefined ********)0x0) {
          lVar9 = 0;
        }
        else {
          if ((ulong)unaff_x20 >> 0x3d != 0) goto LAB_108a3e940;
          lVar9 = (long)unaff_x20 << 3;
          __Znwm();
        }
        puVar13 = (undefined8 *)(lVar9 + (long)ppppppppuVar20);
        unaff_x20 = (undefined ********)(lVar9 + (long)unaff_x20 * 8);
        ppppppppuVar12 = (undefined ********)(puVar13 + -(long)unaff_x25);
        ppppppppuVar8 = (undefined ********)(puVar13 + 1);
        *puVar13 = unaff_x28;
        ppppppppuVar7 = ppppppppuVar12;
        _memcpy(ppppppppuVar12,unaff_x22,ppppppppuVar20);
        ppppppppuStack_158 = unaff_x20;
        unaff_x25 = ppppppppuVar12;
        if (unaff_x22 != (undefined ********)0x0) {
          ppppppppuStack_160 = ppppppppuVar8;
          __ZdlPv();
          ppppppppuVar7 = unaff_x22;
        }
      }
      ppppppppuStack_160 = ppppppppuVar8;
code_r0x000108a3e880:
      unaff_x22 = ppppppppuVar12;
      unaff_x26 = ppppppppuVar8;
    }
    ppppppppuStack_168 = unaff_x22;
    if (lStack_170 == 0) {
      func_0x000108a40068();
LAB_108a3e8b4:
      FUN_108a3eb24();
      uVar6 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
      uStack_d8._0_4_ = 0;
      uStack_d8._4_4_ = 0;
      *puStack_208 = uVar6;
      func_0x000108a3f594(&uStack_d8);
      func_0x000108a3f560(ppppppppuStack_178);
      FUN_108a3f400(&ppppppppuStack_168);
      FUN_108b32f34(&pppppppuStack_150);
      return;
    }
    if ((uStack_140 & 1) != 0) {
      if (((uint)uStack_140 >> 1 & 1) != 0) {
        func_0x000108a40068();
        goto LAB_108a3e8b4;
      }
      goto LAB_108a3eb0c;
    }
  }
  func_0x000108a3ffc4();
  func_0x000108a3ffb8();
  func_0x000108aed9a4();
LAB_108a3eb0c:
  func_0x000108a3ffc4();
  ppppppuVar11 = (undefined ******)&UNK_10f4f703c;
  func_0x000108a3ffb8();
  puVar13 = (undefined8 *)0x137;
  func_0x000108aed9a4();
  pcStack_218 = FUN_108a3eb24;
  pppppppuVar10 = (undefined *******)0xb0;
  ppppppppuStack_270 = unaff_x28;
  ppppppppuStack_268 = param_6;
  ppppppppuStack_260 = unaff_x26;
  ppppppppuStack_258 = unaff_x25;
  ppppppppuStack_250 = unaff_x24;
  lStack_248 = unaff_x23;
  ppppppppuStack_240 = unaff_x22;
  puStack_238 = unaff_x21;
  ppppppppuStack_230 = unaff_x20;
  ppppppppuStack_228 = ppppppppuVar20;
  puStack_220 = &stack0xfffffffffffffff0;
  __Znwm();
  pppppppuVar16 = *param_5;
  pppppppuVar28 = param_5[2];
  pppppppuVar26 = param_5[1];
  *param_5 = (undefined *******)0x0;
  param_5[1] = (undefined *******)0x0;
  param_5[2] = (undefined *******)0x0;
  ppppppuVar18 = (undefined ******)*puVar13;
  *pppppppuVar10 = (undefined ******)&PTR_FUN_110aab260;
  pppppppuVar10[1] = ppppppuVar18;
  if (ppppppuVar18 != (undefined ******)0x0) {
    ppppppuVar18 = ppppppuVar18 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar18,0x10);
      if (bVar5) {
        *(int *)ppppppuVar18 = *(int *)ppppppuVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppppuVar21 = (undefined ******)puVar13[2];
  ppppppuVar18 = (undefined ******)puVar13[1];
  pppppppuVar22 = pppppppuVar10 + 0x14;
  *pppppppuVar22 = (undefined ******)0x0;
  ppppppuVar31 = (undefined ******)puVar13[4];
  ppppppuVar30 = (undefined ******)puVar13[3];
  pppppppuVar10[3] = ppppppuVar21;
  pppppppuVar10[2] = ppppppuVar18;
  pppppppuVar10[5] = ppppppuVar31;
  pppppppuVar10[4] = ppppppuVar30;
  pppppppuVar10[6] = ppppppuVar11;
  pppppppuVar10[7] = (undefined ******)pppppppuVar16;
  pppppppuVar10[9] = (undefined ******)pppppppuVar28;
  pppppppuVar10[8] = (undefined ******)pppppppuVar26;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_288 = 0;
  *(undefined1 *)(pppppppuVar10 + 10) = 0;
  *(undefined1 *)(pppppppuVar10 + 0xb) = 0;
  pppppppuVar10[0x15] = (undefined ******)0x0;
  pppppppuVar10[0xd] = (undefined ******)0x0;
  pppppppuVar10[0xc] = (undefined ******)0x0;
  pppppppuVar10[0xf] = (undefined ******)0x0;
  pppppppuVar10[0xe] = (undefined ******)0x0;
  pppppppuVar10[0x11] = (undefined ******)0x0;
  pppppppuVar10[0x10] = (undefined ******)0x0;
  pppppppuVar10[0x12] = (undefined ******)0x0;
  pppppppuVar10[0x13] = (undefined ******)pppppppuVar22;
  ppppppuVar11 = (undefined ******)0x0;
  for (; pppppppuVar16 != pppppppuVar26; pppppppuVar16 = pppppppuVar16 + 1) {
    ppppppuVar18 = *pppppppuVar16;
    if (ppppppuVar11 < pppppppuVar10[0xf]) {
      ppppppuVar30 = ppppppuVar11 + 1;
      *ppppppuVar11 = (undefined *****)ppppppuVar18;
    }
    else {
      lVar9 = ((long)ppppppuVar11 - (long)pppppppuVar10[0xd] >> 3) + 1;
      pppppppuVar28 = pppppppuVar10 + 0xd;
      FUN_108a3f45c();
      ppppppuVar11 = pppppppuVar10[0xd];
      ppppppuVar21 = pppppppuVar10[0xe];
      if (pppppppuVar28 == (undefined *******)0x0) {
        lVar9 = 0;
        ppppppuVar30 = ppppppuVar11;
        ppppppuVar31 = ppppppuVar21;
      }
      else {
        FUN_108a3f49c();
        ppppppuVar30 = pppppppuVar10[0xd];
        ppppppuVar31 = pppppppuVar10[0xe];
      }
      puVar13 = (undefined8 *)((long)pppppppuVar28 + ((long)ppppppuVar21 - (long)ppppppuVar11));
      ppppppuVar21 = (undefined ******)((long)puVar13 - ((long)ppppppuVar31 - (long)ppppppuVar30));
      ppppppuVar30 = (undefined ******)(puVar13 + 1);
      *puVar13 = ppppppuVar18;
      _memcpy(ppppppuVar21);
      ppppppuVar11 = pppppppuVar10[0xd];
      pppppppuVar10[0xd] = ppppppuVar21;
      pppppppuVar10[0xe] = ppppppuVar30;
      pppppppuVar10[0xf] = (undefined ******)(pppppppuVar28 + lVar9);
      if (ppppppuVar11 != (undefined ******)0x0) {
        __ZdlPv();
      }
    }
    pppppppuVar10[0xe] = ppppppuVar30;
    ppppppuVar11 = ppppppuVar30;
  }
  ppppppppuVar12 = (undefined ********)(pppppppuVar10 + 0x10);
  FUN_108a3ed60(ppppppppuVar12,pppppppuVar10 + 0xd);
  ppppppppuVar20 = (undefined ********)*ppppppppuVar14;
  do {
    if (ppppppppuVar20 == ppppppppuVar14 + 1) {
      *ppppppppuVar7 = pppppppuVar10;
      FUN_108a3f400(&uStack_288);
      return;
    }
    pppppppuVar16 = ppppppppuVar20[4];
    pppppppuVar26 = ppppppppuVar20[5];
    pppppppuVar19 = (undefined *******)*pppppppuVar22;
    pppppppuVar28 = pppppppuVar22;
    while (pppppppuVar23 = pppppppuVar28, pppppppuVar19 != (undefined *******)0x0) {
      while (pppppppuVar28 = pppppppuVar19, pppppppuVar28[4] <= pppppppuVar16) {
        if (pppppppuVar16 <= pppppppuVar28[4]) goto LAB_108a3ed20;
        pppppppuVar19 = (undefined *******)pppppppuVar28[1];
        if ((undefined *******)pppppppuVar28[1] == (undefined *******)0x0) {
          pppppppuVar23 = pppppppuVar28 + 1;
          goto LAB_108a3ece4;
        }
      }
      pppppppuVar19 = (undefined *******)*pppppppuVar28;
    }
LAB_108a3ece4:
    func_0x000108a40034();
    ppppppppuVar12[4] = pppppppuVar16;
    ppppppppuVar12[5] = pppppppuVar26;
    *ppppppppuVar12 = (undefined *******)0x0;
    ppppppppuVar12[1] = (undefined *******)0x0;
    ppppppppuVar12[2] = pppppppuVar28;
    *pppppppuVar23 = (undefined ******)ppppppppuVar12;
    if ((undefined ******)*pppppppuVar10[0x13] != (undefined ******)0x0) {
      pppppppuVar10[0x13] = (undefined ******)*pppppppuVar10[0x13];
    }
    func_0x0001089ad0fc(pppppppuVar10[0x14],ppppppppuVar12);
    pppppppuVar10[0x15] = (undefined ******)((long)pppppppuVar10[0x15] + 1);
LAB_108a3ed20:
    func_0x000107c2a6bc();
    ppppppppuVar12 = ppppppppuVar20;
  } while( true );
}



/* Entry: 108a3eb24; end: 108a3ed5f;  */

void FUN_108a3eb24(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = (undefined8 *)0xb0;
  __Znwm();
  puVar13 = (undefined8 *)*param_4;
  lVar7 = param_4[2];
  puVar10 = (undefined8 *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  lVar8 = *param_2;
  *puVar5 = &PTR_FUN_110aab260;
  puVar5[1] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar11 = param_2[2];
  lVar8 = param_2[1];
  puVar12 = puVar5 + 0x14;
  *puVar12 = 0;
  lVar17 = param_2[4];
  lVar16 = param_2[3];
  puVar5[3] = lVar11;
  puVar5[2] = lVar8;
  puVar5[5] = lVar17;
  puVar5[4] = lVar16;
  puVar5[6] = param_3;
  puVar5[7] = puVar13;
  puVar5[9] = lVar7;
  puVar5[8] = puVar10;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar5[0x15] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = puVar12;
  puVar6 = (undefined8 *)0x0;
  for (; puVar13 != puVar10; puVar13 = puVar13 + 1) {
    uVar15 = *puVar13;
    if (puVar6 < (undefined8 *)puVar5[0xf]) {
      puVar14 = puVar6 + 1;
      *puVar6 = uVar15;
    }
    else {
      lVar8 = ((long)puVar6 - puVar5[0xd] >> 3) + 1;
      puVar6 = puVar5 + 0xd;
      FUN_108a3f45c();
      lVar7 = puVar5[0xd];
      lVar11 = puVar5[0xe];
      if (puVar6 == (undefined8 *)0x0) {
        lVar8 = 0;
        lVar16 = lVar7;
        lVar17 = lVar11;
      }
      else {
        FUN_108a3f49c();
        lVar16 = puVar5[0xd];
        lVar17 = puVar5[0xe];
      }
      puVar9 = (undefined8 *)((long)puVar6 + (lVar11 - lVar7));
      lVar11 = (long)puVar9 - (lVar17 - lVar16);
      puVar14 = puVar9 + 1;
      *puVar9 = uVar15;
      _memcpy(lVar11);
      lVar7 = puVar5[0xd];
      puVar5[0xd] = lVar11;
      puVar5[0xe] = puVar14;
      puVar5[0xf] = puVar6 + lVar8;
      if (lVar7 != 0) {
        __ZdlPv();
      }
    }
    puVar5[0xe] = puVar14;
    puVar6 = puVar14;
  }
  puVar13 = puVar5 + 0x10;
  FUN_108a3ed60(puVar13,puVar5 + 0xd);
  puVar10 = (undefined8 *)*param_5;
  do {
    if (puVar10 == param_5 + 1) {
      *param_1 = puVar5;
      FUN_108a3f400(&uStack_78);
      return;
    }
    uVar2 = puVar10[4];
    uVar15 = puVar10[5];
    puVar9 = (undefined8 *)*puVar12;
    puVar6 = puVar12;
    while (puVar14 = puVar6, puVar9 != (undefined8 *)0x0) {
      while (puVar6 = puVar9, (ulong)puVar6[4] <= uVar2) {
        if (uVar2 <= (ulong)puVar6[4]) goto LAB_108a3ed20;
        puVar9 = (undefined8 *)puVar6[1];
        if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
          puVar14 = puVar6 + 1;
          goto LAB_108a3ece4;
        }
      }
      puVar9 = (undefined8 *)*puVar6;
    }
LAB_108a3ece4:
    func_0x000108a40034();
    puVar13[4] = uVar2;
    puVar13[5] = uVar15;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = puVar6;
    *puVar14 = puVar13;
    if (*(long *)puVar5[0x13] != 0) {
      puVar5[0x13] = *(long *)puVar5[0x13];
    }
    func_0x0001089ad0fc(puVar5[0x14],puVar13);
    puVar5[0x15] = puVar5[0x15] + 1;
LAB_108a3ed20:
    func_0x000107c2a6bc();
    puVar13 = puVar10;
  } while( true );
}



/* Entry: 108a3ed60; end: 108a3ee53;  */

long * FUN_108a3ed60(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar5 = lVar2 - lVar1;
  lVar6 = *param_1;
  if ((ulong)(param_1[2] - lVar6) < uVar5) {
    if (lVar6 != 0) {
      param_1[1] = lVar6;
      __ZdlPv(lVar6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    plVar3 = param_1;
    FUN_108a3f45c(param_1,(long)uVar5 >> 3);
    func_0x000108a3f4d0(param_1,plVar3);
    lVar6 = param_1[1];
  }
  else {
    lVar7 = param_1[1];
    uVar4 = lVar7 - lVar6;
    if (uVar4 < uVar5) {
      if (lVar7 != lVar6) {
        _memmove(lVar6,lVar1);
        lVar7 = param_1[1];
      }
      lVar2 = lVar2 - (lVar1 + uVar4);
      if (lVar2 != 0) {
        func_0x000108a40028(lVar7);
      }
      lVar6 = lVar7 + lVar2;
      goto LAB_108a3ee38;
    }
  }
  if (lVar2 != lVar1) {
    _memmove(lVar6,lVar1,uVar5);
  }
  lVar6 = lVar6 + uVar5;
LAB_108a3ee38:
  param_1[1] = lVar6;
  return param_1;
}



/* Entry: 108a3ee54; end: 108a3ee97;  */

long FUN_108a3ee54(long param_1)

{
  func_0x000108a3f5c4(*(undefined8 *)(param_1 + 0xa0));
  func_0x000108a3dec4(param_1 + 0x80);
  func_0x000108a3dec4(param_1 + 0x68);
  FUN_108a3f400(param_1 + 0x38);
  FUN_10898b0bc(param_1 + 8);
  return param_1;
}



/* Entry: 108a3ee98; end: 108a3ee9b;  */

long FUN_108a3ee98(long param_1)

{
  func_0x000108a3f5c4(*(undefined8 *)(param_1 + 0xa0));
  func_0x000108a3dec4(param_1 + 0x80);
  func_0x000108a3dec4(param_1 + 0x68);
  FUN_108a3f400(param_1 + 0x38);
  FUN_10898b0bc(param_1 + 8);
  return param_1;
}


