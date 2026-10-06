/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00539d00; end: 00539de3;  */

void FUN_00539d00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  func_0x00539d68(&uStack_48);
  uVar1 = uStack_48;
  if ((bStack_38 & 1) == 0) {
    param_1[3] = uStack_40;
  }
  else {
    uVar2 = uStack_40;
    FUN_00539de4(uStack_48,uStack_40,1);
    *(int *)(param_1 + 3) = (int)uVar2;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_40;
  param_1[2] = uVar1;
  return;
}



/* Entry: 00539de4; end: 00539e0f;  */

undefined1  [16] FUN_00539de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_005399f0(&uStack_20,param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 00539e10; end: 00539e2f;  */

undefined1  [16] FUN_00539e10(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 8);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 00539e30; end: 00539eff;  */

void FUN_00539e30(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long extraout_x9;
  ulong uVar6;
  ulong uVar7;
  
  iVar4 = (int)param_2;
  bVar2 = *(byte *)(param_1 + 10);
  uVar6 = (ulong)(param_3 + iVar4);
  lVar5 = (ulong)bVar2 * 0x20 + (ulong)(param_3 + iVar4 & 0xff) * -0x20;
  lVar3 = param_1;
  while (lVar5 != 0) {
    func_0x0053aaac();
    iVar4 = (int)param_2;
    lVar5 = extraout_x9;
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    for (uVar7 = 0; param_3 != uVar7; uVar7 = uVar7 + 1) {
      func_0x0053ab1c();
      lVar3 = *(long *)(lVar3 + ((ulong)(uint)(iVar4 + 1 + (int)uVar7) & 0xff) * 8);
      FUN_00537e60();
    }
    while( true ) {
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      if ((uint)bVar2 < (uVar1 & 0xff)) break;
      func_0x0053ab1c();
      func_0x00539998(param_1,uVar1 - param_3 & 0xff,*(undefined8 *)(lVar3 + (uVar6 & 0xff) * 8));
      lVar3 = param_1;
      func_0x0053995c();
    }
  }
  *(byte *)(param_1 + 10) = bVar2 - (char)param_3;
  return;
}



/* Entry: 00539f00; end: 0053a11f;  */

void FUN_00539f00(undefined **param_1,undefined **param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined **ppuVar5;
  uint uVar6;
  int extraout_w8;
  undefined4 extraout_w8_00;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **unaff_x24;
  undefined **ppuVar9;
  uint uVar10;
  bool bVar11;
  undefined8 unaff_x30;
  undefined **ppuStack_70;
  
  bVar11 = true;
  ppuVar5 = param_1;
  ppuVar7 = param_2;
  ppuStack_70 = param_2;
  uVar10 = param_3;
  uVar6 = param_3;
  while (ppuVar8 = (undefined **)*param_1, ppuVar7 != ppuVar8) {
    if (2 < *(byte *)((long)ppuVar7 + 10)) goto LAB_0053a0dc;
    ppuVar8 = (undefined **)*ppuVar7;
    bVar3 = 0;
    if (*(char *)(ppuVar7 + 1) == '\0') {
LAB_00539f8c:
      ppuVar9 = ppuVar7;
      if ((uint)bVar3 < (uint)*(byte *)((long)ppuVar8 + 10)) {
        unaff_x24 = (undefined **)(ulong)(bVar3 + 1);
        func_0x0053803c();
        if (7 < (uint)*(byte *)((long)ppuVar7 + 10) + (uint)(byte)ppuVar8[(long)unaff_x24][10] + 1)
        {
          bVar4 = 3 < (byte)ppuVar8[(long)unaff_x24][10];
          ppuVar5 = ppuVar8;
          if ((!bVar4) ||
             ((*(byte *)((long)ppuVar7 + 10) != 0 && (bVar4 = uVar10 != 0, (int)uVar10 < 1))))
          goto LAB_0053a008;
          func_0x0053a92c();
          uVar2 = extraout_w8_00;
          if (bVar4) {
            uVar2 = extraout_w10_00;
          }
          ppuVar5 = ppuVar7;
          func_0x00539498(ppuVar7,uVar2);
          goto LAB_0053a068;
        }
        ppuVar5 = param_1;
        FUN_0053a120(param_1,ppuVar7);
        bVar4 = true;
      }
      else {
LAB_0053a008:
        bVar4 = false;
        if (*(char *)(ppuVar7 + 1) != '\0') {
          func_0x0053ab60();
          ppuVar5 = (undefined **)ppuVar5[(ulong)unaff_x24 & 0xff];
          if (3 < *(byte *)((long)ppuVar5 + 10)) {
            bVar3 = *(byte *)((long)ppuVar7 + 10);
            bVar4 = true;
            if ((bVar3 == 0) || (bVar4 = bVar3 <= uVar10, (int)uVar10 < (int)(uint)bVar3)) {
              func_0x0053a92c();
              iVar1 = extraout_w8;
              if (bVar4) {
                iVar1 = extraout_w10;
              }
              func_0x005395f8();
              bVar4 = false;
              uVar10 = uVar10 + iVar1;
              goto LAB_0053a06c;
            }
          }
LAB_0053a068:
          bVar4 = false;
        }
      }
    }
    else {
      func_0x0053ab60();
      ppuVar9 = (undefined **)ppuVar5[(ulong)unaff_x24 & 0xff];
      iVar1 = *(byte *)((long)ppuVar9 + 10) + 1;
      unaff_x24 = ppuVar9;
      if (7 < iVar1 + (uint)*(byte *)((long)ppuVar7 + 10)) {
        bVar3 = *(byte *)(ppuVar7 + 1);
        goto LAB_00539f8c;
      }
      uVar10 = iVar1 + uVar10;
      ppuVar5 = param_1;
      FUN_0053a120(param_1,ppuVar9,ppuVar7);
      bVar4 = true;
    }
LAB_0053a06c:
    if (bVar11) {
      param_2 = ppuVar9;
      ppuStack_70 = ppuVar9;
      param_3 = uVar10;
      uVar6 = uVar10;
    }
    if (!bVar4) goto LAB_0053a0dc;
    bVar11 = false;
    uVar10 = (uint)*(byte *)(ppuVar9 + 1);
    ppuVar7 = (undefined **)*ppuVar9;
  }
  if (*(char *)((long)ppuVar8 + 10) == '\0') {
    if (*(char *)((long)ppuVar8 + 0xb) == '\0') {
      ppuVar5 = ppuVar8;
      func_0x00537fb4();
      *ppuVar5 = *(undefined **)*ppuVar5;
    }
    else {
      ppuVar5 = &PTR_LOOP_00a01140;
      param_1[1] = (undefined *)&PTR_LOOP_00a01140;
    }
    *param_1 = (undefined *)ppuVar5;
    FUN_00537e60(ppuVar8);
  }
  if (param_1[2] == (undefined *)0x0) {
    param_2 = (undefined **)param_1[1];
    uVar6 = (uint)*(byte *)((long)param_2 + 10);
  }
  else {
LAB_0053a0dc:
    if (param_3 == *(byte *)((long)param_2 + 10)) {
      uVar6 = param_3 - 1;
      func_0x0053a9bc();
      param_2 = ppuStack_70;
    }
  }
  func_0x0053a650(param_2,uVar6,unaff_x30);
  return;
}



/* Entry: 0053a120; end: 0053a213;  */

void FUN_0053a120(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = param_3;
  func_0x0053a61c();
  uVar7 = (ulong)*(byte *)((long)param_2 + 10);
  lVar1 = *param_2 + (ulong)*(byte *)(param_2 + 1) * 0x20;
  lVar13 = *(long *)(lVar1 + 0x10);
  lVar12 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(lVar1 + 0x20);
  param_2[uVar7 * 4 + 3] = *(long *)(lVar1 + 0x18);
  param_2[uVar7 * 4 + 2] = lVar13;
  param_2[uVar7 * 4 + 5] = lVar12;
  param_2[uVar7 * 4 + 4] = lVar9;
  uVar8 = (ulong)*(byte *)(lVar5 + 10) << 5;
  lVar1 = uVar7 * 0x20 + 0x30;
  lVar9 = 0x10;
  uVar7 = (ulong)*(byte *)(lVar5 + 10);
  while (uVar7 != 0) {
    puVar2 = (undefined8 *)(param_3 + lVar9);
    puVar3 = (undefined8 *)((long)unaff_x19 + lVar1);
    uVar11 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar11;
    puVar3[3] = uVar15;
    puVar3[2] = uVar14;
    lVar9 = lVar9 + 0x20;
    lVar1 = lVar1 + 0x20;
    uVar8 = uVar8 - 0x20;
    uVar7 = uVar8;
  }
  cVar4 = *(char *)((long)unaff_x19 + 10);
  if (*(char *)((long)unaff_x19 + 0xb) == '\0') {
    for (bVar10 = 0; bVar6 = *(byte *)(param_3 + 10), bVar10 <= bVar6; bVar10 = bVar10 + 1) {
      func_0x0053a684();
      func_0x0053a80c();
      func_0x0053a83c();
    }
    cVar4 = *(char *)((long)unaff_x19 + 10);
  }
  else {
    bVar6 = *(byte *)(param_3 + 10);
  }
  *(byte *)((long)unaff_x19 + 10) = bVar6 + cVar4 + '\x01';
  *(undefined1 *)(param_3 + 10) = 0;
  FUN_00539e30(*unaff_x19,*(undefined1 *)(unaff_x19 + 1),1);
  if (*(long *)(unaff_x20 + 8) == param_3) {
    *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  }
  return;
}



/* Entry: 0053a214; end: 0053ad6f;  */

void FUN_0053a214(void)

{
  return;
}



/* Entry: 0053ad70; end: 0053adb3;  */

undefined4 * FUN_0053ad70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_0053adb4();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 0053adb4; end: 0053ae4b;  */

long FUN_0053adb4(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  plVar1 = param_1;
  FUN_0053ae4c(param_1,(param_1[1] - *param_1 >> 2) + 1);
  FUN_0053af20(auStack_48,plVar1,param_1[1] - *param_1 >> 2,param_1 + 2);
  *puStack_38 = *param_2;
  puStack_38 = puStack_38 + 1;
  FUN_0053ae8c(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_0053afa8(auStack_48);
  return lVar2;
}



/* Entry: 0053ae4c; end: 0053ae8b;  */

undefined8 * FUN_0053ae4c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 1);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x3fffffffffffffff;
    }
    return puVar2;
  }
  FUN_0053af0c();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
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
  return puVar2;
}



/* Entry: 0053ae8c; end: 0053af0b;  */

void FUN_0053ae8c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 0053af0c; end: 0053af1f;  */

long * FUN_0053af0c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = "vector";
  FUN_0040d774();
  *(long *)((long)pcVar2 + 0x18) = 0;
  *(long *)((long)pcVar2 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0053af68();
  }
  lVar1 = param_4 + param_3 * 4;
  *(long *)pcVar2 = param_4;
  *(long *)((long)pcVar2 + 8) = lVar1;
  *(long *)((long)pcVar2 + 0x10) = lVar1;
  *(long *)((long)pcVar2 + 0x18) = param_4 + param_2 * 4;
  return (long *)pcVar2;
}



/* Entry: 0053af20; end: 0053af8b;  */

long * FUN_0053af20(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0053af68();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 0053af8c; end: 0053afa7;  */

long * FUN_0053af8c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_2 << 2);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_0053afd4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0053afa8; end: 0053afd3;  */

long * FUN_0053afa8(long *param_1)

{
  FUN_0053afd4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0053afd4; end: 0053aff7;  */

void FUN_0053afd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 0053aff8; end: 0053b013;  */

void FUN_0053aff8(long *param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 2);
    return;
  }
  FUN_0040cee8();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 0053b014; end: 0053b07b;  */

void FUN_0053b014(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 0053b07c; end: 0053b09b;  */

void FUN_0053b07c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0053b09c; end: 0053b15b;  */

undefined **
FUN_0053b09c(long param_1,undefined **param_2,long param_3,uint param_4,ushort *param_5,uint param_6
            )

{
  undefined **ppuVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_FUN_00a01150;
  }
  else {
    uVar5 = (ulong)*param_5;
    if (uVar5 != 0) {
      *(uint *)(param_1 + uVar5) = *(uint *)(param_1 + uVar5) | param_6;
    }
    if ((param_4 != 0) && ((param_4 & 7) != 4)) {
      if ((ulong)param_5[1] == 0) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          FUN_00538108();
        }
        ppuVar3 = (undefined **)(ulong)param_4;
        FUN_0054baec(ppuVar3,&stack0xffffffffffffffe8,param_2,param_3);
        return ppuVar3;
      }
      ppuVar4 = (undefined **)(ulong)param_4;
      uStack_48 = *(undefined8 *)(param_5 + 0x10);
      ppuVar3 = (undefined **)(param_1 + (ulong)param_5[1]);
      puVar2 = (ulong *)(param_1 + 8);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      ppuVar1 = ppuVar3;
      FUN_00535adc(ppuVar3,param_4 & 7,param_4 >> 3,&uStack_48,&uStack_80,&uStack_49);
      if (((ulong)ppuVar1 & 1) == 0) {
        if ((*puVar2 & 1) == 0) {
          FUN_00538108(puVar2);
        }
        else {
          puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
        }
        FUN_0054bac4(ppuVar4,puVar2,param_2,param_3);
      }
      else {
        FUN_00535b58(ppuVar3,param_4 >> 3,uStack_49,&uStack_80,puVar2,param_2,param_3);
        ppuVar4 = ppuVar3;
      }
      return ppuVar4;
    }
    *(uint *)(param_3 + 0x50) = param_4 - 1;
  }
  return param_2;
}



/* Entry: 0053b15c; end: 0053b2d3;  */

long FUN_0053b15c(long param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar3 = param_2 - 1;
  if (uVar3 < 0x20) {
    uVar5 = 1 << (ulong)(uVar3 & 0x1f);
    if ((*(uint *)(param_1 + 0xc) & uVar5) == 0) {
      uVar5 = *(uint *)(param_1 + 0xc) & uVar5 - 1;
      uVar3 = uVar3 - (byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                             POPCOUNT((char)(uVar5 >> 0x10)) + POPCOUNT((char)(uVar5 >> 0x18)));
LAB_0053b19c:
      return (ulong)*(uint *)(param_1 + 0x10) + param_1 + (ulong)uVar3 * 0xc;
    }
  }
  else {
    for (puVar4 = (uint *)((ulong)*(ushort *)(param_1 + 10) + param_1); uVar3 = param_2 - *puVar4,
        *puVar4 <= param_2; puVar4 = (uint *)((long)puVar4 + (ulong)(uint)(ushort)puVar4[1] * 4 + 6)
        ) {
      uVar5 = uVar3 >> 4;
      if (uVar5 < (ushort)puVar4[1]) {
        puVar1 = (ushort *)((long)puVar4 + (ulong)(uVar5 << 1) * 2 + 6);
        uVar3 = uVar3 & 0xf;
        uVar2 = 1 << (ulong)uVar3;
        uVar5 = (uint)*puVar1;
        if ((uVar2 & uVar5) != 0) {
          return 0;
        }
        uVar5 = uVar2 - 1 & uVar5;
        uVar3 = (uVar3 - (byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)))) +
                (uint)puVar1[1];
        goto LAB_0053b19c;
      }
    }
  }
  return 0;
}



/* Entry: 0053b2d4; end: 0053b3ef;  */

long FUN_0053b2d4(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 short *param_5)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  func_0x00546494();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x0054638c(param_1);
      if (*param_5 != 0) {
        func_0x0054717c();
      }
      return 0;
    }
    func_0x005470d8();
  }
  lVar1 = unaff_x20;
  FUN_0053b15c();
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(lVar1 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return lVar1;
}



/* Entry: 0053b3f0; end: 0053b45f;  */

void FUN_0053b3f0(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0053b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x30))();
  return;
}



/* Entry: 0053b460; end: 0053b53f;  */

ulong FUN_0053b460(ulong param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x00547404();
  if ((bool)in_ZR) {
    if (*param_5 != 0) {
      func_0x00545ecc();
      func_0x00546a40();
    }
    uVar4 = *(ulong *)(unaff_x21 + (param_4 >> 0x30));
    if (uVar4 == 0) {
      func_0x00546254();
      func_0x005473b8();
      if ((uVar4 & 1) != 0) {
        func_0x00546808();
      }
      func_0x00545f40();
      *(ulong *)(unaff_x21 + (param_4 >> 0x30)) = param_1;
      uVar4 = param_1;
    }
    lVar3 = unaff_x19;
    func_0x0054b68c();
    uVar2 = 0;
    if (lVar3 != 0) {
      FUN_00549a60(uVar4,lVar3);
      *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + 1;
      FUN_005439fc();
      uVar2 = uVar4;
      if ((int)unaff_x19 == 0) {
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  func_0x005469c4();
  func_0x00546494();
  uVar4 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar4 = (uVar4 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            if (*param_5 != 0) {
              func_0x0054717c();
            }
            return 0;
          }
          func_0x005470d8();
          uVar4 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar4 = (uVar4 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar4 = uVar4 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar4 = uVar4 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  uVar2 = unaff_x20;
  FUN_0053b15c(unaff_x20,uVar4 >> 3 & 0x1fffffff);
  if (uVar2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(uVar2 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}



/* Entry: 0053b540; end: 0053b8f3;  */

byte * FUN_0053b540(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5
                   )

{
  byte bVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  byte *pbVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  func_0x00547404();
  if ((bool)in_ZR) {
    bVar1 = *unaff_x20;
    if (*param_5 != 0) {
      func_0x00545ecc();
      func_0x00546a40();
    }
    pbVar2 = *(byte **)(unaff_x21 + (param_4 >> 0x30));
    if (pbVar2 == (byte *)0x0) {
      func_0x00546254();
      func_0x005473b8();
      if (((ulong)param_2 & 1) != 0) {
        func_0x00546808();
      }
      func_0x00545f40();
      *(byte **)(unaff_x21 + (param_4 >> 0x30)) = pbVar2;
    }
    func_0x005467c0();
    *(undefined4 *)(unaff_x19 + 0x58) = extraout_w8;
    if (in_NG == in_OV) {
      func_0x005460c4();
      FUN_00549a60();
      func_0x005460d4(CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x58) >> 0x20) + -1,
                               (int)*(undefined8 *)(unaff_x19 + 0x58) + 1));
      if (extraout_w8_00 != bVar1) {
        pbVar2 = (byte *)0x0;
      }
    }
    else {
      pbVar2 = (byte *)0x0;
    }
    return pbVar2;
  }
  func_0x005469c4();
  func_0x00546494();
  uVar3 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar3 = (uVar3 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            if (*param_5 != 0) {
              func_0x0054717c();
            }
            return (byte *)0x0;
          }
          func_0x005470d8();
          uVar3 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar3 = (uVar3 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar3 = uVar3 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar3 = uVar3 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar2 = unaff_x20;
  FUN_0053b15c(unaff_x20,uVar3 >> 3 & 0x1fffffff);
  if (pbVar2 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pbVar2 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar2;
}



/* Entry: 0053b8f4; end: 0053bc5f;  */

undefined2 *
FUN_0053b8f4(undefined2 *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined2 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint extraout_w9;
  long extraout_x9;
  long unaff_x19;
  byte *unaff_x21;
  ulong uVar5;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_00000040;
  
  func_0x00546b54();
  func_0x00546eb0();
  cVar2 = '\0';
  cVar3 = '\0';
  if ((param_4 & 0xff) != 0) {
    func_0x00546f14();
    func_0x00546494();
    uVar5 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        uVar5 = (uVar5 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = param_2[2];
        if ((char)bVar1 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x0054638c(param_1);
              if (*param_5 != 0) {
                func_0x0054717c();
              }
              return (undefined2 *)0x0;
            }
            func_0x005470d8();
            uVar5 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar5 = (uVar5 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar5 = uVar5 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar5 = uVar5 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar4 = in_stack_00000040;
    FUN_0053b15c(in_stack_00000040,uVar5 >> 3 & 0x1fffffff);
    if (puVar4 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000040 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)(ushort)puVar4[5] & 0xf];
    }
    func_0x00547158();
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar4;
  }
  bVar1 = *unaff_x21;
  puVar4 = param_1;
  if (*param_5 != 0) {
    func_0x00545ecc();
    *(uint *)((long)param_1 + extraout_x8_00) =
         *(uint *)((long)param_1 + extraout_x8_00) | extraout_w9;
  }
  func_0x00546254();
  if (*(long *)((long)param_1 + (param_4 >> 0x30)) == 0) {
    puVar4 = *(undefined2 **)(*(long *)(extraout_x8_01 + extraout_x9 * 8) + 0x20);
    if ((*(ulong *)(param_1 + 4) & 1) != 0) {
      func_0x00546808();
    }
    func_0x00545f40();
    *(undefined2 **)((long)param_1 + (param_4 >> 0x30)) = puVar4;
  }
  func_0x005467c0();
  *(undefined4 *)(unaff_x19 + 0x58) = extraout_w8;
  if (cVar2 == cVar3) {
    func_0x005471a4(unaff_x21 + 1);
    do {
      func_0x00546464();
      if ((((ulong)puVar4 & 1) != 0) ||
         (func_0x00545af4(*in_stack_00000008), in_stack_00000008 = puVar4,
         puVar4 == (undefined2 *)0x0)) break;
    } while (*(int *)(unaff_x19 + 0x50) == 0);
    if ((unaff_x21[-0x2f] & 1) != 0) {
      func_0x005462c0(*(undefined8 *)(unaff_x21 + -0x10));
      in_stack_00000008 = puVar4;
    }
    func_0x005460d4(CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x58) >> 0x20) + -1,
                             (int)*(undefined8 *)(unaff_x19 + 0x58) + 1));
    if (extraout_w8_00 != bVar1) {
      in_stack_00000008 = (undefined2 *)0x0;
    }
  }
  else {
    in_stack_00000008 = (undefined2 *)0x0;
  }
  return in_stack_00000008;
}



/* Entry: 0053bc60; end: 0053bd63;  */

byte * FUN_0053bc60(byte *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5,
                   undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  byte *unaff_x20;
  byte *unaff_x22;
  long unaff_x23;
  uint uVar5;
  
  func_0x00545a1c();
  if ((param_4 & 0xff) == 0) {
    bVar2 = *unaff_x22;
    func_0x005462e4();
    while( true ) {
      func_0x00546704();
      iVar1 = *(int *)(unaff_x23 + 0x58);
      *(int *)(unaff_x23 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) break;
      *(int *)(unaff_x23 + 0x5c) = *(int *)(unaff_x23 + 0x5c) + 1;
      FUN_00549a60();
      func_0x00547140();
      uVar5 = (uint)bVar2;
      bVar3 = extraout_w8 == uVar5;
      if (extraout_w8 != uVar5 || param_1 == (byte *)0x0) break;
      func_0x00546af4();
      if (bVar3) {
        if (*(short *)unaff_x20 != 0) {
          func_0x00545d80();
        }
        func_0x005476a4();
        return unaff_x22;
      }
      if (*unaff_x22 != uVar5) {
        func_0x00545754(*(undefined2 *)unaff_x22);
        func_0x00545a8c();
        func_0x005476a4();
                    /* WARNING: Could not recover jumptable at 0x0053bd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
    func_0x00545da0();
    func_0x005476a4();
LAB_0053b2b8:
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (byte *)0x0;
  }
  func_0x005458c8();
  func_0x005476a4();
  func_0x00546494();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x0054638c(param_1);
      goto LAB_0053b2b8;
    }
    func_0x005470d8();
  }
  pbVar4 = unaff_x20;
  FUN_0053b15c();
  if (pbVar4 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pbVar4 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar4;
}



/* Entry: 0053bd64; end: 0053be87;  */

ushort * FUN_0053bd64(ushort *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5,
                     undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  ushort *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  ushort *unaff_x20;
  ushort *unaff_x22;
  long unaff_x23;
  
  func_0x00545a1c();
  if ((param_4 & 0xffff) == 0) {
    func_0x005462e4();
    uVar2 = *unaff_x22;
    while( true ) {
      func_0x00546704();
      iVar1 = *(int *)(unaff_x23 + 0x58);
      *(int *)(unaff_x23 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) break;
      *(int *)(unaff_x23 + 0x5c) = *(int *)(unaff_x23 + 0x5c) + 1;
      FUN_00549a60();
      func_0x00547140();
      bVar4 = extraout_w8 != (uint)uVar2 + (int)(char)uVar2 >> 1;
      bVar3 = !bVar4;
      if (bVar4 || param_1 == (ushort *)0x0) break;
      func_0x00546af4();
      if (bVar3) {
        if (*unaff_x20 != 0) {
          func_0x00545d80();
        }
        func_0x005467f0();
        return unaff_x22;
      }
      if (*unaff_x22 != uVar2) {
        func_0x00545790();
        func_0x005467f0();
                    /* WARNING: Could not recover jumptable at 0x0053be24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
    func_0x00545da0();
    func_0x005467f0();
LAB_0053b2b8:
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (ushort *)0x0;
  }
  func_0x005458c8();
  func_0x005467f0();
  func_0x00546494();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x0054638c(param_1);
      goto LAB_0053b2b8;
    }
    func_0x005470d8();
  }
  puVar5 = unaff_x20;
  FUN_0053b15c();
  if (puVar5 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)puVar5[5] & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar5;
}



/* Entry: 0053be88; end: 0053c0f3;  */

char * FUN_0053be88(char *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  char *pcVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x20;
  long unaff_x22;
  ulong uVar6;
  char *unaff_x25;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcStack0000000000000018;
  char *in_stack_00000060;
  
  func_0x00546c78();
  func_0x00545ee0();
  if ((param_4 & 0xff) == 0) {
    cVar2 = *unaff_x25;
    func_0x005462e4();
    func_0x00547078();
    while( true ) {
      func_0x005466e0();
      pcVar5 = param_1;
      func_0x0054648c();
      if ((unaff_x25 + 1 == (char *)0x0) || (uVar4 = 1, *(int *)(unaff_x22 + 0x58) < 1)) break;
      func_0x00545ef4();
      func_0x00546c0c();
      pcStack0000000000000018 = unaff_x25 + 1;
      while (func_0x00546f0c(), ((ulong)pcVar5 & 1) == 0) {
        func_0x00545f8c(*(undefined2 *)pcStack0000000000000018);
        pcVar5 = param_1;
        func_0x005465b0();
        pcStack0000000000000018 = pcVar5;
        if ((pcVar5 == (char *)0x0) || (*(int *)(unaff_x22 + 0x50) != 0)) break;
      }
      param_1 = pcVar5;
      pbVar1 = (byte *)(unaff_x25 + -0x2e);
      unaff_x25 = pcStack0000000000000018;
      if ((*pbVar1 & 1) != 0) {
        func_0x00546d50();
        unaff_x25 = param_1;
      }
      func_0x0054691c();
      if ((((ulong)param_1 & 1) == 0) || (unaff_x25 == (char *)0x0)) break;
      func_0x00546e00();
      if ((bool)uVar4) {
        if (*unaff_x20 != 0) {
          func_0x005474b4();
        }
        return unaff_x25;
      }
      if (*unaff_x25 != cVar2) {
        func_0x00545754(*(undefined2 *)unaff_x25);
        func_0x00545f9c();
                    /* WARNING: Could not recover jumptable at 0x00545b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
LAB_0053b2b8:
    if (*unaff_x20 != 0) {
      func_0x0054717c();
    }
    return (char *)0x0;
  }
  func_0x00545be4();
  func_0x00546494();
  uVar6 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar3 = param_2[1];
    if ((char)bVar3 < '\0') {
      uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar3 << 0x39;
      bVar3 = param_2[2];
      if ((char)bVar3 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            unaff_x20 = param_5;
            goto LAB_0053b2b8;
          }
          func_0x005470d8();
          uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar6 = (uVar6 >> 7 | (long)(char)bVar3 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar6 = uVar6 >> 0x32 | (ulong)bVar3 << 0xe;
      }
    }
    else {
      uVar6 = uVar6 & 0x7f | (ulong)bVar3 << 7;
    }
  }
  pcVar5 = in_stack_00000060;
  FUN_0053b15c(in_stack_00000060,uVar6 >> 3 & 0x1fffffff);
  if (pcVar5 == (char *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000060 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pcVar5 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pcVar5;
}



/* Entry: 0053c0f4; end: 0053c3eb;  */

byte * FUN_0053c0f4(byte *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5,
                   undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  long extraout_x8;
  short *psVar5;
  long extraout_x9;
  byte *unaff_x20;
  long unaff_x22;
  byte *unaff_x25;
  undefined8 unaff_x30;
  byte *pbStack_78;
  
  func_0x00545ee0();
  if ((param_4 & 0xff) == 0) {
    func_0x005462e4();
    psVar5 = *(short **)(extraout_x8 + extraout_x9 * 8);
    bVar2 = *unaff_x25;
    while( true ) {
      func_0x005466e0();
      iVar1 = *(int *)(unaff_x22 + 0x58);
      *(int *)(unaff_x22 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) break;
      pbVar4 = param_1;
      func_0x00547624(unaff_x25 + 1);
      while (func_0x00546f0c(), ((ulong)pbVar4 & 1) == 0) {
        param_5 = psVar5;
        func_0x00545f8c(*(undefined2 *)pbStack_78);
        pbVar4 = param_1;
        func_0x005465b0();
        pbStack_78 = pbVar4;
        if ((pbVar4 == (byte *)0x0) || (*(int *)(unaff_x22 + 0x50) != 0)) break;
      }
      param_1 = pbVar4;
      unaff_x25 = pbStack_78;
      if ((*(byte *)((long)psVar5 + 9) & 1) != 0) {
        func_0x00546d28();
        unaff_x25 = param_1;
      }
      func_0x0054721c();
      bVar3 = bVar2 <= extraout_w8;
      if ((extraout_w8 != bVar2) || (unaff_x25 == (byte *)0x0)) break;
      func_0x00546e00();
      if (bVar3) {
        if (*(short *)unaff_x20 != 0) {
          func_0x00545d80();
        }
        func_0x00546650(unaff_x25,unaff_x30);
        return unaff_x25;
      }
      if (*unaff_x25 != bVar2) {
        func_0x00545754(*(undefined2 *)unaff_x25);
        func_0x00545d70();
        func_0x00546650();
                    /* WARNING: Could not recover jumptable at 0x0053c228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
    func_0x00545da0();
    func_0x00546650();
LAB_0053b2b8:
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (byte *)0x0;
  }
  func_0x00545b9c();
  func_0x00546650();
  func_0x00546494();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x0054638c(param_1);
      goto LAB_0053b2b8;
    }
    func_0x005470d8();
  }
  pbVar4 = unaff_x20;
  FUN_0053b15c();
  if (pbVar4 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pbVar4 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar4;
}



/* Entry: 0053c3ec; end: 0053c53b;  */

ushort * FUN_0053c3ec(ushort *param_1,char *param_2,undefined8 *param_3,ulong param_4,short *param_5
                     )

{
  ushort *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort *unaff_x20;
  
  if ((param_4 & 0xff) != 0) {
    func_0x00546494();
    if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0'))
    {
      if (param_2[4] < '\0') {
        func_0x0054638c(param_1);
        if (*param_5 != 0) {
          func_0x0054717c();
        }
        return (ushort *)0x0;
      }
      func_0x005470d8();
    }
    puVar1 = unaff_x20;
    FUN_0053b15c();
    if (puVar1 == (ushort *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)puVar1[5] & 0xf];
    }
    func_0x00547158();
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar1;
  }
  *(undefined4 *)((long)param_1 + (param_4 >> 0x30)) = *(undefined4 *)(param_2 + 1);
  puVar1 = (ushort *)(param_2 + 5);
  if ((ushort *)*param_3 <= puVar1) {
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00545734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
  return param_1;
}



/* Entry: 0053c53c; end: 0053c753;  */

char * FUN_0053c53c(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5
                   )

{
  char cVar1;
  byte bVar2;
  undefined1 in_ZR;
  char *pcVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  char *unaff_x20;
  short *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  char *in_stack_00000030;
  
  func_0x0054725c();
  func_0x00546878();
  func_0x00547530();
  if (!(bool)in_ZR) {
    func_0x00546290();
    func_0x00546494();
    uVar5 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar2 = param_2[1];
      if ((char)bVar2 < '\0') {
        uVar5 = (uVar5 & 0x7f) << 0x32 | (ulong)bVar2 << 0x39;
        bVar2 = param_2[2];
        if ((char)bVar2 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x0054638c(param_1);
              if (*param_5 != 0) {
                func_0x0054717c();
              }
              return (char *)0x0;
            }
            func_0x005470d8();
            uVar5 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar5 = (uVar5 >> 7 | (long)(char)bVar2 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar5 = uVar5 >> 0x32 | (ulong)bVar2 << 0xe;
        }
      }
      else {
        uVar5 = uVar5 & 0x7f | (ulong)bVar2 << 7;
      }
    }
    pcVar3 = in_stack_00000030;
    FUN_0053b15c(in_stack_00000030,uVar5 >> 3 & 0x1fffffff);
    if (pcVar3 == (char *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x30);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pcVar3 + 10) & 0xf];
    }
    func_0x00547158();
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return pcVar3;
  }
  pcVar3 = (char *)(unaff_x22 + (param_4 >> 0x30));
  cVar1 = *unaff_x20;
  do {
    pcVar4 = pcVar3;
    FUN_00533eec(pcVar3,*(undefined4 *)(unaff_x20 + 1));
    unaff_x20 = unaff_x20 + 5;
    if ((char *)*unaff_x23 <= unaff_x20) {
      if (*unaff_x21 != 0) {
        func_0x00546518();
      }
      return unaff_x20;
    }
  } while (*unaff_x20 == cVar1);
  func_0x00545a70(*(undefined2 *)unaff_x20);
  func_0x00546290();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return pcVar4;
}



/* Entry: 0053c754; end: 0053c893;  */

long FUN_0053c754(long param_1,byte *param_2,undefined8 param_3,char param_4,short *param_5)

{
  byte bVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar3;
  
  if (param_4 == '\0') {
    func_0x0054764c(param_2 + 1);
    if (extraout_x8_00 != 0) {
      func_0x0054717c();
    }
    func_0x00546648();
    func_0x00546594();
    FUN_00543490();
    return param_1;
  }
  func_0x00546494(param_1,param_2,param_3);
  uVar3 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar3 = (uVar3 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            if (*param_5 != 0) {
              func_0x0054717c();
            }
            return 0;
          }
          func_0x005470d8();
          uVar3 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar3 = (uVar3 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar3 = uVar3 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar3 = uVar3 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  lVar2 = unaff_x20;
  FUN_0053b15c(unaff_x20,uVar3 >> 3 & 0x1fffffff);
  if (lVar2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(lVar2 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return lVar2;
}



/* Entry: 0053c894; end: 0053ce07;  */

ushort * FUN_0053c894(ushort *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  bool bVar1;
  ushort *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ushort *unaff_x20;
  
  bVar1 = false;
  if ((param_4 & 0xfeff) != 0) {
    func_0x00546494();
    if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0'))
    {
      if (param_2[4] < '\0') {
        func_0x0054638c(param_1);
        if (*param_5 != 0) {
          func_0x0054717c();
        }
        return (ushort *)0x0;
      }
      func_0x005470d8();
    }
    puVar2 = unaff_x20;
    FUN_0053b15c();
    if (puVar2 == (ushort *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)puVar2[5] & 0xf];
    }
    func_0x00547158();
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar2;
  }
  *(char *)((long)param_1 + (param_4 >> 0x30)) = (char)(param_4 >> 8);
  puVar2 = (ushort *)(param_2 + 2);
  func_0x00546e0c();
  if (bVar1) {
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00545734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + ((ulong)*puVar2 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
  return param_1;
}



/* Entry: 0053ce08; end: 0053d583;  */

char * FUN_0053ce08(char *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  ulong extraout_x8;
  uint uVar6;
  uint uVar7;
  short *unaff_x20;
  ulong uVar8;
  char *unaff_x24;
  code *UNRECOVERED_JUMPTABLE_00;
  char *in_stack_00000030;
  
  func_0x0054725c();
  func_0x00546034();
  func_0x00546e98();
  if ((param_4 & 0xff) != 0) {
    func_0x00545adc();
    func_0x00546494();
    uVar8 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar3 = param_2[1];
      if ((char)bVar3 < '\0') {
        uVar8 = (uVar8 & 0x7f) << 0x32 | (ulong)bVar3 << 0x39;
        bVar3 = param_2[2];
        if ((char)bVar3 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x0054638c(param_1);
LAB_0053b2b8:
              if (*param_5 != 0) {
                func_0x0054717c();
              }
              return (char *)0x0;
            }
            func_0x005470d8();
            uVar8 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar8 = (uVar8 >> 7 | (long)(char)bVar3 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar8 = uVar8 >> 0x32 | (ulong)bVar3 << 0xe;
        }
      }
      else {
        uVar8 = uVar8 & 0x7f | (ulong)bVar3 << 7;
      }
    }
    pcVar4 = in_stack_00000030;
    FUN_0053b15c(in_stack_00000030,uVar8 >> 3 & 0x1fffffff);
    if (pcVar4 == (char *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x30);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pcVar4 + 10) & 0xf];
    }
    func_0x00547158();
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return pcVar4;
  }
  cVar1 = *unaff_x24;
  do {
    bVar3 = unaff_x24[1];
    uVar2 = 0;
    if (1 < bVar3) {
      if ((char)bVar3 < '\0') {
        uVar6 = (uint)unaff_x24[2];
        uVar5 = uVar6 | bVar3 & 0x7f;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 & 0x7f | bVar3 & 0x7f;
          uVar7 = (uint)unaff_x24[3];
          uVar5 = uVar7 | uVar6;
          if ((int)uVar7 < 0) {
            uVar6 = uVar7 & 0x7f | uVar6;
            uVar7 = (uint)unaff_x24[4];
            uVar5 = uVar7 | uVar6;
            if ((int)uVar7 < 0) {
              uVar6 = uVar7 & 0x7f | uVar6;
              uVar7 = (uint)unaff_x24[5];
              uVar5 = uVar7 | uVar6;
              if ((int)uVar7 < 0) {
                uVar6 = uVar7 & 0x7f | uVar6;
                uVar7 = (uint)unaff_x24[6];
                uVar5 = uVar7 | uVar6;
                if ((int)uVar7 < 0) {
                  uVar6 = uVar7 & 0x7f | uVar6;
                  uVar7 = (uint)unaff_x24[7];
                  uVar5 = uVar7 | uVar6;
                  if ((int)uVar7 < 0) {
                    uVar6 = uVar7 & 0x7f | uVar6;
                    uVar7 = (uint)unaff_x24[8];
                    uVar5 = uVar7 | uVar6;
                    if ((int)uVar7 < 0) {
                      uVar6 = uVar7 & 0x7f | uVar6;
                      uVar7 = (uint)unaff_x24[9];
                      uVar5 = uVar7 | uVar6;
                      if ((int)uVar7 < 0) {
                        if (unaff_x24[10] < 0) {
                          func_0x00545da0();
                          goto LAB_0053b2b8;
                        }
                        uVar5 = (int)unaff_x24[10] & 0xffffff81U | uVar7 & 0x7f | uVar6;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar5 = 1;
      }
      bVar3 = uVar5 != 0;
      uVar2 = 1;
    }
    func_0x00546e7c(bVar3);
    func_0x00546988();
    if ((bool)uVar2) {
      if (*unaff_x20 != 0) {
        func_0x00545d80();
      }
      return unaff_x24;
    }
    if (*unaff_x24 != cVar1) {
      func_0x00545754(*(undefined2 *)unaff_x24);
      func_0x00545cbc();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return param_1;
    }
  } while( true );
}



/* Entry: 0053d584; end: 0053dedf;  */

ushort * FUN_0053d584(ushort *param_1,ushort *param_2,undefined8 param_3,ulong param_4,
                     short *param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  ushort *puVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  ulong uVar7;
  uint unaff_w19;
  ushort *unaff_x21;
  undefined8 *unaff_x29;
  ushort *in_stack_00000070;
  undefined8 *in_stack_00000080;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  func_0x00547638();
  in_stack_00000080 = unaff_x29;
  func_0x00545a00();
  uVar5 = (param_4 & 0xff) == 0;
  cVar2 = '\0';
  cVar4 = '\0';
  if ((bool)uVar5) {
    func_0x00546950();
    if (extraout_x8_00 != 0) {
      func_0x00546004();
    }
    func_0x00545f28((byte *)((long)param_2 + 1));
    func_0x00546944();
    if (param_1 != (ushort *)0x0) {
      while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
        FUN_0054504c();
        if (param_1 == (ushort *)0x0) goto LAB_0053d628;
        func_0x00545bcc();
        if ((bool)uVar5 || cVar2 != cVar4) {
          func_0x005456e8();
          if (param_1 != (ushort *)0x0) goto LAB_0053d658;
          func_0x00545bb4();
          FUN_0054504c();
          uVar5 = param_1 == unaff_x21;
          if ((bool)uVar5) {
            func_0x00546884();
          }
          else {
LAB_0053d624:
            param_1 = (ushort *)0x0;
          }
          goto LAB_0053d628;
        }
        func_0x005464b4();
        if (cVar2 != cVar4) goto LAB_0053d624;
        func_0x00546414();
        if (param_1 == (ushort *)0x0) goto LAB_0053d628;
        func_0x00545d5c();
      }
      func_0x00546044();
      FUN_0054504c();
      func_0x00546670();
    }
LAB_0053d628:
    func_0x005458b0();
    if ((bool)uVar5) {
      return param_1;
    }
LAB_0053d654:
    ___stack_chk_fail();
LAB_0053d658:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_01 != 0) {
        func_0x00546004();
      }
      func_0x00545f28(param_2 + 1);
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x0054508c();
          if (param_1 == (ushort *)0x0) goto LAB_0053d708;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053d738;
            func_0x00545bb4();
            func_0x0054508c();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053d704:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053d708;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053d704;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053d708;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x0054508c();
        func_0x00546670();
      }
LAB_0053d708:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053d738:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_02 != 0) {
        func_0x00546004();
      }
      func_0x00545f28((byte *)((long)param_2 + 1));
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x005450cc();
          if (param_1 == (ushort *)0x0) goto LAB_0053d7e8;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053d818;
            func_0x00545bb4();
            func_0x005450cc();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053d7e4:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053d7e8;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053d7e4;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053d7e8;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x005450cc();
        func_0x00546670();
      }
LAB_0053d7e8:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053d818:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_03 != 0) {
        func_0x00546004();
      }
      func_0x00545f28(param_2 + 1);
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x0054510c();
          if (param_1 == (ushort *)0x0) goto LAB_0053d8c8;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053d8f8;
            func_0x00545bb4();
            func_0x0054510c();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053d8c4:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053d8c8;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053d8c4;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053d8c8;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x0054510c();
        func_0x00546670();
      }
LAB_0053d8c8:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053d8f8:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_04 != 0) {
        func_0x00546004();
      }
      func_0x00545f28((byte *)((long)param_2 + 1));
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x0054514c();
          if (param_1 == (ushort *)0x0) goto LAB_0053d9a8;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053d9d8;
            func_0x00545bb4();
            func_0x0054514c();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053d9a4:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053d9a8;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053d9a4;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053d9a8;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x0054514c();
        func_0x00546670();
      }
LAB_0053d9a8:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053d9d8:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_05 != 0) {
        func_0x00546004();
      }
      func_0x00545f28(param_2 + 1);
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x0054518c();
          if (param_1 == (ushort *)0x0) goto LAB_0053da88;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053dab8;
            func_0x00545bb4();
            func_0x0054518c();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053da84:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053da88;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053da84;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053da88;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x0054518c();
        func_0x00546670();
      }
LAB_0053da88:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053dab8:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_06 != 0) {
        func_0x00546004();
      }
      func_0x00545f28((byte *)((long)param_2 + 1));
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x005451cc();
          if (param_1 == (ushort *)0x0) goto LAB_0053db68;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053db98;
            func_0x00545bb4();
            func_0x005451cc();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053db64:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053db68;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053db64;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053db68;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x005451cc();
        func_0x00546670();
      }
LAB_0053db68:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053db98:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_07 != 0) {
        func_0x00546004();
      }
      func_0x00545f28(param_2 + 1);
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00545214();
          if (param_1 == (ushort *)0x0) goto LAB_0053dc48;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053dc78;
            func_0x00545bb4();
            func_0x00545214();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053dc44:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053dc48;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053dc44;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053dc48;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x00545214();
        func_0x00546670();
      }
LAB_0053dc48:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053dc78:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_08 != 0) {
        func_0x00546004();
      }
      func_0x00545f28((byte *)((long)param_2 + 1));
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x0054525c();
          if (param_1 == (ushort *)0x0) goto LAB_0053dd28;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053dd58;
            func_0x00545bb4();
            func_0x0054525c();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053dd24:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053dd28;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053dd24;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053dd28;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x0054525c();
        func_0x00546670();
      }
LAB_0053dd28:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053dd58:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    UNRECOVERED_JUMPTABLE_00 = (code *)0x53dd64;
    func_0x00547638();
    in_stack_00000080 = &stack0x00000080;
    func_0x00545a00();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    uVar3 = 0;
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x00546950();
      if (extraout_x8_09 != 0) {
        func_0x00546004();
      }
      func_0x00545f28(param_2 + 1);
      func_0x00546944();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00546174(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x005452a4();
          if (param_1 == (ushort *)0x0) goto LAB_0053de08;
          func_0x00545bcc();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x005456e8();
            if (param_1 != (ushort *)0x0) goto LAB_0053de38;
            func_0x00545bb4();
            func_0x005452a4();
            uVar3 = unaff_x21 <= param_1;
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x00546884();
            }
            else {
LAB_0053de04:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053de08;
          }
          func_0x005464b4();
          if (cVar2 != cVar4) goto LAB_0053de04;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053de08;
          func_0x00545d5c();
        }
        func_0x00546044();
        func_0x005452a4();
        func_0x00546670();
      }
LAB_0053de08:
      func_0x005458b0();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      if ((bool)uVar5) {
        func_0x0054660c();
        goto LAB_00545ab4;
      }
    }
    ___stack_chk_fail();
LAB_0053de38:
    func_0x00533528();
    func_0x00545820();
    func_0x00546618();
    func_0x00546878();
    func_0x00546484(param_2,&uStack_4c);
    if ((param_2 != (ushort *)0x0) && (func_0x0054667c(), param_2 != (ushort *)0x0)) {
      puVar6 = param_1;
      FUN_0053dee0(param_1,*(undefined8 *)(unaff_x21 + 0x18),uStack_4c,uStack_48);
      func_0x0054704c();
      if (!(bool)uVar3) {
        func_0x00545a70(*param_2);
        func_0x00545a58();
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return puVar6;
      }
      uVar7 = (ulong)*unaff_x21;
      if (uVar7 != 0) {
        *(uint *)((long)param_1 + uVar7) = *(uint *)((long)param_1 + uVar7) | unaff_w19;
      }
      return param_2;
    }
    func_0x005461dc();
LAB_0053b2b8:
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (ushort *)0x0;
  }
  func_0x005458b0();
  if (!(bool)uVar5) goto LAB_0053d654;
  func_0x0054660c();
LAB_00545ab4:
  func_0x00546494();
  uVar7 = (ulong)(byte)*param_2;
  if ((char)(byte)*param_2 < '\0') {
    bVar1 = *(byte *)((long)param_2 + 1);
    if ((char)bVar1 < '\0') {
      uVar7 = (uVar7 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = (byte)param_2[1];
      if ((char)bVar1 < '\0') {
        if ((char)*(byte *)((long)param_2 + 3) < '\0') {
          if ((char)(byte)param_2[2] < '\0') {
            func_0x0054638c(param_1);
            goto LAB_0053b2b8;
          }
          func_0x005470d8();
          uVar7 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar7 = (uVar7 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b |
                  (ulong)*(byte *)((long)param_2 + 3) << 0x15;
        }
      }
      else {
        uVar7 = uVar7 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar7 = uVar7 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  puVar6 = in_stack_00000070;
  FUN_0053b15c(in_stack_00000070,uVar7 >> 3 & 0x1fffffff);
  if (puVar6 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(in_stack_00000070 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_00a01160)[(ulong)puVar6[5] & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return puVar6;
}



/* Entry: 0053dee0; end: 0053df23;  */

void FUN_0053dee0(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00546900(param_2);
                    /* WARNING: Could not recover jumptable at 0x0053df20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_3 >> 3 & 0x1fffffff,param_4);
  return;
}



/* Entry: 0053df24; end: 0053dfcb;  */

undefined2 *
FUN_0053df24(undefined2 *param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
            short *param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 in_CY;
  ulong uVar1;
  uint unaff_w19;
  ushort *unaff_x21;
  undefined4 auStack_48 [2];
  
  func_0x00546878();
  FUN_00538888(param_2,auStack_48);
  if (param_2 == (undefined2 *)0x0) {
    func_0x005461dc();
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (undefined2 *)0x0;
  }
  FUN_0053dee0(param_1,*(undefined8 *)(unaff_x21 + 0x18),param_4,auStack_48[0]);
  func_0x0054686c();
  if (!(bool)in_CY) {
    func_0x00545a70(*param_2);
    func_0x005464c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  uVar1 = (ulong)*unaff_x21;
  if (uVar1 != 0) {
    *(uint *)((long)param_1 + uVar1) = *(uint *)((long)param_1 + uVar1) | unaff_w19;
  }
  return param_2;
}



/* Entry: 0053dfcc; end: 0053e2a3;  */

byte * FUN_0053dfcc(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5
                   )

{
  byte bVar1;
  ushort *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  ulong extraout_x8;
  ulong uVar10;
  long extraout_x9;
  uint extraout_w10;
  short *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  long unaff_x24;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ushort *in_stack_00000038;
  byte *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  func_0x00546b54();
  func_0x005462f4();
  uVar7 = (param_4 & 0xff) == 0;
  cVar4 = '\0';
  cVar6 = '\0';
  if ((bool)uVar7) {
    func_0x005462cc();
    pbVar9 = (byte *)(unaff_x24 + 1);
    func_0x0054667c();
    if (pbVar9 == (byte *)0x0) {
      func_0x00546164();
    }
    else {
      func_0x00547164();
      uVar5 = ((bool)uVar7 || cVar4 != cVar6) && extraout_w8 <= extraout_w10;
      if (((bool)uVar7 || cVar4 != cVar6) && (int)extraout_w8 < (int)extraout_w10) {
        pbVar8 = pbVar9;
        func_0x005462a8();
        *(undefined4 *)(unaff_x20 + extraout_x9) = extraout_w8_00;
        if (pbVar9 < (byte *)*unaff_x21) {
          func_0x0054586c();
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return pbVar9;
        }
        if (*unaff_x19 != 0) {
          func_0x00546004();
        }
        return pbVar8;
      }
      func_0x00545bf8();
      uVar3 = in_stack_00000048;
      puVar2 = in_stack_00000038;
      func_0x00546878();
      func_0x00546484(param_2,&stack0x00000014);
      if ((param_2 != (byte *)0x0) && (func_0x0054667c(), param_2 != (byte *)0x0)) {
        pbVar8 = pbVar9;
        FUN_0053dee0(pbVar9,*(undefined8 *)(puVar2 + 0x18),in_stack_00000014,in_stack_00000018);
        func_0x0054704c();
        if (!(bool)uVar5) {
          func_0x00545a70(*(undefined2 *)param_2);
          func_0x00545a58();
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return pbVar8;
        }
        uVar10 = (ulong)*puVar2;
        if (uVar10 != 0) {
          *(uint *)(pbVar9 + uVar10) = *(uint *)(pbVar9 + uVar10) | (uint)uVar3;
        }
        return param_2;
      }
      func_0x005461dc();
    }
LAB_0053b2b8:
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (byte *)0x0;
  }
  func_0x00545bf8();
  pbVar9 = in_stack_00000040;
  func_0x00546494();
  uVar10 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar10 = (uVar10 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            goto LAB_0053b2b8;
          }
          func_0x005470d8();
          uVar10 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar10 = (uVar10 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar10 = uVar10 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar10 = uVar10 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar8 = pbVar9;
  FUN_0053b15c(pbVar9,uVar10 >> 3 & 0x1fffffff);
  if (pbVar8 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pbVar9 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pbVar8 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar8;
}



/* Entry: 0053e2a4; end: 0053e61b;  */

char * FUN_0053e2a4(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5
                   )

{
  char cVar1;
  byte bVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  ulong uVar9;
  long extraout_x8_00;
  short *unaff_x20;
  char *unaff_x24;
  char *unaff_x25;
  int unaff_w27;
  uint unaff_w28;
  code *UNRECOVERED_JUMPTABLE_01;
  uint in_stack_00000008;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ushort *in_stack_00000048;
  char *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  func_0x00546728();
  func_0x00545ee0();
  if ((param_4 & 0xff) == 0) {
    cVar1 = *unaff_x25;
    func_0x00546834();
    func_0x005470c8(*(undefined8 *)(extraout_x8_00 + (param_4 >> 0x18 & 0xff) * 8));
    while( true ) {
      pcVar7 = unaff_x25 + 1;
      func_0x0054667c();
      if (pcVar7 == (char *)0x0) {
        func_0x00545da0();
        goto LAB_0053b2b8;
      }
      pcVar8 = (char *)(ulong)in_stack_00000008;
      uVar5 = unaff_w27 <= (int)in_stack_00000008 && in_stack_00000008 <= unaff_w28;
      if ((int)in_stack_00000008 < unaff_w27 || (int)unaff_w28 <= (int)in_stack_00000008) break;
      func_0x005472d0();
      func_0x00546988();
      if ((bool)uVar5) {
        if (*unaff_x20 != 0) {
          func_0x00545d80();
        }
        return unaff_x24;
      }
      unaff_x25 = unaff_x24;
      if (*unaff_x24 != cVar1) {
        func_0x00545754(*(undefined2 *)unaff_x24);
        func_0x00545cbc();
                    /* WARNING: Could not recover jumptable at 0x0054581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_01)();
        return pcVar7;
      }
    }
    func_0x00545b9c();
    uVar4 = in_stack_00000058;
    puVar3 = in_stack_00000048;
    func_0x00546878();
    func_0x00546484(pcVar8,&stack0x00000024);
    if ((pcVar8 != (char *)0x0) && (func_0x0054667c(), pcVar8 != (char *)0x0)) {
      pcVar6 = pcVar7;
      FUN_0053dee0(pcVar7,*(undefined8 *)(puVar3 + 0x18),in_stack_00000024,in_stack_00000028);
      func_0x0054704c();
      if (!(bool)uVar5) {
        func_0x00545a70(*(undefined2 *)pcVar8);
        func_0x00545a58();
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_01)();
        return pcVar6;
      }
      uVar9 = (ulong)*puVar3;
      if (uVar9 != 0) {
        *(uint *)(pcVar7 + uVar9) = *(uint *)(pcVar7 + uVar9) | (uint)uVar4;
      }
      return pcVar8;
    }
    func_0x005461dc();
LAB_0053b2b8:
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (char *)0x0;
  }
  func_0x00545b9c();
  pcVar7 = in_stack_00000050;
  func_0x00546494();
  uVar9 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar2 = param_2[1];
    if ((char)bVar2 < '\0') {
      uVar9 = (uVar9 & 0x7f) << 0x32 | (ulong)bVar2 << 0x39;
      bVar2 = param_2[2];
      if ((char)bVar2 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            goto LAB_0053b2b8;
          }
          func_0x005470d8();
          uVar9 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar9 = (uVar9 >> 7 | (long)(char)bVar2 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar9 = uVar9 >> 0x32 | (ulong)bVar2 << 0xe;
      }
    }
    else {
      uVar9 = uVar9 & 0x7f | (ulong)bVar2 << 7;
    }
  }
  pcVar8 = pcVar7;
  FUN_0053b15c(pcVar7,uVar9 >> 3 & 0x1fffffff);
  if (pcVar8 == (char *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pcVar7 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pcVar8 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pcVar8;
}



/* Entry: 0053e61c; end: 0053ea2b;  */

ushort * FUN_0053e61c(ushort *param_1,byte *param_2,undefined1 *param_3,ulong param_4,short *param_5
                     )

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  ushort *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar10;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar11;
  undefined8 *******unaff_x29;
  code *unaff_x30;
  undefined1 auStack_300 [48];
  ushort auStack_2d0 [12];
  ushort *puStack_2b8;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [40];
  ushort auStack_210 [12];
  ushort *puStack_1f8;
  undefined8 ******ppppppuStack_190;
  code *pcStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [40];
  ushort auStack_150 [12];
  ushort *puStack_138;
  undefined8 ******ppppppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [40];
  ushort auStack_90 [12];
  ushort *puStack_78;
  
  puVar4 = auStack_c0;
  func_0x00545c28();
  uVar8 = (param_4 & 0xff) == 0;
  cVar5 = '\0';
  cVar6 = '\0';
  if ((bool)uVar8) {
    if (*param_5 != 0) {
      func_0x0054724c(*param_2);
    }
    func_0x00546574();
    func_0x00546994();
    func_0x0054621c();
    func_0x0054738c();
    if (param_1 != (ushort *)0x0) {
      while (func_0x005461ec(), !(bool)uVar8 && cVar5 == cVar6) {
        param_3 = auStack_b8;
        func_0x005452ec();
        puStack_78 = param_1;
        if (param_1 == (ushort *)0x0) goto LAB_0053e6dc;
        func_0x00545c10();
        if ((bool)uVar8 || cVar5 != cVar6) {
          func_0x00545c3c();
          if (param_1 != (ushort *)0x0) goto LAB_0053e70c;
          func_0x005461fc();
          func_0x0054766c();
          func_0x005452ec();
          uVar8 = param_1 == unaff_x20;
          if ((bool)uVar8) {
            func_0x00546fb8();
          }
          else {
LAB_0053e6d8:
            param_1 = (ushort *)0x0;
          }
          goto LAB_0053e6dc;
        }
        func_0x005464b4();
        if (cVar5 != cVar6) goto LAB_0053e6d8;
        func_0x00546414();
        if (param_1 == (ushort *)0x0) goto LAB_0053e6dc;
        func_0x0054620c();
        puStack_78 = param_1;
      }
      func_0x00546be4();
      func_0x005452ec();
      func_0x00546670();
    }
LAB_0053e6dc:
    func_0x005458b0();
    if ((bool)uVar8) {
      return param_1;
    }
LAB_0053e708:
    ___stack_chk_fail();
LAB_0053e70c:
    func_0x00533528();
    func_0x00545ac8();
    param_1 = auStack_90;
    func_0x005464a0();
    func_0x00547028();
    puVar4 = auStack_180;
    pcStack_c8 = (code *)0x53e720;
    ppppppuStack_d0 = (undefined8 ******)&stack0xfffffffffffffff0;
    func_0x00545c28();
    uVar8 = (param_4 & 0xffff) == 0;
    cVar5 = '\0';
    cVar6 = '\0';
    if ((bool)uVar8) {
      if (*param_5 != 0) {
        func_0x0054724c(*(undefined2 *)param_2);
      }
      func_0x00546574();
      func_0x00546994();
      func_0x0054621c();
      func_0x0054738c();
      if (param_1 != (ushort *)0x0) {
        while (func_0x005461ec(), !(bool)uVar8 && cVar5 == cVar6) {
          param_3 = auStack_178;
          func_0x00545340();
          puStack_138 = param_1;
          if (param_1 == (ushort *)0x0) goto LAB_0053e7e0;
          func_0x00545c10();
          if ((bool)uVar8 || cVar5 != cVar6) {
            func_0x00545c3c();
            if (param_1 != (ushort *)0x0) goto LAB_0053e810;
            func_0x005461fc();
            func_0x0054766c();
            func_0x00545340();
            uVar8 = param_1 == unaff_x20;
            if ((bool)uVar8) {
              func_0x00546fb8();
            }
            else {
LAB_0053e7dc:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053e7e0;
          }
          func_0x005464b4();
          if (cVar5 != cVar6) goto LAB_0053e7dc;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053e7e0;
          func_0x0054620c();
          puStack_138 = param_1;
        }
        func_0x00546be4();
        func_0x00545340();
        func_0x00546670();
      }
LAB_0053e7e0:
      func_0x005458b0();
      if ((bool)uVar8) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      unaff_x29 = (undefined8 *******)ppppppuStack_d0;
      unaff_x30 = pcStack_c8;
      if ((bool)uVar8) goto LAB_005460b0;
    }
    ___stack_chk_fail();
LAB_0053e810:
    func_0x00533528();
    func_0x00545ac8();
    param_1 = auStack_150;
    func_0x005464a0();
    func_0x00547028();
    puVar4 = auStack_240;
    pcStack_188 = (code *)0x53e824;
    ppppppuStack_190 = &ppppppuStack_d0;
    func_0x00545c28();
    uVar8 = (param_4 & 0xff) == 0;
    cVar5 = '\0';
    cVar6 = '\0';
    if ((bool)uVar8) {
      if (*param_5 != 0) {
        func_0x0054724c(*param_2);
      }
      func_0x00546574();
      func_0x00546994();
      func_0x0054621c();
      func_0x0054738c();
      if (param_1 != (ushort *)0x0) {
        while (func_0x005461ec(), !(bool)uVar8 && cVar5 == cVar6) {
          param_3 = auStack_238;
          func_0x00545394();
          puStack_1f8 = param_1;
          if (param_1 == (ushort *)0x0) goto LAB_0053e8e4;
          func_0x00545c10();
          if ((bool)uVar8 || cVar5 != cVar6) {
            func_0x00545c3c();
            if (param_1 != (ushort *)0x0) goto LAB_0053e914;
            func_0x005461fc();
            func_0x0054766c();
            func_0x00545394();
            uVar8 = param_1 == unaff_x20;
            if ((bool)uVar8) {
              func_0x00546fb8();
            }
            else {
LAB_0053e8e0:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053e8e4;
          }
          func_0x005464b4();
          if (cVar5 != cVar6) goto LAB_0053e8e0;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053e8e4;
          func_0x0054620c();
          puStack_1f8 = param_1;
        }
        func_0x00546be4();
        func_0x00545394();
        func_0x00546670();
      }
LAB_0053e8e4:
      func_0x005458b0();
      if ((bool)uVar8) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      unaff_x29 = (undefined8 *******)ppppppuStack_190;
      unaff_x30 = pcStack_188;
      if ((bool)uVar8) goto LAB_005460b0;
    }
    ___stack_chk_fail();
LAB_0053e914:
    func_0x00533528();
    func_0x00545ac8();
    param_1 = auStack_210;
    func_0x005464a0();
    func_0x00547028();
    puVar4 = auStack_300;
    pcStack_248 = (code *)0x53e928;
    pppppppuVar11 = &ppppppuStack_250;
    ppppppuStack_250 = &ppppppuStack_190;
    func_0x00545c28();
    uVar8 = (param_4 & 0xffff) == 0;
    cVar5 = '\0';
    cVar6 = '\0';
    if ((bool)uVar8) {
      if (*param_5 != 0) {
        func_0x0054724c(*(undefined2 *)param_2);
      }
      func_0x00546574();
      func_0x00546994();
      func_0x0054621c();
      func_0x0054738c();
      if (param_1 != (ushort *)0x0) {
        while (func_0x005461ec(), !(bool)uVar8 && cVar5 == cVar6) {
          func_0x0054541c();
          puStack_2b8 = param_1;
          if (param_1 == (ushort *)0x0) goto LAB_0053e9e8;
          func_0x00545c10();
          if ((bool)uVar8 || cVar5 != cVar6) {
            func_0x00545c3c();
            if (param_1 != (ushort *)0x0) goto LAB_0053ea18;
            func_0x005461fc();
            func_0x0054766c();
            func_0x0054541c();
            uVar8 = param_1 == unaff_x20;
            if ((bool)uVar8) {
              func_0x00546fb8();
            }
            else {
LAB_0053e9e4:
              param_1 = (ushort *)0x0;
            }
            goto LAB_0053e9e8;
          }
          func_0x005464b4();
          if (cVar5 != cVar6) goto LAB_0053e9e4;
          func_0x00546414();
          if (param_1 == (ushort *)0x0) goto LAB_0053e9e8;
          func_0x0054620c();
          puStack_2b8 = param_1;
        }
        func_0x00546be4();
        func_0x0054541c();
        func_0x00546670();
      }
LAB_0053e9e8:
      func_0x005458b0();
      if ((bool)uVar8) {
        return param_1;
      }
    }
    else {
      func_0x005458b0();
      unaff_x29 = (undefined8 *******)ppppppuStack_250;
      unaff_x30 = pcStack_248;
      if ((bool)uVar8) goto LAB_005460b0;
    }
    ___stack_chk_fail();
LAB_0053ea18:
    func_0x00533528();
    func_0x00545ac8();
    param_1 = auStack_2d0;
    func_0x005464a0();
    unaff_x30 = FUN_0053ea2c;
    func_0x00547028();
    puVar3 = auStack_300;
    if ((param_4 & 0xff) == 0) {
      bVar2 = param_2[1];
      uVar1 = (uint)param_4 >> 0x18;
      bVar7 = uVar1 <= bVar2;
      puVar3 = auStack_300;
      if (bVar2 <= uVar1) {
        *(uint *)((long)param_1 + (param_4 >> 0x30)) = (uint)bVar2;
        puVar9 = (ushort *)(param_2 + 2);
        func_0x00546e0c();
        if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00545734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_5 + ((ulong)*puVar9 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
          return param_1;
        }
        if (*param_5 != 0) {
          func_0x0054717c();
        }
        return puVar9;
      }
    }
  }
  else {
    func_0x005458b0();
    if (!(bool)uVar8) goto LAB_0053e708;
LAB_005460b0:
    unaff_x20 = *(ushort **)(puVar4 + 0xa0);
    param_3 = *(undefined1 **)(puVar4 + 0xa8);
    unaff_x22 = *(undefined8 *)(puVar4 + 0x90);
    unaff_x21 = *(undefined8 *)(puVar4 + 0x98);
    unaff_x24 = *(undefined8 *)(puVar4 + 0x80);
    unaff_x23 = *(undefined8 *)(puVar4 + 0x88);
    puVar3 = puVar4 + 0xc0;
    pppppppuVar11 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
  *(ushort **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = param_3;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar11;
  *(code **)(puVar3 + -8) = unaff_x30;
  func_0x00546494();
  uVar10 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar2 = param_2[1];
    if ((char)bVar2 < '\0') {
      uVar10 = (uVar10 & 0x7f) << 0x32 | (ulong)bVar2 << 0x39;
      bVar2 = param_2[2];
      if ((char)bVar2 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            if (*param_5 != 0) {
              func_0x0054717c();
            }
            return (ushort *)0x0;
          }
          func_0x005470d8();
          uVar10 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar10 = (uVar10 >> 7 | (long)(char)bVar2 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar10 = uVar10 >> 0x32 | (ulong)bVar2 << 0xe;
      }
    }
    else {
      uVar10 = uVar10 & 0x7f | (ulong)bVar2 << 7;
    }
  }
  puVar9 = unaff_x20;
  FUN_0053b15c(unaff_x20,uVar10 >> 3 & 0x1fffffff);
  if (puVar9 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)puVar9[5] & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar9;
}



/* Entry: 0053ea2c; end: 0053eb7b;  */

ushort * FUN_0053ea2c(ushort *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ushort *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ushort *unaff_x20;
  
  if ((param_4 & 0xff) == 0) {
    bVar2 = param_2[1];
    uVar1 = (uint)param_4 >> 0x18;
    bVar3 = uVar1 <= bVar2;
    if (bVar2 <= uVar1) {
      *(uint *)((long)param_1 + (param_4 >> 0x30)) = (uint)bVar2;
      puVar4 = (ushort *)(param_2 + 2);
      func_0x00546e0c();
      if (bVar3) {
        if (*param_5 != 0) {
          func_0x0054717c();
        }
        return puVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x00545734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_5 + ((ulong)*puVar4 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
      return param_1;
    }
  }
  func_0x00546494();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x0054638c(param_1);
      if (*param_5 != 0) {
        func_0x0054717c();
      }
      return (ushort *)0x0;
    }
    func_0x005470d8();
  }
  puVar4 = unaff_x20;
  FUN_0053b15c();
  if (puVar4 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)puVar4[5] & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar4;
}



/* Entry: 0053eb7c; end: 0053ee2b;  */

byte * FUN_0053eb7c(byte *param_1,byte *param_2,undefined8 *param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x20;
  byte *unaff_x21;
  byte *pbVar2;
  byte *unaff_x22;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  byte *in_stack_00000030;
  
  func_0x0054725c();
  func_0x00546494();
  func_0x00547038();
  if ((param_4 & 0xff) == 0) {
    bVar1 = *unaff_x21;
    param_2 = unaff_x21;
    while (pbVar2 = param_2 + 2, (uint)param_2[1] <= ((uint)(param_4 >> 0x18) & 0xff)) {
      func_0x00546d0c();
      if ((byte *)*param_3 <= pbVar2) {
        if (*unaff_x20 != 0) {
          func_0x00546518();
        }
        return pbVar2;
      }
      param_2 = pbVar2;
      if (*pbVar2 != bVar1) {
        func_0x00545774(*(undefined2 *)pbVar2);
        func_0x00546f14();
        func_0x00545d4c();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
  }
  else {
    func_0x00546f14();
    unaff_x22 = param_1;
  }
  func_0x00545d4c();
  func_0x00546494();
  uVar3 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar3 = (uVar3 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(unaff_x22);
            if (*param_5 != 0) {
              func_0x0054717c();
            }
            return (byte *)0x0;
          }
          func_0x005470d8();
          uVar3 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar3 = (uVar3 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar3 = uVar3 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar3 = uVar3 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar2 = in_stack_00000030;
  FUN_0053b15c(in_stack_00000030,uVar3 >> 3 & 0x1fffffff);
  if (pbVar2 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pbVar2 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar2;
}



/* Entry: 0053ee2c; end: 0053f2fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 ******
FUN_0053ee2c(undefined1 *param_1,undefined8 ******param_2,undefined8 ******param_3,
            undefined8 ******param_4,undefined8 *****param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  byte *pbVar5;
  undefined8 ******ppppppuVar6;
  undefined1 *puVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int iVar18;
  undefined8 ******unaff_x23;
  undefined1 unaff_w24;
  ulong uVar19;
  int unaff_w25;
  int iVar20;
  int unaff_w27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 in_stack_00000010;
  undefined8 ******in_stack_00000038;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  byte *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined8 *****pppppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 uStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 *****apppppuStack_180 [3];
  undefined8 *******pppppppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  byte abStack_150 [24];
  undefined8 *******pppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 *******pppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 *******pppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 uStack_48;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x00547118();
  in_stack_000000c0 = unaff_x29;
  func_0x005467cc();
  func_0x00545e60();
  uVar4 = ((ulong)param_4 & 0xff) == 0;
  if ((bool)uVar4) {
    in_stack_00000068 = extraout_x8_00;
    func_0x00547544();
    if (extraout_x8_01 != 0) {
      func_0x00546a90();
    }
    unaff_w25 = unaff_w25 + 1;
    func_0x0054630c();
    func_0x00546148();
    func_0x00545c98();
    ppppppuVar6 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00546bac();
      while( true ) {
        iVar18 = (int)unaff_x23;
        cVar2 = SBORROW4(iVar18,unaff_w25);
        cVar3 = iVar18 - unaff_w25 < 0;
        uVar4 = iVar18 == unaff_w25;
        if (iVar18 <= unaff_w25) break;
        in_stack_00000010 = unaff_w24;
        func_0x00546120();
        func_0x005454a4();
        in_stack_00000038 = ppppppuVar6;
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053ef10;
        func_0x00546350();
        if ((bool)uVar4 || cVar3 != cVar2) {
          func_0x00545c6c();
          if (ppppppuVar6 != (undefined8 ******)0x0) goto LAB_0053ef4c;
          unaff_x23 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          ppppppuVar6 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x00546120();
          param_2 = unaff_x23;
          func_0x005454a4();
          uVar4 = ppppppuVar6 == unaff_x23;
          if ((bool)uVar4) {
            func_0x00547604();
          }
          else {
LAB_0053ef0c:
            ppppppuVar6 = (undefined8 ******)0x0;
          }
          goto LAB_0053ef10;
        }
        func_0x005464b4();
        if (cVar3 != cVar2) goto LAB_0053ef0c;
        func_0x00546414();
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053ef10;
        func_0x005460f0();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar6 + (long)iVar18);
      in_stack_00000010 = unaff_w24;
      func_0x00546120();
      func_0x005454a4();
      func_0x00546670();
    }
LAB_0053ef10:
    func_0x005459dc(in_stack_00000068);
    if ((bool)uVar4) {
      return ppppppuVar6;
    }
  }
  else {
    func_0x005459dc(extraout_x8_00);
    if ((bool)uVar4) {
      func_0x00546588();
      func_0x00547398();
      goto FUN_0053b2d4;
    }
  }
  ___stack_chk_fail();
LAB_0053ef4c:
  func_0x00533528();
  func_0x00545ac8();
  param_1 = &stack0x00000010;
  func_0x005464a0(param_1);
  func_0x00546f70();
  func_0x00547118();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x005467cc();
  func_0x00545e60();
  uVar4 = ((ulong)param_4 & 0xffff) == 0;
  if ((bool)uVar4) {
    in_stack_00000068 = extraout_x8_02;
    func_0x00547544();
    if (extraout_x8_03 != 0) {
      func_0x00546a90();
    }
    unaff_w25 = unaff_w25 + 2;
    func_0x0054630c();
    func_0x00546148();
    func_0x00545c98();
    ppppppuVar6 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00546bac();
      while( true ) {
        iVar18 = (int)unaff_x23;
        cVar2 = SBORROW4(iVar18,unaff_w25);
        cVar3 = iVar18 - unaff_w25 < 0;
        uVar4 = iVar18 == unaff_w25;
        if (iVar18 <= unaff_w25) break;
        in_stack_00000010 = unaff_w24;
        func_0x0054610c();
        func_0x005454fc();
        in_stack_00000038 = ppppppuVar6;
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053f044;
        func_0x00546350();
        if ((bool)uVar4 || cVar3 != cVar2) {
          func_0x00545c6c();
          if (ppppppuVar6 != (undefined8 ******)0x0) goto LAB_0053f080;
          unaff_x23 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          ppppppuVar6 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x0054610c();
          param_2 = unaff_x23;
          func_0x005454fc();
          uVar4 = ppppppuVar6 == unaff_x23;
          if ((bool)uVar4) {
            func_0x00547604();
          }
          else {
LAB_0053f040:
            ppppppuVar6 = (undefined8 ******)0x0;
          }
          goto LAB_0053f044;
        }
        func_0x005464b4();
        if (cVar3 != cVar2) goto LAB_0053f040;
        func_0x00546414();
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053f044;
        func_0x005460f0();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar6 + (long)iVar18);
      in_stack_00000010 = unaff_w24;
      func_0x0054610c();
      func_0x005454fc();
      func_0x00546670();
    }
LAB_0053f044:
    func_0x005459dc(in_stack_00000068);
    if ((bool)uVar4) {
      return ppppppuVar6;
    }
  }
  else {
    func_0x005459dc(extraout_x8_02);
    if ((bool)uVar4) {
      func_0x00546588();
      func_0x00547398();
      goto FUN_0053b2d4;
    }
  }
  ___stack_chk_fail();
LAB_0053f080:
  iVar18 = (int)unaff_x23;
  func_0x00533528();
  func_0x00545ac8();
  param_1 = &stack0x00000010;
  func_0x005464a0(param_1);
  func_0x00546f70();
  func_0x00547118();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x005467cc();
  func_0x00545e60();
  uVar4 = ((ulong)param_4 & 0xff) == 0;
  if ((bool)uVar4) {
    in_stack_00000068 = extraout_x8_04;
    func_0x00547544();
    if (extraout_x8_05 != 0) {
      func_0x00546a90();
    }
    unaff_w25 = unaff_w25 + 1;
    func_0x0054630c();
    func_0x00546148();
    func_0x00545c98();
    ppppppuVar6 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00546bac();
      while( true ) {
        cVar2 = SBORROW4(iVar18,unaff_w25);
        cVar3 = iVar18 - unaff_w25 < 0;
        uVar4 = iVar18 == unaff_w25;
        if (iVar18 <= unaff_w25) break;
        in_stack_00000010 = unaff_w24;
        func_0x00546120();
        func_0x00545554();
        in_stack_00000038 = ppppppuVar6;
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053f178;
        func_0x00546350();
        if ((bool)uVar4 || cVar3 != cVar2) {
          func_0x00545c6c();
          if (ppppppuVar6 != (undefined8 ******)0x0) goto LAB_0053f1b4;
          unaff_x23 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          ppppppuVar6 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x00546120();
          param_2 = unaff_x23;
          func_0x00545554();
          uVar4 = ppppppuVar6 == unaff_x23;
          if ((bool)uVar4) {
            func_0x00547604();
          }
          else {
LAB_0053f174:
            ppppppuVar6 = (undefined8 ******)0x0;
          }
          goto LAB_0053f178;
        }
        func_0x005464b4();
        if (cVar3 != cVar2) goto LAB_0053f174;
        func_0x00546414();
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053f178;
        func_0x005460f0();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar6 + (long)iVar18);
      in_stack_00000010 = unaff_w24;
      func_0x00546120();
      func_0x00545554();
      func_0x00546670();
    }
LAB_0053f178:
    iVar18 = (int)unaff_x23;
    func_0x005459dc(in_stack_00000068);
    if ((bool)uVar4) {
      return ppppppuVar6;
    }
  }
  else {
    func_0x005459dc(extraout_x8_04);
    if ((bool)uVar4) {
      func_0x00546588();
      func_0x00547398();
      goto FUN_0053b2d4;
    }
  }
  ___stack_chk_fail();
LAB_0053f1b4:
  func_0x00533528();
  func_0x00545ac8();
  param_1 = &stack0x00000010;
  func_0x005464a0(param_1);
  func_0x00546f70();
  func_0x00547118();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x005467cc();
  func_0x00545e60();
  uVar4 = ((ulong)param_4 & 0xffff) == 0;
  if ((bool)uVar4) {
    in_stack_00000068 = extraout_x8_06;
    func_0x00547544();
    if (extraout_x8_07 != 0) {
      func_0x00546a90();
    }
    iVar20 = unaff_w25 + 2;
    func_0x0054630c();
    func_0x00546148();
    func_0x00545c98();
    ppppppuVar6 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00546bac();
      while( true ) {
        cVar2 = SBORROW4(iVar18,iVar20);
        cVar3 = iVar18 - iVar20 < 0;
        uVar4 = iVar18 == iVar20;
        if (iVar18 <= iVar20) break;
        in_stack_00000010 = unaff_w24;
        func_0x0054610c();
        func_0x005455b0();
        in_stack_00000038 = ppppppuVar6;
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053f2ac;
        func_0x00546350();
        if ((bool)uVar4 || cVar3 != cVar2) {
          func_0x00545c6c();
          if (ppppppuVar6 != (undefined8 ******)0x0) goto LAB_0053f2e8;
          ppppppuVar6 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x0054610c();
          param_2 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          func_0x005455b0();
          uVar4 = ppppppuVar6 == (undefined8 ******)(&stack0x00000040 + unaff_x28);
          if ((bool)uVar4) {
            func_0x00547604();
          }
          else {
LAB_0053f2a8:
            ppppppuVar6 = (undefined8 ******)0x0;
          }
          goto LAB_0053f2ac;
        }
        func_0x005464b4();
        if (cVar3 != cVar2) goto LAB_0053f2a8;
        func_0x00546414();
        if (ppppppuVar6 == (undefined8 ******)0x0) goto LAB_0053f2ac;
        func_0x005460f0();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar6 + (long)iVar18);
      in_stack_00000010 = unaff_w24;
      func_0x0054610c();
      func_0x005455b0();
      func_0x00546670();
    }
LAB_0053f2ac:
    func_0x005459dc(in_stack_00000068);
    if ((bool)uVar4) {
      return ppppppuVar6;
    }
  }
  else {
    func_0x005459dc(extraout_x8_06);
    if ((bool)uVar4) {
      func_0x00546588();
      func_0x00547398();
FUN_0053b2d4:
      pbVar12 = in_stack_000000b0;
      func_0x00546494();
      uVar19 = (ulong)*(byte *)param_2;
      if ((char)*(byte *)param_2 < '\0') {
        bVar1 = *(byte *)((long)param_2 + 1);
        if ((char)bVar1 < '\0') {
          uVar19 = (uVar19 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
          bVar1 = *(byte *)((long)param_2 + 2);
          if ((char)bVar1 < '\0') {
            if ((char)*(byte *)((long)param_2 + 3) < '\0') {
              if ((char)*(byte *)((long)param_2 + 4) < '\0') {
                func_0x0054638c(param_1);
                if (*(short *)param_5 != 0) {
                  func_0x0054717c();
                }
                return (undefined8 ******)(byte *)0x0;
              }
              func_0x005470d8();
              uVar19 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
            }
            else {
              uVar19 = (uVar19 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b |
                       (ulong)*(byte *)((long)param_2 + 3) << 0x15;
            }
          }
          else {
            uVar19 = uVar19 >> 0x32 | (ulong)bVar1 << 0xe;
          }
        }
        else {
          uVar19 = uVar19 & 0x7f | (ulong)bVar1 << 7;
        }
      }
      pbVar5 = pbVar12;
      FUN_0053b15c(pbVar12,uVar19 >> 3 & 0x1fffffff);
      if (pbVar5 == (byte *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(pbVar12 + 0x30);
      }
      else {
        UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pbVar5 + 10) & 0xf];
      }
      func_0x00547158();
      func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return (undefined8 ******)pbVar5;
    }
  }
  ___stack_chk_fail();
LAB_0053f2e8:
  func_0x00533528();
  func_0x00545ac8();
  puVar7 = &stack0x00000010;
  func_0x005464a0(puVar7);
  func_0x00546f70();
  pcStack_8 = FUN_0053f2fc;
  ppppppuVar8 = param_2;
  puStack_10 = &stack0x000000c0;
  FUN_0053b15c(param_2,(ulong)puVar7 >> 3 & 0x1fffffff);
  func_0x0053b22c(param_2);
  func_0x0053b280();
  func_0x005463d4();
  ppppppuVar14 = apppppuStack_180;
  pppppuVar15 = apppppuStack_180;
  ppppppuVar6 = apppppuStack_180;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  abStack_150[0] = 0;
  abStack_150[1] = 0;
  abStack_150[2] = 0;
  abStack_150[3] = 0;
  abStack_150[4] = 0;
  abStack_150[5] = 0;
  abStack_150[6] = 0;
  abStack_150[7] = 0;
  abStack_150[8] = 0;
  abStack_150[9] = 0;
  abStack_150[10] = 0;
  abStack_150[0xb] = 0;
  abStack_150[0xc] = 0;
  abStack_150[0xd] = 0;
  abStack_150[0xe] = 0;
  abStack_150[0xf] = 0;
  abStack_150[0x10] = 0;
  abStack_150[0x11] = 0;
  abStack_150[0x12] = 0;
  abStack_150[0x13] = 0;
  abStack_150[0x14] = 0;
  abStack_150[0x15] = 0;
  abStack_150[0x16] = 0;
  abStack_150[0x17] = 0;
  pcVar13 = "";
  pppppppuVar9 = &pppppppuStack_168;
  ppppppuVar16 = param_4;
  pppppuVar17 = param_5;
  FUN_00425cb4();
  if (param_4 != (undefined8 ******)0x0) {
    if (ppppppuVar8 == (undefined8 ******)0x0) {
      func_0x0054df74();
      pppppppuStack_a8 = (undefined8 *******)param_3;
      ppppppuStack_a0 = param_4;
      pppppppuStack_78 = pppppppuVar9;
      ppppppuStack_70 = (undefined8 ******)pcVar13;
      func_0x0054df9c();
      pppppppuStack_d8 = pppppppuVar9;
      ppppppuStack_d0 = (undefined8 ******)pcVar13;
      FUN_00575ddc(&ppppppuStack_108,&pppppppuStack_78,&pppppppuStack_a8,&pppppppuStack_d8);
      pcVar13 = (char *)&ppppppuStack_108;
      FUN_004575b8(&pppppppuStack_168);
      ppppppuVar6 = &ppppppuStack_108;
    }
    else {
      func_0x0054df74();
      pcVar10 = ".";
      pppppppuStack_a8 = (undefined8 *******)param_2;
      ppppppuStack_a0 = ppppppuVar8;
      pppppppuStack_78 = pppppppuVar9;
      ppppppuStack_70 = (undefined8 ******)pcVar13;
      FUN_00532c74();
      ppppppuStack_108 = param_3;
      ppppppuStack_100 = param_4;
      pppppppuStack_d8 = (undefined8 *******)pcVar10;
      ppppppuStack_d0 = (undefined8 ******)pcVar13;
      func_0x0054df9c();
      pppppppuStack_138 = (undefined8 *******)pcVar10;
      ppppppuStack_130 = (undefined8 ******)pcVar13;
      func_0x0054df40();
      FUN_0054dd58();
      FUN_004575b8(&pppppppuStack_168);
      pcVar13 = (char *)ppppppuVar14;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
  }
  pcVar10 = "String field";
  FUN_00532c74();
  ppppppuStack_a0 = (undefined8 ******)uStack_160;
  pppppppuStack_a8 = pppppppuStack_168;
  if (-1 < (char)bStack_151) {
    ppppppuStack_a0 = (undefined8 ******)(ulong)bStack_151;
    pppppppuStack_a8 = &pppppppuStack_168;
  }
  pcVar11 = " contains invalid UTF-8 data when ";
  pppppppuStack_78 = (undefined8 *******)pcVar10;
  ppppppuStack_70 = (undefined8 ******)pcVar13;
  FUN_00532c74();
  pppppppuStack_d8 = (undefined8 *******)pcVar11;
  ppppppuStack_d0 = (undefined8 ******)pcVar13;
  FUN_00532c74();
  pcVar10 = " a protocol buffer. Use the \'bytes\' type if you intend to send raw bytes. ";
  ppppppuStack_108 = (undefined8 ******)param_5;
  ppppppuStack_100 = (undefined8 ******)pcVar13;
  FUN_00532c74();
  pppppppuStack_138 = (undefined8 *******)pcVar10;
  ppppppuStack_130 = (undefined8 ******)pcVar13;
  func_0x0054df40();
  FUN_0054a558();
  pcVar13 = section_00000248.segname + 3;
  func_0x007766a0(&pppppppuStack_78,"external/protobuf+/src/google/protobuf/wire_format_lite.cc");
  FUN_00555478();
  FUN_007766a8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppppuStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_168);
  pbVar12 = abStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0054df64(uStack_48);
  if (extraout_x9 == extraout_x8_08) {
    return (undefined8 ******)pbVar12;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_168);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(abStack_150);
  __Unwind_Resume();
  pbVar5 = (byte *)&uStack_1f0;
  pcStack_188 = FUN_0054dd58;
  ppuStack_190 = &puStack_10;
  func_0x0054df64();
  uStack_1e8 = *(undefined8 *)(pbVar12 + 8);
  uStack_1f0 = *(undefined8 *)pbVar12;
  uStack_1d8 = pppppuVar15[1];
  uStack_1e0 = *pppppuVar15;
  uStack_1c8 = *(undefined8 *)(pcVar13 + 8);
  uStack_1d0 = *(undefined8 *)pcVar13;
  pppppuStack_1b8 = ppppppuVar16[1];
  pppppuStack_1c0 = *ppppppuVar16;
  ppppuStack_1a8 = pppppuVar17[1];
  ppppuStack_1b0 = *pppppuVar17;
  uStack_198 = extraout_x9_00;
  FUN_00575fc4(&uStack_1f0,5);
  iVar18 = (int)pcVar13;
  func_0x0054df64(uStack_198);
  if (extraout_x9_01 == extraout_x8_09) {
    return (undefined8 ******)pbVar5;
  }
  ___stack_chk_fail();
  FUN_00553b28();
  if (((ulong)pbVar5 & 1) == 0) {
    pcVar13 = "serializing";
    if (iVar18 != 1) {
      pcVar13 = (char *)0x0;
    }
    pcVar10 = "parsing";
    if (iVar18 != 0) {
      pcVar10 = pcVar13;
    }
    ppppppuVar6 = ppppppuVar16;
    _strlen(ppppppuVar16);
    FUN_0054db4c("",0,ppppppuVar16,ppppppuVar6,pcVar10);
  }
  return (undefined8 ******)pbVar5;
}



/* Entry: 0053f2fc; end: 0053f59f;  */

undefined8 *
FUN_0053f2fc(ulong param_1,undefined8 ***param_2,undefined8 ***param_3,undefined8 ***param_4,
            undefined8 **param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ****ppppuVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  char *pcVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  int iVar11;
  undefined8 ***pppuVar12;
  undefined8 **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 *apuStack_180 [3];
  undefined8 ***pppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 ***pppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 ***pppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 ***pppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_48;
  
  pppuVar1 = param_2;
  FUN_0053b15c(param_2,param_1 >> 3 & 0x1fffffff);
  func_0x0053b22c(param_2);
  func_0x0053b280();
  func_0x005463d4();
  pppuVar9 = (undefined8 ***)apuStack_180;
  ppuVar10 = apuStack_180;
  pppuVar7 = (undefined8 ***)apuStack_180;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  pcVar8 = "";
  ppppuVar2 = &pppuStack_168;
  pppuVar12 = param_4;
  ppuVar13 = param_5;
  FUN_00425cb4();
  if (param_4 != (undefined8 ***)0x0) {
    if (pppuVar1 == (undefined8 ***)0x0) {
      func_0x0054df74();
      pppuStack_a8 = param_3;
      ppuStack_a0 = param_4;
      pppuStack_78 = ppppuVar2;
      ppuStack_70 = (undefined8 **)pcVar8;
      func_0x0054df9c();
      pppuStack_d8 = ppppuVar2;
      ppuStack_d0 = (undefined8 **)pcVar8;
      FUN_00575ddc(&ppuStack_108,&pppuStack_78,&pppuStack_a8,&pppuStack_d8);
      pcVar8 = (char *)&ppuStack_108;
      FUN_004575b8(&pppuStack_168);
      pppuVar7 = &ppuStack_108;
    }
    else {
      func_0x0054df74();
      pcVar3 = ".";
      pppuStack_a8 = param_2;
      ppuStack_a0 = pppuVar1;
      pppuStack_78 = ppppuVar2;
      ppuStack_70 = (undefined8 **)pcVar8;
      FUN_00532c74();
      ppuStack_108 = param_3;
      ppuStack_100 = param_4;
      pppuStack_d8 = (undefined8 ***)pcVar3;
      ppuStack_d0 = (undefined8 **)pcVar8;
      func_0x0054df9c();
      pppuStack_138 = (undefined8 ***)pcVar3;
      ppuStack_130 = (undefined8 **)pcVar8;
      func_0x0054df40();
      FUN_0054dd58();
      FUN_004575b8(&pppuStack_168);
      pcVar8 = (char *)pppuVar9;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar7);
  }
  pcVar3 = "String field";
  FUN_00532c74();
  ppuStack_a0 = (undefined8 **)uStack_160;
  pppuStack_a8 = pppuStack_168;
  if (-1 < (char)bStack_151) {
    ppuStack_a0 = (undefined8 **)(ulong)bStack_151;
    pppuStack_a8 = &pppuStack_168;
  }
  pcVar4 = " contains invalid UTF-8 data when ";
  pppuStack_78 = (undefined8 ***)pcVar3;
  ppuStack_70 = (undefined8 **)pcVar8;
  FUN_00532c74();
  pppuStack_d8 = (undefined8 ***)pcVar4;
  ppuStack_d0 = (undefined8 **)pcVar8;
  FUN_00532c74();
  pcVar3 = " a protocol buffer. Use the \'bytes\' type if you intend to send raw bytes. ";
  ppuStack_108 = param_5;
  ppuStack_100 = (undefined8 **)pcVar8;
  FUN_00532c74();
  pppuStack_138 = (undefined8 ***)pcVar3;
  ppuStack_130 = (undefined8 **)pcVar8;
  func_0x0054df40();
  FUN_0054a558();
  pcVar8 = section_00000248.segname + 3;
  func_0x007766a0(&pppuStack_78,"external/protobuf+/src/google/protobuf/wire_format_lite.cc");
  FUN_00555478();
  FUN_007766a8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_168);
  puVar5 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0054df64(uStack_48);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
    __Unwind_Resume();
    puVar6 = &uStack_1f0;
    pcStack_188 = FUN_0054dd58;
    puStack_190 = &stack0xfffffffffffffff0;
    func_0x0054df64();
    uStack_1e8 = puVar5[1];
    uStack_1f0 = *puVar5;
    uStack_1d8 = ppuVar10[1];
    uStack_1e0 = *ppuVar10;
    uStack_1c8 = *(undefined8 *)(pcVar8 + 8);
    uStack_1d0 = *(undefined8 *)pcVar8;
    puStack_1b8 = pppuVar12[1];
    puStack_1c0 = *pppuVar12;
    uStack_1a8 = ppuVar13[1];
    uStack_1b0 = *ppuVar13;
    uStack_198 = extraout_x9_00;
    FUN_00575fc4(&uStack_1f0,5);
    iVar11 = (int)pcVar8;
    func_0x0054df64(uStack_198);
    if (extraout_x9_01 != extraout_x8_00) {
      ___stack_chk_fail();
      FUN_00553b28();
      if (((ulong)puVar6 & 1) == 0) {
        pcVar8 = "serializing";
        if (iVar11 != 1) {
          pcVar8 = (char *)0x0;
        }
        pcVar3 = "parsing";
        if (iVar11 != 0) {
          pcVar3 = pcVar8;
        }
        pppuVar7 = pppuVar12;
        _strlen(pppuVar12);
        FUN_0054db4c("",0,pppuVar12,pppuVar7,pcVar3);
      }
      return puVar6;
    }
    return puVar6;
  }
  return puVar5;
}



/* Entry: 0053f5a0; end: 0053f783;  */

byte * FUN_0053f5a0(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5
                   )

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  code *UNRECOVERED_JUMPTABLE_00;
  byte *in_stack_00000030;
  
  func_0x0054725c();
  func_0x005464ec();
  if ((param_4 & 0xff) == 0) {
    pbVar3 = param_2 + 1;
    bVar1 = *param_2;
    uVar5 = *(ulong *)(unaff_x20 + 8);
    if ((uVar5 & 1) != 0) {
      func_0x00546f00();
    }
    if (uVar5 == 0) {
      pbVar4 = unaff_x21;
      func_0x0054560c();
    }
    else {
      pbVar2 = unaff_x21;
      pbVar4 = pbVar3;
      FUN_00532fc0();
      pbVar3 = pbVar2;
    }
    if (pbVar3 != (byte *)0x0) {
      pbVar2 = pbVar3;
      func_0x005474a8(*(undefined8 *)(unaff_x20 + (param_4 >> 0x30)));
      if ((long)pbVar4 < 0) {
        pbVar2 = *(byte **)pbVar2;
      }
      FUN_00553b28();
      if (((ulong)pbVar2 & 1) != 0) {
        if (pbVar3 < *(byte **)unaff_x21) {
          func_0x00545944(*(undefined2 *)pbVar3);
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return pbVar2;
        }
        if (*unaff_x19 != 0) {
          func_0x00546404();
        }
        return pbVar3;
      }
      FUN_0053f2fc(bVar1);
    }
    func_0x00546164();
LAB_0053b2b8:
    if (*param_5 != 0) {
      func_0x0054717c();
    }
    return (byte *)0x0;
  }
  func_0x00545ff4();
  func_0x00546494();
  uVar5 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar5 = (uVar5 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x0054638c(param_1);
            goto LAB_0053b2b8;
          }
          func_0x005470d8();
          uVar5 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar5 = (uVar5 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar5 = uVar5 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar5 = uVar5 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar3 = in_stack_00000030;
  FUN_0053b15c(in_stack_00000030,uVar5 >> 3 & 0x1fffffff);
  if (pbVar3 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(pbVar3 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar3;
}



/* Entry: 0053f784; end: 0053f7b3;  */

long FUN_0053f784(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 short *param_5)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  func_0x00546494();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x0054638c(param_1);
      if (*param_5 != 0) {
        func_0x0054717c();
      }
      return 0;
    }
    func_0x005470d8();
  }
  lVar1 = unaff_x20;
  FUN_0053b15c();
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)*(ushort *)(lVar1 + 10) & 0xf];
  }
  func_0x00547158();
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return lVar1;
}



/* Entry: 0053f7b4; end: 0053fe0b;  */

undefined2 *
FUN_0053f7b4(undefined2 *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined2 *extraout_x8_02;
  undefined2 *extraout_x8_03;
  short *unaff_x21;
  undefined2 *unaff_x23;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  long in_stack_00000008;
  undefined2 *in_stack_00000050;
  
  func_0x00546728();
  func_0x00545e88();
  uVar4 = (param_4 & 0xff) == 0;
  uVar3 = 0;
  if (!(bool)uVar4) {
    func_0x00545a58();
    func_0x00546494();
    uVar6 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = param_2[2];
        if ((char)bVar1 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x0054638c(param_1);
              goto LAB_0053b2b8;
            }
            func_0x005470d8();
            uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar6 = (uVar6 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar6 = uVar6 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar6 = uVar6 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar5 = in_stack_00000050;
    FUN_0053b15c(in_stack_00000050,uVar6 >> 3 & 0x1fffffff);
    if (puVar5 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000050 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_FUN_00a01160)[(ulong)(ushort)puVar5[5] & 0xf];
    }
    func_0x00547158();
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0053b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar5;
  }
  func_0x0054744c();
  if (extraout_x8_00 != 0) {
    func_0x00545d3c();
    func_0x00546270();
    if (((bool)uVar4) && (func_0x00546264(), (int)param_1 != 0)) {
      do {
        func_0x00546368((long)unaff_x23 + 1);
        if (in_stack_00000008 == 0) goto LAB_0053f898;
        func_0x00546ebc();
        if (extraout_x8_01 == 0) {
          func_0x00546ad0();
          uVar2 = uVar4;
        }
        else {
          func_0x00545e70();
          uVar2 = uVar4;
        }
        func_0x00545cdc();
        func_0x00545f4c();
        if (param_1 == (undefined2 *)0x0) goto LAB_0053f898;
        func_0x00546b2c();
        if ((bool)uVar3) goto LAB_0053f880;
        func_0x00546ea4();
        uVar4 = 1;
        puVar5 = extraout_x8_02;
      } while ((bool)uVar2);
      goto LAB_0053f864;
    }
  }
  do {
    uVar2 = uVar4;
    func_0x00546b4c();
    func_0x00546744();
    if (param_1 == (undefined2 *)0x0) goto LAB_0053f898;
    func_0x00546b2c();
    if ((bool)uVar3) goto LAB_0053f880;
    func_0x00546ea4();
    uVar4 = 1;
    puVar5 = extraout_x8_03;
  } while ((bool)uVar2);
LAB_0053f864:
  if (unaff_x23 < puVar5) {
    func_0x00545a70(*unaff_x23);
    func_0x00545a58();
                    /* WARNING: Could not recover jumptable at 0x0054581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  }
LAB_0053f880:
  if (*unaff_x21 != 0) {
    func_0x005463c4();
  }
  return unaff_x23;
LAB_0053f898:
  func_0x005461dc();
LAB_0053b2b8:
  if (*param_5 != 0) {
    func_0x0054717c();
  }
  return (undefined2 *)0x0;
}



/* Entry: 0053fe0c; end: 0053febb;  */

undefined8 FUN_0053fe0c(uint *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  ulong extraout_x8;
  
  iVar1 = *(int *)(param_4 + param_2);
  *(int *)(param_4 + param_2) = param_3;
  if (iVar1 == 0) {
    return 1;
  }
  if (iVar1 == param_3) {
    return 0;
  }
  FUN_0053b15c();
  uVar2 = *(ushort *)((long)param_1 + 10);
  if ((uVar2 & 7) == 6) {
    if ((uVar2 & 0x180) == 0) {
      uVar3 = *(ulong *)(param_4 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x00546c6c();
        uVar3 = extraout_x8;
      }
      if ((uVar3 == 0) && (*(long **)(param_4 + (ulong)*param_1) != (long *)0x0)) {
        (**(code **)(**(long **)(param_4 + (ulong)*param_1) + 8))();
      }
    }
  }
  else if (((uVar2 & 7) == 5) && ((uVar2 & 0x1c0) == 0)) {
    func_0x00532f74(param_4 + (ulong)*param_1);
  }
  return 1;
}



/* Entry: 0053febc; end: 0053ff3f;  */

long FUN_0053febc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = (ulong)*(uint *)(param_2 + 0x18) + param_2;
  uVar4 = (ulong)*(uint *)(lVar1 + 8);
  if (*(long *)(param_1 + uVar4) != *(long *)(*(long *)(param_2 + 0x20) + uVar4)) {
    return *(long *)(param_1 + uVar4);
  }
  uVar3 = (ulong)*(uint *)(lVar1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (uVar2 == 0) {
    __Znwm();
  }
  else {
    FUN_0053ff40(uVar2,uVar3,8);
    uVar3 = uVar2;
  }
  *(ulong *)(param_1 + uVar4) = uVar3;
  _memcpy();
  return *(long *)(param_1 + uVar4);
}



/* Entry: 0053ff40; end: 0053ff87;  */

/* WARNING: Possible PIC construction at 0x0053ff6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0053ff70) */
/* WARNING: Removing unreachable block (ram,0x005467b8) */

void FUN_0053ff40(long param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  int extraout_w8;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 uVar5;
  undefined8 unaff_x30;
  undefined8 uVar6;
  
  uVar2 = param_3 == 8;
  if (param_3 < 9) {
    uVar4 = param_2 + 7U & 0xfffffffffffffff8;
    puVar1 = (undefined1 *)register0x00000008;
    param_3 = unaff_x19;
  }
  else {
    puVar1 = &stack0xffffffffffffffe0;
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar4 = (param_2 + param_3) - 8;
    unaff_x30 = 0x53ff70;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  FUN_005511d8(param_1,uVar4);
  func_0x005511f8();
  if ((bool)uVar2) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(puVar1 + -0x10);
    uVar6 = *(undefined8 *)(puVar1 + -8);
  }
  else {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(ulong *)(puVar1 + -0x18) = param_3;
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    iVar3 = extraout_w8;
    FUN_00550138();
    uVar5 = *(undefined8 *)(puVar1 + -0x10);
    uVar6 = *(undefined8 *)(puVar1 + -8);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
    param_3 = *(ulong *)(puVar1 + -0x18);
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(ulong *)(puVar1 + -0x18) = param_3;
  *(undefined8 *)(puVar1 + -0x10) = uVar5;
  *(undefined8 *)(puVar1 + -8) = uVar6;
  func_0x00551294();
  FUN_0055054c();
  if (iVar3 == 0) {
    func_0x005512d0();
  }
  return;
}



/* Entry: 0053ff88; end: 0053fff7;  */

bool FUN_0053ff88(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                 )

{
  bool bVar1;
  
  if (param_5 != 0x400) {
    return true;
  }
  FUN_00553b28();
  bVar1 = (param_1 & 1) == 0;
  if (bVar1) {
    func_0x0053b22c(param_3);
    func_0x0053b280(param_3,param_4);
    func_0x005463d4();
    FUN_0054db4c();
  }
  return !bVar1;
}



/* Entry: 0053fff8; end: 0054024b;  */

void FUN_0053fff8(undefined8 param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  int iVar7;
  undefined1 uVar8;
  undefined ***pppuVar9;
  undefined1 **ppuVar10;
  undefined **ppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 *puStack_68;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  
  pppuVar9 = &ppuStack_d0;
  iVar7 = (int)&ppuStack_d0;
  func_0x00545c28();
  pppuStack_c0 = (undefined8 ****)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pppuStack_c8 = &pppuStack_c0;
  ppuStack_d0 = &PTR_DAT_00a012c8;
  uStack_60 = 0;
  uStack_5e = uRam0000000000b69430;
  uStack_5d = 0;
  puStack_98 = auStack_88;
  puStack_90 = auStack_88;
  puStack_68 = (undefined1 *)&ppuStack_d0;
  puStack_58 = auStack_88;
  FUN_0054ff08();
  puStack_50 = (undefined1 *)pppuVar9;
  FUN_0054fd70(&ppuStack_d0,&puStack_a0,&uStack_a4);
  iVar2 = 0;
  if (0 < (int)uStack_a4) {
    iVar2 = iVar7;
  }
  if (iVar2 == 1) {
    puStack_98 = puStack_a0 + ((ulong)uStack_a4 - 0x10);
    if (uStack_a4 < 0x11) {
      puStack_98 = auStack_88 + uStack_a4;
    }
    puStack_90 = (undefined1 *)0x0;
    puStack_58 = puStack_a0;
    if (uStack_a4 < 0x11) {
      puStack_90 = puStack_a0;
      puStack_58 = auStack_88;
    }
  }
  uVar1 = (uint)param_5 & 0xff;
  switch((uint)param_5 & 7) {
  default:
    uVar4 = uVar1 >> 3 & 7;
    if (uVar4 == 2) {
      if ((uVar1 >> 6 & 1) == 0) {
        if (uVar1 >> 7 == 0) {
          func_0x00546938();
          func_0x0054d8c0();
        }
        else {
          func_0x00546938();
          func_0x0054d880();
        }
      }
      else {
        func_0x00546938();
        func_0x0054d908();
      }
    }
    else if (uVar4 == 1) {
      if ((uVar1 >> 6 & 1) == 0) {
        if (uVar1 >> 7 != 0) {
          func_0x00546938();
          goto code_r0x00540198;
        }
        func_0x00546938();
        func_0x0054d8a4();
      }
      else {
        func_0x00546938();
        func_0x0054d8e4();
      }
    }
    else {
      func_0x00546938();
      func_0x0054d990();
    }
    break;
  case 1:
    func_0x00546938();
    func_0x0054d960();
    break;
  case 2:
    func_0x00546938();
    func_0x0054d9ac();
    break;
  case 3:
  case 4:
    goto code_r0x00540224;
  case 5:
    func_0x00546938();
    func_0x0054d930();
    break;
  case 7:
code_r0x00540198:
    func_0x0054d860();
  }
  func_0x0054d860(2,*(undefined4 *)(param_4 + (param_5 >> 0x20 & 0xffff)),&puStack_98);
  ppuVar10 = &puStack_98;
  FUN_0054f0b4();
  func_0x00546900(*(undefined8 *)(param_2 + 0x30));
  uVar8 = uStack_b0._7_1_ == 0;
  uVar3 = uStack_b8;
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  if (-1 < uStack_b0) {
    uVar3 = (ulong)uStack_b0._7_1_;
    ppppuVar5 = &pppuStack_c0;
  }
  (*(code *)ppuVar10[1])(param_1,param_3 >> 3 & 0x1fffffff,ppppuVar5,uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_c0);
  func_0x005458b0();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
code_r0x00540224:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x540228);
  (*pcVar6)();
}



/* Entry: 0054024c; end: 005402cb;  */

void FUN_0054024c(long param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00546eb0();
  if ((param_2 & 0x38) == 0x18) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  }
  uVar2 = (uint)unaff_x21 >> 0xb & 7;
  uVar1 = (ushort)(unaff_x21 >> 0x20);
  if (uVar2 == 4) {
    (*(code *)**(undefined8 **)(param_1 + (ulong)uVar1))();
  }
  else if (uVar2 == 3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + (ulong)uVar1);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1,param_1,unaff_x21 >> 0x30);
  return;
}



/* Entry: 005402cc; end: 00540513;  */

ulong * FUN_005402cc(long param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong *param_5,
                    undefined8 param_6)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong **ppuVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 extraout_w8;
  int extraout_w8_00;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 unaff_x30;
  uint uStack_8c;
  ulong *puStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  ulong *puStack_70;
  ulong auStack_68 [11];
  
  func_0x0054768c();
  uVar16 = (uint)param_4;
  uVar2 = uVar16 & 7 | 8;
  uVar3 = uVar16 >> 8 & 7 | 0x10;
  uVar15 = param_4 >> 8;
  puStack_88 = param_5;
  uStack_80 = param_6;
  puStack_70 = param_2;
  do {
    while( true ) {
      puVar9 = param_3;
      func_0x00538a04(param_3,&puStack_70);
      puVar10 = puStack_70;
      if (((ulong)puVar9 & 1) != 0) goto LAB_005404ec;
      bVar4 = (byte)*puStack_70;
      uStack_74 = (uint)(char)bVar4;
      puVar9 = (ulong *)(ulong)uStack_74;
      if (uVar2 == bVar4 || uVar3 == bVar4) break;
      func_0x00546484(puStack_70,&uStack_74);
      puVar9 = (ulong *)(ulong)uStack_74;
      puVar10 = puStack_70;
      if (uStack_74 == uVar2 || uStack_74 == uVar3) goto LAB_0054034c;
      if (puStack_70 == (ulong *)0x0) goto LAB_005404e8;
      if ((uStack_74 == 0) || ((uStack_74 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uStack_74 - 1;
        goto LAB_005404ec;
      }
      FUN_0054bac4(puVar9,0,puStack_70,param_3);
LAB_0054043c:
      puStack_70 = puVar9;
      if (puVar9 == (ulong *)0x0) goto LAB_005404e8;
    }
    puVar10 = (ulong *)((long)puStack_70 + 1);
LAB_0054034c:
    bVar8 = (uint)puVar9 != uVar2;
    uVar14 = uVar16;
    if (bVar8) {
      uVar14 = (uint)(param_4 >> 8);
    }
    uVar12 = 8;
    if (bVar8) {
      uVar12 = param_4 >> 0x20 & 0xffff;
    }
    puVar1 = (ulong *)(param_1 + uVar12);
    puStack_70 = puVar10;
    switch(uVar14 & 7) {
    default:
      FUN_00538888(puVar10,auStack_68);
      if (puVar10 == (ulong *)0x0) goto LAB_005404e8;
      uVar13 = uVar14 >> 3 & 7;
      puStack_70 = puVar10;
      if (uVar13 == 2) {
        uVar12 = auStack_68[0];
        if ((uVar14 & 0x40) != 0) {
          uVar12 = -(auStack_68[0] & 1) ^ auStack_68[0] >> 1;
        }
        *puVar1 = uVar12;
      }
      else if (uVar13 == 1) {
        uVar13 = (uint)auStack_68[0];
        if ((uVar14 & 0x40) != 0) {
          uVar13 = -(uVar13 & 1) ^ uVar13 >> 1;
        }
        *(uint *)puVar1 = uVar13;
      }
      else {
        *(bool *)puVar1 = auStack_68[0] != 0;
      }
      break;
    case 1:
      puStack_70 = puVar10 + 1;
      *puVar1 = *puVar10;
      break;
    case 2:
      if ((uVar14 & 0x38) != 0x18) {
        puVar9 = param_3;
        func_0x0054b6f4(param_3,puVar1);
        goto LAB_0054043c;
      }
      ppuVar11 = &puStack_70;
      FUN_00533034(ppuVar11);
      if ((puStack_70 == (ulong *)0x0) ||
         (puVar9 = param_3, FUN_00533074(param_3,puStack_70,ppuVar11,puVar1), puStack_70 = puVar9,
         puVar9 == (ulong *)0x0)) goto LAB_005404e8;
      if (((uVar14 >> 6 & 1) != 0) && ((uVar16 >> 0x12 & 1) != 0)) {
        uVar12 = (ulong)*(char *)((long)puVar1 + 0x17);
        puVar9 = puVar1;
        if ((long)uVar12 < 0) {
          puVar9 = (ulong *)*puVar1;
          uVar12 = puVar1[1];
        }
        FUN_00553b28(puVar9,uVar12);
        puVar10 = puStack_88;
        if (((ulong)puVar9 & 1) == 0) {
          func_0x0053b22c(puStack_88);
          func_0x0053b280(puVar10,uStack_80);
          func_0x005463d4();
          FUN_0054db4c();
LAB_005404e8:
          puVar10 = (ulong *)0x0;
LAB_005404ec:
          func_0x00546bf4(puVar10,unaff_x30);
          return puVar10;
        }
      }
      break;
    case 3:
    case 4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x540514);
      (*pcVar5)();
    case 5:
      *(uint *)puVar1 = (uint)*puVar10;
      puStack_70 = (ulong *)((long)puVar10 + 4);
      break;
    case 7:
      goto code_r0x00540588;
    }
  } while( true );
code_r0x00540588:
  do {
    FUN_00535a14();
    while( true ) {
      if (puVar9 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      puStack_88 = puVar9;
      func_0x00546464();
      if (((ulong)puVar9 & 1) != 0) {
        return puStack_88;
      }
      func_0x00546484(puStack_88,&uStack_8c);
      if (puStack_88 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      cVar6 = SBORROW4(uStack_8c,0xb);
      cVar7 = (int)(uStack_8c - 0xb) < 0;
      if (uStack_8c != 0xb) break;
      puVar10 = puStack_88;
      func_0x005467c0();
      *(undefined4 *)(uVar15 + 0x58) = extraout_w8;
      if (cVar7 != cVar6) {
        return (ulong *)0x0;
      }
      func_0x005460c4();
      puVar9 = (ulong *)(&UNK_00810d66 + param_4);
      FUN_00536490(puVar9,puVar10,param_3,&UNK_00810d6e,uVar15);
      func_0x00546054();
      if (extraout_w8_00 != 0xb) {
        return (ulong *)0x0;
      }
    }
    if ((uStack_8c == 0) || ((uStack_8c & 7) == 4)) {
      *(uint *)(uVar15 + 0x50) = uStack_8c - 1;
      return puStack_88;
    }
    puVar9 = (ulong *)(&UNK_00810d66 + param_4);
  } while( true );
}



/* Entry: 00540514; end: 0054060b;  */

ulong FUN_00540514(ulong param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 extraout_w8;
  int extraout_w8_00;
  undefined8 uVar6;
  uint uStack_4c;
  ulong uStack_48;
  
  uVar1 = *(ushort *)(param_5 + 2);
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  uVar4 = param_1;
  uStack_48 = param_2;
  do {
    func_0x00546464();
    if ((uVar4 & 1) != 0) {
      return uStack_48;
    }
    func_0x00546484(uStack_48,&uStack_4c);
    if (uStack_48 == 0) {
      return 0;
    }
    cVar2 = SBORROW4(uStack_4c,0xb);
    cVar3 = (int)(uStack_4c - 0xb) < 0;
    if (uStack_4c == 0xb) {
      uVar5 = uStack_48;
      func_0x005467c0();
      *(undefined4 *)(param_3 + 0x58) = extraout_w8;
      if (cVar3 != cVar2) {
        return 0;
      }
      func_0x005460c4();
      uVar4 = param_1 + uVar1;
      FUN_00536490(uVar4,uVar5,uVar6,param_1 + 8,param_3);
      func_0x00546054();
      if (extraout_w8_00 != 0xb) {
        return 0;
      }
    }
    else {
      if ((uStack_4c == 0) || ((uStack_4c & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uStack_4c - 1;
        return uStack_48;
      }
      uVar4 = param_1 + uVar1;
      FUN_00535a14();
    }
    uStack_48 = uVar4;
    if (uVar4 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 0054060c; end: 0054062b;  */

void FUN_0054060c(void)

{
  func_0x00546f30();
  func_0x00546f20();
  return;
}



/* Entry: 0054062c; end: 0054068b;  */

ulong FUN_0054062c(undefined8 param_1,ulong param_2,long param_3,ulong param_4,short *param_5)

{
  uint uVar1;
  long extraout_x8;
  undefined8 uStack_18;
  
  if (*param_5 != 0) {
    func_0x0054724c();
    param_3 = extraout_x8;
  }
  uVar1 = (uint)param_4;
  if ((uVar1 != 0) && ((uVar1 & 7) != 4)) {
    uStack_18 = 0;
    param_4 = param_4 & 0xffffffff;
    FUN_0054baec(param_4,&uStack_18);
    return param_4;
  }
  *(uint *)(param_3 + 0x50) = uVar1 - 1;
  return param_2;
}



/* Entry: 0054068c; end: 005406cf;  */

/* WARNING: Possible PIC construction at 0x0054b780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0054b784) */

void FUN_0054068c(long param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  uVar2 = (ulong)(uint)(param_2 << 3);
  while( true ) {
    if (uVar2 < 0x80) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar1,(int)(char)uVar2 | 0xffffff80);
    uVar2 = uVar2 >> 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00779be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_00998a00)
            (puVar1);
  return;
}



/* Entry: 005406d0; end: 00540723;  */

void FUN_005406d0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  func_0x0054b798(param_2 << 3 | 2,puVar1);
  func_0x0054b798(param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
            (puVar1,param_3,param_4);
  return;
}



/* Entry: 00540724; end: 005408db;  */

code * FUN_00540724(code *param_1,code *param_2,undefined8 *param_3,code *param_4,ushort *param_5,
                   uint param_6)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  code *pcVar15;
  ushort *puVar16;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  int extraout_w8;
  int extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  ulong uVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar18;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar19;
  ulong extraout_x9_03;
  long extraout_x9_04;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  long extraout_x11_03;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint uVar20;
  int iVar21;
  code *unaff_x20;
  code *unaff_x21;
  int iVar22;
  undefined8 *unaff_x22;
  code *pcVar23;
  uint unaff_w23;
  uint uVar24;
  undefined8 uVar25;
  code *UNRECOVERED_JUMPTABLE_02;
  uint *unaff_x27;
  uint unaff_w28;
  code *unaff_x30;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ushort *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  ushort *puStack_a0;
  code *pcStack_98;
  undefined4 auStack_80 [2];
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_58;
  code *pcStack_48;
  code *pcStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  undefined1 auStack_10 [8];
  code *pcStack_8;
  
  func_0x00546728();
  UNRECOVERED_JUMPTABLE_02 = unaff_x30;
  func_0x00546494();
  func_0x00546d70();
  if ((bool)in_ZR) {
    func_0x005464dc();
    pcVar23 = param_4;
    func_0x0054638c();
    func_0x00546398();
    puVar16 = param_5;
    while( true ) {
      func_0x00546728();
      UNRECOVERED_JUMPTABLE_02 = unaff_x30;
      func_0x00546878();
      if (((ulong)pcVar23 & 7) == 0) break;
      if (((uint)pcVar23 & 7) != 2) {
        UNRECOVERED_JUMPTABLE_02 = *(code **)(unaff_x21 + 0x30);
        func_0x00547518();
        func_0x005464c0();
        goto LAB_00545804;
      }
      UNRECOVERED_JUMPTABLE_02 = param_1;
      UNRECOVERED_JUMPTABLE_01 = param_2;
      func_0x00547518();
      puVar13 = param_3;
      pcVar15 = pcVar23;
      func_0x005464c0();
      func_0x00546398();
      pcVar11 = (code *)auStack_10;
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_02;
      puVar12 = puVar13;
      pcStack_48 = param_2;
      pcStack_40 = param_4;
      puStack_38 = param_3;
      pcStack_30 = pcVar23;
      pcStack_28 = unaff_x21;
      pcStack_20 = param_1;
      pcStack_8 = unaff_x30;
      func_0x00545e60();
      uVar17 = (ulong)pcVar15 & 7;
      cVar7 = SBORROW8(uVar17,2);
      cVar8 = (long)(uVar17 - 2) < 0;
      uVar9 = uVar17 == 2;
      if ((bool)uVar9) {
        puVar1 = (uint *)((long)puVar16 + ((ulong)pcVar15 >> 0x20));
        uVar3 = *(ushort *)((long)puVar1 + 10);
        uVar17 = (ulong)*puVar16;
        if (uVar17 != 0) {
          *(uint *)(UNRECOVERED_JUMPTABLE_02 + uVar17) =
               *(uint *)(UNRECOVERED_JUMPTABLE_02 + uVar17) | param_6;
        }
        uVar20 = uVar3 >> 6 & 7;
        uStack_58 = extraout_x8;
        if ((uVar3 >> 6 & 7) == 0) {
          pcVar23 = (code *)(ulong)*puVar1;
          func_0x00546458();
          func_0x00546fe8();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar14 = pcVar15;
          param_5 = puVar16;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          goto LAB_005409f4;
        }
        cVar7 = SBORROW4(uVar20,2);
        cVar8 = (int)(uVar20 - 2) < 0;
        uVar9 = uVar20 == 2;
        if (!(bool)uVar9) {
          pcVar23 = (code *)(ulong)*puVar1;
          if ((uVar3 & 0x600) == 0) {
            func_0x00546458();
            func_0x00546fe8();
            pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
            pcVar14 = pcVar15;
            param_5 = puVar16;
            if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
            goto LAB_00540a84;
          }
          func_0x00546458();
          func_0x00546fe8();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar14 = pcVar15;
          param_5 = puVar16;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          goto LAB_00540a40;
        }
        switch(uVar3 & 0x600) {
        default:
          func_0x00546458();
          pcVar14 = pcVar15;
          param_5 = puVar16;
          UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_00;
          if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
          goto code_r0x00540978;
        case 0x200:
        case 0x220:
        case 0x240:
        case 0x260:
        case 0x280:
        case 0x2a0:
        case 0x2c0:
        case 0x2e0:
        case 0x300:
        case 800:
        case 0x340:
        case 0x360:
        case 0x380:
        case 0x3a0:
        case 0x3c0:
        case 0x3e0:
          func_0x00546458();
          pcVar14 = pcVar15;
          param_5 = puVar16;
          UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_00;
          if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
          goto code_r0x00540b8c;
        case 0x400:
        case 0x420:
        case 0x440:
        case 0x460:
        case 0x480:
        case 0x4a0:
        case 0x4c0:
        case 0x4e0:
        case 0x500:
        case 0x520:
        case 0x540:
        case 0x560:
        case 0x580:
        case 0x5a0:
        case 0x5c0:
        case 0x5e0:
          func_0x00546b3c();
          pcStack_b0 = *(code **)(extraout_x9 + extraout_x8_00 * 8);
          pcVar14 = pcVar15;
          param_5 = puVar16;
          func_0x0054648c();
          func_0x00547134();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcStack_b8 = UNRECOVERED_JUMPTABLE_01;
          pcStack_a8 = UNRECOVERED_JUMPTABLE_02;
          puStack_a0 = puVar16;
          pcStack_98 = pcVar15;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          goto code_r0x00540ae0;
        case 0x600:
        case 0x620:
        case 0x640:
        case 0x660:
        case 0x680:
        case 0x6a0:
        case 0x6c0:
        case 0x6e0:
        case 0x700:
        case 0x720:
        case 0x740:
        case 0x760:
        case 0x780:
        case 0x7a0:
        case 0x7c0:
        case 0x7e0:
          goto code_r0x00540b1c;
        }
      }
      func_0x005459dc(extraout_x8);
      uVar6 = uVar9;
      if (!(bool)uVar9) goto LAB_00540d4c;
      func_0x0054660c();
      param_1 = UNRECOVERED_JUMPTABLE_00;
      param_2 = UNRECOVERED_JUMPTABLE_01;
      param_3 = puVar12;
      pcVar23 = pcVar15;
      unaff_x21 = pcStack_28;
      param_4 = pcStack_40;
      unaff_x30 = pcStack_8;
    }
    pcVar11 = unaff_x21 + ((ulong)pcVar23 >> 0x20);
    uVar3 = *(ushort *)(pcVar11 + 10);
    uVar4 = uVar3 >> 6 & 7;
    if (uVar4 == 0) {
      uVar20 = *(uint *)pcVar11;
      UNRECOVERED_JUMPTABLE_02 = param_1;
      do {
        pcVar11 = UNRECOVERED_JUMPTABLE_02;
        func_0x005461d0();
        if (pcVar11 == (code *)0x0) goto LAB_00542f48;
        uVar6 = 1;
        uVar9 = CONCAT44(in_stack_0000000c,in_stack_00000008) == 0;
        UNRECOVERED_JUMPTABLE_02 = param_1 + uVar20;
        FUN_00534404(UNRECOVERED_JUMPTABLE_02,!(bool)uVar9);
        func_0x00546da8();
        if ((bool)uVar6) break;
        func_0x00545e18();
        if (UNRECOVERED_JUMPTABLE_02 == (code *)0x0) goto LAB_00542f48;
        func_0x005463b4();
      } while ((bool)uVar9);
    }
    else {
      uVar6 = 1 < uVar4;
      uVar9 = uVar4 == 2;
      if ((bool)uVar9) {
        switch(uVar3 & 0x600) {
        default:
          uVar9 = 1;
          do {
            pcVar11 = param_1;
            uVar6 = 1;
            func_0x005461d0();
            if (pcVar11 == (code *)0x0) goto LAB_00542f48;
            param_1 = pcVar11;
            func_0x00546fc4();
            func_0x00546da8();
            if ((bool)uVar9) break;
            func_0x00545e18();
            if (param_1 == (code *)0x0) goto LAB_00542f48;
            func_0x005463b4();
          } while ((bool)uVar6);
          break;
        case 0x200:
        case 0x220:
        case 0x240:
        case 0x260:
        case 0x280:
        case 0x2a0:
        case 0x2c0:
        case 0x2e0:
        case 0x300:
        case 800:
        case 0x340:
        case 0x360:
        case 0x380:
        case 0x3a0:
        case 0x3c0:
        case 0x3e0:
          uVar9 = 1;
          do {
            pcVar11 = param_1;
            uVar6 = 1;
            func_0x005461d0();
            if (pcVar11 == (code *)0x0) goto LAB_00542f48;
            param_1 = pcVar11;
            func_0x00546aac();
            func_0x00546fc4();
            func_0x00546da8();
            if ((bool)uVar9) break;
            func_0x00545e18();
            if (param_1 == (code *)0x0) goto LAB_00542f48;
            func_0x005463b4();
          } while ((bool)uVar6);
          break;
        case 0x400:
        case 0x420:
        case 0x440:
        case 0x460:
        case 0x480:
        case 0x4a0:
        case 0x4c0:
        case 0x4e0:
        case 0x500:
        case 0x520:
        case 0x540:
        case 0x560:
        case 0x580:
        case 0x5a0:
        case 0x5c0:
        case 0x5e0:
          func_0x00547610();
          do {
            pcVar11 = param_1;
            uVar10 = uVar9;
            func_0x005461d0();
            if (pcVar11 == (code *)0x0) goto LAB_00542f48;
            param_1 = pcVar11;
            func_0x0054675c();
            if ((bool)uVar6) {
              func_0x00546a04();
              if ((bool)uVar6) {
                func_0x005469f0();
                uVar17 = extraout_x8_03;
                uVar19 = extraout_x9_02;
                do {
                  uVar6 = uVar19 <= uVar17;
                  cVar7 = SBORROW8(uVar17,uVar19);
                  cVar8 = (long)(uVar17 - uVar19) < 0;
                  uVar10 = uVar17 == uVar19;
                  if ((bool)uVar6) goto code_r0x00542f54;
                  func_0x00547068();
                  lVar18 = extraout_x11_03;
                  if ((bool)uVar10 || cVar8 != cVar7) {
                    lVar18 = extraout_x11_03 + 1;
                  }
                  uVar17 = lVar18 + extraout_x8_04 * 2;
                  uVar19 = extraout_x9_03;
                } while (!(bool)uVar10);
              }
              else {
                func_0x00547098();
                if ((extraout_x8_02 & 1) == 0) goto code_r0x00542f54;
              }
            }
            func_0x00546fc4();
            func_0x00546da8();
            if ((bool)uVar6) break;
            func_0x00545e18();
            if (param_1 == (code *)0x0) goto LAB_00542f48;
            func_0x005463b4();
            uVar9 = 1;
          } while ((bool)uVar10);
          break;
        case 0x600:
        case 0x620:
        case 0x640:
        case 0x660:
        case 0x680:
        case 0x6a0:
        case 0x6c0:
        case 0x6e0:
        case 0x700:
        case 0x720:
        case 0x740:
        case 0x760:
        case 0x780:
        case 0x7a0:
        case 0x7c0:
        case 0x7e0:
          func_0x00547610();
          func_0x005470c8(*(undefined8 *)(extraout_x9_04 + extraout_x8_05 * 8));
          UNRECOVERED_JUMPTABLE_00 = param_1;
          do {
            param_1 = UNRECOVERED_JUMPTABLE_00;
            func_0x005461d0();
            if (param_1 == (code *)0x0) goto LAB_00542f48;
            param_2 = (code *)(ulong)in_stack_00000008;
            iVar21 = (int)unaff_x27;
            uVar6 = iVar21 <= (int)in_stack_00000008 && in_stack_00000008 <= unaff_w28;
            uVar9 = (int)in_stack_00000008 < iVar21 || unaff_w28 == in_stack_00000008;
            if ((int)in_stack_00000008 < iVar21 || (int)unaff_w28 <= (int)in_stack_00000008)
            goto code_r0x00542f54;
            UNRECOVERED_JUMPTABLE_00 = param_1;
            func_0x00546fc4();
            func_0x00546da8();
            pcVar11 = param_1;
            if ((bool)uVar6) break;
            func_0x00545e18();
            if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00542f48;
            func_0x005463b4();
          } while ((bool)uVar9);
        }
      }
      else if ((uVar3 & 0x600) == 0) {
        uVar20 = *(uint *)pcVar11;
        UNRECOVERED_JUMPTABLE_02 = param_1;
        do {
          pcVar11 = UNRECOVERED_JUMPTABLE_02;
          uVar10 = uVar9;
          func_0x005461d0();
          if (pcVar11 == (code *)0x0) goto LAB_00542f48;
          UNRECOVERED_JUMPTABLE_02 = param_1 + uVar20;
          FUN_00534008(UNRECOVERED_JUMPTABLE_02,CONCAT44(in_stack_0000000c,in_stack_00000008));
          func_0x00546da8();
          if ((bool)uVar6) break;
          func_0x00545e18();
          if (UNRECOVERED_JUMPTABLE_02 == (code *)0x0) goto LAB_00542f48;
          func_0x005463b4();
          uVar9 = true;
        } while ((bool)uVar10);
      }
      else {
        uVar20 = *(uint *)pcVar11;
        UNRECOVERED_JUMPTABLE_02 = param_1;
        do {
          pcVar11 = UNRECOVERED_JUMPTABLE_02;
          uVar10 = uVar9;
          func_0x005461d0();
          if (pcVar11 == (code *)0x0) goto LAB_00542f48;
          func_0x00546564();
          UNRECOVERED_JUMPTABLE_02 = param_1 + uVar20;
          FUN_00534008();
          func_0x00546da8();
          if ((bool)uVar6) break;
          func_0x00545e18();
          if (UNRECOVERED_JUMPTABLE_02 == (code *)0x0) goto LAB_00542f48;
          func_0x005463b4();
          uVar9 = true;
        } while ((bool)uVar10);
      }
    }
    if (*(short *)unaff_x21 == 0) {
      return pcVar11;
    }
    func_0x005463c4();
    return pcVar11;
  }
  if (((ulong)param_4 & 7) != 0) {
    UNRECOVERED_JUMPTABLE_02 = *(code **)(unaff_x20 + 0x30);
    func_0x005464dc();
    goto LAB_0054077c;
  }
  func_0x00547350();
  if (param_1 == (code *)0x0) {
    func_0x00545da0();
    goto LAB_0053b2b8;
  }
  pcVar23 = (code *)CONCAT44(in_stack_0000000c,in_stack_00000008);
  uVar20 = unaff_w23 & 0x1c0;
  pcVar11 = param_1;
  if (uVar20 == 0xc0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)(-((ulong)in_stack_00000008 & 1) ^ (ulong)pcVar23 >> 1);
LAB_005407b4:
    if ((unaff_w23 & 0x600) == 0x200) {
      pcVar23 = UNRECOVERED_JUMPTABLE_00;
    }
  }
  else {
    uVar6 = 0x7f < uVar20;
    bVar5 = uVar20 == 0x80;
    if (!bVar5) goto LAB_00540800;
    if ((unaff_w23 >> 10 & 1) == 0) {
      UNRECOVERED_JUMPTABLE_00 =
           (code *)(long)(int)(-(in_stack_00000008 & 1) ^ in_stack_00000008 >> 1);
      goto LAB_005407b4;
    }
    func_0x00547234();
    if (bVar5) {
      func_0x00546774();
      uVar6 = extraout_w8 <= (int)in_stack_00000008 && in_stack_00000008 <= extraout_w9;
      pcVar11 = extraout_x11_00;
      uVar20 = extraout_w12_00;
      if ((int)in_stack_00000008 < extraout_w8 || (int)extraout_w9 <= (int)in_stack_00000008) {
LAB_005408c8:
        func_0x005464dc();
        func_0x0054638c();
        pcVar23 = param_4;
        goto FUN_0053df24;
      }
    }
    else {
      param_1 = pcVar23;
      func_0x0053ace8();
      pcVar11 = extraout_x11;
      uVar20 = extraout_w12;
      if (((ulong)param_1 & 1) == 0) goto LAB_005408c8;
    }
  }
LAB_00540800:
  if (unaff_w28 == 0x30) {
    param_1 = unaff_x20;
    FUN_0053fe0c();
  }
  else if (unaff_w28 == 0x10) {
    func_0x00545d1c(unaff_x27[1]);
    pcVar11 = extraout_x11_01;
    uVar20 = extraout_w12_01;
  }
  if (uVar20 == 0xc0) {
    *(code **)(unaff_x21 + *unaff_x27) = pcVar23;
  }
  else if (uVar20 == 0x80) {
    *(int *)(unaff_x21 + *unaff_x27) = (int)pcVar23;
  }
  else {
    unaff_x21[*unaff_x27] = (code)(pcVar23 != (code *)0x0);
  }
  if ((code *)*unaff_x22 <= pcVar11) {
    if (*(short *)unaff_x20 != 0) {
      func_0x00545d80();
      pcVar11 = extraout_x11_02;
    }
    return pcVar11;
  }
  func_0x00545754(*(undefined2 *)pcVar11);
LAB_0054077c:
  func_0x0054638c();
LAB_00545804:
                    /* WARNING: Could not recover jumptable at 0x0054581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_02)();
  return param_1;
code_r0x00542f54:
  func_0x00547518();
  func_0x005464c0();
  param_5 = puVar16;
FUN_0053df24:
  uVar25 = in_stack_00000058;
  puVar16 = in_stack_00000048;
  func_0x00546878();
  FUN_00538888(param_2,&stack0x00000028);
  if (param_2 != (code *)0x0) {
    FUN_0053dee0(param_1,*(undefined8 *)(puVar16 + 0x18),pcVar23,in_stack_00000028);
    func_0x0054686c();
    if ((bool)uVar6) {
      uVar17 = (ulong)*puVar16;
      if (uVar17 != 0) {
        *(uint *)(param_1 + uVar17) = *(uint *)(param_1 + uVar17) | (uint)uVar25;
      }
      return param_2;
    }
    func_0x00545a70(*(undefined2 *)param_2);
    func_0x005464c0(param_1,param_2,param_3);
LAB_00546444:
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return param_1;
  }
  func_0x005461dc();
  goto LAB_0053b2b8;
LAB_00542f48:
  func_0x005461dc();
  param_5 = puVar16;
  goto LAB_0053b2b8;
LAB_005409f4:
  func_0x00546554();
  if ((bool)uVar9 || cVar8 != cVar7) goto LAB_00540bcc;
  func_0x00543168();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00545eb4();
  if ((bool)uVar9 || cVar8 != cVar7) {
    func_0x00545900();
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
    func_0x00546528();
    func_0x00543168();
    goto LAB_00540c40;
  }
  func_0x005464b4();
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (cVar8 != cVar7) goto LAB_00540d18;
  func_0x00546414();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00546134();
  goto LAB_005409f4;
LAB_00540bcc:
  func_0x00547108();
  func_0x00543168();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_02;
  goto LAB_00540c90;
code_r0x00540b1c:
  func_0x00546b3c();
  pcStack_b0 = *(code **)(extraout_x9_00 + extraout_x8_01 * 8);
  pcVar14 = pcVar15;
  param_5 = puVar16;
  func_0x0054648c();
  func_0x00547134();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcStack_b8 = UNRECOVERED_JUMPTABLE_01;
  pcStack_a8 = UNRECOVERED_JUMPTABLE_02;
  puStack_a0 = puVar16;
  pcStack_98 = pcVar15;
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    while (func_0x005461ec(), !(bool)uVar9 && cVar8 == cVar7) {
      func_0x0054310c();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
      func_0x00545c10();
      if ((bool)uVar9 || cVar8 != cVar7) {
        func_0x00545db0();
        func_0x00545738();
        if (pcStack_d0 != (code *)0x0) goto code_r0x00540d68;
        func_0x0054606c();
        func_0x0054310c();
        goto code_r0x00540ccc;
      }
      func_0x005464b4();
      if (cVar8 != cVar7) goto LAB_00540d18;
      func_0x00546414();
      if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
      func_0x0054620c();
      UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
      pcStack_b8 = pcStack_d0;
    }
    func_0x00546784();
    func_0x0054310c();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_02;
    goto LAB_00540c90;
  }
  goto LAB_00540d1c;
code_r0x00540ae0:
  func_0x005461ec();
  if (!(bool)uVar9 && cVar8 == cVar7) {
    func_0x0054307c();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
    func_0x00545c10();
    if (!(bool)uVar9 && cVar8 == cVar7) {
      func_0x005464b4();
      if (cVar8 == cVar7) {
        func_0x00546414();
        if (pcStack_d0 != (code *)0x0) goto code_r0x00540b10;
        goto LAB_00540d1c;
      }
      goto LAB_00540d18;
    }
    func_0x00545db0();
    func_0x00545738();
    if (pcStack_d0 == (code *)0x0) {
      func_0x0054606c();
      func_0x0054307c();
code_r0x00540ccc:
      uVar9 = pcStack_d0 == UNRECOVERED_JUMPTABLE_02;
      pcStack_a8 = UNRECOVERED_JUMPTABLE_02;
      if (!(bool)uVar9) goto LAB_00540d18;
      func_0x00546fb8();
      goto LAB_00540d1c;
    }
    goto code_r0x00540d68;
  }
  goto code_r0x00540c54;
code_r0x00540b10:
  func_0x0054620c();
  UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
  pcStack_b8 = pcStack_d0;
  goto code_r0x00540ae0;
code_r0x00540c54:
  func_0x00546784();
  func_0x0054307c();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_02;
  goto LAB_00540c90;
code_r0x00540b8c:
  pcVar23 = (code *)(puVar13[1] - (long)pcStack_d0);
  iVar21 = (int)UNRECOVERED_JUMPTABLE_00;
  iVar22 = (int)pcVar23;
  cVar7 = SBORROW4(iVar21,iVar22);
  cVar8 = iVar21 - iVar22 < 0;
  uVar9 = iVar21 == iVar22;
  if (iVar21 <= iVar22) goto code_r0x00540c80;
  func_0x00543034();
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
  func_0x005471ec();
  if ((bool)uVar9 || cVar8 != cVar7) {
    func_0x00545b88();
    auStack_80[0] = (int)param_4;
    func_0x00545994();
    if (pcStack_d0 != (code *)0x0) goto LAB_00540d50;
    func_0x005471bc();
    func_0x00543034();
    goto code_r0x00540d10;
  }
  func_0x005464b4();
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (cVar8 != cVar7) goto LAB_00540d18;
  func_0x00546414();
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
  func_0x005475d0();
  goto code_r0x00540b8c;
code_r0x00540c80:
  func_0x00543034();
  pcVar14 = pcVar15;
  param_5 = puVar16;
  goto LAB_00540c90;
code_r0x00540978:
  pcVar23 = (code *)(puVar13[1] - (long)pcStack_d0);
  iVar21 = (int)UNRECOVERED_JUMPTABLE_00;
  iVar22 = (int)pcVar23;
  cVar7 = SBORROW4(iVar21,iVar22);
  cVar8 = iVar21 - iVar22 < 0;
  uVar9 = iVar21 == iVar22;
  if (iVar22 < iVar21) {
    func_0x00542ff4();
    pcVar14 = pcVar15;
    param_5 = puVar16;
    if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
    func_0x005471ec();
    if (!(bool)uVar9 && cVar8 == cVar7) {
      func_0x005464b4();
      pcVar14 = pcVar15;
      param_5 = puVar16;
      if (cVar8 == cVar7) {
        func_0x00546414();
        pcVar14 = pcVar15;
        param_5 = puVar16;
        if (pcStack_d0 != (code *)0x0) goto code_r0x005409b0;
        goto LAB_00540d1c;
      }
      goto LAB_00540d18;
    }
    func_0x00545b88();
    auStack_80[0] = (int)param_4;
    func_0x00545994();
    if (pcStack_d0 == (code *)0x0) {
      func_0x005471bc();
      func_0x00542ff4();
code_r0x00540d10:
      uVar9 = pcStack_d0 == UNRECOVERED_JUMPTABLE_00;
      pcVar14 = pcVar15;
      param_5 = puVar16;
      UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_00;
      if (!(bool)uVar9) goto LAB_00540d18;
      func_0x00546884();
      pcVar14 = pcVar15;
      param_5 = puVar16;
      goto LAB_00540d1c;
    }
    goto LAB_00540d50;
  }
  func_0x00542ff4();
  pcVar14 = pcVar15;
  param_5 = puVar16;
  goto LAB_00540c90;
code_r0x005409b0:
  func_0x005475d0();
  goto code_r0x00540978;
LAB_00540a40:
  func_0x00546554();
  if ((bool)uVar9 || cVar8 != cVar7) goto LAB_00540bf4;
  func_0x00542fac();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00545eb4();
  if ((bool)uVar9 || cVar8 != cVar7) {
    func_0x00545900();
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
    func_0x00546528();
    func_0x00542fac();
    goto LAB_00540c40;
  }
  func_0x005464b4();
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (cVar8 != cVar7) goto LAB_00540d18;
  func_0x00546414();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00546134();
  goto LAB_00540a40;
LAB_00540bf4:
  func_0x00547108();
  func_0x00542fac();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_02;
  goto LAB_00540c90;
LAB_00540a84:
  func_0x00546554();
  if ((bool)uVar9 || cVar8 != cVar7) goto LAB_00540c1c;
  func_0x00542f6c();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00545eb4();
  if (!(bool)uVar9 && cVar8 == cVar7) {
    func_0x005464b4();
    pcVar14 = pcVar15;
    param_5 = puVar16;
    if (cVar8 == cVar7) {
      func_0x00546414();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar14 = pcVar15;
      param_5 = puVar16;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto code_r0x00540ab4;
      goto LAB_00540d1c;
    }
    goto LAB_00540d18;
  }
  func_0x00545900();
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
  func_0x00546528();
  func_0x00542f6c();
LAB_00540c40:
  uVar9 = UNRECOVERED_JUMPTABLE_00 == unaff_x21;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  if ((bool)uVar9) {
    pcStack_d0 = param_2 + puVar13[1];
    goto LAB_00540d1c;
  }
LAB_00540d18:
  pcStack_d0 = (code *)0x0;
  goto LAB_00540d1c;
code_r0x00540ab4:
  func_0x00546134();
  goto LAB_00540a84;
LAB_005432e4:
  func_0x00545da0();
LAB_0053b2b8:
  if (*param_5 != 0) {
    func_0x0054717c();
  }
  return (code *)0x0;
LAB_00540c1c:
  func_0x00547108();
  func_0x00542f6c();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar14 = pcVar15;
  param_5 = puVar16;
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_02;
LAB_00540c90:
  func_0x00546670();
  UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_00;
LAB_00540d1c:
  func_0x005459dc(uStack_58);
  uVar6 = 0;
  pcVar15 = pcVar14;
  puVar16 = param_5;
  if ((bool)uVar9) {
    return pcStack_d0;
  }
LAB_00540d4c:
  uVar9 = uVar6;
  ___stack_chk_fail();
LAB_00540d50:
  func_0x00533528();
  func_0x00545ac8();
  func_0x005464a0(auStack_80);
  pcStack_d0 = (code *)auStack_80;
  FUN_005558a0(pcStack_d0);
  pcVar14 = pcVar15;
  param_5 = puVar16;
code_r0x00540d68:
  func_0x00533528();
  func_0x00545820();
  func_0x00546618();
  UNRECOVERED_JUMPTABLE_01 = (code *)0x540d74;
  func_0x0054725c();
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_01;
  func_0x00546494();
  func_0x00546db4();
  if (!(bool)uVar9) {
    uVar20 = extraout_w9_00 & 0x1c0;
    uVar24 = (uint)pcVar14 & 7;
    if (uVar20 == 0xc0) {
      if (uVar24 == 1) {
LAB_00540de4:
        if (extraout_w8_00 == 0x30) {
          func_0x00546ce4();
        }
        else if (extraout_w8_00 == 0x10) {
          func_0x00545f08(*(uint *)(param_4 + 4));
          *(uint *)(pcVar23 + extraout_x9_01) = extraout_w8_01 | *(uint *)(pcVar23 + extraout_x9_01)
          ;
        }
        bVar5 = 0xbf < uVar20;
        if (uVar20 == 0xc0) {
          *(undefined8 *)(pcVar23 + *(uint *)param_4) = *param_3;
          lVar18 = 8;
        }
        else {
          *(undefined4 *)(pcVar23 + *(uint *)param_4) = *(undefined4 *)param_3;
          lVar18 = 4;
        }
        pcVar11 = (code *)((long)param_3 + lVar18);
        func_0x00546c54();
        if (bVar5) {
          if (*(short *)UNRECOVERED_JUMPTABLE_02 != 0) {
            func_0x00546518();
          }
          return pcVar11;
        }
        func_0x00545774(*(undefined2 *)pcVar11);
        goto LAB_00540e50;
      }
    }
    else if (uVar24 == 5) goto LAB_00540de4;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_02 + 0x30);
    func_0x00547158();
    pcVar23 = pcStack_d0;
LAB_00540e50:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return pcVar23;
  }
  func_0x00547158();
  func_0x0054638c();
  while( true ) {
    func_0x00546b54();
    pcStack_30 = pcVar11;
    pcStack_28 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546494();
    func_0x00547524();
    func_0x005467cc();
    uVar24 = (uint)pcStack_b8;
    uVar20 = uVar24 & 7;
    uVar9 = uVar20 == 2;
    if (!(bool)uVar9) break;
    func_0x00546588();
    func_0x00546e28();
    func_0x0054638c();
    pcVar11 = pcStack_30;
    UNRECOVERED_JUMPTABLE_01 = pcStack_28;
    func_0x005467d8();
    UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar9) {
      puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcVar14 >> 0x20));
      uVar3 = *(ushort *)((long)puVar1 + 10);
      func_0x00546648();
      param_1 = pcStack_b0;
      if ((uVar3 & 0x1c0) == 0xc0) {
        FUN_00543378();
      }
      else {
        FUN_00543490(pcStack_b0,pcStack_c8,pcStack_d0,pcStack_a8 + *puVar1);
      }
      if (param_1 == (code *)0x0) {
        func_0x00545da0();
        goto LAB_0053b2b8;
      }
      if (*(code **)pcStack_b0 <= param_1) {
        if (*puStack_a0 == 0) {
          return param_1;
        }
        func_0x00545d80();
        return param_1;
      }
      func_0x00545754(*(undefined2 *)param_1);
      func_0x00545d70();
      goto LAB_00546444;
    }
    pcStack_d0 = pcStack_a8;
    func_0x00545d70(pcStack_a8);
  }
  puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcStack_b8 >> 0x20));
  if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
    uVar9 = ((ulong)pcStack_b8 & 7) != 0;
    if (uVar20 != 1) {
LAB_005432ac:
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puStack_a0 + 0x18);
      func_0x00546588();
      func_0x00546e28();
      goto LAB_005432b8;
    }
    uVar20 = *puVar1;
    do {
      UNRECOVERED_JUMPTABLE_02 = pcStack_c8 + 8;
      uVar25 = *(undefined8 *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar20;
      FUN_005432f0();
      *(undefined8 *)pcStack_d0 = uVar25;
      func_0x00546e00();
      if ((bool)uVar9) goto LAB_005432c4;
      func_0x00546090();
      if (pcStack_d0 == (code *)0x0) goto LAB_005432e4;
      uVar9 = uVar24 <= uStack_74;
      pcStack_c8 = pcStack_d0;
    } while (uStack_74 == uVar24);
  }
  else {
    if (uVar20 != 5) goto LAB_005432ac;
    uVar20 = *puVar1;
    uVar9 = true;
    do {
      UNRECOVERED_JUMPTABLE_02 = pcStack_c8 + 4;
      uVar2 = *(uint *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar20;
      func_0x00543334();
      *(uint *)pcStack_d0 = uVar2;
      func_0x00546e00();
      if ((bool)uVar9) goto LAB_005432c4;
      func_0x00546090();
      if (pcStack_d0 == (code *)0x0) goto LAB_005432e4;
      uVar9 = uVar24 <= uStack_78;
      pcStack_c8 = pcStack_d0;
    } while (uStack_78 == uVar24);
  }
  func_0x00546988();
  if ((bool)uVar9) {
LAB_005432c4:
    uVar3 = *puStack_a0;
    if (uVar3 != 0) {
      *(uint *)(pcStack_a8 + uVar3) = *(uint *)(pcStack_a8 + (uint)uVar3) | (uint)pcStack_98;
    }
    return UNRECOVERED_JUMPTABLE_02;
  }
  func_0x00545754(*(undefined2 *)UNRECOVERED_JUMPTABLE_02);
  func_0x005466ec();
LAB_005432b8:
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_01)();
  return pcStack_d0;
}



/* Entry: 005408dc; end: 00540e77;  */

code * FUN_005408dc(code *param_1,code *param_2,undefined8 *param_3,code *param_4,ushort *param_5,
                   uint param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE_02;
  int extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  ulong uVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  uint extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar17;
  ulong extraout_x9_03;
  long extraout_x9_04;
  long extraout_x11;
  int iVar18;
  code *unaff_x20;
  code *unaff_x21;
  int iVar19;
  code *unaff_x22;
  uint uVar20;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  undefined8 uVar21;
  code *unaff_x25;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_w27;
  uint unaff_w28;
  undefined8 unaff_x29;
  code *unaff_x30;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ushort *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  code *in_stack_00000068;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  ushort *puStack_a0;
  code *pcStack_98;
  undefined4 auStack_80 [2];
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_58;
  code *pcStack_48;
  uint *puStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  undefined8 uStack_10;
  code *pcStack_8;
  
  while( true ) {
    UNRECOVERED_JUMPTABLE_01 = param_4;
    pcVar12 = param_2;
    UNRECOVERED_JUMPTABLE = (code *)&uStack_10;
    UNRECOVERED_JUMPTABLE_00 = param_1;
    puVar13 = param_3;
    pcStack_48 = unaff_x25;
    puStack_40 = unaff_x24;
    puStack_38 = unaff_x23;
    pcStack_30 = unaff_x22;
    pcStack_28 = unaff_x21;
    pcStack_20 = unaff_x20;
    uStack_10 = unaff_x29;
    pcStack_8 = unaff_x30;
    func_0x00545e60();
    uVar15 = (ulong)UNRECOVERED_JUMPTABLE_01 & 7;
    cVar8 = SBORROW8(uVar15,2);
    cVar9 = (long)(uVar15 - 2) < 0;
    uVar10 = uVar15 == 2;
    if ((bool)uVar10) break;
    func_0x005459dc(extraout_x8);
    uVar7 = uVar10;
    if (!(bool)uVar10) goto LAB_00540d4c;
    func_0x0054660c();
    uVar21 = uStack_10;
    unaff_x21 = pcStack_28;
    func_0x00546728();
    in_stack_00000060 = uVar21;
    in_stack_00000068 = pcStack_8;
    func_0x00546878();
    if (((ulong)UNRECOVERED_JUMPTABLE_01 & 7) == 0) {
      UNRECOVERED_JUMPTABLE = unaff_x21 + ((ulong)UNRECOVERED_JUMPTABLE_01 >> 0x20);
      uVar3 = *(ushort *)(UNRECOVERED_JUMPTABLE + 10);
      uVar5 = uVar3 >> 6 & 7;
      if (uVar5 == 0) {
        uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        goto LAB_00542d94;
      }
      uVar7 = 1 < uVar5;
      uVar10 = uVar5 == 2;
      if (!(bool)uVar10) {
        if ((uVar3 & 0x600) == 0) {
          uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
          uVar10 = 0;
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
          goto LAB_00542e10;
        }
        uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
        uVar10 = 0;
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        goto LAB_00542dd8;
      }
      switch(uVar3 & 0x600) {
      default:
        uVar10 = 1;
        uVar7 = 1;
        goto code_r0x00542d44;
      case 0x200:
      case 0x220:
      case 0x240:
      case 0x260:
      case 0x280:
      case 0x2a0:
      case 0x2c0:
      case 0x2e0:
      case 0x300:
      case 800:
      case 0x340:
      case 0x360:
      case 0x380:
      case 0x3a0:
      case 0x3c0:
      case 0x3e0:
        uVar10 = 1;
        uVar7 = 1;
        goto code_r0x00542f04;
      case 0x400:
      case 0x420:
      case 0x440:
      case 0x460:
      case 0x480:
      case 0x4a0:
      case 0x4c0:
      case 0x4e0:
      case 0x500:
      case 0x520:
      case 0x540:
      case 0x560:
      case 0x580:
      case 0x5a0:
      case 0x5c0:
      case 0x5e0:
        func_0x00547610();
        UNRECOVERED_JUMPTABLE_02 = pcStack_8;
        goto code_r0x00542e50;
      case 0x600:
      case 0x620:
      case 0x640:
      case 0x660:
      case 0x680:
      case 0x6a0:
      case 0x6c0:
      case 0x6e0:
      case 0x700:
      case 0x720:
      case 0x740:
      case 0x760:
      case 0x780:
      case 0x7a0:
      case 0x7c0:
      case 0x7e0:
        func_0x00547610();
        func_0x005470c8(*(undefined8 *)(extraout_x9_04 + extraout_x8_05 * 8));
        UNRECOVERED_JUMPTABLE_02 = pcStack_8;
      }
      goto code_r0x00542ec4;
    }
    if (((uint)UNRECOVERED_JUMPTABLE_01 & 7) != 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x21 + 0x30);
      func_0x00547518();
      func_0x005464c0();
                    /* WARNING: Could not recover jumptable at 0x0054581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE_00;
    }
    param_1 = UNRECOVERED_JUMPTABLE_00;
    param_2 = pcVar12;
    func_0x00547518();
    param_3 = puVar13;
    param_4 = UNRECOVERED_JUMPTABLE_01;
    func_0x005464c0();
    unaff_x29 = in_stack_00000060;
    unaff_x30 = in_stack_00000068;
    func_0x00546398();
    unaff_x20 = UNRECOVERED_JUMPTABLE_00;
    unaff_x22 = UNRECOVERED_JUMPTABLE_01;
    unaff_x23 = puVar13;
    unaff_x24 = puStack_40;
    unaff_x25 = pcVar12;
  }
  puVar1 = (uint *)((long)param_5 + ((ulong)UNRECOVERED_JUMPTABLE_01 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar15 = (ulong)*param_5;
  if (uVar15 != 0) {
    *(uint *)(param_1 + uVar15) = *(uint *)(param_1 + uVar15) | param_6;
  }
  uVar4 = uVar3 >> 6 & 7;
  uStack_58 = extraout_x8;
  if ((uVar3 >> 6 & 7) == 0) {
    unaff_x22 = (code *)(ulong)*puVar1;
    func_0x00546458();
    func_0x00546fe8();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    pcVar11 = UNRECOVERED_JUMPTABLE_01;
    puVar14 = param_5;
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
    while (func_0x00546554(), !(bool)uVar10 && cVar9 == cVar8) {
      func_0x00543168();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
      func_0x00545eb4();
      if ((bool)uVar10 || cVar9 != cVar8) {
        func_0x00545900();
        if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
        func_0x00546528();
        func_0x00543168();
        goto LAB_00540c40;
      }
      func_0x005464b4();
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (cVar9 != cVar8) goto LAB_00540d18;
      func_0x00546414();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
      func_0x00546134();
    }
    func_0x00547108();
    func_0x00543168();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    pcVar11 = UNRECOVERED_JUMPTABLE_01;
    puVar14 = param_5;
    UNRECOVERED_JUMPTABLE_00 = param_1;
    goto LAB_00540c90;
  }
  cVar8 = SBORROW4(uVar4,2);
  cVar9 = (int)(uVar4 - 2) < 0;
  uVar10 = uVar4 == 2;
  if ((bool)uVar10) {
    switch(uVar3 & 0x600) {
    default:
      func_0x00546458();
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      param_1 = UNRECOVERED_JUMPTABLE_00;
      if (pcStack_d0 != (code *)0x0) {
code_r0x00540978:
        unaff_x22 = (code *)(param_3[1] - (long)pcStack_d0);
        iVar18 = (int)UNRECOVERED_JUMPTABLE_00;
        iVar19 = (int)unaff_x22;
        cVar8 = SBORROW4(iVar18,iVar19);
        cVar9 = iVar18 - iVar19 < 0;
        uVar10 = iVar18 == iVar19;
        if (iVar18 <= iVar19) goto code_r0x00540c6c;
        func_0x00542ff4();
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        if (pcStack_d0 == (code *)0x0) break;
        func_0x005471ec();
        if (!(bool)uVar10 && cVar9 == cVar8) {
          func_0x005464b4();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (cVar9 == cVar8) {
            func_0x00546414();
            pcVar11 = UNRECOVERED_JUMPTABLE_01;
            puVar14 = param_5;
            if (pcStack_d0 != (code *)0x0) goto code_r0x005409b0;
            break;
          }
          goto LAB_00540d18;
        }
        func_0x00545b88();
        auStack_80[0] = (int)unaff_x24;
        func_0x00545994();
        if (pcStack_d0 != (code *)0x0) goto LAB_00540d50;
        func_0x005471bc();
        func_0x00542ff4();
code_r0x00540d10:
        uVar10 = pcStack_d0 == UNRECOVERED_JUMPTABLE_00;
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        param_1 = UNRECOVERED_JUMPTABLE_00;
        if ((bool)uVar10) {
          func_0x00546884();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          break;
        }
LAB_00540d18:
        pcStack_d0 = (code *)0x0;
      }
      break;
    case 0x200:
    case 0x220:
    case 0x240:
    case 0x260:
    case 0x280:
    case 0x2a0:
    case 0x2c0:
    case 0x2e0:
    case 0x300:
    case 800:
    case 0x340:
    case 0x360:
    case 0x380:
    case 0x3a0:
    case 0x3c0:
    case 0x3e0:
      func_0x00546458();
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      param_1 = UNRECOVERED_JUMPTABLE_00;
      if (pcStack_d0 != (code *)0x0) {
        while( true ) {
          unaff_x22 = (code *)(param_3[1] - (long)pcStack_d0);
          iVar18 = (int)UNRECOVERED_JUMPTABLE_00;
          iVar19 = (int)unaff_x22;
          cVar8 = SBORROW4(iVar18,iVar19);
          cVar9 = iVar18 - iVar19 < 0;
          uVar10 = iVar18 == iVar19;
          if (iVar18 <= iVar19) break;
          func_0x00543034();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
          func_0x005471ec();
          if ((bool)uVar10 || cVar9 != cVar8) {
            func_0x00545b88();
            auStack_80[0] = (int)unaff_x24;
            func_0x00545994();
            if (pcStack_d0 != (code *)0x0) goto LAB_00540d50;
            func_0x005471bc();
            func_0x00543034();
            goto code_r0x00540d10;
          }
          func_0x005464b4();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (cVar9 != cVar8) goto LAB_00540d18;
          func_0x00546414();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
          func_0x005475d0();
        }
        func_0x00543034();
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        goto LAB_00540c90;
      }
      break;
    case 0x400:
    case 0x420:
    case 0x440:
    case 0x460:
    case 0x480:
    case 0x4a0:
    case 0x4c0:
    case 0x4e0:
    case 0x500:
    case 0x520:
    case 0x540:
    case 0x560:
    case 0x580:
    case 0x5a0:
    case 0x5c0:
    case 0x5e0:
      func_0x00546b3c();
      pcStack_b0 = *(code **)(extraout_x9 + extraout_x8_00 * 8);
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      func_0x0054648c();
      func_0x00547134();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcStack_b8 = pcVar12;
      pcStack_a8 = param_1;
      puStack_a0 = param_5;
      pcStack_98 = UNRECOVERED_JUMPTABLE_01;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
code_r0x00540ae0:
        func_0x005461ec();
        if (!(bool)uVar10 && cVar9 == cVar8) {
          func_0x0054307c();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) break;
          func_0x00545c10();
          if (!(bool)uVar10 && cVar9 == cVar8) {
            func_0x005464b4();
            if (cVar9 == cVar8) {
              func_0x00546414();
              if (pcStack_d0 != (code *)0x0) goto code_r0x00540b10;
              break;
            }
            goto LAB_00540d18;
          }
          func_0x00545db0();
          func_0x00545738();
          if (pcStack_d0 == (code *)0x0) {
            func_0x0054606c();
            func_0x0054307c();
code_r0x00540ccc:
            uVar10 = pcStack_d0 == param_1;
            pcStack_a8 = param_1;
            if (!(bool)uVar10) goto LAB_00540d18;
            func_0x00546fb8();
            break;
          }
          goto code_r0x00540d68;
        }
        func_0x00546784();
        func_0x0054307c();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_00540c90;
      }
      break;
    case 0x600:
    case 0x620:
    case 0x640:
    case 0x660:
    case 0x680:
    case 0x6a0:
    case 0x6c0:
    case 0x6e0:
    case 0x700:
    case 0x720:
    case 0x740:
    case 0x760:
    case 0x780:
    case 0x7a0:
    case 0x7c0:
    case 0x7e0:
      func_0x00546b3c();
      pcStack_b0 = *(code **)(extraout_x9_00 + extraout_x8_01 * 8);
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      func_0x0054648c();
      func_0x00547134();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcStack_b8 = pcVar12;
      pcStack_a8 = param_1;
      puStack_a0 = param_5;
      pcStack_98 = UNRECOVERED_JUMPTABLE_01;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        while (func_0x005461ec(), !(bool)uVar10 && cVar9 == cVar8) {
          func_0x0054310c();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          func_0x00545c10();
          if ((bool)uVar10 || cVar9 != cVar8) {
            func_0x00545db0();
            func_0x00545738();
            if (pcStack_d0 != (code *)0x0) goto code_r0x00540d68;
            func_0x0054606c();
            func_0x0054310c();
            goto code_r0x00540ccc;
          }
          func_0x005464b4();
          if (cVar9 != cVar8) goto LAB_00540d18;
          func_0x00546414();
          if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
          func_0x0054620c();
          UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
          pcStack_b8 = pcStack_d0;
        }
        func_0x00546784();
        func_0x0054310c();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_00540c90;
      }
    }
  }
  else {
    unaff_x22 = (code *)(ulong)*puVar1;
    if ((uVar3 & 0x600) == 0) {
      func_0x00546458();
      func_0x00546fe8();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        while (func_0x00546554(), !(bool)uVar10 && cVar9 == cVar8) {
          func_0x00542f6c();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          func_0x00545eb4();
          if ((bool)uVar10 || cVar9 != cVar8) {
            func_0x00545900();
            if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
            func_0x00546528();
            func_0x00542f6c();
            goto LAB_00540c40;
          }
          func_0x005464b4();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (cVar9 != cVar8) goto LAB_00540d18;
          func_0x00546414();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          func_0x00546134();
        }
        func_0x00547108();
        func_0x00542f6c();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_00540c90;
      }
    }
    else {
      func_0x00546458();
      func_0x00546fe8();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
LAB_00540a40:
        func_0x00546554();
        if (!(bool)uVar10 && cVar9 == cVar8) {
          func_0x00542fac();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          func_0x00545eb4();
          if (!(bool)uVar10 && cVar9 == cVar8) {
            func_0x005464b4();
            pcVar11 = UNRECOVERED_JUMPTABLE_01;
            puVar14 = param_5;
            if (cVar9 == cVar8) {
              func_0x00546414();
              pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
              pcVar11 = UNRECOVERED_JUMPTABLE_01;
              puVar14 = param_5;
              if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto code_r0x00540a70;
              goto LAB_00540d1c;
            }
            goto LAB_00540d18;
          }
          func_0x00545900();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            func_0x00546528();
            func_0x00542fac();
LAB_00540c40:
            uVar10 = UNRECOVERED_JUMPTABLE_00 == unaff_x21;
            pcVar11 = UNRECOVERED_JUMPTABLE_01;
            puVar14 = param_5;
            if (!(bool)uVar10) goto LAB_00540d18;
            pcStack_d0 = unaff_x25 + param_3[1];
            goto LAB_00540d1c;
          }
          goto LAB_00540d50;
        }
        func_0x00547108();
        func_0x00542fac();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_00540c90;
      }
    }
  }
LAB_00540d1c:
  func_0x005459dc(uStack_58);
  uVar7 = 0;
  UNRECOVERED_JUMPTABLE_01 = pcVar11;
  param_5 = puVar14;
  if ((bool)uVar10) {
    return pcStack_d0;
  }
LAB_00540d4c:
  uVar10 = uVar7;
  ___stack_chk_fail();
LAB_00540d50:
  func_0x00533528();
  func_0x00545ac8();
  func_0x005464a0(auStack_80);
  pcStack_d0 = (code *)auStack_80;
  FUN_005558a0(pcStack_d0);
  pcVar11 = UNRECOVERED_JUMPTABLE_01;
  puVar14 = param_5;
code_r0x00540d68:
  func_0x00533528();
  func_0x00545820();
  func_0x00546618();
  UNRECOVERED_JUMPTABLE_01 = (code *)0x540d74;
  func_0x0054725c();
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_01;
  func_0x00546494();
  func_0x00546db4();
  if (!(bool)uVar10) {
    uVar4 = extraout_w9 & 0x1c0;
    uVar20 = (uint)pcVar11 & 7;
    if (uVar4 == 0xc0) {
      if (uVar20 == 1) {
LAB_00540de4:
        if (extraout_w8 == 0x30) {
          func_0x00546ce4();
        }
        else if (extraout_w8 == 0x10) {
          func_0x00545f08(unaff_x24[1]);
          *(uint *)(unaff_x22 + extraout_x9_01) =
               extraout_w8_00 | *(uint *)(unaff_x22 + extraout_x9_01);
        }
        bVar6 = 0xbf < uVar4;
        if (uVar4 == 0xc0) {
          *(undefined8 *)(unaff_x22 + *unaff_x24) = *unaff_x23;
          lVar16 = 8;
        }
        else {
          *(undefined4 *)(unaff_x22 + *unaff_x24) = *(undefined4 *)unaff_x23;
          lVar16 = 4;
        }
        UNRECOVERED_JUMPTABLE = (code *)((long)unaff_x23 + lVar16);
        func_0x00546c54();
        if (bVar6) {
          if (*(short *)param_1 != 0) {
            func_0x00546518();
          }
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x00545774(*(undefined2 *)UNRECOVERED_JUMPTABLE);
        goto LAB_00540e50;
      }
    }
    else if (uVar20 == 5) goto LAB_00540de4;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x30);
    func_0x00547158();
    unaff_x22 = pcStack_d0;
LAB_00540e50:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return unaff_x22;
  }
  func_0x00547158();
  func_0x0054638c();
  while( true ) {
    func_0x00546b54();
    pcStack_30 = UNRECOVERED_JUMPTABLE;
    pcStack_28 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546494();
    func_0x00547524();
    func_0x005467cc();
    uVar20 = (uint)pcStack_b8;
    uVar4 = uVar20 & 7;
    uVar10 = uVar4 == 2;
    if (!(bool)uVar10) break;
    func_0x00546588();
    func_0x00546e28();
    func_0x0054638c();
    UNRECOVERED_JUMPTABLE = pcStack_30;
    UNRECOVERED_JUMPTABLE_01 = pcStack_28;
    func_0x005467d8();
    UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar10) {
      puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcVar11 >> 0x20));
      uVar3 = *(ushort *)((long)puVar1 + 10);
      func_0x00546648();
      UNRECOVERED_JUMPTABLE = pcStack_b0;
      if ((uVar3 & 0x1c0) == 0xc0) {
        FUN_00543378();
      }
      else {
        FUN_00543490(pcStack_b0,pcStack_c8,pcStack_d0,pcStack_a8 + *puVar1);
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        func_0x00545da0();
        param_5 = puVar14;
        goto LAB_0053b2b8;
      }
      if (*(code **)pcStack_b0 <= UNRECOVERED_JUMPTABLE) {
        if (*puStack_a0 == 0) {
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x00545d80();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x00545754(*(short *)UNRECOVERED_JUMPTABLE);
      func_0x00545d70();
      goto LAB_00546444;
    }
    pcStack_d0 = pcStack_a8;
    func_0x00545d70(pcStack_a8);
  }
  puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcStack_b8 >> 0x20));
  if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
    uVar10 = ((ulong)pcStack_b8 & 7) != 0;
    if (uVar4 != 1) {
LAB_005432ac:
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puStack_a0 + 0x18);
      func_0x00546588();
      func_0x00546e28();
      goto LAB_005432b8;
    }
    uVar4 = *puVar1;
    do {
      UNRECOVERED_JUMPTABLE = pcStack_c8 + 8;
      uVar21 = *(undefined8 *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar4;
      FUN_005432f0();
      *(undefined8 *)pcStack_d0 = uVar21;
      func_0x00546e00();
      if ((bool)uVar10) goto LAB_005432c4;
      func_0x00546090();
      if (pcStack_d0 == (code *)0x0) goto LAB_005432e4;
      uVar10 = uVar20 <= uStack_74;
      pcStack_c8 = pcStack_d0;
    } while (uStack_74 == uVar20);
  }
  else {
    if (uVar4 != 5) goto LAB_005432ac;
    uVar4 = *puVar1;
    uVar10 = true;
    do {
      UNRECOVERED_JUMPTABLE = pcStack_c8 + 4;
      uVar2 = *(undefined4 *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar4;
      func_0x00543334();
      *(undefined4 *)pcStack_d0 = uVar2;
      func_0x00546e00();
      if ((bool)uVar10) goto LAB_005432c4;
      func_0x00546090();
      if (pcStack_d0 == (code *)0x0) goto LAB_005432e4;
      uVar10 = uVar20 <= uStack_78;
      pcStack_c8 = pcStack_d0;
    } while (uStack_78 == uVar20);
  }
  func_0x00546988();
  if ((bool)uVar10) {
LAB_005432c4:
    uVar3 = *puStack_a0;
    if (uVar3 != 0) {
      *(uint *)(pcStack_a8 + uVar3) = *(uint *)(pcStack_a8 + (uint)uVar3) | (uint)pcStack_98;
    }
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x00545754(*(short *)UNRECOVERED_JUMPTABLE);
  func_0x005466ec();
LAB_005432b8:
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_01)();
  return pcStack_d0;
code_r0x00540a70:
  func_0x00546134();
  goto LAB_00540a40;
code_r0x00540b10:
  func_0x0054620c();
  UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
  pcStack_b8 = pcStack_d0;
  goto code_r0x00540ae0;
code_r0x00540c6c:
  func_0x00542ff4();
  pcVar11 = UNRECOVERED_JUMPTABLE_01;
  puVar14 = param_5;
LAB_00540c90:
  func_0x00546670();
  param_1 = UNRECOVERED_JUMPTABLE_00;
  goto LAB_00540d1c;
code_r0x005409b0:
  func_0x005475d0();
  goto code_r0x00540978;
LAB_005432e4:
  func_0x00545da0();
  param_5 = puVar14;
  goto LAB_0053b2b8;
  while( true ) {
    func_0x00545e18();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
    func_0x005463b4();
    if (!(bool)uVar10) break;
LAB_00542d94:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x005461d0();
    if (pcVar11 == (code *)0x0) goto LAB_00542f48;
    uVar7 = 1;
    uVar10 = CONCAT44(in_stack_0000000c,in_stack_00000008) == 0;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00 + uVar4;
    FUN_00534404(UNRECOVERED_JUMPTABLE,!(bool)uVar10);
    func_0x00546da8();
    if ((bool)uVar7) break;
  }
  goto LAB_00542f30;
  while( true ) {
    func_0x00545e18();
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00542f48;
    func_0x005463b4();
    if (!(bool)uVar10) break;
code_r0x00542ec4:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    func_0x005461d0();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
    pcVar12 = (code *)(ulong)in_stack_00000008;
    uVar10 = (int)in_stack_00000008 < unaff_w27 || unaff_w28 == in_stack_00000008;
    uVar7 = unaff_w27 <= (int)in_stack_00000008 && in_stack_00000008 <= unaff_w28;
    if ((int)in_stack_00000008 < unaff_w27 || (int)unaff_w28 <= (int)in_stack_00000008)
    goto FUN_0053df24;
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
    func_0x00546fc4();
    func_0x00546da8();
    pcVar11 = UNRECOVERED_JUMPTABLE;
    if ((bool)uVar7) break;
  }
  goto LAB_00542f30;
  while( true ) {
    func_0x00545e18();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
    func_0x005463b4();
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
    if (!(bool)uVar10) break;
code_r0x00542e50:
    pcVar11 = UNRECOVERED_JUMPTABLE_00;
    func_0x005461d0();
    if (pcVar11 == (code *)0x0) goto LAB_00542f48;
    UNRECOVERED_JUMPTABLE = pcVar11;
    func_0x0054675c();
    if ((bool)uVar7) {
      func_0x00546a04();
      if ((bool)uVar7) {
        func_0x005469f0();
        uVar15 = extraout_x8_03;
        uVar17 = extraout_x9_02;
        do {
          uVar7 = uVar17 <= uVar15;
          cVar8 = SBORROW8(uVar15,uVar17);
          cVar9 = (long)(uVar15 - uVar17) < 0;
          uVar10 = uVar15 == uVar17;
          if ((bool)uVar7) goto FUN_0053df24;
          func_0x00547068();
          lVar16 = extraout_x11;
          if ((bool)uVar10 || cVar9 != cVar8) {
            lVar16 = extraout_x11 + 1;
          }
          uVar15 = lVar16 + extraout_x8_04 * 2;
          uVar17 = extraout_x9_03;
        } while (!(bool)uVar10);
      }
      else {
        func_0x00547098();
        if ((extraout_x8_02 & 1) == 0) goto FUN_0053df24;
      }
    }
    func_0x00546fc4();
    func_0x00546da8();
    if ((bool)uVar7) break;
  }
  goto LAB_00542f30;
  while( true ) {
    func_0x00545e18();
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00542f48;
    func_0x005463b4();
    if (!(bool)uVar10) break;
code_r0x00542f04:
    pcVar11 = UNRECOVERED_JUMPTABLE_00;
    func_0x005461d0();
    if (pcVar11 == (code *)0x0) goto LAB_00542f48;
    UNRECOVERED_JUMPTABLE_00 = pcVar11;
    func_0x00546aac();
    func_0x00546fc4();
    func_0x00546da8();
    if ((bool)uVar7) break;
  }
  goto LAB_00542f30;
  while( true ) {
    func_0x00545e18();
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00542f48;
    func_0x005463b4();
    if (!(bool)uVar10) break;
code_r0x00542d44:
    pcVar11 = UNRECOVERED_JUMPTABLE_00;
    func_0x005461d0();
    if (pcVar11 == (code *)0x0) goto LAB_00542f48;
    UNRECOVERED_JUMPTABLE_00 = pcVar11;
    func_0x00546fc4();
    func_0x00546da8();
    if ((bool)uVar7) break;
  }
  goto LAB_00542f30;
  while( true ) {
    func_0x00545e18();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
    func_0x005463b4();
    if (!(bool)uVar10) break;
LAB_00542dd8:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x005461d0();
    if (pcVar11 == (code *)0x0) goto LAB_00542f48;
    func_0x00546564();
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00 + uVar4;
    FUN_00534008();
    func_0x00546da8();
    if ((bool)uVar7) break;
  }
  goto LAB_00542f30;
LAB_00542f48:
  func_0x005461dc();
  goto LAB_0053b2b8;
FUN_0053df24:
  func_0x00547518();
  func_0x005464c0();
  uVar21 = in_stack_00000058;
  puVar14 = in_stack_00000048;
  func_0x00546878();
  FUN_00538888(pcVar12,&stack0x00000028);
  if (pcVar12 != (code *)0x0) {
    FUN_0053dee0(UNRECOVERED_JUMPTABLE,*(undefined8 *)(puVar14 + 0x18),UNRECOVERED_JUMPTABLE_01,
                 in_stack_00000028);
    func_0x0054686c();
    if ((bool)uVar7) {
      uVar15 = (ulong)*puVar14;
      if (uVar15 != 0) {
        *(uint *)(UNRECOVERED_JUMPTABLE + uVar15) =
             *(uint *)(UNRECOVERED_JUMPTABLE + uVar15) | (uint)uVar21;
      }
      return pcVar12;
    }
    func_0x00545a70(*(short *)pcVar12);
    func_0x005464c0(UNRECOVERED_JUMPTABLE,pcVar12,puVar13);
LAB_00546444:
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x005461dc();
LAB_0053b2b8:
  if (*param_5 != 0) {
    func_0x0054717c();
  }
  return (code *)0x0;
  while( true ) {
    func_0x00545e18();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
    func_0x005463b4();
    if (!(bool)uVar10) break;
LAB_00542e10:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x005461d0();
    if (pcVar11 == (code *)0x0) goto LAB_00542f48;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00 + uVar4;
    FUN_00534008(UNRECOVERED_JUMPTABLE,CONCAT44(in_stack_0000000c,in_stack_00000008));
    func_0x00546da8();
    if ((bool)uVar7) break;
  }
LAB_00542f30:
  if (*(short *)unaff_x21 != 0) {
    func_0x005463c4();
  }
  return pcVar11;
}



/* Entry: 00540e78; end: 00540f43;  */

undefined8 *
FUN_00540e78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,short *param_5,
            undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint unaff_w19;
  ushort *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar6;
  ulong unaff_x23;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  undefined8 *puVar8;
  code *unaff_x30;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  undefined8 uStack_48;
  
  while( true ) {
    func_0x00546034();
    func_0x005473f0();
    if ((bool)in_ZR) break;
    param_1 = unaff_x21;
    func_0x00545d70(unaff_x21);
    func_0x00546b54();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    func_0x00546494();
    func_0x00547524();
    func_0x005467cc();
    uVar6 = (uint)unaff_x23;
    uVar2 = uVar6 & 7;
    in_ZR = uVar2 == 2;
    if (!(bool)in_ZR) {
      puVar1 = (uint *)((long)unaff_x20 + (unaff_x23 >> 0x20));
      if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
        uVar5 = (unaff_x23 & 7) != 0;
        if (uVar2 == 1) {
          uVar2 = *puVar1;
          param_1 = unaff_x25;
          goto LAB_00543214;
        }
      }
      else if (uVar2 == 5) {
        uVar2 = *puVar1;
        uVar5 = true;
        param_1 = unaff_x25;
        goto LAB_0054325c;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      func_0x00546588();
      func_0x00546e28();
      goto LAB_005432b8;
    }
    func_0x00546588();
    func_0x00546e28();
    func_0x0054638c();
    func_0x005467d8();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
  }
  puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
  uVar4 = *(ushort *)((long)puVar1 + 10);
  func_0x00546648();
  puVar8 = unaff_x22;
  if ((uVar4 & 0x1c0) == 0xc0) {
    FUN_00543378();
  }
  else {
    FUN_00543490(unaff_x22,uStack_48,param_1,(long)unaff_x21 + (ulong)*puVar1);
  }
  if (puVar8 != (undefined8 *)0x0) {
    if ((undefined8 *)*unaff_x22 <= puVar8) {
      if (*unaff_x20 != 0) {
        func_0x00545d80();
      }
      return puVar8;
    }
    func_0x00545754(*(undefined2 *)puVar8);
    func_0x00545d70();
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return puVar8;
  }
  func_0x00545da0();
LAB_0053b2b8:
  if (*param_5 != 0) {
    func_0x0054717c();
  }
  return (undefined8 *)0x0;
  while( true ) {
    func_0x00546090();
    if (param_1 == (undefined8 *)0x0) goto LAB_005432e4;
    uVar5 = uVar6 <= in_stack_00000008;
    if (in_stack_00000008 != uVar6) break;
LAB_0054325c:
    puVar8 = (undefined8 *)((long)param_1 + 4);
    uVar3 = *(undefined4 *)param_1;
    param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
    func_0x00543334();
    *(undefined4 *)param_1 = uVar3;
    func_0x00546e00();
    if ((bool)uVar5) goto LAB_005432c4;
  }
  goto LAB_00543294;
LAB_005432e4:
  func_0x00545da0();
  goto LAB_0053b2b8;
  while( true ) {
    func_0x00546090();
    if (param_1 == (undefined8 *)0x0) goto LAB_005432e4;
    uVar5 = uVar6 <= in_stack_0000000c;
    if (in_stack_0000000c != uVar6) break;
LAB_00543214:
    puVar8 = param_1 + 1;
    uVar7 = *param_1;
    param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
    FUN_005432f0();
    *param_1 = uVar7;
    func_0x00546e00();
    if ((bool)uVar5) goto LAB_005432c4;
  }
LAB_00543294:
  func_0x00546988();
  if (!(bool)uVar5) {
    func_0x00545754(*(undefined2 *)puVar8);
    func_0x005466ec();
LAB_005432b8:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
LAB_005432c4:
  uVar4 = *unaff_x20;
  if (uVar4 != 0) {
    *(uint *)((long)unaff_x21 + (ulong)uVar4) =
         *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | unaff_w19;
  }
  return puVar8;
}



/* Entry: 00540f44; end: 005410df;  */

undefined8 *
FUN_00540f44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
            ushort *param_5,uint param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  short *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *in_stack_00000018;
  
  func_0x00546b54();
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
  func_0x00546034();
  func_0x00546e98();
  if (((uint)param_4 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    goto LAB_00540f9c;
  }
  puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar4 = uVar3 & 0x30;
  if (uVar4 == 0x20) {
    func_0x00545adc();
    func_0x005467d8();
    func_0x00546c78();
    func_0x00547524();
    if (((uint)puVar1 & 7) != 2) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
      func_0x00546e28(param_1,param_2);
      goto LAB_005437e0;
    }
    puVar1 = (uint *)((long)param_5 + ((ulong)puVar1 >> 0x20));
    uVar5 = (*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0x100;
    puVar6 = param_2;
    if ((bool)uVar5) {
      puVar2 = (undefined8 *)((long)param_1 + (ulong)*puVar1);
      if (puVar2[2] != 0) {
        puVar6 = param_1;
        func_0x00545d3c();
        func_0x00546270();
        if ((bool)uVar5) {
          puVar11 = (undefined8 *)puVar6[2];
          puVar6 = puVar2;
          func_0x0054387c();
          if ((int)puVar6 != 0) {
            do {
              in_stack_00000018 = param_2;
              func_0x0054648c();
              if (in_stack_00000018 == (undefined8 *)0x0) goto LAB_0053b2b8;
              if (puVar11[5] == 0) {
                puVar8 = puVar11;
                FUN_005505c0();
              }
              else {
                lVar10 = puVar11[5] + -0x18;
                puVar11[5] = lVar10;
                puVar8 = (undefined8 *)(puVar11[4] + lVar10 + 0x10);
              }
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar6 = puVar2;
              func_0x005438a4();
              func_0x00546e34();
              FUN_00533074();
              if (puVar6 == (undefined8 *)0x0) goto LAB_0053b2b8;
              puVar7 = puVar6;
              func_0x00546c30();
              if ((long)puVar8 < 0) {
                puVar7 = (undefined8 *)*puVar7;
              }
              func_0x005466d4();
              if (((ulong)puVar7 & 1) == 0) goto LAB_0053b2b8;
              uVar5 = puVar6 == (undefined8 *)*unaff_x22;
              if ((undefined8 *)*unaff_x22 <= puVar6) goto LAB_00543820;
              param_2 = puVar6;
              func_0x00546484(puVar6,&stack0x00000014);
              func_0x005473d0();
            } while ((bool)uVar5);
            goto LAB_005437c0;
          }
        }
      }
      do {
        puVar11 = puVar2;
        func_0x0054d0b8();
        puVar6 = puVar11;
        func_0x00546744();
        if (puVar6 == (undefined8 *)0x0) goto LAB_0053b2b8;
        lVar10 = (long)*(char *)((long)puVar11 + 0x17);
        puVar8 = puVar11;
        if (lVar10 < 0) {
          puVar8 = (undefined8 *)*puVar11;
          lVar10 = puVar11[1];
        }
        func_0x005466d4(puVar8,lVar10);
        if (((ulong)puVar8 & 1) == 0) goto LAB_0053b2b8;
        uVar5 = puVar6 == (undefined8 *)*unaff_x22;
        if ((undefined8 *)*unaff_x22 <= puVar6) goto LAB_00543820;
        func_0x00546484(puVar6,&stack0x00000014);
        func_0x005473d0();
      } while ((bool)uVar5);
    }
LAB_005437c0:
    if (puVar6 < (undefined8 *)*unaff_x22) {
      func_0x00545a70(*(undefined2 *)puVar6);
LAB_005437e0:
                    /* WARNING: Could not recover jumptable at 0x00545b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return param_1;
    }
    uVar4 = *param_5;
joined_r0x0054382c:
    if (uVar4 != 0) {
      *(uint *)((long)param_1 + (ulong)uVar4) = *(uint *)((long)param_1 + (ulong)uVar4) | param_6;
    }
    return puVar6;
  }
  uVar5 = 0x2f < uVar4;
  if (uVar4 == 0x30) {
    param_2 = (undefined8 *)(ulong)puVar1[1];
    func_0x00546ae8();
    if ((uVar3 & 0x1c0) != 0) {
      if ((int)param_1 == 0) {
        param_1 = *(undefined8 **)(unaff_x21 + (ulong)*puVar1);
      }
      else {
        if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
          func_0x00546c6c();
        }
        func_0x00546860();
        FUN_00543928();
        *(undefined8 **)(unaff_x21 + (ulong)*puVar1) = param_1;
      }
      goto LAB_00540fd0;
    }
    puVar6 = (undefined8 *)(unaff_x21 + (ulong)*puVar1);
    if ((int)param_1 != 0) {
      *puVar6 = &DAT_00b69408;
    }
LAB_00541020:
    uVar9 = *(ulong *)(unaff_x21 + 8);
    if ((uVar9 & 1) == 0) {
      if (uVar9 == 0) goto LAB_00541074;
LAB_0054102c:
      FUN_00532fc0();
      param_2 = unaff_x24;
    }
    else {
      if (*(long *)(uVar9 & 0xfffffffffffffffe) != 0) goto LAB_0054102c;
LAB_00541074:
      unaff_x22 = puVar6;
      func_0x00547300();
      func_0x005466ec();
      FUN_0054b90c();
    }
    if (unaff_x22 == (undefined8 *)0x0) goto LAB_005410bc;
    param_1 = unaff_x22;
    func_0x005474a8(*puVar6);
    if ((long)param_2 < 0) {
      param_1 = (undefined8 *)*param_1;
    }
    param_5 = (ushort *)(ulong)(uVar3 & 0x600);
    func_0x00547344();
    puVar6 = (undefined8 *)((ulong)param_1 & 1);
  }
  else {
    uVar5 = 0xf < uVar4;
    if (uVar4 == 0x10) {
      func_0x00545d1c(puVar1[1]);
    }
    if ((uVar3 & 0x1c0) == 0) {
      puVar6 = (undefined8 *)(unaff_x21 + (ulong)*puVar1);
      goto LAB_00541020;
    }
    param_1 = (undefined8 *)(unaff_x21 + (ulong)*puVar1);
LAB_00540fd0:
    func_0x005466ec();
    func_0x00543834();
    unaff_x22 = param_1;
    puVar6 = param_1;
  }
  if (puVar6 != (undefined8 *)0x0) {
    func_0x00546988();
    if ((bool)uVar5) {
      if (*unaff_x20 != 0) {
        func_0x00545d80();
      }
      return unaff_x22;
    }
    func_0x00545774(*(undefined2 *)unaff_x22);
LAB_00540f9c:
    func_0x00545adc();
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
LAB_005410bc:
  func_0x00545da0();
LAB_0053b2b8:
  if (*param_5 != 0) {
    func_0x0054717c();
  }
  return (undefined8 *)0x0;
LAB_00543820:
  uVar4 = *param_5;
  goto joined_r0x0054382c;
}



/* Entry: 005410e0; end: 005416bf;  */

/* WARNING: Possible PIC construction at 0x0054159c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x005415a0) */
/* WARNING: Removing unreachable block (ram,0x005415a4) */
/* WARNING: Removing unreachable block (ram,0x005415ac) */
/* WARNING: Removing unreachable block (ram,0x005415b8) */
/* WARNING: Removing unreachable block (ram,0x005415c4) */

ushort * FUN_005410e0(ushort *param_1,ushort *param_2,long param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  uint extraout_w8_04;
  undefined4 extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ushort *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *plVar13;
  uint uVar14;
  long lVar15;
  ushort *unaff_x25;
  uint uVar16;
  ushort *puVar17;
  ulong uVar18;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ushort *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  uint uStack_80;
  uint uStack_7c;
  ushort *puStack_78;
  
  func_0x0054768c();
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar4 = *(ushort *)((long)puVar1 + 10);
  uVar2 = uVar4 & 0x30;
  uVar16 = (uint)uVar4;
  uVar14 = (uint)param_4;
  if (uVar2 == 0x20) {
    puVar11 = param_1;
    puVar12 = param_5;
    UNRECOVERED_JUMPTABLE = unaff_x30;
    if ((uVar16 & 0x1c0) == 0x40) {
      if ((uVar14 & 7) == 3) {
        uVar2 = *puVar1;
        func_0x00546a5c((short)puVar1[2]);
        puVar17 = *(ushort **)(extraout_x9_00 + extraout_x8_00 * 8);
        uVar16 = uVar16 & 0x600;
        cVar9 = SBORROW4(uVar16,0x200);
        iVar10 = uVar16 - 0x200;
        if (uVar16 != 0x200) {
          cVar9 = SBORROW4(uVar16,0x400);
          iVar10 = uVar16 - 0x400;
          if (uVar16 == 0x400) {
            cVar9 = false;
            cVar5 = false;
            do {
              func_0x005472dc();
              func_0x005467c0();
              *(undefined4 *)(param_3 + 0x58) = extraout_w8;
              if (cVar5 != cVar9) goto LAB_0053b2b8;
              func_0x005460c4();
              puStack_78 = param_2;
              do {
                func_0x005460e4();
                if ((((ulong)puVar11 & 1) != 0) ||
                   (puVar12 = puVar17, func_0x00545e28(*puStack_78), puStack_78 = puVar11,
                   puVar11 == (ushort *)0x0)) break;
              } while (*(int *)(param_3 + 0x50) == 0);
              unaff_x25 = puStack_78;
              if ((*(byte *)((long)puVar17 + 9) & 1) != 0) {
                func_0x0054622c(*(undefined8 *)(puVar17 + 0x14));
                unaff_x25 = puVar11;
              }
              func_0x00546054();
              bVar8 = uVar14 <= extraout_w8_00;
              if ((extraout_w8_00 != uVar14) || (unaff_x25 == (ushort *)0x0)) goto LAB_0053b2b8;
              func_0x00546ec8();
              if (bVar8) goto LAB_00541668;
              func_0x00545f1c();
              if (puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
              uVar7 = uVar14 <= uStack_7c;
              cVar9 = SBORROW4(uStack_7c,uVar14);
              cVar5 = (int)(uStack_7c - uVar14) < 0;
              param_2 = puVar11;
            } while (uStack_7c == uVar14);
            goto LAB_00541620;
          }
        }
        do {
          cVar5 = iVar10 < 0;
          puVar11 = (ushort *)((long)param_1 + (ulong)uVar2);
          func_0x00546e40();
          func_0x005467c0();
          *(undefined4 *)(param_3 + 0x58) = extraout_w8_05;
          if (cVar5 != cVar9) goto LAB_0053b2b8;
          func_0x005460c4();
          func_0x005466f8();
          func_0x00546054();
          bVar8 = extraout_w8_06 == uVar14;
          if (extraout_w8_06 != uVar14 || puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
          func_0x005469d4();
          if (bVar8) goto LAB_00541668;
          func_0x00545f1c();
          if (puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
          func_0x00547418();
          uVar7 = uVar14 <= extraout_w8_07;
          cVar9 = SBORROW4(extraout_w8_07,uVar14);
          iVar10 = extraout_w8_07 - uVar14;
        } while (extraout_w8_07 == uVar14);
        goto LAB_00541620;
      }
    }
    else if (((uVar4 & 0x1c0) == 0) && ((uVar14 & 7) == 2)) {
      uVar2 = *puVar1;
      func_0x00546a5c((short)puVar1[2]);
      if (((uVar16 & 0x600) == 0x200) || ((uVar16 & 0x600) != 0x400)) {
        puVar11 = (ushort *)((long)param_1 + (ulong)uVar2);
        func_0x00546e40();
        unaff_x25 = puVar11;
        func_0x00546e50();
        unaff_x30 = (code *)0x5415a0;
        unaff_x29 = &stack0xfffffffffffffff0;
        goto SUB_0054b6f4;
      }
      lStack_88 = *(long *)(extraout_x9 + extraout_x8 * 8) + 0x38;
      uVar7 = true;
      cVar9 = false;
      iVar10 = 0;
      do {
        uVar6 = 1;
        cVar5 = iVar10 < 0;
        func_0x005472dc();
        puStack_78 = param_2;
        func_0x0054648c();
        if ((puStack_78 == (ushort *)0x0) || (func_0x00546ff4(), (bool)uVar6 || cVar5 != cVar9)) {
LAB_0053b2b8:
          func_0x005473c4(param_1);
          func_0x00546628();
          if (*puVar12 != 0) {
            func_0x0054717c();
          }
          return (ushort *)0x0;
        }
        func_0x00545b64();
        func_0x00547424();
        lVar15 = lStack_88;
        while (func_0x005460e4(), ((ulong)puVar11 & 1) == 0) {
          puVar12 = (ushort *)(lVar15 + -0x38);
          func_0x00545e28(*puStack_78);
          puStack_78 = puVar11;
          if ((puVar11 == (ushort *)0x0) || (*(int *)(param_3 + 0x50) != 0)) break;
        }
        unaff_x25 = puStack_78;
        if ((*(byte *)(lVar15 + -0x2f) & 1) != 0) {
          func_0x0054622c(*(undefined8 *)(lVar15 + -0x10));
          unaff_x25 = puVar11;
        }
        func_0x005464cc();
        uStack_7c = (uint)param_2;
        func_0x00546710();
        if ((((ulong)puVar11 & 1) == 0) || (unaff_x25 == (ushort *)0x0)) goto LAB_0053b2b8;
        func_0x00546ec8();
        if ((bool)uVar7) goto LAB_00541668;
        func_0x00545f1c();
        if (puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
        uVar7 = uVar14 <= uStack_80;
        cVar9 = SBORROW4(uStack_80,uVar14);
        iVar10 = uStack_80 - uVar14;
        param_2 = puVar11;
      } while (uStack_80 == uVar14);
LAB_00541620:
      func_0x00546ec8();
      if ((bool)uVar7) {
LAB_00541668:
        uVar4 = *param_5;
        if (uVar4 != 0) {
          *(uint *)((long)param_1 + (ulong)uVar4) =
               *(uint *)((long)param_1 + (ulong)(uint)uVar4) | param_6;
        }
LAB_0054167c:
        func_0x00546bf4(unaff_x25,unaff_x30);
        return unaff_x25;
      }
      func_0x00546d64();
      func_0x00547518();
      param_1 = puVar11;
      goto LAB_0054137c;
    }
  }
  else {
    uVar3 = uVar4 & 0x1c0;
    if (uVar3 == 0x40) {
      if ((uVar14 & 7) == 3) goto LAB_0054133c;
    }
    else if ((uVar4 & 0x1c0) == 0 && (uVar14 & 7) == 2) {
LAB_0054133c:
      if (uVar2 == 0x30) {
        puVar11 = param_5;
        FUN_0053fe0c(param_5,puVar1[1],uVar14 >> 3,param_1);
      }
      else if (uVar2 == 0x10) {
        puVar11 = (ushort *)0x0;
        func_0x00545f08(puVar1[1]);
        *(uint *)((long)param_1 + extraout_x9_01) =
             extraout_w8_01 | *(uint *)((long)param_1 + extraout_x9_01);
      }
      else {
        puVar11 = (ushort *)0x0;
      }
      if (*param_5 != 0) {
        func_0x00546404();
      }
      uVar18 = (ulong)*puVar1;
      bVar8 = (uVar16 & 0x600) == 0x400;
      if (bVar8) {
        func_0x00546a5c((short)puVar1[2]);
        lVar15 = *(long *)(extraout_x9_02 + extraout_x8_01 * 8);
        if ((((ulong)puVar11 & 1) != 0) ||
           (puVar12 = *(ushort **)((long)param_1 + uVar18),
           *(ushort **)((long)param_1 + uVar18) == (ushort *)0x0)) {
          puVar11 = *(ushort **)(lVar15 + 0x20);
          if ((*(ulong *)(param_1 + 4) & 1) != 0) {
            func_0x00546808();
          }
          func_0x00545f40();
          *(ushort **)((long)param_1 + uVar18) = puVar11;
          puVar12 = puVar11;
        }
        cVar5 = SBORROW4(uVar3,0x40);
        cVar9 = (int)(uVar3 - 0x40) < 0;
        uVar7 = uVar3 == 0x40;
        if ((bool)uVar7) {
          func_0x005467c0();
          *(undefined4 *)(param_3 + 0x58) = extraout_w8_02;
          if (cVar9 == cVar5) {
            func_0x005460c4();
            puStack_78 = param_2;
            while (func_0x005460e4(), ((ulong)puVar11 & 1) == 0) {
              func_0x00545f8c(*puStack_78);
              puVar11 = puVar12;
              func_0x00545f34();
              puStack_78 = puVar11;
              if ((puVar11 == (ushort *)0x0) || (*(int *)(param_3 + 0x50) != 0)) break;
            }
            unaff_x25 = puStack_78;
            if ((*(byte *)(lVar15 + 9) & 1) != 0) {
              func_0x00546e34(*(undefined8 *)(lVar15 + 0x28));
              (*extraout_x8_03)();
              unaff_x25 = puVar11;
            }
LAB_005414c4:
            func_0x005460d4(CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) + -1,
                                     (int)*(undefined8 *)(param_3 + 0x58) + 1));
            if (extraout_w8_04 != uVar14) {
              unaff_x25 = (ushort *)0x0;
            }
            goto LAB_0054167c;
          }
        }
        else {
          puStack_78 = param_2;
          func_0x0054648c();
          if ((puStack_78 != (ushort *)0x0) && (func_0x00546ff4(), !(bool)uVar7 && cVar9 == cVar5))
          {
            func_0x00545b64();
            func_0x00546bd4();
            puStack_78 = extraout_x8_02;
            do {
              func_0x005460e4();
              if ((((ulong)puVar11 & 1) != 0) ||
                 (func_0x00545af4(*puStack_78), puStack_78 = puVar11, puVar11 == (ushort *)0x0))
              break;
            } while (*(int *)(param_3 + 0x50) == 0);
            unaff_x25 = puStack_78;
            if ((*(byte *)(lVar15 + 9) & 1) != 0) {
              func_0x005462c0(*(undefined8 *)(lVar15 + 0x28));
              unaff_x25 = puVar11;
            }
            iVar10 = (int)puVar11;
            func_0x005464cc();
            uStack_7c = uVar14;
            func_0x00546710();
            if (iVar10 == 0) {
              unaff_x25 = (ushort *)0x0;
            }
            goto LAB_0054167c;
          }
        }
      }
      else {
        if ((((ulong)puVar11 & 1) != 0) ||
           (unaff_x25 = *(ushort **)((long)param_1 + uVar18),
           *(ushort **)((long)param_1 + uVar18) == (ushort *)0x0)) {
          func_0x005473a4();
          plVar13 = extraout_x9_03;
          if (!bVar8) {
            plVar13 = (long *)*extraout_x9_03;
          }
          puVar11 = (ushort *)*plVar13;
          if ((*(ulong *)(param_1 + 4) & 1) != 0) {
            func_0x00546808();
          }
          func_0x00545f40();
          *(ushort **)((long)param_1 + uVar18) = puVar11;
          unaff_x25 = puVar11;
        }
        cVar5 = SBORROW4(uVar3,0x40);
        cVar9 = (int)(uVar3 - 0x40) < 0;
        if (uVar3 != 0x40) {
          func_0x00546e50();
          func_0x00546628();
SUB_0054b6f4:
          puVar17 = puVar11;
          puStack_b0 = param_1;
          lStack_a8 = param_3;
          puStack_a0 = unaff_x29;
          pcStack_98 = unaff_x30;
          func_0x0054b68c();
          puVar12 = (ushort *)0x0;
          if (puVar17 != (ushort *)0x0) {
            FUN_00549a60(unaff_x25,puVar17,puVar11);
            *(int *)(puVar11 + 0x2c) = *(int *)(puVar11 + 0x2c) + 1;
            uStack_b8 = uStack_b4;
            FUN_005439fc(puVar11,&uStack_b8);
            puVar12 = unaff_x25;
            if ((int)puVar11 == 0) {
              puVar12 = (ushort *)0x0;
            }
          }
          return puVar12;
        }
        func_0x005467c0();
        *(undefined4 *)(param_3 + 0x58) = extraout_w8_03;
        if (cVar9 == cVar5) {
          func_0x005460c4();
          func_0x005466f8(unaff_x25);
          goto LAB_005414c4;
        }
      }
      unaff_x25 = (ushort *)0x0;
      goto LAB_0054167c;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
LAB_0054137c:
  func_0x005473c4();
  func_0x00546628();
                    /* WARNING: Could not recover jumptable at 0x00541390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return param_1;
}



/* Entry: 005416c0; end: 005419c7;  */

void FUN_005416c0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long extraout_x8;
  long extraout_x9;
  ulong uVar1;
  long unaff_x24;
  long lVar2;
  
  func_0x00546b3c();
  uVar1 = *(ulong *)(extraout_x9 + extraout_x8 * 8);
  if (((uVar1 >> 0x10 & 1) != 0) && (((uint)param_4 & 7) == 2)) {
    lVar2 = param_1 + (ulong)*(uint *)(param_5 + (param_4 >> 0x20));
    if ((((uint)uVar1 >> 0x10 & 0xff) >> 1 & 1) == 0) {
      func_0x00546d3c();
      lVar2 = param_1;
    }
    func_0x00547658();
    func_0x00543a30(lVar2,uVar1 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x0054176c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(FUN_005419c8 + unaff_x24 * 4) + 0x541760))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0053b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x30))();
  return;
}



/* Entry: 005419c8; end: 005419ff;  */

void FUN_005419c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x5419c8);
  (*pcVar1)();
}



/* Entry: 00541a00; end: 00541fa3;  */

code * FUN_00541a00(code *param_1,code *param_2,code *param_3,code *param_4,code *param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,code *param_9,
                   code *param_10)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 in_ZR;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  code *pcVar13;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  int extraout_w8;
  int extraout_w8_00;
  uint extraout_w8_01;
  ulong uVar14;
  code *pcVar15;
  ulong extraout_x8;
  ulong uVar16;
  long lVar17;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  uint extraout_w11;
  uint extraout_w11_00;
  code *unaff_x19;
  short *unaff_x20;
  ushort *puVar18;
  code *unaff_x21;
  undefined8 *unaff_x22;
  uint unaff_w23;
  uint uVar19;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar20;
  uint *unaff_x27;
  int unaff_w28;
  undefined8 unaff_x29;
  code *unaff_x30;
  code *in_stack_00000030;
  code *in_stack_00000038;
  code *in_stack_00000040;
  ushort *in_stack_00000048;
  code *in_stack_00000050;
  ulong in_stack_00000058;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  code *pcStack_b8;
  ushort *puStack_b0;
  uint uStack_a8;
  undefined1 auStack_90 [8];
  uint uStack_88;
  uint uStack_84;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_6c [4];
  ulong uStack_68;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  code *pcStack_18;
  undefined8 uStack_10;
  code *pcStack_8;
  
  func_0x00546728();
  UNRECOVERED_JUMPTABLE = unaff_x30;
  func_0x00546494();
  func_0x00546d70();
  if (!(bool)in_ZR) {
    if (((ulong)param_4 & 7) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      func_0x005464dc();
      goto LAB_00541a58;
    }
    func_0x00547350();
    pcVar8 = param_10;
    if (param_1 == (code *)0x0) {
      func_0x00545da0();
      goto LAB_0053b2b8;
    }
    uVar12 = unaff_w23 & 0x1c0;
    param_9 = param_1;
    if (uVar12 == 0xc0) {
      pcVar15 = (code *)(-((ulong)param_10 & 1) ^ (ulong)param_10 >> 1);
LAB_00541a90:
      if ((unaff_w23 & 0x600) == 0x200) {
        pcVar8 = pcVar15;
      }
    }
    else {
      uVar7 = 0x7f < uVar12;
      bVar4 = uVar12 == 0x80;
      if (!bVar4) goto LAB_00541adc;
      uVar19 = (uint)param_10;
      if ((unaff_w23 >> 10 & 1) == 0) {
        pcVar15 = (code *)(long)(int)(-(uVar19 & 1) ^ uVar19 >> 1);
        goto LAB_00541a90;
      }
      func_0x00547234();
      if (bVar4) {
        func_0x00546774();
        uVar7 = extraout_w8 <= (int)uVar19 && uVar19 <= extraout_w9;
        uVar12 = extraout_w11_00;
        if ((int)uVar19 < extraout_w8 || (int)extraout_w9 <= (int)uVar19) {
LAB_00541b8c:
          func_0x005464dc();
          func_0x0054638c();
          register0x00000008 = (BADSPACEBASE *)&stack0x00000070;
          uVar16 = in_stack_00000058;
          pcVar8 = in_stack_00000050;
          puVar18 = in_stack_00000048;
          UNRECOVERED_JUMPTABLE_01 = in_stack_00000040;
          UNRECOVERED_JUMPTABLE_00 = in_stack_00000038;
          pcVar15 = in_stack_00000030;
          goto FUN_0053df24;
        }
      }
      else {
        param_1 = pcVar8;
        func_0x0053ace8();
        uVar12 = extraout_w11;
        if (((ulong)param_1 & 1) == 0) goto LAB_00541b8c;
      }
    }
LAB_00541adc:
    if (unaff_w28 == 0x30) {
      func_0x00546ae8();
    }
    else if (unaff_w28 == 0x10) {
      func_0x00545d1c(unaff_x27[1]);
    }
    func_0x00546684();
    if (uVar12 == 0xc0) {
      *(code **)(param_1 + *unaff_x27) = pcVar8;
    }
    else if (uVar12 == 0x80) {
      *(int *)(param_1 + *unaff_x27) = (int)pcVar8;
    }
    else {
      param_1[*unaff_x27] = (code)(pcVar8 != (code *)0x0);
    }
    if ((code *)*unaff_x22 <= param_9) {
      if (*unaff_x20 != 0) {
        func_0x00545d80();
      }
      return param_9;
    }
    func_0x00545754(*(undefined2 *)param_9);
LAB_00541a58:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x0054581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  func_0x005464dc();
  UNRECOVERED_JUMPTABLE_01 = param_4;
  func_0x0054638c();
  func_0x00546398();
  pcVar15 = param_2;
  UNRECOVERED_JUMPTABLE_00 = param_3;
  UNRECOVERED_JUMPTABLE = param_5;
  do {
    pcVar8 = UNRECOVERED_JUMPTABLE;
    func_0x0054768c();
    uStack_10 = unaff_x29;
    pcStack_8 = unaff_x30;
    if (((ulong)UNRECOVERED_JUMPTABLE_01 & 7) == 0) {
      UNRECOVERED_JUMPTABLE = pcVar8 + ((ulong)UNRECOVERED_JUMPTABLE_01 >> 0x20);
      uVar2 = *(ushort *)(UNRECOVERED_JUMPTABLE + 10);
      uVar3 = uVar2 >> 6 & 7;
      uVar12 = uVar2 & 0x600;
      param_4 = UNRECOVERED_JUMPTABLE_01;
      param_5 = pcVar8;
      pcStack_80 = param_1;
      uStack_78 = param_6;
      if (uVar3 == 0) {
        pcVar10 = param_1;
        FUN_0053febc(param_1,pcVar8);
        param_2 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
        func_0x005445f0();
        UNRECOVERED_JUMPTABLE = pcVar10;
        param_3 = param_1;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00546a2c();
          param_3 = param_1;
        }
        func_0x00546a18();
        goto LAB_0054441c;
      }
      if (uVar3 == 2) {
        pcVar10 = param_1;
        FUN_0053febc(param_1,pcVar8);
        param_2 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
        func_0x005445b8();
        UNRECOVERED_JUMPTABLE = pcVar10;
        param_3 = param_1;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00546a2c();
          param_3 = param_1;
        }
        func_0x00546a18();
        goto LAB_005443a0;
      }
      pcVar10 = param_1;
      FUN_0053febc(param_1,pcVar8);
      param_2 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
      func_0x00544580();
      UNRECOVERED_JUMPTABLE = pcVar10;
      param_3 = param_1;
      if ((uVar2 >> 10 & 1) != 0) {
        func_0x00546a2c();
        param_3 = param_1;
      }
      func_0x00546a18();
      goto LAB_005444a0;
    }
    if (((uint)UNRECOVERED_JUMPTABLE_01 & 7) != 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(pcVar8 + 0x30);
      func_0x00546abc(param_1);
      func_0x00546bf4();
                    /* WARNING: Could not recover jumptable at 0x00544354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    pcVar11 = param_1;
    pcVar9 = UNRECOVERED_JUMPTABLE_01;
    UNRECOVERED_JUMPTABLE = pcVar8;
    func_0x00546abc();
    func_0x00546bf4();
    pcVar10 = (code *)&uStack_10;
    pcVar13 = pcVar9;
    param_5 = UNRECOVERED_JUMPTABLE;
    pcStack_50 = param_1;
    pcStack_48 = param_4;
    pcStack_40 = pcVar15;
    pcStack_38 = UNRECOVERED_JUMPTABLE_00;
    pcStack_30 = UNRECOVERED_JUMPTABLE_01;
    pcStack_28 = unaff_x21;
    pcStack_20 = pcVar8;
    pcStack_18 = unaff_x19;
    func_0x00546eb0();
    func_0x00545e60();
    uVar12 = (uint)pcVar13;
    uVar16 = (ulong)pcVar13 & 7;
    cVar5 = SBORROW8(uVar16,2);
    cVar6 = (long)(uVar16 - 2) < 0;
    uVar7 = uVar16 == 2;
    uStack_68 = extraout_x8;
    if ((bool)uVar7) {
      uVar2 = *(ushort *)(UNRECOVERED_JUMPTABLE + ((ulong)pcVar9 >> 0x20) + 10);
      uVar16 = (ulong)*(ushort *)UNRECOVERED_JUMPTABLE;
      if (uVar16 != 0) {
        *(uint *)(pcVar11 + uVar16) = *(uint *)(pcVar11 + uVar16) | (uint)param_6;
      }
      uVar12 = uVar2 >> 6 & 7;
      pcVar8 = pcVar11;
      FUN_0053febc(pcVar11,UNRECOVERED_JUMPTABLE);
      if ((uVar2 >> 6 & 7) == 0) {
        func_0x005445f0();
        if ((uVar2 >> 10 & 1) != 0) {
          pcVar15 = pcVar8;
          func_0x00545fac();
          func_0x00547134();
          uVar12 = (uint)pcVar13;
          if (pcVar15 == (code *)0x0) goto LAB_00541f48;
          goto LAB_00541dac;
        }
        pcVar15 = pcVar8;
        func_0x0054641c();
        func_0x00546fe8();
        uVar12 = (uint)pcVar13;
        if (pcVar15 == (code *)0x0) goto LAB_00541f48;
        goto LAB_00541cd0;
      }
      cVar5 = SBORROW4(uVar12,2);
      cVar6 = (int)(uVar12 - 2) < 0;
      uVar7 = uVar12 == 2;
      if (!(bool)uVar7) {
        func_0x00544580();
        pcVar15 = pcVar8;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00545fac();
          func_0x00547134();
          uVar12 = (uint)pcVar13;
          if (pcVar15 == (code *)0x0) goto LAB_00541f48;
          goto LAB_00541df4;
        }
        func_0x0054641c();
        func_0x00546fe8();
        uVar12 = (uint)pcVar13;
        if (pcVar15 == (code *)0x0) goto LAB_00541f48;
        goto LAB_00541d20;
      }
      func_0x005445b8();
      pcVar15 = pcVar8;
      if ((uVar2 >> 10 & 1) != 0) {
        func_0x00545fac();
        func_0x00547134();
        uVar12 = (uint)pcVar13;
        if (pcVar15 == (code *)0x0) goto LAB_00541f48;
        goto LAB_00541d64;
      }
      func_0x0054641c();
      func_0x00546fe8();
      uVar12 = (uint)pcVar13;
      if (pcVar15 == (code *)0x0) goto LAB_00541f48;
      goto LAB_00541c40;
    }
    func_0x005459dc(extraout_x8);
    param_1 = pcVar11;
    pcVar15 = unaff_x21;
    UNRECOVERED_JUMPTABLE_00 = unaff_x19;
    UNRECOVERED_JUMPTABLE_01 = pcVar9;
    unaff_x19 = pcStack_18;
    unaff_x21 = pcStack_28;
    param_4 = pcStack_48;
    unaff_x29 = uStack_10;
    unaff_x30 = pcStack_8;
  } while ((bool)uVar7);
  goto LAB_00541f7c;
  while( true ) {
    param_2 = (code *)auStack_6c;
    func_0x00545f1c();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00544540;
    func_0x005470b8();
    if (!(bool)uVar7) break;
LAB_0054441c:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00546aa0();
    uVar16 = uStack_68;
    if (pcVar11 == (code *)0x0) goto LAB_00544540;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar12 == 0x200) {
        uVar16 = (long)(int)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar12;
      cVar5 = SBORROW4(uVar12,0x600);
      cVar6 = (int)(uVar12 - 0x600) < 0;
      bVar4 = uVar12 == 0x600;
      if (bVar4) {
        func_0x00547088();
        if (bVar4 || cVar6 != cVar5) goto LAB_00544560;
      }
      else {
        UNRECOVERED_JUMPTABLE = pcVar11;
        func_0x005469e4();
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) goto LAB_00544560;
      }
    }
    UNRECOVERED_JUMPTABLE = pcVar10;
    FUN_00534404(pcVar10,uVar16 != 0);
    uVar7 = pcVar11 == *(code **)UNRECOVERED_JUMPTABLE_00;
    if (*(code **)UNRECOVERED_JUMPTABLE_00 <= pcVar11) break;
  }
  goto LAB_00544510;
  while( true ) {
    param_2 = (code *)auStack_6c;
    func_0x00545f1c();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00544540;
    func_0x005470b8();
    if (!(bool)uVar7) break;
LAB_005444a0:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00546aa0();
    uVar16 = uStack_68;
    if (pcVar11 == (code *)0x0) goto LAB_00544540;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar12 == 0x200) {
        uVar16 = -(uStack_68 & 1) ^ uStack_68 >> 1;
      }
    }
    else {
      uVar7 = 0x5ff < uVar12;
      cVar5 = SBORROW4(uVar12,0x600);
      cVar6 = (int)(uVar12 - 0x600) < 0;
      bVar4 = uVar12 == 0x600;
      if (bVar4) {
        func_0x00547088();
        if (bVar4 || cVar6 != cVar5) goto LAB_00544560;
      }
      else {
        UNRECOVERED_JUMPTABLE = pcVar11;
        func_0x005469e4();
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) goto LAB_00544560;
      }
    }
    UNRECOVERED_JUMPTABLE = pcVar10;
    FUN_00534008(pcVar10,uVar16);
    uVar7 = pcVar11 == *(code **)UNRECOVERED_JUMPTABLE_00;
    if (*(code **)UNRECOVERED_JUMPTABLE_00 <= pcVar11) break;
  }
  goto LAB_00544510;
LAB_00544560:
  param_1 = pcStack_80;
  func_0x00546abc();
  func_0x00546bf4();
  UNRECOVERED_JUMPTABLE = pcStack_8;
  uVar16 = (ulong)uVar2;
  puVar18 = (ushort *)(ulong)uVar12;
  unaff_x29 = uStack_10;
  unaff_x30 = pcStack_8;
FUN_0053df24:
  *(code **)((long)register0x00000008 + -0x40) = pcVar15;
  *(code **)((long)register0x00000008 + -0x38) = UNRECOVERED_JUMPTABLE_00;
  *(code **)((long)register0x00000008 + -0x30) = UNRECOVERED_JUMPTABLE_01;
  *(ushort **)((long)register0x00000008 + -0x28) = puVar18;
  *(code **)((long)register0x00000008 + -0x20) = pcVar8;
  *(ulong *)((long)register0x00000008 + -0x18) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00546878();
  FUN_00538888(param_2,(undefined1 *)((long)register0x00000008 + -0x48));
  if (param_2 != (code *)0x0) {
    FUN_0053dee0(param_1,*(undefined8 *)(puVar18 + 0x18),param_4,
                 *(undefined4 *)((long)register0x00000008 + -0x48));
    func_0x0054686c();
    if ((bool)uVar7) {
      uVar14 = (ulong)*puVar18;
      if (uVar14 != 0) {
        *(uint *)(param_1 + uVar14) = *(uint *)(param_1 + uVar14) | (uint)uVar16;
      }
      return param_2;
    }
    func_0x00545a70(*(undefined2 *)param_2);
    func_0x005464c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  func_0x005461dc();
  goto LAB_0053b2b8;
LAB_00544540:
  func_0x00546bf4(pcStack_80);
  param_5 = pcVar8;
  goto LAB_0053b2b8;
LAB_00541cd0:
  func_0x00546554();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e4c;
  func_0x00546b90();
  func_0x00544848();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x00545eb4();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545900();
    if (pcVar15 != (code *)0x0) goto LAB_00541f80;
    func_0x00546528();
    func_0x00546b90();
    func_0x00544848();
    goto LAB_00541f10;
  }
  func_0x005464b4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x00546134();
  goto LAB_00541cd0;
LAB_00541e4c:
  func_0x00546044();
  UNRECOVERED_JUMPTABLE_00 = pcVar9;
  func_0x00544848();
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_00;
  goto LAB_00541e80;
LAB_00541dac:
  func_0x005461ec();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e5c;
  func_0x005447d0();
  uVar12 = (uint)pcVar13;
  pcStack_c8 = pcVar15;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x00545c10();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545db0();
    func_0x00545738();
    if (pcVar15 != (code *)0x0) goto LAB_00541f98;
    func_0x0054606c();
    func_0x005447d0();
    goto LAB_00541f3c;
  }
  func_0x005464b4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x0054620c();
  pcStack_c8 = pcVar15;
  goto LAB_00541dac;
LAB_00541e5c:
  func_0x00546784();
  func_0x005447d0();
  goto LAB_00541e80;
LAB_00541c40:
  func_0x00546554();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e30;
  func_0x00546b90();
  func_0x00544778();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x00545eb4();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545900();
    if (pcVar15 != (code *)0x0) goto LAB_00541f80;
    func_0x00546528();
    func_0x00546b90();
    func_0x00544778();
    goto LAB_00541f10;
  }
  func_0x005464b4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x00546134();
  goto LAB_00541c40;
LAB_00541e30:
  func_0x00546044();
  UNRECOVERED_JUMPTABLE_00 = pcVar9;
  func_0x00544778();
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_00;
  goto LAB_00541e80;
LAB_00541d64:
  func_0x005461ec();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e40;
  func_0x00544704();
  uVar12 = (uint)pcVar13;
  pcStack_c8 = pcVar15;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x00545c10();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545db0();
    func_0x00545738();
    if (pcVar15 != (code *)0x0) goto LAB_00541f98;
    func_0x0054606c();
    func_0x00544704();
    goto LAB_00541f3c;
  }
  func_0x005464b4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x0054620c();
  pcStack_c8 = pcVar15;
  goto LAB_00541d64;
LAB_00541e40:
  func_0x00546784();
  func_0x00544704();
  goto LAB_00541e80;
LAB_00541d20:
  func_0x00546554();
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x00546b90();
    func_0x005446ac();
    uVar12 = (uint)pcVar13;
    if (pcVar15 == (code *)0x0) goto LAB_00541f48;
    func_0x00545eb4();
    uVar12 = (uint)pcVar13;
    if (!(bool)uVar7 && cVar6 == cVar5) {
      func_0x005464b4();
      uVar12 = (uint)pcVar13;
      if (cVar6 == cVar5) {
        func_0x00546414();
        uVar12 = (uint)pcVar13;
        if (pcVar15 != (code *)0x0) goto code_r0x00541d50;
        goto LAB_00541f48;
      }
      goto LAB_00541f44;
    }
    func_0x00545900();
    if (pcVar15 == (code *)0x0) {
      func_0x00546528();
      func_0x00546b90();
      func_0x005446ac();
LAB_00541f10:
      uVar7 = pcVar15 == unaff_x21;
      if (!(bool)uVar7) goto LAB_00541f44;
      pcVar15 = (code *)(*(long *)(unaff_x19 + 8) + (ulong)(uVar2 & 0x600));
      goto LAB_00541f48;
    }
    goto LAB_00541f80;
  }
  func_0x00546044();
  UNRECOVERED_JUMPTABLE_00 = pcVar9;
  func_0x005446ac();
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_00;
  goto LAB_00541e80;
code_r0x00541d50:
  func_0x00546134();
  goto LAB_00541d20;
LAB_00541df4:
  func_0x005461ec();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e78;
  func_0x00544628();
  uVar12 = (uint)pcVar13;
  pcStack_c8 = pcVar15;
  if (pcVar15 == (code *)0x0) goto LAB_00541f48;
  func_0x00545c10();
  uVar12 = (uint)pcVar13;
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x005464b4();
    uVar12 = (uint)pcVar13;
    if (cVar6 == cVar5) {
      func_0x00546414();
      uVar12 = (uint)pcVar13;
      if (pcVar15 != (code *)0x0) goto code_r0x00541e24;
      goto LAB_00541f48;
    }
    goto LAB_00541f44;
  }
  func_0x00545db0();
  func_0x00545738();
  if (pcVar15 != (code *)0x0) goto LAB_00541f98;
  func_0x0054606c();
  func_0x00544628();
LAB_00541f3c:
  uVar7 = pcVar15 == pcVar8;
  if ((bool)uVar7) {
    func_0x00546fb8();
    goto LAB_00541f48;
  }
LAB_00541f44:
  pcVar15 = (code *)0x0;
  goto LAB_00541f48;
code_r0x00541e24:
  func_0x0054620c();
  pcStack_c8 = pcVar15;
  goto LAB_00541df4;
  while( true ) {
    param_2 = (code *)auStack_6c;
    func_0x00545f1c();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00544540;
    func_0x005470b8();
    if (!(bool)uVar7) break;
LAB_005443a0:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00546aa0();
    uVar16 = uStack_68;
    if (pcVar11 == (code *)0x0) goto LAB_00544540;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar12 == 0x200) {
        uVar16 = (ulong)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar12;
      cVar5 = SBORROW4(uVar12,0x600);
      cVar6 = (int)(uVar12 - 0x600) < 0;
      bVar4 = uVar12 == 0x600;
      if (bVar4) {
        func_0x00547088();
        if (bVar4 || cVar6 != cVar5) goto LAB_00544560;
      }
      else {
        UNRECOVERED_JUMPTABLE = pcVar11;
        func_0x005469e4();
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) goto LAB_00544560;
      }
    }
    UNRECOVERED_JUMPTABLE = pcVar10;
    FUN_00533eec(pcVar10,uVar16);
    uVar7 = pcVar11 == *(code **)UNRECOVERED_JUMPTABLE_00;
    if (*(code **)UNRECOVERED_JUMPTABLE_00 <= pcVar11) break;
  }
LAB_00544510:
  uVar2 = *(ushort *)pcVar8;
  if (uVar2 != 0) {
    *(uint *)(pcStack_80 + uVar2) = *(uint *)(pcStack_80 + (uint)uVar2) | (uint)uStack_78;
  }
  func_0x00546bf4(pcVar11,pcStack_8);
  return pcVar11;
LAB_00544a0c:
  func_0x00545da0();
LAB_0053b2b8:
  if (*(short *)param_5 != 0) {
    func_0x0054717c();
  }
  return (code *)0x0;
LAB_00541e78:
  func_0x00546784();
  func_0x00544628();
LAB_00541e80:
  func_0x00546670();
LAB_00541f48:
  func_0x005459dc(uStack_68);
  if ((bool)uVar7) {
    return pcVar15;
  }
LAB_00541f7c:
  uVar7 = 0;
  ___stack_chk_fail();
LAB_00541f80:
  func_0x00533528();
  func_0x00545ac8();
  func_0x005464a0(auStack_90);
  pcVar15 = (code *)auStack_90;
  FUN_005558a0();
LAB_00541f98:
  func_0x00533528();
  func_0x00545820();
  func_0x00546618();
  UNRECOVERED_JUMPTABLE_01 = FUN_00541fa4;
  func_0x0054725c();
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_01;
  func_0x00546494();
  func_0x00546db4();
  if (!(bool)uVar7) {
    uVar19 = extraout_w9_00 & 0x1c0;
    if (uVar19 == 0xc0) {
      if ((uVar12 & 7) == 1) {
LAB_00542014:
        if (extraout_w8_00 == 0x30) {
          func_0x00546ce4();
        }
        else if (extraout_w8_00 == 0x10) {
          func_0x00545f08(*(uint *)(pcVar11 + 4));
          *(uint *)(pcVar9 + extraout_x9) = extraout_w8_01 | *(uint *)(pcVar9 + extraout_x9);
        }
        pcVar15 = pcVar9;
        FUN_0053febc(pcVar9,pcVar8);
        bVar4 = 0xbf < uVar19;
        if (uVar19 == 0xc0) {
          *(undefined8 *)(pcVar15 + *(uint *)pcVar11) = *(undefined8 *)UNRECOVERED_JUMPTABLE;
          lVar17 = 8;
        }
        else {
          *(uint *)(pcVar15 + *(uint *)pcVar11) = *(uint *)UNRECOVERED_JUMPTABLE;
          lVar17 = 4;
        }
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + lVar17;
        func_0x00546c54();
        if (bVar4) {
          if (*(short *)pcVar8 != 0) {
            func_0x00546518();
          }
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x00545774(*(undefined2 *)UNRECOVERED_JUMPTABLE);
        goto LAB_0054208c;
      }
    }
    else if ((uVar12 & 7) == 5) goto LAB_00542014;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(pcVar8 + 0x30);
    func_0x00547158();
    pcVar9 = pcVar15;
LAB_0054208c:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return pcVar9;
  }
  func_0x00547158();
  func_0x0054638c();
  while( true ) {
    func_0x00546b54();
    pcStack_40 = pcVar10;
    pcStack_38 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546494();
    func_0x00547524();
    func_0x00546e98();
    uVar19 = (uint)pcStack_c8;
    uVar12 = uVar19 & 7;
    uVar7 = uVar12 == 2;
    if (!(bool)uVar7) break;
    UNRECOVERED_JUMPTABLE = pcStack_b8;
    func_0x005466ec();
    pcVar15 = pcStack_c8;
    func_0x0054638c();
    pcVar8 = pcStack_40;
    UNRECOVERED_JUMPTABLE_01 = pcStack_38;
    func_0x005467d8();
    func_0x00546b54();
    pcStack_40 = pcVar8;
    pcStack_38 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar7) {
      puVar1 = (undefined4 *)((long)puStack_b0 + ((ulong)pcVar15 >> 0x20));
      uVar2 = *(ushort *)((long)puVar1 + 10);
      func_0x00546684();
      func_0x00546648();
      if ((uVar2 & 0x1c0) == 0xc0) {
        func_0x00544580();
        func_0x0054759c();
        FUN_00543378();
      }
      else {
        func_0x005445b8(UNRECOVERED_JUMPTABLE,*puVar1,pcStack_b8);
        func_0x0054759c();
        FUN_00543490();
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        func_0x00545da0();
        goto LAB_0053b2b8;
      }
      if ((code *)*puStack_c0 <= UNRECOVERED_JUMPTABLE) {
        if (*puStack_b0 == 0) {
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x00545d80();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x00545754(*(undefined2 *)UNRECOVERED_JUMPTABLE);
      func_0x00545d70();
      goto LAB_00545854;
    }
    pcVar15 = pcStack_b8;
    func_0x00545d70();
    pcVar10 = pcStack_40;
    UNRECOVERED_JUMPTABLE_01 = pcStack_38;
    func_0x005467d8();
  }
  func_0x00546684();
  if ((*(ushort *)((long)puStack_b0 + ((ulong)pcStack_c8 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar7 = ((ulong)pcStack_c8 & 7) != 0;
    if (uVar12 != 1) {
LAB_005449d0:
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puStack_b0 + 0x18);
      func_0x005466ec(pcStack_b8);
      UNRECOVERED_JUMPTABLE = pcStack_b8;
      goto LAB_005449e0;
    }
    func_0x00544580();
    do {
      UNRECOVERED_JUMPTABLE = pcStack_d0 + 8;
      uVar20 = *(undefined8 *)pcStack_d0;
      pcStack_d0 = pcVar15;
      FUN_005432f0();
      *(undefined8 *)pcStack_d0 = uVar20;
      func_0x00546988();
      if ((bool)uVar7) goto LAB_005449ec;
      func_0x00545f1c();
      if (pcStack_d0 == (code *)0x0) goto LAB_00544a0c;
      uVar7 = uVar19 <= uStack_84;
    } while (uStack_84 == uVar19);
  }
  else {
    uVar7 = 4 < uVar12;
    if (uVar12 != 5) goto LAB_005449d0;
    func_0x005445b8();
    do {
      UNRECOVERED_JUMPTABLE = pcStack_d0 + 4;
      uVar12 = *(uint *)pcStack_d0;
      pcStack_d0 = pcVar15;
      func_0x00543334();
      *(uint *)pcStack_d0 = uVar12;
      func_0x00546988();
      if ((bool)uVar7) goto LAB_005449ec;
      func_0x00545f1c();
      if (pcStack_d0 == (code *)0x0) goto LAB_00544a0c;
      uVar7 = uVar19 <= uStack_88;
    } while (uStack_88 == uVar19);
  }
  func_0x00546e00();
  if ((bool)uVar7) {
LAB_005449ec:
    uVar2 = *puStack_b0;
    if (uVar2 != 0) {
      *(uint *)(pcStack_b8 + uVar2) = *(uint *)(pcStack_b8 + (uint)uVar2) | uStack_a8;
    }
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x00545754(*(undefined2 *)UNRECOVERED_JUMPTABLE);
  UNRECOVERED_JUMPTABLE = pcStack_d0;
LAB_005449e0:
  func_0x0054638c();
LAB_00545854:
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_01)();
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 00541fa4; end: 0054218b;  */

undefined8 *
FUN_00541fa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,short *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  int extraout_w8;
  uint extraout_w8_00;
  long lVar8;
  uint extraout_w9;
  long extraout_x9;
  short *unaff_x20;
  undefined8 *unaff_x22;
  uint uVar9;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *unaff_x30;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  ushort *in_stack_00000030;
  uint in_stack_00000038;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  
  func_0x0054725c();
  UNRECOVERED_JUMPTABLE_00 = unaff_x30;
  func_0x00546494();
  func_0x00546db4();
  if (!(bool)in_ZR) {
    uVar2 = extraout_w9 & 0x1c0;
    if (uVar2 == 0xc0) {
      if ((param_4 & 7) == 1) {
LAB_00542014:
        if (extraout_w8 == 0x30) {
          func_0x00546ce4();
        }
        else if (extraout_w8 == 0x10) {
          func_0x00545f08(unaff_x24[1]);
          *(uint *)((long)unaff_x22 + extraout_x9) =
               extraout_w8_00 | *(uint *)((long)unaff_x22 + extraout_x9);
        }
        puVar10 = unaff_x22;
        FUN_0053febc();
        bVar5 = 0xbf < uVar2;
        if (uVar2 == 0xc0) {
          *(undefined8 *)((long)puVar10 + (ulong)*unaff_x24) = *unaff_x23;
          lVar8 = 8;
        }
        else {
          *(undefined4 *)((long)puVar10 + (ulong)*unaff_x24) = *(undefined4 *)unaff_x23;
          lVar8 = 4;
        }
        puVar10 = (undefined8 *)((long)unaff_x23 + lVar8);
        func_0x00546c54();
        if (bVar5) {
          if (*unaff_x20 != 0) {
            func_0x00546518();
          }
          return puVar10;
        }
        func_0x00545774(*(undefined2 *)puVar10);
        goto LAB_0054208c;
      }
    }
    else if ((param_4 & 7) == 5) goto LAB_00542014;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x20 + 0x18);
    func_0x00547158();
    unaff_x22 = param_1;
LAB_0054208c:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return unaff_x22;
  }
  func_0x00547158();
  func_0x0054638c();
  while( true ) {
    func_0x00546b54();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x00546494();
    func_0x00547524();
    func_0x00546e98();
    uVar9 = (uint)in_stack_00000018;
    uVar2 = uVar9 & 7;
    uVar6 = uVar2 == 2;
    if (!(bool)uVar6) break;
    puVar10 = in_stack_00000028;
    func_0x005466ec();
    uVar7 = in_stack_00000018;
    func_0x0054638c();
    func_0x005467d8();
    func_0x00546b54();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar6) {
      puVar1 = (undefined4 *)((long)in_stack_00000030 + (uVar7 >> 0x20));
      uVar4 = *(ushort *)((long)puVar1 + 10);
      func_0x00546684();
      func_0x00546648();
      if ((uVar4 & 0x1c0) == 0xc0) {
        FUN_00544580();
        func_0x0054759c();
        FUN_00543378();
      }
      else {
        func_0x005445b8(puVar10,*puVar1,in_stack_00000028);
        func_0x0054759c();
        FUN_00543490();
      }
      if (puVar10 == (undefined8 *)0x0) {
        func_0x00545da0();
        goto LAB_0054583c;
      }
      if ((undefined8 *)*in_stack_00000020 <= puVar10) {
        if (*in_stack_00000030 == 0) {
          return puVar10;
        }
        func_0x00545d80();
        return puVar10;
      }
      func_0x00545754(*(undefined2 *)puVar10);
      func_0x00545d70();
      goto LAB_00545854;
    }
    param_1 = in_stack_00000028;
    func_0x00545d70();
    func_0x005467d8();
  }
  func_0x00546684();
  if ((*(ushort *)((long)in_stack_00000030 + (in_stack_00000018 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar6 = (in_stack_00000018 & 7) != 0;
    if (uVar2 != 1) {
LAB_005449d0:
      UNRECOVERED_JUMPTABLE_00 = *(code **)(in_stack_00000030 + 0x18);
      func_0x005466ec(in_stack_00000028);
      puVar10 = in_stack_00000028;
      goto LAB_005449e0;
    }
    FUN_00544580();
    do {
      puVar10 = in_stack_00000010 + 1;
      uVar11 = *in_stack_00000010;
      in_stack_00000010 = param_1;
      FUN_005432f0();
      *in_stack_00000010 = uVar11;
      func_0x00546988();
      if ((bool)uVar6) goto LAB_005449ec;
      func_0x00545f1c();
      if (in_stack_00000010 == (undefined8 *)0x0) {
LAB_00544a0c:
        func_0x00545da0();
LAB_0054583c:
        if (*param_5 != 0) {
          func_0x0054717c();
        }
        return (undefined8 *)0x0;
      }
      uVar6 = uVar9 <= uStack000000000000005c;
    } while (uStack000000000000005c == uVar9);
  }
  else {
    uVar6 = 4 < uVar2;
    if (uVar2 != 5) goto LAB_005449d0;
    func_0x005445b8();
    do {
      puVar10 = (undefined8 *)((long)in_stack_00000010 + 4);
      uVar3 = *(undefined4 *)in_stack_00000010;
      in_stack_00000010 = param_1;
      func_0x00543334();
      *(undefined4 *)in_stack_00000010 = uVar3;
      func_0x00546988();
      if ((bool)uVar6) goto LAB_005449ec;
      func_0x00545f1c();
      if (in_stack_00000010 == (undefined8 *)0x0) goto LAB_00544a0c;
      uVar6 = uVar9 <= uStack0000000000000058;
    } while (uStack0000000000000058 == uVar9);
  }
  func_0x00546e00();
  if ((bool)uVar6) {
LAB_005449ec:
    uVar4 = *in_stack_00000030;
    if (uVar4 != 0) {
      *(uint *)((long)in_stack_00000028 + (ulong)uVar4) =
           *(uint *)((long)in_stack_00000028 + (ulong)(uint)uVar4) | in_stack_00000038;
    }
    return puVar10;
  }
  func_0x00545754(*(undefined2 *)puVar10);
  puVar10 = in_stack_00000010;
LAB_005449e0:
  func_0x0054638c();
LAB_00545854:
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return puVar10;
}



/* Entry: 0054218c; end: 00542333;  */

undefined8 *
FUN_0054218c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
            ushort *param_5,uint param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *extraout_x8;
  long lVar8;
  short *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *in_stack_00000018;
  
  func_0x00546728();
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
  func_0x00546034();
  func_0x00546e98();
  if (((uint)param_4 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
LAB_005421e4:
    func_0x00545adc();
                    /* WARNING: Could not recover jumptable at 0x0054581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
  uVar2 = *(ushort *)((long)puVar1 + 10);
  uVar3 = uVar2 & 0x30;
  if (uVar3 != 0x20) {
    uVar4 = 0xf < uVar3;
    if (uVar3 == 0x10) {
      func_0x00545d1c(puVar1[1]);
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar4 = 0x2f < uVar3;
      if (uVar3 == 0x30) {
        param_2 = (undefined8 *)(ulong)puVar1[1];
        func_0x00546ae8();
        puVar10 = param_1;
      }
      else {
        puVar10 = (undefined8 *)0x0;
      }
    }
    func_0x00546684();
    if ((uVar2 & 0x1c0) == 0) {
      uVar11 = (ulong)*puVar1;
      if ((int)puVar10 != 0) {
        *(undefined **)((long)param_1 + uVar11) = &DAT_00b69408;
      }
      uVar7 = *(ulong *)(unaff_x21 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      if (uVar7 == 0) {
        unaff_x22 = (undefined8 *)((long)param_1 + uVar11);
        func_0x00547300();
        func_0x005466ec();
        FUN_0054b90c();
      }
      else {
        FUN_00532fc0();
        param_2 = unaff_x24;
      }
      if (unaff_x22 == (undefined8 *)0x0) goto LAB_00542310;
      puVar10 = (undefined8 *)((long)param_1 + uVar11);
      param_1 = unaff_x22;
      func_0x005474a8(*puVar10);
      if ((long)param_2 < 0) {
        param_1 = (undefined8 *)*param_1;
      }
      param_5 = (ushort *)(ulong)(uVar2 & 0x600);
      func_0x00547344();
      puVar10 = (undefined8 *)((ulong)param_1 & 1);
    }
    else {
      uVar4 = 0x2f < uVar3;
      if (uVar3 == 0x30) {
        if ((int)puVar10 == 0) {
          param_1 = *(undefined8 **)(unaff_x21 + (ulong)*puVar1);
        }
        else {
          if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
            func_0x00546c6c();
          }
          func_0x00546860();
          FUN_00543928();
          *(undefined8 **)(unaff_x21 + (ulong)*puVar1) = param_1;
        }
      }
      else {
        param_1 = (undefined8 *)((long)param_1 + (ulong)*puVar1);
      }
      func_0x005466ec();
      func_0x00543834();
      unaff_x22 = param_1;
      puVar10 = param_1;
    }
    if (puVar10 == (undefined8 *)0x0) {
LAB_00542310:
      func_0x00545da0();
LAB_0053b2b8:
      if (*param_5 != 0) {
        func_0x0054717c();
      }
      return (undefined8 *)0x0;
    }
    func_0x00546988();
    if ((bool)uVar4) {
      if (*unaff_x20 != 0) {
        func_0x00545d80();
      }
      return unaff_x22;
    }
    func_0x00545774(*(undefined2 *)unaff_x22);
    goto LAB_005421e4;
  }
  func_0x00545adc();
  func_0x00546398();
  func_0x00546c78();
  func_0x00547524();
  if (((uint)puVar1 & 7) != 2) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
    func_0x00546e28(param_1,param_2);
    goto LAB_00544c14;
  }
  puVar1 = (uint *)((long)param_5 + ((ulong)puVar1 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  puVar12 = param_1;
  FUN_0053febc(param_1,param_5);
  puVar10 = param_2;
  if ((uVar3 & 0x1c0) == 0x100) {
    uVar11 = (ulong)*puVar1;
    puVar9 = *(undefined8 **)((long)puVar12 + uVar11);
    uVar4 = puVar9 == (undefined8 *)&UNK_00810e00;
    puVar10 = puVar12;
    if ((bool)uVar4) {
      puVar9 = (undefined8 *)param_1[1];
      if (((ulong)puVar9 & 1) != 0) {
        func_0x00546c6c();
        puVar9 = extraout_x8;
      }
      puVar10 = &stack0x00000018;
      in_stack_00000018 = puVar9;
      FUN_005385f8();
      *(undefined8 **)((long)puVar12 + uVar11) = puVar10;
      puVar9 = puVar10;
    }
    if (puVar9[2] != 0) {
      func_0x00545d3c();
      func_0x00546270();
      if ((bool)uVar4) {
        puVar12 = (undefined8 *)puVar10[2];
        puVar10 = puVar9;
        func_0x0054387c();
        if ((int)puVar10 != 0) {
          do {
            in_stack_00000018 = param_2;
            func_0x0054648c();
            if (in_stack_00000018 == (undefined8 *)0x0) goto LAB_0053b2b8;
            if (puVar12[5] == 0) {
              puVar6 = puVar12;
              FUN_005505c0();
            }
            else {
              lVar8 = puVar12[5] + -0x18;
              puVar12[5] = lVar8;
              puVar6 = (undefined8 *)(puVar12[4] + lVar8 + 0x10);
            }
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar10 = puVar9;
            func_0x005438a4();
            func_0x00546e34();
            FUN_00533074();
            if (puVar10 == (undefined8 *)0x0) goto LAB_0053b2b8;
            puVar5 = puVar10;
            func_0x00546c30();
            if ((long)puVar6 < 0) {
              puVar5 = (undefined8 *)*puVar5;
            }
            func_0x005466d4();
            if (((ulong)puVar5 & 1) == 0) goto LAB_0053b2b8;
            uVar4 = puVar10 == (undefined8 *)*unaff_x22;
            if ((undefined8 *)*unaff_x22 <= puVar10) goto LAB_00544c58;
            param_2 = puVar10;
            func_0x00546484(puVar10,&stack0x00000014);
            func_0x005473d0();
          } while ((bool)uVar4);
          goto LAB_00544bf4;
        }
      }
    }
    do {
      puVar12 = puVar9;
      func_0x0054d0b8();
      puVar10 = puVar12;
      func_0x00546744();
      if (puVar10 == (undefined8 *)0x0) goto LAB_0053b2b8;
      lVar8 = (long)*(char *)((long)puVar12 + 0x17);
      puVar6 = puVar12;
      if (lVar8 < 0) {
        puVar6 = (undefined8 *)*puVar12;
        lVar8 = puVar12[1];
      }
      func_0x005466d4(puVar6,lVar8);
      if (((ulong)puVar6 & 1) == 0) goto LAB_0053b2b8;
      uVar4 = puVar10 == (undefined8 *)*unaff_x22;
      if ((undefined8 *)*unaff_x22 <= puVar10) goto LAB_00544c58;
      func_0x00546484(puVar10,&stack0x00000014);
      func_0x005473d0();
    } while ((bool)uVar4);
  }
LAB_00544bf4:
  if (puVar10 < (undefined8 *)*unaff_x22) {
    func_0x00545a70(*(undefined2 *)puVar10);
LAB_00544c14:
                    /* WARNING: Could not recover jumptable at 0x00545b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  }
  uVar3 = *param_5;
joined_r0x00544c64:
  if (uVar3 != 0) {
    *(uint *)((long)param_1 + (ulong)uVar3) = *(uint *)((long)param_1 + (ulong)uVar3) | param_6;
  }
  return puVar10;
LAB_00544c58:
  uVar3 = *param_5;
  goto joined_r0x00544c64;
}



/* Entry: 00542334; end: 00542963;  */

/* WARNING: Possible PIC construction at 0x00542820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00542824) */
/* WARNING: Removing unreachable block (ram,0x00542828) */
/* WARNING: Removing unreachable block (ram,0x00542830) */
/* WARNING: Removing unreachable block (ram,0x0054283c) */
/* WARNING: Removing unreachable block (ram,0x00542848) */

ushort * FUN_00542334(ushort *param_1,undefined8 param_2,long param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 extraout_w8_02;
  uint extraout_w8_03;
  undefined4 extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long extraout_x8_01;
  ushort *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *puVar14;
  ushort *extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  uint uVar15;
  ushort *unaff_x21;
  long lVar16;
  ushort *unaff_x24;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  uint uStack_80;
  uint uStack_7c;
  
  func_0x0054768c();
  uVar13 = param_4;
  puVar12 = param_5;
  func_0x00546e98();
  puVar1 = (uint *)((long)puVar12 + (uVar13 >> 0x20));
  uVar4 = *(ushort *)((long)puVar1 + 10);
  puVar18 = (ushort *)(ulong)uVar4;
  uVar2 = uVar4 & 0x30;
  uVar17 = (uint)uVar4;
  uVar15 = (uint)param_4;
  if (uVar2 == 0x20) {
    if ((uVar17 & 0x1c0) == 0x40) {
      if ((uVar15 & 7) == 3) {
        func_0x005469b8();
        func_0x00547278();
        puVar11 = param_1;
        func_0x00546a5c((short)puVar1[2]);
        puVar19 = *(ushort **)(extraout_x9_00 + extraout_x8_00 * 8);
        uVar17 = uVar17 & 0x600;
        cVar9 = SBORROW4(uVar17,0x200);
        iVar10 = uVar17 - 0x200;
        if (uVar17 != 0x200) {
          cVar9 = SBORROW4(uVar17,0x400);
          iVar10 = uVar17 - 0x400;
          if (uVar17 == 0x400) {
            cVar9 = false;
            cVar5 = false;
            do {
              puVar11 = param_1;
              func_0x00546e40();
              func_0x005467c0();
              *(undefined4 *)(param_3 + 0x58) = extraout_w8;
              if (cVar5 != cVar9) goto LAB_0053b2b8;
              func_0x005460c4();
              do {
                func_0x005460e4();
                puVar18 = unaff_x24;
                if ((((ulong)puVar11 & 1) != 0) ||
                   (puVar12 = puVar19, func_0x00545e28(*unaff_x24), puVar18 = puVar11,
                   puVar11 == (ushort *)0x0)) break;
                unaff_x24 = puVar11;
              } while (*(int *)(param_3 + 0x50) == 0);
              if ((*(byte *)((long)puVar19 + 9) & 1) != 0) {
                func_0x0054622c(*(undefined8 *)(puVar19 + 0x14));
                puVar18 = puVar11;
              }
              func_0x00546054();
              bVar8 = uVar15 <= extraout_w8_00;
              if ((extraout_w8_00 != uVar15) || (puVar18 == (ushort *)0x0)) goto LAB_0053b2b8;
              func_0x00546ec8();
              if (bVar8) goto LAB_005428ec;
              func_0x00545f1c();
              if (puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
              uVar7 = uVar15 <= uStack_7c;
              cVar9 = SBORROW4(uStack_7c,uVar15);
              cVar5 = (int)(uStack_7c - uVar15) < 0;
              unaff_x24 = puVar11;
            } while (uStack_7c == uVar15);
            goto LAB_005428a0;
          }
        }
        do {
          cVar5 = iVar10 < 0;
          func_0x00547368();
          func_0x005467c0();
          *(undefined4 *)(param_3 + 0x58) = extraout_w8_04;
          if (cVar5 != cVar9) goto LAB_0053b2b8;
          func_0x005460c4();
          func_0x005466f8();
          func_0x00546054();
          bVar8 = extraout_w8_05 == uVar15;
          if (extraout_w8_05 != uVar15 || puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
          func_0x005469d4();
          if (bVar8) goto LAB_005428ec;
          func_0x00545f1c();
          if (puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
          func_0x00547418();
          uVar7 = uVar15 <= extraout_w8_06;
          cVar9 = SBORROW4(extraout_w8_06,uVar15);
          iVar10 = extraout_w8_06 - uVar15;
        } while (extraout_w8_06 == uVar15);
        goto LAB_005428a0;
      }
    }
    else if (((uVar4 & 0x1c0) == 0) && ((uVar15 & 7) == 2)) {
      func_0x005469b8();
      func_0x00547278();
      puVar11 = param_1;
      func_0x00546a5c((short)puVar1[2]);
      if (((uVar17 & 0x600) == 0x200) || ((uVar17 & 0x600) != 0x400)) {
        func_0x00547368();
        puVar18 = puVar11;
        func_0x00546e50();
        unaff_x30 = 0x542824;
        unaff_x29 = &stack0xfffffffffffffff0;
        goto SUB_0054b6f4;
      }
      lStack_88 = *(long *)(extraout_x9 + extraout_x8 * 8) + 0x38;
      uVar7 = true;
      cVar9 = false;
      iVar10 = 0;
      do {
        uVar6 = 1;
        cVar5 = iVar10 < 0;
        puVar11 = param_1;
        func_0x00546e40();
        func_0x0054648c();
        if ((unaff_x24 == (ushort *)0x0) || (func_0x00546ff4(), (bool)uVar6 || cVar5 != cVar9)) {
LAB_0053b2b8:
          func_0x005473c4();
          func_0x00546628();
          if (*puVar12 != 0) {
            func_0x0054717c();
          }
          return (ushort *)0x0;
        }
        func_0x00545b64();
        func_0x00547424();
        lVar16 = lStack_88;
        puVar18 = unaff_x24;
        while (func_0x005460e4(), ((ulong)puVar11 & 1) == 0) {
          puVar12 = (ushort *)(lVar16 + -0x38);
          func_0x00545e28(*puVar18);
          puVar18 = puVar11;
          if ((puVar11 == (ushort *)0x0) || (*(int *)(param_3 + 0x50) != 0)) break;
        }
        if ((*(byte *)(lVar16 + -0x2f) & 1) != 0) {
          func_0x0054622c(*(undefined8 *)(lVar16 + -0x10));
          puVar18 = puVar11;
        }
        func_0x005464cc();
        uStack_7c = (uint)unaff_x24;
        func_0x00546710();
        if ((((ulong)puVar11 & 1) == 0) || (puVar18 == (ushort *)0x0)) goto LAB_0053b2b8;
        func_0x00546ec8();
        if ((bool)uVar7) goto LAB_005428ec;
        func_0x00545f1c();
        if (puVar11 == (ushort *)0x0) goto LAB_0053b2b8;
        uVar7 = uVar15 <= uStack_80;
        cVar9 = SBORROW4(uStack_80,uVar15);
        iVar10 = uStack_80 - uVar15;
        unaff_x24 = puVar11;
      } while (uStack_80 == uVar15);
LAB_005428a0:
      func_0x00546ec8();
      if ((bool)uVar7) {
LAB_005428ec:
        uVar4 = *param_5;
        if (uVar4 != 0) {
          *(uint *)((long)unaff_x21 + (ulong)uVar4) =
               *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | param_6;
        }
LAB_00542900:
        func_0x00546bf4(puVar18,unaff_x30);
        return puVar18;
      }
      UNRECOVERED_JUMPTABLE =
           *(code **)(param_5 + ((ulong)*puVar18 & (ulong)(byte)param_5[4]) + 0x1c);
      func_0x005464a8();
      unaff_x21 = puVar11;
      goto LAB_005425d8;
    }
  }
  else {
    uVar3 = uVar4 & 0x1c0;
    if (uVar3 == 0x40) {
      if ((uVar15 & 7) == 3) goto LAB_005425a4;
    }
    else if ((uVar4 & 0x1c0) == 0 && (uVar15 & 7) == 2) {
LAB_005425a4:
      if (uVar2 == 0x30) {
        puVar11 = param_5;
        FUN_0053fe0c(param_5,puVar1[1],uVar15 >> 3);
        puVar18 = puVar11;
      }
      else if (uVar2 == 0x10) {
        func_0x00545d1c(puVar1[1]);
        puVar11 = param_1;
        puVar18 = (ushort *)0x0;
      }
      else {
        puVar11 = param_1;
        puVar18 = (ushort *)0x0;
      }
      func_0x005469b8();
      uVar13 = (ulong)*param_5;
      if (uVar13 != 0) {
        *(uint *)((long)unaff_x21 + uVar13) = *(uint *)((long)unaff_x21 + uVar13) | param_6;
      }
      bVar8 = (uVar17 & 0x600) == 0x400;
      if (bVar8) {
        func_0x00546a5c((short)puVar1[2]);
        lVar16 = *(long *)(extraout_x9_01 + extraout_x8_01 * 8);
        if ((((ulong)puVar18 & 1) != 0) ||
           (puVar12 = *(ushort **)((long)extraout_x11 + extraout_x12),
           *(ushort **)((long)extraout_x11 + extraout_x12) == (ushort *)0x0)) {
          puVar11 = *(ushort **)(lVar16 + 0x20);
          if ((*(ulong *)(unaff_x21 + 4) & 1) != 0) {
            func_0x00546808();
          }
          func_0x00545f40();
          *(ushort **)((long)extraout_x11 + extraout_x12) = puVar11;
          unaff_x21 = extraout_x11;
          puVar12 = puVar11;
        }
        cVar5 = SBORROW4(uVar3,0x40);
        cVar9 = (int)(uVar3 - 0x40) < 0;
        uVar7 = uVar3 == 0x40;
        if ((bool)uVar7) {
          func_0x005467c0();
          *(undefined4 *)(param_3 + 0x58) = extraout_w8_01;
          if (cVar9 == cVar5) {
            func_0x005460c4();
            while (func_0x005460e4(), puVar18 = unaff_x24, ((ulong)puVar11 & 1) == 0) {
              func_0x00545f8c(*unaff_x24);
              puVar11 = puVar12;
              func_0x00545f34();
              puVar18 = puVar11;
              if ((puVar11 == (ushort *)0x0) || (unaff_x24 = puVar11, *(int *)(param_3 + 0x50) != 0)
                 ) break;
            }
            if ((*(byte *)(lVar16 + 9) & 1) != 0) {
              func_0x00546e34(*(undefined8 *)(lVar16 + 0x28));
              (*extraout_x8_03)();
              puVar18 = puVar11;
            }
LAB_00542744:
            func_0x005460d4(CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) + -1,
                                     (int)*(undefined8 *)(param_3 + 0x58) + 1));
            if (extraout_w8_03 != uVar15) {
              puVar18 = (ushort *)0x0;
            }
            goto LAB_00542900;
          }
        }
        else {
          func_0x0054648c();
          if ((unaff_x24 != (ushort *)0x0) && (func_0x00546ff4(), !(bool)uVar7 && cVar9 == cVar5)) {
            func_0x00545b64();
            func_0x00546bd4();
            puVar18 = extraout_x8_02;
            do {
              func_0x005460e4();
              if ((((ulong)puVar11 & 1) != 0) ||
                 (func_0x00545af4(*puVar18), puVar18 = puVar11, puVar11 == (ushort *)0x0)) break;
            } while (*(int *)(param_3 + 0x50) == 0);
            if ((*(byte *)(lVar16 + 9) & 1) != 0) {
              func_0x005462c0(*(undefined8 *)(lVar16 + 0x28));
              puVar18 = puVar11;
            }
            iVar10 = (int)puVar11;
            func_0x005464cc();
            uStack_7c = (uint)unaff_x21;
            func_0x00546710();
            if (iVar10 == 0) {
              puVar18 = (ushort *)0x0;
            }
            goto LAB_00542900;
          }
        }
      }
      else {
        if ((((ulong)puVar18 & 1) != 0) ||
           (puVar18 = *(ushort **)((long)puVar11 + (ulong)*puVar1),
           *(ushort **)((long)puVar11 + (ulong)*puVar1) == (ushort *)0x0)) {
          func_0x005473a4();
          puVar14 = extraout_x9_02;
          if (!bVar8) {
            puVar14 = (undefined8 *)*extraout_x9_02;
          }
          puVar11 = (ushort *)*puVar14;
          if ((*(ulong *)(unaff_x21 + 4) & 1) != 0) {
            func_0x00546808();
          }
          func_0x00545f40();
          *(ushort **)(extraout_x11_00 + extraout_x12_00) = puVar11;
          puVar18 = puVar11;
        }
        cVar5 = SBORROW4(uVar3,0x40);
        cVar9 = (int)(uVar3 - 0x40) < 0;
        if (uVar3 != 0x40) {
          func_0x00546e50();
          func_0x00546628();
SUB_0054b6f4:
          puVar19 = puVar11;
          uStack_b0 = param_4;
          lStack_a8 = param_3;
          puStack_a0 = unaff_x29;
          uStack_98 = unaff_x30;
          func_0x0054b68c();
          puVar12 = (ushort *)0x0;
          if (puVar19 != (ushort *)0x0) {
            FUN_00549a60(puVar18,puVar19,puVar11);
            *(int *)(puVar11 + 0x2c) = *(int *)(puVar11 + 0x2c) + 1;
            uStack_b8 = uStack_b4;
            FUN_005439fc(puVar11,&uStack_b8);
            puVar12 = puVar18;
            if ((int)puVar11 == 0) {
              puVar12 = (ushort *)0x0;
            }
          }
          return puVar12;
        }
        func_0x005467c0();
        *(undefined4 *)(param_3 + 0x58) = extraout_w8_02;
        if (cVar9 == cVar5) {
          func_0x005460c4();
          func_0x005466f8(puVar18);
          goto LAB_00542744;
        }
      }
      puVar18 = (ushort *)0x0;
      goto LAB_00542900;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
LAB_005425d8:
  func_0x005473c4();
  func_0x00546628();
                    /* WARNING: Could not recover jumptable at 0x005425ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return unaff_x21;
}



/* Entry: 00542964; end: 00542c73;  */

void FUN_00542964(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x9;
  ulong uVar2;
  long unaff_x24;
  long lVar3;
  
  uVar1 = (uint)param_4;
  func_0x00546b3c();
  uVar2 = *(ulong *)(extraout_x9 + extraout_x8 * 8);
  if (((uVar2 >> 0x10 & 1) != 0) && ((uVar1 & 7) == 2)) {
    FUN_0053febc(param_1,param_5);
    lVar3 = param_1 + (ulong)*(uint *)(param_5 + (param_4 >> 0x20));
    if ((((uint)uVar2 >> 0x10 & 0xff) >> 1 & 1) == 0) {
      func_0x00546d3c();
      lVar3 = param_1;
    }
    func_0x00547658();
    func_0x00543a30(lVar3,uVar2 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x00542a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(FUN_00542c74 + unaff_x24 * 4) + 0x542a10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0053b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x30))(param_1,param_2,param_3);
  return;
}



/* Entry: 00542c74; end: 00542cab;  */

void FUN_00542c74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x542c74);
  (*pcVar1)();
}



/* Entry: 00542cac; end: 00542f6b;  */

code * FUN_00542cac(code *param_1,code *param_2,undefined8 *param_3,code *param_4,ushort *param_5,
                   uint param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  code *pcVar16;
  ushort *puVar17;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  int extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  ulong uVar18;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar19;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  uint extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar20;
  ulong extraout_x9_03;
  long extraout_x9_04;
  long extraout_x11;
  int iVar21;
  code *unaff_x21;
  int iVar22;
  uint uVar23;
  uint *unaff_x24;
  undefined8 uVar24;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_w27;
  uint unaff_w28;
  undefined8 unaff_x29;
  code *UNRECOVERED_JUMPTABLE_02;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ushort *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  code *in_stack_00000068;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  ushort *puStack_a0;
  code *pcStack_98;
  undefined4 auStack_80 [2];
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_58;
  code *pcStack_48;
  uint *puStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  undefined8 uStack_10;
  code *pcStack_8;
  
  while( true ) {
    func_0x00546728();
    in_stack_00000060 = unaff_x29;
    in_stack_00000068 = UNRECOVERED_JUMPTABLE_02;
    func_0x00546878();
    if (((ulong)param_4 & 7) == 0) break;
    if (((uint)param_4 & 7) != 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x21 + 0x30);
      func_0x00547518();
      func_0x005464c0();
                    /* WARNING: Could not recover jumptable at 0x0054581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    pcVar12 = param_1;
    UNRECOVERED_JUMPTABLE_01 = param_2;
    func_0x00547518();
    puVar14 = param_3;
    pcVar16 = param_4;
    func_0x005464c0();
    uVar24 = in_stack_00000060;
    pcVar15 = in_stack_00000068;
    func_0x00546398();
    uStack_10 = uVar24;
    UNRECOVERED_JUMPTABLE = (code *)&uStack_10;
    UNRECOVERED_JUMPTABLE_00 = pcVar12;
    puVar13 = puVar14;
    pcStack_48 = param_2;
    puStack_40 = unaff_x24;
    puStack_38 = param_3;
    pcStack_30 = param_4;
    pcStack_28 = unaff_x21;
    pcStack_20 = param_1;
    pcStack_8 = pcVar15;
    func_0x00545e60();
    uVar18 = (ulong)pcVar16 & 7;
    cVar8 = SBORROW8(uVar18,2);
    cVar9 = (long)(uVar18 - 2) < 0;
    uVar10 = uVar18 == 2;
    if ((bool)uVar10) {
      puVar1 = (uint *)((long)param_5 + ((ulong)pcVar16 >> 0x20));
      uVar3 = *(ushort *)((long)puVar1 + 10);
      uVar18 = (ulong)*param_5;
      if (uVar18 != 0) {
        *(uint *)(pcVar12 + uVar18) = *(uint *)(pcVar12 + uVar18) | param_6;
      }
      uVar4 = uVar3 >> 6 & 7;
      uStack_58 = extraout_x8;
      if ((uVar3 >> 6 & 7) == 0) {
        param_4 = (code *)(ulong)*puVar1;
        func_0x00546458();
        func_0x00546fe8();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        pcVar15 = pcVar16;
        puVar17 = param_5;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
        goto LAB_005409f4;
      }
      cVar8 = SBORROW4(uVar4,2);
      cVar9 = (int)(uVar4 - 2) < 0;
      uVar10 = uVar4 == 2;
      if (!(bool)uVar10) {
        param_4 = (code *)(ulong)*puVar1;
        if ((uVar3 & 0x600) == 0) {
          func_0x00546458();
          func_0x00546fe8();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar15 = pcVar16;
          puVar17 = param_5;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
          goto LAB_00540a84;
        }
        func_0x00546458();
        func_0x00546fe8();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        pcVar15 = pcVar16;
        puVar17 = param_5;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
        goto LAB_00540a40;
      }
      switch(uVar3 & 0x600) {
      default:
        func_0x00546458();
        pcVar15 = pcVar16;
        puVar17 = param_5;
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
        goto code_r0x00540978;
      case 0x200:
      case 0x220:
      case 0x240:
      case 0x260:
      case 0x280:
      case 0x2a0:
      case 0x2c0:
      case 0x2e0:
      case 0x300:
      case 800:
      case 0x340:
      case 0x360:
      case 0x380:
      case 0x3a0:
      case 0x3c0:
      case 0x3e0:
        func_0x00546458();
        pcVar15 = pcVar16;
        puVar17 = param_5;
        pcVar12 = UNRECOVERED_JUMPTABLE_00;
        if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
        goto code_r0x00540b8c;
      case 0x400:
      case 0x420:
      case 0x440:
      case 0x460:
      case 0x480:
      case 0x4a0:
      case 0x4c0:
      case 0x4e0:
      case 0x500:
      case 0x520:
      case 0x540:
      case 0x560:
      case 0x580:
      case 0x5a0:
      case 0x5c0:
      case 0x5e0:
        func_0x00546b3c();
        pcStack_b0 = *(code **)(extraout_x9 + extraout_x8_00 * 8);
        pcVar15 = pcVar16;
        puVar17 = param_5;
        func_0x0054648c();
        func_0x00547134();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        pcStack_b8 = UNRECOVERED_JUMPTABLE_01;
        pcStack_a8 = pcVar12;
        puStack_a0 = param_5;
        pcStack_98 = pcVar16;
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
        goto code_r0x00540ae0;
      case 0x600:
      case 0x620:
      case 0x640:
      case 0x660:
      case 0x680:
      case 0x6a0:
      case 0x6c0:
      case 0x6e0:
      case 0x700:
      case 0x720:
      case 0x740:
      case 0x760:
      case 0x780:
      case 0x7a0:
      case 0x7c0:
      case 0x7e0:
        goto code_r0x00540b1c;
      }
    }
    func_0x005459dc(extraout_x8);
    uVar7 = uVar10;
    if (!(bool)uVar10) goto LAB_00540d4c;
    func_0x0054660c();
    param_1 = UNRECOVERED_JUMPTABLE_00;
    param_2 = UNRECOVERED_JUMPTABLE_01;
    param_3 = puVar13;
    param_4 = pcVar16;
    unaff_x21 = pcStack_28;
    unaff_x24 = puStack_40;
    unaff_x29 = uStack_10;
    UNRECOVERED_JUMPTABLE_02 = pcStack_8;
  }
  UNRECOVERED_JUMPTABLE = unaff_x21 + ((ulong)param_4 >> 0x20);
  uVar3 = *(ushort *)(UNRECOVERED_JUMPTABLE + 10);
  uVar5 = uVar3 >> 6 & 7;
  if (uVar5 == 0) {
    uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = param_1;
    do {
      pcVar12 = UNRECOVERED_JUMPTABLE;
      func_0x005461d0();
      if (pcVar12 == (code *)0x0) goto LAB_00542f48;
      uVar7 = 1;
      uVar10 = CONCAT44(in_stack_0000000c,in_stack_00000008) == 0;
      UNRECOVERED_JUMPTABLE = param_1 + uVar4;
      FUN_00534404(UNRECOVERED_JUMPTABLE,!(bool)uVar10);
      func_0x00546da8();
      if ((bool)uVar7) break;
      func_0x00545e18();
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
      func_0x005463b4();
    } while ((bool)uVar10);
  }
  else {
    uVar7 = 1 < uVar5;
    uVar10 = uVar5 == 2;
    if ((bool)uVar10) {
      switch(uVar3 & 0x600) {
      default:
        uVar10 = 1;
        do {
          pcVar12 = param_1;
          uVar7 = 1;
          func_0x005461d0();
          if (pcVar12 == (code *)0x0) goto LAB_00542f48;
          param_1 = pcVar12;
          func_0x00546fc4();
          func_0x00546da8();
          if ((bool)uVar10) break;
          func_0x00545e18();
          if (param_1 == (code *)0x0) goto LAB_00542f48;
          func_0x005463b4();
        } while ((bool)uVar7);
        break;
      case 0x200:
      case 0x220:
      case 0x240:
      case 0x260:
      case 0x280:
      case 0x2a0:
      case 0x2c0:
      case 0x2e0:
      case 0x300:
      case 800:
      case 0x340:
      case 0x360:
      case 0x380:
      case 0x3a0:
      case 0x3c0:
      case 0x3e0:
        uVar10 = 1;
        do {
          pcVar12 = param_1;
          uVar7 = 1;
          func_0x005461d0();
          if (pcVar12 == (code *)0x0) goto LAB_00542f48;
          param_1 = pcVar12;
          func_0x00546aac();
          func_0x00546fc4();
          func_0x00546da8();
          if ((bool)uVar10) break;
          func_0x00545e18();
          if (param_1 == (code *)0x0) goto LAB_00542f48;
          func_0x005463b4();
        } while ((bool)uVar7);
        break;
      case 0x400:
      case 0x420:
      case 0x440:
      case 0x460:
      case 0x480:
      case 0x4a0:
      case 0x4c0:
      case 0x4e0:
      case 0x500:
      case 0x520:
      case 0x540:
      case 0x560:
      case 0x580:
      case 0x5a0:
      case 0x5c0:
      case 0x5e0:
        func_0x00547610();
        do {
          pcVar12 = param_1;
          uVar11 = uVar10;
          func_0x005461d0();
          if (pcVar12 == (code *)0x0) goto LAB_00542f48;
          UNRECOVERED_JUMPTABLE = pcVar12;
          func_0x0054675c();
          if ((bool)uVar7) {
            func_0x00546a04();
            if ((bool)uVar7) {
              func_0x005469f0();
              uVar18 = extraout_x8_03;
              uVar20 = extraout_x9_02;
              do {
                uVar7 = uVar20 <= uVar18;
                cVar8 = SBORROW8(uVar18,uVar20);
                cVar9 = (long)(uVar18 - uVar20) < 0;
                uVar11 = uVar18 == uVar20;
                if ((bool)uVar7) goto FUN_0053df24;
                func_0x00547068();
                lVar19 = extraout_x11;
                if ((bool)uVar11 || cVar9 != cVar8) {
                  lVar19 = extraout_x11 + 1;
                }
                uVar18 = lVar19 + extraout_x8_04 * 2;
                uVar20 = extraout_x9_03;
              } while (!(bool)uVar11);
            }
            else {
              func_0x00547098();
              if ((extraout_x8_02 & 1) == 0) goto FUN_0053df24;
            }
          }
          func_0x00546fc4();
          func_0x00546da8();
          if ((bool)uVar7) break;
          func_0x00545e18();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
          func_0x005463b4();
          uVar10 = 1;
          param_1 = UNRECOVERED_JUMPTABLE;
        } while ((bool)uVar11);
        break;
      case 0x600:
      case 0x620:
      case 0x640:
      case 0x660:
      case 0x680:
      case 0x6a0:
      case 0x6c0:
      case 0x6e0:
      case 0x700:
      case 0x720:
      case 0x740:
      case 0x760:
      case 0x780:
      case 0x7a0:
      case 0x7c0:
      case 0x7e0:
        func_0x00547610();
        func_0x005470c8(*(undefined8 *)(extraout_x9_04 + extraout_x8_05 * 8));
        do {
          UNRECOVERED_JUMPTABLE = param_1;
          func_0x005461d0();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
          param_2 = (code *)(ulong)in_stack_00000008;
          uVar10 = (int)in_stack_00000008 < unaff_w27 || unaff_w28 == in_stack_00000008;
          uVar7 = unaff_w27 <= (int)in_stack_00000008 && in_stack_00000008 <= unaff_w28;
          if ((int)in_stack_00000008 < unaff_w27 || (int)unaff_w28 <= (int)in_stack_00000008)
          goto FUN_0053df24;
          param_1 = UNRECOVERED_JUMPTABLE;
          func_0x00546fc4();
          func_0x00546da8();
          pcVar12 = UNRECOVERED_JUMPTABLE;
          if ((bool)uVar7) break;
          func_0x00545e18();
          if (param_1 == (code *)0x0) goto LAB_00542f48;
          func_0x005463b4();
        } while ((bool)uVar10);
      }
    }
    else if ((uVar3 & 0x600) == 0) {
      uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
      UNRECOVERED_JUMPTABLE = param_1;
      do {
        pcVar12 = UNRECOVERED_JUMPTABLE;
        uVar11 = uVar10;
        func_0x005461d0();
        if (pcVar12 == (code *)0x0) goto LAB_00542f48;
        UNRECOVERED_JUMPTABLE = param_1 + uVar4;
        FUN_00534008(UNRECOVERED_JUMPTABLE,CONCAT44(in_stack_0000000c,in_stack_00000008));
        func_0x00546da8();
        if ((bool)uVar7) break;
        func_0x00545e18();
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
        func_0x005463b4();
        uVar10 = true;
      } while ((bool)uVar11);
    }
    else {
      uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
      UNRECOVERED_JUMPTABLE = param_1;
      do {
        pcVar12 = UNRECOVERED_JUMPTABLE;
        uVar11 = uVar10;
        func_0x005461d0();
        if (pcVar12 == (code *)0x0) goto LAB_00542f48;
        func_0x00546564();
        UNRECOVERED_JUMPTABLE = param_1 + uVar4;
        FUN_00534008();
        func_0x00546da8();
        if ((bool)uVar7) break;
        func_0x00545e18();
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00542f48;
        func_0x005463b4();
        uVar10 = true;
      } while ((bool)uVar11);
    }
  }
  if (*(short *)unaff_x21 != 0) {
    func_0x005463c4();
  }
  return pcVar12;
LAB_00542f48:
  func_0x005461dc();
  goto LAB_0053b2b8;
LAB_005409f4:
  func_0x00546554();
  if ((bool)uVar10 || cVar9 != cVar8) goto LAB_00540bcc;
  func_0x00543168();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00545eb4();
  if ((bool)uVar10 || cVar9 != cVar8) {
    func_0x00545900();
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
    func_0x00546528();
    func_0x00543168();
    goto LAB_00540c40;
  }
  func_0x005464b4();
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (cVar9 != cVar8) goto LAB_00540d18;
  func_0x00546414();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00546134();
  goto LAB_005409f4;
LAB_00540bcc:
  func_0x00547108();
  func_0x00543168();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  UNRECOVERED_JUMPTABLE_00 = pcVar12;
  goto LAB_00540c90;
code_r0x00540b1c:
  func_0x00546b3c();
  pcStack_b0 = *(code **)(extraout_x9_00 + extraout_x8_01 * 8);
  pcVar15 = pcVar16;
  puVar17 = param_5;
  func_0x0054648c();
  func_0x00547134();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcStack_b8 = UNRECOVERED_JUMPTABLE_01;
  pcStack_a8 = pcVar12;
  puStack_a0 = param_5;
  pcStack_98 = pcVar16;
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    while (func_0x005461ec(), !(bool)uVar10 && cVar9 == cVar8) {
      func_0x0054310c();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
      func_0x00545c10();
      if ((bool)uVar10 || cVar9 != cVar8) {
        func_0x00545db0();
        func_0x00545738();
        if (pcStack_d0 != (code *)0x0) goto code_r0x00540d68;
        func_0x0054606c();
        func_0x0054310c();
        goto code_r0x00540ccc;
      }
      func_0x005464b4();
      if (cVar9 != cVar8) goto LAB_00540d18;
      func_0x00546414();
      if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
      func_0x0054620c();
      UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
      pcStack_b8 = pcStack_d0;
    }
    func_0x00546784();
    func_0x0054310c();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE_00 = pcVar12;
    goto LAB_00540c90;
  }
  goto LAB_00540d1c;
code_r0x00540ae0:
  func_0x005461ec();
  if (!(bool)uVar10 && cVar9 == cVar8) {
    func_0x0054307c();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
    func_0x00545c10();
    if (!(bool)uVar10 && cVar9 == cVar8) {
      func_0x005464b4();
      if (cVar9 == cVar8) {
        func_0x00546414();
        if (pcStack_d0 != (code *)0x0) goto code_r0x00540b10;
        goto LAB_00540d1c;
      }
      goto LAB_00540d18;
    }
    func_0x00545db0();
    func_0x00545738();
    if (pcStack_d0 == (code *)0x0) {
      func_0x0054606c();
      func_0x0054307c();
code_r0x00540ccc:
      uVar10 = pcStack_d0 == pcVar12;
      pcStack_a8 = pcVar12;
      if (!(bool)uVar10) goto LAB_00540d18;
      func_0x00546fb8();
      goto LAB_00540d1c;
    }
    goto code_r0x00540d68;
  }
  goto code_r0x00540c54;
code_r0x00540b10:
  func_0x0054620c();
  UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
  pcStack_b8 = pcStack_d0;
  goto code_r0x00540ae0;
code_r0x00540c54:
  func_0x00546784();
  func_0x0054307c();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  UNRECOVERED_JUMPTABLE_00 = pcVar12;
  goto LAB_00540c90;
code_r0x00540b8c:
  param_4 = (code *)(puVar14[1] - (long)pcStack_d0);
  iVar21 = (int)UNRECOVERED_JUMPTABLE_00;
  iVar22 = (int)param_4;
  cVar8 = SBORROW4(iVar21,iVar22);
  cVar9 = iVar21 - iVar22 < 0;
  uVar10 = iVar21 == iVar22;
  if (iVar21 <= iVar22) goto code_r0x00540c80;
  func_0x00543034();
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
  func_0x005471ec();
  if ((bool)uVar10 || cVar9 != cVar8) {
    func_0x00545b88();
    auStack_80[0] = (int)unaff_x24;
    func_0x00545994();
    if (pcStack_d0 != (code *)0x0) goto LAB_00540d50;
    func_0x005471bc();
    func_0x00543034();
    goto code_r0x00540d10;
  }
  func_0x005464b4();
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (cVar9 != cVar8) goto LAB_00540d18;
  func_0x00546414();
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
  func_0x005475d0();
  goto code_r0x00540b8c;
code_r0x00540c80:
  func_0x00543034();
  pcVar15 = pcVar16;
  puVar17 = param_5;
  goto LAB_00540c90;
code_r0x00540978:
  param_4 = (code *)(puVar14[1] - (long)pcStack_d0);
  iVar21 = (int)UNRECOVERED_JUMPTABLE_00;
  iVar22 = (int)param_4;
  cVar8 = SBORROW4(iVar21,iVar22);
  cVar9 = iVar21 - iVar22 < 0;
  uVar10 = iVar21 == iVar22;
  if (iVar22 < iVar21) {
    func_0x00542ff4();
    pcVar15 = pcVar16;
    puVar17 = param_5;
    if (pcStack_d0 == (code *)0x0) goto LAB_00540d1c;
    func_0x005471ec();
    if (!(bool)uVar10 && cVar9 == cVar8) {
      func_0x005464b4();
      pcVar15 = pcVar16;
      puVar17 = param_5;
      if (cVar9 == cVar8) {
        func_0x00546414();
        pcVar15 = pcVar16;
        puVar17 = param_5;
        if (pcStack_d0 != (code *)0x0) goto code_r0x005409b0;
        goto LAB_00540d1c;
      }
      goto LAB_00540d18;
    }
    func_0x00545b88();
    auStack_80[0] = (int)unaff_x24;
    func_0x00545994();
    if (pcStack_d0 == (code *)0x0) {
      func_0x005471bc();
      func_0x00542ff4();
code_r0x00540d10:
      uVar10 = pcStack_d0 == UNRECOVERED_JUMPTABLE_00;
      pcVar15 = pcVar16;
      puVar17 = param_5;
      pcVar12 = UNRECOVERED_JUMPTABLE_00;
      if (!(bool)uVar10) goto LAB_00540d18;
      func_0x00546884();
      pcVar15 = pcVar16;
      puVar17 = param_5;
      goto LAB_00540d1c;
    }
    goto LAB_00540d50;
  }
  func_0x00542ff4();
  pcVar15 = pcVar16;
  puVar17 = param_5;
  goto LAB_00540c90;
code_r0x005409b0:
  func_0x005475d0();
  goto code_r0x00540978;
LAB_00540a40:
  func_0x00546554();
  if ((bool)uVar10 || cVar9 != cVar8) goto LAB_00540bf4;
  func_0x00542fac();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00545eb4();
  if ((bool)uVar10 || cVar9 != cVar8) {
    func_0x00545900();
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
    func_0x00546528();
    func_0x00542fac();
    goto LAB_00540c40;
  }
  func_0x005464b4();
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (cVar9 != cVar8) goto LAB_00540d18;
  func_0x00546414();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00546134();
  goto LAB_00540a40;
LAB_00540bf4:
  func_0x00547108();
  func_0x00542fac();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  UNRECOVERED_JUMPTABLE_00 = pcVar12;
  goto LAB_00540c90;
LAB_00540a84:
  func_0x00546554();
  if ((bool)uVar10 || cVar9 != cVar8) goto LAB_00540c1c;
  func_0x00542f6c();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_00540d1c;
  func_0x00545eb4();
  if (!(bool)uVar10 && cVar9 == cVar8) {
    func_0x005464b4();
    pcVar15 = pcVar16;
    puVar17 = param_5;
    if (cVar9 == cVar8) {
      func_0x00546414();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar15 = pcVar16;
      puVar17 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto code_r0x00540ab4;
      goto LAB_00540d1c;
    }
    goto LAB_00540d18;
  }
  func_0x00545900();
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_00540d50;
  func_0x00546528();
  func_0x00542f6c();
LAB_00540c40:
  uVar10 = UNRECOVERED_JUMPTABLE_00 == unaff_x21;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  if ((bool)uVar10) {
    pcStack_d0 = param_2 + puVar14[1];
    goto LAB_00540d1c;
  }
LAB_00540d18:
  pcStack_d0 = (code *)0x0;
  goto LAB_00540d1c;
code_r0x00540ab4:
  func_0x00546134();
  goto LAB_00540a84;
LAB_005432e4:
  func_0x00545da0();
  param_5 = puVar17;
  goto LAB_0053b2b8;
FUN_0053df24:
  func_0x00547518();
  func_0x005464c0();
  uVar24 = in_stack_00000058;
  puVar17 = in_stack_00000048;
  func_0x00546878();
  FUN_00538888(param_2,&stack0x00000028);
  if (param_2 != (code *)0x0) {
    FUN_0053dee0(UNRECOVERED_JUMPTABLE,*(undefined8 *)(puVar17 + 0x18),param_4,in_stack_00000028);
    func_0x0054686c();
    if ((bool)uVar7) {
      uVar18 = (ulong)*puVar17;
      if (uVar18 != 0) {
        *(uint *)(UNRECOVERED_JUMPTABLE + uVar18) =
             *(uint *)(UNRECOVERED_JUMPTABLE + uVar18) | (uint)uVar24;
      }
      return param_2;
    }
    func_0x00545a70(*(short *)param_2);
    func_0x005464c0(UNRECOVERED_JUMPTABLE,param_2,param_3);
LAB_00546444:
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x005461dc();
LAB_0053b2b8:
  if (*param_5 != 0) {
    func_0x0054717c();
  }
  return (code *)0x0;
LAB_00540c1c:
  func_0x00547108();
  func_0x00542f6c();
  pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
  pcVar15 = pcVar16;
  puVar17 = param_5;
  UNRECOVERED_JUMPTABLE_00 = pcVar12;
LAB_00540c90:
  func_0x00546670();
  pcVar12 = UNRECOVERED_JUMPTABLE_00;
LAB_00540d1c:
  func_0x005459dc(uStack_58);
  uVar7 = 0;
  pcVar16 = pcVar15;
  param_5 = puVar17;
  if ((bool)uVar10) {
    return pcStack_d0;
  }
LAB_00540d4c:
  uVar10 = uVar7;
  ___stack_chk_fail();
LAB_00540d50:
  func_0x00533528();
  func_0x00545ac8();
  func_0x005464a0(auStack_80);
  pcStack_d0 = (code *)auStack_80;
  FUN_005558a0(pcStack_d0);
  pcVar15 = pcVar16;
  puVar17 = param_5;
code_r0x00540d68:
  func_0x00533528();
  func_0x00545820();
  func_0x00546618();
  UNRECOVERED_JUMPTABLE_01 = (code *)0x540d74;
  func_0x0054725c();
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_01;
  func_0x00546494();
  func_0x00546db4();
  if (!(bool)uVar10) {
    uVar4 = extraout_w9 & 0x1c0;
    uVar23 = (uint)pcVar15 & 7;
    if (uVar4 == 0xc0) {
      if (uVar23 == 1) {
LAB_00540de4:
        if (extraout_w8 == 0x30) {
          func_0x00546ce4();
        }
        else if (extraout_w8 == 0x10) {
          func_0x00545f08(unaff_x24[1]);
          *(uint *)(param_4 + extraout_x9_01) = extraout_w8_00 | *(uint *)(param_4 + extraout_x9_01)
          ;
        }
        bVar6 = 0xbf < uVar4;
        if (uVar4 == 0xc0) {
          *(undefined8 *)(param_4 + *unaff_x24) = *param_3;
          lVar19 = 8;
        }
        else {
          *(undefined4 *)(param_4 + *unaff_x24) = *(undefined4 *)param_3;
          lVar19 = 4;
        }
        UNRECOVERED_JUMPTABLE = (code *)((long)param_3 + lVar19);
        func_0x00546c54();
        if (bVar6) {
          if (*(short *)pcVar12 != 0) {
            func_0x00546518();
          }
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x00545774(*(undefined2 *)UNRECOVERED_JUMPTABLE);
        goto LAB_00540e50;
      }
    }
    else if (uVar23 == 5) goto LAB_00540de4;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(pcVar12 + 0x30);
    func_0x00547158();
    param_4 = pcStack_d0;
LAB_00540e50:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return param_4;
  }
  func_0x00547158();
  func_0x0054638c();
  while( true ) {
    func_0x00546b54();
    pcStack_30 = UNRECOVERED_JUMPTABLE;
    pcStack_28 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546494();
    func_0x00547524();
    func_0x005467cc();
    uVar23 = (uint)pcStack_b8;
    uVar4 = uVar23 & 7;
    uVar10 = uVar4 == 2;
    if (!(bool)uVar10) break;
    func_0x00546588();
    func_0x00546e28();
    func_0x0054638c();
    UNRECOVERED_JUMPTABLE = pcStack_30;
    UNRECOVERED_JUMPTABLE_01 = pcStack_28;
    func_0x005467d8();
    UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_01;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar10) {
      puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcVar15 >> 0x20));
      uVar3 = *(ushort *)((long)puVar1 + 10);
      func_0x00546648();
      UNRECOVERED_JUMPTABLE = pcStack_b0;
      if ((uVar3 & 0x1c0) == 0xc0) {
        FUN_00543378();
      }
      else {
        FUN_00543490(pcStack_b0,pcStack_c8,pcStack_d0,pcStack_a8 + *puVar1);
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        func_0x00545da0();
        param_5 = puVar17;
        goto LAB_0053b2b8;
      }
      if (*(code **)pcStack_b0 <= UNRECOVERED_JUMPTABLE) {
        if (*puStack_a0 == 0) {
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x00545d80();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x00545754(*(short *)UNRECOVERED_JUMPTABLE);
      func_0x00545d70();
      goto LAB_00546444;
    }
    pcStack_d0 = pcStack_a8;
    func_0x00545d70(pcStack_a8);
  }
  puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcStack_b8 >> 0x20));
  if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
    uVar10 = ((ulong)pcStack_b8 & 7) != 0;
    if (uVar4 != 1) {
LAB_005432ac:
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puStack_a0 + 0x18);
      func_0x00546588();
      func_0x00546e28();
      goto LAB_005432b8;
    }
    uVar4 = *puVar1;
    do {
      UNRECOVERED_JUMPTABLE = pcStack_c8 + 8;
      uVar24 = *(undefined8 *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar4;
      FUN_005432f0();
      *(undefined8 *)pcStack_d0 = uVar24;
      func_0x00546e00();
      if ((bool)uVar10) goto LAB_005432c4;
      func_0x00546090();
      if (pcStack_d0 == (code *)0x0) goto LAB_005432e4;
      uVar10 = uVar23 <= uStack_74;
      pcStack_c8 = pcStack_d0;
    } while (uStack_74 == uVar23);
  }
  else {
    if (uVar4 != 5) goto LAB_005432ac;
    uVar4 = *puVar1;
    uVar10 = true;
    do {
      UNRECOVERED_JUMPTABLE = pcStack_c8 + 4;
      uVar2 = *(undefined4 *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar4;
      func_0x00543334();
      *(undefined4 *)pcStack_d0 = uVar2;
      func_0x00546e00();
      if ((bool)uVar10) goto LAB_005432c4;
      func_0x00546090();
      if (pcStack_d0 == (code *)0x0) goto LAB_005432e4;
      uVar10 = uVar23 <= uStack_78;
      pcStack_c8 = pcStack_d0;
    } while (uStack_78 == uVar23);
  }
  func_0x00546988();
  if ((bool)uVar10) {
LAB_005432c4:
    uVar3 = *puStack_a0;
    if (uVar3 != 0) {
      *(uint *)(pcStack_a8 + uVar3) = *(uint *)(pcStack_a8 + (uint)uVar3) | (uint)pcStack_98;
    }
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x00545754(*(short *)UNRECOVERED_JUMPTABLE);
  func_0x005466ec();
LAB_005432b8:
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_01)();
  return pcStack_d0;
}



/* Entry: 00542f6c; end: 005431a7;  */

ulong FUN_00542f6c(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x21;
  
  func_0x00545d90();
  while ((unaff_x19 < unaff_x21 && (func_0x00545cd0(), unaff_x19 = param_1, param_1 != 0))) {
    func_0x00546b6c();
  }
  return unaff_x19;
}



/* Entry: 005431a8; end: 005432ef;  */

undefined8 *
FUN_005431a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  uint unaff_w19;
  ushort *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar6;
  ulong unaff_x23;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  undefined8 *puVar8;
  code *unaff_x30;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  undefined8 uStack_48;
  
  while( true ) {
    func_0x00546b54();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x00546494();
    func_0x00547524();
    func_0x005467cc();
    uVar6 = (uint)unaff_x23;
    uVar2 = uVar6 & 7;
    uVar5 = uVar2 == 2;
    if (!(bool)uVar5) break;
    func_0x00546588();
    func_0x00546e28();
    func_0x0054638c();
    func_0x005467d8();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar5) {
      puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
      uVar4 = *(ushort *)((long)puVar1 + 10);
      func_0x00546648();
      puVar8 = unaff_x22;
      if ((uVar4 & 0x1c0) == 0xc0) {
        FUN_00543378();
      }
      else {
        FUN_00543490(unaff_x22,uStack_48,param_1,(long)unaff_x21 + (ulong)*puVar1);
      }
      if (puVar8 != (undefined8 *)0x0) {
        if ((undefined8 *)*unaff_x22 <= puVar8) {
          if (*unaff_x20 != 0) {
            func_0x00545d80();
          }
          return puVar8;
        }
        func_0x00545754(*(undefined2 *)puVar8);
        func_0x00545d70();
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return puVar8;
      }
      func_0x00545da0();
      goto LAB_0053b2b8;
    }
    param_1 = unaff_x21;
    func_0x00545d70(unaff_x21);
  }
  puVar1 = (uint *)((long)unaff_x20 + (unaff_x23 >> 0x20));
  if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
    uVar5 = (unaff_x23 & 7) != 0;
    if (uVar2 != 1) {
LAB_005432ac:
      UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x20 + 0x18);
      func_0x00546588();
      func_0x00546e28();
      goto LAB_005432b8;
    }
    uVar2 = *puVar1;
    param_1 = unaff_x25;
    do {
      puVar8 = param_1 + 1;
      uVar7 = *param_1;
      param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
      FUN_005432f0();
      *param_1 = uVar7;
      func_0x00546e00();
      if ((bool)uVar5) goto LAB_005432c4;
      func_0x00546090();
      if (param_1 == (undefined8 *)0x0) {
LAB_005432e4:
        func_0x00545da0();
LAB_0053b2b8:
        if (*param_5 != 0) {
          func_0x0054717c();
        }
        return (undefined8 *)0x0;
      }
      uVar5 = uVar6 <= in_stack_0000000c;
    } while (in_stack_0000000c == uVar6);
  }
  else {
    if (uVar2 != 5) goto LAB_005432ac;
    uVar2 = *puVar1;
    uVar5 = true;
    param_1 = unaff_x25;
    do {
      puVar8 = (undefined8 *)((long)param_1 + 4);
      uVar3 = *(undefined4 *)param_1;
      param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
      func_0x00543334();
      *(undefined4 *)param_1 = uVar3;
      func_0x00546e00();
      if ((bool)uVar5) goto LAB_005432c4;
      func_0x00546090();
      if (param_1 == (undefined8 *)0x0) goto LAB_005432e4;
      uVar5 = uVar6 <= in_stack_00000008;
    } while (in_stack_00000008 == uVar6);
  }
  func_0x00546988();
  if ((bool)uVar5) {
LAB_005432c4:
    uVar4 = *unaff_x20;
    if (uVar4 != 0) {
      *(uint *)((long)unaff_x21 + (ulong)uVar4) =
           *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | unaff_w19;
    }
    return puVar8;
  }
  func_0x00545754(*(undefined2 *)puVar8);
  func_0x005466ec();
LAB_005432b8:
  func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return param_1;
}



/* Entry: 005432f0; end: 00543377;  */

long FUN_005432f0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    FUN_004df8b8(param_1,iVar1,iVar1 + 1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 1;
  return *(long *)(param_1 + 2) + (long)iVar1 * 8;
}



/* Entry: 00543378; end: 0054348f;  */

ulong FUN_00543378(undefined8 param_1,long param_2,ulong param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  uint uVar11;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar12;
  ulong unaff_x23;
  ulong unaff_x24;
  long lStack_118;
  undefined1 auStack_b8 [16];
  int *piStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  int *piStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_58 [16];
  int *piStack_48;
  
  if (param_2 == 0) {
LAB_00543404:
    unaff_x21 = 0;
  }
  else {
    uVar9 = param_3;
    piVar10 = param_4;
    piStack_48 = param_4;
    func_0x00547038();
    while( true ) {
      func_0x0054755c();
      uVar11 = (uint)param_3;
      if ((bool)in_ZR || in_NG != in_OV) break;
      iVar1 = (int)(uint)unaff_x23 >> 3;
      func_0x004dfb78(param_4,*param_4 + iVar1);
      uVar2 = (uint)unaff_x23 & 0xfffffff8;
      unaff_x24 = (ulong)uVar2;
      func_0x00547550();
      *param_4 = extraout_w9 + iVar1;
      uVar9 = (ulong)(int)uVar2;
      func_0x00546f90(extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 8);
      iVar1 = *(int *)(unaff_x22 + 0x1c);
      in_OV = SBORROW4(iVar1,0x11);
      in_NG = iVar1 + -0x11 < 0;
      in_ZR = iVar1 == 0x11;
      if (iVar1 < 0x11) goto LAB_00543404;
      lVar7 = unaff_x22;
      FUN_0054aed0();
      if (lVar7 == 0) {
        return 0;
      }
      param_3 = (ulong)(uVar11 - uVar2);
      unaff_x21 = (lVar7 - (unaff_x23 & 7)) + 0x10;
    }
    uVar2 = uVar11 & 0xfffffff8;
    cVar4 = SBORROW4(uVar11,7);
    cVar5 = (int)(uVar11 - 7) < 0;
    uVar6 = uVar11 == 7;
    if (uVar11 < 8) {
      if (uVar11 != uVar2) {
        unaff_x21 = 0;
      }
    }
    else {
      uVar3 = (int)uVar11 >> 3;
      uVar12 = (ulong)uVar3;
      func_0x004dfb78(param_4,*param_4 + uVar3);
      func_0x00547550();
      *param_4 = extraout_w9_00 + uVar3;
      if (extraout_x8_00 == 0) {
        func_0x00546840();
        FUN_005435a8(auStack_58,&piStack_48);
        func_0x005472f4();
        uVar8 = uVar12;
        FUN_00537a7c();
        FUN_005558a0(auStack_58);
        pcStack_68 = FUN_00543490;
        if (uVar8 == 0) {
LAB_0054351c:
          unaff_x21 = 0;
        }
        else {
          piStack_a8 = piVar10;
          uStack_a0 = unaff_x24;
          uStack_98 = (ulong)uVar2;
          uStack_90 = uVar12;
          uStack_88 = unaff_x21;
          piStack_80 = param_4;
          uStack_78 = param_3;
          puStack_70 = &stack0xfffffffffffffff0;
          func_0x00547038();
          while( true ) {
            func_0x0054755c();
            uVar11 = (uint)uVar9;
            if ((bool)uVar6 || cVar5 != cVar4) break;
            FUN_004ec63c(piVar10,*piVar10 + ((int)uVar2 >> 2));
            func_0x00547550();
            *piVar10 = extraout_w9_01 + ((int)uVar2 >> 2);
            func_0x00546f90(extraout_x8_01 + CONCAT44(extraout_var_01,extraout_w9_01) * 4);
            iVar1 = *(int *)(uVar12 + 0x1c);
            cVar4 = SBORROW4(iVar1,0x11);
            cVar5 = iVar1 + -0x11 < 0;
            uVar6 = iVar1 == 0x11;
            if (iVar1 < 0x11) goto LAB_0054351c;
            uVar8 = uVar12;
            FUN_0054aed0();
            if (uVar8 == 0) {
              return 0;
            }
            uVar9 = (ulong)(uVar11 - uVar2);
            unaff_x21 = uVar8 + 0x10;
          }
          uVar2 = uVar11 & 0xfffffffc;
          if (uVar11 < 4) {
            if (uVar11 != uVar2) {
              unaff_x21 = 0;
            }
          }
          else {
            FUN_004ec63c(piVar10,*piVar10 + ((int)uVar11 >> 2));
            func_0x00547550();
            *piVar10 = extraout_w9_02 + ((int)uVar11 >> 2);
            if (extraout_x8_02 == 0) {
              func_0x00546840();
              FUN_005435e8(auStack_b8,&piStack_a8);
              func_0x005472f4();
              FUN_00537a7c();
              FUN_005558a0(auStack_b8);
              func_0x00546ca8();
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv
                        (lStack_118 + 0x118,*(undefined8 *)piVar10);
              func_0x00547020();
              return uVar9;
            }
            func_0x00546f90(extraout_x8_02 + CONCAT44(extraout_var_02,extraout_w9_02) * 4);
            unaff_x21 = unaff_x21 + (long)(int)uVar2;
            if (uVar11 != uVar2) {
              unaff_x21 = 0;
            }
          }
        }
      }
      else {
        func_0x00546f90(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 8);
        unaff_x21 = unaff_x21 + (long)(int)uVar2;
        if (uVar11 != uVar2) {
          unaff_x21 = 0;
        }
      }
    }
  }
  return unaff_x21;
}



/* Entry: 00543490; end: 005435a7;  */

ulong FUN_00543490(undefined8 param_1,long param_2,ulong param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar4;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long lStack_b8;
  undefined1 auStack_58 [16];
  int *piStack_48;
  
  if (param_2 == 0) {
LAB_0054351c:
    unaff_x21 = 0;
  }
  else {
    piStack_48 = param_4;
    func_0x00547038();
    while( true ) {
      func_0x0054755c();
      uVar4 = (uint)param_3;
      if ((bool)in_ZR || in_NG != in_OV) break;
      iVar1 = (int)(uint)unaff_x23 >> 2;
      FUN_004ec63c(param_4,*param_4 + iVar1);
      func_0x00547550();
      *param_4 = extraout_w9 + iVar1;
      func_0x00546f90(extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 4);
      iVar1 = *(int *)(unaff_x22 + 0x1c);
      in_OV = SBORROW4(iVar1,0x11);
      in_NG = iVar1 + -0x11 < 0;
      in_ZR = iVar1 == 0x11;
      if (iVar1 < 0x11) goto LAB_0054351c;
      lVar3 = unaff_x22;
      FUN_0054aed0();
      if (lVar3 == 0) {
        return 0;
      }
      param_3 = (ulong)(uVar4 - ((uint)unaff_x23 & 0xfffffffc));
      unaff_x21 = (lVar3 - (unaff_x23 & 3)) + 0x10;
    }
    uVar2 = uVar4 & 0xfffffffc;
    if (uVar4 < 4) {
      if (uVar4 != uVar2) {
        unaff_x21 = 0;
      }
    }
    else {
      FUN_004ec63c(param_4,*param_4 + ((int)uVar4 >> 2));
      func_0x00547550();
      *param_4 = extraout_w9_00 + ((int)uVar4 >> 2);
      if (extraout_x8_00 == 0) {
        func_0x00546840();
        FUN_005435e8(auStack_58,&piStack_48);
        func_0x005472f4();
        FUN_00537a7c();
        FUN_005558a0(auStack_58);
        func_0x00546ca8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv
                  (lStack_b8 + 0x118,*(undefined8 *)param_4);
        func_0x00547020();
        return param_3;
      }
      func_0x00546f90(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 4);
      unaff_x21 = unaff_x21 + (long)(int)uVar2;
      if (uVar4 != uVar2) {
        unaff_x21 = 0;
      }
    }
  }
  return unaff_x21;
}



/* Entry: 005435a8; end: 005435e7;  */

void FUN_005435a8(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  
  func_0x00546ca8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uStack_58 + 0x118,*unaff_x20);
  func_0x00547020();
  return;
}



/* Entry: 005435e8; end: 00543627;  */

void FUN_005435e8(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  
  func_0x00546ca8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uStack_58 + 0x118,*unaff_x20);
  func_0x00547020();
  return;
}



/* Entry: 00543628; end: 00543833;  */

undefined8 *
FUN_00543628(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            ushort *param_5,uint param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *puVar9;
  code *unaff_x30;
  undefined8 *in_stack_00000018;
  
  func_0x00546c78();
  UNRECOVERED_JUMPTABLE = unaff_x30;
  func_0x00547524();
  if (((uint)unaff_x23 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    func_0x00546e28(param_1,param_2);
    goto LAB_005437e0;
  }
  puVar1 = (uint *)((long)param_5 + (unaff_x23 >> 0x20));
  uVar4 = (*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0x100;
  puVar5 = param_2;
  if ((bool)uVar4) {
    puVar2 = (undefined8 *)((long)param_1 + (ulong)*puVar1);
    if (puVar2[2] != 0) {
      puVar5 = param_1;
      func_0x00545d3c();
      func_0x00546270();
      if ((bool)uVar4) {
        puVar9 = (undefined8 *)puVar5[2];
        puVar5 = puVar2;
        func_0x0054387c();
        if ((int)puVar5 != 0) {
          do {
            in_stack_00000018 = param_2;
            func_0x0054648c();
            if (in_stack_00000018 == (undefined8 *)0x0) goto LAB_0053b2b8;
            if (puVar9[5] == 0) {
              puVar7 = puVar9;
              FUN_005505c0();
            }
            else {
              lVar8 = puVar9[5] + -0x18;
              puVar9[5] = lVar8;
              puVar7 = (undefined8 *)(puVar9[4] + lVar8 + 0x10);
            }
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar5 = puVar2;
            func_0x005438a4();
            func_0x00546e34();
            FUN_00533074();
            if (puVar5 == (undefined8 *)0x0) goto LAB_0053b2b8;
            puVar6 = puVar5;
            func_0x00546c30();
            if ((long)puVar7 < 0) {
              puVar6 = (undefined8 *)*puVar6;
            }
            func_0x005466d4();
            if (((ulong)puVar6 & 1) == 0) goto LAB_0053b2b8;
            uVar4 = puVar5 == (undefined8 *)*unaff_x22;
            if ((undefined8 *)*unaff_x22 <= puVar5) goto LAB_00543820;
            param_2 = puVar5;
            func_0x00546484(puVar5,&stack0x00000014);
            func_0x005473d0();
          } while ((bool)uVar4);
          goto LAB_005437c0;
        }
      }
    }
    do {
      puVar9 = puVar2;
      func_0x0054d0b8();
      puVar5 = puVar9;
      func_0x00546744();
      if (puVar5 == (undefined8 *)0x0) {
LAB_0053b2b8:
        if (*param_5 != 0) {
          func_0x0054717c(param_1,unaff_x30);
        }
        return (undefined8 *)0x0;
      }
      lVar8 = (long)*(char *)((long)puVar9 + 0x17);
      puVar7 = puVar9;
      if (lVar8 < 0) {
        puVar7 = (undefined8 *)*puVar9;
        lVar8 = puVar9[1];
      }
      func_0x005466d4(puVar7,lVar8);
      if (((ulong)puVar7 & 1) == 0) goto LAB_0053b2b8;
      uVar4 = puVar5 == (undefined8 *)*unaff_x22;
      if ((undefined8 *)*unaff_x22 <= puVar5) goto LAB_00543820;
      func_0x00546484(puVar5,&stack0x00000014);
      func_0x005473d0();
    } while ((bool)uVar4);
  }
LAB_005437c0:
  if (puVar5 < (undefined8 *)*unaff_x22) {
    func_0x00545a70(*(undefined2 *)puVar5);
LAB_005437e0:
                    /* WARNING: Could not recover jumptable at 0x00545b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  uVar3 = *param_5;
joined_r0x0054382c:
  if (uVar3 != 0) {
    *(uint *)((long)param_1 + (ulong)uVar3) = *(uint *)((long)param_1 + (ulong)uVar3) | param_6;
  }
  return puVar5;
LAB_00543820:
  uVar3 = *param_5;
  goto joined_r0x0054382c;
}



/* Entry: 00543834; end: 00543927;  */

void FUN_00543834(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00546648();
  if (param_2 != 0) {
    FUN_00543998(param_3,param_2,uVar1,param_1);
  }
  return;
}



/* Entry: 00543928; end: 00543963;  */

void FUN_00543928(undefined8 *param_1)

{
  dword *pdVar1;
  
  pdVar1 = (dword *)*param_1;
  if (pdVar1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.ncmds;
    __Znwm();
  }
  else {
    FUN_00550e54(pdVar1,0x10,8,FUN_00543964);
  }
  *(undefined8 *)pdVar1 = 0;
  *(undefined8 *)(pdVar1 + 2) = 0;
  return;
}



/* Entry: 00543964; end: 00543967;  */

byte * FUN_00543964(byte *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00557c04(param_1);
  }
  return param_1;
}



/* Entry: 00543968; end: 00543997;  */

byte * FUN_00543968(byte *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00557c04(param_1);
  }
  return param_1;
}



/* Entry: 00543998; end: 005439fb;  */

long * FUN_00543998(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_2;
  iVar4 = ((int)param_1[1] - iVar5) + 0x10;
  if (0x1ff < iVar4) {
    iVar4 = 0x200;
  }
  iVar3 = (int)param_3;
  if (iVar3 <= iVar4) {
    FUN_00557cfc(param_4,param_2,(long)iVar3);
    return (long *)((long)param_2 + (long)iVar3);
  }
  iVar4 = (int)param_1[1] - iVar5;
  if (param_1[4] == 0) {
    if (iVar4 + 0x10 < iVar3) {
      iVar4 = ((int)param_1[1] - iVar5) + 0x10;
      do {
        if (param_1[2] == 0) {
          return (long *)0x0;
        }
        func_0x0054bbec(param_4,param_2,iVar4);
        if (*(int *)((long)param_1 + 0x1c) < 0x11) {
          return (long *)0x0;
        }
        param_2 = param_1;
        FUN_0054aed0();
        if (param_2 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar1 = (int)param_3 - iVar4;
        param_3 = (ulong)uVar1;
        param_2 = param_2 + 2;
        iVar4 = ((int)param_1[1] - (int)param_2) + 0x10;
      } while (iVar4 < (int)uVar1);
      func_0x0054bbec(param_4,param_2,param_3);
    }
    else {
      func_0x0054cd70(param_1,param_2,(long)iVar3);
    }
    return (long *)((long)param_2 + (long)(int)param_3);
  }
  iVar5 = *(int *)((long)param_1 + 0x1c) + iVar4;
  if (iVar5 < iVar3) {
    return (long *)0x0;
  }
  iVar6 = iVar4 + 0x10;
  if ((iVar6 < 0x21) && (plVar2 = param_1 + 5, (ulong)((long)param_2 - (long)plVar2) < 0x21)) {
    if (((iVar4 == 0) && ((long *)param_1[2] != (long *)0x0)) && ((long *)param_1[2] != plVar2)) {
      FUN_00557c68(param_4);
      iVar6 = (int)param_1[3];
    }
    else {
      param_3 = (ulong)(uint)(iVar3 - iVar6);
      func_0x0054cd70(param_1,param_2,(long)iVar6);
      if ((long *)param_1[2] == plVar2) goto LAB_0054b504;
      if ((long *)param_1[2] == (long *)0x0) {
        *(undefined4 *)(param_1 + 10) = 1;
        return (long *)0x0;
      }
      iVar6 = (int)param_1[3] + -0x10;
    }
  }
  else {
    FUN_00557c68(param_4);
  }
  FUN_0054a4f0(param_1,iVar6);
LAB_0054b504:
  if ((int)param_3 <= *(int *)((long)param_1 + 0x54)) {
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - (int)param_3;
    plVar2 = (long *)param_1[4];
    (**(code **)(*plVar2 + 0x30))(plVar2,param_4,param_3);
    if ((int)plVar2 != 0) {
      plVar2 = param_1;
      FUN_0054b5a8(param_1,param_1[4]);
      uVar1 = (iVar5 - iVar3) + ((int)plVar2 - (int)param_1[1]);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      return plVar2;
    }
  }
  return (long *)0x0;
}



/* Entry: 005439fc; end: 00543a37;  */

bool FUN_005439fc(long *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 + *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar1;
  if ((int)param_1[10] == 0) {
    *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return (int)param_1[10] == 0;
}



/* Entry: 00543a38; end: 00543cbb;  */

ulong FUN_00543a38(long param_1,long param_2)

{
  uint uVar1;
  undefined1 in_CY;
  undefined4 uVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x10;
  long unaff_x19;
  uint uVar5;
  ulong unaff_x21;
  ulong *puVar6;
  ulong unaff_x25;
  
  func_0x0054725c();
  func_0x00546d90();
  uVar3 = (ulong)(*(byte *)(param_2 + 8) & 1);
  FUN_00543df4();
  if (param_1 != 0) {
    func_0x005473dc();
    func_0x00543e60();
    goto LAB_00543a90;
  }
  func_0x00546de0();
  uVar2 = (undefined4)param_1;
  uVar5 = (uint)unaff_x21;
  if ((bool)in_CY) {
    if (2 < uVar5 && extraout_x10 <= extraout_x8 >> 2) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
      } while (extraout_x10 + (extraout_x10 >> 2) + 1 << (uVar4 & 0x3f) < extraout_x8);
      uVar1 = uVar5 >> (ulong)((uint)uVar4 & 0x1f);
      if (uVar1 < 3) {
        uVar1 = 2;
      }
      if (uVar1 != uVar5) {
LAB_00543b00:
        func_0x00546fa8();
        func_0x005475f0();
        for (; unaff_x25 < unaff_x21; unaff_x25 = unaff_x25 + 1) {
          puVar6 = *(ulong **)(uVar3 + unaff_x25 * 8);
          if ((puVar6 == (ulong *)0x0) || (((ulong)puVar6 & 1) != 0)) {
            if (((ulong)puVar6 & 1) != 0) {
              func_0x00546f78();
            }
          }
          else {
            do {
              puVar6 = (ulong *)*puVar6;
              FUN_00490120();
              func_0x00546e50();
              func_0x00543f0c();
            } while (puVar6 != (ulong *)0x0);
          }
        }
        func_0x00546e5c();
        goto LAB_00543b64;
      }
    }
  }
  else if (-1 < (int)uVar5) {
    if (uVar5 != 1) goto LAB_00543b00;
    func_0x00546b78();
    func_0x00547338();
    *(undefined4 *)(unaff_x19 + 8) = uVar2;
LAB_00543b64:
    FUN_00543df4();
  }
  unaff_x21 = 0;
LAB_00543a90:
  func_0x00547058();
  func_0x00543f0c();
  func_0x00546b9c();
  return unaff_x21;
}



/* Entry: 00543cbc; end: 00543d47;  */

long FUN_00543cbc(long param_1)

{
  int unaff_w19;
  
  func_0x00546d90();
  FUN_004f5a10();
  if (param_1 == 0) {
    FUN_004f5a9c();
    if (unaff_w19 != 0) {
      FUN_004f5a10();
    }
    param_1 = 0;
  }
  else {
    FUN_00544118();
  }
  FUN_004f5b2c();
  func_0x00546b9c();
  return param_1;
}



/* Entry: 00543d48; end: 00543df3;  */

long FUN_00543d48(void)

{
  long unaff_x19;
  long lVar1;
  
  func_0x00546d90();
  lVar1 = unaff_x19;
  func_0x0048fe64();
  if (lVar1 == 0) {
    FUN_0048ff24();
    if ((int)unaff_x19 != 0) {
      func_0x0048fe64();
    }
    lVar1 = 0;
  }
  else {
    func_0x005441c0();
  }
  func_0x00547058();
  FUN_00490028();
  func_0x00546b9c();
  return lVar1;
}



/* Entry: 00543df4; end: 00543f5f;  */

void FUN_00543df4(ulong param_1)

{
  ulong *puVar1;
  uint unaff_w19;
  long unaff_x22;
  
  func_0x00546bbc();
  puVar1 = *(ulong **)(*(long *)(unaff_x22 + 0x10) + (param_1 & 0xffffffff) * 8);
  if ((puVar1 == (ulong *)0x0) || (((ulong)puVar1 & 1) != 0)) {
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00546cbc();
    }
  }
  else {
    do {
      if (unaff_w19 == ((byte)puVar1[1] & 1)) {
        return;
      }
      puVar1 = (ulong *)*puVar1;
    } while (puVar1 != (ulong *)0x0);
  }
  return;
}



/* Entry: 00543f60; end: 00543f97;  */

long * FUN_00543f60(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (param_2 != param_1) {
    FUN_00543f60();
    *param_2 = (long)param_1;
    plVar1 = param_2;
  }
  return plVar1;
}



/* Entry: 00543f98; end: 00543fa7;  */

undefined1  [16] FUN_00543f98(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulong)*(byte *)(param_1 + 8) & 1;
  return auVar1 << 0x40;
}



/* Entry: 00543fa8; end: 0054410b;  */

void FUN_00543fa8(ulong param_1)

{
  ulong *puVar1;
  int unaff_w19;
  long unaff_x22;
  
  func_0x00546bbc();
  puVar1 = *(ulong **)(*(long *)(unaff_x22 + 0x10) + (param_1 & 0xffffffff) * 8);
  if ((puVar1 == (ulong *)0x0) || (((ulong)puVar1 & 1) != 0)) {
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00546cbc();
    }
  }
  else {
    do {
      if ((int)puVar1[1] == unaff_w19) {
        return;
      }
      puVar1 = (ulong *)*puVar1;
    } while (puVar1 != (ulong *)0x0);
  }
  return;
}



/* Entry: 0054410c; end: 00544117;  */

undefined1  [16] FUN_0054410c(long param_1)

{
  return ZEXT416(*(uint *)(param_1 + 8)) << 0x40;
}



/* Entry: 00544118; end: 0054428f;  */

void FUN_00544118(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  uint extraout_w8;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  long extraout_x10;
  long unaff_x19;
  uint unaff_w22;
  
  func_0x00546014();
  func_0x00546ad8();
  if (!(bool)in_ZR) {
    if ((param_2 != (ulong *)0x0) && (((ulong)param_2 & 1) == 0)) {
      do {
        param_2 = (ulong *)*param_2;
      } while (param_2 != param_3 && param_2 != (ulong *)0x0);
      if (param_2 != (ulong *)0x0) goto LAB_0054417c;
    }
    uVar1 = param_3[1];
    FUN_004f5a10();
    func_0x005470a8();
    if ((uVar1 & 1) != 0) {
      func_0x005466c4();
      goto LAB_00544184;
    }
  }
LAB_0054417c:
  func_0x00547284();
  func_0x005474ec();
LAB_00544184:
  func_0x005465f8();
  if (unaff_w22 == extraout_w8) {
    uVar1 = (ulong)*(uint *)(unaff_x19 + 4);
    uVar2 = (ulong)unaff_w22;
    while ((uVar2 < uVar1 && (func_0x005474c8(), extraout_x10 == 0))) {
      func_0x005475e4();
      uVar1 = extraout_x8;
      uVar2 = extraout_x9;
    }
  }
  return;
}



/* Entry: 00544290; end: 0054457f;  */

uint * FUN_00544290(uint *param_1,uint *param_2,code *param_3,uint *param_4,uint *param_5,
                   undefined8 param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  code *UNRECOVERED_JUMPTABLE_02;
  code *UNRECOVERED_JUMPTABLE_01;
  int extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  ulong uVar16;
  long lVar17;
  uint extraout_w9;
  long extraout_x9;
  code *unaff_x19;
  uint *unaff_x21;
  uint *puVar18;
  uint uVar19;
  ulong unaff_x25;
  undefined8 uVar20;
  code *unaff_x30;
  uint *puStack_d0;
  uint *puStack_c8;
  undefined8 *puStack_c0;
  uint *puStack_b8;
  ushort *puStack_b0;
  uint uStack_a8;
  uint auStack_90 [2];
  uint uStack_88;
  uint uStack_84;
  uint *puStack_80;
  undefined8 uStack_78;
  uint uStack_6c;
  ulong uStack_68;
  uint *puStack_50;
  ulong uStack_48;
  uint *puStack_40;
  code *pcStack_38;
  uint *puStack_30;
  uint *puStack_28;
  uint *puStack_20;
  code *pcStack_18;
  uint auStack_10 [2];
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    puVar8 = param_5;
    func_0x0054768c();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    if (((ulong)param_4 & 7) == 0) {
      puVar13 = (uint *)((long)puVar8 + ((ulong)param_4 >> 0x20));
      uVar2 = *(ushort *)((long)puVar13 + 10);
      uVar3 = uVar2 >> 6 & 7;
      uVar14 = uVar2 & 0x600;
      puVar18 = (uint *)(ulong)uVar14;
      puVar9 = param_4;
      puVar15 = puVar8;
      puStack_80 = param_1;
      uStack_78 = param_6;
      if (uVar3 == 0) {
        puVar10 = param_1;
        FUN_0053febc(param_1,puVar8);
        puVar13 = (uint *)(ulong)*puVar13;
        func_0x005445f0();
        puVar11 = puVar10;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00546a2c();
        }
        func_0x00546a18();
        goto LAB_0054441c;
      }
      if (uVar3 != 2) {
        puVar10 = param_1;
        FUN_0053febc(param_1,puVar8);
        puVar13 = (uint *)(ulong)*puVar13;
        func_0x00544580();
        puVar11 = puVar10;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00546a2c();
        }
        func_0x00546a18();
        goto LAB_005444a0;
      }
      puVar10 = param_1;
      FUN_0053febc(param_1,puVar8);
      puVar13 = (uint *)(ulong)*puVar13;
      func_0x005445b8();
      puVar11 = puVar10;
      if ((uVar2 >> 10 & 1) != 0) {
        func_0x00546a2c();
      }
      func_0x00546a18();
      goto LAB_005443a0;
    }
    if (((uint)param_4 & 7) != 2) {
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puVar8 + 0xc);
      func_0x00546abc(param_1);
      func_0x00546bf4();
                    /* WARNING: Could not recover jumptable at 0x00544354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_01)();
      return param_1;
    }
    puVar9 = param_1;
    puVar18 = param_4;
    param_5 = puVar8;
    func_0x00546abc();
    func_0x00546bf4();
    puVar13 = auStack_10;
    puVar10 = puVar18;
    puVar15 = param_5;
    puStack_50 = param_1;
    uStack_48 = unaff_x25;
    puStack_40 = param_2;
    pcStack_38 = param_3;
    puStack_30 = param_4;
    puStack_28 = unaff_x21;
    puStack_20 = puVar8;
    pcStack_18 = unaff_x19;
    func_0x00546eb0();
    func_0x00545e60();
    uVar14 = (uint)puVar10;
    uVar16 = (ulong)puVar10 & 7;
    cVar5 = SBORROW8(uVar16,2);
    cVar6 = (long)(uVar16 - 2) < 0;
    uVar7 = uVar16 == 2;
    uStack_68 = extraout_x8;
    if ((bool)uVar7) {
      uVar2 = *(ushort *)((long)param_5 + ((ulong)puVar18 >> 0x20) + 10);
      uVar16 = (ulong)(ushort)*param_5;
      if (uVar16 != 0) {
        *(uint *)((long)puVar9 + uVar16) = *(uint *)((long)puVar9 + uVar16) | (uint)param_6;
      }
      uVar14 = uVar2 >> 6 & 7;
      puVar8 = puVar9;
      FUN_0053febc(puVar9,param_5);
      if ((uVar2 >> 6 & 7) == 0) {
        func_0x005445f0();
        if ((uVar2 >> 10 & 1) == 0) {
          puVar11 = puVar8;
          func_0x0054641c();
          func_0x00546fe8();
          uVar14 = (uint)puVar10;
          if (puVar11 != (uint *)0x0) goto LAB_00541cd0;
          goto LAB_00541f48;
        }
        puVar11 = puVar8;
        func_0x00545fac();
        func_0x00547134();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto LAB_00541dac;
        goto LAB_00541f48;
      }
      cVar5 = SBORROW4(uVar14,2);
      cVar6 = (int)(uVar14 - 2) < 0;
      uVar7 = uVar14 == 2;
      if ((bool)uVar7) {
        func_0x005445b8();
        puVar11 = puVar8;
        if ((uVar2 >> 10 & 1) == 0) {
          func_0x0054641c();
          func_0x00546fe8();
          uVar14 = (uint)puVar10;
          if (puVar11 != (uint *)0x0) goto LAB_00541c40;
          goto LAB_00541f48;
        }
        func_0x00545fac();
        func_0x00547134();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto LAB_00541d64;
        goto LAB_00541f48;
      }
      func_0x00544580();
      puVar11 = puVar8;
      if ((uVar2 >> 10 & 1) == 0) {
        func_0x0054641c();
        func_0x00546fe8();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto LAB_00541d20;
        goto LAB_00541f48;
      }
      func_0x00545fac();
      func_0x00547134();
      uVar14 = (uint)puVar10;
      if (puVar11 != (uint *)0x0) goto LAB_00541df4;
      goto LAB_00541f48;
    }
    func_0x005459dc(extraout_x8);
    param_1 = puVar9;
    param_2 = unaff_x21;
    param_3 = unaff_x19;
    param_4 = puVar18;
    unaff_x19 = pcStack_18;
    unaff_x21 = puStack_28;
    unaff_x25 = uStack_48;
    unaff_x30 = UNRECOVERED_JUMPTABLE;
  } while ((bool)uVar7);
  goto LAB_00541f7c;
  while( true ) {
    puVar13 = &uStack_6c;
    func_0x00545f1c();
    if (puVar11 == (uint *)0x0) goto LAB_00544540;
    func_0x005470b8();
    if (!(bool)uVar7) break;
LAB_0054441c:
    puVar12 = puVar11;
    func_0x00546aa0();
    uVar16 = uStack_68;
    if (puVar12 == (uint *)0x0) goto LAB_00544540;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar14 == 0x200) {
        uVar16 = (long)(int)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar14;
      cVar5 = SBORROW4(uVar14,0x600);
      cVar6 = (int)(uVar14 - 0x600) < 0;
      bVar4 = uVar14 == 0x600;
      if (bVar4) {
        func_0x00547088();
        if (bVar4 || cVar6 != cVar5) goto FUN_0053df24;
      }
      else {
        puVar11 = puVar12;
        func_0x005469e4();
        if (((ulong)puVar11 & 1) == 0) goto FUN_0053df24;
      }
    }
    puVar11 = puVar10;
    FUN_00534404(puVar10,uVar16 != 0);
    uVar7 = puVar12 == *(uint **)param_3;
    if (*(uint **)param_3 <= puVar12) break;
  }
  goto LAB_00544510;
  while( true ) {
    puVar13 = &uStack_6c;
    func_0x00545f1c();
    if (puVar11 == (uint *)0x0) goto LAB_00544540;
    func_0x005470b8();
    if (!(bool)uVar7) break;
LAB_005443a0:
    puVar12 = puVar11;
    func_0x00546aa0();
    uVar16 = uStack_68;
    if (puVar12 == (uint *)0x0) goto LAB_00544540;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar14 == 0x200) {
        uVar16 = (ulong)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar14;
      cVar5 = SBORROW4(uVar14,0x600);
      cVar6 = (int)(uVar14 - 0x600) < 0;
      bVar4 = uVar14 == 0x600;
      if (bVar4) {
        func_0x00547088();
        if (bVar4 || cVar6 != cVar5) goto FUN_0053df24;
      }
      else {
        puVar11 = puVar12;
        func_0x005469e4();
        if (((ulong)puVar11 & 1) == 0) goto FUN_0053df24;
      }
    }
    puVar11 = puVar10;
    FUN_00533eec(puVar10,uVar16);
    uVar7 = puVar12 == *(uint **)param_3;
    if (*(uint **)param_3 <= puVar12) break;
  }
  goto LAB_00544510;
LAB_00544540:
  func_0x00546bf4(puStack_80);
  puVar15 = puVar8;
  goto LAB_0053b2b8;
LAB_00541dac:
  func_0x005461ec();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e5c;
  func_0x005447d0();
  uVar14 = (uint)puVar10;
  puStack_c8 = puVar11;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x00545c10();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545db0();
    func_0x00545738();
    if (puVar11 != (uint *)0x0) goto LAB_00541f98;
    func_0x0054606c();
    func_0x005447d0();
    goto LAB_00541f3c;
  }
  func_0x005464b4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x0054620c();
  puStack_c8 = puVar11;
  goto LAB_00541dac;
LAB_00541e5c:
  func_0x00546784();
  func_0x005447d0();
  goto LAB_00541e80;
LAB_00541cd0:
  func_0x00546554();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e4c;
  func_0x00546b90();
  func_0x00544848();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x00545eb4();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545900();
    if (puVar11 != (uint *)0x0) goto LAB_00541f80;
    func_0x00546528();
    func_0x00546b90();
    func_0x00544848();
    goto LAB_00541f10;
  }
  func_0x005464b4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x00546134();
  goto LAB_00541cd0;
LAB_00541e4c:
  func_0x00546044();
  puVar10 = puVar18;
  func_0x00544848();
  uVar14 = (uint)puVar10;
  goto LAB_00541e80;
LAB_00541df4:
  func_0x005461ec();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e78;
  func_0x00544628();
  uVar14 = (uint)puVar10;
  puStack_c8 = puVar11;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x00545c10();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545db0();
    func_0x00545738();
    if (puVar11 != (uint *)0x0) goto LAB_00541f98;
    func_0x0054606c();
    func_0x00544628();
    goto LAB_00541f3c;
  }
  func_0x005464b4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x0054620c();
  puStack_c8 = puVar11;
  goto LAB_00541df4;
LAB_00541e78:
  func_0x00546784();
  func_0x00544628();
  goto LAB_00541e80;
LAB_00541d20:
  func_0x00546554();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e68;
  func_0x00546b90();
  func_0x005446ac();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x00545eb4();
  uVar14 = (uint)puVar10;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00545900();
    if (puVar11 != (uint *)0x0) goto LAB_00541f80;
    func_0x00546528();
    func_0x00546b90();
    func_0x005446ac();
    goto LAB_00541f10;
  }
  func_0x005464b4();
  uVar14 = (uint)puVar10;
  if (cVar6 != cVar5) goto LAB_00541f44;
  func_0x00546414();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x00546134();
  goto LAB_00541d20;
LAB_00541e68:
  func_0x00546044();
  puVar10 = puVar18;
  func_0x005446ac();
  uVar14 = (uint)puVar10;
  goto LAB_00541e80;
LAB_00541d64:
  func_0x005461ec();
  uVar14 = (uint)puVar10;
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x00544704();
    uVar14 = (uint)puVar10;
    puStack_c8 = puVar11;
    if (puVar11 == (uint *)0x0) goto LAB_00541f48;
    func_0x00545c10();
    uVar14 = (uint)puVar10;
    if (!(bool)uVar7 && cVar6 == cVar5) {
      func_0x005464b4();
      uVar14 = (uint)puVar10;
      if (cVar6 == cVar5) {
        func_0x00546414();
        uVar14 = (uint)puVar10;
        if (puVar11 != (uint *)0x0) goto code_r0x00541d94;
        goto LAB_00541f48;
      }
      goto LAB_00541f44;
    }
    func_0x00545db0();
    func_0x00545738();
    if (puVar11 == (uint *)0x0) {
      func_0x0054606c();
      func_0x00544704();
LAB_00541f3c:
      uVar7 = puVar11 == puVar8;
      if (!(bool)uVar7) goto LAB_00541f44;
      func_0x00546fb8();
      goto LAB_00541f48;
    }
    goto LAB_00541f98;
  }
  func_0x00546784();
  func_0x00544704();
  goto LAB_00541e80;
code_r0x00541d94:
  func_0x0054620c();
  puStack_c8 = puVar11;
  goto LAB_00541d64;
LAB_00541c40:
  func_0x00546554();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_00541e30;
  func_0x00546b90();
  func_0x00544778();
  uVar14 = (uint)puVar10;
  if (puVar11 == (uint *)0x0) goto LAB_00541f48;
  func_0x00545eb4();
  uVar14 = (uint)puVar10;
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x005464b4();
    uVar14 = (uint)puVar10;
    if (cVar6 != cVar5) goto LAB_00541f44;
    func_0x00546414();
    uVar14 = (uint)puVar10;
    if (puVar11 == (uint *)0x0) goto LAB_00541f48;
    func_0x00546134();
    goto LAB_00541c40;
  }
  func_0x00545900();
  if (puVar11 != (uint *)0x0) goto LAB_00541f80;
  func_0x00546528();
  func_0x00546b90();
  func_0x00544778();
LAB_00541f10:
  uVar7 = puVar11 == unaff_x21;
  if ((bool)uVar7) {
    puVar11 = (uint *)(*(long *)(unaff_x19 + 8) + (ulong)(uVar2 & 0x600));
    goto LAB_00541f48;
  }
LAB_00541f44:
  puVar11 = (uint *)0x0;
  goto LAB_00541f48;
LAB_00544a0c:
  func_0x00545da0();
  goto LAB_0053b2b8;
LAB_00541e30:
  func_0x00546044();
  puVar10 = puVar18;
  func_0x00544778();
  uVar14 = (uint)puVar10;
LAB_00541e80:
  func_0x00546670();
LAB_00541f48:
  func_0x005459dc(uStack_68);
  if ((bool)uVar7) {
    return puVar11;
  }
LAB_00541f7c:
  uVar7 = 0;
  ___stack_chk_fail();
LAB_00541f80:
  func_0x00533528();
  func_0x00545ac8();
  func_0x005464a0(auStack_90);
  puVar11 = auStack_90;
  FUN_005558a0();
LAB_00541f98:
  func_0x00533528();
  func_0x00545820();
  func_0x00546618();
  UNRECOVERED_JUMPTABLE_02 = FUN_00541fa4;
  func_0x0054725c();
  UNRECOVERED_JUMPTABLE_01 = UNRECOVERED_JUMPTABLE_02;
  func_0x00546494();
  func_0x00546db4();
  if (!(bool)uVar7) {
    uVar19 = extraout_w9 & 0x1c0;
    if (uVar19 == 0xc0) {
      if ((uVar14 & 7) == 1) {
LAB_00542014:
        if (extraout_w8 == 0x30) {
          func_0x00546ce4();
        }
        else if (extraout_w8 == 0x10) {
          func_0x00545f08(puVar9[1]);
          *(uint *)((long)puVar18 + extraout_x9) =
               extraout_w8_00 | *(uint *)((long)puVar18 + extraout_x9);
        }
        puVar13 = puVar18;
        FUN_0053febc(puVar18,puVar8);
        bVar4 = 0xbf < uVar19;
        if (uVar19 == 0xc0) {
          *(undefined8 *)((long)puVar13 + (ulong)*puVar9) = *(undefined8 *)param_5;
          lVar17 = 8;
        }
        else {
          *(uint *)((long)puVar13 + (ulong)*puVar9) = *param_5;
          lVar17 = 4;
        }
        param_5 = (uint *)((long)param_5 + lVar17);
        func_0x00546c54();
        if (bVar4) {
          if ((short)*puVar8 != 0) {
            func_0x00546518();
          }
          return param_5;
        }
        func_0x00545774((short)*param_5);
        goto LAB_0054208c;
      }
    }
    else if ((uVar14 & 7) == 5) goto LAB_00542014;
    UNRECOVERED_JUMPTABLE_01 = *(code **)(puVar8 + 0xc);
    func_0x00547158();
    puVar18 = puVar11;
LAB_0054208c:
    func_0x0054638c();
                    /* WARNING: Could not recover jumptable at 0x00545974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return puVar18;
  }
  func_0x00547158();
  func_0x0054638c();
  while( true ) {
    func_0x00546b54();
    puStack_40 = puVar13;
    pcStack_38 = UNRECOVERED_JUMPTABLE_02;
    func_0x00546494();
    func_0x00547524();
    func_0x00546e98();
    uVar19 = (uint)puStack_c8;
    uVar14 = uVar19 & 7;
    uVar7 = uVar14 == 2;
    if (!(bool)uVar7) break;
    puVar8 = puStack_b8;
    func_0x005466ec();
    puVar9 = puStack_c8;
    func_0x0054638c();
    puVar13 = puStack_40;
    UNRECOVERED_JUMPTABLE_02 = pcStack_38;
    func_0x005467d8();
    func_0x00546b54();
    puStack_40 = puVar13;
    pcStack_38 = UNRECOVERED_JUMPTABLE_02;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar7) {
      puVar1 = (undefined4 *)((long)puStack_b0 + ((ulong)puVar9 >> 0x20));
      uVar2 = *(ushort *)((long)puVar1 + 10);
      func_0x00546684();
      func_0x00546648();
      if ((uVar2 & 0x1c0) == 0xc0) {
        func_0x00544580();
        func_0x0054759c();
        FUN_00543378();
      }
      else {
        func_0x005445b8(puVar8,*puVar1,puStack_b8);
        func_0x0054759c();
        FUN_00543490();
      }
      if (puVar8 == (uint *)0x0) {
        func_0x00545da0();
        goto LAB_0053b2b8;
      }
      if ((uint *)*puStack_c0 <= puVar8) {
        if (*puStack_b0 == 0) {
          return puVar8;
        }
        func_0x00545d80();
        return puVar8;
      }
      func_0x00545754((short)*puVar8);
      func_0x00545d70();
      goto LAB_00545854;
    }
    puVar11 = puStack_b8;
    func_0x00545d70();
    puVar13 = puStack_40;
    UNRECOVERED_JUMPTABLE_02 = pcStack_38;
    func_0x005467d8();
  }
  func_0x00546684();
  if ((*(ushort *)((long)puStack_b0 + ((ulong)puStack_c8 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar7 = ((ulong)puStack_c8 & 7) != 0;
    if (uVar14 != 1) {
LAB_005449d0:
      UNRECOVERED_JUMPTABLE_02 = *(code **)(puStack_b0 + 0x18);
      func_0x005466ec(puStack_b8);
      puVar8 = puStack_b8;
      goto LAB_005449e0;
    }
    func_0x00544580();
    do {
      puVar8 = puStack_d0 + 2;
      uVar20 = *(undefined8 *)puStack_d0;
      puStack_d0 = puVar11;
      FUN_005432f0();
      *(undefined8 *)puStack_d0 = uVar20;
      func_0x00546988();
      if ((bool)uVar7) goto LAB_005449ec;
      func_0x00545f1c();
      if (puStack_d0 == (uint *)0x0) goto LAB_00544a0c;
      uVar7 = uVar19 <= uStack_84;
    } while (uStack_84 == uVar19);
  }
  else {
    uVar7 = 4 < uVar14;
    if (uVar14 != 5) goto LAB_005449d0;
    func_0x005445b8();
    do {
      puVar8 = puStack_d0 + 1;
      uVar14 = *puStack_d0;
      puStack_d0 = puVar11;
      func_0x00543334();
      *puStack_d0 = uVar14;
      func_0x00546988();
      if ((bool)uVar7) goto LAB_005449ec;
      func_0x00545f1c();
      if (puStack_d0 == (uint *)0x0) goto LAB_00544a0c;
      uVar7 = uVar19 <= uStack_88;
    } while (uStack_88 == uVar19);
  }
  func_0x00546e00();
  if ((bool)uVar7) {
LAB_005449ec:
    uVar2 = *puStack_b0;
    if (uVar2 != 0) {
      *(uint *)((long)puStack_b8 + (ulong)uVar2) =
           *(uint *)((long)puStack_b8 + (ulong)(uint)uVar2) | uStack_a8;
    }
    return puVar8;
  }
  func_0x00545754((short)*puVar8);
  puVar8 = puStack_d0;
LAB_005449e0:
  func_0x0054638c();
LAB_00545854:
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_02)();
  return puVar8;
FUN_0053df24:
  puVar10 = puStack_80;
  func_0x00546abc();
  func_0x00546bf4();
  puStack_40 = param_2;
  pcStack_38 = param_3;
  puStack_30 = param_4;
  puStack_28 = puVar18;
  puStack_20 = puVar8;
  pcStack_18 = (code *)(ulong)uVar2;
  func_0x00546878();
  FUN_00538888(puVar13,&uStack_48);
  if (puVar13 != (uint *)0x0) {
    FUN_0053dee0(puVar10,*(undefined8 *)(puVar18 + 0xc),puVar9,uStack_48 & 0xffffffff);
    func_0x0054686c();
    if (!(bool)uVar7) {
      func_0x00545a70((short)*puVar13);
      func_0x005464c0(puVar10,puVar13,param_1);
                    /* WARNING: Could not recover jumptable at 0x00546454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return puVar10;
    }
    uVar16 = (ulong)(ushort)*puVar18;
    if (uVar16 != 0) {
      *(uint *)((long)puVar10 + uVar16) = *(uint *)((long)puVar10 + uVar16) | (uint)uVar2;
    }
    return puVar13;
  }
  func_0x005461dc();
LAB_0053b2b8:
  if ((short)*puVar15 != 0) {
    func_0x0054717c();
  }
  return (uint *)0x0;
  while( true ) {
    puVar13 = &uStack_6c;
    func_0x00545f1c();
    if (puVar11 == (uint *)0x0) goto LAB_00544540;
    func_0x005470b8();
    if (!(bool)uVar7) break;
LAB_005444a0:
    puVar12 = puVar11;
    func_0x00546aa0();
    uVar16 = uStack_68;
    if (puVar12 == (uint *)0x0) goto LAB_00544540;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar14 == 0x200) {
        uVar16 = -(uStack_68 & 1) ^ uStack_68 >> 1;
      }
    }
    else {
      uVar7 = 0x5ff < uVar14;
      cVar5 = SBORROW4(uVar14,0x600);
      cVar6 = (int)(uVar14 - 0x600) < 0;
      bVar4 = uVar14 == 0x600;
      if (bVar4) {
        func_0x00547088();
        if (bVar4 || cVar6 != cVar5) goto FUN_0053df24;
      }
      else {
        puVar11 = puVar12;
        func_0x005469e4();
        if (((ulong)puVar11 & 1) == 0) goto FUN_0053df24;
      }
    }
    puVar11 = puVar10;
    FUN_00534008(puVar10,uVar16);
    uVar7 = puVar12 == *(uint **)param_3;
    if (*(uint **)param_3 <= puVar12) break;
  }
LAB_00544510:
  uVar2 = (ushort)*puVar8;
  if (uVar2 != 0) {
    *(uint *)((long)puStack_80 + (ulong)uVar2) =
         *(uint *)((long)puStack_80 + (ulong)(uint)uVar2) | (uint)uStack_78;
  }
  func_0x00546bf4(puVar12,UNRECOVERED_JUMPTABLE);
  return puVar12;
}



/* Entry: 00544580; end: 00544627;  */

void FUN_00544580(undefined8 param_1)

{
  undefined1 in_ZR;
  uint extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00546374();
  if ((bool)in_ZR) {
    func_0x0054750c();
    if ((extraout_w8 & 1) != 0) {
      func_0x00546c6c();
    }
    func_0x00546860();
    func_0x00538224();
    *(undefined8 *)(unaff_x20 + unaff_x19) = param_1;
  }
  return;
}



/* Entry: 00544628; end: 005448a7;  */

ulong FUN_00544628(ulong param_1)

{
  undefined1 uVar1;
  int extraout_w8;
  int extraout_w9;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int iVar2;
  undefined8 uStack_38;
  
  func_0x00545d90();
  do {
    while( true ) {
      uVar1 = unaff_x19 == unaff_x21;
      if ((unaff_x21 <= unaff_x19) || (func_0x00545cd0(), unaff_x19 = param_1, param_1 == 0)) {
        return unaff_x19;
      }
      func_0x005470e8();
      iVar2 = (int)uStack_38;
      if ((bool)uVar1) break;
      func_0x00547270();
      if ((param_1 & 1) == 0) goto LAB_00544688;
LAB_00544670:
      param_1 = *(ulong *)(unaff_x20 + 0x28);
      FUN_00534008(param_1,(long)iVar2);
    }
    func_0x00546774();
    if (extraout_w8 <= iVar2 && iVar2 < extraout_w9) goto LAB_00544670;
LAB_00544688:
    param_1 = *(ulong *)(unaff_x20 + 0x10);
    FUN_0053dee0(param_1,*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x30),
                 *(undefined4 *)(unaff_x20 + 0x20),uStack_38);
  } while( true );
}


