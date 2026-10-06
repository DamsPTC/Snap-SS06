/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8a93ac; end: 10b8a9413;  */

void FUN_10b8a93ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b8a9414; end: 10b8a954f;  */

long * FUN_10b8a9414(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,long *param_5,
                    long *param_6,byte param_7,ulong param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 auStack_e8 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_a8;
  long lStack_a0;
  long alStack_98 [3];
  long lStack_80;
  undefined8 uStack_68;
  
  func_0x00010b8a9d40();
  lVar11 = param_2 + 0x20;
  uStack_68 = extraout_x8;
  FUN_10b8a9768(alStack_98);
  plVar6 = param_4;
  func_0x0001081053cc();
  lVar8 = *param_4;
  lVar10 = param_4[3];
  plStack_a8 = plVar6;
  lStack_a0 = lVar11;
  while (lVar11 = lStack_a0, plStack_a8 != (long *)(lVar8 + lVar10)) {
    if ((param_8 & 1) == 0) {
      plVar6 = alStack_98;
      FUN_10b8a5724(plVar6,lStack_a0);
      if ((long *)(alStack_98[0] + lStack_80) == plVar6) goto LAB_10b8a94b0;
    }
    else {
LAB_10b8a94b0:
      func_0x0001081034b0(alStack_98,lVar11);
      func_0x0001081034d8();
    }
    func_0x00010810544c(&plStack_a8);
  }
  plVar6 = (long *)(param_2 + 0x50);
  if (*param_5 != 0) {
    plVar6 = param_5;
  }
  uVar5 = *param_6 == 0;
  plVar9 = (long *)(param_2 + 0x58);
  if (!(bool)uVar5) {
    plVar9 = param_6;
  }
  plStack_a8 = (long *)CONCAT71(plStack_a8._1_7_,param_7 | *(byte *)(param_2 + 0x68));
  plVar7 = alStack_98;
  FUN_10b8a9550(param_1,param_3,plVar7,plVar6,plVar9,*(undefined8 *)(param_2 + 0x60),&plStack_a8);
  plVar6 = alStack_98;
  func_0x00010810452c();
  func_0x00010b8a9d2c(uStack_68);
  if ((bool)uVar5) {
    return plVar6;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b8a9550;
  uStack_d0 = param_1;
  uStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010b8a9d40();
  uStack_d8 = extraout_x8_01;
  FUN_10b8a9bb8(auStack_e8);
  *extraout_x8_00 = auStack_e8[0];
  func_0x00010b8a9d2c(uStack_d8);
  if ((bool)uVar5) {
    return plVar6;
  }
  ___stack_chk_fail();
  lVar11 = *plVar6;
  lVar8 = plVar6[1] - lVar11;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar12 = plVar6[2] - lVar11 >> 2;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(plVar6[2] - lVar11)) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar10 = 0;
    }
    else {
      if (uVar12 >> 0x3d != 0) goto LAB_10b8a9650;
      lVar10 = uVar12 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar10 + lVar8);
    *puVar2 = 0;
    _memcpy(puVar2 + -(lVar8 >> 3),lVar11,lVar8);
    *plVar6 = (long)(puVar2 + -(lVar8 >> 3));
    plVar6[1] = (long)(puVar2 + 1);
    plVar6[2] = lVar10 + uVar12 * 8;
    if (lVar11 != 0) {
      __ZdlPv(lVar11);
    }
    return puVar2 + 1;
  }
  FUN_10bdb3e74();
LAB_10b8a9650:
  func_0x000104bfe188();
  plVar9 = (long *)plVar6[1];
  lVar11 = plVar7[1];
  lVar8 = *plVar7;
  plVar9[1] = plVar7[1];
  *plVar9 = lVar8;
  if (lVar11 != 0) {
    plVar7 = (long *)(lVar11 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6[1] = (long)(plVar9 + 2);
  return plVar6;
}



/* Entry: 10b8a9550; end: 10b8a959b;  */

long * FUN_10b8a9550(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b8a9d40();
  uStack_28 = extraout_x8;
  FUN_10b8a9bb8(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b8a9d2c(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar7 = *param_2;
  lVar9 = param_2[1] - lVar7;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_2[2] - lVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_2[2] - lVar7)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_10b8a9650;
      lVar5 = uVar8 << 3;
      __Znwm();
    }
    puVar6 = (undefined8 *)(lVar5 + lVar9);
    *puVar6 = 0;
    _memcpy(puVar6 + -(lVar9 >> 3),lVar7,lVar9);
    *param_2 = (long)(puVar6 + -(lVar9 >> 3));
    param_2[1] = (long)(puVar6 + 1);
    param_2[2] = lVar5 + uVar8 * 8;
    if (lVar7 != 0) {
      __ZdlPv(lVar7);
    }
    return puVar6 + 1;
  }
  FUN_10bdb3e74();
LAB_10b8a9650:
  func_0x000104bfe188();
  puVar6 = (undefined8 *)param_2[1];
  lVar7 = param_3[1];
  uVar10 = *param_3;
  puVar6[1] = param_3[1];
  *puVar6 = uVar10;
  if (lVar7 != 0) {
    plVar2 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_2[1] = (long)(puVar6 + 2);
  return param_2;
}



/* Entry: 10b8a959c; end: 10b8a9653;  */

long * FUN_10b8a959c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *param_1;
  lVar9 = param_1[1] - lVar7;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar7)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_10b8a9650;
      lVar5 = uVar8 << 3;
      __Znwm();
    }
    puVar6 = (undefined8 *)(lVar5 + lVar9);
    *puVar6 = 0;
    _memcpy(puVar6 + -(lVar9 >> 3),lVar7,lVar9);
    *param_1 = (long)(puVar6 + -(lVar9 >> 3));
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = lVar5 + uVar8 * 8;
    if (lVar7 != 0) {
      __ZdlPv(lVar7);
    }
    return puVar6 + 1;
  }
  FUN_10bdb3e74();
LAB_10b8a9650:
  func_0x000104bfe188();
  puVar6 = (undefined8 *)param_1[1];
  lVar7 = param_2[1];
  uVar10 = *param_2;
  puVar6[1] = param_2[1];
  *puVar6 = uVar10;
  if (lVar7 != 0) {
    plVar2 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[1] = (long)(puVar6 + 2);
  return param_1;
}



/* Entry: 10b8a9654; end: 10b8a9687;  */

void FUN_10b8a9654(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 10b8a9688; end: 10b8a9767;  */

long * FUN_10b8a9688(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar9 = *param_1;
  lVar10 = param_1[1] - lVar9;
  lVar11 = lVar10 >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - lVar9 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - lVar9)) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 >> 0x3c == 0) {
      lVar6 = uVar8 << 4;
      __Znwm();
      puVar3 = (undefined8 *)(lVar6 + lVar10);
      lVar7 = param_2[1];
      uVar12 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar12;
      if (lVar7 != 0) {
        plVar2 = (long *)(lVar7 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar9 = *param_1;
        lVar10 = param_1[1] - lVar9;
        lVar11 = lVar10 >> 4;
      }
      _memcpy(puVar3 + lVar11 * -2,lVar9,lVar10);
      *param_1 = (long)(puVar3 + lVar11 * -2);
      param_1[1] = (long)(puVar3 + 2);
      param_1[2] = lVar6 + uVar8 * 0x10;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
      return puVar3 + 2;
    }
  }
  else {
    func_0x00010bdb3e80();
  }
  func_0x000104bfe188();
  FUN_10b8a9788();
  return param_1;
}



/* Entry: 10b8a9768; end: 10b8a9787;  */

void FUN_10b8a9768(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b8a9788(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10b8a9788; end: 10b8a98b3;  */

long * FUN_10b8a9788(long *param_1,long *param_2)

{
  byte bVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  param_1[5] = 0;
  *param_1 = (long)&UNK_10dd5b8b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar4 = param_2;
  if (param_2[3] != 0) {
    plVar4 = (long *)(0xffffffffffffffff >> (LZCOUNT(param_2[3]) & 0x3fU));
    func_0x00010810572c(param_1);
  }
  plVar3 = param_2;
  func_0x0001081053cc();
  lVar5 = *param_2;
  lVar6 = param_2[3];
  plStack_60 = plVar3;
  plStack_58 = plVar4;
  while (plVar4 = plStack_58, plStack_60 != (long *)(lVar5 + lVar6)) {
    pplVar2 = &plStack_68;
    plStack_68 = param_1 + 5;
    func_0x000108105a30(pplVar2,plStack_58,plStack_58 + 1);
    plVar3 = param_1;
    func_0x0001081056b0(param_1,pplVar2);
    bVar1 = (byte)pplVar2 & 0x7f;
    *(byte *)(*param_1 + (long)plVar3) = bVar1;
    *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(plVar3 + -1)) + 1) = bVar1;
    plVar3 = (long *)(param_1[1] + (long)plVar3 * 0xa0);
    *plVar3 = *plVar4;
    func_0x000108105aa0(plVar3 + 1,plVar4 + 1);
    func_0x00010810544c(&plStack_60);
  }
  lVar5 = param_2[2];
  param_1[2] = lVar5;
  param_1[5] = param_1[5] - lVar5;
  return param_1;
}



/* Entry: 10b8a98b4; end: 10b8a98d7;  */

undefined8 FUN_10b8a98b4(undefined8 param_1)

{
  FUN_10b8a98d8(param_1,0);
  return param_1;
}



/* Entry: 10b8a98d8; end: 10b8a98ef;  */

void FUN_10b8a98d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b8a990c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8a98f0; end: 10b8a990b;  */

void FUN_10b8a98f0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b8a990c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a990c; end: 10b8a9973;  */

undefined8 FUN_10b8a990c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b8a9938(&uStack_28);
  return param_1;
}



/* Entry: 10b8a9974; end: 10b8a997b;  */

void FUN_10b8a9974(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    FUN_10b8a9b90();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b8a997c; end: 10b8a99b3;  */

void FUN_10b8a997c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    FUN_10b8a9b90();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b8a99b4; end: 10b8a99d3;  */

void FUN_10b8a99b4(void)

{
  func_0x00010b8a9d90();
  FUN_10b8a99d4();
  return;
}



/* Entry: 10b8a99d4; end: 10b8a9a57;  */

undefined1 * FUN_10b8a99d4(long *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar2 = auStack_70;
  func_0x00010b8a9d40();
  uVar4 = 1;
  uStack_58 = extraout_x8;
  FUN_10b8a9a58(auStack_70);
  func_0x00010b8a9d70();
  FUN_10b8a9ab0();
  lVar1 = lStack_60;
  lStack_60 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b8a9b80();
  func_0x00010b8a9d2c(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10b8a9a80();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b8a9a58; end: 10b8a9a7f;  */

long FUN_10b8a9a58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8a9a80();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8a9a80; end: 10b8a9aaf;  */

undefined8 * FUN_10b8a9a80(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1745d1745d1745e) {
    puVar1 = (undefined8 *)(param_2 * 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70d08;
  FUN_10b8a9b04(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a9ab0; end: 10b8a9adf;  */

undefined8 * FUN_10b8a9ab0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70d08;
  FUN_10b8a9b04(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a9ae0; end: 10b8a9ae3;  */

void FUN_10b8a9ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70d08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8a9ae4; end: 10b8a9af7;  */

void FUN_10b8a9ae4(void)

{
  FUN_10b8a9b70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a9af8; end: 10b8a9b03;  */

long FUN_10b8a9af8(long param_1)

{
  func_0x000108104504(param_1 + 0x98);
  func_0x00010b8a3254(param_1 + 0x90);
  func_0x00010b8a2e48(param_1 + 0x78);
  func_0x00010b8a2eb0(param_1 + 0x30);
  func_0x000108104e70(param_1 + 0x28);
  func_0x000107c278f4(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10b8a9b04; end: 10b8a9b6f;  */

undefined8
FUN_10b8a9b04(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6,undefined1 *param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar4 = *param_2;
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = 0;
  func_0x00010b8a2444(param_1,uVar4,&lStack_28,param_4,&uStack_30,*param_6,*param_7);
  func_0x0001081044e0(uStack_30);
  func_0x000107c278f8(lStack_28);
  return param_1;
}



/* Entry: 10b8a9b70; end: 10b8a9b8f;  */

void FUN_10b8a9b70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70d08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8a9b90; end: 10b8a9bb7;  */

long FUN_10b8a9b90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b8a9bb8; end: 10b8a9bd7;  */

void FUN_10b8a9bb8(void)

{
  func_0x00010b8a9d90();
  FUN_10b8a9bd8();
  return;
}



/* Entry: 10b8a9bd8; end: 10b8a9c5f;  */

undefined8 * FUN_10b8a9bd8(undefined8 param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 auStack_70 [2];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar2 = auStack_70;
  func_0x00010b8a9d40();
  uStack_58 = extraout_x8;
  FUN_10b8a85f4(auStack_70,1);
  func_0x00010b8a9d70();
  FUN_10b8a9c60();
  lVar1 = lStack_60;
  lStack_60 = 0;
  FUN_10b8a85d8(param_1,lVar1 + 0x18);
  FUN_10b8a87f4();
  func_0x00010b8a9d2c(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110d70c18;
  puVar2[1] = 0;
  FUN_10b8a9c94(puVar2 + 3);
  return puVar2;
}



/* Entry: 10b8a9c60; end: 10b8a9c93;  */

undefined8 * FUN_10b8a9c60(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d70c18;
  param_1[1] = 0;
  FUN_10b8a9c94(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a9c94; end: 10b8a9d2b;  */

/* WARNING: Possible PIC construction at 0x00010b8a9d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8a9d08) */
/* WARNING: Removing unreachable block (ram,0x00010b8a9d28) */
/* WARNING: Removing unreachable block (ram,0x00010b8a9d0c) */

void FUN_10b8a9c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined1 auStack_78 [56];
  
  func_0x00010b8a9d40();
  FUN_10b8a8740(auStack_78,param_3);
  FUN_10b8a906c(param_1,param_2,auStack_78,param_4,param_5,param_6,*param_7);
  func_0x00010810452c(auStack_78);
  return;
}



/* Entry: 10b8a9d2c; end: 10b8a9e4f;  */

void FUN_10b8a9d2c(void)

{
  return;
}



/* Entry: 10b8a9e50; end: 10b8a9e8f;  */

undefined8 * FUN_10b8a9e50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70d58;
  FUN_10b8a1a98(param_1 + 4);
  func_0x000107c278f4(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a9e90; end: 10b8a9e93;  */

undefined8 * FUN_10b8a9e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70d58;
  FUN_10b8a1a98(param_1 + 4);
  func_0x000107c278f4(param_1 + 3);
  return param_1;
}



/* Entry: 10b8a9e94; end: 10b8a9ea7;  */

void FUN_10b8a9e94(void)

{
  FUN_10b8a9e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8a9ea8; end: 10b8aa0ff;  */

void FUN_10b8a9ea8(long *param_1,undefined8 param_2,long *param_3,long *param_4,undefined1 param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long lVar10;
  long *plVar11;
  undefined8 ***pppuStack_268;
  ulong uStack_260;
  byte bStack_251;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined1 *puStack_230;
  long *plStack_228;
  undefined1 **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined1 auStack_200 [16];
  byte bStack_1f0;
  undefined8 auStack_1e8 [2];
  byte bStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  byte bStack_1b8;
  undefined1 auStack_1b0 [8];
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined1 auStack_198 [16];
  undefined1 uStack_188;
  undefined1 *puStack_180;
  long alStack_178 [2];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [48];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  short sStack_6e;
  undefined1 uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_3;
  plVar9 = param_4;
  FUN_10b8a3d20(&lStack_108,param_1,*(undefined8 *)(*param_3 + 0x10));
  lStack_88 = *param_3;
  lStack_100 = *(long *)(lStack_88 + 0x10);
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_88 = *param_3;
  }
  plVar7 = (long *)(lStack_88 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar10 = *param_3;
  uStack_6f = *(undefined1 *)(lVar10 + 0x38);
  lStack_f8 = lStack_108;
  lStack_f0 = *param_4;
  if (lStack_f0 != 0) {
    plVar7 = (long *)(lStack_f0 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = *param_3;
  }
  uStack_118 = 1;
  uStack_120 = 0;
  uStack_d8 = 1;
  uStack_e0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  sStack_6e = 0;
  uStack_6c = 1;
  lStack_110 = *(long *)(lVar10 + 0x10);
  puStack_e8 = auStack_d0;
  uStack_70 = param_5;
  FUN_10b8a120c(param_2,&lStack_110);
  plVar7 = &lStack_100;
  func_0x0001081034d8();
  FUN_10b8a24a8(&lStack_100);
  func_0x0001081044e0(0);
  func_0x000107c278f8(0);
  plVar2 = *(long **)(*param_3 + 0x28);
  for (plVar11 = *(long **)(*param_3 + 0x20); plVar11 != plVar2; plVar11 = plVar11 + 2) {
    FUN_10b8a3d20(&lStack_110,param_1,*plVar11);
    lStack_100 = *plVar11;
    if (lStack_110 != 0) {
      piVar1 = (int *)(lStack_110 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_88 = *param_3;
    if (lStack_88 != 0) {
      plVar7 = (long *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_6f = *(undefined1 *)((long)plVar11 + 9);
    lStack_f8 = lStack_110;
    lStack_f0 = 0;
    uStack_d8 = uStack_118;
    uStack_e0 = uStack_120;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    if (lStack_88 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(long *)(lStack_88 + 0x10) != lStack_100;
    }
    sStack_6e = (ushort)bVar4 << 8;
    uStack_6c = 1;
    puStack_e8 = auStack_d0;
    func_0x0001081034b0(param_2,plVar11);
    plVar7 = &lStack_100;
    func_0x0001081034d8();
    FUN_10b8a24a8(&lStack_100);
    func_0x0001081044e0(0);
    func_0x000107c278f8(0);
    func_0x000107c278f8(lStack_110);
  }
  func_0x000107c278f8(lStack_108);
  uVar5 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68;
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  uStack_128 = 0x10b8aa100;
  plStack_150 = plVar11;
  plStack_148 = param_1;
  uStack_140 = param_2;
  plStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010b8abb84();
  uStack_158 = extraout_x8;
  FUN_10b9a9358(&puStack_180);
  if (puStack_180 == (undefined1 *)0x0) {
    func_0x00010b8abcfc();
    uStack_1a8 = extraout_x8_01;
  }
  else {
    func_0x00010b8abd08();
    uStack_1a8 = extraout_x8_00;
  }
  uStack_1a0 = 0;
  auStack_198[0] = 0;
  uStack_188 = 0;
  FUN_10b989d9c(auStack_1c8,auStack_1b0);
  if ((bStack_1b8 & 1) == 0) {
    plVar8 = (long *)&UNK_10f7ca706;
    func_0x00010b8abbd0();
    func_0x00010b8abba8();
  }
  else {
    func_0x000107c310ac(auStack_1b0);
    uStack_1d0 = 0;
    uVar5 = uStack_1a0 == uStack_1a8;
    if (uStack_1a0 < uStack_1a8) {
      func_0x00010b9a71b4(auStack_1e8,auStack_1b0);
      if ((bStack_1d8 & 1) == 0) {
        plVar8 = (long *)&UNK_10f7ca713;
        func_0x00010b8abbd0();
        func_0x00010b8abba8();
      }
      else {
        FUN_10b989b50(auStack_200,auStack_1b0);
        if ((bStack_1f0 & 1) == 0) {
          plVar8 = (long *)&UNK_10f7ca720;
          func_0x00010b8abbd0();
        }
        else {
          func_0x000107c310ac(auStack_1b0);
          puVar6 = auStack_1b0;
          func_0x000107c31094();
          if (((ulong)puVar6 & 1) != 0) {
            func_0x00010b8abcd4();
            if ((bStack_1f0 & 1) == 0) goto LAB_10b8aa2ec;
            param_1 = alStack_178;
            FUN_10b9a8f04(auStack_168,auStack_200);
            plVar8 = (long *)0x2;
            func_0x00010b8aa378(&uStack_208,alStack_178);
            FUN_10b8aa3bc(&uStack_1d0,&uStack_208);
            func_0x000104bddf60(uStack_208);
            lVar10 = 0x10;
            do {
              FUN_10b9a8d98((long)param_1 + lVar10);
              lVar10 = lVar10 + -0x10;
              uVar5 = lVar10 == -0x10;
            } while (!(bool)uVar5);
            func_0x00010b8abcc4();
            plVar11 = (long *)0xfffffffffffffff0;
            goto LAB_10b8aa258;
          }
          FUN_10b9a6d50(alStack_178,auStack_1b0);
        }
        func_0x00010b8abba8();
        func_0x00010b8abcc4();
      }
    }
    else {
      func_0x00010b8abcd4();
      plVar8 = (long *)0x1;
      func_0x00010b8aa378(auStack_1e8,alStack_178);
      FUN_10b8aa3bc(&uStack_1d0,auStack_1e8);
      func_0x000104bddf60(auStack_1e8[0]);
      FUN_10b9a8d98(alStack_178);
LAB_10b8aa258:
      func_0x00010b9a8f84(alStack_178,&uStack_1d0);
      plVar7 = alStack_178;
      func_0x00010b8abbc8();
      FUN_10b9a8d98(alStack_178);
    }
    func_0x000104bddf60(uStack_1d0);
  }
  func_0x000107c310b8(auStack_198);
  func_0x000107c278f8(puStack_180);
  func_0x00010b8abb70(uStack_158);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = puStack_180;
LAB_10b8aa2ec:
  func_0x0001080da3e4();
  uStack_218 = 0x10b8aa2f0;
  plStack_250 = plVar8;
  plStack_248 = plVar9;
  plStack_240 = plVar11;
  plStack_238 = param_1;
  puStack_230 = auStack_1b0;
  plStack_228 = param_3;
  ppuStack_220 = &puStack_130;
  func_0x000107c2793c(&UNK_10f7ca8c4);
  func_0x000107c3173c(&pppuStack_268);
  if (-1 < (char)bStack_251) {
    uStack_260 = (ulong)bStack_251;
    pppuStack_268 = &pppuStack_268;
  }
  FUN_10b9a736c(plVar7,pppuStack_268,uStack_260);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_268);
  FUN_10b9a6d50(puVar6,plVar7);
  return;
}



/* Entry: 10b8aa100; end: 10b8aa3bb;  */

void FUN_10b8aa100(undefined8 param_1,undefined1 *param_2,undefined *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  long lVar2;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  byte bStack_d0;
  undefined8 auStack_c8 [2];
  byte bStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  byte bStack_98;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [16];
  undefined1 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x00010b8abb84();
  uStack_38 = extraout_x8;
  FUN_10b9a9358(&puStack_60);
  if (puStack_60 == (undefined1 *)0x0) {
    func_0x00010b8abcfc();
    uStack_88 = extraout_x8_01;
  }
  else {
    func_0x00010b8abd08();
    uStack_88 = extraout_x8_00;
  }
  uStack_80 = 0;
  auStack_78[0] = 0;
  uStack_68 = 0;
  FUN_10b989d9c(auStack_a8,auStack_90);
  if ((bStack_98 & 1) == 0) {
    param_3 = &UNK_10f7ca706;
    func_0x00010b8abbd0();
    func_0x00010b8abba8();
  }
  else {
    func_0x000107c310ac(auStack_90);
    uStack_b0 = 0;
    in_ZR = uStack_80 == uStack_88;
    if (uStack_80 < uStack_88) {
      func_0x00010b9a71b4(auStack_c8,auStack_90);
      if ((bStack_b8 & 1) == 0) {
        param_3 = &UNK_10f7ca713;
        func_0x00010b8abbd0();
        func_0x00010b8abba8();
      }
      else {
        FUN_10b989b50(auStack_e0,auStack_90);
        if ((bStack_d0 & 1) == 0) {
          param_3 = &UNK_10f7ca720;
          func_0x00010b8abbd0();
        }
        else {
          func_0x000107c310ac(auStack_90);
          puVar1 = auStack_90;
          func_0x000107c31094();
          if (((ulong)puVar1 & 1) != 0) {
            func_0x00010b8abcd4();
            if ((bStack_d0 & 1) == 0) goto LAB_10b8aa2ec;
            unaff_x21 = auStack_58;
            FUN_10b9a8f04(auStack_48,auStack_e0);
            param_3 = (undefined *)0x2;
            func_0x00010b8aa378(&uStack_e8,auStack_58);
            FUN_10b8aa3bc(&uStack_b0,&uStack_e8);
            func_0x000104bddf60(uStack_e8);
            lVar2 = 0x10;
            do {
              FUN_10b9a8d98(unaff_x21 + lVar2);
              lVar2 = lVar2 + -0x10;
              in_ZR = lVar2 == -0x10;
            } while (!(bool)in_ZR);
            func_0x00010b8abcc4();
            unaff_x22 = 0xfffffffffffffff0;
            goto LAB_10b8aa258;
          }
          FUN_10b9a6d50(auStack_58,auStack_90);
        }
        func_0x00010b8abba8();
        func_0x00010b8abcc4();
      }
    }
    else {
      func_0x00010b8abcd4();
      param_3 = (undefined *)0x1;
      func_0x00010b8aa378(auStack_c8,auStack_58);
      FUN_10b8aa3bc(&uStack_b0,auStack_c8);
      func_0x000104bddf60(auStack_c8[0]);
      FUN_10b9a8d98(auStack_58);
LAB_10b8aa258:
      func_0x00010b9a8f84(auStack_58,&uStack_b0);
      param_2 = auStack_58;
      func_0x00010b8abbc8();
      FUN_10b9a8d98(auStack_58);
    }
    func_0x000104bddf60(uStack_b0);
  }
  func_0x000107c310b8(auStack_78);
  func_0x000107c278f8(puStack_60);
  func_0x00010b8abb70(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puStack_60;
LAB_10b8aa2ec:
  func_0x0001080da3e4();
  puStack_130 = param_3;
  uStack_128 = param_4;
  uStack_120 = unaff_x22;
  puStack_118 = unaff_x21;
  puStack_110 = auStack_90;
  func_0x000107c2793c(&UNK_10f7ca8c4);
  func_0x000107c3173c(&ppuStack_148);
  if (-1 < (char)bStack_131) {
    uStack_140 = (ulong)bStack_131;
    ppuStack_148 = &ppuStack_148;
  }
  FUN_10b9a736c(param_2,ppuStack_148,uStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_148);
  FUN_10b9a6d50(puVar1,param_2);
  return;
}



/* Entry: 10b8aa3bc; end: 10b8aa3f3;  */

undefined8 * FUN_10b8aa3bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000104bddf60(uVar1);
  }
  return param_1;
}



/* Entry: 10b8aa3f4; end: 10b8aa67f;  */

double * FUN_10b8aa3f4(double param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  undefined *puVar14;
  undefined8 uVar15;
  double *pdVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  double *extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  double *extraout_x8_10;
  double extraout_x9;
  double extraout_x9_00;
  double dVar17;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar18;
  double *unaff_x19;
  undefined8 uVar19;
  double *pdVar20;
  double *pdVar21;
  double *unaff_x22;
  long lVar22;
  double *pdVar23;
  double *unaff_x23;
  double *unaff_x24;
  undefined1 ****ppppuVar24;
  undefined8 uVar25;
  code *pcVar26;
  double *pdVar27;
  double *pdStack_3d0;
  double adStack_3c8 [2];
  double dStack_3b8;
  double *pdStack_3b0;
  undefined8 uStack_3a8;
  double *pdStack_3a0;
  undefined1 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  double dStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  char cStack_338;
  long lStack_328;
  long lStack_320;
  double *pdStack_318;
  double dStack_310;
  undefined2 uStack_308;
  double dStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  ushort uStack_2d8;
  undefined1 uStack_2d0;
  undefined2 uStack_2c8;
  double dStack_2c0;
  int iStack_2b8;
  char cStack_2b0;
  undefined8 uStack_2a8;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [16];
  byte bStack_228;
  double adStack_220 [2];
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  undefined1 uStack_1f8;
  double *pdStack_1f0;
  double dStack_1e8;
  undefined2 uStack_1e0;
  double *pdStack_1d8;
  undefined2 uStack_1d0;
  double *pdStack_1c8;
  undefined2 uStack_1c0;
  double *pdStack_1b8;
  undefined2 uStack_1b0;
  double *pdStack_1a8;
  undefined2 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  byte bStack_120;
  double adStack_118 [2];
  byte bStack_108;
  undefined8 auStack_100 [2];
  byte bStack_f0;
  undefined8 auStack_e8 [2];
  byte bStack_d8;
  double adStack_d0 [2];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 uStack_a8;
  double *pdStack_a0;
  double dStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  double dStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  double **ppdVar4;
  
  func_0x00010b8abb84();
  uStack_48 = extraout_x8;
  FUN_10b9a9358(&pdStack_a0);
  if ((bRam00000001137fcd00 & 1) == 0) {
    iVar7 = 0x137fcd00;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010b8abc30();
      ___cxa_guard_release(0x1137fcd00);
    }
  }
  uVar5 = pdStack_a0 == pdRam00000001137fccf8;
  if ((bool)uVar5) {
    uStack_90 = 1;
    dStack_98 = 0.0;
    pdVar20 = (double *)0x0;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(&dStack_98);
LAB_10b8aa5c8:
    func_0x000107c278f8();
    func_0x00010b8abb70(uStack_48);
    if ((bool)uVar5) {
      return pdStack_a0;
    }
    ___stack_chk_fail();
    pdVar21 = pdStack_a0;
  }
  else {
    if (pdStack_a0 == (double *)0x0) {
      func_0x00010b8abcfc();
    }
    else {
      func_0x00010b8abd08();
    }
    uStack_c0 = 0;
    auStack_b8[0] = 0;
    uStack_a8 = 0;
    pdVar20 = (double *)&UNK_10f7ca72d;
    pdVar23 = adStack_d0;
    func_0x000107c310a8(pdVar23,&UNK_10f7ca72d,7);
    func_0x00010b8abca4(auStack_e8);
    if ((bStack_d8 & 1) == 0) {
      puVar14 = &UNK_10f7ca735;
LAB_10b8aa59c:
      uVar15 = 0x11;
LAB_10b8aa5a8:
      pdVar20 = adStack_d0;
      func_0x00010b8aa2f0(&dStack_98,pdVar20,puVar14,uVar15);
      *unaff_x19 = 9.88131291682493e-324;
      unaff_x19[1] = dStack_98;
      dStack_98 = 0.0;
      func_0x00010b8abbc0();
LAB_10b8aa5c0:
      func_0x000107c310b8(auStack_b8);
      goto LAB_10b8aa5c8;
    }
    func_0x00010b8abca4(auStack_100);
    if ((bStack_f0 & 1) == 0) {
      puVar14 = &UNK_10f7ca747;
      goto LAB_10b8aa59c;
    }
    func_0x00010b8abca4(adStack_118);
    if ((bStack_108 & 1) == 0) {
      puVar14 = &UNK_10f7ca759;
      uVar15 = 0xe;
      goto LAB_10b8aa5a8;
    }
    FUN_10b989b50(auStack_130,adStack_d0);
    if ((bStack_120 & 1) == 0) {
      pdVar20 = adStack_d0;
      func_0x00010b8aa2f0(&dStack_98,pdVar20,&UNK_10f7ca768,0xf);
LAB_10b8aa634:
      *unaff_x19 = 9.88131291682493e-324;
      unaff_x19[1] = dStack_98;
      dStack_98 = 0.0;
      func_0x00010b8abbc0();
LAB_10b8aa648:
      func_0x00010b8abcc4();
      goto LAB_10b8aa5c0;
    }
    pdVar21 = adStack_d0;
    func_0x000107c31094();
    if (((ulong)pdVar21 & 1) == 0) {
      FUN_10b9a6d50(&dStack_98,adStack_d0);
      goto LAB_10b8aa634;
    }
    uStack_90 = 7;
    dStack_98 = (double)CONCAT71(dStack_98._1_7_,(char)pdVar23);
    uStack_80 = 6;
    uStack_88 = auStack_e8[0];
    uStack_70 = 6;
    uStack_78 = auStack_100[0];
    uStack_60 = 6;
    dStack_68 = adStack_118[0];
    param_1 = adStack_118[0];
    if ((bStack_120 & 1) != 0) {
      FUN_10b9a8f04(auStack_58,auStack_130);
      func_0x00010b8aa378(&uStack_138,&dStack_98,5);
      lVar22 = 0x40;
      param_1 = adStack_118[0];
      do {
        FUN_10b9a8d98((long)&dStack_98 + lVar22);
        lVar22 = lVar22 + -0x10;
        uVar5 = lVar22 == -0x10;
      } while (!(bool)uVar5);
      func_0x00010b9a8f84(&dStack_98,&uStack_138);
      pdVar20 = (double *)0x0;
      func_0x00010b8abbc8();
      FUN_10b9a8d98(&dStack_98);
      func_0x000104bddf60(uStack_138);
      unaff_x22 = (double *)0xfffffffffffffff0;
      goto LAB_10b8aa648;
    }
  }
  func_0x0001080da3e4();
  pcStack_148 = FUN_10b8aa680;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010b8abb84();
  uStack_198 = extraout_x8_00;
  FUN_10b9a9358(&pdStack_1f0);
  if ((bRam00000001137fcd10 & 1) == 0) {
    pdVar21 = (double *)0x1137fcd10;
    ___cxa_guard_acquire();
    if ((int)pdVar21 != 0) {
      func_0x00010b8abc30();
      pdVar21 = (double *)0x1137fcd10;
      ___cxa_guard_release();
    }
  }
  uVar5 = pdStack_1f0 == pdRam00000001137fcd08;
  pdVar23 = unaff_x22;
  if ((bool)uVar5) {
    uStack_1e0 = 1;
    dStack_1e8 = 0.0;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(&dStack_1e8);
    pdVar27 = unaff_x23;
LAB_10b8aa86c:
    func_0x000107c278f8();
    func_0x00010b8abb70(uStack_198);
    if ((bool)uVar5) {
      return pdStack_1f0;
    }
    ___stack_chk_fail();
    pdVar20 = pdStack_1f0;
  }
  else {
    if (pdStack_1f0 == (double *)0x0) {
      func_0x00010b8abcfc();
    }
    else {
      func_0x00010b8abd08();
    }
    uStack_210 = 0;
    unaff_x24 = adStack_220;
    auStack_208[0] = 0;
    uStack_1f8 = 0;
    func_0x00010b8abc84(auStack_238);
    if ((bStack_228 & 1) == 0) {
      puVar14 = &UNK_10f7ca778;
      uVar15 = 0x23;
LAB_10b8aa844:
      func_0x00010b8aa2f0(&dStack_1e8,adStack_220,puVar14,uVar15);
LAB_10b8aa848:
      *unaff_x19 = 9.88131291682493e-324;
      unaff_x19[1] = dStack_1e8;
      dStack_1e8 = 0.0;
      func_0x00010b8abbc0();
LAB_10b8aa85c:
      FUN_10b8ab934(auStack_238);
      func_0x000107c310b8(auStack_208);
      pdVar27 = unaff_x23;
      goto LAB_10b8aa86c;
    }
    func_0x00010b8abc08();
    if (((ulong)pdVar20 & 1) == 0) {
      puVar14 = &UNK_10f7ca79c;
      uVar15 = 0x18;
      goto LAB_10b8aa844;
    }
    pdVar12 = pdVar21;
    func_0x00010b8abc08();
    if (((ulong)pdVar20 & 1) == 0) {
      puVar14 = &UNK_10f7ca7b5;
LAB_10b8aa838:
      uVar15 = 0x19;
      pdVar23 = unaff_x22;
      goto LAB_10b8aa844;
    }
    pdVar23 = pdVar12;
    func_0x00010b8abc08();
    if (((ulong)pdVar20 & 1) == 0) {
      puVar14 = &UNK_10f7ca7cf;
      goto LAB_10b8aa838;
    }
    pdVar27 = pdVar23;
    func_0x00010b8abc08();
    if (((ulong)pdVar20 & 1) == 0) {
      puVar14 = &UNK_10f7ca7e9;
      unaff_x22 = pdVar23;
      goto LAB_10b8aa838;
    }
    pdVar20 = adStack_220;
    func_0x000107c31094();
    unaff_x23 = pdVar27;
    if (((ulong)pdVar20 & 1) == 0) {
      func_0x00010b8abc10(&dStack_1e8);
      goto LAB_10b8aa848;
    }
    if ((bStack_228 & 1) != 0) {
      FUN_10b9a8f04(&dStack_1e8,auStack_238);
      uStack_1d0 = 6;
      uStack_1c0 = 6;
      uStack_1b0 = 6;
      uStack_1a0 = 6;
      pdStack_1d8 = pdVar21;
      pdStack_1c8 = pdVar12;
      pdStack_1b8 = pdVar23;
      pdStack_1a8 = pdVar27;
      func_0x00010b8aa378(auStack_240,&dStack_1e8,5);
      lVar22 = 0x40;
      do {
        FUN_10b9a8d98((long)&dStack_1e8 + lVar22);
        lVar22 = lVar22 + -0x10;
        uVar5 = lVar22 == -0x10;
      } while (!(bool)uVar5);
      func_0x00010b9a8f84(&dStack_1e8,auStack_240);
      func_0x00010b8abbc8();
      FUN_10b9a8d98(&dStack_1e8);
      func_0x00010b8abccc();
      goto LAB_10b8aa85c;
    }
  }
  func_0x0001080da3e4();
  pcStack_248 = FUN_10b8aa8d8;
  ppuStack_250 = &puStack_150;
  func_0x00010b8abb84();
  uStack_2a8 = extraout_x8_01;
  FUN_10b9a9358(&pdStack_318);
  lStack_328 = 0;
  lStack_320 = 0;
  if (pdStack_318 == (double *)0x0) {
    func_0x00010b8abcfc();
    uStack_358 = extraout_x8_03;
    dStack_360 = extraout_x9_00;
  }
  else {
    func_0x00010b8abd08();
    uStack_358 = extraout_x8_02;
    dStack_360 = extraout_x9;
  }
  uStack_350 = 0;
  pdVar21 = &dStack_360;
  uStack_348 = uStack_348 & 0xffffffffffffff00;
  cStack_338 = '\0';
  pdVar12 = (double *)&UNK_10f7ca803;
  func_0x00010b8abc70();
  if (((ulong)pdVar20 & 1) == 0) {
    pdVar12 = (double *)&UNK_10f7ca814;
    uVar8 = (uint)pdVar20;
    func_0x00010b8abc70();
    if (uVar8 != 0) goto LAB_10b8aa958;
    func_0x00010b8abbf0();
    func_0x00010b8abc84(&dStack_300);
    cVar2 = (char)uStack_2f0;
    pdVar20 = (double *)(uStack_2f0 & 0xff);
    if ((uStack_2f0 & 1) == 0) {
      func_0x00010b8abc10(&dStack_2c0);
      func_0x00010b8abd14();
      func_0x00010b8abbc0();
    }
    else {
      func_0x00010b8abc98();
      func_0x00010b8aa378(&dStack_310,&dStack_2c0,1);
      FUN_10b8aa3bc(&lStack_320,&dStack_310);
      func_0x000104bddf60(dStack_310);
      FUN_10b9a8d98(&dStack_2c0);
      func_0x00010b9abe10(&dStack_2c0,0);
      pdVar12 = &dStack_2c0;
      FUN_10b8aa3bc(&lStack_328);
      func_0x000104bddf60(dStack_2c0);
    }
    func_0x00010b8abc28();
    if (cVar2 == '\0') goto LAB_10b8aadc0;
    pdVar20 = (double *)0x0;
    pdVar23 = (double *)0x0;
  }
  else {
LAB_10b8aa958:
    uVar8 = (uint)pdVar20 ^ 1;
    pdVar20 = (double *)(ulong)uVar8;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    func_0x00010b8abbf0();
    if ((uVar8 & 1) == 0) {
      uStack_2f8 = uStack_358;
      dStack_300 = dStack_360;
      uStack_2f0 = uStack_350;
      uStack_2e8 = uStack_2e8 & 0xffffffffffffff00;
      uStack_2d8 = uStack_2d8 & 0xff00;
      uVar5 = cStack_338 == '\x01';
      param_1 = dStack_360;
      if ((bool)uVar5) {
        uVar9 = 0;
        if (uStack_348 != 0) {
          do {
            func_0x00010b8abc58();
            uVar9 = extraout_x8_04;
          } while (extraout_w11 != 0);
        }
        uStack_2e0 = uStack_340;
        uStack_2d8 = CONCAT11(uStack_2d8._1_1_,1);
        uStack_2e8 = uVar9;
      }
      pdVar27 = &dStack_300;
      FUN_10b989d0c();
      if (((ulong)pdVar12 & 1) == 0) {
        pdVar23 = (double *)0x0;
LAB_10b8aaa78:
        unaff_x24 = (double *)0x1;
      }
      else {
        uStack_358 = uStack_2f8;
        dStack_360 = dStack_300;
        uStack_350 = uStack_2f0;
        if (cStack_338 == (char)uStack_2d8) {
          if (cStack_338 != '\0') {
            FUN_10b8ab954(&uStack_348,&uStack_2e8);
            uStack_340 = uStack_2e0;
          }
        }
        else if (cStack_338 == '\0') {
          uVar9 = 0;
          if (uStack_2e8 != 0) {
            do {
              func_0x00010b8abc58();
              uVar9 = extraout_x8_05;
            } while (extraout_w11_00 != 0);
          }
          uStack_340 = uStack_2e0;
          cStack_338 = '\x01';
          uStack_348 = uVar9;
        }
        else {
          func_0x000104bda960(uStack_348);
          cStack_338 = '\0';
        }
        pdVar23 = (double *)0x0;
        param_1 = 0.7853981633974483;
        for (; 0.7853981633974483 <= (double)pdVar27 && (uint)pdVar23 < 7;
            pdVar27 = (double *)((double)pdVar27 + -0.7853981633974483)) {
          pdVar23 = (double *)(ulong)((uint)pdVar23 + 1);
        }
        func_0x00010b8abbf0();
        uVar5 = uStack_350 == uStack_358;
        if ((uStack_350 < uStack_358) &&
           (uVar5 = *(char *)((long)dStack_360 + uStack_350) == ',', (bool)uVar5)) {
          uStack_350 = uStack_350 + 1;
          goto LAB_10b8aaa78;
        }
        unaff_x24 = (double *)0x0;
      }
      func_0x000107c310b8(&uStack_2e8);
      if ((int)unaff_x24 != 0) goto LAB_10b8aab44;
    }
    else {
      pdVar23 = (double *)0x0;
LAB_10b8aab44:
      puVar14 = PTR___DefaultRuneLocale_11034bcf8;
      unaff_x24 = (double *)0x4059000000000000;
      while (uVar5 = uStack_350 == uStack_358, uStack_350 < uStack_358) {
        func_0x00010b8abbf0();
        func_0x00010b8abc84(&dStack_300);
        if ((uStack_2f0 & 1) == 0) {
          pdVar12 = &dStack_360;
          func_0x00010b8aa2f0(&dStack_2c0,pdVar12,&UNK_10f7ca825,0xe);
          func_0x00010b8abd14();
LAB_10b8aacf8:
          func_0x00010b8abbc0();
          func_0x00010b8abc28();
          goto LAB_10b8aad00;
        }
        func_0x00010b8abc98();
        func_0x00010b9abec8(&uStack_370,&dStack_2c0);
        FUN_10b9a8d98(&dStack_2c0);
        func_0x00010b8abbf0();
        if (((uStack_350 < uStack_358) && (-1 < (long)*(char *)((long)dStack_360 + uStack_350))) &&
           ((*(uint *)(puVar14 + (long)*(char *)((long)dStack_360 + uStack_350) * 4 + 0x3c) >> 10 &
            1) != 0)) {
          FUN_10b989d9c(&dStack_2c0,&dStack_360);
          uVar5 = cStack_2b0 == '\x01';
          if (!(bool)uVar5) {
            pdVar12 = &dStack_360;
            func_0x00010b8aa2f0(&dStack_310,pdVar12,&UNK_10f7ca834,0x11);
            *unaff_x19 = 9.88131291682493e-324;
            unaff_x19[1] = dStack_310;
            dStack_310 = 0.0;
            goto LAB_10b8aacf8;
          }
          param_1 = dStack_2c0 / 100.0;
          if (iStack_2b8 != 3) {
            param_1 = dStack_2c0;
          }
          uStack_308 = 6;
          dStack_310 = param_1;
          func_0x00010b9abec8(&uStack_380,&dStack_310);
          FUN_10b9a8d98(&dStack_310);
          func_0x00010b8abbf0();
        }
        uVar5 = uStack_350 == uStack_358;
        if ((uStack_358 <= uStack_350) ||
           (uVar5 = *(char *)((long)dStack_360 + uStack_350) == ',', !(bool)uVar5)) {
          func_0x00010b8abc28();
          break;
        }
        uStack_350 = uStack_350 + 1;
        func_0x00010b8abc28();
      }
    }
    func_0x00010b9abf6c(&dStack_300,&uStack_370);
    FUN_10b8aa3bc(&lStack_320,&dStack_300);
    func_0x000104bddf60(dStack_300);
    func_0x00010b9abf6c(&dStack_300,&uStack_380);
    FUN_10b8aa3bc(&lStack_328,&dStack_300);
    func_0x000104bddf60(dStack_300);
    if ((*(long *)(lStack_328 + 0x10) == 0) ||
       (uVar5 = *(long *)(lStack_328 + 0x10) == *(long *)(lStack_320 + 0x10), (bool)uVar5)) {
      uVar9 = 0;
      pdVar12 = (double *)0x29;
      func_0x000107c310a4();
      if ((uVar9 & 1) == 0) {
        func_0x00010b8abc10(&dStack_300);
        goto LAB_10b8aacc4;
      }
      pdVar27 = (double *)0x1;
    }
    else {
      pdVar12 = (double *)&UNK_10f7ca846;
      FUN_10b99f5f8(&dStack_300);
LAB_10b8aacc4:
      *unaff_x19 = 9.88131291682493e-324;
      unaff_x19[1] = dStack_300;
      dStack_300 = 0.0;
      func_0x00010b8abbc0();
LAB_10b8aad00:
      pdVar27 = (double *)0x0;
    }
    func_0x00010b8abccc();
    func_0x000104bddf60(uStack_370);
    if ((int)pdVar27 == 0) goto LAB_10b8aadc0;
  }
  uVar9 = 0;
  func_0x000107c31094();
  if ((uVar9 & 1) == 0) {
    func_0x00010b8abc10(&dStack_300);
    *unaff_x19 = 9.88131291682493e-324;
    unaff_x19[1] = dStack_300;
    dStack_300 = 0.0;
    func_0x00010b8abbc0();
  }
  else {
    pdVar27 = &dStack_300;
    func_0x00010b9a8f84(&dStack_300,&lStack_320);
    func_0x00010b9a8f84(&uStack_2f0,&lStack_328);
    uStack_2d8 = 4;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)pdVar23);
    uStack_2c8 = 7;
    uStack_2d0 = SUB81(pdVar20,0);
    func_0x00010b8aa378(&dStack_2c0,&dStack_300,4);
    lVar22 = 0x30;
    do {
      FUN_10b9a8d98((long)pdVar27 + lVar22);
      lVar22 = lVar22 + -0x10;
      uVar5 = lVar22 == -0x10;
    } while (!(bool)uVar5);
    func_0x00010b9a8f84(&dStack_300,&dStack_2c0);
    pdVar12 = &dStack_300;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(&dStack_300);
    func_0x000104bddf60(dStack_2c0);
    pdVar20 = (double *)0xfffffffffffffff0;
  }
LAB_10b8aadc0:
  func_0x000107c310b8(&uStack_348);
  func_0x000104bddf60(lStack_328);
  func_0x000104bddf60(lStack_320);
  func_0x000107c278f8(pdStack_318);
  func_0x00010b8abb70(uStack_2a8);
  if ((bool)uVar5) {
    return pdStack_318;
  }
  ___stack_chk_fail();
  pcStack_388 = FUN_10b8aae3c;
  ppppuVar24 = &pppuStack_390;
  pdStack_3a0 = pdVar20;
  pppuStack_390 = &ppuStack_250;
  func_0x00010b8abb84();
  uStack_3a8 = extraout_x8_06;
  FUN_10b8b245c(&dStack_3b8);
  pdVar10 = pdStack_3b0;
  uVar5 = dStack_3b8 == 4.94065645841247e-324;
  if ((bool)uVar5) {
    if ((pdStack_3b0 != (double *)0x0) && (pdStack_3b0[2] != 0.0)) {
      do {
        func_0x00010b8abcac();
      } while (extraout_w10 != 0);
    }
    pdStack_3d0 = pdVar10;
    func_0x00010b9a8f78(adStack_3c8,&pdStack_3d0);
    pdVar12 = adStack_3c8;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(adStack_3c8);
    func_0x000104bddf04(pdVar10);
    pdVar20 = pdVar10;
  }
  else {
    func_0x00010b8abc48();
    pdStack_3b0 = (double *)0x0;
  }
  pdVar10 = &dStack_3b8;
  func_0x0001080cf2a8();
  func_0x00010b8abb70(uStack_3a8);
  if ((bool)uVar5) {
    return pdVar10;
  }
  pcVar26 = FUN_10b8aaee0;
  ___stack_chk_fail();
  pdVar16 = (double *)0x1;
  ppdVar4 = &pdStack_3d0;
  pdVar11 = extraout_x8_07;
  pdVar10 = (double *)pdVar10[0x3e];
  do {
    pdVar13 = pdVar10;
    puVar3 = (undefined1 *)((long)ppdVar4 + -0x70);
    *(double **)((long)ppdVar4 + -0x30) = pdVar23;
    *(double **)((long)ppdVar4 + -0x28) = pdVar21;
    *(double **)((long)ppdVar4 + -0x20) = pdVar20;
    *(double **)((long)ppdVar4 + -0x18) = unaff_x19;
    *(undefined1 *****)((long)ppdVar4 + -0x10) = ppppuVar24;
    *(code **)((long)ppdVar4 + -8) = pcVar26;
    func_0x00010b8abce8();
    *(undefined8 *)((long)ppdVar4 + -0x38) = extraout_x8_08;
    bVar6 = *(char *)(pdVar12 + 1) == '\t';
    if (bVar6) {
      pdVar21 = (double *)*pdVar12;
      bVar6 = (double *)pdVar21[2] == pdVar16;
      pdVar20 = pdVar16;
      if (((double *)pdVar21[2] <= pdVar16) ||
         (bVar6 = true, *(char *)(pdVar21 + (long)pdVar16 * 2 + 4) == '\x01')) goto LAB_10b8aaf40;
      pdVar23 = (double *)((long)ppdVar4 + -0x50);
      FUN_10b8ab468((undefined1 *)((long)ppdVar4 + -0x50));
      uVar5 = *(long *)((long)ppdVar4 + -0x50) == 1;
      if ((bool)uVar5) {
        FUN_10b9abdd8((undefined1 *)((long)ppdVar4 + -0x58),pdVar21);
        pdVar21 = *(double **)((long)ppdVar4 + -0x58);
        FUN_10b9a9020(pdVar21 + (long)pdVar16 * 2 + 3,(undefined1 *)((long)ppdVar4 + -0x48));
        func_0x00010b9a8f84((undefined1 *)((long)ppdVar4 + -0x68),
                            (undefined1 *)((long)ppdVar4 + -0x58));
        pdVar13 = (double *)((long)ppdVar4 + -0x68);
        func_0x00010b8abbc8();
        FUN_10b9a8d98((undefined1 *)((long)ppdVar4 + -0x68));
        func_0x000104bddf60(pdVar21);
      }
      else {
        dVar17 = *(double *)((long)ppdVar4 + -0x48);
        *unaff_x19 = 9.88131291682493e-324;
        unaff_x19[1] = dVar17;
        *(undefined8 *)((long)ppdVar4 + -0x48) = 0;
      }
      pdVar11 = (double *)((long)ppdVar4 + -0x50);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0x38));
      if ((bool)uVar5) {
        return pdVar11;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0x38));
      if (bVar6) {
        uVar15 = *(undefined8 *)((long)ppdVar4 + -0x10);
        uVar25 = *(undefined8 *)((long)ppdVar4 + -8);
        uVar19 = *(undefined8 *)((long)ppdVar4 + -0x20);
        uVar18 = *(undefined8 *)((long)ppdVar4 + -0x18);
        puVar3 = (undefined1 *)ppdVar4;
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    *(double **)((long)ppdVar4 + -0xb0) = unaff_x24;
    *(double **)((long)ppdVar4 + -0xa8) = pdVar27;
    *(double **)((long)ppdVar4 + -0xa0) = pdVar23;
    *(double **)((long)ppdVar4 + -0x98) = pdVar21;
    *(double **)((long)ppdVar4 + -0x90) = pdVar20;
    *(double **)((long)ppdVar4 + -0x88) = unaff_x19;
    *(undefined1 **)((long)ppdVar4 + -0x80) = (undefined1 *)((long)ppdVar4 + -0x10);
    *(code **)((long)ppdVar4 + -0x78) = FUN_10b8aaffc;
    ppppuVar24 = (undefined1 ****)((long)ppdVar4 + -0x80);
    func_0x00010b8abb84();
    *(undefined8 *)((long)ppdVar4 + -0xb8) = extraout_x8_09;
    uVar5 = *(char *)(pdVar13 + 1) == '\t';
    if ((bool)uVar5) {
      if (*pdVar13 == 0.0) {
        pdVar13 = (double *)&UNK_10f7ca8d7;
        pdVar12 = (double *)((long)ppdVar4 + -0xd0);
        FUN_10b99f5f8();
        pdVar20 = *(double **)((long)ppdVar4 + -0xd0);
        *(undefined8 *)((long)ppdVar4 + -0xd0) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 9.88131291682493e-324;
        unaff_x19[1] = (double)pdVar20;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8((undefined1 *)((long)ppdVar4 + -0xd8));
        pdVar21 = *(double **)((long)ppdVar4 + -0xd8);
        uVar5 = pdVar21[2] == 2.47032822920623e-323;
        if (((ulong)pdVar21[2] < 5) || (uVar5 = true, *(char *)(pdVar21 + 0xc) == '\x01')) {
LAB_10b8ab0e8:
          pdVar23 = (double *)0x1;
          pdVar12 = (double *)0x0;
          pdVar20 = pdVar21;
        }
        else {
          pdVar13 = (double *)pdVar11[0x3e];
          pdVar20 = (double *)((long)ppdVar4 + -0xd0);
          FUN_10b8ab468((undefined1 *)((long)ppdVar4 + -0xd0),pdVar13,pdVar21 + 0xb);
          lVar22 = *(long *)((long)ppdVar4 + -0xd0);
          if (lVar22 == 1) {
            pdVar13 = (double *)((long)ppdVar4 + -200);
            FUN_10b9a9020(pdVar21 + 0xb);
          }
          else {
            pdVar20 = *(double **)((long)ppdVar4 + -200);
            *(undefined8 *)((long)ppdVar4 + -200) = 0;
          }
          func_0x000104bda914((undefined1 *)((long)ppdVar4 + -0xd0));
          uVar5 = lVar22 == 1;
          pdVar27 = pdVar20;
          if ((bool)uVar5) goto LAB_10b8ab0e8;
          pdVar23 = (double *)0x0;
          pdVar12 = pdVar21;
        }
        func_0x000104bddf60();
        if ((int)pdVar23 == 0) goto LAB_10b8ab158;
        if (pdVar11[3] == 0.0) {
          *(double **)((long)ppdVar4 + -0xe0) = pdVar20;
          uVar5 = pdVar20[2] == 2.47032822920623e-323;
          if (!(bool)uVar5) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84((undefined1 *)((long)ppdVar4 + -0xd0),
                              (undefined1 *)((long)ppdVar4 + -0xe0));
          pdVar13 = (double *)((long)ppdVar4 + -0xd0);
          func_0x00010b8abbc8();
          FUN_10b9a8d98((undefined1 *)((long)ppdVar4 + -0xd0));
        }
        else {
          bVar1 = *(byte *)((long)pdVar11[3] + 0x230);
          *(double **)((long)ppdVar4 + -0xe0) = pdVar20;
          uVar5 = false;
          if (pdVar20[2] == 2.47032822920623e-323) {
            uVar5 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(pdVar20 + 5);
              uVar5 = param_1 == 0.0;
              if (!(bool)uVar5) {
                param_1 = -param_1;
                *(undefined2 *)((long)ppdVar4 + -200) = 6;
                *(double *)((long)ppdVar4 + -0xd0) = param_1;
                FUN_10b9a9020(pdVar20 + 5,(undefined1 *)((long)ppdVar4 + -0xd0));
                FUN_10b9a8d98((undefined1 *)((long)ppdVar4 + -0xd0));
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          pdVar13 = (double *)&UNK_10f7ca873;
          FUN_10b99f5f8((undefined1 *)((long)ppdVar4 + -0xd0));
          dVar17 = *(double *)((long)ppdVar4 + -0xd0);
          *unaff_x19 = 9.88131291682493e-324;
          unaff_x19[1] = dVar17;
          *(undefined8 *)((long)ppdVar4 + -0xd0) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(pdVar20);
        pdVar12 = (double *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0xb8));
      pdVar21 = pdVar11;
      if ((bool)uVar5) {
        return pdVar12;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0xb8));
      pdVar12 = pdVar11;
      if ((bool)uVar5) {
        uVar15 = *(undefined8 *)((long)ppdVar4 + -0x80);
        uVar25 = *(undefined8 *)((long)ppdVar4 + -0x78);
        uVar19 = *(undefined8 *)((long)ppdVar4 + -0x90);
        uVar18 = *(undefined8 *)((long)ppdVar4 + -0x88);
SUB_10b8a1764:
        *(undefined8 *)(puVar3 + -0x20) = uVar19;
        *(undefined8 *)(puVar3 + -0x18) = uVar18;
        *(undefined8 *)(puVar3 + -0x10) = uVar15;
        *(undefined8 *)(puVar3 + -8) = uVar25;
        *unaff_x19 = 4.94065645841247e-324;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    pcVar26 = FUN_10b8ab204;
    ___stack_chk_fail();
    pdVar16 = (double *)0x0;
    ppdVar4 = (double **)((long)ppdVar4 + -0xe0);
    pdVar11 = extraout_x8_10;
    pdVar10 = (double *)pdVar12[0x3e];
    pdVar12 = pdVar13;
  } while( true );
}



/* Entry: 10b8aa680; end: 10b8aa8d7;  */

double * FUN_10b8aa680(double param_1,double *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  undefined *puVar13;
  undefined8 uVar14;
  double *pdVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x8_05;
  double *extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  double *extraout_x8_09;
  double extraout_x9;
  double extraout_x9_00;
  double dVar16;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar17;
  double *unaff_x19;
  undefined8 uVar18;
  long lVar19;
  double *pdVar20;
  double *pdVar21;
  double *unaff_x22;
  double *pdVar22;
  double *unaff_x23;
  double *unaff_x24;
  undefined1 ***pppuVar23;
  undefined8 uVar24;
  code *pcVar25;
  double *pdVar26;
  double *pdStack_290;
  double adStack_288 [2];
  double dStack_278;
  double *pdStack_270;
  undefined8 uStack_268;
  double *pdStack_260;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  double dStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  char cStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  double *pdStack_1d8;
  double dStack_1d0;
  undefined2 uStack_1c8;
  double dStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  ushort uStack_198;
  undefined1 uStack_190;
  undefined2 uStack_188;
  double dStack_180;
  int iStack_178;
  char cStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [16];
  byte bStack_e8;
  double adStack_e0 [2];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 uStack_b8;
  double *pdStack_b0;
  double dStack_a8;
  undefined2 uStack_a0;
  double *pdStack_98;
  undefined2 uStack_90;
  double *pdStack_88;
  undefined2 uStack_80;
  double *pdStack_78;
  undefined2 uStack_70;
  double *pdStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  double **ppdVar4;
  
  func_0x00010b8abb84();
  uStack_58 = extraout_x8;
  FUN_10b9a9358(&pdStack_b0);
  if ((bRam00000001137fcd10 & 1) == 0) {
    param_2 = (double *)0x1137fcd10;
    ___cxa_guard_acquire();
    if ((int)param_2 != 0) {
      func_0x00010b8abc30();
      param_2 = (double *)0x1137fcd10;
      ___cxa_guard_release();
    }
  }
  uVar5 = pdStack_b0 == pdRam00000001137fcd08;
  pdVar22 = unaff_x22;
  if ((bool)uVar5) {
    uStack_a0 = 1;
    dStack_a8 = 0.0;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(&dStack_a8);
    pdVar26 = unaff_x23;
LAB_10b8aa86c:
    func_0x000107c278f8();
    func_0x00010b8abb70(uStack_58);
    if ((bool)uVar5) {
      return pdStack_b0;
    }
    ___stack_chk_fail();
    pdVar20 = pdStack_b0;
  }
  else {
    if (pdStack_b0 == (double *)0x0) {
      func_0x00010b8abcfc();
    }
    else {
      func_0x00010b8abd08();
    }
    uStack_d0 = 0;
    unaff_x24 = adStack_e0;
    auStack_c8[0] = 0;
    uStack_b8 = 0;
    func_0x00010b8abc84(auStack_f8);
    if ((bStack_e8 & 1) == 0) {
      puVar13 = &UNK_10f7ca778;
      uVar14 = 0x23;
LAB_10b8aa844:
      func_0x00010b8aa2f0(&dStack_a8,adStack_e0,puVar13,uVar14);
LAB_10b8aa848:
      *unaff_x19 = 9.88131291682493e-324;
      unaff_x19[1] = dStack_a8;
      dStack_a8 = 0.0;
      func_0x00010b8abbc0();
LAB_10b8aa85c:
      FUN_10b8ab934(auStack_f8);
      func_0x000107c310b8(auStack_c8);
      pdVar26 = unaff_x23;
      goto LAB_10b8aa86c;
    }
    func_0x00010b8abc08();
    if ((param_3 & 1) == 0) {
      puVar13 = &UNK_10f7ca79c;
      uVar14 = 0x18;
      goto LAB_10b8aa844;
    }
    pdVar21 = param_2;
    func_0x00010b8abc08();
    if ((param_3 & 1) == 0) {
      puVar13 = &UNK_10f7ca7b5;
LAB_10b8aa838:
      uVar14 = 0x19;
      pdVar22 = unaff_x22;
      goto LAB_10b8aa844;
    }
    pdVar22 = pdVar21;
    func_0x00010b8abc08();
    if ((param_3 & 1) == 0) {
      puVar13 = &UNK_10f7ca7cf;
      goto LAB_10b8aa838;
    }
    pdVar26 = pdVar22;
    func_0x00010b8abc08();
    if ((param_3 & 1) == 0) {
      puVar13 = &UNK_10f7ca7e9;
      unaff_x22 = pdVar22;
      goto LAB_10b8aa838;
    }
    pdVar20 = adStack_e0;
    func_0x000107c31094();
    unaff_x23 = pdVar26;
    if (((ulong)pdVar20 & 1) == 0) {
      func_0x00010b8abc10(&dStack_a8);
      goto LAB_10b8aa848;
    }
    if ((bStack_e8 & 1) != 0) {
      FUN_10b9a8f04(&dStack_a8,auStack_f8);
      uStack_90 = 6;
      uStack_80 = 6;
      uStack_70 = 6;
      uStack_60 = 6;
      pdStack_98 = param_2;
      pdStack_88 = pdVar21;
      pdStack_78 = pdVar22;
      pdStack_68 = pdVar26;
      func_0x00010b8aa378(auStack_100,&dStack_a8,5);
      lVar19 = 0x40;
      do {
        FUN_10b9a8d98((long)&dStack_a8 + lVar19);
        lVar19 = lVar19 + -0x10;
        uVar5 = lVar19 == -0x10;
      } while (!(bool)uVar5);
      func_0x00010b9a8f84(&dStack_a8,auStack_100);
      func_0x00010b8abbc8();
      FUN_10b9a8d98(&dStack_a8);
      func_0x00010b8abccc();
      goto LAB_10b8aa85c;
    }
  }
  func_0x0001080da3e4();
  pcStack_108 = FUN_10b8aa8d8;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010b8abb84();
  uStack_168 = extraout_x8_00;
  FUN_10b9a9358(&pdStack_1d8);
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  if (pdStack_1d8 == (double *)0x0) {
    func_0x00010b8abcfc();
    uStack_218 = extraout_x8_02;
    dStack_220 = extraout_x9_00;
  }
  else {
    func_0x00010b8abd08();
    uStack_218 = extraout_x8_01;
    dStack_220 = extraout_x9;
  }
  uStack_210 = 0;
  pdVar21 = &dStack_220;
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  cStack_1f8 = '\0';
  pdVar11 = (double *)&UNK_10f7ca803;
  func_0x00010b8abc70();
  if (((ulong)pdVar20 & 1) == 0) {
    pdVar11 = (double *)&UNK_10f7ca814;
    uVar7 = (uint)pdVar20;
    func_0x00010b8abc70();
    if (uVar7 != 0) goto LAB_10b8aa958;
    func_0x00010b8abbf0();
    func_0x00010b8abc84(&dStack_1c0);
    cVar2 = (char)uStack_1b0;
    pdVar20 = (double *)(uStack_1b0 & 0xff);
    if ((uStack_1b0 & 1) == 0) {
      func_0x00010b8abc10(&dStack_180);
      func_0x00010b8abd14();
      func_0x00010b8abbc0();
    }
    else {
      func_0x00010b8abc98();
      func_0x00010b8aa378(&dStack_1d0,&dStack_180,1);
      FUN_10b8aa3bc(&lStack_1e0,&dStack_1d0);
      func_0x000104bddf60(dStack_1d0);
      FUN_10b9a8d98(&dStack_180);
      func_0x00010b9abe10(&dStack_180,0);
      pdVar11 = &dStack_180;
      FUN_10b8aa3bc(&lStack_1e8);
      func_0x000104bddf60(dStack_180);
    }
    func_0x00010b8abc28();
    if (cVar2 == '\0') goto LAB_10b8aadc0;
    pdVar20 = (double *)0x0;
    pdVar22 = (double *)0x0;
  }
  else {
LAB_10b8aa958:
    uVar7 = (uint)pdVar20 ^ 1;
    pdVar20 = (double *)(ulong)uVar7;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    func_0x00010b8abbf0();
    if ((uVar7 & 1) == 0) {
      uStack_1b8 = uStack_218;
      dStack_1c0 = dStack_220;
      uStack_1b0 = uStack_210;
      uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
      uStack_198 = uStack_198 & 0xff00;
      uVar5 = cStack_1f8 == '\x01';
      param_1 = dStack_220;
      if ((bool)uVar5) {
        uVar8 = 0;
        if (uStack_208 != 0) {
          do {
            func_0x00010b8abc58();
            uVar8 = extraout_x8_03;
          } while (extraout_w11 != 0);
        }
        uStack_1a0 = uStack_200;
        uStack_198 = CONCAT11(uStack_198._1_1_,1);
        uStack_1a8 = uVar8;
      }
      pdVar26 = &dStack_1c0;
      FUN_10b989d0c();
      if (((ulong)pdVar11 & 1) == 0) {
        pdVar22 = (double *)0x0;
LAB_10b8aaa78:
        unaff_x24 = (double *)0x1;
      }
      else {
        uStack_218 = uStack_1b8;
        dStack_220 = dStack_1c0;
        uStack_210 = uStack_1b0;
        if (cStack_1f8 == (char)uStack_198) {
          if (cStack_1f8 != '\0') {
            FUN_10b8ab954(&uStack_208,&uStack_1a8);
            uStack_200 = uStack_1a0;
          }
        }
        else if (cStack_1f8 == '\0') {
          uVar8 = 0;
          if (uStack_1a8 != 0) {
            do {
              func_0x00010b8abc58();
              uVar8 = extraout_x8_04;
            } while (extraout_w11_00 != 0);
          }
          uStack_200 = uStack_1a0;
          cStack_1f8 = '\x01';
          uStack_208 = uVar8;
        }
        else {
          func_0x000104bda960(uStack_208);
          cStack_1f8 = '\0';
        }
        pdVar22 = (double *)0x0;
        param_1 = 0.7853981633974483;
        for (; 0.7853981633974483 <= (double)pdVar26 && (uint)pdVar22 < 7;
            pdVar26 = (double *)((double)pdVar26 + -0.7853981633974483)) {
          pdVar22 = (double *)(ulong)((uint)pdVar22 + 1);
        }
        func_0x00010b8abbf0();
        uVar5 = uStack_210 == uStack_218;
        if ((uStack_210 < uStack_218) &&
           (uVar5 = *(char *)((long)dStack_220 + uStack_210) == ',', (bool)uVar5)) {
          uStack_210 = uStack_210 + 1;
          goto LAB_10b8aaa78;
        }
        unaff_x24 = (double *)0x0;
      }
      func_0x000107c310b8(&uStack_1a8);
      if ((int)unaff_x24 != 0) goto LAB_10b8aab44;
    }
    else {
      pdVar22 = (double *)0x0;
LAB_10b8aab44:
      puVar13 = PTR___DefaultRuneLocale_11034bcf8;
      unaff_x24 = (double *)0x4059000000000000;
      while (uVar5 = uStack_210 == uStack_218, uStack_210 < uStack_218) {
        func_0x00010b8abbf0();
        func_0x00010b8abc84(&dStack_1c0);
        if ((uStack_1b0 & 1) == 0) {
          pdVar11 = &dStack_220;
          func_0x00010b8aa2f0(&dStack_180,pdVar11,&UNK_10f7ca825,0xe);
          func_0x00010b8abd14();
LAB_10b8aacf8:
          func_0x00010b8abbc0();
          func_0x00010b8abc28();
          goto LAB_10b8aad00;
        }
        func_0x00010b8abc98();
        func_0x00010b9abec8(&uStack_230,&dStack_180);
        FUN_10b9a8d98(&dStack_180);
        func_0x00010b8abbf0();
        if (((uStack_210 < uStack_218) && (-1 < (long)*(char *)((long)dStack_220 + uStack_210))) &&
           ((*(uint *)(puVar13 + (long)*(char *)((long)dStack_220 + uStack_210) * 4 + 0x3c) >> 10 &
            1) != 0)) {
          FUN_10b989d9c(&dStack_180,&dStack_220);
          uVar5 = cStack_170 == '\x01';
          if (!(bool)uVar5) {
            pdVar11 = &dStack_220;
            func_0x00010b8aa2f0(&dStack_1d0,pdVar11,&UNK_10f7ca834,0x11);
            *unaff_x19 = 9.88131291682493e-324;
            unaff_x19[1] = dStack_1d0;
            dStack_1d0 = 0.0;
            goto LAB_10b8aacf8;
          }
          param_1 = dStack_180 / 100.0;
          if (iStack_178 != 3) {
            param_1 = dStack_180;
          }
          uStack_1c8 = 6;
          dStack_1d0 = param_1;
          func_0x00010b9abec8(&uStack_240,&dStack_1d0);
          FUN_10b9a8d98(&dStack_1d0);
          func_0x00010b8abbf0();
        }
        uVar5 = uStack_210 == uStack_218;
        if ((uStack_218 <= uStack_210) ||
           (uVar5 = *(char *)((long)dStack_220 + uStack_210) == ',', !(bool)uVar5)) {
          func_0x00010b8abc28();
          break;
        }
        uStack_210 = uStack_210 + 1;
        func_0x00010b8abc28();
      }
    }
    func_0x00010b9abf6c(&dStack_1c0,&uStack_230);
    FUN_10b8aa3bc(&lStack_1e0,&dStack_1c0);
    func_0x000104bddf60(dStack_1c0);
    func_0x00010b9abf6c(&dStack_1c0,&uStack_240);
    FUN_10b8aa3bc(&lStack_1e8,&dStack_1c0);
    func_0x000104bddf60(dStack_1c0);
    if ((*(long *)(lStack_1e8 + 0x10) == 0) ||
       (uVar5 = *(long *)(lStack_1e8 + 0x10) == *(long *)(lStack_1e0 + 0x10), (bool)uVar5)) {
      uVar8 = 0;
      pdVar11 = (double *)0x29;
      func_0x000107c310a4();
      if ((uVar8 & 1) == 0) {
        func_0x00010b8abc10(&dStack_1c0);
        goto LAB_10b8aacc4;
      }
      pdVar26 = (double *)0x1;
    }
    else {
      pdVar11 = (double *)&UNK_10f7ca846;
      FUN_10b99f5f8(&dStack_1c0);
LAB_10b8aacc4:
      *unaff_x19 = 9.88131291682493e-324;
      unaff_x19[1] = dStack_1c0;
      dStack_1c0 = 0.0;
      func_0x00010b8abbc0();
LAB_10b8aad00:
      pdVar26 = (double *)0x0;
    }
    func_0x00010b8abccc();
    func_0x000104bddf60(uStack_230);
    if ((int)pdVar26 == 0) goto LAB_10b8aadc0;
  }
  uVar8 = 0;
  func_0x000107c31094();
  if ((uVar8 & 1) == 0) {
    func_0x00010b8abc10(&dStack_1c0);
    *unaff_x19 = 9.88131291682493e-324;
    unaff_x19[1] = dStack_1c0;
    dStack_1c0 = 0.0;
    func_0x00010b8abbc0();
  }
  else {
    pdVar26 = &dStack_1c0;
    func_0x00010b9a8f84(&dStack_1c0,&lStack_1e0);
    func_0x00010b9a8f84(&uStack_1b0,&lStack_1e8);
    uStack_198 = 4;
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(int)pdVar22);
    uStack_188 = 7;
    uStack_190 = SUB81(pdVar20,0);
    func_0x00010b8aa378(&dStack_180,&dStack_1c0,4);
    lVar19 = 0x30;
    do {
      FUN_10b9a8d98((long)pdVar26 + lVar19);
      lVar19 = lVar19 + -0x10;
      uVar5 = lVar19 == -0x10;
    } while (!(bool)uVar5);
    func_0x00010b9a8f84(&dStack_1c0,&dStack_180);
    pdVar11 = &dStack_1c0;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(&dStack_1c0);
    func_0x000104bddf60(dStack_180);
    pdVar20 = (double *)0xfffffffffffffff0;
  }
LAB_10b8aadc0:
  func_0x000107c310b8(&uStack_208);
  func_0x000104bddf60(lStack_1e8);
  func_0x000104bddf60(lStack_1e0);
  func_0x000107c278f8(pdStack_1d8);
  func_0x00010b8abb70(uStack_168);
  if ((bool)uVar5) {
    return pdStack_1d8;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_10b8aae3c;
  pppuVar23 = &ppuStack_250;
  pdStack_260 = pdVar20;
  ppuStack_250 = &puStack_110;
  func_0x00010b8abb84();
  uStack_268 = extraout_x8_05;
  FUN_10b8b245c(&dStack_278);
  pdVar9 = pdStack_270;
  uVar5 = dStack_278 == 4.94065645841247e-324;
  if ((bool)uVar5) {
    if ((pdStack_270 != (double *)0x0) && (pdStack_270[2] != 0.0)) {
      do {
        func_0x00010b8abcac();
      } while (extraout_w10 != 0);
    }
    pdStack_290 = pdVar9;
    func_0x00010b9a8f78(adStack_288,&pdStack_290);
    pdVar11 = adStack_288;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(adStack_288);
    func_0x000104bddf04(pdVar9);
    pdVar20 = pdVar9;
  }
  else {
    func_0x00010b8abc48();
    pdStack_270 = (double *)0x0;
  }
  pdVar9 = &dStack_278;
  func_0x0001080cf2a8();
  func_0x00010b8abb70(uStack_268);
  if ((bool)uVar5) {
    return pdVar9;
  }
  pcVar25 = FUN_10b8aaee0;
  ___stack_chk_fail();
  pdVar15 = (double *)0x1;
  ppdVar4 = &pdStack_290;
  pdVar10 = extraout_x8_06;
  pdVar9 = (double *)pdVar9[0x3e];
  do {
    pdVar12 = pdVar9;
    puVar3 = (undefined1 *)((long)ppdVar4 + -0x70);
    *(double **)((long)ppdVar4 + -0x30) = pdVar22;
    *(double **)((long)ppdVar4 + -0x28) = pdVar21;
    *(double **)((long)ppdVar4 + -0x20) = pdVar20;
    *(double **)((long)ppdVar4 + -0x18) = unaff_x19;
    *(undefined1 ****)((long)ppdVar4 + -0x10) = pppuVar23;
    *(code **)((long)ppdVar4 + -8) = pcVar25;
    func_0x00010b8abce8();
    *(undefined8 *)((long)ppdVar4 + -0x38) = extraout_x8_07;
    bVar6 = *(char *)(pdVar11 + 1) == '\t';
    if (bVar6) {
      pdVar21 = (double *)*pdVar11;
      bVar6 = (double *)pdVar21[2] == pdVar15;
      pdVar20 = pdVar15;
      if (((double *)pdVar21[2] <= pdVar15) ||
         (bVar6 = true, *(char *)(pdVar21 + (long)pdVar15 * 2 + 4) == '\x01')) goto LAB_10b8aaf40;
      pdVar22 = (double *)((long)ppdVar4 + -0x50);
      FUN_10b8ab468((undefined1 *)((long)ppdVar4 + -0x50));
      uVar5 = *(long *)((long)ppdVar4 + -0x50) == 1;
      if ((bool)uVar5) {
        FUN_10b9abdd8((undefined1 *)((long)ppdVar4 + -0x58),pdVar21);
        pdVar21 = *(double **)((long)ppdVar4 + -0x58);
        FUN_10b9a9020(pdVar21 + (long)pdVar15 * 2 + 3,(undefined1 *)((long)ppdVar4 + -0x48));
        func_0x00010b9a8f84((undefined1 *)((long)ppdVar4 + -0x68),
                            (undefined1 *)((long)ppdVar4 + -0x58));
        pdVar12 = (double *)((long)ppdVar4 + -0x68);
        func_0x00010b8abbc8();
        FUN_10b9a8d98((undefined1 *)((long)ppdVar4 + -0x68));
        func_0x000104bddf60(pdVar21);
      }
      else {
        dVar16 = *(double *)((long)ppdVar4 + -0x48);
        *unaff_x19 = 9.88131291682493e-324;
        unaff_x19[1] = dVar16;
        *(undefined8 *)((long)ppdVar4 + -0x48) = 0;
      }
      pdVar10 = (double *)((long)ppdVar4 + -0x50);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0x38));
      if ((bool)uVar5) {
        return pdVar10;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0x38));
      if (bVar6) {
        uVar14 = *(undefined8 *)((long)ppdVar4 + -0x10);
        uVar24 = *(undefined8 *)((long)ppdVar4 + -8);
        uVar18 = *(undefined8 *)((long)ppdVar4 + -0x20);
        uVar17 = *(undefined8 *)((long)ppdVar4 + -0x18);
        puVar3 = (undefined1 *)ppdVar4;
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    *(double **)((long)ppdVar4 + -0xb0) = unaff_x24;
    *(double **)((long)ppdVar4 + -0xa8) = pdVar26;
    *(double **)((long)ppdVar4 + -0xa0) = pdVar22;
    *(double **)((long)ppdVar4 + -0x98) = pdVar21;
    *(double **)((long)ppdVar4 + -0x90) = pdVar20;
    *(double **)((long)ppdVar4 + -0x88) = unaff_x19;
    *(undefined1 **)((long)ppdVar4 + -0x80) = (undefined1 *)((long)ppdVar4 + -0x10);
    *(code **)((long)ppdVar4 + -0x78) = FUN_10b8aaffc;
    pppuVar23 = (undefined1 ***)((long)ppdVar4 + -0x80);
    func_0x00010b8abb84();
    *(undefined8 *)((long)ppdVar4 + -0xb8) = extraout_x8_08;
    uVar5 = *(char *)(pdVar12 + 1) == '\t';
    if ((bool)uVar5) {
      if (*pdVar12 == 0.0) {
        pdVar12 = (double *)&UNK_10f7ca8d7;
        pdVar11 = (double *)((long)ppdVar4 + -0xd0);
        FUN_10b99f5f8();
        pdVar20 = *(double **)((long)ppdVar4 + -0xd0);
        *(undefined8 *)((long)ppdVar4 + -0xd0) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 9.88131291682493e-324;
        unaff_x19[1] = (double)pdVar20;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8((undefined1 *)((long)ppdVar4 + -0xd8));
        pdVar21 = *(double **)((long)ppdVar4 + -0xd8);
        uVar5 = pdVar21[2] == 2.47032822920623e-323;
        if (((ulong)pdVar21[2] < 5) || (uVar5 = true, *(char *)(pdVar21 + 0xc) == '\x01')) {
LAB_10b8ab0e8:
          pdVar22 = (double *)0x1;
          pdVar11 = (double *)0x0;
          pdVar20 = pdVar21;
        }
        else {
          pdVar12 = (double *)pdVar10[0x3e];
          pdVar20 = (double *)((long)ppdVar4 + -0xd0);
          FUN_10b8ab468((undefined1 *)((long)ppdVar4 + -0xd0),pdVar12,pdVar21 + 0xb);
          lVar19 = *(long *)((long)ppdVar4 + -0xd0);
          if (lVar19 == 1) {
            pdVar12 = (double *)((long)ppdVar4 + -200);
            FUN_10b9a9020(pdVar21 + 0xb);
          }
          else {
            pdVar20 = *(double **)((long)ppdVar4 + -200);
            *(undefined8 *)((long)ppdVar4 + -200) = 0;
          }
          func_0x000104bda914((undefined1 *)((long)ppdVar4 + -0xd0));
          uVar5 = lVar19 == 1;
          pdVar26 = pdVar20;
          if ((bool)uVar5) goto LAB_10b8ab0e8;
          pdVar22 = (double *)0x0;
          pdVar11 = pdVar21;
        }
        func_0x000104bddf60();
        if ((int)pdVar22 == 0) goto LAB_10b8ab158;
        if (pdVar10[3] == 0.0) {
          *(double **)((long)ppdVar4 + -0xe0) = pdVar20;
          uVar5 = pdVar20[2] == 2.47032822920623e-323;
          if (!(bool)uVar5) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84((undefined1 *)((long)ppdVar4 + -0xd0),
                              (undefined1 *)((long)ppdVar4 + -0xe0));
          pdVar12 = (double *)((long)ppdVar4 + -0xd0);
          func_0x00010b8abbc8();
          FUN_10b9a8d98((undefined1 *)((long)ppdVar4 + -0xd0));
        }
        else {
          bVar1 = *(byte *)((long)pdVar10[3] + 0x230);
          *(double **)((long)ppdVar4 + -0xe0) = pdVar20;
          uVar5 = false;
          if (pdVar20[2] == 2.47032822920623e-323) {
            uVar5 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(pdVar20 + 5);
              uVar5 = param_1 == 0.0;
              if (!(bool)uVar5) {
                param_1 = -param_1;
                *(undefined2 *)((long)ppdVar4 + -200) = 6;
                *(double *)((long)ppdVar4 + -0xd0) = param_1;
                FUN_10b9a9020(pdVar20 + 5,(undefined1 *)((long)ppdVar4 + -0xd0));
                FUN_10b9a8d98((undefined1 *)((long)ppdVar4 + -0xd0));
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          pdVar12 = (double *)&UNK_10f7ca873;
          FUN_10b99f5f8((undefined1 *)((long)ppdVar4 + -0xd0));
          dVar16 = *(double *)((long)ppdVar4 + -0xd0);
          *unaff_x19 = 9.88131291682493e-324;
          unaff_x19[1] = dVar16;
          *(undefined8 *)((long)ppdVar4 + -0xd0) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(pdVar20);
        pdVar11 = (double *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0xb8));
      pdVar21 = pdVar10;
      if ((bool)uVar5) {
        return pdVar11;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar4 + -0xb8));
      pdVar11 = pdVar10;
      if ((bool)uVar5) {
        uVar14 = *(undefined8 *)((long)ppdVar4 + -0x80);
        uVar24 = *(undefined8 *)((long)ppdVar4 + -0x78);
        uVar18 = *(undefined8 *)((long)ppdVar4 + -0x90);
        uVar17 = *(undefined8 *)((long)ppdVar4 + -0x88);
SUB_10b8a1764:
        *(undefined8 *)(puVar3 + -0x20) = uVar18;
        *(undefined8 *)(puVar3 + -0x18) = uVar17;
        *(undefined8 *)(puVar3 + -0x10) = uVar14;
        *(undefined8 *)(puVar3 + -8) = uVar24;
        *unaff_x19 = 4.94065645841247e-324;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    pcVar25 = FUN_10b8ab204;
    ___stack_chk_fail();
    pdVar15 = (double *)0x0;
    ppdVar4 = (double **)((long)ppdVar4 + -0xe0);
    pdVar10 = extraout_x8_09;
    pdVar9 = (double *)pdVar11[0x3e];
    pdVar11 = pdVar12;
  } while( true );
}



/* Entry: 10b8aa8d8; end: 10b8aae3b;  */

double * FUN_10b8aa8d8(double param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  double *extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  double *extraout_x8_08;
  double extraout_x9;
  double extraout_x9_00;
  double dVar14;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar15;
  double *unaff_x19;
  undefined8 uVar16;
  double *pdVar17;
  long lVar18;
  double *pdVar19;
  undefined1 *unaff_x22;
  double *unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar20;
  undefined1 **ppuVar21;
  undefined8 uVar22;
  code *pcVar23;
  double *pdVar24;
  double *pdStack_190;
  double adStack_188 [2];
  double dStack_178;
  double *pdStack_170;
  undefined8 uStack_168;
  double *pdStack_160;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  char cStack_f8;
  long lStack_e8;
  long lStack_e0;
  double *pdStack_d8;
  double dStack_d0;
  undefined2 uStack_c8;
  double dStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ushort uStack_98;
  undefined1 uStack_90;
  undefined2 uStack_88;
  double dStack_80;
  int iStack_78;
  char cStack_70;
  undefined8 uStack_68;
  double **ppdVar5;
  
  func_0x00010b8abb84();
  uStack_68 = extraout_x8;
  FUN_10b9a9358(&pdStack_d8);
  lStack_e8 = 0;
  lStack_e0 = 0;
  if (pdStack_d8 == (double *)0x0) {
    func_0x00010b8abcfc();
    uStack_118 = extraout_x8_01;
    dStack_120 = extraout_x9_00;
  }
  else {
    func_0x00010b8abd08();
    uStack_118 = extraout_x8_00;
    dStack_120 = extraout_x9;
  }
  uStack_110 = 0;
  pdVar19 = &dStack_120;
  uStack_108 = uStack_108 & 0xffffffffffffff00;
  cStack_f8 = '\0';
  pdVar11 = (double *)&UNK_10f7ca803;
  func_0x00010b8abc70();
  if ((param_2 & 1) == 0) {
    pdVar11 = (double *)&UNK_10f7ca814;
    uVar8 = (uint)param_2;
    func_0x00010b8abc70();
    if (uVar8 != 0) goto LAB_10b8aa958;
    func_0x00010b8abbf0();
    func_0x00010b8abc84(&dStack_c0);
    cVar3 = (char)uStack_b0;
    pdVar17 = (double *)(uStack_b0 & 0xff);
    if ((uStack_b0 & 1) == 0) {
      func_0x00010b8abc10(&dStack_80);
      func_0x00010b8abd14();
      func_0x00010b8abbc0();
    }
    else {
      func_0x00010b8abc98();
      func_0x00010b8aa378(&dStack_d0,&dStack_80,1);
      FUN_10b8aa3bc(&lStack_e0,&dStack_d0);
      func_0x000104bddf60(dStack_d0);
      FUN_10b9a8d98(&dStack_80);
      func_0x00010b9abe10(&dStack_80,0);
      pdVar11 = &dStack_80;
      FUN_10b8aa3bc(&lStack_e8);
      func_0x000104bddf60(dStack_80);
    }
    func_0x00010b8abc28();
    if (cVar3 == '\0') goto LAB_10b8aadc0;
    pdVar17 = (double *)0x0;
    unaff_x22 = (undefined1 *)0x0;
  }
  else {
LAB_10b8aa958:
    uVar8 = (uint)param_2 ^ 1;
    pdVar17 = (double *)(ulong)uVar8;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x00010b8abbf0();
    if ((uVar8 & 1) == 0) {
      uStack_b8 = uStack_118;
      dStack_c0 = dStack_120;
      uStack_b0 = uStack_110;
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
      uStack_98 = uStack_98 & 0xff00;
      in_ZR = cStack_f8 == '\x01';
      param_1 = dStack_120;
      if ((bool)in_ZR) {
        uVar9 = 0;
        if (uStack_108 != 0) {
          do {
            func_0x00010b8abc58();
            uVar9 = extraout_x8_02;
          } while (extraout_w11 != 0);
        }
        uStack_a0 = uStack_100;
        uStack_98 = CONCAT11(uStack_98._1_1_,1);
        uStack_a8 = uVar9;
      }
      pdVar24 = &dStack_c0;
      FUN_10b989d0c();
      if (((ulong)pdVar11 & 1) == 0) {
        unaff_x22 = (undefined1 *)0x0;
LAB_10b8aaa78:
        unaff_x24 = 1;
      }
      else {
        uStack_118 = uStack_b8;
        dStack_120 = dStack_c0;
        uStack_110 = uStack_b0;
        if (cStack_f8 == (char)uStack_98) {
          if (cStack_f8 != '\0') {
            FUN_10b8ab954(&uStack_108,&uStack_a8);
            uStack_100 = uStack_a0;
          }
        }
        else if (cStack_f8 == '\0') {
          uVar9 = 0;
          if (uStack_a8 != 0) {
            do {
              func_0x00010b8abc58();
              uVar9 = extraout_x8_03;
            } while (extraout_w11_00 != 0);
          }
          uStack_100 = uStack_a0;
          cStack_f8 = '\x01';
          uStack_108 = uVar9;
        }
        else {
          func_0x000104bda960(uStack_108);
          cStack_f8 = '\0';
        }
        unaff_x22 = (undefined1 *)0x0;
        param_1 = 0.7853981633974483;
        for (; 0.7853981633974483 <= (double)pdVar24 && (uint)unaff_x22 < 7;
            pdVar24 = (double *)((double)pdVar24 + -0.7853981633974483)) {
          unaff_x22 = (undefined1 *)(ulong)((uint)unaff_x22 + 1);
        }
        func_0x00010b8abbf0();
        in_ZR = uStack_110 == uStack_118;
        if ((uStack_110 < uStack_118) &&
           (in_ZR = *(char *)((long)dStack_120 + uStack_110) == ',', (bool)in_ZR)) {
          uStack_110 = uStack_110 + 1;
          goto LAB_10b8aaa78;
        }
        unaff_x24 = 0;
      }
      func_0x000107c310b8(&uStack_a8);
      if ((int)unaff_x24 != 0) goto LAB_10b8aab44;
    }
    else {
      unaff_x22 = (undefined1 *)0x0;
LAB_10b8aab44:
      puVar2 = PTR___DefaultRuneLocale_11034bcf8;
      unaff_x24 = 0x4059000000000000;
      while (in_ZR = uStack_110 == uStack_118, uStack_110 < uStack_118) {
        func_0x00010b8abbf0();
        func_0x00010b8abc84(&dStack_c0);
        if ((uStack_b0 & 1) == 0) {
          pdVar11 = &dStack_120;
          func_0x00010b8aa2f0(&dStack_80,pdVar11,&UNK_10f7ca825,0xe);
          func_0x00010b8abd14();
LAB_10b8aacf8:
          func_0x00010b8abbc0();
          func_0x00010b8abc28();
          goto LAB_10b8aad00;
        }
        func_0x00010b8abc98();
        func_0x00010b9abec8(&uStack_130,&dStack_80);
        FUN_10b9a8d98(&dStack_80);
        func_0x00010b8abbf0();
        if (((uStack_110 < uStack_118) && (-1 < (long)*(char *)((long)dStack_120 + uStack_110))) &&
           ((*(uint *)(puVar2 + (long)*(char *)((long)dStack_120 + uStack_110) * 4 + 0x3c) >> 10 & 1
            ) != 0)) {
          FUN_10b989d9c(&dStack_80,&dStack_120);
          in_ZR = cStack_70 == '\x01';
          if (!(bool)in_ZR) {
            pdVar11 = &dStack_120;
            func_0x00010b8aa2f0(&dStack_d0,pdVar11,&UNK_10f7ca834,0x11);
            *unaff_x19 = 9.88131291682493e-324;
            unaff_x19[1] = dStack_d0;
            dStack_d0 = 0.0;
            goto LAB_10b8aacf8;
          }
          param_1 = dStack_80 / 100.0;
          if (iStack_78 != 3) {
            param_1 = dStack_80;
          }
          uStack_c8 = 6;
          dStack_d0 = param_1;
          func_0x00010b9abec8(&uStack_140,&dStack_d0);
          FUN_10b9a8d98(&dStack_d0);
          func_0x00010b8abbf0();
        }
        in_ZR = uStack_110 == uStack_118;
        if ((uStack_118 <= uStack_110) ||
           (in_ZR = *(char *)((long)dStack_120 + uStack_110) == ',', !(bool)in_ZR)) {
          func_0x00010b8abc28();
          break;
        }
        uStack_110 = uStack_110 + 1;
        func_0x00010b8abc28();
      }
    }
    func_0x00010b9abf6c(&dStack_c0,&uStack_130);
    FUN_10b8aa3bc(&lStack_e0,&dStack_c0);
    func_0x000104bddf60(dStack_c0);
    func_0x00010b9abf6c(&dStack_c0,&uStack_140);
    FUN_10b8aa3bc(&lStack_e8,&dStack_c0);
    func_0x000104bddf60(dStack_c0);
    if ((*(long *)(lStack_e8 + 0x10) == 0) ||
       (in_ZR = *(long *)(lStack_e8 + 0x10) == *(long *)(lStack_e0 + 0x10), (bool)in_ZR)) {
      uVar9 = 0;
      pdVar11 = (double *)0x29;
      func_0x000107c310a4();
      if ((uVar9 & 1) == 0) {
        func_0x00010b8abc10(&dStack_c0);
        goto LAB_10b8aacc4;
      }
      unaff_x23 = (double *)0x1;
    }
    else {
      pdVar11 = (double *)&UNK_10f7ca846;
      FUN_10b99f5f8(&dStack_c0);
LAB_10b8aacc4:
      *unaff_x19 = 9.88131291682493e-324;
      unaff_x19[1] = dStack_c0;
      dStack_c0 = 0.0;
      func_0x00010b8abbc0();
LAB_10b8aad00:
      unaff_x23 = (double *)0x0;
    }
    func_0x00010b8abccc();
    func_0x000104bddf60(uStack_130);
    if ((int)unaff_x23 == 0) goto LAB_10b8aadc0;
  }
  uVar9 = 0;
  func_0x000107c31094();
  if ((uVar9 & 1) == 0) {
    func_0x00010b8abc10(&dStack_c0);
    *unaff_x19 = 9.88131291682493e-324;
    unaff_x19[1] = dStack_c0;
    dStack_c0 = 0.0;
    func_0x00010b8abbc0();
  }
  else {
    unaff_x23 = &dStack_c0;
    func_0x00010b9a8f84(&dStack_c0,&lStack_e0);
    func_0x00010b9a8f84(&uStack_b0,&lStack_e8);
    uStack_98 = 4;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)unaff_x22);
    uStack_88 = 7;
    uStack_90 = SUB81(pdVar17,0);
    func_0x00010b8aa378(&dStack_80,&dStack_c0,4);
    lVar18 = 0x30;
    do {
      FUN_10b9a8d98((long)unaff_x23 + lVar18);
      lVar18 = lVar18 + -0x10;
      in_ZR = lVar18 == -0x10;
    } while (!(bool)in_ZR);
    func_0x00010b9a8f84(&dStack_c0,&dStack_80);
    pdVar11 = &dStack_c0;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(&dStack_c0);
    func_0x000104bddf60(dStack_80);
    pdVar17 = (double *)0xfffffffffffffff0;
  }
LAB_10b8aadc0:
  func_0x000107c310b8(&uStack_108);
  func_0x000104bddf60(lStack_e8);
  func_0x000104bddf60(lStack_e0);
  func_0x000107c278f8(pdStack_d8);
  func_0x00010b8abb70(uStack_68);
  if ((bool)in_ZR) {
    return pdStack_d8;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b8aae3c;
  ppuVar21 = &puStack_150;
  pdStack_160 = pdVar17;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010b8abb84();
  uStack_168 = extraout_x8_04;
  FUN_10b8b245c(&dStack_178);
  pdVar24 = pdStack_170;
  uVar6 = dStack_178 == 4.94065645841247e-324;
  if ((bool)uVar6) {
    if ((pdStack_170 != (double *)0x0) && (pdStack_170[2] != 0.0)) {
      do {
        func_0x00010b8abcac();
      } while (extraout_w10 != 0);
    }
    pdStack_190 = pdVar24;
    func_0x00010b9a8f78(adStack_188,&pdStack_190);
    pdVar11 = adStack_188;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(adStack_188);
    func_0x000104bddf04(pdVar24);
    pdVar17 = pdVar24;
  }
  else {
    func_0x00010b8abc48();
    pdStack_170 = (double *)0x0;
  }
  pdVar24 = &dStack_178;
  func_0x0001080cf2a8();
  func_0x00010b8abb70(uStack_168);
  if ((bool)uVar6) {
    return pdVar24;
  }
  pcVar23 = FUN_10b8aaee0;
  ___stack_chk_fail();
  pdVar13 = (double *)0x1;
  ppdVar5 = &pdStack_190;
  pdVar10 = extraout_x8_05;
  pdVar24 = (double *)pdVar24[0x3e];
  do {
    pdVar12 = pdVar24;
    puVar4 = (undefined1 *)((long)ppdVar5 + -0x70);
    *(undefined1 **)((long)ppdVar5 + -0x30) = unaff_x22;
    *(double **)((long)ppdVar5 + -0x28) = pdVar19;
    *(double **)((long)ppdVar5 + -0x20) = pdVar17;
    *(double **)((long)ppdVar5 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppdVar5 + -0x10) = ppuVar21;
    *(code **)((long)ppdVar5 + -8) = pcVar23;
    func_0x00010b8abce8();
    *(undefined8 *)((long)ppdVar5 + -0x38) = extraout_x8_06;
    bVar7 = *(char *)(pdVar11 + 1) == '\t';
    if (bVar7) {
      pdVar19 = (double *)*pdVar11;
      bVar7 = (double *)pdVar19[2] == pdVar13;
      pdVar17 = pdVar13;
      if (((double *)pdVar19[2] <= pdVar13) ||
         (bVar7 = true, *(char *)(pdVar19 + (long)pdVar13 * 2 + 4) == '\x01')) goto LAB_10b8aaf40;
      unaff_x22 = (undefined1 *)((long)ppdVar5 + -0x50);
      FUN_10b8ab468((undefined1 *)((long)ppdVar5 + -0x50));
      uVar6 = *(long *)((long)ppdVar5 + -0x50) == 1;
      if ((bool)uVar6) {
        FUN_10b9abdd8((undefined1 *)((long)ppdVar5 + -0x58),pdVar19);
        pdVar19 = *(double **)((long)ppdVar5 + -0x58);
        FUN_10b9a9020(pdVar19 + (long)pdVar13 * 2 + 3,(undefined1 *)((long)ppdVar5 + -0x48));
        func_0x00010b9a8f84((undefined1 *)((long)ppdVar5 + -0x68),
                            (undefined1 *)((long)ppdVar5 + -0x58));
        pdVar12 = (double *)((long)ppdVar5 + -0x68);
        func_0x00010b8abbc8();
        FUN_10b9a8d98((undefined1 *)((long)ppdVar5 + -0x68));
        func_0x000104bddf60(pdVar19);
      }
      else {
        dVar14 = *(double *)((long)ppdVar5 + -0x48);
        *unaff_x19 = 9.88131291682493e-324;
        unaff_x19[1] = dVar14;
        *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
      }
      pdVar10 = (double *)((long)ppdVar5 + -0x50);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar5 + -0x38));
      if ((bool)uVar6) {
        return pdVar10;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar5 + -0x38));
      if (bVar7) {
        uVar20 = *(undefined8 *)((long)ppdVar5 + -0x10);
        uVar22 = *(undefined8 *)((long)ppdVar5 + -8);
        uVar16 = *(undefined8 *)((long)ppdVar5 + -0x20);
        uVar15 = *(undefined8 *)((long)ppdVar5 + -0x18);
        puVar4 = (undefined1 *)ppdVar5;
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)ppdVar5 + -0xb0) = unaff_x24;
    *(double **)((long)ppdVar5 + -0xa8) = unaff_x23;
    *(undefined1 **)((long)ppdVar5 + -0xa0) = unaff_x22;
    *(double **)((long)ppdVar5 + -0x98) = pdVar19;
    *(double **)((long)ppdVar5 + -0x90) = pdVar17;
    *(double **)((long)ppdVar5 + -0x88) = unaff_x19;
    *(undefined1 **)((long)ppdVar5 + -0x80) = (undefined1 *)((long)ppdVar5 + -0x10);
    *(code **)((long)ppdVar5 + -0x78) = FUN_10b8aaffc;
    ppuVar21 = (undefined1 **)((long)ppdVar5 + -0x80);
    func_0x00010b8abb84();
    *(undefined8 *)((long)ppdVar5 + -0xb8) = extraout_x8_07;
    uVar6 = *(char *)(pdVar12 + 1) == '\t';
    if ((bool)uVar6) {
      if (*pdVar12 == 0.0) {
        pdVar12 = (double *)&UNK_10f7ca8d7;
        pdVar11 = (double *)((long)ppdVar5 + -0xd0);
        FUN_10b99f5f8();
        pdVar17 = *(double **)((long)ppdVar5 + -0xd0);
        *(undefined8 *)((long)ppdVar5 + -0xd0) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 9.88131291682493e-324;
        unaff_x19[1] = (double)pdVar17;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8((undefined1 *)((long)ppdVar5 + -0xd8));
        pdVar19 = *(double **)((long)ppdVar5 + -0xd8);
        uVar6 = pdVar19[2] == 2.47032822920623e-323;
        if (((ulong)pdVar19[2] < 5) || (uVar6 = true, *(char *)(pdVar19 + 0xc) == '\x01')) {
LAB_10b8ab0e8:
          unaff_x22 = (undefined1 *)0x1;
          pdVar11 = (double *)0x0;
          pdVar17 = pdVar19;
        }
        else {
          pdVar12 = (double *)pdVar10[0x3e];
          pdVar17 = (double *)((long)ppdVar5 + -0xd0);
          FUN_10b8ab468((undefined1 *)((long)ppdVar5 + -0xd0),pdVar12,pdVar19 + 0xb);
          lVar18 = *(long *)((long)ppdVar5 + -0xd0);
          if (lVar18 == 1) {
            pdVar12 = (double *)((long)ppdVar5 + -200);
            FUN_10b9a9020(pdVar19 + 0xb);
          }
          else {
            pdVar17 = *(double **)((long)ppdVar5 + -200);
            *(undefined8 *)((long)ppdVar5 + -200) = 0;
          }
          func_0x000104bda914((undefined1 *)((long)ppdVar5 + -0xd0));
          uVar6 = lVar18 == 1;
          unaff_x23 = pdVar17;
          if ((bool)uVar6) goto LAB_10b8ab0e8;
          unaff_x22 = (undefined1 *)0x0;
          pdVar11 = pdVar19;
        }
        func_0x000104bddf60();
        if ((int)unaff_x22 == 0) goto LAB_10b8ab158;
        if (pdVar10[3] == 0.0) {
          *(double **)((long)ppdVar5 + -0xe0) = pdVar17;
          uVar6 = pdVar17[2] == 2.47032822920623e-323;
          if (!(bool)uVar6) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84((undefined1 *)((long)ppdVar5 + -0xd0),
                              (undefined1 *)((long)ppdVar5 + -0xe0));
          pdVar12 = (double *)((long)ppdVar5 + -0xd0);
          func_0x00010b8abbc8();
          FUN_10b9a8d98((undefined1 *)((long)ppdVar5 + -0xd0));
        }
        else {
          bVar1 = *(byte *)((long)pdVar10[3] + 0x230);
          *(double **)((long)ppdVar5 + -0xe0) = pdVar17;
          uVar6 = false;
          if (pdVar17[2] == 2.47032822920623e-323) {
            uVar6 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(pdVar17 + 5);
              uVar6 = param_1 == 0.0;
              if (!(bool)uVar6) {
                param_1 = -param_1;
                *(undefined2 *)((long)ppdVar5 + -200) = 6;
                *(double *)((long)ppdVar5 + -0xd0) = param_1;
                FUN_10b9a9020(pdVar17 + 5,(undefined1 *)((long)ppdVar5 + -0xd0));
                FUN_10b9a8d98((undefined1 *)((long)ppdVar5 + -0xd0));
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          pdVar12 = (double *)&UNK_10f7ca873;
          FUN_10b99f5f8((undefined1 *)((long)ppdVar5 + -0xd0));
          dVar14 = *(double *)((long)ppdVar5 + -0xd0);
          *unaff_x19 = 9.88131291682493e-324;
          unaff_x19[1] = dVar14;
          *(undefined8 *)((long)ppdVar5 + -0xd0) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(pdVar17);
        pdVar11 = (double *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar5 + -0xb8));
      pdVar19 = pdVar10;
      if ((bool)uVar6) {
        return pdVar11;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)((long)ppdVar5 + -0xb8));
      pdVar11 = pdVar10;
      if ((bool)uVar6) {
        uVar20 = *(undefined8 *)((long)ppdVar5 + -0x80);
        uVar22 = *(undefined8 *)((long)ppdVar5 + -0x78);
        uVar16 = *(undefined8 *)((long)ppdVar5 + -0x90);
        uVar15 = *(undefined8 *)((long)ppdVar5 + -0x88);
SUB_10b8a1764:
        *(undefined8 *)(puVar4 + -0x20) = uVar16;
        *(undefined8 *)(puVar4 + -0x18) = uVar15;
        *(undefined8 *)(puVar4 + -0x10) = uVar20;
        *(undefined8 *)(puVar4 + -8) = uVar22;
        *unaff_x19 = 4.94065645841247e-324;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    pcVar23 = FUN_10b8ab204;
    ___stack_chk_fail();
    pdVar13 = (double *)0x0;
    ppdVar5 = (double **)((long)ppdVar5 + -0xe0);
    pdVar10 = extraout_x8_08;
    pdVar24 = (double *)pdVar11[0x3e];
    pdVar11 = pdVar12;
  } while( true );
}



/* Entry: 10b8aae3c; end: 10b8aaedf;  */

long * FUN_10b8aae3c(double param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  long **pplVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long *extraout_x8_03;
  int extraout_w10;
  undefined8 uVar10;
  long *unaff_x19;
  undefined8 uVar11;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  long lVar12;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long *plStack_50;
  long alStack_48 [2];
  long lStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  func_0x00010b8abb84();
  uStack_28 = extraout_x8;
  FUN_10b8b245c(&lStack_38);
  plVar7 = plStack_30;
  uVar4 = lStack_38 == 1;
  if ((bool)uVar4) {
    if ((plStack_30 != (long *)0x0) && (plStack_30[2] != 0)) {
      do {
        func_0x00010b8abcac();
      } while (extraout_w10 != 0);
    }
    plStack_50 = plVar7;
    func_0x00010b9a8f78(alStack_48,&plStack_50);
    param_3 = alStack_48;
    func_0x00010b8abbc8();
    FUN_10b9a8d98(alStack_48);
    func_0x000104bddf04(plVar7);
    unaff_x20 = plVar7;
  }
  else {
    func_0x00010b8abc48();
    plStack_30 = (long *)0x0;
  }
  plVar7 = &lStack_38;
  func_0x0001080cf2a8();
  func_0x00010b8abb70(uStack_28);
  if ((bool)uVar4) {
    return plVar7;
  }
  pcVar16 = FUN_10b8aaee0;
  ___stack_chk_fail();
  plVar9 = (long *)0x1;
  pplVar3 = &plStack_50;
  plVar6 = extraout_x8_00;
  plVar7 = (long *)plVar7[0x3e];
  do {
    plVar8 = plVar7;
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar2 = (undefined1 *)((long)pplVar3 + -0x70);
    register0x00000008 = (BADSPACEBASE *)((long)pplVar3 + -0x70);
    *(undefined1 **)((long)pplVar3 + -0x30) = unaff_x22;
    *(long **)((long)pplVar3 + -0x28) = unaff_x21;
    *(long **)((long)pplVar3 + -0x20) = unaff_x20;
    *(long **)((long)pplVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pplVar3 + -0x10) = puVar14;
    *(code **)((long)pplVar3 + -8) = pcVar16;
    func_0x00010b8abce8();
    *(undefined8 *)((long)pplVar3 + -0x38) = extraout_x8_01;
    bVar5 = (char)param_3[1] == '\t';
    if (bVar5) {
      unaff_x21 = (long *)*param_3;
      bVar5 = (long *)unaff_x21[2] == plVar9;
      unaff_x20 = plVar9;
      if (((long *)unaff_x21[2] <= plVar9) ||
         (bVar5 = true, (char)unaff_x21[(long)plVar9 * 2 + 4] == '\x01')) goto LAB_10b8aaf40;
      unaff_x22 = (undefined1 *)((long)pplVar3 + -0x50);
      FUN_10b8ab468((undefined1 *)((long)pplVar3 + -0x50));
      uVar4 = *(long *)((long)pplVar3 + -0x50) == 1;
      if ((bool)uVar4) {
        FUN_10b9abdd8((undefined1 *)((long)pplVar3 + -0x58),unaff_x21);
        unaff_x21 = *(long **)((long)pplVar3 + -0x58);
        FUN_10b9a9020(unaff_x21 + (long)plVar9 * 2 + 3,(undefined1 *)((long)pplVar3 + -0x48));
        func_0x00010b9a8f84((undefined1 *)((long)pplVar3 + -0x68),
                            (undefined1 *)((long)pplVar3 + -0x58));
        plVar8 = (long *)((long)pplVar3 + -0x68);
        func_0x00010b8abbc8();
        FUN_10b9a8d98((undefined1 *)((long)pplVar3 + -0x68));
        func_0x000104bddf60(unaff_x21);
      }
      else {
        lVar12 = *(long *)((long)pplVar3 + -0x48);
        *unaff_x19 = 2;
        unaff_x19[1] = lVar12;
        *(undefined8 *)((long)pplVar3 + -0x48) = 0;
      }
      plVar6 = (long *)((long)pplVar3 + -0x50);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)((long)pplVar3 + -0x38));
      if ((bool)uVar4) {
        return plVar6;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)((long)pplVar3 + -0x38));
      if (bVar5) {
        uVar13 = *(undefined8 *)((long)pplVar3 + -0x10);
        uVar15 = *(undefined8 *)((long)pplVar3 + -8);
        uVar11 = *(undefined8 *)((long)pplVar3 + -0x20);
        uVar10 = *(undefined8 *)((long)pplVar3 + -0x18);
        puVar2 = (undefined1 *)pplVar3;
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)pplVar3 + -0xb0) = unaff_x24;
    *(long **)((long)pplVar3 + -0xa8) = unaff_x23;
    *(undefined1 **)((long)pplVar3 + -0xa0) = unaff_x22;
    *(long **)((long)pplVar3 + -0x98) = unaff_x21;
    *(long **)((long)pplVar3 + -0x90) = unaff_x20;
    *(long **)((long)pplVar3 + -0x88) = unaff_x19;
    *(undefined1 **)((long)pplVar3 + -0x80) = (undefined1 *)((long)pplVar3 + -0x10);
    *(code **)((long)pplVar3 + -0x78) = FUN_10b8aaffc;
    func_0x00010b8abb84();
    *(undefined8 *)((long)pplVar3 + -0xb8) = extraout_x8_02;
    uVar4 = (char)plVar8[1] == '\t';
    if ((bool)uVar4) {
      if (*plVar8 == 0) {
        plVar8 = (long *)&UNK_10f7ca8d7;
        plVar7 = (long *)((long)pplVar3 + -0xd0);
        FUN_10b99f5f8();
        unaff_x20 = *(long **)((long)pplVar3 + -0xd0);
        *(undefined8 *)((long)pplVar3 + -0xd0) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 2;
        unaff_x19[1] = (long)unaff_x20;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8((undefined1 *)((long)pplVar3 + -0xd8));
        plVar9 = *(long **)((long)pplVar3 + -0xd8);
        uVar4 = plVar9[2] == 5;
        if (((ulong)plVar9[2] < 5) || (uVar4 = true, (char)plVar9[0xc] == '\x01')) {
LAB_10b8ab0e8:
          unaff_x22 = (undefined1 *)0x1;
          plVar7 = (long *)0x0;
          unaff_x20 = plVar9;
        }
        else {
          plVar8 = (long *)plVar6[0x3e];
          unaff_x20 = (long *)((long)pplVar3 + -0xd0);
          FUN_10b8ab468((undefined1 *)((long)pplVar3 + -0xd0),plVar8,plVar9 + 0xb);
          lVar12 = *(long *)((long)pplVar3 + -0xd0);
          if (lVar12 == 1) {
            plVar8 = (long *)((long)pplVar3 + -200);
            FUN_10b9a9020(plVar9 + 0xb);
          }
          else {
            unaff_x20 = *(long **)((long)pplVar3 + -200);
            *(undefined8 *)((long)pplVar3 + -200) = 0;
          }
          func_0x000104bda914((undefined1 *)((long)pplVar3 + -0xd0));
          uVar4 = lVar12 == 1;
          unaff_x23 = unaff_x20;
          if ((bool)uVar4) goto LAB_10b8ab0e8;
          unaff_x22 = (undefined1 *)0x0;
          plVar7 = plVar9;
        }
        func_0x000104bddf60();
        if ((int)unaff_x22 == 0) goto LAB_10b8ab158;
        if (plVar6[3] == 0) {
          *(long **)((long)pplVar3 + -0xe0) = unaff_x20;
          uVar4 = unaff_x20[2] == 5;
          if (!(bool)uVar4) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84((undefined1 *)((long)pplVar3 + -0xd0),
                              (undefined1 *)((long)pplVar3 + -0xe0));
          plVar8 = (long *)((long)pplVar3 + -0xd0);
          func_0x00010b8abbc8();
          FUN_10b9a8d98((undefined1 *)((long)pplVar3 + -0xd0));
        }
        else {
          bVar1 = *(byte *)(plVar6[3] + 0x230);
          *(long **)((long)pplVar3 + -0xe0) = unaff_x20;
          uVar4 = false;
          if (unaff_x20[2] == 5) {
            uVar4 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(unaff_x20 + 5);
              uVar4 = param_1 == 0.0;
              if (!(bool)uVar4) {
                param_1 = -param_1;
                *(undefined2 *)((long)pplVar3 + -200) = 6;
                *(double *)((long)pplVar3 + -0xd0) = param_1;
                FUN_10b9a9020(unaff_x20 + 5,(undefined1 *)((long)pplVar3 + -0xd0));
                FUN_10b9a8d98((undefined1 *)((long)pplVar3 + -0xd0));
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          plVar8 = (long *)&UNK_10f7ca873;
          FUN_10b99f5f8((undefined1 *)((long)pplVar3 + -0xd0));
          lVar12 = *(long *)((long)pplVar3 + -0xd0);
          *unaff_x19 = 2;
          unaff_x19[1] = lVar12;
          *(undefined8 *)((long)pplVar3 + -0xd0) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(unaff_x20);
        plVar7 = (long *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)((long)pplVar3 + -0xb8));
      unaff_x21 = plVar6;
      if ((bool)uVar4) {
        return plVar7;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)((long)pplVar3 + -0xb8));
      plVar7 = plVar6;
      if ((bool)uVar4) {
        uVar13 = *(undefined8 *)((long)pplVar3 + -0x80);
        uVar15 = *(undefined8 *)((long)pplVar3 + -0x78);
        uVar11 = *(undefined8 *)((long)pplVar3 + -0x90);
        uVar10 = *(undefined8 *)((long)pplVar3 + -0x88);
SUB_10b8a1764:
        *(undefined8 *)(puVar2 + -0x20) = uVar11;
        *(undefined8 *)(puVar2 + -0x18) = uVar10;
        *(undefined8 *)(puVar2 + -0x10) = uVar13;
        *(undefined8 *)(puVar2 + -8) = uVar15;
        *unaff_x19 = 1;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    pcVar16 = FUN_10b8ab204;
    ___stack_chk_fail();
    plVar9 = (long *)0x0;
    pplVar3 = (long **)((long)pplVar3 + -0xe0);
    plVar6 = extraout_x8_03;
    plVar7 = (long *)plVar7[0x3e];
    param_3 = plVar8;
  } while( true );
}



/* Entry: 10b8aaee0; end: 10b8aaef3;  */

undefined8 * FUN_10b8aaee0(undefined8 *param_1,double param_2,long param_3,long *param_4)

{
  byte bVar1;
  long *plVar2;
  undefined1 *puVar3;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *unaff_x19;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar14;
  code *unaff_x30;
  undefined1 *puVar4;
  
  puVar9 = (undefined8 *)0x1;
  puVar4 = (undefined1 *)register0x00000008;
  plVar2 = *(long **)(param_3 + 0x1f0);
  do {
    plVar8 = plVar2;
    puVar3 = puVar4 + -0x70;
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(code **)(puVar4 + -8) = unaff_x30;
    func_0x00010b8abce8();
    *(undefined8 *)(puVar4 + -0x38) = extraout_x8;
    bVar5 = (char)param_4[1] == '\t';
    if (bVar5) {
      unaff_x21 = (undefined8 *)*param_4;
      bVar5 = (undefined8 *)unaff_x21[2] == puVar9;
      unaff_x20 = puVar9;
      if (((undefined8 *)unaff_x21[2] <= puVar9) ||
         (bVar5 = true, *(char *)(unaff_x21 + (long)puVar9 * 2 + 4) == '\x01')) goto LAB_10b8aaf40;
      unaff_x22 = puVar4 + -0x50;
      FUN_10b8ab468(puVar4 + -0x50);
      uVar6 = *(long *)(puVar4 + -0x50) == 1;
      if ((bool)uVar6) {
        FUN_10b9abdd8(puVar4 + -0x58,unaff_x21);
        unaff_x21 = *(undefined8 **)(puVar4 + -0x58);
        FUN_10b9a9020(unaff_x21 + (long)puVar9 * 2 + 3,puVar4 + -0x48);
        func_0x00010b9a8f84(puVar4 + -0x68,puVar4 + -0x58);
        plVar8 = (long *)(puVar4 + -0x68);
        func_0x00010b8abbc8();
        FUN_10b9a8d98(puVar4 + -0x68);
        func_0x000104bddf60(unaff_x21);
      }
      else {
        uVar10 = *(undefined8 *)(puVar4 + -0x48);
        *unaff_x19 = 2;
        unaff_x19[1] = uVar10;
        *(undefined8 *)(puVar4 + -0x48) = 0;
      }
      param_1 = (undefined8 *)(puVar4 + -0x50);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)(puVar4 + -0x38));
      if ((bool)uVar6) {
        return param_1;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)(puVar4 + -0x38));
      if (bVar5) {
        uVar10 = *(undefined8 *)(puVar4 + -0x10);
        uVar14 = *(undefined8 *)(puVar4 + -8);
        uVar12 = *(undefined8 *)(puVar4 + -0x20);
        uVar11 = *(undefined8 *)(puVar4 + -0x18);
        puVar3 = puVar4;
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)(puVar4 + -0xb0) = unaff_x24;
    *(undefined8 **)(puVar4 + -0xa8) = unaff_x23;
    *(undefined1 **)(puVar4 + -0xa0) = unaff_x22;
    *(undefined8 **)(puVar4 + -0x98) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x90) = unaff_x20;
    *(undefined8 **)(puVar4 + -0x88) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x78) = FUN_10b8aaffc;
    unaff_x29 = puVar4 + -0x80;
    func_0x00010b8abb84();
    *(undefined8 *)(puVar4 + -0xb8) = extraout_x8_00;
    uVar6 = (char)plVar8[1] == '\t';
    if ((bool)uVar6) {
      if (*plVar8 == 0) {
        plVar8 = (long *)&UNK_10f7ca8d7;
        puVar7 = (undefined8 *)(puVar4 + -0xd0);
        FUN_10b99f5f8();
        unaff_x20 = *(undefined8 **)(puVar4 + -0xd0);
        *(undefined8 *)(puVar4 + -0xd0) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 2;
        unaff_x19[1] = unaff_x20;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8(puVar4 + -0xd8);
        puVar9 = *(undefined8 **)(puVar4 + -0xd8);
        uVar6 = puVar9[2] == 5;
        if (((ulong)puVar9[2] < 5) || (uVar6 = true, *(char *)(puVar9 + 0xc) == '\x01')) {
LAB_10b8ab0e8:
          unaff_x22 = (undefined1 *)0x1;
          puVar7 = (undefined8 *)0x0;
          unaff_x20 = puVar9;
        }
        else {
          plVar8 = (long *)param_1[0x3e];
          unaff_x20 = (undefined8 *)(puVar4 + -0xd0);
          FUN_10b8ab468(puVar4 + -0xd0,plVar8,puVar9 + 0xb);
          lVar13 = *(long *)(puVar4 + -0xd0);
          if (lVar13 == 1) {
            plVar8 = (long *)(puVar4 + -200);
            FUN_10b9a9020(puVar9 + 0xb);
          }
          else {
            unaff_x20 = *(undefined8 **)(puVar4 + -200);
            *(undefined8 *)(puVar4 + -200) = 0;
          }
          func_0x000104bda914(puVar4 + -0xd0);
          uVar6 = lVar13 == 1;
          unaff_x23 = unaff_x20;
          if ((bool)uVar6) goto LAB_10b8ab0e8;
          unaff_x22 = (undefined1 *)0x0;
          puVar7 = puVar9;
        }
        func_0x000104bddf60();
        if ((int)unaff_x22 == 0) goto LAB_10b8ab158;
        if (param_1[3] == 0) {
          *(undefined8 **)(puVar4 + -0xe0) = unaff_x20;
          uVar6 = unaff_x20[2] == 5;
          if (!(bool)uVar6) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84(puVar4 + -0xd0,puVar4 + -0xe0);
          plVar8 = (long *)(puVar4 + -0xd0);
          func_0x00010b8abbc8();
          FUN_10b9a8d98(puVar4 + -0xd0);
        }
        else {
          bVar1 = *(byte *)(param_1[3] + 0x230);
          *(undefined8 **)(puVar4 + -0xe0) = unaff_x20;
          uVar6 = false;
          if (unaff_x20[2] == 5) {
            uVar6 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(unaff_x20 + 5);
              uVar6 = param_2 == 0.0;
              if (!(bool)uVar6) {
                param_2 = -param_2;
                *(undefined2 *)(puVar4 + -200) = 6;
                *(double *)(puVar4 + -0xd0) = param_2;
                FUN_10b9a9020(unaff_x20 + 5,puVar4 + -0xd0);
                FUN_10b9a8d98(puVar4 + -0xd0);
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          plVar8 = (long *)&UNK_10f7ca873;
          FUN_10b99f5f8(puVar4 + -0xd0);
          uVar10 = *(undefined8 *)(puVar4 + -0xd0);
          *unaff_x19 = 2;
          unaff_x19[1] = uVar10;
          *(undefined8 *)(puVar4 + -0xd0) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(unaff_x20);
        puVar7 = (undefined8 *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)(puVar4 + -0xb8));
      unaff_x21 = param_1;
      if ((bool)uVar6) {
        return puVar7;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)(puVar4 + -0xb8));
      puVar7 = param_1;
      if ((bool)uVar6) {
        uVar10 = *(undefined8 *)(puVar4 + -0x80);
        uVar14 = *(undefined8 *)(puVar4 + -0x78);
        uVar12 = *(undefined8 *)(puVar4 + -0x90);
        uVar11 = *(undefined8 *)(puVar4 + -0x88);
SUB_10b8a1764:
        *(undefined8 *)(puVar3 + -0x20) = uVar12;
        *(undefined8 *)(puVar3 + -0x18) = uVar11;
        *(undefined8 *)(puVar3 + -0x10) = uVar10;
        *(undefined8 *)(puVar3 + -8) = uVar14;
        *unaff_x19 = 1;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    unaff_x30 = FUN_10b8ab204;
    ___stack_chk_fail();
    puVar9 = (undefined8 *)0x0;
    puVar4 = puVar4 + -0xe0;
    param_1 = extraout_x8_01;
    plVar2 = (long *)puVar7[0x3e];
    param_4 = plVar8;
  } while( true );
}



/* Entry: 10b8aaef4; end: 10b8aaffb;  */

undefined8 *
FUN_10b8aaef4(double param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  long lVar11;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar12;
  code *unaff_x30;
  
  do {
    plVar6 = param_3;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8abce8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    bVar3 = (char)param_4[1] == '\t';
    if (bVar3) {
      unaff_x21 = (undefined8 *)*param_4;
      bVar3 = (undefined8 *)unaff_x21[2] == param_5;
      unaff_x20 = param_5;
      if (((undefined8 *)unaff_x21[2] <= param_5) ||
         (bVar3 = true, *(char *)(unaff_x21 + (long)param_5 * 2 + 4) == '\x01')) goto LAB_10b8aaf40;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x50);
      FUN_10b8ab468((undefined1 *)((long)register0x00000008 + -0x50));
      uVar4 = *(long *)((long)register0x00000008 + -0x50) == 1;
      if ((bool)uVar4) {
        FUN_10b9abdd8((undefined1 *)((long)register0x00000008 + -0x58),unaff_x21);
        unaff_x21 = *(undefined8 **)((long)register0x00000008 + -0x58);
        FUN_10b9a9020(unaff_x21 + (long)param_5 * 2 + 3,
                      (undefined1 *)((long)register0x00000008 + -0x48));
        func_0x00010b9a8f84((undefined1 *)((long)register0x00000008 + -0x68),
                            (undefined1 *)((long)register0x00000008 + -0x58));
        plVar6 = (long *)((long)register0x00000008 + -0x68);
        func_0x00010b8abbc8();
        FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0x68));
        func_0x000104bddf60(unaff_x21);
      }
      else {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x48);
        *unaff_x19 = 2;
        unaff_x19[1] = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      }
      param_2 = (undefined8 *)((long)register0x00000008 + -0x50);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0x38));
      if ((bool)uVar4) {
        return param_2;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0x38));
      if (bVar3) {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x18);
        puVar2 = (undefined1 *)register0x00000008;
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x90) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10b8aaffc;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x00010b8abb84();
    *(undefined8 *)((long)register0x00000008 + -0xb8) = extraout_x8_00;
    uVar4 = (char)plVar6[1] == '\t';
    if ((bool)uVar4) {
      if (*plVar6 == 0) {
        plVar6 = (long *)&UNK_10f7ca8d7;
        puVar5 = (undefined8 *)((long)register0x00000008 + -0xd0);
        FUN_10b99f5f8();
        unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 2;
        unaff_x19[1] = unaff_x20;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8((undefined1 *)((long)register0x00000008 + -0xd8));
        puVar10 = *(undefined8 **)((long)register0x00000008 + -0xd8);
        uVar4 = puVar10[2] == 5;
        if (((ulong)puVar10[2] < 5) || (uVar4 = true, *(char *)(puVar10 + 0xc) == '\x01')) {
LAB_10b8ab0e8:
          unaff_x22 = (undefined1 *)0x1;
          puVar5 = (undefined8 *)0x0;
          unaff_x20 = puVar10;
        }
        else {
          plVar6 = (long *)param_2[0x3e];
          unaff_x20 = (undefined8 *)((long)register0x00000008 + -0xd0);
          FUN_10b8ab468((undefined1 *)((long)register0x00000008 + -0xd0),plVar6,puVar10 + 0xb);
          lVar11 = *(long *)((long)register0x00000008 + -0xd0);
          if (lVar11 == 1) {
            plVar6 = (long *)((long)register0x00000008 + -200);
            FUN_10b9a9020(puVar10 + 0xb);
          }
          else {
            unaff_x20 = *(undefined8 **)((long)register0x00000008 + -200);
            *(undefined8 *)((long)register0x00000008 + -200) = 0;
          }
          func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0xd0));
          uVar4 = lVar11 == 1;
          unaff_x23 = unaff_x20;
          if ((bool)uVar4) goto LAB_10b8ab0e8;
          unaff_x22 = (undefined1 *)0x0;
          puVar5 = puVar10;
        }
        func_0x000104bddf60();
        if ((int)unaff_x22 == 0) goto LAB_10b8ab158;
        if (param_2[3] == 0) {
          *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x20;
          uVar4 = unaff_x20[2] == 5;
          if (!(bool)uVar4) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84((undefined1 *)((long)register0x00000008 + -0xd0),
                              (undefined1 *)((long)register0x00000008 + -0xe0));
          plVar6 = (long *)((long)register0x00000008 + -0xd0);
          func_0x00010b8abbc8();
          FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0xd0));
        }
        else {
          bVar1 = *(byte *)(param_2[3] + 0x230);
          *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x20;
          uVar4 = false;
          if (unaff_x20[2] == 5) {
            uVar4 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(unaff_x20 + 5);
              uVar4 = param_1 == 0.0;
              if (!(bool)uVar4) {
                param_1 = -param_1;
                *(undefined2 *)((long)register0x00000008 + -200) = 6;
                *(double *)((long)register0x00000008 + -0xd0) = param_1;
                FUN_10b9a9020(unaff_x20 + 5,(undefined1 *)((long)register0x00000008 + -0xd0));
                FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0xd0));
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          plVar6 = (long *)&UNK_10f7ca873;
          FUN_10b99f5f8((undefined1 *)((long)register0x00000008 + -0xd0));
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0xd0);
          *unaff_x19 = 2;
          unaff_x19[1] = uVar7;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(unaff_x20);
        puVar5 = (undefined8 *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0xb8));
      unaff_x21 = param_2;
      if ((bool)uVar4) {
        return puVar5;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0xb8));
      puVar5 = param_2;
      if ((bool)uVar4) {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x78);
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x90);
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x88);
SUB_10b8a1764:
        *(undefined8 *)(puVar2 + -0x20) = uVar9;
        *(undefined8 *)(puVar2 + -0x18) = uVar8;
        *(undefined8 *)(puVar2 + -0x10) = uVar7;
        *(undefined8 *)(puVar2 + -8) = uVar12;
        *unaff_x19 = 1;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    unaff_x30 = FUN_10b8ab204;
    ___stack_chk_fail();
    param_5 = (undefined8 *)0x0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    param_2 = extraout_x8_01;
    param_3 = (long *)puVar5[0x3e];
    param_4 = plVar6;
  } while( true );
}



/* Entry: 10b8aaffc; end: 10b8ab203;  */

undefined8 * FUN_10b8aaffc(double param_1,undefined8 *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  long lVar10;
  undefined8 *unaff_x23;
  undefined8 *puVar11;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar12;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8abb84();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8_00;
    uVar3 = (char)param_3[1] == '\t';
    if ((bool)uVar3) {
      if (*param_3 == 0) {
        param_3 = (long *)&UNK_10f7ca8d7;
        puVar4 = (undefined8 *)((long)register0x00000008 + -0x60);
        FUN_10b99f5f8();
        puVar11 = *(undefined8 **)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 2;
        unaff_x19[1] = puVar11;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8((undefined1 *)((long)register0x00000008 + -0x68));
        puVar9 = *(undefined8 **)((long)register0x00000008 + -0x68);
        uVar3 = puVar9[2] == 5;
        if (((ulong)puVar9[2] < 5) || (uVar3 = true, *(char *)(puVar9 + 0xc) == '\x01')) {
LAB_10b8ab0e8:
          unaff_x22 = (undefined1 *)0x1;
          puVar4 = (undefined8 *)0x0;
          puVar11 = puVar9;
        }
        else {
          param_3 = (long *)param_2[0x3e];
          puVar11 = (undefined8 *)((long)register0x00000008 + -0x60);
          FUN_10b8ab468((undefined1 *)((long)register0x00000008 + -0x60),param_3,puVar9 + 0xb);
          lVar10 = *(long *)((long)register0x00000008 + -0x60);
          if (lVar10 == 1) {
            param_3 = (long *)((long)register0x00000008 + -0x58);
            FUN_10b9a9020(puVar9 + 0xb);
          }
          else {
            puVar11 = *(undefined8 **)((long)register0x00000008 + -0x58);
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
          }
          func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0x60));
          uVar3 = lVar10 == 1;
          unaff_x23 = puVar11;
          if ((bool)uVar3) goto LAB_10b8ab0e8;
          unaff_x22 = (undefined1 *)0x0;
          puVar4 = puVar9;
        }
        func_0x000104bddf60();
        if ((int)unaff_x22 == 0) goto LAB_10b8ab158;
        if (param_2[3] == 0) {
          *(undefined8 **)((long)register0x00000008 + -0x70) = puVar11;
          uVar3 = puVar11[2] == 5;
          if (!(bool)uVar3) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84((undefined1 *)((long)register0x00000008 + -0x60),
                              (undefined1 *)((long)register0x00000008 + -0x70));
          param_3 = (long *)((long)register0x00000008 + -0x60);
          func_0x00010b8abbc8();
          FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0x60));
        }
        else {
          bVar1 = *(byte *)(param_2[3] + 0x230);
          *(undefined8 **)((long)register0x00000008 + -0x70) = puVar11;
          uVar3 = false;
          if (puVar11[2] == 5) {
            uVar3 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(puVar11 + 5);
              uVar3 = param_1 == 0.0;
              if (!(bool)uVar3) {
                param_1 = -param_1;
                *(undefined2 *)((long)register0x00000008 + -0x58) = 6;
                *(double *)((long)register0x00000008 + -0x60) = param_1;
                FUN_10b9a9020(puVar11 + 5,(undefined1 *)((long)register0x00000008 + -0x60));
                FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0x60));
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          param_3 = (long *)&UNK_10f7ca873;
          FUN_10b99f5f8((undefined1 *)((long)register0x00000008 + -0x60));
          uVar6 = *(undefined8 *)((long)register0x00000008 + -0x60);
          *unaff_x19 = 2;
          unaff_x19[1] = uVar6;
          *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(puVar11);
        puVar4 = (undefined8 *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0x48));
      plVar5 = param_3;
      unaff_x21 = param_2;
      if ((bool)uVar3) {
        return puVar4;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0x48));
      puVar4 = param_2;
      plVar5 = param_3;
      puVar11 = unaff_x20;
      if ((bool)uVar3) {
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x18);
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    param_3 = (long *)puVar4[0x3e];
    unaff_x20 = (undefined8 *)0x0;
    *(undefined1 **)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x90) = puVar11;
    *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10b8ab204;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    param_2 = extraout_x8_01;
    func_0x00010b8abce8();
    *(undefined8 *)((long)register0x00000008 + -0xa8) = extraout_x8;
    bVar2 = (char)plVar5[1] == '\t';
    if (bVar2) {
      unaff_x21 = (undefined8 *)*plVar5;
      bVar2 = (undefined8 *)unaff_x21[2] == unaff_x20;
      puVar11 = unaff_x20;
      if (((undefined8 *)unaff_x21[2] <= unaff_x20) ||
         (bVar2 = true, *(char *)(unaff_x21 + (long)unaff_x20 * 2 + 4) == '\x01'))
      goto LAB_10b8aaf40;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xc0);
      FUN_10b8ab468((undefined1 *)((long)register0x00000008 + -0xc0));
      uVar3 = *(long *)((long)register0x00000008 + -0xc0) == 1;
      if ((bool)uVar3) {
        FUN_10b9abdd8((undefined1 *)((long)register0x00000008 + -200),unaff_x21);
        unaff_x21 = *(undefined8 **)((long)register0x00000008 + -200);
        FUN_10b9a9020(unaff_x21 + (long)unaff_x20 * 2 + 3,
                      (undefined1 *)((long)register0x00000008 + -0xb8));
        func_0x00010b9a8f84((undefined1 *)((long)register0x00000008 + -0xd8),
                            (undefined1 *)((long)register0x00000008 + -200));
        param_3 = (long *)((long)register0x00000008 + -0xd8);
        func_0x00010b8abbc8();
        FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0xd8));
        func_0x000104bddf60(unaff_x21);
      }
      else {
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0xb8);
        *unaff_x19 = 2;
        unaff_x19[1] = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      }
      param_2 = (undefined8 *)((long)register0x00000008 + -0xc0);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0xa8));
      if ((bool)uVar3) {
        return param_2;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0xa8));
      unaff_x20 = puVar11;
      if (bVar2) {
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x78);
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x90);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x88);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
SUB_10b8a1764:
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar8;
        *(undefined8 *)((long)register0x00000008 + -0x18) = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x10) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar12;
        *unaff_x19 = 1;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    unaff_x30 = FUN_10b8aaffc;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
  } while( true );
}



/* Entry: 10b8ab204; end: 10b8ab217;  */

undefined8 * FUN_10b8ab204(undefined8 *param_1,double param_2,undefined8 *param_3,long *param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar10;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 uVar11;
  code *unaff_x30;
  
  do {
    plVar5 = (long *)param_3[0x3e];
    puVar6 = (undefined8 *)0x0;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8abce8();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    bVar3 = (char)param_4[1] == '\t';
    if (bVar3) {
      unaff_x21 = (undefined8 *)*param_4;
      bVar3 = (undefined8 *)unaff_x21[2] == puVar6;
      unaff_x20 = puVar6;
      if (((undefined8 *)unaff_x21[2] <= puVar6) ||
         (bVar3 = true, *(char *)(unaff_x21 + (long)puVar6 * 2 + 4) == '\x01')) goto LAB_10b8aaf40;
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x50);
      FUN_10b8ab468((undefined1 *)((long)register0x00000008 + -0x50));
      uVar4 = *(long *)((long)register0x00000008 + -0x50) == 1;
      if ((bool)uVar4) {
        FUN_10b9abdd8((undefined1 *)((long)register0x00000008 + -0x58),unaff_x21);
        unaff_x21 = *(undefined8 **)((long)register0x00000008 + -0x58);
        FUN_10b9a9020(unaff_x21 + (long)puVar6 * 2 + 3,
                      (undefined1 *)((long)register0x00000008 + -0x48));
        func_0x00010b9a8f84((undefined1 *)((long)register0x00000008 + -0x68),
                            (undefined1 *)((long)register0x00000008 + -0x58));
        plVar5 = (long *)((long)register0x00000008 + -0x68);
        func_0x00010b8abbc8();
        FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0x68));
        func_0x000104bddf60(unaff_x21);
      }
      else {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x48);
        *unaff_x19 = 2;
        unaff_x19[1] = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      }
      param_1 = (undefined8 *)((long)register0x00000008 + -0x50);
      func_0x000104bda914();
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0x38));
      if ((bool)uVar4) {
        return param_1;
      }
    }
    else {
LAB_10b8aaf40:
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0x38));
      if (bVar3) {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x18);
        puVar2 = (undefined1 *)register0x00000008;
        goto SUB_10b8a1764;
      }
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x90) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10b8aaffc;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x00010b8abb84();
    *(undefined8 *)((long)register0x00000008 + -0xb8) = extraout_x8_00;
    uVar4 = (char)plVar5[1] == '\t';
    if ((bool)uVar4) {
      if (*plVar5 == 0) {
        plVar5 = (long *)&UNK_10f7ca8d7;
        param_3 = (undefined8 *)((long)register0x00000008 + -0xd0);
        FUN_10b99f5f8();
        unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
        func_0x00010b8abbc0();
LAB_10b8ab158:
        *unaff_x19 = 2;
        unaff_x19[1] = unaff_x20;
        func_0x00010b8abbc0();
      }
      else {
        FUN_10b9abdd8((undefined1 *)((long)register0x00000008 + -0xd8));
        puVar6 = *(undefined8 **)((long)register0x00000008 + -0xd8);
        uVar4 = puVar6[2] == 5;
        if (((ulong)puVar6[2] < 5) || (uVar4 = true, *(char *)(puVar6 + 0xc) == '\x01')) {
LAB_10b8ab0e8:
          unaff_x22 = (undefined1 *)0x1;
          param_3 = (undefined8 *)0x0;
          unaff_x20 = puVar6;
        }
        else {
          plVar5 = (long *)param_1[0x3e];
          unaff_x20 = (undefined8 *)((long)register0x00000008 + -0xd0);
          FUN_10b8ab468((undefined1 *)((long)register0x00000008 + -0xd0),plVar5,puVar6 + 0xb);
          lVar10 = *(long *)((long)register0x00000008 + -0xd0);
          if (lVar10 == 1) {
            plVar5 = (long *)((long)register0x00000008 + -200);
            FUN_10b9a9020(puVar6 + 0xb);
          }
          else {
            unaff_x20 = *(undefined8 **)((long)register0x00000008 + -200);
            *(undefined8 *)((long)register0x00000008 + -200) = 0;
          }
          func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0xd0));
          uVar4 = lVar10 == 1;
          unaff_x23 = unaff_x20;
          if ((bool)uVar4) goto LAB_10b8ab0e8;
          unaff_x22 = (undefined1 *)0x0;
          param_3 = puVar6;
        }
        func_0x000104bddf60();
        if ((int)unaff_x22 == 0) goto LAB_10b8ab158;
        if (param_1[3] == 0) {
          *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x20;
          uVar4 = unaff_x20[2] == 5;
          if (!(bool)uVar4) goto LAB_10b8ab198;
LAB_10b8ab178:
          func_0x00010b9a8f84((undefined1 *)((long)register0x00000008 + -0xd0),
                              (undefined1 *)((long)register0x00000008 + -0xe0));
          plVar5 = (long *)((long)register0x00000008 + -0xd0);
          func_0x00010b8abbc8();
          FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0xd0));
        }
        else {
          bVar1 = *(byte *)(param_1[3] + 0x230);
          *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x20;
          uVar4 = false;
          if (unaff_x20[2] == 5) {
            uVar4 = 0;
            if ((bVar1 & 3) == 2) {
              FUN_10b9a92f0(unaff_x20 + 5);
              uVar4 = param_2 == 0.0;
              if (!(bool)uVar4) {
                param_2 = -param_2;
                *(undefined2 *)((long)register0x00000008 + -200) = 6;
                *(double *)((long)register0x00000008 + -0xd0) = param_2;
                FUN_10b9a9020(unaff_x20 + 5,(undefined1 *)((long)register0x00000008 + -0xd0));
                FUN_10b9a8d98((undefined1 *)((long)register0x00000008 + -0xd0));
              }
            }
            goto LAB_10b8ab178;
          }
LAB_10b8ab198:
          plVar5 = (long *)&UNK_10f7ca873;
          FUN_10b99f5f8((undefined1 *)((long)register0x00000008 + -0xd0));
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0xd0);
          *unaff_x19 = 2;
          unaff_x19[1] = uVar7;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          func_0x00010b8abbc0();
        }
        func_0x000104bddf60(unaff_x20);
        param_3 = (undefined8 *)0x0;
        func_0x000104bddf60();
      }
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0xb8));
      unaff_x21 = param_1;
      if ((bool)uVar4) {
        return param_3;
      }
    }
    else {
      func_0x00010b8abb70(*(undefined8 *)((long)register0x00000008 + -0xb8));
      param_3 = param_1;
      if ((bool)uVar4) {
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x78);
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x90);
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x88);
SUB_10b8a1764:
        *(undefined8 *)(puVar2 + -0x20) = uVar9;
        *(undefined8 *)(puVar2 + -0x18) = uVar8;
        *(undefined8 *)(puVar2 + -0x10) = uVar7;
        *(undefined8 *)(puVar2 + -8) = uVar11;
        *unaff_x19 = 1;
        FUN_10b9a8f04(unaff_x19 + 1);
        return unaff_x19;
      }
    }
    unaff_x30 = FUN_10b8ab204;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    param_4 = plVar5;
    param_1 = extraout_x8_01;
  } while( true );
}



/* Entry: 10b8ab218; end: 10b8ab467;  */

undefined8 **** FUN_10b8ab218(undefined8 ****param_1,undefined8 ***param_2,undefined8 ***param_3)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 ****unaff_x19;
  undefined8 ***unaff_x20;
  undefined8 ****unaff_x21;
  undefined8 ****unaff_x22;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  undefined8 **ppuVar12;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 **ppuStack_108;
  undefined2 uStack_100;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 **ppuStack_c0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  long lStack_88;
  undefined8 **ppuStack_80;
  undefined8 **appuStack_78 [2];
  undefined8 uStack_68;
  
  func_0x00010b8abb84();
  bVar3 = *(char *)(param_2 + 1) == '\t';
  if (bVar3) {
    unaff_x21 = (undefined8 ****)*param_2;
    uVar4 = unaff_x21[2] == (undefined8 ***)0x4;
    uStack_68 = extraout_x8;
    if ((bool)uVar4) {
      uVar4 = *(char *)(unaff_x21 + 4) == '\t';
      if ((!(bool)uVar4) || (pppuVar9 = unaff_x21[3], pppuVar9 == (undefined8 ***)0x0)) {
        param_2 = (undefined8 ***)&UNK_10f7ca8a4;
        goto LAB_10b8ab344;
      }
      FUN_10b9abdd8(&lStack_88,pppuVar9);
      pppuVar10 = pppuVar9 + 3;
      lStack_a0 = lStack_88;
      lVar11 = lStack_88 + 0x18;
      ppuVar12 = (undefined8 **)0xffffffffffffffff;
      do {
        ppuVar12 = (undefined8 **)((long)ppuVar12 + 1);
        if (pppuVar9[2] <= ppuVar12) {
          FUN_10b9abdd8(&pppuStack_90,unaff_x21);
          func_0x00010b9a8f84(&ppuStack_80,&lStack_88);
          FUN_10b9a9020(pppuStack_90 + 3,&ppuStack_80);
          func_0x00010b8abc7c();
          bVar3 = false;
          if (param_1[3] != (undefined8 ***)0x0) {
            bVar3 = ((ulong)param_1[3][0x46] & 3) == 2;
          }
          pppuStack_98 = pppuStack_90;
          uVar4 = (undefined8 ***)pppuStack_90[2] == (undefined8 ***)0x4;
          if ((bool)uVar4) {
            if (bVar3) {
              iVar5 = (int)pppuStack_90 + 0x38;
              FUN_10b9a9518();
              uVar1 = iVar5 - 1;
              uVar4 = uVar1 == 6;
              if ((uVar1 < 7) && ((0x77U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
                appuStack_78[0] = (undefined8 **)CONCAT62(appuStack_78[0]._2_6_,4);
                ppuStack_80 = (undefined8 **)
                              CONCAT44(ppuStack_80._4_4_,
                                       *(undefined4 *)(&UNK_10e5f50cc + (ulong)uVar1 * 4));
                FUN_10b9a9020(pppuStack_90 + 7,&ppuStack_80);
                func_0x00010b8abc7c();
              }
            }
            func_0x00010b9a8f84(&ppuStack_80,&pppuStack_98);
            param_2 = &ppuStack_80;
            func_0x00010b8abbc8();
            func_0x00010b8abc7c();
          }
          else {
            param_2 = (undefined8 ***)&UNK_10f7ca88b;
            FUN_10b99f5f8(&ppuStack_80);
            func_0x00010b8abc48();
          }
          ppppuVar6 = (undefined8 ****)pppuStack_90;
          func_0x000104bddf60();
          unaff_x21 = (undefined8 ****)pppuStack_90;
          goto LAB_10b8ab45c;
        }
        param_2 = param_1[0x3e];
        param_3 = pppuVar10;
        FUN_10b8ab468(&ppuStack_80);
        unaff_x20 = (undefined8 ***)ppuStack_80;
        if ((undefined8 ***)ppuStack_80 == (undefined8 ***)0x1) {
          param_2 = appuStack_78;
          FUN_10b9a9020(lVar11);
        }
        else {
          *unaff_x19 = (undefined8 ***)0x2;
          unaff_x19[1] = (undefined8 ***)appuStack_78[0];
          appuStack_78[0] = (undefined8 ***)0x0;
        }
        lVar11 = lVar11 + 0x10;
        pppuVar10 = pppuVar10 + 2;
        ppppuVar6 = (undefined8 ****)&ppuStack_80;
        func_0x000104bda914();
      } while (unaff_x20 == (undefined8 ***)0x1);
      uVar4 = 0;
LAB_10b8ab45c:
      func_0x00010b8abccc();
      unaff_x22 = param_1;
    }
    else {
      param_2 = (undefined8 ***)&UNK_10f7ca88b;
LAB_10b8ab344:
      ppppuVar6 = (undefined8 ****)&ppuStack_80;
      FUN_10b99f5f8();
      func_0x00010b8abc48();
      ppuStack_80 = (undefined8 ***)0x0;
      func_0x00010b8abbc0();
    }
    func_0x00010b8abb70(uStack_68);
    param_1 = ppppuVar6;
    if ((bool)uVar4) {
      return ppppuVar6;
    }
  }
  else {
    func_0x00010b8abb70(extraout_x8);
    plVar2 = (long *)register0x00000008;
    ppppuVar6 = unaff_x19;
    if (bVar3) goto SUB_10b8a1764;
  }
  ppppuVar6 = param_1;
  ___stack_chk_fail();
  bVar3 = ((ulong)param_3[1] & 0xfe) == 2;
  unaff_x29 = &stack0xfffffffffffffff0;
  if (bVar3) {
    if (param_2 == (undefined8 ***)0x0) {
      ppppuVar7 = &pppuStack_c8;
      FUN_10b99f5f8(ppppuVar7,&UNK_10f7ca6ae);
      *ppppuVar6 = (undefined8 ***)0x2;
      ppppuVar6[1] = pppuStack_c8;
      pppuStack_c8 = (undefined8 ***)0x0;
      func_0x00010b8abbc0();
      return ppppuVar7;
    }
    pcStack_a8 = FUN_10b8ab468;
    pppuStack_d0 = unaff_x22;
    pppuStack_c8 = unaff_x21;
    ppuStack_c0 = unaff_x20;
    func_0x00010b8b2b94(*(undefined1 *)(param_3 + 1));
    plVar2 = &lStack_a0;
    unaff_x20 = (undefined8 ***)ppuStack_c0;
    unaff_x30 = pcStack_a8;
    if (bVar3) {
      FUN_10b9a9358(&pppuStack_e8,param_3);
      uVar8 = 0;
      FUN_10b98b110();
      if ((uVar8 & 1) == 0) {
        func_0x000107c31084();
        puStack_d8 = &UNK_1003ab990;
        pppuStack_e0 = &pppuStack_e8;
        func_0x000107c2793c(&UNK_10f7cb1f2);
        func_0x000107c3173c(&ppuStack_108);
        func_0x000107c31080(&uStack_f0,param_2,&ppuStack_108);
        FUN_10b99f560(&pppuStack_e0,&uStack_f0);
        *ppppuVar6 = (undefined8 ***)0x2;
        ppppuVar6[1] = pppuStack_e0;
        pppuStack_e0 = (undefined8 ***)0x0;
        func_0x00010b8b2b2c();
        func_0x000107c278f8(uStack_f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_108);
      }
      else {
        uStack_100 = 5;
        ppuStack_108 = param_2;
        func_0x000104bf351c(ppppuVar6,&ppuStack_108);
        FUN_10b9a8d98(&ppuStack_108);
      }
      func_0x000107c278f8(pppuStack_e8);
      return (undefined8 ****)pppuStack_e8;
    }
  }
  else {
    unaff_x30 = FUN_10b8ab468;
    plVar2 = &lStack_a0;
  }
SUB_10b8a1764:
  *(undefined8 ****)((long)plVar2 + -0x20) = unaff_x20;
  *(undefined8 *****)((long)plVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar2 + -0x10) = unaff_x29;
  *(code **)((long)plVar2 + -8) = unaff_x30;
  *ppppuVar6 = (undefined8 ***)0x1;
  FUN_10b9a8f04(ppppuVar6 + 1);
  return ppppuVar6;
}



/* Entry: 10b8ab468; end: 10b8ab4f7;  */

undefined8 * FUN_10b8ab468(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lStack_68;
  undefined2 uStack_60;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  undefined8 in_stack_ffffffffffffffd8;
  
  bVar1 = (*(byte *)(param_3 + 8) & 0xfe) == 2;
  if (bVar1) {
    if (param_2 == 0) {
      puVar2 = (undefined8 *)&stack0xffffffffffffffd8;
      FUN_10b99f5f8(puVar2,&UNK_10f7ca6ae);
      *param_1 = 2;
      param_1[1] = in_stack_ffffffffffffffd8;
      func_0x00010b8abbc0();
      return puVar2;
    }
    func_0x00010b8b2b94(*(undefined1 *)(param_3 + 8));
    if (bVar1) {
      FUN_10b9a9358(&puStack_48,param_3);
      uVar3 = 0;
      FUN_10b98b110();
      if ((uVar3 & 1) == 0) {
        func_0x000107c31084();
        puStack_38 = &UNK_1003ab990;
        ppuStack_40 = &puStack_48;
        func_0x000107c2793c(&UNK_10f7cb1f2);
        func_0x000107c3173c(&lStack_68);
        func_0x000107c31080(&uStack_50,param_2,&lStack_68);
        FUN_10b99f560(&ppuStack_40,&uStack_50);
        *param_1 = 2;
        param_1[1] = ppuStack_40;
        ppuStack_40 = (undefined8 **)0x0;
        func_0x00010b8b2b2c();
        func_0x000107c278f8(uStack_50);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_68);
      }
      else {
        uStack_60 = 5;
        lStack_68 = param_2;
        func_0x000104bf351c(param_1,&lStack_68);
        FUN_10b9a8d98(&lStack_68);
      }
      func_0x000107c278f8(puStack_48);
      return puStack_48;
    }
  }
  *param_1 = 1;
  FUN_10b9a8f04(param_1 + 1);
  return param_1;
}



/* Entry: 10b8ab4f8; end: 10b8ab673;  */

void FUN_10b8ab4f8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 auStack_a8 [2];
  undefined8 uStack_98;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010b8abb84();
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(byte *)(*(long *)(param_1 + 0x18) + 0x230) & 3) == 2;
  }
  uStack_38 = extraout_x8;
  FUN_10b8b245c(&lStack_48,param_2);
  lVar2 = lStack_40;
  uVar4 = lStack_48 == 1;
  if ((bool)uVar4) {
    lStack_40 = 0;
    if ((bVar3) && (lVar5 = lVar2, func_0x00010b8a8f40(), (int)lVar5 == 0)) {
      FUN_10b8ab674(&lStack_60);
      lVar5 = lStack_60;
      uVar1 = *(undefined1 *)(lVar2 + 0x39);
      *(undefined8 *)(lStack_60 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined1 *)(lStack_60 + 0x38) = uVar1;
      uVar1 = *(undefined1 *)(lVar2 + 0x38);
      *(undefined8 *)(lStack_60 + 0x20) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined1 *)(lStack_60 + 0x39) = uVar1;
      uVar1 = *(undefined1 *)(lVar2 + 0x3b);
      *(undefined8 *)(lStack_60 + 0x28) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined1 *)(lStack_60 + 0x3a) = uVar1;
      uVar1 = *(undefined1 *)(lVar2 + 0x3a);
      *(undefined8 *)(lStack_60 + 0x30) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined1 *)(lStack_60 + 0x3b) = uVar1;
      if (*(long *)(lStack_60 + 0x10) != 0) {
        do {
          func_0x00010b8abcac();
        } while (extraout_w10_00 != 0);
      }
      lStack_68 = lVar5;
      func_0x00010b9a8f78(auStack_58,&lStack_68);
      func_0x00010b8abbc8();
      FUN_10b9a8d98(auStack_58);
      func_0x000107c3105c(lVar5);
      func_0x0001080cf29c(lStack_60);
    }
    else {
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
        do {
          func_0x00010b8abcac();
        } while (extraout_w10 != 0);
      }
      lStack_60 = lVar2;
      func_0x00010b9a8f78(auStack_58,&lStack_60);
      func_0x00010b8abbc8();
      FUN_10b9a8d98(auStack_58);
      func_0x000104bddf04(lVar2);
    }
    func_0x0001080cf29c(lVar2);
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = lStack_40;
    lStack_40 = 0;
  }
  plVar6 = &lStack_48;
  func_0x0001080cf2a8();
  func_0x00010b8abb70(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8abb84();
  uStack_98 = extraout_x8_00;
  FUN_10b8ab998(auStack_a8);
  *unaff_x19 = auStack_a8[0];
  func_0x00010b8abb70(uStack_98);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8abce8();
  FUN_10b8a3bac(plVar6[1],&DAT_10f3c5525,6);
  FUN_10b8a3bac(unaff_x19[1],&DAT_10f2db985,9);
  FUN_10b8a3bac(unaff_x19[1],&DAT_10f2db30c,10);
  FUN_10b8a3bac(unaff_x19[1],"background",10);
  func_0x00010b8abcbc(unaff_x19[1],&DAT_10f2db98f);
  func_0x00010b8abcbc(unaff_x19[1],&DAT_10f479248);
  FUN_10b8a3bac(unaff_x19[1],&DAT_10f477a30,9);
  func_0x00010b8abcbc(unaff_x19[1],&DAT_10f479505);
  func_0x00010b8abbe0(FUN_10b8aa100);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aa3f4);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aa680);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aae3c);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8a6c6c();
  func_0x00010b8a6c6c();
  func_0x00010b8a6c6c();
  func_0x00010b8abc40();
  func_0x00010b8a6c6c();
  func_0x00010b8abc40();
  func_0x00010b8abc40();
  func_0x00010b8abc40();
  func_0x00010b8abb70(extraout_x8_01);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    if (*(char *)(unaff_x19 + 2) == '\x01') {
      FUN_10b9a8d98();
    }
    return;
  }
  return;
}



/* Entry: 10b8ab674; end: 10b8ab6b3;  */

void FUN_10b8ab674(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b8abb84();
  uStack_28 = extraout_x8;
  FUN_10b8ab998(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x00010b8abb70(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8abce8();
  FUN_10b8a3bac(*(undefined8 *)(param_1 + 8),&DAT_10f3c5525,6);
  FUN_10b8a3bac(unaff_x19[1],&DAT_10f2db985,9);
  FUN_10b8a3bac(unaff_x19[1],&DAT_10f2db30c,10);
  FUN_10b8a3bac(unaff_x19[1],"background",10);
  func_0x00010b8abcbc(unaff_x19[1],&DAT_10f2db98f);
  func_0x00010b8abcbc(unaff_x19[1],&DAT_10f479248);
  FUN_10b8a3bac(unaff_x19[1],&DAT_10f477a30,9);
  func_0x00010b8abcbc(unaff_x19[1],&DAT_10f479505);
  func_0x00010b8abbe0(FUN_10b8aa100);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aa3f4);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aa680);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aae3c);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8a6c6c();
  func_0x00010b8a6c6c();
  func_0x00010b8a6c6c();
  func_0x00010b8abc40();
  func_0x00010b8a6c6c();
  func_0x00010b8abc40();
  func_0x00010b8abc40();
  func_0x00010b8abc40();
  func_0x00010b8abb70(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(unaff_x19 + 2) == '\x01') {
    FUN_10b9a8d98();
  }
  return;
}



/* Entry: 10b8ab6b4; end: 10b8ab933;  */

void FUN_10b8ab6b4(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010b8abce8();
  FUN_10b8a3bac(*(undefined8 *)(param_1 + 8),&DAT_10f3c5525,6);
  FUN_10b8a3bac(*(undefined8 *)(unaff_x19 + 8),&DAT_10f2db985,9);
  FUN_10b8a3bac(*(undefined8 *)(unaff_x19 + 8),&DAT_10f2db30c,10);
  FUN_10b8a3bac(*(undefined8 *)(unaff_x19 + 8),"background",10);
  func_0x00010b8abcbc(*(undefined8 *)(unaff_x19 + 8),&DAT_10f2db98f);
  func_0x00010b8abcbc(*(undefined8 *)(unaff_x19 + 8),&DAT_10f479248);
  FUN_10b8a3bac(*(undefined8 *)(unaff_x19 + 8),&DAT_10f477a30,9);
  func_0x00010b8abcbc(*(undefined8 *)(unaff_x19 + 8),&DAT_10f479505);
  func_0x00010b8abbe0(FUN_10b8aa100);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aa3f4);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aa680);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbe0(FUN_10b8aae3c);
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8abbf8();
  FUN_10b8a6b78();
  func_0x00010b8abb98();
  func_0x00010b8a6c6c();
  func_0x00010b8a6c6c();
  func_0x00010b8a6c6c();
  func_0x00010b8abc40();
  func_0x00010b8a6c6c();
  func_0x00010b8abc40();
  func_0x00010b8abc40();
  func_0x00010b8abc40();
  func_0x00010b8abb70(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(unaff_x19 + 0x10) == '\x01') {
    FUN_10b9a8d98();
  }
  return;
}



/* Entry: 10b8ab934; end: 10b8ab953;  */

void FUN_10b8ab934(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b9a8d98();
  }
  return;
}



/* Entry: 10b8ab954; end: 10b8ab997;  */

long * FUN_10b8ab954(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b8abc58();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x000104bda960();
  }
  return param_1;
}



/* Entry: 10b8ab998; end: 10b8ab9b7;  */

void FUN_10b8ab998(void)

{
  undefined1 uStack_11;
  
  FUN_10b8ab9b8(&uStack_11);
  return;
}



/* Entry: 10b8ab9b8; end: 10b8aba43;  */

void FUN_10b8ab9b8(void)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x00010b8abb84();
  uStack_28 = extraout_x8;
  FUN_10b8aba60(auStack_40,1);
  puVar6 = puStack_30;
  *puStack_30 = &PTR_FUN_110d70da0;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110d70c68;
  puStack_30[7] = 0;
  puStack_30[6] = 0;
  puStack_30[9] = 0;
  puStack_30[8] = 0;
  *(undefined4 *)(puStack_30 + 10) = 0;
  puStack_30 = (undefined8 *)0x0;
  FUN_10b8aba44(puVar6 + 3);
  func_0x00010b8abb60();
  func_0x00010b8abb70(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = puVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b8aba44;
    lStack_58 = extraout_x8_00[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_60);
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10b8aba44; end: 10b8aba5f;  */

void FUN_10b8aba44(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8aba60; end: 10b8aba87;  */

long FUN_10b8aba60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8aba88();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8aba88; end: 10b8abab7;  */

void FUN_10b8aba88(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_FUN_110d70da0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8abab8; end: 10b8ababb;  */

void FUN_10b8abab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70da0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8ababc; end: 10b8abacf;  */

void FUN_10b8ababc(void)

{
  func_0x00010b8abae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8abad0; end: 10b8abaf3;  */

void FUN_10b8abad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8abad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8abaf4; end: 10b8abb5f;  */

void FUN_10b8abaf4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8abb60; end: 10b8abd27;  */

void FUN_10b8abb60(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8abd28; end: 10b8abde7;  */

undefined8 *
FUN_10b8abd28(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  *param_2 = param_4;
  uStack_3c = param_1;
  uStack_38 = param_3;
  func_0x00010b8abda4(param_2 + 1,&uStack_38,param_4,&uStack_3c);
  FUN_10b8abde8(param_2 + 2,param_4);
  func_0x00010b8abe18(param_2 + 3,param_4);
  func_0x00010b8abe3c(param_2 + 4,param_4);
  return param_2;
}



/* Entry: 10b8abde8; end: 10b8ac197;  */

void FUN_10b8abde8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  FUN_10b89f920();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b8ac198; end: 10b8ac1d7;  */

void FUN_10b8ac198(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_10b9a9608();
  uVar1 = 1;
  if (param_4 == 0) {
    uVar1 = 2;
  }
  FUN_10b8c7bec(param_3,uVar1);
  *param_1 = 1;
  return;
}



/* Entry: 10b8ac1d8; end: 10b8ac1e7;  */

void FUN_10b8ac1d8(undefined8 param_1,long param_2)

{
  *(ulong *)(param_2 + 0x1c8) = *(ulong *)(param_2 + 0x1c8) & 0xffffffffffff9fff;
  return;
}



/* Entry: 10b8ac1e8; end: 10b8ac23f;  */

void FUN_10b8ac1e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_10b9a9608();
  FUN_10b8c9d3c(param_3,param_2,param_4);
  uVar1 = 1;
  if ((int)param_4 == 0) {
    uVar1 = 2;
  }
  FUN_10b8c7bec(param_3,uVar1);
  *param_1 = 1;
  return;
}



/* Entry: 10b8ac240; end: 10b8ac273;  */

void FUN_10b8ac240(undefined8 param_1,long param_2)

{
  FUN_10b8c9d3c(param_2,param_1,0);
  *(ulong *)(param_2 + 0x1c8) = *(ulong *)(param_2 + 0x1c8) & 0xffffffffffff9fff;
  return;
}



/* Entry: 10b8ac274; end: 10b8ac2ab;  */

void FUN_10b8ac274(void)

{
  undefined8 *unaff_x21;
  
  FUN_10b8ac4e0();
  func_0x00010b8ac528();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  *unaff_x21 = 1;
  return;
}



/* Entry: 10b8ac2ac; end: 10b8ac2cf;  */

void FUN_10b8ac2ac(void)

{
  func_0x00010b8ac4f8();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  return;
}



/* Entry: 10b8ac2d0; end: 10b8ac303;  */

void FUN_10b8ac2d0(void)

{
  FUN_10b8ac4e0();
  func_0x00010b8ac528();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  func_0x00010b8ac574();
  return;
}



/* Entry: 10b8ac304; end: 10b8ac327;  */

void FUN_10b8ac304(void)

{
  func_0x00010b8ac4f8();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  return;
}



/* Entry: 10b8ac328; end: 10b8ac35b;  */

void FUN_10b8ac328(void)

{
  FUN_10b8ac4e0();
  func_0x00010b8ac528();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  func_0x00010b8ac574();
  return;
}



/* Entry: 10b8ac35c; end: 10b8ac37f;  */

void FUN_10b8ac35c(void)

{
  func_0x00010b8ac4f8();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  return;
}



/* Entry: 10b8ac380; end: 10b8ac3b3;  */

void FUN_10b8ac380(void)

{
  FUN_10b8ac4e0();
  func_0x00010b8ac528();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  func_0x00010b8ac574();
  return;
}



/* Entry: 10b8ac3b4; end: 10b8ac3d7;  */

void FUN_10b8ac3b4(void)

{
  func_0x00010b8ac4f8();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  return;
}



/* Entry: 10b8ac3d8; end: 10b8ac40b;  */

void FUN_10b8ac3d8(void)

{
  FUN_10b8ac4e0();
  func_0x00010b8ac528();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  func_0x00010b8ac574();
  return;
}



/* Entry: 10b8ac40c; end: 10b8ac42f;  */

void FUN_10b8ac40c(void)

{
  func_0x00010b8ac4f8();
  FUN_10b8c8e4c();
  func_0x00010b8ac520();
  return;
}



/* Entry: 10b8ac430; end: 10b8ac4bb;  */

void FUN_10b8ac430(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1d0);
  FUN_10b9a94ec(&uStack_48,param_3);
  func_0x0001080d1cc8(&uStack_40,&uStack_48);
  FUN_10b8d3034(&uStack_38,uVar1,&uStack_40);
  func_0x0001080d2890(uStack_40);
  func_0x000104bddf04(uStack_48);
  FUN_10b8c8af8(param_2,param_1,&uStack_38);
  func_0x00010b8ac574();
  func_0x0001080d2890(uStack_38);
  return;
}



/* Entry: 10b8ac4bc; end: 10b8ac4df;  */

void FUN_10b8ac4bc(void)

{
  undefined8 uStack_18;
  
  func_0x00010b8ac4f8();
  FUN_10b8c8af8();
  func_0x0001080d2890(uStack_18);
  return;
}



/* Entry: 10b8ac4e0; end: 10b8ac597;  */

void FUN_10b8ac4e0(undefined8 param_1,long param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 uVar6;
  long **pplVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  long *in_stack_00000008;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  if ((char)param_3[1] != '\x03') {
    if ((char)param_3[1] == '\x02') {
      in_stack_00000008 = (long *)*param_3;
      if (in_stack_00000008 != (long *)0x0) {
        piVar1 = (int *)((long)in_stack_00000008 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_38 = 0;
      func_0x00010b9abab0();
      return;
    }
LAB_10b9a93f4:
    plVar10 = param_3;
    func_0x000107c31084();
    FUN_10b9a9894(&uStack_50,param_3);
    func_0x000107c31080(&stack0x00000008,plVar10,&uStack_50);
    func_0x00010b9abc2c();
    return;
  }
  plVar10 = (long *)*param_3;
  iVar2 = (int)plVar10[3];
  uVar6 = iVar2 == 2;
  if ((bool)uVar6) {
    FUN_10b9a5b88();
    param_3 = plVar10;
    func_0x000107c31084();
  }
  else {
    uVar6 = iVar2 == 1;
    if ((bool)uVar6) {
      func_0x000107c31084();
      param_2 = plVar10[2];
      plVar10 = plVar10 + 4;
      FUN_10b9972a0();
    }
    else {
      if (iVar2 != 0) goto LAB_10b9a93f4;
      func_0x000107c31084();
      param_2 = plVar10[2];
      plVar10 = plVar10 + 4;
    }
  }
  if (param_2 == 0) {
    return;
  }
  pplVar7 = &plStack_40;
  plStack_40 = plVar10;
  lStack_38 = param_2;
  func_0x0001003a8464(pplVar7);
  func_0x000107c60d88(param_3 + 6);
  pplVar8 = &plStack_40;
  func_0x0001003a857c(param_3,pplVar8,pplVar7);
  func_0x0001003a8718();
  if (!(bool)uVar6) {
    plVar9 = *pplVar8;
    plVar10 = plVar9 + 1;
    do {
      lVar5 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == 0) {
      *(int *)plVar10 = 0;
      plStack_48 = (long *)0x0;
    }
    else {
      plStack_48 = plVar9;
      if (plVar9 != (long *)0x0) {
        uStack_50 = 0;
        plStack_48 = (long *)0x0;
        in_stack_00000008 = plVar9;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&plStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&plStack_48);
  }
  func_0x0001003a87ec(&stack0x00000008,param_3,plStack_40,lStack_38,pplVar7);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b8ac598; end: 10b8ade3f;  */

void FUN_10b8ac598(void)

{
  return;
}



/* Entry: 10b8ade40; end: 10b8ade9b;  */

void FUN_10b8ade40(void)

{
  int iVar1;
  
  if ((bRam00000001137fcd20 & 1) == 0) {
    iVar1 = 0x137fcd20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fcd18,&UNK_10f7cac72);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137fcd20);
      return;
    }
  }
  return;
}



/* Entry: 10b8ade9c; end: 10b8adf83;  */

long FUN_10b8ade9c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_38;
  
  lVar3 = *param_1 + param_1[1] * 0xf0;
  if (param_1[1] == param_1[2]) {
    FUN_10b8b0588(&lStack_38,param_1,lVar3);
    uVar2 = param_1[1];
    lVar3 = lStack_38;
  }
  else {
    func_0x00010b8b08b8(lVar3);
    FUN_10b8af984(lVar3);
    uVar2 = param_1[1] + 1;
    param_1[1] = uVar2;
  }
  if (1 < uVar2) {
    FUN_10b8adf84(lVar3,*param_1 + uVar2 * 0xf0 + -0x1e0);
    lVar4 = *(long *)(lVar3 + 0x28);
    if (lVar4 != 0) {
      lVar1 = 0x40;
      __Znwm();
      func_0x00010b8b096c();
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(lVar1 + 0x10) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
      *(undefined8 *)(lVar1 + 0x30) = uVar5;
      lStack_38 = lVar1;
      func_0x00010b8ae018((long *)(lVar3 + 0x28),&lStack_38);
      FUN_10b8af370(lStack_38);
    }
  }
  return lVar3;
}



/* Entry: 10b8adf84; end: 10b8ae10f;  */

void FUN_10b8adf84(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8b0860();
  func_0x0001081079ec();
  func_0x00010b8b080c();
  func_0x00010b8af32c(unaff_x19 + 0x28,unaff_x20 + 0x28);
  func_0x0001080ecde8(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x0001080ecde8(unaff_x19 + 0x38,unaff_x20 + 0x38);
  func_0x00010b8b087c();
  if ((bool)in_ZR) {
    if (extraout_w8 != 0) {
      FUN_10b8af39c(unaff_x19 + 0x70,unaff_x20 + 0x70);
    }
  }
  else if (extraout_w8 == 0) {
    func_0x00010b8af3ec(unaff_x19 + 0x70,unaff_x20 + 0x70);
  }
  else {
    FUN_10b8af3c8();
  }
  func_0x0001081078f8(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x000108107944(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  return;
}



/* Entry: 10b8ae110; end: 10b8af293;  */

/* WARNING: Possible PIC construction at 0x00010b8aee20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8aec28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8aece0: Changing call to branch */

long *****
FUN_10b8ae110(long *****param_1,long *****param_2,long param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long ****pppplVar5;
  undefined1 uVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 *puVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  undefined *puVar12;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar13;
  undefined8 extraout_x8;
  long ****pppplVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long *****extraout_x8_06;
  long *****extraout_x8_07;
  long *****extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long *****extraout_x8_11;
  long lVar15;
  long *****extraout_x8_12;
  long extraout_x8_13;
  undefined8 extraout_x8_14;
  long extraout_x8_15;
  undefined8 extraout_x8_16;
  long extraout_x8_17;
  undefined8 extraout_x8_18;
  long extraout_x8_19;
  undefined8 extraout_x8_20;
  long extraout_x8_21;
  undefined8 extraout_x8_22;
  long extraout_x8_23;
  undefined8 extraout_x8_24;
  long extraout_x8_25;
  undefined8 extraout_x8_26;
  long extraout_x8_27;
  undefined8 extraout_x8_28;
  long extraout_x8_29;
  undefined8 extraout_x8_30;
  long extraout_x8_31;
  undefined8 extraout_x8_32;
  long extraout_x8_33;
  undefined8 extraout_x8_34;
  undefined8 extraout_x8_35;
  long ****extraout_x8_36;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  undefined8 *unaff_x19;
  undefined4 uVar16;
  long ***ppplVar17;
  long *plVar18;
  long ***ppplVar19;
  long ****pppplVar20;
  int iVar21;
  long *****ppppplVar22;
  undefined8 *****pppppuVar23;
  undefined8 uVar24;
  float fVar25;
  long *****ppppplVar26;
  long ***appplStack_1910 [3];
  long ***ppplStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  long ****pppplStack_18e0;
  undefined8 ****ppppuStack_18d0;
  undefined8 uStack_18c8;
  long lStack_18c0;
  ulong uStack_18b8;
  undefined1 *puStack_18b0;
  uint uStack_18a4;
  long ****pppplStack_18a0;
  long ****pppplStack_1898;
  long ****pppplStack_1890;
  undefined8 uStack_1888;
  long ****pppplStack_1880;
  undefined8 uStack_1878;
  ulong auStack_1870 [4];
  undefined4 uStack_184c;
  undefined1 auStack_1848 [8];
  char cStack_1840;
  undefined1 auStack_1838 [8];
  char cStack_1830;
  long lStack_1828;
  char cStack_1820;
  long ***ppplStack_1818;
  char cStack_1810;
  long ****pppplStack_1808;
  char cStack_1800;
  undefined8 uStack_17f8;
  undefined1 *puStack_17f0;
  long lStack_17e8;
  long lStack_17e0;
  undefined1 auStack_17d8 [32];
  undefined1 auStack_17b8 [8];
  byte bStack_17b0;
  ulong uStack_17a8;
  byte bStack_17a0;
  long ****pppplStack_1798;
  undefined1 *puStack_1790;
  long lStack_1788;
  long lStack_1780;
  undefined1 auStack_1778 [3840];
  undefined1 *puStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined1 auStack_860 [992];
  long ****pppplStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  float fStack_468;
  long ****pppplStack_460;
  long ****pppplStack_458;
  undefined4 uStack_450;
  undefined8 uStack_88;
  
  pppppuVar23 = (undefined8 *****)&stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppplVar5 = (long ****)&lStack_18c0;
  ppppplVar8 = param_2;
  func_0x00010b8b084c();
  uVar6 = *(char *)(ppppplVar8 + 1) == '\t';
  uStack_88 = extraout_x8;
  if (((bool)uVar6) && (pppplVar14 = *param_2, pppplVar14 != (long ****)0x0)) {
    ppplVar17 = pppplVar14[2];
    if (ppplVar17 != (long ***)0x0) {
      ppplVar19 = (long ***)0x0;
      auStack_17b8[0] = 0;
      bStack_17b0 = 0;
      puStack_878 = auStack_860;
      puStack_18b0 = auStack_1778;
      uStack_868 = 4;
      uStack_870 = 0;
      puStack_17f0 = auStack_17d8;
      lStack_1780 = 0x10;
      lStack_1788 = 0;
      ppppplVar26 = (long *****)0x0;
      lStack_17e0 = 8;
      lStack_17e8 = 0;
      uStack_18a4 = (uint)param_5;
      ppppplVar8 = param_1;
      lStack_18c0 = param_3;
      uStack_18b8 = param_4;
      pppplStack_18a0 = (long ****)param_1;
      puStack_1790 = puStack_18b0;
code_r0x00010b8ae200:
      uVar6 = ppplVar19 == ppplVar17;
      iVar21 = (int)param_5;
      if (ppplVar17 <= ppplVar19) {
LAB_10b8af028:
        if (lStack_1788 != 0) {
          func_0x00010b8b07a4();
          func_0x00010b8b092c();
          func_0x00010b8b0748();
          func_0x00010b8b086c();
          if (iVar21 != 0) {
            if ((bStack_17b0 & 1) == 0) goto LAB_10b8af290;
            func_0x00010b8b0768();
            uVar24 = 0;
            if (extraout_x8_15 != 0) {
              do {
                func_0x00010b8b072c();
                uVar24 = extraout_x8_16;
              } while (extraout_w11_05 != 0);
            }
            goto LAB_10b8af06c;
          }
        }
        puVar9 = (undefined8 *)0x430;
        __Znwm();
        plVar18 = puVar9 + 1;
        *plVar18 = 0;
        puVar9[2] = 0;
        *puVar9 = &PTR_FUN_110d70fb8;
        param_2 = (long *****)(puVar9 + 3);
        func_0x00010b8b07a4();
        FUN_10b8b008c();
        func_0x00010b8b07d4();
        FUN_10b98c318(param_2);
        func_0x00010b8b07a4();
        func_0x00010b8b0538();
        if ((puVar9[5] == 0) || (uVar6 = *(long *)(puVar9[5] + 8) == -1, (bool)uVar6)) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *plVar18 = *plVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pppplStack_480 = (long ****)param_2;
          puStack_478 = puVar9;
          func_0x00010b8b07d4(puVar9 + 4);
          func_0x000107c278e4();
          func_0x00010b8b07a4();
          func_0x000107c284e8();
        }
        *unaff_x19 = 1;
        unaff_x19[1] = param_2;
        func_0x0001080cf6b0(0);
        goto LAB_10b8af110;
      }
      ppppplVar8 = (long *****)(pppplVar14 + (long)ppplVar19 * 2 + 3);
      FUN_10b9a9518();
      lVar15 = 1;
      if ((int)ppppplVar8 != 2) {
        lVar15 = 2;
      }
      ppplVar19 = (long ***)(lVar15 + (long)ppplVar19);
      uVar6 = ppplVar19 == ppplVar17;
      if (ppplVar17 <= ppplVar19 && !(bool)uVar6) {
        func_0x00010b8b07a4();
        FUN_10b8af48c();
        func_0x00010b8b0748();
        func_0x00010b8b086c();
        if (iVar21 == 0) goto LAB_10b8af028;
        if ((bStack_17b0 & 1) == 0) goto LAB_10b8af290;
        func_0x00010b8b0768();
        uVar24 = 0;
        if (extraout_x8_13 != 0) {
          do {
            func_0x00010b8b072c();
            uVar24 = extraout_x8_14;
          } while (extraout_w11_04 != 0);
        }
        goto LAB_10b8af06c;
      }
      uVar4 = (int)ppppplVar8 - 1;
      uVar6 = uVar4 == 0x10;
      if (0x10 < uVar4) {
        func_0x00010b8b07a4();
        FUN_10b8af48c();
        *unaff_x19 = 2;
        unaff_x19[1] = pppplStack_480;
        pppplStack_480 = (long ****)0x0;
        func_0x000104bda960(0);
        goto LAB_10b8af110;
      }
      ppppplVar10 = (long *****)(pppplVar14 + (long)ppplVar19 * 2 + 1);
      switch(uVar4) {
      case 0:
        func_0x00010b8b08b0(&pppplStack_1880);
        func_0x00010b8b08c0();
        *(undefined1 *)(extraout_x8_00 + 0x420) = 0;
        uStack_17f8 = 0;
        FUN_10b8af57c(&puStack_878,&puStack_1790,&puStack_17f0,&pppplStack_1880,&pppplStack_480,
                      &uStack_17f8);
        func_0x0001078d39e8(uStack_17f8);
        func_0x00010b8b07a4();
        FUN_10b8afc50();
code_r0x00010b8aeee4:
        ppppplVar8 = (long *****)pppplStack_1880;
        func_0x000107c278f8();
        goto code_r0x00010b8ae200;
      case 1:
        if (lStack_1788 == 0) {
          func_0x00010b8b07a4();
          func_0x00010b8b092c();
          func_0x00010b8b0748();
          func_0x00010b8b086c();
          if (iVar21 != 0) {
            if ((bStack_17b0 & 1) == 0) goto LAB_10b8af290;
            func_0x00010b8b0768();
            uVar24 = 0;
            if (extraout_x8_31 != 0) {
              do {
                func_0x00010b8b072c();
                uVar24 = extraout_x8_32;
              } while (extraout_w11_13 != 0);
            }
            goto LAB_10b8af06c;
          }
        }
        else {
          ppppplVar8 = (long *****)(puStack_1790 + lStack_1788 * 0xf0 + -0xf0);
          func_0x00010b8afc00();
          lStack_1788 = lStack_1788 + -1;
        }
        goto code_r0x00010b8ae200;
      case 2:
        func_0x00010b8b07f4();
        func_0x00010b8b08b0();
        func_0x00010b8b07ec();
        func_0x00010b8b07d4();
        FUN_10b8af6d4();
        ppppplVar8 = (long *****)pppplStack_480;
        func_0x000107c278f8();
        goto code_r0x00010b8ae200;
      case 3:
        func_0x00010b8b08b0(&pppplStack_1880);
        pppplStack_480 = (long ****)0x10f1e23d4;
        puStack_478 = (undefined8 *)0x4;
        func_0x00010b8b0758();
        if (((ulong)ppppplVar8 & 1) != 0) {
          uVar16 = 1;
code_r0x00010b8aeedc:
          func_0x00010b8b07ec();
          *(undefined4 *)(ppppplVar8 + 2) = uVar16;
          goto code_r0x00010b8aeee4;
        }
        pppplStack_480 = (long ****)&DAT_10f2fb566;
        puStack_478 = (undefined8 *)0x9;
        func_0x00010b8b0758();
        if (((ulong)ppppplVar8 & 1) != 0) {
          uVar16 = 3;
          goto code_r0x00010b8aeedc;
        }
        pppplStack_480 = (long ****)&DAT_10f4782d3;
        puStack_478 = (undefined8 *)0x10;
        func_0x00010b8b0758();
        if (((ulong)ppppplVar8 & 1) != 0) {
          uVar16 = 4;
          goto code_r0x00010b8aeedc;
        }
        pppplStack_480 = (long ****)&DAT_10f4782e4;
        puStack_478 = (undefined8 *)0x10;
        func_0x00010b8b0758();
        if (((ulong)ppppplVar8 & 1) != 0) {
          uVar16 = 5;
          goto code_r0x00010b8aeedc;
        }
        pppplStack_480 = (long ****)&DAT_10f4782f5;
        puStack_478 = (undefined8 *)0xd;
        func_0x00010b8b0758();
        if (((ulong)ppppplVar8 & 1) != 0) {
          uVar16 = 2;
          goto code_r0x00010b8aeedc;
        }
        func_0x00010b8b07a4();
        func_0x00010b8b092c();
        func_0x00010b8b0748();
        func_0x00010b8b086c();
        if (iVar21 == 0) {
          uVar16 = 0;
          goto code_r0x00010b8aeedc;
        }
        if ((bStack_17b0 & 1) != 0) {
          func_0x00010b8b0768();
          uVar24 = 0;
          if (extraout_x8_33 != 0) {
            do {
              func_0x00010b8b072c();
              uVar24 = extraout_x8_34;
            } while (extraout_w11_14 != 0);
          }
          unaff_x19[1] = uVar24;
          func_0x000107c278f8(pppplStack_1880);
          goto LAB_10b8af110;
        }
        goto LAB_10b8af290;
      case 4:
        func_0x00010b8b0784();
        FUN_10b8af70c();
        ppppplVar8 = (long *****)auStack_17b8;
        func_0x00010b8b0778();
        func_0x00010b8b073c();
        func_0x00010b8b089c();
        if ((bool)uVar6) {
          func_0x00010b8b0768();
          uVar24 = 0;
          if (extraout_x8_17 != 0) {
            do {
              func_0x00010b8b072c();
              uVar24 = extraout_x8_18;
            } while (extraout_w11_06 != 0);
          }
          goto LAB_10b8af06c;
        }
        goto code_r0x00010b8ae200;
      case 5:
        func_0x00010b8b07f4();
        func_0x00010b9a9710(ppppplVar10);
        func_0x00010b8b07ec();
        ppppplVar10 = ppppplVar10 + 6;
        break;
      case 6:
        func_0x00010b8b07f4();
        func_0x00010b9a9710(ppppplVar10);
        func_0x00010b8b07ec();
        ppppplVar10 = ppppplVar10 + 7;
        break;
      case 7:
        func_0x00010b8b0784();
        FUN_10b8af70c();
        ppppplVar8 = (long *****)auStack_17b8;
        func_0x00010b8b0778();
        func_0x00010b8b073c();
        func_0x00010b8b089c();
        if ((bool)uVar6) {
          func_0x00010b8b0768();
          uVar24 = 0;
          if (extraout_x8_19 != 0) {
            do {
              func_0x00010b8b072c();
              uVar24 = extraout_x8_20;
            } while (extraout_w11_07 != 0);
          }
          goto LAB_10b8af06c;
        }
        goto code_r0x00010b8ae200;
      case 8:
        func_0x00010b8b08a8();
        func_0x00010b8b07ec();
        if ((*(byte *)((long)ppppplVar8 + 0x54) & 1) == 0) {
          *(undefined1 *)((long)ppppplVar8 + 0x54) = 1;
        }
        fVar25 = (float)(double)ppppplVar26;
        ppppplVar26 = (long *****)(ulong)(uint)fVar25;
        *(float *)(ppppplVar8 + 10) = fVar25;
        goto code_r0x00010b8ae200;
      case 9:
        func_0x00010b8b0784();
        FUN_10b8af70c();
        ppppplVar8 = (long *****)auStack_17b8;
        func_0x00010b8b0778();
        func_0x00010b8b073c();
        func_0x00010b8b089c();
        if ((bool)uVar6) {
          func_0x00010b8b0768();
          uVar24 = 0;
          if (extraout_x8_25 != 0) {
            do {
              func_0x00010b8b072c();
              uVar24 = extraout_x8_26;
            } while (extraout_w11_10 != 0);
          }
          goto LAB_10b8af06c;
        }
        goto code_r0x00010b8ae200;
      case 10:
        func_0x00010b8b08a8();
        func_0x00010b8b07ec();
        if ((*(byte *)((long)ppppplVar8 + 0x6c) & 1) == 0) {
          *(undefined1 *)((long)ppppplVar8 + 0x6c) = 1;
        }
        fVar25 = (float)(double)ppppplVar26;
        ppppplVar26 = (long *****)(ulong)(uint)fVar25;
        *(float *)(ppppplVar8 + 0xd) = fVar25;
        goto code_r0x00010b8ae200;
      case 0xb:
        if (*(char *)(pppplVar14 + (long)ppplVar19 * 2 + 2) == '\b') {
          auStack_1870[2] = 0;
          ppppplVar26 = (long *****)0x0;
          uStack_1878 = (long ****)0x0;
          pppplStack_1880 = (long ****)0x0;
          auStack_1870[1] = 0;
          auStack_1870[0] = 0;
          FUN_10b9aa82c(&uStack_17a8,ppppplVar10,&UNK_10f7cacfa);
          if (bStack_17a0 != 1) {
            func_0x00010b8b07f4();
            FUN_10b9a9358(&uStack_17a8);
            func_0x00010b8b07d4(&pppplStack_1880);
            func_0x000107c31060();
            func_0x000107c278f8(pppplStack_480);
          }
          FUN_10b9aa82c(&pppplStack_1808,ppppplVar10,"width");
          if (cStack_1800 != '\x01') {
            FUN_10b9a92f0(&pppplStack_1808);
            fVar25 = (float)(double)ppppplVar26;
            ppppplVar26 = (long *****)(ulong)(uint)fVar25;
            uStack_1878 = (long ****)CONCAT44(uStack_1878._4_4_,fVar25);
          }
          FUN_10b9aa82c(&ppplStack_1818,ppppplVar10,"height");
          if (cStack_1810 != '\x01') {
            FUN_10b9a92f0(&ppplStack_1818);
            fVar25 = (float)(double)ppppplVar26;
            ppppplVar26 = (long *****)(ulong)(uint)fVar25;
            uStack_1878 = (long ****)CONCAT44(fVar25,(undefined4)uStack_1878);
          }
          FUN_10b9aa82c(&lStack_1828,ppppplVar10,&DAT_10f3d5e63);
          if ((cStack_1820 == '\n') && (lStack_1828 != 0)) {
            func_0x000105c3d468(auStack_1870,lStack_1828 + 0x18);
          }
          FUN_10b8ade40();
          func_0x00010b8b07a4();
          func_0x00010b8af43c();
          pppplStack_458 = (long ****)CONCAT71(pppplStack_458._1_7_,1);
          uStack_1888 = 0;
          func_0x00010b8b07b8();
          func_0x00010b8b0800();
          func_0x0001078d39e8(uStack_1888);
          func_0x00010b8b07a4();
          FUN_10b8afc50();
          FUN_10b9a8d98(&lStack_1828);
          FUN_10b9a8d98(&ppplStack_1818);
          FUN_10b9a8d98(&pppplStack_1808);
          func_0x00010b8b091c();
          ppppplVar8 = &pppplStack_1880;
          func_0x00010b8af408();
        }
        goto code_r0x00010b8ae200;
      case 0xc:
        if (*(char *)(pppplVar14 + (long)ppplVar19 * 2 + 2) != '\b') goto code_r0x00010b8ae91c;
        func_0x00010b8b08c0();
        *(undefined1 *)(extraout_x8_01 + 0x400) = 0;
        uStack_470 = 0x3f80000000000000;
        fStack_468 = 1.0;
        pppplStack_460 = (long ****)0x3fd6666666666666;
        func_0x00010b8b07f4();
        *(undefined8 *)(extraout_x8_02 + 0x30) = 0;
        *(undefined8 *)(extraout_x8_02 + 0x38) = 0;
        *(undefined8 *)(extraout_x8_02 + 0x28) = 0;
        FUN_10b9aa82c(&pppplStack_1880,ppppplVar10,"key");
        if ((char)uStack_1878 != '\x01') {
          FUN_10b9a9358(&uStack_17a8,&pppplStack_1880);
          func_0x00010b8b07a4();
          FUN_10b8af6d4();
          func_0x00010b8b0944();
        }
        FUN_10b9aa82c(&uStack_17a8,ppppplVar10,&DAT_10f3eade8);
        if (bStack_17a0 != 1) {
          FUN_10b9a92f0(&uStack_17a8);
          fVar25 = (float)(double)ppppplVar26;
          ppppplVar26 = (long *****)(ulong)(uint)fVar25;
          uStack_470 = CONCAT44(uStack_470._4_4_,fVar25);
        }
        FUN_10b9aa82c(&pppplStack_1808,ppppplVar10,"scale");
        if (cStack_1800 != '\x01') {
          FUN_10b9a92f0(&pppplStack_1808);
          fVar25 = (float)(double)ppppplVar26;
          ppppplVar26 = (long *****)(ulong)(uint)fVar25;
          uStack_470 = CONCAT44(fVar25,(undefined4)uStack_470);
        }
        FUN_10b9aa82c(&ppplStack_1818,ppppplVar10,&DAT_10f68f0f6);
        if (cStack_1810 != '\x01') {
          FUN_10b9a92f0(&ppplStack_1818);
          fStack_468 = (float)(double)ppppplVar26;
          ppppplVar26 = (long *****)(ulong)(uint)fStack_468;
        }
        FUN_10b9aa82c(&lStack_1828,ppppplVar10,"duration");
        if (cStack_1820 != '\x01') {
          FUN_10b9a92f0(&lStack_1828);
          pppplStack_460 = (long ****)ppppplVar26;
        }
        FUN_10b9aa82c(auStack_1838,ppppplVar10,&UNK_10f7cacd7);
        if (cStack_1830 != '\x01') {
          FUN_10b9a92f0(auStack_1838);
          pppplStack_458 = (long ****)ppppplVar26;
        }
        FUN_10b9aa82c(auStack_1848,ppppplVar10,&UNK_10f7cacee);
        if (cStack_1840 != '\x01') {
          FUN_10b9a9358(&pppplStack_1798,auStack_1848);
          func_0x00010b8b07f4();
          func_0x000107c31060(extraout_x8_03 + 0x38,&pppplStack_1798);
          ppppplVar10 = (long *****)pppplStack_1798;
          func_0x000107c278f8();
        }
        uStack_450 = (undefined4)lStack_17e8;
        uStack_184c = 0;
        if (lStack_17e8 == lStack_17e0) {
          ppppplVar10 = &pppplStack_1798;
          FUN_10b8afe60(ppppplVar10,&puStack_17f0,puStack_17f0 + lStack_17e8 * 4,&uStack_184c);
        }
        else {
          *(undefined4 *)(puStack_17f0 + lStack_17e8 * 4) = 0;
          lStack_17e8 = lStack_17e8 + 1;
        }
        func_0x00010b8b07ec();
        if (*(char *)(ppppplVar10 + 0x1d) == '\x01') {
          func_0x00010b8b07d4(ppppplVar10 + 0x15);
          func_0x00010810796c();
        }
        else {
          func_0x00010b8b07d4(ppppplVar10 + 0x15);
          func_0x000108107a7c();
          *(undefined1 *)(ppppplVar10 + 0x1d) = 1;
        }
        FUN_10b9a8d98(auStack_1848);
        FUN_10b9a8d98(auStack_1838);
        FUN_10b9a8d98(&lStack_1828);
        FUN_10b9a8d98(&ppplStack_1818);
        ppppplVar8 = &pppplStack_1808;
        FUN_10b9a8d98();
        func_0x00010b8b091c();
        func_0x00010b8b0934();
        func_0x00010b8b07a4();
        func_0x0001078d3a2c();
        goto code_r0x00010b8ae200;
      case 0xd:
        if (param_1 == (long *****)0x0) {
code_r0x00010b8ae91c:
          func_0x00010b8b07ec();
        }
        else {
          func_0x00010b8b07ec();
          ppppplVar11 = ppppplVar8 + 5;
          pppplVar20 = *ppppplVar11;
          if (pppplVar20 != (long ****)0x0) {
            do {
              func_0x00010b8b08e0();
            } while (extraout_w10_01 != 0);
          }
          ppplStack_1818 = (long ***)pppplVar20;
          FUN_10b8afd4c();
          uStack_17a8 = 0;
          ppppplVar22 = (long *****)pppplStack_18a0;
          FUN_10b8afc70(pppplStack_18a0,ppppplVar10,&uStack_17a8);
          if (((ulong)ppppplVar10 & 1) == 0) {
            func_0x00010b8b07f4();
            FUN_10b99f8ac(&uStack_17a8);
            func_0x00010b8b0960();
            bVar1 = *(byte *)((long)pppplVar14 + (long)ppplVar19 * 0x10 + 0x427);
            uVar6 = bVar1 == 0;
            puVar9 = puStack_478;
            ppppplVar8 = (long *****)pppplStack_480;
            if (-1 < (char)bVar1) {
              puVar9 = (undefined8 *)(ulong)bVar1;
              ppppplVar8 = &pppplStack_480;
            }
            FUN_10b8af48c(&pppplStack_1808,param_2,ppppplVar8,puVar9);
            pppplStack_1880 = pppplStack_1808;
            pppplStack_1808 = (long ****)0x0;
            uStack_1878 = (long ****)CONCAT71(uStack_1878._1_7_,1);
            func_0x00010b8b07a4();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x000104bda960(uStack_17a8);
            param_1 = (long *****)pppplStack_18a0;
            if ((uStack_18a4 & 1) == 0) {
              ppppplVar8 = (long *****)&ppplStack_1818;
              uVar24 = 0x10b8aece4;
              goto SUB_10b8af32c;
            }
            ppppplVar8 = (long *****)pppplStack_1880;
            if ((long *****)pppplStack_1880 != (long *****)0x0) {
              do {
                func_0x00010b8b072c();
                ppppplVar8 = extraout_x8_06;
              } while (extraout_w11 != 0);
            }
            uVar13 = 1;
            pppplStack_480 = (long ****)ppppplVar8;
          }
          else {
            func_0x00010b8b0960(*(undefined1 *)(ppppplVar8 + 3));
            if ((extraout_x8_04 & 1) == 0) {
              *(undefined1 *)(ppppplVar8 + 3) = 1;
            }
            ppppplVar8[2] = (long ****)ppppplVar22;
            pppplStack_1880 = (long ****)((ulong)pppplStack_1880 & 0xffffffffffffff00);
            uStack_1878 = (long ****)((ulong)uStack_1878 & 0xffffffffffffff00);
            func_0x000104bda960(uStack_17a8);
            uVar13 = 0;
            *(undefined1 *)(pppplVar14 + (long)ppplVar19 * 2 + 0x82) = 0;
            param_1 = (long *****)pppplStack_18a0;
          }
          param_5 = (ulong)uStack_18a4;
          *(undefined1 *)(pppplVar14 + (long)ppplVar19 * 2 + 0x83) = uVar13;
          func_0x00010b8b093c();
          FUN_10b8af370(pppplVar20);
          ppppplVar8 = (long *****)auStack_17b8;
          func_0x00010b8b0778();
          func_0x00010b8b073c();
          func_0x00010b8b089c();
          if ((bool)uVar6) {
            func_0x00010b8b0768();
            uVar24 = 0;
            if (extraout_x8_27 != 0) {
              do {
                func_0x00010b8b072c();
                uVar24 = extraout_x8_28;
              } while (extraout_w11_11 != 0);
            }
            goto LAB_10b8af06c;
          }
        }
        goto code_r0x00010b8ae200;
      case 0xe:
        func_0x00010b8b07ec();
        ppppplVar11 = ppppplVar8 + 5;
        ppppplVar22 = (long *****)*ppppplVar11;
        if (ppppplVar22 != (long *****)0x0) {
          do {
            func_0x00010b8b08e0();
          } while (extraout_w10 != 0);
        }
        pppplStack_1808 = (long ****)ppppplVar22;
        FUN_10b8afd4c();
        pppplStack_1880 = (long ****)0x0;
        uStack_1878 = (long ****)0x0;
        if ((*(byte *)(pppplVar14 + (long)ppplVar19 * 2 + 2) & 0xfc) == 4) {
          func_0x00010b8b08a8();
          fVar25 = (float)(double)ppppplVar26;
          ppppplVar26 = (long *****)(ulong)(uint)fVar25;
          if (fVar25 < 0.0) {
            puVar12 = &UNK_10f7cad87;
            uVar24 = 0x27;
code_r0x00010b8aeba4:
            FUN_10b8af48c(&uStack_17a8,param_2,puVar12,uVar24);
            bStack_17a0 = 1;
            goto code_r0x00010b8aebb8;
          }
          pppplStack_1880 = (long ****)CONCAT44(fVar25,fVar25);
          uStack_1878 = (long ****)CONCAT44(fVar25,fVar25);
          uStack_17a8 = uStack_17a8 & 0xffffffffffffff00;
          bStack_17a0 = 0;
code_r0x00010b8aeb7c:
          ppppplVar8[5] = uStack_1878;
          ppppplVar8[4] = pppplStack_1880;
          ppppplVar26 = (long *****)pppplStack_1880;
          func_0x00010b8b0960(0);
          *(undefined1 *)(pppplVar14 + (long)ppplVar19 * 2 + 0x82) = 0;
          uVar4 = uStack_18a4;
          uVar6 = extraout_w8;
        }
        else {
          if (*(byte *)(pppplVar14 + (long)ppplVar19 * 2 + 2) != 8) {
            puVar12 = &UNK_10f7cadaf;
            uVar24 = 0x2e;
            goto code_r0x00010b8aeba4;
          }
          FUN_10b8afdc0(&uStack_17a8,ppppplVar10,"left",4,&pppplStack_1880);
          if ((bStack_17a0 & 1) == 0) {
            func_0x00010b8b07a4();
            FUN_10b8afdc0();
            func_0x00010b8b0778(&uStack_17a8);
            func_0x00010b8b073c();
            if ((bStack_17a0 & 1) == 0) {
              func_0x00010b8b07a4();
              FUN_10b8afdc0();
              func_0x00010b8b0778(&uStack_17a8);
              func_0x00010b8b073c();
              if ((bStack_17a0 & 1) == 0) {
                func_0x00010b8b07a4();
                FUN_10b8afdc0();
                func_0x00010b8b0778(&uStack_17a8);
                func_0x00010b8b073c();
                if ((bStack_17a0 & 1) == 0) goto code_r0x00010b8aeb7c;
              }
            }
          }
code_r0x00010b8aebb8:
          ppppplVar8 = (long *****)0x0;
          if (uStack_17a8 != 0) {
            do {
              func_0x00010b8b072c();
              ppppplVar8 = extraout_x8_07;
            } while (extraout_w11_00 != 0);
          }
          uVar4 = uStack_18a4;
          pppplStack_480 = (long ****)ppppplVar8;
          func_0x00010b8b0960(1);
          uVar6 = extraout_w8_00;
        }
        param_5 = (ulong)uVar4;
        *(undefined1 *)(pppplVar14 + (long)ppplVar19 * 2 + 0x83) = uVar6;
        func_0x0001090e1d60(&uStack_17a8);
        uVar6 = *(char *)(pppplVar14 + (long)ppplVar19 * 2 + 0x83) == '\x01';
        if ((bool)uVar6) {
          if (uVar4 == 0) {
            ppppplVar8 = &pppplStack_1808;
            uVar24 = 0x10b8aec2c;
            pppplVar5 = (long ****)&lStack_18c0;
            goto SUB_10b8af32c;
          }
          ppppplVar8 = (long *****)pppplStack_480;
          if ((long *****)pppplStack_480 != (long *****)0x0) {
            do {
              func_0x00010b8b072c();
              ppppplVar8 = extraout_x8_08;
            } while (extraout_w11_01 != 0);
          }
          uVar13 = 1;
          pppplStack_1880 = (long ****)ppppplVar8;
        }
        else {
          uVar13 = 0;
          pppplStack_1880 = (long ****)((ulong)pppplStack_1880 & 0xffffffffffffff00);
        }
        uStack_1878 = (long ****)CONCAT71(uStack_1878._1_7_,uVar13);
        func_0x00010b8b073c();
        FUN_10b8af370();
        func_0x00010b8b08f0();
        func_0x00010b8b093c();
        func_0x00010b8b089c();
        ppppplVar8 = ppppplVar22;
        param_1 = (long *****)pppplStack_18a0;
        if ((bool)uVar6) {
          func_0x00010b8b0768();
          uVar24 = 0;
          if (extraout_x8_23 != 0) {
            do {
              func_0x00010b8b072c();
              uVar24 = extraout_x8_24;
            } while (extraout_w11_09 != 0);
          }
          goto LAB_10b8af06c;
        }
        goto code_r0x00010b8ae200;
      case 0xf:
        func_0x00010b8b07ec();
        ppppplVar11 = ppppplVar8 + 5;
        ppppplVar10 = (long *****)*ppppplVar11;
        if (ppppplVar10 != (long *****)0x0) {
          do {
            func_0x00010b8b08e0();
          } while (extraout_w10_00 != 0);
        }
        pppplStack_1808 = (long ****)ppppplVar10;
        FUN_10b8afd4c();
        if (((ulong)pppplVar14[(long)ppplVar19 * 2 + 2] & 0xfc) != 4) {
          uVar6 = ((ulong)pppplVar14[(long)ppplVar19 * 2 + 2] & 0xfe) == 2;
          if ((bool)uVar6) {
            ppppplVar7 = ppppplVar8;
            func_0x00010b8b08b0(&uStack_17a8);
            if (uStack_17a8 == 0) {
              pppplStack_480 = (long ****)&UNK_10f7d0ef0;
              puStack_478 = (undefined8 *)0x0;
            }
            else {
              pppplStack_480 = (long ****)(uStack_17a8 + 0x18);
              puStack_478 = (undefined8 *)(ulong)*(uint *)(uStack_17a8 + 0xc);
            }
            uStack_470 = 0;
            fStack_468 = (float)((uint)fStack_468 & 0xffffff00);
            pppplStack_458 = (long ****)((ulong)pppplStack_458 & 0xffffffffffffff00);
            func_0x00010b8b07a4(&pppplStack_1880);
            FUN_10b989d9c();
            ppppplVar22 = (long *****)pppplStack_1880;
            if ((auStack_1870[0] & 1) == 0) {
              func_0x00010b8b07f4();
              func_0x000107c310b8(extraout_x8_10 + 0x18);
              func_0x00010b8b0944();
            }
            else {
              uVar16 = (undefined4)uStack_1878;
              func_0x00010b8b07a4();
              func_0x000107c310ac();
              func_0x00010b8b07a4();
              func_0x000107c31094();
              func_0x00010b8b07f4();
              func_0x000107c310b8(extraout_x8_09 + 0x18);
              func_0x00010b8b0944();
              if (((ulong)ppppplVar7 & 1) != 0) goto code_r0x00010b8ae764;
            }
          }
          FUN_10b8af48c(&pppplStack_1880,param_2,&UNK_10f7cadde,0x36);
code_r0x00010b8aedf0:
          param_1 = (long *****)pppplStack_18a0;
          uVar4 = uStack_18a4;
          puStack_478 = (undefined8 *)CONCAT71(puStack_478._1_7_,1);
          pppplStack_480 = pppplStack_1880;
          if (uStack_18a4 != 0) {
            ppppplVar8 = (long *****)pppplStack_1880;
            if ((long *****)pppplStack_1880 != (long *****)0x0) {
              do {
                func_0x00010b8b072c();
                ppppplVar8 = extraout_x8_11;
              } while (extraout_w11_02 != 0);
            }
            uVar13 = 1;
            pppplStack_1880 = (long ****)ppppplVar8;
            goto code_r0x00010b8aee30;
          }
          ppppplVar8 = &pppplStack_1808;
          uVar24 = 0x10b8aee24;
          pppplVar5 = (long ****)&lStack_18c0;
          goto SUB_10b8af32c;
        }
        func_0x00010b8b08a8();
        uVar16 = 0;
        ppppplVar22 = ppppplVar26;
code_r0x00010b8ae764:
        uVar6 = (double)ppppplVar22 == 0.0;
        if ((double)ppppplVar22 < 0.0) {
          FUN_10b8af48c(&pppplStack_1880,param_2,&UNK_10f7cae15,0x2d);
          goto code_r0x00010b8aedf0;
        }
        ppppplVar8[6] = (long ****)ppppplVar22;
        *(undefined4 *)(ppppplVar8 + 7) = uVar16;
        pppplStack_480 = (long ****)((ulong)pppplStack_480 & 0xffffffffffffff00);
        puStack_478 = (undefined8 *)((ulong)puStack_478 & 0xffffffffffffff00);
        uVar13 = 0;
        pppplStack_1880 = (long ****)((ulong)pppplStack_1880 & 0xffffffffffffff00);
        param_1 = (long *****)pppplStack_18a0;
        uVar4 = uStack_18a4;
code_r0x00010b8aee30:
        param_5 = (ulong)uVar4;
        uStack_1878 = (long ****)CONCAT71(uStack_1878._1_7_,uVar13);
        func_0x00010b8b073c();
        FUN_10b8af370();
        func_0x00010b8b08f0();
        func_0x00010b8b093c();
        func_0x00010b8b089c();
        ppppplVar8 = ppppplVar10;
        if ((bool)uVar6) goto code_r0x00010b8af1b8;
        goto code_r0x00010b8ae200;
      case 0x10:
        if (*(char *)(pppplVar14 + (long)ppplVar19 * 2 + 2) == '\b') {
          ppppplVar8 = ppppplVar10;
          FUN_10b9aa82c(&pppplStack_1880,ppppplVar10,&UNK_10f7cad07);
          uVar6 = (char)uStack_1878 == '\x01';
          if ((bool)uVar6) {
code_r0x00010b8aea3c:
            func_0x00010b8b07a4();
            FUN_10b8af48c();
            func_0x00010b8b0748();
            func_0x00010b8b086c();
            if (iVar21 != 0) {
              if ((bStack_17b0 & 1) != 0) {
                func_0x00010b8b0768();
                uVar24 = 0;
                if (extraout_x8_29 != 0) {
                  do {
                    func_0x00010b8b072c();
                    uVar24 = extraout_x8_30;
                  } while (extraout_w11_12 != 0);
                }
                unaff_x19[1] = uVar24;
                func_0x00010b8b0934();
                goto LAB_10b8af110;
              }
              goto LAB_10b8af290;
            }
            FUN_10b8ade40();
            func_0x00010b8b08c0();
            *(undefined1 *)(extraout_x8_05 + 0x420) = 0;
            pppplStack_1890 = (long ****)0x0;
            func_0x00010b8b07b8();
            func_0x00010b8b0800();
            ppppplVar8 = (long *****)pppplStack_1890;
            func_0x0001078d39e8();
            func_0x00010b8b07a4();
            FUN_10b8afc50();
          }
          else {
            ppppplVar8 = &pppplStack_1880;
            FUN_10b9a9518();
            if (((int)ppppplVar8 < 0) ||
               (uVar6 = uStack_18b8 == ((ulong)ppppplVar8 & 0xffffffff),
               uStack_18b8 <= ((ulong)ppppplVar8 & 0xffffffff))) goto code_r0x00010b8aea3c;
            FUN_10b9aa82c(&uStack_17a8,ppppplVar10,&UNK_10f7cad32);
            if (bStack_17a0 == 1) {
              *(undefined4 *)(*(long *)(lStack_18c0 + ((ulong)ppppplVar8 & 0xffffffff) * 8) + 0x18)
                   = 0;
            }
            else {
              iVar21 = (int)&uStack_17a8;
              FUN_10b9a9518();
              lVar15 = *(long *)(lStack_18c0 + ((ulong)ppppplVar8 & 0xffffffff) * 8);
              if (iVar21 == 3) {
                uVar16 = 3;
code_r0x00010b8aef00:
                *(undefined4 *)(lVar15 + 0x18) = uVar16;
              }
              else if (iVar21 == 2) {
                *(undefined4 *)(lVar15 + 0x18) = 2;
              }
              else {
                if (iVar21 == 1) {
                  uVar16 = 1;
                  goto code_r0x00010b8aef00;
                }
                *(undefined4 *)(lVar15 + 0x18) = 0;
              }
            }
            lVar15 = lStack_18c0;
            FUN_10b8ade40();
            pppplStack_480 = (long ****)((ulong)pppplStack_480 & 0xffffffffffffff00);
            pppplStack_458 = (long ****)((ulong)pppplStack_458 & 0xffffffffffffff00);
            ppppplVar10 = (long *****)0x0;
            if (*(long *)(lVar15 + ((ulong)ppppplVar8 & 0xffffffff) * 8) != 0) {
              do {
                func_0x00010b8b072c();
                ppppplVar10 = extraout_x8_12;
              } while (extraout_w11_03 != 0);
            }
            pppplStack_1898 = (long ****)ppppplVar10;
            func_0x00010b8b07b8();
            func_0x00010b8b0800();
            ppppplVar8 = (long *****)pppplStack_1898;
            func_0x0001078d39e8();
            func_0x00010b8b07a4();
            FUN_10b8afc50();
            func_0x00010b8b091c();
          }
          func_0x00010b8b0934();
        }
        goto code_r0x00010b8ae200;
      }
      func_0x00010b8b07d4(ppppplVar10);
      func_0x000104be7934();
      ppppplVar8 = (long *****)pppplStack_480;
      func_0x000104bda3ac();
      goto code_r0x00010b8ae200;
    }
    puVar12 = &UNK_10f7cac86;
    uVar24 = 0x10;
  }
  else {
    puVar12 = &UNK_10f7cac76;
    uVar24 = 0xf;
  }
  FUN_10b8af48c(&puStack_1790,param_2,puVar12,uVar24);
  *unaff_x19 = 2;
  unaff_x19[1] = puStack_1790;
  puStack_1790 = (undefined1 *)0x0;
  ppppplVar8 = (long *****)0x0;
  func_0x000104bda960();
LAB_10b8aef98:
  func_0x00010b8b0838(uStack_88);
  if ((bool)uVar6) {
    return ppppplVar8;
  }
  ___stack_chk_fail();
LAB_10b8af290:
  func_0x0001080da3e4();
  ppppplVar26 = (long *****)appplStack_1910;
  uStack_18c8 = 0x10b8af294;
  pppplStack_18e0 = (long ****)param_2;
  ppppuStack_18d0 = pppppuVar23;
  func_0x00010b8b084c();
  ppppplVar10 = (long *****)0x0;
  uStack_18e8 = extraout_x8_35;
  FUN_10b8ae110(&ppplStack_18f8);
  uVar6 = (long ****)ppplStack_18f8 == (long ****)0x1;
  if ((bool)uVar6) {
    func_0x000107c31084();
    FUN_10b98c420(appplStack_1910,uStack_18f0);
    func_0x000107c31080(ppppplVar10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appplStack_1910);
    ppppplVar8 = ppppplVar26;
    param_2 = ppppplVar10;
  }
  else {
    *unaff_x19 = 0;
  }
  ppppplVar11 = (long *****)&ppplStack_18f8;
  func_0x00010b8b0704();
  func_0x00010b8b0838(uStack_18e8);
  if ((bool)uVar6) {
    return ppppplVar11;
  }
  uVar24 = 0x10b8af32c;
  ___stack_chk_fail();
  pppplVar5 = appplStack_1910;
  pppppuVar23 = &ppppuStack_18d0;
SUB_10b8af32c:
  *(long ******)((long)pppplVar5 + -0x20) = param_2;
  *(undefined8 **)((long)pppplVar5 + -0x18) = unaff_x19;
  *(undefined8 ******)((long)pppplVar5 + -0x10) = pppppuVar23;
  *(undefined8 *)((long)pppplVar5 + -8) = uVar24;
  if (ppppplVar11 != ppppplVar8) {
    pppplVar5 = (long ****)0x0;
    if (*ppppplVar8 != (long ****)0x0) {
      do {
        func_0x00010b8b072c();
        pppplVar5 = extraout_x8_36;
      } while (extraout_w11_15 != 0);
    }
    *ppppplVar11 = pppplVar5;
    FUN_10b8af370();
  }
  return ppppplVar11;
code_r0x00010b8af1b8:
  func_0x00010b8b0768();
  uVar24 = 0;
  if (extraout_x8_21 != 0) {
    do {
      func_0x00010b8b072c();
      uVar24 = extraout_x8_22;
    } while (extraout_w11_08 != 0);
  }
LAB_10b8af06c:
  unaff_x19[1] = uVar24;
LAB_10b8af110:
  FUN_10b8b04dc(&puStack_17f0);
  func_0x00010b8b050c(puStack_1790,lStack_1788);
  if ((lStack_1780 != 0) && (uVar6 = puStack_18b0 == puStack_1790, !(bool)uVar6)) {
    __ZdlPv();
  }
  func_0x00010b8b0538(&puStack_878);
  ppppplVar8 = (long *****)auStack_17b8;
  func_0x0001090e1d60();
  goto LAB_10b8aef98;
}



/* Entry: 10b8af294; end: 10b8af36f;  */

long * FUN_10b8af294(long *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  int extraout_w11;
  undefined8 *unaff_x19;
  long alStack_50 [3];
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar3 = alStack_50;
  func_0x00010b8b084c();
  uVar2 = 0;
  uStack_28 = extraout_x8;
  FUN_10b8ae110(&lStack_38);
  uVar1 = lStack_38 == 1;
  if ((bool)uVar1) {
    func_0x000107c31084();
    FUN_10b98c420(alStack_50,uStack_30);
    func_0x000107c31080(uVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_50);
    param_1 = plVar3;
  }
  else {
    *unaff_x19 = 0;
  }
  plVar3 = &lStack_38;
  func_0x00010b8b0704();
  func_0x00010b8b0838(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (plVar3 != param_1) {
      lVar4 = 0;
      if (*param_1 != 0) {
        do {
          func_0x00010b8b072c();
          lVar4 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      *plVar3 = lVar4;
      FUN_10b8af370();
    }
    return plVar3;
  }
  return plVar3;
}



/* Entry: 10b8af370; end: 10b8af39b;  */

void FUN_10b8af370(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8af394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8af39c; end: 10b8af3c7;  */

undefined8 FUN_10b8af39c(undefined8 param_1)

{
  func_0x000107c31068();
  func_0x00010b8b094c();
  func_0x000105c3d468();
  return param_1;
}



/* Entry: 10b8af3c8; end: 10b8af407;  */

void FUN_10b8af3c8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b8af408();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b8af408; end: 10b8af48b;  */

undefined8 FUN_10b8af408(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  }
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8af48c; end: 10b8af533;  */

void FUN_10b8af48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar1 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x000107c31084();
  FUN_10b9a9894(auStack_98,param_2);
  func_0x000107c2a67c(auStack_50,&uStack_60,auStack_98);
  func_0x000107c2793c(&UNK_10f7cad57);
  func_0x000107c3173c(auStack_80);
  func_0x000107c31080(&uStack_68,uVar1,auStack_80);
  FUN_10b99f560(param_1,&uStack_68);
  func_0x000107c278f8(uStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  return;
}



/* Entry: 10b8af534; end: 10b8af57b;  */

undefined8 * FUN_10b8af534(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x0001090e1ddc(param_1);
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 10b8af57c; end: 10b8af6d3;  */

long * FUN_10b8af57c(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
                    long *param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plStack_58;
  
  plVar8 = (long *)(*param_1 + param_1[1] * 0xf8);
  if (param_1[1] == param_1[2]) {
    FUN_10b8af84c(&plStack_58,param_1,plVar8);
    plVar8 = plStack_58;
  }
  else {
    func_0x00010b8b08b8(plVar8 + 1);
    FUN_10b8af960(plVar8);
    param_1[1] = param_1[1] + 1;
  }
  plVar5 = plVar8;
  func_0x000107c31068(plVar8,param_4);
  if (param_2[1] != 0) {
    plVar5 = plVar8 + 1;
    FUN_10b8adf84(plVar5,*param_2 + param_2[1] * 0xf0 + -0xf0);
    if (((char)plVar8[0x1e] == '\x01') &&
       (uVar7 = (ulong)*(uint *)(plVar8 + 0x1c), uVar7 < (ulong)param_3[1])) {
      iVar1 = *(int *)(*param_3 + uVar7 * 4);
      *(int *)(*param_3 + uVar7 * 4) = iVar1 + 1;
      *(int *)((long)plVar8 + 0xe4) = iVar1;
    }
  }
  if (*(char *)(param_5 + 0x28) == '\x01') {
    func_0x0001080dd310(param_5);
    plVar5 = plVar8 + 0xf;
    if ((char)plVar8[0x14] == '\x01') {
      FUN_10b8af39c();
    }
    else {
      func_0x00010b8af3ec(plVar5,param_5);
    }
  }
  if (*param_6 != 0) {
    plVar8 = plVar8 + 0x15;
    if (plVar8 != param_6) {
      lVar4 = *plVar8;
      lVar6 = *param_6;
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *plVar8 = lVar6;
      func_0x0001078d39e8(lVar4);
    }
    return plVar8;
  }
  return plVar5;
}



/* Entry: 10b8af6d4; end: 10b8af70b;  */

void FUN_10b8af6d4(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c31060();
    return;
  }
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10b8af70c; end: 10b8af84b;  */

void FUN_10b8af70c(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  int param_6,long param_7)

{
  long *plVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 ***extraout_x8;
  int extraout_w11;
  undefined8 **ppuStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  byte bStack_61;
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = 0;
  lVar4 = param_2;
  FUN_10b8afc70(param_2,param_4,&uStack_58);
  if ((param_4 & 1) == 0) {
    if (param_2 != 0) {
      FUN_10b99f8ac(&ppuStack_78,&uStack_58);
      uVar2 = CONCAT71(uStack_6f,uStack_70);
      pppuVar3 = (undefined8 ***)ppuStack_78;
      if (-1 < (char)bStack_61) {
        uVar2 = (ulong)bStack_61;
        pppuVar3 = &ppuStack_78;
      }
      FUN_10b8af48c(&lStack_60,param_3,pppuVar3,uVar2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_78);
      if (param_6 == 0) {
        func_0x00010b8b0914();
        ppuStack_78 = (undefined8 ***)0x0;
        if (lStack_60 != 0) {
          do {
            func_0x00010b8b072c();
            ppuStack_78 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        uStack_70 = 1;
        func_0x0001090e1d60(&ppuStack_78);
        uVar6 = 0;
        *(undefined1 *)param_1 = 0;
      }
      else {
        *param_1 = lStack_60;
        lStack_60 = 0;
        uVar6 = 1;
      }
      *(undefined1 *)(param_1 + 1) = uVar6;
      func_0x000104bda960(lStack_60);
      goto LAB_10b8af828;
    }
    func_0x00010b8b0914();
  }
  else {
    lVar5 = lVar4;
    func_0x00010b8b0914();
    plVar1 = (long *)(lVar5 + param_7);
    if ((*(byte *)(plVar1 + 1) & 1) == 0) {
      *(undefined1 *)(plVar1 + 1) = 1;
    }
    *plVar1 = lVar4;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
LAB_10b8af828:
  func_0x000104bda960(uStack_58);
  return;
}



/* Entry: 10b8af84c; end: 10b8af95f;  */

long * FUN_10b8af84c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_CY;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong uVar7;
  long *unaff_x19;
  long *unaff_x20;
  long lVar8;
  
  func_0x00010b8b0980(0x84210842108421);
  if ((bool)in_CY) {
    func_0x00010b8b0860();
    if (extraout_x10 >> 0x3d == 0) {
      uVar7 = (extraout_x10 << 3) / 5;
    }
    else {
      uVar7 = extraout_x10 << 3;
      if (4 < extraout_x10 >> 0x3d) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    lVar8 = *unaff_x20;
    if (extraout_x8 <= uVar7) {
      uVar7 = extraout_x8;
    }
    uVar1 = extraout_x9;
    if (extraout_x9 <= uVar7) {
      uVar1 = uVar7;
    }
    plVar4 = unaff_x20;
    FUN_10b8af9d8();
    lVar2 = *unaff_x20;
    lVar3 = unaff_x20[1];
    lVar5 = lVar2;
    FUN_10b8afa7c(lVar2,param_3,plVar4);
    func_0x00010b8b08b8(lVar5 + 8);
    FUN_10b8af960(lVar5);
    plVar6 = param_3;
    FUN_10b8afa7c(param_3,lVar2 + lVar3 * 0xf8,lVar5 + 0xf8);
    if (lVar2 != 0) {
      FUN_10b8afa30();
      plVar6 = unaff_x20;
      FUN_10b8afa60();
    }
    *unaff_x20 = (long)plVar4;
    unaff_x20[1] = unaff_x20[1] + 1;
    unaff_x20[2] = uVar1;
    *unaff_x19 = (long)plVar4 + ((long)param_3 - lVar8);
    return plVar6;
  }
  _abort();
  *param_1 = 0;
  FUN_10b8af984(param_1 + 1);
  return param_1;
}



/* Entry: 10b8af960; end: 10b8af983;  */

undefined8 * FUN_10b8af960(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_10b8af984(param_1 + 1);
  return param_1;
}



/* Entry: 10b8af984; end: 10b8af9d7;  */

void FUN_10b8af984(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 0;
  param_1[0x68] = 0;
  param_1[0x6c] = 0;
  param_1[0x70] = 0;
  param_1[0x98] = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  param_1[0xa8] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 10b8af9d8; end: 10b8afa2f;  */

void FUN_10b8af9d8(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (0x84210842108421 < param_2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10b8afa00;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 < 0x84210842108422) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xf8);
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010772e264();
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10b8afa30;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10b8afbd8(param_2);
    param_2 = param_2 + 0xf8;
  }
  return;
}



/* Entry: 10b8afa30; end: 10b8afa5f;  */

void FUN_10b8afa30(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10b8afbd8(param_2);
    param_2 = param_2 + 0xf8;
  }
  return;
}


