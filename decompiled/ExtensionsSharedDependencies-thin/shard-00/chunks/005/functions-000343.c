/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006aa4d8; end: 006aa6b3;  */

void FUN_006aa4d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      puVar3 = param_1;
      func_0x006aaee4(param_1,param_2[-1],*param_1);
      if ((int)puVar3 == 0) {
        *param_5 = *param_1;
        uVar5 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar5 = *param_1;
      }
      param_5[1] = uVar5;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        lVar6 = 0;
        *param_5 = *param_1;
        puVar3 = param_1;
        puVar7 = param_5;
        while (puVar3 = puVar3 + 1, puVar3 != param_2) {
          func_0x006aaee4();
          if ((int)param_1 == 0) {
            puVar7[1] = *puVar3;
          }
          else {
            puVar7[1] = *puVar7;
            for (lVar8 = lVar6; puVar4 = param_5, lVar8 != 0; lVar8 = lVar8 + -8) {
              func_0x006aaee4();
              puVar4 = (undefined8 *)((long)param_5 + lVar8);
              if ((int)param_1 == 0) break;
              *(undefined8 *)((long)param_5 + lVar8) = ((undefined8 *)((long)param_5 + lVar8))[-1];
            }
            *puVar4 = *puVar3;
          }
          lVar6 = lVar6 + 8;
          puVar7 = puVar7 + 1;
        }
      }
    }
    else {
      uVar9 = param_4 >> 1;
      puVar3 = param_1 + uVar9;
      FUN_006aa174(param_1,puVar3,param_3,uVar9,param_5,uVar9);
      lVar6 = param_4 - (param_4 >> 1);
      puVar4 = puVar3;
      FUN_006aa174(puVar3,param_2,param_3,lVar6,param_5 + uVar9,lVar6);
      puVar7 = puVar3;
      for (; param_1 != puVar3; param_1 = (undefined8 *)((long)param_1 + lVar6)) {
        if (puVar7 == param_2) {
          for (; param_1 != puVar3; param_1 = param_1 + 1) {
            *param_5 = *param_1;
            param_5 = param_5 + 1;
          }
          return;
        }
        func_0x006aaee4();
        bVar2 = (int)puVar4 == 0;
        puVar1 = puVar7;
        if (bVar2) {
          puVar1 = param_1;
        }
        lVar6 = 8;
        if (bVar2) {
          lVar6 = 0;
        }
        puVar7 = (undefined8 *)((long)puVar7 + lVar6);
        lVar6 = 0;
        if (bVar2) {
          lVar6 = 8;
        }
        *param_5 = *puVar1;
        param_5 = param_5 + 1;
      }
      for (; puVar7 != param_2; puVar7 = puVar7 + 1) {
        *param_5 = *puVar7;
        param_5 = param_5 + 1;
      }
    }
  }
  return;
}



/* Entry: 006aa6b4; end: 006aaa37;  */

void FUN_006aa6b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puStack_90;
  undefined8 uStack_68;
  
  puVar3 = param_1;
  puStack_90 = param_3;
  while( true ) {
    if (param_6 == 0) {
      return;
    }
    if (param_6 <= param_8 || param_5 <= param_8) break;
    lVar13 = 0;
    puVar5 = puVar3;
    puVar6 = puVar3;
    while( true ) {
      lVar15 = param_5 - lVar13;
      if (lVar15 == 0) {
        return;
      }
      func_0x006ab02c();
      if (((ulong)param_1 & 1) != 0) break;
      puVar6 = puVar6 + 1;
      lVar13 = lVar13 + 1;
      puVar5 = puVar5 + 1;
    }
    if (lVar15 < param_6) {
      lVar9 = param_6 / 2;
      puVar11 = param_2 + lVar9;
      uVar1 = (long)param_2 - (long)puVar5 >> 3;
      puVar12 = puVar6;
      while (uVar1 != 0) {
        uVar14 = uVar1 >> 1;
        puVar3 = param_4;
        FUN_006aa37c(param_4,*puVar11,puVar12[uVar14]);
        uVar10 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
        uVar1 = uVar14;
        if ((int)puVar3 == 0) {
          uVar1 = uVar10;
          puVar12 = puVar12 + uVar14 + 1;
        }
      }
      lVar15 = (long)puVar12 - (long)puVar5 >> 3;
    }
    else {
      if (param_5 + -1 == lVar13) {
        uVar8 = puVar3[lVar13];
        puVar3[lVar13] = *param_2;
        *param_2 = uVar8;
        return;
      }
      lVar15 = lVar15 / 2;
      puVar12 = puVar6 + lVar15;
      uStack_68 = *param_4;
      uVar1 = (long)puStack_90 - (long)param_2 >> 3;
      puVar5 = param_2;
      while (puVar11 = puVar5, uVar1 != 0) {
        uVar10 = uVar1 >> 1;
        puVar4 = &uStack_68;
        FUN_006aa37c(puVar4,puVar11[uVar10],puVar3[lVar15 + lVar13]);
        uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
        puVar5 = puVar11 + uVar10 + 1;
        if ((int)puVar4 == 0) {
          uVar1 = uVar10;
          puVar5 = puVar11;
        }
      }
      lVar9 = (long)puVar11 - (long)param_2 >> 3;
    }
    lVar7 = (param_5 - lVar15) - lVar13;
    puVar5 = puVar12;
    FUN_006a3ac8(puVar12,param_2,puVar11);
    if (lVar15 + lVar9 < ((param_5 + param_6) - (lVar15 + lVar9)) - lVar13) {
      FUN_006aa6b4(puVar6,puVar12,puVar5,param_4,lVar15,lVar9,param_7,param_8);
      param_1 = puVar6;
      param_5 = lVar7;
      param_2 = puVar11;
      puVar3 = puVar5;
      param_6 = param_6 - lVar9;
    }
    else {
      param_1 = puVar5;
      FUN_006aa6b4(puVar5,puVar11,puStack_90,param_4,lVar7,param_6 - lVar9,param_7,param_8);
      param_5 = lVar15;
      param_2 = puVar12;
      puVar3 = puVar6;
      param_6 = lVar9;
      puStack_90 = puVar5;
    }
  }
  if (param_6 < param_5) {
    for (lVar13 = 0; (undefined8 *)((long)param_2 + lVar13) != puStack_90; lVar13 = lVar13 + 8) {
      *(undefined8 *)((long)param_7 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
    }
    puVar6 = (undefined8 *)((long)param_7 + lVar13);
    while (puStack_90 = puStack_90 + -1, puVar6 != param_7) {
      if (param_2 == puVar3) {
        while (puVar6 != param_7) {
          puVar6 = puVar6 + -1;
          *puStack_90 = *puVar6;
          puStack_90 = puStack_90 + -1;
        }
        return;
      }
      func_0x006ab02c();
      puVar5 = puVar6;
      puVar11 = param_2 + -1;
      puVar12 = param_2;
      if ((int)param_1 == 0) {
        puVar5 = puVar6 + -1;
        puVar11 = param_2;
        puVar12 = puVar6;
      }
      param_2 = puVar11;
      *puStack_90 = puVar12[-1];
      puVar6 = puVar5;
    }
  }
  else {
    lVar13 = -(long)param_7;
    puVar5 = param_7;
    for (puVar6 = puVar3; puVar6 != param_2; puVar6 = puVar6 + 1) {
      *puVar5 = *puVar6;
      lVar13 = lVar13 + -8;
      puVar5 = puVar5 + 1;
    }
    for (; puVar5 != param_7; param_7 = (undefined8 *)((long)param_7 + lVar15)) {
      if (param_2 == puStack_90) {
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_0099a400)(puVar3,param_7,-((long)param_7 + lVar13));
        return;
      }
      func_0x006ab02c();
      bVar2 = (int)param_1 == 0;
      puVar6 = param_2;
      if (bVar2) {
        puVar6 = param_7;
      }
      lVar15 = 8;
      if (bVar2) {
        lVar15 = 0;
      }
      param_2 = (undefined8 *)((long)param_2 + lVar15);
      lVar15 = 0;
      if (bVar2) {
        lVar15 = 8;
      }
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}



/* Entry: 006aaa38; end: 006aaadb;  */

ulong FUN_006aaa38(ulong param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  while( true ) {
    if (param_2 <= uVar2) {
      return uVar2;
    }
    func_0x006aae6c();
    FUN_00538888();
    if (param_1 == 0) break;
    uVar1 = param_3[1];
    func_0x006579b0();
    FUN_00656390();
    uVar2 = param_1;
    if (uVar1 == 0) {
      param_1 = param_3[2];
      func_0x006895cc(param_1,param_3[3]);
      FUN_006a4bc0();
    }
    else {
      param_1 = *param_3;
      FUN_00533cb4(param_1,uStack_48);
    }
  }
  return 0;
}



/* Entry: 006aaadc; end: 006ab237;  */

void FUN_006aaadc(void)

{
  return;
}



/* Entry: 006ab238; end: 006ab3e3;  */

double FUN_006ab238(long param_1,long *param_2)

{
  long lVar1;
  double dStack_28;
  
  dStack_28 = 0.0;
  lVar1 = param_1;
  _strlen();
  lVar1 = param_1 + lVar1;
  FUN_00570a64(param_1,lVar1,&dStack_28,3);
  if ((int)lVar1 == 0x22) {
    if (dStack_28 <= 1.0) {
      if (dStack_28 < -1.0) {
        dStack_28 = -INFINITY;
      }
    }
    else {
      dStack_28 = INFINITY;
    }
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_1;
  }
  return dStack_28;
}



/* Entry: 006ab3e4; end: 006ab517;  */

void FUN_006ab3e4(undefined8 param_1,float param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined8 extraout_x8;
  char *pcStack_68;
  undefined8 uStack_60;
  float fStack_54;
  char acStack_50 [24];
  undefined8 uStack_38;
  
  func_0x006ab6ec();
  fStack_54 = param_2;
  uStack_38 = extraout_x8;
  if (param_2 == INFINITY) {
    pcStack_68 = "inf";
    uVar1 = 1;
    goto LAB_006ab420;
  }
  if (param_2 != -INFINITY) {
    uVar1 = !NAN(param_2);
    if (NAN(param_2)) goto LAB_006ab50c;
    pcStack_68 = "%.*g";
    uStack_60 = 4;
    func_0x006ab6d0(6);
    ___error();
    *param_3 = 0;
    piVar2 = (int *)acStack_50;
    _strtof(piVar2,&pcStack_68);
    if ((((acStack_50[0] == '\0') || (*pcStack_68 != '\0')) || (___error(), *piVar2 != 0)) ||
       (uVar1 = param_2 == fStack_54, !(bool)uVar1)) {
      pcStack_68 = "%.*g";
      uStack_60 = 4;
      func_0x006ab6d0(9);
    }
    FUN_006ab56c(acStack_50);
    while( true ) {
      FUN_00425cb4(param_1,acStack_50);
      func_0x006ab6bc(uStack_38);
      if ((bool)uVar1) break;
      ___stack_chk_fail();
LAB_006ab50c:
      pcStack_68 = "nan";
LAB_006ab420:
      uStack_60 = 3;
LAB_006ab444:
      FUN_006ab518(acStack_50,0x18,&pcStack_68);
    }
    return;
  }
  pcStack_68 = "-inf";
  uStack_60 = 4;
  uVar1 = 1;
  goto LAB_006ab444;
}



/* Entry: 006ab518; end: 006ab52b;  */

ulong FUN_006ab518(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = param_2 - 1;
  uStack_40 = 0;
  if (param_2 != 0) {
    uStack_40 = uVar1;
  }
  uStack_38 = 0;
  plVar2 = &lStack_48;
  lStack_48 = param_1;
  FUN_0056138c(plVar2,FUN_00561b44,*param_3,param_3[1],0,0);
  if (((ulong)plVar2 & 1) != 0) {
    if (param_2 != 0) {
      if (uStack_38 <= uVar1) {
        uVar1 = uStack_38;
      }
      *(undefined1 *)(param_1 + uVar1) = 0;
    }
    return uStack_38;
  }
  ___error();
  *(undefined4 *)plVar2 = 0x16;
  return 0xffffffff;
}



/* Entry: 006ab52c; end: 006ab56b;  */

void FUN_006ab52c(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_ZR;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uStack_18;
  
  func_0x006ab6ec();
  func_0x006ab714();
  func_0x006ab6fc();
  func_0x006ab6bc(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = param_1;
  _strchr();
  if (lVar3 == 0) {
    pbVar5 = (byte *)(param_1 + 2);
    while( true ) {
      bVar1 = pbVar5[-2];
      if ((9 < bVar1 - 0x30) &&
         (uVar2 = bVar1 - 0x2b,
         0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) break;
      pbVar5 = pbVar5 + 1;
    }
    if (bVar1 != 0) {
      bVar1 = pbVar5[-1];
      pbVar5[-2] = 0x2e;
      if ((9 < bVar1 - 0x30) &&
         (((uVar2 = bVar1 - 0x2b, 0x3a < uVar2 ||
           ((1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) &&
          (pbVar4 = pbVar5, bVar1 != 0)))) {
        do {
          pbVar6 = pbVar4;
          bVar1 = *pbVar6;
          if (bVar1 - 0x30 < 10) break;
          uVar2 = bVar1 - 0x2b;
          pbVar4 = pbVar6 + 1;
        } while ((0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0) &&
                 bVar1 != 0);
        pbVar4 = pbVar6;
        _strlen(pbVar6);
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_0099a400)(pbVar5 + -1,pbVar6,pbVar4 + 1);
        return;
      }
    }
  }
  return;
}



/* Entry: 006ab56c; end: 006ab67b;  */

void FUN_006ab56c(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  lVar3 = param_1;
  _strchr(param_1,0x2e);
  if (lVar3 == 0) {
    pbVar5 = (byte *)(param_1 + 2);
    while( true ) {
      bVar1 = pbVar5[-2];
      if ((9 < bVar1 - 0x30) &&
         (uVar2 = bVar1 - 0x2b,
         0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) break;
      pbVar5 = pbVar5 + 1;
    }
    if (bVar1 != 0) {
      bVar1 = pbVar5[-1];
      pbVar5[-2] = 0x2e;
      if ((9 < bVar1 - 0x30) &&
         (((uVar2 = bVar1 - 0x2b, 0x3a < uVar2 ||
           ((1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) &&
          (pbVar4 = pbVar5, bVar1 != 0)))) {
        do {
          pbVar6 = pbVar4;
          bVar1 = *pbVar6;
          if (bVar1 - 0x30 < 10) break;
          uVar2 = bVar1 - 0x2b;
          pbVar4 = pbVar6 + 1;
        } while ((0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0) &&
                 bVar1 != 0);
        pbVar4 = pbVar6;
        _strlen(pbVar6);
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memmove_0099a400)(pbVar5 + -1,pbVar6,pbVar4 + 1);
        return;
      }
    }
  }
  return;
}



/* Entry: 006ab67c; end: 006ab6bb;  */

/* WARNING: Possible PIC construction at 0x006ab6a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006ab6a8) */
/* WARNING: Removing unreachable block (ram,0x006ab6b8) */
/* WARNING: Removing unreachable block (ram,0x006ab6ac) */

void FUN_006ab67c(void)

{
  func_0x006ab6ec();
  func_0x006ab714();
  func_0x006ab6fc();
  return;
}



/* Entry: 006ab6bc; end: 006ab73b;  */

void FUN_006ab6bc(void)

{
  return;
}



/* Entry: 006ab73c; end: 006ab7e3;  */

undefined4 * FUN_006ab73c(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x1a) = param_3;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x28] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *param_1 = 0;
  FUN_006ab7e4(param_1 + 0xc,param_1);
  func_0x006ab824(param_1);
  return param_1;
}



/* Entry: 006ab7e4; end: 006ab8db;  */

undefined4 * FUN_006ab7e4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 2,param_2 + 2);
  uVar1 = param_2[10];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = uVar1;
  return param_1;
}



/* Entry: 006ab8dc; end: 006ab92b;  */

long FUN_006ab8dc(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
  if (iVar1 != 0 && *(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x80)) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),iVar1);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 006ab92c; end: 006ab99f;  */

void FUN_006ab92c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puStack_28;
  
  if (*(char *)(param_1 + 0x70) == '\t') {
    iVar4 = (*(int *)(param_1 + 0x90) / 8) * 8 + 8;
  }
  else {
    if (*(char *)(param_1 + 0x70) == '\n') {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      goto LAB_006ab974;
    }
    iVar4 = *(int *)(param_1 + 0x90) + 1;
  }
  *(int *)(param_1 + 0x90) = iVar4;
LAB_006ab974:
  lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
  iVar4 = (int)lVar1;
  *(int *)(param_1 + 0x84) = iVar4;
  if (iVar4 < *(int *)(param_1 + 0x80)) {
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(*(long *)(param_1 + 0x78) + lVar1);
    return;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x98) != 0) {
      iVar4 = *(int *)(param_1 + 0xa0);
      if (iVar4 < *(int *)(param_1 + 0x80)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar4,
                   *(int *)(param_1 + 0x80) - iVar4);
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
    }
    puStack_28 = (undefined1 *)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    do {
      plVar2 = *(long **)(param_1 + 0x60);
      (**(code **)(*plVar2 + 0x10))(plVar2,&puStack_28,param_1 + 0x80);
      if (((ulong)plVar2 & 1) == 0) {
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined1 *)(param_1 + 0x88) = 1;
        goto LAB_006ab8c8;
      }
    } while (*(int *)(param_1 + 0x80) == 0);
    *(undefined1 **)(param_1 + 0x78) = puStack_28;
    uVar3 = *puStack_28;
LAB_006ab8c8:
    *(undefined1 *)(param_1 + 0x70) = uVar3;
  }
  return;
}



/* Entry: 006ab9a0; end: 006abbc7;  */

void FUN_006ab9a0(undefined1 *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [24];
  
  puVar4 = param_1;
LAB_006aba00:
  do {
    while (cVar1 = param_1[0x70], cVar1 == '\n') {
      if ((param_1[0xad] & 1) == 0) {
        func_0x006acc1c();
        func_0x006acbd8();
LAB_006abb9c:
        func_0x006acc14();
        return;
      }
LAB_006abaa0:
      func_0x006acbf0();
    }
    if (cVar1 == '\\') {
      func_0x006acbf0();
      bVar2 = param_1[0x70];
      uVar3 = bVar2 - 0x61;
      if ((uVar3 < 0x16 && (1 << (ulong)(uVar3 & 0x1f) & 0x2a2023U) != 0) ||
         (((uVar3 = bVar2 - 0x22, uVar3 < 0x3b &&
           ((1L << ((ulong)uVar3 & 0x3f) & 0x400000020000021U) != 0)) || ((bVar2 & 0xf8) == 0x30))))
      goto LAB_006abaa0;
      func_0x006accb8();
      if ((((ulong)puVar4 & 1) == 0) && (func_0x006acc9c(), (int)puVar4 == 0)) {
        puVar4 = param_1;
        FUN_006abbfc(param_1,0x75);
        if ((int)puVar4 == 0) {
          puVar4 = param_1;
          FUN_006abbfc(param_1,0x55);
          if ((int)puVar4 == 0) {
            puVar4 = auStack_78;
            FUN_00425cb4(puVar4,&UNK_0091557b);
            func_0x006acbd8();
          }
          else {
            func_0x006acc00();
            if (((((int)puVar4 != 0) && (func_0x006acc00(), (int)puVar4 != 0)) &&
                ((func_0x006acc00(), ((ulong)puVar4 & 1) != 0 ||
                 (puVar4 = param_1, FUN_006abbfc(param_1,0x31), (int)puVar4 != 0)))) &&
               ((((func_0x006acc0c(), (int)puVar4 != 0 && (func_0x006acc0c(), (int)puVar4 != 0)) &&
                 (func_0x006acc0c(), (int)puVar4 != 0)) &&
                ((func_0x006acc0c(), (int)puVar4 != 0 &&
                 (func_0x006acc0c(), ((ulong)puVar4 & 1) != 0)))))) goto LAB_006aba00;
            puVar4 = auStack_78;
            FUN_00425cb4(puVar4,&UNK_0091553d);
            func_0x006acbd8();
          }
        }
        else {
          func_0x006acc0c();
          if ((((int)puVar4 != 0) && (func_0x006acc0c(), (int)puVar4 != 0)) &&
             ((func_0x006acc0c(), (int)puVar4 != 0 && (func_0x006acc0c(), ((ulong)puVar4 & 1) != 0))
             )) goto LAB_006aba00;
          puVar4 = auStack_78;
          FUN_00425cb4(puVar4,&UNK_0091550c);
          func_0x006acbd8();
        }
      }
      else {
        func_0x006acc0c();
        if (((ulong)puVar4 & 1) != 0) goto LAB_006aba00;
        puVar4 = auStack_78;
        FUN_00425cb4(puVar4,&UNK_009154e3);
        func_0x006acbd8();
      }
      func_0x006acc14();
      goto LAB_006aba00;
    }
    if (cVar1 == '\0') {
      func_0x006acc1c();
      func_0x006acbd8();
      goto LAB_006abb9c;
    }
    func_0x006acbf0();
    if (cVar1 == param_2) {
      return;
    }
  } while( true );
}



/* Entry: 006abbc8; end: 006abbfb;  */

void FUN_006abbc8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x006abbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
            (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
             *(undefined4 *)(param_1 + 0x90),puVar2,uVar1);
  return;
}



/* Entry: 006abbfc; end: 006abc63;  */

bool FUN_006abbfc(long param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 == param_2) {
    FUN_006ab92c();
  }
  return cVar1 == param_2;
}



/* Entry: 006abc64; end: 006abe7f;  */

undefined4 FUN_006abc64(ulong param_1,int param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar4;
  ulong uVar5;
  int extraout_w8;
  undefined4 uVar6;
  uint extraout_w9;
  
  uVar5 = param_1;
  if (param_2 == 0) {
LAB_006abcf4:
    iVar4 = (int)uVar5;
    func_0x006acca8();
    if ((param_3 & 1) == 0) {
      func_0x006acc90();
      if (iVar4 != 0) {
        func_0x006acca8();
        goto LAB_006abd08;
      }
      bVar3 = false;
    }
    else {
LAB_006abd08:
      bVar3 = true;
    }
    uVar5 = param_1;
    FUN_006abbfc(param_1,0x65);
    if (((uVar5 & 1) != 0) || (uVar5 = param_1, FUN_006abbfc(param_1,0x45), (int)uVar5 != 0)) {
      uVar5 = param_1;
      FUN_006abbfc(param_1,0x2d);
      if ((uVar5 & 1) == 0) {
        FUN_006abbfc(param_1,0x2b);
      }
      func_0x006acc68();
      if ((bool)in_CY && !(bool)in_ZR) {
        func_0x006acc1c();
        func_0x006acbd8();
        func_0x006acc14();
      }
      else {
        do {
          func_0x006acbf0();
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      }
      bVar3 = true;
    }
    in_ZR = *(char *)(param_1 + 0xa4) == '\x01';
    if (((bool)in_ZR) &&
       ((uVar5 = param_1, FUN_006abbfc(param_1,0x66), (uVar5 & 1) != 0 ||
        (uVar5 = param_1, FUN_006abbfc(param_1,0x46), (int)uVar5 != 0)))) {
      bVar3 = true;
    }
  }
  else {
    func_0x006accb8();
    if (((uVar5 & 1) == 0) && (func_0x006acc9c(), (int)uVar5 == 0)) {
      bVar1 = *(byte *)(param_1 + 0x70);
      uVar2 = bVar1 - 0x30;
      in_CY = 8 < uVar2;
      in_ZR = uVar2 == 9;
      if (9 < uVar2) goto LAB_006abcf4;
      while ((bVar1 & 0xf8) == 0x30) {
        func_0x006acbf0();
        bVar1 = *(byte *)(param_1 + 0x70);
      }
      uVar2 = bVar1 - 0x30;
      in_ZR = uVar2 == 9;
      if (uVar2 < 10) {
        func_0x006acc1c();
        func_0x006acbd8();
        func_0x006acc14();
        func_0x006acca8();
      }
    }
    else {
      iVar4 = (int)*(char *)(param_1 + 0x70);
      FUN_006aca80();
      if (iVar4 == 0) {
        func_0x006acc1c();
        func_0x006acbd8();
        func_0x006acc14();
      }
      else {
        do {
          func_0x006acbf0();
          uVar5 = (ulong)*(char *)(param_1 + 0x70);
          FUN_006aca80();
        } while ((uVar5 & 1) != 0);
      }
    }
    bVar3 = false;
  }
  func_0x006acc78(*(undefined1 *)(param_1 + 0x70));
  if (((!(bool)in_ZR && 0x18 < extraout_w9) && ((bool)in_ZR || extraout_w9 != 0x19)) ||
     (*(char *)(param_1 + 0xac) != '\x01')) {
    if (extraout_w8 != 0x2e) goto LAB_006abe1c;
    if (bVar3) {
      func_0x006acc1c();
      func_0x006acbd8();
    }
    else {
      func_0x006acc1c();
      func_0x006acbd8();
    }
  }
  else {
    func_0x006acc1c();
    func_0x006acbd8();
  }
  func_0x006acc14();
LAB_006abe1c:
  uVar6 = 3;
  if (bVar3) {
    uVar6 = 4;
  }
  return uVar6;
}



/* Entry: 006abe80; end: 006abea7;  */

void FUN_006abe80(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  while (func_0x006acc68(), !(bool)in_CY || (bool)in_ZR) {
    func_0x006acbf0();
  }
  return;
}



/* Entry: 006abea8; end: 006abef7;  */

void FUN_006abea8(long param_1)

{
  while (*(byte *)(param_1 + 0x70) < 0x21 &&
         (1L << ((ulong)*(byte *)(param_1 + 0x70) & 0x3f) & 0x100003a00U) != 0) {
    func_0x006acbf0();
  }
  return;
}



/* Entry: 006abef8; end: 006ac413;  */

void FUN_006abef8(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 **ppuVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int iVar12;
  uint extraout_w9;
  long *plVar13;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  ulong auStack_78 [3];
  
  auStack_78[2] = *(ulong *)PTR____stack_chk_guard_00999f88;
  FUN_006ab7e4(param_1 + 0xc,param_1);
LAB_006abf68:
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    ppuVar9 = (undefined1 **)param_1;
    FUN_006ac414();
    bVar2 = *(byte *)(param_1 + 0x1c);
    if (*(char *)((long)param_1 + 0xaf) == '\x01') {
      bVar5 = (1L << ((ulong)bVar2 & 0x3f) & 0x100003a00U) == 0;
      in_ZR = 0x20 < bVar2 || bVar5;
      if (0x20 >= bVar2 && !bVar5) {
        func_0x006acbf0();
        FUN_006abea8(param_1);
        *param_1 = 7;
LAB_006ac1a8:
        func_0x006acc60();
        goto LAB_006ac1ac;
      }
    }
    else if (bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0) {
      do {
        func_0x006acbf0();
        bVar2 = *(byte *)(param_1 + 0x1c);
        bVar5 = (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) == 0;
        in_ZR = 0x20 < bVar2 || bVar5;
      } while (0x20 >= bVar2 && !bVar5);
      *param_1 = 7;
      if ((*(byte *)((long)param_1 + 0xae) & 1) != 0) goto LAB_006ac1a8;
    }
    in_ZR = 0;
    if (((*(char *)((long)param_1 + 0xae) == '\x01') &&
        (in_ZR = *(char *)((long)param_1 + 0xaf) == '\x01', (bool)in_ZR)) &&
       (func_0x006acc4c(), (int)ppuVar9 != 0)) {
      *param_1 = 8;
      func_0x006acc60();
      goto LAB_006ac1ac;
    }
    func_0x006acc60();
    iVar12 = param_1[0x2a];
    if (iVar12 == 0) {
      func_0x006acbe4();
      if ((int)ppuVar9 == 0) {
        iVar12 = param_1[0x2a];
        goto LAB_006ac100;
      }
      func_0x006acbe4();
      if (((ulong)ppuVar9 & 1) != 0) goto LAB_006ac118;
      func_0x006acc40();
      if (((ulong)ppuVar9 & 1) == 0) {
        *param_1 = 6;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_1 + 2,"/")
        ;
        param_1[8] = param_1[0x23];
        param_1[9] = param_1[0x24] + -1;
        param_1[10] = param_1[0x24];
        goto LAB_006ac1ac;
      }
      uVar8 = param_1[0x23];
      iVar12 = param_1[0x24];
      do {
        while( true ) {
          while( true ) {
            while (bVar2 = *(byte *)(param_1 + 0x1c),
                  bVar5 = (1L << ((ulong)bVar2 & 0x3f) & 0x840000000401U) == 0,
                  in_ZR = 0x2f < bVar2 || bVar5, 0x2f < bVar2 || bVar5) {
              func_0x006acbf0();
            }
            func_0x006acc4c();
            if ((int)ppuVar9 == 0) break;
            ppuVar9 = (undefined1 **)param_1;
            FUN_006abea8();
            func_0x006acc40();
            if (((int)ppuVar9 != 0) && (func_0x006acbe4(), ((ulong)ppuVar9 & 1) != 0))
            goto LAB_006abf68;
          }
          func_0x006acc40();
          if (((int)ppuVar9 != 0) && (func_0x006acbe4(), ((ulong)ppuVar9 & 1) != 0))
          goto LAB_006abf68;
          func_0x006acbe4();
          iVar7 = 0;
          if (*(char *)(param_1 + 0x1c) == '*') {
            iVar7 = (int)ppuVar9;
          }
          in_ZR = iVar7 == 1;
          if (!(bool)in_ZR) break;
          ppuVar9 = &puStack_90;
          FUN_00425cb4(&puStack_90,&UNK_009156b3);
          func_0x006acbf8();
          func_0x006acc58();
        }
      } while (*(char *)(param_1 + 0x1c) != '\0');
      FUN_00425cb4(&puStack_90,&UNK_009156f0);
      func_0x006acbf8();
      func_0x006acc58();
      (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                (*(long **)(param_1 + 0x1a),uVar8,iVar12 + -2,&UNK_00915712,0x17);
      goto LAB_006abf68;
    }
LAB_006ac100:
    in_ZR = iVar12 == 1;
    if (((bool)in_ZR) && (puVar10 = param_1, FUN_006abbfc(param_1,0x23), (int)puVar10 != 0)) {
LAB_006ac118:
      while (cVar3 = *(char *)(param_1 + 0x1c), in_ZR = cVar3 == '\0' || cVar3 == '\n',
            cVar3 != '\0' && cVar3 != '\n') {
        func_0x006acbf0();
      }
      func_0x006acc4c();
      goto LAB_006abf68;
    }
    if ((*(byte *)(param_1 + 0x22) & 1) != 0) goto LAB_006ac1b4;
    uVar6 = *(byte *)(param_1 + 0x1c) == 0x1f;
    if (*(byte *)(param_1 + 0x1c) < 0x20) {
      FUN_00425cb4(&puStack_90,&UNK_0091572a);
      func_0x006acbf8();
      func_0x006acc58();
      do {
        func_0x006acbf0();
        while (in_ZR = *(byte *)(param_1 + 0x1c) - 1 == 0x1f, 0x1e < *(byte *)(param_1 + 0x1c) - 1)
        {
          if (((*(byte *)(param_1 + 0x22) & 1) != 0) ||
             (puVar10 = param_1, FUN_006abbfc(param_1,0), ((ulong)puVar10 & 1) == 0))
          goto LAB_006abf68;
        }
      } while( true );
    }
    puVar10 = param_1;
    FUN_006ac414();
    func_0x006acc78(*(undefined1 *)(param_1 + 0x1c));
    uVar4 = !(bool)uVar6 && 0x18 < extraout_w9;
    in_ZR = !(bool)uVar6 && extraout_w9 == 0x19;
    if ((bool)uVar4 && ((bool)uVar6 || extraout_w9 != 0x19)) {
      func_0x006acc00();
      if ((int)puVar10 == 0) {
        func_0x006acc90();
        func_0x006acc68();
        if ((bool)uVar4 && !(bool)in_ZR) {
          if (((ulong)puVar10 & 1) == 0) {
            puVar10 = param_1;
            FUN_006abbfc(param_1,0x22);
            if ((int)puVar10 == 0) {
              puVar10 = param_1;
              FUN_006abbfc(param_1,0x27);
              if ((int)puVar10 == 0) {
                if ((char)*(byte *)(param_1 + 0x1c) < '\0') {
                  auStack_78[0] = (ulong)*(byte *)(param_1 + 0x1c);
                  plVar13 = *(long **)(param_1 + 0x1a);
                  uVar8 = param_1[0x23];
                  uVar1 = param_1[0x24];
                  auStack_78[1] = 0x560664;
                  FUN_0056189c(&puStack_90,&UNK_0091578b,0x24,auStack_78,1);
                  in_ZR = bStack_79 == 0;
                  if (-1 < (char)bStack_79) {
                    uStack_88 = (ulong)bStack_79;
                    puStack_90 = (undefined1 *)&puStack_90;
                  }
                  (**(code **)(*plVar13 + 0x10))(plVar13,uVar8,uVar1,puStack_90,uStack_88);
                  func_0x006acc58();
                }
                func_0x006acbf0();
                goto LAB_006ac30c;
              }
              FUN_006ab9a0(param_1,0x27);
            }
            else {
              FUN_006ab9a0(param_1,0x22);
            }
            uVar8 = 5;
          }
          else {
LAB_006ac30c:
            uVar8 = 6;
          }
        }
        else {
          func_0x006acbf0();
          if (((ulong)puVar10 & 1) == 0) {
            puVar10 = param_1;
            FUN_006abc64(param_1,0,0);
            uVar8 = SUB84(puVar10,0);
          }
          else {
            in_ZR = 0;
            if (((param_1[0xc] == 2) && (in_ZR = 0, param_1[8] == param_1[0x14])) &&
               (in_ZR = param_1[9] == param_1[0x16], (bool)in_ZR)) {
              (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                        (*(long **)(param_1 + 0x1a),param_1[0x23],param_1[0x24] + -2,&UNK_0091575a,
                         0x30);
            }
            puVar10 = param_1;
            FUN_006abc64(param_1,0,1);
            uVar8 = SUB84(puVar10,0);
          }
        }
      }
      else {
        puVar10 = param_1;
        FUN_006abc64(param_1,1,0);
        uVar8 = SUB84(puVar10,0);
      }
    }
    else {
      do {
        func_0x006acbf0();
        uVar11 = (ulong)*(char *)(param_1 + 0x1c);
        func_0x006acbac();
      } while ((uVar11 & 1) != 0);
      uVar8 = 2;
    }
    *param_1 = uVar8;
    func_0x006acc60();
LAB_006ac1ac:
    puVar10 = (undefined4 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
LAB_006ac1b4:
    *param_1 = 1;
    func_0x0048d000(param_1 + 2);
    puVar10 = (undefined4 *)0x0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x23);
    param_1[10] = param_1[0x24];
  }
  func_0x006accc4(auStack_78[2]);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006acc58();
    func_0x006accb0();
    *puVar10 = 0;
    func_0x0048d000(puVar10 + 2);
    *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(puVar10 + 0x23);
    *(undefined4 **)(puVar10 + 0x26) = puVar10 + 2;
    puVar10[0x28] = puVar10[0x21];
    return;
  }
  return;
}



/* Entry: 006ac414; end: 006ac4a3;  */

void FUN_006ac414(undefined4 *param_1)

{
  *param_1 = 0;
  func_0x0048d000(param_1 + 2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x23);
  *(undefined4 **)(param_1 + 0x26) = param_1 + 2;
  param_1[0x28] = param_1[0x21];
  return;
}



/* Entry: 006ac4a4; end: 006ac583;  */

undefined8 FUN_006ac4a4(byte *param_1,ulong param_2,ulong *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  
  pbVar1 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    pbVar1 = param_1;
  }
  if (*pbVar1 == 0x30) {
    bVar4 = (pbVar1[1] | 0x20) != 0x78;
    uVar7 = 0x10;
    if (bVar4) {
      uVar7 = 8;
    }
    uVar6 = 0x1000000000000000;
    pbVar5 = pbVar1 + 2;
    if (bVar4) {
      uVar6 = 0x2000000000000000;
      pbVar5 = pbVar1;
    }
  }
  else {
    uVar6 = 0x199999999999999a;
    uVar7 = 10;
    pbVar5 = pbVar1;
  }
  uVar8 = 0;
  do {
    bVar3 = *pbVar5;
    if (bVar3 == 0) goto LAB_006ac540;
    pbVar5 = pbVar5 + 1;
    uVar2 = uVar8;
    if (bVar3 != 0x30) {
      uVar2 = (long)(char)(&UNK_008280b1)[(uint)bVar3];
    }
    iVar9 = 0;
    if (bVar3 != 0x30) {
      iVar9 = 3;
    }
    if ((int)uVar7 <= (int)(char)(&UNK_008280b1)[(uint)bVar3]) {
      iVar9 = 1;
      uVar2 = uVar8;
    }
    uVar8 = uVar2;
  } while (iVar9 == 0);
  if (iVar9 == 3) {
LAB_006ac540:
    do {
      bVar3 = *pbVar5;
      if ((ulong)bVar3 == 0) {
        if (param_2 < uVar8) {
          return 0;
        }
        *param_3 = uVar8;
        return 1;
      }
      bVar4 = uVar8 < uVar6;
      uVar8 = (long)(char)(&UNK_008280b1)[bVar3] + uVar8 * uVar7;
      pbVar5 = pbVar5 + 1;
    } while (((int)(char)(&UNK_008280b1)[bVar3] < (int)uVar7 && bVar4) && uVar7 <= uVar8);
  }
  return 0;
}



/* Entry: 006ac584; end: 006ac5a7;  */

undefined8 FUN_006ac584(undefined8 param_1)

{
  undefined8 uStack_18;
  
  FUN_006ac5a8(param_1,&uStack_18);
  return uStack_18;
}



/* Entry: 006ac5a8; end: 006ac66f;  */

bool FUN_006ac5a8(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbStack_38;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_006ab238(plVar1,&pbStack_38);
  *param_3 = param_1;
  bVar4 = *pbStack_38;
  pbVar5 = pbStack_38;
  if ((bVar4 | 0x20) == 0x65) {
    pbVar5 = pbStack_38 + 1;
    bVar4 = *pbVar5;
    if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
      pbVar5 = pbStack_38 + 2;
      bVar4 = *pbVar5;
    }
  }
  if ((bVar4 | 0x20) == 0x66) {
    pbVar5 = pbVar5 + 1;
  }
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if ((long)pbVar5 - (long)plVar1 == uVar2) {
    bVar3 = (char)*plVar1 != '-';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 006ac670; end: 006aca7f;  */

byte * FUN_006ac670(byte *param_1,byte *param_2)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uStack_80;
  uint uStack_7c;
  ulong auStack_78 [3];
  
  auStack_78[2] = *(ulong *)PTR____stack_chk_guard_00999f88;
  bVar4 = param_1[0x17];
  bVar1 = bVar4 == 0;
  uVar3 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar4) {
    uVar3 = (ulong)bVar4;
  }
  pbVar2 = param_1;
  if (uVar3 == 0) {
LAB_006aca68:
    func_0x006accc4(auStack_78[2]);
    if (bVar1) {
      return pbVar2;
    }
    ___stack_chk_fail();
    uVar8 = (uint)pbVar2 & 0xff;
    uVar7 = 1;
    if (9 < uVar8 - 0x30 && 5 < uVar8 - 0x61) {
      uVar7 = (uint)(uVar8 - 0x41 < 6);
    }
    return (byte *)(ulong)uVar7;
  }
  lVar9 = (long)(char)param_2[0x17];
  if (lVar9 < 0) {
    lVar9 = *(long *)(param_2 + 8);
    uVar10 = (*(ulong *)(param_2 + 0x10) & 0x7fffffffffffffff) - 1;
  }
  else {
    uVar10 = 0x16;
  }
  if (uVar10 < lVar9 + uVar3) {
    pbVar2 = param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
    bVar4 = param_1[0x17];
  }
  pbVar13 = *(byte **)param_1;
  if (-1 < (char)bVar4) {
    pbVar13 = param_1;
  }
LAB_006ac720:
  pbVar12 = pbVar13 + 1;
  bVar4 = *pbVar12;
  if (bVar4 != 0x5c) {
    bVar1 = false;
    if (bVar4 != 0) {
LAB_006ac79c:
      pbVar14 = *(byte **)param_1;
      if (-1 < (char)param_1[0x17]) {
        pbVar14 = param_1;
      }
      if ((*pbVar14 != bVar4) || (pbVar14 = pbVar13 + 2, pbVar13 = pbVar12, *pbVar14 != 0)) {
        pbVar2 = param_2;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
        pbVar13 = pbVar12;
      }
      goto LAB_006ac720;
    }
    goto LAB_006aca68;
  }
  pbVar14 = pbVar13 + 2;
  bVar6 = *pbVar14;
  if ((ulong)bVar6 == 0) goto LAB_006ac79c;
  if ((bVar6 & 0xf8) == 0x30) {
    cVar5 = (&UNK_008280b1)[bVar6];
    uVar8 = (uint)pbVar13[3];
    if ((uVar8 & 0xf8) == 0x30) {
      cVar5 = (&UNK_008280b1)[uVar8] + cVar5 * '\b';
      pbVar14 = pbVar13 + 3;
    }
    uVar8 = (uint)pbVar14[1];
    if ((uVar8 & 0xf8) == 0x30) {
      cVar5 = (&UNK_008280b1)[uVar8] + cVar5 * '\b';
      pbVar14 = pbVar14 + 1;
    }
    uVar3 = (ulong)(uint)(int)cVar5;
  }
  else {
    switch(bVar6) {
    case 0x6e:
      bVar6 = 10;
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
    case 0x77:
LAB_006ac92c:
      bVar6 = 0x3f;
      break;
    case 0x72:
      bVar6 = 0xd;
      break;
    case 0x74:
      bVar6 = 9;
      break;
    case 0x75:
LAB_006ac860:
      uVar8 = 8;
      if (bVar6 != 0x55) {
        uVar8 = 0;
      }
      uVar7 = 4;
      if (bVar6 != 0x75) {
        uVar7 = uVar8;
      }
      uVar3 = (ulong)uVar7;
      pbVar2 = pbVar13 + 3;
      func_0x006acb64(pbVar2,uVar3,&uStack_80);
      uVar8 = uStack_80;
      if ((int)pbVar2 == 0) {
        uVar3 = (ulong)(char)*pbVar14;
        goto LAB_006ac99c;
      }
      uVar10 = uVar3 | 3;
      pbVar12 = pbVar13 + uVar10;
      if (uStack_80 >> 10 == 0x36) {
        if ((*pbVar12 == 0x5c) && (pbVar12[1] == 0x75)) {
          pbVar12 = pbVar12 + 2;
          func_0x006acb64(pbVar12,4,auStack_78);
          if (((int)pbVar12 != 0) && ((uint)auStack_78[0] >> 10 == 0x37)) {
            uVar8 = (uint)auStack_78[0] + uVar8 * 0x400 + 0xfca02400;
            uVar10 = uVar3 + 9;
            uStack_80 = uVar8;
          }
        }
        pbVar12 = pbVar13 + uVar10;
LAB_006ac8fc:
        if (uVar8 >> 0x10 == 0) {
          lVar9 = 3;
          uVar8 = (uVar8 & 0xfc0) << 2 | uVar8 & 0x3f | (uVar8 >> 0xc & 0xf) << 0x10 | 0xe08080;
          goto LAB_006aca18;
        }
        if (uVar8 >> 0x10 < 0x11) {
          lVar9 = 4;
          uVar8 = (uVar8 & 0x3f000) << 4 | (uVar8 >> 0x12 & 7) << 0x18 |
                  uVar8 & 0x3f | (uVar8 >> 6 & 0x3f) << 8 | 0xf0808080;
          goto LAB_006aca18;
        }
        auStack_78[0] = (ulong)uVar8;
        auStack_78[1] = 0x5606ec;
        pbVar2 = param_2;
        FUN_00561818(param_2,&UNK_009157b0,6,auStack_78,1);
      }
      else {
        if (uStack_80 < 0x80) {
          lVar9 = 1;
        }
        else {
          if (0x7ff < uStack_80) goto LAB_006ac8fc;
          uVar8 = (uStack_80 & 0x7c0) << 2 | uStack_80 & 0x3f | 0xc080;
          lVar9 = 2;
        }
LAB_006aca18:
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uStack_7c = uVar8 >> 0x10 | uVar8 << 0x10;
        pbVar2 = param_2;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,(long)auStack_78 - lVar9);
      }
      pbVar13 = pbVar12 + -1;
      goto LAB_006ac720;
    case 0x76:
      bVar6 = 0xb;
      break;
    case 0x78:
LAB_006ac840:
      bVar4 = pbVar13[3];
      iVar11 = (int)(char)bVar4;
      FUN_006aca80();
      if (iVar11 == 0) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (&UNK_008280b1)[bVar4];
        pbVar14 = pbVar13 + 3;
      }
      bVar4 = pbVar14[1];
      iVar11 = (int)(char)bVar4;
      FUN_006aca80();
      if (iVar11 != 0) {
        cVar5 = (&UNK_008280b1)[bVar4] + cVar5 * '\x10';
        pbVar14 = pbVar14 + 1;
      }
      uVar3 = (ulong)(uint)(int)cVar5;
      goto LAB_006ac99c;
    default:
      if ((bVar6 != 0x22) && (bVar6 != 0x27)) {
        if (bVar6 == 0x55) goto LAB_006ac860;
        if (bVar6 == 0x66) {
          bVar6 = 0xc;
        }
        else if (bVar6 != 0x5c) {
          if (bVar6 == 0x61) {
            bVar6 = 7;
          }
          else {
            if (bVar6 != 0x62) {
              if (bVar6 == 0x58) goto LAB_006ac840;
              goto LAB_006ac92c;
            }
            bVar6 = 8;
          }
        }
      }
    }
    uVar3 = (ulong)(uint)(int)(char)bVar6;
  }
LAB_006ac99c:
  pbVar2 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,uVar3);
  pbVar13 = pbVar14;
  goto LAB_006ac720;
}



/* Entry: 006aca80; end: 006acaab;  */

bool FUN_006aca80(uint param_1)

{
  param_1 = param_1 & 0xff;
  return (param_1 - 0x30 < 10 || param_1 - 0x61 < 6) || param_1 - 0x41 < 6;
}



/* Entry: 006acaac; end: 006acb63;  */

bool FUN_006acaac(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  uint extraout_w9;
  char *****pppppcStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  bVar1 = param_1[0x17];
  uVar2 = bVar1 == 0;
  uVar5 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar1) {
    uVar5 = (ulong)bVar1;
  }
  if (uVar5 != 0) {
    puVar4 = param_1;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm(param_1,0);
    func_0x006acc78(*puVar4);
    if ((bool)uVar2 || extraout_w9 < 0x1a) {
      FUN_00479db4(&pppppcStack_48,param_1,1,0xffffffffffffffff);
      if (-1 < (char)bStack_31) {
        pppppcStack_48 = (char *****)&pppppcStack_48;
        uStack_40 = (ulong)bStack_31;
      }
      do {
        bVar3 = uStack_40 == 0;
        if (uStack_40 == 0) break;
        uVar5 = (ulong)*(char *)pppppcStack_48;
        func_0x006acbac();
        pppppcStack_48 = (char *****)((long)pppppcStack_48 + 1);
        uStack_40 = uStack_40 - 1;
      } while ((uVar5 & 1) != 0);
      func_0x006acc14();
      return bVar3;
    }
  }
  return false;
}



/* Entry: 006acb64; end: 006accd7;  */

bool FUN_006acb64(byte *param_1,uint param_2,int *param_3)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  
  *param_3 = 0;
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    iVar3 = 0;
    pbVar2 = param_1;
    while (bVar1 = param_1 + param_2 <= pbVar2, !bVar1) {
      if ((ulong)*pbVar2 == 0) {
        return bVar1;
      }
      iVar3 = (int)(char)(&UNK_008280b1)[*pbVar2] + iVar3 * 0x10;
      *param_3 = iVar3;
      pbVar2 = pbVar2 + 1;
    }
  }
  return bVar1;
}



/* Entry: 006accd8; end: 006accf3;  */

long FUN_006accd8(undefined8 param_1)

{
  _backtrace(param_1,0x80);
  return (long)(int)param_1;
}



/* Entry: 006accf4; end: 006acd1f;  */

void FUN_006accf4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_006accd8();
  *(long *)(param_1 + 0x400) = lVar1;
  *(undefined8 *)(param_1 + 0x408) = param_2;
  return;
}



/* Entry: 006acd20; end: 006acd73;  */

void FUN_006acd20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (param_1,*(undefined8 *)(param_2 + 8),uVar1);
  return;
}



/* Entry: 006acd74; end: 006acfe3;  */

undefined *** FUN_006acd74(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  ulong uVar6;
  long alStack_6e0 [128];
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [504];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_006accf4(alStack_6e0,param_2);
  ppuStack_280 = &PTR_FUN_00a0c670;
  puStack_278 = auStack_260;
  uStack_268 = 500;
  uStack_270 = 0;
  for (uVar6 = uStack_2d8; uVar6 < uStack_2e0; uVar6 = uVar6 + 1) {
    uVar5 = alStack_6e0[uVar6] - 4;
    uStack_298 = 0;
    uStack_2a0 = uVar5;
    func_0x00461914("{}");
    FUN_006acfe4();
    func_0x006ad000();
    uVar1 = uVar5;
    _dladdr(uVar5,&uStack_2c0);
    if ((int)uVar1 == 0) {
      lStack_2a8 = 0;
      lStack_2b0 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
    }
    else if ((lStack_2b8 != 0) && (uStack_2c0 != 0)) {
      uStack_2d0 = uStack_2c0;
      uVar1 = uStack_2c0;
      _strlen();
      puVar2 = &uStack_2d0;
      uStack_2c8 = uVar1;
      FUN_00532cac(puVar2,0x2f,0xffffffffffffffff);
      if (puVar2 != (ulong *)0xffffffffffffffff) {
        uStack_2d0 = uStack_2d0 + (long)puVar2 + 1;
        uStack_2c8 = uStack_2c8 - ((long)puVar2 + 1);
      }
      lStack_290 = uVar5 - lStack_2b8;
      uStack_288 = 0;
      uStack_2a0 = uStack_2d0;
      uStack_298 = uStack_2c8;
      func_0x00461914(&UNK_009157b7);
      FUN_006acfe4();
      func_0x006ad000();
    }
    if ((lStack_2a8 != 0) && (lStack_2b0 != 0)) {
      uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
      lVar3 = lStack_2b0;
      ___cxa_demangle(lStack_2b0,0,0,&uStack_2d0);
      lStack_290 = uVar5 - lStack_2a8;
      uStack_2a0 = lVar3;
      if ((int)uStack_2d0 != 0) {
        uStack_2a0 = lStack_2b0;
      }
      uStack_298 = 0;
      uStack_288 = 0;
      func_0x00461914(&UNK_009157b7);
      FUN_006acfe4();
      func_0x006ad000();
      _free(lVar3);
    }
    uStack_298 = 0;
    uStack_2a0 = 0;
    func_0x00461914("\n");
    FUN_006acfe4();
    func_0x006ad000();
  }
  FUN_006acd20(param_1,&ppuStack_280);
  pppuVar4 = &ppuStack_280;
  func_0x006420e4(pppuVar4);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    func_0x006420e4(&ppuStack_280);
    __Unwind_Resume(pppuVar4);
    return &ppuStack_280;
  }
  return pppuVar4;
}



/* Entry: 006acfe4; end: 006ad007;  */

undefined1 * FUN_006acfe4(void)

{
  return &stack0x00000460;
}



/* Entry: 006ad008; end: 006ad023;  */

long FUN_006ad008(long param_1)

{
  __ZNSt3__16chrono12system_clock3nowEv();
  return param_1 / 1000;
}



/* Entry: 006ad024; end: 006ad087;  */

void FUN_006ad024(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  
  FUN_006ad120();
  plVar2 = plRam0000000000b6c8b8;
  *(long **)(param_1 + 8) = plRam0000000000b6c8b8;
  if (plVar2 != (long *)0x0) {
    uVar1 = param_2;
    _strlen(param_2);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,uVar1);
    *(long **)(unaff_x19 + 0x10) = plVar2;
  }
  return;
}



/* Entry: 006ad088; end: 006ad0cb;  */

void FUN_006ad088(void)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_006ad120();
  plVar1 = plRam0000000000b6c8b8;
  *(long **)(unaff_x19 + 8) = plRam0000000000b6c8b8;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    *(long **)(unaff_x19 + 0x10) = plVar1;
  }
  return;
}



/* Entry: 006ad0cc; end: 006ad107;  */

void FUN_006ad0cc(long param_1)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_006ad120();
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(unaff_x19 + 0x10));
  }
  return;
}



/* Entry: 006ad108; end: 006ad10b;  */

void FUN_006ad108(long param_1)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_006ad120();
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(unaff_x19 + 0x10));
  }
  return;
}



/* Entry: 006ad10c; end: 006ad11f;  */

void FUN_006ad10c(void)

{
  FUN_006ad0cc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006ad120; end: 006ad133;  */

void FUN_006ad120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a10020;
  return;
}



/* Entry: 006ad134; end: 006ad1df;  */

undefined8 * FUN_006ad134(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  if (param_3 != 0) {
    _strlen();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (param_1,(undefined1 *)((long)param_4 + param_3 + 2));
    FUN_006ad1e0(param_1,&stack0xffffffffffffffd0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&UNK_009157c4);
    FUN_006ad1e0(param_1,&stack0xffffffffffffffc0);
    return param_1;
  }
  puVar5 = param_4;
  _strlen();
  if ((undefined8 *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (undefined8 *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,param_4,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 006ad1e0; end: 006ad207;  */

void FUN_006ad1e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  FUN_006ad250(param_1,&uStack_20);
  return;
}



/* Entry: 006ad208; end: 006ad24f;  */

void FUN_006ad208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb6620a;
  _strncpy(0xb6620a,param_1,0x400);
  *(undefined1 *)(lVar1 + 0x3ff) = 0;
  ___assert_rtn(0xffffffffffffffff,param_2,param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 006ad250; end: 006ad25b;  */

void FUN_006ad250(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
            (param_1,*param_2,param_2[1]);
  return;
}



/* Entry: 006ad25c; end: 006cb1eb;  */

undefined8 FUN_006ad25c(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x006ad358();
  if (unaff_x19 != 0) {
    lVar1 = unaff_x19;
    FUN_00701e90();
    *unaff_x20 = lVar1;
    if (lVar1 == 0) {
      func_0x006ad34c();
      func_0x006ad338();
      return 0;
    }
    unaff_x20[1] = unaff_x19;
  }
  return 1;
}



/* Entry: 006cb1ec; end: 006cb25b;  */

ulong FUN_006cb1ec(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  if (((uint)*(undefined8 *)(param_1 + 4) >> 3 & 1) == 0) {
    do {
      uVar4 = uVar3;
      if ((int)uVar4 < 1) {
        uVar3 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
        uVar5 = 0;
        goto LAB_006cb238;
      }
      bVar2 = *(byte *)(*(long *)(param_1 + 2) + uVar4 + -1);
      uVar3 = (ulong)((int)uVar4 - 1);
    } while (bVar2 == 0);
    uVar5 = 0;
    while ((uVar3 = uVar4, uVar5 != 7 && ((bVar2 >> (ulong)(uVar5 & 0x1f) & 1) == 0))) {
      uVar5 = uVar5 + 1;
    }
  }
  else {
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = (uint)*(undefined8 *)(param_1 + 4) & 7;
    }
  }
LAB_006cb238:
  *param_2 = (char)uVar5;
  return uVar3;
}



/* Entry: 006cb25c; end: 006cb2a3;  */

bool FUN_006cb25c(undefined8 param_1,long *param_2)

{
  char cStack_21;
  
  FUN_006cb1ec(param_1,&cStack_21);
  if (cStack_21 == '\0') {
    *param_2 = (long)(int)param_1;
  }
  return cStack_21 == '\0';
}



/* Entry: 006cb2a4; end: 006cb4b3;  */

int FUN_006cb2a4(ulong param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  byte bStack_51;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = param_1;
    FUN_006cb1ec(param_1,&bStack_51);
    iVar1 = (int)uVar2;
    iVar3 = iVar1 + 1;
    if (param_2 != (long *)0x0) {
      pbVar4 = (byte *)*param_2 + 1;
      *(byte *)*param_2 = bStack_51;
      if ((iVar1 != 0) && (_memcpy(pbVar4,*(undefined8 *)(param_1 + 8),(long)iVar1), 0 < iVar1)) {
        pbVar4[(uVar2 & 0xffffffff) - 1] =
             pbVar4[(uVar2 & 0xffffffff) - 1] & (byte)(0xff << (ulong)(bStack_51 & 0x1f));
      }
      *param_2 = (long)(pbVar4 + iVar1);
    }
  }
  return iVar3;
}



/* Entry: 006cb4b4; end: 006cb5c3;  */

undefined8 FUN_006cb4b4(uint *param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  bVar2 = (byte)(1 << (ulong)((param_2 ^ 0xffffffff) & 7));
  bVar1 = 0;
  if (param_3 != 0) {
    bVar1 = bVar2;
  }
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  iVar3 = (int)param_2 / 8;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffffffff0;
  if (((int)*param_1 <= iVar3) || (lVar6 = *(long *)(param_1 + 2), lVar6 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    uVar5 = iVar3 + 1;
    lVar4 = *(long *)(param_1 + 2);
    lVar6 = (long)(int)uVar5;
    if (lVar4 == 0) {
      FUN_00701e90();
    }
    else {
      FUN_00701f14();
      lVar6 = lVar4;
    }
    if (lVar6 == 0) {
      func_0x006cb610();
      func_0x006cb604();
      return 0;
    }
    if (0 < (int)(uVar5 - *param_1)) {
      _bzero(lVar6 + (int)*param_1);
    }
    *(long *)(param_1 + 2) = lVar6;
    *param_1 = uVar5;
  }
  *(byte *)(lVar6 + iVar3) = *(byte *)(lVar6 + iVar3) & ~bVar2 | bVar1;
  uVar5 = *param_1;
  while ((0 < (int)uVar5 && (*(char *)(*(long *)(param_1 + 2) + (ulong)uVar5 + -1) == '\0'))) {
    *param_1 = uVar5 - 1;
    uVar5 = uVar5 - 1;
  }
  return 1;
}



/* Entry: 006cb5c4; end: 006cb61b;  */

byte FUN_006cb5c4(int *param_1,uint param_2)

{
  if (((param_1 != (int *)0x0) && ((int)param_2 / 8 < *param_1)) && (*(long *)(param_1 + 2) != 0)) {
    return *(byte *)(*(long *)(param_1 + 2) + (long)((int)param_2 / 8)) >>
           (ulong)((param_2 ^ 0xffffffff) & 7) & 1;
  }
  return 0;
}



/* Entry: 006cb61c; end: 006cb71f;  */

undefined8 FUN_006cb61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_006d1abc(param_2,&uStack_28,&uStack_30,0x7fffffff);
  if ((int)param_2 == 0) {
    param_3 = 0;
  }
  else {
    uStack_38 = uStack_28;
    FUN_006ce6e8(param_3,&uStack_38,uStack_30,param_1);
    func_0x00701ed0(uStack_28);
  }
  return param_3;
}



/* Entry: 006cb720; end: 006cb9e7;  */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_006cb720(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_2[1] != 0x18) {
    return (undefined4 *)0x0;
  }
  uVar1 = *param_2;
  uVar13 = (ulong)uVar1;
  if ((int)uVar1 < 0xd) {
    return (undefined4 *)0x0;
  }
  uVar11 = 0;
  uVar12 = 0;
  lVar7 = *(long *)(param_2 + 2);
  do {
    if (uVar12 == 6) {
      bVar2 = *(byte *)(lVar7 + uVar11);
      if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 0;
        }
LAB_006cb8ac:
        if (*(char *)(lVar7 + (uVar11 & 0xffffffff)) == '.') {
          if ((int)uVar1 <= (int)uVar11) {
            return (undefined4 *)0x0;
          }
          uVar11 = uVar11 & 0xffffffff;
          iVar9 = 1;
          do {
            pbVar8 = (byte *)(lVar7 + 1 + uVar11);
            bVar5 = uVar13 <= uVar11;
            uVar11 = uVar11 + 1;
            uVar6 = *pbVar8 - 0x3a;
            iVar9 = iVar9 + -1;
          } while ((!bVar5 && 0xfffffff4 < uVar6) && (bVar5 || uVar6 != 0xfffffff5));
          if (iVar9 == 0) {
            return (undefined4 *)0x0;
          }
        }
        uVar10 = (uint)uVar11;
        cVar3 = *(char *)(lVar7 + (int)uVar10);
        uVar6 = uVar10;
        if (cVar3 != '\0') {
          if ((cVar3 == '+') || (cVar3 == '-')) {
            uVar6 = uVar10 + 5;
            if ((int)uVar1 < (int)uVar6) {
              return (undefined4 *)0x0;
            }
            iVar9 = 0;
            pbVar8 = (byte *)(lVar7 + (int)(uVar10 + 1) + 1);
            for (lVar7 = 0; lVar7 != 8; lVar7 = lVar7 + 4) {
              if ((byte)(pbVar8[-1] - 0x3a) < 0xf6) {
                return (undefined4 *)0x0;
              }
              if (*pbVar8 - 0x3a < 0xfffffff6) {
                return (undefined4 *)0x0;
              }
              iVar4 = (uint)*pbVar8 + (int)(char)(pbVar8[-1] * '\n') + -0x10;
              if (iVar4 < *(int *)(&UNK_0082cdd8 + lVar7)) {
                return (undefined4 *)0x0;
              }
              if (*(int *)(&UNK_0082cdfc + lVar7) < iVar4) {
                return (undefined4 *)0x0;
              }
              if (param_1 != (undefined4 *)0x0) {
                if (lVar7 == 0) {
                  iVar9 = iVar4 * 0xe10;
                }
                else {
                  iVar9 = iVar9 + iVar4 * 0x3c;
                }
              }
              pbVar8 = pbVar8 + 2;
            }
            if (iVar9 != 0) {
              iVar4 = -iVar9;
              if (cVar3 == '-') {
                iVar4 = iVar9;
              }
              FUN_006d0dd8(param_1,0,(long)iVar4,100,0xfffff894);
              if ((int)param_1 == 0) {
                return param_1;
              }
            }
          }
          else {
            if (cVar3 != 'Z') {
              return (undefined4 *)0x0;
            }
            uVar6 = uVar10 + 1;
          }
        }
        return (undefined4 *)(ulong)(uVar6 == uVar1);
      }
    }
    else {
      if (uVar12 == 7) {
        uVar11 = 0xe;
        goto LAB_006cb8ac;
      }
      bVar2 = *(byte *)(lVar7 + uVar11);
    }
    if (uVar13 <= uVar11 || 9 < (bVar2 - 0x30 & 0xff)) {
      return (undefined4 *)0x0;
    }
    uVar6 = (uint)*(byte *)(lVar7 + uVar11 + 1);
    if (uVar6 - 0x3a < 0xfffffff6) {
      return (undefined4 *)0x0;
    }
    if ((uVar13 & 0xfffffffe) == uVar11) {
      return (undefined4 *)0x0;
    }
    iVar9 = uVar6 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
    if (iVar9 < *(int *)(&UNK_0082cdbc + uVar12 * 4)) {
      return (undefined4 *)0x0;
    }
    if (*(int *)(&UNK_0082cde0 + uVar12 * 4) < iVar9) {
      return (undefined4 *)0x0;
    }
    if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006cb84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_0082cdb4)[uVar12 & 0xffffffff] * 4 + 0x6cb850))();
      return param_1;
    }
    uVar12 = uVar12 + 1;
    uVar11 = uVar11 + 2;
  } while( true );
}



/* Entry: 006cb9e8; end: 006cb9f3;  */

/* WARNING: Removing unreachable block (ram,0x006cb8a0) */
/* WARNING: Removing unreachable block (ram,0x006cb83c) */
/* WARNING: Removing unreachable block (ram,0x006cb99c) */
/* WARNING: Removing unreachable block (ram,0x006cb9a8) */
/* WARNING: Removing unreachable block (ram,0x006cb9a0) */
/* WARNING: Removing unreachable block (ram,0x006cb9cc) */
/* WARNING: Removing unreachable block (ram,0x006cb9d0) */
/* WARNING: Removing unreachable block (ram,0x006cb9e4) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_006cb9e8(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_1[1] != 0x18) {
    return false;
  }
  uVar1 = *param_1;
  uVar12 = (ulong)uVar1;
  if ((int)uVar1 < 0xd) {
    return false;
  }
  uVar10 = 0;
  lVar11 = 0;
  lVar6 = *(long *)(param_1 + 2);
  do {
    if (lVar11 == 6) {
      bVar2 = *(byte *)(lVar6 + uVar10);
      if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0) {
LAB_006cb8ac:
        if (*(char *)(lVar6 + (uVar10 & 0xffffffff)) == '.') {
          if ((int)uVar1 <= (int)uVar10) {
            return false;
          }
          uVar10 = uVar10 & 0xffffffff;
          iVar8 = 1;
          do {
            pbVar7 = (byte *)(lVar6 + 1 + uVar10);
            bVar4 = uVar12 <= uVar10;
            uVar10 = uVar10 + 1;
            uVar5 = *pbVar7 - 0x3a;
            iVar8 = iVar8 + -1;
          } while ((!bVar4 && 0xfffffff4 < uVar5) && (bVar4 || uVar5 != 0xfffffff5));
          if (iVar8 == 0) {
            return false;
          }
        }
        uVar9 = (uint)uVar10;
        cVar3 = *(char *)(lVar6 + (int)uVar9);
        uVar5 = uVar9;
        if (cVar3 != '\0') {
          if ((cVar3 == '+') || (cVar3 == '-')) {
            uVar5 = uVar9 + 5;
            if ((int)uVar1 < (int)uVar5) {
              return false;
            }
            pbVar7 = (byte *)(lVar6 + (int)(uVar9 + 1) + 1);
            for (lVar11 = 0; lVar11 != 8; lVar11 = lVar11 + 4) {
              if ((byte)(pbVar7[-1] - 0x3a) < 0xf6) {
                return false;
              }
              if (*pbVar7 - 0x3a < 0xfffffff6) {
                return false;
              }
              iVar8 = (uint)*pbVar7 + (int)(char)(pbVar7[-1] * '\n') + -0x10;
              if (iVar8 < *(int *)(&UNK_0082cdd8 + lVar11)) {
                return false;
              }
              if (*(int *)(&UNK_0082cdfc + lVar11) < iVar8) {
                return false;
              }
              pbVar7 = pbVar7 + 2;
            }
          }
          else {
            if (cVar3 != 'Z') {
              return false;
            }
            uVar5 = uVar9 + 1;
          }
        }
        return uVar5 == uVar1;
      }
    }
    else {
      if (lVar11 == 7) {
        uVar10 = 0xe;
        goto LAB_006cb8ac;
      }
      bVar2 = *(byte *)(lVar6 + uVar10);
    }
    if (uVar12 <= uVar10 || 9 < (bVar2 - 0x30 & 0xff)) {
      return false;
    }
    uVar5 = (uint)*(byte *)(lVar6 + uVar10 + 1);
    if (uVar5 - 0x3a < 0xfffffff6) {
      return false;
    }
    if ((uVar12 & 0xfffffffe) == uVar10) {
      return false;
    }
    iVar8 = uVar5 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
    if (iVar8 < *(int *)(&UNK_0082cdbc + lVar11 * 4)) {
      return false;
    }
    if (*(int *)(&UNK_0082cde0 + lVar11 * 4) < iVar8) {
      return false;
    }
    lVar11 = lVar11 + 1;
    uVar10 = uVar10 + 2;
  } while( true );
}



/* Entry: 006cb9f4; end: 006cbb3f;  */

uint * FUN_006cb9f4(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar1 = param_1;
  uStack_48 = param_2;
  if ((param_1 == (uint *)0x0) && (func_0x006d0a90(), puVar1 == (uint *)0x0)) {
    return (uint *)0x0;
  }
  puVar2 = &uStack_48;
  _gmtime_r(puVar2,auStack_80);
  if ((puVar2 != (undefined8 *)0x0) &&
     ((((int)param_3 == 0 && (param_4 == 0)) ||
      (puVar3 = puVar2, FUN_006d0dd8(puVar2,param_3,param_4), (int)puVar3 != 0)))) {
    if (*(int *)((long)puVar2 + 0x14) - 0x1fa4U < 0xffffd8f0) {
      uVar4 = 0x8a;
    }
    else {
      lVar5 = *(long *)(puVar1 + 2);
      if ((lVar5 != 0) && (0x13 < *puVar1)) {
LAB_006cbab4:
        FUN_00702090(lVar5,0x14,&UNK_00915f16);
        _strlen();
        *puVar1 = (uint)lVar5;
        puVar1[1] = 0x18;
        return puVar1;
      }
      lVar5 = 0x14;
      FUN_00701e90();
      if (lVar5 != 0) {
        func_0x00701ed0(*(undefined8 *)(puVar1 + 2));
        *(long *)(puVar1 + 2) = lVar5;
        goto LAB_006cbab4;
      }
      uVar4 = 0x41;
    }
    FUN_006de8e4(0xc,0,uVar4,0,0);
  }
  if (param_1 == (uint *)0x0) {
    FUN_006ce410(puVar1);
  }
  return (uint *)0x0;
}



/* Entry: 006cbb40; end: 006cbb9b;  */

int FUN_006cbb40(ulong param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar1 == (*(uint *)(param_2 + 4) & 0x100)) {
    FUN_006ce48c();
    iVar2 = 1;
    if ((param_1 & 0x80000000) == 0) {
      iVar2 = -(uint)((int)param_1 != 0);
    }
    iVar3 = (int)param_1;
    if (uVar1 != 0) {
      iVar3 = iVar2;
    }
  }
  else {
    iVar3 = -1;
    if (uVar1 == 0) {
      iVar3 = 1;
    }
  }
  return iVar3;
}



/* Entry: 006cbb9c; end: 006cbceb;  */

int FUN_006cbb9c(uint *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  if (param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    for (uVar9 = 0; uVar5 != uVar9; uVar9 = uVar9 + 1) {
      lVar7 = *(long *)(param_1 + 2);
      if (*(char *)(lVar7 + uVar9) != '\0') {
        bVar3 = *(byte *)(lVar7 + uVar9);
        if ((*(byte *)((long)param_1 + 5) & 1) == 0) {
          uVar6 = (uint)(bVar3 >> 7);
          bVar4 = true;
        }
        else if (bVar3 < 0x81) {
          if (bVar3 == 0x80) {
            lVar7 = lVar7 + uVar9 + 1;
            func_0x006cbcec(lVar7,(long)(int)(~(uint)uVar9 + uVar2));
            bVar4 = false;
            uVar6 = (uint)lVar7 ^ 1;
          }
          else {
            bVar4 = false;
            uVar6 = 0;
          }
        }
        else {
          bVar4 = false;
          uVar6 = 1;
        }
        goto LAB_006cbc54;
      }
    }
    bVar4 = true;
    uVar6 = 1;
    uVar9 = uVar5;
LAB_006cbc54:
    iVar8 = uVar2 - (int)uVar9;
    if (iVar8 <= (int)(uVar6 ^ 0x7fffffff)) {
      iVar1 = uVar6 + iVar8;
      if (param_2 == (long *)0x0) {
        return iVar1;
      }
      if (uVar6 != 0) {
        *(undefined1 *)*param_2 = 0;
        iVar8 = *param_1 - (int)uVar9;
      }
      func_0x006cbd1c(*param_2 + (ulong)uVar6,*(long *)(param_1 + 2) + (uVar9 & 0xffffffff),
                      (long)iVar8);
      if (!bVar4) {
        func_0x006cbd28(*param_2,(long)iVar1);
      }
      *param_2 = *param_2 + (long)iVar1;
      return iVar1;
    }
    func_0x006cc15c();
    func_0x006cc150();
  }
  return 0;
}



/* Entry: 006cbcec; end: 006cbd5f;  */

bool FUN_006cbcec(long param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = param_2;
    if (param_2 == uVar2) break;
    pcVar1 = (char *)(param_1 + uVar2);
    uVar3 = uVar2;
    uVar2 = uVar2 + 1;
  } while (*pcVar1 == '\0');
  return param_2 <= uVar3;
}



/* Entry: 006cbd60; end: 006cbec3;  */

char ** FUN_006cbd60(undefined8 *param_1,long *param_2,ulong param_3)

{
  char **ppcVar1;
  char *pcVar2;
  ulong uVar3;
  char **ppcVar4;
  char *pcVar5;
  int iStack_64;
  char *pcStack_60;
  ulong uStack_58;
  
  if (param_3 >> 0x1e != 0) {
    func_0x006cc15c();
LAB_006cbdf4:
    func_0x006cc150();
    return (char **)0x0;
  }
  pcVar5 = (char *)*param_2;
  ppcVar1 = &pcStack_60;
  pcStack_60 = pcVar5;
  uStack_58 = param_3;
  FUN_006d4770(ppcVar1,&iStack_64);
  if ((int)ppcVar1 == 0) {
    func_0x006cc15c();
    goto LAB_006cbdf4;
  }
  if (((param_1 == (undefined8 *)0x0) ||
      (ppcVar4 = (char **)*param_1, (char **)*param_1 == (char **)0x0)) &&
     (func_0x006d0a70(), ppcVar4 = ppcVar1, ppcVar1 == (char **)0x0)) {
    return (char **)0x0;
  }
  uVar3 = param_3;
  if (iStack_64 == 0) {
    if (param_3 == 0) goto LAB_006cbe34;
    if (*pcVar5 != '\0') goto LAB_006cbe5c;
  }
  else {
    if (param_3 == 0) {
LAB_006cbe34:
      uVar3 = 0;
      goto LAB_006cbe5c;
    }
    if (*pcVar5 != -1) goto LAB_006cbe5c;
    pcVar2 = pcVar5 + 1;
    func_0x006cbcec(pcVar2,param_3 - 1);
    if ((int)pcVar2 != 0) goto LAB_006cbe5c;
  }
  pcVar5 = pcVar5 + 1;
  uVar3 = param_3 - 1;
LAB_006cbe5c:
  ppcVar1 = ppcVar4;
  FUN_006ce2d0(ppcVar4,pcVar5,uVar3);
  if ((int)ppcVar1 == 0) {
    if ((param_1 != (undefined8 *)0x0) && ((char **)*param_1 == ppcVar4)) {
      return (char **)0x0;
    }
    FUN_006ce410(ppcVar4);
    return (char **)0x0;
  }
  if (iStack_64 == 0) {
    *(int *)((long)ppcVar4 + 4) = 2;
  }
  else {
    *(int *)((long)ppcVar4 + 4) = 0x102;
    func_0x006cbd28(ppcVar4[1],(long)*(int *)ppcVar4);
  }
  *param_2 = *param_2 + param_3;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = ppcVar4;
    return ppcVar4;
  }
  return ppcVar4;
}



/* Entry: 006cbec4; end: 006cbecb;  */

long FUN_006cbec4(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  lVar3 = 0;
  if (param_1 != 0) {
    plVar2 = &lStack_28;
    FUN_006cc0ac(plVar2,param_1,2);
    if ((int)plVar2 != 0) {
      lVar3 = -lStack_28;
      if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
        lVar3 = lStack_28;
      }
      bVar1 = (ulong)-lStack_28 < 0x8000000000000000;
      if (((uint)(lStack_28 != 0) & *(uint *)(param_1 + 4) >> 8) == 0) {
        bVar1 = lStack_28 < 0;
      }
      if (!bVar1) {
        return lVar3;
      }
    }
    FUN_006de5b0();
    lVar3 = -1;
  }
  return lVar3;
}



/* Entry: 006cbecc; end: 006cbf47;  */

long FUN_006cbecc(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  lVar3 = 0;
  if (param_1 != 0) {
    plVar2 = &lStack_28;
    FUN_006cc0ac(plVar2,param_1,param_2);
    if ((int)plVar2 != 0) {
      lVar3 = -lStack_28;
      if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
        lVar3 = lStack_28;
      }
      bVar1 = (ulong)-lStack_28 < 0x8000000000000000;
      if (((uint)(lStack_28 != 0) & *(uint *)(param_1 + 4) >> 8) == 0) {
        bVar1 = lStack_28 < 0;
      }
      if (!bVar1) {
        return lVar3;
      }
    }
    FUN_006de5b0();
    lVar3 = -1;
  }
  return lVar3;
}



/* Entry: 006cbf48; end: 006cbf57;  */

long FUN_006cbf48(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  lVar3 = 0;
  if (param_1 != 0) {
    plVar2 = &lStack_28;
    FUN_006cc0ac(plVar2,param_1,10);
    if ((int)plVar2 != 0) {
      lVar3 = -lStack_28;
      if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
        lVar3 = lStack_28;
      }
      bVar1 = (ulong)-lStack_28 < 0x8000000000000000;
      if (((uint)(lStack_28 != 0) & *(uint *)(param_1 + 4) >> 8) == 0) {
        bVar1 = lStack_28 < 0;
      }
      if (!bVar1) {
        return lVar3;
      }
    }
    FUN_006de5b0();
    lVar3 = -1;
  }
  return lVar3;
}



/* Entry: 006cbf58; end: 006cc017;  */

ulong FUN_006cbf58(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2;
  if ((param_2 == 0) && (uVar2 = param_3, func_0x006ce440(), uVar2 == 0)) {
    func_0x006cc15c();
    func_0x006cc150();
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar3 = param_1;
      FUN_006e3858();
      uVar1 = (uint)param_3 | 0x100;
      if ((int)uVar3 != 0) {
        uVar1 = (uint)param_3;
      }
      param_3 = (ulong)uVar1;
    }
    *(int *)(uVar2 + 4) = (int)param_3;
    uVar3 = param_1;
    FUN_006e3eb8(param_1);
    uVar4 = uVar2;
    FUN_006ce2d0(uVar2,0,uVar3);
    if ((int)uVar4 != 0) {
      uVar5 = *(undefined8 *)(uVar2 + 8);
      FUN_006e4138(uVar5,uVar3 & 0xffffffff,param_1);
      if ((int)uVar5 != 0) {
        return uVar2;
      }
    }
  }
  if (uVar2 != param_2) {
    func_0x006ce410(uVar2);
  }
  return 0;
}



/* Entry: 006cc018; end: 006cc01f;  */

long FUN_006cc018(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeffU) == 2) {
    lVar1 = *(long *)(param_1 + 2);
    FUN_006e405c(lVar1,(long)*param_1,param_2);
    if (lVar1 == 0) {
      func_0x006cc15c();
      func_0x006cc150();
    }
    else if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
      FUN_006e3c14(lVar1,1);
    }
  }
  else {
    func_0x006cc15c();
    func_0x006cc150();
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 006cc020; end: 006cc0a3;  */

long FUN_006cc020(int *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeffU) == param_3) {
    lVar1 = *(long *)(param_1 + 2);
    FUN_006e405c(lVar1,(long)*param_1,param_2);
    if (lVar1 == 0) {
      func_0x006cc15c();
      func_0x006cc150();
    }
    else if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
      FUN_006e3c14(lVar1,1);
    }
  }
  else {
    func_0x006cc15c();
    func_0x006cc150();
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 006cc0a4; end: 006cc0ab;  */

long FUN_006cc0a4(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((param_1[1] & 0xfffffeffU) == 10) {
    lVar1 = *(long *)(param_1 + 2);
    FUN_006e405c(lVar1,(long)*param_1,param_2);
    if (lVar1 == 0) {
      func_0x006cc15c();
      func_0x006cc150();
    }
    else if ((*(byte *)((long)param_1 + 5) & 1) != 0) {
      FUN_006e3c14(lVar1,1);
    }
  }
  else {
    func_0x006cc15c();
    func_0x006cc150();
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 006cc0ac; end: 006cc14f;  */

/* WARNING: Possible PIC construction at 0x006cc100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006cc104) */

void FUN_006cc0ac(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x9;
  uint uVar6;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((param_2[1] & 0xfffffeffU) == param_3) {
    lVar5 = (long)*param_2;
    if (*param_2 < 9) {
      func_0x006cbd1c((long)&uStack_28 - lVar5,*(undefined8 *)(param_2 + 2));
      uVar6 = (uint)lVar5;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1 = (uint *)((long)&MACH_HEADER.magic + 1);
      func_0x006cc168(uStack_28);
      if (extraout_x9 == extraout_x8) {
        return;
      }
      ___stack_chk_fail();
    }
    else {
      func_0x006cc15c();
      uVar6 = 0xc4;
    }
  }
  else {
    func_0x006cc15c();
    uVar6 = 0xc3;
  }
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (uVar6 == 0)) {
      puVar4 = puVar3;
      ___error();
      uVar6 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = uVar6 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006cc150; end: 006cc197;  */

void FUN_006cc150(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006cc198; end: 006cc62f;  */

/* WARNING: Possible PIC construction at 0x006cc3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cc618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cc5f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cc450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cc434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006cc454) */
/* WARNING: Removing unreachable block (ram,0x006cc5f4) */
/* WARNING: Removing unreachable block (ram,0x006cc61c) */
/* WARNING: Removing unreachable block (ram,0x006cc5f8) */
/* WARNING: Removing unreachable block (ram,0x006cc628) */
/* WARNING: Removing unreachable block (ram,0x006cc600) */
/* WARNING: Removing unreachable block (ram,0x006cc438) */
/* WARNING: Removing unreachable block (ram,0x006cc460) */
/* WARNING: Removing unreachable block (ram,0x006cc3ec) */

dword * FUN_006cc198(dword *param_1,dword *param_2,dword *param_3,uint param_4,undefined *param_5,
                    code *param_6,char *param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  dword *pdVar7;
  dword *pdVar8;
  dword *pdVar9;
  uint uVar10;
  code *pcVar11;
  code *pcVar12;
  uint uVar13;
  code *pcVar14;
  dword *pdVar15;
  code *pcVar16;
  uint uVar17;
  undefined *puVar18;
  code *pcVar19;
  code *pcVar20;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a4;
  dword *pdStack_a0;
  long lStack_98;
  uint auStack_90 [8];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar8 = param_1;
  if ((int)param_3 == -1) {
    pdVar8 = param_2;
    _strlen();
    param_3 = pdVar8;
  }
  uVar10 = (uint)param_3;
  uVar13 = param_4 - 0x1000;
  if ((4 < uVar13) || ((0x17U >> (ulong)(param_4 & 0x1f) & 1) == 0)) {
    func_0x006cc658();
    uVar13 = 0xb6;
    goto FUN_006cc630;
  }
  pcVar16 = (code *)0x0;
  pcVar11 = (code *)0x0;
  pcVar20 = (code *)0x0;
  pcVar14 = (code *)0x0;
  pcVar19 = (code *)(&PTR_FUN_00a10f60)[uVar13];
  uVar6 = *(uint *)(&UNK_0082ce04 + (ulong)uVar13 * 4);
  puVar18 = &UNK_00002806;
  if (param_5 != (undefined *)0x0) {
    puVar18 = param_5;
  }
  lStack_98 = (long)(int)uVar10;
  pdStack_a0 = param_2;
  uVar13 = uVar10;
  while (uVar17 = (uint)puVar18, lStack_98 != 0) {
    pdVar8 = (dword *)&pdStack_a0;
    (*pcVar19)(pdVar8,auStack_90);
    uVar13 = uVar6;
    if ((int)pdVar8 == 0) {
LAB_006cc3e4:
      func_0x006cc658();
      goto FUN_006cc630;
    }
    if ((pcVar20 == (code *)0x0 && (param_4 == 0x1002 || param_4 == 0x1004)) &&
       (auStack_90[0] == 0xfeff)) {
LAB_006cc390:
      uVar13 = 0x7e;
      goto LAB_006cc3e4;
    }
    if ((uVar17 >> 1 & 1) != 0) {
      if (auStack_90[0] < 0x80) {
        if ((0x19 < (auStack_90[0] & 0x5f) - 0x41 && 9 < auStack_90[0] - 0x30) &&
           (((0x3d < auStack_90[0] ||
             ((1L << ((ulong)auStack_90[0] & 0x3f) & 0x2400fb8100000000U) == 0)) &&
            (auStack_90[0] != 0x3f)))) {
          puVar18 = (undefined *)((ulong)puVar18 & 0xfffffffffffffffd);
        }
      }
      else {
        puVar18 = (undefined *)((ulong)puVar18 & 0xfffffffffffffffd);
      }
    }
    puVar2 = (undefined *)((ulong)puVar18 & 0xffffffffffffffef);
    if (((uint)(0x7f < auStack_90[0]) & (uint)puVar18 >> 4) == 0) {
      puVar2 = puVar18;
    }
    puVar3 = (undefined *)((ulong)puVar2 & 0xfffffffffffffffb);
    if (((uint)(0xff < auStack_90[0]) & (uint)puVar2 >> 2) == 0) {
      puVar3 = puVar2;
    }
    puVar18 = (undefined *)((ulong)puVar3 & 0xfffffffffffff7ff);
    if (((uint)((auStack_90[0] & 0xffff0000) != 0) & (uint)puVar3 >> 0xb) == 0) {
      puVar18 = puVar3;
    }
    if (puVar18 == (undefined *)0x0) goto LAB_006cc390;
    lVar1 = 3;
    if (0xffff < auStack_90[0]) {
      lVar1 = 4;
    }
    lVar4 = 2;
    if (0x7ff < auStack_90[0]) {
      lVar4 = lVar1;
    }
    lVar1 = 1;
    if (0x7f < auStack_90[0]) {
      lVar1 = lVar4;
    }
    pcVar14 = pcVar14 + lVar1;
    pcVar11 = pcVar11 + 4;
    pcVar16 = pcVar16 + 2;
    pcVar20 = pcVar20 + 1;
    uVar13 = (uint)param_3;
  }
  if (0 < (long)param_6 && pcVar20 < param_6) {
    func_0x006cc658();
    uVar13 = 0xae;
    goto FUN_006cc630;
  }
  if (((long)param_7 >= 1 && param_7 <= pcVar20) &&
      ((long)param_7 < 1 || pcVar20 != (code *)param_7)) {
    func_0x006cc658();
    uVar13 = 0xad;
    goto FUN_006cc630;
  }
  pcVar12 = pcVar11;
  if ((uVar17 >> 1 & 1) == 0) {
    if ((uVar17 >> 4 & 1) == 0) {
      if ((uVar17 >> 2 & 1) == 0) {
        if ((uVar17 >> 0xb & 1) == 0) {
          if ((uVar17 >> 8 & 1) == 0) {
            if ((uVar17 >> 0xd & 1) == 0) {
              func_0x006cc658();
              uVar13 = 0x7e;
              goto FUN_006cc630;
            }
            param_7 = section_00000ff8.sectname + 8;
            pdVar9 = &MACH_HEADER.filetype;
            pcVar12 = FUN_006d4e60;
            pcVar20 = pcVar14;
          }
          else {
            param_7 = section_00000ff8.sectname + 0xc;
            pdVar9 = &MACH_HEADER.reserved;
            pcVar12 = (code *)0x6d4f98;
            pcVar20 = pcVar11;
          }
        }
        else {
          param_7 = section_00000ff8.sectname + 10;
          pdVar9 = (dword *)((long)&MACH_HEADER.reserved + 2);
          pcVar12 = FUN_006d4f5c;
          pcVar20 = pcVar16;
        }
      }
      else {
        func_0x006cc664();
        pdVar9 = &MACH_HEADER.sizeofcmds;
      }
    }
    else {
      func_0x006cc664();
      pdVar9 = (dword *)((long)&MACH_HEADER.sizeofcmds + 2);
    }
  }
  else {
    func_0x006cc664();
    pdVar9 = (dword *)((long)&MACH_HEADER.ncmds + 3);
  }
  if (param_1 == (dword *)0x0) {
LAB_006cc3f0:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
      return pdVar9;
    }
    ___stack_chk_fail();
  }
  else {
    pdVar15 = *(dword **)param_1;
    if (pdVar15 == (dword *)0x0) {
      pdVar8 = pdVar9;
      func_0x006ce440();
      if (pdVar8 != (dword *)0x0) {
        *(dword **)param_1 = pdVar8;
        pdVar15 = pdVar8;
        goto LAB_006cc51c;
      }
    }
    else {
      if (*(long *)(pdVar15 + 2) != 0) {
        *pdVar15 = 0;
        func_0x00701ed0();
        *(undefined8 *)(pdVar15 + 2) = 0;
      }
      pdVar15[1] = (dword)pdVar9;
LAB_006cc51c:
      if (param_4 != (uint)param_7) {
        pdVar8 = auStack_90;
        FUN_006d35b0(pdVar8,pcVar20 + 1);
        lVar1 = (long)(int)uVar10;
        pdVar7 = param_2;
        if ((int)pdVar8 == 0) {
          func_0x006cc658();
          uVar13 = 0x41;
        }
        else {
          do {
            pdStack_a0 = pdVar7;
            lStack_98 = lVar1;
            if (lStack_98 == 0) {
              uStack_b0 = 0;
              pdVar8 = auStack_90;
              FUN_006d3a70(pdVar8,0);
              if ((int)pdVar8 != 0) {
                pdVar8 = auStack_90;
                uVar13 = (uint)&lStack_b8;
                FUN_006d36d4(pdVar8,&uStack_b0);
                if (((int)pdVar8 != 0) && (0xffffffff80000000 < lStack_b8 - 0x80000000U)) {
                  *pdVar15 = (int)lStack_b8 - 1;
                  *(undefined8 *)(pdVar15 + 2) = uStack_b0;
                  goto LAB_006cc3f0;
                }
              }
              func_0x006cc658();
              uVar13 = 0x44;
              goto FUN_006cc630;
            }
            pdVar8 = (dword *)&pdStack_a0;
            (*pcVar19)(pdVar8,&uStack_a4);
            if ((int)pdVar8 == 0) break;
            pdVar8 = auStack_90;
            (*pcVar12)(pdVar8,uStack_a4);
            lVar1 = lStack_98;
            pdVar7 = pdStack_a0;
          } while ((int)pdVar8 != 0);
          func_0x006cc658();
          uVar13 = 0x44;
        }
        goto FUN_006cc630;
      }
      uVar13 = uVar10;
      FUN_006ce2d0(pdVar15,param_2);
      pdVar8 = pdVar15;
      if ((int)pdVar15 != 0) goto LAB_006cc3f0;
    }
    func_0x006cc658();
    uVar13 = 0x41;
  }
FUN_006cc630:
  pdVar15 = pdVar8;
  FUN_006de604();
  pdVar9 = (dword *)0x0;
  if (pdVar15 != (dword *)0x0) {
    if (((int)pdVar8 == 2) && (uVar13 == 0)) {
      pdVar9 = pdVar15;
      ___error();
      uVar13 = *pdVar9;
    }
    iVar5 = pdVar15[0x60];
    uVar10 = iVar5 + 1U & 0xf;
    pdVar15[0x60] = uVar10;
    if (uVar10 == pdVar15[0x61]) {
      pdVar15[0x61] = iVar5 + 2U & 0xf;
    }
    pdVar15 = pdVar15 + (ulong)uVar10 * 6;
    pdVar9 = pdVar15;
    func_0x006de65c(pdVar15);
    *(undefined8 *)pdVar15 = 0;
    *(undefined2 *)(pdVar15 + 5) = 0;
    pdVar15[4] = uVar13 & 0xfff | (int)pdVar8 << 0x18;
  }
  return pdVar9;
}



/* Entry: 006cc630; end: 006cc67b;  */

void FUN_006cc630(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006cc67c; end: 006cc7bf;  */

/* WARNING: Possible PIC construction at 0x006cc738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006cc73c) */

int FUN_006cc67c(qword *param_1,qword *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  qword *pqVar4;
  qword *pqVar5;
  qword *unaff_x19;
  qword *pqVar6;
  qword *unaff_x20;
  qword *unaff_x21;
  qword *pqVar7;
  qword *unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [8];
  qword aqStack_88 [10];
  undefined8 uStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pqVar4 = unaff_x20;
  if ((param_2 == (qword *)0x0) || (pqVar4 = param_2, param_2[3] == 0)) {
    pqVar7 = param_1;
    func_0x006cca5c();
    pqVar5 = param_2;
    pqVar6 = param_1;
    if ((bool)in_ZR) {
      pqVar5 = (qword *)&UNK_00915f42;
      goto SUB_006cc774;
    }
LAB_006cc770:
    unaff_x20 = pqVar4;
    unaff_x30 = 0x6cc774;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_90;
    param_1 = pqVar7;
    unaff_x19 = pqVar6;
    unaff_x29 = puVar1;
  }
  else {
    unaff_x22 = aqStack_88;
    pqVar7 = aqStack_88;
    pqVar5 = &segment_command_00000020.filesize;
    func_0x006cc674(pqVar7,0x50,param_2);
    iVar3 = (int)pqVar7;
    uVar2 = iVar3 == 0x50;
    if (iVar3 < 0x50) {
      pqVar7 = (qword *)0x0;
    }
    else {
      unaff_x22 = (qword *)(ulong)(iVar3 + 1);
      pqVar7 = unaff_x22;
      FUN_00701e90();
      if (pqVar7 == (qword *)0x0) {
        func_0x006cca5c();
        pqVar6 = (qword *)0xffffffff;
        if ((bool)uVar2) {
          return -1;
        }
        goto LAB_006cc770;
      }
      pqVar4 = pqVar7;
      func_0x006cc674();
      iVar3 = (int)pqVar4;
      unaff_x22 = pqVar7;
    }
    pqVar5 = (qword *)&UNK_00915f47;
    if (0 < iVar3) {
      pqVar5 = unaff_x22;
    }
    unaff_x30 = 0x6cc73c;
    register0x00000008 = (BADSPACEBASE *)auStack_90;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x21 = pqVar7;
    unaff_x29 = puVar1;
  }
SUB_006cc774:
  *(qword **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(qword **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(qword **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(qword **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  pqVar4 = pqVar5;
  _strlen();
  func_0x006d199c(param_1,pqVar5,pqVar4);
  iVar3 = (int)pqVar4;
  if ((int)param_1 != iVar3) {
    iVar3 = -1;
  }
  return iVar3;
}



/* Entry: 006cc7c0; end: 006cc957;  */

undefined8 * FUN_006cc7c0(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (((param_2 == (long *)0x0) || (param_3 - 0x80000000U < 0xffffffff80000001)) ||
     (lVar4 = *param_2, lVar4 == 0)) {
LAB_006cc83c:
    FUN_006cca50(0xc,0,0x92);
LAB_006cc84c:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    for (lVar1 = 0; iVar2 = (int)param_3, iVar2 != (int)lVar1; lVar1 = lVar1 + 1) {
      if (*(char *)(lVar4 + lVar1) == -0x80) goto LAB_006cc83c;
    }
    if (((param_1 == (undefined8 *)0x0) ||
        (puVar3 = (undefined8 *)*param_1, puVar3 == (undefined8 *)0x0)) ||
       ((*(byte *)(puVar3 + 4) & 1) == 0)) {
      puVar3 = param_1;
      FUN_006cc958();
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar4 = *param_2;
    }
    lVar1 = puVar3[3];
    puVar3[3] = 0;
    if (lVar1 == 0) {
      *(undefined4 *)((long)puVar3 + 0x14) = 0;
LAB_006cc8b8:
      lVar1 = param_3;
      func_0x00701e90();
      if (lVar1 == 0) {
        FUN_006cca50(0xc,0,0x41);
        if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar3)) {
          func_0x006cc9a8(puVar3);
        }
        goto LAB_006cc84c;
      }
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | 8;
    }
    else if (*(int *)((long)puVar3 + 0x14) < iVar2) {
      *(undefined4 *)((long)puVar3 + 0x14) = 0;
      func_0x00701ed0(lVar1);
      goto LAB_006cc8b8;
    }
    if (param_3 != 0) {
      _memcpy(lVar1,lVar4,param_3);
    }
    if ((*(byte *)(puVar3 + 4) >> 2 & 1) != 0) {
      func_0x00701ed0(*puVar3);
      func_0x00701ed0(puVar3[1]);
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffb;
    }
    puVar3[3] = lVar1;
    *(int *)((long)puVar3 + 0x14) = iVar2;
    *puVar3 = 0;
    puVar3[1] = 0;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = puVar3;
    }
    *param_2 = lVar4 + param_3;
  }
  return puVar3;
}



/* Entry: 006cc958; end: 006cca1b;  */

char * FUN_006cc958(void)

{
  char *pcVar1;
  
  pcVar1 = segment_command_00000020.segname;
  FUN_00701e90();
  if (pcVar1 == (char *)0x0) {
    FUN_006cca50(0xc,0,0x41);
  }
  else {
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *(qword *)(pcVar1 + 0x18) = 0;
    *(qword *)(pcVar1 + 0x10) = 0;
    *(undefined4 *)(pcVar1 + 0x20) = 1;
  }
  return pcVar1;
}



/* Entry: 006cca1c; end: 006cca4f;  */

void FUN_006cca1c(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = 0xd;
  uStack_38 = param_4;
  uStack_30 = param_5;
  uStack_28 = param_1;
  uStack_24 = param_3;
  uStack_20 = param_2;
  FUN_0070224c(&uStack_38);
  return;
}



/* Entry: 006cca50; end: 006cca73;  */

void FUN_006cca50(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006cca74; end: 006ccc83;  */

int FUN_006cca74(long param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  char cStack_59;
  undefined8 uStack_58;
  int aiStack_50 [2];
  undefined4 *puStack_48;
  
  iVar5 = 0;
  cStack_59 = '\0';
  uVar11 = param_2[1];
  uVar12 = (ulong)uVar11;
  lVar8 = param_1;
  if ((param_3 >> 6 & 1) != 0) {
    uVar6 = uVar12;
    func_0x006ce568(uVar12);
    uVar7 = uVar6;
    _strlen();
    FUN_006ccc84(param_1,uVar6,uVar7);
    if ((int)lVar8 == 0) {
      return -1;
    }
    FUN_006cd43c();
    if ((int)lVar8 == 0) {
      return -1;
    }
    iVar5 = (int)lVar8 + (int)uVar7;
  }
  iVar4 = (int)lVar8;
  if ((param_3 >> 7 & 1) != 0) {
LAB_006ccbb0:
    FUN_006cd43c();
    if (iVar4 == 0) {
      return -1;
    }
    if ((param_3 >> 9 & 1) == 0) {
      FUN_006cd234(param_1,*(undefined8 *)(param_2 + 2),*param_2);
      if ((int)param_1 < 0) {
        return -1;
      }
      iVar4 = (int)param_1 + 1;
    }
    else {
      aiStack_50[0] = param_2[1];
      if (aiStack_50[0] == 0x102) {
        aiStack_50[0] = 2;
      }
      else if (aiStack_50[0] == 0x10a) {
        aiStack_50[0] = 10;
      }
      uStack_58 = 0;
      piVar10 = aiStack_50;
      puStack_48 = param_2;
      func_0x006d0ab8(piVar10,&uStack_58);
      iVar4 = -1;
      if (-1 < (int)piVar10) {
        FUN_006cd234(param_1,uStack_58,piVar10);
        func_0x00701ed0(uStack_58);
        if (-1 < (int)param_1) {
          iVar4 = (int)param_1 + 1;
        }
      }
    }
    if (iVar4 < 0) {
      return -1;
    }
    return iVar4 + iVar5;
  }
  if ((param_3 >> 5 & 1) == 0) {
    if ((uVar11 - 1 < 0x1e) && ((1L << (uVar12 & 0x3f) & 0x2a23efffU) == 0)) {
      uVar11 = (uint)(char)(&UNK_0082ce1d)[uVar12];
      goto LAB_006ccb18;
    }
    if ((param_3 >> 8 & 1) != 0) goto LAB_006ccbb0;
  }
  uVar11 = 1;
LAB_006ccb18:
  uVar2 = uVar11 | 8;
  if (uVar11 == 0) {
    uVar2 = 1;
  }
  if ((param_3 & 0x10) != 0) {
    uVar11 = uVar2;
  }
  uVar9 = *(undefined8 *)(param_2 + 2);
  FUN_006cccb8(uVar9,*param_2,uVar11,param_3 & 0xf,&cStack_59,0);
  cVar3 = cStack_59;
  iVar4 = (int)uVar9;
  if (-1 < iVar4) {
    iVar1 = iVar4 + iVar5;
    if (cStack_59 != '\0') {
      iVar1 = iVar4 + iVar5 + 2;
    }
    if (param_1 == 0) {
      return iVar1;
    }
    if ((cStack_59 == '\0') || (FUN_006cd43c(), iVar4 != 0)) {
      uVar9 = *(undefined8 *)(param_2 + 2);
      FUN_006cccb8(uVar9,*param_2,uVar11,param_3 & 0xf,0,param_1);
      iVar5 = (int)uVar9;
      if (-1 < iVar5) {
        if (cVar3 == '\0') {
          return iVar1;
        }
        FUN_006cd43c();
        if (iVar5 != 0) {
          return iVar1;
        }
      }
    }
  }
  return -1;
}



/* Entry: 006ccc84; end: 006cccb7;  */

bool FUN_006ccc84(long param_1,undefined8 param_2,int param_3)

{
  if (param_1 != 0) {
    func_0x006d199c();
    return (int)param_1 == param_3;
  }
  return true;
}



/* Entry: 006cccb8; end: 006cceb7;  */

int FUN_006cccb8(byte *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte abStack_6a [6];
  uint uStack_64;
  
  uVar1 = param_3 & 7;
  iVar8 = (int)param_2;
  if (uVar1 == 2) {
    if ((param_2 & 1) == 0) goto LAB_006ccd1c;
    uVar3 = 0x8e;
  }
  else {
    if ((uVar1 != 4) || ((param_2 & 3) == 0)) {
LAB_006ccd1c:
      iVar7 = 0;
      pbVar5 = param_1;
      while( true ) {
        while( true ) {
          if (pbVar5 == param_1 + iVar8) {
            return iVar7;
          }
          switch(uVar1) {
          case 0:
            pbVar6 = pbVar5;
            func_0x006cdc04(pbVar5,param_2,&uStack_64);
            if ((int)pbVar6 < 0) {
              return -1;
            }
            param_2 = (ulong)(uint)((int)param_2 - (int)pbVar6);
            pbVar6 = pbVar5 + ((ulong)pbVar6 & 0xffffffff);
            break;
          case 1:
            pbVar6 = pbVar5 + 1;
            uStack_64 = (uint)*pbVar5;
            break;
          case 2:
            pbVar6 = pbVar5 + 2;
            uStack_64 = (uint)CONCAT11(*pbVar5,pbVar5[1]);
            break;
          default:
            return -1;
          case 4:
            pbVar6 = pbVar5 + 4;
            uStack_64 = (uint)*pbVar5 << 0x18 | (uint)pbVar5[1] << 0x10 | (uint)pbVar5[2] << 8 |
                        (uint)pbVar5[3];
          }
          pbVar5 = pbVar6;
          if ((param_3 >> 3 & 1) == 0) break;
          pbVar6 = abStack_6a;
          func_0x006cde44(0x40,pbVar6,6,uStack_64);
          for (uVar4 = 0; ((uint)pbVar6 & ((int)(uint)pbVar6 >> 0x1f ^ 0xffffffffU)) != uVar4;
              uVar4 = uVar4 + 1) {
            uVar2 = (uint)abStack_6a[uVar4];
            func_0x006cd454();
            if ((int)uVar2 < 0) {
              return -1;
            }
            iVar7 = uVar2 + iVar7;
          }
          param_2 = param_2 & 0xffffffff;
        }
        uVar2 = uStack_64;
        func_0x006cd454();
        if ((int)uVar2 < 0) break;
        iVar7 = uVar2 + iVar7;
      }
      return -1;
    }
    uVar3 = 0x95;
  }
  FUN_006de8e4(0xc,0,uVar3,0,0);
  return -1;
}



/* Entry: 006cceb8; end: 006ccf4b;  */

undefined4 FUN_006cceb8(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puStack_40;
  undefined4 auStack_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar2 = (int)&puStack_40;
  puStack_40 = auStack_38;
  if (((param_2 != (undefined4 *)0x0) && (uVar1 = param_2[1], uVar1 < 0x1f)) &&
     ((1L << ((ulong)uVar1 & 0x3f) & 0x2a23efffU) == 0)) {
    auStack_38[0] = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x006cc18c(&puStack_40,*(undefined8 *)(param_2 + 2),*param_2,
                    (int)(char)(&UNK_0082ce1d)[uVar1] | 0x1000,0x2000);
    if (-1 < iVar2) {
      *param_1 = uStack_30;
      return auStack_38[0];
    }
  }
  return 0xffffffff;
}



/* Entry: 006ccf4c; end: 006cd063;  */

ulong FUN_006ccf4c(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  byte *pbVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  uint auStack_98 [20];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puVar8 = param_2;
  if (param_2 == (uint *)0x0) {
LAB_006cd038:
    uVar7 = 0;
  }
  else {
    iVar5 = 0;
    lVar12 = *(long *)(param_2 + 2);
    for (lVar11 = 0; lVar11 < (int)*param_2; lVar11 = lVar11 + 1) {
      cVar10 = *(char *)(lVar12 + lVar11);
      if (cVar10 == '\x7f') {
        cVar10 = '.';
      }
      else if (cVar10 < ' ') {
        cVar3 = cVar10;
        if (cVar10 != '\n') {
          cVar3 = '.';
        }
        if (cVar10 != '\r') {
          cVar10 = cVar3;
        }
      }
      *(char *)((long)auStack_98 + (long)iVar5) = cVar10;
      iVar2 = iVar5 + 1;
      bVar1 = 0x4e < iVar5;
      iVar5 = iVar2;
      if (bVar1) {
        puVar8 = auStack_98;
        uVar6 = param_1;
        func_0x006d199c(param_1,puVar8,iVar2);
        iVar5 = 0;
        uVar7 = 0;
        in_ZR = (int)uVar6 == 1;
        if ((int)uVar6 < 1) goto LAB_006cd03c;
      }
    }
    in_ZR = iVar5 == 1;
    if (0 < iVar5) {
      puVar8 = auStack_98;
      func_0x006d199c();
      in_ZR = (int)param_1 == 1;
      if ((int)param_1 < 1) goto LAB_006cd038;
    }
    uVar7 = 1;
  }
LAB_006cd03c:
  func_0x006cd470(uStack_48,uVar7);
  if ((bool)in_ZR) {
    return uVar7;
  }
  ___stack_chk_fail();
  iVar5 = (int)uVar7;
  uVar4 = *puVar8;
  if (0xb < (int)uVar4) {
    lVar11 = 0;
    lVar12 = *(long *)(puVar8 + 2);
    do {
      if (lVar11 == 0xc) {
        if (0xfffffff3 < ((int)*(char *)(lVar12 + 5) + *(char *)(lVar12 + 4) * 10) - 0x21dU) {
          if ((((0xd < (int)uVar4) && (*(byte *)(lVar12 + 0xc) - 0x30 < 10)) &&
              (*(byte *)(lVar12 + 0xd) - 0x30 < 10)) &&
             ((uVar4 != 0xe && (*(char *)(lVar12 + 0xe) == '.')))) {
            uVar7 = 1;
            pbVar9 = (byte *)(lVar12 + 0xf);
            while ((uVar4 - 0xe != uVar7 && (*pbVar9 - 0x30 < 10))) {
              uVar7 = uVar7 + 1;
              pbVar9 = pbVar9 + 1;
            }
          }
          FUN_006d2bcc();
          return (ulong)(0 < iVar5);
        }
        break;
      }
      pbVar9 = (byte *)(lVar12 + lVar11);
      lVar11 = lVar11 + 1;
    } while (0xfffffff5 < *pbVar9 - 0x3a);
  }
  func_0x006d199c();
  return 0;
}



/* Entry: 006cd064; end: 006cd233;  */

bool FUN_006cd064(undefined8 param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = *param_2;
  if (0xb < iVar1) {
    lVar3 = 0;
    lVar4 = *(long *)(param_2 + 2);
    do {
      if (lVar3 == 0xc) {
        if (0xfffffff3 < ((int)*(char *)(lVar4 + 5) + *(char *)(lVar4 + 4) * 10) - 0x21dU) {
          if ((((0xd < iVar1) && (*(byte *)(lVar4 + 0xc) - 0x30 < 10)) &&
              (*(byte *)(lVar4 + 0xd) - 0x30 < 10)) &&
             ((iVar1 != 0xe && (*(char *)(lVar4 + 0xe) == '.')))) {
            uVar5 = 1;
            pbVar2 = (byte *)(lVar4 + 0xf);
            while ((iVar1 - 0xe != uVar5 && (*pbVar2 - 0x30 < 10))) {
              uVar5 = uVar5 + 1;
              pbVar2 = pbVar2 + 1;
            }
          }
          FUN_006d2bcc(param_1,&UNK_00915f60);
          return 0 < (int)param_1;
        }
        break;
      }
      pbVar2 = (byte *)(lVar4 + lVar3);
      lVar3 = lVar3 + 1;
    } while (0xfffffff5 < *pbVar2 - 0x3a);
  }
  func_0x006d199c(param_1,&UNK_00915f51,0xe);
  return false;
}



/* Entry: 006cd234; end: 006cd2c3;  */

int FUN_006cd234(long param_1,byte *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (param_1 == 0) {
LAB_006cd2a8:
    param_3 = param_3 << 1;
  }
  else {
    lVar2 = (long)param_3;
    do {
      if (lVar2 == 0) goto LAB_006cd2a8;
      uStack_42 = (&UNK_00915f86)[*param_2 >> 4];
      uStack_41 = (&UNK_00915f86)[(ulong)*param_2 & 0xf];
      lVar1 = param_1;
      FUN_006ccc84(param_1,&uStack_42,2);
      lVar2 = lVar2 + -1;
      param_2 = param_2 + 1;
    } while ((int)lVar1 != 0);
    param_3 = -1;
  }
  return param_3;
}



/* Entry: 006cd2c4; end: 006cd43b;  */

/* WARNING: Possible PIC construction at 0x006cd398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cd3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006cd39c) */
/* WARNING: Removing unreachable block (ram,0x006cd430) */
/* WARNING: Removing unreachable block (ram,0x006cd3a0) */
/* WARNING: Removing unreachable block (ram,0x006cd3b0) */
/* WARNING: Removing unreachable block (ram,0x006cd3f8) */
/* WARNING: Removing unreachable block (ram,0x006cd400) */

ulong FUN_006cd2c4(ulong param_1,ulong param_2,undefined1 *param_3,long param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  char acStack_33 [11];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)param_1;
  if (uVar3 < 0x10000) {
    if (uVar3 < 0x100) {
      if (uVar3 < 0x80) {
        uVar1 = (uint)(byte)(&UNK_0082ce3c)[param_1 & 0xffffffff] & (uint)param_2;
      }
      else {
        uVar1 = (uint)param_2 & 4;
      }
      if ((uVar1 & 0x61) != 0) {
        if (((uVar1 >> 3 & 1) != 0) && (param_3 != (undefined1 *)0x0)) {
          *param_3 = 1;
        }
        goto code_r0x006ccc84;
      }
      if ((uVar1 & 6) == 0) {
        if ((uVar3 != 0x5c) || ((param_2 & 0xf) == 0)) goto code_r0x006ccc84;
        pcVar6 = "\\\\";
        uVar3 = 2;
        uVar7 = 2;
      }
      else {
        func_0x006cd448(param_1,param_2,&UNK_00915fa5);
        uVar3 = 3;
        pcVar6 = acStack_33;
        uVar7 = 3;
      }
    }
    else {
      func_0x006cd448(param_1,param_2,&UNK_00915f9e);
      uVar3 = 6;
      pcVar6 = acStack_33;
      uVar7 = 6;
    }
  }
  else {
    func_0x006cd448(param_1,param_2,&UNK_00915f97);
    uVar3 = 10;
    pcVar6 = acStack_33;
    uVar7 = 10;
  }
  lVar4 = param_4;
  FUN_006ccc84(param_4,pcVar6,uVar7);
  bVar2 = (int)lVar4 == 0;
  if (bVar2) {
    uVar3 = 0xffffffff;
  }
  uVar5 = (ulong)uVar3;
  func_0x006cd470(uStack_28,uVar5);
  if (bVar2) {
    return uVar5;
  }
  ___stack_chk_fail();
code_r0x006ccc84:
  if (param_4 == 0) {
    return 1;
  }
  func_0x006d199c();
  return (ulong)((int)param_4 == 1);
}



/* Entry: 006cd43c; end: 006cd483;  */

bool FUN_006cd43c(void)

{
  long unaff_x19;
  
  if (unaff_x19 != 0) {
    func_0x006d199c();
    return (int)unaff_x19 == 1;
  }
  return true;
}



/* Entry: 006cd484; end: 006cd513;  */

undefined8 FUN_006cd484(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long in_x4;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar1 = &uStack_38;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  FUN_006cd514();
  if (in_x4 == 0) {
    func_0x006cd594();
    iVar2 = (int)in_x4;
    func_0x006cc18c();
  }
  else {
    func_0x006cd594();
    iVar2 = (int)in_x4;
    FUN_006cc198();
  }
  if (iVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  return uVar3;
}



/* Entry: 006cd514; end: 006cd57b;  */

undefined4 * FUN_006cd514(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_48 [10];
  
  puVar1 = auStack_48;
  auStack_48[0] = param_1;
  _bsearch(puVar1,&UNK_0082cec0,0x13,0x28,FUN_006cd57c);
  if (puVar1 == (undefined4 *)0x0) {
    func_0x007064d4(0xb29828);
    func_0x0070650c(0xb29828);
  }
  return puVar1;
}



/* Entry: 006cd57c; end: 006cd5b3;  */

uint FUN_006cd57c(int *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 006cd5b4; end: 006cd667;  */

void FUN_006cd5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar1 = &uStack_38;
  uStack_38 = param_2;
  _gmtime_r(puVar1,auStack_70);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_006de8e4(0xc,0,0x71,0,0);
  }
  else if ((((int)param_3 == 0) && (param_4 == 0)) ||
          (puVar2 = puVar1, FUN_006d0dd8(puVar1,param_3,param_4), (int)puVar2 != 0)) {
    if (*(int *)((long)puVar1 + 0x14) - 0x32U < 100) {
      FUN_006cdabc();
    }
    else {
      FUN_006cb9f4(param_1,uStack_38,param_3,param_4);
    }
  }
  return;
}



/* Entry: 006cd668; end: 006cd68b;  */

/* WARNING: Removing unreachable block (ram,0x006cd9b4) */
/* WARNING: Removing unreachable block (ram,0x006cb83c) */
/* WARNING: Removing unreachable block (ram,0x006cb8a0) */
/* WARNING: Removing unreachable block (ram,0x006cb99c) */
/* WARNING: Removing unreachable block (ram,0x006cb9a8) */
/* WARNING: Removing unreachable block (ram,0x006cb9a0) */
/* WARNING: Removing unreachable block (ram,0x006cd954) */
/* WARNING: Removing unreachable block (ram,0x006cda74) */
/* WARNING: Removing unreachable block (ram,0x006cda80) */
/* WARNING: Removing unreachable block (ram,0x006cda78) */
/* WARNING: Removing unreachable block (ram,0x006cda94) */
/* WARNING: Removing unreachable block (ram,0x006cda98) */
/* WARNING: Removing unreachable block (ram,0x006cdaac) */
/* WARNING: Removing unreachable block (ram,0x006cb9cc) */
/* WARNING: Removing unreachable block (ram,0x006cb9d0) */
/* WARNING: Removing unreachable block (ram,0x006cb9e4) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_006cd668(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_1[1] == 0x17) {
    if (param_1[1] != 0x17) {
      return false;
    }
    uVar1 = *param_1;
    if ((int)uVar1 < 0xb) {
      return false;
    }
    uVar12 = 0;
    lVar11 = 0;
    lVar6 = *(long *)(param_1 + 2);
    do {
      if (lVar11 == 5) {
        bVar2 = *(byte *)(lVar6 + uVar12);
        if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0)
        goto LAB_006cd9c0;
      }
      else {
        if (lVar11 == 6) {
          uVar12 = 0xc;
LAB_006cd9c0:
          cVar3 = *(char *)(lVar6 + (uVar12 & 0xffffffff));
          uVar5 = (uint)uVar12;
          if ((cVar3 == '+') || (cVar3 == '-')) {
            uVar5 = uVar5 + 5;
            if ((int)uVar1 < (int)uVar5) {
              return false;
            }
            pbVar7 = (byte *)((uVar12 & 0xffffffff) + lVar6);
            for (lVar11 = 0; lVar11 != 8; lVar11 = lVar11 + 4) {
              if ((byte)(pbVar7[1] - 0x3a) < 0xf6) {
                return false;
              }
              uVar9 = (uint)pbVar7[2];
              if (uVar9 - 0x3a < 0xfffffff6) {
                return false;
              }
              iVar8 = uVar9 + (int)(char)(pbVar7[1] * '\n') + -0x10;
              if (iVar8 < *(int *)(&UNK_0082d1d8 + lVar11)) {
                return false;
              }
              if (*(int *)(&UNK_0082d1f8 + lVar11) < iVar8) {
                return false;
              }
              pbVar7 = pbVar7 + 2;
            }
          }
          else if (cVar3 == 'Z') {
            uVar5 = uVar5 | 1;
          }
          return uVar5 == uVar1;
        }
        bVar2 = *(byte *)(lVar6 + uVar12);
      }
      if (uVar1 <= uVar12 || 9 < (bVar2 - 0x30 & 0xff)) {
        return false;
      }
      uVar5 = (uint)*(byte *)(lVar6 + uVar12 + 1);
      if (uVar5 - 0x3a < 0xfffffff6) {
        return false;
      }
      if (((ulong)uVar1 & 0xfffffffe) == uVar12) {
        return false;
      }
      iVar8 = uVar5 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
      if (iVar8 < *(int *)(&UNK_0082d1c0 + lVar11 * 4)) {
        return false;
      }
      if (*(int *)(&UNK_0082d1e0 + lVar11 * 4) < iVar8) {
        return false;
      }
      lVar11 = lVar11 + 1;
      uVar12 = uVar12 + 2;
    } while( true );
  }
  if (param_1[1] != 0x18) {
    return false;
  }
  if (param_1[1] != 0x18) {
    return false;
  }
  uVar1 = *param_1;
  uVar12 = (ulong)uVar1;
  if ((int)uVar1 < 0xd) {
    return false;
  }
  uVar10 = 0;
  lVar11 = 0;
  lVar6 = *(long *)(param_1 + 2);
  do {
    if (lVar11 == 6) {
      bVar2 = *(byte *)(lVar6 + uVar10);
      if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0) {
LAB_006cb8ac:
        if (*(char *)(lVar6 + (uVar10 & 0xffffffff)) == '.') {
          if ((int)uVar1 <= (int)uVar10) {
            return false;
          }
          uVar10 = uVar10 & 0xffffffff;
          iVar8 = 1;
          do {
            pbVar7 = (byte *)(lVar6 + 1 + uVar10);
            bVar4 = uVar12 <= uVar10;
            uVar10 = uVar10 + 1;
            uVar5 = *pbVar7 - 0x3a;
            iVar8 = iVar8 + -1;
          } while ((!bVar4 && 0xfffffff4 < uVar5) && (bVar4 || uVar5 != 0xfffffff5));
          if (iVar8 == 0) {
            return false;
          }
        }
        uVar9 = (uint)uVar10;
        cVar3 = *(char *)(lVar6 + (int)uVar9);
        uVar5 = uVar9;
        if (cVar3 != '\0') {
          if ((cVar3 == '+') || (cVar3 == '-')) {
            uVar5 = uVar9 + 5;
            if ((int)uVar1 < (int)uVar5) {
              return false;
            }
            pbVar7 = (byte *)(lVar6 + (int)(uVar9 + 1) + 1);
            for (lVar11 = 0; lVar11 != 8; lVar11 = lVar11 + 4) {
              if ((byte)(pbVar7[-1] - 0x3a) < 0xf6) {
                return false;
              }
              if (*pbVar7 - 0x3a < 0xfffffff6) {
                return false;
              }
              iVar8 = (uint)*pbVar7 + (int)(char)(pbVar7[-1] * '\n') + -0x10;
              if (iVar8 < *(int *)(&UNK_0082cdd8 + lVar11)) {
                return false;
              }
              if (*(int *)(&UNK_0082cdfc + lVar11) < iVar8) {
                return false;
              }
              pbVar7 = pbVar7 + 2;
            }
          }
          else {
            if (cVar3 != 'Z') {
              return false;
            }
            uVar5 = uVar9 + 1;
          }
        }
        return uVar5 == uVar1;
      }
    }
    else {
      if (lVar11 == 7) {
        uVar10 = 0xe;
        goto LAB_006cb8ac;
      }
      bVar2 = *(byte *)(lVar6 + uVar10);
    }
    if (uVar12 <= uVar10 || 9 < (bVar2 - 0x30 & 0xff)) {
      return false;
    }
    uVar5 = (uint)*(byte *)(lVar6 + uVar10 + 1);
    if (uVar5 - 0x3a < 0xfffffff6) {
      return false;
    }
    if ((uVar12 & 0xfffffffe) == uVar10) {
      return false;
    }
    iVar8 = uVar5 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
    if (iVar8 < *(int *)(&UNK_0082cdbc + lVar11 * 4)) {
      return false;
    }
    if (*(int *)(&UNK_0082cde0 + lVar11 * 4) < iVar8) {
      return false;
    }
    lVar11 = lVar11 + 1;
    uVar10 = uVar10 + 2;
  } while( true );
}



/* Entry: 006cd68c; end: 006cd6f3;  */

void FUN_006cd68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [56];
  
  iVar1 = (int)auStack_a0;
  puVar2 = auStack_68;
  FUN_006cd6f4(puVar2,param_3);
  if (((int)puVar2 != 0) && (FUN_006cd6f4(auStack_a0,param_4), iVar1 != 0)) {
    FUN_006d1004(param_1,param_2,auStack_68,auStack_a0);
  }
  return;
}



/* Entry: 006cd6f4; end: 006cd7db;  */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_006cd6f4(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  if (param_2 == (uint *)0x0) {
    _time(&stack0xffffffffffffffd8);
    puVar6 = &stack0xffffffffffffffd8;
    _gmtime_r(puVar6,param_1);
    puVar7 = (undefined4 *)(ulong)(puVar6 != (undefined1 *)0x0);
  }
  else {
    if (param_2[1] == 0x18) {
      if (param_2[1] != 0x18) {
        return (undefined4 *)0x0;
      }
      uVar1 = *param_2;
      uVar15 = (ulong)uVar1;
      if ((int)uVar1 < 0xd) {
        return (undefined4 *)0x0;
      }
      uVar13 = 0;
      uVar10 = 0;
      lVar14 = *(long *)(param_2 + 2);
      do {
        if (uVar10 == 6) {
          bVar2 = *(byte *)(lVar14 + uVar13);
          if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0)
          {
            if (param_1 != (undefined4 *)0x0) {
              *param_1 = 0;
            }
LAB_006cb8ac:
            if (*(char *)(lVar14 + (uVar13 & 0xffffffff)) == '.') {
              if ((int)uVar1 <= (int)uVar13) {
                return (undefined4 *)0x0;
              }
              uVar13 = uVar13 & 0xffffffff;
              iVar11 = 1;
              do {
                pbVar9 = (byte *)(lVar14 + 1 + uVar13);
                bVar5 = uVar15 <= uVar13;
                uVar13 = uVar13 + 1;
                uVar8 = *pbVar9 - 0x3a;
                iVar11 = iVar11 + -1;
              } while ((!bVar5 && 0xfffffff4 < uVar8) && (bVar5 || uVar8 != 0xfffffff5));
              if (iVar11 == 0) {
                return (undefined4 *)0x0;
              }
            }
            uVar12 = (uint)uVar13;
            cVar3 = *(char *)(lVar14 + (int)uVar12);
            uVar8 = uVar12;
            if (cVar3 != '\0') {
              if ((cVar3 == '+') || (cVar3 == '-')) {
                uVar8 = uVar12 + 5;
                if ((int)uVar1 < (int)uVar8) {
                  return (undefined4 *)0x0;
                }
                iVar11 = 0;
                pbVar9 = (byte *)(lVar14 + (int)(uVar12 + 1) + 1);
                for (lVar14 = 0; lVar14 != 8; lVar14 = lVar14 + 4) {
                  if ((byte)(pbVar9[-1] - 0x3a) < 0xf6) {
                    return (undefined4 *)0x0;
                  }
                  if (*pbVar9 - 0x3a < 0xfffffff6) {
                    return (undefined4 *)0x0;
                  }
                  iVar4 = (uint)*pbVar9 + (int)(char)(pbVar9[-1] * '\n') + -0x10;
                  if (iVar4 < *(int *)(&UNK_0082cdd8 + lVar14)) {
                    return (undefined4 *)0x0;
                  }
                  if (*(int *)(&UNK_0082cdfc + lVar14) < iVar4) {
                    return (undefined4 *)0x0;
                  }
                  if (param_1 != (undefined4 *)0x0) {
                    if (lVar14 == 0) {
                      iVar11 = iVar4 * 0xe10;
                    }
                    else {
                      iVar11 = iVar11 + iVar4 * 0x3c;
                    }
                  }
                  pbVar9 = pbVar9 + 2;
                }
                if (iVar11 != 0) {
                  iVar4 = -iVar11;
                  if (cVar3 == '-') {
                    iVar4 = iVar11;
                  }
                  FUN_006d0dd8(param_1,0,(long)iVar4,100,0xfffff894);
                  if ((int)param_1 == 0) {
                    return param_1;
                  }
                }
              }
              else {
                if (cVar3 != 'Z') {
                  return (undefined4 *)0x0;
                }
                uVar8 = uVar12 + 1;
              }
            }
            return (undefined4 *)(ulong)(uVar8 == uVar1);
          }
        }
        else {
          if (uVar10 == 7) {
            uVar13 = 0xe;
            goto LAB_006cb8ac;
          }
          bVar2 = *(byte *)(lVar14 + uVar13);
        }
        if (uVar15 <= uVar13 || 9 < (bVar2 - 0x30 & 0xff)) {
          return (undefined4 *)0x0;
        }
        uVar8 = (uint)*(byte *)(lVar14 + uVar13 + 1);
        if (uVar8 - 0x3a < 0xfffffff6) {
          return (undefined4 *)0x0;
        }
        if ((uVar15 & 0xfffffffe) == uVar13) {
          return (undefined4 *)0x0;
        }
        iVar11 = uVar8 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
        if (iVar11 < *(int *)(&UNK_0082cdbc + uVar10 * 4)) {
          return (undefined4 *)0x0;
        }
        if (*(int *)(&UNK_0082cde0 + uVar10 * 4) < iVar11) {
          return (undefined4 *)0x0;
        }
        if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006cb84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_0082cdb4)[uVar10 & 0xffffffff] * 4 + 0x6cb850))();
          return param_1;
        }
        uVar10 = uVar10 + 1;
        uVar13 = uVar13 + 2;
      } while( true );
    }
    if (param_2[1] == 0x17) {
      if (param_2[1] != 0x17) {
        return (undefined4 *)0x0;
      }
      uVar1 = *param_2;
      if ((int)uVar1 < 0xb) {
        return (undefined4 *)0x0;
      }
      uVar10 = 0;
      uVar15 = 0;
      lVar14 = *(long *)(param_2 + 2);
      do {
        if (uVar15 == 5) {
          bVar2 = *(byte *)(lVar14 + uVar10);
          if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0)
          {
            if (param_1 != (undefined4 *)0x0) {
              *param_1 = 0;
            }
            goto LAB_006cd9c0;
          }
        }
        else {
          if (uVar15 == 6) {
            uVar10 = 0xc;
LAB_006cd9c0:
            cVar3 = *(char *)(lVar14 + (uVar10 & 0xffffffff));
            uVar8 = (uint)uVar10;
            if ((cVar3 == '+') || (cVar3 == '-')) {
              uVar8 = uVar8 + 5;
              if ((int)uVar1 < (int)uVar8) {
                return (undefined4 *)0x0;
              }
              iVar11 = 0;
              pbVar9 = (byte *)((uVar10 & 0xffffffff) + lVar14);
              for (lVar16 = 0; lVar16 != 8; lVar16 = lVar16 + 4) {
                if ((byte)(pbVar9[1] - 0x3a) < 0xf6) {
                  return (undefined4 *)0x0;
                }
                uVar12 = (uint)pbVar9[2];
                if (uVar12 - 0x3a < 0xfffffff6) {
                  return (undefined4 *)0x0;
                }
                iVar4 = uVar12 + (int)(char)(pbVar9[1] * '\n') + -0x10;
                if (iVar4 < *(int *)(&UNK_0082d1d8 + lVar16)) {
                  return (undefined4 *)0x0;
                }
                if (*(int *)(&UNK_0082d1f8 + lVar16) < iVar4) {
                  return (undefined4 *)0x0;
                }
                if (param_1 != (undefined4 *)0x0) {
                  if (lVar16 == 0) {
                    iVar11 = iVar4 * 0xe10;
                  }
                  else {
                    iVar11 = iVar11 + iVar4 * 0x3c;
                  }
                }
                pbVar9 = pbVar9 + 2;
              }
              if (iVar11 != 0) {
                iVar4 = -iVar11;
                if (cVar3 == '-') {
                  iVar4 = iVar11;
                }
                FUN_006d0dd8(param_1,0,(long)iVar4);
                if ((int)param_1 == 0) {
                  return param_1;
                }
              }
            }
            else if (cVar3 == 'Z') {
              uVar8 = uVar8 | 1;
            }
            return (undefined4 *)(ulong)(uVar8 == uVar1);
          }
          bVar2 = *(byte *)(lVar14 + uVar10);
        }
        if (uVar1 <= uVar10 || 9 < (bVar2 - 0x30 & 0xff)) {
          return (undefined4 *)0x0;
        }
        uVar8 = (uint)*(byte *)(lVar14 + uVar10 + 1);
        if (uVar8 - 0x3a < 0xfffffff6) {
          return (undefined4 *)0x0;
        }
        if (((ulong)uVar1 & 0xfffffffe) == uVar10) {
          return (undefined4 *)0x0;
        }
        iVar11 = uVar8 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
        if (iVar11 < *(int *)(&UNK_0082d1c0 + uVar15 * 4)) {
          return (undefined4 *)0x0;
        }
        if (*(int *)(&UNK_0082d1e0 + uVar15 * 4) < iVar11) {
          return (undefined4 *)0x0;
        }
        if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006cd964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_0082d1b8)[uVar15 & 0xffffffff] * 4 + 0x6cd968))();
          return param_1;
        }
        uVar15 = uVar15 + 1;
        uVar10 = uVar10 + 2;
      } while( true );
    }
    puVar7 = (undefined4 *)0x0;
  }
  return puVar7;
}



/* Entry: 006cd7dc; end: 006cd84b;  */

ulong FUN_006cd7dc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 uStack_42;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0xffffffff;
  }
  iVar8 = *param_1;
  if (iVar8 != *param_2) {
    return 0xffffffff;
  }
  if (iVar8 == 1) {
    return (ulong)(uint)(param_1[2] - param_2[2]);
  }
  if (iVar8 == 5) {
    return 0;
  }
  if (iVar8 == 6) {
    iVar8 = *(int *)(*(long *)(param_1 + 2) + 0x14);
    uVar7 = iVar8 - *(int *)(*(long *)(param_2 + 2) + 0x14);
    if (uVar7 != 0) {
      return (ulong)uVar7;
    }
    uVar5 = *(ulong *)(*(long *)(param_1 + 2) + 0x18);
    if (iVar8 == 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_0099a3f0)(uVar5,*(undefined8 *)(*(long *)(param_2 + 2) + 0x18));
    return uVar5;
  }
  piVar3 = *(int **)(param_1 + 2);
  piVar6 = *(int **)(param_2 + 2);
  iVar9 = *piVar6;
  uStack_42 = 0;
  iVar8 = *piVar3;
  iVar1 = piVar3[1];
  if (iVar1 == 3) {
    piVar4 = piVar3;
    FUN_006cb1ec(piVar3,(long)&uStack_42 + 1);
    iVar8 = (int)piVar4;
  }
  iVar2 = piVar6[1];
  if (iVar2 == 3) {
    piVar4 = piVar6;
    FUN_006cb1ec(piVar6,&uStack_42);
    iVar9 = (int)piVar4;
  }
  if (iVar8 < iVar9) {
LAB_006ce4f4:
    uVar5 = 0xffffffff;
  }
  else {
    if (iVar8 <= iVar9) {
      if ((byte)uStack_42 < uStack_42._1_1_) goto LAB_006ce4f4;
      if ((byte)uStack_42 <= uStack_42._1_1_) {
        if (iVar8 != 0) {
          uVar5 = *(ulong *)(piVar3 + 2);
          _memcmp(uVar5,*(undefined8 *)(piVar6 + 2),(long)iVar8);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        uVar7 = 0xffffffff;
        if (iVar2 <= iVar1) {
          uVar7 = (uint)(iVar2 < iVar1);
        }
        return (ulong)uVar7;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 006cd84c; end: 006cdaaf;  */

undefined4 * FUN_006cd84c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  
  if (param_2[1] != 0x17) {
    return (undefined4 *)0x0;
  }
  uVar1 = *param_2;
  if ((int)uVar1 < 0xb) {
    return (undefined4 *)0x0;
  }
  uVar7 = 0;
  uVar9 = 0;
  lVar8 = *(long *)(param_2 + 2);
  do {
    if (uVar9 == 5) {
      bVar2 = *(byte *)(lVar8 + uVar7);
      if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 0;
        }
        goto LAB_006cd9c0;
      }
    }
    else {
      if (uVar9 == 6) {
        uVar7 = 0xc;
LAB_006cd9c0:
        cVar3 = *(char *)(lVar8 + (uVar7 & 0xffffffff));
        uVar6 = (uint)uVar7;
        if ((cVar3 == '+') || (cVar3 == '-')) {
          uVar6 = uVar6 + 5;
          if ((int)uVar1 < (int)uVar6) {
            return (undefined4 *)0x0;
          }
          iVar10 = 0;
          pbVar5 = (byte *)((uVar7 & 0xffffffff) + lVar8);
          for (lVar11 = 0; lVar11 != 8; lVar11 = lVar11 + 4) {
            if ((byte)(pbVar5[1] - 0x3a) < 0xf6) {
              return (undefined4 *)0x0;
            }
            uVar12 = (uint)pbVar5[2];
            if (uVar12 - 0x3a < 0xfffffff6) {
              return (undefined4 *)0x0;
            }
            iVar4 = uVar12 + (int)(char)(pbVar5[1] * '\n') + -0x10;
            if (iVar4 < *(int *)(&UNK_0082d1d8 + lVar11)) {
              return (undefined4 *)0x0;
            }
            if (*(int *)(&UNK_0082d1f8 + lVar11) < iVar4) {
              return (undefined4 *)0x0;
            }
            if (param_1 != (undefined4 *)0x0) {
              if (lVar11 == 0) {
                iVar10 = iVar4 * 0xe10;
              }
              else {
                iVar10 = iVar10 + iVar4 * 0x3c;
              }
            }
            pbVar5 = pbVar5 + 2;
          }
          if (iVar10 != 0) {
            iVar4 = -iVar10;
            if (cVar3 == '-') {
              iVar4 = iVar10;
            }
            FUN_006d0dd8(param_1,0,(long)iVar4);
            if ((int)param_1 == 0) {
              return param_1;
            }
          }
        }
        else if (cVar3 == 'Z') {
          uVar6 = uVar6 | 1;
        }
        return (undefined4 *)(ulong)(uVar6 == uVar1);
      }
      bVar2 = *(byte *)(lVar8 + uVar7);
    }
    if (uVar1 <= uVar7 || 9 < (bVar2 - 0x30 & 0xff)) {
      return (undefined4 *)0x0;
    }
    uVar6 = (uint)*(byte *)(lVar8 + uVar7 + 1);
    if (uVar6 - 0x3a < 0xfffffff6) {
      return (undefined4 *)0x0;
    }
    if (((ulong)uVar1 & 0xfffffffe) == uVar7) {
      return (undefined4 *)0x0;
    }
    iVar10 = uVar6 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
    if (iVar10 < *(int *)(&UNK_0082d1c0 + uVar9 * 4)) {
      return (undefined4 *)0x0;
    }
    if (*(int *)(&UNK_0082d1e0 + uVar9 * 4) < iVar10) {
      return (undefined4 *)0x0;
    }
    if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006cd964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_0082d1b8)[uVar9 & 0xffffffff] * 4 + 0x6cd968))();
      return param_1;
    }
    uVar9 = uVar9 + 1;
    uVar7 = uVar7 + 2;
  } while( true );
}



/* Entry: 006cdab0; end: 006cdabb;  */

/* WARNING: Removing unreachable block (ram,0x006cd9b4) */
/* WARNING: Removing unreachable block (ram,0x006cd954) */
/* WARNING: Removing unreachable block (ram,0x006cda74) */
/* WARNING: Removing unreachable block (ram,0x006cda80) */
/* WARNING: Removing unreachable block (ram,0x006cda78) */
/* WARNING: Removing unreachable block (ram,0x006cda94) */
/* WARNING: Removing unreachable block (ram,0x006cda98) */
/* WARNING: Removing unreachable block (ram,0x006cdaac) */

bool FUN_006cdab0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  if (param_1[1] != 0x17) {
    return false;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < 0xb) {
    return false;
  }
  uVar7 = 0;
  lVar9 = 0;
  lVar8 = *(long *)(param_1 + 2);
  do {
    if (lVar9 == 5) {
      bVar2 = *(byte *)(lVar8 + uVar7);
      if (bVar2 - 0x2b < 0x30 && (1L << ((ulong)(bVar2 - 0x2b) & 0x3f) & 0x800000000005U) != 0)
      goto LAB_006cd9c0;
    }
    else {
      if (lVar9 == 6) {
        uVar7 = 0xc;
LAB_006cd9c0:
        cVar3 = *(char *)(lVar8 + (uVar7 & 0xffffffff));
        uVar6 = (uint)uVar7;
        if ((cVar3 == '+') || (cVar3 == '-')) {
          uVar6 = uVar6 + 5;
          if ((int)uVar1 < (int)uVar6) {
            return false;
          }
          pbVar5 = (byte *)((uVar7 & 0xffffffff) + lVar8);
          for (lVar9 = 0; lVar9 != 8; lVar9 = lVar9 + 4) {
            if ((byte)(pbVar5[1] - 0x3a) < 0xf6) {
              return false;
            }
            uVar10 = (uint)pbVar5[2];
            if (uVar10 - 0x3a < 0xfffffff6) {
              return false;
            }
            iVar4 = uVar10 + (int)(char)(pbVar5[1] * '\n') + -0x10;
            if (iVar4 < *(int *)(&UNK_0082d1d8 + lVar9)) {
              return false;
            }
            if (*(int *)(&UNK_0082d1f8 + lVar9) < iVar4) {
              return false;
            }
            pbVar5 = pbVar5 + 2;
          }
        }
        else if (cVar3 == 'Z') {
          uVar6 = uVar6 | 1;
        }
        return uVar6 == uVar1;
      }
      bVar2 = *(byte *)(lVar8 + uVar7);
    }
    if (uVar1 <= uVar7 || 9 < (bVar2 - 0x30 & 0xff)) {
      return false;
    }
    uVar6 = (uint)*(byte *)(lVar8 + uVar7 + 1);
    if (uVar6 - 0x3a < 0xfffffff6) {
      return false;
    }
    if (((ulong)uVar1 & 0xfffffffe) == uVar7) {
      return false;
    }
    iVar4 = uVar6 + ((uint)bVar2 * 10 + 0x20 & 0xfe) + -0x30;
    if (iVar4 < *(int *)(&UNK_0082d1c0 + lVar9 * 4)) {
      return false;
    }
    if (*(int *)(&UNK_0082d1e0 + lVar9 * 4) < iVar4) {
      return false;
    }
    lVar9 = lVar9 + 1;
    uVar7 = uVar7 + 2;
  } while( true );
}



/* Entry: 006cdabc; end: 006cdc03;  */

uint * FUN_006cdabc(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar3 = param_1;
  uStack_48 = param_2;
  if ((param_1 == (uint *)0x0) && (func_0x006d0a88(), puVar3 == (uint *)0x0)) {
    return (uint *)0x0;
  }
  puVar1 = &uStack_48;
  _gmtime_r(puVar1,auStack_80);
  if (((puVar1 == (undefined8 *)0x0) ||
      ((((int)param_3 != 0 || (param_4 != 0)) &&
       (puVar2 = puVar1, FUN_006d0dd8(puVar1,param_3,param_4), (int)puVar2 == 0)))) ||
     (*(int *)((long)puVar1 + 0x14) - 0x96U < 0xffffff9c)) {
LAB_006cdbd8:
    if (param_1 == (uint *)0x0) {
      FUN_006ce410(puVar3);
    }
    puVar3 = (uint *)0x0;
  }
  else {
    lVar4 = *(long *)(puVar3 + 2);
    if ((lVar4 == 0) || (*puVar3 < 0x14)) {
      lVar4 = 0x14;
      FUN_00701e90();
      if (lVar4 == 0) {
        FUN_006de8e4(0xc,0,0x41,0,0);
        goto LAB_006cdbd8;
      }
      if (*(long *)(puVar3 + 2) != 0) {
        func_0x00701ed0();
      }
      *(long *)(puVar3 + 2) = lVar4;
    }
    FUN_00702090(lVar4,0x14,&UNK_00915fe5);
    _strlen();
    *puVar3 = (uint)lVar4;
    puVar3[1] = 0x17;
  }
  return puVar3;
}



/* Entry: 006cdc04; end: 006ce03b;  */

undefined8 FUN_006cdc04(byte *param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar2 = (uint)*param_1;
  if ((char)*param_1 < '\0') {
    if ((uVar2 & 0xe0) == 0xc0) {
      if (param_2 == 1) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      uVar2 = (uVar2 & 0x1f) << 6;
      if (uVar2 < 0x80) {
        return 0xfffffffc;
      }
      uVar2 = param_1[1] & 0x3f | uVar2;
      uVar1 = 2;
    }
    else if ((uVar2 & 0xf0) == 0xe0) {
      if (param_2 < 3) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if (-0x41 < (char)param_1[2]) {
        return 0xfffffffd;
      }
      uVar2 = (uVar2 & 0xf) << 0xc | (param_1[1] & 0x3f) << 6;
      if (uVar2 < 0x800) {
        return 0xfffffffc;
      }
      uVar2 = uVar2 | param_1[2] & 0x3f;
      uVar1 = 3;
    }
    else if ((uVar2 & 0xf8) == 0xf0) {
      if (param_2 < 4) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if (-0x41 < (char)param_1[2]) {
        return 0xfffffffd;
      }
      if (-0x41 < (char)param_1[3]) {
        return 0xfffffffd;
      }
      uVar2 = (uVar2 & 7) << 0x12 | (param_1[1] & 0x3f) << 0xc;
      if (uVar2 < 0x10000) {
        return 0xfffffffc;
      }
      uVar2 = param_1[3] & 0x3f | ((int)(char)param_1[2] & 0x3fU) << 6 | uVar2;
      uVar1 = 4;
    }
    else if ((uVar2 & 0xfc) == 0xf8) {
      if (param_2 < 5) {
        return 0xffffffff;
      }
      if (((((param_1[1] & 0xc0) != 0x80) || (-0x41 < (char)param_1[2])) ||
          (-0x41 < (char)param_1[3])) || (-0x41 < (char)param_1[4])) {
        return 0xfffffffd;
      }
      uVar2 = (uVar2 & 3) << 0x18 | (param_1[1] & 0x3f) << 0x12;
      if (uVar2 < 0x200000) {
        return 0xfffffffc;
      }
      uVar2 = param_1[4] & 0x3f | ((int)(char)param_1[3] & 0x3fU) << 6 |
              ((int)(char)param_1[2] & 0x3fU) << 0xc | uVar2;
      uVar1 = 5;
    }
    else {
      if ((uVar2 & 0xfe) != 0xfc) {
        return 0xfffffffe;
      }
      if (param_2 < 6) {
        return 0xffffffff;
      }
      if ((param_1[1] & 0xc0) != 0x80) {
        return 0xfffffffd;
      }
      if (-0x41 < (char)param_1[2]) {
        return 0xfffffffd;
      }
      if (-0x41 < (char)param_1[3]) {
        return 0xfffffffd;
      }
      if (-0x41 < (char)param_1[4]) {
        return 0xfffffffd;
      }
      if (-0x41 < (char)param_1[5]) {
        return 0xfffffffd;
      }
      uVar2 = uVar2 << 0x1e | (uint)(param_1[1] & 0x3f) << 0x18;
      if (uVar2 >> 0x1a == 0) {
        return 0xfffffffc;
      }
      uVar2 = param_1[5] & 0x3f | ((int)(char)param_1[4] & 0x3fU) << 6 |
              ((int)(char)param_1[2] & 0x3fU) << 0x12 | ((int)(char)param_1[3] & 0x3fU) << 0xc |
              uVar2;
      uVar1 = 6;
    }
  }
  else {
    uVar1 = 1;
  }
  *param_3 = uVar2;
  return uVar1;
}



/* Entry: 006ce03c; end: 006ce10f;  */

uint FUN_006ce03c(long *param_1,ulong *param_2,uint *param_3,uint *param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  int iStack_44;
  ulong uStack_40;
  uint uStack_34;
  
  if (-1 < param_5) {
    lStack_58 = *param_1;
    plVar2 = &lStack_58;
    lStack_50 = param_5;
    FUN_006d4538(plVar2,&lStack_68,&uStack_34,&uStack_40,0,&iStack_44);
    if (((((int)plVar2 != 0) && (iStack_44 == 0)) && (uStack_40 <= uStack_60)) &&
       (uStack_60 - uStack_40 >> 0x1e == 0)) {
      uVar1 = uStack_34 >> 0x18 & 0xc0;
      if ((uVar1 != 0) || ((uStack_34 & 0x1fffffff) < 0x100)) {
        *param_1 = lStack_68 + uStack_40;
        *param_2 = uStack_60 - uStack_40;
        *param_3 = uStack_34 & 0x1fffffff;
        *param_4 = uVar1;
        return uStack_34 >> 0x18 & 0x20;
      }
    }
  }
  FUN_006ce55c(0xc,0,0x7b);
  return 0x80;
}



/* Entry: 006ce110; end: 006ce27f;  */

void FUN_006ce110(undefined8 *param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  pbVar1 = (byte *)*param_1;
  bVar3 = 0;
  if (param_2 != 0) {
    bVar3 = 0x20;
  }
  bVar3 = param_5 & 0xc0 | bVar3;
  if ((int)param_4 < 0x1f) {
    *pbVar1 = bVar3 | (byte)param_4 & 0x1f;
  }
  else {
    lVar4 = 0;
    *pbVar1 = bVar3 | 0x1f;
    for (uVar5 = param_4; 0 < (int)uVar5; uVar5 = uVar5 >> 7) {
      lVar4 = lVar4 + 1;
      pbVar1 = pbVar1 + 1;
    }
    pbVar2 = pbVar1;
    for (lVar6 = 0; 0 < lVar4 + lVar6; lVar6 = lVar6 + -1) {
      bVar3 = 0;
      if (lVar6 != 0) {
        bVar3 = 0x80;
      }
      *pbVar2 = bVar3 | (byte)param_4 & 0x7f;
      param_4 = param_4 >> 7;
      pbVar2 = pbVar2 + -1;
    }
  }
  pbVar2 = pbVar1 + 1;
  if (param_2 == 2) {
    pbVar1 = pbVar1 + 2;
    *pbVar2 = 0x80;
  }
  else if ((int)param_3 < 0x80) {
    pbVar1 = pbVar1 + 2;
    *pbVar2 = (byte)param_3;
  }
  else {
    lVar4 = 0;
    for (uVar5 = param_3; uVar5 != 0; uVar5 = uVar5 >> 8) {
      lVar4 = lVar4 + 1;
    }
    *pbVar2 = (byte)lVar4 | 0x80;
    lVar6 = lVar4;
    while (0 < lVar6) {
      pbVar2[lVar6] = (byte)param_3;
      param_3 = param_3 >> 8;
      lVar6 = lVar6 + -1;
    }
    pbVar1 = pbVar2 + lVar4 + 1;
  }
  *param_1 = pbVar1;
  return;
}



/* Entry: 006ce280; end: 006ce2cf;  */

long FUN_006ce280(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    lVar1 = param_1;
    FUN_006ce2d0(param_1,*(undefined8 *)(param_2 + 2),*param_2);
    if ((int)lVar1 != 0) {
      *(undefined4 *)(param_1 + 4) = param_2[1];
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 4);
      lVar1 = 1;
    }
    return lVar1;
  }
  return 0;
}


