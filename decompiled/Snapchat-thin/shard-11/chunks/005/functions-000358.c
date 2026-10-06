/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10868e178; end: 10868e18b;  */

void FUN_10868e178(void)

{
  FUN_10868e14c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10868e18c; end: 10868e1b3;  */

void FUN_10868e18c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a62a60;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar2 + 2);
  return;
}



/* Entry: 10868e1b4; end: 10868e1db;  */

void FUN_10868e1b4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a62a60;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(puVar1 + 2);
  return;
}



/* Entry: 10868e1dc; end: 10868e3cf;  */

void FUN_10868e1dc(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  long *plVar6;
  uint uVar7;
  code *extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar8;
  ulong uVar9;
  long alStack_108 [2];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_c0;
  undefined1 auStack_88 [72];
  
  uVar9 = *param_2;
  FUN_10868ce60(alStack_108,param_1 + 8);
  if (alStack_108[0] != 0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010868c708(alStack_108[0] + 0xa8,&uStack_f8);
    FUN_10868cd80(&uStack_f8);
    lVar1 = alStack_108[0];
    if ((uVar9 >> 0x20 & 1) == 0) {
      func_0x00010868e9e0();
      if ((bool)in_ZR) {
        *(undefined1 *)(lVar1 + 0x1a0) = 0;
      }
      bVar3 = *(byte *)(param_1 + 0x18);
      FUN_10868a7e0();
      func_0x00010868e978(&uStack_f8);
      uStack_f0 = uStack_f8;
      uStack_e8 = 1;
      func_0x00010868e700();
      (*extraout_x8)();
      uStack_c0 = 1;
      uVar7 = (uint)*(byte *)(param_3 + 0x30);
      cVar4 = SBORROW4(uVar7,1);
      cVar5 = (int)(uVar7 - 1) < 0;
      if (uVar7 == 1) {
        FUN_10868ca80(auStack_88,param_3);
      }
      FUN_10886d1b4(*(undefined8 *)(lVar1 + 0x18),&uStack_f8);
      func_0x00010868e9d4();
      if (((cVar5 == cVar4) && ((bVar3 & 1) != 0)) ||
         (*(int *)(lVar1 + 0x134) = *(int *)(lVar1 + 0x134) + 1, 0 < extraout_x8_00)) {
        func_0x00010868e718();
        func_0x00010868e72c();
        FUN_10868c3c0(lVar1,*(undefined8 *)(lVar1 + 0xf8));
      }
      else {
        FUN_10868c130(lVar1,*(undefined8 *)(lVar1 + 0xf8));
      }
      func_0x00010868e95c();
      puVar2 = *(undefined8 **)(alStack_108[0] + 0xe8);
      for (puVar8 = *(undefined8 **)(alStack_108[0] + 0xe0); puVar8 != puVar2; puVar8 = puVar8 + 2)
      {
        (**(code **)(*(long *)*puVar8 + 0x10))();
      }
    }
    else {
      lVar1 = *(long *)(alStack_108[0] + 0x100);
      if (*(long *)(alStack_108[0] + 0x108) < 1) {
        func_0x00010868e7b0();
        FUN_10868c130();
      }
      else {
        plVar6 = *(long **)(alStack_108[0] + 0x28);
        (**(code **)(*plVar6 + 0x20))();
        if ((*(byte *)(alStack_108[0] + 0x1a0) & 1) == 0) {
          *(undefined1 *)(alStack_108[0] + 0x1a0) = 1;
        }
        *(long **)(alStack_108[0] + 0x198) = plVar6 + lVar1 * 0x1e848;
        FUN_10868c498(alStack_108[0],lVar1);
      }
    }
  }
  func_0x00010868ce08(alStack_108);
  return;
}



/* Entry: 10868e3d0; end: 10868e407;  */

long FUN_10868e3d0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a62ad0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10868e408; end: 10868e44f;  */

undefined ** FUN_10868e408(void)

{
  return &PTR_DAT_110a62ad0;
}



/* Entry: 10868e450; end: 10868e493;  */

long * FUN_10868e450(long *param_1)

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



/* Entry: 10868e494; end: 10868e4a7;  */

void FUN_10868e494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10868e4a8; end: 10868e50b;  */

void FUN_10868e4a8(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010868e784();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10868e50c(param_2,&uStack_20);
    FUN_10868cd80(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10868e50c; end: 10868e57b;  */

undefined8 * FUN_10868e50c(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010868e558(&uStack_30);
  return param_1;
}



/* Entry: 10868e57c; end: 10868e9eb;  */

void FUN_10868e57c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10868e9ec; end: 10868eb4b;  */

undefined8 *
FUN_10868e9ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             long *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = param_2[1];
  *param_1 = &PTR_FUN_110a62af0;
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10868ed74();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10868ed74();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_5[1];
  lVar6 = *param_5;
  param_1[6] = param_5[1];
  param_1[5] = lVar6;
  if (lVar4 != 0) {
    do {
      FUN_10868ed74();
    } while (extraout_w10_01 != 0);
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  uVar1 = param_4;
  func_0x000107c28cd4();
  *(undefined1 *)(param_1 + 10) = uVar1;
  func_0x000107c28d98();
  *(undefined1 *)((long)param_1 + 0x51) = param_4;
  plVar3 = param_5;
  FUN_10868a62c();
  if ((int)plVar3 != 0) {
    plVar3 = param_5;
    FUN_10868a640();
    *(int *)(param_1 + 7) = (int)plVar3;
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
    plVar3 = param_5;
    func_0x00010868a668();
    *(int *)(param_1 + 8) = (int)plVar3;
    *(undefined1 *)((long)param_1 + 0x44) = 1;
    if (*param_5 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c28cf4(param_5,0xa9,0x100000000);
      uVar2 = SUB84(param_5,0);
    }
    *(undefined4 *)(param_1 + 9) = uVar2;
    *(undefined1 *)((long)param_1 + 0x4c) = 1;
  }
  return param_1;
}



/* Entry: 10868eb4c; end: 10868ed13;  */

undefined1  [16] FUN_10868eb4c(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  float fStack_104;
  undefined4 uStack_100;
  char cStack_fc;
  undefined1 auStack_f8 [40];
  ulong uStack_d0;
  undefined1 auStack_88 [20];
  float fStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  char cStack_68;
  byte bStack_58;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if ((lVar4 != 0) && (func_0x000107c29e14(lVar4,0xb1), (int)lVar4 != 0)) {
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
    uStack_3c = uStack_3c & 0xffffff00;
    uStack_38 = uStack_38 & 0xffffff00;
    goto LAB_10868ece0;
  }
  func_0x000107c28dc4(auStack_f8,param_1 + 8);
  if ((bStack_58 & 1) == 0) {
LAB_10868ec9c:
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
LAB_10868eca4:
    uStack_3c = uStack_3c & 0xffffff00;
    uStack_38 = uStack_38 & 0xffffff00;
  }
  else if (*(char *)(param_1 + 0x51) == '\x01') {
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      piVar5 = (int *)(param_1 + 0x48);
      func_0x000107886748();
    }
    else {
      piVar5 = &iStack_6c;
    }
    if ((*piVar5 == 0) || ((ulong)(long)*piVar5 <= uStack_d0)) goto LAB_10868ebfc;
    uStack_40 = uStack_40 & 0xffffff00;
    uStack_3c = 8;
    uStack_38 = CONCAT31(uStack_38._1_3_,1);
  }
  else {
LAB_10868ebfc:
    plVar6 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar6 + 0x10))();
    fStack_104 = (float)*(int *)(param_1 + 0x38);
    if (*(char *)(param_1 + 0x3c) == '\0') {
      fStack_104 = fStack_74;
    }
    puVar2 = (undefined4 *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x44) == '\0') {
      puVar2 = &uStack_70;
    }
    uStack_100 = *puVar2;
    cStack_fc = cStack_68;
    pfVar7 = &fStack_104;
    func_0x000108691750(pfVar7,auStack_f8,plVar6,0);
    uVar1 = (uint)pfVar7 & 0xffff;
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      uStack_40 = CONCAT31(uStack_40._1_3_,(char)pfVar7) & 0xffffff01;
      if (((ulong)pfVar7 & 1) != 0) goto LAB_10868eca4;
    }
    else {
      uVar3 = (undefined1)(uVar1 >> 8);
      if (cStack_68 == '\0') {
        if (((ulong)pfVar7 & 1) != 0) goto LAB_10868ec9c;
        uStack_40 = CONCAT31(uStack_40._1_3_,uVar3);
        if (uVar1 >> 8 == 1) goto LAB_10868eca4;
      }
      else if (((ulong)pfVar7 & 1) == 0) {
        uStack_40 = (uint)uStack_40._1_3_ << 8;
      }
      else {
        uStack_40 = CONCAT31(uStack_40._1_3_,uVar3);
        if ((uVar1 >> 8 & 1) != 0) goto LAB_10868eca4;
      }
    }
    uStack_38 = CONCAT31(uStack_38._1_3_,1);
    uStack_3c = 8;
  }
  func_0x000107c28d20(auStack_88);
LAB_10868ece0:
  auVar8._4_4_ = uStack_3c;
  auVar8._0_4_ = uStack_40;
  auVar8._8_4_ = uStack_38;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10868ed14; end: 10868ed17;  */

undefined8 * FUN_10868ed14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62af0;
  func_0x000107c28d9c(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 10868ed18; end: 10868ed2b;  */

void FUN_10868ed18(void)

{
  FUN_10868ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10868ed2c; end: 10868ed73;  */

undefined8 * FUN_10868ed2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62af0;
  func_0x000107c28d9c(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 10868ed74; end: 10868ed83;  */

void FUN_10868ed74(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10868ed84; end: 10868edff;  */

void FUN_10868ed84(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*param_2 != param_2[1]) || (*param_3 != param_3[1])) {
    lVar1 = param_1[1];
    for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x260) {
      if (*(char *)(lVar3 + 0x18) == '\x01') {
        lVar2 = *param_2;
        func_0x00010069bdf4(lVar2,param_2[1],lVar3);
        if (param_2[1] == lVar2) {
          func_0x00010069bdf4(*param_3,param_3[1],lVar3);
        }
      }
    }
  }
  return;
}



/* Entry: 10868ee00; end: 10868ee3f;  */

byte FUN_10868ee00(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x10) & 1) == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x20) + 0x40);
  }
  return bVar1 & 1;
}



/* Entry: 10868ee40; end: 10868ee73;  */

byte FUN_10868ee40(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010069c280();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if (((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x10) & 1) == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x20) + 0x40);
  }
  return bVar2 & 1;
}



/* Entry: 10868ee74; end: 10868f767;  */

void FUN_10868ee74(long param_1,ulong param_2,undefined8 param_3,int param_4,int param_5,
                  ulong *param_6,long *param_7,undefined8 *param_8,long *param_9,
                  undefined8 *param_10,long *param_11)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  byte bVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 auStack_670 [40];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
  int iStack_600;
  char cStack_5fc;
  undefined4 uStack_3e8;
  char cStack_3e4;
  long lStack_388;
  long lStack_380;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [64];
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  long alStack_240 [4];
  undefined4 uStack_220;
  char cStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2c0 = 0;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2d8 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0;
  lStack_310 = 0;
  lStack_318 = 0;
  uStack_308 = 0;
  uVar13 = *(undefined8 *)(*param_7 + 0x18);
  func_0x000107c278b8(auStack_370,&UNK_10f4b0600);
  func_0x000107c31420(auStack_358,uVar13,auStack_370);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
  func_0x000107c2a054(&iStack_600,*param_7);
  FUN_10868aee0(&lStack_388,&iStack_600);
  func_0x000107c28d4c(&iStack_600);
  bVar10 = 0;
  bVar12 = 0;
  lVar9 = lStack_388;
  do {
    if (lVar9 == lStack_380) break;
    bVar12 = *(byte *)(lVar9 + 0xe8) | bVar12;
    bVar10 = bVar10 | *(byte *)(lVar9 + 0x88);
    lVar9 = lVar9 + 0x260;
  } while (((bVar10 & 1) == 0) || ((bVar12 & 1) == 0));
  func_0x000108691668();
  alStack_240[2] = 0;
  alStack_240[3] = 0;
  alStack_240[0] = extraout_x8 + 0x10;
  alStack_240[1] = 0;
  uStack_220 = 0x26f;
  func_0x000107c278b8(auStack_258,&DAT_10f4b05df);
  puVar8 = (&PTR_s_Unknown_110a62b30)[param_5];
  func_0x000107c28824(alStack_240,auStack_258);
  func_0x000107c278b8(auStack_270,&UNK_10f4b05eb);
  func_0x0001086916d8();
  func_0x000107c278b8(auStack_288,&DAT_10f32c4c7);
  func_0x0001086916d8();
  puVar5 = auStack_2a0;
  func_0x000107c278b8(puVar5,&DAT_10f4b05f4);
  func_0x0001086916d8();
  func_0x000107c2884c(&iStack_600,puVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
  func_0x0001086916e8();
  plVar14 = (long *)*param_8;
  func_0x000107c2884c(alStack_240,&iStack_600);
  (**(code **)(*plVar14 + 0x50))(plVar14,alStack_240);
  func_0x0001086916e8();
  func_0x00010869170c();
  lVar11 = lStack_380;
  lVar9 = lStack_388;
  do {
    if (lVar9 == lVar11) {
      FUN_10868ed84(&lStack_388,&uStack_2b8,&uStack_300);
      func_0x000107c31428(auStack_358);
      lVar9 = lStack_310;
      lVar11 = lStack_318;
      if (*param_11 != 0) {
        for (; lVar11 != lVar9; lVar11 = lVar11 + 0x1c8) {
          (**(code **)(*(long *)*param_11 + 0x28))((long *)*param_11,lVar11);
        }
      }
      alStack_240[2] = 0;
      alStack_240[3] = 0;
      func_0x000108691668();
      alStack_240[0] = extraout_x8_04 + 0x10;
      alStack_240[1] = 0;
      uStack_220 = 0x25c;
      func_0x000107c278b8(auStack_618,&DAT_10f4b05df);
      plVar14 = alStack_240;
      func_0x000107c28824(plVar14,auStack_618,puVar8);
      func_0x000107c278b8(auStack_630,&UNK_10f4b0617);
      func_0x000107c28818(plVar14,auStack_630,lStack_388 != lStack_380);
      func_0x000107c278b8(auStack_648,&UNK_10f4b0628);
      func_0x000107c28818(plVar14,auStack_648,param_3);
      func_0x000107c2884c(&iStack_600,plVar14);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_648);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_630);
      func_0x0001086916e0();
      func_0x0001086916e8();
      plVar14 = (long *)*param_8;
      func_0x000107c2884c(auStack_670,&iStack_600);
      (**(code **)(*plVar14 + 0x50))(plVar14,auStack_670);
      func_0x0001086916fc();
      func_0x00010869170c();
      func_0x00010868c8fc(&lStack_388);
      func_0x000107c31424(auStack_358);
      while( true ) {
        func_0x000107c279ac(param_1,&uStack_2b8);
        func_0x000107c279ac(param_1 + 0x18,&uStack_2d0);
        func_0x000107c279ac(param_1 + 0x30,&uStack_2e8);
        func_0x000107c279ac(param_1 + 0x48,&uStack_300);
        FUN_1086911a8(&lStack_318);
        func_0x000107c27a04(&uStack_300);
        func_0x000107c27a04(&uStack_2e8);
        func_0x000107c27a04(&uStack_2d0);
        func_0x000107c27a04(&uStack_2b8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
        ___stack_chk_fail();
        func_0x00010069bda0();
        func_0x000107c27914(alStack_240);
        func_0x00010868c8fc(&lStack_388);
        func_0x000107c31424(auStack_358);
        while ((int)param_3 != 1) {
          FUN_1086911a8(&lStack_318);
          func_0x000107c27a04(&uStack_300);
          func_0x000107c27a04(&uStack_2e8);
          func_0x000107c27a04(&uStack_2d0);
          func_0x000107c27a04(&uStack_2b8);
          __Unwind_Resume(plVar14);
          func_0x00010069bda0();
        }
        ___cxa_begin_catch(plVar14);
        ___cxa_end_catch();
      }
      return;
    }
    uVar2 = false;
    if ((((param_2 & 1) != 0) || ((*(byte *)(lVar9 + 0x88) & 1) != 0)) ||
       (((char)param_6[1] == '\x01' &&
        (uVar2 = *(ulong *)(lVar9 + 0x50) == *param_6, *(ulong *)(lVar9 + 0x50) < *param_6)))) {
      if (((int)param_3 == 0) || (func_0x0001086916a0(), !(bool)uVar2)) {
        bVar12 = 0;
      }
      else {
        bVar12 = *(byte *)(lVar9 + 0xf8) ^ 1;
      }
      lVar7 = lVar9;
      FUN_10868f768();
      if (((int)lVar7 == 0) || (func_0x00010869171c(), !(bool)uVar2)) {
        uVar2 = *(int *)(lVar9 + 0x98) == 1;
        if ((bool)uVar2) {
          uVar1 = 1;
          if (((bVar12 & 1) != 0) && (func_0x00010869171c(), uVar1 = 0, (bool)uVar2)) {
LAB_10868f18c:
            func_0x00010869163c(*param_10);
            (*extraout_x8_01)();
            func_0x000108691658();
            goto LAB_10868f1a0;
          }
          FUN_10886be9c(*param_7,lVar9 + 0x38);
          func_0x00010869171c();
          if ((bool)uVar1) {
            func_0x000108691690();
            bVar3 = (bool)uVar1 && extraout_w9_00 == 1;
            if (bVar3) {
              func_0x0001086916a0();
              if ((!bVar3) || ((*(byte *)(lVar9 + 0xf8) & 1) != 0)) goto LAB_10868f254;
              puVar6 = &uStack_2e8;
            }
            else {
              puVar6 = &uStack_2d0;
            }
            func_0x000108691688(puVar6);
          }
          goto LAB_10868f254;
        }
        if ((*(int *)(lVar9 + 0x98) == 0) && (func_0x00010869171c(), (bool)uVar2)) {
          if ((bVar12 & 1) != 0) goto LAB_10868f18c;
          FUN_108866b68(*param_7,lVar9);
          FUN_108868114(*param_7,lVar9);
          func_0x000108691690();
          bVar3 = (bool)uVar2 && extraout_w9 == 1;
          if (bVar3) {
            func_0x0001086916a0();
            if ((bVar3) && ((*(byte *)(lVar9 + 0xf8) & 1) == 0)) {
              puVar6 = &uStack_2e8;
              goto LAB_10868f158;
            }
          }
          else {
            puVar6 = &uStack_2b8;
LAB_10868f158:
            func_0x000108691688(puVar6);
          }
          if (((*(byte *)(lVar9 + 0xf8) & 1) == 0) && (*(char *)(lVar9 + 0xb8) == '\x01')) {
            func_0x000107c27994(alStack_240,lVar9 + 0xa0);
            func_0x00010868c9c4(&iStack_600,alStack_240,1);
            func_0x000107c27914(alStack_240);
            if (param_4 == 0) {
              FUN_10886c6cc(*param_7,&iStack_600);
            }
            else {
              FUN_10886c5cc(*param_7,&iStack_600);
            }
            func_0x000107c28840(&uStack_2d0,lVar9 + 0xa0);
            func_0x000107c27a04(&iStack_600);
          }
          goto LAB_10868f254;
        }
LAB_10868f1a0:
        bVar12 = 0;
      }
      else {
        if ((bVar12 & 1) != 0) {
          func_0x00010869163c(*param_10);
          (*extraout_x8_00)();
          func_0x000108691658();
          goto LAB_10868f1a0;
        }
        FUN_10868f7a0(&iStack_600,lVar9,param_7,param_8);
        if (iStack_600 == 0) {
          puVar6 = &uStack_300;
          if (cStack_5fc == '\0') {
            puVar6 = &uStack_2d0;
          }
          func_0x000108691688(puVar6);
        }
        else {
          func_0x000108691690();
          bVar3 = (bool)uVar2 && extraout_w9_01 == 1;
          if (bVar3) {
            func_0x0001086916a0();
            if ((!bVar3) || ((*(byte *)(lVar9 + 0xf8) & 1) != 0)) goto LAB_10868f24c;
            puVar6 = &uStack_2e8;
          }
          else {
            puVar6 = &uStack_2b8;
          }
          func_0x000108691688(puVar6);
        }
LAB_10868f24c:
        FUN_108690c3c(&iStack_600);
LAB_10868f254:
        bVar12 = 1;
      }
      plVar14 = (long *)*param_9;
      if ((((plVar14 != (long *)0x0) && (bVar3 = (bVar12 & *(byte *)(lVar9 + 0xd8)) == 1, bVar3)) &&
          (func_0x0001086916a0(), bVar3)) && ((*(byte *)(lVar9 + 0xf8) & 1) == 0)) {
        (**(code **)(*plVar14 + 0xb8))();
      }
      if (((bVar12 != 0) && ((*(byte *)(lVar9 + 0xf8) & 1) == 0)) && (lVar7 = *param_11, lVar7 != 0)
         ) {
        func_0x00010869163c();
        iVar4 = (int)lVar7;
        (*extraout_x8_02)();
        if (iVar4 != 0) {
          FUN_10868cc2c(&iStack_600,lVar9);
          if (cStack_3e4 == '\0') {
            uStack_3e8 = 3;
          }
          cStack_3e4 = '\x01';
          uVar13 = *param_10;
          func_0x00010869163c(uVar13);
          (*extraout_x8_03)();
          FUN_108696a78(alStack_240,&iStack_600,uVar13);
          if (cStack_78 == '\x01') {
            FUN_10868fb28(&lStack_318,alStack_240);
          }
          FUN_108691188(alStack_240);
          func_0x000107c28d00(&iStack_600);
        }
      }
    }
    lVar9 = lVar9 + 0x260;
  } while( true );
}



/* Entry: 10868f768; end: 10868f79f;  */

bool FUN_10868f768(long *param_1)

{
  char cVar1;
  long lVar2;
  
  if (((char)param_1[0x17] != '\x01') || ((*(byte *)(param_1 + 3) & 1) == 0)) {
    return false;
  }
  cVar1 = (char)param_1[0x17];
  if (cVar1 != (char)param_1[3] || cVar1 == '\0') {
    return cVar1 == (char)param_1[3];
  }
  lVar2 = param_1[0x14];
  if (param_1[0x15] - lVar2 == param_1[1] - *param_1) {
    func_0x000107c610b0(lVar2,*param_1,param_1[0x15] - lVar2);
    return (int)lVar2 == 0;
  }
  return false;
}



/* Entry: 10868f7a0; end: 10868fb27;  */

void FUN_10868f7a0(undefined4 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined1 uVar2;
  long lVar3;
  long lStack_a38;
  long lStack_a30;
  undefined8 auStack_a20 [125];
  undefined1 auStack_638 [32];
  long lStack_618;
  undefined1 uStack_5f8;
  long lStack_528;
  char cStack_520;
  long lStack_518;
  char cStack_510;
  long lStack_458;
  undefined1 uStack_450;
  char cStack_2e4;
  char cStack_2d8;
  char cStack_268;
  undefined1 auStack_260 [40];
  undefined4 uStack_238;
  undefined8 uStack_190;
  char cStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    FUN_108690304(*param_4,&UNK_10f4b063b);
    func_0x00010869161c();
    return;
  }
  func_0x0001086915bc();
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_1088646ac(&puStack_88,*param_3);
  func_0x000104be7444(&uStack_70,(long)puStack_80 - (long)puStack_88 >> 3);
  for (; puStack_88 != puStack_80; puStack_88 = puStack_88 + 1) {
    auStack_a20[0] = *puStack_88;
    FUN_1086903bc(&uStack_70);
  }
  FUN_108864630(*unaff_x22);
  func_0x000107c323d8(auStack_260,*unaff_x22);
  if ((cStack_90 == '\x01') && ((uStack_238._1_1_ >> 2 & 1) != 0)) {
    FUN_1088f4754(uStack_190);
    uStack_238 = uStack_238 & 0xfffffbff;
    FUN_10885ff98(*unaff_x22,auStack_260);
  }
  if (*(char *)(unaff_x21 + 0x78) == '\x01') {
    func_0x000108691714(*unaff_x22);
    FUN_108690304(*param_4,&UNK_10f4b064a);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x0001086915d4();
    goto LAB_10868fa84;
  }
  if (*(char *)(unaff_x21 + 0x208) != '\x01') {
    FUN_108866b68(*unaff_x22);
    FUN_108868114(*unaff_x22);
    func_0x000108691714(*unaff_x22);
    FUN_108690304(*param_4,&UNK_10f4b0669);
    func_0x00010869161c();
    goto LAB_10868fa84;
  }
  FUN_1088660e8(auStack_a20,*unaff_x22);
  FUN_10869148c(auStack_638,auStack_a20);
  func_0x000107c288ec(auStack_a20);
  if (cStack_268 == '\x01') {
    lVar3 = *(long *)(unaff_x21 + 0x200);
    FUN_108860924(auStack_a20,*unaff_x22);
    FUN_10867b070(&lStack_a38,auStack_a20);
    func_0x0001006928f0(auStack_a20);
    for (lVar1 = lStack_a38; lVar1 != lStack_a30; lVar1 = lVar1 + 0x1a8) {
      if (lVar3 <= *(long *)(lVar1 + 0xe0)) {
        lVar3 = *(long *)(lVar1 + 0xe0);
      }
    }
    if (cStack_2e4 == '\x01') {
      cStack_2e4 = '\0';
    }
    if (cStack_2d8 == '\x01') {
      cStack_2d8 = '\0';
    }
    if (cStack_520 == '\0') {
      lStack_528 = 0;
    }
    if (cStack_510 == '\0') {
      lStack_518 = 0;
    }
    uStack_5f8 = lStack_528 <= lStack_518;
    if ((*(byte *)(unaff_x21 + 0x228) & 1) == 0) {
LAB_10868fa30:
      uVar2 = 0;
    }
    else {
      lVar1 = 0;
      for (; lStack_a38 != lStack_a30; lStack_a38 = lStack_a38 + 0x1a8) {
        if (((*(char *)(lStack_a38 + 0x1a0) != '\x01') || (*(char *)(lStack_a38 + 0x28) == '\x01'))
           && (lVar1 <= *(long *)(lStack_a38 + 0xe0))) {
          lVar1 = *(long *)(lStack_a38 + 0xe0);
        }
      }
      if (*(long *)(unaff_x21 + 0x220) < lVar1) goto LAB_10868fa30;
      uVar2 = 1;
      uStack_450 = 1;
      lStack_458 = *(long *)(unaff_x21 + 0x220);
    }
    lStack_618 = lVar3;
    FUN_1088665d4(*unaff_x22,auStack_638);
    func_0x00010867b9fc(&lStack_a38);
  }
  else {
    uVar2 = 0;
  }
  func_0x000108691714(*unaff_x22);
  FUN_108690304(*param_4,&UNK_10f4b0659);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = uVar2;
  func_0x0001086915d4();
  func_0x000107c288cc(auStack_638);
LAB_10868fa84:
  func_0x000107c288c8(auStack_260);
  func_0x000107c27ae4(&puStack_88);
  func_0x000104be1274(&uStack_70);
  return;
}



/* Entry: 10868fb28; end: 10868fb63;  */

long FUN_10868fb28(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000108690c68();
    lVar2 = uVar1 + 0x1c8;
  }
  else {
    lVar2 = param_1;
    FUN_108690c90();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x1c8;
}



/* Entry: 10868fb64; end: 10868fc6b;  */

void FUN_10868fb64(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [40];
  
  if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
    *param_1 = 0;
    param_1[0x260] = 0;
  }
  else {
    uVar1 = *(ulong *)(param_3 + 0x18);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    FUN_108691254(auStack_88,param_2);
    func_0x000107c28d6c(auStack_108,param_11);
    FUN_10868fc6c(param_1,auStack_88,uVar1 & 0xfffffffffffffffc,uVar2,param_4,param_5,param_6,
                  param_7,param_8,param_9,param_10,auStack_108,param_12,param_13);
    func_0x000107c28d04(auStack_108);
    func_0x000107c279dc(auStack_88);
  }
  return;
}



/* Entry: 10868fc6c; end: 1086901fb;  */

void FUN_10868fc6c(undefined1 *param_1,long param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 *param_11,long param_12,
                  undefined8 param_13,undefined1 param_14)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  undefined8 uVar9;
  long extraout_x8_00;
  long *plVar10;
  ulong uVar11;
  undefined1 uVar12;
  ulong uStack_980;
  undefined1 auStack_960 [40];
  undefined1 auStack_938 [24];
  long alStack_920 [4];
  undefined4 uStack_900;
  long alStack_8f8 [4];
  undefined4 auStack_8d8 [6];
  undefined1 auStack_8c0 [24];
  undefined8 uStack_8a8;
  undefined4 uStack_8a0;
  undefined1 uStack_89c;
  undefined8 uStack_898;
  undefined1 uStack_890;
  undefined1 uStack_888;
  undefined1 uStack_880;
  undefined1 uStack_878;
  undefined1 uStack_870;
  undefined4 uStack_868;
  undefined1 uStack_864;
  uint uStack_860;
  undefined1 auStack_858 [32];
  undefined1 auStack_838 [32];
  undefined1 uStack_818;
  undefined1 uStack_810;
  undefined1 uStack_808;
  undefined1 uStack_800;
  undefined1 auStack_7f8 [32];
  undefined4 uStack_7d8;
  undefined1 *puStack_7d0;
  undefined1 auStack_7c8 [56];
  undefined1 uStack_790;
  undefined1 uStack_788;
  undefined1 auStack_780 [128];
  undefined1 uStack_700;
  ulong uStack_6f8;
  undefined1 uStack_6f0;
  undefined1 uStack_6e8;
  undefined1 uStack_6e4;
  undefined1 uStack_6e0;
  undefined1 uStack_6dc;
  undefined1 uStack_6d8;
  undefined4 uStack_6d7;
  undefined1 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 uStack_6c0;
  undefined1 uStack_6b8;
  undefined1 uStack_6b0;
  undefined1 uStack_6a8;
  undefined1 uStack_6a0;
  undefined1 auStack_510 [32];
  ulong uStack_4f0;
  undefined1 uStack_330;
  undefined4 uStack_32f;
  undefined1 uStack_328;
  char cStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [88];
  
  uVar9 = param_6;
  func_0x000108691668();
  alStack_8f8[2] = 0;
  alStack_8f8[3] = 0;
  alStack_8f8[0] = extraout_x8 + 0x10;
  alStack_8f8[1] = 0;
  auStack_8d8[0] = 0x26e;
  plVar10 = alStack_8f8;
  FUN_1086901fc(plVar10,uVar9);
  func_0x000107c2884c(auStack_e0,plVar10);
  func_0x0001006a64d4(auStack_b8,param_11,auStack_e0,0,1);
  func_0x000107c2882c(auStack_e0);
  func_0x000107c2882c(alStack_8f8);
  if ((*(byte *)(param_4 + 0x10) & 1) == 0) {
    *param_1 = 0;
    param_1[0x260] = 0;
  }
  else {
    func_0x000100696384(auStack_f8,*(undefined8 *)(param_4 + 0x20));
    if ((*(byte *)(param_4 + 0x10) >> 1 & 1) == 0) {
      *param_1 = 0;
      param_1[0x260] = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(long *)(param_4 + 0x28) + 0x18);
      uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x10);
      uVar7 = *(undefined4 *)(param_4 + 0x44);
      func_0x000108846b54();
      uVar3 = *(undefined1 *)(param_4 + 0x40);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_110,*(ulong *)(param_4 + 0x18) & 0xfffffffffffffffc);
      auStack_130[0] = 0;
      uStack_118 = 0;
      if ((*(byte *)(param_4 + 0x10) >> 2 & 1) != 0) {
        func_0x000100696384(alStack_8f8,*(undefined8 *)(param_4 + 0x30));
        FUN_10869026c(auStack_130,alStack_8f8);
        func_0x000107c27914(alStack_8f8);
      }
      uVar11 = 0;
      uVar12 = 0;
      if (*(char *)(param_12 + 0x78) == '\x01') {
        uVar6 = 0;
        bVar5 = false;
        uStack_980 = 0;
        if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
          FUN_1088660e8(alStack_8f8,*param_10,param_2);
          FUN_10869148c(auStack_510,alStack_8f8);
          func_0x000107c288ec(alStack_8f8);
          if (cStack_140 != '\x01') {
            uVar12 = 0;
            uVar6 = 0;
            uVar11 = 0;
            uStack_980 = 0;
          }
          else {
            uStack_980 = uStack_4f0 & 0xffffffffffffff00;
            uStack_138 = uStack_32f;
            uVar11 = uStack_4f0 & 0xff;
            uVar12 = uStack_328;
            uVar6 = uStack_330;
          }
          bVar5 = cStack_140 == '\x01';
          func_0x000107c288cc(auStack_510);
        }
      }
      else {
        uVar6 = 0;
        bVar5 = false;
        uStack_980 = 0;
      }
      func_0x000107c279d4(alStack_8f8,param_2);
      uVar1 = param_3[1];
      puVar4 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar4 = param_3;
      }
      func_0x00010069648c(auStack_8d8,puVar4,(long)puVar4 + uVar1);
      func_0x000107c27994(auStack_8c0,auStack_f8);
      uStack_89c = 1;
      uStack_890 = 1;
      uStack_888 = 0;
      uStack_880 = 0;
      uStack_878 = 0;
      uStack_870 = 0;
      uStack_860 = (uint)((int)param_6 == 0x4d01ca);
      uStack_8a8 = param_5;
      uStack_8a0 = uVar2;
      uStack_898 = uVar9;
      uStack_868 = uVar7;
      uStack_864 = uVar3;
      func_0x000107c279d4(auStack_858,auStack_130);
      FUN_108691254(auStack_838,param_7);
      uStack_818 = 0;
      uStack_810 = 0;
      uStack_808 = 0;
      uStack_800 = 0;
      puVar8 = auStack_7f8;
      func_0x000107c27f70(puVar8,auStack_110);
      uStack_7d8 = param_8;
      func_0x000107c316c4();
      puStack_7d0 = puVar8;
      func_0x000107c28d2c(auStack_7c8,param_9);
      uStack_790 = 0;
      uStack_788 = 0;
      func_0x000107c28d6c(auStack_780,param_12);
      uStack_700 = 0;
      uStack_6f8 = uStack_980 | uVar11;
      uStack_6e8 = 0;
      uStack_6e4 = 0;
      uStack_6e0 = 0;
      uStack_6dc = 0;
      uStack_6d7 = uStack_138;
      uStack_6c8 = param_13;
      uStack_6c0 = param_14;
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      uStack_6a8 = 0;
      uStack_6a0 = 0;
      uStack_6f0 = bVar5;
      uStack_6d8 = uVar6;
      uStack_6d0 = uVar12;
      FUN_10886bf18(*param_10,alStack_8f8);
      alStack_920[2] = 0;
      alStack_920[3] = 0;
      func_0x000108691668();
      alStack_920[0] = extraout_x8_00 + 0x10;
      alStack_920[1] = 0;
      uStack_900 = 0x26b;
      func_0x000107c278b8(auStack_938,&UNK_10f4b0630);
      plVar10 = alStack_920;
      func_0x000107c28818(plVar10,auStack_938,uVar3);
      FUN_1086901fc();
      func_0x000107c2884c(auStack_510,plVar10);
      func_0x0001086916e0();
      func_0x00010869170c();
      plVar10 = (long *)*param_11;
      func_0x000107c2884c(auStack_960,auStack_510);
      (**(code **)(*plVar10 + 0x50))(plVar10,auStack_960);
      func_0x000107c2882c(auStack_960);
      FUN_10868cc2c(param_1,alStack_8f8);
      param_1[0x260] = 1;
      func_0x000107c2882c(auStack_510);
      func_0x000107c28d00(alStack_8f8);
      func_0x000107c279dc(auStack_130);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    }
    func_0x000107c27914(auStack_f8);
  }
  func_0x0001006ab5c4(auStack_b8);
  return;
}



/* Entry: 1086901fc; end: 10869026b;  */

void FUN_1086901fc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010869173c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108691728();
  }
  func_0x0001086916c0();
  func_0x000108691674();
  func_0x000107c28824();
  func_0x0001086915c8();
  return;
}



/* Entry: 10869026c; end: 10869029f;  */

long FUN_10869026c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c3194c();
  }
  else {
    func_0x000107c27b00();
  }
  return param_1;
}



/* Entry: 1086902a0; end: 1086902db;  */

void FUN_1086902a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  func_0x00010887d100(*param_4,param_1,param_2,param_3);
  func_0x00010887b8fc();
  if ((bool)in_ZR) {
    func_0x000107c34180();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b51c();
      func_0x00010887b668();
      func_0x00010887b788();
      func_0x000107c316c4();
      func_0x00010887b4a4();
      func_0x00010887b8d8();
      func_0x00010887be60();
      func_0x000107c34388();
      func_0x00010887be50();
    }
  }
  func_0x00010887bd28(*(undefined8 *)(unaff_x21 + 0x20));
  return;
}



/* Entry: 1086902dc; end: 108690303;  */

uint FUN_1086902dc(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_10868f768();
    return (uint)param_1 ^ 1;
  }
  return 0;
}



/* Entry: 108690304; end: 1086903bb;  */

void FUN_108690304(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long extraout_x8;
  undefined1 auStack_88 [24];
  long alStack_70 [4];
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  if (param_1 != (long *)0x0) {
    func_0x000108691668();
    alStack_70[2] = 0;
    alStack_70[3] = 0;
    alStack_70[0] = extraout_x8 + 0x10;
    alStack_70[1] = 0;
    uStack_50 = 0x27b;
    func_0x0001086916c0();
    plVar1 = alStack_70;
    func_0x000107c28824(plVar1,auStack_88,param_2);
    func_0x000107c2884c(auStack_48,plVar1);
    (**(code **)(*param_1 + 0x50))(param_1,auStack_48);
    func_0x0001086916b8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    func_0x0001086916fc();
  }
  return;
}



/* Entry: 1086903bc; end: 1086903f7;  */

long FUN_1086903bc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1086912a8();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_1086912dc();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 1086903f8; end: 108690aaf;  */

void FUN_1086903f8(undefined8 *param_1,long param_2,long *param_3,ulong *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_968 [48];
  undefined **ppuStack_938;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  ulong uStack_8b8;
  byte bStack_8b0;
  undefined7 uStack_8af;
  uint uStack_8a8;
  undefined1 uStack_8a4;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined1 uStack_890;
  undefined1 uStack_888;
  undefined1 auStack_880 [120];
  undefined1 auStack_808 [8];
  ulong uStack_800;
  undefined *puStack_7f0;
  undefined8 uStack_7e8;
  undefined1 uStack_7e0;
  undefined1 uStack_7c8;
  undefined1 uStack_7c0;
  undefined1 uStack_7bc;
  undefined1 uStack_7b8;
  undefined1 uStack_7b0;
  undefined1 uStack_7a8;
  undefined1 uStack_7a4;
  undefined1 auStack_7a0 [8];
  undefined1 uStack_798;
  undefined1 uStack_790;
  undefined1 uStack_78c;
  undefined1 uStack_788;
  undefined1 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined1 uStack_768;
  undefined1 uStack_760;
  undefined1 uStack_75c;
  undefined1 uStack_758;
  undefined1 uStack_754;
  undefined1 uStack_750;
  undefined1 auStack_748 [4];
  undefined4 uStack_744;
  undefined8 uStack_740;
  undefined8 uStack_738;
  ulong uStack_730;
  undefined1 uStack_728;
  undefined7 uStack_727;
  undefined1 uStack_720;
  undefined8 uStack_71f;
  undefined1 uStack_710;
  undefined1 uStack_708;
  undefined1 uStack_704;
  char cStack_700;
  undefined1 auStack_4e8 [32];
  undefined8 uStack_4c8;
  undefined1 uStack_4a8;
  undefined8 uStack_308;
  byte bStack_300;
  undefined7 uStack_2ff;
  byte bStack_118;
  undefined1 auStack_110 [48];
  byte bStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [32];
  
  if ((*(char *)(param_2 + 0x1f0) != '\x01') || ((*(byte *)(param_2 + 0x18) & 1) == 0)) {
    func_0x0001086916f0(param_5,0x12);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  func_0x000107c27994(auStack_80,param_2);
  uVar4 = *(undefined8 *)(*param_3 + 0x18);
  func_0x000107c278b8(auStack_d8,&UNK_10f4b0672);
  func_0x000107c31420(auStack_c0,uVar4,auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  FUN_10885edd8(&uStack_8d0,*param_3,auStack_80);
  FUN_108663a10(auStack_110,&uStack_8d0);
  FUN_108656820(&uStack_8d0);
  if ((bStack_e0 & 1) == 0) {
    lVar5 = *param_3;
    func_0x000108691604();
    uStack_8b8 = uStack_8b8 & 0xffffffffffffff00;
    bStack_8b0 = 0;
    uStack_8a8 = uStack_8a8 & 0xffffff00;
    uStack_8a4 = 0;
    FUN_10885fef4(lVar5,&uStack_8d0);
    func_0x000108691704();
    func_0x000108691604();
    if (*(int *)(param_2 + 0x1e8) == 3) {
      func_0x000100694450(&uStack_8b8,*(undefined8 *)(param_2 + 0x1d8));
    }
    else {
      func_0x000107c28dcc(&uStack_8b8);
    }
    func_0x000107c278b8(auStack_7a0,&DAT_10f4bdfd4);
    uStack_788 = 0;
    uStack_780 = 0;
    uStack_778 = *(undefined8 *)(param_2 + 0x1b0);
    uStack_770 = 0;
    uStack_768 = 0;
    uStack_760 = 0;
    uStack_758 = 0;
    uStack_750 = 0;
    auStack_748[0] = 1;
    uStack_744 = 7;
    uStack_710 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_71f = 0;
    uStack_720 = 0;
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_727 = 0;
    uStack_730 = 0;
    FUN_10885ff98(*param_3,&uStack_8d0);
    func_0x000107c287e4(&uStack_8d0);
  }
  FUN_108864630(*param_3,auStack_80);
  FUN_1088660e8(&uStack_8d0,*param_3,auStack_80);
  FUN_10869148c(auStack_4e8,&uStack_8d0);
  func_0x000107c288ec(&uStack_8d0);
  if ((bStack_118 & 1) == 0) {
    if (*(int *)(param_2 + 0x1ec) == 6) {
      FUN_108845808(&uStack_8d0,auStack_80,*(undefined8 *)(param_2 + 0x1e0));
      FUN_1088665d4(*param_3,&uStack_8d0);
    }
    else {
      if (*(int *)(param_2 + 0x1e8) != 3) goto LAB_108690684;
      FUN_1088460dc(&uStack_8d0,auStack_80,0,1,*(long *)(*(long *)(param_2 + 0x1d8) + 0xe8) * 1000,
                    *(long *)(param_2 + 0x1d8),0);
      FUN_1088665d4(*param_3,&uStack_8d0);
    }
    func_0x000107c288d0(&uStack_8d0);
  }
  else {
    if ((*(byte *)(param_2 + 0x208) & 1) == 0) {
      FUN_10886ca70(*param_3,uStack_4c8,auStack_80);
    }
    if (((*(byte *)(param_2 + 0x228) & 1) == 0) && ((bStack_300 & 1) != 0)) {
      FUN_10886c990(*param_3,uStack_308,CONCAT71(uStack_2ff,bStack_300),auStack_80);
    }
    uStack_4a8 = 0;
    FUN_1088665d4(*param_3,auStack_4e8);
  }
LAB_108690684:
  if (((bStack_e0 == 1) && (*(int *)(param_2 + 0x1e8) == 3)) &&
     ((*(byte *)(*(long *)(param_2 + 0x1d8) + 0x11) >> 2 & 1) != 0)) {
    func_0x000107c323d8(&uStack_8d0,*param_3,auStack_80);
    if (cStack_700 == '\x01') {
      uStack_8a8 = uStack_8a8 | 0x400;
      if (uStack_800 == 0) {
        uVar3 = CONCAT71(uStack_8af,bStack_8b0);
        if ((bStack_8b0 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        FUN_108691434();
        uStack_800 = uVar3;
      }
      FUN_1088f5958();
      FUN_10885ff98(*param_3,&uStack_8d0);
    }
    func_0x000107c288c8(&uStack_8d0);
  }
  uStack_8f0 = 0;
  uStack_8e8 = 0;
  uStack_8e0 = 0;
  FUN_10867d03c(&uStack_8f0,(long)*(int *)(param_2 + 0x198));
  puVar1 = (undefined8 *)(param_2 + 400);
  if ((*(ulong *)(param_2 + 400) & 1) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_2 + 400) + 7);
  }
  for (lVar5 = (long)*(int *)(param_2 + 0x198) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    func_0x000107c287dc(auStack_968,*puVar1);
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    FUN_1086a2c40(auStack_968,&uStack_8d0);
    func_0x000107c288a4(&uStack_8d0);
    func_0x000108691604();
    uVar3 = *param_4;
    func_0x00010869163c();
    (*extraout_x8)();
    bStack_8b0 = 0;
    uStack_8a8 = uStack_8a8 & 0xffffff00;
    uStack_8a0 = uStack_8f8;
    uStack_898 = 1;
    uStack_890 = 0;
    uStack_888 = 0;
    uStack_8b8 = uVar3;
    func_0x000107c287dc(auStack_880,auStack_968);
    func_0x000107c278b8(auStack_808,&DAT_10f4bdfd4);
    ppuVar2 = &PTR_PTR_113286e08;
    if (ppuStack_938 != (undefined **)0x0) {
      ppuVar2 = ppuStack_938;
    }
    puStack_7f0 = ppuVar2[0x24];
    uStack_7e8 = 0;
    uStack_7e0 = 0;
    uStack_7c8 = 0;
    uStack_7c0 = 0;
    uStack_7bc = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 0;
    uStack_7a8 = 0;
    uStack_7a4 = 0;
    auStack_7a0[0] = 0;
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_78c = 0;
    uStack_788 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_760 = 0;
    uStack_75c = 0;
    uStack_758 = 0;
    uStack_754 = 0;
    uStack_750 = 0;
    auStack_748[0] = 0;
    uStack_730 = uStack_730 & 0xffffffffffffff00;
    FUN_108690b88(auStack_748,param_2 + 0x38);
    FUN_10886e2e0(&uStack_8d0);
    func_0x00010869163c(*param_3);
    (*extraout_x8_00)();
    FUN_10867b444(&uStack_8f0,&uStack_8d0);
    func_0x000107c288e0(&uStack_8d0);
    func_0x000107c2a5a4(auStack_968);
    puVar1 = puVar1 + 1;
  }
  FUN_10886c914(*param_3,auStack_80);
  func_0x000107c31428(auStack_c0);
  func_0x0001086916f0(param_5,0x11);
  param_1[1] = uStack_8e8;
  *param_1 = uStack_8f0;
  param_1[2] = uStack_8e0;
  uStack_8e8 = 0;
  uStack_8e0 = 0;
  uStack_8f0 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  func_0x00010867b9fc(&uStack_8f0);
  func_0x000107c288cc(auStack_4e8);
  FUN_1086569a0(auStack_110);
  func_0x000107c31424(auStack_c0);
  func_0x000107c27914(auStack_80);
  return;
}



/* Entry: 108690ab0; end: 108690b87;  */

void FUN_108690ab0(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_98 [40];
  long alStack_70 [4];
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  if (*param_1 != 0) {
    func_0x000108691668();
    alStack_70[2] = 0;
    alStack_70[3] = 0;
    alStack_70[0] = extraout_x8 + 0x10;
    alStack_70[1] = 0;
    uStack_50 = 0x27c;
    plVar1 = alStack_70;
    FUN_108659af8(plVar1);
    func_0x000107c2884c(auStack_48,plVar1);
    func_0x000107c2882c(alStack_70);
    if (param_3 >> 0x20 != 0) {
      puVar2 = auStack_48;
      FUN_1086913c4(puVar2,param_3);
      func_0x000107c28af0(auStack_48,puVar2);
    }
    param_1 = (long *)*param_1;
    func_0x000107c2884c(auStack_98,auStack_48);
    func_0x000108691674(*(undefined8 *)(*param_1 + 0x50));
    (*extraout_x8_00)();
    func_0x000107c2882c(auStack_98);
    func_0x0001086916b8();
  }
  return;
}



/* Entry: 108690b88; end: 108690bbb;  */

long FUN_108690b88(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27cfc();
  }
  else {
    func_0x000107c279d8();
  }
  return param_1;
}



/* Entry: 108690bbc; end: 108690c13;  */

bool FUN_108690bbc(long param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if ((*(char *)(param_1 + 0x160) != '\x01') || (*(float *)(param_1 + 0x158) <= 0.0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = (long)(*(float *)(param_1 + 0x158) * 1000.0);
    }
    return lVar1 + *(long *)(param_1 + 0x70) <= param_2;
  }
  return true;
}



/* Entry: 108690c14; end: 108690c3b;  */

undefined8 FUN_108690c14(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  func_0x0001008645f4(param_1,0xb2,0,0);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108690c3c; end: 108690c8f;  */

long FUN_108690c3c(long param_1)

{
  func_0x000107c288c8(param_1 + 0x20);
  func_0x000104be1274(param_1 + 8);
  return param_1;
}



/* Entry: 108690c90; end: 108690d23;  */

long FUN_108690c90(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_108690e00(param_1,(param_1[1] - *param_1) / 0x1c8 + 1);
  FUN_108690ef4(auStack_58,plVar1,(param_1[1] - *param_1) / 0x1c8,param_1 + 2);
  FUN_108690d24(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x1c8;
  func_0x000108691674();
  FUN_108690e60();
  lVar2 = param_1[1];
  func_0x000108691120(auStack_58);
  return lVar2;
}



/* Entry: 108690d24; end: 108690dff;  */

undefined8 * FUN_108690d24(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar2 = param_2[6];
  uVar1 = *(undefined2 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 7) = uVar1;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    param_1[8] = uVar2;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (*(char *)(param_2 + 0xf) == '\x01') {
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xc] = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  _memcpy(param_1 + 0x10,param_2 + 0x10,0x141);
  return param_1;
}



/* Entry: 108690e00; end: 108690e5f;  */

long * FUN_108690e00(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x8fb823ee08fb83) {
    uVar1 = (param_1[2] - *param_1) / 0x1c8;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x47dc11f7047dc0 < uVar1) {
      plVar3 = (long *)0x8fb823ee08fb82;
    }
    return plVar3;
  }
  FUN_108690ee0();
  func_0x000107c323c4();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x1c8) * 0x1c8;
  FUN_108690f94(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
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
  return plVar3;
}



/* Entry: 108690e60; end: 108690edf;  */

void FUN_108690e60(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c323c4();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x1c8) * 0x1c8;
  FUN_108690f94(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 108690ee0; end: 108690ef3;  */

long * FUN_108690ee0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108690f40();
  }
  lVar2 = param_4 + param_3 * 0x1c8;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x1c8;
  return plVar1;
}



/* Entry: 108690ef4; end: 108690f63;  */

long * FUN_108690ef4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108690f40();
  }
  lVar1 = param_4 + param_3 * 0x1c8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x1c8;
  return param_1;
}



/* Entry: 108690f64; end: 108690f93;  */

void FUN_108690f64(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x8fb823ee08fb83) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1c8);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x1c8) {
    FUN_108690d24(param_4,uVar1);
    param_4 = lStack_48 + 0x1c8;
  }
  uStack_58 = 1;
  FUN_108691038(param_1,param_2,param_3);
  FUN_1086910a0(&uStack_70);
  return;
}



/* Entry: 108690f94; end: 108691037;  */

void FUN_108690f94(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x1c8) {
    FUN_108690d24(param_4,lVar1);
    param_4 = lStack_38 + 0x1c8;
  }
  uStack_48 = 1;
  FUN_108691038(param_1,param_2,param_3);
  FUN_1086910a0(&uStack_60);
  return;
}



/* Entry: 108691038; end: 10869109f;  */

void FUN_108691038(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x1c8) {
    func_0x000108691068();
  }
  return;
}



/* Entry: 1086910a0; end: 1086910cf;  */

long FUN_1086910a0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086910d0(param_1);
  }
  return param_1;
}



/* Entry: 1086910d0; end: 1086910ef;  */

void FUN_1086910d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x1c8;
    func_0x000108691068();
  }
  return;
}



/* Entry: 1086910f0; end: 10869114b;  */

void FUN_1086910f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x1c8;
    func_0x000108691068();
  }
  return;
}



/* Entry: 10869114c; end: 108691153;  */

void FUN_10869114c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c323c4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1c8;
    func_0x000108691068();
  }
  return;
}



/* Entry: 108691154; end: 108691187;  */

void FUN_108691154(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c323c4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1c8;
    func_0x000108691068();
  }
  return;
}



/* Entry: 108691188; end: 1086911a7;  */

void FUN_108691188(long param_1)

{
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
    func_0x000108691068();
  }
  return;
}



/* Entry: 1086911a8; end: 108691217;  */

undefined8 FUN_1086911a8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001086911dc(&uStack_28);
  return param_1;
}



/* Entry: 108691218; end: 10869121f;  */

void FUN_108691218(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c323c4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x1c8;
    func_0x000108691068();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108691220; end: 108691253;  */

void FUN_108691220(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c323c4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x1c8;
    func_0x000108691068();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108691254; end: 10869126f;  */

void FUN_108691254(long param_1)

{
  func_0x000107c27994();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 108691270; end: 1086912a7;  */

void FUN_108691270(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c323bc();
  FUN_10868cf80(unaff_x20 + 0x70,unaff_x19 + 0x70);
  uVar1 = *(undefined1 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined1 *)(unaff_x20 + 0xb0) = uVar1;
  return;
}



/* Entry: 1086912a8; end: 1086912db;  */

void FUN_1086912a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_108691374(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x20;
  return;
}



/* Entry: 1086912dc; end: 108691373;  */

long FUN_1086912dc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x000104be77f0(param_1,(param_1[1] - *param_1 >> 5) + 1);
  func_0x000104be74ec(auStack_58,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  FUN_108691374(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x20;
  func_0x000108691674();
  func_0x000104be74b4();
  lVar2 = param_1[1];
  func_0x000104be769c(auStack_58);
  return lVar2;
}



/* Entry: 108691374; end: 1086913c3;  */

undefined8 * FUN_108691374(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c27994(&uStack_40);
  uVar1 = uStack_30;
  uVar2 = *param_3;
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c27914(&uStack_40);
  return param_1;
}



/* Entry: 1086913c4; end: 108691433;  */

void FUN_1086913c4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010869173c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000108691728();
  }
  func_0x0001086916c0();
  func_0x000108691674();
  func_0x000107c28824();
  func_0x0001086915c8();
  return;
}



/* Entry: 108691434; end: 10869148b;  */

void FUN_108691434(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110a8d508;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &DAT_11383d918;
  return;
}



/* Entry: 10869148c; end: 10869151f;  */

void FUN_10869148c(undefined1 *param_1)

{
  long *plVar1;
  undefined1 auStack_7f0 [992];
  long lStack_410;
  undefined1 auStack_408 [976];
  char cStack_38;
  
  func_0x000107c288b4(&lStack_410);
  _bzero(auStack_7f0,0x3e0);
  if (cStack_38 == '\x01') {
    func_0x0001086916d0();
    if (lStack_410 != 0) {
      plVar1 = &lStack_410;
      func_0x000107c288b8(plVar1);
      FUN_108691520(param_1,plVar1);
      goto LAB_1086914fc;
    }
  }
  else {
    func_0x0001086916d0();
  }
  *param_1 = 0;
  param_1[0x3d0] = 0;
LAB_1086914fc:
  func_0x000107c288cc(auStack_408);
  return;
}



/* Entry: 108691520; end: 10869153b;  */

void FUN_108691520(long param_1)

{
  func_0x000107c28918();
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  return;
}



/* Entry: 10869153c; end: 10869158b;  */

void FUN_10869153c(void)

{
  undefined1 auStack_e8 [184];
  
  func_0x000107c323c4();
  func_0x000107c28de0(auStack_e8);
  func_0x000107c323e0();
  FUN_108691270();
  func_0x000108691674();
  FUN_108691270();
  func_0x0001086916c8();
  return;
}



/* Entry: 10869158c; end: 1086917bf;  */

void FUN_10869158c(void)

{
  return;
}



/* Entry: 1086917c0; end: 1086917ff;  */

void FUN_1086917c0(undefined1 *param_1,long param_2)

{
  param_2 = param_2 + 0x128;
  FUN_10868d74c();
  if (param_2 != 0) {
    func_0x000107c27994(param_1,param_2 + 0x28);
    param_1[0x18] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 108691800; end: 108691973;  */

undefined1 * FUN_108691800(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar4;
  undefined1 *puStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x0001006b3188();
  plVar4 = *(long **)(lVar1 + 0x30);
  uStack_48 = extraout_x8;
  func_0x000107c27994(auStack_108);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  uStack_d8 = *(undefined8 *)(param_1 + 0x48);
  uStack_e0 = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_00 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_01 != 0);
  }
  uStack_b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = *(undefined8 *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_02 != 0);
  }
  uStack_b0 = *(undefined1 *)(param_1 + 0xf9);
  pcStack_a8 = FUN_108692a34;
  ppuStack_a0 = &PTR_FUN_110a62da0;
  lVar1 = 0x60;
  __Znwm();
  func_0x000107c27994();
  *(undefined8 *)(lVar1 + 0x20) = uStack_e8;
  *(undefined8 *)(lVar1 + 0x18) = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined8 *)(lVar1 + 0x30) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x28) = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  *(undefined8 *)(lVar1 + 0x40) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x38) = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(lVar1 + 0x50) = uStack_b8;
  *(undefined8 *)(lVar1 + 0x48) = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *(undefined1 *)(lVar1 + 0x58) = uStack_b0;
  lStack_98 = lVar1;
  func_0x000108693360(*(undefined8 *)(*plVar4 + 0x10));
  func_0x0001086933a8();
  puVar2 = auStack_108;
  FUN_108691974();
  func_0x0001006b3908(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086933a8();
    puVar3 = auStack_108;
    FUN_108691974();
    func_0x00010869328c();
    pcStack_118 = FUN_108691974;
    lStack_130 = lVar1;
    puStack_128 = puVar2;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x000107c28ab4(puVar3 + 0x48);
    func_0x000107c288a4(puVar3 + 0x38);
    func_0x000107c28800(puVar3 + 0x28);
    func_0x000107c28808(puVar3 + 0x18);
    puStack_138 = puVar3;
    func_0x000100100fd4(&puStack_138);
    return puVar3;
  }
  return puVar2;
}



/* Entry: 108691974; end: 1086919b3;  */

long FUN_108691974(long param_1)

{
  long lStack_28;
  
  func_0x000107c28ab4(param_1 + 0x48);
  func_0x000107c288a4(param_1 + 0x38);
  func_0x000107c28800(param_1 + 0x28);
  func_0x000107c28808(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086919b4; end: 108691b2f;  */

undefined1 * FUN_1086919b4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar8;
  undefined1 *puStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  puVar6 = auStack_110;
  puVar7 = auStack_110;
  lVar5 = param_1;
  func_0x0001006b3188();
  plVar8 = *(long **)(lVar5 + 0x30);
  uStack_48 = extraout_x8;
  func_0x000107c27994(auStack_110);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_f8 = param_3;
  if (*(long *)(param_1 + 0x58) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  uStack_d8 = *(undefined8 *)(param_1 + 0x48);
  uStack_e0 = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_00 != 0);
  }
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_01 != 0);
  }
  uStack_b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = *(undefined8 *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_02 != 0);
  }
  uStack_b0 = *(undefined1 *)(param_1 + 0xf9);
  pcStack_a8 = FUN_108692be4;
  ppuStack_a0 = &PTR_FUN_110a62db8;
  lVar5 = 0x68;
  __Znwm();
  func_0x000107c27994();
  uVar4 = uStack_c8;
  uVar3 = uStack_d0;
  uVar2 = uStack_e8;
  uVar1 = uStack_f0;
  *(undefined4 *)(lVar5 + 0x18) = uStack_f8;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x38) = uStack_d8;
  *(undefined8 *)(lVar5 + 0x30) = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(lVar5 + 0x48) = uVar4;
  *(undefined8 *)(lVar5 + 0x40) = uVar3;
  *(undefined8 *)(lVar5 + 0x58) = uStack_b8;
  *(undefined8 *)(lVar5 + 0x50) = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *(undefined1 *)(lVar5 + 0x60) = uStack_b0;
  lStack_98 = lVar5;
  func_0x000108693360(*(undefined8 *)(*plVar8 + 0x10));
  func_0x000108693398();
  FUN_108691b30();
  func_0x0001006b3908(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108693398();
    FUN_108691b30();
    func_0x00010869328c();
    pcStack_118 = FUN_108691b30;
    lStack_130 = lVar5;
    puStack_128 = puVar6;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x000107c28ab4(puVar7 + 0x50);
    func_0x000107c288a4(puVar7 + 0x40);
    func_0x000107c28800(puVar7 + 0x30);
    func_0x000107c28808(puVar7 + 0x20);
    puStack_138 = puVar7;
    func_0x000100100fd4(&puStack_138);
    return puVar7;
  }
  return puVar6;
}



/* Entry: 108691b30; end: 108691b97;  */

long FUN_108691b30(long param_1)

{
  long lStack_28;
  
  func_0x000107c28ab4(param_1 + 0x50);
  func_0x000107c288a4(param_1 + 0x40);
  func_0x000107c28800(param_1 + 0x30);
  func_0x000107c28808(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108691b98; end: 108691f73;  */

void FUN_108691b98(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x21;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  long lStack_338;
  long lStack_330;
  undefined1 auStack_328 [48];
  byte bStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long *plStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 *puStack_2b0;
  long lStack_298;
  undefined8 *puStack_290;
  long lStack_280;
  char cStack_278;
  undefined1 auStack_250 [520];
  undefined8 uStack_48;
  
  func_0x0001006b3188();
  uStack_48 = extraout_x8;
  if ((param_2 == 0) && ((*(byte *)(param_1 + 0x150) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x150) = 1;
    if (((*(byte *)(param_1 + 0xfa) & 1) != 0) || (*(char *)(param_1 + 0xfb) == '\x01')) {
      func_0x000107c28dc4(&pcStack_2c0,param_1 + 0x50);
      pcStack_2c0 = pcStack_2c0 + 1;
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x0001006b38fc();
      (*extraout_x8_00)();
      lVar6 = lStack_298;
      if ((cStack_278 == '\x01') &&
         (lVar6 = 1, (int)(lVar1 / 86400000) <= (int)(lStack_280 / 86400000))) {
        lVar6 = lStack_298 + 1;
      }
      lStack_298 = lVar6;
      cStack_278 = '\x01';
      lStack_280 = lVar1;
      FUN_10886d1b4(*(undefined8 *)(param_1 + 0x50),&pcStack_2c0);
      func_0x000107c28d20(auStack_250);
    }
    lStack_2d0 = 0;
    lStack_2c8 = 0;
    plStack_2d8 = &lStack_2d0;
    if (*(long *)(param_1 + 0x118) != 0) {
      func_0x000107c27994(&pcStack_2c0,*(long *)(param_1 + 0x118) + 0x80);
      FUN_10866e450(&plStack_2d8,&pcStack_2c0);
      func_0x000107c27914(&pcStack_2c0);
    }
    func_0x000107c2a054(&pcStack_2c0,*(undefined8 *)(param_1 + 0x50));
    FUN_10868aee0(&lStack_2f0,&pcStack_2c0);
    func_0x000107c28d4c(&pcStack_2c0);
    auStack_328[0] = 0;
    bStack_2f8 = 0;
    for (lVar6 = lStack_2f0 + 0xc0; in_ZR = lVar6 + -0xc0 == lStack_2e8, !(bool)in_ZR;
        lVar6 = lVar6 + 0x260) {
      if (((*(byte *)(lVar6 + -0x38) & 1) == 0) && (*(char *)(lVar6 + 0x18) == '\x01')) {
        FUN_108691f74(&plStack_2d8,lVar6);
      }
      if (((*(char *)(lVar6 + 0x28) == '\x01') && ((*(byte *)(lVar6 + 0xb0) & 1) == 0)) &&
         ((bStack_2f8 & 1) == 0)) {
        FUN_10868ca80(auStack_328,lVar6 + 0x70);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x0001006b38fc(uVar2);
    (*extraout_x8_01)();
    FUN_10886d394(puVar5,uVar2);
    lVar6 = *(long *)(param_1 + 0x70);
    uStack_348 = *(undefined8 *)(param_1 + 0x98);
    uStack_350 = *(undefined8 *)(param_1 + 0x90);
    if (*(long *)(param_1 + 0x98) != 0) {
      do {
        func_0x000107c323e4();
      } while (extraout_w10 != 0);
    }
    plStack_340 = plStack_2d8;
    lStack_338 = lStack_2d0;
    lStack_330 = lStack_2c8;
    plVar4 = &lStack_338;
    if (lStack_2c8 != 0) {
      *(long **)(lStack_2d0 + 0x10) = &lStack_338;
      lStack_2d0 = 0;
      lStack_2c8 = 0;
      plVar4 = plStack_340;
      plStack_2d8 = &lStack_2d0;
    }
    plStack_340 = plVar4;
    func_0x000107c28150();
    lVar1 = *(long *)(lVar6 + 0x10);
    puVar3 = puVar5;
    func_0x000108693450();
    unaff_x21 = *(long *)(lVar1 + 0x70);
    pcStack_2c0 = FUN_108693108;
    ppuStack_2b8 = &PTR_FUN_110a62e50;
    func_0x000108693464();
    puVar3[1] = uStack_348;
    *puVar3 = uStack_350;
    uStack_350 = 0;
    uStack_348 = 0;
    puVar3[2] = plStack_340;
    plVar4 = puVar3 + 3;
    *plVar4 = lStack_338;
    puVar3[4] = lStack_330;
    if (lStack_330 == 0) {
      puVar3[2] = plVar4;
    }
    else {
      *(long **)(lStack_338 + 0x10) = plVar4;
      lStack_338 = 0;
      lStack_330 = 0;
      plStack_340 = &lStack_338;
    }
    puStack_2b0 = puVar3;
    puStack_290 = puVar5;
    func_0x000107c28154(lVar1 + 0x48,&pcStack_2c0);
    func_0x000108693380();
    func_0x000108693308();
    if (unaff_x21 == 0) {
      ppuStack_2b8 = *(undefined ***)(lVar6 + 0x18);
      pcStack_2c0 = *(code **)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x18) != 0) {
        do {
          func_0x000107c323e4();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001006b38fc();
      (*extraout_x8_02)();
      func_0x000107c27e74(&pcStack_2c0);
    }
    FUN_108691f8c(&uStack_350);
    func_0x000107c28d20(auStack_328);
    func_0x00010868c8fc(&lStack_2f0);
    func_0x00010866f0d0(&plStack_2d8);
  }
  while( true ) {
    func_0x0001006b3908(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108693294();
    func_0x000107c27e74(&pcStack_2c0);
    FUN_108691f8c(&uStack_350);
    func_0x000107c28d20(auStack_328);
    func_0x00010868c8fc(&lStack_2f0);
    func_0x00010866f0d0(&plStack_2d8);
    in_ZR = (int)unaff_x21 == 2;
    if (!(bool)in_ZR) break;
    func_0x0001086932e8();
    ___cxa_end_catch();
  }
  func_0x000108693334();
  FUN_108692ff0();
  return;
}



/* Entry: 108691f74; end: 108691f8b;  */

void FUN_108691f74(void)

{
  FUN_108692ff0();
  return;
}



/* Entry: 108691f8c; end: 108691faf;  */

undefined8 FUN_108691f8c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010866f0d0(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108691fb0; end: 108691fd7;  */

void FUN_108691fb0(long param_1,int param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x21;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  long lStack_338;
  long lStack_330;
  undefined1 auStack_328 [48];
  byte bStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long *plStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 *puStack_2b0;
  long lStack_298;
  undefined8 *puStack_290;
  long lStack_280;
  char cStack_278;
  undefined1 auStack_250 [520];
  undefined8 uStack_48;
  
  param_1 = param_1 + -8;
  func_0x0001006b3188();
  uStack_48 = extraout_x8;
  if ((param_2 == 0) && ((*(byte *)(param_1 + 0x150) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x150) = 1;
    if (((*(byte *)(param_1 + 0xfa) & 1) != 0) || (*(char *)(param_1 + 0xfb) == '\x01')) {
      func_0x000107c28dc4(&pcStack_2c0,param_1 + 0x50);
      pcStack_2c0 = pcStack_2c0 + 1;
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x0001006b38fc();
      (*extraout_x8_00)();
      lVar6 = lStack_298;
      if ((cStack_278 == '\x01') &&
         (lVar6 = 1, (int)(lVar1 / 86400000) <= (int)(lStack_280 / 86400000))) {
        lVar6 = lStack_298 + 1;
      }
      lStack_298 = lVar6;
      cStack_278 = '\x01';
      lStack_280 = lVar1;
      FUN_10886d1b4(*(undefined8 *)(param_1 + 0x50),&pcStack_2c0);
      func_0x000107c28d20(auStack_250);
    }
    lStack_2d0 = 0;
    lStack_2c8 = 0;
    plStack_2d8 = &lStack_2d0;
    if (*(long *)(param_1 + 0x118) != 0) {
      func_0x000107c27994(&pcStack_2c0,*(long *)(param_1 + 0x118) + 0x80);
      FUN_10866e450(&plStack_2d8,&pcStack_2c0);
      func_0x000107c27914(&pcStack_2c0);
    }
    func_0x000107c2a054(&pcStack_2c0,*(undefined8 *)(param_1 + 0x50));
    FUN_10868aee0(&lStack_2f0,&pcStack_2c0);
    func_0x000107c28d4c(&pcStack_2c0);
    auStack_328[0] = 0;
    bStack_2f8 = 0;
    for (lVar6 = lStack_2f0 + 0xc0; in_ZR = lVar6 + -0xc0 == lStack_2e8, !(bool)in_ZR;
        lVar6 = lVar6 + 0x260) {
      if (((*(byte *)(lVar6 + -0x38) & 1) == 0) && (*(char *)(lVar6 + 0x18) == '\x01')) {
        FUN_108691f74(&plStack_2d8,lVar6);
      }
      if (((*(char *)(lVar6 + 0x28) == '\x01') && ((*(byte *)(lVar6 + 0xb0) & 1) == 0)) &&
         ((bStack_2f8 & 1) == 0)) {
        FUN_10868ca80(auStack_328,lVar6 + 0x70);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x0001006b38fc(uVar2);
    (*extraout_x8_01)();
    FUN_10886d394(puVar5,uVar2);
    lVar6 = *(long *)(param_1 + 0x70);
    uStack_348 = *(undefined8 *)(param_1 + 0x98);
    uStack_350 = *(undefined8 *)(param_1 + 0x90);
    if (*(long *)(param_1 + 0x98) != 0) {
      do {
        func_0x000107c323e4();
      } while (extraout_w10 != 0);
    }
    plStack_340 = plStack_2d8;
    lStack_338 = lStack_2d0;
    lStack_330 = lStack_2c8;
    plVar4 = &lStack_338;
    if (lStack_2c8 != 0) {
      *(long **)(lStack_2d0 + 0x10) = &lStack_338;
      lStack_2d0 = 0;
      lStack_2c8 = 0;
      plVar4 = plStack_340;
      plStack_2d8 = &lStack_2d0;
    }
    plStack_340 = plVar4;
    func_0x000107c28150();
    lVar1 = *(long *)(lVar6 + 0x10);
    puVar3 = puVar5;
    func_0x000108693450();
    unaff_x21 = *(long *)(lVar1 + 0x70);
    pcStack_2c0 = FUN_108693108;
    ppuStack_2b8 = &PTR_FUN_110a62e50;
    func_0x000108693464();
    puVar3[1] = uStack_348;
    *puVar3 = uStack_350;
    uStack_350 = 0;
    uStack_348 = 0;
    puVar3[2] = plStack_340;
    plVar4 = puVar3 + 3;
    *plVar4 = lStack_338;
    puVar3[4] = lStack_330;
    if (lStack_330 == 0) {
      puVar3[2] = plVar4;
    }
    else {
      *(long **)(lStack_338 + 0x10) = plVar4;
      lStack_338 = 0;
      lStack_330 = 0;
      plStack_340 = &lStack_338;
    }
    puStack_2b0 = puVar3;
    puStack_290 = puVar5;
    func_0x000107c28154(lVar1 + 0x48,&pcStack_2c0);
    func_0x000108693380();
    func_0x000108693308();
    if (unaff_x21 == 0) {
      ppuStack_2b8 = *(undefined ***)(lVar6 + 0x18);
      pcStack_2c0 = *(code **)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x18) != 0) {
        do {
          func_0x000107c323e4();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001006b38fc();
      (*extraout_x8_02)();
      func_0x000107c27e74(&pcStack_2c0);
    }
    FUN_108691f8c(&uStack_350);
    func_0x000107c28d20(auStack_328);
    func_0x00010868c8fc(&lStack_2f0);
    func_0x00010866f0d0(&plStack_2d8);
  }
  while( true ) {
    func_0x0001006b3908(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108693294();
    func_0x000107c27e74(&pcStack_2c0);
    FUN_108691f8c(&uStack_350);
    func_0x000107c28d20(auStack_328);
    func_0x00010868c8fc(&lStack_2f0);
    func_0x00010866f0d0(&plStack_2d8);
    in_ZR = (int)unaff_x21 == 2;
    if (!(bool)in_ZR) break;
    func_0x0001086932e8();
    ___cxa_end_catch();
  }
  func_0x000108693334();
  FUN_108692ff0();
  return;
}



/* Entry: 108691fd8; end: 10869212f;  */

undefined1 * FUN_108691fd8(long param_1,long param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_e0 [72];
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  puVar4 = auStack_e0;
  lVar5 = param_2;
  func_0x0001006b3188();
  bVar2 = *(int *)(lVar5 + 0x98) == 1;
  uVar1 = bVar2;
  uStack_58 = extraout_x8;
  if (((!bVar2) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) && ((*(byte *)(param_2 + 0xb8) & 1) != 0)
     ) {
    FUN_10868afcc(param_1 + 0x128,param_2 + 0xa0,param_2);
  }
  func_0x000108693478();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001086933e0();
  func_0x0001086933d4();
  uStack_98 = bVar2;
  func_0x000107c28150();
  lVar5 = *(long *)(unaff_x21 + 0x10);
  func_0x000108693450();
  lVar5 = *(long *)(lVar5 + 0x70);
  uStack_90 = 0x1086931b0;
  ppuStack_88 = &PTR_FUN_110a62e68;
  __Znwm(0x50);
  func_0x0001086932a0();
  func_0x0001086932bc();
  func_0x000108693408();
  func_0x000108693270();
  func_0x000108693308();
  if (lVar5 == 0) {
    func_0x0001086934a4();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c323e4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001006b38fc();
    (*extraout_x8_02)();
    func_0x000108693390();
  }
  FUN_108692130();
  func_0x0001006b3908(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000108693390();
    FUN_108692130(auStack_e0);
    func_0x00010869328c();
    func_0x000108693438();
    func_0x000107c279dc(puVar4 + 0x10);
    puVar3 = puVar4;
    func_0x0001005528ec();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 108692130; end: 108692153;  */

long FUN_108692130(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108693438();
  func_0x000107c279dc(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108692154; end: 10869215b;  */

undefined1 * FUN_108692154(long param_1,long param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_e0 [72];
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  puVar4 = auStack_e0;
  lVar5 = param_2;
  func_0x0001006b3188();
  bVar2 = *(int *)(lVar5 + 0x98) == 1;
  uVar1 = bVar2;
  uStack_58 = extraout_x8;
  if (((!bVar2) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) && ((*(byte *)(param_2 + 0xb8) & 1) != 0)
     ) {
    FUN_10868afcc(param_1 + 0x120,param_2 + 0xa0,param_2);
  }
  func_0x000108693478();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001086933e0();
  func_0x0001086933d4();
  uStack_98 = bVar2;
  func_0x000107c28150();
  lVar5 = *(long *)(unaff_x21 + 0x10);
  func_0x000108693450();
  lVar5 = *(long *)(lVar5 + 0x70);
  uStack_90 = 0x1086931b0;
  ppuStack_88 = &PTR_FUN_110a62e68;
  __Znwm(0x50);
  func_0x0001086932a0();
  func_0x0001086932bc();
  func_0x000108693408();
  func_0x000108693270();
  func_0x000108693308();
  if (lVar5 == 0) {
    func_0x0001086934a4();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c323e4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001006b38fc();
    (*extraout_x8_02)();
    func_0x000108693390();
  }
  FUN_108692130();
  func_0x0001006b3908(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000108693390();
    FUN_108692130(auStack_e0);
    func_0x00010869328c();
    func_0x000108693438();
    func_0x000107c279dc(puVar4 + 0x10);
    puVar3 = puVar4;
    func_0x0001005528ec();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10869215c; end: 1086922db;  */

undefined1 * FUN_10869215c(long param_1,long param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_e0 [72];
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  puVar4 = auStack_e0;
  lVar6 = param_2;
  func_0x0001006b3188();
  bVar1 = *(int *)(lVar6 + 0x98) == 1;
  uVar2 = bVar1;
  uStack_58 = extraout_x8;
  if (((!bVar1) && (uVar2 = *(char *)(param_2 + 0xb8) == '\x01', (bool)uVar2)) &&
     ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
    lVar6 = param_1 + 0x128;
    FUN_10868d74c(lVar6,param_2 + 0xa0);
    if (lVar6 != 0) {
      lVar5 = lVar6 + 0x28;
      func_0x000107c28078(lVar5,param_2);
      unaff_x21 = lVar6;
      if ((int)lVar5 != 0) {
        func_0x00010868de70(param_1 + 0x128,lVar6);
      }
    }
  }
  func_0x000108693478();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001086933e0();
  func_0x0001086933d4();
  uStack_98 = bVar1;
  func_0x000107c28150();
  lVar6 = *(long *)(unaff_x21 + 0x10);
  func_0x000108693450();
  lVar6 = *(long *)(lVar6 + 0x70);
  uStack_90 = 0x1086931fc;
  ppuStack_88 = &PTR_FUN_110a62e80;
  __Znwm(0x50);
  func_0x0001086932a0();
  func_0x0001086932bc();
  func_0x000108693408();
  func_0x000108693270();
  func_0x000108693308();
  if (lVar6 == 0) {
    func_0x0001086934a4();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c323e4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001006b38fc();
    (*extraout_x8_02)();
    func_0x000108693390();
  }
  FUN_1086922dc();
  func_0x0001006b3908(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000108693390();
    FUN_1086922dc(auStack_e0);
    func_0x00010869328c();
    func_0x000108693438();
    func_0x000107c279dc(puVar4 + 0x10);
    puVar3 = puVar4;
    func_0x0001005528ec();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1086922dc; end: 1086922ff;  */

long FUN_1086922dc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108693438();
  func_0x000107c279dc(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108692300; end: 10869230b;  */

undefined1 * FUN_108692300(long param_1,long param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_e0 [72];
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  puVar4 = auStack_e0;
  lVar6 = param_2;
  func_0x0001006b3188();
  bVar1 = *(int *)(lVar6 + 0x98) == 1;
  uVar2 = bVar1;
  uStack_58 = extraout_x8;
  if (((!bVar1) && (uVar2 = *(char *)(param_2 + 0xb8) == '\x01', (bool)uVar2)) &&
     ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
    lVar6 = param_1 + 0x120;
    FUN_10868d74c(lVar6,param_2 + 0xa0);
    if (lVar6 != 0) {
      lVar5 = lVar6 + 0x28;
      func_0x000107c28078(lVar5,param_2);
      unaff_x21 = lVar6;
      if ((int)lVar5 != 0) {
        func_0x00010868de70(param_1 + 0x120,lVar6);
      }
    }
  }
  func_0x000108693478();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  func_0x0001086933e0();
  func_0x0001086933d4();
  uStack_98 = bVar1;
  func_0x000107c28150();
  lVar6 = *(long *)(unaff_x21 + 0x10);
  func_0x000108693450();
  lVar6 = *(long *)(lVar6 + 0x70);
  uStack_90 = 0x1086931fc;
  ppuStack_88 = &PTR_FUN_110a62e80;
  __Znwm(0x50);
  func_0x0001086932a0();
  func_0x0001086932bc();
  func_0x000108693408();
  func_0x000108693270();
  func_0x000108693308();
  if (lVar6 == 0) {
    func_0x0001086934a4();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c323e4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001006b38fc();
    (*extraout_x8_02)();
    func_0x000108693390();
  }
  FUN_1086922dc();
  func_0x0001006b3908(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000108693390();
    FUN_1086922dc(auStack_e0);
    func_0x00010869328c();
    func_0x000108693438();
    func_0x000107c279dc(puVar4 + 0x10);
    puVar3 = puVar4;
    func_0x0001005528ec();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10869230c; end: 10869231f;  */

void FUN_10869230c(void)

{
  FUN_108692350();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108692320; end: 10869232f;  */

undefined8 * FUN_108692320(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110a62ba0;
  *param_1 = &PTR_FUN_110a62c08;
  func_0x0001006a2498(param_1 + 0x24);
  FUN_10868cd80(param_1 + 0x22);
  FUN_108692330(param_1 + 0x19);
  func_0x000107c28d34(param_1 + 0x15);
  func_0x000107c288a4(param_1 + 0x13);
  func_0x000107c28700(param_1 + 0x11);
  func_0x000107c288e8(param_1 + 0xf);
  func_0x000107c2814c(param_1 + 0xd);
  func_0x000107c28ab4(param_1 + 0xb);
  func_0x000107c28808(param_1 + 9);
  func_0x000107c28800(param_1 + 7);
  func_0x000107c27c20(param_1 + 5);
  func_0x000107c28e0c(param_1 + 3);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 108692330; end: 10869234f;  */

void FUN_108692330(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010b594c2c();
  }
  return;
}



/* Entry: 108692350; end: 108692403;  */

undefined8 * FUN_108692350(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a62ba0;
  param_1[1] = &PTR_FUN_110a62c08;
  func_0x0001006a2498(param_1 + 0x25);
  FUN_10868cd80(param_1 + 0x23);
  FUN_108692330(param_1 + 0x1a);
  func_0x000107c28d34(param_1 + 0x16);
  func_0x000107c288a4(param_1 + 0x14);
  func_0x000107c28700(param_1 + 0x12);
  func_0x000107c288e8(param_1 + 0x10);
  func_0x000107c2814c(param_1 + 0xe);
  func_0x000107c28ab4(param_1 + 0xc);
  func_0x000107c28808(param_1 + 10);
  func_0x000107c28800(param_1 + 8);
  func_0x000107c27c20(param_1 + 6);
  func_0x000107c28e0c(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 108692404; end: 108692437;  */

long FUN_108692404(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108692438(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 108692438; end: 10869266f;  */

undefined1  [16] FUN_108692438(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  plVar5 = param_1 + 3;
  func_0x000107c278c4();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x27 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_108692508;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          func_0x000107c278d0(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10869263c;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x27);
    }
  }
LAB_108692508:
  func_0x00010869348c(aplStack_78);
  FUN_108692670();
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    FUN_108692720(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar3 + (long)unaff_x27 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      plVar5 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108692914(aplStack_78);
  uVar1 = 1;
LAB_10869263c:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 108692670; end: 1086926cb;  */

void FUN_108692670(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1086926cc(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1086926cc; end: 10869271f;  */

void FUN_1086926cc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001086926f4(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 108692720; end: 1086927e3;  */

void FUN_108692720(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_108692768;
    }
    return;
  }
LAB_108692768:
  func_0x00010869348c();
  if (plVar3 == (long *)0x0) {
    FUN_1086928e0(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_1086928f8(plVar8);
    FUN_1086928e0(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar6 * 8);
            **(long **)(lVar4 + (long)plVar6 * 8) = (long)plVar8;
            plVar8 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086927e4; end: 1086928df;  */

void FUN_1086927e4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1086928e0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1086928f8(plVar3);
    FUN_1086928e0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086928e0; end: 1086928f7;  */

void FUN_1086928e0(long *param_1,long param_2)

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



/* Entry: 1086928f8; end: 108692913;  */

long FUN_1086928f8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_108692938();
  return param_1;
}



/* Entry: 108692914; end: 108692937;  */

undefined8 FUN_108692914(undefined8 param_1)

{
  FUN_108692938(param_1,0);
  return param_1;
}



/* Entry: 108692938; end: 10869294f;  */

void FUN_108692938(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000108692994(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108692950; end: 1086929bb;  */

void FUN_108692950(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000108692994(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1086929bc; end: 108692a33;  */

undefined8 * FUN_1086929bc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d11418;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      func_0x00010b594f10(param_1);
    }
    else {
      func_0x00010b594ed8(param_1);
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}



/* Entry: 108692a34; end: 108692bbf;  */

void FUN_108692a34(void)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_2c0 [192];
  undefined1 auStack_200 [24];
  byte bStack_1e8;
  undefined8 uStack_80;
  
  func_0x000108693310();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x0001006b38fc();
  (*extraout_x8)();
  puVar4 = (undefined8 *)(unaff_x19 + 0x18);
  func_0x000108693420(*puVar4);
  func_0x000108693414();
  func_0x0001086933c0();
  func_0x000108693498();
  if ((bool)in_ZR) {
    uStack_80 = uVar2;
    FUN_10886bf18(*puVar4,auStack_2c0);
  }
  bVar1 = *(char *)(unaff_x19 + 0x58) == '\x01';
  if (bVar1) {
    func_0x000108693498();
    if ((bVar1) && ((bStack_1e8 & 1) != 0)) {
      FUN_1086902a0(uVar2,auStack_200,1,puVar4);
    }
  }
  else {
    func_0x00010869348c();
    func_0x00010868f78c();
  }
  (**(code **)(**(long **)(unaff_x19 + 0x48) + 0x118))();
  FUN_10886d2d0(*puVar4,uVar2);
  func_0x000108693370();
  func_0x000108693358();
  plVar3 = *(long **)(unaff_x19 + 0x38);
  func_0x000108693458();
  func_0x000108693360(*(undefined8 *)(*plVar3 + 0x50));
  func_0x0001086933b8();
  func_0x000108693368();
  return;
}



/* Entry: 108692bc0; end: 108692bdf;  */

void FUN_108692bc0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108691974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


