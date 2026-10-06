/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9ab3dc; end: 10b9ab433;  */

uint FUN_10b9ab3dc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    uVar2 = 0;
    puVar1 = &UNK_10f7d0ef0;
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
  if (param_2 == 0) {
    uVar4 = 0;
    puVar3 = &UNK_10f7d0ef0;
  }
  else {
    puVar3 = (undefined *)(param_2 + 0x18);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
  }
  func_0x000107c27bd8(puVar1,uVar2,puVar3,uVar4);
  return (uint)puVar1 >> 7 & 1;
}



/* Entry: 10b9ab434; end: 10b9ab527;  */

void FUN_10b9ab434(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x00010b9abac0();
  iVar1 = (int)*param_3;
  func_0x00010b9abb00();
  if ((uVar2 & 1) != 0) {
    if (iVar1 == 0) {
      FUN_10b9ab748(param_1,param_2);
      iVar1 = (int)*param_3;
      func_0x00010b9abb00();
      param_1 = param_2;
      if (iVar1 == 0) {
        return;
      }
    }
LAB_10b9ab4b4:
    *param_1 = 0;
    func_0x000107c31060();
    func_0x000107c31060(param_3,&stack0xffffffffffffffd8);
    func_0x00010b9aba84();
    return;
  }
  if (iVar1 != 0) {
    func_0x00010b9abc5c();
    iVar1 = (int)*param_2;
    func_0x00010b9abac0();
    param_3 = param_2;
    if (iVar1 != 0) goto LAB_10b9ab4b4;
  }
  return;
}



/* Entry: 10b9ab528; end: 10b9ab5c7;  */

void FUN_10b9ab528(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b9abb94();
  func_0x00010b9ab4c4();
  uVar2 = *param_5;
  FUN_10b9ab3dc(uVar2,*param_4);
  if ((int)uVar2 != 0) {
    FUN_10b9ab748(param_4,param_5);
    iVar1 = (int)*param_4;
    func_0x00010b9abac0();
    if (iVar1 != 0) {
      func_0x00010b9abc18();
      iVar1 = (int)*param_3;
      func_0x00010b9abb00();
      if (iVar1 != 0) {
        func_0x00010b9abc50();
        iVar1 = (int)*unaff_x19;
        func_0x00010b9abc40();
        if (iVar1 != 0) {
          *unaff_x20 = 0;
          func_0x000107c31060();
          func_0x000107c31060();
          func_0x00010b9aba84();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b9ab5c8; end: 10b9ab747;  */

bool FUN_10b9ab5c8(long param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uStack_58;
  
  switch((long)param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar8 = (int)param_2[-1];
    func_0x00010b9abb00();
    if (iVar8 != 0) {
      func_0x00010b9abc5c();
    }
    break;
  case 3:
    func_0x00010b9ab434(param_1,param_1 + 8,param_2 + -1);
    break;
  case 4:
    func_0x00010b9ab4c4(param_1,param_1 + 8,param_1 + 0x10,param_2 + -1);
    break;
  case 5:
    FUN_10b9ab528(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -1);
    break;
  default:
    func_0x00010b9abb6c(param_1,param_1 + 8);
    lVar7 = 0;
    iVar8 = 0;
    for (puVar5 = (ulong *)(param_1 + 0x18); puVar5 != param_2; puVar5 = puVar5 + 1) {
      iVar2 = (int)*puVar5;
      func_0x00010b9abac0();
      if (iVar2 != 0) {
        uStack_58 = *puVar5;
        *puVar5 = 0;
        lVar6 = lVar7;
        do {
          lVar1 = param_1 + lVar6;
          func_0x000107c31060(lVar1 + 0x18,lVar1 + 0x10);
          lVar4 = param_1;
          if (lVar6 == -0x10) goto LAB_10b9ab6dc;
          uVar3 = uStack_58;
          FUN_10b9ab3dc(uStack_58,*(undefined8 *)(lVar1 + 8));
          lVar6 = lVar6 + -8;
        } while ((uVar3 & 1) != 0);
        lVar4 = param_1 + lVar6 + 0x18;
LAB_10b9ab6dc:
        func_0x000107c31060(lVar4,&uStack_58);
        iVar8 = iVar8 + 1;
        func_0x00010b9aba84();
        if (iVar8 == 8) {
          return puVar5 + 1 == param_2;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 10b9ab748; end: 10b9ab783;  */

void FUN_10b9ab748(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  *param_1 = 0;
  func_0x000107c31060();
  func_0x000107c31060(param_2,&uStack_28);
  func_0x00010b9aba84();
  return;
}



/* Entry: 10b9ab784; end: 10b9ab797;  */

long * FUN_10b9ab784(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long **pplVar3;
  long lVar4;
  ulong uVar5;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
      pplVar3 = &plStack_a0;
      plStack_98 = &lStack_80;
      plStack_90 = &lStack_78;
      plStack_a0 = plVar1;
      lStack_80 = param_4;
      for (uVar5 = param_2; lStack_78 = param_4, uVar5 != param_3; uVar5 = uVar5 + 0x18) {
        func_0x000104bda2ec(param_4,uVar5);
        param_4 = lStack_78 + 0x18;
      }
      uStack_88 = 1;
      for (; param_2 != param_3; param_2 = param_2 + 0x18) {
        func_0x000104bda318(param_2);
      }
      FUN_10b9ab8a8(&plStack_a0);
      return (long *)pplVar3;
    }
    lVar2 = param_2 * 0x18;
    __Znwm();
  }
  lVar4 = lVar2 + param_3 * 0x18;
  *plVar1 = lVar2;
  plVar1[1] = lVar4;
  plVar1[2] = lVar4;
  plVar1[3] = lVar2 + param_2 * 0x18;
  return plVar1;
}



/* Entry: 10b9ab798; end: 10b9ab8a7;  */

long * FUN_10b9ab798(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  long **pplVar2;
  long lVar3;
  ulong uVar4;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
      pplVar2 = &plStack_90;
      plStack_88 = &lStack_70;
      plStack_80 = &lStack_68;
      plStack_90 = param_1;
      lStack_70 = param_4;
      for (uVar4 = param_2; lStack_68 = param_4, uVar4 != param_3; uVar4 = uVar4 + 0x18) {
        func_0x000104bda2ec(param_4,uVar4);
        param_4 = lStack_68 + 0x18;
      }
      uStack_78 = 1;
      for (; param_2 != param_3; param_2 = param_2 + 0x18) {
        func_0x000104bda318(param_2);
      }
      FUN_10b9ab8a8(&plStack_90);
      return (long *)pplVar2;
    }
    lVar1 = param_2 * 0x18;
    __Znwm();
  }
  lVar3 = lVar1 + param_3 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar3;
  param_1[2] = lVar3;
  param_1[3] = lVar1 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10b9ab8a8; end: 10b9ab9ef;  */

long FUN_10b9ab8a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x000104bda318();
    }
  }
  return param_1;
}



/* Entry: 10b9ab9f0; end: 10b9abce7;  */

undefined8 FUN_10b9ab9f0(undefined8 param_1)

{
  func_0x0001003adc0c(&stack0x00000008);
  func_0x000104bda960();
  return param_1;
}



/* Entry: 10b9abce8; end: 10b9abd2f;  */

undefined8 * FUN_10b9abce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110d7ecd0;
  puVar1 = param_1 + 3;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_10b9a8d98(puVar1);
    puVar1 = puVar1 + 2;
  }
  return param_1;
}



/* Entry: 10b9abd30; end: 10b9abd33;  */

undefined8 * FUN_10b9abd30(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110d7ecd0;
  puVar1 = param_1 + 3;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_10b9a8d98(puVar1);
    puVar1 = puVar1 + 2;
  }
  return param_1;
}



/* Entry: 10b9abd34; end: 10b9abd47;  */

void FUN_10b9abd34(void)

{
  FUN_10b9abce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9abd48; end: 10b9abdd7;  */

bool FUN_10b9abd48(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 == param_1) {
    bVar1 = true;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == *(long *)(param_2 + 0x10)) {
      param_2 = param_2 + 0x18;
      uVar4 = param_1 + 0x18U;
      while( true ) {
        bVar1 = uVar4 == param_1 + 0x18U + lVar3 * 0x10;
        if ((bVar1) || (uVar2 = uVar4, FUN_10b9a9500(uVar4,param_2), (uVar2 & 1) != 0)) break;
        uVar4 = uVar4 + 0x10;
        param_2 = param_2 + 0x10;
        lVar3 = *(long *)(param_1 + 0x10);
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 10b9abdd8; end: 10b9abe4b;  */

void FUN_10b9abdd8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010b9abe10(*(undefined8 *)(param_2 + 0x10));
  lVar3 = param_2 + 0x18;
  lVar1 = lVar3 + *(long *)(param_2 + 0x10) * 0x10;
  lVar2 = *param_1 + 0x18;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    FUN_10b9a9084(lVar2,lVar3);
    lVar2 = lVar2 + 0x10;
  }
  return;
}



/* Entry: 10b9abe4c; end: 10b9abe5b;  */

void FUN_10b9abe4c(long param_1,long param_2,long param_3)

{
  param_1 = param_1 + 0x18;
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_10b9a9084(param_1,param_2);
    param_1 = param_1 + 0x10;
  }
  return;
}



/* Entry: 10b9abe5c; end: 10b9abfa3;  */

void FUN_10b9abe5c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_3 != param_4; param_3 = param_3 + 0x10) {
    FUN_10b9a9084(param_2,param_3);
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 10b9abfa4; end: 10b9abfbf;  */

long FUN_10b9abfa4(long param_1,ulong param_2)

{
  int iVar1;
  
  if (param_2 < *(ulong *)(param_1 + 0x10)) {
    return *(long *)(param_1 + 8) + param_2 * 0x10;
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 10b9abfc0; end: 10b9ac09b;  */

undefined8 FUN_10b9abfc0(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  FUN_10b9abfa4();
  func_0x00010b9aba70();
  if (!(bool)in_ZR) {
    FUN_10b9aa5f0(auStack_28,7);
    func_0x00010b9aba8c();
    func_0x00010b9aba44();
    return 0;
  }
  func_0x00010b9abb74();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a9638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5fd6be)[extraout_x8] * 4 + 0x10b9a963c))();
    return param_1;
  }
  return 0;
}



/* Entry: 10b9ac09c; end: 10b9ac0b7;  */

void FUN_10b9ac09c(undefined8 *param_1,long *param_2)

{
  ulong auStack_78 [3];
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined **ppuStack_40;
  byte bStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  
  bStack_38 = 1;
  ppuStack_40 = &PTR_FUN_110d7e6e0;
  uStack_30 = 0;
  uStack_28 = 0;
  auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
  auStack_78[1] = 0;
  auStack_78[2] = 0;
  pppuStack_60 = &ppuStack_40;
  uStack_58 = 0;
  (**(code **)(*param_2 + 0x20))(auStack_50,param_2,auStack_78);
  if ((bStack_38 & 1) == 0) {
    FUN_10b9a0084(auStack_78,&ppuStack_40);
    *param_1 = 2;
    param_1[1] = auStack_78[0];
    auStack_78[0] = 0;
    func_0x000104bda93c(auStack_78);
  }
  else {
    func_0x000104bf351c(param_1,auStack_50);
  }
  FUN_10b9a8d98(auStack_50);
  FUN_10b9a01e4(&ppuStack_40);
  return;
}



/* Entry: 10b9ac0b8; end: 10b9ac16f;  */

void FUN_10b9ac0b8(undefined8 *param_1,long *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined **ppuStack_40;
  byte bStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  
  bStack_38 = 1;
  ppuStack_40 = &PTR_FUN_110d7e6e0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_78 = CONCAT71(uStack_78._1_7_,param_3);
  pppuStack_60 = &ppuStack_40;
  uStack_58 = 0;
  uStack_70 = param_4;
  uStack_68 = param_5;
  (**(code **)(*param_2 + 0x20))(auStack_50,param_2,&uStack_78);
  if ((bStack_38 & 1) == 0) {
    FUN_10b9a0084(&uStack_78,&ppuStack_40);
    *param_1 = 2;
    param_1[1] = uStack_78;
    uStack_78 = 0;
    func_0x000104bda93c(&uStack_78);
  }
  else {
    func_0x000104bf351c(param_1,auStack_50);
  }
  FUN_10b9a8d98(auStack_50);
  FUN_10b9a01e4(&ppuStack_40);
  return;
}



/* Entry: 10b9ac170; end: 10b9ac1f3;  */

void FUN_10b9ac170(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_68 [24];
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x000107c31084();
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x28))();
  uStack_38 = 0;
  plStack_50 = plVar2;
  uStack_48 = param_3;
  plStack_40 = param_2;
  func_0x000107c2793c(&UNK_10f7d1115);
  func_0x000107c3173c(auStack_68);
  func_0x000107c31080(param_1,plVar1,auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10b9ac1f4; end: 10b9ac20b;  */

undefined8 FUN_10b9ac1f4(void)

{
  return 0;
}



/* Entry: 10b9ac20c; end: 10b9ac22b;  */

void FUN_10b9ac20c(void)

{
  FUN_10b9abfa4();
  return;
}



/* Entry: 10b9ac22c; end: 10b9ac2b3;  */

undefined8 * FUN_10b9ac22c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_DAT_110d7edb0;
  param_1[1] = 1;
  param_1[2] = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 3);
  return param_1;
}



/* Entry: 10b9ac2b4; end: 10b9ac2db;  */

void FUN_10b9ac2b4(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2,(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b9ac2dc; end: 10b9ac307;  */

undefined1  [16] FUN_10b9ac2dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 6;
  auVar1._0_8_ = &DAT_10f7b88b1;
  return auVar1;
}



/* Entry: 10b9ac308; end: 10b9ac383;  */

void FUN_10b9ac308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  uVar1 = param_2;
  _strlen(param_2);
  FUN_10b9a8ef8(auStack_40,param_3);
  FUN_10b9aa86c(param_1,param_2,uVar1,auStack_40);
  FUN_10b9a8d98(auStack_40);
  return;
}



/* Entry: 10b9ac384; end: 10b9ac3af;  */

long FUN_10b9ac384(long param_1)

{
  func_0x00010b8a43b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9ac3b0; end: 10b9ac3b3;  */

long FUN_10b9ac3b0(long param_1)

{
  func_0x00010b8a43b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b9ac3b4; end: 10b9ac3c7;  */

void FUN_10b9ac3b4(void)

{
  FUN_10b9ac384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9ac3c8; end: 10b9ac447;  */

undefined8 * FUN_10b9ac3c8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7eed0;
  param_1[3] = *param_2;
  *param_2 = 0;
  param_1[4] = 0;
  lVar1 = param_1[3] + 0x10;
  func_0x00010527d444();
  param_1[4] = lVar1;
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10b9ac448; end: 10b9ac483;  */

undefined8 * FUN_10b9ac448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7eed0;
  func_0x000104bd4e40(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9ac484; end: 10b9ac487;  */

undefined8 * FUN_10b9ac484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7eed0;
  func_0x000104bd4e40(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9ac488; end: 10b9ac49b;  */

void FUN_10b9ac488(void)

{
  FUN_10b9ac448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9ac49c; end: 10b9ac52f;  */

void FUN_10b9ac49c(undefined1 *param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_2 + 0x20) ==
      *(long *)(*(long *)(param_2 + 0x18) + 0x10) + *(long *)(*(long *)(param_2 + 0x18) + 0x28)) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x00010b9ac5b8(auStack_38,*(long *)(param_2 + 0x28),*(long *)(param_2 + 0x28) + 8);
    func_0x00010b9ac530((long *)(param_2 + 0x20),0);
    FUN_10b9ac600(param_1,auStack_38);
    func_0x000104bda318(auStack_38);
  }
  return;
}



/* Entry: 10b9ac530; end: 10b9ac5ff;  */

undefined1  [16] FUN_10b9ac530(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = *param_1;
  func_0x00010527d4cc();
  return auVar1;
}



/* Entry: 10b9ac600; end: 10b9ac61b;  */

void FUN_10b9ac600(long param_1)

{
  func_0x000104bda2ec();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b9ac61c; end: 10b9ac623;  */

void FUN_10b9ac61c(void)

{
  return;
}



/* Entry: 10b9ac624; end: 10b9ac6bb;  */

undefined8 * FUN_10b9ac624(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b99dbac(&uStack_38,param_3);
  *param_1 = &PTR_FUN_110d7ef28;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[3] = uStack_38;
  uStack_38 = 0;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  func_0x000107c27900(&uStack_38);
  return param_1;
}



/* Entry: 10b9ac6bc; end: 10b9ac6bf;  */

undefined8 * FUN_10b9ac6bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7ef28;
  func_0x000107c27900(param_1 + 3);
  return param_1;
}



/* Entry: 10b9ac6c0; end: 10b9ac6d3;  */

void FUN_10b9ac6c0(void)

{
  func_0x00010b9ac68c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9ac6d4; end: 10b9ac6f7;  */

/* WARNING: Removing unreachable block (ram,0x000100063410) */

bool FUN_10b9ac6d4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    return false;
  }
  lStack_18 = *(long *)(param_1 + 0x28);
  if (lStack_18 != *(long *)(param_2 + 0x28)) {
    return false;
  }
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = (int)&uStack_20;
  func_0x000100067218(&uStack_20,*(undefined8 *)(param_2 + 0x20),lStack_18);
  return iVar1 == 0;
}



/* Entry: 10b9ac6f8; end: 10b9aca0f;  */

void FUN_10b9ac6f8(long *param_1,uint *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  long *extraout_x8_13;
  long *extraout_x8_14;
  long *extraout_x8_15;
  long *extraout_x8_16;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  long lVar5;
  
  if ((bRam00000001137fd408 & 1) == 0) {
    iVar4 = 0x137fd408;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107c31088(&DAT_1137fd400,&DAT_10f58255b);
      ___cxa_guard_release(0x1137fd408);
    }
  }
  if ((bRam00000001137fd418 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8;
    if (extraout_w9 != 0) {
      param_2 = (uint *)&DAT_10f582577;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_00;
    }
  }
  if ((bRam00000001137fd428 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_01;
    if (extraout_w9_00 != 0) {
      param_2 = (uint *)&DAT_10f58258e;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_02;
    }
  }
  if ((bRam00000001137fd438 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_03;
    if (extraout_w9_01 != 0) {
      param_2 = (uint *)&DAT_10f581f75;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_04;
    }
  }
  if ((bRam00000001137fd448 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_05;
    if (extraout_w9_02 != 0) {
      param_2 = (uint *)&DAT_10f582565;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_06;
    }
  }
  if ((bRam00000001137fd458 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_07;
    if (extraout_w9_03 != 0) {
      param_2 = (uint *)&DAT_10f582582;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_08;
    }
  }
  if ((bRam00000001137fd468 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_09;
    if (extraout_w9_04 != 0) {
      param_2 = (uint *)&DAT_10f582599;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_10;
    }
  }
  if ((bRam00000001137fd478 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_11;
    if (extraout_w9_05 != 0) {
      param_2 = (uint *)&DAT_10f5825a5;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_12;
    }
  }
  if ((bRam00000001137fd488 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_13;
    if (extraout_w9_06 != 0) {
      param_2 = (uint *)&DAT_10f5825b2;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_14;
    }
  }
  if ((bRam00000001137fd498 & 1) == 0) {
    FUN_10b9aca10();
    func_0x00010b9aca20();
    param_1 = extraout_x8_15;
    if (extraout_w9_07 != 0) {
      param_2 = (uint *)&UNK_10f47a601;
      func_0x00010b9aca38();
      func_0x00010b9aca30();
      func_0x00010b9aca40();
      param_1 = extraout_x8_16;
    }
  }
  lVar5 = *(long *)(&PTR_DAT_110d7ef60)[*param_2];
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar5;
  return;
}



/* Entry: 10b9aca10; end: 10b9aca57;  */

void FUN_10b9aca10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_acquire_110346be0)();
  return;
}



/* Entry: 10b9aca58; end: 10b9acad3;  */

undefined8 * FUN_10b9aca58(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_110d7efc0;
  param_1[1] = 1;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = lVar4;
  FUN_10b9acad4(&uStack_21,param_1,*(undefined8 *)(lVar4 + 0x20));
  return param_1;
}



/* Entry: 10b9acad4; end: 10b9acaf3;  */

void FUN_10b9acad4(undefined8 param_1,long param_2,long param_3)

{
  param_2 = param_2 + 0x21;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)(param_2 + -1) = 0;
    *(undefined8 *)(param_2 + -9) = 0;
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 10b9acaf4; end: 10b9acb4f;  */

undefined8 * FUN_10b9acaf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_110d7efc0;
  for (lVar2 = *(long *)(param_1[2] + 0x20); lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_10b9a8d98(puVar1);
    puVar1 = puVar1 + 2;
  }
  func_0x000107c27928(param_1 + 2);
  return param_1;
}



/* Entry: 10b9acb50; end: 10b9acb53;  */

undefined8 * FUN_10b9acb50(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_110d7efc0;
  for (lVar2 = *(long *)(param_1[2] + 0x20); lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_10b9a8d98(puVar1);
    puVar1 = puVar1 + 2;
  }
  func_0x000107c27928(param_1 + 2);
  return param_1;
}



/* Entry: 10b9acb54; end: 10b9acb67;  */

void FUN_10b9acb54(void)

{
  FUN_10b9acaf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9acb68; end: 10b9acba3;  */

long FUN_10b9acb68(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_10b99179c(lVar2);
  if ((param_2 & 1) != 0) {
    return param_1 + lVar2 * 0x10 + 0x18;
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 10b9acba4; end: 10b9acc2b;  */

ulong FUN_10b9acba4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  lVar3 = *(long *)(uVar1 + 0x20);
  FUN_10b9917e4();
  param_1 = param_1 + 0x18;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar2 = param_1;
    FUN_10b9aa3c8(param_1);
    uVar1 = ((lVar2 * -0x395b586ca42e166b ^ (ulong)(lVar2 * -0x395b586ca42e166b) >> 0x2f) *
             -0x395b586ca42e166b ^ uVar1) * -0x395b586ca42e166b + 0xe6546b64;
    param_1 = param_1 + 0x10;
  }
  return uVar1;
}



/* Entry: 10b9acc2c; end: 10b9acc9f;  */

bool FUN_10b9acc2c(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20) + 1;
    lVar3 = param_1 + 0x18;
    lVar4 = param_2 + 0x18;
    do {
      lVar6 = lVar6 + -1;
      bVar2 = lVar6 == 0;
      if (lVar6 == 0) {
        return true;
      }
      lVar1 = lVar3 + 0x10;
      FUN_10b9a9500(lVar3,lVar4);
      iVar5 = (int)lVar3;
      lVar3 = lVar1;
      lVar4 = lVar4 + 0x10;
    } while (iVar5 == 0);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10b9acca0; end: 10b9acd8f;  */

void FUN_10b9acca0(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [16];
  char cStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000104bd4df4();
  FUN_10b90d498(*param_1 + 0x10,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x20));
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x20) << 4;
  lStack_50 = lVar2 + 0x28;
  lStack_48 = param_2 + 0x18;
  lVar2 = lVar2 + 0x40;
  lVar1 = param_2 + 0x28;
  for (; lVar3 != 0; lVar3 = lVar3 + -0x10) {
    func_0x00010b9aca4c(auStack_68,&lStack_50);
    if ((param_3 == 0) || (cStack_58 != '\x01')) {
      func_0x0001052739d0(*param_1 + 0x10,auStack_68);
      FUN_10b9a9084();
    }
    FUN_10b902568(auStack_68);
    lStack_50 = lVar2;
    lStack_48 = lVar1;
    lVar2 = lVar2 + 0x18;
    lVar1 = lVar1 + 0x10;
  }
  return;
}



/* Entry: 10b9acd90; end: 10b9ace43;  */

void FUN_10b9acd90(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x00010b9ace18(puVar1,*(undefined8 *)(*param_2 + 0x20),param_2);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10b9ace44; end: 10b9ace93;  */

void FUN_10b9ace44(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7f008;
  do {
    iVar1 = iRam0000000113846a38 + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x113846a38,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      iRam0000000113846a38 = iVar1;
    }
  } while (cVar3 != '\0');
  *(int *)(param_1 + 3) = iVar1;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[4] = lVar5;
  return;
}



/* Entry: 10b9ace94; end: 10b9aced3;  */

undefined8 * FUN_10b9ace94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7f008;
  func_0x000104bdbf78(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9aced4; end: 10b9ad18f;  */

void FUN_10b9aced4(long ***param_1,long ****param_2,long ****param_3,long ****param_4)

{
  ulong uVar1;
  byte in_ZR;
  long ****pppplVar2;
  long ****pppplVar3;
  undefined1 *puVar4;
  uint uVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****unaff_x21;
  long ****unaff_x22;
  long ***unaff_x23;
  ulong unaff_x24;
  long **pplStack_80;
  long **pplStack_78;
  long **pplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long *plStack_58;
  long ***ppplStack_50;
  byte bStack_48;
  undefined7 uStack_47;
  
  pppplVar6 = (long ****)(ulong)*(byte *)(param_3 + 1);
  pppplVar3 = param_2;
  pppplVar2 = param_3;
  pppplVar7 = param_2;
  switch(*(byte *)(param_3 + 1)) {
  case 0:
    *(undefined2 *)(param_2 + 1) = 0;
    *param_2 = (long ***)0x0;
    break;
  default:
    pppplVar3 = param_3;
  case 0x34:
  case 0x78:
  case 0xc0:
  case 200:
  case 0xcd:
  case 0xd7:
  case 0xfc:
  case 0xfd:
    func_0x0001098f37f0();
  case 0x7c:
  case 0xc4:
  case 0xce:
  case 0xda:
    if ((int)pppplVar3 == 0) {
code_r0x00010b9ad060:
      pppplVar3 = param_3;
      goto code_r0x00010b9ad064;
    }
  case 0xc9:
  case 0xdd:
    pppplVar3 = param_3;
  case 0xe0:
    func_0x0001098f3608();
  case 0xcf:
  case 0xe3:
    pppplVar6 = (long ****)0x4;
  case 0xd8:
  case 0xe6:
    *(short *)(param_2 + 1) = (short)pppplVar6;
  case 0xe9:
    *(int *)param_2 = (int)pppplVar3;
  case 0xec:
  case 0xf9:
    break;
  case 3:
    func_0x0001098f3c18(param_3);
    *(undefined2 *)(param_2 + 1) = 6;
    *param_2 = param_1;
  case 0xd2:
  case 0xd3:
    break;
  case 4:
  case 0xef:
    pppplVar2 = &ppplStack_50;
  case 0xf2:
    param_4 = &ppplStack_60;
  case 0xdb:
  case 0xde:
  case 0xf5:
    pppplVar3 = param_3;
  case 0xd6:
  case 0xf8:
    func_0x0001098f3310(pppplVar3,pppplVar2,param_4);
  case 0xf0:
    func_0x000107c31084();
  case 0xe7:
  case 0xf6:
  case 0xe1:
  case 0xe4:
  case 0xed:
  case 0xfe:
    func_0x00010b9a6bac(&pplStack_80);
  case 0xea:
    FUN_10b9a8e18(param_2,&pplStack_80);
    func_0x000107c278f4(&pplStack_80);
  case 0xf3:
    break;
  case 5:
    func_0x000107c2ad80();
    *(undefined2 *)(param_2 + 1) = 7;
    *(char *)param_2 = (char)param_3;
    break;
  case 6:
    pppplVar3 = param_3;
  case 9:
  case 0x13:
  case 0x1d:
  case 0x29:
  case 0x40:
  case 0x43:
  case 0x86:
  case 0x96:
  case 0xa2:
  case 0xac:
    func_0x0001098f3d20(pppplVar3);
  case 0x44:
    pppplVar3 = (long ****)((ulong)pppplVar3 & 0xffffffff);
  case 0x5b:
  case 0xa3:
    pppplVar6 = (long ****)&pplStack_80;
  case 0x2c:
  case 0x4c:
  case 0x66:
  case 0x9b:
  case 0x9c:
  case 0x9e:
  case 0xb1:
  case 0xb2:
  case 0xb4:
    func_0x00010b9abe10(pppplVar6,pppplVar3);
  case 0xb:
  case 0xf:
  case 0x11:
  case 0x1a:
  case 0x1f:
  case 0x23:
  case 0x2b:
  case 0x3b:
  case 0x46:
  case 0x4a:
  case 0x51:
  case 0x5a:
  case 0x5c:
  case 0x65:
  case 0x6b:
  case 0x85:
  case 0x8d:
  case 0x95:
  case 0x9d:
  case 0xa0:
  case 0xab:
  case 0xb3:
  case 0xb6:
    pppplVar3 = param_3;
    param_3 = pppplVar2;
  case 0x12:
    func_0x0001098f46a8();
  case 0x4f:
  case 0x50:
  case 0x69:
  case 0x6a:
    FUN_10b9ad528();
  case 0x83:
  case 0x93:
  case 0xa9:
    pppplVar2 = pppplVar3;
  case 0x18:
  case 0x41:
  case 0x49:
  case 0x54:
  case 99:
  case 0x6e:
    unaff_x24 = 0x18;
    unaff_x21 = param_3;
  case 0xa4:
    while( true ) {
      in_ZR = unaff_x22 == pppplVar2;
code_r0x00010b9ad0c0:
      pppplVar6 = (long ****)(ulong)in_ZR;
code_r0x00010b9ad0c4:
      in_ZR = ((ulong)unaff_x23 & 1) == 0;
code_r0x00010b9ad0c8:
      uVar5 = (uint)unaff_x21;
      if ((bool)in_ZR) {
        uVar5 = (uint)pppplVar6;
      }
      pppplVar6 = (long ****)(ulong)uVar5;
code_r0x00010b9ad0cc:
      if (((ulong)pppplVar6 & 1) != 0) break;
code_r0x00010b9ad0d0:
      pppplVar3 = &ppplStack_60;
      unaff_x23 = (long ***)pplStack_80;
code_r0x00010b9ad0d8:
      param_3 = unaff_x22 + 6;
code_r0x00010b9ad0dc:
      FUN_10b9aced4(pppplVar3,param_3);
code_r0x00010b9ad0e0:
      pppplVar3 = (long ****)((long)unaff_x23 + unaff_x24);
code_r0x00010b9ad0e4:
      param_3 = &ppplStack_60;
code_r0x00010b9ad0e8:
      FUN_10b9a9020(pppplVar3,param_3);
      FUN_10b9a8d98(&ppplStack_60);
code_r0x00010b9ad0f4:
      func_0x0001098f2e00(&ppplStack_50);
      unaff_x23 = (long ***)(ulong)bStack_48;
      unaff_x24 = unaff_x24 + 0x10;
      unaff_x22 = (long ****)ppplStack_50;
    }
    func_0x00010b9a8f84(param_2,&pplStack_80);
    func_0x000104bddf38(&pplStack_80);
    break;
  case 7:
    unaff_x21 = param_3;
    func_0x000104bd4df4(&ppplStack_68);
    func_0x0001098f46a8();
    FUN_10b9ad528();
    plStack_58 = (long *)CONCAT71(plStack_58._1_7_,(char)unaff_x21);
    pppplVar2 = &ppplStack_50;
    ppplStack_60 = (long ***)param_3;
    func_0x0001098f2e38(pppplVar2,&ppplStack_60);
    FUN_10b90d498(ppplStack_68 + 2,(long)(int)pppplVar2);
    while( true ) {
      uVar5 = (uint)unaff_x21;
      if (((ulong)unaff_x23 & 1) == 0) {
        uVar5 = (uint)(unaff_x22 == param_3);
      }
      if ((uVar5 & 1) != 0) break;
      func_0x000107c31084();
      pppplVar6 = (long ****)&pplStack_70;
code_r0x00010b9ad014:
      func_0x00010b9a6bac(pppplVar6);
      pppplVar2 = param_3;
code_r0x00010b9ad018:
      param_3 = unaff_x22 + 6;
      pppplVar3 = (long ****)&pplStack_80;
code_r0x00010b9ad020:
      FUN_10b9aced4(pppplVar3,param_3);
      pppplVar6 = (long ****)ppplStack_68;
code_r0x00010b9ad028:
      pppplVar3 = pppplVar6 + 2;
code_r0x00010b9ad02c:
      func_0x0001052739d0(pppplVar3,&pplStack_70);
code_r0x00010b9ad038:
      FUN_10b9a9020();
      pppplVar3 = (long ****)&pplStack_80;
code_r0x00010b9ad040:
      FUN_10b9a8d98(pppplVar3);
code_r0x00010b9ad044:
      func_0x0001098f2e00(&ppplStack_50);
      pppplVar3 = (long ****)&pplStack_70;
code_r0x00010b9ad050:
      func_0x000107c278f4(pppplVar3);
      unaff_x22 = (long ****)ppplStack_50;
code_r0x00010b9ad058:
      unaff_x23 = (long ***)(ulong)bStack_48;
      param_3 = pppplVar2;
code_r0x00010b9ad05c:
    }
    FUN_10b9a8f54(param_2,&ppplStack_68);
    func_0x000104bd4e40(&ppplStack_68);
    break;
  case 8:
  case 0x1c:
    goto code_r0x00010b9ad02c;
  case 10:
  case 0x1e:
    goto code_r0x00010b9ad0c4;
  case 0xc:
  case 0x20:
  case 0x24:
    goto code_r0x00010b9ad060;
  case 0xd:
  case 0x21:
  case 0x60:
    goto code_r0x00010b9ad0f4;
  case 0xe:
  case 0x22:
    goto code_r0x00010b9ad0d0;
  case 0x10:
    goto code_r0x00010b9ad020;
  case 0x14:
  case 0x25:
  case 0x4e:
  case 0x68:
  case 0x81:
  case 0x91:
  case 0xa7:
    goto code_r0x00010b9ad0e4;
  case 0x15:
  case 0x42:
  case 0x45:
  case 0x5f:
    goto code_r0x00010b9ad0c0;
  case 0x16:
  case 0x3c:
  case 0x53:
  case 0x5e:
  case 0x6d:
  case 0x8e:
    goto code_r0x00010b9ad0e0;
  case 0x17:
    goto code_r0x00010b9ad040;
  case 0x19:
  case 0x3f:
    goto code_r0x00010b9ad0e8;
  case 0x26:
  case 0x48:
    goto code_r0x00010b9ad0d8;
  case 0x27:
  case 0x39:
  case 0x4b:
  case 0x56:
  case 0x5d:
  case 100:
  case 0x70:
  case 0x89:
  case 0x8b:
  case 0x99:
  case 0xaf:
    goto code_r0x00010b9ad0c8;
  case 0x28:
  case 0xa1:
    goto code_r0x00010b9ad018;
  case 0x2a:
  case 0x3a:
  case 0x52:
  case 0x57:
  case 0x6c:
  case 0x82:
  case 0x87:
  case 0x8c:
  case 0x92:
  case 0x97:
  case 0xa8:
  case 0xad:
    goto code_r0x00010b9ad0dc;
  case 0x38:
  case 0x8a:
code_r0x00010b9ad064:
    func_0x0001098f3888();
    *(undefined2 *)(param_2 + 1) = 5;
    *param_2 = (long ***)pppplVar3;
    break;
  case 0x3e:
  case 0x9a:
  case 0xb0:
    goto code_r0x00010b9ad014;
  case 0x47:
  case 0xca:
    goto code_r0x00010b9ad028;
  case 0x4d:
  case 0x67:
    goto code_r0x00010b9ad05c;
  case 0x55:
  case 0x62:
  case 0x6f:
  case 0x88:
  case 0x98:
  case 0xae:
    goto code_r0x00010b9ad0cc;
  case 0x59:
  case 0x84:
  case 0x94:
  case 0xaa:
    goto code_r0x00010b9ad058;
  case 0x61:
    goto code_r0x00010b9ad038;
  case 0x80:
  case 0x90:
  case 0xa6:
    goto code_r0x00010b9ad050;
  case 0x9f:
  case 0xb5:
    goto code_r0x00010b9ad044;
  case 0xd1:
    pppplVar3 = (long ****)&stack0xfffffffffffffff0;
    pppplVar7 = pppplVar6;
    param_3 = param_2;
  case 0xd0:
    _bzero(pppplVar3,0xb8);
    puVar4 = &stack0xfffffffffffffff0;
    func_0x0001098ee3dc(puVar4,*param_3,(long)*param_3 + (long)param_3[1],&stack0xffffffffffffffc8,1
                       );
    if (((ulong)puVar4 & 1) == 0) {
      func_0x0001098f0de0(&pplStack_78,&stack0xfffffffffffffff0);
      plStack_58 = pplStack_78[1];
      ppplStack_60 = (long ***)*pplStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppplStack_50,pplStack_78 + 2);
      FUN_10b9ad314(&pplStack_78);
      uVar1 = CONCAT71(uStack_47,bStack_48);
      if (-1 < (long)unaff_x24) {
        uVar1 = unaff_x24 >> 0x38;
        ppplStack_50 = (long ***)&ppplStack_50;
      }
      FUN_10b9a6de8(&pplStack_78,*param_3,param_3[1],ppplStack_50,uVar1,ppplStack_60);
      *pppplVar7 = (long ***)0x2;
      pppplVar7[1] = (long ***)pplStack_78;
      pplStack_78 = (long **)0x0;
      func_0x000104bda93c(&pplStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_50);
    }
    else {
      FUN_10b9aced4(&ppplStack_60,&stack0xffffffffffffffc8);
      func_0x000104bf351c(pppplVar7,&ppplStack_60);
      FUN_10b9a8d98(&ppplStack_60);
    }
    func_0x000107c2ad70(&stack0xffffffffffffffc8);
    FUN_10b9ad370(&stack0xfffffffffffffff0);
    return;
  }
  return;
}



/* Entry: 10b9ad190; end: 10b9ad2ef;  */

void FUN_10b9ad190(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *apuStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined1 auStack_118 [8];
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [184];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  _bzero(auStack_f0,0xb8);
  uStack_38 = 1;
  uStack_34 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_108 = 0;
  puVar1 = auStack_f0;
  func_0x0001098ee3dc(puVar1,*param_2,*param_2 + param_2[1],auStack_118,1);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001098f0de0(apuStack_158,auStack_f0);
    uStack_138 = apuStack_158[0][1];
    uStack_140 = *apuStack_158[0];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_130,apuStack_158[0] + 2);
    FUN_10b9ad314(apuStack_158);
    if (-1 < (char)bStack_119) {
      uStack_128 = (ulong)bStack_119;
      ppuStack_130 = &ppuStack_130;
    }
    FUN_10b9a6de8(apuStack_158,*param_2,param_2[1],ppuStack_130,uStack_128,uStack_140);
    *param_1 = 2;
    param_1[1] = apuStack_158[0];
    apuStack_158[0] = (undefined8 *)0x0;
    func_0x000104bda93c(apuStack_158);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_130);
  }
  else {
    FUN_10b9aced4(&uStack_140,auStack_118);
    func_0x000104bf351c(param_1,&uStack_140);
    FUN_10b9a8d98(&uStack_140);
  }
  func_0x000107c2ad70(auStack_118);
  FUN_10b9ad370(auStack_f0);
  return;
}



/* Entry: 10b9ad2f0; end: 10b9ad313;  */

void FUN_10b9ad2f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b9ad190(&uStack_20);
  return;
}



/* Entry: 10b9ad314; end: 10b9ad36f;  */

long * FUN_10b9ad314(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b9ad370; end: 10b9ad527;  */

long * FUN_10b9ad370(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x14);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc);
  uVar1 = param_1[10];
  lVar6 = param_1[7];
  plVar2 = (long *)(lVar6 + (uVar1 / 0x49) * 8);
  if (param_1[8] == lVar6) {
    lVar4 = 0;
    lVar6 = 0;
  }
  else {
    lVar4 = *(long *)(lVar6 + (uVar1 / 0x49) * 8) + (uVar1 % 0x49) * 0x38;
    lVar6 = *(long *)(lVar6 + ((param_1[0xb] + uVar1) / 0x49) * 8) +
            ((param_1[0xb] + uVar1) % 0x49) * 0x38;
  }
  do {
    lVar7 = lVar4 + -0xff8;
    do {
      if (lVar4 == lVar6) {
        param_1[0xb] = 0;
        puVar3 = (undefined8 *)param_1[7];
        while( true ) {
          puVar5 = (undefined8 *)param_1[8];
          uVar1 = (long)puVar5 - (long)puVar3 >> 3;
          if (uVar1 < 3) break;
          __ZdlPv(*puVar3);
          puVar3 = (undefined8 *)(param_1[7] + 8);
          param_1[7] = (long)puVar3;
        }
        if (uVar1 == 1) {
          lVar6 = 0x24;
LAB_10b9ad46c:
          param_1[10] = lVar6;
        }
        else if (uVar1 == 2) {
          lVar6 = 0x49;
          goto LAB_10b9ad46c;
        }
        for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
          __ZdlPv(*puVar3);
        }
        lVar6 = param_1[8];
        while (lVar6 != param_1[7]) {
          lVar6 = lVar6 + -8;
          param_1[8] = lVar6;
        }
        if (param_1[6] != 0) {
          __ZdlPv();
        }
        puVar3 = (undefined8 *)param_1[1];
        param_1[5] = 0;
        while( true ) {
          puVar5 = (undefined8 *)param_1[2];
          uVar1 = (long)puVar5 - (long)puVar3 >> 3;
          if (uVar1 < 3) break;
          __ZdlPv(*puVar3);
          puVar3 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar3;
        }
        if (uVar1 == 1) {
          lVar6 = 0x100;
        }
        else {
          if (uVar1 != 2) goto LAB_10b9ad508;
          lVar6 = 0x200;
        }
        param_1[4] = lVar6;
LAB_10b9ad508:
        for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
          __ZdlPv(*puVar3);
        }
        lVar6 = param_1[2];
        if (lVar6 != param_1[1]) {
          param_1[2] = lVar6 + ((param_1[1] - lVar6) + 7U & 0xfffffffffffffff8);
        }
        if (*param_1 != 0) {
          func_0x000107c60e14();
        }
        return param_1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar4 + 0x18);
      lVar4 = lVar4 + 0x38;
      lVar7 = lVar7 + 0x38;
    } while (*plVar2 != lVar7);
    plVar2 = plVar2 + 1;
    lVar4 = *plVar2;
  } while( true );
}



/* Entry: 10b9ad528; end: 10b9ad547;  */

undefined1  [16] FUN_10b9ad528(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  if ((*(ushort *)(unaff_x20 + 1) & 0xfe) == 6) {
    lVar2 = *unaff_x20;
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 8;
    }
    auVar3[8] = lVar2 == 0;
    auVar3._0_8_ = lVar1;
    auVar3._9_7_ = 0;
    return auVar3;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 10b9ad548; end: 10b9ad6b7;  */

undefined8 FUN_10b9ad548(void)

{
  int iVar1;
  
  if ((bRam0000000113846a48 & 1) == 0) {
    iVar1 = 0x13846a48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113846a40,&UNK_10f7d112c);
      ___cxa_guard_release(0x113846a48);
    }
  }
  return 0x113846a40;
}



/* Entry: 10b9ad6b8; end: 10b9ad717;  */

undefined8 * FUN_10b9ad6b8(undefined4 param_1,undefined8 *param_2,long param_3)

{
  undefined1 in_ZR;
  
  *param_2 = 0;
  FUN_10b9ad548();
  func_0x00010b9ada90();
  func_0x00010b9ada9c();
  if (!(bool)in_ZR) {
    FUN_10b9aa3b0(param_3 + 8);
    *(undefined4 *)param_2 = param_1;
  }
  func_0x00010b9ad5a4();
  func_0x00010b9ada90();
  func_0x00010b9ada9c();
  if (!(bool)in_ZR) {
    FUN_10b9aa3b0(param_3 + 8);
    *(undefined4 *)((long)param_2 + 4) = param_1;
  }
  return param_2;
}



/* Entry: 10b9ad718; end: 10b9ad8a7;  */

undefined4 FUN_10b9ad718(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b9ad8a8; end: 10b9ad8bf;  */

uint FUN_10b9ad8a8(uint param_1)

{
  func_0x00010b9ad864();
  return param_1 ^ 1;
}



/* Entry: 10b9ad8c0; end: 10b9ad917;  */

void FUN_10b9ad8c0(undefined8 param_1)

{
  func_0x000107c2793c(&UNK_10f7d113d);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10b9ad918; end: 10b9ada07;  */

void FUN_10b9ad918(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  puVar1 = param_2;
  func_0x000104bd4df4();
  func_0x00010b9ada70(*param_2);
  FUN_10b9ad548();
  lVar2 = unaff_x22 + 0x10;
  func_0x0001052739d0(lVar2,puVar1);
  func_0x00010b9ada68();
  func_0x00010b9ada58();
  lVar3 = *param_1;
  func_0x00010b9ad5a4();
  lVar3 = lVar3 + 0x10;
  func_0x0001052739d0(lVar3,lVar2);
  func_0x00010b9ada68();
  func_0x00010b9ada58();
  func_0x00010b9ada70(param_2[2]);
  func_0x00010b9ad600();
  lVar2 = unaff_x22 + 0x10;
  func_0x0001052739d0(lVar2,lVar3);
  func_0x00010b9ada68();
  func_0x00010b9ada58();
  lVar3 = *param_1;
  func_0x00010b9ad65c();
  func_0x0001052739d0(lVar3 + 0x10,lVar2);
  func_0x00010b9ada68();
  func_0x00010b9ada58();
  return;
}



/* Entry: 10b9ada08; end: 10b9adaaf;  */

bool FUN_10b9ada08(float *param_1)

{
  if ((((*param_1 == 1.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) &&
     ((param_1[3] == 1.0 && (param_1[4] == 0.0)))) {
    return param_1[5] == 0.0;
  }
  return false;
}



/* Entry: 10b9adab0; end: 10b9adaf7; +[SCNotificationNavigationRoute appStore] */

void FUN_10b9adab0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1be0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b9adaf8; end: 10b9adb1b; -[SCNotificationNavigationRoute copyWithZone:] */

undefined8 FUN_10b9adaf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b9adb1c; end: 10b9adb23; -[SCNotificationNavigationRoute hash] */

undefined8 FUN_10b9adb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b9adb24; end: 10b9adb67; -[SCNotificationNavigationRoute internalInit] */

void FUN_10b9adb24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270c140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9adb68; end: 10b9adbef; -[SCNotificationNavigationRoute isEqual:] */

bool FUN_10b9adb68(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b9adbf0; end: 10b9adc0b; -[SCNotificationNavigationRoute matchAppStore:] */

void FUN_10b9adbf0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b9adc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10b9adc0c; end: 10b9adc9b; +[SCNotificationImageAttachment uiImageWithImage:fileName:] */

void FUN_10b9adc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e1be8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b9adc9c; end: 10b9add07; +[SCNotificationImageAttachment urlWithUrl:] */

void FUN_10b9adc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1be8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b9add08; end: 10b9add2b; -[SCNotificationImageAttachment copyWithZone:] */

undefined8 FUN_10b9add08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b9add2c; end: 10b9addaf; -[SCNotificationImageAttachment hash] */

void FUN_10b9add2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270c148;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9addb0; end: 10b9addf3; -[SCNotificationImageAttachment internalInit] */

void FUN_10b9addb0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270c148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9addf4; end: 10b9adec3; -[SCNotificationImageAttachment isEqual:] */

long FUN_10b9addf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b9ade9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b9adea8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b9adea8;
          }
          goto LAB_10b9ade9c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b9adea8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b9adec4; end: 10b9adf4b; -[SCNotificationImageAttachment matchUiImage:url:] */

void FUN_10b9adec4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9adf4c; end: 10b9adf87; -[SCNotificationImageAttachment .cxx_destruct] */

void FUN_10b9adf4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b9adf88; end: 10b9ae093; -[SCNotificationGroupTemplate initWithDual:triple:multi:pluralPerSender:] */

undefined1 *
FUN_10b9adf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270c150;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b9ae094; end: 10b9ae0b7; -[SCNotificationGroupTemplate copyWithZone:] */

undefined8 FUN_10b9ae094(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b9ae0b8; end: 10b9ae143; -[SCNotificationGroupTemplate hash] */

undefined8 * FUN_10b9ae0b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b9ae1f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b9ae200;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b9ae200;
            }
            goto LAB_10b9ae1f4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b9ae200:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b9ae144; end: 10b9ae21b; -[SCNotificationGroupTemplate isEqual:] */

long FUN_10b9ae144(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b9ae1f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b9ae200;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b9ae200;
            }
            goto LAB_10b9ae1f4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b9ae200:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b9ae21c; end: 10b9ae223; -[SCNotificationGroupTemplate dual] */

undefined8 FUN_10b9ae21c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b9ae224; end: 10b9ae22b; -[SCNotificationGroupTemplate triple] */

undefined8 FUN_10b9ae224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b9ae22c; end: 10b9ae233; -[SCNotificationGroupTemplate multi] */

undefined8 FUN_10b9ae22c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b9ae234; end: 10b9ae23b; -[SCNotificationGroupTemplate pluralPerSender] */

undefined8 FUN_10b9ae234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b9ae23c; end: 10b9ae2ff; -[SCNotificationGroupTemplate .cxx_destruct] */

void FUN_10b9ae23c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b9ae300; end: 10b9ae30b;  */

bool FUN_10b9ae300(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b9ae30c; end: 10b9ae387;  */

undefined * FUN_10b9ae30c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fd4a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f9f198,
                        &UNK_10e5fd9ac,&UNK_10e5fd9e8,3,FUN_10b9ae388,0);
    do {
      if (puRam00000001137fd4a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fd4a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fd4a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fd4a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fd4a8;
}



/* Entry: 10b9ae388; end: 10b9ae393;  */

bool FUN_10b9ae388(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b9ae394; end: 10b9ae40f;  */

undefined * FUN_10b9ae394(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fd4b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f9f1b8,
                        &UNK_10e5fd9f4,&UNK_10e5fda30,3,FUN_10b9ae410,0);
    do {
      if (puRam00000001137fd4b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fd4b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fd4b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fd4b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fd4b0;
}



/* Entry: 10b9ae410; end: 10b9ae41b;  */

bool FUN_10b9ae410(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b9ae41c; end: 10b9ae4b7; +[SCPBNFeatureMetadata descriptor] */

undefined * FUN_10b9ae41c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd4b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf4cb0,
                        &PTR____CFConstantStringClassReference_110f9f1d8,&PTR_DAT_1133fc7e0,
                        &PTR_DAT_1133fccb8,0xc,0x68,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5fda3c);
    puRam00000001137fd4b8 = puVar1;
  }
  return puRam00000001137fd4b8;
}



/* Entry: 10b9ae4b8; end: 10b9ae51f; +[SCPBNMessageReminders descriptor] */

void FUN_10b9ae4b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd4c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf4d00,
                        &PTR____CFConstantStringClassReference_110f9f1f8,&PTR_DAT_1133fc7e0,
                        &PTR_DAT_1133fc898,2,0x18,0x1c);
    puRam00000001137fd4c0 = puVar1;
  }
  return;
}



/* Entry: 10b9ae520; end: 10b9ae59b; +[SCPBNSpotlightGrowth descriptor] */

undefined * FUN_10b9ae520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd4c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf4d50,
                        &PTR____CFConstantStringClassReference_110f9f218,&PTR_DAT_1133fc7e0,
                        &PTR_s_compositeStoryId_1133fc8d8,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fd4c8 = puVar1;
  }
  return puRam00000001137fd4c8;
}


