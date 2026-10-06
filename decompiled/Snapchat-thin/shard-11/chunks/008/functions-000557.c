/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108958778; end: 108958ba3;  */

void FUN_108958778(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long **pplVar6;
  ulong uVar7;
  long lVar8;
  undefined8 ***pppuVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long *plVar11;
  undefined8 *puVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long unaff_x19;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [31];
  undefined1 uStack_101;
  undefined8 **ppuStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined1 uStack_ca;
  long *plStack_c8;
  long **pplStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_70;
  
  func_0x00010895ba48();
  uStack_70 = extraout_x8;
  func_0x00010895beac(&uStack_101);
  uStack_138 = *(undefined8 *)(param_2 + 0x20);
  lStack_140 = *(long *)(param_2 + 0x18);
  uStack_130 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  puVar5 = auStack_120;
  FUN_108958ba4();
  lVar3 = lStack_140;
  if (unaff_x19 != 0) {
    func_0x000107c27d0c();
    if ((*(byte *)(lVar3 + 0x60) & 1) == 0) {
      *(undefined1 *)(lVar3 + 0x60) = 1;
    }
    *(undefined1 **)(lVar3 + 0x58) = puVar5;
    *(undefined1 *)(lVar3 + 0x290) = 1;
    func_0x00010895bca4();
    lStack_90 = lVar3;
    plVar11 = (long *)(lVar3 + 0xd0);
    puVar10 = (undefined8 *)*plVar11;
    puVar16 = *(undefined8 **)(lVar3 + 0xd8);
    in_ZR = puVar10 == puVar16;
    if ((bool)in_ZR) {
      FUN_108b80b94(&plStack_c8,0x7e8,&UNK_10f4ed58b);
      FUN_1089576b4(lVar3,&plStack_c8);
      func_0x000108b80d84(&plStack_c8);
    }
    else {
      pplStack_c0 = (long **)0x0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      pplVar6 = &plStack_c8;
      plStack_c8 = plVar11;
      FUN_1089584d4(pplVar6,puVar10,&plStack_c8,puVar16);
      uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
      pplStack_c0 = pplVar6;
      puStack_b8 = puVar10;
      while (puVar16 != puVar10) {
        uStack_e8 = *puVar10;
        uStack_d8 = puVar10[2];
        lStack_e0 = puVar10[1];
        uStack_d0 = *(undefined4 *)(puVar10 + 3);
        uStack_cc = *(undefined2 *)((long)puVar10 + 0x1c);
        uStack_ca = *(undefined1 *)((long)puVar10 + 0x1e);
        uVar7 = *(ulong *)(lVar3 + 0x200);
        if (uVar7 < *(ulong *)(lVar3 + 0x208)) {
          func_0x00010895bf24();
          lVar18 = uVar7 + 0x1c;
        }
        else {
          lVar18 = uVar7 - *(long *)(lVar3 + 0x1f8);
          uVar7 = lVar18 / 0x1c + 1;
          if (0x924924924924924 < uVar7) {
            func_0x000108958508();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x108958b28);
            (*pcVar4)();
          }
          uVar2 = (long)(*(ulong *)(lVar3 + 0x208) - *(long *)(lVar3 + 0x1f8)) / 0x1c;
          uVar13 = uVar2 * 2;
          if (uVar13 < uVar7 || uVar13 - uVar7 == 0) {
            uVar13 = uVar7;
          }
          if (0x492492492492491 < uVar2) {
            uVar13 = 0x924924924924924;
          }
          if (uVar13 == 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = lVar3 + 0x208;
            func_0x00010895851c(lVar17,uVar13);
          }
          lVar18 = lVar17 + lVar18;
          func_0x00010895bf24();
          puVar14 = *(undefined8 **)(lVar3 + 0x1f8);
          puVar1 = *(undefined8 **)(lVar3 + 0x200);
          puVar12 = (undefined8 *)(lVar18 + (((long)puVar1 - (long)puVar14) / -0x1c) * 0x1c);
          puVar15 = puVar12;
          for (; puVar14 != puVar1; puVar14 = (undefined8 *)((long)puVar14 + 0x1c)) {
            uVar20 = puVar14[1];
            uVar19 = *puVar14;
            uVar21 = *(undefined8 *)((long)puVar14 + 0xc);
            *(undefined8 *)((long)puVar15 + 0x14) = *(undefined8 *)((long)puVar14 + 0x14);
            *(undefined8 *)((long)puVar15 + 0xc) = uVar21;
            puVar15[1] = uVar20;
            *puVar15 = uVar19;
            puVar15 = (undefined8 *)((long)puVar15 + 0x1c);
          }
          lVar18 = lVar18 + 0x1c;
          lVar8 = *(long *)(lVar3 + 0x1f8);
          *(undefined8 **)(lVar3 + 0x1f8) = puVar12;
          *(long *)(lVar3 + 0x200) = lVar18;
          *(ulong *)(lVar3 + 0x208) = lVar17 + uVar13 * 0x1c;
          if (lVar8 != 0) {
            __ZdlPv();
          }
        }
        *(long *)(lVar3 + 0x200) = lVar18;
        func_0x00010895bf08();
        puVar10 = puVar10 + 4;
        FUN_1089584d4(pplVar6,puVar10,&plStack_c8,plStack_c8[1]);
      }
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      plStack_c8 = plVar11;
      FUN_108958480(&uStack_e8,&plStack_c8);
      if ((lStack_e0 != plStack_c8[1]) && (*(long *)(lVar3 + 0x250) != 0)) {
        uVar7 = (*(long *)(lVar3 + 0x250) + *(long *)(lVar3 + 0x248)) - 1;
        *(undefined8 *)
         (*(long *)(*(long *)(lVar3 + 0x230) + (uVar7 / 0x66) * 8) + (uVar7 % 0x66) * 0x28 + 0x20) =
             *(undefined8 *)(lVar3 + 0xe8);
      }
      pppuVar9 = &ppuStack_100;
      FUN_108958480(pppuVar9,&plStack_c8);
      puVar10 = (undefined8 *)plStack_c8[1];
      while (in_ZR = puStack_f8 == puVar10, !(bool)in_ZR) {
        uStack_e8 = *puStack_f8;
        uStack_d8 = puStack_f8[2];
        lStack_e0 = puStack_f8[1];
        uStack_d0 = *(undefined4 *)(puStack_f8 + 3);
        uStack_cc = *(undefined2 *)((long)puStack_f8 + 0x1c);
        uStack_ca = *(undefined1 *)((long)puStack_f8 + 0x1e);
        func_0x00010895bf08();
        puStack_f8 = puStack_f8 + 4;
        FUN_108958744(ppuStack_100,puStack_f8,plStack_f0,*(undefined8 *)(*plStack_f0 + 8));
        pppuVar9 = (undefined8 ***)ppuStack_100;
      }
      FUN_1089a3c0c();
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      func_0x00010895be7c();
      plStack_c8 = (long *)(extraout_x8_00 + 0x10);
      pplStack_c0 = (long **)0x0;
      uStack_a8 = CONCAT44(uStack_a8._4_4_,0x38);
      func_0x00010895bcc4(*pppuVar9);
      func_0x00010895bc94();
      func_0x000104c03ee4(&plStack_c8);
      func_0x000107c28144(lVar3 + 0x198);
      FUN_108956f7c(lVar3);
    }
    func_0x000107c281f0(auStack_a0);
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bb78();
  puVar5 = auStack_120;
  FUN_1089580c8();
  func_0x00010895b9e8(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108b80d84(&plStack_c8);
  func_0x000107c281f0(auStack_a0);
  DataMemoryBarrier(2,3);
  func_0x000108955f94((ulong)&lStack_140 | 8);
  FUN_1089580c8(auStack_120);
  func_0x00010895bb18();
  func_0x00010895bc80();
  func_0x00010895bbd0();
  if (extraout_x8_01 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(puVar5 + 0x10) = 0;
  }
  if (*(long *)(puVar5 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bb94();
    *(undefined8 *)(puVar5 + 8) = 0;
  }
  return;
}



/* Entry: 108958ba4; end: 108958bdb;  */

void FUN_108958ba4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bb94();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108958bdc; end: 108958bff;  */

undefined8 FUN_108958bdc(undefined8 param_1)

{
  FUN_108958cc4();
  return param_1;
}



/* Entry: 108958c00; end: 108958c2b;  */

void FUN_108958c00(void)

{
  func_0x00010895b998();
  func_0x00010895c018();
  FUN_108958d08();
  return;
}



/* Entry: 108958c2c; end: 108958cc3;  */

void FUN_108958c2c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 auStack_f8 [23];
  undefined1 auStack_40 [32];
  
  func_0x00010895baa8();
  FUN_108958c00(auStack_f8,param_2 + 0x18);
  FUN_108958cc4(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bb20(auStack_f8[0]);
    if ((bool)in_ZR) {
      func_0x00010895be10(auStack_f8);
    }
    DataMemoryBarrier(2,3);
  }
  FUN_108956560(auStack_f8);
  FUN_108958bdc(auStack_40);
  return;
}



/* Entry: 108958cc4; end: 108958d07;  */

void FUN_108958cc4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108956560(extraout_x8 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108958d08; end: 108958d6f;  */

void FUN_108958d08(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010895bc24();
  *param_1 = *param_2;
  FUN_10895ae60(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  FUN_108958d70(unaff_x19 + 0x40,unaff_x20 + 0x40);
  FUN_108958e78(unaff_x19 + 0x88,unaff_x20 + 0x88);
  return;
}



/* Entry: 108958d70; end: 108958da3;  */

undefined1 * FUN_108958d70(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_108958da4();
  return param_1;
}



/* Entry: 108958da4; end: 108958db7;  */

void FUN_108958da4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_108958dd4();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 108958db8; end: 108958dd3;  */

void FUN_108958db8(long param_1)

{
  FUN_108958dd4();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 108958dd4; end: 108958e0b;  */

void FUN_108958dd4(long param_1)

{
  long unaff_x20;
  
  func_0x00010895bc24();
  FUN_108958e0c();
  FUN_108958e0c(param_1 + 0x20,unaff_x20 + 0x20);
  return;
}



/* Entry: 108958e0c; end: 108958e2f;  */

void FUN_108958e0c(long param_1,long param_2)

{
  func_0x000107c27994();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 108958e30; end: 108958e4f;  */

void FUN_108958e30(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_108958e50();
  }
  return;
}



/* Entry: 108958e50; end: 108958e77;  */

/* WARNING: Possible PIC construction at 0x000108958e64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108958e68) */

long FUN_108958e50(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x20;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x20;
}



/* Entry: 108958e78; end: 108958ebb;  */

undefined8 * FUN_108958e78(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_108958ebc(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 108958ebc; end: 108958f07;  */

void FUN_108958ebc(long param_1,long param_2,long param_3)

{
  while (param_2 != param_3) {
    FUN_108958f08(param_1,param_1 + 8,param_2 + 0x20);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 108958f08; end: 108958f0f;  */

undefined1  [16] FUN_108958f08(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_108958f9c(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010895bd3c(alStack_58);
    FUN_1089590b4();
    FUN_108959108(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x000108959284(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108958f10; end: 108958f9b;  */

undefined1  [16] FUN_108958f10(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_108958f9c(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010895bd3c(alStack_58);
    FUN_1089590b4();
    FUN_108959108(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x000108959284(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108958f9c; end: 1089590b3;  */

long * FUN_108958f9c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_2 != param_1 + 1) {
    if (param_2[4] <= *param_5) {
      if (*param_5 <= param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar1 = param_2;
      FUN_1089591cc(param_2,1);
      if ((param_1 + 1 == plVar1) || (*param_5 < plVar1[4])) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar1;
          return plVar1;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto FUN_10895917c;
    }
  }
  plVar1 = param_2;
  if ((param_2 == (long *)*param_1) || (func_0x000107c27bdc(), plVar1[4] < *param_5)) {
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar1;
      param_2 = plVar1 + 1;
    }
    return param_2;
  }
FUN_10895917c:
  param_1 = param_1 + 1;
  plVar1 = param_1;
  if ((long *)*param_1 != (long *)0x0) {
    plVar2 = (long *)*param_1;
    do {
      while (plVar1 = plVar2, *param_5 < plVar2[4]) {
        plVar3 = (long *)*plVar2;
        param_1 = plVar2;
        plVar2 = plVar3;
        if (plVar3 == (long *)0x0) goto LAB_1089591c4;
      }
      if (*param_5 <= plVar2[4]) break;
      param_1 = plVar2 + 1;
      plVar2 = (long *)*param_1;
    } while ((long *)*param_1 != (long *)0x0);
  }
LAB_1089591c4:
  *param_3 = (long)plVar1;
  return param_1;
}



/* Entry: 1089590b4; end: 108959107;  */

void FUN_1089590b4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x68;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x00010895925c(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108959108; end: 10895917b;  */

void FUN_108959108(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10895917c; end: 1089591cb;  */

long * FUN_10895917c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_1089591c4;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1089591c4;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_1089591c4:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1089591cc; end: 1089591f3;  */

undefined8 FUN_1089591cc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1089591f4(&uStack_18);
  return uStack_18;
}



/* Entry: 1089591f4; end: 1089592a7;  */

void FUN_1089591f4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010895beb8();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      func_0x000108959158();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x000108959238();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 1089592a8; end: 1089592bf;  */

void FUN_1089592a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_108958e50(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1089592c0; end: 1089593db;  */

void FUN_1089592c0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_108958e50(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1089593dc; end: 1089593f3;  */

void FUN_1089593dc(long *param_1)

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



/* Entry: 1089593f4; end: 108959427;  */

long FUN_1089593f4(long param_1)

{
  func_0x000108959300(param_1 + 0x88);
  FUN_108958e30(param_1 + 0x40);
  func_0x000108959364(param_1 + 8);
  return param_1;
}



/* Entry: 108959428; end: 10895944b;  */

undefined8 FUN_108959428(undefined8 param_1)

{
  FUN_108959538();
  return param_1;
}



/* Entry: 10895944c; end: 108959477;  */

void FUN_10895944c(void)

{
  func_0x00010895b998();
  func_0x00010895c018();
  FUN_10895957c();
  return;
}



/* Entry: 108959478; end: 108959537;  */

void FUN_108959478(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined1 *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f1;
  long alStack_f0 [25];
  undefined8 uStack_28;
  
  func_0x00010895ba48();
  puStack_110 = &uStack_f1;
  lStack_108 = param_2;
  lStack_100 = param_2;
  uStack_28 = extraout_x8;
  FUN_10895944c(alStack_f0,param_2 + 0x18);
  FUN_108959538(&puStack_110);
  if (unaff_x19 != 0) {
    if (((*(byte *)(alStack_f0[0] + 0x48) & 1) == 0) && (func_0x00010895bb20(), (bool)in_ZR)) {
      func_0x00010895be10(alStack_f0);
    }
    DataMemoryBarrier(2,3);
  }
  FUN_108956690(alStack_f0);
  FUN_108959428(&puStack_110);
  func_0x00010895b9e8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895bc30();
  FUN_108956690(alStack_f0);
  FUN_108959428(&puStack_110);
  func_0x00010895bb18();
  func_0x00010895bbd0();
  if (extraout_x8_00 != 0) {
    FUN_108956690(extraout_x8_00 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108959538; end: 10895957b;  */

void FUN_108959538(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108956690(extraout_x8 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895957c; end: 1089595b3;  */

void FUN_10895957c(long param_1)

{
  long unaff_x20;
  
  func_0x00010895bc24();
  FUN_1089595bc();
  FUN_1089595b4(param_1 + 0x70,unaff_x20 + 0x70);
  return;
}



/* Entry: 1089595b4; end: 1089595bb;  */

undefined8 * FUN_1089595b4(undefined8 *param_1,ulong *param_2)

{
  *param_1 = 0;
  if (1 < *param_2) {
    FUN_108959748(param_1,param_2,param_2);
  }
  return param_1;
}



/* Entry: 1089595bc; end: 1089595ef;  */

undefined1 * FUN_1089595bc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x68] = 0;
  FUN_1089595f0();
  return param_1;
}



/* Entry: 1089595f0; end: 108959603;  */

void FUN_1089595f0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_108959620();
    *(undefined1 *)(param_1 + 0x68) = 1;
    return;
  }
  return;
}



/* Entry: 108959604; end: 10895961f;  */

void FUN_108959604(long param_1)

{
  FUN_108959620();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 108959620; end: 108959643;  */

void FUN_108959620(long param_1,long param_2)

{
  FUN_108959644();
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  return;
}



/* Entry: 108959644; end: 1089596b7;  */

void FUN_108959644(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010895bc24();
  func_0x000107c27994();
  func_0x000107c27994(param_1 + 0x18,unaff_x20 + 0x18);
  func_0x000107c27994(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x000107c27994(unaff_x19 + 0x48,unaff_x20 + 0x48);
  return;
}



/* Entry: 1089596b8; end: 1089596d7;  */

void FUN_1089596b8(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1089596d8();
  }
  return;
}



/* Entry: 1089596d8; end: 108959707;  */

/* WARNING: Possible PIC construction at 0x0001089596ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001089596f0) */

long FUN_1089596d8(void)

{
  long unaff_x19;
  long lStack_48;
  
  func_0x00010895bf98();
  lStack_48 = unaff_x19 + 0x30;
  func_0x000100100fd4(&lStack_48);
  return unaff_x19 + 0x30;
}



/* Entry: 108959708; end: 108959747;  */

undefined8 * FUN_108959708(undefined8 *param_1,ulong *param_2)

{
  *param_1 = 0;
  if (1 < *param_2) {
    FUN_108959748(param_1);
  }
  return param_1;
}



/* Entry: 108959748; end: 1089597bf;  */

void FUN_108959748(undefined8 param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010895bc24();
  uVar4 = *param_2 >> 1;
  if ((*param_2 & 1) == 0) {
    puVar3 = unaff_x20 + 1;
    puVar1 = unaff_x19 + 1;
  }
  else {
    uVar2 = uVar4;
    if (uVar4 < 5) {
      uVar2 = 4;
    }
    puVar1 = unaff_x19;
    FUN_1089597c0();
    unaff_x19[1] = puVar1;
    unaff_x19[2] = uVar2;
    puVar3 = (undefined8 *)unaff_x20[1];
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar6 = puVar3[1];
    uVar5 = *puVar3;
    uVar7 = *(undefined8 *)((long)puVar3 + 0xc);
    *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)((long)puVar3 + 0x14);
    *(undefined8 *)((long)puVar1 + 0xc) = uVar7;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    puVar3 = (undefined8 *)((long)puVar3 + 0x1c);
    puVar1 = (undefined8 *)((long)puVar1 + 0x1c);
  }
  *unaff_x19 = *unaff_x20;
  return;
}



/* Entry: 1089597c0; end: 1089597e3;  */

void FUN_1089597c0(void)

{
  func_0x00010895851c();
  return;
}



/* Entry: 1089597e4; end: 108959813;  */

long * FUN_1089597e4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108959814(param_1);
  }
  return param_1;
}



/* Entry: 108959814; end: 108959827;  */

void FUN_108959814(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 108959828; end: 10895984f;  */

void FUN_108959828(long param_1)

{
  FUN_1089597e4(param_1 + 0x70);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1089596d8();
  }
  return;
}



/* Entry: 108959850; end: 108959873;  */

undefined8 FUN_108959850(undefined8 param_1)

{
  FUN_1089599a0();
  return param_1;
}



/* Entry: 108959874; end: 10895999f;  */

void FUN_108959874(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long lStack_100;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_a9;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_84 [56];
  undefined1 auStack_4c [28];
  
  puStack_c8 = &uStack_a9;
  uStack_c0 = param_2;
  uStack_b8 = param_2;
  func_0x00010895baf8();
  FUN_1089599a0(&puStack_c8);
  if (param_1 != 0) {
    if (((*(byte *)(lStack_100 + 0x48) & 1) == 0) &&
       (func_0x00010895bedc(lStack_100 + 0x38), (bool)in_ZR)) {
      FUN_108957bf8(lStack_100 + 0x160);
      FUN_108957bf8(lStack_100 + 0x160);
      func_0x00010bd43838(auStack_4c,lStack_100 + 0x160,*(undefined2 *)(lStack_100 + 0x17c));
      FUN_10895f988(auStack_84);
      plVar1 = *(long **)(lStack_100 + 0x150);
      FUN_10895ae24(&lStack_a8,lStack_100 + 0x28);
      lStack_98 = 0;
      if (lStack_a8 != 0) {
        lStack_98 = lStack_a8 + 0x10;
      }
      uStack_90 = uStack_a0;
      lStack_a8 = 0;
      uStack_a0 = 0;
      (**(code **)(*plVar1 + 0x30))(plVar1,&lStack_98,auStack_84);
      func_0x000108953b44(&lStack_98);
      func_0x000108955f94(&lStack_a8);
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bbc8();
  FUN_108959850(&puStack_c8);
  return;
}



/* Entry: 1089599a0; end: 1089599d7;  */

void FUN_1089599a0(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bcb8();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 1089599d8; end: 1089599fb;  */

undefined8 FUN_1089599d8(undefined8 param_1)

{
  FUN_108959db4();
  return param_1;
}



/* Entry: 1089599fc; end: 108959a33;  */

void FUN_1089599fc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010895b998();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + 0x18);
  FUN_10895ae60(unaff_x20 + 0x18,param_2 + 0x20);
  return;
}



/* Entry: 108959a34; end: 108959b13;  */

void FUN_108959a34(long *param_1,undefined *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *unaff_x19;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010895ba48();
  func_0x000107c2b954();
  lVar6 = *unaff_x19;
  if ((*(long *)(lVar6 + -8) == 0) && (*(char *)(lVar6 + (long)param_1) != -2)) {
    uVar7 = unaff_x19[2];
    param_1 = unaff_x19;
    if ((uVar7 < 9) || (uVar7 * 0x19 < (ulong)(unaff_x19[3] << 5))) {
      param_2 = (undefined *)(uVar7 << 1 | 1);
      FUN_108959b14();
    }
    else {
      param_2 = &UNK_110a9e470;
      func_0x00010ae6c914();
    }
    func_0x00010895bd3c();
    func_0x000107c2b954();
    lVar6 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  uVar4 = *(char *)(lVar6 + (long)param_1) == -0x80;
  *(ulong *)(lVar6 + -8) = *(long *)(lVar6 + -8) - (ulong)(byte)uVar4;
  func_0x00010895bec4();
  *(undefined1 *)(extraout_x10 + (extraout_x9 & extraout_x11) + (extraout_x9 & 7)) = extraout_w8;
  func_0x00010895b9e8(extraout_x8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  plVar8 = (long *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = (long)param_2;
  plVar5 = param_1;
  func_0x000104ab30b8();
  lVar10 = param_1[1];
  for (lVar6 = 0; lVar9 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar8;
      func_0x00010895bd3c(SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8));
      func_0x000107c2b954();
      func_0x00010895bec4();
      *(undefined1 *)(extraout_x10_00 + (extraout_x11_00 & extraout_x9_00) + (extraout_x9_00 & 7)) =
           extraout_w8_00;
      lVar11 = *plVar8;
      plVar3 = (long *)(lVar10 + (long)plVar5 * 0x10);
      plVar3[1] = plVar8[1];
      *plVar3 = lVar11;
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



/* Entry: 108959b14; end: 108959bf7;  */

void FUN_108959b14(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  undefined1 extraout_w8;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  plVar5 = (long *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  plVar4 = param_1;
  func_0x000104ab30b8();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar5;
      func_0x00010895bd3c(SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8));
      func_0x000107c2b954();
      func_0x00010895bec4();
      *(undefined1 *)(extraout_x10 + (extraout_x11 & extraout_x9) + (extraout_x9 & 7)) = extraout_w8
      ;
      lVar9 = *plVar5;
      plVar3 = (long *)(lVar8 + (long)plVar4 * 0x10);
      plVar3[1] = plVar5[1];
      *plVar3 = lVar9;
    }
    plVar5 = plVar5 + 2;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 108959bf8; end: 108959c33;  */

ulong FUN_108959bf8(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
}



/* Entry: 108959c34; end: 108959db3;  */

void FUN_108959c34(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 in_ZR;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar11;
  byte bVar17;
  long alStack_88 [3];
  long lStack_70;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [32];
  
  func_0x00010895baa8();
  FUN_1089599fc(alStack_88,param_2 + 0x18);
  FUN_108959db4(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bedc(alStack_88[0] + 0x38);
    if ((bool)in_ZR) {
      (**(code **)(**(long **)(alStack_88[0] + 0x150) + 0x38))
                (*(long **)(alStack_88[0] + 0x150),lStack_70,auStack_68);
    }
    lVar5 = 0;
    uVar6 = *(ulong *)(alStack_88[0] + 0x270);
    Hint_Prefetch(uVar6,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lStack_70;
    uVar4 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
            ((long)&PTR_LOOP_110c8acd8 + lStack_70) * -0x622015f714c7d297;
    bVar7 = (byte)uVar4 & 0x7f;
    uVar4 = uVar4 >> 7 ^ uVar6 >> 0xc;
    while( true ) {
      uVar4 = uVar4 & *(ulong *)(alStack_88[0] + 0x280);
      uVar11 = *(undefined8 *)(uVar6 + uVar4);
      bVar10 = (byte)((ulong)uVar11 >> 8);
      bVar12 = (byte)((ulong)uVar11 >> 0x10);
      bVar13 = (byte)((ulong)uVar11 >> 0x18);
      bVar14 = (byte)((ulong)uVar11 >> 0x20);
      bVar15 = (byte)((ulong)uVar11 >> 0x28);
      bVar16 = (byte)((ulong)uVar11 >> 0x30);
      bVar17 = (byte)((ulong)uVar11 >> 0x38);
      for (uVar8 = CONCAT17(-(bVar17 == bVar7),
                            CONCAT16(-(bVar16 == bVar7),
                                     CONCAT15(-(bVar15 == bVar7),
                                              CONCAT14(-(bVar14 == bVar7),
                                                       CONCAT13(-(bVar13 == bVar7),
                                                                CONCAT12(-(bVar12 == bVar7),
                                                                         CONCAT11(-(bVar10 == bVar7)
                                                                                  ,-((byte)uVar11 ==
                                                                                    bVar7)))))))) &
                   0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
        uVar3 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar9 = *(long *)(alStack_88[0] + 0x278);
        uVar3 = uVar4 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) &
                *(ulong *)(alStack_88[0] + 0x280);
        if (*(long *)(lVar9 + uVar3 * 0x10) == lStack_70) goto LAB_108959d60;
      }
      bVar10 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                   CONCAT16(-(bVar16 == 0x80),
                                            CONCAT15(-(bVar15 == 0x80),
                                                     CONCAT14(-(bVar14 == 0x80),
                                                              CONCAT13(-(bVar13 == 0x80),
                                                                       CONCAT12(-(bVar12 == 0x80),
                                                                                CONCAT11(-(bVar10 ==
                                                                                          0x80),-((
                                                  byte)uVar11 == 0x80)))))))),1);
      if ((bVar10 & 1) != 0) break;
      lVar5 = lVar5 + 8;
      uVar4 = lVar5 + uVar4;
    }
    uVar3 = alStack_88[0] + 0x270;
    FUN_108959a34();
    plVar1 = (long *)(*(long *)(alStack_88[0] + 0x278) + uVar3 * 0x10);
    *plVar1 = lStack_70;
    *(undefined1 *)(plVar1 + 1) = 0;
    lVar9 = *(long *)(alStack_88[0] + 0x278);
LAB_108959d60:
    *(undefined1 *)(lVar9 + uVar3 * 0x10 + 8) = 0;
    DataMemoryBarrier(2,3);
  }
  FUN_108956834(alStack_88);
  FUN_1089599d8(auStack_40);
  return;
}



/* Entry: 108959db4; end: 108959df7;  */

void FUN_108959db4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108956834(extraout_x8 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108959df8; end: 108959e1b;  */

undefined8 FUN_108959df8(undefined8 param_1)

{
  FUN_108959ed4();
  return param_1;
}



/* Entry: 108959e1c; end: 108959ed3;  */

void FUN_108959e1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined1 auStack_40 [32];
  
  func_0x00010895bc88();
  func_0x00010895beac();
  lVar3 = *(long *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  FUN_108959ed4(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bedc(lVar3 + 0x38);
    if ((bool)in_ZR) {
      (**(code **)(**(long **)(lVar3 + 0x150) + 0x40))(*(long **)(lVar3 + 0x150),uVar1);
    }
    lVar2 = lVar3 + 0x270;
    func_0x000108957e24(lVar2,uVar1);
    if (lVar2 != 0) {
      func_0x00010ae6cb48(lVar3 + 0x270,lVar2,0x10);
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bbc8();
  FUN_108959df8(auStack_40);
  return;
}



/* Entry: 108959ed4; end: 108959f0b;  */

void FUN_108959ed4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bcb8();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108959f0c; end: 108959f2f;  */

undefined8 FUN_108959f0c(undefined8 param_1)

{
  FUN_108959fa8();
  return param_1;
}



/* Entry: 108959f30; end: 108959fa7;  */

void FUN_108959f30(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined8 uStack_80;
  undefined1 auStack_40 [32];
  
  func_0x00010895baa8();
  func_0x00010895bcf8();
  FUN_108959fa8(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bb20(uStack_80);
    if ((bool)in_ZR) {
      func_0x00010895bfb0();
      (**(code **)(extraout_x8 + 0x28))();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bbc8();
  FUN_108959f0c(auStack_40);
  return;
}



/* Entry: 108959fa8; end: 108959fdf;  */

void FUN_108959fa8(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bf38();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 108959fe0; end: 10895a003;  */

undefined8 FUN_108959fe0(undefined8 param_1)

{
  FUN_10895a07c();
  return param_1;
}



/* Entry: 10895a004; end: 10895a07b;  */

void FUN_10895a004(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined8 uStack_80;
  undefined1 auStack_40 [32];
  
  func_0x00010895baa8();
  func_0x00010895bcf8();
  FUN_10895a07c(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bb20(uStack_80);
    if ((bool)in_ZR) {
      func_0x00010895bfb0();
      (**(code **)(extraout_x8 + 0x30))();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bbc8();
  FUN_108959fe0(auStack_40);
  return;
}



/* Entry: 10895a07c; end: 10895a0b3;  */

void FUN_10895a07c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bf38();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895a0b4; end: 10895a0d7;  */

undefined8 FUN_10895a0b4(undefined8 param_1)

{
  FUN_10895a178();
  return param_1;
}



/* Entry: 10895a0d8; end: 10895a177;  */

void FUN_10895a0d8(void)

{
  long unaff_x19;
  long lStack_70;
  undefined1 auStack_40 [32];
  
  func_0x00010895bc88();
  func_0x00010895beac();
  func_0x00010895baf8();
  FUN_10895a178(auStack_40);
  if (unaff_x19 != 0) {
    *(undefined1 *)(lStack_70 + 0x1b0) = 1;
    if (*(char *)(lStack_70 + 0x1d0) == '\x01') {
      FUN_108956f2c(lStack_70,lStack_70 + 0x1b4);
    }
    if (*(char *)(lStack_70 + 0x1f0) == '\x01') {
      FUN_108956f2c(lStack_70,lStack_70 + 0x1d4);
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bbc8();
  FUN_10895a0b4(auStack_40);
  return;
}



/* Entry: 10895a178; end: 10895a1af;  */

void FUN_10895a178(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bb94();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895a1b0; end: 10895a1d3;  */

undefined8 FUN_10895a1b0(undefined8 param_1)

{
  FUN_10895a250();
  return param_1;
}



/* Entry: 10895a1d4; end: 10895a24f;  */

void FUN_10895a1d4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 uStack_70;
  undefined1 auStack_40 [32];
  
  func_0x00010895bc88();
  func_0x00010895beac();
  func_0x00010895baf8();
  FUN_10895a250(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bb20(uStack_70);
    if ((bool)in_ZR) {
      func_0x00010895bea0(*(undefined8 *)(extraout_x8 + 0x150));
      (*extraout_x8_00)();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bbc8();
  FUN_10895a1b0(auStack_40);
  return;
}



/* Entry: 10895a250; end: 10895a287;  */

void FUN_10895a250(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bb94();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895a288; end: 10895a2ab;  */

undefined8 FUN_10895a288(undefined8 param_1)

{
  FUN_10895a36c();
  return param_1;
}



/* Entry: 10895a2ac; end: 10895a2d7;  */

void FUN_10895a2ac(void)

{
  func_0x00010895b998();
  func_0x00010895c018();
  FUN_108956c5c();
  return;
}



/* Entry: 10895a2d8; end: 10895a36b;  */

void FUN_10895a2d8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 auStack_98 [11];
  undefined1 auStack_40 [32];
  
  func_0x00010895baa8();
  FUN_10895a2ac(auStack_98,param_2 + 0x18);
  FUN_10895a36c(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bb20(auStack_98[0]);
    if ((bool)in_ZR) {
      func_0x00010895be10(auStack_98);
    }
    DataMemoryBarrier(2,3);
  }
  FUN_108956c68(auStack_98);
  FUN_10895a288(auStack_40);
  return;
}



/* Entry: 10895a36c; end: 10895a3af;  */

void FUN_10895a36c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108956c68(extraout_x8 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895a3b0; end: 10895a3d3;  */

undefined8 FUN_10895a3b0(undefined8 param_1)

{
  FUN_10895a540();
  return param_1;
}



/* Entry: 10895a3d4; end: 10895a53f;  */

void FUN_10895a3d4(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long unaff_x19;
  long lStack_e0;
  undefined1 auStack_b0 [31];
  undefined1 uStack_91;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x00010895ba48();
  uStack_38 = extraout_x8;
  func_0x00010895beac(&uStack_91);
  func_0x00010895baf8();
  FUN_10895a540(auStack_b0);
  if (unaff_x19 != 0) {
    *(undefined1 *)(lStack_e0 + 0x290) = 1;
    func_0x00010895bca4();
    in_ZR = *(int *)(lStack_e0 + 0x38) == 2;
    if (!(bool)in_ZR) {
      *(int *)(lStack_e0 + 0x38) = 2;
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x00010895bdf4(*(undefined8 *)(lStack_e0 + 0x260));
      (*extraout_x8_00)();
      FUN_108957714(lStack_e0);
      if (*(long **)(lStack_e0 + 0x150) == (long *)0x0) {
        lStack_90 = 0;
      }
      else {
        (**(code **)(**(long **)(lStack_e0 + 0x150) + 0x48))();
        lStack_90 = *(long *)(lStack_e0 + 0x150);
      }
      uStack_88 = *(undefined8 *)(lStack_e0 + 0x158);
      *(undefined8 *)(lStack_e0 + 0x150) = 0;
      *(undefined8 *)(lStack_e0 + 0x158) = 0;
      func_0x00010895ac1c();
      FUN_1089a3c0c();
      func_0x00010895be7c();
      uStack_80 = 0;
      uStack_78 = 0;
      lStack_90 = extraout_x8_01 + 0x10;
      uStack_88 = 0;
      uStack_70 = 5;
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x00010895be6c();
      param_2 = &lStack_90;
      (*extraout_x8_02)();
      func_0x00010895bddc();
    }
    func_0x000107c281f0(auStack_68);
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bb78();
  FUN_10895a3b0(auStack_b0);
  func_0x00010895b9e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895bddc();
  func_0x000107c281f0(auStack_68);
  DataMemoryBarrier(2,3);
  func_0x00010895bb78();
  puVar1 = auStack_b0;
  FUN_10895a3b0();
  do {
    func_0x00010895bb18();
  } while ((int)param_2 == 0);
  func_0x00010895bc80();
  func_0x00010895bbd0();
  if (extraout_x8_03 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(puVar1 + 0x10) = 0;
  }
  if (*(long *)(puVar1 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bb94();
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10895a540; end: 10895a577;  */

void FUN_10895a540(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    func_0x00010895bc3c();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bb94();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895a578; end: 10895a59b;  */

undefined8 FUN_10895a578(undefined8 param_1)

{
  FUN_10895a6c0();
  return param_1;
}



/* Entry: 10895a59c; end: 10895a5d7;  */

void FUN_10895a59c(long param_1,long param_2)

{
  undefined1 uStack_21;
  
  func_0x00010895bc74();
  func_0x00010895c030();
  FUN_10895a5d8(param_1 + 0x18,param_2 + 0x18,&uStack_21);
  return;
}



/* Entry: 10895a5d8; end: 10895a60f;  */

void FUN_10895a5d8(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010895bc74();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = extraout_x8;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  FUN_10895a610(param_1 + 3,param_2);
  return;
}



/* Entry: 10895a610; end: 10895a63b;  */

void FUN_10895a610(undefined8 param_1,undefined8 *param_2)

{
  FUN_108b8660c(param_1,param_2 + 3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10895a63c; end: 10895a6bf;  */

void FUN_10895a63c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 auStack_a0 [12];
  undefined1 auStack_40 [32];
  
  func_0x00010895baa8();
  FUN_10895a59c(auStack_a0,param_2 + 0x18);
  FUN_10895a6c0(auStack_40);
  if (unaff_x19 != 0) {
    func_0x00010895bb20(auStack_a0[0]);
    if ((bool)in_ZR) {
      func_0x00010895be10(auStack_a0);
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bd84();
  FUN_10895a578(auStack_40);
  return;
}



/* Entry: 10895a6c0; end: 10895a703;  */

void FUN_10895a6c0(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108956de8(extraout_x8 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895a704; end: 10895a727;  */

undefined8 FUN_10895a704(undefined8 param_1)

{
  FUN_10895a8f4();
  return param_1;
}



/* Entry: 10895a728; end: 10895a753;  */

void FUN_10895a728(void)

{
  func_0x00010895b998();
  func_0x00010895c018();
  func_0x00010895b458();
  return;
}



/* Entry: 10895a754; end: 10895a8f3;  */

void FUN_10895a754(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 **ppuVar2;
  int iVar3;
  undefined8 extraout_x8;
  long *plVar4;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_a9;
  long alStack_a8 [3];
  undefined1 auStack_90 [32];
  long alStack_70 [3];
  long *plStack_58;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  func_0x00010895ba48();
  puStack_c8 = &uStack_a9;
  iVar3 = (int)param_2 + 0x18;
  uStack_c0 = param_2;
  uStack_b8 = param_2;
  uStack_38 = extraout_x8;
  FUN_10895a728(alStack_a8);
  FUN_10895a8f4(&puStack_c8);
  if (unaff_x19 != 0) {
    iVar3 = (int)auStack_90;
    func_0x00010895b458(alStack_70);
    plVar1 = (long *)(alStack_a8[0] + 0x130);
    in_ZR = plVar1 == alStack_70;
    if (!(bool)in_ZR) {
      plVar4 = *(long **)(alStack_a8[0] + 0x148);
      if (plStack_58 == alStack_70) {
        in_ZR = plVar4 == plVar1;
        if ((bool)in_ZR) {
          func_0x00010895bdf4();
          (*extraout_x8_00)();
          func_0x00010895bba0(plStack_58);
          plStack_58 = (long *)0x0;
          func_0x00010895bdf4(*(undefined8 *)(alStack_a8[0] + 0x148));
          iVar3 = (int)alStack_70;
          (*extraout_x8_01)();
          func_0x00010895bba0(*(undefined8 *)(alStack_a8[0] + 0x148));
          *(undefined8 *)(alStack_a8[0] + 0x148) = 0;
          plStack_58 = alStack_70;
          func_0x00010895bf78(*(undefined8 *)(alStack_50[0] + 0x18),alStack_50);
          (**(code **)(alStack_50[0] + 0x20))(alStack_50);
        }
        else {
          func_0x00010895bdf4();
          func_0x00010895bf78();
          func_0x00010895bba0(plStack_58);
          plStack_58 = *(long **)(alStack_a8[0] + 0x148);
        }
        *(long **)(alStack_a8[0] + 0x148) = plVar1;
      }
      else {
        in_ZR = plVar4 == plVar1;
        if ((bool)in_ZR) {
          iVar3 = (int)alStack_70;
          (**(code **)(*plVar4 + 0x18))(plVar4);
          func_0x00010895bba0(*(undefined8 *)(alStack_a8[0] + 0x148));
          *(long **)(alStack_a8[0] + 0x148) = plStack_58;
          plStack_58 = alStack_70;
        }
        else {
          *(long **)(alStack_a8[0] + 0x148) = plStack_58;
          plStack_58 = plVar4;
        }
      }
    }
    func_0x00010895abd8(alStack_70);
    DataMemoryBarrier(2,3);
  }
  func_0x00010895be00();
  ppuVar2 = &puStack_c8;
  FUN_10895a704();
  func_0x00010895b9e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x00010895bc80();
    func_0x00010895bc30();
    func_0x00010895be00();
    FUN_10895a704(&puStack_c8);
  }
  func_0x00010895bb18();
  func_0x00010895bbd0();
  if (extraout_x8_02 != 0) {
    FUN_108956f00(extraout_x8_02 + 0x18);
    ppuVar2[2] = (undefined1 *)0x0;
  }
  if (ppuVar2[1] != (undefined1 *)0x0) {
    func_0x00010bd42e30();
    func_0x00010895bf44();
    ppuVar2[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 10895a8f4; end: 10895a92f;  */

void FUN_10895a8f4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108956f00(extraout_x8 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bf44();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895a930; end: 10895a953;  */

undefined8 FUN_10895a930(undefined8 param_1)

{
  FUN_10895aa88();
  return param_1;
}



/* Entry: 10895a954; end: 10895a98f;  */

void FUN_10895a954(long param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  func_0x00010895c030(*param_2);
  *(undefined8 *)(param_1 + 0x18) = param_2[3];
  uVar2 = param_2[4];
  *(undefined8 *)(param_1 + 0x28) = param_2[5];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 6);
  uVar1 = *(undefined2 *)((long)param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)((long)param_2 + 0x36);
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  return;
}



/* Entry: 10895a990; end: 10895aa87;  */

void FUN_10895a990(long param_1,long param_2)

{
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [32];
  undefined1 *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_59;
  undefined1 auStack_58 [40];
  long lStack_30;
  long lStack_28;
  
  puStack_78 = &uStack_59;
  lStack_70 = param_2;
  lStack_68 = param_2;
  FUN_10895a954(&plStack_b0,param_2 + 0x18);
  FUN_10895aa88(&puStack_78);
  if (param_1 != 0) {
    lStack_30 = 0;
    lStack_28 = 0;
    if (lStack_a0 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      lStack_28 = lStack_a0;
      if (lStack_a0 != 0) {
        lStack_30 = lStack_a8;
        if (lStack_a8 != 0) {
          FUN_108b80b94(auStack_58,0x7e7,&UNK_10f4ed5a2);
          (**(code **)(*plStack_b0 + 0xa0))(plStack_b0,auStack_98,auStack_58);
          func_0x000108b80d84(auStack_58);
        }
      }
    }
    func_0x000108955f94(&lStack_30);
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bf5c();
  FUN_10895a930(&puStack_78);
  return;
}



/* Entry: 10895aa88; end: 10895aac3;  */

void FUN_10895aa88(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108955f70(extraout_x8 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bf44();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895aac4; end: 10895aae7;  */

undefined8 FUN_10895aac4(undefined8 param_1)

{
  FUN_10895ab74();
  return param_1;
}



/* Entry: 10895aae8; end: 10895ab73;  */

void FUN_10895aae8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long lVar1;
  undefined1 auStack_40 [8];
  long lStack_38;
  long lStack_30;
  
  func_0x00010895bc88();
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  lVar1 = *(long *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  lStack_38 = param_2;
  lStack_30 = param_2;
  FUN_10895ab74(auStack_40);
  if (unaff_x19 != 0) {
    if ((lVar1 != 0) && (0 < *(long *)(lVar1 + 8))) {
      FUN_108956318(3);
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010895bd8c();
  FUN_10895aac4(auStack_40);
  return;
}



/* Entry: 10895ab74; end: 10895ac9f;  */

void FUN_10895ab74(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010895bbd0();
  if (extraout_x8 != 0) {
    FUN_108957a64(extraout_x8 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x00010895bcb8();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10895aca0; end: 10895ad53;  */

long * FUN_10895aca0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  param_1[5] = 0;
  while( true ) {
    puVar4 = (undefined8 *)param_1[2];
    uVar1 = (long)puVar4 - (long)puVar3 >> 3;
    if (uVar1 < 3) break;
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
  }
  if (uVar1 == 1) {
    lVar2 = 0x33;
  }
  else {
    if (uVar1 != 2) goto LAB_10895ad14;
    lVar2 = 0x66;
  }
  param_1[4] = lVar2;
LAB_10895ad14:
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



/* Entry: 10895ad54; end: 10895ad7f;  */

void FUN_10895ad54(long param_1)

{
  code *extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010895be34();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010895bcc4();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10895ad80; end: 10895ae07;  */

void FUN_10895ad80(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  
  func_0x00010895ba98();
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010895bb4c();
  if (*(int *)(lVar1 + 0x38) == 0) {
    if (*(long *)(lVar1 + 0x250) != 0) {
      FUN_108956f7c();
    }
  }
  else {
    FUN_108956318(5);
  }
  func_0x00010895bf14();
  func_0x00010895b9e8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010895bf14();
  func_0x00010895bb18();
  return;
}



/* Entry: 10895ae08; end: 10895ae23;  */

void FUN_10895ae08(void)

{
  return;
}


