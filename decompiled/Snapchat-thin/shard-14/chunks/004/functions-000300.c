/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b243504; end: 10b243527;  */

void FUN_10b243504(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b243528; end: 10b243573;  */

undefined8 * FUN_10b243528(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar4 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar4;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1 = puVar1 + 6;
  }
  else {
    puVar1 = param_1;
    FUN_10b243574();
  }
  param_1[1] = puVar1;
  return puVar1 + -6;
}



/* Entry: 10b243574; end: 10b24360f;  */

long FUN_10b243574(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_10b243610(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_10b24348c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = *param_2;
  puStack_48[1] = param_2[1];
  *puStack_48 = uVar5;
  puStack_48[3] = uVar7;
  puStack_48[2] = uVar6;
  puStack_48[5] = uVar4;
  puStack_48[4] = uVar3;
  puStack_48 = puStack_48 + 6;
  func_0x00010b243e10();
  lVar2 = param_1[1];
  func_0x00010b243de4();
  return lVar2;
}



/* Entry: 10b243610; end: 10b24365f;  */

long * FUN_10b243610(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x555555555555555 < param_2) {
    FUN_10b224d1c();
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    plVar2 = (long *)0x555555555555555;
  }
  return plVar2;
}



/* Entry: 10b243660; end: 10b24368b;  */

long * FUN_10b243660(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b24368c; end: 10b2436eb;  */

void FUN_10b24368c(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR___ZSt7nothrow_1103469d8;
  if (0x2aaaaaaaaaaaaa9 < (long)param_2) {
    param_2 = 0x2aaaaaaaaaaaaaa;
  }
  for (; 0 < (long)param_2; param_2 = param_2 >> 1) {
    lVar2 = param_2 * 0x30;
    __ZnwmRKSt9nothrow_t(lVar2,puVar1);
    if (lVar2 != 0) goto LAB_10b2436e0;
  }
  lVar2 = 0;
LAB_10b2436e0:
  *param_1 = lVar2;
  param_1[1] = param_2;
  return;
}



/* Entry: 10b2436ec; end: 10b24371b;  */

void FUN_10b2436ec(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b243db8();
  *unaff_x19 = 0;
  FUN_10b24391c();
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[1];
  return;
}



/* Entry: 10b24371c; end: 10b24391b;  */

undefined8 *
FUN_10b24371c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long *param_6,long param_7,undefined8 *param_8,long param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long lVar3;
  long extraout_x8_00;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 in_register_00005008;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_register_00005028;
  undefined8 uVar9;
  undefined8 in_register_00005048;
  undefined8 uVar10;
  
  func_0x00010b243db8();
  if (param_7 == 3) {
    if (*param_6 < (long)unaff_x20[7]) {
      func_0x00010b243d94();
      unaff_x19[3] = in_register_00005028;
      unaff_x19[2] = param_2;
      unaff_x19[5] = in_register_00005048;
      unaff_x19[4] = param_3;
      unaff_x19[1] = in_register_00005008;
      *unaff_x19 = param_1;
      func_0x00010b243d2c();
      extraout_x8[5] = in_register_00005008;
      extraout_x8[4] = param_1;
      return extraout_x8;
    }
    func_0x00010b243d2c(unaff_x20 + 6);
    *(undefined8 *)(extraout_x8_00 + 0x28) = in_register_00005008;
    *(undefined8 *)(extraout_x8_00 + 0x20) = param_1;
    func_0x00010b243d94();
  }
  else {
    if (param_7 != 2) {
      if (param_7 <= param_9) {
        uVar7 = unaff_x20[1];
        uVar6 = *unaff_x20;
        uVar8 = unaff_x20[2];
        uVar10 = unaff_x20[5];
        uVar9 = unaff_x20[4];
        param_8[3] = unaff_x20[3];
        param_8[2] = uVar8;
        param_8[5] = uVar10;
        param_8[4] = uVar9;
        param_8[1] = uVar7;
        *param_8 = uVar6;
        puVar4 = param_8 + 6;
        puVar1 = unaff_x20;
        while (puVar2 = unaff_x20 + 6, puVar2 != unaff_x19) {
          if (*param_6 < (long)unaff_x20[7]) {
            uVar7 = unaff_x20[7];
            uVar6 = *puVar2;
            uVar8 = unaff_x20[8];
            uVar10 = unaff_x20[0xb];
            uVar9 = unaff_x20[10];
            puVar4[3] = unaff_x20[9];
            puVar4[2] = uVar8;
            puVar4[5] = uVar10;
            puVar4[4] = uVar9;
            puVar4[1] = uVar7;
            *puVar4 = uVar6;
            puVar4 = puVar4 + 6;
            unaff_x20 = puVar2;
          }
          else {
            uVar7 = unaff_x20[7];
            uVar6 = *puVar2;
            uVar8 = unaff_x20[8];
            uVar10 = unaff_x20[0xb];
            uVar9 = unaff_x20[10];
            puVar1[3] = unaff_x20[9];
            puVar1[2] = uVar8;
            puVar1[5] = uVar10;
            puVar1[4] = uVar9;
            puVar1[1] = uVar7;
            *puVar1 = uVar6;
            unaff_x20 = puVar2;
            puVar1 = puVar1 + 6;
          }
        }
        uVar7 = unaff_x20[7];
        uVar6 = *puVar2;
        uVar8 = unaff_x20[8];
        uVar10 = unaff_x20[0xb];
        uVar9 = unaff_x20[10];
        puVar1[3] = unaff_x20[9];
        puVar1[2] = uVar8;
        puVar1[5] = uVar10;
        puVar1[4] = uVar9;
        puVar1[1] = uVar7;
        *puVar1 = uVar6;
        puVar2 = puVar1 + 6;
        for (; param_8 < puVar4; param_8 = param_8 + 6) {
          uVar7 = param_8[1];
          uVar6 = *param_8;
          uVar8 = param_8[2];
          uVar10 = param_8[5];
          uVar9 = param_8[4];
          puVar2[3] = param_8[3];
          puVar2[2] = uVar8;
          puVar2[5] = uVar10;
          puVar2[4] = uVar9;
          puVar2[1] = uVar7;
          *puVar2 = uVar6;
          puVar2 = puVar2 + 6;
        }
        return puVar1 + 6;
      }
      puVar4 = unaff_x20 + (param_7 / 2) * 6;
      lVar5 = (param_7 / 2) * 0x30;
      lVar3 = *param_6;
      do {
        if (*(long *)((long)unaff_x20 + lVar5 + -0x28) <= lVar3) {
          func_0x00010b243dc4();
          lVar3 = *param_6;
          break;
        }
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      puVar1 = puVar4;
      do {
        if (lVar3 < (long)puVar1[1]) {
          func_0x00010b243dc4();
          puVar2 = puVar1;
          break;
        }
        puVar1 = puVar1 + 6;
        puVar2 = unaff_x19 + 6;
      } while (puVar1 != unaff_x19);
      func_0x00010b243958(unaff_x20,puVar4,puVar2);
      return unaff_x20;
    }
    in_register_00005008 = unaff_x20[1];
    param_1 = *unaff_x20;
    in_register_00005028 = unaff_x20[3];
    param_2 = unaff_x20[2];
    in_register_00005048 = unaff_x20[5];
    param_3 = unaff_x20[4];
    uVar9 = unaff_x19[3];
    uVar8 = unaff_x19[2];
    uVar7 = unaff_x19[5];
    uVar6 = unaff_x19[4];
    uVar10 = *unaff_x19;
    unaff_x20[1] = unaff_x19[1];
    *unaff_x20 = uVar10;
    unaff_x20[3] = uVar9;
    unaff_x20[2] = uVar8;
    unaff_x20[5] = uVar7;
    unaff_x20[4] = uVar6;
  }
  unaff_x19[3] = in_register_00005028;
  unaff_x19[2] = param_2;
  unaff_x19[5] = in_register_00005048;
  unaff_x19[4] = param_3;
  unaff_x19[1] = in_register_00005008;
  *unaff_x19 = param_1;
  return unaff_x19;
}



/* Entry: 10b24391c; end: 10b243933;  */

void FUN_10b24391c(long *param_1,long param_2)

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



/* Entry: 10b243934; end: 10b243b77;  */

undefined8 FUN_10b243934(undefined8 param_1)

{
  FUN_10b24391c(param_1,0);
  return param_1;
}



/* Entry: 10b243b78; end: 10b243bcb;  */

undefined1  [16]
FUN_10b243b78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2 && puVar1 != param_4; puVar2 = puVar2 + 6) {
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    uVar6 = puVar2[3];
    uVar5 = puVar2[2];
    uVar8 = puVar2[5];
    uVar7 = puVar2[4];
    uVar12 = puVar1[3];
    uVar11 = puVar1[2];
    uVar10 = puVar1[5];
    uVar9 = puVar1[4];
    uVar13 = *puVar1;
    puVar2[1] = puVar1[1];
    *puVar2 = uVar13;
    puVar2[3] = uVar12;
    puVar2[2] = uVar11;
    puVar2[5] = uVar10;
    puVar2[4] = uVar9;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    puVar1[5] = uVar8;
    puVar1[4] = uVar7;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    param_3 = param_3 + 6;
    param_1 = param_1 + 6;
    puVar1 = puVar1 + 6;
  }
  auVar14._8_8_ = param_3;
  auVar14._0_8_ = param_1;
  return auVar14;
}



/* Entry: 10b243bcc; end: 10b243e53;  */

long FUN_10b243bcc(long *param_1,int *param_2)

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
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
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
        if (*(int *)(plVar2 + 2) == *param_2) {
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



/* Entry: 10b243e54; end: 10b243f97;  */

void FUN_10b243e54(uint *param_1,float param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar8;
  ulong uVar9;
  float fVar10;
  ulong uStack_70;
  undefined4 uStack_68;
  long lVar7;
  
  uVar1 = *(uint *)(param_3 + 0x20);
  uVar9 = (ulong)uVar1;
  lVar6 = param_3;
  FUN_10b24a5b0();
  FUN_10b24a690();
  lVar7 = param_3;
  uStack_70 = uVar9;
  uStack_68 = param_4;
  func_0x00010b24a4a4(param_3,&uStack_70);
  uVar3 = (uint)lVar7;
  lVar7 = param_3;
  func_0x00010b24a4d8(param_3,&uStack_70);
  lVar8 = param_3;
  FUN_10b24a55c(param_3,&uStack_70);
  FUN_10b24a640(param_3);
  fVar10 = param_2;
  func_0x00010b24a668(param_3);
  if ((bRam0000000113839700 & 1) == 0) {
    iVar5 = 0x13839700;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      cVar2 = -0x2a;
      func_0x000107c30180(&UNK_10f73b0d6,0x1b,0);
      cRam00000001138396f8 = cVar2;
      ___cxa_guard_release(0x113839700);
    }
  }
  uVar4 = uVar3;
  if (cRam00000001138396f8 == '\x01') {
    FUN_10b18c5cc();
  }
  *param_1 = uVar1;
  *(long *)(param_1 + 2) = lVar6;
  param_1[4] = uVar3;
  param_1[5] = (uint)lVar7;
  param_1[6] = uVar4;
  param_1[7] = (uint)lVar8;
  *(double *)(param_1 + 8) = (double)param_2;
  *(double *)(param_1 + 10) = (double)fVar10;
  return;
}



/* Entry: 10b243f98; end: 10b244033;  */

void FUN_10b243f98(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_60 [48];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b241f60(param_1,param_2[1] - *param_2 >> 3);
  plVar1 = (long *)param_2[1];
  for (param_2 = (long *)*param_2; param_2 != plVar1; param_2 = param_2 + 1) {
    if (*param_2 != 0) {
      FUN_10b243e54(auStack_60,*param_2,param_3);
      FUN_10b244034(param_1,auStack_60);
    }
  }
  return;
}



/* Entry: 10b244034; end: 10b244083;  */

undefined8 * FUN_10b244034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar4 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar4;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1 = puVar1 + 6;
  }
  else {
    puVar1 = param_1;
    FUN_10b244084();
  }
  param_1[1] = puVar1;
  return puVar1 + -6;
}



/* Entry: 10b244084; end: 10b244133;  */

long FUN_10b244084(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_10b243610(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_10b24348c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = *param_2;
  puStack_48[1] = param_2[1];
  *puStack_48 = uVar5;
  puStack_48[3] = uVar7;
  puStack_48[2] = uVar6;
  puStack_48[5] = uVar4;
  puStack_48[4] = uVar3;
  puStack_48 = puStack_48 + 6;
  FUN_10b24340c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010b2434d8(auStack_58);
  return lVar2;
}



/* Entry: 10b244134; end: 10b24415f;  */

int FUN_10b244134(int param_1,int *param_2,int *param_3)

{
  while( true ) {
    if (param_2 == param_3) {
      return -1;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 2;
  }
  return param_2[1];
}



/* Entry: 10b244160; end: 10b24450f;  */

void FUN_10b244160(long *param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_54;
  
  if (*(long *)(param_3 + 0xf0) == *(long *)(param_3 + 0xf8)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10b241f60(param_1,(param_4[1] - *param_4) / 0x30);
    puVar3 = (undefined4 *)param_4[1];
    for (puVar9 = (undefined4 *)*param_4; puVar9 != puVar3; puVar9 = puVar9 + 0xc) {
      lVar10 = *(long *)(param_3 + 0x120);
      uVar4 = *(undefined8 *)(param_3 + 0x128);
      __ZNSt3__19to_stringEi(&puStack_80,*puVar9);
      func_0x00010563d340(lVar10,uVar4,&puStack_80);
      lVar8 = *(long *)(param_3 + 0x128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_80);
      if (lVar8 != lVar10) {
        iVar5 = puVar9[7];
        FUN_10b244134(iVar5,*(undefined8 *)(param_3 + 0xf0),*(undefined8 *)(param_3 + 0xf8));
        if ((int)puVar9[6] <= iVar5) {
          FUN_10b2446f4(param_1);
        }
      }
    }
    ppuVar6 = (undefined **)0x2;
    FUN_10b244134(2,*(undefined8 *)(param_3 + 0xf0),*(undefined8 *)(param_3 + 0xf8));
    if (0 < (int)ppuVar6) {
      ppuVar6 = &PTR_DAT_110cca660;
      func_0x000107c2be10();
      if ((int)ppuVar6 != 0) {
        puStack_80 = (undefined *)0x0;
        puStack_78 = (undefined *)0x0;
        puStack_70 = (undefined *)0x0;
        FUN_10b241f60(&puStack_80,(param_1[1] - *param_1) / 0x30);
        lVar8 = param_1[1];
        for (lVar10 = *param_1; lVar10 != lVar8; lVar10 = lVar10 + 0x30) {
          if (*(int *)(lVar10 + 0x1c) != 1) {
            FUN_10b2446f4(&puStack_80);
          }
        }
        if (puStack_80 != puStack_78) {
          FUN_10b244518(param_1,&puStack_80);
        }
        ppuVar6 = &puStack_80;
        FUN_10b225f10();
      }
    }
    if (*(char *)(param_3 + 0x168) == '\x01') {
      puStack_78 = (undefined *)0x0;
      puStack_80 = (undefined *)0x0;
      uStack_68 = 0;
      puStack_70 = (undefined *)0x0;
      uStack_60 = 0x3f800000;
      lVar8 = param_1[1];
      for (lVar10 = *param_1; lVar10 != lVar8; lVar10 = lVar10 + 0x30) {
        ppuVar6 = &puStack_80;
        func_0x000107c2bee4(ppuVar6,lVar10);
      }
      uStack_a8 = 0;
      puStack_b0 = (undefined *)0x0;
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_90 = 0x3f800000;
      plVar7 = (long *)(param_3 + 0x148);
      if ((*(ulong *)(param_3 + 0x148) & 1) != 0) {
        plVar7 = (long *)(*(ulong *)(param_3 + 0x148) + 7);
      }
      plVar1 = plVar7 + *(int *)(param_3 + 0x150);
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar10 = *plVar7;
        lVar8 = (long)*(int *)(lVar10 + 0x10) << 2;
        puVar9 = *(undefined4 **)(lVar10 + 0x18);
        do {
          if (lVar8 == 0) goto LAB_10b24438c;
          uStack_54 = *puVar9;
          func_0x00010b2446fc();
          lVar8 = lVar8 + -4;
          puVar9 = puVar9 + 1;
        } while (ppuVar6 == (undefined **)0x0);
        puVar9 = *(undefined4 **)(lVar10 + 0x30);
        for (lVar10 = (long)*(int *)(lVar10 + 0x28) << 2; lVar10 != 0; lVar10 = lVar10 + -4) {
          uStack_54 = *puVar9;
          func_0x00010b2446fc();
          bVar2 = ppuVar6 != (undefined **)0x0;
          ppuVar6 = (undefined **)0x0;
          if (bVar2) {
            ppuVar6 = &puStack_b0;
            func_0x000107c2bee4(ppuVar6,&uStack_54);
          }
          puVar9 = puVar9 + 1;
        }
LAB_10b24438c:
      }
      if (lStack_98 == 0) {
        FUN_10b224c04(&plStack_d0,param_1);
      }
      else {
        plStack_d0 = (long *)0x0;
        pcStack_c8 = (code *)0x0;
        uStack_c0 = 0;
        FUN_10b241f60(&plStack_d0,(param_1[1] - *param_1) / 0x30);
        lVar8 = param_1[1];
        for (lVar10 = *param_1; lVar10 != lVar8; lVar10 = lVar10 + 0x30) {
          ppuVar6 = &puStack_b0;
          FUN_10b2446d8(ppuVar6,lVar10);
          if (ppuVar6 == (undefined **)0x0) {
            FUN_10b2446f4(&plStack_d0);
          }
        }
      }
      func_0x000107c2ab24(&puStack_b0);
      func_0x000107c2ab24(&puStack_80);
      FUN_10b244518(param_1,&plStack_d0);
      FUN_10b225f10(&plStack_d0);
    }
    puStack_80 = *(undefined **)(param_3 + 0xf0);
    puStack_78 = *(undefined **)(param_3 + 0xf8);
    puStack_70 = &DAT_10f68f19e;
    uStack_68 = 2;
    plStack_d0 = (long *)&puStack_80;
    pcStack_c8 = FUN_10b244568;
    func_0x000107c2793c(&DAT_10f2fb62f);
    func_0x000107c3173c(&puStack_b0);
    func_0x000107c27b9c(param_5 + 0x18,&puStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_b0);
  }
  return;
}



/* Entry: 10b244510; end: 10b244517;  */

void FUN_10b244510(void)

{
  return;
}



/* Entry: 10b244518; end: 10b244567;  */

void FUN_10b244518(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10b244568; end: 10b24460b;  */

void FUN_10b244568(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  func_0x000107c2837c(auStack_70);
  func_0x000107c28378(auStack_70,param_2);
  lVar3 = *param_2;
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar2);
  lVar3 = *param_1;
  if (param_1[1] == lVar3) {
    puVar2 = (undefined1 *)*param_3;
  }
  else {
    while( true ) {
      puVar2 = auStack_70;
      FUN_10b24460c(auStack_70,lVar3,param_3);
      lVar3 = lVar3 + 8;
      if (lVar3 == param_1[1]) break;
      lVar1 = param_1[2] + param_1[3];
      func_0x000107c283a4();
      *param_3 = lVar1;
    }
  }
  *param_3 = (long)puVar2;
  return;
}



/* Entry: 10b24460c; end: 10b2446d7;  */

undefined8 FUN_10b24460c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  long lStack_70;
  char cStack_61;
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined4 *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  puVar2 = param_2;
  FUN_10b224aa4(auStack_90,*param_2);
  func_0x000107c27e5c();
  uStack_40 = (ulong)(uint)param_2[1];
  uStack_38 = 0;
  puStack_50 = puVar1;
  puStack_48 = puVar2;
  func_0x000107c2793c(&UNK_10f73b116);
  func_0x000107c3173c(&ppuStack_78);
  ppuStack_60 = ppuStack_78;
  if (-1 < (long)cStack_61) {
    ppuStack_60 = &ppuStack_78;
  }
  lStack_58 = lStack_70;
  if (-1 < cStack_61) {
    lStack_58 = (long)cStack_61;
  }
  func_0x000107c28388(param_1,&ppuStack_60,param_3);
  func_0x00010b244708();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  return param_3;
}



/* Entry: 10b2446d8; end: 10b2446f3;  */

bool FUN_10b2446d8(long param_1)

{
  func_0x00010925b970();
  return param_1 != 0;
}



/* Entry: 10b2446f4; end: 10b244713;  */

undefined8 * FUN_10b2446f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = unaff_x22[1];
    uVar2 = *unaff_x22;
    uVar4 = unaff_x22[2];
    uVar6 = unaff_x22[5];
    uVar5 = unaff_x22[4];
    puVar1[3] = unaff_x22[3];
    puVar1[2] = uVar4;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1 = puVar1 + 6;
  }
  else {
    puVar1 = param_1;
    FUN_10b243574();
  }
  param_1[1] = puVar1;
  return puVar1 + -6;
}



/* Entry: 10b244714; end: 10b244763;  */

long FUN_10b244714(long param_1)

{
  FUN_10b245e80(param_1 + 0x40);
  func_0x00010b227f1c(param_1 + 0x30);
  func_0x00010b2481f8(param_1 + 0x28);
  func_0x00010b2481c8(param_1 + 0x20);
  func_0x00010b248000(param_1 + 0x18);
  func_0x00010b247f80(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b244764; end: 10b245853;  */

void FUN_10b244764(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined4 *param_10)

{
  long ***ppplVar1;
  ulong **ppuVar2;
  undefined **ppuVar3;
  long ****pppplVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long **pplVar14;
  long **pplVar15;
  undefined1 *puVar16;
  uint uVar17;
  long **pplVar18;
  ulong uVar19;
  long **extraout_x8;
  long ****extraout_x8_00;
  long extraout_x9;
  code *extraout_x9_00;
  long **pplVar20;
  long **extraout_x9_01;
  ulong uVar21;
  long *plVar22;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long **pplVar23;
  long **pplVar24;
  long ***ppplVar25;
  int *piVar26;
  long *plVar27;
  long *plVar28;
  long ***ppplVar29;
  long **unaff_x24;
  long lVar30;
  int *piVar31;
  long **pplVar32;
  undefined4 uVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined1 auStack_610 [104];
  undefined1 auStack_5a8 [104];
  long **pplStack_540;
  long **pplStack_538;
  long **pplStack_530;
  long **pplStack_528;
  long **pplStack_520;
  long **pplStack_518;
  long ***ppplStack_508;
  long ***ppplStack_500;
  undefined8 uStack_4f8;
  long ***ppplStack_4f0;
  long ***ppplStack_4e8;
  long **pplStack_4e0;
  long **pplStack_4d8;
  long **pplStack_4d0;
  long **pplStack_4c8;
  code *pcStack_4b8;
  code *pcStack_4b0;
  undefined8 uStack_4a8;
  byte bStack_4a0;
  char cStack_498;
  int iStack_47c;
  byte bStack_478;
  ulong *puStack_470;
  ulong *puStack_468;
  int *piStack_458;
  int *piStack_450;
  undefined8 *puStack_440;
  long *plStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_3f8;
  undefined1 auStack_3e0 [60];
  int iStack_3a4;
  char cStack_3a0;
  undefined1 auStack_2b0 [104];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined8 uStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined1 uStack_1c0;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  long **pplStack_160;
  ulong uStack_158;
  float fStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  char cStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined **ppuStack_b0;
  char cStack_a0;
  uint uStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  undefined *apuStack_78 [3];
  
  FUN_10b243f98(&puStack_90,param_4,*(undefined4 *)(param_6 + 0x5c));
  func_0x00010b24883c();
  func_0x000107c278b8(auStack_248);
  func_0x00010b24883c();
  func_0x000107c278b8(auStack_230);
  puStack_210 = (undefined1 *)0x0;
  uStack_218 = 0;
  uStack_208 = 0xffffffffffffffff;
  func_0x00010b24883c();
  func_0x000107c278b8(auStack_200);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  func_0x00010b24883c();
  func_0x000107c278b8(auStack_1d8);
  uStack_1c0 = 0;
  uStack_190 = 0;
  uVar12 = 0;
  uStack_180 = 0;
  uStack_188 = 0;
  puStack_170 = (undefined8 *)0x0;
  uStack_178 = 0;
  pplStack_160 = (long **)0x0;
  plStack_168 = (long *)0x0;
  uStack_158 = 0;
  fStack_150 = 1.0;
  uStack_138 = 0;
  puStack_148 = (undefined *)0x0;
  lStack_140 = 0;
  func_0x00010b24883c();
  func_0x000107c278b8(extraout_x9 + 0x118);
  cStack_118 = 0;
  uStack_110 = 0;
  cStack_d8 = '\0';
  cStack_a0 = '\0';
  uStack_98 = 0;
  uStack_d0 = 0;
  auStack_c8[0] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_248,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_1d8,param_7);
  plVar22 = (long *)lStack_100;
  if (*(char *)(param_10 + 0x18) == '\x01') {
    if (*(char *)(param_10 + 1) == '\x01') {
      uStack_1e0 = *param_10;
    }
    else {
      uStack_1e0 = 0;
    }
    cStack_118 = *(char *)(param_10 + 6);
    if (*(char *)(param_10 + 0x16) == '\x01') {
      if (cStack_d8 == '\0') {
        FUN_10b22acfc(&uStack_110);
      }
      else {
        if ((undefined4 *)&uStack_110 != param_10 + 8) {
          uStack_f0 = param_10[0x10];
          plVar27 = *(long **)(param_10 + 0xc);
          if (lStack_108 != 0) {
            puVar10 = (undefined8 *)CONCAT71(uStack_10f,uStack_110);
            for (; lStack_108 != 0; lStack_108 = lStack_108 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            uStack_f8 = 0;
            lStack_100 = 0;
            for (plVar28 = plVar27;
                (plVar27 = plVar28, plVar22 != (long *)0x0 &&
                (plVar27 = (long *)0x0, plVar28 != (long *)0x0)); plVar28 = (long *)*plVar28) {
              *(undefined4 *)(plVar22 + 2) = *(undefined4 *)(plVar28 + 2);
              uVar13 = plVar28[4];
              uVar12 = plVar28[3];
              plVar22[5] = plVar28[5];
              plVar22[4] = uVar13;
              plVar22[3] = uVar12;
              lVar30 = *plVar22;
              FUN_10b245f10(&uStack_110,plVar22);
              plVar22 = (long *)lVar30;
            }
            func_0x00010b248880();
          }
          unaff_x24 = (long **)0x1;
          for (; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
            puVar10 = (undefined8 *)0x30;
            __Znwm();
            uStack_430 = 1;
            *puVar10 = 0;
            uVar35 = plVar27[2];
            uVar13 = plVar27[5];
            uVar12 = plVar27[4];
            puVar10[3] = plVar27[3];
            puVar10[2] = uVar35;
            puVar10[5] = uVar13;
            puVar10[4] = uVar12;
            puVar10[1] = (long)*(int *)(puVar10 + 2);
            puStack_440 = puVar10;
            plStack_438 = &lStack_100;
            FUN_10b245f10(&uStack_110);
            puStack_440 = (undefined8 *)0x0;
            FUN_10b18d73c(&puStack_440);
          }
        }
        uStack_e0 = *(undefined8 *)(param_10 + 0x14);
        uVar12 = *(undefined8 *)(param_10 + 0x12);
        uStack_e8 = uVar12;
      }
    }
  }
  else {
    uStack_1e0 = 0;
    cStack_118 = '\0';
  }
  uVar33 = (undefined4)uVar12;
  if ((ulong)(((long)puStack_88 - (long)puStack_90) / 0x30) < 2) {
    if (puStack_90 == puStack_88) {
      FUN_10b243e54(&puStack_440,*(undefined8 *)*param_4,*(undefined4 *)(param_6 + 0x5c));
    }
    else {
      plStack_438 = (long *)puStack_90[1];
      puStack_440 = (undefined8 *)*puStack_90;
      uStack_428 = puStack_90[3];
      uStack_430 = puStack_90[2];
      uStack_418 = puStack_90[5];
      uStack_420 = puStack_90[4];
    }
    func_0x00010b2488c8(param_2[6],param_7,(ulong)puStack_440 & 0xffffffff);
    pcStack_4b8 = (code *)0x0;
    pcStack_4b0 = (code *)0x0;
    uStack_4a8 = 0;
    ppplStack_4f0 = (long ***)0x0;
    ppplStack_4e8 = (long ***)0x0;
    pplStack_4e0 = (long **)0x0;
    pplStack_540 = (long **)0x0;
    pplStack_538 = (long **)0x0;
    pplStack_530 = (long **)0x0;
    func_0x00010b2488b8(auStack_2b0);
    FUN_10b245a1c(*param_8,param_7,param_5,&puStack_90,&pcStack_4b8,&ppplStack_4f0,&pplStack_540,
                  &puStack_440,&puStack_440,auStack_248,auStack_2b0,param_9);
    FUN_10b22afe4(auStack_2b0);
    FUN_10b225f10(&pplStack_540);
    func_0x00010b248878();
    FUN_10b225f10(&pcStack_4b8);
    FUN_10b22ab40(param_1,*param_4);
    goto LAB_10b2455a4;
  }
  FUN_10b248958(&puStack_440,param_7);
  func_0x00010b248830(*param_2);
  (*extraout_x9_00)(&piStack_458);
  ppplVar11 = (long ***)(uStack_3f8 & 0xfffffffffffffffc);
  pplVar15 = (long **)(long)*(char *)((long)ppplVar11 + 0x17);
  ppplVar29 = ppplVar11;
  if ((long)pplVar15 < 0) {
    ppplVar29 = (long ***)*ppplVar11;
    pplVar15 = ppplVar11[1];
  }
  func_0x000107c30184(ppplVar29,pplVar15,0xffffffffffffffff);
  func_0x000107c2fee0(&pplStack_540);
  ppplVar11 = (long ***)pplStack_540;
  FUN_10b47aaf0(pplStack_540,auStack_1d8);
  if ((long)ppplVar11 < 1) {
    ppplVar25 = ppplVar29;
    if (0 < (long)ppplVar29) goto LAB_10b244b40;
  }
  else {
    ppplVar25 = ppplVar11;
    if (ppplVar29 <= ppplVar11) {
      ppplVar25 = ppplVar29;
    }
    if ((long)ppplVar29 < 1) {
      ppplVar25 = ppplVar11;
    }
LAB_10b244b40:
    FUN_10b47ab44(pplStack_540,ppplVar25);
  }
  uVar12 = param_2[2];
  puVar16 = auStack_3e0;
  FUN_10b24af7c();
  uVar13 = param_2[2];
  uStack_218 = uVar12;
  puStack_210 = puVar16;
  FUN_10b24aec0();
  uStack_208 = uVar13;
  if ((bRam00000001137f42f0 & 1) == 0) {
    iVar9 = 0x137f42f0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107c2be40(&PTR_DAT_110cca690);
      uRam00000001137f42e8 = uVar33;
      ___cxa_guard_release(0x1137f42f0);
    }
  }
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uRam00000001137f42e8);
  if ((bRam00000001137f42f8 & 1) == 0) {
    iVar9 = 0x137f42f8;
    uVar33 = uRam00000001137f42e8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107c2be40(&PTR_DAT_110cca6a8);
      uRam00000001137f42ec = uVar33;
      ___cxa_guard_release(0x1137f42f8);
    }
  }
  uStack_d0 = CONCAT44(uRam00000001137f42ec,(undefined4)uStack_d0);
  puVar34 = &UNK_10f73b11e;
  func_0x000107c30184(&UNK_10f73b11e,0x21,3000);
  if (piStack_458 != piStack_450) {
    piVar26 = piStack_458;
    piVar31 = piStack_450;
    if (uStack_158 != 0) {
      func_0x00010b245ee8(pplStack_160);
      pplStack_160 = (long **)0x0;
      puVar10 = puStack_170;
      for (pplVar15 = (long **)plStack_168; pplVar15 != (long **)0x0;
          pplVar15 = (long **)((long)pplVar15 - 1)) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      uStack_158 = 0;
      piVar26 = piStack_458;
      piVar31 = piStack_450;
    }
    bVar7 = false;
    uStack_138 = 0;
    lStack_140 = 0;
    puStack_148 = puVar34;
    for (; piVar26 != piVar31; piVar26 = piVar26 + 0xc) {
      pplVar15 = (long **)((ulong)(*(long *)(piVar26 + 2) * (long)puVar34) >> 3);
      if ((long)puVar34 < 1) {
        pplVar15 = (long **)0x0;
      }
      uVar12 = param_2[3];
      func_0x000107c278b8(&ppplStack_4f0,"");
      FUN_10b24b19c(&pcStack_4b8,uVar12,pplVar15,&ppplStack_4f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_4f0);
      pplVar14 = (long **)plStack_168;
      if ((cStack_498 == '\x01') && (pcStack_4b8 != pcStack_4b0)) {
        if (!bVar7) {
          lStack_140 = *(long *)(pcStack_4b8 + 0x18) / 1000;
          uStack_138 = *(undefined8 *)(pcStack_4b8 + 0x20);
        }
        iVar9 = *piVar26;
        pplVar32 = *(long ***)(piVar26 + 2);
        pplVar18 = *(long ***)(pcStack_4b8 + 8);
        pplVar24 = (long **)(long)iVar9;
        if ((long **)plStack_168 != (long **)0x0) {
          uVar19 = (long)plStack_168 - 1;
          if (((ulong)plStack_168 & uVar19) == 0) {
            unaff_x24 = (long **)(uVar19 & (ulong)pplVar24);
          }
          else {
            unaff_x24 = pplVar24;
            if (plStack_168 <= pplVar24) {
              uVar21 = 0;
              if ((long **)plStack_168 != (long **)0x0) {
                uVar21 = (ulong)pplVar24 / (ulong)plStack_168;
              }
              unaff_x24 = (long **)((long)pplVar24 - uVar21 * (long)plStack_168);
            }
          }
          ppplVar29 = (long ***)puStack_170[(long)unaff_x24];
          if (ppplVar29 != (long ***)0x0) {
            do {
              while( true ) {
                ppplVar29 = (long ***)*ppplVar29;
                if (ppplVar29 == (long ***)0x0) goto LAB_10b244d58;
                pplVar20 = ppplVar29[1];
                if (pplVar20 != pplVar24) break;
                if (*(int *)(ppplVar29 + 2) == iVar9) goto LAB_10b244ffc;
              }
              if (((ulong)plStack_168 & uVar19) == 0) {
                pplVar20 = (long **)((ulong)pplVar20 & uVar19);
              }
              else if (plStack_168 <= pplVar20) {
                uVar21 = 0;
                if ((long **)plStack_168 != (long **)0x0) {
                  uVar21 = (ulong)pplVar20 / (ulong)plStack_168;
                }
                pplVar20 = (long **)((long)pplVar20 - uVar21 * (long)plStack_168);
              }
            } while (pplVar20 == unaff_x24);
          }
        }
LAB_10b244d58:
        ppplVar29 = (long ***)0x38;
        __Znwm();
        pplStack_4e0 = (long **)0x1;
        *ppplVar29 = (long **)0x0;
        ppplVar29[1] = pplVar24;
        *(int *)(ppplVar29 + 2) = iVar9;
        ppplVar29[4] = (long **)0x0;
        ppplVar29[3] = (long **)0x0;
        ppplVar29[6] = (long **)0x0;
        ppplVar29[5] = (long **)0x0;
        ppplStack_4e8 = &pplStack_160;
        if ((pplVar14 == (long **)0x0) || (fStack_150 * (float)pplVar14 < (float)(uStack_158 + 1)))
        {
          bVar6 = (long **)0x2 < pplVar14;
          bVar7 = pplVar14 == (long **)0x3;
          ppplStack_4f0 = ppplVar29;
          func_0x00010b2488d4((long)pplVar14 << 1);
          pplVar20 = extraout_x8;
          if (!bVar6 || bVar7) {
            pplVar20 = extraout_x9_01;
          }
          pplVar23 = pplVar14;
          if ((long)pplVar20 - 1U == 0) {
            pplVar20 = (long **)0x2;
          }
          else if (((ulong)pplVar20 & (long)pplVar20 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pplVar23 = (long **)plStack_168;
          }
          pplVar14 = pplVar20;
          if (pplVar23 < pplVar20) {
LAB_10b244e00:
            if ((ulong)pplVar14 >> 0x3d != 0) {
              func_0x000104bd35f4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10b2457dc);
              (*pcVar5)();
            }
            lVar30 = (long)pplVar14 << 3;
            __Znwm(lVar30);
            FUN_10b248420(&puStack_170,lVar30);
            for (pplVar20 = (long **)0x0; pplVar14 != pplVar20;
                pplVar20 = (long **)((long)pplVar20 + 1)) {
              puStack_170[(long)pplVar20] = 0;
            }
            plStack_168 = (long *)pplVar14;
            if ((long ***)pplStack_160 != (long ***)0x0) {
              pplVar20 = (long **)pplStack_160[1];
              uVar21 = (long)pplVar14 - 1;
              uVar19 = 0;
              if (pplVar14 != (long **)0x0) {
                uVar19 = (ulong)pplVar20 / (ulong)pplVar14;
              }
              pplVar23 = pplVar20;
              if (pplVar14 <= pplVar20) {
                pplVar23 = (long **)((long)pplVar20 - uVar19 * (long)pplVar14);
              }
              if (((ulong)pplVar14 & uVar21) == 0) {
                pplVar23 = (long **)((ulong)pplVar20 & uVar21);
              }
              puStack_170[(long)pplVar23] = &pplStack_160;
              ppplVar11 = (long ***)pplStack_160;
              while (ppplVar25 = ppplVar11, ppplVar11 = (long ***)*ppplVar25,
                    ppplVar11 != (long ***)0x0) {
                pplVar20 = ppplVar11[1];
                if (((ulong)pplVar14 & uVar21) == 0) {
                  pplVar20 = (long **)((ulong)pplVar20 & uVar21);
                }
                else if (pplVar14 <= pplVar20) {
                  uVar19 = 0;
                  if (pplVar14 != (long **)0x0) {
                    uVar19 = (ulong)pplVar20 / (ulong)pplVar14;
                  }
                  pplVar20 = (long **)((long)pplVar20 - uVar19 * (long)pplVar14);
                }
                if (pplVar20 != pplVar23) {
                  if (puStack_170[(long)pplVar20] == 0) {
                    puStack_170[(long)pplVar20] = ppplVar25;
                    pplVar23 = pplVar20;
                  }
                  else {
                    *ppplVar25 = *ppplVar11;
                    *ppplVar11 = *(long ***)puStack_170[(long)pplVar20];
                    *(long ****)puStack_170[(long)pplVar20] = ppplVar11;
                    ppplVar11 = ppplVar25;
                  }
                }
              }
            }
          }
          else {
            pplVar14 = pplVar23;
            if (pplVar20 < pplVar23) {
              pplVar14 = (long **)(long)((float)uStack_158 / fStack_150);
              if ((pplVar23 < (long **)0x3) || (((ulong)pplVar23 & (long)pplVar23 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else {
                func_0x00010b2486c8();
              }
              if (pplVar20 <= pplVar14) {
                pplVar20 = pplVar14;
              }
              pplVar14 = (long **)plStack_168;
              if (pplVar20 < pplVar23) {
                pplVar14 = pplVar20;
                if (pplVar20 != (long **)0x0) goto LAB_10b244e00;
                FUN_10b248420(&puStack_170,0);
                plStack_168 = (long *)0x0;
                pplVar14 = (long **)0x0;
              }
            }
          }
          if (((ulong)pplVar14 & (long)pplVar14 - 1U) == 0) {
            unaff_x24 = (long **)((long)pplVar14 - 1U & (ulong)pplVar24);
          }
          else {
            unaff_x24 = pplVar24;
            if (pplVar14 <= pplVar24) {
              uVar19 = 0;
              if (pplVar14 != (long **)0x0) {
                uVar19 = (ulong)pplVar24 / (ulong)pplVar14;
              }
              unaff_x24 = (long **)((long)pplVar24 - uVar19 * (long)pplVar14);
            }
          }
        }
        plVar22 = (long *)puStack_170[(long)unaff_x24];
        if (plVar22 == (long *)0x0) {
          *ppplVar29 = pplStack_160;
          puStack_170[(long)unaff_x24] = &pplStack_160;
          pplStack_160 = (long **)ppplVar29;
          if (*ppplVar29 != (long **)0x0) {
            pplVar24 = (long **)(*ppplVar29)[1];
            if (((ulong)pplVar14 & (long)pplVar14 - 1U) == 0) {
              pplVar24 = (long **)((ulong)pplVar24 & (long)pplVar14 - 1U);
            }
            else if (pplVar14 <= pplVar24) {
              uVar19 = 0;
              if (pplVar14 != (long **)0x0) {
                uVar19 = (ulong)pplVar24 / (ulong)pplVar14;
              }
              pplVar24 = (long **)((long)pplVar24 - uVar19 * (long)pplVar14);
            }
            puStack_170[(long)pplVar24] = ppplVar29;
          }
        }
        else {
          *ppplVar29 = (long **)*plVar22;
          *plVar22 = (long)ppplVar29;
        }
        ppplStack_4f0 = (long ***)0x0;
        uStack_158 = uStack_158 + 1;
        FUN_10b248438(&ppplStack_4f0);
LAB_10b244ffc:
        *(int *)(ppplVar29 + 3) = iVar9;
        ppplVar29[4] = pplVar32;
        ppplVar29[5] = pplVar18;
        bVar7 = true;
        ppplVar29[6] = pplVar15;
      }
      FUN_10b247f00(&pcStack_4b8);
    }
  }
  if (cStack_118 == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (auStack_200,&UNK_10f73b1b1);
    func_0x00010b2488a4();
    pcStack_4b8 = FUN_10b246550;
    if (puStack_470 != puStack_468) {
      func_0x00010b2485c4();
      FUN_10b246598();
    }
  }
  else {
    if (cStack_3a0 == '\x01' && iStack_3a4 == 5) {
      puVar10 = (undefined8 *)param_2[5];
      FUN_10b245df4();
      func_0x00010b248830(*puVar10);
      func_0x00010b2485d4();
      if (bStack_4a0 != 1) {
        func_0x00010b248720();
        goto LAB_10b2450f8;
      }
      uStack_98 = 2;
      if ((pcStack_4b8 != pcStack_4b0) && (func_0x00010b248644(), (extraout_x9_02 & 1) == 0)) {
        uStack_190 = 1;
      }
      func_0x00010b248898();
    }
    else {
LAB_10b2450f8:
      func_0x00010b248830(param_2[4]);
      func_0x00010b2485d4();
      uVar17 = (uint)bStack_4a0;
      if (uVar17 != 1) {
        func_0x00010b248720();
        func_0x00010b2488a4();
        goto LAB_10b245144;
      }
      uStack_98 = uVar17;
      if ((pcStack_4b8 != pcStack_4b0) && (func_0x00010b248644(), (extraout_x9_03 & 1) == 0)) {
        uStack_190 = 1;
      }
      func_0x00010b248898();
    }
    func_0x00010b248720();
  }
LAB_10b245144:
  func_0x000107c2bf08(&pplStack_540);
  FUN_10b2462a4(&pcStack_4b8,auStack_3e0);
  if (uStack_98 != 0) {
    pplStack_540 = (long **)CONCAT44(pplStack_540._4_4_,uStack_1e0);
    if (((uStack_98 == 1) && ((bStack_478 & 1) != 0)) && (iStack_47c == 5 && (long)puStack_210 < 1))
    {
      func_0x00010b248920();
      FUN_10b252b30();
      if ((char)pplStack_4c8 != '\x01') {
LAB_10b2451e8:
        FUN_10b1801e0(&ppplStack_4f0);
        goto LAB_10b2451f0;
      }
      pplVar15 = (long **)&PTR_PTR_1133a3aa8;
      if (pplStack_4d8 != (long **)0x0) {
        pplVar15 = pplStack_4d8;
      }
      if ((double)pplVar15[4] <= 0.0) goto LAB_10b2451e8;
      if (cStack_a0 == '\0') {
        FUN_10b58d8ac(auStack_c8,0,&ppplStack_4f0);
        cStack_a0 = '\x01';
      }
      else {
        FUN_10b58dc9c(auStack_c8,&ppplStack_4f0);
      }
      uStack_98 = 2;
    }
    else {
LAB_10b2451f0:
      func_0x00010b248920();
      FUN_10b252b30();
      if (cStack_a0 == (char)pplStack_4c8) {
        if (cStack_a0 != '\0') {
          FUN_10b180118(auStack_c8,&ppplStack_4f0);
        }
      }
      else if (cStack_a0 == '\0') {
        FUN_10b18017c(auStack_c8,&ppplStack_4f0);
      }
      else {
        func_0x00010b246338(auStack_c8);
      }
    }
    FUN_10b1801e0(&ppplStack_4f0);
  }
  puVar34 = &UNK_10f73b140;
  func_0x000107c30184(&UNK_10f73b140,0x28,0xffffffffffffffff);
  bVar7 = puVar34 == (undefined *)0xffffffffffffffff;
  if (bVar7) {
    uVar8 = cStack_a0 == '\x01';
    if ((bool)uVar8) {
      ppuVar3 = &PTR_PTR_1133a3aa8;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar3 = ppuStack_b0;
      }
      puVar34 = ppuVar3[2];
      bVar7 = true;
      if (((double)puVar34 != 0.0) && (bVar7 = false, !NAN((double)puVar34))) {
        bVar7 = (double)puVar34 == 1.0;
      }
      uVar8 = 1;
      if (bVar7) goto LAB_10b2453e4;
      uVar8 = uStack_98 == 1;
      if ((bool)uVar8) {
        func_0x00010b248830(param_2[4]);
        func_0x00010b2485f8();
      }
      else {
        uVar8 = uStack_98 == 2;
        if (!(bool)uVar8) goto LAB_10b2453e4;
        puVar10 = (undefined8 *)param_2[5];
        FUN_10b245df4();
        func_0x00010b248830(*puVar10);
        func_0x00010b2485f8();
      }
      if (((ulong)pplStack_4d8 & 1) == 0) {
        func_0x00010b248728();
        goto LAB_10b2453e4;
      }
      uVar8 = ppplStack_4f0 == ppplStack_4e8;
      if (!(bool)uVar8) {
        FUN_10b224c04(&ppplStack_508,&ppplStack_4f0);
        func_0x00010b248728();
        goto LAB_10b245450;
      }
    }
    else {
LAB_10b2453e4:
      ppplStack_4f0 = (long ***)((ulong)ppplStack_4f0 & 0xffffffffffffff00);
      pplStack_4d8 = (long **)((ulong)pplStack_4d8 & 0xffffffffffffff00);
    }
    func_0x00010b248728();
    func_0x00010b248794();
    if ((bool)uVar8) {
      FUN_10b224c04(&ppplStack_4f0,&puStack_90);
      ppplStack_508 = ppplStack_4f0;
      ppplStack_500 = ppplStack_4e8;
      if (ppplStack_4f0 != ppplStack_4e8) {
        func_0x00010b2485c4();
        FUN_10b247128();
        ppplStack_508 = ppplStack_4f0;
        ppplStack_500 = ppplStack_4e8;
      }
      uStack_4f8 = pplStack_4e0;
      ppplStack_4f0 = (long ***)0x0;
      ppplStack_4e8 = (long ***)0x0;
      pplStack_4e0 = (long **)0x0;
      func_0x00010b248878();
    }
    else {
      FUN_10b224c04(&ppplStack_508,&puStack_470);
    }
  }
  else {
    func_0x00010b248794();
    ppuVar2 = &puStack_90;
    if (!bVar7) {
      ppuVar2 = &puStack_470;
    }
    FUN_10b224c04(&ppplStack_508,ppuVar2);
    lVar30 = (long)ppplStack_500 - (long)ppplStack_508;
    for (ppplVar29 = ppplStack_508; apuStack_78[0] = puVar34, ppplVar29 != ppplStack_500;
        ppplVar29 = ppplVar29 + 6) {
      ppplVar11 = ppplStack_500;
      if (puVar34 != (undefined *)(long)*(int *)(ppplVar29 + 3)) goto LAB_10b2452e4;
      lVar30 = lVar30 + -0x30;
    }
  }
  goto LAB_10b245450;
  while (ppplVar1 = ppplVar11 + -3, lVar30 = lVar30 + -0x30, ppplVar11 = ppplVar25,
        puVar34 != (undefined *)(long)*(int *)ppplVar1) {
LAB_10b2452e4:
    ppplVar25 = ppplVar11 + -6;
    if (ppplVar29 == ppplVar25) goto LAB_10b245450;
  }
  ppplStack_4f0 = (long ***)0x0;
  ppplStack_4e8 = (long ***)0x0;
  if (0x60 < lVar30) {
    FUN_10b24368c(&pplStack_540,lVar30 / 0x30 + 1);
    FUN_10b2436ec(&ppplStack_4f0,&pplStack_540);
    FUN_10b243934(&pplStack_540);
  }
  FUN_10b24822c(ppplVar29,ppplVar25,apuStack_78,lVar30 / 0x30 + 1,ppplStack_4f0,ppplStack_4e8);
  FUN_10b243934(&ppplStack_4f0);
LAB_10b245450:
  ppplStack_4e8 = (long ***)ppplStack_508[1];
  ppplStack_4f0 = (long ***)*ppplStack_508;
  pplStack_4d8 = ppplStack_508[3];
  pplStack_4e0 = ppplStack_508[2];
  pplStack_4c8 = ppplStack_508[5];
  pplStack_4d0 = ppplStack_508[4];
  for (plVar22 = (long *)*param_4; plVar22 != (long *)param_4[1]; plVar22 = plVar22 + 1) {
    bVar7 = *(int *)(*plVar22 + 0x20) == (int)ppplStack_4f0;
    if (bVar7) {
      func_0x00010b248794();
      pppplVar4 = &ppplStack_4f0;
      if (!bVar7) {
        pppplVar4 = extraout_x8_00;
      }
      pplStack_538 = (long **)pppplVar4[1];
      pplStack_540 = (long **)*pppplVar4;
      pplStack_528 = (long **)pppplVar4[3];
      pplStack_530 = (long **)pppplVar4[2];
      pplStack_518 = (long **)pppplVar4[5];
      pplStack_520 = (long **)pppplVar4[4];
      FUN_10b245854(param_2[6],param_7);
      func_0x00010b2488b8(auStack_5a8);
      func_0x00010b2488e8(*param_8);
      FUN_10b245a1c();
      FUN_10b22afe4(auStack_5a8);
      FUN_10b22ab40(param_1,plVar22);
      goto LAB_10b245580;
    }
  }
  func_0x00010b2488c8(param_2[6],param_7,*(undefined4 *)(*(long *)*param_4 + 0x20));
  func_0x00010b2488b8(auStack_610);
  func_0x00010b2488e8(*param_8);
  FUN_10b245a1c();
  FUN_10b22afe4(auStack_610);
  FUN_10b22ab40(param_1,*param_4);
LAB_10b245580:
  FUN_10b225f10(&ppplStack_508);
  FUN_10b246318(&pcStack_4b8);
  func_0x00010b2488b0();
  FUN_10b225f10(&piStack_458);
  FUN_10b24635c(&puStack_440);
LAB_10b2455a4:
  func_0x00010b2464f0(auStack_248);
  FUN_10b225f10(&puStack_90);
  return;
}



/* Entry: 10b245854; end: 10b245a1b;  */

void FUN_10b245854(long param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 uStack_1a8;
  int iStack_1a0;
  undefined4 *puStack_130;
  undefined1 auStack_128 [8];
  long lStack_120;
  long *plStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [48];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    puVar6 = param_5;
    func_0x0001059710c8(auStack_d8,&PTR_DAT_110cca678,param_2);
    __ZNSt3__19to_stringEi(auStack_108,param_3);
    func_0x00010b227c98(auStack_a8,&PTR_DAT_110cca680,auStack_108);
    if (((ulong)param_5 & 1) == 0) {
      func_0x000107c278b8(&lStack_120,&UNK_10f73aa7a);
      param_5 = puVar6;
    }
    else {
      __ZNSt3__19to_stringEi(&lStack_120,param_4);
      param_5 = puVar6;
    }
    func_0x00010b227c98(auStack_78,&PTR_s_optimalVariant_110cca688,&lStack_120);
    param_4 = (undefined8 *)(auStack_128 + 7);
    param_3 = (undefined8 *)0x3;
    func_0x000108992a94(auStack_f0,auStack_d8);
    lVar7 = 0x60;
    do {
      func_0x000107c278c0(auStack_d8 + lVar7);
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != -0x30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    param_2 = auStack_f0;
    FUN_10b23eda4(0x37,param_2);
    func_0x000108992e04();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_f0;
  func_0x000108992e04();
  func_0x00010b248870();
  if (puVar4 == (undefined1 *)0x0) {
    return;
  }
  func_0x00010b22ac0c();
  puVar4[0xdc] = 1;
  if ((*(ulong *)(puVar4 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x000107c30248(puVar4 + 0x88,param_2);
  if ((*(char *)(lStack_120 + 0x60) == '\x01') && (*(uint *)(lStack_120 + 0x5c) != 0)) {
    *(ulong *)(puVar4 + 0xd0) = (ulong)*(uint *)(lStack_120 + 0x5c);
  }
  puVar1 = (undefined4 *)param_4[1];
  for (puVar12 = (undefined4 *)*param_4; puVar12 != puVar1; puVar12 = puVar12 + 0xc) {
    func_0x000107c2845c(puVar4 + 0x10,*puVar12);
  }
  plVar5 = (long *)param_3[1];
  for (plVar8 = (long *)*param_3; plVar8 != plVar5; plVar8 = plVar8 + 1) {
    func_0x000107c2845c(puVar4 + 0x28,*(undefined4 *)(*plVar8 + 0x20));
  }
  puVar1 = (undefined4 *)param_5[1];
  for (puVar12 = (undefined4 *)*param_5; puVar12 != puVar1; puVar12 = puVar12 + 0xc) {
    func_0x000107c2845c(puVar4 + 0x40,*puVar12);
  }
  puVar1 = (undefined4 *)param_6[1];
  for (puVar12 = (undefined4 *)*param_6; puVar12 != puVar1; puVar12 = puVar12 + 0xc) {
    func_0x000107c2845c(puVar4 + 0x58,*puVar12);
  }
  puVar1 = (undefined4 *)param_7[1];
  for (puVar12 = (undefined4 *)*param_7; puVar12 != puVar1; puVar12 = puVar12 + 0xc) {
    func_0x000107c2845c(puVar4 + 0x70,*puVar12);
  }
  FUN_10b2241b4(&uStack_1a8,param_4,0);
  if ((*(ulong *)(puVar4 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x00010b2488c0(puVar4 + 0x98);
  func_0x00010b248744();
  *(undefined4 *)(puVar4 + 200) = *param_8;
  *(undefined4 *)(puVar4 + 0xcc) = *puStack_130;
  *(undefined4 *)(puVar4 + 0xe4) = puStack_130[4];
  *(undefined4 *)(puVar4 + 0xe8) = puStack_130[5];
  iVar3 = (int)puStack_130 + 0x1c;
  func_0x00010b24a534();
  *(int *)(puVar4 + 0xec) = iVar3;
  *(float *)(puVar4 + 0xf0) = (float)*(double *)(puStack_130 + 8);
  *(float *)(puVar4 + 0xf8) = (float)*(double *)(puStack_130 + 10);
  *(int *)(puVar4 + 0xd8) = (int)*(undefined8 *)(puStack_130 + 2);
  if ((*(ulong *)(puVar4 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x000107c30248(puVar4 + 0xa0,(long)auStack_128 + 0x18);
  *(int *)(puVar4 + 0xe0) = (int)*(undefined8 *)((long)auStack_128 + 0x30);
  *(int *)(puVar4 + 0xfc) = (int)*(undefined8 *)((long)auStack_128 + 0x60);
  if ((*(ulong *)(puVar4 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x000107c30248(puVar4 + 0xa8,(long)auStack_128 + 0x48);
  *(int *)(puVar4 + 0xf4) = (int)*(undefined8 *)((long)auStack_128 + 0x60);
  if (*(long *)((long)auStack_128 + 0xf0) != 0) {
    FUN_10b24a9f4(&uStack_1a8,*(undefined8 *)((long)auStack_128 + 0x110),param_6,
                  (long)auStack_128 + 0xd8);
    if ((*(ulong *)(puVar4 + 8) & 1) != 0) {
      func_0x00010b2486bc();
    }
    func_0x00010b2488c0(puVar4 + 0xb0);
    func_0x00010b248744();
  }
  uVar10 = *(ulong *)((long)auStack_128 + 0x120);
  if (-1 < (char)*(byte *)((long)auStack_128 + 0x12f)) {
    uVar10 = (ulong)*(byte *)((long)auStack_128 + 0x12f);
  }
  if (uVar10 != 0) {
    if ((*(ulong *)(puVar4 + 8) & 1) != 0) {
      func_0x00010b2486bc();
    }
    func_0x000107c30248(puVar4 + 0xc0,(long)auStack_128 + 0x118);
  }
  FUN_10b24ac08(&uStack_1a8,auStack_128,puStack_130);
  if ((*(ulong *)(puVar4 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x00010b2488c0(puVar4 + 0xb8);
  func_0x00010b248744();
  puVar12 = (undefined4 *)*plStack_118;
  if (puVar12 == (undefined4 *)0x0) {
    return;
  }
  if (*(char *)((long)auStack_128 + 0xb8) == '\x01') {
    lVar7 = *(long *)((long)auStack_128 + 0x90);
    if (0x7ffffffe < lVar7) {
      lVar7 = 0x7fffffff;
    }
    *puVar12 = (int)lVar7;
  }
  lVar7 = *(long *)((long)auStack_128 + 0xc0);
  lVar2 = *(long *)((long)auStack_128 + 200);
  if (lVar7 != lVar2) {
    plVar8 = (long *)(puVar12 + 2);
    lVar9 = *plVar8;
    uVar10 = lVar2 - lVar7;
    if ((ulong)(*(long *)(puVar12 + 6) - lVar9) < uVar10) {
      func_0x000107426f80(plVar8);
      plVar5 = plVar8;
      func_0x000107c27eb0(plVar8,(long)uVar10 >> 2);
      func_0x000107c27e00(plVar8,plVar5);
    }
    else {
      uVar11 = *(long *)(puVar12 + 4) - lVar9;
      if (uVar10 <= uVar11) {
        _memmove(lVar9,lVar7,uVar10);
        *(ulong *)(puVar12 + 4) = lVar9 + uVar10;
        goto LAB_10b245d64;
      }
      if (*(long *)(puVar12 + 4) != lVar9) {
        _memmove(lVar9,lVar7,uVar11);
      }
      lVar7 = lVar7 + uVar11;
    }
    FUN_10b247ee0(plVar8,lVar7,lVar2);
  }
LAB_10b245d64:
  if (*(char *)((long)auStack_128 + 0x1a8) == '\x01') {
    lVar7 = (long)auStack_128 + 0x180;
    func_0x00010b58da84(lVar7);
    func_0x000107c27fdc(&uStack_1a8,lVar7);
    FUN_10b4d1758((long)auStack_128 + 0x180,uStack_1a8,iStack_1a0 - (int)uStack_1a8);
    func_0x0001086554b0(*plStack_118 + 0x20,&uStack_1a8);
    func_0x000107c27914(&uStack_1a8);
  }
  return;
}



/* Entry: 10b245a1c; end: 10b245df3;  */

void FUN_10b245a1c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,
                  undefined4 *param_9,long param_10,long param_11,long *param_12)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uStack_78;
  int iStack_70;
  
  if (param_1 == 0) {
    return;
  }
  func_0x00010b22ac0c();
  *(undefined1 *)(param_1 + 0xdc) = 1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x000107c30248(param_1 + 0x88,param_2);
  if ((*(char *)(param_11 + 0x60) == '\x01') && (*(uint *)(param_11 + 0x5c) != 0)) {
    *(ulong *)(param_1 + 0xd0) = (ulong)*(uint *)(param_11 + 0x5c);
  }
  puVar1 = (undefined4 *)param_4[1];
  for (puVar10 = (undefined4 *)*param_4; puVar10 != puVar1; puVar10 = puVar10 + 0xc) {
    func_0x000107c2845c(param_1 + 0x10,*puVar10);
  }
  plVar4 = (long *)param_3[1];
  for (plVar6 = (long *)*param_3; plVar6 != plVar4; plVar6 = plVar6 + 1) {
    func_0x000107c2845c(param_1 + 0x28,*(undefined4 *)(*plVar6 + 0x20));
  }
  puVar1 = (undefined4 *)param_5[1];
  for (puVar10 = (undefined4 *)*param_5; puVar10 != puVar1; puVar10 = puVar10 + 0xc) {
    func_0x000107c2845c(param_1 + 0x40,*puVar10);
  }
  puVar1 = (undefined4 *)param_6[1];
  for (puVar10 = (undefined4 *)*param_6; puVar10 != puVar1; puVar10 = puVar10 + 0xc) {
    func_0x000107c2845c(param_1 + 0x58,*puVar10);
  }
  puVar1 = (undefined4 *)param_7[1];
  for (puVar10 = (undefined4 *)*param_7; puVar10 != puVar1; puVar10 = puVar10 + 0xc) {
    func_0x000107c2845c(param_1 + 0x70,*puVar10);
  }
  FUN_10b2241b4(&uStack_78,param_4,0);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x00010b2488c0(param_1 + 0x98);
  func_0x00010b248744();
  *(undefined4 *)(param_1 + 200) = *param_8;
  *(undefined4 *)(param_1 + 0xcc) = *param_9;
  *(undefined4 *)(param_1 + 0xe4) = param_9[4];
  *(undefined4 *)(param_1 + 0xe8) = param_9[5];
  iVar3 = (int)param_9 + 0x1c;
  func_0x00010b24a534();
  *(int *)(param_1 + 0xec) = iVar3;
  *(float *)(param_1 + 0xf0) = (float)*(double *)(param_9 + 8);
  *(float *)(param_1 + 0xf8) = (float)*(double *)(param_9 + 10);
  *(int *)(param_1 + 0xd8) = (int)*(undefined8 *)(param_9 + 2);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x000107c30248(param_1 + 0xa0,param_10 + 0x18);
  *(int *)(param_1 + 0xe0) = (int)*(undefined8 *)(param_10 + 0x30);
  *(int *)(param_1 + 0xfc) = (int)*(undefined8 *)(param_10 + 0x60);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x000107c30248(param_1 + 0xa8,param_10 + 0x48);
  *(int *)(param_1 + 0xf4) = (int)*(undefined8 *)(param_10 + 0x60);
  if (*(long *)(param_10 + 0xf0) != 0) {
    FUN_10b24a9f4(&uStack_78,*(undefined8 *)(param_10 + 0x110),param_6,param_10 + 0xd8);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b2486bc();
    }
    func_0x00010b2488c0(param_1 + 0xb0);
    func_0x00010b248744();
  }
  uVar8 = *(ulong *)(param_10 + 0x120);
  if (-1 < (char)*(byte *)(param_10 + 0x12f)) {
    uVar8 = (ulong)*(byte *)(param_10 + 0x12f);
  }
  if (uVar8 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b2486bc();
    }
    func_0x000107c30248(param_1 + 0xc0,param_10 + 0x118);
  }
  FUN_10b24ac08(&uStack_78,param_10,param_9);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b2486bc();
  }
  func_0x00010b2488c0(param_1 + 0xb8);
  func_0x00010b248744();
  puVar10 = (undefined4 *)*param_12;
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
  if (*(char *)(param_10 + 0xb8) == '\x01') {
    lVar5 = *(long *)(param_10 + 0x90);
    if (0x7ffffffe < lVar5) {
      lVar5 = 0x7fffffff;
    }
    *puVar10 = (int)lVar5;
  }
  lVar5 = *(long *)(param_10 + 0xc0);
  lVar2 = *(long *)(param_10 + 200);
  if (lVar5 != lVar2) {
    plVar6 = (long *)(puVar10 + 2);
    lVar7 = *plVar6;
    uVar8 = lVar2 - lVar5;
    if ((ulong)(*(long *)(puVar10 + 6) - lVar7) < uVar8) {
      func_0x000107426f80(plVar6);
      plVar4 = plVar6;
      func_0x000107c27eb0(plVar6,(long)uVar8 >> 2);
      func_0x000107c27e00(plVar6,plVar4);
    }
    else {
      uVar9 = *(long *)(puVar10 + 4) - lVar7;
      if (uVar8 <= uVar9) {
        _memmove(lVar7,lVar5,uVar8);
        *(ulong *)(puVar10 + 4) = lVar7 + uVar8;
        goto LAB_10b245d64;
      }
      if (*(long *)(puVar10 + 4) != lVar7) {
        _memmove(lVar7,lVar5,uVar9);
      }
      lVar5 = lVar5 + uVar9;
    }
    FUN_10b247ee0(plVar6,lVar5,lVar2);
  }
LAB_10b245d64:
  if (*(char *)(param_10 + 0x1a8) == '\x01') {
    lVar5 = param_10 + 0x180;
    func_0x00010b58da84(lVar5);
    func_0x000107c27fdc(&uStack_78,lVar5);
    FUN_10b4d1758(param_10 + 0x180,uStack_78,iStack_70 - (int)uStack_78);
    func_0x0001086554b0(*param_12 + 0x20,&uStack_78);
    func_0x000107c27914(&uStack_78);
  }
  return;
}



/* Entry: 10b245df4; end: 10b245e7f;  */

long FUN_10b245df4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  func_0x00010b24874c();
  if (lVar2 == 0) {
    func_0x00010b248754();
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(&uStack_48,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b245e68);
  (*pcVar1)();
}



/* Entry: 10b245e80; end: 10b245f0f;  */

void FUN_10b245e80(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  func_0x000107c35218();
  if (param_1 != 0) {
    do {
      func_0x000107c3521c();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b2485ec();
    }
  }
  return;
}



/* Entry: 10b245f10; end: 10b2462a3;  */

void FUN_10b245f10(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  ulong extraout_x8;
  long lVar7;
  ulong extraout_x9;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar16 = (ulong)(int)param_2[2];
  puVar6 = (ulong *)(param_1 + 1);
  uVar17 = *puVar6;
  param_2[1] = uVar16;
  if ((uVar17 == 0) || (*(float *)(param_1 + 4) * (float)uVar17 < (float)(param_1[3] + 1))) {
    bVar3 = 2 < uVar17;
    bVar4 = uVar17 == 3;
    func_0x00010b2488d4(uVar17 << 1);
    uVar15 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar15 = extraout_x9;
    }
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar17 = *puVar6;
    }
    if (uVar17 < uVar15) {
LAB_10b245fb4:
      FUN_10b18d720(puVar6,uVar15);
      FUN_10b125154(param_1,puVar6);
      param_1[1] = uVar15;
      lVar7 = *param_1;
      for (uVar17 = 0; uVar15 != uVar17; uVar17 = uVar17 + 1) {
        *(undefined8 *)(lVar7 + uVar17 * 8) = 0;
      }
      plVar9 = (long *)param_1[2];
      uVar17 = uVar15;
      if (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        uVar8 = uVar15 - 1;
        if ((uVar15 & uVar8) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar15 <= uVar11) {
          uVar12 = 0;
          if (uVar15 != 0) {
            uVar12 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar12 * uVar15;
        }
        *(long **)(lVar7 + uVar11 * 8) = param_1 + 2;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          uVar12 = plVar9[1];
          if ((uVar15 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar15 <= uVar12) {
            uVar1 = 0;
            if (uVar15 != 0) {
              uVar1 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar1 * uVar15;
          }
          if (uVar12 != uVar11) {
            plVar14 = plVar9;
            if (*(long *)(lVar7 + uVar12 * 8) == 0) {
              *(long **)(lVar7 + uVar12 * 8) = plVar10;
              uVar11 = uVar12;
            }
            else {
              do {
                plVar13 = plVar14;
                plVar14 = (long *)*plVar13;
                if (plVar14 == (long *)0x0) break;
              } while (*(int *)(plVar9 + 2) == *(int *)(plVar14 + 2));
              *plVar10 = (long)plVar14;
              *plVar13 = **(long **)(lVar7 + uVar12 * 8);
              **(long **)(lVar7 + uVar12 * 8) = (long)plVar9;
              plVar9 = plVar10;
            }
          }
        }
      }
    }
    else if (uVar15 < uVar17) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010b2486c8();
      }
      if (uVar15 <= uVar11) {
        uVar15 = uVar11;
      }
      if (uVar15 < uVar17) {
        if (uVar15 != 0) goto LAB_10b245fb4;
        FUN_10b125154(param_1,0);
        param_1[1] = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = *puVar6;
      }
    }
  }
  uVar15 = uVar17 - 1;
  if ((uVar17 & uVar15) == 0) {
    uVar11 = uVar15 & uVar16;
  }
  else {
    uVar11 = uVar16;
    if (uVar17 <= uVar16) {
      uVar11 = 0;
      if (uVar17 != 0) {
        uVar11 = uVar16 / uVar17;
      }
      uVar11 = uVar16 - uVar11 * uVar17;
    }
  }
  lVar7 = *param_1;
  plVar9 = *(long **)(lVar7 + uVar11 * 8);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar10 = plVar9;
      plVar9 = (long *)*plVar10;
      if (plVar9 == (long *)0x0) break;
      uVar8 = plVar9[1];
      if ((uVar17 & uVar15) == 0) {
        uVar12 = uVar8 & uVar15;
      }
      else {
        uVar12 = uVar8;
        if (uVar17 <= uVar8) {
          uVar12 = 0;
          if (uVar17 != 0) {
            uVar12 = uVar8 / uVar17;
          }
          uVar12 = uVar8 - uVar12 * uVar17;
        }
      }
      if (uVar12 != uVar11) break;
      if (uVar8 == uVar16) {
        bVar3 = (int)plVar9[2] == (int)param_2[2];
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  uVar16 = param_2[1];
  if ((uVar17 & uVar15) == 0) {
    uVar16 = uVar15 & uVar16;
    if (plVar10 == (long *)0x0) goto LAB_10b2461f8;
LAB_10b2461bc:
    *param_2 = *plVar10;
    *plVar10 = (long)param_2;
    if (*param_2 == 0) goto LAB_10b24624c;
    uVar11 = *(ulong *)(*param_2 + 8);
    if ((uVar17 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar17 <= uVar11) {
      uVar15 = 0;
      if (uVar17 != 0) {
        uVar15 = uVar11 / uVar17;
      }
      uVar11 = uVar11 - uVar15 * uVar17;
    }
    if (uVar11 == uVar16) goto LAB_10b24624c;
  }
  else {
    if (uVar17 <= uVar16) {
      uVar11 = 0;
      if (uVar17 != 0) {
        uVar11 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar11 * uVar17;
    }
    if (plVar10 != (long *)0x0) goto LAB_10b2461bc;
LAB_10b2461f8:
    plVar9 = param_1 + 2;
    *param_2 = *plVar9;
    *plVar9 = (long)param_2;
    *(long **)(lVar7 + uVar16 * 8) = plVar9;
    if (*param_2 == 0) goto LAB_10b24624c;
    uVar11 = *(ulong *)(*param_2 + 8);
    if ((uVar17 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar17 <= uVar11) {
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar11 / uVar17;
      }
      uVar11 = uVar11 - uVar16 * uVar17;
    }
  }
  *(long **)(lVar7 + uVar11 * 8) = param_2;
LAB_10b24624c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10b2462a4; end: 10b2462db;  */

undefined1 * FUN_10b2462a4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_10b2462dc();
  return param_1;
}



/* Entry: 10b2462dc; end: 10b2462ef;  */

void FUN_10b2462dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10b24630c();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10b2462f0; end: 10b24630b;  */

void FUN_10b2462f0(long param_1)

{
  FUN_10b24630c();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b24630c; end: 10b246317;  */

undefined8 * FUN_10b24630c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110d23898;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5d3ab8();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar3 = *(int *)(param_2 + 0x38);
  *(int *)(param_1 + 7) = iVar3;
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010b5d390c(0,*(undefined8 *)(param_2 + 0x18));
    iVar3 = *(int *)(param_1 + 7);
  }
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  if (iVar3 == 2) {
    uVar2 = 0;
    func_0x00010b5d39f0(0,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 1) goto LAB_10b5d2b40;
    uVar2 = 0;
    func_0x00010b5d3980(0,*(undefined8 *)(param_2 + 0x28));
  }
  param_1[5] = uVar2;
LAB_10b5d2b40:
  if (*(int *)((long)param_1 + 0x3c) == 5) {
    uVar2 = 0;
    FUN_10b5d3a60(0,*(undefined8 *)(param_2 + 0x30));
    param_1[6] = uVar2;
  }
  return param_1;
}



/* Entry: 10b246318; end: 10b24635b;  */

void FUN_10b246318(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b5d2b68();
  }
  return;
}



/* Entry: 10b24635c; end: 10b2463c3;  */

long FUN_10b24635c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x170);
  FUN_10b2463c4(param_1 + 0x138);
  func_0x000107c278a8(param_1 + 0x120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x108);
  FUN_10b2463e4(param_1 + 0xf0);
  func_0x000107c278a8(param_1 + 0xd8);
  FUN_10b246428(param_1 + 0xc0);
  FUN_10b2463e4(param_1 + 0xa8);
  FUN_10b246318(param_1 + 0x60);
  func_0x00010b5d81b4();
  FUN_10b5d75f4(param_1);
  return param_1;
}



/* Entry: 10b2463c4; end: 10b2463e3;  */

void FUN_10b2463c4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10b5d70b0();
  }
  return;
}



/* Entry: 10b2463e4; end: 10b24640f;  */

undefined8 FUN_10b2463e4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b246410(&uStack_28);
  return param_1;
}



/* Entry: 10b246410; end: 10b246427;  */

void FUN_10b246410(undefined8 *param_1)

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



/* Entry: 10b246428; end: 10b24648b;  */

undefined8 FUN_10b246428(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b246454(&uStack_28);
  return param_1;
}



/* Entry: 10b24648c; end: 10b246493;  */

void FUN_10b24648c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b2486e8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x00010b2464c8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b246494; end: 10b24654f;  */

void FUN_10b246494(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b2486e8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x00010b2464c8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b246550; end: 10b246597;  */

bool FUN_10b246550(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_2 + 0x18);
  bVar3 = SBORROW4(iVar1,iVar2);
  bVar4 = iVar1 - iVar2 < 0;
  bVar5 = false;
  if (iVar1 == iVar2) {
    dVar8 = *(double *)(param_1 + 0x20);
    if (0.0 < dVar8) {
      dVar9 = *(double *)(param_2 + 0x20);
      bVar3 = true;
      if ((0.0 < dVar9) && (bVar3 = false, !NAN(dVar8) && !NAN(dVar9))) {
        bVar3 = dVar8 == dVar9;
      }
      if (!bVar3) {
        bVar3 = NAN(dVar8) || NAN(dVar9);
        bVar5 = dVar8 == dVar9;
        bVar4 = dVar8 < dVar9;
        goto LAB_10b246590;
      }
    }
    lVar6 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_2 + 8);
    bVar3 = SBORROW8(lVar6,lVar7);
    bVar4 = lVar6 - lVar7 < 0;
    bVar5 = lVar6 == lVar7;
  }
LAB_10b246590:
  return !bVar5 && bVar4 == bVar3;
}



/* Entry: 10b246598; end: 10b246c2f;  */

/* WARNING: Possible PIC construction at 0x00010b246da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b246d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b246da8) */
/* WARNING: Removing unreachable block (ram,0x00010b246dbc) */
/* WARNING: Removing unreachable block (ram,0x00010b246de4) */
/* WARNING: Removing unreachable block (ram,0x00010b246df0) */
/* WARNING: Removing unreachable block (ram,0x00010b246df8) */
/* WARNING: Removing unreachable block (ram,0x00010b246e00) */
/* WARNING: Removing unreachable block (ram,0x00010b246d34) */
/* WARNING: Removing unreachable block (ram,0x00010b246d3c) */
/* WARNING: Removing unreachable block (ram,0x00010b246d48) */
/* WARNING: Removing unreachable block (ram,0x00010b246d50) */
/* WARNING: Removing unreachable block (ram,0x00010b246d58) */

void FUN_10b246598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,uint param_11)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 **ppuVar5;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  undefined8 *unaff_x20;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar23;
  undefined8 in_register_00005008;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 in_register_00005028;
  undefined8 uVar26;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 in_register_00005088;
  undefined8 uVar27;
  undefined8 in_register_000050a8;
  undefined1 auStack_1e0 [192];
  undefined8 *puStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 **ppuVar6;
  
  ppuVar6 = &puStack_d0;
  ppuVar5 = &puStack_d0;
LAB_10b2465d0:
  puVar9 = param_8 + -6;
  puStack_c8 = param_8 + -0xc;
  puStack_d0 = param_8 + -0x12;
  puVar10 = param_7;
LAB_10b2465e4:
  param_7 = puVar10;
  uVar19 = (long)param_8 - (long)param_7;
  uVar22 = (long)uVar19 / 0x30;
  puVar10 = param_7;
  switch(uVar22) {
  case 0:
  case 1:
    goto LAB_10b2468fc;
  case 2:
    func_0x00010b2485bc(*param_9);
    if ((int)puVar9 != 0) {
      func_0x00010b248574();
      func_0x00010b248824();
      func_0x00010b248638();
      func_0x00010b248738();
      func_0x00010b2486b0();
      func_0x00010b248610();
    }
    goto LAB_10b2468fc;
  case 3:
    puVar12 = param_7 + 6;
    puVar11 = puVar9;
    puVar8 = param_9;
    func_0x00010b2487a4();
    goto FUN_10b246c30;
  case 4:
    puVar12 = param_7 + 6;
    puVar14 = param_7 + 0xc;
    puVar15 = puVar9;
    puVar17 = param_9;
    func_0x00010b2487a4();
    break;
  case 5:
    puVar12 = param_7 + 6;
    puVar11 = param_7 + 0xc;
    puVar8 = param_7 + 0x12;
    puVar16 = puVar9;
    puVar18 = param_9;
    func_0x00010b2487a4();
    ppuVar6 = (undefined8 **)auStack_1e0;
    unaff_x29 = auStack_e0;
    puVar14 = puVar11;
    puVar15 = puVar8;
    puVar17 = puVar18;
    puStack_120 = unaff_x28;
    uStack_118 = uVar22;
    puStack_110 = param_8;
    puStack_108 = param_10;
    puStack_100 = puVar9;
    puStack_f8 = param_7;
    puStack_f0 = unaff_x20;
    puStack_e8 = param_9;
    func_0x00010b2486e8();
    unaff_x30 = 0x10b246da8;
    param_7 = puVar18;
    puVar9 = puVar11;
    param_10 = puVar8;
    param_8 = puVar16;
    break;
  default:
    goto code_r0x00010b2465f8;
  }
  ppuVar5 = (undefined8 **)((long)ppuVar6 + -0xd0);
  *(undefined8 **)((long)ppuVar6 + -0x40) = param_8;
  *(undefined8 **)((long)ppuVar6 + -0x38) = param_10;
  *(undefined8 **)((long)ppuVar6 + -0x30) = puVar9;
  *(undefined8 **)((long)ppuVar6 + -0x28) = param_7;
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = param_9;
  *(undefined1 **)((long)ppuVar6 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)ppuVar6 + -0x10);
  puVar11 = puVar14;
  puVar8 = puVar17;
  func_0x00010b2486e8();
  unaff_x30 = 0x10b246d34;
  param_7 = puVar17;
  puVar9 = puVar14;
  param_10 = puVar15;
FUN_10b246c30:
  iVar13 = (int)puVar12;
  *(undefined8 **)((long)ppuVar5 + -0x40) = param_8;
  *(undefined8 **)((long)ppuVar5 + -0x38) = param_10;
  *(undefined8 **)((long)ppuVar5 + -0x30) = puVar9;
  *(undefined8 **)((long)ppuVar5 + -0x28) = param_7;
  *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar5 + -0x18) = param_9;
  *(undefined1 **)((long)ppuVar5 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
  func_0x00010b2485bc(*puVar8);
  iVar7 = (int)puVar12;
  func_0x00010b248598(*puVar8);
  if (((ulong)puVar12 & 1) == 0) {
    if (iVar7 != 0) {
      func_0x00010b2484a0();
      func_0x00010b2486a4();
      func_0x00010b2485bc(*puVar8);
      if (iVar13 != 0) {
        func_0x00010b248574();
        func_0x00010b2485a4();
        puVar10[1] = in_register_000050a8;
        *puVar10 = param_6;
        puVar10[3] = in_register_00005088;
        puVar10[2] = param_5;
        puVar10[5] = in_register_00005068;
        puVar10[4] = param_4;
        func_0x00010b24858c();
      }
    }
  }
  else {
    if (iVar7 == 0) {
      func_0x00010b248574();
      func_0x00010b2485a4();
      puVar10[1] = in_register_000050a8;
      *puVar10 = param_6;
      puVar10[3] = in_register_00005088;
      puVar10[2] = param_5;
      puVar10[5] = in_register_00005068;
      puVar10[4] = param_4;
      func_0x00010b24858c();
      func_0x00010b248598(*puVar8);
      if (iVar7 == 0) {
        return;
      }
      func_0x00010b2484a0();
    }
    else {
      func_0x00010b248574();
      uVar26 = puVar11[3];
      uVar25 = puVar11[2];
      uVar24 = puVar11[5];
      uVar23 = puVar11[4];
      uVar27 = *puVar11;
      puVar10[1] = puVar11[1];
      *puVar10 = uVar27;
      puVar10[3] = uVar26;
      puVar10[2] = uVar25;
      puVar10[5] = uVar24;
      puVar10[4] = uVar23;
    }
    func_0x00010b2486a4();
  }
  return;
code_r0x00010b2465f8:
  if ((long)uVar19 < 0x480) {
    if ((param_11 & 1) == 0) {
      if (param_7 != param_8) {
        puVar10 = param_7 + -6;
        while (puVar9 = param_7 + 6, puVar9 != param_8) {
          puVar12 = puVar9;
          func_0x00010b2485bc(*param_9);
          if ((int)puVar12 != 0) {
            uStack_88 = param_7[7];
            uStack_90 = *puVar9;
            uStack_78 = param_7[9];
            uStack_80 = param_7[8];
            uStack_68 = param_7[0xb];
            uStack_70 = param_7[10];
            puVar12 = puVar10;
            do {
              puVar11 = puVar12;
              uVar26 = puVar11[9];
              uVar25 = puVar11[8];
              puVar11[0xd] = puVar11[7];
              puVar11[0xc] = puVar11[6];
              puVar11[0xf] = uVar26;
              puVar11[0xe] = uVar25;
              uVar24 = puVar11[0xb];
              uVar23 = puVar11[10];
              puVar11[0x11] = uVar24;
              puVar11[0x10] = uVar23;
              uVar22 = 0;
              func_0x00010b2485bc(*param_9);
              puVar12 = puVar11 + -6;
            } while ((uVar22 & 1) != 0);
            func_0x00010b2486b0();
            puVar11[9] = uVar26;
            puVar11[8] = uVar25;
            puVar11[0xb] = in_register_00005048;
            puVar11[10] = param_3;
            puVar11[7] = uVar24;
            puVar11[6] = uVar23;
          }
          puVar10 = puVar10 + 6;
          param_7 = puVar9;
        }
      }
      goto LAB_10b2468fc;
    }
    if (param_7 == param_8) goto LAB_10b2468fc;
    lVar21 = 0;
    goto LAB_10b2469c8;
  }
  if (param_10 == (undefined8 *)0x0) {
    if (param_7 == param_8) goto LAB_10b2468fc;
    uVar19 = uVar22 - 2 >> 1;
    puVar10 = param_7 + uVar19 * 6;
    do {
      FUN_10b246fc0(param_7,param_9,uVar22,puVar10);
      uVar19 = uVar19 - 1;
      puVar10 = puVar10 + -6;
    } while (-1 < (long)uVar19);
    do {
      if ((long)uVar22 < 2) goto LAB_10b2468fc;
      puStack_c8 = param_8;
      func_0x00010b248574(0);
      uVar19 = extraout_x8_01;
      puVar10 = param_7;
      uStack_c0 = param_1;
      uStack_b8 = in_register_00005008;
      uStack_b0 = param_2;
      uStack_a8 = in_register_00005028;
      uStack_a0 = param_3;
      uStack_98 = in_register_00005048;
      do {
        puVar9 = puVar10 + uVar19 * 6 + 6;
        uVar2 = uVar19 << 1 | 1;
        uVar1 = uVar19 * 2 + 2;
        puVar12 = puVar9;
        uVar4 = uVar2;
        if ((long)uVar1 < (long)uVar22) {
          puVar11 = puVar9;
          (*(code *)*param_9)(puVar9,puVar10 + uVar19 * 6 + 0xc);
          puVar12 = puVar10 + uVar19 * 6 + 0xc;
          uVar4 = uVar1;
          if ((int)puVar11 == 0) {
            puVar12 = puVar9;
            uVar4 = uVar2;
          }
        }
        uVar19 = uVar4;
        func_0x00010b248638();
        func_0x00010b248714();
        puVar9 = puStack_c8;
        puVar10 = puVar12;
      } while ((long)uVar19 <= (long)(extraout_x9 >> 1));
      param_8 = puStack_c8 + -6;
      if (puVar12 == param_8) {
        func_0x00010b2488fc();
        func_0x00010b248610();
      }
      else {
        in_register_00005008 = puStack_c8[-5];
        param_1 = *param_8;
        in_register_00005028 = puStack_c8[-3];
        param_2 = puStack_c8[-4];
        in_register_00005048 = puStack_c8[-1];
        param_3 = puStack_c8[-2];
        func_0x00010b248610();
        func_0x00010b2488fc();
        puVar9[-3] = in_register_00005028;
        puVar9[-4] = param_2;
        puVar9[-1] = in_register_00005048;
        puVar9[-2] = param_3;
        puVar9[-5] = in_register_00005008;
        *param_8 = param_1;
        uVar19 = (long)puVar12 + (0x30 - (long)param_7);
        if (0x30 < (long)uVar19) {
          uVar19 = uVar19 / 0x30 - 2 >> 1;
          puVar10 = param_7 + uVar19 * 6;
          (*(code *)*param_9)(puVar10,puVar12);
          if ((int)puVar10 != 0) {
            func_0x00010b248638();
            func_0x00010b248824();
            do {
              func_0x00010b248580();
              func_0x00010b248610();
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1 >> 1;
              func_0x00010b248868(*param_9);
            } while (((ulong)puVar10 & 1) != 0);
            func_0x00010b2486b0();
            func_0x00010b248714();
          }
        }
      }
      uVar22 = uVar22 - 1;
    } while( true );
  }
  unaff_x20 = param_7 + (uVar22 >> 1) * 6;
  if (uVar19 < 0x1801) {
    func_0x00010b248630(unaff_x20,param_7,puVar9);
  }
  else {
    func_0x00010b248630(param_7,unaff_x20,puVar9);
    func_0x00010b248630(param_7 + 6,unaff_x20 + -6,puStack_c8);
    func_0x00010b248630(param_7 + 0xc,unaff_x20 + 6,puStack_d0);
    func_0x00010b248630(unaff_x20 + -6,unaff_x20,unaff_x20 + 6);
    func_0x00010b248574();
    func_0x00010b248824();
    in_register_00005048 = unaff_x20[3];
    param_3 = unaff_x20[2];
    in_register_00005008 = unaff_x20[5];
    param_1 = unaff_x20[4];
    in_register_00005028 = unaff_x20[1];
    param_2 = *unaff_x20;
    param_7[3] = in_register_00005048;
    param_7[2] = param_3;
    param_7[5] = in_register_00005008;
    param_7[4] = param_1;
    param_7[1] = in_register_00005028;
    *param_7 = param_2;
    func_0x00010b2486b0();
    func_0x00010b2486a4();
  }
  param_10 = (undefined8 *)((long)param_10 + -1);
  if ((param_11 & 1) == 0) {
    puVar10 = param_7 + -6;
    func_0x00010b2485bc(*param_9);
    if (((ulong)puVar10 & 1) == 0) {
      func_0x00010b248574();
      puVar12 = &uStack_c0;
      uStack_c0 = param_1;
      uStack_b8 = in_register_00005008;
      uStack_b0 = param_2;
      uStack_a8 = in_register_00005028;
      uStack_a0 = param_3;
      uStack_98 = in_register_00005048;
      (*(code *)*param_9)(puVar12,puVar9);
      puVar10 = param_7;
      if (((ulong)puVar12 & 1) == 0) {
        do {
          puVar10 = puVar10 + 6;
          if (param_8 <= puVar10) break;
          func_0x00010b2484ec();
        } while ((int)puVar12 == 0);
      }
      else {
        do {
          puVar10 = puVar10 + 6;
          func_0x00010b2484ec();
        } while (((ulong)puVar12 & 1) == 0);
      }
      if (puVar10 < param_8) {
        do {
          func_0x00010b24861c();
        } while (((ulong)puVar12 & 1) != 0);
      }
      while (puVar10 < param_8) {
        func_0x00010b248824(*puVar10,puVar10[2],puVar10[4]);
        in_register_00005008 = param_8[1];
        param_1 = *param_8;
        in_register_00005028 = param_8[3];
        param_2 = param_8[2];
        in_register_00005048 = param_8[5];
        param_3 = param_8[4];
        puVar10[3] = in_register_00005028;
        puVar10[2] = param_2;
        puVar10[5] = in_register_00005048;
        puVar10[4] = param_3;
        puVar10[1] = in_register_00005008;
        *puVar10 = param_1;
        func_0x00010b2486b0();
        func_0x00010b248714();
        do {
          puVar10 = puVar10 + 6;
          func_0x00010b2484ec();
        } while ((int)puVar12 == 0);
        do {
          func_0x00010b24861c();
        } while (((ulong)puVar12 & 1) != 0);
      }
      if (param_7 != puVar10 + -6) {
        in_register_00005008 = puVar10[-5];
        param_1 = puVar10[-6];
        in_register_00005028 = puVar10[-3];
        param_2 = puVar10[-4];
        in_register_00005048 = puVar10[-1];
        param_3 = puVar10[-2];
        func_0x00010b248738();
      }
      param_11 = 0;
      func_0x00010b2488fc();
      extraout_x8[3] = in_register_00005028;
      extraout_x8[2] = param_2;
      extraout_x8[5] = in_register_00005048;
      extraout_x8[4] = param_3;
      extraout_x8[1] = in_register_00005008;
      *extraout_x8 = param_1;
      goto LAB_10b2465e4;
    }
  }
  lVar21 = 0;
  func_0x00010b248574();
  uStack_c0 = param_1;
  uStack_b8 = in_register_00005008;
  uStack_b0 = param_2;
  uStack_a8 = in_register_00005028;
  uStack_a0 = param_3;
  uStack_98 = in_register_00005048;
  do {
    lVar21 = lVar21 + 0x30;
    uVar22 = lVar21 + (long)param_7;
    (*(code *)*param_9)(uVar22,&uStack_c0);
  } while ((uVar22 & 1) != 0);
  puVar12 = (undefined8 *)((long)param_7 + lVar21);
  puVar11 = param_8;
  puVar10 = puVar12;
  if (lVar21 == 0x30) {
    do {
      unaff_x20 = puVar11;
      if (puVar11 <= puVar12) break;
      puVar11 = puVar11 + -6;
      func_0x00010b248868(*param_9);
      unaff_x20 = puVar11;
    } while ((uVar22 & 1) == 0);
  }
  else {
    do {
      puVar11 = puVar11 + -6;
      func_0x00010b248868(*param_9);
      unaff_x20 = puVar11;
    } while ((int)uVar22 == 0);
  }
  while (puVar10 < puVar11) {
    func_0x00010b248824(*puVar10,puVar10[2],puVar10[4]);
    in_register_00005008 = puVar11[1];
    param_1 = *puVar11;
    in_register_00005028 = puVar11[3];
    param_2 = puVar11[2];
    in_register_00005048 = puVar11[5];
    param_3 = puVar11[4];
    puVar10[3] = in_register_00005028;
    puVar10[2] = param_2;
    puVar10[5] = in_register_00005048;
    puVar10[4] = param_3;
    puVar10[1] = in_register_00005008;
    *puVar10 = param_1;
    func_0x00010b2486b0();
    puVar11[3] = in_register_00005028;
    puVar11[2] = param_2;
    puVar11[5] = in_register_00005048;
    puVar11[4] = param_3;
    puVar11[1] = in_register_00005008;
    *puVar11 = param_1;
    do {
      puVar10 = puVar10 + 6;
      puVar8 = puVar10;
      (*(code *)*param_9)(puVar10,&uStack_c0);
    } while (((ulong)puVar8 & 1) != 0);
    do {
      puVar11 = puVar11 + -6;
      puVar8 = puVar11;
      (*(code *)*param_9)(puVar11,&uStack_c0);
    } while (((ulong)puVar8 & 1) == 0);
  }
  unaff_x28 = puVar10 + -6;
  if (param_7 != unaff_x28) {
    in_register_00005008 = puVar10[-5];
    param_1 = *unaff_x28;
    in_register_00005028 = puVar10[-3];
    param_2 = puVar10[-4];
    in_register_00005048 = puVar10[-1];
    param_3 = puVar10[-2];
    func_0x00010b248738();
  }
  func_0x00010b2488fc();
  puVar10[-3] = in_register_00005028;
  puVar10[-4] = param_2;
  puVar10[-1] = in_register_00005048;
  puVar10[-2] = param_3;
  puVar10[-5] = in_register_00005008;
  *unaff_x28 = param_1;
  if (puVar12 < unaff_x20) goto LAB_10b2467e0;
  unaff_x20 = param_7;
  FUN_10b246e1c(param_7,unaff_x28,param_9);
  puVar12 = puVar10;
  FUN_10b246e1c(puVar10,param_8,param_9);
  if ((int)puVar12 == 0) goto code_r0x00010b2467dc;
  param_8 = unaff_x28;
  if (((ulong)unaff_x20 & 1) != 0) goto LAB_10b2468fc;
  goto LAB_10b2465d0;
LAB_10b2469c8:
  puVar9 = puVar10 + 6;
  if (puVar9 == param_8) {
LAB_10b2468fc:
    func_0x00010b2487a4(unaff_x30);
    return;
  }
  puVar12 = puVar9;
  (*(code *)*param_9)();
  if ((int)puVar12 != 0) {
    uStack_88 = puVar10[7];
    uStack_90 = *puVar9;
    uStack_78 = puVar10[9];
    uStack_80 = puVar10[8];
    uStack_68 = puVar10[0xb];
    uStack_70 = puVar10[10];
    lVar3 = lVar21;
    do {
      lVar20 = lVar3;
      puVar10 = (undefined8 *)((long)param_7 + lVar20);
      uVar26 = puVar10[3];
      uVar25 = puVar10[2];
      puVar10[7] = puVar10[1];
      puVar10[6] = *puVar10;
      puVar10[9] = uVar26;
      puVar10[8] = uVar25;
      uVar24 = puVar10[5];
      uVar23 = puVar10[4];
      puVar10[0xb] = uVar24;
      puVar10[10] = uVar23;
      puVar10 = param_7;
      if (lVar20 == 0) goto LAB_10b246a38;
      puVar10 = &uStack_90;
      (*(code *)*param_9)(puVar10,lVar20 + -0x30 + (long)param_7);
      lVar3 = lVar20 + -0x30;
    } while (((ulong)puVar10 & 1) != 0);
    puVar10 = (undefined8 *)((long)param_7 + lVar20);
LAB_10b246a38:
    func_0x00010b2486b0(puVar10);
    extraout_x8_00[3] = uVar26;
    extraout_x8_00[2] = uVar25;
    extraout_x8_00[5] = in_register_00005048;
    extraout_x8_00[4] = param_3;
    extraout_x8_00[1] = uVar24;
    *extraout_x8_00 = uVar23;
  }
  lVar21 = lVar21 + 0x30;
  puVar10 = puVar9;
  goto LAB_10b2469c8;
code_r0x00010b2467dc:
  if (((ulong)unaff_x20 & 1) == 0) {
LAB_10b2467e0:
    FUN_10b246598(param_7,unaff_x28,param_9,param_10,param_11 & 1);
    param_11 = 0;
  }
  goto LAB_10b2465e4;
}



/* Entry: 10b246c30; end: 10b246d6f;  */

void FUN_10b246c30(undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 in_d3;
  undefined8 uVar3;
  undefined8 in_register_00005068;
  undefined8 uVar4;
  undefined8 in_d4;
  undefined8 uVar5;
  undefined8 in_register_00005088;
  undefined8 uVar6;
  undefined8 in_d5;
  undefined8 uVar7;
  undefined8 in_register_000050a8;
  
  iVar2 = (int)param_2;
  func_0x00010b2485bc(*param_4);
  iVar1 = (int)param_2;
  func_0x00010b248598(*param_4);
  if ((param_2 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x00010b2484a0();
      func_0x00010b2486a4();
      func_0x00010b2485bc(*param_4);
      if (iVar2 != 0) {
        func_0x00010b248574();
        func_0x00010b2485a4();
        param_1[1] = in_register_000050a8;
        *param_1 = in_d5;
        param_1[3] = in_register_00005088;
        param_1[2] = in_d4;
        param_1[5] = in_register_00005068;
        param_1[4] = in_d3;
        func_0x00010b24858c();
      }
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x00010b248574();
      func_0x00010b2485a4();
      param_1[1] = in_register_000050a8;
      *param_1 = in_d5;
      param_1[3] = in_register_00005088;
      param_1[2] = in_d4;
      param_1[5] = in_register_00005068;
      param_1[4] = in_d3;
      func_0x00010b24858c();
      func_0x00010b248598(*param_4);
      if (iVar1 == 0) {
        return;
      }
      func_0x00010b2484a0();
    }
    else {
      func_0x00010b248574();
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      uVar4 = param_3[5];
      uVar3 = param_3[4];
      uVar7 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar7;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      param_1[5] = uVar4;
      param_1[4] = uVar3;
    }
    func_0x00010b2486a4();
  }
  return;
}



/* Entry: 10b246d70; end: 10b246e1b;  */

void FUN_10b246d70(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 *in_x5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x00010b2486e8();
  func_0x00010b246d04();
  puVar2 = in_x4;
  (*(code *)*in_x5)(in_x4,in_x3);
  iVar1 = (int)puVar2;
  if (iVar1 != 0) {
    uVar4 = in_x3[1];
    uVar3 = *in_x3;
    uVar6 = in_x3[3];
    uVar5 = in_x3[2];
    uVar8 = in_x3[5];
    uVar7 = in_x3[4];
    uVar12 = in_x4[3];
    uVar11 = in_x4[2];
    uVar10 = in_x4[5];
    uVar9 = in_x4[4];
    uVar13 = *in_x4;
    in_x3[1] = in_x4[1];
    *in_x3 = uVar13;
    in_x3[3] = uVar12;
    in_x3[2] = uVar11;
    in_x3[5] = uVar10;
    in_x3[4] = uVar9;
    in_x4[3] = uVar6;
    in_x4[2] = uVar5;
    in_x4[5] = uVar8;
    in_x4[4] = uVar7;
    in_x4[1] = uVar4;
    *in_x4 = uVar3;
    func_0x00010b2486f4();
    if (iVar1 != 0) {
      func_0x00010b24847c();
      func_0x00010b248704();
      if ((iVar1 != 0) && (func_0x00010b2484bc(), iVar1 != 0)) {
        func_0x00010b248460();
        func_0x00010b24858c();
      }
    }
  }
  return;
}



/* Entry: 10b246e1c; end: 10b246fbf;  */

bool FUN_10b246e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar2 = param_4;
  func_0x00010b2485c4();
  iVar7 = 1;
  switch(extraout_x8) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b248598(*param_6);
    if (iVar7 != 0) {
      func_0x00010b2484a0();
      param_5[-3] = in_register_00005028;
      param_5[-4] = param_2;
      param_5[-1] = in_register_00005048;
      param_5[-2] = param_3;
      param_5[-5] = in_register_00005008;
      param_5[-6] = param_1;
      return true;
    }
    break;
  case 3:
    func_0x00010b248914();
    FUN_10b246c30();
    break;
  case 4:
    func_0x00010b248908();
    func_0x00010b246d04(param_4);
    break;
  case 5:
    func_0x00010b248908();
    FUN_10b246d70(param_4);
    break;
  default:
    func_0x00010b248914();
    FUN_10b246c30();
    lVar6 = 0;
    iVar7 = 0;
    for (puVar3 = param_4 + 0x12; puVar3 != param_5; puVar3 = puVar3 + 6) {
      func_0x00010b2485b0(*param_6);
      if ((int)puVar2 != 0) {
        uStack_a8 = puVar3[1];
        uStack_b0 = *puVar3;
        uStack_98 = puVar3[3];
        uStack_a0 = puVar3[2];
        uStack_88 = puVar3[5];
        uStack_90 = puVar3[4];
        lVar1 = lVar6;
        do {
          lVar5 = lVar1;
          *(undefined8 *)((long)param_4 + lVar5 + 0x98) =
               *(undefined8 *)((long)param_4 + lVar5 + 0x68);
          *(undefined8 *)((long)param_4 + lVar5 + 0x90) =
               *(undefined8 *)((long)param_4 + lVar5 + 0x60);
          *(undefined8 *)((long)param_4 + lVar5 + 0xa8) =
               *(undefined8 *)((long)param_4 + lVar5 + 0x78);
          *(undefined8 *)((long)param_4 + lVar5 + 0xa0) =
               *(undefined8 *)((long)param_4 + lVar5 + 0x70);
          *(undefined8 *)((long)param_4 + lVar5 + 0xb8) =
               *(undefined8 *)((long)param_4 + lVar5 + 0x88);
          *(undefined8 *)((long)param_4 + lVar5 + 0xb0) =
               *(undefined8 *)((long)param_4 + lVar5 + 0x80);
          puVar4 = param_4;
          if (lVar5 == -0x60) goto LAB_10b246f50;
          puVar2 = &uStack_b0;
          (*(code *)*param_6)(&uStack_b0,(undefined1 *)((long)param_4 + lVar5 + 0x30));
          lVar1 = lVar5 + -0x30;
        } while (((ulong)puVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_4 + lVar5 + 0x60);
LAB_10b246f50:
        puVar4[1] = uStack_a8;
        *puVar4 = uStack_b0;
        puVar4[3] = uStack_98;
        puVar4[2] = uStack_a0;
        puVar4[5] = uStack_88;
        puVar4[4] = uStack_90;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return puVar3 + 6 == param_5;
        }
      }
      lVar6 = lVar6 + 0x30;
    }
  }
  return true;
}



/* Entry: 10b246fc0; end: 10b247107;  */

void FUN_10b246fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,long param_6,undefined8 *param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_register_00005048;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (1 < param_6) {
    lVar3 = ((long)param_7 - (long)param_4) / 0x30;
    uVar8 = param_6 - 2U >> 1;
    if (lVar3 <= (long)uVar8) {
      uVar2 = lVar3 << 1 | 1;
      puVar6 = param_4 + uVar2 * 6;
      uVar1 = lVar3 * 2 + 2;
      puVar5 = param_4;
      puVar7 = puVar6;
      uVar9 = uVar2;
      if ((long)uVar1 < param_6) {
        puVar5 = puVar6;
        (*(code *)*param_5)(puVar6,puVar6 + 6);
        puVar7 = puVar6 + 6;
        uVar9 = uVar1;
        if ((int)puVar5 == 0) {
          puVar7 = puVar6;
          uVar9 = uVar2;
        }
      }
      func_0x00010b2485b0(*param_5);
      if (((ulong)puVar5 & 1) == 0) {
        uStack_88 = param_7[1];
        uStack_90 = *param_7;
        uVar13 = param_7[3];
        uVar12 = param_7[2];
        uVar11 = param_7[5];
        uVar10 = param_7[4];
        uStack_80 = uVar12;
        uStack_78 = uVar13;
        uStack_70 = uVar10;
        uStack_68 = uVar11;
        do {
          puVar6 = puVar7;
          iVar4 = (int)puVar5;
          func_0x00010b248638();
          param_7[3] = uVar13;
          param_7[2] = uVar12;
          param_7[5] = in_register_00005048;
          param_7[4] = param_3;
          param_7[1] = uVar11;
          *param_7 = uVar10;
          if ((long)uVar8 < (long)uVar9) break;
          uVar2 = uVar9 << 1 | 1;
          puVar5 = param_4 + uVar2 * 6;
          uVar1 = uVar9 * 2 + 2;
          puVar7 = puVar5;
          uVar9 = uVar2;
          if ((long)uVar1 < param_6) {
            func_0x00010b2485b0(*param_5);
            puVar7 = puVar5 + 6;
            uVar9 = uVar1;
            if (iVar4 == 0) {
              puVar7 = puVar5;
              uVar9 = uVar2;
            }
          }
          puVar5 = puVar7;
          (*(code *)*param_5)(puVar7,&uStack_90);
          param_7 = puVar6;
        } while ((int)puVar5 == 0);
        puVar6[3] = uStack_78;
        puVar6[2] = uStack_80;
        puVar6[5] = uStack_68;
        puVar6[4] = uStack_70;
        puVar6[1] = uStack_88;
        *puVar6 = uStack_90;
      }
    }
  }
  return;
}



/* Entry: 10b247108; end: 10b247127;  */

void FUN_10b247108(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b225f10();
  }
  return;
}



/* Entry: 10b247128; end: 10b247a8b;  */

void FUN_10b247128(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  uint uVar13;
  int extraout_w8_09;
  int extraout_w8_10;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  int extraout_w9_08;
  ulong uVar15;
  undefined8 *extraout_x9;
  ulong uVar16;
  long extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 *extraout_x9_02;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  ulong extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *puVar17;
  undefined8 *extraout_x10_01;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  ulong extraout_x11_01;
  undefined8 *extraout_x11_02;
  undefined8 *extraout_x11_03;
  undefined8 *extraout_x11_04;
  long extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *extraout_x12_01;
  ulong extraout_x12_02;
  ulong uVar18;
  uint extraout_w13;
  uint extraout_w13_00;
  undefined8 *extraout_x13;
  undefined8 *extraout_x13_00;
  ulong extraout_x13_01;
  int extraout_w14;
  int extraout_w14_00;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x30;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010b2486e8();
  do {
    puVar19 = unaff_x19 + -6;
    puVar12 = unaff_x20;
LAB_10b24716c:
    unaff_x20 = puVar12;
    uVar15 = (long)unaff_x19 - (long)unaff_x20;
    uVar18 = (long)uVar15 / 0x30;
    switch(uVar18) {
    case 0:
    case 1:
      goto LAB_10b247558;
    case 2:
      bVar1 = *(int *)(unaff_x19 + -4) < *(int *)(unaff_x20 + 2);
      if (*(int *)((long)unaff_x19 - 0x14) != *(int *)((long)unaff_x20 + 0x1c)) {
        bVar1 = *(int *)((long)unaff_x19 - 0x14) < *(int *)((long)unaff_x20 + 0x1c);
      }
      if (bVar1) {
        func_0x00010b248580();
        func_0x00010b248848();
        uVar23 = unaff_x19[-5];
        uVar20 = unaff_x19[-6];
        uVar24 = unaff_x19[-3];
        uVar21 = unaff_x19[-4];
        uVar22 = unaff_x19[-1];
        uVar25 = unaff_x19[-2];
        func_0x00010b2486a4();
        func_0x00010b248778();
        unaff_x19[-3] = uVar24;
        unaff_x19[-4] = uVar21;
        unaff_x19[-1] = uVar22;
        unaff_x19[-2] = uVar25;
        unaff_x19[-5] = uVar23;
        unaff_x19[-6] = uVar20;
      }
      goto LAB_10b247558;
    case 3:
      puVar12 = unaff_x20 + 6;
      func_0x00010b2487c0();
      iVar7 = *(int *)((long)puVar12 + 0x1c);
      bVar1 = *(int *)(puVar12 + 2) < *(int *)(unaff_x20 + 2);
      if (iVar7 != *(int *)((long)unaff_x20 + 0x1c)) {
        bVar1 = iVar7 < *(int *)((long)unaff_x20 + 0x1c);
      }
      bVar2 = *(int *)(puVar19 + 2) < *(int *)(puVar12 + 2);
      if (*(int *)((long)puVar19 + 0x1c) != iVar7) {
        bVar2 = *(int *)((long)puVar19 + 0x1c) < iVar7;
      }
      if (bVar1) {
        if (bVar2) {
          uVar23 = unaff_x20[1];
          uVar20 = *unaff_x20;
          uVar24 = unaff_x20[3];
          uVar21 = unaff_x20[2];
          uVar22 = unaff_x20[5];
          uVar25 = unaff_x20[4];
          uVar29 = puVar19[3];
          uVar28 = puVar19[2];
          uVar27 = puVar19[5];
          uVar26 = puVar19[4];
          uVar30 = *puVar19;
          unaff_x20[1] = puVar19[1];
          *unaff_x20 = uVar30;
          unaff_x20[3] = uVar29;
          unaff_x20[2] = uVar28;
          unaff_x20[5] = uVar27;
          unaff_x20[4] = uVar26;
        }
        else {
          func_0x00010b248934();
          bVar1 = *(int *)(puVar19 + 2) < *(int *)(puVar12 + 2);
          if (*(int *)((long)puVar19 + 0x1c) != *(int *)((long)puVar12 + 0x1c)) {
            bVar1 = *(int *)((long)puVar19 + 0x1c) < *(int *)((long)puVar12 + 0x1c);
          }
          if (!bVar1) {
            return;
          }
          uVar23 = puVar12[1];
          uVar20 = *puVar12;
          uVar24 = puVar12[3];
          uVar21 = puVar12[2];
          uVar22 = puVar12[5];
          uVar25 = puVar12[4];
          uVar29 = puVar19[3];
          uVar28 = puVar19[2];
          uVar27 = puVar19[5];
          uVar26 = puVar19[4];
          uVar30 = *puVar19;
          puVar12[1] = puVar19[1];
          *puVar12 = uVar30;
          puVar12[3] = uVar29;
          puVar12[2] = uVar28;
          puVar12[5] = uVar27;
          puVar12[4] = uVar26;
        }
        puVar19[3] = uVar24;
        puVar19[2] = uVar21;
        puVar19[5] = uVar22;
        puVar19[4] = uVar25;
        puVar19[1] = uVar23;
        *puVar19 = uVar20;
      }
      else if (bVar2) {
        uVar23 = puVar12[1];
        uVar20 = *puVar12;
        uVar24 = puVar12[3];
        uVar21 = puVar12[2];
        uVar22 = puVar12[5];
        uVar25 = puVar12[4];
        uVar29 = puVar19[3];
        uVar28 = puVar19[2];
        uVar27 = puVar19[5];
        uVar26 = puVar19[4];
        uVar30 = *puVar19;
        puVar12[1] = puVar19[1];
        *puVar12 = uVar30;
        puVar12[3] = uVar29;
        puVar12[2] = uVar28;
        puVar12[5] = uVar27;
        puVar12[4] = uVar26;
        puVar19[3] = uVar24;
        puVar19[2] = uVar21;
        puVar19[5] = uVar22;
        puVar19[4] = uVar25;
        puVar19[1] = uVar23;
        *puVar19 = uVar20;
        bVar1 = *(int *)(puVar12 + 2) < *(int *)(unaff_x20 + 2);
        if (*(int *)((long)puVar12 + 0x1c) != *(int *)((long)unaff_x20 + 0x1c)) {
          bVar1 = *(int *)((long)puVar12 + 0x1c) < *(int *)((long)unaff_x20 + 0x1c);
        }
        if (bVar1) {
          func_0x00010b248934();
        }
      }
      return;
    case 4:
      func_0x00010b2487c0(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc,puVar19);
      func_0x00010b2486e8();
      FUN_10b247a8c();
      func_0x00010b24875c();
      uVar13 = extraout_w10;
      if (extraout_w8_05 != extraout_w9_03) {
        uVar13 = (uint)(extraout_w8_05 < extraout_w9_03);
      }
      if (uVar13 == 1) {
        func_0x00010b248538();
        uVar13 = extraout_w10_00;
        if (extraout_w8_06 != extraout_w9_04) {
          uVar13 = (uint)(extraout_w8_06 < extraout_w9_04);
        }
        if (uVar13 == 1) {
          func_0x00010b2484fc();
          uVar13 = extraout_w10_01;
          if (extraout_w8_07 != extraout_w9_05) {
            uVar13 = (uint)(extraout_w8_07 < extraout_w9_05);
          }
          if (uVar13 == 1) {
            func_0x00010b248460();
            func_0x00010b24858c();
          }
        }
      }
      return;
    case 5:
      puVar12 = unaff_x20 + 0x12;
      func_0x00010b2487c0(unaff_x20,unaff_x20 + 6,unaff_x20 + 0xc);
      func_0x00010b2486e8();
      FUN_10b247bb4();
      bVar1 = *(int *)(puVar19 + 2) < *(int *)(puVar12 + 2);
      if (*(int *)((long)puVar19 + 0x1c) != *(int *)((long)puVar12 + 0x1c)) {
        bVar1 = *(int *)((long)puVar19 + 0x1c) < *(int *)((long)puVar12 + 0x1c);
      }
      if (bVar1) {
        func_0x00010b24847c();
        func_0x00010b24875c();
        uVar13 = extraout_w10_02;
        if (extraout_w8_08 != extraout_w9_06) {
          uVar13 = (uint)(extraout_w8_08 < extraout_w9_06);
        }
        if (uVar13 == 1) {
          func_0x00010b248538();
          uVar13 = extraout_w10_03;
          if (extraout_w8_09 != extraout_w9_07) {
            uVar13 = (uint)(extraout_w8_09 < extraout_w9_07);
          }
          if (uVar13 == 1) {
            func_0x00010b2484fc();
            uVar13 = extraout_w10_04;
            if (extraout_w8_10 != extraout_w9_08) {
              uVar13 = (uint)(extraout_w8_10 < extraout_w9_08);
            }
            if (uVar13 == 1) {
              func_0x00010b248460();
              func_0x00010b24858c();
            }
          }
        }
      }
      return;
    }
    if ((long)uVar15 < 0x480) {
      if ((param_4 & 1) == 0) {
        puVar12 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            unaff_x20 = unaff_x20 + 6;
            if (puVar12 + 6 == unaff_x19) break;
            iVar7 = *(int *)((long)puVar12 + 0x4c);
            iVar8 = *(int *)(puVar12 + 8);
            bVar1 = iVar8 < *(int *)(puVar12 + 2);
            if (iVar7 != *(int *)((long)puVar12 + 0x1c)) {
              bVar1 = iVar7 < *(int *)((long)puVar12 + 0x1c);
            }
            puVar12 = puVar12 + 6;
            if (bVar1) {
              do {
                unaff_x20[1] = unaff_x20[-5];
                *unaff_x20 = unaff_x20[-6];
                unaff_x20[3] = unaff_x20[-3];
                unaff_x20[2] = unaff_x20[-4];
                unaff_x20[5] = unaff_x20[-1];
                unaff_x20[4] = unaff_x20[-2];
                piVar3 = (int *)((long)unaff_x20 - 0x44);
                piVar4 = (int *)(unaff_x20 + -10);
                unaff_x20 = unaff_x20 + -6;
                bVar1 = iVar8 < *piVar4;
                if (iVar7 != *piVar3) {
                  bVar1 = iVar7 < *piVar3;
                }
              } while (bVar1);
              func_0x00010b248664();
              puVar12 = extraout_x9_02;
              unaff_x20 = extraout_x8_03;
            }
          }
        }
        break;
      }
      if (unaff_x20 == unaff_x19) break;
      lVar14 = 0;
      puVar12 = unaff_x20;
      goto LAB_10b24763c;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) break;
      uVar16 = uVar18 - 2 >> 1;
      uVar15 = uVar16;
      goto LAB_10b247704;
    }
    puVar12 = unaff_x20 + (uVar18 >> 1) * 6;
    if (uVar15 < 0x1801) {
      FUN_10b247a8c(puVar12,unaff_x20,puVar19);
    }
    else {
      FUN_10b247a8c(unaff_x20,puVar12,puVar19);
      FUN_10b247a8c(unaff_x20 + 6,puVar12 + -6,unaff_x19 + -0xc);
      FUN_10b247a8c(unaff_x20 + 0xc,puVar12 + 6,unaff_x19 + -0x12);
      FUN_10b247a8c(puVar12 + -6,puVar12,puVar12 + 6);
      func_0x00010b248580();
      func_0x00010b248848();
      uVar25 = puVar12[2];
      uVar23 = puVar12[5];
      uVar20 = puVar12[4];
      uVar24 = puVar12[1];
      uVar21 = *puVar12;
      unaff_x20[3] = puVar12[3];
      unaff_x20[2] = uVar25;
      unaff_x20[5] = uVar23;
      unaff_x20[4] = uVar20;
      unaff_x20[1] = uVar24;
      *unaff_x20 = uVar21;
      func_0x00010b248778();
      func_0x00010b248714();
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      bVar1 = *(int *)(unaff_x20 + -4) < *(int *)(unaff_x20 + 2);
      if (*(int *)((long)unaff_x20 - 0x14) != *(int *)((long)unaff_x20 + 0x1c)) {
        bVar1 = *(int *)((long)unaff_x20 - 0x14) < *(int *)((long)unaff_x20 + 0x1c);
      }
      if (!bVar1) {
        func_0x00010b2487dc();
        bVar1 = extraout_w9_01 < *(int *)(unaff_x19 + -4);
        if (extraout_w8_03 != *(int *)((long)unaff_x19 - 0x14)) {
          bVar1 = extraout_w8_03 < *(int *)((long)unaff_x19 - 0x14);
        }
        puVar17 = unaff_x20;
        if (bVar1) {
          do {
            puVar12 = puVar17 + 6;
            bVar1 = extraout_w9_01 < *(int *)(puVar17 + 8);
            if (extraout_w8_03 != *(int *)((long)puVar17 + 0x4c)) {
              bVar1 = extraout_w8_03 < *(int *)((long)puVar17 + 0x4c);
            }
            puVar17 = puVar12;
          } while (!bVar1);
        }
        else {
          do {
            puVar12 = puVar17 + 6;
            if (unaff_x19 <= puVar12) break;
            bVar1 = extraout_w9_01 < *(int *)(puVar17 + 8);
            if (extraout_w8_03 != *(int *)((long)puVar17 + 0x4c)) {
              bVar1 = extraout_w8_03 < *(int *)((long)puVar17 + 0x4c);
            }
            puVar17 = puVar12;
          } while (!bVar1);
        }
        puVar17 = unaff_x19;
        puVar9 = unaff_x19;
        if (puVar12 < unaff_x19) {
          do {
            puVar17 = puVar9 + -6;
            bVar1 = extraout_w9_01 < *(int *)(puVar9 + -4);
            if (extraout_w8_03 != *(int *)((long)puVar9 - 0x14)) {
              bVar1 = extraout_w8_03 < *(int *)((long)puVar9 - 0x14);
            }
            puVar9 = puVar17;
          } while (bVar1);
        }
        while (puVar12 < puVar17) {
          func_0x00010b248848(*puVar12,puVar12[2],puVar12[4]);
          uVar23 = extraout_x11_02[1];
          uVar20 = *extraout_x11_02;
          uVar24 = extraout_x11_02[3];
          uVar21 = extraout_x11_02[2];
          uVar22 = extraout_x11_02[5];
          uVar25 = extraout_x11_02[4];
          func_0x00010b248714();
          func_0x00010b248778();
          extraout_x11_03[3] = uVar24;
          extraout_x11_03[2] = uVar21;
          extraout_x11_03[5] = uVar22;
          extraout_x11_03[4] = uVar25;
          extraout_x11_03[1] = uVar23;
          *extraout_x11_03 = uVar20;
          do {
            piVar3 = (int *)((long)puVar12 + 0x4c);
            piVar4 = (int *)(puVar12 + 8);
            puVar12 = puVar12 + 6;
            bVar1 = extraout_w9_02 < *piVar4;
            if (extraout_w8_04 != *piVar3) {
              bVar1 = extraout_w8_04 < *piVar3;
            }
            puVar17 = extraout_x11_03;
          } while (!bVar1);
          do {
            piVar3 = (int *)((long)puVar17 - 0x14);
            piVar4 = (int *)(puVar17 + -4);
            puVar17 = puVar17 + -6;
            bVar1 = extraout_w9_02 < *piVar4;
            if (extraout_w8_04 != *piVar3) {
              bVar1 = extraout_w8_04 < *piVar3;
            }
          } while (bVar1);
        }
        puVar17 = puVar12 + -6;
        if (unaff_x20 != puVar17) {
          func_0x00010b2486a4(*puVar17,puVar12[-4],puVar12[-2]);
          puVar17 = extraout_x11_04;
        }
        param_4 = 0;
        puVar17[1] = uStack_68;
        *puVar17 = uStack_70;
        func_0x00010b2487f4();
        goto LAB_10b24716c;
      }
    }
    func_0x00010b2487dc();
    lVar14 = extraout_x12;
    do {
      iVar7 = *(int *)((long)unaff_x20 + lVar14 + 0x4c);
      bVar1 = *(int *)((long)unaff_x20 + lVar14 + 0x40) < extraout_w9;
      if (iVar7 != extraout_w8) {
        bVar1 = iVar7 < extraout_w8;
      }
      lVar14 = lVar14 + 0x30;
    } while (bVar1);
    puVar12 = (undefined8 *)((long)unaff_x20 + lVar14);
    puVar17 = unaff_x19;
    if (lVar14 == 0x30) {
      do {
        if (puVar17 <= puVar12) break;
        func_0x00010b24880c();
        uVar13 = extraout_w13_00;
        if (extraout_w14_00 != extraout_w8_01) {
          uVar13 = (uint)(extraout_w14_00 < extraout_w8_01);
        }
        puVar12 = extraout_x11_00;
        puVar17 = extraout_x12_01;
      } while ((uVar13 & 1) == 0);
    }
    else {
      do {
        func_0x00010b24880c();
        uVar13 = extraout_w13;
        if (extraout_w14 != extraout_w8_00) {
          uVar13 = (uint)(extraout_w14 < extraout_w8_00);
        }
        puVar17 = extraout_x12_00;
        puVar12 = extraout_x11;
      } while (uVar13 != 1);
    }
    while (puVar12 < puVar17) {
      func_0x00010b248848(*puVar12,puVar12[2],puVar12[4]);
      uVar23 = extraout_x13[1];
      uVar20 = *extraout_x13;
      uVar24 = extraout_x13[3];
      uVar21 = extraout_x13[2];
      uVar22 = extraout_x13[5];
      uVar25 = extraout_x13[4];
      func_0x00010b248714();
      func_0x00010b248778();
      extraout_x13_00[3] = uVar24;
      extraout_x13_00[2] = uVar21;
      extraout_x13_00[5] = uVar22;
      extraout_x13_00[4] = uVar25;
      extraout_x13_00[1] = uVar23;
      *extraout_x13_00 = uVar20;
      do {
        piVar3 = (int *)((long)puVar12 + 0x4c);
        piVar4 = (int *)(puVar12 + 8);
        puVar12 = puVar12 + 6;
        bVar1 = *piVar4 < extraout_w9_00;
        if (*piVar3 != extraout_w8_02) {
          bVar1 = *piVar3 < extraout_w8_02;
        }
        puVar17 = extraout_x13_00;
      } while (bVar1);
      do {
        piVar3 = (int *)((long)puVar17 - 0x14);
        piVar4 = (int *)(puVar17 + -4);
        puVar17 = puVar17 + -6;
        bVar1 = *piVar4 < extraout_w9_00;
        if (*piVar3 != extraout_w8_02) {
          bVar1 = *piVar3 < extraout_w8_02;
        }
      } while (!bVar1);
    }
    puVar17 = puVar12 + -6;
    if (unaff_x20 != puVar17) {
      func_0x00010b2486a4(*puVar17,puVar12[-4],puVar12[-2]);
    }
    puVar12[-5] = uStack_68;
    *puVar17 = uStack_70;
    func_0x00010b2487f4();
    if (extraout_x11_01 < extraout_x12_02) goto LAB_10b2473ac;
    puVar9 = unaff_x20;
    FUN_10b247d00(unaff_x20,puVar17);
    puVar10 = puVar12;
    FUN_10b247d00(puVar12,unaff_x19);
    if ((int)puVar10 == 0) goto code_r0x00010b2473a8;
    unaff_x19 = puVar17;
  } while (((ulong)puVar9 & 1) == 0);
  goto LAB_10b247558;
LAB_10b24763c:
  puVar19 = puVar12 + 6;
  if (puVar19 == unaff_x19) goto LAB_10b247558;
  iVar7 = *(int *)((long)puVar12 + 0x4c);
  iVar8 = *(int *)(puVar12 + 8);
  bVar1 = iVar8 < *(int *)(puVar12 + 2);
  if (iVar7 != *(int *)((long)puVar12 + 0x1c)) {
    bVar1 = iVar7 < *(int *)((long)puVar12 + 0x1c);
  }
  if (bVar1) {
    do {
      puVar12 = (undefined8 *)((long)unaff_x20 + lVar14);
      puVar12[7] = puVar12[1];
      puVar12[6] = *puVar12;
      puVar12[9] = puVar12[3];
      puVar12[8] = puVar12[2];
      puVar12[0xb] = puVar12[5];
      puVar12[10] = puVar12[4];
      if (lVar14 == 0) break;
      bVar1 = iVar8 < *(int *)(puVar12 + -4);
      if (iVar7 != *(int *)((long)puVar12 + -0x14)) {
        bVar1 = iVar7 < *(int *)((long)puVar12 + -0x14);
      }
      lVar14 = lVar14 + -0x30;
    } while (bVar1);
    func_0x00010b248664();
    lVar14 = extraout_x8;
    puVar19 = extraout_x9;
  }
  lVar14 = lVar14 + 0x30;
  puVar12 = puVar19;
  goto LAB_10b24763c;
code_r0x00010b2473a8:
  if (((ulong)puVar9 & 1) == 0) {
LAB_10b2473ac:
    FUN_10b247128(unaff_x20,puVar17,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b24716c;
LAB_10b247704:
  do {
    if ((long)uVar15 <= (long)uVar16) {
      uVar6 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      puVar12 = unaff_x20 + uVar6 * 6;
      uVar5 = uVar15 * 2 + 2;
      uVar11 = uVar6;
      if ((long)uVar5 < (long)uVar18) {
        bVar1 = *(int *)(puVar12 + 2) < *(int *)(puVar12 + 8);
        if (*(int *)((long)puVar12 + 0x1c) != *(int *)((long)puVar12 + 0x4c)) {
          bVar1 = *(int *)((long)puVar12 + 0x1c) < *(int *)((long)puVar12 + 0x4c);
        }
        lVar14 = 0x30;
        if (!bVar1) {
          lVar14 = 0;
        }
        puVar12 = (undefined8 *)((long)puVar12 + lVar14);
        uVar11 = uVar5;
        if (!bVar1) {
          uVar11 = uVar6;
        }
      }
      puVar19 = unaff_x20 + uVar15 * 6;
      iVar7 = *(int *)((long)puVar19 + 0x1c);
      iVar8 = *(int *)(puVar19 + 2);
      bVar1 = *(int *)(puVar12 + 2) < iVar8;
      if (*(int *)((long)puVar12 + 0x1c) != iVar7) {
        bVar1 = *(int *)((long)puVar12 + 0x1c) < iVar7;
      }
      if (!bVar1) {
        uVar24 = puVar19[1];
        uVar23 = *puVar19;
        uVar20 = *(undefined8 *)((long)puVar19 + 0x14);
        uVar25 = puVar19[5];
        uVar21 = puVar19[4];
        do {
          puVar17 = puVar12;
          uVar26 = puVar17[1];
          uVar22 = *puVar17;
          uVar27 = puVar17[2];
          uVar29 = puVar17[5];
          uVar28 = puVar17[4];
          puVar19[3] = puVar17[3];
          puVar19[2] = uVar27;
          puVar19[5] = uVar29;
          puVar19[4] = uVar28;
          puVar19[1] = uVar26;
          *puVar19 = uVar22;
          if ((long)uVar16 < (long)uVar11) break;
          uVar6 = uVar11 << 1 | 1;
          puVar12 = unaff_x20 + uVar6 * 6;
          uVar5 = uVar11 * 2 + 2;
          uVar11 = uVar6;
          if ((long)uVar5 < (long)uVar18) {
            bVar1 = *(int *)(puVar12 + 2) < *(int *)(puVar12 + 8);
            if (*(int *)((long)puVar12 + 0x1c) != *(int *)((long)puVar12 + 0x4c)) {
              bVar1 = *(int *)((long)puVar12 + 0x1c) < *(int *)((long)puVar12 + 0x4c);
            }
            lVar14 = 0x30;
            if (!bVar1) {
              lVar14 = 0;
            }
            puVar12 = (undefined8 *)((long)puVar12 + lVar14);
            uVar11 = uVar5;
            if (!bVar1) {
              uVar11 = uVar6;
            }
          }
          bVar1 = *(int *)(puVar12 + 2) < iVar8;
          if (*(int *)((long)puVar12 + 0x1c) != iVar7) {
            bVar1 = *(int *)((long)puVar12 + 0x1c) < iVar7;
          }
          puVar19 = puVar17;
        } while (!bVar1);
        puVar17[1] = uVar24;
        *puVar17 = uVar23;
        *(int *)(puVar17 + 2) = iVar8;
        *(undefined8 *)((long)puVar17 + 0x14) = uVar20;
        *(int *)((long)puVar17 + 0x1c) = iVar7;
        puVar17[5] = uVar25;
        puVar17[4] = uVar21;
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  while (1 < (long)uVar18) {
    func_0x00010b248580();
    func_0x00010b248848();
    puVar12 = unaff_x20;
    uVar18 = extraout_x13_01;
    do {
      lVar14 = uVar18 * extraout_x9_00;
      puVar19 = (undefined8 *)((long)puVar12 + lVar14 + 0x30);
      uVar16 = uVar18 << 1 | 1;
      uVar15 = uVar18 * 2 + 2;
      puVar17 = puVar19;
      uVar18 = uVar16;
      if ((long)uVar15 < extraout_x8_00) {
        iVar7 = *(int *)((long)puVar12 + lVar14 + 0x4c);
        iVar8 = *(int *)((long)puVar12 + lVar14 + 0x7c);
        bVar1 = *(int *)((long)puVar12 + lVar14 + 0x40) < *(int *)((long)puVar12 + lVar14 + 0x70);
        if (iVar7 != iVar8) {
          bVar1 = iVar7 < iVar8;
        }
        puVar17 = (undefined8 *)((long)puVar12 + lVar14 + 0x60);
        uVar18 = uVar15;
        if (!bVar1) {
          puVar17 = puVar19;
          uVar18 = uVar16;
        }
      }
      uVar23 = puVar17[1];
      uVar20 = *puVar17;
      uVar24 = puVar17[3];
      uVar21 = puVar17[2];
      uVar22 = puVar17[5];
      uVar25 = puVar17[4];
      puVar12[3] = uVar24;
      puVar12[2] = uVar21;
      puVar12[5] = uVar22;
      puVar12[4] = uVar25;
      puVar12[1] = uVar23;
      *puVar12 = uVar20;
      puVar12 = puVar17;
    } while ((long)uVar18 <= (long)(extraout_x10 >> 1));
    puVar12 = unaff_x19 + -6;
    if (puVar17 == puVar12) {
      func_0x00010b248778();
      extraout_x10_01[3] = uVar24;
      extraout_x10_01[2] = uVar21;
      extraout_x10_01[5] = uVar22;
      extraout_x10_01[4] = uVar25;
      extraout_x10_01[1] = uVar23;
      *extraout_x10_01 = uVar20;
      lVar14 = extraout_x8_02;
    }
    else {
      uVar23 = unaff_x19[-5];
      uVar20 = *puVar12;
      uVar21 = unaff_x19[-4];
      uVar25 = unaff_x19[-1];
      uVar24 = unaff_x19[-2];
      puVar17[3] = unaff_x19[-3];
      puVar17[2] = uVar21;
      puVar17[5] = uVar25;
      puVar17[4] = uVar24;
      puVar17[1] = uVar23;
      *puVar17 = uVar20;
      func_0x00010b248778();
      func_0x00010b24858c();
      uVar18 = (long)extraout_x10_00 + (0x30 - (long)unaff_x20);
      lVar14 = extraout_x8_01;
      if (0x30 < (long)uVar18) {
        uVar15 = 0;
        if (extraout_x9_01 != 0) {
          uVar15 = uVar18 / extraout_x9_01;
        }
        uVar18 = uVar15 - 2 >> 1;
        puVar19 = (undefined8 *)((long)unaff_x20 + uVar18 * extraout_x9_01);
        iVar7 = *(int *)((long)extraout_x10_00 + 0x1c);
        iVar8 = *(int *)(extraout_x10_00 + 2);
        bVar1 = *(int *)(puVar19 + 2) < iVar8;
        if (*(int *)((long)puVar19 + 0x1c) != iVar7) {
          bVar1 = *(int *)((long)puVar19 + 0x1c) < iVar7;
        }
        if (bVar1) {
          uVar24 = extraout_x10_00[1];
          uVar23 = *extraout_x10_00;
          uVar20 = *(undefined8 *)((long)extraout_x10_00 + 0x14);
          uVar25 = extraout_x10_00[5];
          uVar21 = extraout_x10_00[4];
          puVar17 = extraout_x10_00;
          do {
            puVar9 = puVar19;
            uVar26 = puVar9[1];
            uVar22 = *puVar9;
            uVar27 = puVar9[2];
            uVar29 = puVar9[5];
            uVar28 = puVar9[4];
            puVar17[3] = puVar9[3];
            puVar17[2] = uVar27;
            puVar17[5] = uVar29;
            puVar17[4] = uVar28;
            puVar17[1] = uVar26;
            *puVar17 = uVar22;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1 >> 1;
            puVar19 = (undefined8 *)((long)unaff_x20 + uVar18 * extraout_x9_01);
            bVar1 = *(int *)(puVar19 + 2) < iVar8;
            if (*(int *)((long)puVar19 + 0x1c) != iVar7) {
              bVar1 = *(int *)((long)puVar19 + 0x1c) < iVar7;
            }
            puVar17 = puVar9;
          } while (bVar1);
          puVar9[1] = uVar24;
          *puVar9 = uVar23;
          *(int *)(puVar9 + 2) = iVar8;
          *(undefined8 *)((long)puVar9 + 0x14) = uVar20;
          *(int *)((long)puVar9 + 0x1c) = iVar7;
          puVar9[5] = uVar25;
          puVar9[4] = uVar21;
        }
      }
    }
    unaff_x19 = puVar12;
    uVar18 = lVar14 - 1;
  }
LAB_10b247558:
  func_0x00010b2487c0(unaff_x30);
  return;
}



/* Entry: 10b247a8c; end: 10b247bb3;  */

void FUN_10b247a8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar3 = *(int *)((long)param_2 + 0x1c);
  bVar1 = *(int *)(param_2 + 2) < *(int *)(param_1 + 2);
  if (iVar3 != *(int *)((long)param_1 + 0x1c)) {
    bVar1 = iVar3 < *(int *)((long)param_1 + 0x1c);
  }
  bVar2 = *(int *)(param_3 + 2) < *(int *)(param_2 + 2);
  if (*(int *)((long)param_3 + 0x1c) != iVar3) {
    bVar2 = *(int *)((long)param_3 + 0x1c) < iVar3;
  }
  if (bVar1) {
    if (bVar2) {
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar7 = param_1[3];
      uVar6 = param_1[2];
      uVar9 = param_1[5];
      uVar8 = param_1[4];
      uVar13 = param_3[3];
      uVar12 = param_3[2];
      uVar11 = param_3[5];
      uVar10 = param_3[4];
      uVar14 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar14;
      param_1[3] = uVar13;
      param_1[2] = uVar12;
      param_1[5] = uVar11;
      param_1[4] = uVar10;
    }
    else {
      func_0x00010b248934();
      bVar1 = *(int *)(param_3 + 2) < *(int *)(param_2 + 2);
      if (*(int *)((long)param_3 + 0x1c) != *(int *)((long)param_2 + 0x1c)) {
        bVar1 = *(int *)((long)param_3 + 0x1c) < *(int *)((long)param_2 + 0x1c);
      }
      if (!bVar1) {
        return;
      }
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      uVar9 = param_2[5];
      uVar8 = param_2[4];
      uVar13 = param_3[3];
      uVar12 = param_3[2];
      uVar11 = param_3[5];
      uVar10 = param_3[4];
      uVar14 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar14;
      param_2[3] = uVar13;
      param_2[2] = uVar12;
      param_2[5] = uVar11;
      param_2[4] = uVar10;
    }
    param_3[3] = uVar7;
    param_3[2] = uVar6;
    param_3[5] = uVar9;
    param_3[4] = uVar8;
    param_3[1] = uVar5;
    *param_3 = uVar4;
  }
  else if (bVar2) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    uVar13 = param_3[3];
    uVar12 = param_3[2];
    uVar11 = param_3[5];
    uVar10 = param_3[4];
    uVar14 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar14;
    param_2[3] = uVar13;
    param_2[2] = uVar12;
    param_2[5] = uVar11;
    param_2[4] = uVar10;
    param_3[3] = uVar7;
    param_3[2] = uVar6;
    param_3[5] = uVar9;
    param_3[4] = uVar8;
    param_3[1] = uVar5;
    *param_3 = uVar4;
    bVar1 = *(int *)(param_2 + 2) < *(int *)(param_1 + 2);
    if (*(int *)((long)param_2 + 0x1c) != *(int *)((long)param_1 + 0x1c)) {
      bVar1 = *(int *)((long)param_2 + 0x1c) < *(int *)((long)param_1 + 0x1c);
    }
    if (bVar1) {
      func_0x00010b248934();
    }
  }
  return;
}



/* Entry: 10b247bb4; end: 10b247c3b;  */

void FUN_10b247bb4(void)

{
  int extraout_w8;
  uint uVar1;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  
  func_0x00010b2486e8();
  FUN_10b247a8c();
  func_0x00010b24875c();
  uVar1 = extraout_w10;
  if (extraout_w8 != extraout_w9) {
    uVar1 = (uint)(extraout_w8 < extraout_w9);
  }
  if (uVar1 == 1) {
    func_0x00010b248538();
    uVar1 = extraout_w10_00;
    if (extraout_w8_00 != extraout_w9_00) {
      uVar1 = (uint)(extraout_w8_00 < extraout_w9_00);
    }
    if (uVar1 == 1) {
      func_0x00010b2484fc();
      uVar1 = extraout_w10_01;
      if (extraout_w8_01 != extraout_w9_01) {
        uVar1 = (uint)(extraout_w8_01 < extraout_w9_01);
      }
      if (uVar1 == 1) {
        func_0x00010b248460();
        func_0x00010b24858c();
      }
    }
  }
  return;
}



/* Entry: 10b247c3c; end: 10b247cff;  */

void FUN_10b247c3c(void)

{
  bool bVar1;
  long in_x3;
  long in_x4;
  int extraout_w8;
  uint uVar2;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  
  func_0x00010b2486e8();
  FUN_10b247bb4();
  bVar1 = *(int *)(in_x4 + 0x10) < *(int *)(in_x3 + 0x10);
  if (*(int *)(in_x4 + 0x1c) != *(int *)(in_x3 + 0x1c)) {
    bVar1 = *(int *)(in_x4 + 0x1c) < *(int *)(in_x3 + 0x1c);
  }
  if (bVar1) {
    func_0x00010b24847c();
    func_0x00010b24875c();
    uVar2 = extraout_w10;
    if (extraout_w8 != extraout_w9) {
      uVar2 = (uint)(extraout_w8 < extraout_w9);
    }
    if (uVar2 == 1) {
      func_0x00010b248538();
      uVar2 = extraout_w10_00;
      if (extraout_w8_00 != extraout_w9_00) {
        uVar2 = (uint)(extraout_w8_00 < extraout_w9_00);
      }
      if (uVar2 == 1) {
        func_0x00010b2484fc();
        uVar2 = extraout_w10_01;
        if (extraout_w8_01 != extraout_w9_01) {
          uVar2 = (uint)(extraout_w8_01 < extraout_w9_01);
        }
        if (uVar2 == 1) {
          func_0x00010b248460();
          func_0x00010b24858c();
        }
      }
    }
  }
  return;
}



/* Entry: 10b247d00; end: 10b247edf;  */

bool FUN_10b247d00(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_x8;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  func_0x00010b2485c4();
  switch(extraout_x8) {
  case 0:
  case 1:
    break;
  case 2:
    bVar1 = *(int *)(param_2 + -4) < *(int *)(param_1 + 2);
    if (*(int *)((long)param_2 + -0x14) != *(int *)((long)param_1 + 0x1c)) {
      bVar1 = *(int *)((long)param_2 + -0x14) < *(int *)((long)param_1 + 0x1c);
    }
    if (bVar1) {
      uVar13 = param_1[1];
      uVar9 = *param_1;
      uVar15 = param_1[3];
      uVar14 = param_1[2];
      uVar17 = param_1[5];
      uVar16 = param_1[4];
      uVar21 = param_2[-3];
      uVar20 = param_2[-4];
      uVar19 = param_2[-1];
      uVar18 = param_2[-2];
      uVar22 = param_2[-6];
      param_1[1] = param_2[-5];
      *param_1 = uVar22;
      param_1[3] = uVar21;
      param_1[2] = uVar20;
      param_1[5] = uVar19;
      param_1[4] = uVar18;
      param_2[-3] = uVar15;
      param_2[-4] = uVar14;
      param_2[-1] = uVar17;
      param_2[-2] = uVar16;
      param_2[-5] = uVar13;
      param_2[-6] = uVar9;
      return true;
    }
    return true;
  case 3:
    func_0x00010b248914();
    FUN_10b247a8c();
    break;
  case 4:
    func_0x00010b248908(1);
    FUN_10b247bb4(param_1);
    break;
  case 5:
    func_0x00010b248908(1);
    FUN_10b247c3c(param_1);
    break;
  default:
    func_0x00010b248914();
    FUN_10b247a8c();
    lVar6 = 0;
    iVar7 = 0;
    puVar11 = param_1 + 0x12;
    puVar12 = param_1 + 0xc;
    while (puVar8 = puVar11, puVar8 != param_2) {
      iVar2 = *(int *)((long)puVar8 + 0x1c);
      iVar3 = *(int *)(puVar8 + 2);
      bVar1 = iVar3 < *(int *)(puVar12 + 2);
      if (iVar2 != *(int *)((long)puVar12 + 0x1c)) {
        bVar1 = iVar2 < *(int *)((long)puVar12 + 0x1c);
      }
      if (bVar1) {
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        uVar9 = *(undefined8 *)((long)puVar8 + 0x14);
        uVar14 = puVar8[5];
        uVar13 = puVar8[4];
        lVar5 = lVar6;
        do {
          lVar10 = lVar5;
          *(undefined8 *)((long)param_1 + lVar10 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x68);
          *(undefined8 *)((long)param_1 + lVar10 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x60);
          *(undefined8 *)((long)param_1 + lVar10 + 0xa8) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x78);
          *(undefined8 *)((long)param_1 + lVar10 + 0xa0) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x70);
          *(undefined8 *)((long)param_1 + lVar10 + 0xb8) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x88);
          *(undefined8 *)((long)param_1 + lVar10 + 0xb0) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x80);
          puVar11 = param_1;
          if (lVar10 == -0x60) goto LAB_10b247e74;
          iVar4 = *(int *)((long)param_1 + lVar10 + 0x4c);
          bVar1 = iVar3 < *(int *)((long)param_1 + lVar10 + 0x40);
          if (iVar2 != iVar4) {
            bVar1 = iVar2 < iVar4;
          }
          lVar5 = lVar10 + -0x30;
        } while (bVar1);
        puVar11 = (undefined8 *)((long)param_1 + lVar10 + 0x60);
LAB_10b247e74:
        puVar11[1] = uVar16;
        *puVar11 = uVar15;
        *(int *)(puVar11 + 2) = iVar3;
        *(undefined8 *)((long)puVar11 + 0x14) = uVar9;
        *(int *)((long)puVar11 + 0x1c) = iVar2;
        puVar11[5] = uVar14;
        puVar11[4] = uVar13;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return puVar8 + 6 == param_2;
        }
      }
      lVar6 = lVar6 + 0x30;
      puVar12 = puVar8;
      puVar11 = puVar8 + 6;
    }
  }
  return true;
}



/* Entry: 10b247ee0; end: 10b247eff;  */

void FUN_10b247ee0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10b247f00; end: 10b247f1f;  */

void FUN_10b247f00(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c2be38();
  }
  return;
}



/* Entry: 10b247f20; end: 10b247f23;  */

void FUN_10b247f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cca6d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b247f24; end: 10b247f37;  */

void FUN_10b247f24(void)

{
  func_0x00010b247f48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b247f38; end: 10b247f57;  */

void FUN_10b247f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b247f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b247f58; end: 10b247fa3;  */

long FUN_10b247f58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b247fa4; end: 10b247fbb;  */

void FUN_10b247fa4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b247fd8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b247fbc; end: 10b247fd7;  */

void FUN_10b247fbc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b247fd8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b247fd8; end: 10b248023;  */

void FUN_10b247fd8(long param_1)

{
  func_0x000107c2bef4(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b248024; end: 10b24803b;  */

void FUN_10b248024(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b248058(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b24803c; end: 10b248057;  */

void FUN_10b24803c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b248058(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b248058; end: 10b2480b7;  */

void FUN_10b248058(long param_1)

{
  func_0x000107c2bef8(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b2480b8; end: 10b2480bb;  */

void FUN_10b2480b8(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b2480bc; end: 10b2480cf;  */

void FUN_10b2480bc(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2480d0; end: 10b2481c7;  */

void FUN_10b2480d0(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)0x8;
  __Znwm();
  *puVar2 = &PTR_DAT_110cca5f8;
  __ZNSt3__15mutex4lockEv();
  lVar3 = param_1;
  func_0x000107c28058();
  if ((int)lVar3 == 0) {
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
    __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
    func_0x00010b248754();
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b248164);
  (*pcVar1)();
}



/* Entry: 10b2481c8; end: 10b24822b;  */

void FUN_10b2481c8(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c35218();
  *unaff_x19 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}



/* Entry: 10b24822c; end: 10b24841f;  */

undefined8 *
FUN_10b24822c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long *param_9,long param_10,ulong param_11,long param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar3;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar4;
  ulong extraout_x8_03;
  ulong uVar5;
  ulong extraout_x8_04;
  long lVar6;
  undefined8 *extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 in_register_00005008;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_register_00005068;
  undefined8 in_register_00005088;
  undefined8 in_register_000050a8;
  
  func_0x00010b2486e8();
  if (param_10 == 3) {
    if (*param_9 != (long)*(int *)(unaff_x20 + 9)) {
      uVar8 = unaff_x20[7];
      uVar7 = unaff_x20[6];
      func_0x00010b2485a4(uVar7,unaff_x20[8],unaff_x20[10]);
      extraout_x8_01[1] = in_register_000050a8;
      *extraout_x8_01 = param_6;
      extraout_x8_01[3] = in_register_00005088;
      extraout_x8_01[2] = param_5;
      extraout_x8_01[5] = in_register_00005068;
      extraout_x8_01[4] = param_4;
      func_0x00010b24858c();
      func_0x00010b248684();
      extraout_x8_02[5] = uVar8;
      extraout_x8_02[4] = uVar7;
      return extraout_x8_02;
    }
    func_0x00010b248684();
    extraout_x8[5] = in_register_00005008;
    extraout_x8[4] = param_1;
    func_0x00010b2485a4(*extraout_x8,extraout_x8[2],extraout_x8[4]);
    extraout_x8_00[1] = in_register_000050a8;
    *extraout_x8_00 = param_6;
    extraout_x8_00[3] = in_register_00005088;
    extraout_x8_00[2] = param_5;
    extraout_x8_00[5] = in_register_00005068;
    extraout_x8_00[4] = param_4;
  }
  else {
    if (param_10 != 2) {
      if (param_10 <= param_12) {
        func_0x00010b248580();
        func_0x00010b248738();
        puVar4 = (undefined8 *)(param_11 + 0x30);
        puVar1 = unaff_x20;
        while (puVar2 = unaff_x20 + 6, puVar2 != unaff_x19) {
          if (*param_9 == (long)*(int *)(unaff_x20 + 9)) {
            uVar8 = unaff_x20[7];
            uVar7 = *puVar2;
            uVar9 = unaff_x20[8];
            uVar11 = unaff_x20[0xb];
            uVar10 = unaff_x20[10];
            puVar1[3] = unaff_x20[9];
            puVar1[2] = uVar9;
            puVar1[5] = uVar11;
            puVar1[4] = uVar10;
            puVar1[1] = uVar8;
            *puVar1 = uVar7;
            unaff_x20 = puVar2;
            puVar1 = puVar1 + 6;
          }
          else {
            uVar8 = unaff_x20[7];
            uVar7 = *puVar2;
            uVar9 = unaff_x20[8];
            uVar11 = unaff_x20[0xb];
            uVar10 = unaff_x20[10];
            puVar4[3] = unaff_x20[9];
            puVar4[2] = uVar9;
            puVar4[5] = uVar11;
            puVar4[4] = uVar10;
            puVar4[1] = uVar8;
            *puVar4 = uVar7;
            puVar4 = puVar4 + 6;
            unaff_x20 = puVar2;
          }
        }
        uVar8 = unaff_x20[7];
        uVar7 = *puVar2;
        uVar10 = unaff_x20[9];
        uVar9 = unaff_x20[8];
        uVar12 = unaff_x20[0xb];
        uVar11 = unaff_x20[10];
        func_0x00010b2486a4();
        uVar5 = extraout_x8_03;
        for (; param_11 < uVar5; param_11 = param_11 + 0x30) {
          func_0x00010b248574();
          extraout_x9[3] = uVar10;
          extraout_x9[2] = uVar9;
          extraout_x9[5] = uVar12;
          extraout_x9[4] = uVar11;
          extraout_x9[1] = uVar8;
          *extraout_x9 = uVar7;
          uVar5 = extraout_x8_04;
        }
        return puVar1 + 6;
      }
      puVar4 = unaff_x20 + (param_10 / 2) * 6;
      lVar6 = (param_10 / 2) * 0x30;
      lVar3 = *param_9;
      do {
        if (lVar3 == *(int *)((long)unaff_x20 + lVar6 + -0x18)) {
          func_0x00010b248784();
          lVar3 = *param_9;
          break;
        }
        lVar6 = lVar6 + -0x30;
      } while (lVar6 != 0);
      puVar1 = puVar4;
      do {
        if (lVar3 != *(int *)(puVar1 + 3)) {
          func_0x00010b248784();
          puVar2 = puVar1;
          break;
        }
        puVar1 = puVar1 + 6;
        puVar2 = unaff_x19 + 6;
      } while (puVar1 != unaff_x19);
      func_0x00010b243958(unaff_x20,puVar4,puVar2);
      return unaff_x20;
    }
    func_0x00010b248460();
  }
  func_0x00010b24858c();
  return unaff_x19;
}



/* Entry: 10b248420; end: 10b248437;  */

void FUN_10b248420(long *param_1,long param_2)

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



/* Entry: 10b248438; end: 10b24845f;  */

void FUN_10b248438(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c35218();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b248460; end: 10b248957;  */

undefined8 FUN_10b248460(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *unaff_x20;
  uVar5 = unaff_x19[3];
  uVar4 = unaff_x19[2];
  uVar3 = unaff_x19[5];
  uVar2 = unaff_x19[4];
  uVar6 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar6;
  unaff_x20[3] = uVar5;
  unaff_x20[2] = uVar4;
  unaff_x20[5] = uVar3;
  unaff_x20[4] = uVar2;
  return uVar1;
}



/* Entry: 10b248958; end: 10b24985b;  */

void FUN_10b248958(undefined1 *param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  dword dVar6;
  long *plVar7;
  code *pcVar8;
  mach_header **ppmVar9;
  dword *pdVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  mach_header *pmVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  int *piVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  int *piVar28;
  undefined1 *puVar29;
  mach_header *pmVar30;
  mach_header *pmVar31;
  undefined1 *puVar32;
  long lVar33;
  long *plVar34;
  dword *pdVar35;
  undefined *puVar36;
  long *plVar37;
  mach_header *pmStack_1c0;
  code *pcStack_1b8;
  mach_header *pmStack_1a0;
  mach_header *pmStack_198;
  mach_header *pmStack_190;
  code *pcStack_188;
  undefined1 *puStack_180;
  undefined4 uStack_178;
  char cStack_160;
  long lStack_150;
  long lStack_148;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  mach_header *pmStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte bStack_100;
  undefined7 uStack_ff;
  ulong uStack_e8;
  undefined8 *****pppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  mach_header *pmStack_c0;
  mach_header *pmStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  mach_header *pmStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_70;
  
  func_0x00010b249bd8(auStack_a8);
  func_0x000107c30194(&pmStack_c0,&UNK_10f73b1ea,0x20,&UNK_10f73b20b,0x152);
  if (pmStack_c0 == pmStack_b8) {
    ppuStack_138 = (undefined **)((ulong)ppuStack_138 & 0xffffffffffffff00);
    bStack_100 = 0;
  }
  else {
    func_0x00010b249bd8(&pmStack_1a0);
    ppmVar9 = &pmStack_1a0;
    func_0x000107c3034c(ppmVar9,pmStack_c0,(int)pmStack_b8 - (int)pmStack_c0);
    bVar1 = ((ulong)ppmVar9 & 1) == 0;
    if (bVar1) {
      ppuStack_138 = (undefined **)((ulong)ppuStack_138 & 0xffffffffffffff00);
    }
    else {
      ppuStack_138 = &PTR_FUN_110d24a18;
      uStack_130 = 0;
      uStack_120 = 0x100000000;
      pmStack_128 = &MACH_HEADER;
      puStack_118 = &DAT_10e5b4a18;
      uStack_110 = 0;
      uStack_108 = 0;
      FUN_10b249be0(&ppuStack_138,&pmStack_1a0);
    }
    bStack_100 = !bVar1;
    FUN_10b5d81f4(&pmStack_1a0);
  }
  func_0x00010b24a448();
  if (((bStack_100 & 1) != 0) && (FUN_10b249be0(auStack_a8,&ppuStack_138), bStack_100 == 1)) {
    FUN_10b5d81f4(&ppuStack_138);
  }
  func_0x000107c278b8(&pppppuStack_d8,&UNK_10f73b1d1);
  func_0x0001098e25cc(&ppuStack_138,&plStack_98,param_2);
  if (ppuStack_138 != (undefined **)0x0) {
    if (*(char *)((long)ppuStack_138 + 0x37) < '\0') {
      if (ppuStack_138[5] != (undefined *)0x0) goto LAB_10b248aa4;
    }
    else if (*(char *)((long)ppuStack_138 + 0x37) != '\0') {
LAB_10b248aa4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&pppppuStack_d8,ppuStack_138 + 4);
    }
  }
  FUN_10b5d81f4(auStack_a8);
  FUN_10b24985c(&ppuStack_138);
  pmVar19 = pmStack_128;
  puVar29 = *(undefined1 **)&pmStack_128->cpusubtype;
  if ((puVar29 != (undefined1 *)0x0) &&
     (pdVar10 = &pmStack_128->flags, lVar15._0_4_ = pmStack_128->flags,
     lVar15._4_4_ = pmStack_128->reserved, lVar15 != 0)) {
    func_0x000107c278c4(pdVar10,&pppppuStack_d8);
    puVar32 = puVar29 + -1;
    if (((ulong)puVar29 & (ulong)puVar32) == 0) {
      pdVar35 = (dword *)((ulong)pdVar10 & (ulong)puVar32);
    }
    else {
      pdVar35 = pdVar10;
      if (puVar29 <= pdVar10) {
        uVar21 = 0;
        if (puVar29 != (undefined1 *)0x0) {
          uVar21 = (ulong)pdVar10 / (ulong)puVar29;
        }
        pdVar35 = (dword *)((long)pdVar10 - uVar21 * (long)puVar29);
      }
    }
    plVar34 = *(long **)(*(long *)pmVar19 + (long)pdVar35 * 8);
    if (plVar34 != (long *)0x0) {
      do {
        while( true ) {
          plVar34 = (long *)*plVar34;
          if (plVar34 == (long *)0x0) goto LAB_10b248b68;
          puVar18 = (undefined1 *)plVar34[1];
          if ((dword *)puVar18 != pdVar10) break;
          lVar15 = (long)(plVar34 + 2);
          func_0x000107c278d0(lVar15,&pppppuStack_d8);
          if ((int)lVar15 != 0) {
            FUN_10b5d750c(param_1,0,plVar34 + 5);
            FUN_10b2462a4(param_1 + 0x60,plVar34 + 0x11);
            FUN_10b249c40(param_1 + 0xa8,plVar34 + 0x1a);
            pmVar19 = (mach_header *)(param_1 + 0xc0);
            pmVar19->magic = 0;
            pmVar19->cputype = 0;
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined8 *)(param_1 + 0xd0) = 0;
            lVar15 = plVar34[0x1d];
            lVar16 = plVar34[0x1e];
            pmStack_198 = (mach_header *)((ulong)pmStack_198 & 0xffffffffffffff00);
            lVar17 = lVar16 - lVar15;
            pmStack_1a0 = pmVar19;
            if (lVar17 != 0) {
              func_0x00010b249d70(pmVar19,lVar17 / 0x30);
              FUN_10b249db8(pmVar19,lVar15,lVar16);
            }
            pmStack_198 = (mach_header *)CONCAT71(pmStack_198._1_7_,1);
            func_0x00010b249f18(&pmStack_1a0);
            func_0x000107c2795c(param_1 + 0xd8,plVar34 + 0x20);
            FUN_10b249c40(param_1 + 0xf0,plVar34 + 0x23);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (param_1 + 0x108,plVar34 + 0x26);
            func_0x000107c2795c(param_1 + 0x120,plVar34 + 0x29);
            param_1[0x138] = 0;
            param_1[0x168] = 0;
            if (*(char *)(plVar34 + 0x32) == '\x01') {
              FUN_10b249f44(param_1 + 0x138,plVar34 + 0x2c);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (param_1 + 0x170,plVar34 + 0x33);
            func_0x00010b24a450();
            goto LAB_10b24965c;
          }
        }
        if (((ulong)puVar29 & (ulong)puVar32) == 0) {
          puVar18 = (undefined1 *)((ulong)puVar18 & (ulong)puVar32);
        }
        else if (puVar29 <= puVar18) {
          uVar21 = 0;
          if (puVar29 != (undefined1 *)0x0) {
            uVar21 = (ulong)puVar18 / (ulong)puVar29;
          }
          puVar18 = puVar18 + -(uVar21 * (long)puVar29);
        }
      } while ((dword *)puVar18 == pdVar35);
    }
  }
LAB_10b248b68:
  func_0x00010b24a450();
  FUN_10b249f68(param_1);
  FUN_10b2498e8(&ppuStack_138);
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppppuStack_d8 = &pppppuStack_d8;
  }
  func_0x00010b24a41c(&lStack_150,pppppuStack_d8,uStack_d0);
  if (lStack_150 != lStack_148) {
    func_0x000107c3034c(&ppuStack_138,lStack_150,(int)lStack_148 - (int)lStack_150);
  }
  func_0x00010b5d7c20(param_1,&ppuStack_138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x170,&pppppuStack_d8);
  auStack_a8 = (undefined1  [8])&PTR_FUN_110d23898;
  pmStack_a0 = (mach_header *)0x0;
  uStack_70 = 0;
  plStack_98 = (long *)0x0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  uStack_88 = 0;
  puVar11 = (undefined8 *)(CONCAT44(uStack_104,uStack_108) & 0xfffffffffffffffc);
  lVar15 = (long)*(char *)((long)puVar11 + 0x17);
  puVar12 = puVar11;
  if (lVar15 < 0) {
    puVar12 = (undefined8 *)*puVar11;
    lVar15 = puVar11[1];
  }
  func_0x00010b24a41c(&pmStack_c0,puVar12,lVar15);
  if (pmStack_b8 == pmStack_c0) {
LAB_10b248c3c:
    pmStack_1a0 = (mach_header *)((ulong)pmStack_1a0 & 0xffffffffffffff00);
    cStack_160 = '\0';
  }
  else {
    puVar29 = auStack_a8;
    func_0x000107c3034c(puVar29,pmStack_c0,(int)pmStack_b8 - (int)pmStack_c0);
    if (((ulong)puVar29 & 1) == 0) goto LAB_10b248c3c;
    FUN_10b24a02c(&pmStack_1a0,auStack_a8);
    cStack_160 = '\x01';
  }
  func_0x00010b24a448();
  FUN_10b5d2b68(auStack_a8);
  cVar5 = param_1[0xa0];
  if (cVar5 == cStack_160) {
    if (cVar5 != '\0') {
      FUN_10b249fa8(param_1 + 0x60,&pmStack_1a0);
    }
  }
  else if (cVar5 == '\0') {
    FUN_10b24a02c(param_1 + 0x60,&pmStack_1a0);
    param_1[0xa0] = 1;
  }
  else {
    FUN_10b24a008();
  }
  FUN_10b246318(&pmStack_1a0);
  cVar5 = *(char *)((uStack_110 & 0xfffffffffffffffc) + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)((uStack_110 & 0xfffffffffffffffc) + 8) != 0) goto LAB_10b248cbc;
  }
  else if (cVar5 != '\0') {
LAB_10b248cbc:
    FUN_10b2498f0(&pmStack_1a0);
    func_0x00010b24a04c(param_1 + 0xa8);
    *(mach_header **)(param_1 + 0xb0) = pmStack_198;
    *(mach_header **)(param_1 + 0xa8) = pmStack_1a0;
    *(mach_header **)(param_1 + 0xb8) = pmStack_190;
    pmStack_198 = (mach_header *)0x0;
    pmStack_190 = (mach_header *)0x0;
    pmStack_1a0 = (mach_header *)0x0;
    FUN_10b2463e4(&pmStack_1a0);
  }
  ppmVar9 = &pmStack_128;
  if (((ulong)pmStack_128 & 1) != 0) {
    ppmVar9 = (mach_header **)((long)&pmStack_128->cputype + 3);
  }
  plVar34 = (long *)0x2;
  for (lVar15 = (long)(int)uStack_120 << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
    pmVar30 = *ppmVar9;
    pmVar31 = pmVar30;
    FUN_10b2498f0(&pmStack_c0);
    auStack_a8 = (undefined1  [8])pmStack_c0;
    pmStack_a0 = pmStack_b8;
    plStack_98 = (long *)&DAT_10f68f19e;
    uStack_90._0_4_ = 2;
    uStack_90._4_4_ = 0;
    pmVar19 = pmVar30;
    func_0x000107c27e5c();
    pmStack_190 = (mach_header *)auStack_a8;
    pcStack_188 = FUN_10b24a314;
    pmStack_1a0 = pmVar19;
    pmStack_198 = pmVar31;
    func_0x000107c2793c(&UNK_10f73b1c8);
    func_0x000107c3173c(&pmStack_1c0);
    func_0x000107c27940(param_1 + 0xd8,&pmStack_1c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pmStack_1c0);
    uVar21 = *(ulong *)(param_1 + 200);
    if (uVar21 < *(ulong *)(param_1 + 0xd0)) {
      func_0x00010b24a07c(uVar21,pmVar30,&pmStack_c0);
      lVar16 = uVar21 + 0x30;
    }
    else {
      pmVar19 = (mach_header *)(param_1 + 0xc0);
      lVar16 = (long)(uVar21 - *(long *)(param_1 + 0xc0)) / 0x30 + 1;
      FUN_10b24a0b8();
      lVar17 = *(long *)(param_1 + 0xc0);
      lVar33 = *(long *)(param_1 + 200);
      puStack_180 = param_1 + 0xd0;
      if (pmVar19 == (mach_header *)0x0) {
        pmVar19 = (mach_header *)0x0;
        lVar16 = 0;
      }
      else {
        func_0x00010b249e90();
      }
      lVar17 = (long)pmVar19 + (lVar33 - lVar17);
      lVar33 = (long)pmVar19 + lVar16 * 0x30;
      pmStack_1a0 = pmVar19;
      pmStack_198 = (mach_header *)lVar17;
      pmStack_190 = (mach_header *)lVar17;
      pcStack_188 = (code *)lVar33;
      func_0x00010b24a07c(lVar17,pmVar30,&pmStack_c0);
      lVar16 = lVar17 + 0x30;
      lVar17 = lVar17 + ((*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0)) / -0x30) * 0x30;
      _memcpy(lVar17);
      pmStack_1a0 = *(mach_header **)(param_1 + 0xc0);
      *(long *)(param_1 + 0xc0) = lVar17;
      *(long *)(param_1 + 200) = lVar16;
      pcStack_188 = *(code **)(param_1 + 0xd0);
      *(long *)(param_1 + 0xd0) = lVar33;
      pmStack_198 = pmStack_1a0;
      pmStack_190 = pmStack_1a0;
      FUN_10b24a108(&pmStack_1a0);
    }
    *(long *)(param_1 + 200) = lVar16;
    FUN_10b2463e4(&pmStack_c0);
    ppmVar9 = ppmVar9 + 1;
  }
  FUN_10b249aec(param_1 + 0xf0,param_1 + 0xa8);
  if (*(long *)(param_1 + 0xf0) != *(long *)(param_1 + 0xf8)) {
    lVar16 = *(long *)(param_1 + 200);
    for (lVar15 = *(long *)(param_1 + 0xc0); lVar15 != lVar16; lVar15 = lVar15 + 0x30) {
      piVar24 = *(int **)(lVar15 + 0x18);
      piVar3 = *(int **)(lVar15 + 0x20);
      if (piVar24 != piVar3) {
        piVar2 = *(int **)(param_1 + 0xf0);
        piVar4 = *(int **)(param_1 + 0xf8);
        for (; piVar28 = piVar2, piVar24 != piVar3; piVar24 = piVar24 + 2) {
          for (; piVar28 != piVar4; piVar28 = piVar28 + 2) {
            if (*piVar28 == *piVar24) {
              if (piVar24[1] < piVar28[1]) {
                piVar28[1] = piVar24[1];
              }
              break;
            }
          }
        }
      }
    }
  }
  puVar11 = (undefined8 *)(CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffc);
  lVar15 = (long)*(char *)((long)puVar11 + 0x17);
  puVar12 = puVar11;
  if (lVar15 < 0) {
    puVar12 = (undefined8 *)*puVar11;
    lVar15 = puVar11[1];
  }
  func_0x000107c3018c(&pmStack_1a0,puVar12,lVar15,0,0);
  pmVar19 = (mach_header *)(param_1 + 0x108);
  func_0x000107c27b9c(pmVar19,&pmStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pmStack_1a0);
  func_0x000107c278b0(param_1 + 0x120);
  pmStack_b8 = *(mach_header **)(param_1 + 0x110);
  pmStack_c0 = *(mach_header **)(param_1 + 0x108);
  if (-1 < (char)param_1[0x11f]) {
    pmStack_b8 = (mach_header *)(ulong)(byte)param_1[0x11f];
    pmStack_c0 = pmVar19;
  }
  uStack_b0 = 0x2c;
  func_0x0001089d9414(&pmStack_1a0,&pmStack_c0);
  func_0x00010b249bc8(auStack_a8,&pmStack_c0);
  while( true ) {
    if ((dword)pmStack_198 == (dword)pmStack_a0 && (undefined1  [8])pmStack_1a0 == auStack_a8)
    break;
    pcStack_1b8 = pcStack_188;
    pmStack_1c0 = pmStack_190;
    pmVar31 = pmStack_190;
    pcVar8 = pcStack_188;
    func_0x0001089ed7d4();
    pmStack_1c0 = pmVar31;
    pcStack_1b8 = pcVar8;
    if (pcVar8 != (code *)0x0) {
      func_0x000107c27950(param_1 + 0x120,&pmStack_1c0);
    }
    func_0x000107c34be0(&pmStack_1a0);
  }
  puVar13 = (ulong *)(uStack_e8 & 0xfffffffffffffffc);
  if (*(char *)((long)puVar13 + 0x17) < '\0') {
    if (puVar13[1] != 0) {
      puVar13 = (ulong *)*puVar13;
      goto LAB_10b248fe0;
    }
  }
  else if (*(char *)((long)puVar13 + 0x17) != '\0') {
LAB_10b248fe0:
    func_0x00010b24a41c(auStack_a8,puVar13);
    if (auStack_a8 != (undefined1  [8])pmStack_a0) {
      pmStack_1a0 = (mach_header *)&PTR_FUN_110d246b8;
      pmStack_198 = (mach_header *)0x0;
      pcStack_188 = (code *)0x0;
      puStack_180 = (undefined1 *)0x0;
      pmStack_190 = (mach_header *)0x0;
      uStack_178 = 0;
      ppmVar9 = &pmStack_1a0;
      func_0x000107c3034c(ppmVar9,auStack_a8,(int)pmStack_a0 - auStack_a8._0_4_);
      if ((int)ppmVar9 != 0) {
        if (param_1[0x168] == '\x01') {
          func_0x00010b24a46c();
        }
        else {
          *(undefined ***)(param_1 + 0x138) = &PTR_FUN_110d246b8;
          *(undefined8 *)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x150) = 0;
          *(undefined8 *)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
          *(undefined4 *)(param_1 + 0x160) = 0;
          func_0x00010b24a46c();
          param_1[0x168] = 1;
        }
      }
      FUN_10b5d70b0(&pmStack_1a0);
    }
    func_0x000107c27914(auStack_a8);
  }
  FUN_10b24985c(auStack_a8);
  plVar7 = plStack_98;
  plVar22 = plStack_98 + 3;
  func_0x000107c278c4(plVar22,&pppppuStack_d8);
  plVar37 = (long *)plVar7[1];
  if (plVar37 != (long *)0x0) {
    puVar36 = (undefined *)((long)plVar37 + -1);
    if (((ulong)plVar37 & (ulong)puVar36) == 0) {
      plVar34 = (long *)((ulong)puVar36 & (ulong)plVar22);
    }
    else {
      plVar34 = plVar22;
      if (plVar37 <= plVar22) {
        uVar21 = 0;
        if (plVar37 != (long *)0x0) {
          uVar21 = (ulong)plVar22 / (ulong)plVar37;
        }
        plVar34 = (long *)((long)plVar22 - uVar21 * (long)plVar37);
      }
    }
    pmVar31 = *(mach_header **)(*plVar7 + (long)plVar34 * 8);
    if (pmVar31 != (mach_header *)0x0) {
      do {
        while( true ) {
          pmVar31 = *(mach_header **)pmVar31;
          if (pmVar31 == (mach_header *)0x0) goto LAB_10b249110;
          plVar20 = *(long **)&pmVar31->cpusubtype;
          if (plVar20 != plVar22) break;
          pdVar10 = &pmVar31->ncmds;
          func_0x000107c278d0(pdVar10,&pppppuStack_d8);
          if (((ulong)pdVar10 & 1) != 0) goto LAB_10b2494b4;
        }
        if (((ulong)plVar37 & (ulong)puVar36) == 0) {
          plVar20 = (long *)((ulong)plVar20 & (ulong)puVar36);
        }
        else if (plVar37 <= plVar20) {
          uVar21 = 0;
          if (plVar37 != (long *)0x0) {
            uVar21 = (ulong)plVar20 / (ulong)plVar37;
          }
          plVar20 = (long *)((long)plVar20 - uVar21 * (long)plVar37);
        }
      } while (plVar20 == plVar34);
    }
  }
LAB_10b249110:
  pmVar31 = (mach_header *)0x1b0;
  __Znwm();
  pmVar30 = (mach_header *)(plVar7 + 2);
  pmStack_190 = (mach_header *)0x0;
  pmVar31->magic = 0;
  pmVar31->cputype = 0;
  *(long **)&pmVar31->cpusubtype = plVar22;
  pmStack_1a0 = pmVar31;
  pmStack_198 = pmVar30;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&pmVar31->ncmds,&pppppuStack_d8);
  _bzero(&pmVar31[1].cpusubtype,0x188);
  FUN_10b249f68(&pmVar31[1].cpusubtype);
  pmStack_190 = (mach_header *)CONCAT71(pmStack_190._1_7_,1);
  if ((plVar37 == (long *)0x0) || (*(float *)(plVar7 + 4) * (float)plVar37 < (float)(plVar7[3] + 1))
     ) {
    uVar21 = 1;
    if ((long *)0x2 < plVar37) {
      uVar21 = (ulong)(((ulong)plVar37 & (ulong)((long)plVar37 + -1)) != 0);
    }
    plVar34 = (long *)(uVar21 | (long)plVar37 << 1);
    plVar37 = (long *)(long)((float)(plVar7[3] + 1) / *(float *)(plVar7 + 4));
    if (plVar34 <= plVar37) {
      plVar34 = plVar37;
    }
    if ((undefined *)((long)plVar34 + -1) == (undefined *)0x0) {
      plVar34 = (long *)0x2;
    }
    else if (((ulong)plVar34 & (ulong)((long)plVar34 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar37 = (long *)plVar7[1];
    if (plVar37 < plVar34) {
LAB_10b2491d4:
      if ((ulong)plVar34 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10b249688);
        (*pcVar8)();
      }
      lVar15 = (long)plVar34 << 3;
      __Znwm(lVar15);
      FUN_10b24a3b8(plVar7,lVar15);
      plVar7[1] = (long)plVar34;
      lVar15 = *plVar7;
      for (plVar37 = (long *)0x0; plVar34 != plVar37; plVar37 = (long *)((long)plVar37 + 1)) {
        *(undefined8 *)(lVar15 + (long)plVar37 * 8) = 0;
      }
      plVar20 = *(long **)pmVar30;
      plVar37 = plVar34;
      if (plVar20 != (long *)0x0) {
        plVar25 = (long *)plVar20[1];
        puVar36 = (undefined *)((long)plVar34 + -1);
        uVar21 = 0;
        if (plVar34 != (long *)0x0) {
          uVar21 = (ulong)plVar25 / (ulong)plVar34;
        }
        plVar26 = plVar25;
        if (plVar34 <= plVar25) {
          plVar26 = (long *)((long)plVar25 - uVar21 * (long)plVar34);
        }
        if (((ulong)plVar34 & (ulong)puVar36) == 0) {
          plVar26 = (long *)((ulong)plVar25 & (ulong)puVar36);
        }
        *(mach_header **)(lVar15 + (long)plVar26 * 8) = pmVar30;
        while (plVar25 = plVar20, plVar20 = (long *)*plVar25, plVar20 != (long *)0x0) {
          plVar27 = (long *)plVar20[1];
          if (((ulong)plVar34 & (ulong)puVar36) == 0) {
            plVar27 = (long *)((ulong)plVar27 & (ulong)puVar36);
          }
          else if (plVar34 <= plVar27) {
            uVar21 = 0;
            if (plVar34 != (long *)0x0) {
              uVar21 = (ulong)plVar27 / (ulong)plVar34;
            }
            plVar27 = (long *)((long)plVar27 - uVar21 * (long)plVar34);
          }
          if (plVar27 != plVar26) {
            if (*(long *)(lVar15 + (long)plVar27 * 8) == 0) {
              *(long **)(lVar15 + (long)plVar27 * 8) = plVar25;
              plVar26 = plVar27;
            }
            else {
              *plVar25 = *plVar20;
              *plVar20 = **(undefined8 **)(lVar15 + (long)plVar27 * 8);
              **(long **)(lVar15 + (long)plVar27 * 8) = (long)plVar20;
              plVar20 = plVar25;
            }
          }
        }
      }
    }
    else if (plVar34 < plVar37) {
      plVar20 = (long *)(long)((float)(ulong)plVar7[3] / *(float *)(plVar7 + 4));
      if ((plVar37 < (long *)0x3) || (((ulong)plVar37 & (ulong)((long)plVar37 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar20) {
        plVar20 = (long *)(1L << (-LZCOUNT((undefined *)((long)plVar20 + -1)) & 0x3fU));
      }
      if (plVar34 <= plVar20) {
        plVar34 = plVar20;
      }
      if (plVar34 < plVar37) {
        if (plVar34 != (long *)0x0) goto LAB_10b2491d4;
        FUN_10b24a3b8(plVar7,0);
        plVar7[1] = 0;
        plVar37 = (long *)0x0;
      }
      else {
        plVar37 = (long *)plVar7[1];
      }
    }
    if (((ulong)plVar37 & (ulong)((long)plVar37 + -1)) == 0) {
      plVar34 = (long *)((ulong)((long)plVar37 + -1) & (ulong)plVar22);
    }
    else {
      plVar34 = plVar22;
      if (plVar37 <= plVar22) {
        uVar21 = 0;
        if (plVar37 != (long *)0x0) {
          uVar21 = (ulong)plVar22 / (ulong)plVar37;
        }
        plVar34 = (long *)((long)plVar22 - uVar21 * (long)plVar37);
      }
    }
  }
  lVar15 = *plVar7;
  plVar22 = *(long **)(lVar15 + (long)plVar34 * 8);
  if (plVar22 == (long *)0x0) {
    dVar6 = pmVar30->cputype;
    pmVar31->magic = pmVar30->magic;
    pmVar31->cputype = dVar6;
    *(mach_header **)pmVar30 = pmVar31;
    *(mach_header **)(lVar15 + (long)plVar34 * 8) = pmVar30;
    if (*(long *)pmVar31 != 0) {
      plVar34 = *(long **)(*(long *)pmVar31 + 8);
      if (((ulong)plVar37 & (ulong)((long)plVar37 + -1)) == 0) {
        plVar34 = (long *)((ulong)plVar34 & (ulong)((long)plVar37 + -1));
      }
      else if (plVar37 <= plVar34) {
        uVar21 = 0;
        if (plVar37 != (long *)0x0) {
          uVar21 = (ulong)plVar34 / (ulong)plVar37;
        }
        plVar34 = (long *)((long)plVar34 - uVar21 * (long)plVar37);
      }
      *(mach_header **)(lVar15 + (long)plVar34 * 8) = pmVar31;
    }
  }
  else {
    lVar15 = *plVar22;
    pmVar31->magic = (int)lVar15;
    pmVar31->cputype = (int)((ulong)lVar15 >> 0x20);
    *plVar22 = (long)pmVar31;
  }
  pmStack_1a0 = (mach_header *)0x0;
  plVar7[3] = plVar7[3] + 1;
  FUN_10b24a3d0(&pmStack_1a0);
LAB_10b2494b4:
  func_0x00010b5d7c20(&pmVar31[1].cpusubtype,param_1);
  cVar5 = (char)pmVar31[6].cpusubtype;
  if (cVar5 == param_1[0xa0]) {
    if (cVar5 != '\0') {
      func_0x00010b5d3130(&pmVar31[4].cpusubtype,param_1 + 0x60);
    }
  }
  else if (cVar5 == '\0') {
    FUN_10b2462f0(&pmVar31[4].cpusubtype,param_1 + 0x60);
  }
  else {
    FUN_10b24a008(&pmVar31[4].cpusubtype);
  }
  FUN_10b249aec(&pmVar31[6].ncmds,param_1 + 0xa8);
  if (&pmVar31[1].cpusubtype != (dword *)param_1) {
    lVar15 = *(long *)(param_1 + 0xc0);
    lVar16 = *(long *)(param_1 + 200);
    uVar21 = lVar16 - lVar15;
    lVar17 = *(long *)&pmVar31[7].cpusubtype;
    if ((ulong)(*(long *)&pmVar31[7].flags - lVar17) < uVar21) {
      if (lVar17 != 0) {
        FUN_10b24648c(&pmVar31[7].cpusubtype);
        uVar14._0_4_ = pmVar31[7].cpusubtype;
        uVar14._4_4_ = pmVar31[7].filetype;
        __ZdlPv(uVar14);
        pmVar31[7].cpusubtype = 0;
        pmVar31[7].filetype = 0;
        pmVar31[7].ncmds = 0;
        pmVar31[7].sizeofcmds = 0;
        pmVar31[7].flags = 0;
        pmVar31[7].reserved = 0;
      }
      pdVar10 = &pmVar31[7].cpusubtype;
      FUN_10b24a0b8(pdVar10,(long)uVar21 / 0x30);
      func_0x00010b249d70(&pmVar31[7].cpusubtype,pdVar10);
      lVar17 = lVar15;
    }
    else {
      uVar23 = *(long *)&pmVar31[7].ncmds - lVar17;
      if (uVar21 <= uVar23) {
        FUN_10b24a1f0(lVar15,lVar16);
        FUN_10b246494(&pmVar31[7].cpusubtype,lVar15);
        goto LAB_10b2495c4;
      }
      lVar17 = lVar15 + uVar23;
      FUN_10b24a1f0(lVar15,lVar17);
    }
    FUN_10b249db8(&pmVar31[7].cpusubtype,lVar17,lVar16);
  }
LAB_10b2495c4:
  func_0x000107c27d2c(pmVar31 + 8,param_1 + 0xd8);
  FUN_10b249aec(&pmVar31[8].flags,param_1 + 0xf0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&pmVar31[9].ncmds,pmVar19);
  func_0x000107c27d2c(&pmVar31[10].cpusubtype,param_1 + 0x120);
  cVar5 = (char)pmVar31[0xc].ncmds;
  if (cVar5 == param_1[0x168]) {
    if (cVar5 != '\0') {
      FUN_10b5d72cc(pmVar31 + 0xb,param_1 + 0x138);
    }
  }
  else if (cVar5 == '\0') {
    FUN_10b249f44(pmVar31 + 0xb,param_1 + 0x138);
  }
  else {
    FUN_10b5d70b0(pmVar31 + 0xb);
    *(undefined1 *)&pmVar31[0xc].ncmds = 0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&pmVar31[0xc].flags,param_1 + 0x170);
  func_0x000107c2798c(auStack_a8);
  func_0x000107c27914(&lStack_150);
  FUN_10b5d75c8(&ppuStack_138);
LAB_10b24965c:
  func_0x00010b24a484();
  return;
}



/* Entry: 10b24985c; end: 10b2498e7;  */

void FUN_10b24985c(long param_1)

{
  int iVar1;
  
  if ((bRam00000001137f4300 & 1) == 0) {
    iVar1 = 0x137f4300;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137f4308 = 0x32aaaba7;
      uRam00000001137f4360 = 0;
      uRam00000001137f4318 = 0;
      uRam00000001137f4310 = 0;
      uRam00000001137f4328 = 0;
      uRam00000001137f4320 = 0;
      uRam00000001137f4338 = 0;
      uRam00000001137f4330 = 0;
      uRam00000001137f4348 = 0;
      uRam00000001137f4340 = 0;
      uRam00000001137f4358 = 0;
      uRam00000001137f4350 = 0;
      uRam00000001137f4368 = 0x3f800000;
      ___cxa_guard_release(0x1137f4300);
    }
  }
  func_0x000107c27f4c(param_1,0x1137f4308);
  *(undefined8 *)(param_1 + 0x10) = 0x1137f4348;
  return;
}



/* Entry: 10b2498e8; end: 10b2498ef;  */

undefined8 * FUN_10b2498e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d247e8;
  param_1[1] = 0;
  FUN_10b5d74e8();
  return param_1;
}



/* Entry: 10b2498f0; end: 10b249aeb;  */

void FUN_10b2498f0(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lStack_c0;
  long lStack_b8;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  ulong *puStack_70;
  ulong *puStack_68;
  long *plStack_60;
  long *plStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ppuStack_a8 = &PTR_FUN_110d24888;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uVar9 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  FUN_10b24a41c(&lStack_c0,puVar6,uVar9);
  if (lStack_c0 != lStack_b8) {
    pppuVar8 = &ppuStack_a8;
    func_0x000107c3034c(pppuVar8,lStack_c0,(int)lStack_b8 - (int)lStack_c0);
    if ((int)pppuVar8 != 0) {
      uVar9 = (ulong)(int)uStack_90;
      plVar11 = param_1 + 2;
      lVar12 = *param_1;
      if ((ulong)(*plVar11 - lVar12 >> 3) < uVar9) {
        if ((int)uStack_90 < 0) {
          FUN_10b249d04();
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10b249ac0);
          (*pcVar7)();
        }
        lVar13 = param_1[1];
        plStack_58 = plVar11;
        FUN_10b249d10();
        puStack_70 = (ulong *)(uVar9 + (lVar13 - lVar12));
        plStack_60 = (long *)(uVar9 + lStack_c0 * 8);
        puStack_68 = puStack_70;
        func_0x00010b24a458();
        FUN_10b24a2d4(auStack_78);
        uVar9 = (ulong)(int)uStack_90;
      }
      puVar1 = &uStack_98;
      if ((uStack_98 & 1) != 0) {
        puVar1 = (ulong *)(uStack_98 + 7);
      }
      for (lVar12 = uVar9 << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
        uVar5 = *(int *)(*puVar1 + 0x10) - 1;
        if (uVar5 < 3) {
          uVar9 = *(ulong *)(&UNK_10e56e7c0 + (ulong)uVar5 * 8);
        }
        else {
          uVar9 = 0;
        }
        uVar9 = uVar9 | (ulong)*(uint *)(*puVar1 + 0x14) << 0x20;
        puVar2 = (ulong *)param_1[1];
        if (puVar2 < (ulong *)param_1[2]) {
          puVar14 = puVar2 + 1;
          *puVar2 = uVar9;
        }
        else {
          lVar13 = ((long)puVar2 - *param_1 >> 3) + 1;
          plVar10 = param_1;
          FUN_10b24a150();
          lVar3 = *param_1;
          lVar4 = param_1[1];
          if (plVar10 == (long *)0x0) {
            lVar13 = 0;
            plStack_58 = plVar11;
          }
          else {
            plStack_58 = plVar11;
            FUN_10b249d10();
          }
          puStack_70 = (ulong *)((long)plVar10 + (lVar4 - lVar3));
          plStack_60 = plVar10 + lVar13;
          puStack_68 = puStack_70 + 1;
          *puStack_70 = uVar9;
          func_0x00010b24a458();
          puVar14 = (ulong *)param_1[1];
          FUN_10b24a2d4(auStack_78);
        }
        param_1[1] = (long)puVar14;
        puVar1 = puVar1 + 1;
      }
    }
  }
  func_0x000107c27914(&lStack_c0);
  FUN_10b5d7c58(&ppuStack_a8);
  return;
}



/* Entry: 10b249aec; end: 10b249bc7;  */

void FUN_10b249aec(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  long *unaff_x19;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010b24a48c();
  if ((bool)in_ZR) {
    return;
  }
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar4 = lVar3 - lVar2;
  lVar5 = *unaff_x19;
  if ((ulong)(unaff_x19[2] - lVar5) < uVar4) {
    FUN_10b24a04c();
    FUN_10b24a150();
    FUN_10b249ccc();
    lVar5 = unaff_x19[1];
  }
  else {
    lVar6 = unaff_x19[1];
    if ((ulong)(lVar6 - lVar5) < uVar4) {
      lVar1 = lVar2 + (lVar6 - lVar5);
      if (lVar6 != lVar5) {
        _memmove(lVar5,lVar2);
        lVar6 = unaff_x19[1];
      }
      lVar3 = lVar3 - lVar1;
      if (lVar3 != 0) {
        _memmove(lVar6,lVar1,lVar3);
      }
      lVar5 = lVar6 + lVar3;
      goto LAB_10b249bac;
    }
  }
  if (lVar3 != lVar2) {
    func_0x00010b24a430();
  }
  lVar5 = lVar5 + uVar4;
LAB_10b249bac:
  unaff_x19[1] = lVar5;
  return;
}



/* Entry: 10b249bc8; end: 10b249bdf;  */

/* WARNING: Removing unreachable block (ram,0x0001089d9468) */

long * FUN_10b249bc8(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (long)param_2;
  *(char *)(param_1 + 5) = (char)param_2[2];
  lVar1 = param_2[1];
  if (*param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 10b249be0; end: 10b249c3f;  */

void FUN_10b249be0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b24a48c();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b5d8510();
    }
    else {
      func_0x00010b5d84d8();
    }
  }
  return;
}



/* Entry: 10b249c40; end: 10b249ccb;  */

undefined8 * FUN_10b249c40(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  lVar1 = param_2[1] - *param_2;
  puStack_40 = param_1;
  if (lVar1 != 0) {
    FUN_10b249ccc(param_1,lVar1 >> 3);
    lVar2 = param_1[1];
    func_0x00010b24a430();
    param_1[1] = lVar2 + lVar1;
  }
  uStack_38 = 1;
  func_0x00010b249d44(&puStack_40);
  return param_1;
}



/* Entry: 10b249ccc; end: 10b249d03;  */

undefined1  [16] FUN_10b249ccc(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    uVar2 = param_2;
    FUN_10b249d10();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + uVar2 * 8;
    auVar5._8_8_ = uVar2;
    auVar5._0_8_ = param_2;
    return auVar5;
  }
  FUN_10b249d04();
  func_0x00010b24a478();
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((param_1[1] & 1) == 0) {
    FUN_10b246410(param_1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10b249d04; end: 10b249d0f;  */

undefined1  [16] FUN_10b249d04(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x00010b24a478();
  if (param_1 >> 0x3d == 0) {
    lVar1 = param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b246410(param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b249d10; end: 10b249db7;  */

undefined1  [16] FUN_10b249d10(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar1 = param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b246410(param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b249db8; end: 10b249e83;  */

void FUN_10b249db8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, param_2 != param_3; param_2 = param_2 + 0x30) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1,param_2);
    FUN_10b249c40(lVar1 + 0x18,param_2 + 0x18);
    lVar1 = lStack_48 + 0x30;
  }
  uStack_58 = 1;
  func_0x00010b249ed4(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b249e84; end: 10b249e8f;  */

undefined1  [16] FUN_10b249e84(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x00010b24a478();
  if (param_1 < 0x555555555555556) {
    lVar1 = param_1 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      func_0x00010b2464c8();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10b249e90; end: 10b249f43;  */

undefined1  [16] FUN_10b249e90(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 < 0x555555555555556) {
    lVar1 = param_1 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      func_0x00010b2464c8();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10b249f44; end: 10b249f67;  */

void FUN_10b249f44(long param_1,undefined8 param_2)

{
  FUN_10b5d7048(param_1,0,param_2);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10b249f68; end: 10b249fa7;  */

long FUN_10b249f68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10b2498e8();
  *(undefined1 *)(lVar1 + 0x60) = 0;
  *(undefined1 *)(lVar1 + 0xa0) = 0;
  *(undefined1 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 0x178) = 0;
  *(undefined8 *)(lVar1 + 0x180) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  _bzero(lVar1 + 0xa8,0x91);
  return param_1;
}



/* Entry: 10b249fa8; end: 10b24a007;  */

void FUN_10b249fa8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b24a48c();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b5d3164();
    }
    else {
      func_0x00010b5d3130();
    }
  }
  return;
}



/* Entry: 10b24a008; end: 10b24a02b;  */

void FUN_10b24a008(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b5d2b68();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10b24a02c; end: 10b24a04b;  */

void FUN_10b24a02c(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  *param_1 = &PTR_FUN_110d23898;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  func_0x00010b24a48c();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b5d3164();
    }
    else {
      func_0x00010b5d3130();
    }
  }
  return;
}



/* Entry: 10b24a04c; end: 10b24a0b7;  */

void FUN_10b24a04c(long *param_1)

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



/* Entry: 10b24a0b8; end: 10b24a107;  */

long * FUN_10b24a0b8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((long *)0x555555555555555 < param_2) {
    FUN_10b249e84();
    lVar3 = param_1[1];
    while (lVar3 != param_1[2]) {
      param_1[2] = param_1[2] + -0x30;
      func_0x00010b2464c8();
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    plVar2 = (long *)0x555555555555555;
  }
  return plVar2;
}



/* Entry: 10b24a108; end: 10b24a14f;  */

long * FUN_10b24a108(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x30;
    func_0x00010b2464c8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b24a150; end: 10b24a18f;  */

ulong FUN_10b24a150(long *param_1,ulong param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x1fffffffffffffff;
    }
    return uVar1;
  }
  FUN_10b249d04();
  func_0x00010b24a48c();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b5d7304();
    }
    else {
      FUN_10b5d72cc();
    }
  }
  return unaff_x19;
}



/* Entry: 10b24a190; end: 10b24a1ef;  */

void FUN_10b24a190(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b24a48c();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b5d7304();
    }
    else {
      FUN_10b5d72cc();
    }
  }
  return;
}



/* Entry: 10b24a1f0; end: 10b24a2d3;  */

long FUN_10b24a1f0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1,param_1);
    FUN_10b249aec(lVar1 + 0x18,param_1 + 0x18);
    lVar1 = lVar1 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return param_3;
}


