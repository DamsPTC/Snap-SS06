/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108977510; end: 108977557;  */

ulong FUN_108977510(uint *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_1) * -0x622015f714c7d297) + (ulong)param_1[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 108977558; end: 108977577;  */

undefined1  [16] FUN_108977558(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010897c8f8();
  FUN_108977578();
  return auStack_20;
}



/* Entry: 108977578; end: 1089775b3;  */

void FUN_108977578(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010897cafc();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 8;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1089775b4; end: 1089775e7;  */

long * FUN_1089775b4(long *param_1)

{
  param_1[1] = param_1[1] + 8;
  *param_1 = *param_1 + 1;
  FUN_108977578();
  return param_1;
}



/* Entry: 1089775e8; end: 1089775eb;  */

void FUN_1089775e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1089775ec; end: 10897760b;  */

void FUN_1089775ec(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108977458();
  }
  return;
}



/* Entry: 10897760c; end: 10897764f;  */

long FUN_10897760c(long param_1)

{
  func_0x000108959364(param_1 + 0x60);
  FUN_10897b634(param_1 + 0x50);
  FUN_10897b634(param_1 + 0x38);
  FUN_10897b634(param_1 + 0x20);
  FUN_10897b634(param_1 + 8);
  return param_1;
}



/* Entry: 108977650; end: 10897779f;  */

void FUN_108977650(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar5 = param_2;
  func_0x00010897c5f4();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    FUN_1089777a0();
    param_1 = param_1 + 0x1c;
  }
  else {
    lVar9 = (long)param_1 - *unaff_x19;
    uVar1 = lVar9 / 0xe0 + 1;
    if (0x124924924924924 < uVar1) {
      FUN_1089778d8();
LAB_10897779c:
      func_0x000104bd35f4();
      func_0x00010897c7fc();
      uVar12 = *puVar5;
      param_1[1] = puVar5[1];
      *param_1 = uVar12;
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      if (*(char *)(puVar5 + 6) == '\x01') {
        uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
        param_1[4] = *(undefined8 *)(unaff_x20 + 0x20);
        param_1[3] = uVar13;
        param_1[2] = uVar12;
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        *(undefined8 *)(unaff_x20 + 0x20) = 0;
        *(undefined8 *)(unaff_x20 + 0x10) = 0;
        *(undefined4 *)(unaff_x19 + 5) = *(undefined4 *)(unaff_x20 + 0x28);
        *(undefined1 *)(unaff_x19 + 6) = 1;
      }
      *(undefined1 *)(unaff_x19 + 7) = 0;
      *(undefined1 *)(unaff_x19 + 0xc) = 0;
      if (*(char *)(unaff_x20 + 0x60) == '\x01') {
        FUN_10897784c(unaff_x19 + 7,unaff_x20 + 0x38);
      }
      FUN_108977890(unaff_x19 + 0xd,unaff_x20 + 0x68);
      func_0x000108977894(unaff_x19 + 0x12,unaff_x20 + 0x90);
      func_0x000108977894(unaff_x19 + 0x17,unaff_x20 + 0xb8);
      return;
    }
    uVar3 = (unaff_x19[2] - *unaff_x19) / 0xe0;
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x92492492492491 < uVar3) {
      uVar6 = 0x124924924924924;
    }
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x124924924924924 < uVar6) goto LAB_10897779c;
      lVar7 = uVar6 * 0xe0;
      __Znwm();
    }
    lVar9 = lVar7 + lVar9;
    FUN_1089777a0(lVar9,param_2);
    lVar8 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar11 = lVar9 + ((lVar2 - lVar8) / -0xe0) * 0xe0;
    lVar4 = lVar11;
    for (lVar10 = lVar8; lVar10 != lVar2; lVar10 = lVar10 + 0xe0) {
      FUN_1089777a0(lVar4,lVar10);
      lVar4 = lVar4 + 0xe0;
    }
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0xe0) {
      FUN_1089778ec(lVar8);
    }
    param_1 = (undefined8 *)(lVar9 + 0xe0);
    lVar9 = *unaff_x19;
    *unaff_x19 = lVar11;
    unaff_x19[1] = (long)param_1;
    unaff_x19[2] = lVar7 + uVar6 * 0xe0;
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = (long)param_1;
  return;
}



/* Entry: 1089777a0; end: 10897784b;  */

void FUN_1089777a0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010897c7fc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    param_1[4] = *(undefined8 *)(unaff_x20 + 0x20);
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    FUN_10897784c((undefined1 *)(unaff_x19 + 0x38),unaff_x20 + 0x38);
  }
  FUN_108977890(unaff_x19 + 0x68,unaff_x20 + 0x68);
  func_0x000108977894(unaff_x19 + 0x90,unaff_x20 + 0x90);
  func_0x000108977894(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  return;
}



/* Entry: 10897784c; end: 108977867;  */

void FUN_10897784c(long param_1)

{
  FUN_108977868();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108977868; end: 10897788f;  */

undefined4 * FUN_108977868(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_108977890(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108977890; end: 1089778d7;  */

void FUN_108977890(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1089778d8; end: 1089778eb;  */

undefined * FUN_1089778d8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  func_0x000107c279a4(puVar1 + 0xc0);
  func_0x000107c279a4(puVar1 + 0x98);
  func_0x000107c279a4(puVar1 + 0x70);
  FUN_108977e24(puVar1 + 0x38);
  func_0x000108977dbc(puVar1 + 0x10);
  return puVar1;
}



/* Entry: 1089778ec; end: 10897792f;  */

long FUN_1089778ec(long param_1)

{
  func_0x000107c279a4(param_1 + 0xc0);
  func_0x000107c279a4(param_1 + 0x98);
  func_0x000107c279a4(param_1 + 0x70);
  FUN_108977e24(param_1 + 0x38);
  func_0x000108977dbc(param_1 + 0x10);
  return param_1;
}



/* Entry: 108977930; end: 108977993;  */

void FUN_108977930(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010897c7fc();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_108976dc4();
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0xffffffff) {
    func_0x00010897c9e4((&PTR_FUN_110aa0a08)[uVar1]);
    *(uint *)(unaff_x19 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 108977994; end: 1089779a3;  */

void FUN_108977994(void)

{
  return;
}



/* Entry: 1089779a4; end: 108977a53;  */

long * FUN_1089779a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0xe0;
      FUN_1089778ec();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 108977a54; end: 108977ac3;  */

undefined8 FUN_108977a54(void)

{
  undefined8 uVar1;
  undefined8 auStack_38 [3];
  
  func_0x00010897c7fc();
  func_0x000107c27c00(auStack_38);
  func_0x00010897c814();
  FUN_108977c20();
  func_0x000107c27bc8();
  uVar1 = auStack_38[0];
  auStack_38[0] = 0;
  func_0x000107c27be8(auStack_38);
  return uVar1;
}



/* Entry: 108977ac4; end: 108977af7;  */

undefined8 * FUN_108977ac4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_108977af8();
  param_1[1] = param_2;
  func_0x000108977a2c(param_1);
  return param_1;
}



/* Entry: 108977af8; end: 108977b23;  */

long FUN_108977af8(long *param_1)

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



/* Entry: 108977b24; end: 108977b8b;  */

long * FUN_108977b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  func_0x00010897c5a0();
  plVar4 = (long *)(unaff_x20 + 8);
  plVar3 = plVar4;
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while (plVar4 = plVar1, uVar2 = param_3, func_0x000107c27bd4(param_3,plVar4 + 4),
            ((uint)uVar2 >> 7 & 1) != 0) {
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_108977b80;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_108977b80:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 108977b8c; end: 108977bd3;  */

long * FUN_108977b8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_1 == *plVar1) {
    *plVar1 = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    plVar2 = (long *)plVar1[1];
  }
  else {
    plVar1[1] = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    plVar2 = (long *)*plVar1;
  }
  if (plVar2 == (long *)0x0) {
    return plVar1;
  }
  do {
    do {
      plVar1 = plVar2;
      plVar2 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    plVar2 = (long *)plVar1[1];
  } while ((long *)plVar1[1] != (long *)0x0);
  return plVar1;
}



/* Entry: 108977bd4; end: 108977c1f;  */

undefined8 * FUN_108977bd4(undefined8 *param_1)

{
  long lVar1;
  
  func_0x000107c27bf0(*param_1,param_1[2]);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0) {
      param_1[1] = lVar1;
    }
    func_0x000107c27bf0(*param_1);
  }
  return param_1;
}



/* Entry: 108977c20; end: 108977cfb;  */

long * FUN_108977c20(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  if (param_2 != param_1 + 1) {
    plVar1 = param_2 + 4;
    func_0x000107c27bd4(plVar1,param_4);
    if (((uint)plVar1 >> 7 & 1) != 0) {
      func_0x00010897c5a0(param_1,param_3,param_4);
      plVar4 = (long *)(unaff_x20 + 8);
      plVar1 = plVar4;
      plVar3 = (long *)*plVar4;
      if ((long *)*plVar4 != (long *)0x0) {
        do {
          while( true ) {
            plVar4 = plVar3;
            plVar1 = plVar4 + 4;
            func_0x000107c27bd4(plVar1,param_4);
            if (((uint)plVar1 >> 7 & 1) != 0) break;
            plVar1 = plVar4;
            plVar3 = (long *)*plVar4;
            if ((long *)*plVar4 == (long *)0x0) goto LAB_108977d54;
          }
          plVar3 = (long *)plVar4[1];
        } while ((long *)plVar4[1] != (long *)0x0);
        plVar1 = plVar4 + 1;
      }
LAB_108977d54:
      *unaff_x19 = (long)plVar4;
      return plVar1;
    }
  }
  plVar1 = param_2;
  if (param_2 != (long *)*param_1) {
    func_0x000107c27bdc();
    uVar2 = param_4;
    func_0x000107c27bd4(param_4,plVar1 + 4);
    if (((uint)uVar2 >> 7 & 1) != 0) {
      func_0x00010897c5a0(param_1,param_3);
      plVar3 = *(long **)(unaff_x20 + 8);
      plVar1 = (long *)(unaff_x20 + 8);
      do {
        plVar4 = plVar1;
        if (plVar3 == (long *)0x0) {
LAB_108977b80:
          *unaff_x19 = (long)plVar4;
          return plVar1;
        }
        while (plVar4 = plVar3, uVar2 = param_4, func_0x000107c27bd4(param_4,plVar4 + 4),
              ((uint)uVar2 >> 7 & 1) == 0) {
          plVar3 = (long *)plVar4[1];
          if ((long *)plVar4[1] == (long *)0x0) {
            plVar1 = plVar4 + 1;
            goto LAB_108977b80;
          }
        }
        plVar3 = (long *)*plVar4;
        plVar1 = plVar4;
      } while( true );
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar1;
    param_2 = plVar1 + 1;
  }
  return param_2;
}



/* Entry: 108977cfc; end: 108977d5f;  */

long * FUN_108977cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  func_0x00010897c5a0();
  plVar3 = (long *)(unaff_x20 + 8);
  plVar2 = plVar3;
  plVar1 = (long *)*plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    do {
      while( true ) {
        plVar3 = plVar1;
        plVar2 = plVar3 + 4;
        func_0x000107c27bd4(plVar2,param_3);
        if (((uint)plVar2 >> 7 & 1) != 0) break;
        plVar2 = plVar3;
        plVar1 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_108977d54;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar2 = plVar3 + 1;
  }
LAB_108977d54:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 108977d60; end: 108977d9f;  */

void FUN_108977d60(long param_1,long param_2)

{
  func_0x00010897c954();
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_108977da0();
  }
  return;
}



/* Entry: 108977da0; end: 108977ddb;  */

void FUN_108977da0(long param_1)

{
  func_0x000108976758();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 108977ddc; end: 108977e23;  */

void FUN_108977ddc(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010897c954();
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_108976afc();
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  return;
}



/* Entry: 108977e24; end: 108977e73;  */

void FUN_108977e24(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010897c908();
  if ((bool)in_ZR) {
    FUN_10893d574(unaff_x19 + 8);
  }
  return;
}



/* Entry: 108977e74; end: 108977ea7;  */

long FUN_108977e74(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    func_0x00010897c328();
    return extraout_x8 + (extraout_x9 & 0xffffffff) * 0x278;
  }
  return 0;
}



/* Entry: 108977ea8; end: 108977ecf;  */

long FUN_108977ea8(long param_1)

{
  (**(code **)(param_1 + 0x268))();
  return param_1;
}



/* Entry: 108977ed0; end: 108977ef7;  */

void FUN_108977ed0(long *param_1)

{
  func_0x00010897c414();
                    /* WARNING: Could not recover jumptable at 0x000108977ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 108977ef8; end: 1089780df;  */

undefined8 FUN_108977ef8(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long **pplVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long *plVar7;
  long lVar8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  char cStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [112];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc0)) {
  case 0:
    return 1;
  case 1:
  case 5:
    break;
  case 2:
    func_0x00010897c294();
    func_0x00010897c2a4();
    return 1;
  case 3:
    return 1;
  case 4:
    return 1;
  case 6:
  case 7:
  case 10:
  case 0xb:
    break;
  case 8:
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    func_0x0001089781b4(*param_2);
    FUN_10897817c(uVar2,*param_4,*(undefined8 *)(*param_2 + 0x218));
    return 1;
  case 9:
    FUN_10897817c(*(undefined4 *)(param_1 + 0x8c),*param_4,*(undefined8 *)(*param_2 + 0x218));
    return 1;
  default:
    break;
  case 0xf:
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    lVar8 = *param_2;
    plVar7 = *(long **)(lVar8 + 0x58);
    FUN_108962b98(auStack_70,lVar8 + 0x70,lVar8 + 0x228,lVar8 + 0x328);
    (**(code **)(*plVar7 + 0x20))(plVar7,auStack_70);
    func_0x00010897c668();
    FUN_108977ed0(uVar2,*(undefined8 *)(*param_2 + 0x218));
    return 1;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    break;
  case 0x17:
    func_0x00010897c468();
    param_2 = (long *)*param_2;
    lVar8 = *param_4;
    uStack_58 = extraout_x8;
    func_0x0001089758ac(&plStack_1a8,lVar8 + 0x218);
    uStack_1c8 = (long *)&UNK_10e52b660;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    pplVar1 = &plStack_1a8;
    if (cStack_188 == '\0') {
      pplVar1 = (long **)&uStack_1c8;
    }
    puVar4 = &uStack_180;
    FUN_1089775e8(puVar4,pplVar1);
    __ZNSt3__16chrono12steady_clock3nowEv();
    pcStack_140 = FUN_10897b45c;
    ppuStack_138 = &PTR_FUN_110aa14a8;
    uStack_130 = 0;
    uStack_120 = CONCAT71(uStack_120._1_7_,1);
    puStack_128 = puVar4;
    (**(code **)(*param_2 + 0x90))(&plStack_160,param_2,lVar8 + 0x50,lVar8 + 0xf0,&uStack_180);
    lVar5 = 0;
    if (param_2[0xb] != 0) {
      lVar5 = param_2[0xb] + 8;
    }
    func_0x00010897c770(plStack_160,lVar5);
    (*extraout_x8_00)();
    (**(code **)(*plStack_160 + 0x78))(plStack_160,*(undefined1 *)((long)param_2 + 0x209));
    uStack_150 = 1;
    uStack_148 = 1;
    func_0x00010897ca9c(plStack_160);
    (*extraout_x8_01)();
    lVar5 = param_2[0x7f];
    if (lVar5 != 0) {
      func_0x00010897c770();
      (*extraout_x8_02)();
      plVar7 = plStack_160;
      if (lVar5 != 0) {
        lVar5 = param_2[0x7f];
        if (lVar5 == 0) {
          lVar5 = 0;
LAB_1089783a8:
          plVar6 = (long *)0x0;
        }
        else {
          func_0x00010897c770();
          (*extraout_x8_03)();
          plVar6 = (long *)param_2[0x7f];
          if (plVar6 == (long *)0x0) goto LAB_1089783a8;
          (**(code **)(*plVar6 + 0x18))();
        }
        (**(code **)(*plVar7 + 0x80))(plVar7,lVar5,plVar6);
      }
    }
    func_0x000107c281f0(&pcStack_140);
    lVar5 = lStack_158;
    plVar7 = plStack_160;
    plStack_160 = (long *)0x0;
    lStack_158 = 0;
    ppuStack_138 = (undefined **)param_2[0x56];
    pcStack_140 = (code *)param_2[0x55];
    param_2[0x56] = lVar5;
    param_2[0x55] = (long)plVar7;
    func_0x00010897a20c(&pcStack_140);
    func_0x00010897a20c(&plStack_160);
    FUN_108977458(&uStack_180);
    func_0x00010897c9dc();
    FUN_1089775ec(&plStack_1a8);
    func_0x000108975924(param_2,lVar8 + 0xf0);
    func_0x00010897c8a0(param_2[0xb]);
    (*extraout_x8_04)();
    func_0x00010897598c(param_2,param_2 + 0x45,*(undefined4 *)(lVar8 + 0x238),
                        *(undefined1 *)(lVar8 + 0x240));
    lVar5 = *(long *)(lVar8 + 0x248);
    while (lVar5 != lVar8 + 0x250) {
      if (*(char *)(lVar5 + 0x8c) == '\x01' && *(int *)(lVar5 + 0x88) == 0) {
        pcStack_140 = (code *)((ulong)pcStack_140 & 0xffffffff00000000);
        uStack_f0 = 0;
        uStack_e8 = 0;
        ppuStack_138 = (undefined **)0x0;
        uStack_130 = 0;
        puStack_128 = (undefined8 *)((ulong)puStack_128 & 0xffffffff00000000);
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        FUN_10895ae60(auStack_e0,lVar5 + 0xc0);
        FUN_108975a08(&plStack_1a8,param_2 + 0x51,lVar5 + 0x20,&pcStack_140);
        FUN_10897760c(&pcStack_140);
        (**(code **)(*(long *)param_2[0xb] + 0x40))
                  ((long *)param_2[0xb],*(undefined8 *)(lVar5 + 0x20),lVar5 + 0xc0);
      }
      func_0x000107c27be0();
    }
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    lVar5 = *(long *)(lVar8 + 0x248);
    while (lVar5 != lVar8 + 0x250) {
      puVar4 = (undefined8 *)(lVar5 + 0x20);
      if (((*(char *)(lVar5 + 0x60) == '\x01') && (*(int *)(lVar5 + 0x58) == 1)) &&
         ((*(char *)(lVar5 + 0x8c) != '\x01' || (*(int *)(lVar5 + 0x88) != 0)))) {
        FUN_108975a7c(&pcStack_140,*puVar4,lVar5 + 0x40);
        func_0x00010897c99c();
      }
      else {
        plVar7 = param_2 + 0x51;
        FUN_108975ae0(plVar7,puVar4);
        func_0x00010897b950(plVar7 + 0xc,lVar5 + 0xc0);
        plStack_1a8 = plVar7;
        plStack_1a0 = param_2;
        lStack_198 = lVar5 + 0x28;
        puStack_190 = puVar4;
        FUN_108975b48(&plStack_1a8,0);
        FUN_108975b48(&plStack_1a8,1);
        FUN_108975b48(&plStack_1a8,2);
        FUN_108975b48(&plStack_1a8,3);
        FUN_108975cac(&pcStack_140,*puVar4,plVar7,lVar5 + 0x28);
        func_0x00010897c99c();
      }
      FUN_1089778ec(&pcStack_140);
      func_0x000107c27be0();
    }
    plStack_1a8 = (long *)0x0;
    plStack_1a0 = (long *)0x0;
    lStack_198 = 0;
    func_0x000108973b80(&uStack_1c8,param_2 + 0xe);
    if (uStack_1c8._4_1_ == '\x01') {
      func_0x00010bd4360c(&pcStack_140,&uStack_1c8);
      func_0x000107c27b9c(&plStack_1a8,&pcStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_140);
    }
    (*(code *)**(undefined8 **)param_2[0x38])
              ((undefined8 *)param_2[0x38],&uStack_180,*(undefined8 *)(lVar8 + 0x32),
               *(undefined8 *)(lVar8 + 0x3a),&plStack_1a8,*(undefined1 *)(lVar8 + 0x42));
    if (*(char *)(lVar8 + 0x240) == '\x01') {
      plVar7 = (long *)param_2[0x38];
      FUN_108977930(&pcStack_140,lVar8 + 0x218);
      (**(code **)(*plVar7 + 0x30))(plVar7,&pcStack_140);
      FUN_108976dc4(&pcStack_140);
    }
    (**(code **)(*(long *)param_2[0xb] + 0x38))((long *)param_2[0xb],*(undefined2 *)(lVar8 + 0x30));
    if (*(char *)(lVar8 + 0x210) == '\x01') {
      (**(code **)(*(long *)param_2[0x38] + 0x60))((long *)param_2[0x38],lVar8 + 0x1f8);
    }
    uVar3 = param_2[0x54] == 1;
    if ((bool)uVar3) {
      func_0x000107c28144(param_2 + 0x60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_1a8);
    FUN_1089779a4(&uStack_180);
    func_0x00010897c314(uStack_58);
    if ((bool)uVar3) {
      return 1;
    }
    ___stack_chk_fail();
    FUN_108976dc4(&pcStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_1a8);
    FUN_1089779a4(&uStack_180);
    func_0x00010897c3ec();
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    break;
  case 0x1d:
    func_0x00010897c670();
    return 1;
  }
  return 0;
}



/* Entry: 1089780e0; end: 1089780ff;  */

undefined8 FUN_1089780e0(void)

{
  func_0x00010897c294();
  func_0x00010897c2a4();
  return 1;
}



/* Entry: 108978100; end: 10897810b;  */

undefined8 FUN_108978100(void)

{
  return 1;
}



/* Entry: 10897810c; end: 10897814f;  */

undefined8 FUN_10897810c(undefined8 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  func_0x0001089781b4(*param_3);
  func_0x00010897817c(uVar1,*param_1,*(undefined8 *)(*param_3 + 0x218));
  return 1;
}



/* Entry: 108978150; end: 10897817b;  */

undefined8 FUN_108978150(undefined8 *param_1,long param_2,long *param_3)

{
  FUN_10897817c(*(undefined4 *)(param_2 + 0x8c),*param_1,*(undefined8 *)(*param_3 + 0x218));
  return 1;
}



/* Entry: 10897817c; end: 1089781db;  */

void FUN_10897817c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  func_0x00010897c5a0();
  (**(code **)(*param_3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010897c8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x18))();
  return;
}



/* Entry: 1089781dc; end: 1089781df;  */

undefined8 FUN_1089781dc(void)

{
  return 0;
}



/* Entry: 1089781e0; end: 108978257;  */

undefined8 FUN_1089781e0(undefined8 param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_70 [64];
  
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  lVar2 = *param_3;
  plVar3 = *(long **)(lVar2 + 0x58);
  FUN_108962b98(auStack_70,lVar2 + 0x70,lVar2 + 0x228,lVar2 + 0x328);
  (**(code **)(*plVar3 + 0x20))(plVar3,auStack_70);
  func_0x00010897c668();
  FUN_108977ed0(uVar1,*(undefined8 *)(*param_3 + 0x218));
  return 1;
}



/* Entry: 108978258; end: 10897825b;  */

undefined8 FUN_108978258(void)

{
  return 0;
}



/* Entry: 10897825c; end: 1089787bb;  */

undefined8 FUN_10897825c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long **pplVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  char cStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [136];
  undefined8 uStack_58;
  
  func_0x00010897c468();
  plVar6 = (long *)*param_3;
  lVar8 = *param_1;
  uStack_58 = extraout_x8;
  func_0x0001089758ac(&plStack_1a8,lVar8 + 0x218);
  uStack_1c8 = (long *)&UNK_10e52b660;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  pplVar1 = &plStack_1a8;
  if (cStack_188 == '\0') {
    pplVar1 = (long **)&uStack_1c8;
  }
  puVar3 = &uStack_180;
  FUN_1089775e8(puVar3,pplVar1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  pcStack_140 = FUN_10897b45c;
  ppuStack_138 = &PTR_FUN_110aa14a8;
  uStack_130 = 0;
  uStack_120 = CONCAT71(uStack_120._1_7_,1);
  puStack_128 = puVar3;
  (**(code **)(*plVar6 + 0x90))(&plStack_160,plVar6,lVar8 + 0x50,lVar8 + 0xf0,&uStack_180);
  lVar4 = 0;
  if (plVar6[0xb] != 0) {
    lVar4 = plVar6[0xb] + 8;
  }
  func_0x00010897c770(plStack_160,lVar4);
  (*extraout_x8_00)();
  (**(code **)(*plStack_160 + 0x78))(plStack_160,*(undefined1 *)((long)plVar6 + 0x209));
  uStack_150 = 1;
  uStack_148 = 1;
  func_0x00010897ca9c(plStack_160);
  (*extraout_x8_01)();
  lVar4 = plVar6[0x7f];
  if (lVar4 == 0) goto LAB_1089783c0;
  func_0x00010897c770();
  (*extraout_x8_02)();
  plVar7 = plStack_160;
  if (lVar4 == 0) goto LAB_1089783c0;
  lVar4 = plVar6[0x7f];
  if (lVar4 == 0) {
    lVar4 = 0;
LAB_1089783a8:
    plVar5 = (long *)0x0;
  }
  else {
    func_0x00010897c770();
    (*extraout_x8_03)();
    plVar5 = (long *)plVar6[0x7f];
    if (plVar5 == (long *)0x0) goto LAB_1089783a8;
    (**(code **)(*plVar5 + 0x18))();
  }
  (**(code **)(*plVar7 + 0x80))(plVar7,lVar4,plVar5);
LAB_1089783c0:
  func_0x000107c281f0(&pcStack_140);
  lVar4 = lStack_158;
  plVar7 = plStack_160;
  plStack_160 = (long *)0x0;
  lStack_158 = 0;
  ppuStack_138 = (undefined **)plVar6[0x56];
  pcStack_140 = (code *)plVar6[0x55];
  plVar6[0x56] = lVar4;
  plVar6[0x55] = (long)plVar7;
  func_0x00010897a20c(&pcStack_140);
  func_0x00010897a20c(&plStack_160);
  FUN_108977458(&uStack_180);
  func_0x00010897c9dc();
  FUN_1089775ec(&plStack_1a8);
  func_0x000108975924(plVar6,lVar8 + 0xf0);
  func_0x00010897c8a0(plVar6[0xb]);
  (*extraout_x8_04)();
  func_0x00010897598c(plVar6,plVar6 + 0x45,*(undefined4 *)(lVar8 + 0x238),
                      *(undefined1 *)(lVar8 + 0x240));
  lVar4 = *(long *)(lVar8 + 0x248);
  while (lVar4 != lVar8 + 0x250) {
    if (*(char *)(lVar4 + 0x8c) == '\x01' && *(int *)(lVar4 + 0x88) == 0) {
      pcStack_140 = (code *)((ulong)pcStack_140 & 0xffffffff00000000);
      uStack_f0 = 0;
      uStack_e8 = 0;
      ppuStack_138 = (undefined **)0x0;
      uStack_130 = 0;
      puStack_128 = (undefined8 *)((ulong)puStack_128 & 0xffffffff00000000);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      FUN_10895ae60(auStack_e0,lVar4 + 0xc0);
      FUN_108975a08(&plStack_1a8,plVar6 + 0x51,lVar4 + 0x20,&pcStack_140);
      FUN_10897760c(&pcStack_140);
      (**(code **)(*(long *)plVar6[0xb] + 0x40))
                ((long *)plVar6[0xb],*(undefined8 *)(lVar4 + 0x20),lVar4 + 0xc0);
    }
    func_0x000107c27be0();
  }
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  lVar4 = *(long *)(lVar8 + 0x248);
  while (lVar4 != lVar8 + 0x250) {
    puVar3 = (undefined8 *)(lVar4 + 0x20);
    if (((*(char *)(lVar4 + 0x60) == '\x01') && (*(int *)(lVar4 + 0x58) == 1)) &&
       ((*(char *)(lVar4 + 0x8c) != '\x01' || (*(int *)(lVar4 + 0x88) != 0)))) {
      FUN_108975a7c(&pcStack_140,*puVar3,lVar4 + 0x40);
      func_0x00010897c99c();
    }
    else {
      plVar7 = plVar6 + 0x51;
      FUN_108975ae0(plVar7,puVar3);
      func_0x00010897b950(plVar7 + 0xc,lVar4 + 0xc0);
      plStack_1a8 = plVar7;
      plStack_1a0 = plVar6;
      lStack_198 = lVar4 + 0x28;
      puStack_190 = puVar3;
      FUN_108975b48(&plStack_1a8,0);
      FUN_108975b48(&plStack_1a8,1);
      FUN_108975b48(&plStack_1a8,2);
      FUN_108975b48(&plStack_1a8,3);
      FUN_108975cac(&pcStack_140,*puVar3,plVar7,lVar4 + 0x28);
      func_0x00010897c99c();
    }
    FUN_1089778ec(&pcStack_140);
    func_0x000107c27be0();
  }
  plStack_1a8 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  func_0x000108973b80(&uStack_1c8,plVar6 + 0xe);
  if (uStack_1c8._4_1_ == '\x01') {
    func_0x00010bd4360c(&pcStack_140,&uStack_1c8);
    func_0x000107c27b9c(&plStack_1a8,&pcStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_140);
  }
  (*(code *)**(undefined8 **)plVar6[0x38])
            ((undefined8 *)plVar6[0x38],&uStack_180,*(undefined8 *)(lVar8 + 0x32),
             *(undefined8 *)(lVar8 + 0x3a),&plStack_1a8,*(undefined1 *)(lVar8 + 0x42));
  if (*(char *)(lVar8 + 0x240) == '\x01') {
    plVar7 = (long *)plVar6[0x38];
    FUN_108977930(&pcStack_140,lVar8 + 0x218);
    (**(code **)(*plVar7 + 0x30))(plVar7,&pcStack_140);
    FUN_108976dc4(&pcStack_140);
  }
  (**(code **)(*(long *)plVar6[0xb] + 0x38))((long *)plVar6[0xb],*(undefined2 *)(lVar8 + 0x30));
  if (*(char *)(lVar8 + 0x210) == '\x01') {
    (**(code **)(*(long *)plVar6[0x38] + 0x60))((long *)plVar6[0x38],lVar8 + 0x1f8);
  }
  uVar2 = plVar6[0x54] == 1;
  if ((bool)uVar2) {
    func_0x000107c28144(plVar6 + 0x60);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_1a8);
  FUN_1089779a4(&uStack_180);
  func_0x00010897c314(uStack_58);
  if ((bool)uVar2) {
    return 1;
  }
  ___stack_chk_fail();
  FUN_108976dc4(&pcStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_1a8);
  FUN_1089779a4(&uStack_180);
  func_0x00010897c3ec();
  return 0;
}



/* Entry: 1089787bc; end: 1089787bf;  */

undefined8 FUN_1089787bc(void)

{
  return 0;
}



/* Entry: 1089787c0; end: 1089787d7;  */

undefined8 FUN_1089787c0(void)

{
  func_0x00010897c670();
  return 1;
}



/* Entry: 1089787d8; end: 1089788ab;  */

void FUN_1089787d8(long param_1)

{
  long *plVar1;
  code *extraout_x8;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010897c6a4(*(undefined8 *)(param_1 + 0x2a8));
  uStack_58 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  func_0x00010897a20c(&uStack_60);
  func_0x000107c28148(&uStack_38);
  FUN_1089a3c0c();
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010897c51c();
  uStack_58 = 0;
  uStack_40 = 0x5a;
  func_0x00010897c640();
  (*extraout_x8)();
  func_0x000104c03ee4(&uStack_60);
  uVar2 = *(ulong *)(param_1 + 0x298);
  if (uVar2 != 0) {
    func_0x000108976abc(param_1 + 0x288);
    plVar1 = (long *)(param_1 + 0x288);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    if (uVar2 < 0x80) {
      lVar4 = *(long *)(param_1 + 0x298);
      lVar3 = *plVar1;
      _memset(lVar3,0x80,lVar4 + 8);
      *(undefined1 *)(lVar3 + lVar4) = 0xff;
      uVar2 = *(ulong *)(param_1 + 0x298);
      lVar3 = 6;
      if (uVar2 != 7) {
        lVar3 = uVar2 - (uVar2 >> 3);
      }
      *(long *)(*plVar1 + -8) = lVar3 - *(long *)(param_1 + 0x2a0);
    }
    else {
      (*(code *)&DAT_104c32e5c)(plVar1);
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0;
      *plVar1 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 1089788ac; end: 1089788db;  */

ulong FUN_1089788ac(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
}



/* Entry: 1089788dc; end: 1089789a3;  */

undefined8 * FUN_1089788dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x00010897890c(param_1 + 1,param_2 + 1);
  func_0x000108959364(param_2 + 0xd);
  FUN_10897b634(param_2 + 0xb);
  FUN_10897b634(param_2 + 8);
  FUN_10897b634(param_2 + 5);
  FUN_10897b634(param_2 + 2);
  return param_2 + 1;
}



/* Entry: 1089789a4; end: 108978a1b;  */

void FUN_1089789a4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  lVar4 = param_2[3];
  param_1[3] = lVar4;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar3 = uVar5 - 1 & uVar3;
    }
    else if (uVar5 <= uVar3) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar3 / uVar5;
      }
      uVar3 = uVar3 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar3 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 108978a1c; end: 108978a37;  */

undefined8 FUN_108978a1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_108976260(*param_3);
  return 1;
}



/* Entry: 108978a38; end: 108978a3b;  */

undefined8 FUN_108978a38(void)

{
  return 0;
}



/* Entry: 108978a3c; end: 108978b13;  */

undefined8 FUN_108978a3c(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar3 = *param_1;
  plVar1 = param_1;
  FUN_1089a3c0c();
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_58 = &PTR_DAT_1107eac58;
  uStack_50 = 0;
  uStack_38 = 8;
  func_0x000107c278b8(auStack_70,"error_code");
  pppuVar2 = &ppuStack_58;
  FUN_108957f58(pppuVar2,auStack_70,*(undefined4 *)(lVar3 + 8));
  (**(code **)(*(long *)*plVar1 + 8))((long *)*plVar1,pppuVar2,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  func_0x000104c03ee4(&ppuStack_58);
  (**(code **)(**(long **)(*param_3 + 0x1c0) + 8))(*(long **)(*param_3 + 0x1c0),1,*param_1);
  FUN_108976260(*param_3);
  return 1;
}



/* Entry: 108978b14; end: 108978b7b;  */

undefined8 FUN_108978b14(void)

{
  undefined1 *in_x4;
  code *extraout_x8;
  undefined1 *unaff_x19;
  long *unaff_x21;
  
  func_0x00010897ca74();
  func_0x00010897c1f8();
  func_0x00010897c3f4(*in_x4);
  *unaff_x19 = 2;
  *(undefined1 *)(*unaff_x21 + 0x319) = 0;
  func_0x00010897c650(*unaff_x19);
  func_0x00010897c2b4();
  (*extraout_x8)();
  return 1;
}



/* Entry: 108978b7c; end: 108978b83;  */

undefined8 FUN_108978b7c(void)

{
  return 0;
}



/* Entry: 108978b84; end: 108978b9b;  */

undefined8 FUN_108978b84(void)

{
  func_0x00010897c670();
  return 1;
}



/* Entry: 108978b9c; end: 108978ba3;  */

undefined8 FUN_108978b9c(void)

{
  return 1;
}



/* Entry: 108978ba4; end: 108978bc3;  */

undefined8 FUN_108978ba4(void)

{
  func_0x00010897c294();
  func_0x00010897c2a4();
  return 1;
}



/* Entry: 108978bc4; end: 108978bcf;  */

undefined8 FUN_108978bc4(void)

{
  return 1;
}



/* Entry: 108978bd0; end: 108978c5f;  */

undefined8 FUN_108978bd0(void)

{
  ulong uVar1;
  undefined1 *in_x4;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010897ca74();
  func_0x00010897c1f8();
  func_0x00010897c3f4(*in_x4);
  *unaff_x19 = 3;
  uVar1 = (ulong)*(uint *)(unaff_x22 + 0x20);
  FUN_108978c7c(uVar1,*(undefined8 *)(*unaff_x21 + 0x218));
  func_0x00010897c650(*unaff_x19);
  func_0x00010897c2b4();
  (*extraout_x8)();
  if ((uVar1 & 1) == 0) {
    func_0x00010897c650(*unaff_x19);
    func_0x00010897c2b4();
    (*extraout_x8_00)();
  }
  return 1;
}



/* Entry: 108978c60; end: 108978c63;  */

undefined8 FUN_108978c60(void)

{
  return 0;
}



/* Entry: 108978c64; end: 108978c7b;  */

undefined8 FUN_108978c64(void)

{
  func_0x00010897c670();
  return 1;
}



/* Entry: 108978c7c; end: 108978ca3;  */

void FUN_108978c7c(long *param_1)

{
  func_0x00010897c414();
                    /* WARNING: Could not recover jumptable at 0x00010897c8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 108978ca4; end: 108978ca7;  */

undefined8 FUN_108978ca4(void)

{
  return 1;
}



/* Entry: 108978ca8; end: 108978cc7;  */

undefined8 FUN_108978ca8(void)

{
  func_0x00010897c294();
  func_0x00010897c2a4();
  return 1;
}



/* Entry: 108978cc8; end: 108978cd3;  */

undefined8 FUN_108978cc8(void)

{
  return 1;
}



/* Entry: 108978cd4; end: 108978eab;  */

undefined8 FUN_108978cd4(void)

{
  func_0x00010897ca74();
  func_0x00010897c1f8();
  func_0x000108978dfc();
  func_0x00010897c734();
  func_0x00010897c134();
  func_0x000108978e54();
  return 1;
}



/* Entry: 108978eac; end: 108978ec3;  */

undefined8 FUN_108978eac(void)

{
  func_0x00010897c670();
  return 1;
}



/* Entry: 108978ec4; end: 108978ec7;  */

undefined8 FUN_108978ec4(void)

{
  return 1;
}



/* Entry: 108978ec8; end: 108978ee7;  */

undefined8 FUN_108978ec8(void)

{
  func_0x00010897c294();
  func_0x00010897c2a4();
  return 1;
}



/* Entry: 108978ee8; end: 108978ef3;  */

undefined8 FUN_108978ee8(void)

{
  return 1;
}



/* Entry: 108978ef4; end: 108978ff7;  */

undefined8 FUN_108978ef4(void)

{
  long unaff_x22;
  
  func_0x00010897ca74();
  func_0x00010897c1f8();
  func_0x00010897c338();
  func_0x00010897c734();
  func_0x00010897ca08(*(undefined4 *)(unaff_x22 + 0x24));
  func_0x00010897c134();
  func_0x000108978fa0();
  return 1;
}



/* Entry: 108978ff8; end: 108978ffb;  */

undefined8 FUN_108978ff8(void)

{
  return 0;
}



/* Entry: 108978ffc; end: 108979013;  */

undefined8 FUN_108978ffc(void)

{
  func_0x00010897c670();
  return 1;
}



/* Entry: 108979014; end: 10897903b;  */

void FUN_108979014(long *param_1)

{
  func_0x00010897c414();
                    /* WARNING: Could not recover jumptable at 0x00010897c8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 10897903c; end: 10897903f;  */

undefined8 FUN_10897903c(void)

{
  return 1;
}



/* Entry: 108979040; end: 10897905f;  */

undefined8 FUN_108979040(void)

{
  func_0x00010897c294();
  func_0x00010897c2a4();
  return 1;
}



/* Entry: 108979060; end: 10897906b;  */

undefined8 FUN_108979060(void)

{
  return 1;
}



/* Entry: 10897906c; end: 1089790b3;  */

undefined8 FUN_10897906c(void)

{
  func_0x00010897c400();
  return 1;
}



/* Entry: 1089790b4; end: 1089790b7;  */

undefined8 FUN_1089790b4(void)

{
  return 0;
}



/* Entry: 1089790b8; end: 10897960b;  */

undefined8
FUN_1089790b8(undefined **param_1,undefined **param_2,undefined **param_3,long param_4,
             undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  int iVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  byte bVar16;
  undefined **unaff_x22;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar19;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_518 [24];
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined ***pppuStack_4f0;
  ulong uStack_4e8;
  undefined ***pppuStack_4e0;
  undefined8 uStack_4d8;
  uint uStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined1 uStack_478;
  undefined4 uStack_470;
  undefined1 uStack_468;
  undefined1 uStack_450;
  undefined4 uStack_448;
  undefined1 uStack_440;
  undefined1 uStack_428;
  undefined8 uStack_420;
  undefined **ppuStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  long *plStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined ***pppuStack_3c8;
  undefined1 *puStack_3c0;
  code *pcStack_3b8;
  undefined8 *puStack_3a8;
  undefined **appuStack_3a0 [5];
  undefined1 auStack_378 [8];
  undefined4 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined8 *puStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined8 *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  func_0x00010897c468();
  uVar3 = *(byte *)((long)param_1 + 0x44) == 1;
  uStack_70 = extraout_x8;
  if ((bool)uVar3) {
    ppuVar17 = param_3;
    ppuStack_2e8 = param_1;
    (*(code *)(&PTR_FUN_110aa0e30)[*(byte *)param_5])(&ppuStack_2e8,param_2);
    *(byte *)param_5 = 5;
    pppuVar4 = (undefined ***)(ulong)*(uint *)((long)param_2 + 0x54);
    FUN_108978c7c(pppuVar4,*(undefined8 *)(*param_3 + 0x218));
    ppuStack_2e8 = param_1;
    func_0x00010897c628((&PTR_FUN_110aa0ab0)[*(byte *)param_5]);
    unaff_x22 = param_3;
    unaff_x23 = param_1;
    if (((ulong)pppuVar4 & 1) == 0) {
      func_0x00010897c628((&PTR_FUN_110aa0e60)[*(byte *)param_5]);
    }
    goto LAB_1089794c4;
  }
  FUN_108b80d14(appuStack_3a0,param_2 + 0xc);
  pppuVar4 = appuStack_3a0;
  FUN_108b80d14(auStack_378);
  unaff_x25 = (long *)(param_4 + 0xf0);
  unaff_x24 = *(undefined ***)(param_4 + 0xd0);
  unaff_x28 = *(undefined ***)(param_4 + 0xd8);
  param_5 = (undefined **)((long)unaff_x28 - (long)unaff_x24);
  uStack_88 = 9;
  pcStack_80 = FUN_108979cfc;
  pcStack_78 = (code *)0x108979d08;
  ppuStack_2e8 = &PTR_FUN_110ab4390;
  uStack_2e0 = uStack_370;
  uStack_2c8 = uStack_358;
  uStack_2d0 = uStack_360;
  uStack_2d8 = uStack_368;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_368 = 0;
  lVar13 = 0;
  if (param_5 != (undefined **)0x0) {
    lVar13 = ((long)unaff_x28 - (long)unaff_x24) * 2 + -1;
  }
  unaff_x27 = (undefined8 *)(param_4 + 200);
  uVar12 = *(ulong *)(param_4 + 0xe8);
  uVar3 = 0;
  if (lVar13 == *unaff_x25 + uVar12) {
    if (uVar12 < 0x10) {
      unaff_x26 = (undefined8 *)(param_4 + 0xe0);
      unaff_x22 = (undefined **)*unaff_x26;
      unaff_x23 = *(undefined ***)(param_4 + 200);
      if ((undefined **)((long)unaff_x22 - (long)unaff_x23) <= param_5) {
        param_2 = (undefined **)((long)unaff_x22 - (long)unaff_x23 >> 2);
        if (unaff_x22 == unaff_x23) {
          param_2 = (undefined **)0x1;
        }
        puStack_318 = unaff_x26;
        func_0x000108979c5c();
        unaff_x22 = (undefined **)((long)param_2 + (long)param_5);
        ppuVar17 = param_2 + (long)pppuVar4;
        puVar5 = (undefined *)0x2780;
        pppuVar7 = pppuVar4;
        puStack_3a8 = unaff_x27;
        ppuStack_338 = param_2;
        ppuStack_330 = unaff_x22;
        ppuStack_328 = unaff_x22;
        ppuStack_320 = ppuVar17;
        __Znwm();
        uStack_340 = 0x10;
        ppuVar19 = unaff_x22;
        plStack_348 = unaff_x25;
        if (param_5 == (undefined **)((long)pppuVar4 * 8)) {
          if (unaff_x28 == unaff_x24) {
            ppuVar19 = (undefined **)0x1;
            puStack_350 = puVar5;
            puStack_2f0 = unaff_x26;
            func_0x000108979c5c();
            ppuStack_2f8 = ppuVar19 + (long)pppuVar7;
            param_3 = unaff_x22;
            ppuStack_310 = ppuVar19;
            ppuStack_308 = ppuVar19;
            ppuStack_300 = ppuVar19;
            func_0x000108979c34(&ppuStack_310,unaff_x22);
            ppuVar1 = ppuStack_2f8;
            ppuVar19 = ppuStack_300;
            unaff_x24 = ppuStack_308;
            param_5 = ppuStack_310;
            ppuStack_338 = ppuStack_310;
            ppuStack_330 = ppuStack_308;
            ppuStack_320 = ppuStack_2f8;
            ppuStack_310 = param_2;
            ppuStack_308 = unaff_x22;
            ppuStack_300 = unaff_x22;
            ppuStack_2f8 = ppuVar17;
            func_0x000108979cbc(&ppuStack_310);
            param_2 = param_5;
            unaff_x22 = unaff_x24;
            ppuVar17 = ppuVar1;
          }
          else {
            unaff_x22 = unaff_x22 + (((long)unaff_x22 - (long)param_2 >> 3) + 1) / -2;
            ppuVar19 = unaff_x22;
            ppuStack_330 = unaff_x22;
          }
        }
        unaff_x23 = ppuVar19 + 1;
        *ppuVar19 = puVar5;
        puStack_350 = (undefined *)0x0;
        unaff_x28 = *(undefined ***)(param_4 + 0xd8);
        ppuStack_328 = unaff_x23;
        while( true ) {
          ppuVar19 = *(undefined ***)(param_4 + 0xd0);
          uVar3 = unaff_x28 == ppuVar19;
          if ((bool)uVar3) break;
          ppuVar19 = unaff_x22;
          if (unaff_x22 == param_2) {
            if (unaff_x23 < ppuVar17) {
              param_3 = (undefined **)((long)unaff_x23 - (long)param_2);
              ppuVar1 = unaff_x23 + (((long)ppuVar17 - (long)unaff_x23 >> 3) + 1) / 2;
              ppuVar19 = (undefined **)((long)ppuVar1 - ((long)unaff_x23 - (long)param_2));
              unaff_x23 = ppuVar1;
              if (param_3 != (undefined **)0x0) {
                _memmove(ppuVar19,unaff_x22);
              }
            }
            else {
              lVar13 = (long)ppuVar17 - (long)param_2 >> 2;
              if ((long)ppuVar17 - (long)param_2 == 0) {
                lVar13 = 1;
              }
              puStack_2f0 = unaff_x26;
              func_0x000108979c5c(lVar13);
              func_0x00010897c8b4(lVar13 << 1);
              param_3 = unaff_x23;
              func_0x000108979c34(&ppuStack_310,param_2);
              ppuVar2 = ppuStack_2f8;
              ppuVar1 = ppuStack_300;
              ppuVar19 = ppuStack_308;
              param_5 = ppuStack_310;
              ppuStack_310 = param_2;
              ppuStack_308 = unaff_x22;
              ppuStack_300 = unaff_x23;
              ppuStack_2f8 = ppuVar17;
              func_0x000108979cbc(&ppuStack_310);
              param_2 = param_5;
              unaff_x23 = ppuVar1;
              ppuVar17 = ppuVar2;
            }
          }
          unaff_x28 = unaff_x28 + -1;
          unaff_x22 = ppuVar19 + -1;
          *unaff_x22 = *unaff_x28;
          unaff_x24 = unaff_x22;
        }
        ppuStack_338 = *(undefined ***)(param_4 + 200);
        *(undefined ***)(param_4 + 200) = param_2;
        *(undefined ***)(param_4 + 0xd0) = unaff_x22;
        ppuStack_320 = *(undefined ***)(param_4 + 0xe0);
        ppuStack_328 = *(undefined ***)(param_4 + 0xd8);
        *(undefined ***)(param_4 + 0xd8) = unaff_x23;
        *(undefined ***)(param_4 + 0xe0) = ppuVar17;
        ppuStack_330 = ppuVar19;
        func_0x000108979c90(&puStack_350);
        func_0x000108979cbc(&ppuStack_338);
        unaff_x27 = puStack_3a8;
        goto LAB_108979478;
      }
      param_2 = (undefined **)0x2780;
      __Znwm();
      if (unaff_x22 == unaff_x28) {
        if (unaff_x24 == unaff_x23) {
          unaff_x22 = (undefined **)((long)unaff_x22 - (long)unaff_x24 >> 2);
          if (unaff_x28 == unaff_x24) {
            unaff_x22 = (undefined **)0x1;
          }
          puStack_2f0 = unaff_x26;
          func_0x000108979c5c(unaff_x22);
          func_0x00010897c8b4((long)unaff_x22 << 1);
          param_3 = *(undefined ***)(param_4 + 0xd8);
          func_0x000108979c34(&ppuStack_310,*(undefined8 *)(param_4 + 0xd0));
          func_0x00010897c5cc();
          unaff_x24 = *(undefined ***)(param_4 + 0xd0);
        }
        unaff_x24[-1] = (undefined *)param_2;
        ppuVar17 = *(undefined ***)(param_4 + 0xd0);
        unaff_x28 = *(undefined ***)(param_4 + 0xd8);
        unaff_x24 = ppuVar17 + -1;
        *(undefined ***)(param_4 + 0xd0) = unaff_x24;
        goto LAB_10897921c;
      }
      *unaff_x28 = (undefined *)param_2;
      uVar3 = 0;
    }
    else {
      *(ulong *)(param_4 + 0xe8) = uVar12 - 0x10;
      ppuVar17 = unaff_x24 + 1;
LAB_10897921c:
      unaff_x23 = (undefined **)*unaff_x24;
      *(undefined ***)(param_4 + 0xd0) = ppuVar17;
      uVar3 = 0;
      if (unaff_x28 == *(undefined ***)(param_4 + 0xe0)) {
        ppuVar19 = (undefined **)*unaff_x27;
        if (ppuVar17 < ppuVar19 || (long)ppuVar17 - (long)ppuVar19 == 0) {
          uVar3 = (long)unaff_x28 - (long)ppuVar19 == 0;
          param_2 = (undefined **)((long)unaff_x28 - (long)ppuVar19 >> 2);
          if ((bool)uVar3) {
            param_2 = (undefined **)0x1;
          }
          ppuVar19 = param_2;
          puStack_2f0 = (undefined8 *)(param_4 + 0xe0);
          func_0x000108979c5c();
          ppuStack_308 = ppuVar19 + ((ulong)param_2 >> 2);
          ppuStack_2f8 = ppuVar19 + (long)ppuVar17;
          param_3 = *(undefined ***)(param_4 + 0xd8);
          ppuStack_310 = ppuVar19;
          ppuStack_300 = ppuStack_308;
          func_0x000108979c34(&ppuStack_310,*(undefined8 *)(param_4 + 0xd0));
          func_0x00010897c5cc();
          unaff_x28 = *(undefined ***)(param_4 + 0xd8);
        }
        else {
          param_5 = (undefined **)((((long)ppuVar17 - (long)ppuVar19 >> 3) + 1) / -2);
          param_2 = ppuVar17 + (long)param_5;
          unaff_x22 = (undefined **)((long)unaff_x28 - (long)ppuVar17);
          uVar3 = unaff_x22 == (undefined **)0x0;
          if (!(bool)uVar3) {
            param_3 = unaff_x22;
            _memmove(param_2);
            ppuVar17 = *(undefined ***)(param_4 + 0xd0);
          }
          unaff_x28 = (undefined **)((long)param_2 + (long)unaff_x22);
          *(undefined ***)(param_4 + 0xd0) = ppuVar17 + (long)param_5;
          *(undefined ***)(param_4 + 0xd8) = unaff_x28;
        }
      }
      *unaff_x28 = (undefined *)unaff_x23;
    }
    *(long *)(param_4 + 0xd8) = *(long *)(param_4 + 0xd8) + 8;
  }
LAB_108979478:
  puVar6 = unaff_x27;
  FUN_108977e74();
  *(undefined4 *)(puVar6 + 0x4c) = uStack_88;
  puVar6[0x4d] = pcStack_80;
  puVar6[0x4e] = pcStack_78;
  (*pcStack_78)();
  *unaff_x25 = *unaff_x25 + 1;
  FUN_108977ea8(&ppuStack_2e8);
  func_0x000108b80d84(auStack_378);
  pppuVar4 = appuStack_3a0;
  func_0x000108b80d84();
  ppuVar17 = param_3;
LAB_1089794c4:
  func_0x00010897c314(uStack_70);
  if ((bool)uVar3) {
    return 1;
  }
  ___stack_chk_fail();
  func_0x000108979c90(&puStack_350);
  func_0x000108979cbc(&ppuStack_338);
  FUN_108977ea8(&ppuStack_2e8);
  func_0x000108b80d84(auStack_378);
  pppuVar7 = appuStack_3a0;
  func_0x000108b80d84();
  func_0x00010897c3ec();
  pcStack_3b8 = FUN_10897960c;
  pppuVar8 = pppuVar7;
  ppuStack_410 = unaff_x28;
  puStack_408 = unaff_x27;
  puStack_400 = unaff_x26;
  plStack_3f8 = unaff_x25;
  ppuStack_3f0 = unaff_x24;
  ppuStack_3e8 = unaff_x23;
  ppuStack_3e0 = unaff_x22;
  ppuStack_3d8 = param_2;
  ppuStack_3d0 = param_5;
  pppuStack_3c8 = pppuVar4;
  puStack_3c0 = &stack0xfffffffffffffff0;
  func_0x00010897c468();
  uStack_420 = extraout_x8_00;
  pppuVar4 = (undefined ***)*ppuVar17;
  if (*(char *)(pppuVar8 + 0x42) == '\x01') {
    pppuVar8 = (undefined ***)pppuVar4[0x38];
    (*(code *)(*pppuVar8)[0xc])(pppuVar8,pppuVar7 + 0x3f);
  }
  if (*(char *)(pppuVar7 + 0x27) == '\x01') {
    pppuVar8 = pppuVar4;
    func_0x000108975924(pppuVar4,pppuVar7 + 0x1e);
  }
  if (*(char *)(pppuVar7 + 0x3e) == '\x01') {
    pppuVar8 = (undefined ***)pppuVar4[0xb];
    func_0x00010897ca9c();
    (*extraout_x8_01)();
  }
  pppuVar14 = (undefined ***)pppuVar7[0x49];
  while (pppuVar14 != pppuVar7 + 0x4a) {
    if (*(char *)(pppuVar14 + 0x10) == '\x01') {
      ppuVar17 = pppuVar4[0x38];
      ppuStack_500 = pppuVar14[4];
      func_0x000107c27994(&ppuStack_4f8,pppuVar14 + 0xd);
      func_0x00010897c9a8(*(undefined8 *)(*ppuVar17 + 0x58));
      pppuVar8 = &ppuStack_4f8;
      func_0x000107c27914();
    }
    func_0x00010897c7e0();
    pppuVar14 = pppuVar8;
  }
  if (((ulong)pppuVar7[0x1d] & 1) == 0) {
    bVar16 = 0;
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppuStack_500 = (undefined **)FUN_10897bf4c;
    ppuStack_4f8 = &PTR_FUN_110aa1640;
    uStack_4e8 = 0;
    uStack_4d8 = CONCAT71(uStack_4d8._1_7_,1);
    pppuStack_4f0 = pppuVar4;
    pppuStack_4e0 = pppuVar8;
    func_0x00010897c8a0(pppuVar4[0xb]);
    (*extraout_x8_02)();
    (**(code **)(*pppuVar4[0x55] + 0x60))(pppuVar4[0x55],pppuVar7 + 10);
    (**(code **)(*pppuVar4[0x55] + 0x68))();
    pppuVar8 = &ppuStack_500;
    func_0x000107c281f0();
    bVar16 = *(byte *)(pppuVar7 + 0x1d);
  }
  if (((((ulong)pppuVar7[0x27] & 1) != 0) || ((bVar16 & 1) != 0)) ||
     (((ulong)pppuVar7[0x48] & 1) != 0)) {
    ppuVar17 = pppuVar4[0x55];
    func_0x0001089758ac(&ppuStack_500,pppuVar7 + 0x43);
    (**(code **)(*ppuVar17 + 0x70))(ppuVar17,pppuVar4 + 0x57,bVar16 & 1,&ppuStack_500);
    pppuVar8 = &ppuStack_500;
    FUN_1089775ec();
    if (*(char *)(pppuVar7 + 0x48) == '\x01') {
      ppuVar17 = pppuVar4[0x38];
      FUN_108977930(&ppuStack_500,pppuVar7 + 0x43);
      (**(code **)(*ppuVar17 + 0x30))(ppuVar17,&ppuStack_500);
      FUN_108976dc4(&ppuStack_500);
      pppuVar8 = (undefined ***)pppuVar4[0x55];
      func_0x00010897c8a0();
      func_0x00010897ca58();
    }
  }
  pppuVar14 = pppuVar4 + 0x51;
  pppuVar15 = (undefined ***)pppuVar7[0x49];
  do {
    if (pppuVar15 == pppuVar7 + 0x4a) {
      uVar3 = pppuVar4[0x54] == (undefined **)0x1;
      if ((bool)uVar3) {
        func_0x000107c28144(pppuVar4 + 0x60);
      }
      else {
        func_0x0001053a4504(pppuVar4 + 0x60);
      }
      func_0x00010897c314(uStack_420);
      if ((bool)uVar3) {
        return 1;
      }
      ___stack_chk_fail();
      func_0x00010897cac8();
      FUN_108976dc4();
      func_0x00010897c3ec();
      return 0;
    }
    pppuVar18 = pppuVar15 + 4;
    ppuVar17 = *pppuVar18;
    Hint_Prefetch(*pppuVar14,0,2,0);
    func_0x00010897ca88((long)&PTR_LOOP_110c8acd8 + (long)ppuVar17);
    func_0x00010897bfb0();
    bVar16 = *(byte *)((long)pppuVar15 + 0x8c);
    if (pppuVar8 == (undefined ***)0x0) {
      if ((bVar16 != 0) && (*(uint *)(pppuVar15 + 0x11) < 2)) {
LAB_1089798a0:
        iVar11 = *(int *)(pppuVar15 + 0x11);
        if (iVar11 == 0) {
          ppuStack_4f8 = (undefined **)0x0;
          pppuStack_4f0 = (undefined ***)0x0;
          uStack_4e8 = uStack_4e8 & 0xffffffff00000000;
          pppuStack_4e0 = (undefined ***)0x0;
          uStack_4d8 = 0;
          uStack_4d0 = 0;
          uStack_4c8 = 0;
          uStack_4c0 = 0;
          uStack_4b8 = 0;
          uStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          ppuStack_500 = (undefined **)((ulong)ppuStack_500 & 0xffffffff00000000);
          uStack_480 = 0x3f800000;
          FUN_108975a08(auStack_518,pppuVar14,pppuVar18,&ppuStack_500);
          FUN_10897760c(&ppuStack_500);
          if (*(char *)((long)pppuVar15 + 0x8c) != '\x01') goto LAB_108979928;
          iVar11 = *(int *)(pppuVar15 + 0x11);
        }
        if (iVar11 != 1) goto LAB_108979928;
        (**(code **)(*pppuVar4[0xb] + 0x48))(pppuVar4[0xb],*pppuVar18);
        goto LAB_108979948;
      }
      if ((*(char *)(pppuVar15 + 0xc) != '\x01') || (*(int *)(pppuVar15 + 0xb) != 1)) {
        if (bVar16 == 0) goto LAB_108979928;
        goto LAB_1089798a0;
      }
      ppuVar19 = pppuVar4[0x38];
      FUN_108975a7c(&ppuStack_500,ppuVar17,pppuVar15 + 8);
      func_0x00010897c9a8(*(undefined8 *)(*ppuVar19 + 0x50));
LAB_108979a70:
      pppuVar8 = &ppuStack_500;
      FUN_1089778ec();
    }
    else {
      if ((bVar16 & 1) != 0) goto LAB_1089798a0;
LAB_108979928:
      if (pppuVar15[0x1b] != (undefined **)0x0) {
        (**(code **)(*pppuVar4[0xb] + 0x40))(pppuVar4[0xb],pppuVar15[4],pppuVar15 + 0x18);
      }
LAB_108979948:
      pppuVar9 = pppuVar14;
      FUN_108975ae0(pppuVar14,pppuVar18);
      pppuVar10 = pppuVar9;
      func_0x00010897c700();
      FUN_108975e20();
      func_0x00010897c700();
      FUN_108975e20();
      func_0x00010897c700();
      FUN_108975e20();
      func_0x00010897c700();
      FUN_108975e20();
      if (pppuVar15[0x1b] != (undefined **)0x0) {
        pppuVar10 = pppuVar9 + 0xc;
        func_0x00010897b950(pppuVar10,pppuVar15 + 0x18);
      }
      pppuVar8 = pppuVar10;
      if ((*(char *)((long)pppuVar15 + 0x8c) == '\x01') && (*(int *)(pppuVar15 + 0x11) == 1)) {
        ppuVar19 = *pppuVar18;
        Hint_Prefetch(*pppuVar14,0,2,0);
        func_0x00010897ca88((long)&PTR_LOOP_110c8acd8 + (long)ppuVar19);
        ppuVar17 = ppuVar19;
        func_0x00010897bfb0();
        if (pppuVar10 != (undefined ***)0x0) {
          FUN_10897760c(ppuVar17 + 1);
          pppuVar8 = pppuVar14;
          func_0x00010ae6cb48(pppuVar14,pppuVar10,0x90);
          if ((*(char *)((long)pppuVar15 + 0x8c) != '\x01') || (*(int *)(pppuVar15 + 0x11) != 1))
          goto LAB_108979a28;
          ppuVar19 = *pppuVar18;
        }
        ppuStack_4f8 = (undefined **)(((ulong)ppuStack_4f8 >> 8 & 0xffffff) << 8);
        pppuStack_4f0 = (undefined ***)((ulong)pppuStack_4f0 & 0xffffffffffffff00);
        uStack_4d0 = uStack_4d0 & 0xffffff00;
        uStack_4c8 = uStack_4c8 & 0xffffffffffffff00;
        uStack_4a0 = uStack_4a0 & 0xffffffffffffff00;
        uStack_498 = uStack_498 & 0xffffffff00000000;
        uStack_490 = uStack_490 & 0xffffffffffffff00;
        uStack_478 = 0;
        uStack_470 = 0;
        uStack_468 = 0;
        uStack_450 = 0;
        uStack_448 = 0;
        uStack_440 = 0;
        uStack_428 = 0;
        ppuStack_500 = ppuVar19;
        (**(code **)(*pppuVar4[0x38] + 0x50))(pppuVar4[0x38],&ppuStack_500);
        goto LAB_108979a70;
      }
LAB_108979a28:
      if ((((*(byte *)((long)pppuVar15 + 0x2c) & 1) != 0) ||
          ((*(byte *)((long)pppuVar15 + 0x34) & 1) != 0)) ||
         (*(char *)((long)pppuVar15 + 0x3c) == '\x01')) {
        ppuVar17 = pppuVar4[0x38];
        FUN_108975cac(&ppuStack_500,*pppuVar18,pppuVar9,pppuVar15 + 5);
        (**(code **)(*ppuVar17 + 0x50))(ppuVar17,&ppuStack_500);
        goto LAB_108979a70;
      }
      if (*(char *)(pppuVar15 + 0xc) == '\x01') {
        pppuVar8 = (undefined ***)pppuVar4[0x38];
        (*(code *)(*pppuVar8)[9])(pppuVar8,pppuVar15 + 8,pppuVar15[4]);
      }
      if (*(char *)(pppuVar15 + 0x17) == '\x01') {
        pppuVar8 = (undefined ***)pppuVar4[0x38];
        (*(code *)(*pppuVar8)[0xd])(pppuVar8,pppuVar15 + 0x12,pppuVar15[4]);
      }
    }
    func_0x00010897c7e0();
    pppuVar15 = pppuVar8;
  } while( true );
}



/* Entry: 10897960c; end: 108979beb;  */

undefined8 FUN_10897960c(undefined ***param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  int iVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  byte bVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined1 auStack_168 [24];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined ***pppuStack_140;
  ulong uStack_138;
  undefined ***pppuStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  pppuVar2 = param_1;
  func_0x00010897c468();
  uStack_70 = extraout_x8;
  pppuVar6 = (undefined ***)*param_3;
  if (*(char *)(pppuVar2 + 0x42) == '\x01') {
    pppuVar2 = (undefined ***)pppuVar6[0x38];
    (*(code *)(*pppuVar2)[0xc])(pppuVar2,param_1 + 0x3f);
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    pppuVar2 = pppuVar6;
    func_0x000108975924(pppuVar6,param_1 + 0x1e);
  }
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    pppuVar2 = (undefined ***)pppuVar6[0xb];
    func_0x00010897ca9c();
    (*extraout_x8_00)();
  }
  pppuVar7 = (undefined ***)param_1[0x49];
  while (pppuVar7 != param_1 + 0x4a) {
    if (*(char *)(pppuVar7 + 0x10) == '\x01') {
      ppuVar10 = pppuVar6[0x38];
      ppuStack_150 = pppuVar7[4];
      func_0x000107c27994(&ppuStack_148,pppuVar7 + 0xd);
      func_0x00010897c9a8(*(undefined8 *)(*ppuVar10 + 0x58));
      pppuVar2 = &ppuStack_148;
      func_0x000107c27914();
    }
    func_0x00010897c7e0();
    pppuVar7 = pppuVar2;
  }
  if (((ulong)param_1[0x1d] & 1) == 0) {
    bVar9 = 0;
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppuStack_150 = (undefined **)FUN_10897bf4c;
    ppuStack_148 = &PTR_FUN_110aa1640;
    uStack_138 = 0;
    uStack_128 = CONCAT71(uStack_128._1_7_,1);
    pppuStack_140 = pppuVar6;
    pppuStack_130 = pppuVar2;
    func_0x00010897c8a0(pppuVar6[0xb]);
    (*extraout_x8_01)();
    (**(code **)(*pppuVar6[0x55] + 0x60))(pppuVar6[0x55],param_1 + 10);
    (**(code **)(*pppuVar6[0x55] + 0x68))();
    pppuVar2 = &ppuStack_150;
    func_0x000107c281f0();
    bVar9 = *(byte *)(param_1 + 0x1d);
  }
  if (((((ulong)param_1[0x27] & 1) != 0) || ((bVar9 & 1) != 0)) || (((ulong)param_1[0x48] & 1) != 0)
     ) {
    ppuVar10 = pppuVar6[0x55];
    func_0x0001089758ac(&ppuStack_150,param_1 + 0x43);
    (**(code **)(*ppuVar10 + 0x70))(ppuVar10,pppuVar6 + 0x57,bVar9 & 1,&ppuStack_150);
    pppuVar2 = &ppuStack_150;
    FUN_1089775ec();
    if (*(char *)(param_1 + 0x48) == '\x01') {
      ppuVar10 = pppuVar6[0x38];
      FUN_108977930(&ppuStack_150,param_1 + 0x43);
      (**(code **)(*ppuVar10 + 0x30))(ppuVar10,&ppuStack_150);
      FUN_108976dc4(&ppuStack_150);
      pppuVar2 = (undefined ***)pppuVar6[0x55];
      func_0x00010897c8a0();
      func_0x00010897ca58();
    }
  }
  pppuVar7 = pppuVar6 + 0x51;
  pppuVar8 = (undefined ***)param_1[0x49];
  do {
    if (pppuVar8 == param_1 + 0x4a) {
      uVar1 = pppuVar6[0x54] == (undefined **)0x1;
      if ((bool)uVar1) {
        func_0x000107c28144(pppuVar6 + 0x60);
      }
      else {
        func_0x0001053a4504(pppuVar6 + 0x60);
      }
      func_0x00010897c314(uStack_70);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x00010897cac8();
        FUN_108976dc4();
        func_0x00010897c3ec();
        return 0;
      }
      return 1;
    }
    pppuVar11 = pppuVar8 + 4;
    ppuVar10 = *pppuVar11;
    Hint_Prefetch(*pppuVar7,0,2,0);
    func_0x00010897ca88((long)&PTR_LOOP_110c8acd8 + (long)ppuVar10);
    func_0x00010897bfb0();
    bVar9 = *(byte *)((long)pppuVar8 + 0x8c);
    if (pppuVar2 == (undefined ***)0x0) {
      if ((bVar9 != 0) && (*(uint *)(pppuVar8 + 0x11) < 2)) {
LAB_1089798a0:
        iVar5 = *(int *)(pppuVar8 + 0x11);
        if (iVar5 == 0) {
          ppuStack_148 = (undefined **)0x0;
          pppuStack_140 = (undefined ***)0x0;
          uStack_138 = uStack_138 & 0xffffffff00000000;
          pppuStack_130 = (undefined ***)0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          ppuStack_150 = (undefined **)((ulong)ppuStack_150 & 0xffffffff00000000);
          uStack_d0 = 0x3f800000;
          FUN_108975a08(auStack_168,pppuVar7,pppuVar11,&ppuStack_150);
          FUN_10897760c(&ppuStack_150);
          if (*(char *)((long)pppuVar8 + 0x8c) != '\x01') goto LAB_108979928;
          iVar5 = *(int *)(pppuVar8 + 0x11);
        }
        if (iVar5 != 1) goto LAB_108979928;
        (**(code **)(*pppuVar6[0xb] + 0x48))(pppuVar6[0xb],*pppuVar11);
        goto LAB_108979948;
      }
      if ((*(char *)(pppuVar8 + 0xc) != '\x01') || (*(int *)(pppuVar8 + 0xb) != 1)) {
        if (bVar9 == 0) goto LAB_108979928;
        goto LAB_1089798a0;
      }
      ppuVar12 = pppuVar6[0x38];
      FUN_108975a7c(&ppuStack_150,ppuVar10,pppuVar8 + 8);
      func_0x00010897c9a8(*(undefined8 *)(*ppuVar12 + 0x50));
LAB_108979a70:
      pppuVar2 = &ppuStack_150;
      FUN_1089778ec();
    }
    else {
      if ((bVar9 & 1) != 0) goto LAB_1089798a0;
LAB_108979928:
      if (pppuVar8[0x1b] != (undefined **)0x0) {
        (**(code **)(*pppuVar6[0xb] + 0x40))(pppuVar6[0xb],pppuVar8[4],pppuVar8 + 0x18);
      }
LAB_108979948:
      pppuVar3 = pppuVar7;
      FUN_108975ae0(pppuVar7,pppuVar11);
      pppuVar4 = pppuVar3;
      func_0x00010897c700();
      FUN_108975e20();
      func_0x00010897c700();
      FUN_108975e20();
      func_0x00010897c700();
      FUN_108975e20();
      func_0x00010897c700();
      FUN_108975e20();
      if (pppuVar8[0x1b] != (undefined **)0x0) {
        pppuVar4 = pppuVar3 + 0xc;
        func_0x00010897b950(pppuVar4,pppuVar8 + 0x18);
      }
      pppuVar2 = pppuVar4;
      if ((*(char *)((long)pppuVar8 + 0x8c) == '\x01') && (*(int *)(pppuVar8 + 0x11) == 1)) {
        ppuVar12 = *pppuVar11;
        Hint_Prefetch(*pppuVar7,0,2,0);
        func_0x00010897ca88((long)&PTR_LOOP_110c8acd8 + (long)ppuVar12);
        ppuVar10 = ppuVar12;
        func_0x00010897bfb0();
        if (pppuVar4 != (undefined ***)0x0) {
          FUN_10897760c(ppuVar10 + 1);
          pppuVar2 = pppuVar7;
          func_0x00010ae6cb48(pppuVar7,pppuVar4,0x90);
          if ((*(char *)((long)pppuVar8 + 0x8c) != '\x01') || (*(int *)(pppuVar8 + 0x11) != 1))
          goto LAB_108979a28;
          ppuVar12 = *pppuVar11;
        }
        ppuStack_148 = (undefined **)(((ulong)ppuStack_148 >> 8 & 0xffffff) << 8);
        pppuStack_140 = (undefined ***)((ulong)pppuStack_140 & 0xffffffffffffff00);
        uStack_120 = uStack_120 & 0xffffff00;
        uStack_118 = uStack_118 & 0xffffffffffffff00;
        uStack_f0 = uStack_f0 & 0xffffffffffffff00;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        ppuStack_150 = ppuVar12;
        (**(code **)(*pppuVar6[0x38] + 0x50))(pppuVar6[0x38],&ppuStack_150);
        goto LAB_108979a70;
      }
LAB_108979a28:
      if ((((*(byte *)((long)pppuVar8 + 0x2c) & 1) != 0) ||
          ((*(byte *)((long)pppuVar8 + 0x34) & 1) != 0)) ||
         (*(char *)((long)pppuVar8 + 0x3c) == '\x01')) {
        ppuVar10 = pppuVar6[0x38];
        FUN_108975cac(&ppuStack_150,*pppuVar11,pppuVar3,pppuVar8 + 5);
        (**(code **)(*ppuVar10 + 0x50))(ppuVar10,&ppuStack_150);
        goto LAB_108979a70;
      }
      if (*(char *)(pppuVar8 + 0xc) == '\x01') {
        pppuVar2 = (undefined ***)pppuVar6[0x38];
        (*(code *)(*pppuVar2)[9])(pppuVar2,pppuVar8 + 8,pppuVar8[4]);
      }
      if (*(char *)(pppuVar8 + 0x17) == '\x01') {
        pppuVar2 = (undefined ***)pppuVar6[0x38];
        (*(code *)(*pppuVar2)[0xd])(pppuVar2,pppuVar8 + 0x12,pppuVar8[4]);
      }
    }
    func_0x00010897c7e0();
    pppuVar8 = pppuVar2;
  } while( true );
}



/* Entry: 108979bec; end: 108979bef;  */

undefined8 FUN_108979bec(void)

{
  return 0;
}



/* Entry: 108979bf0; end: 108979c07;  */

undefined8 FUN_108979bf0(void)

{
  func_0x00010897c670();
  return 1;
}



/* Entry: 108979c08; end: 108979c0b;  */

undefined8 FUN_108979c08(void)

{
  return 1;
}



/* Entry: 108979c0c; end: 108979c2b;  */

undefined8 FUN_108979c0c(void)

{
  func_0x00010897c294();
  func_0x00010897c2a4();
  return 1;
}



/* Entry: 108979c2c; end: 108979c5b;  */

undefined8 FUN_108979c2c(void)

{
  return 1;
}



/* Entry: 108979c5c; end: 108979cfb;  */

undefined1  [16] FUN_108979c5c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108979cfc; end: 108979d3f;  */

void FUN_108979cfc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108979d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 108979d40; end: 108979d5b;  */

undefined8 FUN_108979d40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_108979db8(param_1,*param_3);
  return 1;
}



/* Entry: 108979d5c; end: 108979db7;  */

undefined8 FUN_108979d5c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  FUN_108979db8(param_1,*param_3);
  auStack_50[0] = 0;
  uStack_28 = 0;
  func_0x00010897598c(*param_3,*param_3 + 0x228);
  func_0x000108976d9c(auStack_50);
  return 1;
}



/* Entry: 108979db8; end: 108979e37;  */

void FUN_108979db8(long param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_60 [64];
  
  if (((((*(byte *)(param_1 + 1) & 1) != 0) || ((*(byte *)(param_1 + 3) & 1) != 0)) ||
      ((*(byte *)(param_1 + 5) & 1) != 0)) ||
     ((((*(byte *)(param_1 + 9) & 1) != 0 || ((*(byte *)(param_1 + 0x38) & 1) != 0)) ||
      (((*(byte *)(param_1 + 0x41) & 1) != 0 || ((*(byte *)(param_1 + 0x68) & 1) != 0)))))) {
    plVar1 = *(long **)(param_2 + 0x58);
    FUN_1089a2aa0(auStack_60);
    func_0x00010897ca44(*(undefined8 *)(*plVar1 + 0x20));
    func_0x00010897c668();
  }
  return;
}



/* Entry: 108979e38; end: 108979e3b;  */

undefined8 FUN_108979e38(void)

{
  return 0;
}



/* Entry: 108979e3c; end: 108979e6b;  */

undefined8 FUN_108979e3c(void)

{
  func_0x00010897c838();
  return 1;
}



/* Entry: 108979e6c; end: 108979ebb;  */

void FUN_108979e6c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined1 auStack_60 [64];
  
  FUN_1089a3170(auStack_60,param_3,param_1);
  func_0x00010897ca44(*(undefined8 *)(*param_2 + 0x20));
  func_0x00010897c668();
  return;
}



/* Entry: 108979ebc; end: 108979ebf;  */

undefined8 FUN_108979ebc(void)

{
  return 0;
}



/* Entry: 108979ec0; end: 108979ed7;  */

undefined8 FUN_108979ec0(void)

{
  func_0x00010897c7a4();
  return 1;
}



/* Entry: 108979ed8; end: 108979f13;  */

undefined8 FUN_108979ed8(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  func_0x00010897c7a4();
  (**(code **)(**(long **)(*param_3 + 0x2a8) + 0x38))(*(long **)(*param_3 + 0x2a8),*param_1);
  return 1;
}



/* Entry: 108979f14; end: 108979f17;  */

undefined8 FUN_108979f14(void)

{
  return 0;
}



/* Entry: 108979f18; end: 108979f4f;  */

undefined8 FUN_108979f18(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *extraout_x8;
  code *extraout_x8_00;
  
  func_0x00010897c770(*(undefined8 *)(*param_3 + 0x218));
  (*extraout_x8)();
  func_0x00010897c8a0();
  (*extraout_x8_00)();
  return 1;
}



/* Entry: 108979f50; end: 108979f53;  */

undefined8 FUN_108979f50(void)

{
  return 0;
}



/* Entry: 108979f54; end: 108979f7f;  */

undefined8 FUN_108979f54(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  (**(code **)(**(long **)(*param_3 + 0x2a8) + 0x40))(*(long **)(*param_3 + 0x2a8),*param_1);
  return 1;
}


