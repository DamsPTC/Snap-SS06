/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008334c0; end: 10083352b;  */

void FUN_1008334c0(double param_1,long param_2)

{
  code *extraout_x8;
  long unaff_x20;
  
  func_0x0001004ba6f8();
  FUN_10046778c();
  FUN_100467768();
  *(long *)(param_2 + 0xa0) = (long)param_1;
  FUN_1006132f4();
  if (unaff_x20 != 0) {
    FUN_100613544();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  func_0x000100833618();
  return;
}



/* Entry: 10083352c; end: 10083353f;  */

void FUN_10083352c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 100833540; end: 1008335bf;  */

void FUN_100833540(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  
  FUN_10083352c();
  FUN_1008335c0();
  FUN_100613460();
  func_0x0001008335f4();
  puVar1 = (undefined8 *)&UNK_110cce7a8;
  func_0x00010083360c();
  func_0x00010061348c();
  func_0x000100613494();
  do {
    func_0x0001006134a0();
    func_0x0001006134a8();
  } while (!(bool)in_ZR);
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 1008335c0; end: 100833623;  */

void FUN_1008335c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 100833624; end: 100833717;  */

void FUN_100833624(undefined8 param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  byte *pbVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  ulong uVar4;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined1 uStack_68;
  undefined8 uStack_28;
  
  FUN_1004ba868();
  uStack_28 = extraout_x8;
  FUN_1004baab8(&lStack_a0);
  if ((lStack_a0 != 0) && (FUN_100aba310(), ((ulong)unaff_x20 & 1) != 0)) {
    FUN_10048b28c();
    if (lStack_98 != 0) {
      do {
        FUN_100abaa34();
      } while (extraout_w10 != 0);
    }
    puStack_88 = &UNK_100bf5ccc;
    ppuStack_80 = &PTR_DAT_110ccdbf0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = param_2;
    uStack_68 = param_2;
    (**(code **)(*unaff_x20 + 0x10))();
    func_0x000100bf5394(ppuStack_80);
    FUN_1004bab20(&uStack_b8);
  }
  FUN_1004bab20();
  func_0x0001004baba4(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100bf5394(ppuStack_80);
    FUN_1004bab20(&uStack_b8);
    pbVar1 = (byte *)&lStack_a0;
    FUN_1004bab20();
    func_0x000107c353a0();
    if ((*pbVar1 & 1) == 0) {
      lVar3 = 0;
      *pbVar1 = 1;
      for (uVar4 = 0; uVar4 < *(ulong *)(pbVar1 + 8); uVar4 = uVar4 + 1) {
        lVar2 = *(long *)(pbVar1 + 0x18);
        if (*(long *)(lVar2 + lVar3) == 0) {
          lStack_110 = lVar2 + lVar3 + 9;
          uStack_108 = (ulong)*(byte *)(lVar2 + lVar3 + 8);
        }
        else {
          uStack_108 = *(ulong *)(lVar2 + lVar3 + 8);
          lStack_110 = *(long *)(lVar2 + lVar3 + 0x10);
        }
        lVar2 = lVar2 + lVar3;
        if (*(long *)(lVar2 + 0x20) == 0) {
          lStack_100 = lVar2 + 0x29;
          uStack_f8 = (ulong)*(byte *)(lVar2 + 0x28);
        }
        else {
          uStack_f8 = *(ulong *)(lVar2 + 0x28);
          lStack_100 = *(long *)(lVar2 + 0x30);
        }
        FUN_100833844(pbVar1 + 0x20,&lStack_110);
        lVar3 = lVar3 + 0x60;
      }
    }
    return;
  }
  return;
}



/* Entry: 100833718; end: 1008337cb;  */

void FUN_100833718(byte *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((*param_1 & 1) == 0) {
    lVar2 = 0;
    *param_1 = 1;
    for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 8); uVar3 = uVar3 + 1) {
      lVar1 = *(long *)(param_1 + 0x18);
      if (*(long *)(lVar1 + lVar2) == 0) {
        lStack_50 = lVar1 + lVar2 + 9;
        uStack_48 = (ulong)*(byte *)(lVar1 + lVar2 + 8);
      }
      else {
        uStack_48 = *(ulong *)(lVar1 + lVar2 + 8);
        lStack_50 = *(long *)(lVar1 + lVar2 + 0x10);
      }
      lVar1 = lVar1 + lVar2;
      if (*(long *)(lVar1 + 0x20) == 0) {
        lStack_40 = lVar1 + 0x29;
        uStack_38 = (ulong)*(byte *)(lVar1 + 0x28);
      }
      else {
        uStack_38 = *(ulong *)(lVar1 + 0x28);
        lStack_40 = *(long *)(lVar1 + 0x30);
      }
      FUN_100833844(param_1 + 0x20,&lStack_50);
      lVar2 = lVar2 + 0x60;
    }
  }
  return;
}



/* Entry: 1008337cc; end: 1008337ef;  */

long FUN_1008337cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 200);
  FUN_100833718(lVar1);
  return lVar1 + 0x20;
}



/* Entry: 1008337f0; end: 1008337f7;  */

void FUN_1008337f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x40);
  return;
}



/* Entry: 1008337f8; end: 100833843;  */

void FUN_1008337f8(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2 + 8;
  FUN_1008337f0();
  *param_1 = param_2;
  param_1[1] = lVar1;
  param_1[2] = 1;
  *(undefined8 *)(param_2 + 0x20) = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(param_2 + 0x30) = param_3[2];
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  *(undefined8 *)(param_2 + 0x38) = param_3[3];
  return;
}



/* Entry: 100833844; end: 1008338ab;  */

long FUN_100833844(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_1008337f8(alStack_38);
  uVar2 = param_1;
  FUN_1008338ac(param_1,&uStack_40,alStack_38[0] + 0x20);
  FUN_10083391c(param_1,uStack_40,uVar2,alStack_38[0]);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  func_0x00010083394c(alStack_38);
  return lVar1;
}



/* Entry: 1008338ac; end: 10083391b;  */

long * FUN_1008338ac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while( true ) {
        plVar4 = plVar1;
        lVar2 = param_1 + 0x10;
        func_0x000100833a08(lVar2,param_3,plVar4 + 4);
        if ((int)lVar2 == 0) break;
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_100833910;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_100833910:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10083391c; end: 10083396b;  */

void FUN_10083391c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000100124858();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  FUN_1001248a4();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 10083396c; end: 100833983;  */

void FUN_10083396c(long *param_1,long param_2)

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



/* Entry: 100833984; end: 1008339db;  */

uint FUN_100833984(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  func_0x000107c610b0(uVar6,*param_2,uVar1);
  iVar4 = (int)uVar6;
  if (iVar4 < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0xffffffff;
    if (iVar4 != 0) {
      uVar5 = 1;
    }
    if (uVar3 <= uVar2 && iVar4 == 0) {
      uVar5 = (uint)(uVar3 < uVar2);
    }
  }
  return uVar5;
}



/* Entry: 1008339dc; end: 100833a3b;  */

ulong FUN_1008339dc(ulong param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *param_2;
  uStack_18 = param_2[1];
  FUN_100833984(param_1,&uStack_20);
  return param_1 >> 0x1f & 1;
}



/* Entry: 100833a3c; end: 100833a47;  */

undefined8 * FUN_100833a3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 in_x9;
  undefined8 *puVar2;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  *(undefined8 *)(unaff_x29 + -0x90) = in_x9;
  puVar2 = param_2 + 1;
  puVar1 = param_2;
  FUN_100833a48(param_2,unaff_x29 + -0x98,*puVar2,puVar2);
  if (puVar2 != puVar1) {
    param_2 = param_2 + 2;
    func_0x000100833a08(param_2,unaff_x29 + -0x98,puVar1 + 4);
    if ((int)param_2 == 0) {
      return puVar1;
    }
  }
  return puVar2;
}



/* Entry: 100833a48; end: 100833a9f;  */

long FUN_100833a48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1004a2388();
  while (param_3 != 0) {
    lVar2 = param_1 + 0x10;
    func_0x000100833a08(lVar2,unaff_x20 + 0x20,param_2);
    lVar1 = 8;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
      unaff_x19 = unaff_x20;
    }
    unaff_x20 = *(long *)(unaff_x20 + lVar1);
    param_3 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 100833aa0; end: 100833af7;  */

undefined8 * FUN_100833aa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  puVar1 = param_1;
  FUN_100833a48(param_1,param_2,*puVar2,puVar2);
  if (puVar2 != puVar1) {
    param_1 = param_1 + 2;
    func_0x000100833a08(param_1,param_2,puVar1 + 4);
    if ((int)param_1 == 0) {
      return puVar1;
    }
  }
  return puVar2;
}



/* Entry: 100833af8; end: 100833b0b;  */

undefined8 FUN_100833af8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x68);
}



/* Entry: 100833b0c; end: 100833b47;  */

void FUN_100833b0c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uStack_24;
  
  FUN_10082e12c(param_1,param_2,&uStack_24,10);
  *param_3 = uStack_24;
  return;
}



/* Entry: 100833b48; end: 100833b5f;  */

undefined8 * FUN_100833b48(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x98) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x90) = 6;
  puVar2 = param_1 + 1;
  puVar1 = param_1;
  FUN_100833a48(param_1,unaff_x29 + -0x98,*puVar2,puVar2);
  if (puVar2 != puVar1) {
    param_1 = param_1 + 2;
    func_0x000100833a08(param_1,unaff_x29 + -0x98,puVar1 + 4);
    if ((int)param_1 == 0) {
      return puVar1;
    }
  }
  return puVar2;
}



/* Entry: 100833b60; end: 100833b83;  */

long FUN_100833b60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  FUN_100833718(lVar1);
  return lVar1 + 0x20;
}



/* Entry: 100833b84; end: 100833bb7;  */

long FUN_100833b84(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 in_x9;
  long unaff_x21;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  *(undefined8 *)(unaff_x29 + -0x90) = in_x9;
  lVar1 = unaff_x21;
  FUN_100833a48();
  if (unaff_x21 + 8 != lVar1) {
    lVar2 = unaff_x21 + 0x10;
    func_0x000100833a08(lVar2,unaff_x29 + -0x98,lVar1 + 0x20);
    if ((int)lVar2 == 0) {
      return lVar1;
    }
  }
  return unaff_x21 + 8;
}



/* Entry: 100833bb8; end: 1008341d3;  */

undefined8 *
FUN_100833bb8(double param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,int param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9
             ,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int iVar7;
  undefined **unaff_x20;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  undefined *puVar11;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [32];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [32];
  long alStack_500 [4];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [376];
  long lStack_280;
  long lStack_278;
  undefined8 auStack_270 [47];
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_88;
  
  puVar11 = param_3;
  iVar7 = param_6;
  FUN_1004ba868();
  *(int *)(param_2 + 0x78) = iVar7;
  uStack_88 = extraout_x8;
  func_0x0001004ba6f8();
  unaff_x20[0x20] = param_2;
  unaff_x20[0x21] = puVar11;
  puVar11 = unaff_x20[0x22];
  FUN_10046778c();
  FUN_100467768();
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  dVar9 = param_1;
  if (*(char *)(unaff_x20 + 0x13) == '\x01') {
    func_0x0001004ba6ec();
    FUN_1008610cc(&uStack_588);
  }
  FUN_1008341d4();
  FUN_10082a8bc(&uStack_588,auStack_270);
  func_0x000100834230();
  lVar5 = lRam000000011383a240;
  if (lRam000000011383a240 != 0) {
    func_0x000100834238(auStack_3f8);
    func_0x000100834244();
    dVar9 = param_1 + (double)(long)puVar11;
    FUN_100834380();
    (*extraout_x8_00)(lVar5,3,auStack_3f8);
    func_0x0001008344d8();
    func_0x0001008344e0();
  }
  lVar5 = lRam000000011383a240;
  if ((param_6 != -1) && (lRam000000011383a240 != 0)) {
    func_0x000100834238(auStack_3f8);
    func_0x000100834244();
    FUN_100834380();
    (*extraout_x8_01)(lVar5,0xb,auStack_3f8);
    func_0x0001008344d8();
    func_0x0001008344e0();
  }
  FUN_1008345e0(&uStack_588,param_4);
  lVar5 = lRam000000011383a240;
  iVar7 = (int)param_3;
  if (lRam000000011383a240 != 0) {
    func_0x000100834238(auStack_3f8);
    func_0x000100834244();
    func_0x00010083471c();
    (*extraout_x8_02)(lVar5,4,auStack_3f8);
    func_0x0001008344d8();
    func_0x0001008344e0();
  }
  if (iVar7 != 0) {
    FUN_1008341d4();
    FUN_100607634(auStack_3f8,auStack_270,1);
    func_0x000100834230();
    func_0x000107c2bfdc(auStack_3f8,param_5);
    lVar5 = lRam000000011383a240;
    if (lRam000000011383a240 != 0) {
      func_0x000100834238(&uStack_480);
      FUN_1008342d4(auStack_270,auStack_3f8);
      func_0x00010083471c();
      func_0x000107c353f8(lVar5,5,&uStack_480);
      func_0x0001008344d8();
      func_0x000107c353c4();
    }
    func_0x00010015b888(auStack_3f8);
  }
  func_0x000100834238(auStack_270);
  uVar3 = iVar7 == 0;
  FUN_100834844();
  func_0x000107c60ca0(auStack_270);
  FUN_100834a54(param_5);
  FUN_100834b68();
  if (lStack_280 != 0) {
    FUN_10046778c(unaff_x20[0x1e],unaff_x20[0x1f],unaff_x20[0x1c],unaff_x20[0x1d]);
    FUN_100467768();
    dVar10 = dVar9;
    FUN_10046778c(unaff_x20[0x20],unaff_x20[0x21],unaff_x20[0x1c],unaff_x20[0x1d]);
    FUN_100467768();
    func_0x000100834238(&uStack_498);
    FUN_10048a5b8(&uStack_4b0,unaff_x20[0x19]);
    uVar2 = *(undefined4 *)(unaff_x20[0x19] + 0x28);
    func_0x000100bf5400(&uStack_4c8);
    func_0x000107c60c94(&uStack_4e0,param_16);
    uStack_470 = uStack_488;
    uStack_408 = uStack_4d0;
    uStack_478 = uStack_490;
    uStack_480 = uStack_498;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_460 = uStack_4a8;
    uStack_468 = uStack_4b0;
    uStack_458 = uStack_4a0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_440 = uStack_4c0;
    uStack_448 = uStack_4c8;
    uStack_438 = uStack_4b8;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_428 = param_10;
    uStack_424 = param_11;
    uStack_420 = param_12;
    uStack_41c = param_13;
    uStack_410 = uStack_4d8;
    uStack_418 = uStack_4e0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    puVar8 = unaff_x20[0x14];
    puVar11 = unaff_x20[0x1a];
    puVar1 = unaff_x20[0x1b];
    uStack_450 = uVar2;
    uStack_430 = param_8;
    uStack_42c = param_9;
    uStack_400 = param_5;
    func_0x0001002a8308(alStack_500,param_14);
    func_0x0001002a8308(auStack_520,param_15);
    func_0x000107c60c94(auStack_538,unaff_x20 + 8);
    func_0x000107c60c94(auStack_550,unaff_x20 + 2);
    FUN_10028af84(auStack_570,unaff_x20 + 0xb);
    uVar3 = iVar7 == 0;
    func_0x000100bf5468(auStack_3f8,&uStack_480,(long)dVar9,puVar8,(long)dVar10,puVar11,puVar1,
                        alStack_500,auStack_520,uVar3,iVar7,auStack_538,auStack_550,auStack_570,
                        0x101,unaff_x20[0x22],0x101,unaff_x20[1],(long)*(int *)(unaff_x20 + 0xf),
                        *(undefined4 *)((long)unaff_x20 + 0x7c));
    FUN_1001148fc(auStack_570);
    func_0x0001004babc8();
    func_0x000107c60ca0(auStack_538);
    FUN_1001148fc(auStack_520);
    plVar4 = alStack_500;
    FUN_1001148fc();
    func_0x000100bf5668();
    func_0x000100bf56ac();
    func_0x000100bf56b4();
    func_0x000100bf56bc();
    func_0x000100bf56c4();
    FUN_10048b28c();
    func_0x000100bf56cc(auStack_270,auStack_3f8);
    lStack_f8 = lStack_280;
    lStack_f0 = lStack_278;
    if (lStack_278 != 0) {
      do {
        FUN_100abaa34();
      } while (extraout_w10 != 0);
    }
    puStack_e8 = &UNK_100bf5fc8;
    ppuStack_e0 = &PTR_DAT_110ccdc28;
    lVar5 = 0x188;
    func_0x000107c60e20();
    unaff_x20 = &puStack_e8;
    func_0x000100bf56cc();
    *(long *)(lVar5 + 0x180) = lStack_f0;
    *(long *)(lVar5 + 0x178) = lStack_f8;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_d8 = lVar5;
    func_0x000100bf57f0(*(undefined8 *)(*plVar4 + 0x10));
    func_0x000100bf5394(ppuStack_e0);
    func_0x000100bf5820(auStack_270);
    func_0x000100bf5848(auStack_3f8);
  }
  func_0x000100834b74();
  puVar6 = &uStack_588;
  func_0x00010015b888();
  func_0x0001004baba4(uStack_88);
  if (!(bool)uVar3) {
    func_0x000107c60e78();
    func_0x0001008344d8();
    func_0x000107c353c4();
    func_0x00010015b888(auStack_3f8);
    func_0x00010015b888(&uStack_588);
    func_0x000107c353a0();
    puVar6 = auStack_270;
    FUN_10002b838(auStack_270,&DAT_10f2df4ca);
    func_0x000107c60c94(puVar6 + 3,unaff_x20 + 5);
    return auStack_270;
  }
  return puVar6;
}



/* Entry: 1008341d4; end: 1008341e7;  */

undefined1 * FUN_1008341d4(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0x00000370;
  FUN_10002b838(&stack0x00000370,&DAT_10f2df4ca);
  func_0x000107c60c94(puVar1 + 0x18,unaff_x20 + 0x28);
  return &stack0x00000370;
}



/* Entry: 1008341e8; end: 100834227;  */

long FUN_1008341e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10002b838();
  func_0x000107c60c94(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 100834228; end: 10083424f;  */

void FUN_100834228(void)

{
  return;
}



/* Entry: 100834250; end: 100834297;  */

void FUN_100834250(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x0001006075dc();
    FUN_100607668();
    FUN_1006076bc();
    FUN_10083434c();
  }
  func_0x000100607834();
  return;
}



/* Entry: 100834298; end: 1008342d3;  */

undefined8 * FUN_100834298(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100834250(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x30);
  return param_1;
}



/* Entry: 1008342d4; end: 1008342ef;  */

void FUN_1008342d4(long param_1)

{
  FUN_100834298();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1008342f0; end: 100834337;  */

void FUN_1008342f0(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006076d0();
  while (unaff_x21 != unaff_x19) {
    FUN_100607788();
    func_0x0001006077d0();
  }
  func_0x0001006077e4();
  return;
}



/* Entry: 100834338; end: 10083434b;  */

void FUN_100834338(void)

{
  FUN_1008342f0();
  return;
}



/* Entry: 10083434c; end: 10083437f;  */

void FUN_10083434c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_100834338();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100834380; end: 1008343af;  */

void FUN_100834380(void)

{
  return;
}



/* Entry: 1008343b0; end: 1008343c7;  */

void FUN_1008343b0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 1008343c8; end: 1008343ef;  */

void FUN_1008343c8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_2,param_1 + 0x18);
  return;
}



/* Entry: 1008343f0; end: 10083448b;  */

void FUN_1008343f0(int param_1)

{
  undefined1 in_ZR;
  code *extraout_x8;
  undefined8 in_stack_00000068;
  
  func_0x0001008343dc();
  FUN_10083448c();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000107c35418();
    func_0x0001008345b4();
    func_0x000107c3545c();
    func_0x000107c3548c();
    func_0x00010061348c();
    func_0x0001008345c4();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  func_0x0001008344b0(in_stack_00000068);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b8();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  return;
}



/* Entry: 10083448c; end: 1008344e7;  */

void FUN_10083448c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 1008344e8; end: 100834567;  */

void FUN_1008344e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  
  FUN_10083352c();
  FUN_100834568();
  func_0x0001008345b4();
  func_0x0001008335f4();
  puVar1 = (undefined8 *)&UNK_110cce988;
  func_0x00010083360c();
  func_0x00010061348c();
  func_0x0001008345c4();
  do {
    func_0x0001006134a0();
    func_0x0001006134a8();
  } while (!(bool)in_ZR);
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b8();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  return;
}



/* Entry: 100834568; end: 1008345df;  */

void FUN_100834568(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  return;
}



/* Entry: 1008345e0; end: 1008346bb;  */

void FUN_1008345e0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_1008346d8(uVar3,&PTR_s_source_110ccdc08,param_2);
    lVar2 = uVar3 + 0x30;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_1008346bc((long)(uVar3 - *param_1) / 0x30);
    func_0x000100164e8c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
    FUN_1008346d8(lStack_48,&PTR_s_source_110ccdc08,param_2);
    lStack_48 = lStack_48 + 0x30;
    FUN_100834708();
    lVar2 = param_1[1];
    func_0x000100834714();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1008346bc; end: 1008346d7;  */

ulong FUN_1008346bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar4 = param_1 + 1;
  if (uVar4 < 0x555555555555556) {
    uVar1 = (unaff_x19[2] - *unaff_x19) / 0x30;
    uVar3 = uVar1 * 2;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      uVar3 = 0x555555555555555;
    }
    return uVar3;
  }
  func_0x000105394cf0();
  plVar2 = unaff_x19;
  FUN_100164d38();
  func_0x000100164e8c(auStack_68,plVar2,(unaff_x19[1] - *unaff_x19) / 0x30,unaff_x19 + 2);
  FUN_100164ee0(lStack_58,uVar4,param_4);
  lStack_58 = lStack_58 + 0x30;
  FUN_100164f34(unaff_x19,auStack_68);
  uVar4 = unaff_x19[1];
  FUN_100164fd0(auStack_68);
  return uVar4;
}



/* Entry: 1008346d8; end: 100834707;  */

void FUN_1008346d8(long param_1)

{
  func_0x0001008346c8();
  func_0x0001006084f8(param_1 + 0x18);
  return;
}



/* Entry: 100834708; end: 10083475b;  */

void FUN_100834708(void)

{
  undefined1 *puVar1;
  long *unaff_x19;
  
  puVar1 = &stack0x00000008;
  FUN_100164f28();
  func_0x000107c610b4(*(long *)(puVar1 + 8) + ((unaff_x19[1] - *unaff_x19) / -0x30) * 0x30);
  FUN_100164f78();
  return;
}



/* Entry: 10083475c; end: 100834807;  */

void FUN_10083475c(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  
  func_0x000100834744();
  FUN_100834808();
  func_0x00010083481c();
  (*extraout_x8_00)();
  if (param_1 != 0) {
    FUN_100862870();
    func_0x0001008628f0();
    func_0x000107c3547c();
    func_0x000100835ad4();
    func_0x00010061348c();
    func_0x000100862900();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  func_0x0001008344b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354d0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  return;
}



/* Entry: 100834808; end: 100834843;  */

void FUN_100834808(void)

{
  return;
}



/* Entry: 100834844; end: 100834a53;  */

long * FUN_100834844(long *param_1,undefined8 param_2,long *param_3,long *param_4,undefined1 param_5
                    )

{
  undefined1 in_ZR;
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int extraout_w10;
  ulong uVar9;
  uint uStack_19c;
  undefined8 ***pppuStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined1 *puStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [24];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  long alStack_e8 [3];
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_58;
  
  plVar4 = &lStack_150;
  plVar5 = &lStack_150;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = &lStack_d0;
  FUN_1004baab8();
  if ((lStack_d0 != 0) &&
     (plVar3 = param_1, FUN_100aba310(), plVar2 = plVar3, ((ulong)plVar3 & 1) != 0)) {
    in_ZR = (char)param_1[0x13] == '\x01';
    if ((bool)in_ZR) {
      plVar3 = alStack_e8;
      func_0x000107c60c94(plVar3,param_1 + 0x10);
    }
    else {
      func_0x000100aba3b4();
    }
    FUN_10048b28c();
    lStack_148 = lStack_c8;
    lStack_150 = lStack_d0;
    if (lStack_c8 != 0) {
      do {
        FUN_100abaa34();
      } while (extraout_w10 != 0);
    }
    func_0x000100bf5400(auStack_140);
    func_0x000107c60c94(&lStack_128,param_3);
    func_0x000100abaa44();
    uStack_f8 = CONCAT11(param_5,(char)param_4);
    puStack_b8 = &UNK_100bf5d2c;
    ppuStack_b0 = &PTR_DAT_110ccdc10;
    param_4 = (long *)0x60;
    func_0x000107c60e20();
    param_4[1] = lStack_148;
    *param_4 = lStack_150;
    lStack_150 = 0;
    lStack_148 = 0;
    func_0x000107c60c94(param_4 + 2,auStack_140);
    param_4[6] = lStack_120;
    param_4[5] = lStack_128;
    param_4[7] = lStack_118;
    lStack_120 = 0;
    lStack_118 = 0;
    lStack_128 = 0;
    param_4[9] = lStack_108;
    param_4[8] = lStack_110;
    param_4[10] = lStack_100;
    lStack_110 = 0;
    lStack_108 = 0;
    lStack_100 = 0;
    *(undefined2 *)(param_4 + 0xb) = uStack_f8;
    plStack_a8 = param_4;
    (**(code **)(*plVar3 + 0x10))(plVar3,&puStack_b8);
    func_0x000100bf542c();
    func_0x000100bf543c();
    FUN_100abae00();
    plVar2 = plVar4;
    param_1 = plVar3;
    param_3 = &lStack_150;
  }
  func_0x0001004bab9c();
  func_0x0001004baba4(uStack_58);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100bf542c();
    func_0x000100bf543c();
    FUN_100abae00();
    func_0x0001004bab9c();
    func_0x000107c353a0();
    pcStack_158 = FUN_100834a54;
    uVar9 = *(ulong *)((long)plVar5 + 8);
    if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)plVar5 + 0x17);
    }
    if (((uVar9 == 0) ||
        (puVar6 = (undefined1 *)plVar5, puStack_180 = (undefined1 *)param_3, plStack_178 = param_1,
        plStack_170 = param_4, plStack_168 = plVar2, puStack_160 = &stack0xfffffffffffffff0,
        func_0x000107c2be1c(), puVar6 == (undefined1 *)0xffffffffffffffff)) ||
       (puVar7 = (undefined1 *)plVar5, func_0x000107c60be4(plVar5,0x2c,puVar6),
       puVar7 == (undefined1 *)0xffffffffffffffff)) {
      uStack_19c = 0;
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = uRam000000011336f000;
      if (-1 < (char)bRam000000011336f00f) {
        uVar9 = (ulong)bRam000000011336f00f;
      }
      FUN_1000e1048(&pppuStack_198,plVar5,puVar6 + uVar9,(long)puVar7 - (long)(puVar6 + uVar9));
      if (-1 < (char)bStack_181) {
        uStack_190 = (ulong)bStack_181;
        pppuStack_198 = &pppuStack_198;
      }
      FUN_100833b0c(pppuStack_198,uStack_190,&uStack_19c);
      uVar8 = uStack_19c & 0xffffff00;
      func_0x000107c352a0();
      bVar1 = (int)pppuStack_198 == 0;
      if (bVar1) {
        uVar8 = 0;
      }
      uStack_19c = uStack_19c & 0xff;
      if (bVar1) {
        uStack_19c = 0;
      }
      uVar9 = 0x100000000;
      if (bVar1) {
        uVar9 = 0;
      }
    }
    return (long *)(uVar9 | (uVar8 | uStack_19c));
  }
  return plVar2;
}



/* Entry: 100834a54; end: 100834b67;  */

ulong FUN_100834a54(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uStack_4c;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar5 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (((uVar5 == 0) || (lVar2 = param_1, func_0x000107c2be1c(param_1,0x11336eff8,0), lVar2 == -1))
     || (lVar3 = param_1, func_0x000107c60be4(param_1,0x2c,lVar2), lVar3 == -1)) {
    uStack_4c = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = uRam000000011336f000;
    if (-1 < (char)bRam000000011336f00f) {
      uVar5 = (ulong)bRam000000011336f00f;
    }
    FUN_1000e1048(&pppuStack_48,param_1,uVar5 + lVar2,lVar3 - (uVar5 + lVar2));
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      pppuStack_48 = &pppuStack_48;
    }
    FUN_100833b0c(pppuStack_48,uStack_40,&uStack_4c);
    uVar4 = uStack_4c & 0xffffff00;
    func_0x000107c352a0();
    bVar1 = (int)pppuStack_48 == 0;
    if (bVar1) {
      uVar4 = 0;
    }
    uStack_4c = uStack_4c & 0xff;
    if (bVar1) {
      uStack_4c = 0;
    }
    uVar5 = 0x100000000;
    if (bVar1) {
      uVar5 = 0;
    }
  }
  return uVar5 | (uVar4 | uStack_4c);
}



/* Entry: 100834b68; end: 100834ba7;  */

void FUN_100834b68(void)

{
  undefined1 auStack_30 [16];
  
  if (plRam000000011383a240 != (long *)0x0) {
    (**(code **)(*plRam000000011383a240 + 0x10))(auStack_30);
    func_0x0001004bab48(&stack0x00000360,auStack_30);
    func_0x0001004bab94();
  }
  return;
}



/* Entry: 100834ba8; end: 100834be7;  */

void FUN_100834ba8(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x138) = 1;
  func_0x000100834b98();
  FUN_100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100834be8; end: 100834c87;  */

void FUN_100834be8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100834bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 100834c88; end: 100834dcb;  */

void FUN_100834c88(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)(param_1 + 0x30);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001004b62b4(&uStack_38,0);
    FUN_100460de4(auStack_80);
    FUN_100836bfc(param_1);
    if (*(char *)(param_1 + 0xc0) != '\0') {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                    ,0x2be,2,"assertion failed: %s");
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100834d8c);
      (*pcVar4)();
    }
    *(undefined1 *)(param_1 + 0xc0) = 1;
    if (*(long *)(param_1 + 200) == 0) {
      uStack_88 = 4;
      func_0x000104ad88e8(param_1,&uStack_88);
      FUN_1004bdf74(&uStack_88);
    }
    else {
      FUN_1004be0b8(param_1 + 0x38,0);
    }
    plVar1 = (long *)(param_1 + 0xdd0);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      FUN_100836ca4();
    }
    FUN_100467a48(auStack_80);
    FUN_1004b6ddc(&uStack_38);
  }
  return;
}



/* Entry: 100834dcc; end: 100834e1b;  */

void FUN_100834dcc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *param_1 = &PTR_DAT_110ccd258;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  return;
}



/* Entry: 100834e1c; end: 100834e77;  */

void FUN_100834e1c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((*(byte *)(plVar2 + 3) & 1) != 0) {
    return;
  }
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x18))();
  if (((ulong)plVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100834e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined1 *)(param_1 + 0x18));
  return;
}



/* Entry: 100834e78; end: 100834e7f;  */

undefined8 FUN_100834e78(void)

{
  return 1;
}



/* Entry: 100834e80; end: 100834f57;  */

long FUN_100834e80(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    FUN_100612744();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_1000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 100834f58; end: 100834f8b;  */

void FUN_100834f58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100834e80();
  if (lVar1 != 0) {
    FUN_1008352a0(param_1,lVar1);
  }
  return;
}



/* Entry: 100834f8c; end: 100835183;  */

void FUN_100834f8c(long param_1,int param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  char *pcStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  FUN_100834f58(*(undefined8 *)(param_1 + 0x338),param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x328);
  if (param_2 == 0) {
    func_0x00010539542c();
    func_0x0001053953ec(&pcStack_68);
    func_0x00010539544c();
    func_0x000105395400(plVar5,param_1 + 0x20,&pcStack_68);
  }
  else {
    lVar4 = param_1 + 0x120;
    func_0x00010083531c(lVar4);
    (**(code **)(*plVar5 + 0x28))(plVar5,param_1 + 0x20,lVar4);
    if (*(int *)(param_1 + 0x2e0) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100835130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x328) + 0x38))
                (*(long **)(param_1 + 0x328),param_1 + 0x20,param_1 + 0x318);
      return;
    }
    func_0x000107c60c94(&pcStack_68,param_1 + 0x300);
    uVar1 = uStack_60;
    if (-1 < (char)bStack_51) {
      uVar1 = (ulong)bStack_51;
    }
    func_0x0001053954dc();
    if (uVar1 == 0) {
      FUN_100833718(param_1 + 0x228);
      pcStack_68 = "grpc-status-details-bin";
      uStack_60 = 0x17;
      lVar4 = param_1 + 0x248;
      FUN_1008354c0(lVar4,&pcStack_68);
      FUN_100833718(param_1 + 0x228);
      if (param_1 + 0x250 != lVar4) {
        uVar2 = *(undefined4 *)(param_1 + 0x2e0);
        func_0x00010539542c();
        func_0x000107c60c50(auStack_98,*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x38));
        func_0x000104c00440(&pcStack_68,uVar2,auStack_80,auStack_98);
        FUN_10083339c(param_1 + 0x2e0,&pcStack_68);
        func_0x0001053954d4();
        func_0x0001006b1fc4();
        func_0x00010539549c();
      }
    }
    func_0x00010083531c();
    iVar3 = (int)param_1 + 0x2e0;
    func_0x000107c2bfe8();
    uVar6 = *(undefined8 *)(param_1 + 0x328);
    if (iVar3 == 0) {
      func_0x00010539544c();
      (*extraout_x8_00)(uVar6,param_1 + 0x20,param_1 + 0x2e0);
      return;
    }
    func_0x00010539542c();
    func_0x000105394120(&pcStack_68,0xe,auStack_80);
    func_0x00010539544c();
    (*extraout_x8)(uVar6,param_1 + 0x20,&pcStack_68);
  }
  func_0x0001053954d4();
  func_0x00010539549c();
  return;
}



/* Entry: 100835184; end: 10083529f;  */

void FUN_100835184(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_100835238;
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
    if (uVar8 == uVar3) goto LAB_100835238;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_100835238:
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



/* Entry: 1008352a0; end: 100835367;  */

undefined8 FUN_1008352a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_100835184(auStack_38);
  func_0x000100612b90();
  return uVar1;
}



/* Entry: 100835368; end: 10083546b;  */

void FUN_100835368(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long unaff_x21;
  undefined1 *puStack_90;
  long lStack_88;
  char cStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  char *pcStack_50;
  undefined8 uStack_48;
  
  FUN_100603c7c();
  pcStack_50 = "x-envoy-overloaded";
  uStack_48 = 0x12;
  FUN_1008354c0(param_3,&pcStack_50);
  if (unaff_x19 + 8 == param_3) {
    FUN_100835528(auStack_68);
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
    }
    if (uStack_60 == 0) {
      *(undefined1 *)(unaff_x21 + 0x110) = 0;
    }
    else {
      FUN_100835528(&puStack_90);
      puStack_78 = puStack_90;
      if (-1 < (long)cStack_79) {
        puStack_78 = (undefined1 *)&puStack_90;
      }
      lStack_70 = lStack_88;
      if (-1 < cStack_79) {
        lStack_70 = (long)cStack_79;
      }
      FUN_1008354c0();
      *(bool *)(unaff_x21 + 0x110) = param_3 != unaff_x19;
      func_0x000105395444();
    }
    FUN_10061db8c();
  }
  else {
    *(undefined1 *)(unaff_x21 + 0x110) = 1;
  }
  FUN_1008357a4(*(undefined8 *)(**(long **)(unaff_x21 + 0x48) + 0x28));
  return;
}



/* Entry: 10083546c; end: 1008354bf;  */

long FUN_10083546c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006075dc();
  while (param_3 != 0) {
    lVar2 = param_1 + 0x10;
    func_0x000100833a08(lVar2,unaff_x20 + 0x20);
    lVar1 = 8;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
      unaff_x19 = unaff_x20;
    }
    unaff_x20 = *(long *)(unaff_x20 + lVar1);
    param_3 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 1008354c0; end: 100835517;  */

undefined8 * FUN_1008354c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  puVar1 = param_1;
  FUN_10083546c(param_1,param_2,*puVar2,puVar2);
  if (puVar2 != puVar1) {
    param_1 = param_1 + 2;
    func_0x000100833a08(param_1,param_2,puVar1 + 4);
    if ((int)param_1 == 0) {
      return puVar1;
    }
  }
  return puVar2;
}



/* Entry: 100835518; end: 100835527;  */

void FUN_100835518(void)

{
  return;
}



/* Entry: 100835528; end: 1008355b3;  */

void FUN_100835528(undefined8 param_1)

{
  int iVar1;
  
  if ((bRam000000011383a230 & 1) == 0) {
    iVar1 = 0x1383a230;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100100da0(0x11383a218,&UNK_10f73f7cf,0x16,&UNK_10f73f77f,0);
      func_0x000107c60e4c(0x11383a230);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,0x11383a218);
  return;
}



/* Entry: 1008355b4; end: 1008357a3;  */

undefined * FUN_1008355b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2468 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cd98,
                        &UNK_10e54fda8,&UNK_10e54fdd4,5,&UNK_10b031808,0);
    do {
      if (puRam00000001137f2468 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f2468;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2468,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2468 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2468;
}



/* Entry: 1008357a4; end: 1008357b3;  */

void FUN_1008357a4(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001008357ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008357b4; end: 100835947;  */

long * FUN_1008357b4(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  undefined8 uStack_48;
  
  FUN_100603c7c();
  FUN_100608e7c();
  uStack_48 = extraout_x8;
  FUN_100835948(auStack_78,&PTR_s_fromServer_11087fe80,"1");
  FUN_100607634(auStack_90,auStack_78,1);
  FUN_10083597c();
  func_0x000100835984();
  if ((bool)in_ZR) {
    func_0x0001008627ac();
    FUN_10082a8bc(auStack_90,auStack_78);
    FUN_10083597c();
    func_0x0001008627ac();
    FUN_10082a8bc(auStack_a8,auStack_78);
    FUN_10083597c();
  }
  puVar1 = puRam000000011383a240;
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    FUN_1008342d4(auStack_78,auStack_90);
    (**(code **)*puVar1)(puVar1,0xd,unaff_x20 + 0xa0,0,auStack_78);
    func_0x000100835b00();
  }
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    auStack_78[0] = 0;
    uStack_60 = 0;
    (**(code **)*puRam000000011383a240)
              (puRam000000011383a240,0x10,unaff_x20 + 0xa0,(long)*(int *)(unaff_x21 + 0x5c),
               auStack_78);
    func_0x000100835b00();
  }
  FUN_100835b80(0xf);
  plVar2 = *(long **)(unaff_x21 + 0x48);
  FUN_1008357a4(*(undefined8 *)(*plVar2 + 0x38));
  func_0x00010083697c();
  func_0x000100836984();
  FUN_100601c64(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  func_0x000107c60e78();
  plVar3 = plVar2;
  FUN_10083597c();
  func_0x00010083697c();
  func_0x000100836984();
  func_0x0001053953cc();
  func_0x0001008346c8();
  FUN_10002b838(plVar3 + 3);
  return plVar2;
}



/* Entry: 100835948; end: 10083597b;  */

void FUN_100835948(long param_1)

{
  func_0x0001008346c8();
  FUN_10002b838(param_1 + 0x18);
  return;
}



/* Entry: 10083597c; end: 1008359b7;  */

/* WARNING: Possible PIC construction at 0x0001003b0628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003b062c) */

void FUN_10083597c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000050);
  return;
}



/* Entry: 1008359b8; end: 100835a5b;  */

void FUN_1008359b8(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  code *extraout_x8;
  undefined8 in_stack_00000088;
  
  func_0x0001008359a4();
  FUN_10083448c();
  (*extraout_x8)();
  if (param_1 != 0) {
    FUN_100835a5c();
    func_0x000100835ac4();
    func_0x000100613470();
    func_0x000100835ad4();
    func_0x00010061348c();
    func_0x000100835ae0();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  func_0x0001008344b0(in_stack_00000088);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354c0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  return;
}



/* Entry: 100835a5c; end: 100835b07;  */

void FUN_100835a5c(void)

{
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  unaff_x24[1] = 0;
  unaff_x24[2] = 0;
  *unaff_x24 = 0;
  *unaff_x23 = 0;
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  *unaff_x22 = 0;
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  return;
}



/* Entry: 100835b08; end: 100835b7f;  */

undefined1 *
FUN_100835b08(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 extraout_x8;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_198 [16];
  long lStack_188;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_108 [48];
  undefined8 uStack_d8;
  
  func_0x0001006133a0();
  FUN_100613460();
  func_0x000100613470();
  puVar7 = &UNK_110cce208;
  func_0x00010061347c();
  func_0x00010061348c();
  func_0x000100613494();
  do {
    func_0x0001006134a0();
    func_0x0001006134a8();
  } while (!(bool)in_ZR);
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
    iVar9 = (int)param_3;
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  plVar4 = &lStack_120;
  plVar5 = &lStack_120;
  puVar3 = param_1;
  func_0x0001004a5cbc();
  uStack_d8 = extraout_x8;
  FUN_10054f908();
  lVar13 = *(long *)(puVar7 + 0xb8);
  uVar2 = iVar9 == 0;
  puVar10 = &UNK_10f73f741;
  if ((bool)uVar2) {
    puVar10 = &UNK_10f73f743;
  }
  FUN_100835948(auStack_108,&PTR_DAT_110ccd300,puVar10);
  FUN_100607634(&lStack_120,auStack_108,1);
  FUN_1003b0614(auStack_108);
  puVar10 = (undefined *)*param_4;
  lVar11 = param_4[1];
  FUN_100835cc4(&lStack_120);
  puVar1 = puRam000000011383a240;
  puVar8 = puStack_118;
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    FUN_1008342d4(auStack_108,&lStack_120);
    lVar11 = ((long)puVar3 - lVar13) * 1000;
    puVar10 = puVar7 + 0xa0;
    (**(code **)*puVar1)(puVar1);
    FUN_1004a4bcc(auStack_108);
    puVar8 = param_1;
  }
  func_0x00010015b888();
  FUN_1004b5c80(uStack_d8);
  if (!(bool)uVar2) {
    func_0x000107c60e78();
    FUN_1004a4bcc(auStack_108);
    func_0x00010015b888();
    func_0x000107c3528c();
    lVar13 = (lVar11 - (long)puVar10) / 0x30;
    if (0 < lVar13) {
      plVar4 = plVar5 + 2;
      lVar12 = plVar5[1];
      if ((*plVar4 - lVar12) / 0x30 < lVar13) {
        plVar6 = plVar5;
        FUN_100164d38(plVar5,(lVar12 - *plVar5) / 0x30 + lVar13);
        func_0x000100164e8c(auStack_198,plVar6,((long)puVar8 - *plVar5) / 0x30,plVar4);
        lVar11 = lStack_188;
        for (lVar12 = lVar13 * 0x30; lVar12 != 0; lVar12 = lVar12 + -0x30) {
          FUN_100607794(lVar11,puVar10);
          lVar11 = lVar11 + 0x30;
          puVar10 = puVar10 + 0x30;
        }
        lStack_188 = lStack_188 + lVar13 * 0x30;
        FUN_10086290c(plVar5,auStack_198,puVar8);
        FUN_1008629c8();
        FUN_100164fd0();
      }
      else {
        lVar14 = lVar12 - (long)puVar8;
        if (lVar14 / 0x30 < lVar13) {
          FUN_1006076f8(plVar4,puVar10 + lVar14,lVar11,lVar12);
          plVar5[1] = (long)plVar4;
          if (lVar14 < 1) {
            return puVar8;
          }
          func_0x000107c35298();
          lVar13 = lVar14 / 0x30;
        }
        else {
          func_0x000107c35298();
        }
        func_0x000107c2bffc(plVar5,puVar10,lVar13,puVar8);
      }
    }
    return puVar8;
  }
  return (undefined1 *)plVar4;
}



/* Entry: 100835b80; end: 100835cc3;  */

long * FUN_100835b80(undefined1 *param_1,long param_2,int param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_x8;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_108 [16];
  long lStack_f8;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  plVar5 = &lStack_90;
  plVar6 = &lStack_90;
  puVar4 = param_1;
  func_0x0001004a5cbc();
  uStack_48 = extraout_x8;
  FUN_10054f908();
  lVar12 = *(long *)(param_2 + 0xb8);
  uVar3 = param_3 == 0;
  puVar1 = &UNK_10f73f741;
  if ((bool)uVar3) {
    puVar1 = &UNK_10f73f743;
  }
  FUN_100835948(auStack_78,&PTR_DAT_110ccd300,puVar1);
  FUN_100607634(&lStack_90,auStack_78,1);
  FUN_1003b0614(auStack_78);
  lVar9 = *param_4;
  lVar10 = param_4[1];
  FUN_100835cc4(&lStack_90);
  puVar2 = puRam000000011383a240;
  puVar8 = puStack_88;
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    FUN_1008342d4(auStack_78,&lStack_90);
    lVar10 = ((long)puVar4 - lVar12) * 1000;
    lVar9 = param_2 + 0xa0;
    (**(code **)*puVar2)(puVar2);
    FUN_1004a4bcc(auStack_78);
    puVar8 = param_1;
  }
  func_0x00010015b888();
  FUN_1004b5c80(uStack_48);
  if (!(bool)uVar3) {
    func_0x000107c60e78();
    FUN_1004a4bcc(auStack_78);
    func_0x00010015b888();
    func_0x000107c3528c();
    lVar12 = (lVar10 - lVar9) / 0x30;
    if (0 < lVar12) {
      plVar5 = plVar6 + 2;
      lVar11 = plVar6[1];
      if ((*plVar5 - lVar11) / 0x30 < lVar12) {
        plVar7 = plVar6;
        FUN_100164d38(plVar6,(lVar11 - *plVar6) / 0x30 + lVar12);
        func_0x000100164e8c(auStack_108,plVar7,((long)puVar8 - *plVar6) / 0x30,plVar5);
        lVar10 = lStack_f8;
        for (lVar11 = lVar12 * 0x30; lVar11 != 0; lVar11 = lVar11 + -0x30) {
          FUN_100607794(lVar10,lVar9);
          lVar10 = lVar10 + 0x30;
          lVar9 = lVar9 + 0x30;
        }
        lStack_f8 = lStack_f8 + lVar12 * 0x30;
        FUN_10086290c(plVar6,auStack_108,puVar8);
        FUN_1008629c8();
        FUN_100164fd0();
      }
      else {
        lVar13 = lVar11 - (long)puVar8;
        if (lVar13 / 0x30 < lVar12) {
          FUN_1006076f8(plVar5,lVar9 + lVar13,lVar10,lVar11);
          plVar6[1] = (long)plVar5;
          if (lVar13 < 1) {
            return (long *)puVar8;
          }
          func_0x000107c35298();
          lVar12 = lVar13 / 0x30;
        }
        else {
          func_0x000107c35298();
        }
        func_0x000107c2bffc(plVar6,lVar9,lVar12,puVar8);
      }
    }
    return (long *)puVar8;
  }
  return plVar5;
}



/* Entry: 100835cc4; end: 100835cd3;  */

long FUN_100835cc4(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lVar3 = (param_4 - param_3) / 0x30;
  if (0 < lVar3) {
    plVar2 = param_1 + 2;
    lVar4 = param_1[1];
    if ((*plVar2 - lVar4) / 0x30 < lVar3) {
      plVar1 = param_1;
      FUN_100164d38(param_1,(lVar4 - *param_1) / 0x30 + lVar3);
      func_0x000100164e8c(auStack_78,plVar1,(param_2 - *param_1) / 0x30,plVar2);
      lVar4 = lStack_68;
      for (lVar5 = lVar3 * 0x30; lVar5 != 0; lVar5 = lVar5 + -0x30) {
        FUN_100607794(lVar4,param_3);
        lVar4 = lVar4 + 0x30;
        param_3 = param_3 + 0x30;
      }
      lStack_68 = lStack_68 + lVar3 * 0x30;
      FUN_10086290c(param_1,auStack_78,param_2);
      FUN_1008629c8();
      FUN_100164fd0();
    }
    else {
      lVar5 = lVar4 - param_2;
      if (lVar5 / 0x30 < lVar3) {
        FUN_1006076f8(plVar2,param_3 + lVar5,param_4,lVar4);
        param_1[1] = (long)plVar2;
        if (lVar5 < 1) {
          return param_2;
        }
        func_0x000107c35298();
        lVar3 = lVar5 / 0x30;
      }
      else {
        func_0x000107c35298();
      }
      func_0x000107c2bffc(param_1,param_3,lVar3,param_2);
    }
  }
  return param_2;
}



/* Entry: 100835cd4; end: 100835e57;  */

long FUN_100835cd4(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  if (0 < param_5) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if ((*plVar2 - lVar3) / 0x30 < param_5) {
      plVar1 = param_1;
      FUN_100164d38(param_1,(lVar3 - *param_1) / 0x30 + param_5);
      func_0x000100164e8c(auStack_78,plVar1,(param_2 - *param_1) / 0x30,plVar2);
      lVar3 = lStack_68;
      for (lVar4 = param_5 * 0x30; lVar4 != 0; lVar4 = lVar4 + -0x30) {
        FUN_100607794(lVar3,param_3);
        lVar3 = lVar3 + 0x30;
        param_3 = param_3 + 0x30;
      }
      lStack_68 = lStack_68 + param_5 * 0x30;
      FUN_10086290c(param_1,auStack_78,param_2);
      FUN_1008629c8();
      FUN_100164fd0();
    }
    else {
      lVar4 = lVar3 - param_2;
      if (lVar4 / 0x30 < param_5) {
        FUN_1006076f8(plVar2,param_3 + lVar4,param_4,lVar3);
        param_1[1] = (long)plVar2;
        if (lVar4 < 1) {
          return param_2;
        }
        func_0x000107c35298();
        param_5 = lVar4 / 0x30;
      }
      else {
        func_0x000107c35298();
      }
      func_0x000107c2bffc(param_1,param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 100835e58; end: 100835ef3;  */

void FUN_100835e58(int param_1)

{
  undefined1 in_ZR;
  code *extraout_x8;
  undefined8 in_stack_00000068;
  
  func_0x0001008343dc();
  FUN_10083448c();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000107c35418();
    func_0x0001008345b4();
    func_0x000107c3545c();
    func_0x000107c3548c();
    func_0x00010061348c();
    func_0x0001008345c4();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  func_0x0001008344b0(in_stack_00000068);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b8();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  return;
}



/* Entry: 100835ef4; end: 100835f07;  */

void FUN_100835ef4(void)

{
  return;
}



/* Entry: 100835f08; end: 1008360df;  */

void FUN_100835f08(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x21;
  long lVar1;
  
  FUN_100835ef4();
  FUN_1008360e0();
  func_0x0001008360f4();
  if (param_1 == 0) {
    FUN_1008367e8();
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010061d3f0();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001008367f8();
    if ((bool)in_ZR) {
      func_0x00010083680c();
    }
    FUN_10028c49c();
    func_0x000100836820();
    func_0x00010083682c();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x000100836834();
    func_0x00010083683c();
    if ((bool)in_ZR) {
      func_0x00010083685c();
    }
    func_0x000100836878();
    func_0x000100836888();
    func_0x0001008368b0();
    FUN_1008368e0();
    if (lVar1 == 0) {
      func_0x0001008368e8();
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010061d3f0();
        } while (extraout_w10_02 != 0);
      }
      func_0x0001008368fc();
      func_0x000100836908();
      func_0x000100836910();
    }
    func_0x000107c2c020();
  }
  else {
    FUN_1008367e8();
    if (extraout_x8 != 0) {
      do {
        func_0x00010061d3f0();
      } while (extraout_w10 != 0);
    }
    func_0x0001008367f8();
    if ((bool)in_ZR) {
      func_0x00010083680c();
    }
    FUN_10028c49c();
    func_0x000100836820();
    func_0x00010083682c();
    lVar1 = *(long *)(unaff_x21 + 0x70);
    func_0x000100836834();
    func_0x00010083683c();
    if ((bool)in_ZR) {
      func_0x00010083685c();
    }
    func_0x000100836878();
    func_0x000100836888();
    func_0x0001008368b0();
    FUN_1008368e0();
    if (lVar1 == 0) {
      func_0x0001008368e8();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010061d3f0();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001008368fc();
      func_0x000100836908();
      func_0x000100836910();
    }
    FUN_100836924();
  }
  func_0x000100836948();
  func_0x000100836950();
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c352e0();
    func_0x000107c2c020();
    func_0x000100836948();
    func_0x000107c352ec();
    return;
  }
  return;
}



/* Entry: 1008360e0; end: 1008360ff;  */

void FUN_1008360e0(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 100836100; end: 1008361a7;  */

/* WARNING: Removing unreachable block (ram,0x000100836378) */
/* WARNING: Removing unreachable block (ram,0x000100836360) */
/* WARNING: Removing unreachable block (ram,0x0001008362d8) */
/* WARNING: Removing unreachable block (ram,0x000100836368) */
/* WARNING: Removing unreachable block (ram,0x0001008363c0) */

long * FUN_100836100(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 unaff_x22;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [56];
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined1 auStack_118 [24];
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)param_1[1];
  plVar3 = param_1;
  puVar5 = param_2;
  if (puVar10 != param_2) {
    unaff_x22 = 0x113815c70;
    do {
      uStack_58 = puVar10[-3];
      uStack_60 = puVar10[-4];
      uStack_48 = puVar10[-1];
      uStack_50 = puVar10[-2];
      plVar3 = plRam0000000113815c70;
      puVar5 = &uStack_60;
      (**(code **)(*plRam0000000113815c70 + 0x150))();
      puVar10 = puVar10 + -4;
    } while (puVar10 != param_2);
  }
  param_1[1] = (long)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar3;
  }
  func_0x000107c60e78();
  if ((int)puVar5 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  uStack_90 = unaff_x22;
  puStack_88 = puVar10;
  plStack_80 = param_1;
  puStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_1008361a8;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100836100(puVar5,*puVar5);
  if (*plVar3 == 0) {
    pcVar6 = "Buffer not initialized";
    FUN_10002b024(&lStack_c0);
    *extraout_x8 = 9;
  }
  else {
    iVar2 = (int)auStack_118;
    FUN_100836568();
    if (iVar2 != 0) {
      iVar2 = (int)auStack_118;
      pcVar6 = (char *)&lStack_e0;
      func_0x000100836584();
      lStack_100 = lStack_e0;
      uStack_f8 = uStack_d8;
      uStack_f0 = uStack_d0;
      uStack_e8 = uStack_c8;
      while (iVar2 != 0) {
        uVar7 = puVar5[1];
        lStack_e0 = lStack_100;
        uStack_d8 = uStack_f8;
        uStack_d0 = uStack_f0;
        uStack_c8 = uStack_e8;
        if (uVar7 < (ulong)puVar5[2]) {
          func_0x000104ae4844(puVar5,&lStack_100);
          puVar10 = (undefined8 *)(uVar7 + 0x20);
        }
        else {
          puVar10 = puVar5;
          func_0x000100bf6700(puVar5,&lStack_100);
        }
        puVar5[1] = puVar10;
        uStack_b8 = uStack_f8;
        lStack_c0 = lStack_100;
        uStack_a8 = uStack_e8;
        uStack_b0 = uStack_f0;
        (**(code **)(*plRam0000000113815c70 + 0x150))(plRam0000000113815c70,&lStack_c0);
        iVar2 = (int)auStack_118;
        pcVar6 = (char *)&lStack_e0;
        func_0x000100836584();
        lStack_100 = lStack_e0;
        uStack_f8 = uStack_d8;
        uStack_f0 = uStack_d0;
        uStack_e8 = uStack_c8;
      }
      func_0x0001008365ec(auStack_118);
      puVar1 = puRam0000000113815c80;
      *extraout_x8 = *puRam0000000113815c80;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        pcVar6 = *(char **)(puVar1 + 2);
        FUN_100033dac(extraout_x8 + 2,pcVar6,*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar14 = *(undefined8 *)(puVar1 + 4);
        uVar13 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(extraout_x8 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(extraout_x8 + 4) = uVar14;
        *(undefined8 *)(extraout_x8 + 2) = uVar13;
      }
      plVar3 = (long *)(extraout_x8 + 8);
      if (*(char *)((long)puVar1 + 0x37) < '\0') {
        pcVar6 = *(char **)(puVar1 + 8);
        FUN_100033dac(plVar3,pcVar6,*(undefined8 *)(puVar1 + 10));
      }
      else {
        uVar13 = *(undefined8 *)(puVar1 + 10);
        lVar11 = *(long *)(puVar1 + 8);
        *(undefined8 *)(extraout_x8 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
        *(undefined8 *)(extraout_x8 + 10) = uVar13;
        *plVar3 = lVar11;
      }
      goto LAB_100836380;
    }
    pcVar6 = "Couldn\'t initialize byte buffer reader";
    FUN_10002b024(&lStack_c0);
    *extraout_x8 = 0xd;
  }
  plVar3 = (long *)(extraout_x8 + 2);
  *(undefined8 *)(extraout_x8 + 4) = uStack_b8;
  *plVar3 = lStack_c0;
  *(undefined8 *)(extraout_x8 + 6) = uStack_b0;
  *(undefined8 *)(extraout_x8 + 10) = 0;
  *(undefined8 *)(extraout_x8 + 0xc) = 0;
  *(undefined8 *)(extraout_x8 + 8) = 0;
LAB_100836380:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    func_0x000107c60e78();
    func_0x000107c60bd8();
    lVar11 = *plVar3;
    if (lVar11 != 0) {
      plStack_188 = (long *)0x0;
      plStack_180 = (long *)0x0;
      uStack_178 = 0;
      FUN_1008361a8(auStack_1c0);
      FUN_100601c8c(auStack_1c0);
      lVar8 = 0;
      for (plVar3 = plStack_188; plVar3 != plStack_180; plVar3 = plVar3 + 4) {
        if (*plVar3 == 0) {
          uVar7 = (ulong)*(byte *)(plVar3 + 1);
        }
        else {
          uVar7 = plVar3[1];
        }
        lVar8 = uVar7 + lVar8;
      }
      FUN_1008365f4(auStack_1d0,lVar8);
      FUN_100836750(pcVar6,auStack_1d0);
      FUN_1000ff1ac(auStack_1d0);
      plVar3 = plStack_180;
      if (lVar8 != 0) {
        lVar8 = 0;
        for (plVar12 = plStack_188; plVar12 != plVar3; plVar12 = plVar12 + 4) {
          if (*plVar12 == 0) {
            lVar9 = (long)plVar12 + 9;
            uVar7 = (ulong)*(byte *)(plVar12 + 1);
          }
          else {
            uVar7 = plVar12[1];
            lVar9 = plVar12[2];
          }
          plVar4 = *(long **)pcVar6;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x20))();
          }
          if (uVar7 != 0) {
            func_0x000107c610b8((long)plVar4 + lVar8,lVar9,uVar7);
          }
          if (*plVar12 == 0) {
            uVar7 = (ulong)*(byte *)(plVar12 + 1);
          }
          else {
            uVar7 = plVar12[1];
          }
          lVar8 = uVar7 + lVar8;
        }
      }
      FUN_1008367a0(&plStack_188);
    }
    return (long *)(ulong)(lVar11 != 0);
  }
  return plVar3;
}



/* Entry: 1008361a8; end: 10083640b;  */

/* WARNING: Removing unreachable block (ram,0x000100836378) */
/* WARNING: Removing unreachable block (ram,0x000100836360) */
/* WARNING: Removing unreachable block (ram,0x0001008362d8) */
/* WARNING: Removing unreachable block (ram,0x000100836368) */
/* WARNING: Removing unreachable block (ram,0x0001008363c0) */

long * FUN_1008361a8(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [56];
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100836100(param_3,*param_3);
  if (*param_2 == 0) {
    pcVar6 = "Buffer not initialized";
    FUN_10002b024(&lStack_60);
    *param_1 = 9;
  }
  else {
    iVar2 = (int)auStack_b8;
    FUN_100836568();
    if (iVar2 != 0) {
      iVar2 = (int)auStack_b8;
      pcVar6 = (char *)&lStack_80;
      func_0x000100836584();
      lStack_a0 = lStack_80;
      uStack_98 = uStack_78;
      uStack_90 = uStack_70;
      uStack_88 = uStack_68;
      while (iVar2 != 0) {
        uVar7 = param_3[1];
        lStack_80 = lStack_a0;
        uStack_78 = uStack_98;
        uStack_70 = uStack_90;
        uStack_68 = uStack_88;
        if (uVar7 < (ulong)param_3[2]) {
          func_0x000104ae4844(param_3,&lStack_a0);
          puVar3 = (undefined8 *)(uVar7 + 0x20);
        }
        else {
          puVar3 = param_3;
          func_0x000100bf6700(param_3,&lStack_a0);
        }
        param_3[1] = puVar3;
        uStack_58 = uStack_98;
        lStack_60 = lStack_a0;
        uStack_48 = uStack_88;
        uStack_50 = uStack_90;
        (**(code **)(*plRam0000000113815c70 + 0x150))(plRam0000000113815c70,&lStack_60);
        iVar2 = (int)auStack_b8;
        pcVar6 = (char *)&lStack_80;
        func_0x000100836584();
        lStack_a0 = lStack_80;
        uStack_98 = uStack_78;
        uStack_90 = uStack_70;
        uStack_88 = uStack_68;
      }
      func_0x0001008365ec(auStack_b8);
      puVar1 = puRam0000000113815c80;
      *param_1 = *puRam0000000113815c80;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        pcVar6 = *(char **)(puVar1 + 2);
        FUN_100033dac(param_1 + 2,pcVar6,*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar13 = *(undefined8 *)(puVar1 + 4);
        uVar12 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(param_1 + 4) = uVar13;
        *(undefined8 *)(param_1 + 2) = uVar12;
      }
      plVar4 = (long *)(param_1 + 8);
      if (*(char *)((long)puVar1 + 0x37) < '\0') {
        pcVar6 = *(char **)(puVar1 + 8);
        FUN_100033dac(plVar4,pcVar6,*(undefined8 *)(puVar1 + 10));
      }
      else {
        uVar12 = *(undefined8 *)(puVar1 + 10);
        lVar10 = *(long *)(puVar1 + 8);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
        *(undefined8 *)(param_1 + 10) = uVar12;
        *plVar4 = lVar10;
      }
      goto LAB_100836380;
    }
    pcVar6 = "Couldn\'t initialize byte buffer reader";
    FUN_10002b024(&lStack_60);
    *param_1 = 0xd;
  }
  plVar4 = (long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = uStack_58;
  *plVar4 = lStack_60;
  *(undefined8 *)(param_1 + 6) = uStack_50;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
LAB_100836380:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    func_0x000107c60bd8();
    lVar10 = *plVar4;
    if (lVar10 != 0) {
      plStack_128 = (long *)0x0;
      plStack_120 = (long *)0x0;
      uStack_118 = 0;
      FUN_1008361a8(auStack_160);
      FUN_100601c8c(auStack_160);
      lVar8 = 0;
      for (plVar4 = plStack_128; plVar4 != plStack_120; plVar4 = plVar4 + 4) {
        if (*plVar4 == 0) {
          uVar7 = (ulong)*(byte *)(plVar4 + 1);
        }
        else {
          uVar7 = plVar4[1];
        }
        lVar8 = uVar7 + lVar8;
      }
      FUN_1008365f4(auStack_170,lVar8);
      FUN_100836750(pcVar6,auStack_170);
      FUN_1000ff1ac(auStack_170);
      plVar4 = plStack_120;
      if (lVar8 != 0) {
        lVar8 = 0;
        for (plVar11 = plStack_128; plVar11 != plVar4; plVar11 = plVar11 + 4) {
          if (*plVar11 == 0) {
            lVar9 = (long)plVar11 + 9;
            uVar7 = (ulong)*(byte *)(plVar11 + 1);
          }
          else {
            uVar7 = plVar11[1];
            lVar9 = plVar11[2];
          }
          plVar5 = *(long **)pcVar6;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          if (uVar7 != 0) {
            func_0x000107c610b8((long)plVar5 + lVar8,lVar9,uVar7);
          }
          if (*plVar11 == 0) {
            uVar7 = (ulong)*(byte *)(plVar11 + 1);
          }
          else {
            uVar7 = plVar11[1];
          }
          lVar8 = uVar7 + lVar8;
        }
      }
      FUN_1008367a0(&plStack_128);
    }
    return (long *)(ulong)(lVar10 != 0);
  }
  return plVar4;
}



/* Entry: 10083640c; end: 100836567;  */

bool FUN_10083640c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [56];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    plStack_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_1008361a8(auStack_a0,param_1,&plStack_68);
    FUN_100601c8c(auStack_a0);
    lVar4 = 0;
    for (plVar2 = plStack_68; plVar2 != plStack_60; plVar2 = plVar2 + 4) {
      if (*plVar2 == 0) {
        uVar3 = (ulong)*(byte *)(plVar2 + 1);
      }
      else {
        uVar3 = plVar2[1];
      }
      lVar4 = uVar3 + lVar4;
    }
    FUN_1008365f4(auStack_b0,lVar4);
    FUN_100836750(param_2,auStack_b0);
    FUN_1000ff1ac(auStack_b0);
    plVar2 = plStack_60;
    if (lVar4 != 0) {
      lVar4 = 0;
      for (plVar7 = plStack_68; plVar7 != plVar2; plVar7 = plVar7 + 4) {
        if (*plVar7 == 0) {
          lVar5 = (long)plVar7 + 9;
          uVar3 = (ulong)*(byte *)(plVar7 + 1);
        }
        else {
          uVar3 = plVar7[1];
          lVar5 = plVar7[2];
        }
        plVar1 = (long *)*param_2;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        if (uVar3 != 0) {
          func_0x000107c610b8((long)plVar1 + lVar4,lVar5,uVar3);
        }
        if (*plVar7 == 0) {
          uVar3 = (ulong)*(byte *)(plVar7 + 1);
        }
        else {
          uVar3 = plVar7[1];
        }
        lVar4 = uVar3 + lVar4;
      }
    }
    FUN_1008367a0(&plStack_68);
  }
  return lVar6 != 0;
}



/* Entry: 100836568; end: 1008365f3;  */

undefined8 FUN_100836568(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}



/* Entry: 1008365f4; end: 100836633;  */

void FUN_1008365f4(void)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  FUN_1000fefc4();
  FUN_100836634(auStack_38,auStack_28);
  func_0x0001000ff1a4();
  func_0x0001000ff220();
  return;
}



/* Entry: 100836634; end: 10083664f;  */

void FUN_100836634(void)

{
  FUN_1000feff0();
  FUN_100836650();
  return;
}



/* Entry: 100836650; end: 1008366af;  */

void FUN_100836650(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *unaff_x19;
  long lStack_30;
  
  FUN_1000ff05c();
  func_0x0001000ff074();
  FUN_1008366b0(lStack_30,param_2);
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0001000ff160();
  func_0x0001000ff178();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3a968();
  func_0x000107c3a990();
  FUN_1000ff104();
  FUN_1008366d8();
  return;
}



/* Entry: 1008366b0; end: 1008366d7;  */

void FUN_1008366b0(void)

{
  FUN_1000ff104();
  FUN_1008366d8();
  return;
}



/* Entry: 1008366d8; end: 1008366df;  */

void FUN_1008366d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  
  FUN_1000ff150(param_1,*param_2);
  *param_1 = extraout_x8;
  func_0x000100836704();
  return;
}



/* Entry: 1008366e0; end: 10083673f;  */

void FUN_1008366e0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1000ff150();
  *param_1 = extraout_x8;
  func_0x000100836704();
  return;
}



/* Entry: 100836740; end: 10083674f;  */

undefined8 FUN_100836740(void)

{
  return *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
}



/* Entry: 100836750; end: 100836797;  */

undefined8 * FUN_100836750(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x0001054918e8(param_1);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 100836798; end: 10083679f;  */

void FUN_100836798(void)

{
  return;
}



/* Entry: 1008367a0; end: 1008367e7;  */

long * FUN_1008367a0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_100601aec();
    }
    param_1[1] = lVar2;
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 1008367e8; end: 1008368bf;  */

void FUN_1008367e8(void)

{
  return;
}



/* Entry: 1008368c0; end: 1008368df;  */

void FUN_1008368c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100836924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1008368e0; end: 100836923;  */

void FUN_1008368e0(void)

{
  long unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x21 + 8);
  return;
}



/* Entry: 100836924; end: 10083693f;  */

long FUN_100836924(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000100836918();
  lVar1 = unaff_x19;
  FUN_10046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100836940; end: 10083698b;  */

undefined8 FUN_100836940(long param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_10046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return in_stack_00000008;
}



/* Entry: 10083698c; end: 1008369b7;  */

undefined8 * FUN_10083698c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10060d428();
  func_0x00010061cd5c(puVar1 + 0x65);
  *param_1 = &PTR_DAT_11087ffd8;
  if (param_1[0x22] != 0) {
    FUN_100836a88(param_1[0x22],param_1 + 0x24);
  }
  FUN_100601aa4(param_1 + 99);
  FUN_100601c8c(param_1 + 0x5c);
  FUN_100836b24(param_1 + 0x24);
  func_0x00010060867c(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  FUN_100450be4(param_1 + 1);
  return param_1;
}


