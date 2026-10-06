/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086aaa84; end: 1086aaacf;  */

void FUN_1086aaa84(void)

{
  FUN_10865ef28();
  func_0x0001086b0f18();
  return;
}



/* Entry: 1086aaad0; end: 1086aaadb;  */

void FUN_1086aaad0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c348d8(param_1,0,param_2);
  func_0x000107c34930(&PTR_FUN_110a8d288);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84b8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c3490c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x4c);
  *(undefined8 *)(unaff_x19 + 0x54) = *(undefined8 *)(unaff_x20 + 0x54);
  *(undefined8 *)(unaff_x19 + 0x4c) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  return;
}



/* Entry: 1086aaadc; end: 1086aab3f;  */

void FUN_1086aaadc(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001086b0c4c();
  if (param_1 == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c287e0();
    *(ulong *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086aab40; end: 1086aab57;  */

ulong * FUN_1086aab40(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x60);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 1086aab58; end: 1086aabbf;  */

void FUN_1086aab58(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c28fb0();
    *(ulong *)(param_1 + 0x80) = uVar1;
  }
  return;
}



/* Entry: 1086aabc0; end: 1086aabef;  */

void FUN_1086aabc0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b0fa4();
  func_0x000107c28fb8();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x1d0;
  return;
}



/* Entry: 1086aabf0; end: 1086aac5b;  */

void FUN_1086aabf0(void)

{
  undefined8 uStack_48;
  
  func_0x0001086b0370();
  func_0x0001086b0eec();
  FUN_1086aac5c();
  func_0x0001086b00d4();
  FUN_1086aacfc();
  func_0x000107c28fb8(uStack_48);
  func_0x000107c32508();
  FUN_1086aacb4();
  func_0x0001086b0ee0();
  func_0x0001086aae8c();
  return;
}



/* Entry: 1086aac5c; end: 1086aacb3;  */

long * FUN_1086aac5c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x8d3dcb08d3dcb1) {
    uVar1 = (param_1[2] - *param_1) / 0x1d0;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x469ee58469ee57 < uVar1) {
      plVar2 = (long *)0x8d3dcb08d3dcb0;
    }
    return plVar2;
  }
  FUN_1086aacf0();
  func_0x000107c324b0();
  func_0x0001086b0b14();
  FUN_1086aad80();
  func_0x0001086b0008();
  return param_1;
}



/* Entry: 1086aacb4; end: 1086aacef;  */

void FUN_1086aacb4(void)

{
  func_0x000107c324b0();
  func_0x0001086b0b14();
  FUN_1086aad80();
  func_0x0001086b0008();
  return;
}



/* Entry: 1086aacf0; end: 1086aacfb;  */

void FUN_1086aacf0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001086b0284();
  func_0x000107c32550();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086aad34(param_4);
  }
  func_0x0001086b0484(0x1d0);
  return;
}



/* Entry: 1086aacfc; end: 1086aad53;  */

void FUN_1086aacfc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c32550();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086aad34(param_4);
  }
  func_0x0001086b0484(0x1d0);
  return;
}



/* Entry: 1086aad54; end: 1086aad7f;  */

void FUN_1086aad54(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x8d3dcb08d3dcb1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1d0);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32464();
  func_0x0001086b0320();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x1d0) {
    func_0x000107c28de8(param_4,unaff_x22);
    param_4 = lStack_48 + 0x1d0;
    lStack_48 = param_4;
  }
  func_0x0001086b0be0();
  func_0x0001086b0588();
  FUN_1086aadf0();
  FUN_1086aae20(auStack_70);
  return;
}



/* Entry: 1086aad80; end: 1086aadef;  */

void FUN_1086aad80(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000107c32464();
  func_0x0001086b0320();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x1d0) {
    func_0x000107c28de8(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x1d0;
    lStack_38 = in_x3;
  }
  func_0x0001086b0be0();
  func_0x0001086b0588();
  FUN_1086aadf0();
  FUN_1086aae20(auStack_60);
  return;
}



/* Entry: 1086aadf0; end: 1086aae1f;  */

void FUN_1086aadf0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x1d0) {
    func_0x000107c287e4();
  }
  return;
}



/* Entry: 1086aae20; end: 1086aae4b;  */

void FUN_1086aae20(void)

{
  uint extraout_w8;
  
  func_0x0001086b0f98();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086aae4c();
  }
  return;
}



/* Entry: 1086aae4c; end: 1086aae5b;  */

void FUN_1086aae4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001086b0c70();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x1d0;
    func_0x000107c287e4();
  }
  return;
}



/* Entry: 1086aae5c; end: 1086aaeb7;  */

void FUN_1086aae5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x1d0;
    func_0x000107c287e4();
  }
  return;
}



/* Entry: 1086aaeb8; end: 1086aaebf;  */

void FUN_1086aaeb8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1d0;
    func_0x000107c287e4();
  }
  return;
}



/* Entry: 1086aaec0; end: 1086aaf83;  */

void FUN_1086aaec0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1d0;
    func_0x000107c287e4();
  }
  return;
}



/* Entry: 1086aaf84; end: 1086aaf8b;  */

void FUN_1086aaf84(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x3a;
    func_0x000107c287e4();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086aaf8c; end: 1086ab23b;  */

void FUN_1086aaf8c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b01cc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x1d0;
    func_0x000107c287e4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086ab23c; end: 1086ab52b;  */

/* WARNING: Possible PIC construction at 0x0001086ab374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086ab468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086ab378) */
/* WARNING: Removing unreachable block (ram,0x0001086ab46c) */
/* WARNING: Removing unreachable block (ram,0x0001086ab49c) */

long * FUN_1086ab23c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x8;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  plVar10 = (long *)plVar1[1];
  plVar7 = (long *)plVar1[2];
  if (plVar10 < plVar7) {
    if (plVar2 != plVar10) {
      plVar5 = plVar10;
      for (plVar7 = plVar10 + -6; plVar7 < plVar10; plVar7 = plVar7 + 6) {
        func_0x0001086ab538(plVar5,plVar7);
        plVar5 = plVar5 + 6;
      }
      plVar1[1] = (long)plVar5;
      for (plVar10 = plVar10 + -0xc; plVar10 + 6 != plVar2; plVar10 = plVar10 + -6) {
        func_0x0001086b0ad0();
        FUN_1086ab554();
      }
      lVar8 = 0x30;
      if ((long *)plVar1[1] <= param_2 || param_2 < plVar2) {
        lVar8 = 0;
      }
      FUN_108921988(plVar2,(long)param_2 + lVar8);
      param_1[1] = (long)(plVar2 + 6);
      return param_1;
    }
  }
  else {
    lVar8 = *plVar1;
    uVar6 = ((long)plVar10 - lVar8) / 0x30 + 1;
    if (uVar6 < 0x555555555555556) {
      uVar4 = ((long)plVar7 - lVar8) / 0x30;
      uVar9 = uVar4 * 2;
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
        uVar9 = uVar6;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar4) {
        uVar9 = 0x555555555555555;
      }
      FUN_1086ab5b8(&plStack_c0,uVar9,((long)plVar2 - lVar8) / 0x30,plVar1 + 2);
      plVar10 = plStack_b0;
      if (plStack_b0 == plStack_a8) {
        if (plStack_b8 < plStack_c0 || (long)plStack_b8 - (long)plStack_c0 == 0) {
          uVar6 = ((long)plStack_b0 - (long)plStack_c0) / 0x30 << 1;
          if ((long)plStack_b0 - (long)plStack_c0 == 0) {
            uVar6 = 1;
          }
          FUN_1086ab5b8(&plStack_90,uVar6,uVar6 >> 2,uStack_a0);
          lVar8 = (long)plStack_b0 - (long)plStack_b8;
          plVar10 = (long *)((long)plStack_80 + lVar8);
          plVar1 = plStack_b8;
          plVar7 = plStack_88;
          for (; lVar8 != 0; lVar8 = lVar8 + -0x30) {
            plStack_88 = plVar7;
            func_0x0001086ab538(plStack_80,plVar1);
            plStack_80 = plStack_80 + 6;
            plVar1 = plVar1 + 6;
            plVar7 = plStack_88;
          }
          plStack_90 = plStack_c0;
          plStack_88 = plStack_b8;
          plStack_80 = plStack_b0;
          plStack_78 = plStack_a8;
          plStack_b8 = plVar7;
          plStack_b0 = plVar10;
          func_0x0001086ab6e8(&plStack_90);
        }
        else {
          lVar8 = (((long)plStack_b8 - (long)plStack_c0) / 0x30 + 1) / -2;
          for (plVar10 = plStack_b8; plVar10 != plStack_b0; plVar10 = plVar10 + 6) {
            FUN_1086ab554(plVar10 + lVar8 * 6,plVar10);
          }
          plStack_b0 = plVar10 + lVar8 * 6;
          plVar10 = plStack_b0;
          plStack_b8 = plStack_b8 + lVar8 * 6;
        }
      }
    }
    else {
      FUN_1086ab5ac();
      plVar1[1] = (long)plVar10;
      plVar10 = param_1;
      func_0x0001086b0254();
    }
  }
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_FUN_110a958c0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar3 = *(uint *)(plVar2 + 2);
  *(uint *)(param_1 + 2) = uVar3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar3 & 1) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    func_0x000107c34a60();
    func_0x000107c2a26c();
  }
  param_1[3] = (long)plVar10;
  if ((uVar3 >> 1 & 1) == 0) {
    param_2 = (long *)0x0;
  }
  else {
    FUN_1088db014(param_2,plVar2[4]);
  }
  func_0x000108924f6c();
  return param_2;
}



/* Entry: 1086ab52c; end: 1086ab553;  */

void FUN_1086ab52c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a2c(param_1,0,param_2);
  func_0x000107c34a44(&PTR_FUN_110a958c0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c34a60();
    func_0x000107c2a26c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_1088db014();
  }
  func_0x000108924f6c();
  return;
}



/* Entry: 1086ab554; end: 1086ab5ab;  */

void FUN_1086ab554(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_1089219b8();
    }
    else {
      FUN_108921988();
    }
  }
  return;
}



/* Entry: 1086ab5ac; end: 1086ab5b7;  */

void FUN_1086ab5ac(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_80;
  long lStack_78;
  
  func_0x0001086b0284();
  func_0x000107c324fc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001086b0418();
      plStack_98 = &lStack_80;
      plStack_90 = &lStack_78;
      lStack_a0 = param_1;
      lStack_80 = param_4;
      for (; lStack_78 = param_4, param_2 != unaff_x19; param_2 = param_2 + 6) {
        func_0x0001086ab538(param_4,param_2);
        param_4 = lStack_78 + 0x30;
      }
      func_0x0001086b0be0();
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
        FUN_108921724(unaff_x20);
      }
      FUN_1086ab6a8(&lStack_a0);
      return;
    }
    lVar1 = (long)unaff_x20 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + (long)unaff_x20 * 0x30;
  return;
}



/* Entry: 1086ab5b8; end: 1086ab6a7;  */

void FUN_1086ab5b8(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c324fc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001086b0418();
      plStack_88 = &lStack_70;
      plStack_80 = &lStack_68;
      lStack_90 = param_1;
      lStack_70 = param_4;
      for (; lStack_68 = param_4, param_2 != unaff_x19; param_2 = param_2 + 6) {
        func_0x0001086ab538(param_4,param_2);
        param_4 = lStack_68 + 0x30;
      }
      func_0x0001086b0be0();
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 6) {
        FUN_108921724(unaff_x20);
      }
      FUN_1086ab6a8(&lStack_90);
      return;
    }
    lVar1 = (long)unaff_x20 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + (long)unaff_x20 * 0x30;
  return;
}



/* Entry: 1086ab6a8; end: 1086ab72b;  */

void FUN_1086ab6a8(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  func_0x0001086b0f98();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      FUN_108921724();
    }
  }
  return;
}



/* Entry: 1086ab72c; end: 1086ab773;  */

void FUN_1086ab72c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001086b04cc();
  uStack_40 = in_x3;
  uStack_38 = in_x4;
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 1) {
    FUN_1086ab23c(&uStack_40,*unaff_x21);
  }
  *unaff_x20 = unaff_x19;
  unaff_x20[2] = uStack_38;
  unaff_x20[1] = uStack_40;
  return;
}



/* Entry: 1086ab774; end: 1086ab7bb;  */

long * FUN_1086ab774(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      FUN_108921724();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1086ab7bc; end: 1086ab7f7;  */

void FUN_1086ab7bc(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10891b058();
  }
  return;
}



/* Entry: 1086ab7f8; end: 1086ab8b7;  */

void FUN_1086ab7f8(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 8) {
    func_0x0001088bf440(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 8;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x0001086ab848();
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1086ab8b8; end: 1086ab8d3;  */

void FUN_1086ab8b8(long param_1)

{
  FUN_1086ab8d4();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1086ab8d4; end: 1086ab8df;  */

undefined8 * FUN_1086ab8d4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110a81e60;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000107c2a2d8(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000107c2a2d8(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x31) = uVar4;
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 1086ab8e0; end: 1086ab9c3;  */

undefined8 FUN_1086ab8e0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)param_1[1];
  if ((plVar4 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_1086a9f1c();
    uVar5 = (long)plVar4 - 1;
    if (((ulong)plVar4 & uVar5) == 0) {
      plVar6 = (long *)((ulong)plVar2 & uVar5);
    }
    else {
      plVar6 = plVar2;
      if (plVar4 <= plVar2) {
        uVar1 = 0;
        if (plVar4 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar4;
        }
        plVar6 = (long *)((long)plVar2 - uVar1 * (long)plVar4);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)plVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
          plVar3 = (long *)plVar7[1];
          if (plVar2 != plVar3) break;
          plVar3 = param_1 + 4;
          FUN_1086a9f40(plVar3,plVar7 + 2,param_2);
          if ((int)plVar3 != 0) {
            return 1;
          }
        }
        if (((ulong)plVar4 & uVar5) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar5);
        }
        else if (plVar4 <= plVar3) {
          uVar1 = 0;
          if (plVar4 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar4;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar4);
        }
      } while (plVar3 == plVar6);
    }
  }
  return 0;
}



/* Entry: 1086ab9c4; end: 1086abcef;  */

void FUN_1086ab9c4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar7;
  ulong extraout_x9_01;
  long *extraout_x10;
  long *plVar8;
  long *plVar9;
  long *extraout_x11;
  long *plVar10;
  long *unaff_x19;
  ulong uVar11;
  long unaff_x22;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x26;
  
  func_0x0001086b0c34();
  func_0x0001086b0290();
  plVar14 = (long *)unaff_x19[1];
  if (plVar14 != (long *)0x0) {
    uVar11 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar11) == 0) {
      unaff_x26 = (long *)(uVar11 & (ulong)param_3);
      in_NG = false;
    }
    else {
      in_NG = (long)param_3 - (long)plVar14 < 0;
      unaff_x26 = param_3;
      if (plVar14 <= param_3) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)param_3 / (ulong)plVar14;
        }
        unaff_x26 = (long *)((long)param_3 - uVar7 * (long)plVar14);
      }
    }
    plVar13 = *(long **)(*unaff_x19 + (long)unaff_x26 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_1086aba74;
          plVar5 = (long *)plVar13[1];
          in_NG = (long)plVar5 - (long)param_3 < 0;
          if (plVar5 != param_3) break;
          plVar5 = unaff_x19 + 4;
          FUN_1086a9f40(plVar5,plVar13 + 2);
          if (((ulong)plVar5 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar14 & uVar11) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar11);
        }
        else if (plVar14 <= plVar5) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar5 / (ulong)plVar14;
          }
          plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar14);
        }
        in_NG = (long)plVar5 - (long)unaff_x26 < 0;
      } while (plVar5 == unaff_x26);
    }
  }
LAB_1086aba74:
  plVar13 = unaff_x19 + 2;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar5 = plVar4 + 2;
  *plVar4 = 0;
  plVar4[1] = (long)param_3;
  FUN_10865ecd8();
  plVar4[6] = unaff_x22;
  func_0x0001086b0be0();
  func_0x0001086b0124();
  if ((plVar14 != (long *)0x0) &&
     (func_0x0001086b0a10(param_1,param_2,(float)plVar14), !(bool)in_NG)) goto LAB_1086abc58;
  bVar2 = (long *)0x2 < plVar14;
  bVar3 = plVar14 == (long *)0x3;
  func_0x0001086b00f0((long)plVar14 << 1);
  plVar12 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar12 = extraout_x9;
  }
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)0x2;
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = plVar12;
  }
  plVar14 = (long *)unaff_x19[1];
  if (plVar14 < plVar12) {
LAB_1086abb08:
    if ((ulong)plVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1086abce0);
      (*pcVar1)();
    }
    __Znwm((long)plVar12 << 3);
    FUN_1086abd34();
    plVar14 = (long *)0x0;
    unaff_x19[1] = (long)plVar12;
    lVar6 = *unaff_x19;
    while (plVar12 != plVar14) {
      func_0x000107c3258c();
      lVar6 = extraout_x8_00;
      plVar14 = extraout_x9_00;
    }
    plVar5 = (long *)*plVar13;
    plVar14 = plVar12;
    if (plVar5 != (long *)0x0) {
      plVar8 = (long *)plVar5[1];
      uVar7 = (long)plVar12 - 1;
      uVar11 = 0;
      if (plVar12 != (long *)0x0) {
        uVar11 = (ulong)plVar8 / (ulong)plVar12;
      }
      plVar9 = plVar8;
      if (plVar12 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar11 * (long)plVar12);
      }
      if (((ulong)plVar12 & uVar7) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar7);
      }
      *(long **)(lVar6 + (long)plVar9 * 8) = plVar13;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar10 = (long *)plVar5[1];
        if (((ulong)plVar12 & uVar7) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar7);
        }
        else if (plVar12 <= plVar10) {
          uVar11 = 0;
          if (plVar12 != (long *)0x0) {
            uVar11 = (ulong)plVar10 / (ulong)plVar12;
          }
          plVar10 = (long *)((long)plVar10 - uVar11 * (long)plVar12);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar6 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar5;
            func_0x000107c32458();
            lVar6 = extraout_x8_01;
            uVar7 = extraout_x9_01;
            plVar5 = extraout_x10;
            plVar9 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar12 < plVar14) {
    func_0x0001086b01dc();
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001086b004c();
    }
    if (plVar12 <= plVar5) {
      plVar12 = plVar5;
    }
    if (plVar12 < plVar14) {
      if (plVar12 != (long *)0x0) goto LAB_1086abb08;
      FUN_1086abd34();
      unaff_x19[1] = 0;
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar14 - 1U & (ulong)param_3);
  }
  else {
    unaff_x26 = param_3;
    if (plVar14 <= param_3) {
      uVar11 = 0;
      if (plVar14 != (long *)0x0) {
        uVar11 = (ulong)param_3 / (ulong)plVar14;
      }
      unaff_x26 = (long *)((long)param_3 - uVar11 * (long)plVar14);
    }
  }
LAB_1086abc58:
  lVar6 = *unaff_x19;
  plVar5 = *(long **)(lVar6 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar4 = *plVar13;
    *plVar13 = (long)plVar4;
    *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar13;
    if (*plVar4 != 0) {
      plVar13 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar13 = (long *)((ulong)plVar13 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar13) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar13 / (ulong)plVar14;
        }
        plVar13 = (long *)((long)plVar13 - uVar11 * (long)plVar14);
      }
      *(long **)(lVar6 + (long)plVar13 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
  }
  func_0x0001086b04b4();
  FUN_1086abcf0();
  return;
}



/* Entry: 1086abcf0; end: 1086abd33;  */

long * FUN_1086abcf0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2a2e0(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1086abd34; end: 1086abd4b;  */

void FUN_1086abd34(long *param_1,long param_2)

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



/* Entry: 1086abd4c; end: 1086abd9b;  */

void FUN_1086abd4c(void)

{
  long unaff_x19;
  
  func_0x0001086b0b64();
  func_0x0001086affac();
  func_0x0001086b014c();
  func_0x0001086b0198();
  FUN_1086abd9c();
  func_0x0001086b0718();
  FUN_1086a7dec(unaff_x19 + 0x1a0);
  return;
}



/* Entry: 1086abd9c; end: 1086abe0f;  */

long FUN_1086abd9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086aff10();
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  FUN_1086abe10(lVar1 + 0x20,param_4);
  *(undefined8 *)(param_1 + 0x128) = param_5;
  *(undefined4 *)(param_1 + 0x130) = param_6;
  *(undefined4 *)(param_1 + 0x134) = param_7;
  *(undefined4 *)(param_1 + 0x138) = param_8;
  *(undefined4 *)(param_1 + 0x13c) = param_9;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return param_1;
}



/* Entry: 1086abe10; end: 1086abea7;  */

void FUN_1086abe10(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c324fc();
  FUN_10865ecd8();
  func_0x000107c27994(param_1 + 0x20,unaff_x20 + 0x20);
  FUN_1086a76a0(unaff_x19 + 0x38,unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined1 *)(unaff_x19 + 0x98) = *(undefined1 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  uVar1 = *(undefined4 *)(unaff_x20 + 0xb8);
  *(undefined1 *)(unaff_x19 + 0xbc) = *(undefined1 *)(unaff_x20 + 0xbc);
  *(undefined4 *)(unaff_x19 + 0xb8) = uVar1;
  FUN_1086abea8(unaff_x19 + 0xc0,unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x20 + 0x100);
  return;
}



/* Entry: 1086abea8; end: 1086abecf;  */

void FUN_1086abea8(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1086abed0();
  return;
}



/* Entry: 1086abed0; end: 1086abee3;  */

void FUN_1086abed0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1086abf00();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1086abee4; end: 1086abeff;  */

void FUN_1086abee4(long param_1)

{
  FUN_1086abf00();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1086abf00; end: 1086abf0b;  */

long FUN_1086abf00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8ebe8,param_1,0,param_2);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  func_0x0001086b08a0();
  FUN_1086abf44();
  return param_1;
}



/* Entry: 1086abf0c; end: 1086abf43;  */

long FUN_1086abf0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8ebe8);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  func_0x0001086b08a0();
  FUN_1086abf44();
  return param_1;
}



/* Entry: 1086abf44; end: 1086abf9b;  */

void FUN_1086abf44(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x0001088fd010();
    }
    else {
      FUN_1088fcfe0();
    }
  }
  return;
}



/* Entry: 1086abf9c; end: 1086abfcf;  */

long FUN_1086abf9c(long param_1)

{
  long lStack_28;
  
  func_0x000107c27938(param_1 + 0x168);
  func_0x000107c27938(param_1 + 0x148);
  FUN_1086a7738(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086abfd0; end: 1086ac01f;  */

void FUN_1086abfd0(void)

{
  long unaff_x19;
  
  func_0x0001086b0b64();
  func_0x0001086affac();
  func_0x0001086b014c();
  func_0x0001086b0198();
  FUN_1086ac020();
  func_0x0001086b0718();
  FUN_1086a7dec(unaff_x19 + 0xa70);
  return;
}



/* Entry: 1086ac020; end: 1086ac093;  */

long FUN_1086ac020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086aff10();
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  FUN_1086ac094(lVar1 + 0x20,param_4);
  *(undefined8 *)(param_1 + 0x9f8) = param_5;
  *(undefined4 *)(param_1 + 0xa00) = param_6;
  *(undefined4 *)(param_1 + 0xa04) = param_7;
  *(undefined4 *)(param_1 + 0xa08) = param_8;
  *(undefined4 *)(param_1 + 0xa0c) = param_9;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined8 *)(param_1 + 0xa30) = 0;
  *(undefined8 *)(param_1 + 0xa50) = 0;
  return param_1;
}



/* Entry: 1086ac094; end: 1086ac2e3;  */

void FUN_1086ac094(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c324b4();
  FUN_1086858d8(param_1 + 0x18,unaff_x20 + 0x18);
  FUN_108639fcc(unaff_x19 + 0x78,unaff_x20 + 0x78);
  FUN_1086ac2e4(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  FUN_108639eb0(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  FUN_1086ac338(unaff_x19 + 0x480,unaff_x20 + 0x480);
  FUN_1086ac338(unaff_x19 + 0x550,unaff_x20 + 0x550);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x628);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x620);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x638);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x630);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x648);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x640);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x649);
  *(undefined8 *)(unaff_x19 + 0x651) = *(undefined8 *)(unaff_x20 + 0x651);
  *(undefined8 *)(unaff_x19 + 0x649) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x648) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x640) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x638) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x630) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x628) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x620) = uVar1;
  FUN_1086ac420(unaff_x19 + 0x660,unaff_x20 + 0x660);
  *(undefined8 *)(unaff_x19 + 0x6a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x698) = 0;
  *(undefined8 *)(unaff_x19 + 0x690) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x690);
  *(undefined8 *)(unaff_x19 + 0x698) = *(undefined8 *)(unaff_x20 + 0x698);
  *(undefined8 *)(unaff_x19 + 0x690) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x6a0) = *(undefined8 *)(unaff_x20 + 0x6a0);
  *(undefined8 *)(unaff_x20 + 0x6a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x698) = 0;
  *(undefined8 *)(unaff_x20 + 0x690) = 0;
  func_0x0001086ac4bc(unaff_x19 + 0x6a8,unaff_x20 + 0x6a8);
  *(undefined8 *)(unaff_x19 + 0x6e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x6d8) = 0;
  *(undefined8 *)(unaff_x19 + 0x6d0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x6d0);
  *(undefined8 *)(unaff_x19 + 0x6d8) = *(undefined8 *)(unaff_x20 + 0x6d8);
  *(undefined8 *)(unaff_x19 + 0x6d0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x6e0) = *(undefined8 *)(unaff_x20 + 0x6e0);
  *(undefined8 *)(unaff_x20 + 0x6e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x6d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x6f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x6f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x6e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x6e8) = *(undefined8 *)(unaff_x20 + 0x6e8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x6f0);
  *(undefined8 *)(unaff_x19 + 0x6f8) = *(undefined8 *)(unaff_x20 + 0x6f8);
  *(undefined8 *)(unaff_x19 + 0x6f0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x6f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x6f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x710) = 0;
  *(undefined8 *)(unaff_x19 + 0x708) = 0;
  *(undefined8 *)(unaff_x19 + 0x700) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x700);
  *(undefined8 *)(unaff_x19 + 0x708) = *(undefined8 *)(unaff_x20 + 0x708);
  *(undefined8 *)(unaff_x19 + 0x700) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x710) = *(undefined8 *)(unaff_x20 + 0x710);
  *(undefined8 *)(unaff_x20 + 0x710) = 0;
  *(undefined8 *)(unaff_x20 + 0x708) = 0;
  *(undefined8 *)(unaff_x20 + 0x700) = 0;
  func_0x0001086ac500(unaff_x19 + 0x718,unaff_x20 + 0x718);
  FUN_108639fcc(unaff_x19 + 0x740,unaff_x20 + 0x740);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x7a0);
  *(undefined8 *)(unaff_x19 + 0x7a8) = *(undefined8 *)(unaff_x20 + 0x7a8);
  *(undefined8 *)(unaff_x19 + 0x7a0) = uVar1;
  func_0x0001006b78fc(unaff_x19 + 0x7b0,unaff_x20 + 0x7b0);
  func_0x0001086ac544(unaff_x19 + 2000,unaff_x20 + 2000);
  func_0x0001086ac588(unaff_x19 + 0x7f8,unaff_x20 + 0x7f8);
  func_0x0001086ac544(unaff_x19 + 0x820,unaff_x20 + 0x820);
  func_0x0001086ac588(unaff_x19 + 0x848,unaff_x20 + 0x848);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x878);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x870);
  *(undefined1 *)(unaff_x19 + 0x880) = *(undefined1 *)(unaff_x20 + 0x880);
  *(undefined8 *)(unaff_x19 + 0x878) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x870) = uVar1;
  FUN_1086ac5cc(unaff_x19 + 0x888,unaff_x20 + 0x888);
  *(undefined8 *)(unaff_x19 + 0x8d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x8c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x8c0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x8c0);
  *(undefined8 *)(unaff_x19 + 0x8c8) = *(undefined8 *)(unaff_x20 + 0x8c8);
  *(undefined8 *)(unaff_x19 + 0x8c0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x8d0) = *(undefined8 *)(unaff_x20 + 0x8d0);
  *(undefined8 *)(unaff_x20 + 0x8d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x8c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x8c0) = 0;
  FUN_108639fcc(unaff_x19 + 0x8d8,unaff_x20 + 0x8d8);
  *(undefined8 *)(unaff_x19 + 0x948) = 0;
  *(undefined8 *)(unaff_x19 + 0x940) = 0;
  *(undefined8 *)(unaff_x19 + 0x938) = 0;
  *(undefined8 *)(unaff_x19 + 0x938) = *(undefined8 *)(unaff_x20 + 0x938);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x940);
  *(undefined8 *)(unaff_x19 + 0x948) = *(undefined8 *)(unaff_x20 + 0x948);
  *(undefined8 *)(unaff_x19 + 0x940) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x948) = 0;
  *(undefined8 *)(unaff_x20 + 0x940) = 0;
  *(undefined8 *)(unaff_x20 + 0x938) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x950);
  *(undefined1 *)(unaff_x19 + 0x958) = *(undefined1 *)(unaff_x20 + 0x958);
  *(undefined8 *)(unaff_x19 + 0x950) = uVar1;
  FUN_1086ac654(unaff_x19 + 0x960,unaff_x20 + 0x960);
  *(undefined8 *)(unaff_x19 + 0x9d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x9c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x9c0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x9c0);
  *(undefined8 *)(unaff_x19 + 0x9c8) = *(undefined8 *)(unaff_x20 + 0x9c8);
  *(undefined8 *)(unaff_x19 + 0x9c0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x9d0) = *(undefined8 *)(unaff_x20 + 0x9d0);
  *(undefined8 *)(unaff_x20 + 0x9d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x9c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x9c0) = 0;
  return;
}



/* Entry: 1086ac2e4; end: 1086ac30b;  */

void FUN_1086ac2e4(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1086ac30c();
  return;
}



/* Entry: 1086ac30c; end: 1086ac337;  */

void FUN_1086ac30c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x0001086aff10();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1086ac338; end: 1086ac35f;  */

void FUN_1086ac338(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_1086ac360();
  return;
}



/* Entry: 1086ac360; end: 1086ac373;  */

void FUN_1086ac360(long param_1,long param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1086ac390();
    *(undefined1 *)(param_1 + 200) = 1;
    return;
  }
  return;
}



/* Entry: 1086ac374; end: 1086ac38f;  */

void FUN_1086ac374(long param_1)

{
  FUN_1086ac390();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 1086ac390; end: 1086ac39b;  */

void FUN_1086ac390(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c32550(param_1,0,param_2);
  func_0x000107c2a4f8();
  func_0x000107c324ec();
  FUN_1086ac3c8();
  return;
}



/* Entry: 1086ac39c; end: 1086ac3c7;  */

void FUN_1086ac39c(void)

{
  func_0x000107c32550();
  func_0x000107c2a4f8();
  func_0x000107c324ec();
  FUN_1086ac3c8();
  return;
}



/* Entry: 1086ac3c8; end: 1086ac41f;  */

void FUN_1086ac3c8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010890d3dc();
    }
    else {
      func_0x00010890d3ac();
    }
  }
  return;
}



/* Entry: 1086ac420; end: 1086ac447;  */

void FUN_1086ac420(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1086ac448();
  return;
}



/* Entry: 1086ac448; end: 1086ac45b;  */

void FUN_1086ac448(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1086ac478();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 1086ac45c; end: 1086ac477;  */

void FUN_1086ac45c(long param_1)

{
  FUN_1086ac478();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1086ac478; end: 1086ac5cb;  */

void FUN_1086ac478(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  undefined8 unaff_x30;
  
  func_0x0001086b0080();
  if (extraout_x10 != 0) {
    func_0x0001086b0bc8(param_1,unaff_x30);
    if ((bool)in_ZR) {
      uVar1 = extraout_x13 & extraout_x11;
    }
    else {
      uVar1 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar1 = 0;
        if (extraout_x12 != 0) {
          uVar1 = extraout_x11 / extraout_x12;
        }
        uVar1 = extraout_x11 - uVar1 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar1 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 1086ac5cc; end: 1086ac5f3;  */

void FUN_1086ac5cc(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1086ac5f4();
  return;
}



/* Entry: 1086ac5f4; end: 1086ac607;  */

void FUN_1086ac5f4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1086ac624();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1086ac608; end: 1086ac623;  */

void FUN_1086ac608(long param_1)

{
  FUN_1086ac624();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086ac624; end: 1086ac653;  */

void FUN_1086ac624(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001086aff10();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1086ac654; end: 1086ac67b;  */

void FUN_1086ac654(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_1086ac67c();
  return;
}



/* Entry: 1086ac67c; end: 1086ac68f;  */

void FUN_1086ac67c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1086ac6ac();
    *(undefined1 *)(param_1 + 0x58) = 1;
    return;
  }
  return;
}



/* Entry: 1086ac690; end: 1086ac6ab;  */

void FUN_1086ac690(long param_1)

{
  FUN_1086ac6ac();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 1086ac6ac; end: 1086ac707;  */

void FUN_1086ac6ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  uVar3 = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x44) = uVar3;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return;
}



/* Entry: 1086ac708; end: 1086ac7b3;  */

long FUN_1086ac708(long param_1)

{
  long lStack_28;
  
  func_0x000107c27938(param_1 + 0xa38);
  func_0x000107c27938(param_1 + 0xa18);
  func_0x0001086a931c(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086ac7b4; end: 1086ac7cb;  */

void FUN_1086ac7b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086ac7cc; end: 1086ac91f;  */

void FUN_1086ac7cc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar4;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001086b004c();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1086ac920(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_1086ac920(param_1,lVar2);
    func_0x000107c32584();
    plVar5 = extraout_x9;
    while (param_2 != plVar5) {
      func_0x000107c3258c();
      plVar5 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x000107c32544();
      func_0x000107c32540();
      lVar2 = extraout_x8;
      plVar5 = extraout_x9_01;
      uVar4 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar5, plVar5 = (long *)*plVar7, plVar5 != (long *)0x0) {
        plVar6 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            *plVar7 = *plVar5;
            func_0x000107c32458();
            lVar2 = extraout_x8_00;
            plVar5 = extraout_x9_02;
            uVar4 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar5;
  *plVar5 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ac920; end: 1086ac937;  */

void FUN_1086ac920(long *param_1,long param_2)

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



/* Entry: 1086ac938; end: 1086ac957;  */

void FUN_1086ac938(void)

{
  func_0x0001086b050c();
  FUN_1086ac958();
  return;
}



/* Entry: 1086ac958; end: 1086ac96f;  */

void FUN_1086ac958(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001086b0b34(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107c28f98(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ac970; end: 1086ac9a7;  */

void FUN_1086ac970(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001086b0b34();
  if ((bool)in_ZR) {
    func_0x000107c28f98(unaff_x19 + 0x18);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ac9a8; end: 1086acc17;  */

/* WARNING: Possible PIC construction at 0x0001086ad000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086ad004) */
/* WARNING: Removing unreachable block (ram,0x0001086ad020) */
/* WARNING: Removing unreachable block (ram,0x0001086ad02c) */
/* WARNING: Removing unreachable block (ram,0x0001086ad034) */
/* WARNING: Removing unreachable block (ram,0x0001086ad060) */
/* WARNING: Removing unreachable block (ram,0x0001086ad064) */
/* WARNING: Removing unreachable block (ram,0x0001086ad050) */
/* WARNING: Removing unreachable block (ram,0x0001086ad05c) */
/* WARNING: Removing unreachable block (ram,0x0001086ad06c) */
/* WARNING: Removing unreachable block (ram,0x0001086ad070) */
/* WARNING: Removing unreachable block (ram,0x0001086ad014) */
/* WARNING: Removing unreachable block (ram,0x0001086ad018) */

void FUN_1086ac9a8(long param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  puStack_f0 = (undefined1 *)&uStack_100;
  if (param_3 < 2) {
    return;
  }
  if (param_3 == 2) {
    if (*(long *)(param_1 + 0x88) <= *(long *)(param_2 + -0x20)) {
      return;
    }
LAB_100853068:
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c324b0();
    func_0x0001086b0a24((undefined1 *)((long)register0x00000008 + -200));
    func_0x0001086b0314();
    func_0x0001086ad2d8();
    func_0x000107c32508();
    func_0x0001086ad2d8();
    func_0x0001086b09c8();
    return;
  }
  if ((long)param_3 < 1) {
    if (param_1 == param_2) {
      return;
    }
    lVar12 = 0;
    lVar9 = param_1;
    do {
      if (lVar9 + 0xa8 == param_2) {
        return;
      }
      if (*(long *)(lVar9 + 0x130) < *(long *)(lVar9 + 0x88)) {
        func_0x0001086b0a24(&lStack_f8);
        lVar11 = lVar12;
        do {
          lVar7 = param_1 + lVar11;
          func_0x0001086ad2d8(lVar7 + 0xa8,lVar7);
          lVar14 = param_1;
          if (lVar11 == 0) goto LAB_1086acb1c;
          lVar11 = lVar11 + -0xa8;
        } while (lStack_70 < *(long *)(lVar7 + -0x20));
        lVar14 = param_1 + lVar11 + 0xa8;
LAB_1086acb1c:
        func_0x0001086ad2d8(lVar14,&lStack_f8);
        func_0x0001086b09c8();
      }
      lVar12 = lVar12 + 0xa8;
      lVar9 = lVar9 + 0xa8;
    } while( true );
  }
  uVar8 = param_3 >> 1;
  lVar12 = param_1 + uVar8 * 0xa8;
  if (param_5 < (long)param_3) {
    func_0x0001086b0d10(param_1,lVar12,uVar8);
    func_0x0001086b0d10(lVar12,param_2,param_3 - uVar8);
    puVar1 = &stack0xfffffffffffffff0;
    lVar7 = param_3 - uVar8;
    lVar11 = param_2;
    lVar9 = param_4;
    while( true ) {
      if (lVar7 == 0) {
        return;
      }
      lStack_88 = lVar9;
      if (lVar7 <= param_5 || (long)uVar8 <= param_5) break;
      lVar14 = 0;
      lVar13 = -uVar8;
      while( true ) {
        if (lVar13 == 0) {
          return;
        }
        lVar2 = param_1 + lVar14;
        if (*(long *)(lVar12 + 0x88) < *(long *)(lVar2 + 0x88)) break;
        lVar14 = lVar14 + 0xa8;
        lVar13 = lVar13 + 1;
      }
      lStack_90 = lVar11;
      if (-lVar13 < lVar7) {
        lVar4 = lVar7 / 2;
        lVar15 = lVar12 + lVar4 * 0xa8;
        lVar10 = lVar2;
        uVar8 = ((lVar12 - param_1) - lVar14) / 0xa8;
        while (uVar8 != 0) {
          lVar6 = lVar10 + (uVar8 >> 1) * 0xa8;
          uVar3 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          uVar8 = uVar8 >> 1;
          if (*(long *)(lVar6 + 0x88) <= *(long *)(lVar15 + 0x88)) {
            lVar10 = lVar6 + 0xa8;
            uVar8 = uVar3;
          }
        }
        uVar8 = ((lVar10 - param_1) - lVar14) / 0xa8;
      }
      else {
        if (lVar13 == -1) goto LAB_100853068;
        uVar8 = -lVar13 / 2;
        lVar10 = param_1 + uVar8 * 0xa8 + lVar14;
        lVar4 = lVar12;
        uVar3 = (lVar11 - lVar12) / 0xa8;
        while (lVar15 = lVar4, uVar3 != 0) {
          uVar5 = uVar3 >> 1;
          lVar6 = lVar15 + uVar5 * 0xa8;
          lVar4 = lVar6 + 0xa8;
          uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
          if (*(long *)(lVar10 + 0x88) <= *(long *)(lVar6 + 0x88)) {
            lVar4 = lVar15;
            uVar3 = uVar5;
          }
        }
        lVar4 = (lVar15 - lVar12) / 0xa8;
      }
      lVar6 = lVar15;
      if ((lVar10 != lVar12) && (lVar6 = lVar10, lVar12 != lVar15)) {
        uStack_b0 = uVar8;
        lStack_a8 = lVar4;
        lStack_a0 = lVar7;
        lStack_98 = param_5;
        func_0x0001086b08dc();
        unaff_x30 = 0x1086ad004;
        register0x00000008 = (BADSPACEBASE *)&uStack_b0;
        unaff_x19 = lVar12;
        unaff_x20 = param_1;
        unaff_x29 = puVar1;
        goto LAB_100853068;
      }
      if ((long)(uVar8 + lVar4) < (long)((lVar7 - (uVar8 + lVar4)) - lVar13)) {
        FUN_1086ace8c(lVar2,lVar10,lVar6,uVar8,lVar4,lVar9);
        uVar8 = -(uVar8 + lVar13);
        lVar7 = lVar7 - lVar4;
        param_1 = lVar6;
        lVar12 = lVar15;
        lVar11 = lStack_90;
        lVar9 = lStack_88;
      }
      else {
        FUN_1086ace8c(lVar6,lVar15,lVar11,-(uVar8 + lVar13),lVar7 - lVar4,lVar9);
        param_1 = param_1 + lVar14;
        lVar7 = lVar4;
        lVar12 = lVar10;
        lVar11 = lVar6;
        lVar9 = lStack_88;
      }
    }
    plStack_78 = &lStack_70;
    lStack_70 = 0;
    lVar14 = lVar9;
    lStack_80 = lVar9;
    if (lVar7 < (long)uVar8) {
      while (lVar7 = lVar9, lVar12 != lVar11) {
        FUN_1086a94f4(lVar9);
        func_0x0001086b0f84();
      }
      while (lVar11 = lVar11 + -0xa8, lVar7 != lVar9) {
        if (lVar12 == param_1) goto LAB_1086ad220;
        lVar14 = lVar7;
        lVar2 = lVar12 + -0xa8;
        lVar13 = lVar12 + -0xa8;
        if (*(long *)(lVar12 + -0x20) <= *(long *)(lVar7 + -0x20)) {
          lVar14 = lVar7 + -0xa8;
          lVar2 = lVar12;
          lVar13 = lVar7 + -0xa8;
        }
        lVar12 = lVar2;
        func_0x0001086ad2d8(lVar11,lVar13);
        lVar7 = lVar14;
      }
    }
    else {
      while (param_1 != lVar12) {
        func_0x0001086b08dc();
        FUN_1086a94f4();
        func_0x0001086b0f84();
        lVar14 = lVar14 + 0xa8;
      }
      while (lVar14 != lVar9) {
        if (lVar12 == lVar11) {
          func_0x0001086ad368(&uStack_61,lVar9,lVar14,param_1);
          break;
        }
        if (*(long *)(lVar12 + 0x88) < *(long *)(lVar9 + 0x88)) {
          func_0x0001086ad2d8(param_1,lVar12);
          lVar12 = lVar12 + 0xa8;
        }
        else {
          func_0x0001086ad2d8(param_1,lVar9);
          lVar9 = lVar9 + 0xa8;
        }
        param_1 = param_1 + 0xa8;
      }
    }
    goto LAB_1086ad240;
  }
  uStack_100 = 0;
  lStack_f8 = param_4;
  FUN_1086acc50(param_1,lVar12,uVar8,param_4);
  lVar9 = param_4 + uVar8 * 0xa8;
  uStack_100 = uVar8;
  FUN_1086acc50(lVar12,param_2,param_3 - uVar8,lVar9);
  lVar11 = param_4 + param_3 * 0xa8;
  lVar12 = lVar9;
  uStack_100 = param_3;
  while (param_4 != lVar9) {
    if (lVar12 == lVar11) goto LAB_1086acbf8;
    if (*(long *)(lVar12 + 0x88) < *(long *)(param_4 + 0x88)) {
      func_0x0001086ad2d8(param_1,lVar12);
      lVar12 = lVar12 + 0xa8;
    }
    else {
      func_0x0001086ad2d8(param_1,param_4);
      param_4 = param_4 + 0xa8;
    }
    param_1 = param_1 + 0xa8;
  }
  for (; lVar12 != lVar11; lVar12 = lVar12 + 0xa8) {
    func_0x0001086b0500();
    func_0x0001086ad2d8();
  }
LAB_1086acc00:
  FUN_1086ad31c(&lStack_f8);
  return;
LAB_1086acbf8:
  for (; param_4 != lVar9; param_4 = param_4 + 0xa8) {
    func_0x000107c324ec();
    func_0x0001086ad2d8();
  }
  goto LAB_1086acc00;
LAB_1086ad220:
  while (lVar7 != lVar9) {
    lVar7 = lVar7 + -0xa8;
    func_0x0001086ad2d8(lVar11,lVar7);
    lVar11 = lVar11 + -0xa8;
  }
LAB_1086ad240:
  FUN_1086ad31c(&lStack_80);
  return;
}



/* Entry: 1086acc18; end: 1086acc2f;  */

void FUN_1086acc18(long *param_1,long param_2)

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



/* Entry: 1086acc30; end: 1086acc4f;  */

void FUN_1086acc30(void)

{
  func_0x0001086b050c();
  FUN_1086acc18();
  return;
}



/* Entry: 1086acc50; end: 1086ace8b;  */

undefined8 *
FUN_1086acc50(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 in_register_00005008;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000050;
  long in_stack_00000058;
  
  func_0x0001086b0c34();
  if (param_4 == 0) {
    return param_2;
  }
  uVar5 = param_4;
  func_0x0001086b03e8();
  if (uVar5 == 2) {
    in_stack_00000010 = &stack0x00000018;
    in_stack_00000018 = 0;
    lVar6 = unaff_x20 + -0xa8;
    if (*(long *)(unaff_x21 + 0x88) <= *(long *)(unaff_x20 + -0x20)) {
      lVar6 = unaff_x21;
    }
    FUN_1086a94f4(param_5,lVar6);
    func_0x0001086b0264();
    func_0x0001086b0a24(param_5 + 0xa8);
  }
  else {
    if (param_4 == 1) {
      func_0x0001086b0500();
      lVar6 = in_stack_00000058;
      puVar4 = in_stack_00000050;
      func_0x000107c324b0();
      func_0x0001086aff10();
      FUN_1086b0c90();
      puVar4[0x10] = *(undefined8 *)(lVar6 + 0x80);
      puVar4[0xf] = in_register_00005008;
      puVar4[0xe] = param_1;
      *(undefined8 *)(lVar6 + 0x78) = 0;
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined8 *)(lVar6 + 0x70) = 0;
      puVar4[0x11] = *(undefined8 *)(lVar6 + 0x88);
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      uVar8 = *(undefined8 *)(lVar6 + 0x90);
      puVar4[0x13] = *(undefined8 *)(lVar6 + 0x98);
      puVar4[0x12] = uVar8;
      puVar4[0x14] = *(undefined8 *)(lVar6 + 0xa0);
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      *(undefined8 *)(lVar6 + 0xa0) = 0;
      return puVar4;
    }
    if ((long)param_4 < 9) {
      if (unaff_x21 == unaff_x20) {
        return param_2;
      }
      in_stack_00000010 = &stack0x00000018;
      in_stack_00000018 = 0;
      in_stack_00000008 = param_5;
      func_0x0001086b0500();
      FUN_1086a94f4();
      lVar6 = 0;
      func_0x0001086b0264();
      lVar7 = param_5;
      while (lVar1 = unaff_x21 + 0xa8, lVar1 != unaff_x20) {
        lVar2 = lVar7 + 0xa8;
        if (*(long *)(unaff_x21 + 0x130) < *(long *)(lVar7 + 0x88)) {
          FUN_1086a94f4(lVar2);
          func_0x0001086b0264();
          lVar7 = lVar6;
          while (lVar3 = param_5, lVar7 != 0) {
            lVar3 = param_5 + lVar7;
            if (*(long *)(lVar3 + -0x20) <= *(long *)(unaff_x21 + 0x130)) {
              lVar3 = param_5 + lVar7;
              break;
            }
            lVar7 = lVar7 + -0xa8;
            func_0x0001086ad2d8(lVar3,lVar7 + param_5);
          }
          func_0x0001086ad2d8(lVar3,lVar1);
        }
        else {
          FUN_1086a94f4(lVar2,lVar1);
          func_0x0001086b0264();
        }
        lVar6 = lVar6 + 0xa8;
        lVar7 = lVar2;
        unaff_x21 = lVar1;
      }
    }
    else {
      lVar7 = (param_4 >> 1) * 0xa8 + unaff_x21;
      func_0x0001086b08dc();
      FUN_1086ac9a8();
      func_0x0001086b0ac4();
      FUN_1086ac9a8();
      in_stack_00000010 = &stack0x00000018;
      in_stack_00000018 = 0;
      lVar6 = lVar7;
      in_stack_00000008 = param_5;
      while (unaff_x21 != lVar7) {
        if (lVar6 == unaff_x20) goto LAB_1086ace60;
        if (*(long *)(lVar6 + 0x88) < *(long *)(unaff_x21 + 0x88)) {
          FUN_1086a94f4(param_5,lVar6);
          lVar6 = lVar6 + 0xa8;
        }
        else {
          FUN_1086a94f4(param_5,unaff_x21);
          unaff_x21 = unaff_x21 + 0xa8;
        }
        func_0x0001086b0264();
        param_5 = param_5 + 0xa8;
      }
      for (; lVar6 != unaff_x20; lVar6 = lVar6 + 0xa8) {
        FUN_1086a94f4(param_5,lVar6);
        param_5 = param_5 + 0xa8;
        func_0x0001086b0264();
      }
    }
  }
LAB_1086ace68:
  in_stack_00000008 = 0;
  puVar4 = &stack0x00000008;
  FUN_1086ad31c(puVar4);
  return puVar4;
LAB_1086ace60:
  for (; unaff_x21 != lVar7; unaff_x21 = unaff_x21 + 0xa8) {
    func_0x0001086b0500();
    FUN_1086a94f4();
    func_0x0001086b0264();
  }
  goto LAB_1086ace68;
}



/* Entry: 1086ace8c; end: 1086ad29b;  */

void FUN_1086ace8c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar5 = param_3;
  lVar12 = param_6;
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    lStack_88 = lVar12;
    if (param_5 <= param_7 || param_4 <= param_7) break;
    lVar12 = 0;
    lVar11 = -param_4;
    while( true ) {
      if (lVar11 == 0) {
        return;
      }
      lVar1 = param_1 + lVar12;
      if (*(long *)(param_2 + 0x88) < *(long *)(lVar1 + 0x88)) break;
      lVar12 = lVar12 + 0xa8;
      lVar11 = lVar11 + 1;
    }
    lStack_90 = lVar5;
    if (-lVar11 < param_5) {
      lVar6 = param_5 / 2;
      lVar13 = param_2 + lVar6 * 0xa8;
      lVar9 = lVar1;
      uVar2 = ((param_2 - param_1) - lVar12) / 0xa8;
      while (uVar2 != 0) {
        lVar5 = lVar9 + (uVar2 >> 1) * 0xa8;
        uVar4 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
        uVar2 = uVar2 >> 1;
        if (*(long *)(lVar5 + 0x88) <= *(long *)(lVar13 + 0x88)) {
          lVar9 = lVar5 + 0xa8;
          uVar2 = uVar4;
        }
      }
      param_4 = ((lVar9 - param_1) - lVar12) / 0xa8;
    }
    else {
      if (lVar11 == -1) {
        func_0x000107c324b0(param_1 + lVar12,param_2);
        func_0x0001086b0a24(auStack_c8);
        func_0x0001086b0314();
        func_0x0001086ad2d8();
        func_0x000107c32508();
        func_0x0001086ad2d8();
        func_0x0001086b09c8();
        return;
      }
      param_4 = -lVar11 / 2;
      lVar9 = param_1 + param_4 * 0xa8 + lVar12;
      uVar2 = (lVar5 - param_2) / 0xa8;
      lVar5 = param_2;
      while (lVar13 = lVar5, uVar2 != 0) {
        uVar4 = uVar2 >> 1;
        lVar6 = lVar13 + uVar4 * 0xa8;
        uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
        lVar5 = lVar6 + 0xa8;
        if (*(long *)(lVar9 + 0x88) <= *(long *)(lVar6 + 0x88)) {
          uVar2 = uVar4;
          lVar5 = lVar13;
        }
      }
      lVar6 = (lVar13 - param_2) / 0xa8;
    }
    lVar5 = lVar13;
    if ((lVar9 != param_2) && (lVar10 = param_2, lVar5 = lVar9, param_2 != lVar13)) {
      while( true ) {
        lStack_98 = param_7;
        lStack_a0 = param_5;
        lStack_a8 = lVar6;
        lStack_b0 = param_4;
        lVar8 = lVar10;
        func_0x0001086b08dc();
        FUN_1086ad29c();
        lVar5 = lVar5 + 0xa8;
        param_2 = param_2 + 0xa8;
        param_4 = lStack_b0;
        lVar6 = lStack_a8;
        param_7 = lStack_98;
        param_5 = lStack_a0;
        if (param_2 == lVar13) break;
        lVar10 = param_2;
        if (lVar5 != lVar8) {
          lVar10 = lVar8;
        }
      }
      lVar3 = lVar8;
      lVar10 = lVar5;
      if (lVar5 != lVar8) {
        do {
          while( true ) {
            lVar7 = lVar3;
            FUN_1086ad29c(lVar10,lVar8);
            lVar10 = lVar10 + 0xa8;
            lVar8 = lVar8 + 0xa8;
            if (lVar8 == lVar13) break;
            lVar3 = lVar8;
            if (lVar10 != lVar7) {
              lVar3 = lVar7;
            }
          }
          param_4 = lStack_b0;
          lVar6 = lStack_a8;
          param_7 = lStack_98;
          param_5 = lStack_a0;
          lVar3 = lVar7;
          lVar8 = lVar7;
        } while (lVar10 != lVar7);
      }
    }
    if (param_4 + lVar6 < (param_5 - (param_4 + lVar6)) - lVar11) {
      FUN_1086ace8c(lVar1,lVar9,lVar5,param_4,lVar6,lStack_88);
      param_4 = -(param_4 + lVar11);
      param_5 = param_5 - lVar6;
      param_1 = lVar5;
      param_2 = lVar13;
      lVar5 = lStack_90;
      lVar12 = lStack_88;
    }
    else {
      FUN_1086ace8c(lVar5,lVar13,lStack_90,-(param_4 + lVar11),param_5 - lVar6,lStack_88);
      param_1 = param_1 + lVar12;
      param_5 = lVar6;
      param_2 = lVar9;
      lVar12 = lStack_88;
    }
  }
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  lVar11 = lVar12;
  lStack_80 = lVar12;
  if (param_5 < param_4) {
    while (param_2 != lVar5) {
      FUN_1086a94f4(lVar12);
      func_0x0001086b0f84();
    }
    while (lVar5 = lVar5 + -0xa8, lVar11 != lVar12) {
      if (param_2 == param_1) goto LAB_1086ad220;
      lVar1 = lVar11;
      lVar13 = param_2 + -0xa8;
      lVar9 = param_2 + -0xa8;
      if (*(long *)(param_2 + -0x20) <= *(long *)(lVar11 + -0x20)) {
        lVar1 = lVar11 + -0xa8;
        lVar13 = param_2;
        lVar9 = lVar11 + -0xa8;
      }
      param_2 = lVar13;
      func_0x0001086ad2d8(lVar5,lVar9);
      lVar11 = lVar1;
    }
  }
  else {
    while (param_1 != param_2) {
      func_0x0001086b08dc();
      FUN_1086a94f4();
      func_0x0001086b0f84();
      lVar11 = lVar11 + 0xa8;
    }
    while (lVar11 != lVar12) {
      if (param_2 == lVar5) {
        func_0x0001086ad368(&uStack_61,lVar12,lVar11,param_1);
        break;
      }
      if (*(long *)(param_2 + 0x88) < *(long *)(lVar12 + 0x88)) {
        func_0x0001086ad2d8(param_1,param_2);
        param_2 = param_2 + 0xa8;
      }
      else {
        func_0x0001086ad2d8(param_1,lVar12);
        lVar12 = lVar12 + 0xa8;
      }
      param_1 = param_1 + 0xa8;
    }
  }
LAB_1086ad240:
  FUN_1086ad31c(&lStack_80);
  return;
LAB_1086ad220:
  while (lVar11 != lVar12) {
    lVar11 = lVar11 + -0xa8;
    func_0x0001086ad2d8(lVar5,lVar11);
    lVar5 = lVar5 + -0xa8;
  }
  goto LAB_1086ad240;
}



/* Entry: 1086ad29c; end: 1086ad31b;  */

void FUN_1086ad29c(void)

{
  undefined1 auStack_c8 [168];
  
  func_0x000107c324b0();
  func_0x0001086b0a24(auStack_c8);
  func_0x0001086b0314();
  func_0x0001086ad2d8();
  func_0x000107c32508();
  func_0x0001086ad2d8();
  func_0x0001086b09c8();
  return;
}



/* Entry: 1086ad31c; end: 1086ad3ab;  */

void FUN_1086ad31c(long param_1)

{
  undefined8 *unaff_x19;
  ulong uVar1;
  ulong *puVar2;
  
  func_0x000107c3250c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    puVar2 = (ulong *)unaff_x19[1];
    for (uVar1 = 0; uVar1 < *puVar2; uVar1 = uVar1 + 1) {
      func_0x0001086a9714();
    }
  }
  return;
}



/* Entry: 1086ad3ac; end: 1086ad3e7;  */

void FUN_1086ad3ac(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [3];
  
  func_0x0001086b08b8();
  FUN_1086ad3e8();
  if (param_1 != 0) {
    FUN_1086ad4c4(auStack_38);
    uVar1 = auStack_38[0];
    auStack_38[0] = 0;
    *unaff_x19 = uVar1;
    *(undefined1 *)((long)unaff_x19 + 9) = 1;
    FUN_1086ac938(auStack_38);
    return;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1086ad3e8; end: 1086ad483;  */

long FUN_1086ad3e8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1086ad484; end: 1086ad4c3;  */

void FUN_1086ad484(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 auStack_38 [3];
  
  FUN_1086ad4c4(auStack_38);
  uVar1 = auStack_38[0];
  auStack_38[0] = 0;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 1;
  FUN_1086ac938(auStack_38);
  return;
}



/* Entry: 1086ad4c4; end: 1086ad5b7;  */

void FUN_1086ad4c4(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1086ad578;
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
    if (uVar8 == uVar3) goto LAB_1086ad578;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1086ad578:
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



/* Entry: 1086ad5b8; end: 1086ad5ff;  */

void FUN_1086ad5b8(long *param_1)

{
  undefined1 *puStack_38;
  undefined1 uStack_30;
  undefined1 uStack_21;
  
  if (*param_1 != 0) {
    puStack_38 = &uStack_21;
    uStack_30 = 1;
    FUN_1086ac970(&puStack_38);
    *param_1 = 0;
  }
  return;
}



/* Entry: 1086ad600; end: 1086ad69b;  */

long FUN_1086ad600(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1086ad69c; end: 1086ad6cb;  */

undefined8 FUN_1086ad69c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1086ad6cc(auStack_38);
  FUN_1086a9830(auStack_38);
  return uVar1;
}



/* Entry: 1086ad6cc; end: 1086ad7bf;  */

void FUN_1086ad6cc(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1086ad780;
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
    if (uVar8 == uVar3) goto LAB_1086ad780;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1086ad780:
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



/* Entry: 1086ad7c0; end: 1086ad827;  */

void FUN_1086ad7c0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0();
  func_0x000107c3194c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  FUN_1086a76e0(unaff_x20 + 0x28,unaff_x19 + 0x28);
  func_0x000107c27b9c(unaff_x20 + 0x78,unaff_x19 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  func_0x000107c3194c(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
  FUN_10865f9c0(unaff_x20 + 0xb8,unaff_x19 + 0xb8);
  return;
}



/* Entry: 1086ad828; end: 1086ad843;  */

void FUN_1086ad828(long param_1)

{
  FUN_1086ad844();
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}



/* Entry: 1086ad844; end: 1086ad947;  */

void FUN_1086ad844(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c324b0();
  func_0x0001086aff10();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_1086a76a0(param_1 + 0x28,param_2 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x19 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x20 + 200) = *(undefined8 *)(unaff_x19 + 200);
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  return;
}



/* Entry: 1086ad948; end: 1086ad9fb;  */

void FUN_1086ad948(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001086b0aa0();
  func_0x0001086b03b4();
  uVar2 = 1;
  uVar1 = unaff_x20;
  func_0x000107c28228();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x20) = uVar2;
  FUN_1086ad9fc(unaff_x19 + 0x28);
  func_0x000107c313dc(unaff_x19 + 0x78);
  func_0x0001086b0ccc();
  *(undefined8 *)(unaff_x19 + 0x90) = unaff_x20;
  func_0x0001086b05c0();
  *(undefined8 *)(unaff_x19 + 0x98) = unaff_x20;
  func_0x0001086b05cc(unaff_x19 + 0xa0);
  FUN_10865fa68(unaff_x19 + 0xb8);
  return;
}



/* Entry: 1086ad9fc; end: 1086ada33;  */

void FUN_1086ad9fc(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001086b0e60();
  FUN_1086ada34(auStack_38);
  func_0x0001086b0518();
  return;
}



/* Entry: 1086ada34; end: 1086ada77;  */

void FUN_1086ada34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a8ea18;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  func_0x0001086b09d8();
  func_0x000107c3034c(param_1);
  return;
}



/* Entry: 1086ada78; end: 1086ada93;  */

void FUN_1086ada78(long param_1)

{
  FUN_1086a94f4();
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



/* Entry: 1086ada94; end: 1086adac7;  */

long FUN_1086ada94(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    func_0x0001086ad2d8();
  }
  else {
    FUN_1086ada78();
  }
  return param_1;
}


