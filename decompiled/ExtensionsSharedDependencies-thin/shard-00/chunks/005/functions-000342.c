/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006a2e24; end: 006a2e47;  */

void FUN_006a2e24(void)

{
  FUN_006a2e48();
  return;
}



/* Entry: 006a2e48; end: 006a2e63;  */

long * FUN_006a2e48(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_006a2e90();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 006a2e64; end: 006a2e8f;  */

long * FUN_006a2e64(long *param_1)

{
  FUN_006a2e90();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 006a2e90; end: 006a2eb3;  */

void FUN_006a2e90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 006a2eb4; end: 006a2ee7;  */

undefined8 FUN_006a2eb4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_006a2ee8(&uStack_28);
  return param_1;
}



/* Entry: 006a2ee8; end: 006a2eff;  */

void FUN_006a2ee8(undefined8 *param_1)

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



/* Entry: 006a2f00; end: 006a2f8f;  */

void FUN_006a2f00(long param_1,long param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  
  func_0x006a3cdc();
  func_0x00553d3c();
  lVar3 = *unaff_x19;
  if ((*(long *)(lVar3 + -8) == 0) && (in_ZR = *(char *)(lVar3 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x006a424c(), bVar1)) {
      func_0x006a42b8();
    }
    else {
      func_0x006a44e4();
      FUN_006a2f90();
    }
    func_0x006a411c();
    func_0x00553d3c();
    lVar3 = *unaff_x19;
  }
  func_0x006a3db0(lVar3);
  func_0x006a3c9c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a47f8();
  func_0x006a4288();
  FUN_0066c2ac();
  lVar4 = unaff_x19[1];
  for (lVar3 = 0; unaff_x23 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar3)) {
      lVar2 = param_2;
      FUN_006a3004(param_2);
      func_0x006a4088();
      func_0x006a3e9c();
      func_0x006a300c(lVar4 + lVar2 * 0x20,param_2);
    }
    param_2 = param_2 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006a2f90; end: 006a3003;  */

void FUN_006a2f90(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  long lVar3;
  
  func_0x006a47f8();
  func_0x006a4288();
  FUN_0066c2ac();
  lVar3 = *(long *)(unaff_x19 + 8);
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      lVar1 = unaff_x20;
      FUN_006a3004(unaff_x20);
      func_0x006a4088();
      func_0x006a3e9c();
      func_0x006a300c(lVar3 + lVar1 * 0x20,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006a3004; end: 006a302f;  */

void FUN_006a3004(void)

{
  func_0x006a4600(&PTR_LOOP_00a01490);
  return;
}



/* Entry: 006a3030; end: 006a30bf;  */

void FUN_006a3030(long param_1,long param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  
  func_0x006a3cdc();
  func_0x00553d3c();
  lVar3 = *unaff_x19;
  if ((*(long *)(lVar3 + -8) == 0) && (in_ZR = *(char *)(lVar3 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x006a424c(), bVar1)) {
      func_0x006a42b8();
    }
    else {
      func_0x006a44e4();
      FUN_006a30c0();
    }
    func_0x006a411c();
    func_0x00553d3c();
    lVar3 = *unaff_x19;
  }
  func_0x006a3db0(lVar3);
  func_0x006a3c9c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006a47f8();
  func_0x006a4288();
  FUN_0066c2ac();
  lVar4 = unaff_x19[1];
  for (lVar3 = 0; unaff_x23 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar3)) {
      lVar2 = param_2;
      FUN_006a3134(param_2);
      func_0x006a4088();
      func_0x006a3e9c();
      func_0x006a313c(lVar4 + lVar2 * 0x20,param_2);
    }
    param_2 = param_2 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006a30c0; end: 006a3133;  */

void FUN_006a30c0(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  long lVar3;
  
  func_0x006a47f8();
  func_0x006a4288();
  FUN_0066c2ac();
  lVar3 = *(long *)(unaff_x19 + 8);
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      lVar1 = unaff_x20;
      FUN_006a3134(unaff_x20);
      func_0x006a4088();
      func_0x006a3e9c();
      func_0x006a313c(lVar3 + lVar1 * 0x20,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006a3134; end: 006a315f;  */

void FUN_006a3134(void)

{
  func_0x006a4600(&PTR_LOOP_00a01490);
  return;
}



/* Entry: 006a3160; end: 006a31b7;  */

void FUN_006a3160(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR___ZSt7nothrow_00998d10;
  if (0xffffffffffffffe < (long)param_2) {
    param_2 = 0xfffffffffffffff;
  }
  for (; 0 < (long)param_2; param_2 = param_2 >> 1) {
    lVar2 = param_2 << 3;
    __ZnwmRKSt9nothrow_t(lVar2,puVar1);
    if (lVar2 != 0) goto LAB_006a31ac;
  }
  lVar2 = 0;
LAB_006a31ac:
  *param_1 = lVar2;
  param_1[1] = param_2;
  return;
}



/* Entry: 006a31b8; end: 006a31e7;  */

void FUN_006a31b8(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x006a43a8();
  *unaff_x19 = 0;
  FUN_006a33e4();
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[1];
  return;
}



/* Entry: 006a31e8; end: 006a33e3;  */

void FUN_006a31e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puStack_90;
  undefined8 uStack_68;
  
  if (param_4 < 2) {
    return;
  }
  if (param_4 == 2) {
    puVar2 = param_1;
    func_0x006a466c(param_1,param_2[-1],*param_1);
    if ((int)puVar2 == 0) {
      return;
    }
    uVar7 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar7;
    return;
  }
  if (0x80 < (long)param_4) {
    uVar12 = param_4 >> 1;
    if ((long)param_4 <= param_6) {
      puVar3 = param_1;
      FUN_006a356c(param_1,param_1 + uVar12,param_3,uVar12);
      puVar2 = param_5 + uVar12;
      func_0x006a47e4();
      FUN_006a356c();
      puVar4 = param_5 + param_4;
      puVar6 = puVar2;
      while( true ) {
        if (param_5 == puVar2) {
          for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            *param_1 = *puVar6;
            param_1 = param_1 + 1;
          }
          return;
        }
        if (puVar6 == puVar4) break;
        func_0x006a466c();
        bVar1 = (int)puVar3 == 0;
        puVar13 = puVar6;
        if (bVar1) {
          puVar13 = param_5;
        }
        lVar11 = 0;
        if (bVar1) {
          lVar11 = 8;
        }
        param_5 = (undefined8 *)((long)param_5 + lVar11);
        lVar11 = 8;
        if (bVar1) {
          lVar11 = 0;
        }
        puVar6 = (undefined8 *)((long)puVar6 + lVar11);
        *param_1 = *puVar13;
        param_1 = param_1 + 1;
      }
      for (; param_5 != puVar2; param_5 = param_5 + 1) {
        *param_1 = *param_5;
        param_1 = param_1 + 1;
      }
      return;
    }
    FUN_006a31e8();
    func_0x006a47e4();
    FUN_006a31e8();
    puVar2 = param_1 + uVar12;
    puVar4 = param_1;
    lVar11 = param_4 - (param_4 >> 1);
    puStack_90 = param_2;
    while( true ) {
      if (lVar11 == 0) {
        return;
      }
      if (lVar11 <= param_6 || (long)uVar12 <= param_6) break;
      lVar14 = 0;
      puVar3 = puVar4;
      puVar6 = puVar4;
      while( true ) {
        lVar9 = uVar12 - lVar14;
        if (lVar9 == 0) {
          return;
        }
        func_0x006a46a8();
        if (((ulong)param_1 & 1) != 0) break;
        puVar6 = puVar6 + 1;
        lVar14 = lVar14 + 1;
        puVar3 = puVar3 + 1;
      }
      if (lVar9 < lVar11) {
        lVar9 = lVar11 / 2;
        puVar10 = puVar2 + lVar9;
        uVar16 = (long)puVar2 - (long)puVar3 >> 3;
        puVar13 = puVar6;
        while (uVar16 != 0) {
          uVar15 = uVar16 >> 1;
          puVar4 = param_3;
          FUN_006a3420(param_3,*puVar10,puVar13[uVar15]);
          uVar8 = uVar16 + (uVar16 >> 1 ^ 0xffffffffffffffff);
          uVar16 = uVar15;
          if ((int)puVar4 == 0) {
            uVar16 = uVar8;
            puVar13 = puVar13 + uVar15 + 1;
          }
        }
        uVar16 = (long)puVar13 - (long)puVar3 >> 3;
      }
      else {
        if (uVar12 - 1 == lVar14) {
          uVar7 = puVar4[lVar14];
          puVar4[lVar14] = *puVar2;
          *puVar2 = uVar7;
          return;
        }
        uVar16 = lVar9 / 2;
        puVar13 = puVar6 + uVar16;
        uStack_68 = *param_3;
        uVar8 = (long)puStack_90 - (long)puVar2 >> 3;
        puVar3 = puVar2;
        while (puVar10 = puVar3, uVar8 != 0) {
          uVar15 = uVar8 >> 1;
          puVar5 = &uStack_68;
          FUN_006a3420(puVar5,puVar10[uVar15],puVar4[uVar16 + lVar14]);
          uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          puVar3 = puVar10 + uVar15 + 1;
          if ((int)puVar5 == 0) {
            uVar8 = uVar15;
            puVar3 = puVar10;
          }
        }
        lVar9 = (long)puVar10 - (long)puVar2 >> 3;
      }
      uVar8 = (uVar12 - uVar16) - lVar14;
      puVar3 = puVar13;
      FUN_006a3ac8(puVar13,puVar2,puVar10);
      if ((long)(uVar16 + lVar9) < (long)(((uVar12 + lVar11) - (uVar16 + lVar9)) - lVar14)) {
        FUN_006a3744(puVar6,puVar13,puVar3,param_3,uVar16,lVar9,param_5,param_6);
        param_1 = puVar6;
        uVar12 = uVar8;
        puVar2 = puVar10;
        puVar4 = puVar3;
        lVar11 = lVar11 - lVar9;
      }
      else {
        param_1 = puVar3;
        FUN_006a3744(puVar3,puVar10,puStack_90,param_3,uVar8,lVar11 - lVar9,param_5,param_6);
        uVar12 = uVar16;
        puVar2 = puVar13;
        puVar4 = puVar6;
        lVar11 = lVar9;
        puStack_90 = puVar3;
      }
    }
    if (lVar11 < (long)uVar12) {
      for (lVar11 = 0; (undefined8 *)((long)puVar2 + lVar11) != puStack_90; lVar11 = lVar11 + 8) {
        *(undefined8 *)((long)param_5 + lVar11) = *(undefined8 *)((long)puVar2 + lVar11);
      }
      puVar6 = (undefined8 *)((long)param_5 + lVar11);
      while( true ) {
        puStack_90 = puStack_90 + -1;
        if (puVar6 == param_5) {
          return;
        }
        if (puVar2 == puVar4) break;
        func_0x006a46a8();
        puVar3 = puVar6;
        puVar10 = puVar2 + -1;
        puVar13 = puVar2;
        if ((int)param_1 == 0) {
          puVar3 = puVar6 + -1;
          puVar10 = puVar2;
          puVar13 = puVar6;
        }
        puVar2 = puVar10;
        *puStack_90 = puVar13[-1];
        puVar6 = puVar3;
      }
      while (puVar6 != param_5) {
        puVar6 = puVar6 + -1;
        *puStack_90 = *puVar6;
        puStack_90 = puStack_90 + -1;
      }
      return;
    }
    lVar11 = -(long)param_5;
    puVar3 = param_5;
    for (puVar6 = puVar4; puVar6 != puVar2; puVar6 = puVar6 + 1) {
      *puVar3 = *puVar6;
      lVar11 = lVar11 + -8;
      puVar3 = puVar3 + 1;
    }
    while( true ) {
      if (puVar3 == param_5) {
        return;
      }
      if (puVar2 == puStack_90) break;
      func_0x006a46a8();
      bVar1 = (int)param_1 == 0;
      puVar6 = puVar2;
      if (bVar1) {
        puVar6 = param_5;
      }
      lVar14 = 8;
      if (bVar1) {
        lVar14 = 0;
      }
      puVar2 = (undefined8 *)((long)puVar2 + lVar14);
      lVar14 = 0;
      if (bVar1) {
        lVar14 = 8;
      }
      param_5 = (undefined8 *)((long)param_5 + lVar14);
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_0099a400)(puVar4,param_5,-((long)param_5 + lVar11));
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar11 = 0;
  puVar4 = param_1;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    if (puVar2 == param_2) {
      return;
    }
    func_0x006a466c();
    if ((int)puVar4 != 0) {
      uVar7 = *puVar2;
      lVar14 = lVar11;
      do {
        lVar9 = lVar14;
        ((undefined8 *)((long)param_1 + lVar9))[1] = *(undefined8 *)((long)param_1 + lVar9);
        puVar6 = param_1;
        if (lVar9 == 0) goto LAB_006a32cc;
        func_0x006a4108();
        FUN_006a3420();
        lVar14 = lVar9 + -8;
      } while (((ulong)puVar4 & 1) != 0);
      puVar6 = (undefined8 *)((long)param_1 + lVar9);
LAB_006a32cc:
      *puVar6 = uVar7;
    }
    lVar11 = lVar11 + 8;
  } while( true );
}



/* Entry: 006a33e4; end: 006a33fb;  */

void FUN_006a33e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 006a33fc; end: 006a341f;  */

undefined8 FUN_006a33fc(undefined8 param_1)

{
  FUN_006a33e4(param_1,0);
  return param_1;
}



/* Entry: 006a3420; end: 006a356b;  */

uint FUN_006a3420(ulong *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x006a4648();
  uVar6 = *param_1;
  FUN_00656c60();
  uVar9 = 1;
  switch((int)uVar6) {
  case 1:
    func_0x006a40c8();
    iVar3 = (int)uVar6;
    FUN_0068b4e8();
    iVar4 = iVar3;
    func_0x006a40b8();
    FUN_0068b4e8();
    bVar2 = SBORROW4(iVar3,iVar4);
    bVar1 = iVar3 - iVar4 < 0;
    goto code_r0x006a3510;
  case 2:
    func_0x006a40c8();
    FUN_0068b804();
    uVar8 = uVar6;
    func_0x006a40b8();
    FUN_0068b804();
    bVar2 = SBORROW8(uVar6,uVar8);
    bVar1 = (long)(uVar6 - uVar8) < 0;
code_r0x006a3510:
    uVar9 = (uint)(bVar1 != bVar2);
    break;
  case 3:
    func_0x006a40c8();
    uVar5 = (uint)uVar6;
    FUN_0068bb28();
    uVar9 = uVar5;
    func_0x006a40b8();
    FUN_0068bb28();
    bVar1 = uVar9 <= uVar5;
    goto code_r0x006a3530;
  case 4:
    func_0x006a40c8();
    FUN_0068be44();
    uVar8 = uVar6;
    func_0x006a40b8();
    FUN_0068be44();
    bVar1 = uVar8 <= uVar6;
code_r0x006a3530:
    uVar9 = (uint)!bVar1;
    break;
  case 7:
    func_0x006a40c8();
    uVar5 = (uint)uVar6;
    FUN_0068c7f0();
    uVar9 = uVar5;
    func_0x006a40b8();
    FUN_0068c7f0();
    uVar9 = uVar9 & (uVar5 ^ 1);
    break;
  case 9:
    func_0x006a4108(auStack_58);
    FUN_0068cb34();
    func_0x006a4188(auStack_70);
    FUN_0068cb34();
    puVar7 = auStack_58;
    func_0x004278bc(puVar7,auStack_70);
    uVar9 = (uint)((char)puVar7 < '\0');
    func_0x006a3f40();
    func_0x006a40f8();
  }
  return uVar9;
}



/* Entry: 006a356c; end: 006a3743;  */

void FUN_006a356c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
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
    func_0x006a47f8();
    if (param_4 == 2) {
      puVar3 = param_1;
      func_0x006a43cc();
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
          func_0x006a43cc();
          if ((int)param_1 == 0) {
            puVar7[1] = *puVar3;
          }
          else {
            puVar7[1] = *puVar7;
            for (lVar8 = lVar6; puVar4 = param_5, lVar8 != 0; lVar8 = lVar8 + -8) {
              func_0x006a43cc();
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
      FUN_006a31e8(param_1,puVar3,param_3,uVar9,param_5,uVar9);
      lVar6 = param_4 - (param_4 >> 1);
      puVar4 = puVar3;
      FUN_006a31e8(puVar3,param_2,param_3,lVar6,param_5 + uVar9,lVar6);
      puVar7 = puVar3;
      for (; param_1 != puVar3; param_1 = (undefined8 *)((long)param_1 + lVar6)) {
        if (puVar7 == param_2) {
          for (; param_1 != puVar3; param_1 = param_1 + 1) {
            *param_5 = *param_1;
            param_5 = param_5 + 1;
          }
          return;
        }
        func_0x006a43cc();
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



/* Entry: 006a3744; end: 006a3ac7;  */

void FUN_006a3744(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
      func_0x006a46a8();
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
        FUN_006a3420(param_4,*puVar11,puVar12[uVar14]);
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
        FUN_006a3420(puVar4,puVar11[uVar10],puVar3[lVar15 + lVar13]);
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
      FUN_006a3744(puVar6,puVar12,puVar5,param_4,lVar15,lVar9,param_7,param_8);
      param_1 = puVar6;
      param_5 = lVar7;
      param_2 = puVar11;
      puVar3 = puVar5;
      param_6 = param_6 - lVar9;
    }
    else {
      param_1 = puVar5;
      FUN_006a3744(puVar5,puVar11,puStack_90,param_4,lVar7,param_6 - lVar9,param_7,param_8);
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
      func_0x006a46a8();
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
      func_0x006a46a8();
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



/* Entry: 006a3ac8; end: 006a3b07;  */

void FUN_006a3ac8(long param_1,long param_2,long param_3)

{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    FUN_006a3b08(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 006a3b08; end: 006a3b9f;  */

undefined8 * FUN_006a3b08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_1 + 1 == param_2) {
    uVar8 = *param_1;
    lVar5 = (long)param_3 - (long)param_2;
    if (lVar5 != 0) {
      _memmove(param_1,param_1 + 1,lVar5);
    }
    param_3 = (undefined8 *)((long)param_1 + lVar5);
    *param_3 = uVar8;
  }
  else {
    if (param_2 + 1 != param_3) {
      lVar2 = (long)param_2 - (long)param_1;
      lVar3 = lVar2 >> 3;
      lVar5 = (long)param_3 - (long)param_2 >> 3;
      lVar7 = lVar3;
      if (lVar3 == lVar5) {
        FUN_006a3c4c(param_1,param_2,param_2);
      }
      else {
        do {
          lVar4 = lVar5;
          lVar5 = 0;
          if (lVar4 != 0) {
            lVar5 = lVar7 / lVar4;
          }
          lVar5 = lVar7 - lVar5 * lVar4;
          lVar7 = lVar4;
        } while (lVar5 != 0);
        puVar6 = param_1 + lVar4;
        while (puVar6 != param_1) {
          puVar6 = puVar6 + -1;
          uVar8 = *puVar6;
          puVar1 = (undefined8 *)(lVar2 + (long)puVar6);
          puVar10 = puVar6;
          do {
            puVar9 = puVar1;
            *puVar10 = *puVar9;
            lVar5 = (long)param_3 - (long)puVar9 >> 3;
            puVar1 = (undefined8 *)((long)puVar9 + lVar2);
            if (lVar5 <= lVar3) {
              puVar1 = param_1 + (lVar3 - lVar5);
            }
            puVar10 = puVar9;
          } while (puVar1 != puVar6);
          *puVar9 = uVar8;
        }
        param_2 = (undefined8 *)(((long)param_3 - (long)param_2) + (long)param_1);
      }
      return param_2;
    }
    puVar6 = param_3 + -1;
    uVar8 = *puVar6;
    param_3 = (undefined8 *)((long)param_3 - ((long)puVar6 - (long)param_1));
    if ((long)puVar6 - (long)param_1 != 0) {
      func_0x006a4188(param_1,param_2,(long)puVar6 - (long)param_1);
      _memmove();
    }
    *param_1 = uVar8;
  }
  return param_3;
}



/* Entry: 006a3ba0; end: 006a3c4b;  */

long FUN_006a3ba0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar2 = param_2 - (long)param_1;
  lVar3 = lVar2 >> 3;
  lVar5 = param_3 - param_2 >> 3;
  lVar7 = lVar3;
  if (lVar3 == lVar5) {
    FUN_006a3c4c(param_1,param_2,param_2);
  }
  else {
    do {
      lVar4 = lVar5;
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar7 / lVar4;
      }
      lVar5 = lVar7 - lVar5 * lVar4;
      lVar7 = lVar4;
    } while (lVar5 != 0);
    puVar6 = param_1 + lVar4;
    while (puVar6 != param_1) {
      puVar6 = puVar6 + -1;
      uVar8 = *puVar6;
      puVar1 = (undefined8 *)(lVar2 + (long)puVar6);
      puVar10 = puVar6;
      do {
        puVar9 = puVar1;
        *puVar10 = *puVar9;
        lVar5 = param_3 - (long)puVar9 >> 3;
        puVar1 = (undefined8 *)((long)puVar9 + lVar2);
        if (lVar5 <= lVar3) {
          puVar1 = param_1 + (lVar3 - lVar5);
        }
        puVar10 = puVar9;
      } while (puVar1 != puVar6);
      *puVar9 = uVar8;
    }
    param_2 = (param_3 - param_2) + (long)param_1;
  }
  return param_2;
}



/* Entry: 006a3c4c; end: 006a480b;  */

undefined1  [16]
FUN_006a3c4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2 && puVar1 != param_4; puVar2 = puVar2 + 1) {
    uVar3 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar3;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 006a480c; end: 006a487f;  */

undefined8 * FUN_006a480c(void)

{
  undefined8 *puVar1;
  
  if ((bRam0000000000b6c8b0 & 1) == 0) {
    puVar1 = (undefined8 *)0xb6c8b0;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x006a57ac();
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_006a4880();
      puRam0000000000b6c8a8 = puVar1;
      ___cxa_guard_release(0xb6c8b0);
    }
  }
  return puRam0000000000b6c8a8;
}



/* Entry: 006a4880; end: 006a48ab;  */

undefined8 FUN_006a4880(undefined8 param_1)

{
  FUN_0054a414(FUN_006a560c,param_1);
  return param_1;
}



/* Entry: 006a48ac; end: 006a4903;  */

void FUN_006a48ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (param_1[1] - *param_1) * 0x10000000 >> 0x20;
  lVar2 = lVar1 + 1;
  lVar1 = lVar1 * 0x10;
  do {
    lVar1 = lVar1 + -0x10;
    FUN_006a4904(*param_1 + lVar1);
    lVar2 = lVar2 + -1;
  } while (1 < lVar2);
  param_1[1] = *param_1;
  return;
}



/* Entry: 006a4904; end: 006a494b;  */

void FUN_006a4904(long param_1)

{
  if (*(int *)(param_1 + 4) == 4) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_0066bd90();
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 3) {
      return;
    }
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006a494c; end: 006a49a3;  */

void FUN_006a494c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long unaff_x22;
  
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x006a5744();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 006a49a4; end: 006a4a13;  */

void FUN_006a49a4(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined1 auStack_48 [40];
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 4)) {
    return;
  }
  if (param_2 >> 0x3c != 0) {
    FUN_006a50e4();
    func_0x006a573c();
    func_0x006a5734();
    plVar1 = param_1;
    if (*(int *)((long)param_1 + 4) == 4) {
      func_0x006a57ac();
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar1 = 0;
      FUN_006a494c();
    }
    else {
      if (*(int *)((long)param_1 + 4) != 3) {
        return;
      }
      func_0x006a57ac();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    }
    param_1[1] = (long)plVar1;
    return;
  }
  FUN_006a516c(auStack_48,param_2,param_1[1] - *param_1 >> 4);
  func_0x006a57a0();
  func_0x006a573c();
  return;
}



/* Entry: 006a4a14; end: 006a4a7f;  */

void FUN_006a4a14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (*(int *)((long)param_1 + 4) == 4) {
    func_0x006a57ac();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    FUN_006a494c();
  }
  else {
    if (*(int *)((long)param_1 + 4) != 3) {
      return;
    }
    func_0x006a57ac();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 006a4a80; end: 006a4ad7;  */

void FUN_006a4a80(undefined8 param_1,long *param_2)

{
  long lVar1;
  long unaff_x22;
  
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x006a5744();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 006a4ad8; end: 006a4b17;  */

void FUN_006a4ad8(long *param_1,undefined8 *param_2)

{
  if (*param_1 == param_1[1]) {
    FUN_006a5320(param_1,param_2);
  }
  else {
    FUN_006a4b18(param_1,param_1[1],*param_2,param_2[1]);
  }
  param_2[1] = *param_2;
  return;
}



/* Entry: 006a4b18; end: 006a4b23;  */

long FUN_006a4b18(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  lVar4 = (long)param_4 - (long)param_3 >> 4;
  if (0 < lVar4) {
    puVar3 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar3 >> 4 < lVar4) {
      plVar2 = param_1;
      FUN_006a52e0(param_1,lVar4 + ((long)puVar3 - *param_1 >> 4));
      FUN_006a516c(&lStack_68,plVar2,param_2 - *param_1 >> 4,param_1 + 2);
      lVar1 = lStack_60;
      puVar3 = puStack_58 + lVar4 * 2;
      for (lVar4 = lVar4 << 4; lVar4 != 0; lVar4 = lVar4 + -0x10) {
        uVar6 = *param_3;
        puStack_58[1] = param_3[1];
        *puStack_58 = uVar6;
        param_3 = param_3 + 2;
        puStack_58 = puStack_58 + 2;
      }
      puStack_58 = puVar3;
      _memcpy(puVar3,param_2,param_1[1] - param_2);
      puStack_58 = (undefined8 *)((long)puStack_58 + (param_1[1] - param_2));
      param_1[1] = param_2;
      lVar4 = lStack_60 - (param_2 - *param_1);
      _memcpy(lVar4);
      lStack_68 = *param_1;
      *param_1 = lVar4;
      lVar4 = param_1[2];
      param_1[2] = lStack_50;
      param_1[1] = (long)puStack_58;
      lStack_60 = lStack_68;
      puStack_58 = (undefined8 *)lStack_68;
      lStack_50 = lVar4;
      func_0x006a573c();
      param_2 = lVar1;
    }
    else {
      lVar1 = (long)puVar3 - param_2 >> 4;
      if (lVar1 < lVar4) {
        puVar5 = (undefined8 *)(((long)puVar3 - param_2) + (long)param_3);
        for (; puVar5 != param_4; puVar5 = puVar5 + 2) {
          uVar6 = *puVar5;
          puVar3[1] = puVar5[1];
          *puVar3 = uVar6;
          puVar3 = puVar3 + 2;
        }
        param_1[1] = (long)puVar3;
        if (lVar1 < 1) {
          return param_2;
        }
        func_0x006a57e8();
        FUN_006a550c();
        lVar4 = lVar1;
      }
      else {
        func_0x006a57e8();
        FUN_006a550c();
      }
      func_0x006a554c(param_3,lVar4,param_2);
    }
  }
  return param_2;
}



/* Entry: 006a4b24; end: 006a4ba3;  */

long FUN_006a4b24(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  if (lVar4 == lVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[2] - lVar4;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
      if (*(int *)(lVar4 + 4) == 4) {
        lVar2 = *(long *)(lVar4 + 8);
        FUN_006a4ba4(lVar2);
        lVar3 = lVar2 + lVar3;
      }
      else if (*(int *)(lVar4 + 4) == 3) {
        lVar2 = *(long *)(lVar4 + 8);
        FUN_00547748(lVar2);
        lVar3 = lVar3 + lVar2 + 0x18;
      }
    }
  }
  return lVar3;
}



/* Entry: 006a4ba4; end: 006a4bbf;  */

long FUN_006a4ba4(int param_1)

{
  FUN_006a4b24();
  return (long)param_1 + 0x18;
}



/* Entry: 006a4bc0; end: 006a4beb;  */

void FUN_006a4bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x006a5794();
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 0;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 006a4bec; end: 006a4c2b;  */

undefined8 * FUN_006a4bec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_006a5568();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 006a4c2c; end: 006a4c8b;  */

void FUN_006a4c2c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x006a5794();
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 1;
  *(undefined4 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 006a4c8c; end: 006a4cf3;  */

void FUN_006a4c8c(undefined8 *param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar1;
  
  func_0x006a5824();
  lVar1 = *(long *)(unaff_x20 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w19;
  *(undefined4 *)(lVar1 + -0xc) = 3;
  func_0x006a57ac();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined8 **)(lVar1 + -8) = param_1;
  return;
}



/* Entry: 006a4cf4; end: 006a4d73;  */

undefined8 FUN_006a4cf4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = param_2;
  FUN_006a59bc(param_2,&uStack_38);
  if (((int)lVar1 == 0) || (*(char *)(param_2 + 0x24) != '\x01')) {
    uVar2 = 0;
  }
  else {
    FUN_006a4ad8(param_1,&uStack_38);
    uVar2 = 1;
  }
  FUN_0066bd90(&uStack_38);
  return uVar2;
}



/* Entry: 006a4d74; end: 006a4d97;  */

undefined8 FUN_006a4d74(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x006a57b4();
  FUN_0066bdb8();
  func_0x006a57e8();
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = param_2;
  FUN_006a59bc(param_2,&uStack_38);
  if (((int)lVar1 == 0) || (*(char *)(param_2 + 0x24) != '\x01')) {
    uVar2 = 0;
  }
  else {
    FUN_006a4ad8(param_1,&uStack_38);
    uVar2 = 1;
  }
  FUN_0066bd90(&uStack_38);
  return uVar2;
}



/* Entry: 006a4d98; end: 006a4df3;  */

uint FUN_006a4d98(undefined8 param_1)

{
  undefined1 auStack_70 [36];
  byte bStack_4c;
  
  FUN_006a55b8(auStack_70);
  FUN_006a4d74(param_1,auStack_70);
  FUN_0054dff8(auStack_70);
  return (uint)param_1 & (uint)bStack_4c;
}



/* Entry: 006a4df4; end: 006a4e2b;  */

void FUN_006a4df4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  ppuStack_30 = &PTR_FUN_00a01280;
  uStack_18 = 0;
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_3;
  FUN_006a4d98(param_1,&ppuStack_30);
  return;
}



/* Entry: 006a4e2c; end: 006a4fcf;  */

undefined8 FUN_006a4e2c(void)

{
  func_0x006a57b4();
  FUN_006a5cc8();
  FUN_0054a17c();
  func_0x006a57e8();
  func_0x006a4e70();
  return 1;
}



/* Entry: 006a4fd0; end: 006a4ff3;  */

void FUN_006a4fd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_006a4ff4(param_1,&uStack_18);
  return;
}



/* Entry: 006a4ff4; end: 006a50e3;  */

undefined8 * FUN_006a4ff4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_40 [16];
  
  puVar5 = (undefined8 *)((ulong)param_1 >> 3);
  if ((int)puVar5 == 0) {
LAB_006a5060:
    param_1 = (undefined8 *)0x0;
  }
  else {
    switch((ulong)param_1 & 7) {
    case 0:
      FUN_00538888(param_3,auStack_40);
      param_1 = param_3;
      if (param_3 != (undefined8 *)0x0) {
        func_0x006a57f4();
        func_0x006a5624();
      }
      break;
    case 1:
      func_0x006a57f4(param_1,param_2,*param_3);
      func_0x006a562c();
      param_1 = param_3 + 1;
      break;
    case 2:
      func_0x006a57f4();
      FUN_006a5634();
      break;
    case 3:
      func_0x006a57f4();
      FUN_006a5688();
      break;
    case 4:
      FUN_0077670c(auStack_40,&UNK_0091536a,0x516);
      puVar3 = &UNK_0091540f;
      FUN_0054c980(auStack_40);
      FUN_005558a0(auStack_40);
      plVar1 = (long *)&UNK_00915363;
      FUN_0040d774();
      func_0x006a57b4();
      puVar6 = (undefined8 *)(*(long *)(puVar3 + 8) - (plVar1[1] - *plVar1));
      puVar2 = puVar6;
      _memcpy(puVar6);
      param_3[1] = puVar6;
      uVar4 = *puVar5;
      puVar5[1] = uVar4;
      *puVar5 = param_3[1];
      param_3[1] = uVar4;
      uVar4 = puVar5[1];
      puVar5[1] = param_3[2];
      param_3[2] = uVar4;
      uVar4 = puVar5[2];
      puVar5[2] = param_3[3];
      param_3[3] = uVar4;
      *param_3 = param_3[1];
      return puVar2;
    case 5:
      func_0x006a57f4(param_1,param_2,*(undefined4 *)param_3);
      func_0x006a5718();
      param_1 = (undefined8 *)((long)param_3 + 4);
      break;
    default:
      goto LAB_006a5060;
    }
  }
  return param_1;
}



/* Entry: 006a50e4; end: 006a50f7;  */

void FUN_006a50e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&UNK_00915363;
  FUN_0040d774();
  func_0x006a57b4();
  lVar3 = *(long *)(param_2 + 8) - (plVar1[1] - *plVar1);
  _memcpy(lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 006a50f8; end: 006a516b;  */

void FUN_006a50f8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x006a57b4();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 006a516c; end: 006a51d7;  */

long * FUN_006a516c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x006a51b4();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 006a51d8; end: 006a51f3;  */

long * FUN_006a51d8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(plVar1);
    return plVar1;
  }
  FUN_0040cee8();
  FUN_006a5220();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 006a51f4; end: 006a521f;  */

long * FUN_006a51f4(long *param_1)

{
  FUN_006a5220();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 006a5220; end: 006a5243;  */

void FUN_006a5220(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 006a5244; end: 006a5287;  */

undefined8 * FUN_006a5244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_006a5288();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 006a5288; end: 006a52df;  */

undefined8 FUN_006a5288(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  func_0x006a577c();
  func_0x006a5760();
  uVar1 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar1;
  func_0x006a57a0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x006a573c();
  return uVar1;
}



/* Entry: 006a52e0; end: 006a531f;  */

long * FUN_006a52e0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_006a50e4();
  func_0x006a57b4();
  func_0x006a5354();
  uVar2 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar2;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return param_1;
}



/* Entry: 006a5320; end: 006a5383;  */

void FUN_006a5320(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x006a57b4();
  func_0x006a5354();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 006a5384; end: 006a550b;  */

long FUN_006a5384(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if (0 < param_5) {
    puVar3 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar3 >> 4 < param_5) {
      plVar2 = param_1;
      FUN_006a52e0(param_1,param_5 + ((long)puVar3 - *param_1 >> 4));
      FUN_006a516c(&lStack_68,plVar2,param_2 - *param_1 >> 4,param_1 + 2);
      lVar1 = lStack_60;
      puVar3 = puStack_58 + param_5 * 2;
      for (param_5 = param_5 << 4; param_5 != 0; param_5 = param_5 + -0x10) {
        uVar6 = *param_3;
        puStack_58[1] = param_3[1];
        *puStack_58 = uVar6;
        param_3 = param_3 + 2;
        puStack_58 = puStack_58 + 2;
      }
      puStack_58 = puVar3;
      _memcpy(puVar3,param_2,param_1[1] - param_2);
      puStack_58 = (undefined8 *)((long)puStack_58 + (param_1[1] - param_2));
      param_1[1] = param_2;
      lVar5 = lStack_60 - (param_2 - *param_1);
      _memcpy(lVar5);
      lStack_68 = *param_1;
      *param_1 = lVar5;
      lVar5 = param_1[2];
      param_1[2] = lStack_50;
      param_1[1] = (long)puStack_58;
      lStack_60 = lStack_68;
      puStack_58 = (undefined8 *)lStack_68;
      lStack_50 = lVar5;
      func_0x006a573c();
      param_2 = lVar1;
    }
    else {
      lVar1 = (long)puVar3 - param_2 >> 4;
      if (lVar1 < param_5) {
        puVar4 = (undefined8 *)(((long)puVar3 - param_2) + (long)param_3);
        for (; puVar4 != param_4; puVar4 = puVar4 + 2) {
          uVar6 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar6;
          puVar3 = puVar3 + 2;
        }
        param_1[1] = (long)puVar3;
        if (lVar1 < 1) {
          return param_2;
        }
        func_0x006a57e8();
        FUN_006a550c();
        param_5 = lVar1;
      }
      else {
        func_0x006a57e8();
        FUN_006a550c();
      }
      func_0x006a554c(param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 006a550c; end: 006a5567;  */

void FUN_006a550c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 2) {
    uVar4 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar4;
    puVar3 = puVar3 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_0099a400)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 006a5568; end: 006a55b7;  */

undefined8 FUN_006a5568(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  func_0x006a577c();
  func_0x006a5760();
  *puStack_38 = 0;
  puStack_38[1] = 0;
  func_0x006a57a0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x006a573c();
  return uVar1;
}



/* Entry: 006a55b8; end: 006a560b;  */

undefined8 * FUN_006a55b8(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x1f) = 0;
  param_1[5] = 0x7fffffff;
  uVar1 = uRam0000000000b1e638;
  *(undefined4 *)(param_1 + 6) = 0x7fffffff;
  *(undefined4 *)((long)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x0054e238();
  return param_1;
}



/* Entry: 006a560c; end: 006a5623;  */

void FUN_006a560c(long param_1)

{
  if (param_1 != 0) {
    FUN_0066bd90();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006a5624; end: 006a5633;  */

void FUN_006a5624(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x006a5794(*param_1);
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 0;
  *(undefined8 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 006a5634; end: 006a5687;  */

void FUN_006a5634(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_28;
  
  uVar1 = *param_1;
  lStack_28 = param_3;
  FUN_006a4c8c(uVar1);
  plVar2 = &lStack_28;
  FUN_00533034(plVar2);
  if (lStack_28 != 0) {
    FUN_00533074(param_4,lStack_28,plVar2,uVar1);
  }
  return;
}



/* Entry: 006a5688; end: 006a5717;  */

undefined8 * FUN_006a5688(undefined8 *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  
  iVar1 = *(int *)(param_4 + 0x58);
  *(int *)(param_4 + 0x58) = iVar1 + -1;
  if (0 < iVar1) {
    *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
    uVar3 = *param_1;
    func_0x006a4cc0();
    puVar4 = &uStack_38;
    uStack_38 = uVar3;
    func_0x006a4f3c(puVar4,param_3,param_4);
    *(ulong *)(param_4 + 0x58) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) + -1,
                  (int)*(undefined8 *)(param_4 + 0x58) + 1);
    uVar2 = *(uint *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x50) = 0;
    if (uVar2 != (param_2 << 3 | 3U)) {
      puVar4 = (undefined8 *)0x0;
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}



/* Entry: 006a5718; end: 006a582f;  */

void FUN_006a5718(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  func_0x006a5794(*param_1);
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 1;
  *(undefined4 *)(lVar1 + -8) = param_3;
  return;
}



/* Entry: 006a5830; end: 006a59bb;  */

ulong FUN_006a5830(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uStack_48;
  
  if (param_2 < 8) goto code_r0x006a5850;
  uVar3 = 0;
  switch(param_2 & 7) {
  case 0:
    func_0x006aae6c();
    FUN_0054d6c4();
    uVar3 = param_1;
    if ((param_3 != 0) && ((int)param_1 != 0)) {
      func_0x006aaffc();
      FUN_006a4bc0();
    }
    break;
  case 1:
    func_0x006aae6c();
    FUN_0054d714();
    uVar3 = param_1;
    if ((param_3 != 0) && ((int)param_1 != 0)) {
      func_0x006aaffc();
      func_0x006a4c5c();
    }
    break;
  case 2:
    uVar3 = param_1;
    func_0x006aae6c();
    FUN_0054d738();
    if ((int)uVar3 != 0) {
      if (param_3 == 0) {
        FUN_0054a6f0(param_1,uStack_48);
        if ((param_1 & 1) != 0) {
          return 1;
        }
      }
      else {
        func_0x006aaffc();
        func_0x006a4c8c();
        FUN_0054e3f8(param_1,uVar3,uStack_48);
        if ((int)param_1 != 0) {
          return 1;
        }
      }
    }
    goto code_r0x006a5850;
  case 3:
    iVar1 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar1 + -1;
    if (0 < iVar1) {
      if (param_3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_1;
        func_0x006aaffc();
        func_0x006a4cc0();
      }
      uVar2 = param_1;
      FUN_006a59bc(param_1,uVar3);
      if ((int)uVar2 != 0) {
        if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        return (ulong)(*(uint *)(param_1 + 0x20) == (param_2 & 0xfffffff8 | 4));
      }
    }
code_r0x006a5850:
    uVar3 = 0;
    break;
  case 5:
    func_0x006aae6c();
    FUN_0054d794();
    uVar3 = param_1;
    if ((param_3 != 0) && ((int)param_1 != 0)) {
      func_0x006aaffc();
      FUN_006a4c2c();
    }
  }
  return uVar3;
}



/* Entry: 006a59bc; end: 006a5a3f;  */

bool FUN_006a59bc(void)

{
  byte *pbVar1;
  bool bVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *unaff_x20;
  
  func_0x006aaff0();
  do {
    pbVar1 = (byte *)*unaff_x20;
    if ((pbVar1 < (byte *)unaff_x20[1]) && (uVar4 = (uint)*pbVar1, -1 < (char)*pbVar1)) {
      *unaff_x20 = (ulong)(pbVar1 + 1);
    }
    else {
      puVar3 = unaff_x20;
      FUN_0054e9f8();
      uVar4 = (uint)puVar3;
    }
    *(uint *)(unaff_x20 + 4) = uVar4;
    bVar2 = (uVar4 & 7) == 4;
  } while ((uVar4 != 0 && !bVar2) && (puVar3 = unaff_x20, FUN_006a5830(), ((ulong)puVar3 & 1) != 0))
  ;
  return uVar4 == 0 || bVar2;
}



/* Entry: 006a5a40; end: 006a5c07;  */

long * FUN_006a5a40(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 006a5c08; end: 006a5cc7;  */

undefined8 FUN_006a5c08(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0;
  for (lVar6 = 0; lVar6 < (int)((ulong)(param_1[1] - *param_1) >> 4); lVar6 = lVar6 + 1) {
    puVar4 = (uint *)(*param_1 + lVar5);
    if (puVar4[1] == 3) {
      uVar3 = param_3;
      func_0x00487c24(param_3);
      func_0x006ab108();
      uVar1 = 0x10;
      func_0x00487cbc(0x10,uVar3);
      uVar2 = (ulong)*puVar4;
      func_0x00487cbc(uVar2,uVar1);
      uVar3 = 0x1a;
      func_0x00487cbc(0x1a,uVar2);
      func_0x006a4ef4(puVar4,uVar3,param_3);
      func_0x006aad84();
      param_2 = 0xc;
      func_0x00487cbc(0xc,puVar4);
    }
    lVar5 = lVar5 + 0x10;
  }
  return param_2;
}



/* Entry: 006a5cc8; end: 006a5e3b;  */

long FUN_006a5cc8(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = 0;
  piVar1 = (int *)*param_1;
  uVar5 = (uint)((ulong)(param_1[1] - (long)piVar1) >> 4);
  uVar8 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar8 == 0) {
      return lVar7;
    }
    switch(piVar1[1]) {
    case 0:
      func_0x006aac60(*piVar1 << 3);
      lVar7 = lVar7 + (ulong)((int)LZCOUNT(*(undefined8 *)(piVar1 + 2)) * -9 + 0x280U >> 6);
      lVar4 = extraout_x8;
      goto code_r0x006a5df4;
    case 1:
      func_0x006aac60(*piVar1 << 3 | 5);
      lVar7 = lVar7 + extraout_x8_02 + 4;
      break;
    case 2:
      func_0x006aac60(*piVar1 << 3 | 1);
      lVar7 = lVar7 + extraout_x8_01 + 8;
      break;
    case 3:
      lVar6 = *(long *)(piVar1 + 2);
      lVar4 = (long)*(char *)(lVar6 + 0x17);
      lVar3 = lVar4;
      if (lVar4 < 0) {
        lVar3 = *(long *)(lVar6 + 8);
      }
      if (*(char *)(lVar6 + 0x17) < '\0') {
        lVar4 = *(long *)(lVar6 + 8);
      }
      lVar7 = lVar7 + (ulong)((int)LZCOUNT(*piVar1 << 3 | 2) * -9 + 0x160U >> 6) +
              (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6);
      goto code_r0x006a5df4;
    case 4:
      iVar2 = *piVar1;
      lVar4 = *(long *)(piVar1 + 2);
      FUN_006a5cc8(lVar4);
      func_0x006aac60(iVar2 << 3 | 4);
      lVar7 = lVar4 + lVar7 + (ulong)((int)LZCOUNT(iVar2 << 3 | 3) * -9 + 0x160U >> 6);
      lVar4 = extraout_x8_00;
code_r0x006a5df4:
      lVar7 = lVar7 + lVar4;
    }
    piVar1 = piVar1 + 4;
    uVar8 = uVar8 - 1;
  } while( true );
}



/* Entry: 006a5e3c; end: 006a5ebf;  */

long FUN_006a5e3c(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar5;
  ulong uVar4;
  
  lVar2 = 0;
  uVar3 = (uint)((ulong)(param_1[1] - *param_1) >> 4);
  plVar1 = (long *)(*param_1 + 8);
  for (uVar4 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*(int *)((long)plVar1 + -4) == 3) {
      lVar5 = (long)*(char *)(*plVar1 + 0x17);
      if (lVar5 < 0) {
        lVar5 = *(long *)(*plVar1 + 8);
      }
      lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)plVar1[-1]) * -9 + 0x160U >> 6) + 4 +
              (long)(int)lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6);
    }
    plVar1 = plVar1 + 2;
  }
  return lVar2;
}



/* Entry: 006a5ec0; end: 006a5ff3;  */

void FUN_006a5ec0(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = param_1;
  uVar5 = param_2;
  uStack_48 = param_2;
  FUN_00699298();
  FUN_00699298(param_1);
  if ((*(byte *)(*(long *)(uVar2 + 0x20) + 0x50) & 1) == 0) {
    do {
      uVar3 = param_3;
      func_0x00538a04(param_3,&uStack_48);
      if ((uVar3 & 1) != 0) {
        return;
      }
      func_0x006ab0c8(uStack_48,&uStack_60);
      if (uStack_48 == 0) {
        return;
      }
      if (((uint)uStack_60 == 0) || (((uint)uStack_60 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = (uint)uStack_60 - 1;
        return;
      }
      uVar1 = (uint)uStack_60 >> 3;
      uVar3 = uVar2;
      FUN_00656068(uVar2,uVar1);
      if (uVar3 == 0) {
        uVar3 = uVar2;
        FUN_00693780(uVar2,uVar1);
        if ((int)uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(ulong *)(param_3 + 0x60);
          if (uVar3 == 0) {
            uVar3 = uVar5;
            FUN_0068e9ac(uVar5,uVar1);
          }
          else {
            FUN_00655ca0(uVar3,uVar2,uVar1);
          }
        }
      }
      uVar4 = param_1;
      FUN_006a6428(param_1,uStack_48,param_3,uStack_60 & 0xffffffff,uVar5,uVar3);
      uStack_48 = uVar4;
    } while (uVar4 != 0);
  }
  else {
    uStack_60 = param_1;
    uStack_58 = uVar2;
    uStack_50 = uVar5;
    FUN_006a5ff4(&uStack_60,param_2,param_3);
  }
  return;
}



/* Entry: 006a5ff4; end: 006a6427;  */

byte *****
FUN_006a5ff4(byte *****param_1,byte *****param_2,byte *****param_3,byte *****param_4,
            undefined8 param_5,byte *****param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  byte ****ppppbVar4;
  byte *****pppppbVar5;
  byte ****ppppbVar6;
  byte *****pppppbVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *****unaff_x21;
  byte *****unaff_x22;
  byte *****pppppbVar11;
  int iVar12;
  undefined8 unaff_x23;
  long lVar13;
  byte ****unaff_x26;
  undefined8 *puStack_298;
  undefined1 auStack_1f0 [112];
  byte ***pppbStack_180;
  undefined8 uStack_178;
  byte ****ppppbStack_170;
  undefined8 uStack_168;
  byte ****ppppbStack_160;
  byte ****ppppbStack_158;
  byte ****ppppbStack_150;
  byte ****ppppbStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint uStack_12c;
  byte ****ppppbStack_128;
  byte ****ppppbStack_120;
  uint auStack_118 [3];
  uint uStack_10c;
  byte ****ppppbStack_108;
  byte ****ppppbStack_100;
  ulong uStack_f8;
  byte ****ppppbStack_f0;
  byte ***apppbStack_e8 [10];
  int iStack_98;
  undefined8 uStack_78;
  
  pppppbVar5 = param_1;
  pppppbVar7 = param_3;
  func_0x006aabcc();
  ppppbStack_128 = (byte ****)param_2;
  uStack_78 = extraout_x8;
  do {
    func_0x006aae6c();
    func_0x00538a04();
    pppppbVar11 = (byte *****)ppppbStack_128;
    if (((ulong)pppppbVar5 & 1) != 0) goto LAB_006a63bc;
    param_2 = (byte *****)&uStack_12c;
    func_0x006ab0c8();
    if ((byte *****)ppppbStack_128 == (byte *****)0x0) break;
    if ((uStack_12c == 0) || (in_ZR = 1, (uStack_12c & 7) == 4)) {
      *(uint *)(param_3 + 10) = uStack_12c - 1;
      pppppbVar11 = (byte *****)ppppbStack_128;
      goto LAB_006a63bc;
    }
    in_ZR = uStack_12c == 0xb;
    if ((bool)in_ZR) {
      iVar12 = *(int *)(param_3 + 0xb);
      iVar2 = iVar12 + -1;
      in_ZR = iVar2 == 0;
      *(int *)(param_3 + 0xb) = iVar2;
      if (iVar12 < 1) break;
      unaff_x23 = 0;
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      uStack_f8 = 0;
      unaff_x26 = *param_1;
      uVar1 = *(uint *)((long)param_1[2] + 0x24);
      ppppbStack_108 = (byte ****)0x0;
      ppppbStack_100 = (byte ****)0x0;
      pppppbVar5 = (byte *****)ppppbStack_128;
      unaff_x21 = (byte *****)0x0;
      ppppbStack_f0 = (byte ****)(byte *****)ppppbStack_128;
LAB_006a60b0:
      do {
        func_0x006aad5c();
        func_0x00538a04();
        unaff_x22 = (byte *****)ppppbStack_f0;
        if (((ulong)pppppbVar5 & 1) != 0) goto LAB_006a6378;
        pppppbVar5 = (byte *****)((long)ppppbStack_f0 + 1);
        uStack_10c = (uint)*(byte *)ppppbStack_f0;
        iVar12 = (int)unaff_x23;
        if (uStack_10c == 0x1a) {
          if (iVar12 == 1) {
            ppppbVar4 = param_1[1];
            ppppbStack_f0 = (byte ****)pppppbVar5;
            FUN_00693780(ppppbVar4,unaff_x21);
            if ((int)ppppbVar4 == 0) {
              param_6 = (byte *****)0x0;
            }
            else {
              param_6 = (byte *****)param_3[0xc];
              if (param_6 == (byte *****)0x0) {
                param_6 = (byte *****)param_1[2];
                FUN_0068e9ac(param_6,unaff_x21);
              }
              else {
                FUN_00655ca0(param_6,param_1[1],unaff_x21);
              }
            }
            pppppbVar5 = (byte *****)*param_1;
            param_4 = (byte *****)((long)unaff_x21 << 3 | 2);
            pppppbVar7 = param_3;
            FUN_006a6428();
            unaff_x23 = 3;
            param_2 = (byte *****)ppppbStack_f0;
          }
          else {
            if (iVar12 == 0) {
              pppppbVar11 = &ppppbStack_f0;
              ppppbStack_f0 = (byte ****)pppppbVar5;
              FUN_00533034();
              param_2 = (byte *****)ppppbStack_f0;
              if ((byte *****)ppppbStack_f0 == (byte *****)0x0) break;
              param_4 = &ppppbStack_108;
              pppppbVar5 = param_3;
              FUN_00533074();
              param_2 = (byte *****)ppppbStack_f0;
              pppppbVar7 = pppppbVar11;
              ppppbStack_f0 = (byte ****)pppppbVar5;
              if (pppppbVar5 == (byte *****)0x0) break;
              unaff_x23 = 2;
              goto LAB_006a60b0;
            }
            pppppbVar11 = &ppppbStack_f0;
            ppppbStack_f0 = (byte ****)pppppbVar5;
            FUN_00533034();
            param_2 = (byte *****)ppppbStack_f0;
            if ((byte *****)ppppbStack_f0 == (byte *****)0x0) break;
            pppppbVar5 = param_3;
            FUN_0054ca0c();
            param_2 = (byte *****)ppppbStack_f0;
            pppppbVar7 = pppppbVar11;
          }
        }
        else {
          if (*(byte *)ppppbStack_f0 == 0x10) {
            param_2 = (byte *****)auStack_118;
            ppppbStack_f0 = (byte ****)pppppbVar5;
            func_0x00538a0c();
            ppppbStack_f0 = (byte ****)pppppbVar5;
            if ((pppppbVar5 == (byte *****)0x0) ||
               (pppppbVar11 = (byte *****)(ulong)auStack_118[0], auStack_118[0] == 0)) break;
            if (iVar12 == 0) {
              unaff_x23 = 1;
              unaff_x21 = pppppbVar11;
            }
            else if (iVar12 == 2) {
              ppppbVar4 = param_3[0xc];
              if (ppppbVar4 == (byte ****)0x0) {
                ppppbVar4 = param_1[2];
                FUN_0068e9ac(ppppbVar4,pppppbVar11);
              }
              else {
                FUN_00655ca0(ppppbVar4,param_1[1],pppppbVar11);
              }
              if ((ppppbVar4 == (byte ****)0x0) ||
                 (ppppbVar6 = ppppbVar4, func_0x006ab04c(), ppppbVar6 == (byte ****)0x0)) {
                pppppbVar7 = (byte *****)ppppbStack_100;
                param_2 = (byte *****)ppppbStack_108;
                if (-1 < (long)uStack_f8) {
                  pppppbVar7 = (byte *****)(uStack_f8 >> 0x38);
                  param_2 = &ppppbStack_108;
                }
                uVar10 = *(ulong *)((long)unaff_x26 + (ulong)uVar1);
                if ((uVar10 & 1) == 0) {
                  param_4 = (byte *****)((long)unaff_x26 + (ulong)uVar1);
                  func_0x00699010();
                }
                else {
                  param_4 = (byte *****)((uVar10 & 0xfffffffffffffffe) + 8);
                }
                pppppbVar5 = pppppbVar11;
                FUN_006882d8();
              }
              else {
                unaff_x21 = (byte *****)param_1[2];
                if ((*(byte *)((long)ppppbVar4 + 1) >> 5 & 1) == 0) {
                  FUN_0068dd94(unaff_x21,*param_1,ppppbVar4);
                }
                else {
                  FUN_0068e1d0(unaff_x21,*param_1,ppppbVar4,param_3[0xd]);
                }
                param_4 = &ppppbStack_108;
                func_0x00538b48(apppbStack_e8,param_3,&ppppbStack_120);
                pppppbVar7 = (byte *****)apppbStack_e8;
                pppppbVar5 = unaff_x21;
                param_2 = (byte *****)ppppbStack_120;
                FUN_00549a60();
                if ((pppppbVar5 == (byte *****)0x0) || (iStack_98 != 0)) break;
              }
              unaff_x23 = 3;
              unaff_x21 = pppppbVar11;
            }
            goto LAB_006a60b0;
          }
          param_2 = (byte *****)&uStack_10c;
          ppppbVar4 = ppppbStack_f0;
          ppppbStack_f0 = (byte ****)pppppbVar5;
          func_0x006ab0c8();
          pppppbVar5 = (byte *****)(ulong)uStack_10c;
          if ((uStack_10c == 0) || ((uStack_10c & 7) == 4)) {
            *(uint *)(param_3 + 10) = uStack_10c - 1;
            unaff_x22 = (byte *****)ppppbStack_f0;
            goto LAB_006a6378;
          }
          param_2 = (byte *****)0x0;
          param_4 = param_3;
          FUN_0054bac4();
          pppppbVar7 = (byte *****)ppppbStack_f0;
        }
        ppppbStack_f0 = (byte ****)pppppbVar5;
      } while (pppppbVar5 != (byte *****)0x0);
      unaff_x22 = (byte *****)0x0;
LAB_006a6378:
      pppppbVar5 = (byte *****)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      param_3[0xb] = (byte ****)
                     CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + -1,(int)param_3[0xb] + 1);
      iVar12 = *(int *)(param_3 + 10);
      *(undefined4 *)(param_3 + 10) = 0;
      in_ZR = iVar12 == 0xb;
      if (!(bool)in_ZR) break;
    }
    else {
      unaff_x21 = (byte *****)(ulong)(uStack_12c >> 3);
      ppppbVar4 = param_1[1];
      FUN_00693780(ppppbVar4,unaff_x21);
      if ((int)ppppbVar4 == 0) {
        param_6 = (byte *****)0x0;
      }
      else {
        param_6 = (byte *****)param_3[0xc];
        if (param_6 == (byte *****)0x0) {
          param_6 = (byte *****)param_1[2];
          FUN_0068e9ac(param_6,unaff_x21);
        }
        else {
          FUN_00655ca0(param_6,param_1[1],unaff_x21);
        }
      }
      pppppbVar5 = (byte *****)*param_1;
      param_4 = (byte *****)(ulong)uStack_12c;
      pppppbVar7 = param_3;
      FUN_006a6428();
      param_2 = (byte *****)ppppbStack_128;
      unaff_x22 = pppppbVar5;
    }
    ppppbStack_128 = (byte ****)unaff_x22;
  } while (unaff_x22 != (byte *****)0x0);
  pppppbVar11 = (byte *****)0x0;
LAB_006a63bc:
  func_0x006aaaf4(uStack_78);
  if ((bool)in_ZR) {
    return pppppbVar11;
  }
  ___stack_chk_fail();
  pppppbVar5 = &ppppbStack_108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006aac98();
  uStack_178 = 2;
  pcStack_138 = FUN_006a6428;
  pppbStack_180 = (byte ***)unaff_x26;
  ppppbStack_170 = (byte ****)&ppppbStack_108;
  uStack_168 = unaff_x23;
  ppppbStack_160 = (byte ****)unaff_x22;
  ppppbStack_158 = (byte ****)unaff_x21;
  ppppbStack_150 = (byte ****)param_1;
  ppppbStack_148 = (byte ****)pppppbVar11;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x006aabcc();
  if (param_6 == (byte *****)0x0) {
LAB_006a652c:
    func_0x006aabdc();
    func_0x006895cc();
    func_0x006aaadc();
    if ((bool)in_ZR) {
      func_0x006aadd8(param_4,pppppbVar5,param_2,pppppbVar7);
      FUN_006a4ff4();
      return param_4;
    }
  }
  else {
    uVar1 = (uint)param_4 & 7;
    pppppbVar5 = param_6;
    FUN_006538b4();
    uVar3 = *(uint *)(&UNK_00810e8c + ((ulong)pppppbVar5 & 0xffffffff) * 4) <= uVar1;
    in_ZR = uVar1 == *(uint *)(&UNK_00810e8c + ((ulong)pppppbVar5 & 0xffffffff) * 4);
    if (!(bool)in_ZR) {
      FUN_00659690();
      uVar3 = 1 < uVar1;
      in_ZR = uVar1 == 2;
      pppppbVar5 = param_6;
      if ((!(bool)in_ZR) || ((int)param_6 == 0)) goto LAB_006a652c;
      func_0x006ab134();
      func_0x006aadb8();
      pppppbVar5 = param_6;
      if (!(bool)uVar3 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a6500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_00827f78 + extraout_x8_01 * 2) * 4 + 0x6a6504))();
        return param_6;
      }
    }
    func_0x006ab134();
    func_0x006aadb8();
    if (!(bool)uVar3 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a64b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00827f9c)[extraout_x8_00] * 4 + 0x6a64b4))();
      return pppppbVar5;
    }
    func_0x006aaadc();
    if ((bool)in_ZR) {
      pppppbVar7 = (byte *****)0x0;
      func_0x006aadd8(0,pcStack_138);
      return pppppbVar7;
    }
  }
  ___stack_chk_fail();
  pppppbVar7 = (byte *****)((long)&section_00000338.size + 7);
  FUN_0077670c(auStack_1f0,&UNK_0091541c,0x367);
  func_0x006987c8(auStack_1f0,&UNK_00915452);
  puVar8 = auStack_1f0;
  FUN_005558a0();
  func_0x006ab05c();
  func_0x006aac98();
  puVar9 = puVar8;
  FUN_00699298();
  FUN_00699298(puVar8);
  puStack_298 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(puVar9 + 0x20) + 0x53) == '\x01') {
    for (lVar13 = 0; lVar13 < *(int *)(puVar9 + 4); lVar13 = lVar13 + 1) {
      func_0x006ab158();
    }
  }
  else {
    func_0x006aabdc();
    FUN_0068b260();
  }
  for (; puStack_298 != (undefined8 *)0x0; puStack_298 = puStack_298 + 1) {
    func_0x006aabe8(*puStack_298);
    FUN_006a6f40();
  }
  if (*(char *)(*(long *)(puVar9 + 0x20) + 0x50) == '\x01') {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5c08();
  }
  else {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5a40();
  }
  func_0x006aac8c();
  return pppppbVar7;
}



/* Entry: 006a6428; end: 006a6e23;  */

ulong FUN_006a6428(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined8 unaff_x30;
  undefined8 *puStack_168;
  undefined1 auStack_c0 [112];
  
  func_0x006aabcc();
  if (param_6 == 0) {
LAB_006a652c:
    func_0x006aabdc();
    func_0x006895cc();
    func_0x006aaadc();
    if ((bool)in_ZR) {
      func_0x006aadd8(param_4,param_1,param_2,param_3);
      FUN_006a4ff4();
      return param_4;
    }
  }
  else {
    uVar1 = (uint)param_4 & 7;
    uVar3 = param_6;
    FUN_006538b4();
    uVar2 = *(uint *)(&UNK_00810e8c + (uVar3 & 0xffffffff) * 4) <= uVar1;
    in_ZR = uVar1 == *(uint *)(&UNK_00810e8c + (uVar3 & 0xffffffff) * 4);
    if (!(bool)in_ZR) {
      FUN_00659690();
      uVar2 = 1 < uVar1;
      in_ZR = uVar1 == 2;
      param_1 = param_6;
      if ((!(bool)in_ZR) || ((int)param_6 == 0)) goto LAB_006a652c;
      func_0x006ab134();
      func_0x006aadb8();
      uVar3 = param_6;
      if (!(bool)uVar2 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a6500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_00827f78 + extraout_x8_00 * 2) * 4 + 0x6a6504))();
        return param_6;
      }
    }
    func_0x006ab134();
    func_0x006aadb8();
    if (!(bool)uVar2 || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a64b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00827f9c)[extraout_x8] * 4 + 0x6a64b4))();
      return uVar3;
    }
    func_0x006aaadc();
    if ((bool)in_ZR) {
      uVar3 = 0;
      func_0x006aadd8(0,unaff_x30);
      return uVar3;
    }
  }
  ___stack_chk_fail();
  uVar3 = 0x367;
  FUN_0077670c(auStack_c0,&UNK_0091541c,0x367);
  func_0x006987c8(auStack_c0,&UNK_00915452);
  puVar4 = auStack_c0;
  FUN_005558a0();
  func_0x006ab05c();
  func_0x006aac98();
  puVar5 = puVar4;
  FUN_00699298();
  FUN_00699298(puVar4);
  puStack_168 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(puVar5 + 0x20) + 0x53) == '\x01') {
    for (lVar6 = 0; lVar6 < *(int *)(puVar5 + 4); lVar6 = lVar6 + 1) {
      func_0x006ab158();
    }
  }
  else {
    func_0x006aabdc();
    FUN_0068b260();
  }
  for (; puStack_168 != (undefined8 *)0x0; puStack_168 = puStack_168 + 1) {
    func_0x006aabe8(*puStack_168);
    FUN_006a6f40();
  }
  if (*(char *)(*(long *)(puVar5 + 0x20) + 0x50) == '\x01') {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5c08();
  }
  else {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5a40();
  }
  func_0x006aac8c();
  return uVar3;
}



/* Entry: 006a6e24; end: 006a6f3f;  */

undefined8 FUN_006a6e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_68;
  
  lVar1 = param_1;
  FUN_00699298();
  FUN_00699298(param_1);
  puStack_68 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x53) == '\x01') {
    for (lVar2 = 0; lVar2 < *(int *)(lVar1 + 4); lVar2 = lVar2 + 1) {
      func_0x006ab158();
    }
  }
  else {
    func_0x006aabdc();
    FUN_0068b260();
  }
  for (; puStack_68 != (undefined8 *)0x0; puStack_68 = puStack_68 + 1) {
    func_0x006aabe8(*puStack_68);
    FUN_006a6f40();
  }
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x50) == '\x01') {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5c08();
  }
  else {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5a40();
  }
  func_0x006aac8c();
  return param_3;
}



/* Entry: 006a6f40; end: 006a8403;  */

/* WARNING: Possible PIC construction at 0x006a6fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006a8480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006a6fe0) */
/* WARNING: Removing unreachable block (ram,0x006a7034) */
/* WARNING: Removing unreachable block (ram,0x006a8484) */
/* WARNING: Removing unreachable block (ram,0x006a8620) */
/* WARNING: Removing unreachable block (ram,0x006a8884) */
/* WARNING: Removing unreachable block (ram,0x006a8638) */
/* WARNING: Removing unreachable block (ram,0x006a84a8) */

byte ****** FUN_006a6f40(byte ******param_1,byte ******param_2,byte ******param_3,long param_4)

{
  byte *****pppppbVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  byte ******ppppppbVar7;
  byte ******ppppppbVar8;
  byte ******ppppppbVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  byte ******ppppppbVar17;
  byte *****pppppbVar18;
  byte *****pppppbVar19;
  byte ******ppppppbVar20;
  byte *****pppppbStack_170;
  byte *****pppppbStack_168;
  byte *****apppppbStack_160 [2];
  byte *****pppppbStack_150;
  byte *****pppppbStack_148;
  byte *****pppppbStack_140;
  undefined1 uStack_138;
  byte *****pppppbStack_130;
  byte *****pppppbStack_128;
  byte *****pppppbStack_120;
  byte *****pppppbStack_118;
  byte *****pppppbStack_110;
  byte *****pppppbStack_108;
  byte *****apppppbStack_100 [6];
  byte *****pppppbStack_d0;
  byte *****pppppbStack_c8;
  byte *****pppppbStack_c0;
  byte *****pppppbStack_b8;
  byte *****apppppbStack_b0 [4];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  
  ppppppbVar9 = param_2;
  func_0x006aabcc();
  uStack_80 = extraout_x8;
  func_0x006aaea4();
  if ((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) {
    in_CY = *(char *)(param_1[4][4] + 10) != '\0';
    in_ZR = 0;
    if (*(char *)(param_1[4][4] + 10) == '\x01') {
      ppppppbVar7 = param_1;
      FUN_00656c60();
      in_CY = 9 < (uint)ppppppbVar7;
      in_ZR = (uint)ppppppbVar7 == 10;
      if (((bool)in_ZR) && ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0)) {
        FUN_00699298();
        func_0x006aab3c();
        func_0x006ab108();
        uVar13 = 0x10;
        goto LAB_00487cc4;
      }
    }
  }
  ppppppbVar7 = param_1;
  func_0x006595dc();
  uVar4 = in_ZR;
  if ((int)ppppppbVar7 == 0) {
LAB_006a708c:
    uVar13 = (uint)ppppppbVar7;
    if ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0) {
      if ((*(byte *)((long)param_1[4][4] + 0x53) & 1) == 0) {
        func_0x006aab2c();
        FUN_0068ae9c();
      }
      else {
        uVar13 = 1;
      }
      pppppbStack_150 = (byte *****)0x0;
      pppppbStack_148 = (byte *****)0x0;
      pppppbStack_140 = (byte *****)0x0;
    }
    else {
      func_0x006aab2c();
      FUN_0068af64();
      uVar13 = (uint)ppppppbVar7;
      pppppbStack_150 = (byte *****)0x0;
      pppppbStack_148 = (byte *****)0x0;
      pppppbStack_140 = (byte *****)0x0;
      in_CY = 1 < uVar13;
      uVar4 = uVar13 == 2;
      if ((1 < (int)uVar13) && (ppppppbVar8 = param_1, func_0x006595dc(), (int)ppppppbVar8 != 0)) {
        in_CY = *(char *)(param_4 + 0x3a) != '\0';
        uVar4 = 0;
        if (*(char *)(param_4 + 0x3a) == '\x01') {
          pppppbStack_170 = (byte *****)0x0;
          pppppbStack_168 = (byte *****)0x0;
          apppppbStack_160[0] = (byte *****)0x0;
          ppppppbVar8 = apppppbStack_160;
          uVar10 = (ulong)ppppppbVar7 & 0xffffffff;
          apppppbStack_b0[0] = (byte *****)ppppppbVar8;
          FUN_006a2e24();
          pppppbStack_b8 = (byte *****)(ppppppbVar8 + uVar10);
          ppppppbVar17 = (byte ******)
                         ((long)ppppppbVar8 - ((long)pppppbStack_168 - (long)pppppbStack_170));
          ppppppbVar7 = (byte ******)pppppbStack_170;
          pppppbStack_d0 = (byte *****)ppppppbVar8;
          pppppbStack_c8 = (byte *****)ppppppbVar8;
          pppppbStack_c0 = (byte *****)ppppppbVar8;
          _memcpy(ppppppbVar17);
          pppppbVar18 = apppppbStack_160[0];
          apppppbStack_160[0] = pppppbStack_b8;
          pppppbStack_168 = pppppbStack_c0;
          pppppbStack_c0 = pppppbStack_170;
          pppppbStack_b8 = pppppbVar18;
          pppppbStack_d0 = pppppbStack_170;
          pppppbStack_c8 = pppppbStack_170;
          pppppbStack_170 = (byte *****)ppppppbVar17;
          FUN_006a2e64(&pppppbStack_d0);
          FUN_00699298(param_2);
          ppppppbVar8 = ppppppbVar7;
          FUN_0068ee10(ppppppbVar7,param_2,param_1,10,0);
          ppppppbVar17 = ppppppbVar7;
          FUN_00699974(ppppppbVar7,param_1);
          ppppppbVar20 = (byte ******)ppppppbVar7[0xb];
          ppppppbVar7 = ppppppbVar17;
          func_0x006ab04c();
          (*(code *)(*ppppppbVar20)[2])(ppppppbVar20,ppppppbVar7);
          (*(code *)(*ppppppbVar20)[2])();
          ppppppbVar7 = ppppppbVar20;
          pppppbStack_d0 = (byte *****)ppppppbVar8;
          pppppbStack_c8 = (byte *****)ppppppbVar17;
          func_0x006ab034((*ppppppbVar17)[10]);
          pppppbStack_b8 = (byte *****)ppppppbVar20;
          while( true ) {
            ppppppbVar20 = ppppppbVar7;
            pppppbStack_120 = (byte *****)ppppppbVar8;
            pppppbStack_118 = (byte *****)ppppppbVar17;
            func_0x006ab034((*ppppppbVar17)[0xb]);
            pppppbStack_108 = (byte *****)0x0;
            pppppbStack_110 = (byte *****)ppppppbVar20;
            func_0x006aaf2c((*ppppppbVar17)[0xe]);
            iVar6 = (int)ppppppbVar20;
            (*extraout_x8_00)();
            ppppppbVar20 = &pppppbStack_120;
            FUN_006aa124();
            if (iVar6 != 0) break;
            func_0x006aaf2c((*ppppppbVar17)[0x10]);
            (*extraout_x8_01)();
            ppppppbVar7 = &pppppbStack_170;
            pppppbStack_120 = (byte *****)ppppppbVar20;
            FUN_006a2c78(ppppppbVar7,&pppppbStack_120);
            func_0x006aaf2c((*ppppppbVar17)[0xd]);
            (*extraout_x8_02)();
          }
          ppppppbVar8 = &pppppbStack_d0;
          pppppbStack_c0 = (byte *****)ppppppbVar7;
          FUN_006aa124();
          func_0x006ab04c();
          pppppbVar19 = pppppbStack_168;
          pppppbVar18 = pppppbStack_170;
          pppppbStack_128 = ppppppbVar8[7];
          uVar10 = (long)pppppbStack_168 - (long)pppppbStack_170 >> 3;
          pppppbStack_d0 = (byte *****)0x0;
          pppppbStack_c8 = (byte *****)0x0;
          in_CY = 0x80 < uVar10;
          uVar4 = uVar10 == 0x81;
          if (0x80 < (long)uVar10) {
            FUN_006a3160(&pppppbStack_120,uVar10);
            FUN_006a31b8(&pppppbStack_d0,&pppppbStack_120);
            FUN_006a33fc(&pppppbStack_120);
          }
          FUN_006aa174(pppppbVar18,pppppbVar19,&pppppbStack_128,uVar10,pppppbStack_d0,pppppbStack_c8
                      );
          FUN_006a33fc(&pppppbStack_d0);
          if ((byte ******)pppppbStack_150 != (byte ******)0x0) {
            pppppbStack_148 = pppppbStack_150;
            __ZdlPv();
          }
          pppppbStack_148 = pppppbStack_168;
          pppppbStack_150 = pppppbStack_170;
          pppppbStack_140 = apppppbStack_160[0];
          pppppbStack_168 = (byte *****)0x0;
          apppppbStack_160[0] = (byte *****)0x0;
          pppppbStack_170 = (byte *****)0x0;
          FUN_006a2eb4(&pppppbStack_170);
        }
      }
    }
    FUN_00659660();
    if ((int)param_1 == 0) {
      uVar16 = 0;
      pppppbStack_c8 = (byte *****)&pppppbStack_150;
      uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
      pppppbStack_d0 = (byte *****)param_2;
      pppppbStack_c0 = (byte *****)ppppppbVar9;
      while( true ) {
        uVar3 = uVar13 <= uVar16;
        uVar5 = uVar16 == uVar13;
        uVar4 = 1;
        if ((bool)uVar5) break;
        func_0x006aab3c();
        func_0x006ab0bc();
        func_0x006aadb8();
        if (!(bool)uVar3 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x006a7554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_00827fae)[extraout_x8_04] * 4 + 0x6a7558))();
          return param_1;
        }
        uVar16 = uVar16 + 1;
      }
LAB_006a8174:
      FUN_006a2eb4(&pppppbStack_150);
      goto LAB_006a817c;
    }
    if (uVar13 == 0) goto LAB_006a8174;
    func_0x006aab3c();
    func_0x006ab0bc();
    func_0x006aadb8();
    if (!(bool)in_CY || (bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x006a74d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_00827fc0 + extraout_x8_03 * 2) * 4 + 0x6a74d8))();
      return param_1;
    }
  }
  else {
    func_0x006aab2c();
    func_0x0068efe0();
    if (((ulong)ppppppbVar7[1] & 1) != 0) {
      func_0x006aaf9c();
      uVar4 = 1;
      if ((bool)in_ZR) goto LAB_006a708c;
    }
    if (*(char *)(param_4 + 0x3a) == '\x01') {
      pppppbStack_170 = (byte *****)0x0;
      pppppbStack_168 = (byte *****)0x0;
      apppppbStack_160[0] = (byte *****)0x0;
      func_0x006aab2c(&pppppbStack_d0);
      FUN_0068e90c();
      while( true ) {
        FUN_0068e95c(&pppppbStack_120,ppppppbVar9,param_2,param_1);
        pppppbVar1 = pppppbStack_d0;
        pppppbVar19 = pppppbStack_120;
        FUN_0069072c(apppppbStack_100);
        pppppbVar18 = pppppbStack_168;
        if (pppppbVar1 == pppppbVar19) break;
        if (pppppbStack_168 < apppppbStack_160[0]) {
          FUN_00698c0c(pppppbStack_168,apppppbStack_b0);
          ppppppbVar7 = (byte ******)(pppppbVar18 + 4);
        }
        else {
          lVar15 = (long)pppppbStack_168 - (long)pppppbStack_170;
          uVar10 = (lVar15 >> 5) + 1;
          if (uVar10 >> 0x3b != 0) {
            func_0x006a93ec();
LAB_006a81bc:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x6a81c0);
            (*pcVar2)();
          }
          uVar14 = (long)apppppbStack_160[0] - (long)pppppbStack_170 >> 4;
          if (uVar14 <= uVar10) {
            uVar14 = uVar10;
          }
          if (0x7fffffffffffffdf < (ulong)((long)apppppbStack_160[0] - (long)pppppbStack_170)) {
            uVar14 = 0x7ffffffffffffff;
          }
          apppppbStack_100[0] = (byte *****)apppppbStack_160;
          if (uVar14 == 0) {
            pppppbVar18 = (byte *****)0x0;
          }
          else {
            if (uVar14 >> 0x3b != 0) {
              FUN_0040cee8();
              goto LAB_006a81bc;
            }
            pppppbVar18 = (byte *****)(uVar14 << 5);
            __Znwm();
          }
          lVar15 = (long)pppppbVar18 + lVar15;
          pppppbStack_120 = pppppbVar18;
          pppppbStack_118 = (byte *****)lVar15;
          pppppbStack_110 = (byte *****)lVar15;
          pppppbStack_108 = pppppbVar18 + uVar14 * 4;
          FUN_00698c0c(lVar15,apppppbStack_b0);
          pppppbVar19 = pppppbStack_168;
          ppppppbVar17 = (byte ******)pppppbStack_170;
          ppppppbVar7 = (byte ******)(lVar15 + 0x20);
          ppppppbVar20 = (byte ******)((long)pppppbStack_170 + (lVar15 - (long)pppppbStack_168));
          pppppbStack_148 = (byte *****)&pppppbStack_130;
          pppppbStack_140 = (byte *****)&pppppbStack_128;
          uStack_138 = 0;
          pppppbStack_128 = (byte *****)ppppppbVar20;
          pppppbStack_150 = (byte *****)apppppbStack_160;
          pppppbStack_130 = (byte *****)ppppppbVar20;
          pppppbStack_110 = (byte *****)ppppppbVar7;
          for (ppppppbVar8 = (byte ******)pppppbStack_170; ppppppbVar8 != (byte ******)pppppbVar19;
              ppppppbVar8 = ppppppbVar8 + 4) {
            FUN_00698c0c(pppppbStack_128,ppppppbVar8);
            pppppbStack_128 = pppppbStack_128 + 4;
          }
          uStack_138 = 1;
          for (; ppppppbVar17 != (byte ******)pppppbVar19; ppppppbVar17 = ppppppbVar17 + 4) {
            FUN_0069072c(ppppppbVar17);
          }
          FUN_006a9400(&pppppbStack_150);
          pppppbStack_110 = pppppbStack_170;
          pppppbStack_108 = apppppbStack_160[0];
          pppppbStack_120 = pppppbStack_170;
          pppppbStack_118 = pppppbStack_170;
          pppppbStack_170 = (byte *****)ppppppbVar20;
          pppppbStack_168 = (byte *****)ppppppbVar7;
          apppppbStack_160[0] = pppppbVar18 + uVar14 * 4;
          func_0x006a9444(&pppppbStack_120);
        }
        pppppbStack_168 = (byte *****)ppppppbVar7;
        FUN_0068fbf0(&pppppbStack_d0);
      }
      func_0x006aae24(&pppppbStack_d0);
      ppppppbVar9 = (byte ******)pppppbStack_170;
      if (pppppbStack_170 != pppppbStack_168) {
        FUN_006a948c(pppppbStack_170,pppppbStack_168,
                     LZCOUNT((long)pppppbStack_168 - (long)pppppbStack_170 >> 5) << 1 ^ 0x7e,1);
        ppppppbVar9 = (byte ******)pppppbStack_170;
      }
      for (; uVar4 = ppppppbVar9 == (byte ******)pppppbStack_168, !(bool)uVar4;
          ppppppbVar9 = ppppppbVar9 + 4) {
        pppppbStack_d0 = (byte *****)0x0;
        pppppbStack_c8 = (byte *****)((ulong)pppppbStack_c8 & 0xffffffff00000000);
        func_0x006aafac();
        FUN_0068e864();
        param_3 = param_1;
        func_0x006ab0e4(param_1,ppppppbVar9,&pppppbStack_d0);
      }
      FUN_006aa0dc(&pppppbStack_170);
    }
    else {
      func_0x006aab2c(&pppppbStack_d0);
      FUN_0068e90c();
      while( true ) {
        func_0x006aab2c(&pppppbStack_120);
        FUN_0068e95c();
        pppppbVar19 = pppppbStack_d0;
        pppppbVar18 = pppppbStack_120;
        FUN_0069072c(apppppbStack_100);
        uVar4 = pppppbVar19 == pppppbVar18;
        if ((bool)uVar4) break;
        param_3 = param_1;
        func_0x006ab0e4(param_1,apppppbStack_b0,auStack_90);
        FUN_0068fbf0(&pppppbStack_d0);
      }
      FUN_0069072c(apppppbStack_b0);
    }
LAB_006a817c:
    func_0x006aaaf4(uStack_80);
    if ((bool)uVar4) {
      return param_3;
    }
    ___stack_chk_fail();
  }
  puVar11 = &UNK_0091541c;
  uVar12 = 0x535;
  FUN_0077670c(&pppppbStack_d0,&UNK_0091541c,0x535);
  FUN_006a8e8c(&pppppbStack_d0);
  FUN_005558a0();
  ppppppbVar9 = &pppppbStack_150;
  FUN_006a2eb4();
  func_0x006aac98();
  ppppppbVar7 = ppppppbVar9;
  FUN_00656024();
  pppppbVar18 = ppppppbVar7[7];
  ppppppbVar7 = ppppppbVar9;
  FUN_00656024();
  pppppbVar19 = ppppppbVar7[7];
  FUN_006a91ac(pppppbVar18,puVar11);
  param_2 = (byte ******)(pppppbVar19 + 0xb);
  FUN_006a9294(param_2,uVar12);
  func_0x006aad90();
  uVar13 = *(int *)((long)ppppppbVar9 + 4) << 3 | 2;
LAB_00487cc4:
  while( true ) {
    if (uVar13 < 0x80) break;
    *(byte *)param_2 = (byte)uVar13 | 0x80;
    uVar13 = uVar13 >> 7;
    param_2 = (byte ******)((long)param_2 + 1);
  }
  *(byte *)param_2 = (byte)uVar13;
  return (byte ******)((long)param_2 + 1);
}



/* Entry: 006a8404; end: 006a88e7;  */

void FUN_006a8404(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x30;
  
  lVar2 = param_1;
  FUN_00656024();
  uVar5 = *(undefined8 *)(lVar2 + 0x38);
  lVar2 = param_1;
  FUN_00656024();
  lVar6 = *(long *)(lVar2 + 0x38);
  uVar3 = uVar5;
  FUN_006a91ac(uVar5,param_2);
  lVar2 = lVar6 + 0x58;
  FUN_006a9294(lVar2,param_3);
  iVar1 = (int)lVar2;
  func_0x006aad90();
  uVar4 = (ulong)(*(int *)(param_1 + 4) << 3 | 2);
  func_0x00487cbc(uVar4,lVar2);
  func_0x00487cbc((int)uVar3 + iVar1 + 2,uVar4);
  func_0x006aad84();
  FUN_006538b4(uVar5);
  func_0x006aadb8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a84bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827fe4)[extraout_x8] * 4 + 0x6a84c0))();
    return;
  }
  func_0x006aad90();
  FUN_006538b4(lVar6 + 0x58);
  func_0x006aadb8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a864c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827ff6)[extraout_x8_00] * 4 + 0x6a8650))();
    return;
  }
  func_0x006aad9c(uVar5,unaff_x30);
  return;
}



/* Entry: 006a88e8; end: 006a88f3;  */

int * FUN_006a88e8(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    func_0x00437928(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_0048ed38(*(undefined8 *)(param_2 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 006a88f4; end: 006a8e67;  */

int * FUN_006a88f4(int *param_1,long *param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x30;
  long alStack_108 [2];
  undefined4 uStack_f8;
  long alStack_b8 [4];
  int aiStack_98 [8];
  long alStack_78 [2];
  undefined8 uStack_68;
  
  func_0x006aabcc();
  uStack_68 = extraout_x8;
  func_0x006aaea4();
  piVar6 = param_1;
  func_0x006595dc();
  piVar2 = piVar6;
  if ((int)piVar6 != 0) {
    func_0x006aab1c();
    func_0x0068efe0();
    if (((*(ulong *)(piVar6 + 2) & 1) == 0) || (piVar2 = piVar6, func_0x006aaf9c(), !(bool)in_ZR)) {
      func_0x006aabe8(alStack_b8);
      FUN_00690638();
      plVar3 = alStack_108;
      func_0x006aabe8();
      FUN_00690638();
      func_0x006ab12c();
      lVar7 = plVar3[7];
      func_0x006ab12c();
      lVar8 = plVar3[7];
      param_2 = alStack_b8;
      FUN_00696774(piVar6);
      piVar6 = (int *)0x0;
      alStack_108[0] = 0;
      alStack_108[1] = 0;
      uStack_f8 = 0;
      while (in_ZR = alStack_b8[0] == alStack_108[0], !(bool)in_ZR) {
        lVar4 = lVar7;
        FUN_006a91ac(lVar7,aiStack_98);
        lVar5 = lVar8 + 0x58;
        param_2 = alStack_78;
        FUN_006a9294(lVar5);
        func_0x006ab1b8(lVar4 + lVar5 + 2);
        piVar6 = (int *)((long)piVar6 + extraout_x9 + extraout_x8_00);
        FUN_0068fbf0(alStack_b8);
      }
      func_0x006aae24(alStack_108);
      piVar2 = aiStack_98;
      FUN_0069072c();
      goto LAB_006a8dfc;
    }
  }
  if ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 0x53) & 1) == 0) {
      func_0x006aab1c();
      FUN_0068ae9c();
    }
  }
  else {
    func_0x006aab1c();
    FUN_0068af64();
  }
  func_0x006ab134();
  func_0x006aadb8();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x006a8a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00828008)[extraout_x8_01] * 4 + 0x6a8a5c))();
    return piVar2;
  }
  piVar6 = (int *)0x0;
LAB_006a8dfc:
  func_0x006aaaf4(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006aae24(alStack_108);
    func_0x006aae24(alStack_b8);
    func_0x006aac98();
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    iVar1 = (int)*param_2;
    if (iVar1 != 0) {
      FUN_0048b00c(piVar2,0,iVar1);
      *piVar2 = iVar1;
      FUN_0048b2a4(param_2[1],iVar1,*(undefined8 *)(piVar2 + 2));
    }
    return piVar2;
  }
  func_0x006aafbc(piVar6,unaff_x30);
  return piVar6;
}



/* Entry: 006a8e68; end: 006a8e8b;  */

int * FUN_006a8e68(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    FUN_0048b00c(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_0048b2a4(*(undefined8 *)(param_2 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 006a8e8c; end: 006a8eb7;  */

undefined8 FUN_006a8e8c(undefined8 param_1)

{
  FUN_00554ab4(param_1,&UNK_0091545e,0x12);
  return param_1;
}



/* Entry: 006a8eb8; end: 006a8f03;  */

/* WARNING: Possible PIC construction at 0x0068de3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0068de48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0068de6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0068e230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068de70) */
/* WARNING: Removing unreachable block (ram,0x0068de78) */
/* WARNING: Removing unreachable block (ram,0x0068de80) */
/* WARNING: Removing unreachable block (ram,0x0068de4c) */
/* WARNING: Removing unreachable block (ram,0x0068de54) */
/* WARNING: Removing unreachable block (ram,0x0068de5c) */
/* WARNING: Removing unreachable block (ram,0x0068de40) */
/* WARNING: Removing unreachable block (ram,0x0068e234) */
/* WARNING: Removing unreachable block (ram,0x0068e23c) */
/* WARNING: Removing unreachable block (ram,0x0068e248) */
/* WARNING: Removing unreachable block (ram,0x0068e258) */
/* WARNING: Removing unreachable block (ram,0x0068e29c) */
/* WARNING: Removing unreachable block (ram,0x0068e260) */
/* WARNING: Removing unreachable block (ram,0x0068e26c) */
/* WARNING: Removing unreachable block (ram,0x0068e2b4) */
/* WARNING: Removing unreachable block (ram,0x0068e2bc) */
/* WARNING: Removing unreachable block (ram,0x0068e2c4) */
/* WARNING: Removing unreachable block (ram,0x0068e2d8) */

ulong * FUN_006a8eb8(undefined8 *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,
                    ulong param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  code *pcVar14;
  long lVar15;
  ulong *puVar16;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 *unaff_x21;
  ulong *puVar17;
  long *unaff_x22;
  ulong uVar18;
  ulong **unaff_x29;
  undefined8 unaff_x30;
  undefined1 *in_stack_00000010;
  code *in_stack_00000018;
  ulong uStack_c8;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_50;
  ulong *puStack_48;
  
  if ((*(byte *)((long)param_2 + 1) >> 5 & 1) == 0) {
    puVar16 = (ulong *)param_1[2];
    puVar13 = (ulong *)0x0;
    puVar9 = puVar16;
    func_0x00692a1c(puVar16,*param_1);
    if ((bool)in_ZR) {
      func_0x00692d74();
      if ((bool)in_CY) {
        func_0x00692d00();
        puVar17 = puVar13;
        goto LAB_0068dd7c;
      }
      puVar17 = puVar13;
      func_0x00692ad0();
      in_CY = 9 < (uint)puVar9;
      in_ZR = 0;
      if ((uint)puVar9 == 10) {
        if (puVar13 == (ulong *)0x0) {
          puVar13 = (ulong *)puVar16[0xb];
        }
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) != 0) {
          uVar12 = puVar16[5];
          uVar2 = *(undefined4 *)((long)param_2 + 4);
          func_0x006930bc();
          puVar1 = (undefined8 *)((long)unaff_x21 + (ulong)(uint)uVar12);
          puVar8 = puVar1;
          func_0x005339b8(puVar1,uVar2);
          if ((puVar8 != (undefined8 *)0x0) && ((*(byte *)((long)puVar8 + 10) & 1) == 0)) {
            puVar16 = (ulong *)*puVar8;
            if ((*(byte *)((long)puVar8 + 10) >> 4 & 1) != 0) {
              (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
                    /* WARNING: Could not recover jumptable at 0x00686958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*puVar16 + 0x18))(puVar16,puVar13,*puVar1);
              return puVar16;
            }
            return puVar16;
          }
                    /* WARNING: Could not recover jumptable at 0x0068690c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
          return puVar13;
        }
        func_0x00692d18();
        if (puVar9 == (ulong *)0x0) {
LAB_0068dcfc:
          func_0x00692d20();
          FUN_00689b8c();
          puVar9 = (ulong *)0x0;
          if ((ulong *)*puVar16 != (ulong *)0x0) {
            return (ulong *)*puVar16;
          }
        }
        else {
          puVar9 = puVar16;
          func_0x00692d20();
          FUN_00689ae8();
          if (((ulong)puVar9 & 1) != 0) goto LAB_0068dcfc;
        }
        func_0x00692cd0();
        puVar4 = (undefined1 *)register0x00000008;
        param_2 = unaff_x19;
        puVar16 = unaff_x20;
        plVar10 = unaff_x22;
        goto SUB_0068dbac;
      }
    }
    else {
      func_0x00692c5c();
      puVar17 = puVar13;
LAB_0068dd7c:
      func_0x00692c24();
    }
    plVar10 = (long *)*puVar16;
    func_0x00692ee4(plVar10,param_2,&UNK_00913f66);
    puVar4 = &stack0xffffffffffffff90;
    puStack_48 = (ulong *)0x68dd94;
    unaff_x29 = &puStack_50;
    puStack_50 = (ulong *)&stack0xfffffffffffffff0;
    func_0x00692960();
    if ((bool)in_ZR) {
      func_0x00692d74();
      if ((bool)in_CY) {
        func_0x00692d00();
        goto LAB_0068deac;
      }
      func_0x00692a6c();
      if ((int)plVar10 != 10) goto LAB_0068deb0;
      if (puVar17 == (ulong *)0x0) {
        puVar17 = (ulong *)unaff_x21[0xb];
      }
      if ((*(byte *)((long)param_2 + 1) >> 3 & 1) != 0) {
        puVar1 = (undefined8 *)((long)puVar16 + (ulong)*(uint *)(unaff_x21 + 5));
        uVar12 = (ulong)*(uint *)((long)param_2 + 4);
        puVar8 = puVar1;
        FUN_0053572c(puVar1,uVar12,puVar17);
        puVar8[2] = param_2;
        if ((uVar12 & 1) == 0) {
          bVar3 = *(byte *)((long)puVar8 + 10);
          *(byte *)((long)puVar8 + 10) = bVar3 & 0xf0;
          param_2 = (ulong *)*puVar8;
          if ((bVar3 >> 4 & 1) != 0) {
            func_0x00688510();
            func_0x00688404();
                    /* WARNING: Could not recover jumptable at 0x00686a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x28))(param_2,puVar8,*puVar1);
            return param_2;
          }
        }
        else {
          FUN_006538b4();
          *(char *)(puVar8 + 1) = (char)param_2;
          *(undefined1 *)((long)puVar8 + 9) = 0;
          *(undefined1 *)((long)puVar8 + 0xb) = 0;
          func_0x00688510();
          func_0x00688404();
          *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf;
          func_0x006884e4();
          *puVar8 = param_2;
          *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf0;
        }
        return param_2;
      }
      func_0x00692928();
      unaff_x22 = plVar10;
      func_0x00692d18();
      if (unaff_x22 == (long *)0x0) {
        func_0x00692a00();
        FUN_0068aaa4();
LAB_0068de24:
        puVar9 = (ulong *)*plVar10;
        if (puVar9 != (ulong *)0x0) {
          return puVar9;
        }
        func_0x00692c50();
        unaff_x30 = 0x68de70;
SUB_0068dbac:
        *(long **)(puVar4 + -0x30) = plVar10;
        *(undefined8 **)(puVar4 + -0x28) = unaff_x21;
        *(ulong **)(puVar4 + -0x20) = puVar16;
        *(ulong **)(puVar4 + -0x18) = param_2;
        *(ulong ***)(puVar4 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar4 + -8) = unaff_x30;
        func_0x00692d80();
        puVar13 = (ulong *)puVar9[0xb];
        FUN_006994c8();
        if (puVar13 != puVar9) {
          if (((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) &&
             ((*(byte *)(param_2[7] + 0x8c) & 1) == 0)) {
            func_0x00692cd0();
            FUN_0068dc6c();
            if ((((ulong)puVar9 & 1) == 0) && (func_0x00692d18(), puVar9 == (ulong *)0x0)) {
              puVar13 = puVar16 + 1;
              FUN_0069252c(puVar13,param_2);
              puVar9 = (ulong *)0x0;
              if ((ulong *)*puVar13 != (ulong *)0x0) {
                return (ulong *)*puVar13;
              }
            }
          }
          puVar16 = (ulong *)puVar16[0xb];
          func_0x006930bc();
                    /* WARNING: Could not recover jumptable at 0x0068dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*puVar16 + 0x10))(puVar16,puVar9);
          return puVar16;
        }
        puVar9 = (ulong *)param_2[10];
        if (puVar9 != (ulong *)0x0) {
          return puVar9;
        }
        puVar16 = (ulong *)puVar16[0xb];
        func_0x006930bc();
        (**(code **)(*puVar16 + 0x10))(puVar16,puVar9);
        param_2[10] = (ulong)puVar16;
        return puVar16;
      }
      func_0x00692990();
      if (((ulong)unaff_x22 & 1) != 0) goto LAB_0068de24;
      func_0x00692b68();
      func_0x00692a00();
    }
    else {
      func_0x00692c5c();
LAB_0068deac:
      func_0x00692c24();
LAB_0068deb0:
      unaff_x22 = (long *)*unaff_x21;
      func_0x00692ee4(unaff_x22,param_2,&UNK_00913f71);
    }
    puStack_90 = puVar16;
    puStack_88 = param_2;
    func_0x0069294c();
    if (unaff_x22 == (long *)0x0) {
      func_0x00692a00();
      FUN_0068aaa4();
    }
    else {
      func_0x00692a00();
      FUN_0068e05c();
    }
    func_0x00692a00();
    puVar9 = puStack_88;
    puVar16 = puStack_90;
  }
  else {
    uVar12 = *(ulong *)param_1[1];
    uVar18 = ((ulong *)param_1[1])[1];
    uVar5 = uVar18 <= uVar12;
    uVar6 = uVar12 == uVar18;
    if (!(bool)uVar6) {
      return *(ulong **)(uVar12 + (long)(int)param_3 * 8);
    }
    puVar16 = (ulong *)param_1[2];
    puVar9 = (ulong *)*param_1;
    func_0x006929c8();
    if ((bool)uVar6) {
      func_0x006934f0();
      if (!(bool)uVar5 || (bool)uVar6) {
        func_0x00692d0c();
        puVar13 = param_3;
        goto LAB_0068e1bc;
      }
      puVar13 = param_3;
      func_0x00692be0();
      uVar5 = 9 < (uint)puVar16;
      uVar6 = 0;
      unaff_x19 = param_3;
      if ((uint)puVar16 == 10) {
        if ((*(byte *)((long)param_2 + 1) >> 3 & 1) == 0) {
          func_0x00693390();
          if ((int)puVar16 == 0) {
            func_0x00692a5c();
            func_0x00689aac();
          }
          else {
            func_0x00692a5c();
            func_0x00689a70();
            func_0x006967ec();
          }
          func_0x00692ce4();
          return puVar16;
        }
        func_0x00693468();
        func_0x0053a564();
        if (puVar16 == (ulong *)0x0) {
          func_0x0053a214();
          func_0x0053a544();
          func_0x0053a244();
          func_0x0053a53c();
          pcVar14 = FUN_005349b8;
          func_0x0053abec();
          in_stack_00000010 = &stack0xfffffffffffffff0;
          in_stack_00000018 = pcVar14;
          func_0x0053a5d0();
          puVar16[2] = param_5;
          if (((ulong)puVar9 & 1) == 0) {
            puVar9 = (ulong *)*puVar16;
          }
          else {
            *(char *)(puVar16 + 1) = (char)unaff_x22;
            *(undefined1 *)((long)puVar16 + 9) = 1;
            puVar9 = (ulong *)&stack0xffffffffffffffd8;
            func_0x00538630();
            *puVar16 = (ulong)puVar9;
          }
          func_0x0054d168();
          return puVar9;
        }
        func_0x0053a344();
        return puVar16;
      }
    }
    else {
      func_0x00692c5c();
      puVar13 = param_3;
LAB_0068e1bc:
      func_0x00692e58();
    }
    iVar7 = (int)*unaff_x22;
    puVar16 = (ulong *)&UNK_00913fa3;
    func_0x00692da4();
    puStack_50 = param_2;
    puStack_48 = unaff_x19;
    func_0x006929c8();
    if (!(bool)uVar6) {
      func_0x00692c5c();
LAB_0068e300:
      func_0x00692e58();
LAB_0068e304:
      puVar9 = (ulong *)*unaff_x22;
      func_0x00692da4();
      uVar12 = puVar9[1];
      puVar13 = puVar9;
      puStack_90 = puVar16;
      puStack_88 = unaff_x19;
      FUN_0048cf58();
      if ((int)uVar12 < (int)puVar13) {
        uVar12 = puVar9[1];
        *(int *)(puVar9 + 1) = (int)uVar12 + 1;
        if ((*puVar9 & 1) != 0) {
          puVar9 = (ulong *)(*puVar9 + (long)(int)uVar12 * 8 + 7);
        }
        puVar9 = (ulong *)*puVar9;
      }
      else {
        puVar9 = (ulong *)0x0;
      }
      return puVar9;
    }
    func_0x006934f0();
    if (!(bool)uVar5 || (bool)uVar6) {
      func_0x00692d0c();
      goto LAB_0068e300;
    }
    func_0x00692e6c();
    unaff_x19 = puVar9;
    if (iVar7 != 10) goto LAB_0068e304;
    if (puVar13 == (ulong *)0x0) {
      puVar13 = (ulong *)unaff_x22[0xb];
    }
    if ((*(byte *)((long)puVar16 + 1) >> 3 & 1) != 0) {
      puVar9 = (ulong *)((long)puVar9 + (ulong)*(uint *)(unaff_x22 + 5));
      FUN_00686ad0(puVar9,puVar16,puVar13);
      puVar16 = (ulong *)*puVar9;
      FUN_00686c10();
      if (puVar16 == (ulong *)0x0) {
        puVar13 = (ulong *)*puVar9;
        if ((int)puVar13[1] == 0) {
          func_0x00688510();
          func_0x00688404();
          if (puVar16 == (ulong *)0x0) {
            FUN_00533884(&puStack_90,&UNK_0091353a);
            FUN_00776794(&stack0xffffffffffffff80,&UNK_009134fc,0xeb,puStack_90,puStack_88);
            puVar9 = (ulong *)&stack0xffffffffffffff80;
            FUN_005558a0();
            uVar12 = puVar9[1];
            puVar16 = puVar9;
            FUN_0048cf58();
            if ((int)uVar12 < (int)puVar16) {
              uVar12 = puVar9[1];
              *(int *)(puVar9 + 1) = (int)uVar12 + 1;
              if ((*puVar9 & 1) != 0) {
                puVar9 = (ulong *)(*puVar9 + (long)(int)uVar12 * 8 + 7);
              }
              puVar9 = (ulong *)*puVar9;
            }
            else {
              puVar9 = (ulong *)0x0;
            }
            return puVar9;
          }
        }
        else {
          if ((*puVar13 & 1) != 0) {
            puVar13 = (ulong *)(*puVar13 + 7);
          }
          puVar16 = (ulong *)*puVar13;
        }
        func_0x006884e4();
        FUN_00687fdc(*puVar9,puVar16);
      }
      return puVar16;
    }
    func_0x00693390();
  }
  puStack_90 = puVar16;
  puStack_88 = puVar9;
  func_0x00692914();
  if (unaff_x22 != (long *)0x0) {
    func_0x00692a84();
    return (ulong *)((long)puVar9 + ((ulong)unaff_x22 & 0xffffffff));
  }
  func_0x00692a2c();
  puVar9 = puStack_88;
  func_0x006928e4();
  if ((int)unaff_x22 == 0) {
    func_0x00692a78();
    return (ulong *)((long)puVar9 + ((ulong)unaff_x22 & 0xffffffff));
  }
  func_0x00692a2c();
  puVar16 = puStack_88;
  puVar9 = puStack_90;
  func_0x00692d98();
  plVar10 = unaff_x22;
  func_0x00692c68();
  FUN_0068eafc();
  uVar12 = (ulong)*(uint *)((long)unaff_x22 + 0x44);
  lVar15 = *(long *)((long)puVar9 + uVar12);
  if (lVar15 != *(long *)(unaff_x22[1] + uVar12)) goto LAB_0068ea64;
  uVar18 = (ulong)*(uint *)(unaff_x22 + 9);
  uVar11 = puVar9[1];
  if ((uVar11 & 1) == 0) {
    if (uVar11 == 0) goto LAB_0068ea44;
LAB_0068ea28:
    FUN_0053ff40(uVar11,uVar18,8);
    uVar18 = uVar11;
  }
  else {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
    if (uVar11 != 0) goto LAB_0068ea28;
LAB_0068ea44:
    __Znwm();
  }
  *(ulong *)((long)puVar9 + uVar12) = uVar18;
  _memcpy();
  lVar15 = *(long *)((long)puVar9 + (ulong)*(uint *)((long)unaff_x22 + 0x44));
LAB_0068ea64:
  puVar13 = (ulong *)(lVar15 + ((ulong)plVar10 & 0xffffffff));
  puVar17 = puVar13;
  if ((*(byte *)((long)puVar16 + 1) >> 5 & 1) != 0) {
    uVar12 = puVar9[1];
    if ((uVar12 & 1) != 0) {
      uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
    }
    puVar17 = (ulong *)*puVar13;
    if (puVar17 == (ulong *)&UNK_00810e00) {
      func_0x00692c1c();
      iVar7 = (int)puVar17;
      uStack_c8 = uVar12;
      if ((iVar7 < 9) || ((func_0x00692c1c(), iVar7 == 9 && (func_0x00693264(), iVar7 == 1)))) {
        puVar17 = &uStack_c8;
        FUN_00538194();
      }
      else {
        puVar17 = &uStack_c8;
        func_0x00544ca4();
      }
      *puVar13 = (ulong)puVar17;
    }
  }
  return puVar17;
}



/* Entry: 006a8f04; end: 006a8ff7;  */

long FUN_006a8f04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = param_1;
  FUN_00699298();
  FUN_00699298(param_1);
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x53) == '\x01') {
    for (lVar3 = 0; lVar3 < *(int *)(lVar1 + 4); lVar3 = lVar3 + 1) {
      func_0x006ab158();
    }
  }
  else {
    func_0x006aacd0();
    FUN_0068b260();
  }
  lVar3 = 0;
  for (plVar4 = (long *)0x0; plVar4 != (long *)0x0; plVar4 = plVar4 + 1) {
    lVar2 = *plVar4;
    FUN_006a8ff8(lVar2,param_1);
    lVar3 = lVar2 + lVar3;
  }
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x50) == '\x01') {
    func_0x006aacd0();
    FUN_006895b0();
    FUN_006a5e3c();
  }
  else {
    func_0x006aacd0();
    FUN_006895b0();
    FUN_006a5cc8();
  }
  func_0x006aac8c();
  return param_1 + lVar3;
}



/* Entry: 006a8ff8; end: 006a91ab;  */

uint * FUN_006a8ff8(uint *param_1,uint *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int extraout_w9;
  ulong uVar6;
  
  puVar4 = param_1;
  puVar3 = param_2;
  func_0x006aaea4();
  uVar5 = (uint)*(byte *)((long)param_1 + 1);
  if (((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) &&
     (in_ZR = 0, *(char *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 0x50) == '\x01')) {
    puVar4 = param_1;
    puVar2 = puVar3;
    FUN_00656c60();
    uVar5 = (uint)*(byte *)((long)param_1 + 1);
    in_ZR = (int)puVar4 == 10;
    if (((bool)in_ZR) && ((*(byte *)((long)param_1 + 1) >> 5 & 1) == 0)) {
      FUN_00699298(param_2);
      uVar5 = param_1[1];
      func_0x006aaf10(puVar2);
      func_0x006aaf08();
      func_0x006aad78();
      return (uint *)((long)puVar2 +
                     (ulong)((int)LZCOUNT((int)puVar2) * -9 + 0x160U >> 6) +
                     (ulong)((int)LZCOUNT(uVar5) * -9 + 0x160U >> 6) + 4);
    }
  }
  if ((uVar5 >> 5 & 1) == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 0x53) & 1) != 0) {
      uVar6 = 1;
      goto LAB_006a911c;
    }
    func_0x006aaf10();
    FUN_0068ae9c();
    puVar4 = puVar3;
  }
  else {
    puVar4 = param_1;
    func_0x006595dc();
    if ((int)puVar4 != 0) {
      puVar4 = puVar3;
      func_0x006aaf10();
      func_0x0068efe0();
      if (((*(ulong *)(puVar4 + 2) & 1) == 0) || (func_0x006aaf9c(), !(bool)in_ZR)) {
        (*(code *)**(undefined8 **)puVar4)();
        uVar6 = (ulong)*puVar4;
        goto LAB_006a911c;
      }
    }
    func_0x006aaf10();
    FUN_0068af64();
    puVar4 = puVar3;
  }
  uVar6 = (ulong)puVar4 & 0xffffffff;
LAB_006a911c:
  func_0x006ab008();
  FUN_006a88f4();
  puVar3 = param_1;
  FUN_00659660();
  if ((int)puVar3 == 0) {
    uVar5 = param_1[1];
    FUN_006538b4(param_1);
    iVar1 = (int)param_1;
    func_0x006aac50(LZCOUNT(uVar5 << 3));
    puVar4 = (uint *)((long)puVar4 +
                     ((extraout_x8_00 >> 6 & 0x3ffffff) << (iVar1 == 10) & 0xffffffff) * uVar6);
  }
  else if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    func_0x006aac50(LZCOUNT(param_1[1] << 3));
    puVar4 = (uint *)((long)puVar4 +
                     (extraout_x8 >> 6 & 0x3ffffff) +
                     (ulong)((uint)(extraout_w9 + (int)LZCOUNT((int)puVar4) * -9) >> 6));
  }
  return puVar4;
}



/* Entry: 006a91ac; end: 006a9293;  */

long FUN_006a91ac(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  
  FUN_006538b4();
  func_0x006aadb8();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar1 = 4;
                    /* WARNING: Could not recover jumptable at 0x006a91e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0082801a)[extraout_x8] * 4 + 0x6a91e8))(4);
    return lVar1;
  }
  func_0x006aaca0();
  FUN_0077670c();
  func_0x006aae94();
  func_0x006ab0d0();
  FUN_006538b4();
  func_0x006aadb8();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar1 = 4;
                    /* WARNING: Could not recover jumptable at 0x006a92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0082802c)[extraout_x8_00] * 4 + 0x6a92d0))(4);
    return lVar1;
  }
  func_0x006aaca0();
  FUN_0077670c();
  func_0x006aae94();
  func_0x006ab0d0();
  func_0x006aad78();
  func_0x006aac50(LZCOUNT((int)param_1));
  return param_1 + (extraout_x8_01 >> 6 & 0x3ffffff);
}



/* Entry: 006a9294; end: 006a93c7;  */

long FUN_006a9294(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  
  FUN_006538b4();
  func_0x006aadb8();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar1 = 4;
                    /* WARNING: Could not recover jumptable at 0x006a92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0082802c)[extraout_x8] * 4 + 0x6a92d0))(4);
    return lVar1;
  }
  func_0x006aaca0();
  FUN_0077670c();
  func_0x006aae94();
  func_0x006ab0d0();
  func_0x006aad78();
  func_0x006aac50(LZCOUNT((int)param_1));
  return param_1 + (extraout_x8_00 >> 6 & 0x3ffffff);
}



/* Entry: 006a93c8; end: 006a93ff;  */

long FUN_006a93c8(long param_1)

{
  ulong extraout_x8;
  
  func_0x006aad78();
  func_0x006aac50(LZCOUNT((int)param_1));
  return param_1 + (extraout_x8 >> 6 & 0x3ffffff);
}



/* Entry: 006a9400; end: 006a948b;  */

long FUN_006a9400(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_0069072c();
    }
  }
  return param_1;
}



/* Entry: 006a948c; end: 006a9aef;  */

/* WARNING: Possible PIC construction at 0x006a9d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006a9d14) */
/* WARNING: Removing unreachable block (ram,0x006a9d20) */
/* WARNING: Removing unreachable block (ram,0x006a9d38) */
/* WARNING: Removing unreachable block (ram,0x006a9d4c) */
/* WARNING: Removing unreachable block (ram,0x006a9d74) */
/* WARNING: Removing unreachable block (ram,0x006a9d5c) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_006a948c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar21;
  long *unaff_x23;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *******unaff_x29;
  long *unaff_x30;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 *******pppppppuStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  pplVar4 = &plStack_b0;
  pplVar5 = &plStack_b0;
  plVar13 = param_1;
  plVar17 = param_3;
  func_0x006aabcc();
  uStack_68 = extraout_x8;
LAB_006a94c4:
  plVar18 = param_2 + -4;
  plStack_b0 = param_2 + -8;
  plVar23 = param_2 + -0xc;
  plVar15 = param_1;
LAB_006a94d8:
  param_1 = plVar15;
  uVar26 = (long)param_2 - (long)param_1 >> 5;
  uVar9 = uVar26 == 5;
  plVar19 = param_2;
  plVar15 = param_1;
  pppppppuStack_c0 = unaff_x29;
  switch(uVar26) {
  case 0:
  case 1:
    goto LAB_006a9a4c;
  case 2:
    plVar13 = plVar18;
    func_0x006aace4();
    if ((int)plVar13 == 0) goto LAB_006a9a4c;
    func_0x006aaaf4(uStack_68);
    if ((bool)uVar9) {
      func_0x006aae78(param_1,plVar18);
      pcStack_b8 = (code *)unaff_x30;
      goto code_r0x006a9f28;
    }
    goto LAB_006a9a6c;
  case 3:
    func_0x006aaaf4(uStack_68);
    if ((bool)uVar9) {
      plVar13 = param_1 + 4;
      plVar17 = plVar18;
      func_0x006aae78();
      pplVar6 = &plStack_e0;
      plVar19 = plVar13;
      plStack_e0 = param_3;
      plStack_d8 = plVar18;
      plStack_d0 = param_2;
      plStack_c8 = param_1;
      pcStack_b8 = (code *)unaff_x30;
      func_0x006aacdc();
      plVar18 = plVar19;
      func_0x006aacd0();
      FUN_006a9af0();
      if (((ulong)plVar19 & 1) == 0) {
        if ((int)plVar18 == 0) {
          return plVar18;
        }
        func_0x006ab008();
        FUN_006a9f28();
        func_0x006aacdc();
        iVar12 = (int)plVar13;
        plVar15 = plVar13;
joined_r0x006a9c48:
        pplVar6 = &plStack_e0;
        if (iVar12 == 0) {
          return plVar15;
        }
      }
      else if ((int)plVar18 == 0) {
        FUN_006a9f28(plVar15,plVar13);
        func_0x006aacd0();
        FUN_006a9af0();
        iVar12 = (int)plVar15;
        goto joined_r0x006a9c48;
      }
      goto LAB_006ab080;
    }
    goto LAB_006a9a6c;
  case 4:
    func_0x006aaaf4(uStack_68);
    if (!(bool)uVar9) goto LAB_006a9a6c;
    func_0x006ab1ac();
    func_0x006aae78();
    plVar19 = plVar17;
    break;
  case 5:
    func_0x006aaaf4(uStack_68);
    if (!(bool)uVar9) goto LAB_006a9a6c;
    func_0x006ab1ac();
    plVar13 = param_1 + 0xc;
    plVar14 = plVar18;
    func_0x006aae78();
    pplVar4 = &plStack_f0;
    unaff_x29 = &pppppppuStack_c0;
    plVar19 = plVar17;
    plStack_f0 = plVar23;
    plStack_e8 = unaff_x23;
    plStack_e0 = param_3;
    plStack_d8 = plVar18;
    plStack_d0 = param_2;
    plStack_c8 = param_1;
    func_0x006aaff0();
    unaff_x30 = (long *)0x6a9d14;
    plVar18 = plVar17;
    param_3 = plVar13;
    unaff_x23 = plVar14;
    break;
  default:
    goto code_r0x006a94ec;
  }
  pplVar6 = (long **)((long)pplVar4 + -0x30);
  *(long **)((long)pplVar4 + -0x30) = param_3;
  *(long **)((long)pplVar4 + -0x28) = plVar18;
  *(long **)((long)pplVar4 + -0x20) = param_2;
  *(long **)((long)pplVar4 + -0x18) = param_1;
  *(undefined8 ********)((long)pplVar4 + -0x10) = unaff_x29;
  *(long **)((long)pplVar4 + -8) = unaff_x30;
  plVar17 = plVar19;
  func_0x006aaff0();
  FUN_006a9bf4();
  func_0x006aabdc();
  FUN_006a9af0();
  if ((int)plVar15 != 0) {
    func_0x006aaec0();
    FUN_006a9f28();
    func_0x006aace4();
    plVar15 = plVar19;
    if ((int)plVar19 != 0) {
      func_0x006ab144();
      func_0x006ab008();
      FUN_006a9af0();
      plVar15 = plVar19;
      if ((int)plVar19 != 0) {
        func_0x006aacd0();
        pppppppuStack_c0 = *(undefined8 ********)((long)pplVar4 + -0x10);
        pcStack_b8 = *(code **)((long)pplVar4 + -8);
LAB_006ab080:
        param_2 = pplVar6[2];
        param_1 = pplVar6[3];
        pplVar5 = pplVar6 + 6;
        param_3 = *pplVar6;
        plVar18 = pplVar6[1];
        unaff_x30 = plVar17;
code_r0x006a9f28:
        *(long **)((long)pplVar5 + -0x20) = param_2;
        *(long **)((long)pplVar5 + -0x18) = param_1;
        *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuStack_c0;
        *(code **)((long)pplVar5 + -8) = pcStack_b8;
        func_0x006aaff0();
        func_0x006aabcc();
        *(undefined8 *)((long)pplVar5 + -0x28) = extraout_x8_00;
        plVar17 = (long *)((long)pplVar5 + -0x48);
        plVar13 = param_2;
        FUN_00698c0c();
        func_0x006aacd0();
        FUN_006987e8();
        func_0x006aae6c();
        FUN_006987e8();
        func_0x006aacf4();
        func_0x006aaaf4(*(undefined8 *)((long)pplVar5 + -0x28));
        if ((bool)uVar9) {
          return plVar17;
        }
        ___stack_chk_fail();
        plVar15 = plVar17;
        func_0x006aac98();
        *(ulong *)((long)pplVar5 + -0xa0) = uVar26;
        *(ulong *)((long)pplVar5 + -0x98) = param_4;
        *(long **)((long)pplVar5 + -0x90) = plVar23;
        *(long **)((long)pplVar5 + -0x88) = unaff_x23;
        *(long **)((long)pplVar5 + -0x80) = param_3;
        *(long **)((long)pplVar5 + -0x78) = plVar18;
        *(long **)((long)pplVar5 + -0x70) = param_2;
        *(long **)((long)pplVar5 + -0x68) = plVar17;
        *(undefined1 **)((long)pplVar5 + -0x60) = (undefined1 *)((long)pplVar5 + -0x10);
        *(code **)((long)pplVar5 + -0x58) = FUN_006a9f98;
        func_0x006aabcc();
        *(undefined8 *)((long)pplVar5 + -0xa8) = extraout_x8_01;
        uVar9 = (undefined1 *)((long)plVar13 - 2U) == (undefined1 *)0x0;
        plVar17 = plVar15;
        if ((long)plVar13 < 2) goto LAB_006aa098;
        plVar23 = (long *)((long)plVar13 - 2U >> 1);
        plVar18 = (long *)((long)unaff_x30 - (long)plVar15 >> 5);
        uVar9 = plVar23 == plVar18;
        param_2 = plVar15;
        if ((long)plVar23 < (long)plVar18) goto LAB_006aa098;
        lVar27 = (long)unaff_x30 - (long)plVar15 >> 4;
        plVar17 = (long *)(lVar27 + 1);
        plVar19 = plVar15 + (long)plVar17 * 4;
        plVar18 = (long *)(lVar27 + 2);
        uVar9 = plVar18 == plVar13;
        plVar14 = plVar19;
        plVar25 = plVar17;
        if ((long)plVar18 < (long)plVar13) {
          plVar14 = plVar15;
          func_0x006ab040();
          uVar9 = (int)plVar14 == 0;
          plVar14 = plVar19 + 4;
          plVar25 = plVar18;
          if ((bool)uVar9) {
            plVar14 = plVar19;
            plVar25 = plVar17;
          }
        }
        plVar17 = plVar14;
        func_0x006aaeb8();
        if (((ulong)plVar17 & 1) != 0) goto LAB_006aa098;
        FUN_00698c0c((undefined1 *)((long)pplVar5 + -200),unaff_x30);
        goto LAB_006aa024;
      }
    }
  }
  return plVar15;
code_r0x006a94ec:
  if ((long)uVar26 < 0x18) {
    uVar9 = param_1 == param_2;
    if ((param_4 & 1) == 0) {
      if (!(bool)uVar9) {
        while( true ) {
          plVar17 = param_1;
          param_1 = plVar17 + 4;
          uVar9 = 1;
          if (param_1 == param_2) break;
          plVar13 = param_1;
          func_0x006aacdc();
          if ((int)plVar13 != 0) {
            func_0x006aad10();
            do {
              plVar13 = plVar17;
              FUN_006987e8(plVar13 + 4,plVar13);
              uVar26 = 0;
              func_0x006aacdc();
              plVar17 = plVar13 + -4;
            } while ((uVar26 & 1) != 0);
            FUN_006987e8(plVar13,auStack_88);
            func_0x006aacfc();
          }
        }
      }
      goto LAB_006a9a4c;
    }
    if ((bool)uVar9) goto LAB_006a9a4c;
    lVar27 = 0;
    plVar17 = param_1;
    goto LAB_006a9838;
  }
  if (param_3 == (long *)0x0) {
    uVar9 = 1;
    if (param_1 == param_2) goto LAB_006a9a4c;
    uVar21 = uVar26 - 2 >> 1;
    plVar17 = param_1 + uVar21 * 4;
    do {
      plVar13 = param_1;
      FUN_006a9f98(param_1,uVar26,plVar17);
      uVar21 = uVar21 - 1;
      plVar17 = plVar17 + -4;
    } while (-1 < (long)uVar21);
    do {
      uVar9 = uVar26 - 2 == 0;
      plVar19 = param_2;
      if ((long)uVar26 < 2) goto LAB_006a9a4c;
      puVar16 = auStack_a8;
      FUN_00698c0c(puVar16,param_1);
      plVar17 = param_1;
      uVar21 = 0;
      do {
        uVar2 = uVar21 << 1 | 1;
        uVar1 = uVar21 * 2 + 2;
        plVar13 = plVar17 + uVar21 * 4 + 4;
        uVar24 = uVar2;
        if ((long)uVar1 < (long)uVar26) {
          func_0x006ab040();
          plVar13 = plVar17 + uVar21 * 4 + 8;
          uVar24 = uVar1;
          if ((int)puVar16 == 0) {
            plVar13 = plVar17 + uVar21 * 4 + 4;
            uVar24 = uVar2;
          }
        }
        func_0x006aabdc();
        FUN_006987e8();
        plVar17 = plVar13;
        uVar21 = uVar24;
      } while ((long)uVar24 <= (long)(uVar26 - 2 >> 1));
      param_2 = param_2 + -4;
      if (plVar13 == param_2) {
        FUN_006987e8(plVar13,auStack_a8);
      }
      else {
        FUN_006987e8(plVar13,param_2);
        plVar17 = param_2;
        FUN_006987e8(param_2,auStack_a8);
        lVar27 = (long)((long)plVar13 + (0x20 - (long)param_1)) >> 5;
        plVar13 = plVar17;
        if (1 < lVar27) {
          uVar21 = lVar27 - 2U >> 1;
          func_0x006aabdc();
          FUN_006a9af0();
          plVar13 = plVar17;
          if ((int)plVar17 != 0) {
            func_0x006ab014();
            plVar17 = param_1 + uVar21 * 4;
            do {
              plVar13 = plVar17;
              func_0x006aaec0();
              FUN_006987e8();
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1 >> 1;
              plVar17 = param_1 + uVar21 * 4;
              plVar15 = plVar17;
              FUN_006a9af0(plVar17,auStack_88);
            } while (((ulong)plVar15 & 1) != 0);
            FUN_006987e8(plVar13,auStack_88);
            func_0x006aacfc();
          }
        }
      }
      func_0x006aacf4();
      uVar26 = uVar26 - 1;
    } while( true );
  }
  plVar13 = param_1 + (uVar26 >> 1) * 4;
  if (uVar26 < 0x81) {
    plVar17 = plVar18;
    FUN_006a9bf4(plVar13,param_1);
  }
  else {
    func_0x006aafac();
    FUN_006a9bf4();
    FUN_006a9bf4(param_1 + 4,plVar13 + -4,plStack_b0);
    FUN_006a9bf4(param_1 + 8,plVar13 + 4,plVar23);
    plVar17 = plVar13 + 4;
    FUN_006a9bf4(plVar13 + -4,plVar13);
    FUN_006a9f28(param_1,plVar13);
  }
  param_3 = (long *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    plVar13 = param_1 + -4;
    func_0x006aace4();
    if (((ulong)plVar13 & 1) == 0) {
      func_0x006aad10();
      puVar16 = auStack_88;
      func_0x006aacdc();
      if (((ulong)puVar16 & 1) == 0) {
        do {
          plVar15 = plVar15 + 4;
          if (param_2 <= plVar15) break;
          func_0x006aad04();
        } while ((int)puVar16 == 0);
      }
      else {
        do {
          plVar15 = plVar15 + 4;
          func_0x006aad04();
        } while (((ulong)puVar16 & 1) == 0);
      }
      plVar13 = param_2;
      if (plVar15 < param_2) {
        do {
          plVar13 = plVar13 + -4;
          func_0x006ab020();
        } while (((ulong)puVar16 & 1) != 0);
      }
      while (plVar15 < plVar13) {
        plVar19 = plVar15;
        FUN_006a9f28(plVar15,plVar13);
        do {
          plVar15 = plVar15 + 4;
          func_0x006aad04();
        } while ((int)plVar19 == 0);
        do {
          plVar13 = plVar13 + -4;
          func_0x006ab020();
        } while (((ulong)plVar19 & 1) != 0);
      }
      plVar13 = plVar15 + -4;
      if (param_1 != plVar13) {
        FUN_006987e8(param_1,plVar13);
      }
      FUN_006987e8(plVar13,auStack_88);
      func_0x006aacfc();
      param_4 = 0;
      goto LAB_006a94d8;
    }
  }
  func_0x006aad10();
  lVar27 = 0;
  do {
    puVar16 = (undefined1 *)((long)param_1 + lVar27 + 0x20);
    FUN_006a9af0(puVar16,auStack_88);
    lVar27 = lVar27 + 0x20;
  } while (((ulong)puVar16 & 1) != 0);
  unaff_x23 = (long *)((long)param_1 + lVar27);
  plVar13 = param_2;
  plVar15 = unaff_x23;
  if (lVar27 == 0x20) {
    do {
      plVar14 = plVar13;
      if (plVar13 <= unaff_x23) break;
      plVar13 = plVar13 + -4;
      func_0x006ab0f0();
      plVar14 = plVar13;
    } while (((ulong)puVar16 & 1) == 0);
  }
  else {
    do {
      plVar13 = plVar13 + -4;
      func_0x006ab0f0();
      plVar14 = plVar13;
    } while ((int)puVar16 == 0);
  }
  while (plVar15 < plVar13) {
    FUN_006a9f28(plVar15,plVar13);
    do {
      plVar15 = plVar15 + 4;
      plVar19 = plVar15;
      FUN_006a9af0(plVar15,auStack_88);
    } while (((ulong)plVar19 & 1) != 0);
    do {
      plVar13 = plVar13 + -4;
      plVar19 = plVar13;
      FUN_006a9af0(plVar13,auStack_88);
    } while (((ulong)plVar19 & 1) == 0);
  }
  plVar19 = plVar15 + -4;
  if (param_1 != plVar19) {
    FUN_006987e8(param_1,plVar19);
  }
  FUN_006987e8(plVar19,auStack_88);
  func_0x006aacfc();
  uVar9 = unaff_x23 == plVar14;
  if (unaff_x23 < plVar14) goto LAB_006a966c;
  plVar14 = param_1;
  FUN_006a9d88(param_1,plVar19);
  plVar13 = plVar15;
  FUN_006a9d88(plVar15,param_2);
  if ((int)plVar13 == 0) goto code_r0x006a9668;
  param_2 = plVar19;
  if (((ulong)plVar14 & 1) != 0) goto LAB_006a9a4c;
  goto LAB_006a94c4;
LAB_006a9838:
  plVar17 = plVar17 + 4;
  uVar9 = 1;
  if (plVar17 == param_2) goto LAB_006a9a4c;
  plVar13 = plVar17;
  FUN_006a9af0();
  if ((int)plVar13 != 0) {
    func_0x006ab014();
    lVar20 = lVar27;
    do {
      lVar22 = lVar20;
      FUN_006987e8((undefined1 *)((long)param_1 + lVar22 + 0x20));
      plVar13 = param_1;
      if (lVar22 == 0) goto LAB_006a9890;
      puVar16 = auStack_88;
      FUN_006a9af0(puVar16,(undefined1 *)((long)param_1 + lVar22 + -0x20));
      lVar20 = lVar22 + -0x20;
    } while (((ulong)puVar16 & 1) != 0);
    plVar13 = (long *)((long)param_1 + lVar22);
LAB_006a9890:
    FUN_006987e8(plVar13,auStack_88);
    func_0x006aacfc();
  }
  lVar27 = lVar27 + 0x20;
  goto LAB_006a9838;
code_r0x006a9668:
  if (((ulong)plVar14 & 1) == 0) {
LAB_006a966c:
    plVar17 = param_3;
    FUN_006a948c(param_1,plVar19,param_3,(uint)param_4 & 1);
    param_4 = 0;
    plVar13 = param_1;
  }
  goto LAB_006a94d8;
  while( true ) {
    plVar3 = (long *)((long)plVar25 << 1 | 1);
    plVar19 = plVar15 + (long)plVar3 * 4;
    plVar18 = (long *)((long)plVar25 * 2 + 2);
    uVar9 = plVar18 == plVar13;
    plVar14 = plVar19;
    plVar25 = plVar3;
    if ((long)plVar18 < (long)plVar13) {
      func_0x006aaeb8();
      uVar9 = (int)plVar14 == 0;
      plVar14 = plVar19 + 4;
      plVar25 = plVar18;
      if ((bool)uVar9) {
        plVar14 = plVar19;
        plVar25 = plVar3;
      }
    }
    plVar18 = plVar14;
    FUN_006a9af0(plVar14,(undefined1 *)((long)pplVar5 + -200));
    if ((int)plVar18 != 0) break;
LAB_006aa024:
    plVar17 = plVar14;
    func_0x006aabdc();
    FUN_006987e8();
    uVar9 = plVar23 == plVar25;
    if ((long)plVar23 < (long)plVar25) break;
  }
  FUN_006987e8(plVar17,(undefined1 *)((long)pplVar5 + -200));
  func_0x006aacf4();
LAB_006aa098:
  func_0x006aaaf4(*(undefined8 *)((long)pplVar5 + -0xa8));
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    plVar13 = plVar17;
    func_0x006aacf4();
    func_0x006aac98();
    *(long **)((long)pplVar5 + -0xf0) = param_2;
    *(long **)((long)pplVar5 + -0xe8) = plVar17;
    *(undefined1 **)((long)pplVar5 + -0xe0) = (undefined1 *)((long)pplVar5 + -0x60);
    *(code **)((long)pplVar5 + -0xd8) = FUN_006aa0dc;
    lVar27 = *plVar13;
    if (lVar27 != 0) {
      lVar20 = plVar13[1];
      while (lVar20 != lVar27) {
        lVar20 = lVar20 + -0x20;
        FUN_0069072c();
      }
      plVar13[1] = lVar27;
      __ZdlPv(*plVar13);
    }
    return plVar13;
  }
  return plVar17;
LAB_006a9a4c:
  func_0x006aaaf4(uStack_68);
  param_2 = plVar19;
  if ((bool)uVar9) {
    func_0x006aae78(unaff_x30);
    return unaff_x30;
  }
LAB_006a9a6c:
  ___stack_chk_fail();
  uVar10 = SUB84(auStack_88,0);
  FUN_0069072c();
  func_0x006aac98();
  pcStack_b8 = FUN_006a9af0;
  plStack_d0 = param_2;
  plStack_c8 = plVar13;
  pppppppuStack_c0 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x006aaff0();
  FUN_00695ff8();
  plVar17 = (long *)((long)&MACH_HEADER.magic + 1);
  switch(uVar10) {
  case 1:
    FUN_00696148(param_2);
    iVar11 = (int)param_2;
    iVar12 = iVar11;
    func_0x006ab13c();
    bVar7 = SBORROW4(iVar11,iVar12);
    bVar8 = iVar11 - iVar12 < 0;
    break;
  case 2:
    FUN_006960d0(param_2);
    plVar17 = param_2;
    func_0x006ab150();
    bVar7 = SBORROW8((long)param_2,(long)plVar17);
    bVar8 = (long)param_2 - (long)plVar17 < 0;
    break;
  case 3:
    FUN_00696238(param_2);
    FUN_00696238(plVar13);
    bVar8 = (uint)plVar13 <= (uint)param_2;
    goto code_r0x006a9bc4;
  case 4:
    FUN_006961c0(param_2);
    FUN_006961c0(plVar13);
    bVar8 = plVar13 <= param_2;
code_r0x006a9bc4:
    return (long *)(ulong)!bVar8;
  default:
    goto LAB_006a9be8;
  case 7:
    FUN_006962b0(param_2);
    FUN_006962b0(plVar13);
    return (long *)(ulong)((uint)plVar13 & ((uint)param_2 ^ 1));
  case 9:
    FUN_00696058(param_2);
    FUN_00696058(plVar13);
    func_0x004278bc(param_2,plVar13);
    bVar8 = (char)param_2 < '\0';
    bVar7 = false;
  }
  plVar17 = (long *)(ulong)(bVar8 != bVar7);
LAB_006a9be8:
  return plVar17;
}



/* Entry: 006a9af0; end: 006a9bf3;  */

uint FUN_006a9af0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x19;
  ulong unaff_x20;
  
  func_0x006aaff0();
  FUN_00695ff8();
  uVar5 = 1;
  switch(param_1) {
  case 1:
    FUN_00696148();
    iVar3 = (int)unaff_x20;
    iVar4 = iVar3;
    func_0x006ab13c();
    bVar1 = SBORROW4(iVar3,iVar4);
    bVar2 = iVar3 - iVar4 < 0;
    break;
  case 2:
    FUN_006960d0();
    uVar6 = unaff_x20;
    func_0x006ab150();
    bVar1 = SBORROW8(unaff_x20,uVar6);
    bVar2 = (long)(unaff_x20 - uVar6) < 0;
    break;
  case 3:
    FUN_00696238();
    FUN_00696238();
    bVar2 = (uint)unaff_x19 <= (uint)unaff_x20;
    goto code_r0x006a9bc4;
  case 4:
    FUN_006961c0();
    FUN_006961c0();
    bVar2 = unaff_x19 <= unaff_x20;
code_r0x006a9bc4:
    return (uint)!bVar2;
  default:
    goto LAB_006a9be8;
  case 7:
    FUN_006962b0();
    FUN_006962b0();
    return (uint)unaff_x19 & ((uint)unaff_x20 ^ 1);
  case 9:
    FUN_00696058();
    FUN_00696058();
    func_0x004278bc(unaff_x20,unaff_x19);
    bVar2 = (char)unaff_x20 < '\0';
    bVar1 = false;
  }
  uVar5 = (uint)(bVar2 != bVar1);
LAB_006a9be8:
  return uVar5;
}



/* Entry: 006a9bf4; end: 006a9ceb;  */

long * FUN_006a9bf4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  long alStack_48 [3];
  
  plVar4 = param_2;
  plVar7 = param_3;
  func_0x006aacdc();
  plVar5 = plVar4;
  func_0x006aacd0();
  FUN_006a9af0();
  plVar6 = param_1;
  if (((ulong)plVar4 & 1) != 0) {
    if ((int)plVar5 == 0) {
      FUN_006a9f28(param_1,param_2);
      func_0x006aacd0();
      FUN_006a9af0();
      plVar6 = param_2;
      if ((int)param_1 == 0) {
        return param_1;
      }
    }
LAB_006a9c78:
    func_0x006aaff0(plVar6,param_3);
    func_0x006aabcc();
    plVar4 = alStack_48;
    FUN_00698c0c();
    func_0x006aacd0();
    FUN_006987e8();
    func_0x006aae6c();
    FUN_006987e8();
    func_0x006aacf4();
    func_0x006aaaf4(extraout_x8);
    if ((bool)in_ZR) {
      return plVar4;
    }
    ___stack_chk_fail();
    func_0x006aac98();
    func_0x006aabcc();
    uVar3 = unaff_x20 - 2 == 0;
    plVar5 = plVar4;
    uStack_a8 = extraout_x8_00;
    if (1 < (long)unaff_x20) {
      uVar10 = unaff_x20 - 2 >> 1;
      uVar1 = (long)plVar7 - (long)plVar4 >> 5;
      uVar3 = uVar10 == uVar1;
      if ((long)uVar1 <= (long)uVar10) {
        lVar9 = (long)plVar7 - (long)plVar4 >> 4;
        uVar1 = lVar9 + 1;
        plVar5 = plVar4 + uVar1 * 4;
        uVar2 = lVar9 + 2;
        uVar3 = uVar2 == unaff_x20;
        plVar6 = plVar5;
        uVar11 = uVar1;
        if ((long)uVar2 < (long)unaff_x20) {
          plVar6 = plVar4;
          func_0x006ab040();
          uVar3 = (int)plVar6 == 0;
          plVar6 = plVar5 + 4;
          uVar11 = uVar2;
          if ((bool)uVar3) {
            plVar6 = plVar5;
            uVar11 = uVar1;
          }
        }
        plVar5 = plVar6;
        func_0x006aaeb8();
        if (((ulong)plVar5 & 1) == 0) {
          FUN_00698c0c(auStack_c8,plVar7);
          do {
            plVar5 = plVar6;
            func_0x006aabdc();
            FUN_006987e8();
            uVar3 = uVar10 == uVar11;
            if ((long)uVar10 < (long)uVar11) break;
            uVar2 = uVar11 << 1 | 1;
            plVar7 = plVar4 + uVar2 * 4;
            uVar1 = uVar11 * 2 + 2;
            uVar3 = uVar1 == unaff_x20;
            plVar6 = plVar7;
            uVar11 = uVar2;
            if ((long)uVar1 < (long)unaff_x20) {
              func_0x006aaeb8();
              uVar3 = (int)plVar6 == 0;
              plVar6 = plVar7 + 4;
              uVar11 = uVar1;
              if ((bool)uVar3) {
                plVar6 = plVar7;
                uVar11 = uVar2;
              }
            }
            plVar7 = plVar6;
            FUN_006a9af0(plVar6,auStack_c8);
          } while ((int)plVar7 == 0);
          FUN_006987e8(plVar5,auStack_c8);
          func_0x006aacf4();
        }
      }
    }
    func_0x006aaaf4(uStack_a8);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x006aacf4();
      func_0x006aac98();
      lVar9 = *plVar5;
      if (lVar9 != 0) {
        lVar8 = plVar5[1];
        while (lVar8 != lVar9) {
          lVar8 = lVar8 + -0x20;
          FUN_0069072c();
        }
        plVar5[1] = lVar9;
        __ZdlPv(*plVar5);
      }
      return plVar5;
    }
    return plVar5;
  }
  if ((int)plVar5 != 0) {
    func_0x006ab008();
    FUN_006a9f28();
    plVar5 = param_2;
    func_0x006aacdc();
    param_3 = param_2;
    if ((int)plVar5 != 0) goto LAB_006a9c78;
  }
  return plVar5;
}



/* Entry: 006a9cec; end: 006a9d87;  */

long * FUN_006a9cec(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  long lStack_48;
  
  plVar7 = param_3;
  func_0x006aaff0();
  func_0x006a9c88();
  plVar4 = param_5;
  func_0x006aaeb8();
  if ((int)plVar4 != 0) {
    FUN_006a9f28(param_4,param_5);
    func_0x006aabdc();
    FUN_006a9af0();
    plVar4 = param_4;
    if ((int)param_4 != 0) {
      func_0x006aaec0();
      FUN_006a9f28();
      func_0x006aace4();
      plVar4 = param_3;
      if ((int)param_3 != 0) {
        func_0x006ab144();
        func_0x006ab008();
        FUN_006a9af0();
        plVar4 = param_3;
        if ((int)param_3 != 0) {
          func_0x006aacd0();
          func_0x006aaff0();
          func_0x006aabcc();
          plVar4 = &lStack_48;
          FUN_00698c0c();
          func_0x006aacd0();
          FUN_006987e8();
          func_0x006aae6c();
          FUN_006987e8();
          func_0x006aacf4();
          func_0x006aaaf4(extraout_x8);
          if ((bool)in_ZR) {
            return plVar4;
          }
          ___stack_chk_fail();
          func_0x006aac98();
          func_0x006aabcc();
          uVar3 = unaff_x20 - 2 == 0;
          plVar6 = plVar4;
          uStack_a8 = extraout_x8_00;
          if (1 < (long)unaff_x20) {
            uVar10 = unaff_x20 - 2 >> 1;
            uVar1 = (long)plVar7 - (long)plVar4 >> 5;
            uVar3 = uVar10 == uVar1;
            if ((long)uVar1 <= (long)uVar10) {
              lVar9 = (long)plVar7 - (long)plVar4 >> 4;
              uVar1 = lVar9 + 1;
              plVar6 = plVar4 + uVar1 * 4;
              uVar2 = lVar9 + 2;
              uVar3 = uVar2 == unaff_x20;
              plVar5 = plVar6;
              uVar11 = uVar1;
              if ((long)uVar2 < (long)unaff_x20) {
                plVar5 = plVar4;
                func_0x006ab040();
                uVar3 = (int)plVar5 == 0;
                plVar5 = plVar6 + 4;
                uVar11 = uVar2;
                if ((bool)uVar3) {
                  plVar5 = plVar6;
                  uVar11 = uVar1;
                }
              }
              plVar6 = plVar5;
              func_0x006aaeb8();
              if (((ulong)plVar6 & 1) == 0) {
                FUN_00698c0c(auStack_c8,plVar7);
                do {
                  plVar6 = plVar5;
                  func_0x006aabdc();
                  FUN_006987e8();
                  uVar3 = uVar10 == uVar11;
                  if ((long)uVar10 < (long)uVar11) break;
                  uVar2 = uVar11 << 1 | 1;
                  plVar7 = plVar4 + uVar2 * 4;
                  uVar1 = uVar11 * 2 + 2;
                  uVar3 = uVar1 == unaff_x20;
                  plVar5 = plVar7;
                  uVar11 = uVar2;
                  if ((long)uVar1 < (long)unaff_x20) {
                    func_0x006aaeb8();
                    uVar3 = (int)plVar5 == 0;
                    plVar5 = plVar7 + 4;
                    uVar11 = uVar1;
                    if ((bool)uVar3) {
                      plVar5 = plVar7;
                      uVar11 = uVar2;
                    }
                  }
                  plVar7 = plVar5;
                  FUN_006a9af0(plVar5,auStack_c8);
                } while ((int)plVar7 == 0);
                FUN_006987e8(plVar6,auStack_c8);
                func_0x006aacf4();
              }
            }
          }
          func_0x006aaaf4(uStack_a8);
          if ((bool)uVar3) {
            return plVar6;
          }
          ___stack_chk_fail();
          func_0x006aacf4();
          func_0x006aac98();
          lVar9 = *plVar6;
          if (lVar9 != 0) {
            lVar8 = plVar6[1];
            while (lVar8 != lVar9) {
              lVar8 = lVar8 + -0x20;
              FUN_0069072c();
            }
            plVar6[1] = lVar9;
            __ZdlPv(*plVar6);
          }
          return plVar6;
        }
      }
    }
  }
  return plVar4;
}



/* Entry: 006a9d88; end: 006a9f27;  */

long * FUN_006a9d88(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  long alStack_b8 [4];
  undefined8 uStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  lVar11 = param_1;
  uVar10 = param_2;
  func_0x006aabcc();
  lVar11 = (long)(uVar10 - lVar11) >> 5;
  uVar2 = lVar11 == 5;
  plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_48 = extraout_x8;
  switch(lVar11) {
  case 0:
  case 1:
    goto LAB_006a9ee8;
  case 2:
    param_2 = param_2 - 0x20;
    func_0x006aacd0();
    iVar3 = (int)plVar6;
    FUN_006a9af0();
    if (iVar3 != 0) {
      func_0x006ab008();
      FUN_006a9f28();
    }
    break;
  case 3:
    param_3 = param_2 - 0x20;
    FUN_006a9bf4(param_1,param_1 + 0x20);
    break;
  case 4:
    func_0x006ab1ac();
    func_0x006a9c88(param_1);
    break;
  case 5:
    func_0x006ab1ac();
    FUN_006a9cec(param_1);
    break;
  default:
    param_3 = param_1 + 0x40;
    FUN_006a9bf4(param_1,param_1 + 0x20);
    lVar11 = 0;
    iVar3 = 0;
    for (uVar10 = param_1 + 0x60; uVar2 = uVar10 == param_2, !(bool)uVar2; uVar10 = uVar10 + 0x20) {
      uVar13 = uVar10;
      func_0x006aaeb8();
      if ((int)uVar13 != 0) {
        FUN_00698c0c(auStack_68,uVar10);
        lVar12 = lVar11;
        do {
          FUN_006987e8(param_1 + lVar12 + 0x60,param_1 + lVar12 + 0x40);
          lVar5 = param_1;
          if (lVar12 == -0x40) goto LAB_006a9eac;
          puVar4 = auStack_68;
          FUN_006a9af0(puVar4,param_1 + lVar12 + 0x20);
          lVar12 = lVar12 + -0x20;
        } while (((ulong)puVar4 & 1) != 0);
        lVar5 = param_1 + lVar12 + 0x60;
LAB_006a9eac:
        FUN_006987e8(lVar5,auStack_68);
        iVar3 = iVar3 + 1;
        func_0x006aacf4();
        if (iVar3 == 8) {
          uVar2 = uVar10 + 0x20 == param_2;
          plVar6 = (long *)(ulong)(byte)uVar2;
          goto LAB_006a9ee8;
        }
      }
      lVar11 = lVar11 + 0x20;
    }
  }
  plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
LAB_006a9ee8:
  func_0x006aaaf4(uStack_48);
  if ((bool)uVar2) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x006aacf4();
  func_0x006aac98();
  pcStack_78 = FUN_006a9f28;
  uStack_90 = param_2;
  plStack_88 = plVar6;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x006aaff0();
  func_0x006aabcc();
  plVar6 = alStack_b8;
  uStack_98 = extraout_x8_00;
  FUN_00698c0c();
  func_0x006aacd0();
  FUN_006987e8();
  func_0x006aae6c();
  FUN_006987e8();
  func_0x006aacf4();
  func_0x006aaaf4(uStack_98);
  if ((bool)uVar2) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x006aac98();
  func_0x006aabcc();
  uVar2 = param_2 - 2 == 0;
  plVar8 = plVar6;
  uStack_118 = extraout_x8_01;
  if (1 < (long)param_2) {
    uVar13 = param_2 - 2 >> 1;
    uVar10 = param_3 - (long)plVar6 >> 5;
    uVar2 = uVar13 == uVar10;
    if ((long)uVar10 <= (long)uVar13) {
      lVar11 = param_3 - (long)plVar6 >> 4;
      uVar10 = lVar11 + 1;
      plVar8 = plVar6 + uVar10 * 4;
      uVar1 = lVar11 + 2;
      uVar2 = uVar1 == param_2;
      plVar7 = plVar8;
      uVar14 = uVar10;
      if ((long)uVar1 < (long)param_2) {
        plVar7 = plVar6;
        func_0x006ab040();
        uVar2 = (int)plVar7 == 0;
        plVar7 = plVar8 + 4;
        uVar14 = uVar1;
        if ((bool)uVar2) {
          plVar7 = plVar8;
          uVar14 = uVar10;
        }
      }
      plVar8 = plVar7;
      func_0x006aaeb8();
      if (((ulong)plVar8 & 1) == 0) {
        FUN_00698c0c(auStack_138,param_3);
        do {
          plVar8 = plVar7;
          func_0x006aabdc();
          FUN_006987e8();
          uVar2 = uVar13 == uVar14;
          if ((long)uVar13 < (long)uVar14) break;
          uVar1 = uVar14 << 1 | 1;
          plVar9 = plVar6 + uVar1 * 4;
          uVar10 = uVar14 * 2 + 2;
          uVar2 = uVar10 == param_2;
          plVar7 = plVar9;
          uVar14 = uVar1;
          if ((long)uVar10 < (long)param_2) {
            func_0x006aaeb8();
            uVar2 = (int)plVar7 == 0;
            plVar7 = plVar9 + 4;
            uVar14 = uVar10;
            if ((bool)uVar2) {
              plVar7 = plVar9;
              uVar14 = uVar1;
            }
          }
          plVar9 = plVar7;
          FUN_006a9af0(plVar7,auStack_138);
        } while ((int)plVar9 == 0);
        FUN_006987e8(plVar8,auStack_138);
        func_0x006aacf4();
      }
    }
  }
  func_0x006aaaf4(uStack_118);
  if ((bool)uVar2) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x006aacf4();
  func_0x006aac98();
  lVar11 = *plVar8;
  if (lVar11 != 0) {
    lVar12 = plVar8[1];
    while (lVar12 != lVar11) {
      lVar12 = lVar12 + -0x20;
      FUN_0069072c();
    }
    plVar8[1] = lVar11;
    __ZdlPv(*plVar8);
  }
  return plVar8;
}



/* Entry: 006a9f28; end: 006a9f97;  */

long * FUN_006a9f28(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x006aaff0();
  func_0x006aabcc();
  plVar4 = alStack_48;
  uStack_28 = extraout_x8;
  FUN_00698c0c();
  func_0x006aacd0();
  FUN_006987e8();
  func_0x006aae6c();
  FUN_006987e8();
  func_0x006aacf4();
  func_0x006aaaf4(uStack_28);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x006aac98();
  func_0x006aabcc();
  uVar3 = unaff_x20 - 2 == 0;
  plVar6 = plVar4;
  uStack_a8 = extraout_x8_00;
  if (1 < (long)unaff_x20) {
    uVar10 = unaff_x20 - 2 >> 1;
    uVar1 = param_3 - (long)plVar4 >> 5;
    uVar3 = uVar10 == uVar1;
    if ((long)uVar1 <= (long)uVar10) {
      lVar9 = param_3 - (long)plVar4 >> 4;
      uVar1 = lVar9 + 1;
      plVar6 = plVar4 + uVar1 * 4;
      uVar2 = lVar9 + 2;
      uVar3 = uVar2 == unaff_x20;
      plVar5 = plVar6;
      uVar11 = uVar1;
      if ((long)uVar2 < (long)unaff_x20) {
        plVar5 = plVar4;
        func_0x006ab040();
        uVar3 = (int)plVar5 == 0;
        plVar5 = plVar6 + 4;
        uVar11 = uVar2;
        if ((bool)uVar3) {
          plVar5 = plVar6;
          uVar11 = uVar1;
        }
      }
      plVar6 = plVar5;
      func_0x006aaeb8();
      if (((ulong)plVar6 & 1) == 0) {
        FUN_00698c0c(auStack_c8,param_3);
        do {
          plVar6 = plVar5;
          func_0x006aabdc();
          FUN_006987e8();
          uVar3 = uVar10 == uVar11;
          if ((long)uVar10 < (long)uVar11) break;
          uVar2 = uVar11 << 1 | 1;
          plVar7 = plVar4 + uVar2 * 4;
          uVar1 = uVar11 * 2 + 2;
          uVar3 = uVar1 == unaff_x20;
          plVar5 = plVar7;
          uVar11 = uVar2;
          if ((long)uVar1 < (long)unaff_x20) {
            func_0x006aaeb8();
            uVar3 = (int)plVar5 == 0;
            plVar5 = plVar7 + 4;
            uVar11 = uVar1;
            if ((bool)uVar3) {
              plVar5 = plVar7;
              uVar11 = uVar2;
            }
          }
          plVar7 = plVar5;
          FUN_006a9af0(plVar5,auStack_c8);
        } while ((int)plVar7 == 0);
        FUN_006987e8(plVar6,auStack_c8);
        func_0x006aacf4();
      }
    }
  }
  func_0x006aaaf4(uStack_a8);
  if ((bool)uVar3) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x006aacf4();
  func_0x006aac98();
  lVar9 = *plVar6;
  if (lVar9 != 0) {
    lVar8 = plVar6[1];
    while (lVar8 != lVar9) {
      lVar8 = lVar8 + -0x20;
      FUN_0069072c();
    }
    plVar6[1] = lVar9;
    __ZdlPv(*plVar6);
  }
  return plVar6;
}



/* Entry: 006a9f98; end: 006aa0db;  */

long * FUN_006a9f98(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x006aabcc();
  uVar3 = param_2 - 2 == 0;
  plVar5 = param_1;
  uStack_58 = extraout_x8;
  if (1 < (long)param_2) {
    uVar9 = param_2 - 2 >> 1;
    uVar1 = param_3 - (long)param_1 >> 5;
    uVar3 = uVar9 == uVar1;
    if ((long)uVar1 <= (long)uVar9) {
      lVar8 = param_3 - (long)param_1 >> 4;
      uVar1 = lVar8 + 1;
      plVar5 = param_1 + uVar1 * 4;
      uVar2 = lVar8 + 2;
      uVar3 = uVar2 == param_2;
      plVar4 = plVar5;
      uVar10 = uVar1;
      if ((long)uVar2 < (long)param_2) {
        plVar4 = param_1;
        func_0x006ab040();
        uVar3 = (int)plVar4 == 0;
        plVar4 = plVar5 + 4;
        uVar10 = uVar2;
        if ((bool)uVar3) {
          plVar4 = plVar5;
          uVar10 = uVar1;
        }
      }
      plVar5 = plVar4;
      func_0x006aaeb8();
      if (((ulong)plVar5 & 1) == 0) {
        FUN_00698c0c(auStack_78,param_3);
        do {
          plVar5 = plVar4;
          func_0x006aabdc();
          FUN_006987e8();
          uVar3 = uVar9 == uVar10;
          if ((long)uVar9 < (long)uVar10) break;
          uVar2 = uVar10 << 1 | 1;
          plVar6 = param_1 + uVar2 * 4;
          uVar1 = uVar10 * 2 + 2;
          uVar3 = uVar1 == param_2;
          plVar4 = plVar6;
          uVar10 = uVar2;
          if ((long)uVar1 < (long)param_2) {
            func_0x006aaeb8();
            uVar3 = (int)plVar4 == 0;
            plVar4 = plVar6 + 4;
            uVar10 = uVar1;
            if ((bool)uVar3) {
              plVar4 = plVar6;
              uVar10 = uVar2;
            }
          }
          plVar6 = plVar4;
          FUN_006a9af0(plVar4,auStack_78);
        } while ((int)plVar6 == 0);
        FUN_006987e8(plVar5,auStack_78);
        func_0x006aacf4();
      }
    }
  }
  func_0x006aaaf4(uStack_58);
  if ((bool)uVar3) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x006aacf4();
  func_0x006aac98();
  lVar8 = *plVar5;
  if (lVar8 != 0) {
    lVar7 = plVar5[1];
    while (lVar7 != lVar8) {
      lVar7 = lVar7 + -0x20;
      FUN_0069072c();
    }
    plVar5[1] = lVar8;
    __ZdlPv(*plVar5);
  }
  return plVar5;
}



/* Entry: 006aa0dc; end: 006aa123;  */

long * FUN_006aa0dc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_0069072c();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 006aa124; end: 006aa173;  */

undefined8 * FUN_006aa124(undefined8 *param_1)

{
  long *plVar1;
  
  (**(code **)(*(long *)param_1[1] + 0x78))((long *)param_1[1],*param_1,param_1[2]);
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 006aa174; end: 006aa37b;  */

void FUN_006aa174(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puStack_90;
  undefined8 uStack_68;
  
  if (param_4 < 2) {
    return;
  }
  if (param_4 == 2) {
    puVar3 = param_1;
    func_0x006ab114(param_1,param_2[-1],*param_1);
    if ((int)puVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar6;
    return;
  }
  if (0x80 < (long)param_4) {
    uVar12 = param_4 >> 1;
    puVar3 = param_1 + uVar12;
    if ((long)param_4 <= param_6) {
      FUN_006aa4d8(param_1,puVar3,param_3,uVar12);
      puVar2 = param_5 + uVar12;
      func_0x006aabe8();
      FUN_006aa4d8();
      puVar11 = param_5 + param_4;
      puVar5 = puVar2;
      while( true ) {
        if (param_5 == puVar2) {
          for (; puVar5 != puVar11; puVar5 = puVar5 + 1) {
            *param_1 = *puVar5;
            param_1 = param_1 + 1;
          }
          return;
        }
        if (puVar5 == puVar11) break;
        func_0x006ab114();
        bVar1 = (int)puVar3 == 0;
        puVar4 = puVar5;
        if (bVar1) {
          puVar4 = param_5;
        }
        lVar10 = 0;
        if (bVar1) {
          lVar10 = 8;
        }
        param_5 = (undefined8 *)((long)param_5 + lVar10);
        lVar10 = 8;
        if (bVar1) {
          lVar10 = 0;
        }
        puVar5 = (undefined8 *)((long)puVar5 + lVar10);
        *param_1 = *puVar4;
        param_1 = param_1 + 1;
      }
      for (; param_5 != puVar2; param_5 = param_5 + 1) {
        *param_1 = *param_5;
        param_1 = param_1 + 1;
      }
      return;
    }
    puVar2 = puVar3;
    puStack_90 = param_3;
    FUN_006aa174();
    func_0x006aabe8();
    FUN_006aa174();
    func_0x006aafac();
    puVar11 = puVar3;
    lVar10 = param_4 - (param_4 >> 1);
    while( true ) {
      if (lVar10 == 0) {
        return;
      }
      if (lVar10 <= param_6 || (long)uVar12 <= param_6) break;
      lVar14 = 0;
      puVar4 = puVar11;
      puVar5 = puVar11;
      while( true ) {
        lVar8 = uVar12 - lVar14;
        if (lVar8 == 0) {
          return;
        }
        func_0x006ab02c();
        if (((ulong)puVar3 & 1) != 0) break;
        puVar5 = puVar5 + 1;
        lVar14 = lVar14 + 1;
        puVar4 = puVar4 + 1;
      }
      if (lVar8 < lVar10) {
        lVar8 = lVar10 / 2;
        puVar9 = puVar2 + lVar8;
        uVar16 = (long)puVar2 - (long)puVar4 >> 3;
        puVar13 = puVar5;
        while (uVar16 != 0) {
          uVar15 = uVar16 >> 1;
          puVar3 = param_3;
          FUN_006aa37c(param_3,*puVar9,puVar13[uVar15]);
          uVar7 = uVar16 + (uVar16 >> 1 ^ 0xffffffffffffffff);
          uVar16 = uVar15;
          if ((int)puVar3 == 0) {
            uVar16 = uVar7;
            puVar13 = puVar13 + uVar15 + 1;
          }
        }
        uVar16 = (long)puVar13 - (long)puVar4 >> 3;
      }
      else {
        if (uVar12 - 1 == lVar14) {
          uVar6 = puVar11[lVar14];
          puVar11[lVar14] = *puVar2;
          *puVar2 = uVar6;
          return;
        }
        uVar16 = lVar8 / 2;
        puVar13 = puVar5 + uVar16;
        uStack_68 = *param_3;
        uVar7 = (long)puStack_90 - (long)puVar2 >> 3;
        puVar3 = puVar2;
        while (puVar9 = puVar3, uVar7 != 0) {
          uVar15 = uVar7 >> 1;
          puVar4 = &uStack_68;
          FUN_006aa37c(puVar4,puVar9[uVar15],puVar11[uVar16 + lVar14]);
          uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
          puVar3 = puVar9 + uVar15 + 1;
          if ((int)puVar4 == 0) {
            uVar7 = uVar15;
            puVar3 = puVar9;
          }
        }
        lVar8 = (long)puVar9 - (long)puVar2 >> 3;
      }
      uVar7 = (uVar12 - uVar16) - lVar14;
      puVar4 = puVar13;
      FUN_006a3ac8(puVar13,puVar2,puVar9);
      if ((long)(uVar16 + lVar8) < (long)(((uVar12 + lVar10) - (uVar16 + lVar8)) - lVar14)) {
        FUN_006aa6b4(puVar5,puVar13,puVar4,param_3,uVar16,lVar8,param_5,param_6);
        puVar3 = puVar5;
        uVar12 = uVar7;
        puVar2 = puVar9;
        puVar11 = puVar4;
        lVar10 = lVar10 - lVar8;
      }
      else {
        puVar3 = puVar4;
        FUN_006aa6b4(puVar4,puVar9,puStack_90,param_3,uVar7,lVar10 - lVar8,param_5,param_6);
        uVar12 = uVar16;
        puVar2 = puVar13;
        puVar11 = puVar5;
        lVar10 = lVar8;
        puStack_90 = puVar4;
      }
    }
    if (lVar10 < (long)uVar12) {
      for (lVar10 = 0; (undefined8 *)((long)puVar2 + lVar10) != puStack_90; lVar10 = lVar10 + 8) {
        *(undefined8 *)((long)param_5 + lVar10) = *(undefined8 *)((long)puVar2 + lVar10);
      }
      puVar5 = (undefined8 *)((long)param_5 + lVar10);
      while( true ) {
        puStack_90 = puStack_90 + -1;
        if (puVar5 == param_5) {
          return;
        }
        if (puVar2 == puVar11) break;
        func_0x006ab02c();
        puVar4 = puVar5;
        puVar9 = puVar2 + -1;
        puVar13 = puVar2;
        if ((int)puVar3 == 0) {
          puVar4 = puVar5 + -1;
          puVar9 = puVar2;
          puVar13 = puVar5;
        }
        puVar2 = puVar9;
        *puStack_90 = puVar13[-1];
        puVar5 = puVar4;
      }
      while (puVar5 != param_5) {
        puVar5 = puVar5 + -1;
        *puStack_90 = *puVar5;
        puStack_90 = puStack_90 + -1;
      }
      return;
    }
    lVar10 = -(long)param_5;
    puVar4 = param_5;
    for (puVar5 = puVar11; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      *puVar4 = *puVar5;
      lVar10 = lVar10 + -8;
      puVar4 = puVar4 + 1;
    }
    while( true ) {
      if (puVar4 == param_5) {
        return;
      }
      if (puVar2 == puStack_90) break;
      func_0x006ab02c();
      bVar1 = (int)puVar3 == 0;
      puVar5 = puVar2;
      if (bVar1) {
        puVar5 = param_5;
      }
      lVar14 = 8;
      if (bVar1) {
        lVar14 = 0;
      }
      puVar2 = (undefined8 *)((long)puVar2 + lVar14);
      lVar14 = 0;
      if (bVar1) {
        lVar14 = 8;
      }
      param_5 = (undefined8 *)((long)param_5 + lVar14);
      *puVar11 = *puVar5;
      puVar11 = puVar11 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_0099a400)(puVar11,param_5,-((long)param_5 + lVar10));
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar10 = 0;
  puVar2 = param_1;
  puVar3 = param_1;
  do {
    puVar3 = puVar3 + 1;
    if (puVar3 == param_2) {
      return;
    }
    func_0x006ab114();
    if ((int)puVar2 != 0) {
      uVar6 = *puVar3;
      lVar14 = lVar10;
      do {
        lVar8 = lVar14;
        puVar11 = (undefined8 *)((long)param_1 + lVar8);
        puVar11[1] = *puVar11;
        puVar5 = param_1;
        if (lVar8 == 0) goto LAB_006aa25c;
        puVar2 = param_3;
        FUN_006aa37c(param_3,uVar6,puVar11[-1]);
        lVar14 = lVar8 + -8;
      } while (((ulong)puVar2 & 1) != 0);
      puVar5 = (undefined8 *)((long)param_1 + lVar8);
LAB_006aa25c:
      *puVar5 = uVar6;
    }
    lVar10 = lVar10 + 8;
  } while( true );
}



/* Entry: 006aa37c; end: 006aa4d7;  */

uint FUN_006aa37c(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar9 = param_2;
  func_0x006aaea4();
  uVar6 = *param_1;
  FUN_00656c60();
  uVar10 = 1;
  switch((int)uVar6) {
  case 1:
    func_0x006aacc0();
    iVar3 = (int)uVar6;
    FUN_0068b4e8();
    iVar4 = iVar3;
    func_0x006aacb0();
    FUN_0068b4e8();
    bVar2 = SBORROW4(iVar3,iVar4);
    bVar1 = iVar3 - iVar4 < 0;
    goto code_r0x006aa478;
  case 2:
    func_0x006aacc0();
    FUN_0068b804();
    uVar8 = uVar6;
    func_0x006aacb0();
    FUN_0068b804();
    bVar2 = SBORROW8(uVar6,uVar8);
    bVar1 = (long)(uVar6 - uVar8) < 0;
code_r0x006aa478:
    uVar10 = (uint)(bVar1 != bVar2);
    break;
  case 3:
    func_0x006aacc0();
    uVar5 = (uint)uVar6;
    FUN_0068bb28();
    uVar10 = uVar5;
    func_0x006aacb0();
    FUN_0068bb28();
    bVar1 = uVar10 <= uVar5;
    goto code_r0x006aa498;
  case 4:
    func_0x006aacc0();
    FUN_0068be44();
    uVar8 = uVar6;
    func_0x006aacb0();
    FUN_0068be44();
    bVar1 = uVar8 <= uVar6;
code_r0x006aa498:
    uVar10 = (uint)!bVar1;
    break;
  case 7:
    func_0x006aacc0();
    uVar5 = (uint)uVar6;
    FUN_0068c7f0();
    uVar10 = uVar5;
    func_0x006aacb0();
    FUN_0068c7f0();
    uVar10 = uVar10 & (uVar5 ^ 1);
    break;
  case 9:
    FUN_0068cb34(auStack_58,uVar9,param_2,*param_1);
    func_0x006aacd0(auStack_70);
    FUN_0068cb34();
    puVar7 = auStack_58;
    func_0x004278bc(puVar7,auStack_70);
    uVar10 = (uint)((char)puVar7 < '\0');
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  return uVar10;
}


