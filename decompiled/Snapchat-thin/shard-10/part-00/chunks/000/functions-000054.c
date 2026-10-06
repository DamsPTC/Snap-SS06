/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073db0c4; end: 1073db0ff;  */

ulong FUN_1073db0c4(undefined8 param_1,uint6 *param_2)

{
  return (ulong)*param_2;
}



/* Entry: 1073db100; end: 1073db11b;  */

ulong FUN_1073db100(ulong param_1,float *param_2)

{
  if (*(int *)(param_1 + 8) != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (ulong)(uint)((int)(*param_2 * 65535.0) | (int)(param_2[1] * 65535.0) << 0x10);
}



/* Entry: 1073db11c; end: 1073db147;  */

uint FUN_1073db11c(undefined8 param_1,float *param_2)

{
  return (int)(*param_2 * 65535.0) | (int)(param_2[1] * 65535.0) << 0x10;
}



/* Entry: 1073db148; end: 1073db163;  */

ulong FUN_1073db148(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  uVar2 = (uint)param_1;
  FUN_1073db1c8();
  uVar1 = 0x8001000000000000;
  if (0.0 <= *(float *)(unaff_x19 + 0xc)) {
    uVar1 = 0x7fff000000000000;
  }
  return uVar1 | (ulong)(uVar2 & 0xffff) << 0x20 | (ulong)(uint)(unaff_w21 << 0x10) |
         unaff_x20 & 0xffff;
}



/* Entry: 1073db164; end: 1073db1a7;  */

ulong FUN_1073db164(uint param_1)

{
  ulong uVar1;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  
  FUN_1073db1c8();
  uVar1 = 0x8001000000000000;
  if (0.0 <= *(float *)(unaff_x19 + 0xc)) {
    uVar1 = 0x7fff000000000000;
  }
  return uVar1 | (ulong)(param_1 & 0xffff) << 0x20 | (ulong)(uint)(unaff_w21 << 0x10) |
         unaff_x20 & 0xffff;
}



/* Entry: 1073db1a8; end: 1073db1c7;  */

undefined8 FUN_1073db1a8(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 1073db1c8; end: 1073db1f3;  */

/* WARNING: Possible PIC construction at 0x0001073db1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073db1d8) */

int FUN_1073db1c8(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 * 32767.0;
  fVar3 = 32767.0;
  if (fVar1 <= 32767.0) {
    fVar3 = fVar1;
  }
  fVar2 = -32767.0;
  if (-32767.0 <= fVar1) {
    fVar2 = fVar3;
  }
  return (int)fVar2;
}



/* Entry: 1073db1f4; end: 1073db20b;  */

void FUN_1073db1f4(void)

{
  return;
}



/* Entry: 1073db20c; end: 1073db243;  */

void FUN_1073db20c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm();
  func_0x000107783c44();
  *param_1 = uVar1;
  return;
}



/* Entry: 1073db244; end: 1073db2db;  */

void FUN_1073db244(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1073db2dc(&uStack_50,param_3);
  uVar1 = 0x458;
  __Znwm();
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_107480cf0();
  FUN_1073db32c(&uStack_40);
  *param_1 = uVar1;
  FUN_1073db32c(&uStack_50);
  return;
}



/* Entry: 1073db2dc; end: 1073db323;  */

void FUN_1073db2dc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073db32c(&uStack_20);
  return;
}



/* Entry: 1073db324; end: 1073db32b;  */

void FUN_1073db324(void)

{
  return;
}



/* Entry: 1073db32c; end: 1073db357;  */

long FUN_1073db32c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073db358; end: 1073db36b;  */

undefined ** FUN_1073db358(void)

{
  return &PTR_DAT_1109d73c0;
}



/* Entry: 1073db36c; end: 1073db4c7;  */

void FUN_1073db36c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long alStack_b0 [2];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long lStack_38;
  
  plVar5 = alStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010785f1f4();
  auStack_88[0] = 1;
  lVar4 = param_2 + 0x4a0;
  func_0x00010724e2c8(lVar4,auStack_88);
  if ((int)lVar4 == 0) {
    auStack_88[0] = 0;
    param_2 = param_2 + 0x7a0;
    func_0x00010724e2c8(param_2,auStack_88);
    if ((int)param_2 == 0) {
      func_0x0001073db608();
      func_0x0001073db628();
      func_0x0001073db614();
      func_0x0001073db5fc();
      puVar6 = auStack_a0;
      func_0x0001078b142c(param_3);
    }
    else {
      func_0x0001073db608();
      func_0x0001073db628();
      func_0x0001073db614();
      func_0x0001073db5fc();
      puVar6 = auStack_a0;
      FUN_1073ad1a0(param_3);
    }
  }
  else {
    func_0x0001073db608();
    func_0x0001073db628();
    func_0x0001073db614();
    func_0x0001073db5fc();
    puVar6 = auStack_a0;
    func_0x00010789365c(param_3);
  }
  func_0x0001073db638();
  func_0x0001073ad780(auStack_a0);
  *param_1 = param_3;
  func_0x0001073ad780();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar6 == 0) {
    __Unwind_Resume(plVar5);
  }
  else {
    func_0x0001073db638();
    func_0x0001073ad780(auStack_a0);
    __ZdlPv(param_3);
  }
  func_0x000104bd46a0();
  pcStack_b8 = FUN_1073db4c8;
  if (param_4 != 0) {
    plVar1 = (long *)(param_4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_c0 = &stack0xfffffffffffffff0;
  *plVar5 = (long)puVar6;
  plVar5[1] = param_4;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x0001073ad780(&uStack_d0);
  return;
}



/* Entry: 1073db4c8; end: 1073db507;  */

void FUN_1073db4c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0001073ad780(&uStack_20);
  return;
}



/* Entry: 1073db508; end: 1073db50f;  */

void FUN_1073db508(void)

{
  return;
}



/* Entry: 1073db510; end: 1073db5fb;  */

undefined8 * FUN_1073db510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001073db558(param_1 + 3,param_2 + 3);
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 1073db5fc; end: 1073db64f;  */

undefined1 * FUN_1073db5fc(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  uStack0000000000000030 = unaff_x20[1];
  uStack0000000000000028 = *unaff_x20;
  uStack0000000000000038 = unaff_x20[2];
  func_0x0001073db558(&stack0x00000040,unaff_x20 + 3);
  return (undefined1 *)&stack0x00000028;
}



/* Entry: 1073db650; end: 1073db6ef;  */

void FUN_1073db650(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_68 [7];
  char cStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  FUN_1073e25c0(auStack_68);
  iVar2 = (int)param_4;
  if (cStack_30 == '\x01') {
    uVar1 = 0x48;
    __Znwm();
    puVar3 = auStack_68;
    iVar2 = param_3;
    func_0x000107787138();
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  func_0x00010724b3d8(auStack_68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = 0x570;
  __Znwm();
  uStack_b8 = puVar3[1];
  uStack_c0 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_1073e7e9c();
  func_0x000107331000(&uStack_c0);
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1073db6f0; end: 1073db78f;  */

void FUN_1073db6f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x570;
  __Znwm();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_1073e7e9c();
  func_0x000107331000(&uStack_50);
  *param_1 = uVar1;
  return;
}



/* Entry: 1073db790; end: 1073db817;  */

void FUN_1073db790(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1073db818(&uStack_40,param_3);
  uVar1 = 0xf50;
  __Znwm();
  uStack_28 = uStack_38;
  uStack_30 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1074846c4();
  FUN_1073db868(&uStack_30);
  *param_1 = uVar1;
  FUN_1073db868(&uStack_40);
  return;
}



/* Entry: 1073db818; end: 1073db85f;  */

void FUN_1073db818(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073db868(&uStack_20);
  return;
}



/* Entry: 1073db860; end: 1073db867;  */

void FUN_1073db860(void)

{
  return;
}



/* Entry: 1073db868; end: 1073db893;  */

long FUN_1073db868(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073db894; end: 1073db89f;  */

undefined ** FUN_1073db894(void)

{
  return &PTR_DAT_1109d8050;
}



/* Entry: 1073db8a0; end: 1073db927;  */

void FUN_1073db8a0(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long **pplVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 *unaff_x19;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 unaff_w27;
  long **pplVar14;
  long **pplVar15;
  undefined8 uVar16;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined1 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 *puStack_1230;
  undefined8 *puStack_1228;
  undefined8 *puStack_1220;
  long **pplStack_1218;
  long **pplStack_1210;
  long **pplStack_1208;
  long *plStack_1200;
  long **pplStack_11f8;
  long **pplStack_11f0;
  long *plStack_11e8;
  long *plStack_11e0;
  long *plStack_11d8;
  undefined8 uStack_11d0;
  undefined8 *puStack_11c8;
  long alStack_11c0 [2];
  long *plStack_11b0;
  undefined8 uStack_11a8;
  long **pplStack_1198;
  long *plStack_1190;
  long lStack_1188;
  long *plStack_1180;
  long lStack_1178;
  long **pplStack_1170;
  long *plStack_1168;
  long lStack_1160;
  undefined1 auStack_1158 [24];
  long *plStack_1140;
  long lStack_1138;
  long lStack_1130;
  ulong uStack_1120;
  undefined8 uStack_1118;
  undefined1 auStack_1070 [496];
  long *plStack_e80;
  long lStack_e78;
  undefined1 auStack_e48 [40];
  undefined1 auStack_e20 [16];
  long alStack_e10 [10];
  undefined1 auStack_dc0 [96];
  undefined1 auStack_d60 [400];
  long **pplStack_bd0;
  long *plStack_bc8;
  long lStack_bc0;
  undefined1 auStack_b10 [96];
  undefined1 auStack_ab0 [400];
  long alStack_920 [30];
  long *plStack_830;
  long *plStack_790;
  long lStack_788;
  long *aplStack_600 [7];
  undefined1 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 *puStack_520;
  long lStack_518;
  undefined8 uStack_508;
  int iStack_428;
  long *aplStack_410 [8];
  undefined8 *puStack_3d0;
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [320];
  undefined8 uStack_100;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [56];
  char cStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e1598();
  uStack_28 = extraout_x8;
  FUN_1073e25c0(auStack_68);
  uVar1 = cStack_30 == '\x01';
  if ((bool)uVar1) {
    uVar2 = 0x48;
    __Znwm();
    func_0x00010778d47c();
    param_3 = param_2;
  }
  else {
    uVar2 = 0;
  }
  *unaff_x19 = uVar2;
  func_0x00010724b3d8(auStack_68);
  func_0x0001073e1584(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_78 = FUN_1073db928;
  puStack_80 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_1220 = extraout_x8_00;
  func_0x0001073e15cc();
  pplVar9 = (long **)((undefined8 *)*param_4)[1];
  plStack_1200 = param_4;
  uStack_100 = extraout_x8_01;
  FUN_1073dcc08(alStack_11c0,*(undefined8 *)*param_4);
  puVar12 = (undefined8 *)*param_3;
  if (*(int *)(*(long *)(alStack_11c0[0] + 8) + 0x240) == 0) {
    puVar3 = (undefined8 *)0x3d8;
    __Znwm();
    func_0x0001073e2180();
    *puVar3 = &PTR_FUN_1109ac1f8;
    plStack_11d8 = puVar3 + 2;
    *plStack_11d8 = 0;
    puStack_11c8 = puVar3 + 1;
    *puStack_11c8 = plStack_11d8;
    puVar3[3] = 0;
    func_0x000104c2f64c(puVar3 + 4);
    puVar3 = unaff_x19 + 0xb;
    *puVar3 = 0;
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    pplVar15 = (long **)(unaff_x19 + 0xe);
    unaff_x19[0xf] = uStack_11a8;
    *pplVar15 = plStack_11b0;
    func_0x0001073e1cc4();
    uVar16 = puVar12[1];
    uVar2 = *puVar12;
    puVar12 = unaff_x19 + 0x1c;
    *puVar12 = &UNK_10e52b660;
    unaff_x19[0x18] = uVar16;
    unaff_x19[0x17] = uVar2;
    pplStack_1210 = (long **)(unaff_x19 + 0x19);
    *pplStack_1210 = (long *)0x0;
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    unaff_x19[0x1d] = 0;
    unaff_x19[0x1e] = 0;
    unaff_x19[0x1f] = 0;
    unaff_x19[0x20] = &UNK_10e52b660;
    unaff_x19[0x21] = 0;
    unaff_x19[0x22] = 0;
    unaff_x19[0x23] = 0;
    unaff_x19[0x24] = &UNK_10e52b660;
    unaff_x19[0x26] = 0;
    unaff_x19[0x27] = 0;
    unaff_x19[0x25] = 0;
    FUN_1073dd37c(unaff_x19 + 0x28);
    unaff_x19[0x5d] = param_3[9];
    unaff_x19[0x5e] = param_3[5];
    unaff_x19[0x5f] = param_3[7];
    plStack_11e0 = unaff_x19 + 0x60;
    FUN_1073dd510(plStack_11e0,param_3[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e1710();
    func_0x000104c2f64c(unaff_x19 + 0x70);
    func_0x0001073e1818();
    func_0x0001073e17dc();
    pplStack_1208 = pplVar15;
    FUN_10743cc34(aplStack_600,aplStack_410,1);
    func_0x0001073e194c();
    func_0x000107288cd8(aplStack_600);
    func_0x0001073e1ba0();
    func_0x0001073e18b8(auStack_240);
    func_0x0001073e1a58();
    func_0x0001073e1b60();
    func_0x0001073e1908();
    func_0x0001073e1848();
    puStack_3d0 = puVar12;
    func_0x0001073e1b80();
    FUN_1073ddf24(unaff_x19 + 0x28,aplStack_600);
    func_0x0001073de240(aplStack_600);
    func_0x0001073e18ac();
    func_0x0001073e1f4c();
    func_0x0001073e1b98(unaff_x19 + 0x70);
    func_0x0001073e187c();
    func_0x0001073e18ac();
    func_0x0001073e1f38();
    func_0x0001073e1b98(unaff_x19 + 4);
    func_0x0001073e187c();
    pplVar6 = (long **)&DAT_10f4283bf;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar3);
    plVar13 = (long *)*plStack_1200;
    plVar4 = (long *)plStack_1200[1];
    puStack_1230 = puVar12;
    puStack_1228 = puVar3;
    func_0x0001073e2214();
    for (; pplVar14 = pplStack_1208, plVar13 != plVar4; plVar13 = plVar13 + 2) {
      lVar10 = *plVar13;
      func_0x0001073e1e14(aplStack_410);
      func_0x0001073e1e14(unaff_x19 + 0x28);
      pplVar6 = aplStack_410;
      FUN_1073b7fe4(aplStack_600,lVar10 + 0x138);
      func_0x0001073bc804(aplStack_410);
      if (*(int *)(lVar10 + 0x200) == 0) {
        uVar8 = 0;
        func_0x000104c2d614();
        if ((uVar8 & 1) == 0) {
          *(char *)(unaff_x19 + 0x77) = (char)pplVar15;
          func_0x0001073e21fc();
          func_0x0001073e1b48();
          func_0x0001073e21fc();
          pplVar6 = aplStack_600;
          func_0x0001073e1b48();
        }
      }
      else {
        *(char *)(unaff_x19 + 0x77) = (char)pplVar15;
      }
      func_0x0001073e1de8();
      func_0x0001073bc804(aplStack_600);
    }
    pplStack_11f0 = (long **)param_3[8];
    plVar5 = *pplStack_1208;
    (**(code **)(*plVar5 + 0x10))();
    pplStack_11f8 = &plStack_1168;
    pplStack_1218 = &plStack_1190;
    plVar4 = plStack_11d8;
    plStack_11e8 = plVar5;
    for (plVar13 = (long *)0x0; uVar1 = plVar13 == plStack_11e8, !(bool)uVar1;
        plVar13 = (long *)((long)plVar13 + 1)) {
      (**(code **)(**pplVar14 + 0x18))(&plStack_1140,*pplVar14,plVar13);
      (**(code **)(*plStack_1140 + 0x30))();
      func_0x00010726236c(auStack_280);
      func_0x0001073e1684(aplStack_600,auStack_280);
      pplVar6 = pplStack_11f0;
      func_0x000107869b38(aplStack_410,pplStack_11f0,aplStack_600);
      func_0x00010786967c();
      func_0x0001073e203c();
      func_0x0001073e1ba8();
      func_0x0001073e187c();
      pplVar15 = (long **)(ulong)*(uint *)(unaff_x19 + 0x6f);
      plVar5 = (long *)0x0;
      func_0x0001073e1f44();
      func_0x0001073e2194();
      pplStack_bd0 = pplVar15;
      plStack_bc8 = plVar5;
      if (extraout_x8_04 != 0) {
        do {
          func_0x0001073e160c();
        } while (extraout_w10_02 != 0);
      }
      plVar5 = alStack_920;
      func_0x0001073e18b8();
      func_0x0001073e1674();
      func_0x0001073e19ec();
      func_0x0001073e1b70();
      func_0x0001073e1d04();
      func_0x0001073e1f74();
      func_0x0001073e19f8();
      func_0x0001073e1a00();
      func_0x0001073e1cf4();
      func_0x0001073e1a80();
      func_0x0001073e18ac();
      aplStack_600[0]._0_1_ = 0;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      func_0x0001073e1cd4();
      plVar7 = plVar5;
      func_0x0001073e1b90();
      if (((ulong)plVar5 & 1) != 0) {
        func_0x0001073e18ac();
        func_0x0001073e1fcc();
        func_0x0001073e214c(pplStack_11f8);
        if ((bool)uVar1) {
          lVar11 = plStack_1200[1];
          for (lVar10 = *plStack_1200; lVar10 != lVar11; lVar10 = lVar10 + 0x10) {
            func_0x0001073e1fc0();
            if (plVar4 != plVar7) {
              func_0x0001073e1f2c(plVar7[0xb]);
              if (iStack_428 != 0) {
                uVar8 = (ulong)*(uint *)(unaff_x19 + 0x6f);
                uVar2 = 0;
                func_0x0001077512dc(alStack_920);
                func_0x0001073e2194();
                uStack_1120 = uVar8;
                uStack_1118 = uVar2;
                if (extraout_x8_05 != 0) {
                  do {
                    func_0x0001073e160c();
                  } while (extraout_w10_03 != 0);
                }
                func_0x0001073e18b8(&plStack_e80);
                func_0x000104c2fe00(auStack_e48,unaff_x19 + 0x70);
                func_0x0001073e1ff0();
                func_0x0001073e1d58();
                plStack_830 = plStack_11e0;
                func_0x0001073e1eb8(uStack_11d0);
                func_0x0001073e2028();
                func_0x0001073e1ce4();
                func_0x0001073e1c6c();
                func_0x0001073e1c3c();
                func_0x0001073e2034();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x6f) + -1.0);
                func_0x0001073e197c(auStack_ab0);
                FUN_1073dcfc4(auStack_b10);
                func_0x0001073e1ae0();
                func_0x0001073e1c08();
                func_0x0001073e1c10();
                func_0x0001073e1c18(*(undefined4 *)(unaff_x19 + 0x6f));
                func_0x0001073e197c(auStack_d60);
                FUN_1073dcfc4(auStack_dc0);
                func_0x0001073e1ac4();
                func_0x0001073e1be0();
                func_0x0001073e1c00();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x6f) + 1.0);
                uVar8 = 0;
                func_0x0001073e197c();
                FUN_1073dcfc4(auStack_1070);
                func_0x0001073e1ab0();
                func_0x0001073e1bd0();
                func_0x0001073e1bd8();
                func_0x0001073e1f88();
                func_0x0001073e1af4(alStack_920);
                if ((uVar8 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(alStack_920);
                }
                func_0x0001073e1af4(&pplStack_bd0);
                if ((uVar8 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(&pplStack_bd0);
                }
                uVar8 = 0;
                func_0x000104c2d614();
                if ((uVar8 & 1) == 0) {
                  func_0x0001073e1df8();
                  FUN_1073dcf54();
                }
                func_0x0001073e1c2c();
                func_0x0001073e1a9c();
                plVar7 = plVar4 + 0xe;
                func_0x000104c2fe00(plVar7,auStack_e20);
                func_0x0001073e1bb8();
                func_0x0001073e1c24();
                func_0x0001073e1c74();
                func_0x0001073e1cec();
                func_0x0001073e1d68();
                func_0x0001073e2020();
                plVar4 = plStack_11d8;
              }
              func_0x0001073e1b68();
            }
          }
        }
        func_0x0001073e1f60(aplStack_600);
        lStack_1178 = lStack_1138;
        plStack_1180 = plStack_1140;
        plStack_1140 = (long *)0x0;
        lStack_1138 = 0;
        func_0x0001073e18ac();
        pplVar14 = pplStack_1208;
        pplStack_1198 = pplStack_1170;
        plStack_1190 = plStack_1168;
        lStack_1188 = lStack_1160;
        if (lStack_1160 == 0) {
          pplStack_1198 = pplStack_1218;
        }
        else {
          plStack_1168[2] = (long)pplStack_1218;
          pplStack_1170 = pplStack_11f8;
          *pplStack_11f8 = (long *)0x0;
          pplStack_11f8[1] = (long *)0x0;
        }
        pplVar6 = &plStack_790;
        pplVar9 = &plStack_1180;
        plStack_790 = plVar13;
        func_0x0001073df908(pplStack_1210,pplVar6,pplVar9,aplStack_600,extraout_x8_06 + 0xc0,
                            &pplStack_1198);
        func_0x0001073e1e58();
        func_0x0001073e1e2c();
        func_0x000107283194(aplStack_600);
        func_0x0001073e1bc8();
      }
      func_0x0001073e1f80();
      func_0x0001073e1e24();
      func_0x0001073e1dc8();
      func_0x0001073e1e1c();
    }
  }
  else {
    puVar3 = (undefined8 *)0x3d8;
    __Znwm();
    func_0x0001073e2180();
    *puVar3 = &PTR_DAT_1109ac470;
    plVar5 = puVar3 + 2;
    *plVar5 = 0;
    puStack_11c8 = puVar3 + 1;
    *puStack_11c8 = plVar5;
    puVar3[3] = 0;
    func_0x000104c2f64c(puVar3 + 4);
    puStack_1230 = unaff_x19 + 0xb;
    *puStack_1230 = 0;
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    plStack_11e0 = unaff_x19 + 0xe;
    unaff_x19[0xf] = uStack_11a8;
    *plStack_11e0 = (long)plStack_11b0;
    func_0x0001073e1cc4();
    uVar16 = puVar12[1];
    uVar2 = *puVar12;
    unaff_x19[0x1c] = &UNK_10e52b660;
    unaff_x19[0x18] = uVar16;
    unaff_x19[0x17] = uVar2;
    pplStack_1208 = (long **)(unaff_x19 + 0x19);
    *pplStack_1208 = (long *)0x0;
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    unaff_x19[0x1d] = 0;
    unaff_x19[0x1e] = 0;
    unaff_x19[0x1f] = 0;
    unaff_x19[0x20] = &UNK_10e52b660;
    unaff_x19[0x21] = 0;
    unaff_x19[0x22] = 0;
    unaff_x19[0x23] = 0;
    unaff_x19[0x24] = &UNK_10e52b660;
    unaff_x19[0x26] = 0;
    unaff_x19[0x27] = 0;
    unaff_x19[0x25] = 0;
    FUN_1073dd37c(unaff_x19 + 0x28);
    unaff_x19[0x5d] = param_3[9];
    unaff_x19[0x5e] = param_3[5];
    unaff_x19[0x5f] = param_3[7];
    plStack_11d8 = unaff_x19 + 0x60;
    puStack_1228 = unaff_x19 + 0x1c;
    FUN_1073dd510(plStack_11d8,param_3[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e1710();
    func_0x000104c2f64c(unaff_x19 + 0x70);
    func_0x0001073e1818();
    func_0x0001073e17dc();
    FUN_10743cc34(aplStack_600,aplStack_410,1);
    func_0x0001073e194c();
    func_0x000107288cd8(aplStack_600);
    func_0x0001073e1ba0();
    func_0x0001073e18b8(auStack_240);
    func_0x0001073e1a58();
    func_0x0001073e1b60();
    func_0x0001073e1908();
    func_0x0001073e1848();
    puVar12 = puStack_1228;
    puStack_3d0 = puStack_1228;
    func_0x0001073e1b80();
    FUN_1073ddf24(puVar12 + 0xc,aplStack_600);
    func_0x0001073de240(aplStack_600);
    func_0x0001073e18ac();
    func_0x0001073e1f4c();
    func_0x0001073e1b98(unaff_x19 + 0x70);
    func_0x0001073e187c();
    func_0x0001073e18ac();
    func_0x0001073e1f38();
    func_0x0001073e1b98(unaff_x19 + 4);
    func_0x0001073e187c();
    pplVar6 = (long **)&DAT_10f4283bf;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puStack_1230);
    plVar13 = (long *)*plStack_1200;
    plVar4 = (long *)plStack_1200[1];
    func_0x0001073e2214();
    for (; plVar13 != plVar4; plVar13 = plVar13 + 2) {
      lVar10 = *plVar13;
      func_0x0001073e1e14(aplStack_410);
      func_0x0001073e1e14(&UNK_10e52b6c0);
      pplVar6 = aplStack_410;
      FUN_1073b7fe4(aplStack_600,lVar10 + 0x138);
      uVar8 = 0;
      func_0x0001073bc804();
      if (*(int *)(lVar10 + 0x200) == 0) {
        func_0x0001073e1af4(aplStack_600);
        if ((uVar8 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x77) = unaff_w27;
          func_0x0001073e21fc();
          func_0x0001073e1b48();
          func_0x0001073e21fc();
          pplVar6 = aplStack_600;
          func_0x0001073e1b48();
        }
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x77) = unaff_w27;
      }
      func_0x0001073e1de8();
      func_0x0001073bc804(aplStack_600);
    }
    pplVar14 = (long **)param_3[8];
    plVar4 = (long *)*plStack_11e0;
    (**(code **)(*plVar4 + 0x10))();
    pplStack_11f0 = &plStack_1168;
    pplStack_11f8 = &plStack_1190;
    pplStack_1218 = &plStack_bc8;
    pplStack_1210 = pplVar14;
    plStack_11e8 = plVar4;
    for (plVar13 = (long *)0x0; uVar1 = plVar13 == plStack_11e8, !(bool)uVar1;
        plVar13 = (long *)((long)plVar13 + 1)) {
      (**(code **)(*(long *)*plStack_11e0 + 0x18))(&plStack_1140,(long *)*plStack_11e0,plVar13);
      (**(code **)(*plStack_1140 + 0x30))();
      func_0x00010726236c(auStack_280);
      func_0x0001073e1684(aplStack_600,auStack_280);
      pplVar6 = pplVar14;
      func_0x000107869b38(aplStack_410,pplVar14,aplStack_600);
      func_0x00010786967c();
      func_0x0001073e203c();
      func_0x0001073e1ba8();
      func_0x0001073e187c();
      pplVar15 = (long **)(ulong)*(uint *)(unaff_x19 + 0x6f);
      plVar4 = (long *)0x0;
      func_0x0001073e1f44();
      func_0x0001073e2194();
      pplStack_bd0 = pplVar15;
      plStack_bc8 = plVar4;
      if (extraout_x8_02 != 0) {
        do {
          func_0x0001073e160c();
        } while (extraout_w10 != 0);
      }
      plVar4 = alStack_920;
      func_0x0001073e18b8();
      func_0x0001073e1674();
      func_0x0001073e19ec();
      func_0x0001073e1b70();
      func_0x0001073e1d04();
      func_0x0001073e1f74();
      func_0x0001073e19f8();
      func_0x0001073e1a00();
      func_0x0001073e1cf4();
      func_0x0001073e1a80();
      func_0x0001073e18ac();
      aplStack_600[0]._0_1_ = 0;
      uStack_5c8 = 0;
      uStack_5c0 = 0;
      func_0x0001073e1cd4();
      plVar7 = plVar4;
      func_0x0001073e1b90();
      if (((ulong)plVar4 & 1) != 0) {
        func_0x0001073e18ac();
        func_0x0001073e1fcc();
        func_0x0001073e214c(pplStack_11f0);
        if ((bool)uVar1) {
          lVar11 = plStack_1200[1];
          for (lVar10 = *plStack_1200; lVar10 != lVar11; lVar10 = lVar10 + 0x10) {
            func_0x0001073e1fc0();
            if (plVar5 != plVar7) {
              func_0x0001073e1f2c(plVar7[0xb]);
              if (iStack_428 != 0) {
                uVar8 = (ulong)*(uint *)(unaff_x19 + 0x6f);
                uVar2 = 0;
                func_0x0001077512dc(alStack_920);
                func_0x0001073e2194();
                uStack_1120 = uVar8;
                uStack_1118 = uVar2;
                if (extraout_x8_03 != 0) {
                  do {
                    func_0x0001073e160c();
                  } while (extraout_w10_00 != 0);
                }
                func_0x0001073e18b8(&plStack_e80);
                func_0x000104c2fe00(auStack_e48,unaff_x19 + 0x70);
                func_0x0001073e1ff0();
                func_0x0001073e1d58();
                plStack_830 = plStack_11d8;
                func_0x0001073e1eb8(uStack_11d0);
                func_0x0001073e2028();
                func_0x0001073e1ce4();
                func_0x0001073e1c6c();
                func_0x0001073e1c3c();
                func_0x0001073e2034();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x6f) + -1.0);
                func_0x0001073e197c(auStack_ab0);
                FUN_1073dcfc4(auStack_b10);
                func_0x0001073e1ae0();
                func_0x0001073e1c08();
                func_0x0001073e1c10();
                func_0x0001073e1c18(*(undefined4 *)(unaff_x19 + 0x6f));
                func_0x0001073e197c(auStack_d60);
                FUN_1073dcfc4(auStack_dc0);
                func_0x0001073e1ac4();
                func_0x0001073e1be0();
                func_0x0001073e1c00();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x6f) + 1.0);
                uVar8 = 0;
                func_0x0001073e197c();
                FUN_1073dcfc4(auStack_1070);
                func_0x0001073e1ab0();
                func_0x0001073e1bd0();
                func_0x0001073e1bd8();
                func_0x0001073e1f88();
                func_0x0001073e1af4(alStack_920);
                if ((uVar8 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(alStack_920);
                }
                func_0x0001073e1af4(&pplStack_bd0);
                if ((uVar8 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(&pplStack_bd0);
                }
                uVar8 = 0;
                func_0x000104c2d614();
                if ((uVar8 & 1) == 0) {
                  func_0x0001073e1df8();
                  FUN_1073dcf54();
                }
                func_0x0001073e1c2c();
                func_0x0001073e1a9c();
                plVar7 = alStack_e10;
                func_0x000104c2fe00(plVar7,auStack_e20);
                func_0x0001073e1bb8();
                func_0x0001073e1c24();
                func_0x0001073e1c74();
                func_0x0001073e1cec();
                func_0x0001073e1d68();
                func_0x0001073e2020();
              }
              func_0x0001073e1b68();
            }
          }
        }
        func_0x0001073e1f60(&uStack_1120);
        lStack_1178 = lStack_1138;
        plStack_1180 = plStack_1140;
        plStack_1140 = (long *)0x0;
        lStack_1138 = 0;
        lVar10 = *(long *)(lStack_1130 + 8);
        pplStack_1198 = pplStack_1170;
        plStack_1190 = plStack_1168;
        lStack_1188 = lStack_1160;
        if (lStack_1160 == 0) {
          pplStack_1198 = pplStack_11f8;
        }
        else {
          plStack_1168[2] = (long)pplStack_11f8;
          pplStack_1170 = pplStack_11f0;
          *pplStack_11f0 = (long *)0x0;
          pplStack_11f0[1] = (long *)0x0;
        }
        lVar11 = param_3[6];
        func_0x0001073e1f44(*(undefined4 *)(unaff_x19 + 0x6f));
        pplVar14 = pplStack_1210;
        lStack_e78 = lStack_1178;
        plStack_e80 = plStack_1180;
        if (lStack_1178 != 0) {
          do {
            func_0x0001073e160c();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001073e18b8(alStack_920);
        func_0x0001073e1674();
        func_0x0001073e19ec();
        func_0x000107751444(aplStack_600,&plStack_e80,&plStack_790);
        uStack_508 = uStack_11d0;
        puStack_520 = auStack_1158;
        uVar2 = 0;
        lStack_518 = lVar11;
        FUN_1073e0de0(0,unaff_x19 + 0x29,aplStack_600);
        func_0x0001073e19f8();
        func_0x0001073e1a00();
        func_0x000107267e44(&plStack_e80);
        func_0x0001073e1a80();
        lStack_788 = lStack_1178;
        plStack_790 = plStack_1180;
        plStack_1180 = (long *)0x0;
        lStack_1178 = 0;
        pplStack_bd0 = pplStack_1198;
        plStack_bc8 = plStack_1190;
        lStack_bc0 = lStack_1188;
        if (lStack_1188 == 0) {
          pplStack_bd0 = pplStack_1218;
        }
        else {
          plStack_1190[2] = (long)pplStack_1218;
          pplStack_1198 = pplStack_11f8;
          *pplStack_11f8 = (long *)0x0;
          pplStack_11f8[1] = (long *)0x0;
        }
        FUN_1073dfae4(uVar2,aplStack_600,plVar13,&plStack_790,&uStack_1120,lVar10 + 0xc0,
                      &pplStack_bd0);
        FUN_1073dff1c(&pplStack_bd0);
        FUN_107330fdc(&plStack_790);
        pplVar6 = (long **)unaff_x19[0x19];
        FUN_1073e0fc0(pplVar6,unaff_x19[0x1a],aplStack_600);
        pplVar9 = aplStack_600;
        FUN_1073e0e10(pplStack_1208);
        func_0x0001073dfdc0(aplStack_600);
        func_0x0001073e1e58();
        func_0x0001073e1e2c();
        func_0x000107283194(&uStack_1120);
        func_0x0001073e1bc8();
      }
      func_0x0001073e1f80();
      func_0x0001073e1e24();
      func_0x0001073e1dc8();
      func_0x0001073e1e1c();
    }
  }
  uVar1 = 1;
  func_0x0001073e1928();
  func_0x0001073e1f94();
  func_0x000107331000(&plStack_11b0);
  *puStack_1220 = unaff_x19;
  plVar13 = alStack_11c0;
  FUN_1073dcd10();
  func_0x0001073e1584(uStack_100);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar3 = puStack_1228;
    puVar12 = puStack_1230;
    if ((int)pplVar6 == 0) {
      func_0x0001073e1778();
      func_0x0001073e1c74();
      func_0x0001073e1cec();
      func_0x0001073e1d68();
      func_0x000107267da8(&plStack_790);
      func_0x0001073e1b68();
      func_0x0001073e1bc8();
      func_0x000107267da8(aplStack_410);
      func_0x0001073e1e24();
      func_0x0001073e1dc8();
      func_0x0001073e1e1c();
      func_0x0001073e1928();
      func_0x0001073e1f94();
      func_0x0001073dff80(unaff_x19 + 0x78);
      func_0x0001073e1be8();
      func_0x0001073e1cb4();
      FUN_1073e0028(plStack_11d8);
      puVar12 = puStack_1228;
      func_0x0001073de240(puStack_1228 + 0xc);
      func_0x000107266af0(puVar12);
      FUN_1073e00c4(pplStack_1208);
      func_0x0001073e1cbc();
      func_0x000107331000(plStack_11e0);
      puVar3 = puStack_1230;
    }
    else {
      func_0x0001073e1928();
      func_0x0001073e1f94();
      func_0x0001073dff80(unaff_x19 + 0x78);
      func_0x0001073e1be8();
      func_0x0001073e1cb4();
      FUN_1073e0028(plStack_11e0);
      func_0x0001073de240(puVar12 + 0xc);
      func_0x000107266af0(puVar12);
      FUN_1073e00c4(pplStack_1210);
      func_0x0001073e1cbc();
      func_0x000107331000(pplVar14);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    func_0x0001073e1f18();
    func_0x0001073e0164(puStack_11c8);
    func_0x000107331000(&plStack_11b0);
    __ZdlPv();
    func_0x000104bd46a0();
    pcStack_1238 = FUN_1073dcc08;
    ppuStack_1240 = &puStack_80;
    if (pplVar9 != (long **)0x0) {
      do {
        func_0x0001073e160c();
      } while (extraout_w10_04 != 0);
    }
    *plVar13 = (long)pplVar6;
    plVar13[1] = (long)pplVar9;
    uStack_1250 = 0;
    uStack_1248 = 0;
    FUN_1073dcd10(&uStack_1250);
    return;
  }
  return;
}



/* Entry: 1073db928; end: 1073dcc07;  */

void FUN_1073db928(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long **pplVar8;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 unaff_w27;
  long **pplVar13;
  long **pplVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined1 *puStack_11d0;
  code *pcStack_11c8;
  undefined8 *puStack_11c0;
  undefined8 *puStack_11b8;
  long *plStack_11b0;
  long **pplStack_11a8;
  long **pplStack_11a0;
  long **pplStack_1198;
  long *plStack_1190;
  long **pplStack_1188;
  long **pplStack_1180;
  long *plStack_1178;
  long *plStack_1170;
  long *plStack_1168;
  undefined8 uStack_1160;
  undefined8 *puStack_1158;
  long alStack_1150 [2];
  long *plStack_1140;
  undefined8 uStack_1138;
  long **pplStack_1128;
  long *plStack_1120;
  long lStack_1118;
  long *plStack_1110;
  long lStack_1108;
  long **pplStack_1100;
  long *plStack_10f8;
  long lStack_10f0;
  undefined1 auStack_10e8 [24];
  long *plStack_10d0;
  long lStack_10c8;
  long lStack_10c0;
  ulong uStack_10b0;
  undefined8 uStack_10a8;
  undefined1 auStack_1000 [496];
  long *plStack_e10;
  long lStack_e08;
  undefined1 auStack_dd8 [40];
  undefined1 auStack_db0 [16];
  long alStack_da0 [10];
  undefined1 auStack_d50 [96];
  undefined1 auStack_cf0 [400];
  long **pplStack_b60;
  long *plStack_b58;
  long lStack_b50;
  undefined1 auStack_aa0 [96];
  undefined1 auStack_a40 [400];
  long alStack_8b0 [30];
  long *plStack_7c0;
  long *plStack_720;
  long lStack_718;
  long *aplStack_590 [7];
  undefined1 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_4b0;
  long lStack_4a8;
  undefined8 uStack_498;
  int iStack_3b8;
  long *aplStack_3a0 [8];
  undefined8 *puStack_360;
  undefined1 auStack_210 [64];
  undefined1 auStack_1d0 [320];
  undefined8 uStack_90;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plStack_11b0 = extraout_x8;
  func_0x0001073e15cc();
  pplVar8 = (long **)((undefined8 *)*param_4)[1];
  plStack_1190 = param_4;
  uStack_90 = extraout_x8_00;
  FUN_1073dcc08(alStack_1150,*(undefined8 *)*param_4);
  puVar11 = (undefined8 *)*param_2;
  if (*(int *)(*(long *)(alStack_1150[0] + 8) + 0x240) == 0) {
    puVar2 = (undefined8 *)0x3d8;
    __Znwm();
    func_0x0001073e2180();
    *puVar2 = &PTR_FUN_1109ac1f8;
    plStack_1168 = puVar2 + 2;
    *plStack_1168 = 0;
    puStack_1158 = puVar2 + 1;
    *puStack_1158 = plStack_1168;
    puVar2[3] = 0;
    func_0x000104c2f64c(puVar2 + 4);
    puVar2 = (undefined8 *)(unaff_x19 + 0x58);
    *puVar2 = 0;
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    pplVar14 = (long **)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x78) = uStack_1138;
    *pplVar14 = plStack_1140;
    func_0x0001073e1cc4();
    uVar15 = puVar11[1];
    uVar16 = *puVar11;
    puVar11 = (undefined8 *)(unaff_x19 + 0xe0);
    *puVar11 = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar15;
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar16;
    pplStack_11a0 = (long **)(unaff_x19 + 200);
    *pplStack_11a0 = (long *)0x0;
    *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    *(undefined8 *)(unaff_x19 + 0xd8) = 0;
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    *(undefined **)(unaff_x19 + 0x100) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x108) = 0;
    *(undefined8 *)(unaff_x19 + 0x110) = 0;
    *(undefined8 *)(unaff_x19 + 0x118) = 0;
    *(undefined **)(unaff_x19 + 0x120) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x130) = 0;
    *(undefined8 *)(unaff_x19 + 0x138) = 0;
    *(undefined8 *)(unaff_x19 + 0x128) = 0;
    FUN_1073dd37c(unaff_x19 + 0x140);
    *(long *)(unaff_x19 + 0x2e8) = param_2[9];
    *(long *)(unaff_x19 + 0x2f0) = param_2[5];
    *(long *)(unaff_x19 + 0x2f8) = param_2[7];
    plStack_1170 = (long *)(unaff_x19 + 0x300);
    FUN_1073dd510(plStack_1170,param_2[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e1710();
    func_0x000104c2f64c(unaff_x19 + 0x380);
    func_0x0001073e1818();
    func_0x0001073e17dc();
    pplStack_1198 = pplVar14;
    FUN_10743cc34(aplStack_590,aplStack_3a0,1);
    func_0x0001073e194c();
    func_0x000107288cd8(aplStack_590);
    func_0x0001073e1ba0();
    func_0x0001073e18b8(auStack_1d0);
    func_0x0001073e1a58();
    func_0x0001073e1b60();
    func_0x0001073e1908();
    func_0x0001073e1848();
    puStack_360 = puVar11;
    func_0x0001073e1b80();
    FUN_1073ddf24(unaff_x19 + 0x140,aplStack_590);
    func_0x0001073de240(aplStack_590);
    func_0x0001073e18ac();
    func_0x0001073e1f4c();
    func_0x0001073e1b98(unaff_x19 + 0x380);
    func_0x0001073e187c();
    func_0x0001073e18ac();
    func_0x0001073e1f38();
    func_0x0001073e1b98(unaff_x19 + 0x20);
    func_0x0001073e187c();
    pplVar5 = (long **)&DAT_10f4283bf;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar2);
    plVar12 = (long *)*plStack_1190;
    plVar3 = (long *)plStack_1190[1];
    puStack_11c0 = puVar11;
    puStack_11b8 = puVar2;
    func_0x0001073e2214();
    for (; pplVar13 = pplStack_1198, plVar12 != plVar3; plVar12 = plVar12 + 2) {
      lVar9 = *plVar12;
      func_0x0001073e1e14(aplStack_3a0);
      func_0x0001073e1e14(unaff_x19 + 0x140);
      pplVar5 = aplStack_3a0;
      FUN_1073b7fe4(aplStack_590,lVar9 + 0x138);
      func_0x0001073bc804(aplStack_3a0);
      if (*(int *)(lVar9 + 0x200) == 0) {
        uVar7 = 0;
        func_0x000104c2d614();
        if ((uVar7 & 1) == 0) {
          *(char *)(unaff_x19 + 0x3b8) = (char)pplVar14;
          func_0x0001073e21fc();
          func_0x0001073e1b48();
          func_0x0001073e21fc();
          pplVar5 = aplStack_590;
          func_0x0001073e1b48();
        }
      }
      else {
        *(char *)(unaff_x19 + 0x3b8) = (char)pplVar14;
      }
      func_0x0001073e1de8();
      func_0x0001073bc804(aplStack_590);
    }
    pplStack_1180 = (long **)param_2[8];
    plVar4 = *pplStack_1198;
    (**(code **)(*plVar4 + 0x10))();
    pplStack_1188 = &plStack_10f8;
    pplStack_11a8 = &plStack_1120;
    plVar3 = plStack_1168;
    plStack_1178 = plVar4;
    for (plVar12 = (long *)0x0; uVar1 = plVar12 == plStack_1178, !(bool)uVar1;
        plVar12 = (long *)((long)plVar12 + 1)) {
      (**(code **)(**pplVar13 + 0x18))(&plStack_10d0,*pplVar13,plVar12);
      (**(code **)(*plStack_10d0 + 0x30))();
      func_0x00010726236c(auStack_210);
      func_0x0001073e1684(aplStack_590,auStack_210);
      pplVar5 = pplStack_1180;
      func_0x000107869b38(aplStack_3a0,pplStack_1180,aplStack_590);
      func_0x00010786967c();
      func_0x0001073e203c();
      func_0x0001073e1ba8();
      func_0x0001073e187c();
      pplVar14 = (long **)(ulong)*(uint *)(unaff_x19 + 0x378);
      plVar4 = (long *)0x0;
      func_0x0001073e1f44();
      func_0x0001073e2194();
      pplStack_b60 = pplVar14;
      plStack_b58 = plVar4;
      if (extraout_x8_03 != 0) {
        do {
          func_0x0001073e160c();
        } while (extraout_w10_02 != 0);
      }
      plVar4 = alStack_8b0;
      func_0x0001073e18b8();
      func_0x0001073e1674();
      func_0x0001073e19ec();
      func_0x0001073e1b70();
      func_0x0001073e1d04();
      func_0x0001073e1f74();
      func_0x0001073e19f8();
      func_0x0001073e1a00();
      func_0x0001073e1cf4();
      func_0x0001073e1a80();
      func_0x0001073e18ac();
      aplStack_590[0]._0_1_ = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      func_0x0001073e1cd4();
      plVar6 = plVar4;
      func_0x0001073e1b90();
      if (((ulong)plVar4 & 1) != 0) {
        func_0x0001073e18ac();
        func_0x0001073e1fcc();
        func_0x0001073e214c(pplStack_1188);
        if ((bool)uVar1) {
          lVar10 = plStack_1190[1];
          for (lVar9 = *plStack_1190; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
            func_0x0001073e1fc0();
            if (plVar3 != plVar6) {
              func_0x0001073e1f2c(plVar6[0xb]);
              if (iStack_3b8 != 0) {
                uVar7 = (ulong)*(uint *)(unaff_x19 + 0x378);
                uVar16 = 0;
                func_0x0001077512dc(alStack_8b0);
                func_0x0001073e2194();
                uStack_10b0 = uVar7;
                uStack_10a8 = uVar16;
                if (extraout_x8_04 != 0) {
                  do {
                    func_0x0001073e160c();
                  } while (extraout_w10_03 != 0);
                }
                func_0x0001073e18b8(&plStack_e10);
                func_0x000104c2fe00(auStack_dd8,unaff_x19 + 0x380);
                func_0x0001073e1ff0();
                func_0x0001073e1d58();
                plStack_7c0 = plStack_1170;
                func_0x0001073e1eb8(uStack_1160);
                func_0x0001073e2028();
                func_0x0001073e1ce4();
                func_0x0001073e1c6c();
                func_0x0001073e1c3c();
                func_0x0001073e2034();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x378) + -1.0);
                func_0x0001073e197c(auStack_a40);
                FUN_1073dcfc4(auStack_aa0);
                func_0x0001073e1ae0();
                func_0x0001073e1c08();
                func_0x0001073e1c10();
                func_0x0001073e1c18(*(undefined4 *)(unaff_x19 + 0x378));
                func_0x0001073e197c(auStack_cf0);
                FUN_1073dcfc4(auStack_d50);
                func_0x0001073e1ac4();
                func_0x0001073e1be0();
                func_0x0001073e1c00();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x378) + 1.0);
                uVar7 = 0;
                func_0x0001073e197c();
                FUN_1073dcfc4(auStack_1000);
                func_0x0001073e1ab0();
                func_0x0001073e1bd0();
                func_0x0001073e1bd8();
                func_0x0001073e1f88();
                func_0x0001073e1af4(alStack_8b0);
                if ((uVar7 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(alStack_8b0);
                }
                func_0x0001073e1af4(&pplStack_b60);
                if ((uVar7 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(&pplStack_b60);
                }
                uVar7 = 0;
                func_0x000104c2d614();
                if ((uVar7 & 1) == 0) {
                  func_0x0001073e1df8();
                  FUN_1073dcf54();
                }
                func_0x0001073e1c2c();
                func_0x0001073e1a9c();
                plVar6 = plVar3 + 0xe;
                func_0x000104c2fe00(plVar6,auStack_db0);
                func_0x0001073e1bb8();
                func_0x0001073e1c24();
                func_0x0001073e1c74();
                func_0x0001073e1cec();
                func_0x0001073e1d68();
                func_0x0001073e2020();
                plVar3 = plStack_1168;
              }
              func_0x0001073e1b68();
            }
          }
        }
        func_0x0001073e1f60(aplStack_590);
        lStack_1108 = lStack_10c8;
        plStack_1110 = plStack_10d0;
        plStack_10d0 = (long *)0x0;
        lStack_10c8 = 0;
        func_0x0001073e18ac();
        pplVar13 = pplStack_1198;
        pplStack_1128 = pplStack_1100;
        plStack_1120 = plStack_10f8;
        lStack_1118 = lStack_10f0;
        if (lStack_10f0 == 0) {
          pplStack_1128 = pplStack_11a8;
        }
        else {
          plStack_10f8[2] = (long)pplStack_11a8;
          pplStack_1100 = pplStack_1188;
          *pplStack_1188 = (long *)0x0;
          pplStack_1188[1] = (long *)0x0;
        }
        pplVar5 = &plStack_720;
        pplVar8 = &plStack_1110;
        plStack_720 = plVar12;
        func_0x0001073df908(pplStack_11a0,pplVar5,pplVar8,aplStack_590,extraout_x8_05 + 0xc0,
                            &pplStack_1128);
        func_0x0001073e1e58();
        func_0x0001073e1e2c();
        func_0x000107283194(aplStack_590);
        func_0x0001073e1bc8();
      }
      func_0x0001073e1f80();
      func_0x0001073e1e24();
      func_0x0001073e1dc8();
      func_0x0001073e1e1c();
    }
  }
  else {
    puVar2 = (undefined8 *)0x3d8;
    __Znwm();
    func_0x0001073e2180();
    *puVar2 = &PTR_DAT_1109ac470;
    plVar4 = puVar2 + 2;
    *plVar4 = 0;
    puStack_1158 = puVar2 + 1;
    *puStack_1158 = plVar4;
    puVar2[3] = 0;
    func_0x000104c2f64c(puVar2 + 4);
    puStack_11c0 = (undefined8 *)(unaff_x19 + 0x58);
    *puStack_11c0 = 0;
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    plStack_1170 = (long *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x78) = uStack_1138;
    *plStack_1170 = (long)plStack_1140;
    func_0x0001073e1cc4();
    uVar15 = puVar11[1];
    uVar16 = *puVar11;
    *(undefined8 *)(unaff_x19 + 0xe0) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar15;
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar16;
    pplStack_1198 = (long **)(unaff_x19 + 200);
    *pplStack_1198 = (long *)0x0;
    *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    *(undefined8 *)(unaff_x19 + 0xd8) = 0;
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    *(undefined **)(unaff_x19 + 0x100) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x108) = 0;
    *(undefined8 *)(unaff_x19 + 0x110) = 0;
    *(undefined8 *)(unaff_x19 + 0x118) = 0;
    *(undefined **)(unaff_x19 + 0x120) = &UNK_10e52b660;
    *(undefined8 *)(unaff_x19 + 0x130) = 0;
    *(undefined8 *)(unaff_x19 + 0x138) = 0;
    *(undefined8 *)(unaff_x19 + 0x128) = 0;
    FUN_1073dd37c(unaff_x19 + 0x140);
    *(long *)(unaff_x19 + 0x2e8) = param_2[9];
    *(long *)(unaff_x19 + 0x2f0) = param_2[5];
    *(long *)(unaff_x19 + 0x2f8) = param_2[7];
    plStack_1168 = (long *)(unaff_x19 + 0x300);
    puStack_11b8 = (undefined8 *)(unaff_x19 + 0xe0);
    FUN_1073dd510(plStack_1168,param_2[0xb]);
    func_0x00010785f1f4();
    func_0x0001073e1710();
    func_0x000104c2f64c(unaff_x19 + 0x380);
    func_0x0001073e1818();
    func_0x0001073e17dc();
    FUN_10743cc34(aplStack_590,aplStack_3a0,1);
    func_0x0001073e194c();
    func_0x000107288cd8(aplStack_590);
    func_0x0001073e1ba0();
    func_0x0001073e18b8(auStack_1d0);
    func_0x0001073e1a58();
    func_0x0001073e1b60();
    func_0x0001073e1908();
    func_0x0001073e1848();
    puVar11 = puStack_11b8;
    puStack_360 = puStack_11b8;
    func_0x0001073e1b80();
    FUN_1073ddf24(puVar11 + 0xc,aplStack_590);
    func_0x0001073de240(aplStack_590);
    func_0x0001073e18ac();
    func_0x0001073e1f4c();
    func_0x0001073e1b98(unaff_x19 + 0x380);
    func_0x0001073e187c();
    func_0x0001073e18ac();
    func_0x0001073e1f38();
    func_0x0001073e1b98(unaff_x19 + 0x20);
    func_0x0001073e187c();
    pplVar5 = (long **)&DAT_10f4283bf;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puStack_11c0);
    plVar12 = (long *)*plStack_1190;
    plVar3 = (long *)plStack_1190[1];
    func_0x0001073e2214();
    for (; plVar12 != plVar3; plVar12 = plVar12 + 2) {
      lVar9 = *plVar12;
      func_0x0001073e1e14(aplStack_3a0);
      func_0x0001073e1e14(&UNK_10e52b6c0);
      pplVar5 = aplStack_3a0;
      FUN_1073b7fe4(aplStack_590,lVar9 + 0x138);
      uVar7 = 0;
      func_0x0001073bc804();
      if (*(int *)(lVar9 + 0x200) == 0) {
        func_0x0001073e1af4(aplStack_590);
        if ((uVar7 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x3b8) = unaff_w27;
          func_0x0001073e21fc();
          func_0x0001073e1b48();
          func_0x0001073e21fc();
          pplVar5 = aplStack_590;
          func_0x0001073e1b48();
        }
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x3b8) = unaff_w27;
      }
      func_0x0001073e1de8();
      func_0x0001073bc804(aplStack_590);
    }
    pplVar13 = (long **)param_2[8];
    plVar3 = (long *)*plStack_1170;
    (**(code **)(*plVar3 + 0x10))();
    pplStack_1180 = &plStack_10f8;
    pplStack_1188 = &plStack_1120;
    pplStack_11a8 = &plStack_b58;
    pplStack_11a0 = pplVar13;
    plStack_1178 = plVar3;
    for (plVar12 = (long *)0x0; uVar1 = plVar12 == plStack_1178, !(bool)uVar1;
        plVar12 = (long *)((long)plVar12 + 1)) {
      (**(code **)(*(long *)*plStack_1170 + 0x18))(&plStack_10d0,(long *)*plStack_1170,plVar12);
      (**(code **)(*plStack_10d0 + 0x30))();
      func_0x00010726236c(auStack_210);
      func_0x0001073e1684(aplStack_590,auStack_210);
      pplVar5 = pplVar13;
      func_0x000107869b38(aplStack_3a0,pplVar13,aplStack_590);
      func_0x00010786967c();
      func_0x0001073e203c();
      func_0x0001073e1ba8();
      func_0x0001073e187c();
      pplVar14 = (long **)(ulong)*(uint *)(unaff_x19 + 0x378);
      plVar3 = (long *)0x0;
      func_0x0001073e1f44();
      func_0x0001073e2194();
      pplStack_b60 = pplVar14;
      plStack_b58 = plVar3;
      if (extraout_x8_01 != 0) {
        do {
          func_0x0001073e160c();
        } while (extraout_w10 != 0);
      }
      plVar3 = alStack_8b0;
      func_0x0001073e18b8();
      func_0x0001073e1674();
      func_0x0001073e19ec();
      func_0x0001073e1b70();
      func_0x0001073e1d04();
      func_0x0001073e1f74();
      func_0x0001073e19f8();
      func_0x0001073e1a00();
      func_0x0001073e1cf4();
      func_0x0001073e1a80();
      func_0x0001073e18ac();
      aplStack_590[0]._0_1_ = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      func_0x0001073e1cd4();
      plVar6 = plVar3;
      func_0x0001073e1b90();
      if (((ulong)plVar3 & 1) != 0) {
        func_0x0001073e18ac();
        func_0x0001073e1fcc();
        func_0x0001073e214c(pplStack_1180);
        if ((bool)uVar1) {
          lVar10 = plStack_1190[1];
          for (lVar9 = *plStack_1190; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
            func_0x0001073e1fc0();
            if (plVar4 != plVar6) {
              func_0x0001073e1f2c(plVar6[0xb]);
              if (iStack_3b8 != 0) {
                uVar7 = (ulong)*(uint *)(unaff_x19 + 0x378);
                uVar16 = 0;
                func_0x0001077512dc(alStack_8b0);
                func_0x0001073e2194();
                uStack_10b0 = uVar7;
                uStack_10a8 = uVar16;
                if (extraout_x8_02 != 0) {
                  do {
                    func_0x0001073e160c();
                  } while (extraout_w10_00 != 0);
                }
                func_0x0001073e18b8(&plStack_e10);
                func_0x000104c2fe00(auStack_dd8,unaff_x19 + 0x380);
                func_0x0001073e1ff0();
                func_0x0001073e1d58();
                plStack_7c0 = plStack_1168;
                func_0x0001073e1eb8(uStack_1160);
                func_0x0001073e2028();
                func_0x0001073e1ce4();
                func_0x0001073e1c6c();
                func_0x0001073e1c3c();
                func_0x0001073e2034();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x378) + -1.0);
                func_0x0001073e197c(auStack_a40);
                FUN_1073dcfc4(auStack_aa0);
                func_0x0001073e1ae0();
                func_0x0001073e1c08();
                func_0x0001073e1c10();
                func_0x0001073e1c18(*(undefined4 *)(unaff_x19 + 0x378));
                func_0x0001073e197c(auStack_cf0);
                FUN_1073dcfc4(auStack_d50);
                func_0x0001073e1ac4();
                func_0x0001073e1be0();
                func_0x0001073e1c00();
                func_0x0001073e1c18(*(float *)(unaff_x19 + 0x378) + 1.0);
                uVar7 = 0;
                func_0x0001073e197c();
                FUN_1073dcfc4(auStack_1000);
                func_0x0001073e1ab0();
                func_0x0001073e1bd0();
                func_0x0001073e1bd8();
                func_0x0001073e1f88();
                func_0x0001073e1af4(alStack_8b0);
                if ((uVar7 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(alStack_8b0);
                }
                func_0x0001073e1af4(&pplStack_b60);
                if ((uVar7 & 1) == 0) {
                  func_0x0001073e1df8();
                  func_0x0001073e1690(&pplStack_b60);
                }
                uVar7 = 0;
                func_0x000104c2d614();
                if ((uVar7 & 1) == 0) {
                  func_0x0001073e1df8();
                  FUN_1073dcf54();
                }
                func_0x0001073e1c2c();
                func_0x0001073e1a9c();
                plVar6 = alStack_da0;
                func_0x000104c2fe00(plVar6,auStack_db0);
                func_0x0001073e1bb8();
                func_0x0001073e1c24();
                func_0x0001073e1c74();
                func_0x0001073e1cec();
                func_0x0001073e1d68();
                func_0x0001073e2020();
              }
              func_0x0001073e1b68();
            }
          }
        }
        func_0x0001073e1f60(&uStack_10b0);
        lStack_1108 = lStack_10c8;
        plStack_1110 = plStack_10d0;
        plStack_10d0 = (long *)0x0;
        lStack_10c8 = 0;
        lVar9 = *(long *)(lStack_10c0 + 8);
        pplStack_1128 = pplStack_1100;
        plStack_1120 = plStack_10f8;
        lStack_1118 = lStack_10f0;
        if (lStack_10f0 == 0) {
          pplStack_1128 = pplStack_1188;
        }
        else {
          plStack_10f8[2] = (long)pplStack_1188;
          pplStack_1100 = pplStack_1180;
          *pplStack_1180 = (long *)0x0;
          pplStack_1180[1] = (long *)0x0;
        }
        lVar10 = param_2[6];
        func_0x0001073e1f44(*(undefined4 *)(unaff_x19 + 0x378));
        pplVar13 = pplStack_11a0;
        lStack_e08 = lStack_1108;
        plStack_e10 = plStack_1110;
        if (lStack_1108 != 0) {
          do {
            func_0x0001073e160c();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001073e18b8(alStack_8b0);
        func_0x0001073e1674();
        func_0x0001073e19ec();
        func_0x000107751444(aplStack_590,&plStack_e10,&plStack_720);
        uStack_498 = uStack_1160;
        puStack_4b0 = auStack_10e8;
        uVar16 = 0;
        lStack_4a8 = lVar10;
        FUN_1073e0de0(0,unaff_x19 + 0x148,aplStack_590);
        func_0x0001073e19f8();
        func_0x0001073e1a00();
        func_0x000107267e44(&plStack_e10);
        func_0x0001073e1a80();
        lStack_718 = lStack_1108;
        plStack_720 = plStack_1110;
        plStack_1110 = (long *)0x0;
        lStack_1108 = 0;
        pplStack_b60 = pplStack_1128;
        plStack_b58 = plStack_1120;
        lStack_b50 = lStack_1118;
        if (lStack_1118 == 0) {
          pplStack_b60 = pplStack_11a8;
        }
        else {
          plStack_1120[2] = (long)pplStack_11a8;
          pplStack_1128 = pplStack_1188;
          *pplStack_1188 = (long *)0x0;
          pplStack_1188[1] = (long *)0x0;
        }
        FUN_1073dfae4(uVar16,aplStack_590,plVar12,&plStack_720,&uStack_10b0,lVar9 + 0xc0,
                      &pplStack_b60);
        FUN_1073dff1c(&pplStack_b60);
        FUN_107330fdc(&plStack_720);
        pplVar5 = *(long ***)(unaff_x19 + 200);
        FUN_1073e0fc0(pplVar5,*(undefined8 *)(unaff_x19 + 0xd0),aplStack_590);
        pplVar8 = aplStack_590;
        FUN_1073e0e10(pplStack_1198);
        func_0x0001073dfdc0(aplStack_590);
        func_0x0001073e1e58();
        func_0x0001073e1e2c();
        func_0x000107283194(&uStack_10b0);
        func_0x0001073e1bc8();
      }
      func_0x0001073e1f80();
      func_0x0001073e1e24();
      func_0x0001073e1dc8();
      func_0x0001073e1e1c();
    }
  }
  uVar1 = 1;
  func_0x0001073e1928();
  func_0x0001073e1f94();
  func_0x000107331000(&plStack_1140);
  *plStack_11b0 = unaff_x19;
  plVar12 = alStack_1150;
  FUN_1073dcd10();
  func_0x0001073e1584(uStack_90);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar2 = puStack_11b8;
    puVar11 = puStack_11c0;
    if ((int)pplVar5 == 0) {
      func_0x0001073e1778();
      func_0x0001073e1c74();
      func_0x0001073e1cec();
      func_0x0001073e1d68();
      func_0x000107267da8(&plStack_720);
      func_0x0001073e1b68();
      func_0x0001073e1bc8();
      func_0x000107267da8(aplStack_3a0);
      func_0x0001073e1e24();
      func_0x0001073e1dc8();
      func_0x0001073e1e1c();
      func_0x0001073e1928();
      func_0x0001073e1f94();
      func_0x0001073dff80(unaff_x19 + 0x3c0);
      func_0x0001073e1be8();
      func_0x0001073e1cb4();
      FUN_1073e0028(plStack_1168);
      puVar11 = puStack_11b8;
      func_0x0001073de240(puStack_11b8 + 0xc);
      func_0x000107266af0(puVar11);
      FUN_1073e00c4(pplStack_1198);
      func_0x0001073e1cbc();
      func_0x000107331000(plStack_1170);
      puVar2 = puStack_11c0;
    }
    else {
      func_0x0001073e1928();
      func_0x0001073e1f94();
      func_0x0001073dff80(unaff_x19 + 0x3c0);
      func_0x0001073e1be8();
      func_0x0001073e1cb4();
      FUN_1073e0028(plStack_1170);
      func_0x0001073de240(puVar11 + 0xc);
      func_0x000107266af0(puVar11);
      FUN_1073e00c4(pplStack_11a0);
      func_0x0001073e1cbc();
      func_0x000107331000(pplVar13);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    func_0x0001073e1f18();
    func_0x0001073e0164(puStack_1158);
    func_0x000107331000(&plStack_1140);
    __ZdlPv();
    func_0x000104bd46a0();
    pcStack_11c8 = FUN_1073dcc08;
    puStack_11d0 = &stack0xfffffffffffffff0;
    if (pplVar8 != (long **)0x0) {
      do {
        func_0x0001073e160c();
      } while (extraout_w10_04 != 0);
    }
    *plVar12 = (long)pplVar5;
    plVar12[1] = (long)pplVar8;
    uStack_11e0 = 0;
    uStack_11d8 = 0;
    FUN_1073dcd10(&uStack_11e0);
    return;
  }
  return;
}



/* Entry: 1073dcc08; end: 1073dcc3b;  */

void FUN_1073dcc08(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    do {
      func_0x0001073e160c();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1073dcd10(&uStack_20);
  return;
}



/* Entry: 1073dcc3c; end: 1073dccc3;  */

void FUN_1073dcc3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1073dccc4(&uStack_40,param_3);
  uVar1 = 0x3c0;
  __Znwm();
  uStack_28 = uStack_38;
  uStack_30 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10748ff50();
  func_0x0001073dcd34(&uStack_30);
  *param_1 = uVar1;
  func_0x0001073dcd34(&uStack_40);
  return;
}



/* Entry: 1073dccc4; end: 1073dcd07;  */

void FUN_1073dccc4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0001073dcd34(&uStack_20);
  return;
}



/* Entry: 1073dcd08; end: 1073dcd0f;  */

void FUN_1073dcd08(void)

{
  return;
}



/* Entry: 1073dcd10; end: 1073dcd57;  */

void FUN_1073dcd10(long param_1)

{
  func_0x0001073e1b1c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073dcd58; end: 1073dcf53;  */

void FUN_1073dcd58(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_270 [56];
  undefined8 uStack_238;
  undefined1 auStack_230 [112];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [112];
  undefined8 uStack_148;
  undefined4 auStack_140 [28];
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  lVar1 = param_2;
  uVar4 = param_3;
  func_0x0001073e15cc();
  uStack_58 = extraout_x8;
  FUN_1073dd59c(lVar1,uVar4);
  lVar2 = param_2;
  func_0x0001073dd5bc(param_2,param_3);
  lVar3 = param_2;
  func_0x0001073dd5e8(param_2,param_3);
  auStack_140[0] = 0;
  uStack_148 = param_3;
  FUN_1073dd8d8(auStack_270,&uStack_148,param_2 + 0xa8);
  FUN_1073ddb94(&uStack_238);
  uStack_1c0 = param_3;
  func_0x000104c318bc(auStack_1b8,&uStack_238);
  FUN_1073ddb98(&uStack_148,&uStack_1c0,param_2 + 0xe0);
  func_0x0001073e1920();
  func_0x000104c2f714(&uStack_238);
  FUN_1073ddf1c(&uStack_98);
  uStack_238 = param_3;
  func_0x000104c318bc(auStack_230,&uStack_98);
  FUN_1073ddb98(&uStack_1c0,&uStack_238,param_2 + 0x158);
  func_0x0001073e1920();
  func_0x000104c2f714(&uStack_98);
  FUN_1073ddf1c(auStack_d0);
  uStack_98 = param_3;
  func_0x000104c318bc(auStack_90,auStack_d0);
  FUN_1073ddb98(&uStack_238,&uStack_98,param_2 + 0x1d0);
  func_0x0001073e1920();
  func_0x000104c2f714(auStack_d0);
  *param_1 = (char)lVar1;
  param_1[1] = (char)lVar2;
  param_1[2] = (char)lVar3;
  FUN_1073dd9b0(param_1 + 8,auStack_270);
  FUN_1073ddccc(param_1 + 0x48,auStack_140);
  FUN_1073ddccc(param_1 + 0xc0,auStack_1b8);
  FUN_1073ddccc(param_1 + 0x138,auStack_230);
  FUN_1073dd470(auStack_230);
  FUN_1073dd470(auStack_1b8);
  func_0x0001073e1b58();
  func_0x0001073e1fb0();
  func_0x0001073e1584(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073e1920();
  func_0x000104c2f714(auStack_d0);
  FUN_1073dd470(auStack_1b8);
  FUN_1073dd470(auStack_140);
  func_0x0001073e1fb0();
  func_0x0001073e1648();
  FUN_1073de27c();
  return;
}



/* Entry: 1073dcf54; end: 1073dcf83;  */

void FUN_1073dcf54(void)

{
  FUN_1073de27c();
  return;
}



/* Entry: 1073dcf84; end: 1073dcf9b;  */

void FUN_1073dcf84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[2] = param_2[2];
    return;
  }
  func_0x000107277f30();
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  return;
}



/* Entry: 1073dcf9c; end: 1073dcfc3;  */

void FUN_1073dcf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  FUN_1073deed0(param_1,&uStack_11,&uStack_28);
  return;
}



/* Entry: 1073dcfc4; end: 1073dcfdb;  */

void FUN_1073dcfc4(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 1073dcfdc; end: 1073dcff3;  */

void FUN_1073dcfdc(void)

{
  FUN_1073df64c();
  return;
}



/* Entry: 1073dcff4; end: 1073dcff7;  */

long FUN_1073dcff4(long param_1)

{
  func_0x0001073e1ca4(&PTR_FUN_1109ac1f8);
  func_0x0001073e1be8();
  func_0x0001073e1cb4();
  FUN_1073e0028(param_1 + 0x300);
  func_0x0001073de240(param_1 + 0x140);
  func_0x000107266af0(param_1 + 0xe0);
  FUN_1073e00c4(param_1 + 200);
  func_0x0001073e1cbc();
  func_0x000107331000(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x58);
  func_0x0001073e1f18();
  func_0x0001073e0164();
  return param_1;
}



/* Entry: 1073dcff8; end: 1073dd00b;  */

void FUN_1073dcff8(void)

{
  func_0x0001073e01c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073dd00c; end: 1073dd00f;  */

void FUN_1073dd00c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 0x380);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073dd010; end: 1073dd2df;  */

void FUN_1073dd010(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  int extraout_w10;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_3b8 [80];
  undefined1 auStack_368 [24];
  long *plStack_350;
  undefined1 auStack_2f0 [112];
  long *plStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_220 [432];
  undefined8 uStack_70;
  
  func_0x0001073e1650();
  func_0x0001073e15cc();
  func_0x0001073e1790();
  func_0x0001073e1db8();
  func_0x0001073e1d80();
  func_0x000107288cd8(&plStack_280);
  func_0x0001073e1d98();
  func_0x0001073e20e4();
  func_0x0001073e1a6c();
  func_0x0001073e1e50();
  func_0x0001073e1ffc();
  func_0x0001073e1a44();
  func_0x0001073e1cfc();
  func_0x0001073e1a08(*(undefined4 *)(unaff_x20 + 0x378));
  FUN_10745f750(auStack_368,*(undefined8 *)(unaff_x20 + 0x2f0));
  lVar6 = *(long *)(unaff_x20 + 0x2f8);
  FUN_10750a49c(auStack_2f0);
  func_0x0001073e19d0();
  func_0x0001073e1db0();
  func_0x0001073e2054();
  lVar7 = lVar6;
  func_0x0001073e18a4();
  func_0x0001073e1da0();
  plVar4 = plStack_350;
  lVar9 = 0;
  lVar1 = *(long *)(unaff_x20 + 0xd0);
  for (lVar8 = *(long *)(unaff_x20 + 200); lVar8 != lVar1; lVar8 = lVar8 + 0x58) {
    func_0x0001073e1fe4();
    lVar9 = lVar7 + lVar9;
  }
  func_0x0001073e2160();
  func_0x0001073e1fd8();
  lVar1 = *(long *)(unaff_x20 + 0xd0);
  lVar8 = *(long *)(unaff_x20 + 200);
  while (lVar8 != lVar1) {
    func_0x0001073e1afc();
    func_0x0001073e1db0();
    FUN_107330078(&plStack_280);
    func_0x0001073e2124();
    (*extraout_x8)();
    func_0x00010726236c(auStack_2f0);
    func_0x0001073e1684(&plStack_280);
    func_0x0001073e1e04();
    func_0x00010786967c();
    func_0x0001073e1c84();
    FUN_1073de9d8(auStack_3b8);
    func_0x0001073e18a4();
    func_0x0001073e1750();
    func_0x0001073e19d0();
    (*extraout_x9)(auStack_220);
    func_0x0001073e1c44();
    func_0x0001073e2048();
    func_0x0001073e03f8(&plStack_280);
    func_0x0001073e1ea0();
    (*extraout_x8_00)();
    func_0x0001073e18c8();
    func_0x0001073e1bf8();
    func_0x0001073e1da8();
    func_0x0001073e1bf0();
    lVar8 = lVar9 + 0x20;
  }
  if ((plStack_350[0x15] != plStack_350[0x16]) ||
     (uVar5 = true, plStack_350[0x12] != plStack_350[0x13])) {
    func_0x0001073e2110();
    while (uVar5 = lVar6 == unaff_x20, !(bool)uVar5) {
      plStack_280 = plStack_350;
      if (lVar9 != 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_268 = *(undefined8 *)(lVar6 + 0x60);
      uStack_270 = *(undefined8 *)(lVar6 + 0x58);
      lStack_278 = lVar9;
      if (*(long *)(lVar6 + 0x60) != 0) {
        do {
          func_0x0001073e160c();
        } while (extraout_w10 != 0);
      }
      func_0x0001073e1d20();
      func_0x0001073e08f4(&plStack_280);
      func_0x00010002c7d4();
    }
  }
  func_0x0001073e1bb0();
  func_0x0001073e1d70();
  func_0x0001073e1d78();
  func_0x0001073e1584(uStack_70);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001073e1bb0();
    func_0x0001073e1d70();
    func_0x0001073e1d78();
    func_0x0001073e1648();
    return;
  }
  return;
}



/* Entry: 1073dd2e0; end: 1073dd2fb;  */

void FUN_1073dd2e0(void)

{
  return;
}



/* Entry: 1073dd2fc; end: 1073dd37b;  */

undefined2 * FUN_1073dd2fc(undefined2 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e1598();
  uStack_28 = extraout_x8;
  func_0x0001073e20a8();
  if (*(long *)(param_2 + 0xf0) != 0) {
    ppuStack_48 = &PTR_FUN_1109ac3f0;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_2;
    func_0x0001073e2090();
    func_0x0001073e1b50();
  }
  func_0x0001073e209c();
  func_0x0001073e1de0();
  func_0x0001073e1584(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001073e1b50();
  func_0x0001073e1de0();
  func_0x0001073e1648();
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  FUN_1073dd420(param_1 + 0x20);
  func_0x0001073dd43c(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_1073dd458(param_1 + 0x9c);
  return param_1;
}



/* Entry: 1073dd37c; end: 1073dd41f;  */

undefined2 * FUN_1073dd37c(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  FUN_1073dd420(param_1 + 0x20);
  func_0x0001073dd43c(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_1073dd458(param_1 + 0x9c);
  return param_1;
}



/* Entry: 1073dd420; end: 1073dd457;  */

void FUN_1073dd420(void)

{
  func_0x0001073e1884();
  return;
}



/* Entry: 1073dd458; end: 1073dd46f;  */

void FUN_1073dd458(long param_1)

{
  func_0x000104c2f64c();
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1073dd470; end: 1073dd4b3;  */

void FUN_1073dd470(long param_1)

{
  if (*(uint *)(param_1 + 0x68) != 0xffffffff) {
    func_0x0001073e161c((&PTR_FUN_1109ac250)[*(uint *)(param_1 + 0x68)]);
  }
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  return;
}



/* Entry: 1073dd4b4; end: 1073dd4c3;  */

void FUN_1073dd4b4(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1073dd4c4; end: 1073dd507;  */

void FUN_1073dd4c4(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x0001073e161c((&PTR_FUN_1109ac260)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1073dd508; end: 1073dd50f;  */

void FUN_1073dd508(void)

{
  return;
}



/* Entry: 1073dd510; end: 1073dd533;  */

undefined8 FUN_1073dd510(undefined8 param_1)

{
  FUN_1073dd534(param_1);
  return param_1;
}



/* Entry: 1073dd534; end: 1073dd577;  */

void FUN_1073dd534(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001073e160c();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1073dd578; end: 1073dd59b;  */

void FUN_1073dd578(long param_1)

{
  func_0x0001073e1b1c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073dd59c; end: 1073dd607;  */

void FUN_1073dd59c(undefined8 param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001073e1ed0();
  FUN_1073dd608(param_1,extraout_x8);
  return;
}



/* Entry: 1073dd608; end: 1073dd62f;  */

void FUN_1073dd608(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073e1650();
  FUN_1073dd630(param_2);
  func_0x0001073e18e4();
  func_0x0001073e21c8();
  func_0x0001073e20b4();
  return;
}



/* Entry: 1073dd630; end: 1073dd66f;  */

void FUN_1073dd630(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073e21c8();
  func_0x0001073e20b4();
  return;
}



/* Entry: 1073dd670; end: 1073dd687;  */

undefined1 FUN_1073dd670(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1073dd688; end: 1073dd703;  */

undefined1 * FUN_1073dd688(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  func_0x0001073e1650();
  func_0x0001073e15cc();
  uStack_38 = extraout_x8;
  func_0x0001073e21f0();
  puVar1 = auStack_1c8;
  func_0x0001077512dc();
  func_0x0001073e1b28();
  func_0x0001073e21a0();
  func_0x000107280464();
  func_0x0001073e1984();
  func_0x0001073e1d90();
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001073e1984();
  func_0x0001073e1d90();
  func_0x0001073e1648();
  func_0x0001073e1650();
  FUN_1073dd72c(param_2);
  func_0x0001073e18e4();
  func_0x0001073e21c8();
  func_0x0001073e20b4();
  return param_2;
}



/* Entry: 1073dd704; end: 1073dd72b;  */

void FUN_1073dd704(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073e1650();
  FUN_1073dd72c(param_2);
  func_0x0001073e18e4();
  func_0x0001073e21c8();
  func_0x0001073e20b4();
  return;
}



/* Entry: 1073dd72c; end: 1073dd76b;  */

void FUN_1073dd72c(long param_1)

{
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073e21c8();
  func_0x0001073e20b4();
  return;
}



/* Entry: 1073dd76c; end: 1073dd783;  */

undefined1 FUN_1073dd76c(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1073dd784; end: 1073dd7ff;  */

undefined1 * FUN_1073dd784(void)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint in_w3;
  undefined8 extraout_x8;
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  func_0x0001073e1650();
  func_0x0001073e15cc();
  uStack_38 = extraout_x8;
  func_0x0001073e21f0();
  puVar2 = auStack_1c8;
  func_0x0001077512dc();
  func_0x0001073e1b28();
  func_0x0001073e21a0();
  FUN_1073dd800();
  puVar3 = puVar2;
  func_0x0001073e1984();
  func_0x0001073e1d90();
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001073e1984();
  func_0x0001073e1d90();
  func_0x0001073e1648();
  puVar2 = puVar3;
  FUN_1073dd840();
  uVar1 = (uint)puVar2;
  if ((((uint)puVar2 >> 8 & 1) == 0) && (uVar1 = in_w3, puVar3[0x29] == '\x01')) {
    uVar1 = (uint)(byte)puVar3[0x28];
  }
  return (undefined1 *)(ulong)(uVar1 & 0xff);
}



/* Entry: 1073dd800; end: 1073dd83f;  */

uint FUN_1073dd800(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1073dd840();
  uVar1 = (uint)lVar2;
  if ((((uint)lVar2 >> 8 & 1) == 0) && (uVar1 = param_4, *(char *)(param_1 + 0x29) == '\x01')) {
    uVar1 = (uint)*(byte *)(param_1 + 0x28);
  }
  return uVar1 & 0xff;
}



/* Entry: 1073dd840; end: 1073dd8d7;  */

undefined1 ** FUN_1073dd840(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [120];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x0001073e15cc();
  puVar2 = (undefined1 *)*param_1;
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a8);
  uVar1 = iStack_30 == 1;
  if ((bool)uVar1) {
    puVar2 = auStack_a8;
    func_0x00010727f7dc();
    param_2 = &uStack_a9;
    func_0x000107775e1c();
    uVar6 = (uint)puVar2 >> 8 & 0xff;
    puVar5 = puVar2;
  }
  else {
    uVar6 = 0;
    puVar5 = (undefined1 *)0x0;
  }
  func_0x0001073e16ac();
  func_0x0001073e1584(uStack_28);
  if ((bool)uVar1) {
    return (undefined1 **)(ulong)((uint)puVar5 & 0xff | uVar6 << 8);
  }
  ___stack_chk_fail();
  func_0x0001073e16ac();
  func_0x0001073e1648();
  pcStack_b8 = FUN_1073dd8d8;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001073e1650();
  puVar2 = param_2;
  FUN_1073dd910();
  func_0x0001073e18e4(extraout_x8_00);
  uVar4 = (ulong)*(uint *)(puVar2 + 0x30);
  if (*(uint *)(puVar2 + 0x30) == 0xffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  ppuVar3 = &puStack_c8;
  puStack_c8 = param_2;
  (*(code *)(&PTR_FUN_1109ac2a0)[uVar4])(ppuVar3);
  return ppuVar3;
}



/* Entry: 1073dd8d8; end: 1073dd90f;  */

void FUN_1073dd8d8(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  ulong uVar1;
  
  func_0x0001073e1650();
  FUN_1073dd910();
  func_0x0001073e18e4(extraout_x8);
  uVar1 = (ulong)*(uint *)(param_2 + 0x30);
  if (*(uint *)(param_2 + 0x30) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109ac2a0)[uVar1])(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 1073dd910; end: 1073dd963;  */

void FUN_1073dd910(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x30) != -1) {
    return;
  }
  func_0x00010563ab98();
  uStack_18 = 0x1073dd92c;
  uVar1 = (ulong)*(uint *)(param_2 + 0x30);
  if (*(uint *)(param_2 + 0x30) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  lStack_28 = param_1;
  puStack_20 = &stack0xfffffffffffffff0;
  (*(code *)(&PTR_FUN_1109ac2a0)[uVar1])(&lStack_28);
  return;
}



/* Entry: 1073dd964; end: 1073dd977;  */

void FUN_1073dd964(undefined8 param_1,long *param_2)

{
  undefined4 auStack_48 [12];
  undefined4 uStack_18;
  
  auStack_48[0] = *(undefined4 *)(*param_2 + 8);
  uStack_18 = 0;
  FUN_1073dd9b0(param_1,auStack_48);
  FUN_1073dd4c4(auStack_48);
  return;
}



/* Entry: 1073dd978; end: 1073dd9af;  */

void FUN_1073dd978(undefined8 param_1,long param_2)

{
  undefined4 auStack_48 [12];
  undefined4 uStack_18;
  
  auStack_48[0] = *(undefined4 *)(param_2 + 8);
  uStack_18 = 0;
  FUN_1073dd9b0(param_1,auStack_48);
  FUN_1073dd4c4(auStack_48);
  return;
}



/* Entry: 1073dd9b0; end: 1073dd9d7;  */

void FUN_1073dd9b0(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001073e15fc();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_1073dd9d8();
  return;
}



/* Entry: 1073dd9d8; end: 1073dda1b;  */

void FUN_1073dd9d8(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  FUN_1073dd4c4();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x0001073e15bc(&PTR_FUN_1109ac2b8);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 1073dda1c; end: 1073dda33;  */

void FUN_1073dda1c(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073dda34; end: 1073dda6b;  */

void FUN_1073dda34(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 auStack_48 [12];
  undefined4 uStack_18;
  
  auStack_48[0] = *param_3;
  uStack_18 = 0;
  FUN_1073dd9b0(param_1,auStack_48);
  FUN_1073dd4c4(auStack_48);
  return;
}



/* Entry: 1073dda6c; end: 1073dda73;  */

void FUN_1073dda6c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  plVar1 = (long *)*param_1;
  func_0x0001073e1598();
  func_0x0001073e21b4();
  if ((bool)in_ZR) {
    func_0x0001073e21f0();
    func_0x0001077512dc(auStack_1c8);
    uStack_e0 = *(undefined8 *)(*plVar1 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(*plVar1 + 0x40);
    func_0x00010727f6f4(param_2,auStack_1c8,auStack_210);
    FUN_1073dd9b0();
    func_0x0001073e1fb0();
    func_0x00010724b3d8(auStack_210);
    func_0x000107267da8(auStack_1c8);
  }
  else {
    FUN_1073ddb60(auStack_248,param_2);
    FUN_1073dd9b0();
    FUN_1073dd4c4(auStack_248);
  }
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_210);
  func_0x000107267da8(auStack_1c8);
  func_0x0001073e1648();
  FUN_1073ddb78();
  return;
}



/* Entry: 1073dda74; end: 1073ddb5f;  */

void FUN_1073dda74(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  func_0x0001073e1598();
  func_0x0001073e21b4();
  if ((bool)in_ZR) {
    func_0x0001073e21f0();
    func_0x0001077512dc(auStack_1c8);
    uStack_e0 = *(undefined8 *)(*param_1 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(*param_1 + 0x40);
    func_0x00010727f6f4(param_2,auStack_1c8,auStack_210);
    FUN_1073dd9b0();
    func_0x0001073e1fb0();
    func_0x00010724b3d8(auStack_210);
    func_0x000107267da8(auStack_1c8);
  }
  else {
    FUN_1073ddb60(auStack_248,param_2);
    FUN_1073dd9b0();
    FUN_1073dd4c4(auStack_248);
  }
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_210);
  func_0x000107267da8(auStack_1c8);
  func_0x0001073e1648();
  FUN_1073ddb78();
  return;
}



/* Entry: 1073ddb60; end: 1073ddb77;  */

void FUN_1073ddb60(void)

{
  FUN_1073ddb78();
  return;
}



/* Entry: 1073ddb78; end: 1073ddb93;  */

void FUN_1073ddb78(long param_1)

{
  func_0x00010727d69c();
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1073ddb94; end: 1073ddb97;  */

void FUN_1073ddb94(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073ddb98; end: 1073ddbcf;  */

void FUN_1073ddb98(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  ulong uVar1;
  
  func_0x0001073e1650();
  FUN_1073ddbd0();
  func_0x0001073e18e4(extraout_x8);
  uVar1 = (ulong)*(uint *)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x70) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109ac2c8)[uVar1])(&stack0xffffffffffffffe8,param_2 + 8);
  return;
}



/* Entry: 1073ddbd0; end: 1073ddc27;  */

void FUN_1073ddbd0(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x70) != -1) {
    return;
  }
  func_0x00010563ab98();
  uStack_18 = 0x1073ddbec;
  uVar1 = (ulong)*(uint *)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x70) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  lStack_28 = param_1;
  puStack_20 = &stack0xfffffffffffffff0;
  (*(code *)(&PTR_FUN_1109ac2c8)[uVar1])(&lStack_28,param_2 + 8);
  return;
}



/* Entry: 1073ddc28; end: 1073ddc3b;  */

undefined1 * FUN_1073ddc28(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_a0 [120];
  undefined8 uStack_28;
  
  puVar1 = auStack_a0;
  func_0x0001073e1598(*param_1);
  uStack_28 = extraout_x8;
  FUN_1073ddc8c(auStack_a0,extraout_x9 + 8);
  func_0x0001073e18f0();
  func_0x0001073e1b58();
  func_0x0001073e1584(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_1073ddcb4(puVar1 + 8);
  return puVar1;
}



/* Entry: 1073ddc3c; end: 1073ddc8b;  */

undefined1 * FUN_1073ddc3c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_a0 [120];
  undefined8 uStack_28;
  
  puVar1 = auStack_a0;
  func_0x0001073e1598();
  uStack_28 = extraout_x8;
  FUN_1073ddc8c(auStack_a0,extraout_x9 + 8);
  func_0x0001073e18f0();
  func_0x0001073e1b58();
  func_0x0001073e1584(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_1073ddcb4(puVar1 + 8);
  return puVar1;
}



/* Entry: 1073ddc8c; end: 1073ddcb3;  */

long FUN_1073ddc8c(long param_1)

{
  FUN_1073ddcb4(param_1 + 8);
  return param_1;
}



/* Entry: 1073ddcb4; end: 1073ddccb;  */

void FUN_1073ddcb4(long param_1)

{
  func_0x000104c2fe00();
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1073ddccc; end: 1073ddcf3;  */

void FUN_1073ddccc(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001073e15fc();
  *(undefined4 *)(param_1 + 0x68) = extraout_w8;
  FUN_1073ddcf4();
  return;
}



/* Entry: 1073ddcf4; end: 1073ddd37;  */

void FUN_1073ddcf4(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e17d0();
  FUN_1073dd470();
  iVar1 = *(int *)(unaff_x20 + 0x68);
  if (iVar1 != -1) {
    func_0x0001073e15bc(&PTR_FUN_1109ac2e0);
    *(int *)(unaff_x19 + 0x68) = iVar1;
  }
  return;
}



/* Entry: 1073ddd38; end: 1073ddd57;  */

void FUN_1073ddd38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000104c318ec();
  *(undefined8 *)(lVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 1073ddd58; end: 1073ddd9f;  */

void FUN_1073ddd58(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_410 [56];
  undefined1 auStack_3d8 [56];
  undefined1 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [232];
  undefined8 uStack_2a8;
  undefined1 auStack_200 [56];
  undefined1 auStack_1c8 [128];
  undefined1 auStack_148 [112];
  undefined8 uStack_d8;
  undefined8 auStack_a0 [15];
  undefined8 uStack_28;
  
  puVar1 = auStack_a0;
  func_0x0001073e1598();
  uStack_28 = extraout_x8;
  FUN_1073ddc8c();
  func_0x0001073e18f0();
  func_0x0001073e1b58();
  func_0x0001073e1584(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = (long *)*puVar1;
  func_0x0001073e1598();
  func_0x0001073e21b4();
  if ((bool)in_ZR) {
    func_0x0001073e21f0();
    func_0x0001077512dc(auStack_390);
    uStack_2a8 = *(undefined8 *)(*plVar2 + 8);
    auStack_3d8[0] = 0;
    uStack_3a0 = 0;
    uStack_398 = *(undefined8 *)(*plVar2 + 0x40);
    func_0x000104c2f64c(auStack_410);
    FUN_1073393c0(auStack_200,param_2,auStack_390,auStack_3d8,auStack_410);
    FUN_1073ddedc(auStack_1c8,auStack_200);
    func_0x0001073e18f0();
    func_0x0001073e1b58();
    func_0x000104c2f714(auStack_200);
    func_0x000104c2f714(auStack_410);
    func_0x00010724b3d8(auStack_3d8);
    func_0x000107267da8(auStack_390);
  }
  else {
    FUN_1073ddec0(auStack_148,param_2);
    FUN_1073ddccc(unaff_x19 + 8,auStack_148);
    FUN_1073dd470(auStack_148);
  }
  func_0x0001073e1584(uStack_d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073e1a2c();
  func_0x000104c2f714();
  func_0x00010724b3d8(auStack_3d8);
  puVar3 = auStack_390;
  func_0x000107267da8();
  func_0x0001073e1648();
  FUN_1073244c0();
  *(undefined4 *)(puVar3 + 0x68) = 1;
  return;
}



/* Entry: 1073ddda0; end: 1073ddda7;  */

void FUN_1073ddda0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long unaff_x19;
  undefined1 auStack_370 [56];
  undefined1 auStack_338 [56];
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [232];
  undefined8 uStack_208;
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  plVar1 = (long *)*param_1;
  func_0x0001073e1598();
  func_0x0001073e21b4();
  if ((bool)in_ZR) {
    func_0x0001073e21f0();
    func_0x0001077512dc(auStack_2f0);
    uStack_208 = *(undefined8 *)(*plVar1 + 8);
    auStack_338[0] = 0;
    uStack_300 = 0;
    uStack_2f8 = *(undefined8 *)(*plVar1 + 0x40);
    func_0x000104c2f64c(auStack_370);
    FUN_1073393c0(auStack_160,param_2,auStack_2f0,auStack_338,auStack_370);
    FUN_1073ddedc(auStack_128,auStack_160);
    func_0x0001073e18f0();
    func_0x0001073e1b58();
    func_0x000104c2f714(auStack_160);
    func_0x000104c2f714(auStack_370);
    func_0x00010724b3d8(auStack_338);
    func_0x000107267da8(auStack_2f0);
  }
  else {
    FUN_1073ddec0(auStack_a8,param_2);
    FUN_1073ddccc(unaff_x19 + 8,auStack_a8);
    FUN_1073dd470(auStack_a8);
  }
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073e1a2c();
  func_0x000104c2f714();
  func_0x00010724b3d8(auStack_338);
  puVar2 = auStack_2f0;
  func_0x000107267da8();
  func_0x0001073e1648();
  FUN_1073244c0();
  *(undefined4 *)(puVar2 + 0x68) = 1;
  return;
}



/* Entry: 1073ddda8; end: 1073ddebf;  */

void FUN_1073ddda8(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x19;
  undefined1 auStack_370 [56];
  undefined1 auStack_338 [56];
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [232];
  undefined8 uStack_208;
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  func_0x0001073e1598();
  func_0x0001073e21b4();
  if ((bool)in_ZR) {
    func_0x0001073e21f0();
    func_0x0001077512dc(auStack_2f0);
    uStack_208 = *(undefined8 *)(*param_1 + 8);
    auStack_338[0] = 0;
    uStack_300 = 0;
    uStack_2f8 = *(undefined8 *)(*param_1 + 0x40);
    func_0x000104c2f64c(auStack_370);
    FUN_1073393c0(auStack_160,param_2,auStack_2f0,auStack_338,auStack_370);
    FUN_1073ddedc(auStack_128,auStack_160);
    func_0x0001073e18f0();
    func_0x0001073e1b58();
    func_0x000104c2f714(auStack_160);
    func_0x000104c2f714(auStack_370);
    func_0x00010724b3d8(auStack_338);
    func_0x000107267da8(auStack_2f0);
  }
  else {
    FUN_1073ddec0(auStack_a8,param_2);
    FUN_1073ddccc(unaff_x19 + 8,auStack_a8);
    FUN_1073dd470(auStack_a8);
  }
  func_0x0001073e1584(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073e1a2c();
  func_0x000104c2f714();
  func_0x00010724b3d8(auStack_338);
  puVar1 = auStack_2f0;
  func_0x000107267da8();
  func_0x0001073e1648();
  FUN_1073244c0();
  *(undefined4 *)(puVar1 + 0x68) = 1;
  return;
}



/* Entry: 1073ddec0; end: 1073ddedb;  */

void FUN_1073ddec0(long param_1)

{
  FUN_1073244c0();
  *(undefined4 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 1073ddedc; end: 1073ddf03;  */

long FUN_1073ddedc(long param_1)

{
  FUN_1073ddf04(param_1 + 8);
  return param_1;
}



/* Entry: 1073ddf04; end: 1073ddf1b;  */

void FUN_1073ddf04(long param_1)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1073ddf1c; end: 1073ddf23;  */

void FUN_1073ddf1c(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073ddf24; end: 1073ddf7b;  */

long FUN_1073ddf24(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073e1650();
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  FUN_1073ddf7c(param_1 + 8,param_2 + 8);
  FUN_1073de0e0(unaff_x20 + 0x48,unaff_x19 + 0x48);
  FUN_1073de0e0(unaff_x20 + 0xc0,unaff_x19 + 0xc0);
  FUN_1073de104(unaff_x20 + 0x138,unaff_x19 + 0x138);
  return unaff_x20 + 0x138;
}



/* Entry: 1073ddf7c; end: 1073ddf9f;  */

undefined8 FUN_1073ddf7c(undefined8 param_1)

{
  FUN_1073ddfa0();
  return param_1;
}



/* Entry: 1073ddfa0; end: 1073ddff3;  */

void FUN_1073ddfa0(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x0001073e161c((&PTR_FUN_1109ac260)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x0001073e20c0();
  }
  return;
}



/* Entry: 1073ddff4; end: 1073de003;  */

void FUN_1073ddff4(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(*param_1 + 0x30) != 0) {
    func_0x0001073e2208();
    FUN_1073de034();
    return;
  }
  *param_2 = *param_3;
  return;
}



/* Entry: 1073de004; end: 1073de033;  */

void FUN_1073de004(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x0001073e2208();
    FUN_1073de034();
    return;
  }
  *param_2 = *param_3;
  return;
}


