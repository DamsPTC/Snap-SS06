/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100634154; end: 1006341e7;  */

long FUN_100634154(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_4;
  if ((ulong)((param_1[1] - *param_1) / 0xd0) < 2) {
    if (param_1[1] - *param_1 == 0xd0) {
      func_0x000107c29a1c(param_1);
    }
  }
  else {
    while( true ) {
      param_4 = lVar1;
      func_0x000107c29a1c(param_1);
      if (*param_1 == param_1[1]) break;
      lVar1 = 0;
      if (param_4 != 0) {
        FUN_10065d008(param_3,*param_1 + 0xa0);
        lVar1 = param_4 + -1;
      }
    }
  }
  return param_4;
}



/* Entry: 1006341e8; end: 10063422f;  */

long FUN_1006341e8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_100634154(param_1 + 0x10,param_2,param_1 + 0x90,param_2);
  lVar3 = param_1 + 0x30;
  FUN_100634154();
  plVar1 = (long *)(param_1 + 0x50);
  lVar4 = *(long *)(param_1 + 0x58) - *plVar1;
  lVar2 = lVar3;
  if ((ulong)(lVar4 / 0xd0) < 2) {
    if (lVar4 == 0xd0) {
      func_0x000107c29a1c(plVar1);
    }
  }
  else {
    while( true ) {
      lVar3 = lVar2;
      func_0x000107c29a1c(plVar1);
      if (*plVar1 == *(long *)(param_1 + 0x58)) break;
      lVar2 = 0;
      if (lVar3 != 0) {
        FUN_10065d008(param_1 + 0x90,*plVar1 + 0xa0);
        lVar2 = lVar3 + -1;
      }
    }
  }
  return lVar3;
}



/* Entry: 100634230; end: 10063423f;  */

long FUN_100634230(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x29;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar4 = (ulong *)(lVar5 + 0x58);
  func_0x0001004a6390(unaff_x29 + -0x28);
  uVar6 = *puVar4;
  uVar1 = puVar4[1];
  while ((uVar7 = uVar1, uVar6 != uVar1 &&
         (uVar3 = uVar6, FUN_100152bb8(uVar6,"api"), uVar7 = uVar6, (uVar3 & 1) == 0))) {
    uVar6 = uVar6 + 0x30;
  }
  if (uVar7 == *(ulong *)(lVar5 + 8)) {
    puVar2 = &UNK_10f4bc931;
    func_0x00010002b82c();
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(lVar5,unaff_x19,puVar2);
    return lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return unaff_x19;
}



/* Entry: 100634240; end: 1006342d7;  */

void FUN_100634240(void)

{
  uint extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_var;
  
  FUN_100634230();
  FUN_100634368();
  func_0x000100634378();
  func_0x000100634384();
  FUN_1004b5564();
  func_0x0001006343a0();
  FUN_100634748();
  func_0x000100634754();
  func_0x000100634990();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010063499c();
    FUN_1005ef480();
    (*(code *)CONCAT44(extraout_var,extraout_w8_00))();
    func_0x0001006343a0();
    func_0x0001006a5d5c();
    func_0x0001006a5d68();
    func_0x0001006a5d78();
  }
  func_0x0001006a5d80();
  func_0x0001006a5d88();
  return;
}



/* Entry: 1006342d8; end: 100634367;  */

long FUN_1006342d8(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  func_0x0001004a6390();
  uVar4 = *param_2;
  uVar1 = param_2[1];
  while ((uVar5 = uVar1, uVar4 != uVar1 &&
         (uVar3 = uVar4, FUN_100152bb8(uVar4,"api"), uVar5 = uVar4, (uVar3 & 1) == 0))) {
    uVar4 = uVar4 + 0x30;
  }
  if (uVar5 == *(ulong *)(unaff_x20 + 8)) {
    puVar2 = &UNK_10f4bc931;
    func_0x00010002b82c();
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
    return unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return unaff_x19;
}



/* Entry: 100634368; end: 1006343a7;  */

void FUN_100634368(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f4bc91e;
  func_0x00010002b82c(&stack0x00000008,&UNK_10f4bc91e);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1006343a8; end: 10063456f; -[SCPreviewABServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006343a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bcd08;
  func_0x000107c610f4(PTR_PTR_1126bcd08);
  lVar2 = param_1 + _DAT_1127278a0;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_1127278a4;
  func_0x000107c61148(lVar4);
  lVar5 = param_1 + _DAT_1127278a8;
  func_0x000107c61148();
  lVar6 = lVar5;
  func_0x000107c5c21c();
  func_0x000107c61180();
  lVar7 = param_1 + _DAT_1127278ac;
  func_0x000107c61148(lVar7);
  lVar8 = lVar7;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127278b8;
    func_0x000107c61148(lVar12);
  }
  lVar9 = lVar12;
  func_0x000107c4ec80(lVar12);
  func_0x000107c61180();
  param_1 = param_1 + _DAT_1127278b0;
  func_0x000107c61148(param_1);
  lVar10 = param_1;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c45e24(puVar1,param_2,lVar3,lVar4,lVar6,lVar8,lVar9,lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar11 = PTR_PTR_1126bcd10;
  func_0x000107c610f4(PTR_PTR_1126bcd10);
  func_0x000107c4549c();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 100634570; end: 10063458f;  */

void FUN_100634570(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000107c30558();
  }
  return;
}



/* Entry: 100634590; end: 10063459b;  */

undefined1 * FUN_100634590(void)

{
  undefined8 in_stack_00000078;
  
  FUN_10063459c(&stack0x00000068,in_stack_00000078);
  FUN_1006345f0(&stack0x00000068,0);
  return &stack0x00000068;
}



/* Entry: 10063459c; end: 1006345ef;  */

void FUN_10063459c(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1006345f0; end: 100634607;  */

void FUN_1006345f0(long *param_1)

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



/* Entry: 100634608; end: 10063465f;  */

undefined8 FUN_100634608(undefined8 param_1)

{
  FUN_1006345f0(param_1,0);
  return param_1;
}



/* Entry: 100634660; end: 100634667;  */

void FUN_100634660(void)

{
  return;
}



/* Entry: 100634668; end: 100634697;  */

long FUN_100634668(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001006345c8(param_1 + 0x20);
  }
  return param_1;
}



/* Entry: 100634698; end: 1006346a7;  */

void FUN_100634698(void)

{
  bool bVar1;
  long *unaff_x21;
  
  bVar1 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
  if (bVar1) {
    *unaff_x21 = *unaff_x21 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1006346a8; end: 100634717;  */

undefined8 * FUN_1006346a8(undefined8 *param_1,undefined8 *param_2)

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
      func_0x00010060f468();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001006346f4(&uStack_30);
  return param_1;
}



/* Entry: 100634718; end: 100634723;  */

void FUN_100634718(void)

{
  return;
}



/* Entry: 100634724; end: 100634747;  */

void FUN_100634724(long param_1)

{
  FUN_100610140();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100634748; end: 100634763;  */

void FUN_100634748(void)

{
  return;
}



/* Entry: 100634764; end: 100634827;  */

void FUN_100634764(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  FUN_1005e3578();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110a609a8;
  uStack_68 = 0;
  uStack_50 = param_1;
  func_0x000100607304();
  (**(code **)(extraout_x8 + 0x20))(auStack_48);
  FUN_100634988();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110a609a8;
  uStack_68 = 0;
  uStack_50 = param_1;
  FUN_1006071ec(&ppuStack_70,param_3);
  FUN_1005e3578();
  func_0x000100607304();
  (*(code *)*extraout_x8_00)();
  FUN_100634988();
  func_0x000107c60ca0(auStack_48);
  return;
}



/* Entry: 100634828; end: 10063488f;  */

void FUN_100634828(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x88);
  uVar2 = (ulong)*(uint *)(param_2 + 0x10);
  (**(code **)(*param_3 + 0x10))(param_3);
  FUN_1006348c8(uVar1,uVar2,param_3);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  FUN_100060b18(param_1,&uStack_40);
  return;
}



/* Entry: 100634890; end: 1006348c7;  */

undefined1  [16] FUN_100634890(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *unaff_x19;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((ulong)((param_1[1] - *param_1) / 0x48) <= (param_2 & 0xffffffff)) {
    uVar3 = (uint)param_2;
    if (0xff < uVar3) {
      func_0x000100163a20(param_1 + 3);
      uVar5 = (ulong)(uVar3 - *unaff_x19);
      if (uVar5 < (ulong)(*(long *)(unaff_x19 + 0x1a) - *(long *)(unaff_x19 + 0x18) >> 3)) {
        uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + uVar5 * 8);
      }
      else {
        uVar6 = 0;
      }
      FUN_10016432c();
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = uVar6;
      return auVar7;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  }
  auVar8._8_8_ = param_2 & 0xffffffff;
  if (auVar8._8_8_ < (ulong)((param_1[1] - *param_1) / 0x48)) {
    auVar8._0_8_ = *param_1 + auVar8._8_8_ * 0x48;
    return auVar8;
  }
  func_0x00010b4b8228();
  func_0x000107c30224();
  if (param_1 == (long *)0x0) {
    lVar4 = 0x16;
    plVar2 = (long *)&UNK_10f773b4b;
  }
  else {
    lVar4 = (long)*(char *)((long)param_1 + 0x2f);
    if (lVar4 < 0) {
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        plVar2 = (long *)param_1[3];
        goto code_r0x00010b4b7c70;
      }
    }
    else {
      plVar2 = param_1 + 3;
      if (*(char *)((long)param_1 + 0x2f) != '\0') goto code_r0x00010b4b7c70;
    }
    lVar4 = (long)*(char *)((long)param_1 + 0x17);
    plVar2 = param_1;
    if (lVar4 < 0) {
      plVar2 = (long *)*param_1;
      lVar4 = param_1[1];
    }
  }
code_r0x00010b4b7c70:
  auVar9._8_8_ = lVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}



/* Entry: 1006348c8; end: 100634987;  */

undefined1  [16] FUN_1006348c8(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  FUN_100634890();
  if (param_1 == 0) {
    plVar2 = (long *)&UNK_10f773b62;
    uVar3 = 0x18;
  }
  else {
    plVar1 = (long *)(param_1 + 0x30);
    if ((ulong)param_3 < (ulong)((*(long *)(param_1 + 0x38) - *plVar1) / 0x18)) {
      FUN_100164c00(plVar1,param_3);
      plVar2 = (long *)*plVar1;
      uVar3 = plVar1[1];
      if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
        plVar2 = plVar1;
        uVar3 = (ulong)*(byte *)((long)plVar1 + 0x17);
      }
    }
    else {
      plVar2 = (long *)&UNK_10f773b62;
      uVar3 = 0x18;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = plVar2;
  return auVar4;
}



/* Entry: 100634988; end: 1006349bf;  */

void FUN_100634988(void)

{
  undefined **ppuStack0000000000000000;
  
  ppuStack0000000000000000 = &PTR_DAT_110a60a10;
  FUN_1000e30f4(&stack0x00000008);
  return;
}



/* Entry: 1006349c0; end: 1006353bf;  */

void FUN_1006349c0(ulong param_1,long param_2,ulong param_3,int *param_4,uint *param_5,long param_6)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  uint *puVar10;
  ushort uVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *puVar12;
  long extraout_x8_04;
  ulong uVar13;
  int extraout_w11;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  undefined8 uVar18;
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [40];
  undefined1 auStack_4a8 [24];
  undefined **ppuStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  byte *pbStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  ulong uStack_3c8;
  ulong uStack_3c0;
  undefined1 uStack_3b8;
  undefined1 auStack_3b0 [144];
  ulong auStack_320 [4];
  undefined4 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  byte bStack_2d9;
  uint uStack_2d8;
  byte bStack_2d4;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [416];
  undefined1 auStack_118 [24];
  long lStack_100;
  ulong uStack_f8;
  uint *puStack_f0;
  undefined **appuStack_e8 [2];
  ulong *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_18;
  
  func_0x0001006349a8();
  uVar16 = param_1;
  puVar10 = param_5;
  lVar9 = param_6;
  FUN_100635400();
  lStack_100 = lVar9;
  uStack_f8 = uVar16;
  puStack_f0 = puVar10;
  uStack_18 = extraout_x8;
  FUN_10007847c(auStack_118,&UNK_10f4b20ae);
  FUN_1005fded0(auStack_2b8,*(long *)(param_1 + 0xb0) + 0xc0,2);
  FUN_10002b838(appuStack_e8,&DAT_10f3811b7);
  func_0x000100635410((long)*(int *)(param_1 + 0x7c));
  FUN_10002b838(&uStack_3f0);
  func_0x000100635420();
  FUN_100635470();
  func_0x000100635478();
  uVar4 = (char)param_4[1] == '\x01';
  if ((bool)uVar4) {
    FUN_10002b838(appuStack_e8,&DAT_10f4b05df);
    FUN_10002b838(&uStack_3f0,(&PTR_DAT_110a67660)[*param_4]);
    func_0x000100635420();
    FUN_100635470();
    func_0x000100635478();
  }
  func_0x000100635480();
  func_0x00010063548c();
  func_0x000100635498();
  uStack_c8 = 0x2e;
  FUN_10002b838(auStack_2d0,&UNK_10f4b20d4);
  pppuVar5 = appuStack_e8;
  FUN_1005e340c(pppuVar5,auStack_2d0,param_3);
  func_0x0001006354a8(*(undefined4 *)(param_1 + 0x7c));
  FUN_1006354d8();
  FUN_1005fe148(auStack_2b8,pppuVar5);
  puVar6 = auStack_2d0;
  func_0x000107c60ca0();
  func_0x00010063558c();
  if (-1 < param_2) {
    uVar15 = (uint)param_3;
    uVar4 = uVar15 == 0;
    if (0 < (int)uVar15) {
      if (param_2 == 0x7fffffffffffffff && uVar15 == 0x7fffffff) {
        uVar17 = (byte)param_5[4] ^ 1;
      }
      else {
        uVar17 = 0;
      }
      uStack_2d8 = uStack_2d8 & 0xffffff00;
      bStack_2d4 = 0;
      func_0x000107c60d9c();
      if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x88) == '\x01')) {
        uStack_2d8 = *(uint *)(param_1 + 0x8c);
        bStack_2d4 = 1;
        uVar2 = uStack_2d8;
        if (*(char *)(param_1 + 0xa0) == '\0') {
          uVar2 = uVar15;
        }
        param_3 = (ulong)uVar2;
      }
      bStack_2d9 = 0;
      lStack_2f0 = 0;
      lStack_2f8 = 0;
      uStack_2e8 = 0;
      auStack_320[0] = auStack_320[0] & 0xffffffffffffff00;
      auStack_320[3] = auStack_320[3] & 0xffffffffffffff00;
      appuStack_e8[0] = (undefined **)((ulong)appuStack_e8[0] & 0xffffffffffffff00);
      uStack_b8 = 0;
      FUN_1006355a0(&uStack_3f0,*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x60),
                    *(undefined4 *)(param_1 + 0x7c),param_2,auStack_320,appuStack_e8,param_3,param_4
                    ,&uStack_2d8);
      plStack_420 = &lStack_2f8;
      pbStack_418 = &bStack_2d9;
      FUN_1006a257c(&plStack_420,&uStack_3f0);
      func_0x00010063350c(&uStack_3f0);
      FUN_1006a2628(appuStack_e8);
      FUN_1005fce88(auStack_320);
      lVar3 = lStack_2f0;
      lVar9 = lStack_2f8;
      auStack_320[2] = 0;
      auStack_320[3] = 0;
      func_0x000100635480();
      auStack_320[0] = extraout_x8_00 + 0x10;
      auStack_320[1] = 0;
      uStack_300 = 0x2f;
      FUN_1006a2668(auStack_2b8);
      uVar16 = (lVar3 - lVar9) / 0x378;
      plVar7 = *(long **)(*(long *)(param_1 + 0xb0) + 0xc0);
      (**(code **)(*plVar7 + 0x70))(plVar7,0x2d,uVar16 & 0xffffffff);
      uVar11 = (ushort)bStack_2d9;
      uVar15 = (uint)uVar16;
      if ((bStack_2d4 & 1) == 0) {
LAB_100634c5c:
        uVar11 = (byte)param_5[4] & uVar11 & (ushort)(uVar15 != 0);
      }
      else {
        uVar11 = 1;
        if ((uVar15 <= uStack_2d8) && ((bStack_2d9 & 1) == 0)) {
          uVar11 = 0;
          goto LAB_100634c5c;
        }
      }
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_408 = 0;
      func_0x0001006327cc(&uStack_3f0,&uStack_408);
      func_0x0001005fb56c(&uStack_408);
      uStack_3f0 = CONCAT44(2,(undefined4)uStack_3f0);
      uStack_3e8 = CONCAT71(uStack_3e8._1_7_,1);
      if (((uVar17 & uVar11) != 0) || ((char)param_5[4] == '\x01')) {
        uStack_3f0 = CONCAT62(uStack_3f0._2_6_,uVar11) ^ 1 | 0x100;
      }
      if (*(char *)(param_6 + 0x18) == '\x01') {
        FUN_10054f8dc(appuStack_e8,param_6);
        if (CONCAT44(uStack_3cc,iStack_3d0) - uStack_3e0 < 0x18) {
          FUN_10065ad8c(&uStack_3e0);
          uVar1 = (long)(CONCAT44(uStack_3cc,iStack_3d0) - uStack_3e0) / 0x18;
          uVar13 = uVar1 * 2;
          if (uVar13 < 2) {
            uVar13 = 1;
          }
          if (0x555555555555554 < uVar1) {
            uVar13 = 0xaaaaaaaaaaaaaaa;
          }
          FUN_100658030(&uStack_3e0,uVar13);
          pppuVar5 = appuStack_e8;
          lVar9 = 1;
LAB_100634d7c:
          FUN_1006a2770(&uStack_3e0,pppuVar5,auStack_d0,lVar9);
        }
        else {
          if (uStack_3d8 - uStack_3e0 < 0x18) {
            pppuVar5 = (undefined ***)((long)appuStack_e8 + (uStack_3d8 - uStack_3e0));
            func_0x000107c29558(appuStack_e8,pppuVar5);
            lVar9 = (long)(uStack_3d8 - uStack_3e0) / -0x18 + 1;
            goto LAB_100634d7c;
          }
          pppuVar5 = appuStack_e8;
          func_0x000107c29558(pppuVar5,auStack_d0);
          FUN_10065add4(&uStack_3e0,pppuVar5);
        }
        FUN_100100fec(appuStack_e8);
      }
      plStack_420 = (long *)0x0;
      pbStack_418 = (byte *)0x0;
      uStack_410 = 0;
      plVar7 = *(long **)(*(long *)(param_1 + 0xb0) + 0x180);
      uVar13 = param_1;
      FUN_1006a27b0(param_1,&lStack_2f8,&plStack_420);
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      uStack_450 = 0;
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_468 = 0;
      uStack_460 = 0;
      uStack_458 = 0;
      FUN_100632b18(appuStack_e8,&uStack_3f0);
      (**(code **)(*plVar7 + 0x10))(plVar7,uVar13,&uStack_438,&uStack_450,&uStack_468,appuStack_e8);
      FUN_100633354(appuStack_e8);
      func_0x0001006333b4(&uStack_468);
      func_0x000100633494(&uStack_450);
      func_0x000100633408(&uStack_438);
      func_0x0001005505a0(appuStack_e8,auStack_320);
      uStack_c0 = 1;
      FUN_1006a2aac(auStack_2b8,appuStack_e8);
      FUN_1006a5b38(appuStack_e8);
      func_0x00010063350c(&plStack_420);
      func_0x000100633328(&uStack_3f0);
      if ((uVar17 & 1) != 0) {
        plVar7 = *(long **)(*(long *)(param_1 + 0xb0) + 0xc0);
        uStack_480 = 0;
        uStack_478 = 0;
        func_0x000100635480();
        uStack_488 = 0;
        uStack_470 = 0x37;
        ppuStack_490 = (undefined **)(extraout_x8_01 + 0x10);
        (**(code **)(*plVar7 + 0x50))();
        pppuVar5 = &ppuStack_490;
        FUN_1005505e4(pppuVar5);
        func_0x000107c60d9c();
        FUN_1006a5b90((long)pppuVar5 - (long)puVar6);
        plVar7 = *(long **)(extraout_x8_02 + 0xc0);
        func_0x00010063548c();
        appuStack_e8[1] = (undefined **)0x0;
        uStack_c8 = 0x38;
        appuStack_e8[0] = (undefined **)(extraout_x8_01 + 0x10);
        FUN_10002b838(auStack_4a8,&UNK_10f4b0ebd);
        func_0x000100607370(uVar16);
        pppuVar5 = appuStack_e8;
        FUN_1005504ac(pppuVar5,auStack_4a8,uVar16);
        (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5,&uStack_3f0);
        func_0x000107c60ca0(auStack_4a8);
        func_0x00010063558c();
        if (bStack_2d4 == 1) {
          *param_5 = 0;
          *(undefined1 **)(param_5 + 2) = puVar6;
          if ((param_5[4] & 1) == 0) {
            *(undefined1 *)(param_5 + 4) = 1;
          }
        }
      }
      uVar4 = (char)param_5[4] == '\x01';
      if ((bool)uVar4) {
        *param_5 = *param_5 + 1;
        if (uVar11 == 0) {
          plVar7 = *(long **)(*(long *)(param_1 + 0xb0) + 0xc0);
          func_0x00010063548c();
          func_0x000100635480();
          func_0x000100635498();
          uStack_c8 = 0x35;
          FUN_10002b838(auStack_4e8,&DAT_10f637eac);
          uVar16 = (ulong)*param_5;
          func_0x000100607370(uVar16);
          pppuVar5 = appuStack_e8;
          FUN_1005504ac(pppuVar5,auStack_4e8,uVar16);
          puVar6 = auStack_4d0;
          func_0x0001005505a0(puVar6,pppuVar5);
          FUN_1006a5c28(*(undefined8 *)(*plVar7 + 0x50));
          func_0x0001006a5c34();
          func_0x0001006a5c3c();
          func_0x00010063558c();
          func_0x000107c60d9c();
          FUN_1006a5b90((long)puVar6 - *(long *)(param_5 + 2));
          plVar7 = *(long **)(extraout_x8_04 + 0xc0);
          func_0x00010063548c();
          func_0x000100635480();
          func_0x000100635498();
          uStack_c8 = 0x36;
          FUN_10002b838(auStack_500,&DAT_10f637eac);
          uVar16 = (ulong)*param_5;
          func_0x000100607370(uVar16);
          pppuVar5 = appuStack_e8;
          FUN_1005504ac(pppuVar5,auStack_500,uVar16);
          (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5,&uStack_3f0);
          func_0x000107c60ca0(auStack_500);
          func_0x00010063558c();
        }
        else {
          uVar2 = uStack_2d8 - 1;
          uVar15 = uVar15 - 1;
          uVar4 = uVar15 == uVar2;
          if (uVar2 <= uVar15) {
            uVar15 = uVar2;
          }
          uVar16 = *(ulong *)(lStack_2f8 + (ulong)uVar15 * 0x378 + 0x18);
          FUN_10054f8dc(&plStack_420);
          puVar12 = &uStack_3f0;
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x1b0);
          uStack_3e0 = *(ulong *)(param_1 + 0x28);
          uStack_3e8 = *(ulong *)(param_1 + 0x20);
          uStack_3f0 = param_1;
          if (*(long *)(param_1 + 0x28) != 0) {
            do {
              FUN_100570568();
              puVar12 = extraout_x8_03;
            } while (extraout_w11 != 0);
          }
          iStack_3d0 = *param_4;
          uStack_3cc = CONCAT31(uStack_3cc._1_3_,(char)param_4[1]);
          uVar18 = *(undefined8 *)param_5;
          puVar12[6] = *(undefined8 *)(param_5 + 2);
          puVar12[5] = uVar18;
          uStack_3b8 = (undefined1)param_5[4];
          uStack_3d8 = uVar16;
          FUN_100606fd8(auStack_3b0,param_6);
          plVar7 = *(long **)(*(long *)(param_1 + 0xb0) + 0x20);
          (**(code **)(*plVar7 + 0x28))(plVar7,*(long *)(param_1 + 0x98) * 1000000);
          appuStack_e8[0] = (undefined **)&UNK_108700d50;
          appuStack_e8[1] = &PTR_DAT_110a67b68;
          puVar8 = (ulong *)0x60;
          func_0x000107c60e20();
          puVar8[1] = uStack_3e8;
          *puVar8 = uStack_3f0;
          puVar8[2] = uStack_3e0;
          *(undefined8 *)((ulong)&uStack_3f0 | 8) = 0;
          ((undefined8 *)((ulong)&uStack_3f0 | 8))[1] = 0;
          puVar8[4] = CONCAT44(uStack_3cc,iStack_3d0);
          puVar8[3] = uStack_3d8;
          puVar8[6] = uStack_3c0;
          puVar8[5] = uStack_3c8;
          *(undefined1 *)(puVar8 + 7) = uStack_3b8;
          FUN_100606fd8(puVar8 + 8,auStack_3b0);
          puStack_d8 = puVar8;
          func_0x000107c31468(&uStack_438,uVar14,appuStack_e8,plVar7);
          func_0x000107c32c9c();
          FUN_100688f2c(&uStack_438);
          func_0x000107c29528(&uStack_3f0);
          FUN_100100fec(&plStack_420);
        }
      }
      FUN_1005505e4(auStack_320);
      func_0x00010063350c(&lStack_2f8);
      goto LAB_1006351a0;
    }
  }
  func_0x000107c2952c(&lStack_100,4);
LAB_1006351a0:
  FUN_1006a5ca8(auStack_2b8);
  FUN_100078bd8(auStack_118);
  func_0x0001006a5d30(uStack_18);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c32c9c();
    func_0x000107c29528(&uStack_3f0);
    FUN_100100fec(&plStack_420);
    FUN_1005505e4(auStack_320);
    func_0x00010063350c(&lStack_2f8);
    FUN_1006a5ca8(auStack_2b8);
    puVar6 = auStack_118;
    FUN_100078bd8();
    func_0x000107c32be4();
    if ((puVar6[0xb8] & 1) == 0) {
      FUN_1006349c0();
    }
    return;
  }
  return;
}



/* Entry: 1006353c0; end: 1006353ff;  */

void FUN_1006353c0(long param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    FUN_1006349c0();
  }
  return;
}



/* Entry: 100635400; end: 10063542f;  */

void FUN_100635400(void)

{
  return;
}



/* Entry: 100635430; end: 10063546f;  */

bool FUN_100635430(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x118);
  if (lVar1 != 3) {
    FUN_10060413c(param_1 + 0x100);
    func_0x000107c60ca4();
  }
  return lVar1 != 3;
}



/* Entry: 100635470; end: 1006354d7;  */

void FUN_100635470(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000120);
  return;
}



/* Entry: 1006354d8; end: 10063552f;  */

void FUN_1006354d8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001006354c4();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000100635530();
  }
  else {
    func_0x000107c327c0();
  }
  func_0x000100635544();
  func_0x00010063554c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000100635558();
  }
  else {
    func_0x000107c327b8();
  }
  func_0x000100635568();
  func_0x000100635574();
  return;
}



/* Entry: 100635530; end: 10063559f;  */

void FUN_100635530(void)

{
  return;
}



/* Entry: 1006355a0; end: 100635763;  */

void FUN_1006355a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  long unaff_x20;
  long *plVar4;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000100635594();
  if (((int)param_2 == 2) && ((*(byte *)(unaff_x20 + 0x40) & 1) != 0)) {
    uStack_48 = 0;
    FUN_1004b4e98();
    uStack_38 = 1;
    uStack_40 = param_1;
    func_0x000107c29714(&lStack_60,*(undefined8 *)(unaff_x20 + 0x10));
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_88 = &PTR_DAT_110a609a8;
    uStack_80 = 0;
    uStack_68 = 0x31;
    if ((char)param_7[1] == '\x01') {
      FUN_10002b838(auStack_a0,&DAT_10f4b05df);
      pppuVar1 = &ppuStack_88;
      FUN_1005504ac(pppuVar1,auStack_a0,(&PTR_DAT_110a68290)[*param_7]);
      FUN_100607298(&ppuStack_88,pppuVar1);
      func_0x000107c60ca0(auStack_a0);
    }
    FUN_10002b838(auStack_b8,&UNK_10f4b2029);
    lVar2 = (lStack_58 - lStack_60) / 0x378;
    func_0x000100607370(lVar2);
    pppuVar1 = &ppuStack_88;
    FUN_1005504ac(pppuVar1,auStack_b8,lVar2);
    FUN_100607298(&ppuStack_88,pppuVar1);
    func_0x000107c32df0();
    plVar4 = *(long **)(unaff_x20 + 0x30);
    puVar3 = &uStack_48;
    FUN_1005e3518();
    puStack_c0 = puVar3;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_88,&puStack_c0);
    unaff_x19[1] = lStack_58;
    *unaff_x19 = lStack_60;
    unaff_x19[2] = lStack_50;
    lStack_60 = 0;
    lStack_58 = 0;
    lStack_50 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 0;
    func_0x000107c32dec();
    func_0x00010063350c(&lStack_60);
  }
  else {
    FUN_10063576c(param_2,param_3,param_4,param_5,param_6,param_7,unaff_x20 + 0x30);
  }
  return;
}



/* Entry: 100635764; end: 10063576b;  */

void FUN_100635764(void)

{
  undefined8 uStack0000000000000058;
  
  uStack0000000000000058 = 0;
  func_0x0001004b4e78();
  return;
}



/* Entry: 10063576c; end: 1006359df;  */

void FUN_10063576c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_120 [28];
  undefined4 uStack_104;
  long *plStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_81;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  uStack_81 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  FUN_100635764();
  FUN_1006359e0();
  FUN_1006359f0(&uStack_e8,param_2,param_3,param_4,param_5,param_6,param_9,param_10);
  plStack_100 = &lStack_80;
  puStack_f8 = &uStack_81;
  FUN_10065ccdc(&plStack_100,&uStack_e8);
  FUN_10065cc64(&uStack_e8);
  func_0x000100607370((lStack_78 - lStack_80) / 0x3d0);
  FUN_10065cd74(&uStack_e8);
  func_0x00010065cd7c(auStack_c8,0x31);
  func_0x00010065cf38();
  FUN_100635764();
  FUN_1006359e0();
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_10065cf40(&uStack_e8,(lStack_78 - lStack_80) / 0x3d0);
  lVar1 = lStack_78;
  for (lVar2 = lStack_80; lVar2 != lVar1; lVar2 = lVar2 + 0x3d0) {
    FUN_10065d008(&uStack_e8,lVar2);
  }
  FUN_10065cd74(&plStack_100);
  func_0x00010065cd7c(auStack_c8,0x32);
  func_0x00010065cf30();
  FUN_100635764();
  FUN_1006359e0();
  uStack_104 = 0;
  (**(code **)(*(long *)*param_10 + 0xc0))
            (&plStack_100,(long *)*param_10,&lStack_80,&uStack_104,param_11);
  FUN_10065cd74(auStack_120);
  FUN_10065cd98(auStack_c8,0x33,param_7,auStack_120,uStack_104,1,param_8);
  func_0x000107c60ca0(auStack_120);
  param_1[1] = puStack_f8;
  *param_1 = plStack_100;
  param_1[2] = uStack_f0;
  plStack_100 = (long *)0x0;
  puStack_f8 = (undefined1 *)0x0;
  uStack_f0 = 0;
  *(undefined1 *)(param_1 + 3) = uStack_81;
  func_0x00010063350c(&plStack_100);
  func_0x0001005fb56c(&uStack_e8);
  FUN_1006a2498(&uStack_b0);
  FUN_10065cc64(&lStack_80);
  return;
}



/* Entry: 1006359e0; end: 1006359ef;  */

void FUN_1006359e0(void)

{
  return;
}



/* Entry: 1006359f0; end: 100635cef;  */

void FUN_1006359f0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *extraout_x8;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_17c0 [1000];
  undefined1 auStack_13d8 [976];
  long alStack_1008 [123];
  byte bStack_c30;
  long alStack_c28 [123];
  byte bStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [984];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_450 = 0;
  if (*(char *)(param_4 + 6) == '\x01') {
    if ((*(uint *)(param_4 + 1) & 1) == 0) {
      uStack_840 = 0;
      uStack_848 = 0;
      uStack_838 = 0;
      func_0x000107c29500(extraout_x8,&uStack_848);
      *(undefined1 *)(extraout_x8 + 3) = 0;
      FUN_10065cc64(&uStack_848);
      goto LAB_100635c40;
    }
    uVar6 = *param_6;
    uVar5 = *param_4;
    FUN_100606fd8(auStack_17c0,param_4 + 2);
    if (2 < param_1 - 1U) {
      param_1 = 0;
    }
    func_0x000107c2a000(&uStack_848,uVar6,param_2,param_3,uVar5,auStack_17c0,param_5 + 1,param_1);
    FUN_1005fce88(auStack_17c0);
  }
  else {
    if (2 < param_1 - 1U) {
      param_1 = 0;
    }
    FUN_100635cf0(&uStack_848,*param_6,param_2,param_5 + 1,param_1);
  }
  func_0x0001006577b0(alStack_c28,&uStack_848);
  func_0x000107c60ee4(alStack_1008,0x3e0);
  iVar4 = (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)) + 1;
  while( true ) {
    if ((((bStack_850 & 1) == 0) && ((bStack_c30 & 1) == 0)) || (alStack_c28[0] == alStack_1008[0]))
    {
      uVar3 = 0;
      goto LAB_100635c08;
    }
    plVar1 = alStack_c28;
    FUN_10065798c();
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
    if (plVar1[0x6f] == plVar1[0x70]) {
      FUN_1006579fc(&uStack_460,plVar1);
    }
    else {
      (**(code **)(*(long *)*param_7 + 0x170))((long *)*param_7,plVar1,plVar1 + 0x6f,1);
      func_0x000107c29fd0(auStack_17c0,*param_6,plVar1);
      func_0x0001006577b0(auStack_440,auStack_17c0);
      puVar2 = auStack_440;
      FUN_10065798c(puVar2);
      FUN_100657ca8(auStack_13d8,puVar2);
      FUN_10065cac8(auStack_438);
      func_0x000107c291b8(&uStack_460,auStack_13d8);
      FUN_100657324(auStack_13d8);
      FUN_10065cae8(auStack_17c0);
    }
    FUN_100636aa4(alStack_c28);
  }
  uVar3 = 1;
LAB_100635c08:
  FUN_10065cac0(alStack_1008);
  FUN_10065cac0(alStack_c28);
  FUN_10065cae8(&uStack_848);
  extraout_x8[1] = uStack_458;
  *extraout_x8 = uStack_460;
  extraout_x8[2] = uStack_450;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  *(undefined1 *)(extraout_x8 + 3) = uVar3;
LAB_100635c40:
  FUN_10065cc48();
  return;
}



/* Entry: 100635cf0; end: 100635d07;  */

void FUN_100635cf0(long param_1,long param_2,int param_3,int param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100635cf8();
  if ((bool)in_ZR) {
    FUN_100635e94(*(undefined8 *)(param_1 + 8));
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      uStack_60 = 0;
      uStack_58 = 0;
      func_0x000107c34210();
      func_0x000107c34374(auStack_c8);
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c34734();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  if (param_2 == 0x7fffffffffffffff) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x4848;
    FUN_100635ea4();
    FUN_1005edcd4();
    FUN_1005edcd4(lVar1,2,(long)param_3);
    lStack_b0 = lVar1;
    FUN_100636a38();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20) + 0x46e0;
    FUN_100635ea4();
    FUN_1005edcd4();
    FUN_1005edcd4(lVar1,2,(long)param_4);
    FUN_1005edcd4(lVar1,3,(long)param_3);
    lStack_b0 = lVar1;
    FUN_100636a38();
  }
  return;
}



/* Entry: 100635d08; end: 100635e93;  */

void FUN_100635d08(long param_1,long param_2,int param_3,int param_4,ulong param_5)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100635cf8();
  if ((bool)in_ZR) {
    FUN_100635e94(*(undefined8 *)(param_1 + 8));
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      uStack_60 = 0;
      uStack_58 = 0;
      func_0x000107c34210();
      func_0x000107c34374(auStack_c8);
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c34734();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  if ((param_2 == 0x7fffffffffffffff) && ((param_5 & 1) == 0)) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x4848;
    FUN_100635ea4();
    FUN_1005edcd4();
    FUN_1005edcd4(lVar1,2,(long)param_3);
    lStack_b0 = lVar1;
    FUN_100636a38();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20) + 0x46e0;
    FUN_100635ea4();
    FUN_1005edcd4();
    FUN_1005edcd4(lVar1,2,(long)param_4);
    FUN_1005edcd4(lVar1,3,(long)param_3);
    lStack_b0 = lVar1;
    FUN_100636a38();
  }
  return;
}



/* Entry: 100635e94; end: 100635ea3;  */

void FUN_100635e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100635ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  return;
}



/* Entry: 100635ea4; end: 100635f4f;  */

undefined8 * FUN_100635ea4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 auStack_c8 [19];
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      if (param_4 < 0) {
        lVar1 = *(long *)(unaff_x19 + 0x48);
      }
      else {
        lVar1 = unaff_x19 + 0x48;
      }
      param_1 = auStack_c8;
      FUN_100635f50(param_1,param_2,lVar1);
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_100635f1c;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_100635f1c:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return (undefined8 *)(unaff_x20 + 0x10);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7e1a8;
  return param_1;
}



/* Entry: 100635f50; end: 100635f6f;  */

void FUN_100635f50(undefined8 *param_1)

{
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7e1a8;
  return;
}



/* Entry: 100635f70; end: 10063616b; -[SCPreviewABProviderImpl initWithCircumstanceEngine:snapchatterServices:ucoStudySettingsProvider:snapProProfilesProvider:preferences:appStartExperimentReader:] */

undefined8 *
FUN_100635f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126e99a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10063616c; end: 10063618f;  */

void FUN_10063616c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010063618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))
            ((long *)*puVar1,puVar1 + 2,puVar1 + 8,puVar1 + 5,puVar1 + 0xb,puVar1 + 0xe);
  return;
}



/* Entry: 100636190; end: 1006361eb;  */

void FUN_100636190(void)

{
  long in_stack_00000000;
  long in_stack_00000010;
  
  func_0x000100567124();
  FUN_1006361ec();
  func_0x000100636200();
  if (in_stack_00000000 != 0) {
    FUN_10054fc78();
    FUN_100636268();
  }
  if (in_stack_00000010 != 0) {
    FUN_10054fc78();
    FUN_100636268();
  }
  FUN_10063e0d4();
  return;
}



/* Entry: 1006361ec; end: 10063620b;  */

void FUN_1006361ec(void)

{
  return;
}



/* Entry: 10063620c; end: 100636267;  */

void FUN_10063620c(undefined8 param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001004b4d6c();
  func_0x000107c60d88(param_2 + 8);
  lVar1 = *(long *)(unaff_x19 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x50);
  *unaff_x20 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(unaff_x19 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
  unaff_x20[3] = *(undefined8 *)(unaff_x19 + 0x60);
  unaff_x20[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 100636268; end: 10063627f;  */

void FUN_100636268(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00010063627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100636280; end: 100636533;  */

void FUN_100636280(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x000107c6110c();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_100636534(param_2);
  func_0x000107c61180();
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  lVar1 = param_3[1];
  for (lVar4 = *param_3; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
    func_0x000108633978(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798();
    func_0x00010063e0cc();
  }
  FUN_1006365ec();
  func_0x0001006365f4();
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  lVar1 = param_4[1];
  for (lVar4 = *param_4; lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
    func_0x000108623378(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798();
    func_0x00010063e0c4();
  }
  FUN_1006365ec();
  func_0x0001006365f4();
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  lVar1 = param_5[1];
  for (lVar4 = *param_5; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    func_0x000108633a64(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798();
    func_0x00010063e0bc();
  }
  FUN_1006365ec();
  func_0x0001006365f4();
  if (*(char *)(param_6 + 200) == '\x01') {
    FUN_1006365fc(param_6);
    func_0x000107c61180();
  }
  else {
    param_6 = 0;
  }
  func_0x000107c4dc0c(uVar3);
  func_0x000107c61170(param_6);
  func_0x00010063e0bc();
  func_0x00010063e0c4();
  func_0x00010063e0cc();
  FUN_10049dab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 100636534; end: 1006365eb;  */

void FUN_100636534(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x378);
  func_0x000107c61180();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x378) {
    lVar3 = lVar4;
    FUN_1006a7a88(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,lVar3);
    FUN_1005f2360();
  }
  func_0x000107c40794(puVar2);
  FUN_10049dab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006365ec; end: 1006365fb;  */

void FUN_1006365ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1006365fc; end: 10063676b;  */

void FUN_1006365fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126daa38;
  func_0x000107c610f4(PTR_PTR_1126daa38);
  lVar2 = param_1;
  FUN_10063676c(param_1);
  func_0x000107c61180();
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 4));
    func_0x000107c61180();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  lVar3 = param_1 + 0x10;
  FUN_10060ab28(lVar3);
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar5 = param_1 + 0x28;
    FUN_10086d7c4(lVar5);
    func_0x000107c61180();
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    param_1 = param_1 + 0x40;
    FUN_1006367a0(param_1);
    func_0x000107c61180();
  }
  else {
    param_1 = 0;
  }
  func_0x000107c48af0(puVar1,param_2,lVar2,puVar4,lVar3,lVar5,param_1);
  FUN_100637190();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10063676c; end: 10063679f;  */

void FUN_10063676c(undefined1 *param_1)

{
  if (param_1[1] == '\x01') {
    FUN_1006368b8(*param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006367a0; end: 100636857;  */

void FUN_1006367a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126daa40;
  func_0x000107c610f4(PTR_PTR_1126daa40);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    lVar2 = param_1;
    FUN_10086d878(param_1);
    func_0x000107c61180();
  }
  else {
    lVar2 = 0;
  }
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    param_1 = param_1 + 0x78;
    FUN_100636858(param_1);
    func_0x000107c61180();
  }
  else {
    param_1 = 0;
  }
  func_0x000107c48b98(puVar1,param_2,lVar2,param_1);
  FUN_100637008();
  func_0x000100637014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100636858; end: 1006368b7;  */

void FUN_100636858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dab68;
  func_0x000107c610f4(PTR_PTR_1126dab68);
  FUN_10063676c(param_1);
  func_0x000107c61180();
  func_0x000107c47574(puVar1,param_2,param_1);
  FUN_100636f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006368b8; end: 1006368e3;  */

void FUN_1006368b8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006368e4; end: 10063695f; -[SCNMessagingPrefetchFeedUpdateMetadata initWithLoginPaginationComplete:] */

undefined1 * FUN_1006368e4(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  FUN_100636960();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c61174();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170();
  return puVar1;
}



/* Entry: 100636960; end: 10063696f;  */

void FUN_100636960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100636970; end: 1006369e3; -[SCPreviewABServices initWithABProvider:] */

undefined1 * FUN_100636970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112704580;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006369e4; end: 100636a37;  */

void FUN_1006369e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100636a38; end: 100636a43;  */

void FUN_100636a38(void)

{
  FUN_1005ec7e4();
  FUN_100636a68();
  return;
}



/* Entry: 100636a44; end: 100636a67;  */

void FUN_100636a44(void)

{
  FUN_1005ec7e4();
  FUN_100636a68();
  return;
}



/* Entry: 100636a68; end: 100636a97;  */

void FUN_100636a68(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  FUN_100636aa4();
  return;
}



/* Entry: 100636a98; end: 100636aa3;  */

undefined8 FUN_100636a98(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 100636aa4; end: 100636b0b;  */

void FUN_100636aa4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_3f0 [976];
  
  FUN_100636a98();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    FUN_100637dd8(auStack_3f0,*unaff_x19);
    FUN_100656c88(unaff_x19 + 1,auStack_3f0);
    func_0x00010065731c();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x7b) == '\x01') {
    FUN_100657324();
    *(undefined1 *)(puVar1 + 0x7a) = 0;
  }
  return;
}



/* Entry: 100636b0c; end: 100636b13;  */

void FUN_100636b0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100636b14; end: 100636b67;  */

void FUN_100636b14(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100636b68; end: 100636b77;  */

void FUN_100636b68(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002d0d2c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a91b0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00c430);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100636b78; end: 100636f3b;  */

void FUN_100636b78(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002d0d2c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a91b0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00c430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100636f3c; end: 100636f47;  */

void FUN_100636f3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100636f48; end: 100637007; -[SCNMessagingFeedUpdateTypeMetadata initWithSyncMetadata:prefetchMetadata:] */

undefined1 *
FUN_100636f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112706f68;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100637008; end: 10063701b;  */

void FUN_100637008(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10063701c; end: 10063718f; -[SCNMessagingFeedUpdateMetadata initWithStreamingUpdateEnd:feedUpdateTriggerType:updateOperationIds:paginationUpdate:feedUpdateTypeMetadata:] */

undefined1 *
FUN_10063701c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_112706f60;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100637190; end: 10063719b;  */

void FUN_100637190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10063719c; end: 1006373ef; -[SCArroyoFeedDataUpdateAnnouncer onFeedEntriesUpdated:multiRecipientEntries:feedEntriesDeleted:multiRecipientEntriesDeleted:updateMetadata:] */

/* WARNING: Possible PIC construction at 0x000100637250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100637274) */
/* WARNING: Removing unreachable block (ram,0x000100637264) */
/* WARNING: Removing unreachable block (ram,0x000100637254) */
/* WARNING: Removing unreachable block (ram,0x000100637288) */

void FUN_10063719c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110894cb0);
  func_0x000107c41df8(*(undefined8 *)(param_1 + 8));
  func_0x000107c610f4(PTR_PTR_1126ba460);
  func_0x000107c490f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1006373f0; end: 100637563; -[SCArroyoFeedDataUpdateListenerAnnouncer didUpdateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:] */

/* WARNING: Possible PIC construction at 0x000100637494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006374dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006374ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006374e0) */
/* WARNING: Removing unreachable block (ram,0x000100637498) */
/* WARNING: Removing unreachable block (ram,0x0001006374f0) */

void FUN_1006373f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_60;
  long *plStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  FUN_100637920(&plStack_60,param_1 + 0x48);
  if ((plStack_60 == (long *)0x0) || (lVar4 = *plStack_60, lVar4 == plStack_60[1])) {
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        func_0x000107c60d68(plStack_58);
      }
    }
  }
  else {
    func_0x000107c61148(lVar4);
    func_0x000107c41df8();
    param_7 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 100637564; end: 100637647; -[SCCheckInServiceProvider provide] */

void FUN_100637564(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126befc8;
  func_0x000107c610f4(PTR_PTR_1126befc8);
  func_0x000107c47c90();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100637648; end: 10063769f; -[_TtC17SCCheckInServices17SCCheckInServices initWithOptionFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100637648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113077298) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006376a0; end: 1006376eb;  */

void FUN_1006376a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006376ec; end: 1006376f3;  */

void FUN_1006376ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006376f4; end: 100637747;  */

void FUN_1006376f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100637748; end: 10063774f;  */

void FUN_100637748(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10023b164();
  func_0x000107c613fc();
  FUN_1006377c4(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100637750; end: 1006377c3;  */

void FUN_100637750(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10023b164();
  func_0x000107c613fc();
  FUN_1006377c4(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1006377c4; end: 10063791f;  */

void FUN_1006377c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8368;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 100637920; end: 10063797f;  */

void FUN_100637920(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 100637980; end: 100637b0b; -[SCNativeFeedManager didUpdateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:] */

/* WARNING: Possible PIC construction at 0x000100637a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100637aa0) */
/* WARNING: Removing unreachable block (ram,0x000100637a04) */
/* WARNING: Removing unreachable block (ram,0x000100637a30) */
/* WARNING: Removing unreachable block (ram,0x000100637af8) */
/* WARNING: Removing unreachable block (ram,0x000100637a38) */
/* WARNING: Removing unreachable block (ram,0x000100637a40) */
/* WARNING: Removing unreachable block (ram,0x000100637a0c) */
/* WARNING: Removing unreachable block (ram,0x000100637ad8) */
/* WARNING: Removing unreachable block (ram,0x000100637a10) */
/* WARNING: Removing unreachable block (ram,0x000100637a18) */
/* WARNING: Removing unreachable block (ram,0x000100637a98) */
/* WARNING: Removing unreachable block (ram,0x000100637ab0) */

void FUN_100637980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  if (param_7 == 0) {
    param_7 = *(long *)(param_1 + 0x50);
    func_0x000107c5c734(param_7);
    func_0x000107c61180();
    func_0x000107c5d47c();
  }
  else {
    func_0x000107c42f5c(param_7);
    func_0x000107c61180();
    func_0x000107c49820();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 100637b0c; end: 100637b13; -[SCNMessagingFeedUpdateMetadata feedUpdateTriggerType] */

undefined8 FUN_100637b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100637b14; end: 100637bf7; -[SCUcoDataStoreServiceProvider provide] */

void FUN_100637b14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bbe98;
  func_0x000107c610f4(PTR_PTR_1126bbe98);
  func_0x000107c49008();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100637bf8; end: 100637c6b; -[SCUcoDataStoreServices initWithUcoDataStore:] */

undefined1 * FUN_100637bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701e58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100637c6c; end: 100637c97;  */

void FUN_100637c6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100637c98; end: 100637dd7; -[SCNativeFeedManager _didPrefetchFeedUpdateFeedEntries:updateMetadata:] */

/* WARNING: Possible PIC construction at 0x000100637ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100637db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100637d50) */
/* WARNING: Removing unreachable block (ram,0x000100637d70) */
/* WARNING: Removing unreachable block (ram,0x000100637d54) */
/* WARNING: Removing unreachable block (ram,0x000100637d40) */
/* WARNING: Removing unreachable block (ram,0x000100637ce4) */
/* WARNING: Removing unreachable block (ram,0x000100637d08) */
/* WARNING: Removing unreachable block (ram,0x000100637ce8) */
/* WARNING: Removing unreachable block (ram,0x000100637db4) */

void FUN_100637c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5c150(param_4);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100637dd8; end: 10063833f;  */

void FUN_100637dd8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 unaff_x20;
  
  FUN_10054c7ec();
  FUN_100638340();
  func_0x000100638350();
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x30) = (int)uVar2;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar2 = unaff_x20;
  func_0x000100622570();
  *(char *)(param_1 + 0x40) = (char)uVar2;
  uVar2 = unaff_x20;
  FUN_10062258c(param_1 + 0x48);
  uVar1 = (undefined4)uVar2;
  func_0x00010063835c();
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  FUN_100638368(param_1 + 0x70);
  FUN_1006383c4(param_1 + 0x98);
  uVar2 = unaff_x20;
  func_0x000100622570();
  *(char *)(param_1 + 0xb0) = (char)uVar2;
  FUN_100655fec(param_1 + 0xb8);
  FUN_100655fec(param_1 + 0xd0);
  FUN_10061f61c(param_1 + 0xe8);
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  uVar3 = 0x10;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(undefined1 *)(param_1 + 0x118) = uVar3;
  uVar3 = 0x11;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  *(undefined1 *)(param_1 + 0x128) = uVar3;
  FUN_10061f61c(param_1 + 0x130);
  FUN_100656a2c(param_1 + 0x150);
  FUN_100656a2c(param_1 + 0x168);
  FUN_100656a2c(param_1 + 0x180);
  FUN_100656a2c(param_1 + 0x198);
  FUN_100655fec(param_1 + 0x1b0);
  uVar2 = unaff_x20;
  func_0x000100622570();
  *(char *)(param_1 + 0x1c8) = (char)uVar2;
  uVar3 = 0x19;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  *(undefined1 *)(param_1 + 0x1d8) = uVar3;
  uVar3 = 0x1a;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  *(undefined1 *)(param_1 + 0x1e8) = uVar3;
  uVar3 = 0x1b;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  *(undefined1 *)(param_1 + 0x1f8) = uVar3;
  uVar2 = unaff_x20;
  FUN_1006224ec();
  *(int *)(param_1 + 0x200) = (int)uVar2;
  *(char *)(param_1 + 0x204) = (char)((ulong)uVar2 >> 0x20);
  uVar3 = 0x1d;
  uVar2 = unaff_x20;
  func_0x000100622558();
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  *(undefined1 *)(param_1 + 0x210) = uVar3;
  uVar3 = 0x1e;
  uVar2 = unaff_x20;
  func_0x000100622558();
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  *(undefined1 *)(param_1 + 0x220) = uVar3;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x228) = (int)uVar2;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x22c) = (int)uVar2;
  uVar2 = unaff_x20;
  func_0x000100622570();
  *(char *)(param_1 + 0x230) = (char)uVar2;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x234) = (int)uVar2;
  FUN_10061f61c(param_1 + 0x238);
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(param_1 + 600) = uVar2;
  uVar3 = 0x25;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x260) = uVar2;
  *(undefined1 *)(param_1 + 0x268) = uVar3;
  FUN_10061f61c(param_1 + 0x270);
  FUN_10061f61c(param_1 + 0x290);
  uVar3 = 0x28;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  *(undefined1 *)(param_1 + 0x2b8) = uVar3;
  uVar2 = unaff_x20;
  func_0x000100622570();
  *(char *)(param_1 + 0x2c0) = (char)uVar2;
  uVar3 = 0x2a;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x2c8) = uVar2;
  *(undefined1 *)(param_1 + 0x2d0) = uVar3;
  uVar3 = 0x2b;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  *(undefined1 *)(param_1 + 0x2e0) = uVar3;
  uVar2 = unaff_x20;
  FUN_100656ae8();
  *(int *)(param_1 + 0x2e8) = (int)uVar2;
  *(char *)(param_1 + 0x2ec) = (char)((ulong)uVar2 >> 0x20);
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x2f0) = (int)uVar2;
  uVar3 = 0x2e;
  uVar2 = unaff_x20;
  func_0x000100622558();
  *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  *(undefined1 *)(param_1 + 0x300) = uVar3;
  uVar3 = 0x2f;
  uVar2 = unaff_x20;
  func_0x000100622558();
  *(undefined8 *)(param_1 + 0x308) = uVar2;
  *(undefined1 *)(param_1 + 0x310) = uVar3;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x318) = (int)uVar2;
  FUN_10061f61c(param_1 + 800);
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x340) = (int)uVar2;
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(param_1 + 0x344) = (int)uVar2;
  uVar2 = unaff_x20;
  FUN_100656b30();
  *(int *)(param_1 + 0x348) = (int)uVar2;
  *(char *)(param_1 + 0x34c) = (char)((ulong)uVar2 >> 0x20);
  uVar2 = unaff_x20;
  FUN_1006224ec();
  *(int *)(param_1 + 0x350) = (int)uVar2;
  *(char *)(param_1 + 0x354) = (char)((ulong)uVar2 >> 0x20);
  uVar3 = 0x36;
  uVar2 = unaff_x20;
  func_0x000100622558();
  *(undefined8 *)(param_1 + 0x358) = uVar2;
  *(undefined1 *)(param_1 + 0x360) = uVar3;
  uVar3 = 0x37;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x368) = uVar2;
  *(undefined1 *)(param_1 + 0x370) = uVar3;
  FUN_100656a2c(param_1 + 0x378);
  FUN_10061f61c(param_1 + 0x390);
  uVar2 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(param_1 + 0x3b0) = uVar2;
  uVar3 = 0x3b;
  uVar2 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x3b8) = uVar2;
  *(undefined1 *)(param_1 + 0x3c0) = uVar3;
  func_0x000100622570();
  *(char *)(param_1 + 0x3c8) = (char)unaff_x20;
  return;
}



/* Entry: 100638340; end: 100638367;  */

void FUN_100638340(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  undefined8 uStack_20;
  
  uStack_20 = param_1;
  FUN_1005ecf0c(auStack_38,param_1,0);
  FUN_10061f6bc(auStack_38);
  func_0x00010061fa30();
  return;
}



/* Entry: 100638368; end: 1006383b7;  */

void FUN_100638368(int param_1)

{
  undefined1 *unaff_x19;
  undefined1 auStack_50 [32];
  
  FUN_10061f60c();
  if (param_1 == 5) {
    *unaff_x19 = 0;
    unaff_x19[0x20] = 0;
  }
  else {
    FUN_10061f668();
    FUN_1006587f0();
    FUN_10065a650();
    FUN_10065a738(auStack_50);
  }
  return;
}



/* Entry: 1006383b8; end: 1006383c3;  */

undefined8 * FUN_1006383b8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1005ecf5c(&stack0x00000008);
  if ((int)param_2 == 4) {
    func_0x000107c61350();
    func_0x000107c6134c();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10029a7f4();
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_2;
}



/* Entry: 1006383c4; end: 1006383f3;  */

void FUN_1006383c4(void)

{
  FUN_1006383b8();
  FUN_1006383f4();
  FUN_100638410();
  func_0x000100655fd8();
  return;
}



/* Entry: 1006383f4; end: 10063840f;  */

undefined1 * FUN_1006383f4(void)

{
  return &stack0x00000008;
}



/* Entry: 100638410; end: 100638457;  */

void FUN_100638410(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110a8b098;
  func_0x000100638400();
  FUN_100638458();
  return;
}



/* Entry: 100638458; end: 10063845f;  */

void FUN_100638458(void)

{
  FUN_100063660();
  return;
}



/* Entry: 100638460; end: 100638467; -[SCNMessagingFeedUpdateMetadata streamingUpdateEnd] */

undefined8 FUN_100638460(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100638468; end: 10063846f; -[SCNMessagingFeedUpdateMetadata feedUpdateTypeMetadata] */

undefined8 FUN_100638468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


