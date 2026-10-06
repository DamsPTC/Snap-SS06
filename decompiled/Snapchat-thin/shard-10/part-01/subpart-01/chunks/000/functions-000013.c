/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078ae59c; end: 1078ae5bf;  */

void FUN_1078ae59c(void)

{
  undefined1 in_ZR;
  
  func_0x0001078af35c();
  if ((bool)in_ZR) {
    func_0x0001078af350();
    func_0x0001078afef8();
  }
  return;
}



/* Entry: 1078ae6c8; end: 1078ae6df;  */

void FUN_1078ae6c8(long *param_1,long param_2)

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



/* Entry: 1078ae840; end: 1078ae8ab;  */

void FUN_1078ae840(long *param_1,long param_2)

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



/* Entry: 1078ae998; end: 1078ae9bf;  */

void FUN_1078ae998(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001078af538();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e74f8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1078aeaec; end: 1078aeaf7;  */

undefined ** FUN_1078aeaec(void)

{
  return &PTR_DAT_1109e75f8;
}



/* Entry: 1078aecac; end: 1078aed8f;  */

uint FUN_1078aecac(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return 1;
  }
  func_0x00010745fd34();
  return (uint)param_1 ^ 1;
}



/* Entry: 1078aef0c; end: 1078af5e3;  */

void FUN_1078aef0c(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1078aefc0;
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
    if (uVar8 == uVar3) goto LAB_1078aefc0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1078aefc0:
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



/* Entry: 1078afdc4; end: 1078afe2f;  */

bool FUN_1078afdc4(int *param_1,int *param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return true;
  }
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return param_1[2] != param_2[2] || param_1[3] != param_2[3];
  }
  return true;
}



/* Entry: 1078b0024; end: 1078b003f;  */

undefined4 * FUN_1078b0024(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_x19;
  long unaff_x29;
  
  puVar2 = (undefined4 *)(unaff_x29 + -4);
  func_0x0001009eba28();
  if (param_1 < *(undefined4 **)(unaff_x19 + 4)) {
    puVar1 = param_1 + 1;
    *param_1 = *puVar2;
  }
  else {
    puVar1 = unaff_x19;
    func_0x0001009eba80();
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1078b0364; end: 1078b040f;  */

void FUN_1078b0364(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1078b0624; end: 1078b067f;  */

uint FUN_1078b0624(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(ulong *)(param_1 + 0x20) < 0x400) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x800) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x400;
  }
  return uVar1 ^ 1;
}



/* Entry: 1078b0b7c; end: 1078b0c1b;  */

undefined1  [16] FUN_1078b0b7c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1078b0f6c; end: 1078b0fe3;  */

undefined1  [16] FUN_1078b0f6c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  undefined ***pppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  
  func_0x0001078b13b0();
  ppuStack_48 = &PTR_DAT_1109e7810;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_1;
  if (extraout_x8 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    pppuVar1 = &ppuStack_48;
    func_0x0001075098d0(pppuVar1);
  }
  func_0x000107509afc();
  func_0x0001078b13c8();
  if ((bool)in_ZR) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = pppuVar1;
    return auVar4;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_48;
  func_0x000107509afc();
  func_0x0001078b136c();
  func_0x0001078b13b0();
  ppuStack_98 = &PTR_DAT_1109e7890;
  pppuStack_80 = &ppuStack_98;
  pppuStack_90 = pppuVar1;
  if (extraout_x8_00 == 0) {
    pppuVar1 = (undefined ***)0x0;
    uVar2 = 0;
  }
  else {
    pppuVar1 = &ppuStack_98;
    func_0x0001078b1274(pppuVar1);
    uVar2 = (ulong)param_2 & 0xff;
  }
  func_0x0001078b1328(&ppuStack_98);
  func_0x0001078b13c8();
  if ((bool)in_ZR) {
    auVar5._8_8_ = uVar2;
    auVar5._0_8_ = pppuVar1;
    return auVar5;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_98;
  func_0x0001078b1328();
  func_0x0001078b136c();
  ppuVar3 = (undefined **)*param_2;
  pppuVar1[1] = (undefined **)param_2[1];
  *pppuVar1 = ppuVar3;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(pppuVar1 + 2) = *param_3;
  pppuVar1[3] = *(undefined ***)(param_3 + 2);
  *(undefined1 *)(pppuVar1 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined2 *)(pppuVar1 + 5) = 0;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pppuVar1;
  return auVar6;
}



/* Entry: 1078b1120; end: 1078b1147;  */

void FUN_1078b1120(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001078b13ec();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e7810;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1078b12e4; end: 1078b131b;  */

long FUN_1078b12e4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e7900);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078b1534; end: 1078b1557;  */

void FUN_1078b1534(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 4;
  return;
}



/* Entry: 1078b1b28; end: 1078b1b3b;  */

void FUN_1078b1b28(void)

{
  func_0x0001078b1af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b208c; end: 1078b2267;  */

void FUN_1078b208c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint extraout_w8;
  undefined *extraout_x9;
  
  if ((*(long *)(*(long *)(param_1 + 0x28) + 8) != 0) &&
     (func_0x0001078b2830(), extraout_x9 == &UNK_101000000)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glUniform1i_11034b830)(extraout_w8 >> 1 & 0x7fff,param_3);
    return;
  }
  return;
}



/* Entry: 1078b2818; end: 1078b28cb;  */

void FUN_1078b2818(long *param_1,long param_2)

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



/* Entry: 1078b3f3c; end: 1078b3f5f;  */

void FUN_1078b3f3c(long param_1)

{
  func_0x0001078b4690();
  if (param_1 != 0) {
    func_0x0001078b4644();
  }
  return;
}



/* Entry: 1078b418c; end: 1078b41bb;  */

void FUN_1078b418c(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar2 = puVar3;
  for (lVar4 = param_2 * 6; lVar4 != 0; lVar4 = lVar4 + -6) {
    uVar1 = *param_3;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_3 + 1);
    *puVar2 = uVar1;
    puVar2 = (undefined4 *)((long)puVar2 + 6);
  }
  *(long *)(param_1 + 8) = (long)puVar3 + param_2 * 6;
  return;
}



/* Entry: 1078b4468; end: 1078b4557;  */

void FUN_1078b4468(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *param_1;
  plVar8 = (long *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  plVar5 = param_1;
  func_0x000104ab30b8();
  lVar11 = param_1[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      lVar6 = *plVar8;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar6;
      func_0x0001078b477c();
      bVar2 = (SUB161(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (char)((long)&PTR_LOOP_110c8acd8 + lVar6) * 'i') & 0x7f;
      uVar7 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar5) = bVar2;
      *(byte *)(lVar6 + ((long)plVar5 - 7U & uVar7) + (uVar7 & 7)) = bVar2;
      lVar6 = *plVar8;
      plVar4 = (long *)(lVar11 + (long)plVar5 * 0x10);
      plVar4[1] = plVar8[1];
      *plVar4 = lVar6;
    }
    plVar8 = plVar8 + 2;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1078b4a7c; end: 1078b4d27;  */

void FUN_1078b4a7c(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [72];
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined1 auStack_180 [64];
  undefined1 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  ulong *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  func_0x0001078b4f58();
  puVar4 = (undefined8 *)param_1[0xc];
  uVar5 = param_1[0xe];
  puVar7 = (undefined8 *)param_1[0xd];
  param_1[0xd] = (ulong)puStack_78;
  param_1[0xc] = (ulong)puStack_80;
  param_1[0xe] = uStack_70;
  puStack_80 = puVar4;
  puStack_78 = puVar7;
  uStack_70 = uVar5;
  __ZNSt3__15mutex6unlockEv(param_1 + 4);
  if (puVar4 != puVar7) {
    puVar2 = param_1;
    (**(code **)(*param_1 + 0x20))();
    puVar4 = puStack_78;
    uVar5 = *puVar2;
    puVar7 = puStack_80;
    uStack_88 = uVar5;
    if ((uVar5 >> 0x20 == 0) || ((uVar5 & 0xffffffff) == 0)) {
      for (; puVar7 != puVar4; puVar7 = puVar7 + 5) {
        if (puVar7[4] != 0) {
          auStack_e0[0] = 3;
          uStack_d8 = *puVar7;
          uStack_d0 = 0;
          uStack_90 = 0;
          func_0x00010725b570(puVar7 + 1,auStack_e0);
          func_0x0001078b4f48();
        }
      }
    }
    else {
      puVar3 = &uStack_88;
      FUN_1078b5334(puVar3,2);
      puVar2 = puVar3;
      __Znam();
      _bzero();
      puStack_e8 = puVar2;
      func_0x0001073caeb8(param_1);
      func_0x0001078abe6c();
      func_0x0001073c8f68(auStack_128,uVar5,1,0,&puStack_e8,puVar3,0);
      lVar6 = 0;
      lStack_138 = lStack_108 + *(long *)(lStack_100 + 8);
      uStack_130 = uStack_118;
      for (uVar5 = 1; uVar1 = ((long)puStack_78 - (long)puStack_80) / 0x28, uVar5 - 1 < uVar1;
          uVar5 = uVar5 + 1) {
        puVar4 = (undefined8 *)((long)puStack_80 + lVar6);
        if (puVar4[4] != 0) {
          auStack_180[0] = 0;
          uStack_140 = 0;
          uStack_188 = *puVar4;
          auStack_190[0] = 0;
          if (uVar5 == uVar1) {
            func_0x000107893500(auStack_180,auStack_128);
          }
          else {
            func_0x00010789352c(auStack_180,auStack_128,auStack_120,auStack_110,&lStack_138);
          }
          func_0x0001072bb94c(auStack_1e8,auStack_190);
          func_0x00010725b570(puVar4 + 1,auStack_1e8);
          func_0x00010725b590(auStack_1d8);
          func_0x0001078b4f48();
        }
        lVar6 = lVar6 + 0x28;
      }
      func_0x00010725b5b0(auStack_128);
      func_0x00010724e5b8(&puStack_e8);
    }
  }
  func_0x000107892b74(&puStack_80);
  return;
}



/* Entry: 1078b4f04; end: 1078b4f47;  */

long * FUN_1078b4f04(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1078b5204; end: 1078b5217;  */

long * FUN_1078b5204(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -1;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1078b5334; end: 1078b5357;  */

ulong FUN_1078b5334(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1;
  func_0x0001073da298(uVar1,param_1[1],param_2);
  return uVar1 & 0xffffffff;
}



/* Entry: 1078b5498; end: 1078b54c3;  */

undefined8 FUN_1078b5498(long param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x380);
}



/* Entry: 1078b59d4; end: 1078b5a7b;  */

void FUN_1078b59d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_48;
  
  uStack_48 = param_3;
  func_0x0001078b631c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x0001078b62b8();
  func_0x0001078b6388();
  func_0x0001078af888(param_5);
  if ((int)param_5 - 0x10U < 0x1c) {
    func_0x0001078b6380(&uStack_48);
    func_0x0001078b62c4();
    _glCompressedTexImage2D();
  }
  else {
    func_0x0001078b62c4();
    _glTexImage2D();
  }
  return;
}



/* Entry: 1078b6428; end: 1078b644f;  */

void FUN_1078b6428(undefined1 *param_1)

{
  func_0x0001078af848(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glStencilFunc_11034b7a8)();
  return;
}



/* Entry: 1078b6698; end: 1078b669b;  */

undefined8 * FUN_1078b6698(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1109e7f80;
  lVar4 = param_1[4];
  plVar1 = (long *)(param_1[2] + 0x90);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_1078ae59c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b6854; end: 1078b685f;  */

long FUN_1078b6854(long *param_1,long *param_2)

{
  long lVar1;
  
  param_2 = (long *)*param_2;
  if (*(long *)*param_1 == *param_2) {
    lVar1 = ((long *)*param_1)[1];
    func_0x00010c09e220(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e220(param_2[1]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(lVar1);
    func_0x0001078b6d40();
    func_0x0001078b6d48();
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1078b6b88; end: 1078b6bb3;  */

long FUN_1078b6b88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001078b6bb4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1078b6d64; end: 1078b6f87;  */

void FUN_1078b6d64(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = param_1;
  _MTLCreateSystemDefaultDevice();
  puVar2 = PTR__OBJC_CLASS___MTLCaptureManager_1126d5608;
  func_0x00010c22b7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___MTLCaptureDescriptor_1126d5610;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLCaptureDescriptor_1126d5610);
  func_0x00010c1790c0();
  func_0x00010c18c2a0(puVar3);
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bdc34e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7200(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x0001078b7004();
  func_0x00010c24e400();
  _objc_retain(0);
  if (((ulong)puVar2 & 1) == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110ea5158);
  }
  else {
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  func_0x0001078b7004();
  _objc_release(puVar3);
  func_0x0001078b700c();
  _objc_release(puVar1);
  return;
}



/* Entry: 1078b70a8; end: 1078b70bb;  */

void FUN_1078b70a8(void)

{
  func_0x0001078b7078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b8ee8; end: 1078b8ef3;  */

byte FUN_1078b8ee8(undefined8 param_1,long param_2)

{
  return *(byte *)(param_2 + 1) >> 1 & 1;
}



/* Entry: 1078b9a14; end: 1078b9a37;  */

undefined8 FUN_1078b9a14(undefined8 param_1)

{
  func_0x0001078b9a38(param_1,0);
  return param_1;
}



/* Entry: 1078b9ac8; end: 1078b9aef;  */

void FUN_1078b9ac8(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 1078b9cf8; end: 1078b9f67;  */

void FUN_1078b9cf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1078ba56c; end: 1078ba58f;  */

void FUN_1078ba56c(void)

{
  func_0x0001078ba988();
  _CFRelease();
  return;
}



/* Entry: 1078bab34; end: 1078bab37;  */

undefined8 * FUN_1078bab34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_1109e81d0;
  param_1[1] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_release(*puVar1);
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 1078bafa8; end: 1078bafcb;  */

void FUN_1078bafa8(void)

{
  func_0x0001078bb6d8();
  _CFRelease();
  return;
}



/* Entry: 1078bb72c; end: 1078bb77b; +[MGLNativeNetworkManager sharedManager] */

void FUN_1078bb72c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137269f8 != -1) {
    func_0x00010002a2fc(0x1137269f8,&PTR___NSConcreteGlobalBlock_1109e8200);
  }
  uVar1 = uRam00000001137269f0;
  _objc_retain(uRam00000001137269f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1078bb9b0; end: 1078bb9e7; -[MGLNativeNetworkManager debugLog:] */

void FUN_1078bb9b0(void)

{
  func_0x0001078bba4c();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078bba7c();
  func_0x00010bf66280();
  func_0x0001078bba5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1078bbb90; end: 1078bbbab;  */

void FUN_1078bbb90(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1078bbfb4; end: 1078bbff7;  */

void FUN_1078bbfb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  __Znwm();
  _bzero();
  func_0x0001078bd338(uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 1078bc0d0; end: 1078bc11f;  */

void FUN_1078bc0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x0001078bd6f8();
  *(undefined8 *)(unaff_x19 + 0x58) = param_1;
  *(undefined8 *)(unaff_x19 + 0x60) = param_2;
  *(undefined8 *)(unaff_x19 + 0x68) = param_3;
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc208; end: 1078bc23f;  */

void FUN_1078bc208(undefined8 param_1,long param_2)

{
  __ZNSt3__15mutex4lockEv();
  func_0x0001078bd1b0(param_1,param_2 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 1078bc588; end: 1078bc59f;  */

void FUN_1078bc588(void)

{
  func_0x0001052b77f4();
  return;
}



/* Entry: 1078bc6c8; end: 1078bc70f;  */

void FUN_1078bc6c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  func_0x000107874c48();
  if (1 < (long)puVar1) {
    func_0x0001078bc74c(auStack_30,*param_1);
    func_0x0001078bc728(param_1,auStack_30);
    func_0x000107874c84(auStack_30);
  }
  return;
}



/* Entry: 1078bca2c; end: 1078bcb83;  */

/* WARNING: Possible PIC construction at 0x0001078bca8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078bcb70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078bca90) */
/* WARNING: Removing unreachable block (ram,0x0001078bca9c) */
/* WARNING: Removing unreachable block (ram,0x0001078bcab0) */
/* WARNING: Removing unreachable block (ram,0x0001078bcab8) */
/* WARNING: Removing unreachable block (ram,0x0001078bcac0) */
/* WARNING: Removing unreachable block (ram,0x0001078bcac8) */
/* WARNING: Removing unreachable block (ram,0x0001078bcad0) */
/* WARNING: Removing unreachable block (ram,0x0001078bcaf0) */
/* WARNING: Removing unreachable block (ram,0x0001078bcadc) */
/* WARNING: Removing unreachable block (ram,0x0001078bcae4) */
/* WARNING: Removing unreachable block (ram,0x0001078bcaf4) */
/* WARNING: Removing unreachable block (ram,0x0001078bcafc) */
/* WARNING: Removing unreachable block (ram,0x0001078bcb0c) */
/* WARNING: Removing unreachable block (ram,0x0001078bcb14) */
/* WARNING: Removing unreachable block (ram,0x0001078bcb04) */
/* WARNING: Removing unreachable block (ram,0x0001078bcaa4) */
/* WARNING: Removing unreachable block (ram,0x0001078bcb74) */

void FUN_1078bca2c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = param_1;
  plVar1 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 > param_2 || param_2 == plVar4) {
    if (plVar4 <= param_2) {
      return;
    }
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar4 < (long *)0x3) || (((ulong)plVar4 & (long)plVar4 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001078bd720();
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (plVar4 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto code_r0x0001078bcb84;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)((long)param_2 << 3);
    __Znwm();
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x0001078bcb84:
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bceb8; end: 1078bcecb;  */

void FUN_1078bceb8(void)

{
  func_0x0001078bd1a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bd0c4; end: 1078bd0e7;  */

undefined8 FUN_1078bd0c4(undefined8 param_1)

{
  func_0x0001078bd0e8(param_1,0);
  return param_1;
}



/* Entry: 1078bd290; end: 1078bd2d3;  */

void FUN_1078bd290(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001078bd79c();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1078bd4b0; end: 1078bd533;  */

void FUN_1078bd4b0(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  
  if ((bRam0000000113726a38 & 1) == 0) {
    lVar1 = 0x113726a38;
    ___cxa_guard_acquire();
    if ((int)lVar1 != 0) {
      func_0x0001078bd6e8();
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      func_0x0001078bd660(&PTR_DAT_1109e82a0);
    }
  }
  lVar1 = lRam0000000113726a30;
  *param_1 = uRam0000000113726a28;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001078bd79c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1078bd81c; end: 1078bd86b;  */

void FUN_1078bd81c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  func_0x0001078bdbc4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1078bdb70; end: 1078bdb93;  */

long FUN_1078bdb70(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  func_0x00010835c63c();
  return (long)(int)param_1 * (long)iVar1;
}



/* Entry: 1078bdf04; end: 1078bdfa3;  */

void FUN_1078bdf04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001078bdf40();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1078be164; end: 1078be18b;  */

long FUN_1078be164(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078be8cc; end: 1078be8eb;  */

void FUN_1078be8cc(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001078bdb94();
  }
  return;
}



/* Entry: 1078be9f8; end: 1078bebf7;  */

undefined1 * FUN_1078be9f8(undefined1 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  long *unaff_x20;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar4 = param_1;
  func_0x0001078bf500();
  lVar7 = *(long *)(*(long *)(puVar4 + 0x2b0) + 0x150);
  uStack_48 = extraout_x8;
  if (*(long *)(puVar4 + 0x330) == 0) {
    fVar10 = **(float **)(param_1 + 8);
    func_0x000104c2fe00(auStack_a0,lVar7 + 8);
    uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x40) >> 0x20) * fVar10,
                         (float)*(undefined8 *)(lVar7 + 0x40) * fVar10);
    lVar9 = *(long *)(param_1 + 8);
    uStack_58 = 1;
    puVar5 = (undefined8 *)0x288;
    __Znwm();
    plVar8 = puVar5 + 1;
    *plVar8 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_1109e8480;
    unaff_x20 = puVar5 + 3;
    plStack_b0 = *(long **)(lVar9 + 0x18);
    if (plStack_b0 != (long *)0x0) {
      plVar1 = plStack_b0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_50 = puVar5;
    func_0x000108122a10(unaff_x20,&plStack_b0);
    func_0x000107475310(&plStack_b0);
    puVar5[3] = &PTR_DAT_1109e84d0;
    puVar5[0x39] = 0;
    puVar5[0x38] = 0;
    puVar5[0x3a] = lVar9;
    puVar5[0x3b] = 0;
    func_0x000104c318bc(puVar5 + 0x3c,auStack_a0);
    puVar5[0x43] = uStack_68;
    *(int *)(puVar5 + 0x44) = (int)uStack_68;
    *(int *)((long)puVar5 + 0x224) = (int)((ulong)uStack_68 >> 0x20);
    puVar5[0x45] = 0;
    puVar5[0x46] = 0x32aaaba7;
    puVar5[0x48] = 0;
    puVar5[0x47] = 0;
    puVar5[0x4a] = 0;
    puVar5[0x49] = 0;
    puVar5[0x4c] = 0;
    puVar5[0x4b] = 0;
    puVar5[0x4d] = 0;
    puVar5[0x50] = 0;
    puVar5[0x4f] = 0;
    puVar5[0x4e] = puVar5 + 0x4f;
    puStack_50 = (undefined8 *)0x0;
    if ((puVar5[5] == 0) || (in_ZR = *(long *)(puVar5[5] + 8) == -1, (bool)in_ZR)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_b0 = unaff_x20;
      puStack_a8 = puVar5;
      func_0x0001003a8180(puVar5 + 4,&plStack_b0);
      func_0x0001003a90c4(&plStack_b0);
    }
    func_0x0001078bec24(auStack_60);
    (**(code **)(*unaff_x20 + 0x20))(unaff_x20);
    uVar6 = *(undefined8 *)(param_1 + 0x330);
    *(long **)(param_1 + 0x330) = unaff_x20;
    func_0x0001078be8ec(uVar6);
    func_0x0001078be8ec(0);
    puVar4 = auStack_a0;
    func_0x000104c2f714();
  }
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb0) & 1) == 0) {
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(lVar7 + 0x48);
  }
  func_0x0001078bf4d4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001078be8ec(unaff_x20);
    puVar4 = auStack_a0;
    func_0x000104c2f714(puVar4);
    func_0x0001078bf554();
    func_0x0001073ebb78(puVar4 + 0x18);
    func_0x0001073ebb78(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1078bede8; end: 1078bedfb;  */

void FUN_1078bede8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1078bef0c; end: 1078bef4f;  */

void FUN_1078bef0c(undefined8 *param_1)

{
  func_0x0001078bf18c();
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}



/* Entry: 1078bf0c0; end: 1078bf0f3;  */

undefined8 * FUN_1078bf0c0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e8568;
  param_1[1] = 0;
  func_0x00010811e8f8(param_1 + 3);
  return param_1;
}



/* Entry: 1078bf1e8; end: 1078bf257;  */

/* WARNING: Possible PIC construction at 0x0001078bf21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078bf220) */
/* WARNING: Removing unreachable block (ram,0x0001078bf23c) */
/* WARNING: Removing unreachable block (ram,0x0001078bf254) */
/* WARNING: Removing unreachable block (ram,0x0001078bf234) */
/* WARNING: Removing unreachable block (ram,0x0001078bf524) */

void FUN_1078bf1e8(undefined8 param_1,long param_2)

{
  long lVar1;
  long *extraout_x8;
  int extraout_w11;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x0001078bf4e8();
  func_0x0001078bf274(auStack_40,1);
  func_0x0001078bf2cc();
  func_0x0001078bf5d4();
  *extraout_x8 = lStack_30;
  extraout_x8[1] = param_2;
  lVar1 = 0;
  if (lStack_30 != 0) {
    lVar1 = lStack_30 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    uStack_48 = 0x1078bf220;
    lStack_58 = extraout_x8[1];
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x0001078bf55c();
      } while (extraout_w11 != 0);
    }
    func_0x0001078bf5a8();
    func_0x0001003a90c4(auStack_60);
    return;
  }
  return;
}



/* Entry: 1078bf330; end: 1078bf387;  */

void FUN_1078bf330(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001078bf55c();
      } while (extraout_w11 != 0);
    }
    func_0x0001078bf5a8();
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078c2064; end: 1078c206b;  */

void FUN_1078c2064(void)

{
  return;
}



/* Entry: 1078c22d4; end: 1078c234b;  */

long * FUN_1078c22d4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001078c2bec(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1078c3004; end: 1078c30a7;  */

long * FUN_1078c3004(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  while (uVar1 = (long)puVar4 - (long)puVar3 >> 3, 2 < uVar1) {
    func_0x0001078c5fe0();
    puVar4 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
  }
  if (uVar1 == 1) {
    lVar2 = 0x2a;
  }
  else {
    if (uVar1 != 2) goto LAB_1078c3070;
    lVar2 = 0x55;
  }
  param_1[4] = lVar2;
LAB_1078c3070:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar2 = param_1[2];
  while (lVar2 != param_1[1]) {
    lVar2 = lVar2 + -8;
    param_1[2] = lVar2;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078c32c0; end: 1078c3343;  */

/* WARNING: Possible PIC construction at 0x0001078c32f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c32f8) */
/* WARNING: Removing unreachable block (ram,0x0001078c3328) */
/* WARNING: Removing unreachable block (ram,0x0001078c3340) */
/* WARNING: Removing unreachable block (ram,0x0001078c3320) */
/* WARNING: Removing unreachable block (ram,0x0001078c5e60) */

undefined8 * FUN_1078c32c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x0001078c5bdc();
  func_0x0001078bf274(auStack_40,1);
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1109e85b8;
  puStack_30[1] = 0;
  func_0x00010811e1f4(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 1078c395c; end: 1078c39a3;  */

void FUN_1078c395c(long param_1)

{
  long unaff_x19;
  ulong uVar1;
  ulong *puVar2;
  
  func_0x0001078c5f54();
  if (param_1 != 0) {
    puVar2 = *(ulong **)(unaff_x19 + 8);
    for (uVar1 = 0; uVar1 < *puVar2; uVar1 = uVar1 + 1) {
      func_0x0001078c2c24();
    }
  }
  return;
}



/* Entry: 1078c4218; end: 1078c42af;  */

void FUN_1078c4218(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001078c5f54();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078c4574; end: 1078c45f3;  */

void FUN_1078c4574(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001078c45f4(param_1,param_4);
    func_0x0001078c4640(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001078c4740(&uStack_40);
  return;
}



/* Entry: 1078c47a0; end: 1078c47c7;  */

void FUN_1078c47a0(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    func_0x0001078be09c(param_1 + 1);
    func_0x0001078bdbb8();
    return;
  }
  return;
}



/* Entry: 1078c55bc; end: 1078c55c3;  */

void FUN_1078c55bc(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong unaff_x27;
  byte bVar2;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  uVar1 = *param_1;
  func_0x0001078c5e28();
  func_0x0001072cb490();
  func_0x0001078c5f64();
  func_0x0001078c6140();
  func_0x0001078c5dc8();
  do {
    func_0x0001078c5f98();
    for (; unaff_x27 != 0; unaff_x27 = unaff_x27 - 1 & unaff_x27) {
      func_0x0001078c5ea4();
      func_0x0001074083d0();
      if ((int)uVar1 != 0) {
        func_0x0001078c6114();
        return;
      }
    }
    bVar2 = NEON_umaxv(CONCAT17(-((char)((ulong)unaff_d10 >> 0x38) ==
                                 (char)((ulong)unaff_d9 >> 0x38)),
                                CONCAT16(-((char)((ulong)unaff_d10 >> 0x30) ==
                                          (char)((ulong)unaff_d9 >> 0x30)),
                                         CONCAT15(-((char)((ulong)unaff_d10 >> 0x28) ==
                                                   (char)((ulong)unaff_d9 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)unaff_d10 >> 0x20) ==
                                                            (char)((ulong)unaff_d9 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)unaff_d10 >>
                                                                            0x18) ==
                                                                     (char)((ulong)unaff_d9 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  unaff_d10 >> 0x10) ==
                                                  (char)((ulong)unaff_d9 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)unaff_d10 >> 8) ==
                                                            (char)((ulong)unaff_d9 >> 8)),
                                                           -((char)unaff_d10 == (char)unaff_d9))))))
                                        )),1);
  } while ((bVar2 & 1) == 0);
  return;
}



/* Entry: 1078c58a8; end: 1078c58c3;  */

void FUN_1078c58a8(long param_1)

{
  func_0x0001077e27bc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1078c5a98; end: 1078c5abf;  */

long FUN_1078c5a98(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078ca988; end: 1078cab4f;  */

/* WARNING: Possible PIC construction at 0x0001078caaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078cab44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078caab0) */
/* WARNING: Removing unreachable block (ram,0x0001078caae0) */
/* WARNING: Removing unreachable block (ram,0x0001078cab00) */
/* WARNING: Removing unreachable block (ram,0x0001078cab10) */
/* WARNING: Removing unreachable block (ram,0x0001078cab24) */
/* WARNING: Removing unreachable block (ram,0x0001078cab40) */
/* WARNING: Removing unreachable block (ram,0x0001078caac0) */
/* WARNING: Removing unreachable block (ram,0x0001078cab48) */

undefined8 * FUN_1078ca988(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  
  puVar1 = param_1;
  func_0x0001078d2214();
  *puVar1 = &PTR_DAT_1109e8830;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = param_2 + 800;
  func_0x0001072b86c8(uVar2,&UNK_10ded9aa4);
  uStack_68 = 1;
  puVar3 = (undefined8 *)0x278;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_1109e8a18;
  puVar3[3] = uVar2 & 0xffffffff;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar4 = puVar3;
  puStack_60 = puVar3;
  __ZNSt3__16thread20hardware_concurrencyEv();
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 10) = 0x3f800000;
  func_0x0001078cea54(puVar3 + 6,(int)puVar4 << 2);
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar3 + 0xb);
  func_0x0001078d1bac(puVar3 + 0x20);
  func_0x0001078d1bac(puVar3 + 0x29);
  puVar3[0x32] = 0x32aaaba7;
  puVar3[0x39] = 0;
  puVar3[0x34] = 0;
  puVar3[0x33] = 0;
  puVar3[0x36] = 0;
  puVar3[0x35] = 0;
  puVar3[0x38] = 0;
  puVar3[0x37] = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar3 + 0x3a);
  puVar3[0x27] = 0;
  puVar3[0x28] = puVar3 + 0x29;
  puVar3[0x30] = puVar3 + 0x20;
  puStack_60 = (undefined8 *)0x0;
  func_0x0001078d1b10(&uStack_70);
  uStack_68 = param_1[2];
  uStack_70 = param_1[1];
  param_1[1] = puVar3 + 3;
  param_1[2] = puVar3;
  puVar4 = &uStack_70;
  func_0x0001078d2be4();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return puVar1 + 1;
}



/* Entry: 1078caf2c; end: 1078cb1d3;  */

/* WARNING: Possible PIC construction at 0x0001078cb5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078cb5e0) */

double * FUN_1078caf2c(undefined8 *param_1,undefined8 param_2,float param_3,float param_4,
                      float param_5,undefined8 param_6,double *param_7,double *param_8)

{
  double dVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  double *pdVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar14;
  int extraout_w10;
  long lVar15;
  double *pdVar16;
  double *pdVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 **ppuVar21;
  undefined *puVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_320 [8];
  undefined8 uStack_318;
  long alStack_310 [2];
  double dStack_300;
  double dStack_2f8;
  undefined8 auStack_2f0 [3];
  ulong uStack_2d8;
  undefined1 uStack_2d0;
  long *plStack_2c8;
  byte bStack_2b8;
  long lStack_2b0;
  undefined1 uStack_2a8;
  double adStack_2a0 [7];
  long lStack_268;
  double dStack_260;
  double adStack_258 [3];
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  double dStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  double dStack_e0;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  dStack_198 = *param_7;
  dStack_190 = param_7[1];
  if (dStack_190 != 0.0) {
    plVar18 = (long *)((long)dStack_190 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = *plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = *(long *)((long)dStack_198 + 0x330);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  dVar24 = 0.0;
  uStack_f8 = 0;
  lStack_100 = 0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  pdVar16 = (double *)(lVar14 + 8);
  func_0x0001078cec84(&uStack_110);
  while (lStack_e8 != 0) {
    lVar14 = 0;
    if (lStack_100 != lStack_108) {
      lVar14 = (lStack_100 - lStack_108) * 0x40 + -1;
    }
    lStack_e8 = lStack_e8 + -1;
    uVar9 = lStack_f0 + lStack_e8;
    plVar18 = *(long **)(*(long *)(lStack_108 + (uVar9 >> 9) * 8) + (uVar9 & 0x1ff) * 8);
    if (0x3ff < lVar14 - uVar9) {
      __ZdlPv(*(undefined8 *)(lStack_100 + -8));
      lStack_100 = lStack_100 + -8;
    }
    lVar14 = *plVar18;
    uVar9 = lVar14 + 0x108;
    func_0x000104c2d614();
    if ((uVar9 & 1) == 0) {
      lVar20 = *plVar18;
      uVar9 = lVar20 + 0x168;
      func_0x000104c2d614();
      bVar4 = (uVar9 & 1) == 0;
      if (bVar4) {
        func_0x00010724ef84(&dStack_148,lVar20 + 0x168);
        dVar24 = dStack_148;
        uStack_128 = uStack_140;
        dStack_130 = dStack_148;
        uStack_120 = uStack_138;
        uStack_140 = 0;
        uStack_138 = 0;
        dStack_148 = 0.0;
      }
      else {
        dStack_130 = (double)((ulong)dStack_130 & 0xffffffffffffff00);
      }
      uVar10 = lVar20 + 0x1a0;
      uStack_118 = bVar4;
      func_0x000104c2d614();
      bVar4 = (uVar10 & 1) == 0;
      if (bVar4) {
        func_0x00010724ef84(&dStack_188,lVar20 + 0x1a0);
        dVar24 = dStack_188;
        uStack_168 = uStack_180;
        dStack_170 = dStack_188;
        uStack_160 = uStack_178;
        uStack_180 = 0;
        uStack_178 = 0;
        dStack_188 = 0.0;
      }
      else {
        dStack_170 = (double)((ulong)dStack_170 & 0xffffffffffffff00);
      }
      param_8 = &dStack_170;
      uStack_158 = bVar4;
      func_0x000107780018(&dStack_e0,lVar14 + 0x108,&dStack_130);
      pdVar16 = &dStack_e0;
      func_0x0001078c42cc(param_1);
      func_0x0001074730f4(auStack_d8);
      func_0x0001001148fc(&dStack_170);
      if ((uVar10 & 1) == 0) {
        func_0x0001078d2724();
      }
      func_0x0001001148fc(&dStack_130);
      if ((uVar9 & 1) == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&dStack_148);
      }
    }
    pdVar12 = (double *)plVar18[2];
    for (pdVar17 = (double *)plVar18[1]; in_ZR = pdVar17 == pdVar12, !(bool)in_ZR;
        pdVar17 = pdVar17 + 4) {
      pdVar16 = pdVar17;
      func_0x0001078cec84(&uStack_110);
    }
  }
  func_0x0001078cf164(&uStack_110);
  pdVar17 = &dStack_198;
  func_0x0001078cad34();
  func_0x0001078d208c(uStack_58);
  if ((bool)in_ZR) {
    return pdVar17;
  }
  ___stack_chk_fail();
  func_0x0001078cf164(&uStack_110);
  func_0x00010747305c(param_1);
  func_0x0001078cad34(&dStack_198);
  func_0x0001078d25c0();
  puStack_1a8 = &DAT_1078cb1d4;
  ppuVar21 = &puStack_1b0;
  uStack_318 = extraout_x8;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x0001078d2214();
  uStack_220 = extraout_x8_00;
  dVar1 = *pdVar16;
  dStack_2f8 = pdVar16[1];
  dStack_300 = dVar1;
  if (dStack_2f8 != 0.0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2f64c(adStack_2a0);
  alStack_310[0] = 0;
  alStack_310[1] = 0;
  uStack_2d8 = (long)dVar1 + 0x208;
  uStack_2d0 = 1;
  func_0x00010724e404();
  func_0x0001078caebc(alStack_310,*(undefined8 *)((long)dVar1 + 0x330),
                      *(undefined8 *)((long)dVar1 + 0x338));
  func_0x0001077805c4(adStack_258,*(undefined8 *)((long)dVar1 + 0x2b0));
  func_0x000104c2f1f0(adStack_2a0,adStack_258);
  func_0x000104c2f714(adStack_258);
  func_0x00010724e49c(&uStack_2d8);
  lVar14 = alStack_310[0];
  lStack_2b0 = alStack_310[0] + 0xa0;
  uStack_2a8 = 0;
  bVar4 = *(long *)(alStack_310[0] + 0x90) != 0;
  if (bVar4) {
    func_0x0001073ae49c();
  }
  pdVar16 = adStack_2a0;
  uStack_2a8 = bVar4;
  func_0x0001078cb68c(lVar14);
  pdVar17 = *(double **)(*(long *)(lVar14 + 0xe0) + 0x1d0);
  pdVar12 = *(double **)(*(long *)(lVar14 + 0xe0) + 0x1d8);
  do {
    uVar8 = pdVar17 == pdVar12;
    if ((bool)uVar8) {
      param_8 = *(double **)(lVar14 + 0x88);
      lVar14 = *(long *)(lVar14 + 0xe0);
      pdVar17 = *(double **)(lVar14 + 0x208);
      uVar19 = *(undefined8 *)(lVar14 + 0x210);
      func_0x0001078c4538(adStack_258,lVar14 + 0x218);
      func_0x0001074c61ec(&uStack_2d8,adStack_258);
      auStack_2f0[0] = 0;
      pdVar16 = adStack_2a0;
      func_0x0001078d3484(uStack_318,param_8,pdVar16,lVar14,pdVar17,uVar19,&uStack_2d8,auStack_2f0);
      func_0x0001073c5f18(&uStack_2d8);
      func_0x0001074736dc(adStack_258);
code_r0x0001078cb464:
      func_0x0001078cec54(&lStack_2b0);
      func_0x0001078d29b8();
      func_0x000104c2f714(adStack_2a0);
      pdVar12 = (double *)(alStack_310 + 2);
      func_0x0001078cad34();
      func_0x0001078d208c(uStack_220);
      if ((bool)uVar8) {
        return pdVar12;
      }
      ___stack_chk_fail();
      func_0x0001078d28e4();
      func_0x0001078d2a78();
      func_0x0001078d28d0();
      func_0x0001078cec54(&lStack_2b0);
      func_0x0001078d29b8();
      func_0x000104c2f714(adStack_2a0);
      func_0x0001078cad34(alStack_310 + 2);
      puVar22 = &UNK_1078cb570;
      func_0x0001078d2494();
      puVar7 = auStack_320;
      while( true ) {
        *(double **)(puVar7 + -0x30) = pdVar17;
        *(long *)(puVar7 + -0x28) = lVar14;
        *(double **)(puVar7 + -0x20) = param_8;
        *(double **)(puVar7 + -0x18) = pdVar12;
        *(undefined1 ***)(puVar7 + -0x10) = ppuVar21;
        *(undefined **)(puVar7 + -8) = puVar22;
        ppuVar21 = (undefined1 **)(puVar7 + -0x10);
        pdVar12 = pdVar16;
        func_0x0001078d2214();
        *(undefined8 *)(puVar7 + -0x38) = extraout_x8_01;
        *(undefined8 *)(puVar7 + -0x78) = 0;
        plVar18 = (long *)*pdVar12;
        (**(code **)(*plVar18 + 0x18))();
        func_0x000104c2fe00(puVar7 + -0x70,plVar18);
        puVar13 = puVar7 + -0x70;
        func_0x0001073f26dc(puVar7 + -0x78);
        pdVar12 = (double *)pdVar16[1];
        param_8 = (double *)pdVar16[2];
        lVar14 = -0x61c8864680b583eb;
        uVar8 = pdVar12 == param_8;
        if ((bool)uVar8) break;
        puVar22 = &UNK_1078cb5e0;
        puVar7 = puVar7 + -0x80;
        pdVar16 = pdVar12;
      }
      pdVar16 = *(double **)(puVar7 + -0x78);
      func_0x000104c2f714(puVar7 + -0x70);
      func_0x0001078d208c(*(undefined8 *)(puVar7 + -0x38));
      if (!(bool)uVar8) {
        ___stack_chk_fail();
        func_0x000104c2f714(puVar7 + -0x70);
        func_0x0001078d2494();
        if (*(int *)(puVar13 + 0x10) == 0) {
          *(undefined1 ***)(puVar7 + -0x90) = ppuVar21;
          *(undefined **)(puVar7 + -0x88) = &UNK_1078cb644;
          *(undefined8 *)(puVar7 + -0x98) = 0;
          func_0x0001073ca0ec(puVar7 + -0x98,puVar13);
          return *(double **)(puVar7 + -0x98);
        }
        *(undefined1 ***)(puVar7 + -0x90) = ppuVar21;
        *(undefined **)(puVar7 + -0x88) = &UNK_1078cb644;
        *(undefined8 *)(puVar7 + -0x98) = 0;
        func_0x0001077ab248(puVar7 + -0x98,puVar13);
        return *(double **)(puVar7 + -0x98);
      }
      return pdVar16;
    }
    pdVar11 = pdVar17;
    func_0x000104c2d614();
    if (((ulong)pdVar11 & 1) == 0) {
      pdVar11 = pdVar17;
      func_0x000104c2d614();
      if ((((ulong)pdVar11 & 1) == 0) &&
         (pdVar11 = param_8, pdVar16 = pdVar17, func_0x0001078c44f4(), pdVar11 != (double *)0x0)) {
        pdVar16 = pdVar16 + 7;
        func_0x0001078c451c(&uStack_2d8);
        if ((bStack_2b8 & 1) == 0) goto code_r0x0001078cb428;
        lVar15 = *(long *)(lVar14 + 0xe0);
        lVar2 = plStack_2c8[1];
        fVar5 = **(float **)(lVar14 + 0x88);
        for (lVar20 = *plStack_2c8; fVar23 = SUB84(dVar24,0), lVar20 != lVar2;
            lVar20 = lVar20 + 0x38) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (adStack_258,lVar20);
          func_0x0001081202ac(pdVar17[7]);
          dStack_240 = (double)(fVar23 / fVar5);
          dStack_238 = (double)(param_3 / fVar5);
          dVar24 = (double)(param_4 / fVar5);
          dStack_228 = (double)(param_5 / fVar5);
          pdVar16 = adStack_258;
          dStack_230 = dVar24;
          func_0x0001074c5cd0(lVar15 + 0x218);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(adStack_258);
        }
        if ((bStack_2b8 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1078cb4b8);
          (*pcVar6)();
        }
        func_0x0001078d2cb0(&lStack_268,uStack_2d8);
        uVar8 = lStack_268 == 1;
        if ((bool)uVar8) {
          if (pdVar17[7] != 0.0) {
            func_0x0001078d28c4();
            func_0x0001078d26c8();
          }
          pdVar16 = &dStack_260;
          func_0x00010811e74c();
          func_0x0001078d2a78();
          func_0x0001078d28d0();
          goto code_r0x0001078cb3b4;
        }
        func_0x0001078d2a54();
        func_0x0001078d28d8(&UNK_10f433ce3);
        func_0x0001078d2518();
        func_0x0001078d28e4();
        func_0x0001078d2a78();
      }
      else {
        uStack_2d8 = uStack_2d8 & 0xffffffffffffff00;
        bStack_2b8 = 0;
code_r0x0001078cb428:
        func_0x0001078d2a54();
        func_0x0001078d28d8(&UNK_10f433cce);
        func_0x0001078d2518();
        func_0x0001078d28e4();
      }
      func_0x0001078d28d0();
      goto code_r0x0001078cb464;
    }
code_r0x0001078cb3b4:
    pdVar17 = pdVar17 + 8;
  } while( true );
}



/* Entry: 1078ccdac; end: 1078ccfc7;  */

void FUN_1078ccdac(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *extraout_x8;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  double dStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined5 uStack_64;
  undefined3 uStack_5f;
  undefined5 uStack_5c;
  undefined1 auStack_50 [32];
  
  if (*(char *)(param_2 + 0x60) == '\x01') {
    func_0x0001078d25ec();
    plStack_78 = *(long **)(param_2 + 0x18);
    if ((plStack_78 != (long *)0x0) && (plStack_78[2] != 0)) {
      do {
        func_0x0001078d2300();
        plStack_78 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_70 = unaff_x20[4];
    iStack_68 = *(int *)(unaff_x20 + 5);
    uStack_64 = (undefined5)*(undefined8 *)((long)unaff_x20 + 0x2c);
    uStack_5f = (undefined3)*(undefined8 *)((long)unaff_x20 + 0x31);
    uStack_5c = (undefined5)((ulong)*(undefined8 *)((long)unaff_x20 + 0x31) >> 0x18);
    func_0x00010028af84(auStack_50,unaff_x20 + 8);
    uVar2 = *(undefined4 *)((long)unaff_x20 + 0x2c);
    *(undefined1 *)(unaff_x19 + 0x20c) = *(undefined1 *)(unaff_x20 + 6);
    *(undefined4 *)(unaff_x19 + 0x208) = uVar2;
    uVar2 = *(undefined4 *)((long)unaff_x20 + 0x34);
    *(undefined1 *)(unaff_x19 + 0x214) = *(undefined1 *)(unaff_x20 + 7);
    *(undefined4 *)(unaff_x19 + 0x210) = uVar2;
    fVar4 = (float)uStack_70;
    fVar7 = (float)((ulong)uStack_70 >> 0x20);
    if (iStack_68 == 0) {
      uStack_a8 = CONCAT44(fVar7 + 0.0,fVar4 + 0.0);
    }
    else {
      (**(code **)(*plStack_78 + 0x48))();
      uStack_a8 = CONCAT44(fVar7 + 0.0,fVar4 + 0.0);
    }
    uStack_b0 = 0;
    func_0x00010811fa78(plStack_78,&uStack_b0);
    plVar1 = (long *)(unaff_x19 + 0x1bc);
    func_0x00010811fbfc(plStack_78);
    lVar5 = plStack_78[0x18];
    *(long *)(unaff_x19 + 0x1c4) = plStack_78[0x19];
    *plVar1 = lVar5;
    if (*(char *)(unaff_x20 + 0xb) == '\x01') {
      puVar3 = unaff_x20 + 8;
      func_0x0001072e787c(puVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      dStack_88 = (double)((float)*(undefined8 *)(unaff_x19 + 0x1c4) - (float)*plVar1);
      dStack_80 = (double)((float)((ulong)*(undefined8 *)(unaff_x19 + 0x1c4) >> 0x20) -
                          (float)((ulong)*plVar1 >> 0x20));
      func_0x0001074c5cd0(unaff_x19 + 0x218,&uStack_b0);
      func_0x0001078d27e0();
    }
    if (*(long *)(unaff_x19 + 0x1d0) != 0) {
      func_0x0001078ce654(unaff_x19 + 0x1d0);
      __ZdlPv(*(undefined8 *)(unaff_x19 + 0x1d0));
      *(undefined8 *)(unaff_x19 + 0x1d0) = 0;
      *(undefined8 *)(unaff_x19 + 0x1d8) = 0;
      *(undefined8 *)(unaff_x19 + 0x1e0) = 0;
    }
    uVar6 = *unaff_x20;
    *(undefined8 *)(unaff_x19 + 0x1d8) = unaff_x20[1];
    *(undefined8 *)(unaff_x19 + 0x1d0) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x1e0) = unaff_x20[2];
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    func_0x0001078ce688(unaff_x19 + 0x1e8,unaff_x20 + 0x11);
    func_0x000108120484(-*(float *)(unaff_x19 + 0x1bc),plStack_78);
    func_0x0001081204c0(-*(float *)(unaff_x19 + 0x1c0),plStack_78);
    func_0x000108122b44();
    func_0x0001078c2250(plVar1);
    func_0x000108122c38();
    func_0x0001078ce2c8(&plStack_78);
  }
  return;
}



/* Entry: 1078cd544; end: 1078cd56b;  */

void FUN_1078cd544(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d2bd8();
  if (!(bool)in_ZR) {
    func_0x0001078d2480();
    func_0x0001078ce204();
  }
  return;
}



/* Entry: 1078cddcc; end: 1078cddf7;  */

void FUN_1078cddcc(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d2bd8();
  if (!(bool)in_ZR) {
    func_0x0001078d2480();
    func_0x0001078ce460();
  }
  return;
}



/* Entry: 1078ce148; end: 1078ce1af;  */

void FUN_1078ce148(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078d26f0();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078ce2f0; end: 1078ce373;  */

void FUN_1078ce2f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *param_2 = 0;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x14);
  uVar2 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  *(undefined8 *)((long)param_1 + 0x14) = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[5] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 1078ce46c; end: 1078ce48f;  */

void FUN_1078ce46c(void)

{
  func_0x0001078d26f0();
  func_0x0001078ce460();
  return;
}



/* Entry: 1078ce590; end: 1078ce593;  */

void FUN_1078ce590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e88e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078ce724; end: 1078ce737;  */

void FUN_1078ce724(void)

{
  func_0x0001078ce718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078cebfc; end: 1078cec3b;  */

long * FUN_1078cebfc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001078cea28(lVar1 + 0x10);
    }
    func_0x0001078d29c0();
  }
  return param_1;
}



/* Entry: 1078cf148; end: 1078cf163;  */

void FUN_1078cf148(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1078d1610; end: 1078d165b;  */

undefined8 * FUN_1078d1610(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((char)param_2[3] != '\x01') {
    uVar1 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar1;
    param_1[2] = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107278820(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x120);
  return param_1;
}



/* Entry: 1078d19fc; end: 1078d1a17;  */

void FUN_1078d19fc(void)

{
  func_0x0001078d2ad8();
  func_0x00010755dabc();
  return;
}



/* Entry: 1078d1c54; end: 1078d1c5f;  */

void FUN_1078d1c54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8a68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d1ebc; end: 1078d1ecf;  */

void FUN_1078d1ebc(void)

{
  func_0x0001078d1eb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d3100; end: 1078d316f;  */

/* WARNING: Possible PIC construction at 0x0001078d31fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d3200) */
/* WARNING: Removing unreachable block (ram,0x0001078d3220) */
/* WARNING: Removing unreachable block (ram,0x0001078d3228) */
/* WARNING: Removing unreachable block (ram,0x0001078d322c) */
/* WARNING: Removing unreachable block (ram,0x0001078d3234) */
/* WARNING: Removing unreachable block (ram,0x0001078d3244) */
/* WARNING: Removing unreachable block (ram,0x0001078d3248) */
/* WARNING: Removing unreachable block (ram,0x0001078d3250) */
/* WARNING: Removing unreachable block (ram,0x0001078d3258) */
/* WARNING: Removing unreachable block (ram,0x0001078d3384) */
/* WARNING: Removing unreachable block (ram,0x0001078d33a4) */
/* WARNING: Removing unreachable block (ram,0x0001078d33b4) */
/* WARNING: Removing unreachable block (ram,0x0001078d33cc) */
/* WARNING: Removing unreachable block (ram,0x0001078d33e8) */
/* WARNING: Removing unreachable block (ram,0x0001078d3360) */

undefined8 *
FUN_1078d3100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_590 [68];
  undefined8 auStack_310 [91];
  undefined8 uStack_38;
  
  puVar2 = auStack_310;
  func_0x0001078d4a0c();
  uVar1 = 0x2e8;
  uStack_38 = extraout_x8;
  __Znwm();
  func_0x0001078d4084(auStack_310,param_3);
  func_0x0001081293c0(uVar1,auStack_310);
  *param_1 = uVar1;
  func_0x0001078d3e7c();
  func_0x0001078d49d0(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  uVar1 = param_2;
  func_0x0001078d4a0c();
  *(int *)puVar3 = (int)uVar1;
  uVar1 = *param_6;
  puVar3[2] = param_6[1];
  puVar3[1] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  puVar3[3] = 0;
  func_0x00010726ed14(puVar3 + 4);
  puVar2[6] = puVar2;
  func_0x00010b99dc78();
  uVar1 = 0x50;
  __Znwm();
  func_0x0001081292f8(param_2);
  auStack_590[0] = uVar1;
  func_0x0001078d4af0(puVar3 + 3,auStack_590);
  if (!(bool)in_ZR) {
    func_0x0001078d49f8();
    func_0x000107475334();
  }
  return puVar3 + 1;
}



/* Entry: 1078d3988; end: 1078d39c3;  */

void FUN_1078d3988(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



/* Entry: 1078d3b70; end: 1078d3bd7;  */

void FUN_1078d3b70(undefined8 param_1)

{
  func_0x0001078d4ac4();
  func_0x0001078d3c24();
  _bzero();
  func_0x0001078d3950(param_1);
  func_0x0001078d4aa4();
  func_0x0001078d4abc();
  return;
}



/* Entry: 1078d3d64; end: 1078d3dc3;  */

undefined8 FUN_1078d3d64(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001078d3d8c(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 1078d3f34; end: 1078d3f73;  */

void FUN_1078d3f34(void)

{
  long unaff_x23;
  
  func_0x0001078d4afc();
  func_0x0001078d3ac4();
  func_0x0001078d4a24();
  func_0x0001078d4b6c();
  func_0x0001078d3fc8();
  if (unaff_x23 != 0) {
    func_0x0001078d4b20();
    func_0x0001078d4b14();
  }
  func_0x0001078d4a6c();
  return;
}



/* Entry: 1078d4208; end: 1078d42df;  */

void FUN_1078d4208(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  plVar3 = param_1;
  func_0x0001078d42e0();
  param_1[1] = ((long)plVar3 - (lVar1 + lVar2 * 0xb0)) / 0xb0 + param_1[1];
  return;
}



/* Entry: 1078d44b8; end: 1078d44e3;  */

void FUN_1078d44b8(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d4af0();
  if (!(bool)in_ZR) {
    func_0x0001078d49f8();
    func_0x0001078d3de8();
  }
  return;
}



/* Entry: 1078d4608; end: 1078d4633;  */

undefined8 * FUN_1078d4608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8b98;
  func_0x0001078d3434(param_1 + 1);
  return param_1;
}


