/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10054a768; end: 10054a7b7;  */

void FUN_10054a768(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10054a7b8();
  lVar1 = *(long *)(unaff_x19 + 0x40);
  if (lVar1 != *(long *)(unaff_x19 + 0x48)) {
    if (*(char *)(lVar1 + 0x17) < '\0') {
      if (*(long *)(lVar1 + 8) == 0) goto LAB_10054a7a4;
    }
    else if (*(char *)(lVar1 + 0x17) == '\0') goto LAB_10054a7a4;
    FUN_10054cd94();
  }
LAB_10054a7a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 10054a7b8; end: 10054a7f7;  */

void FUN_10054a7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_1 + 0x58);
  return;
}



/* Entry: 10054a7f8; end: 10054a8a7;  */

void FUN_10054a7f8(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    pcVar1 = UNRECOVERED_JUMPTABLE;
    if ((param_3 & 1) != 0) {
      pcVar1 = *(code **)(*(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)) +
                         ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
    func_0x0001004c3408();
    (*pcVar1)();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(*(long *)(param_1 + 0x10) + ((long)param_3 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
    func_0x0001004c3408();
                    /* WARNING: Could not recover jumptable at 0x00010054a88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10054a8a8; end: 10054a953;  */

void FUN_10054a8a8(undefined8 *param_1)

{
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x0001004c3418();
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x0001004c376c();
  uStack_60 = 0;
  uStack_48 = 0;
  func_0x0001004c3778();
  FUN_1004c37a8(auStack_68);
  func_0x0001004c394c();
  FUN_10054a954();
  FUN_1004c3860(auStack_68,auStack_80);
  func_0x0001004c3a14(*(undefined8 *)(*(long *)*param_1 + 0x10),(long *)*param_1,auStack_68);
  func_0x0001004c3930();
  FUN_1004c3a3c(auStack_68);
  return;
}



/* Entry: 10054a954; end: 10054a95b;  */

void FUN_10054a954(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10054a95c; end: 10054a98b;  */

void FUN_10054a95c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_100060b18(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 10054a98c; end: 10054a9db;  */

void FUN_10054a98c(undefined8 param_1)

{
  func_0x0001002a8010(param_1,&UNK_10f773a12);
  FUN_1002a8068();
  FUN_1002a812c();
  func_0x0001002a814c();
  func_0x0001002a8168();
  func_0x0001002a817c();
  return;
}



/* Entry: 10054a9dc; end: 10054aa53; -[SCContainerFooterConfig initWithDefaultBackgroundColor:backgroundObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054a9dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113083a58) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083a60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10054aa54; end: 10054aa67;  */

void FUN_10054aa54(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0x88);
  return;
}



/* Entry: 10054aa68; end: 10054abe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054aa68(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_198 = 0x200000001;
  FUN_10002b838(auStack_190,&UNK_10f4aefd4);
  uStack_178 = 0;
  uStack_148 = 0;
  uStack_140 = 0x300000002;
  FUN_10002b838(auStack_138,&UNK_10f4af1ac);
  uStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x400000003;
  FUN_10002b838(auStack_e0,&UNK_10f4af261);
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0x500000004;
  FUN_10002b838(auStack_88,&UNK_10f4af349);
  uStack_70 = 0;
  uStack_40 = 0;
  puVar4 = &UNK_10f4aecd7;
  puVar3 = &uStack_198;
  uVar7 = 4;
  FUN_10054ae4c(param_1,5);
  lVar8 = 0x108;
  do {
    func_0x00010054b180();
    lVar8 = lVar8 + -0x58;
  } while (lVar8 != -0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puVar2 = &uStack_90;
  lVar8 = -0x160;
  do {
    func_0x00010054b180();
    uVar6 = (undefined1)uVar7;
    uVar5 = SUB81(puVar3,0);
    puVar2 = puVar2 + -0xb;
    lVar8 = lVar8 + 0x58;
  } while (lVar8 != 0);
  func_0x000107c31bf8();
  puVar3 = puVar2;
  func_0x000107c614f0();
  puVar1 = PTR_s_init_1125d9248;
  *(undefined **)((long)puVar2 + _DAT_113083ac8) = puVar4;
  *(undefined1 *)((long)puVar2 + _DAT_113083ad0) = uVar5;
  *(undefined1 *)((long)puVar2 + _DAT_113083ad8) = uVar6;
  puStack_1e0 = puVar2;
  puStack_1d8 = puVar3;
  func_0x000107c61174(puVar4);
  func_0x000107c61154(&puStack_1e0,puVar1);
  return;
}



/* Entry: 10054abe4; end: 10054ac63; -[SCContainerViewLayoutConfig initWithFooterConfig:disableBorderAndCornerViews:overlayIsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054abe4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113083ac8) = param_3;
  *(undefined1 *)(param_1 + _DAT_113083ad0) = param_4;
  *(undefined1 *)(param_1 + _DAT_113083ad8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10054ac64; end: 10054ae4b; -[SCContainerViewController initWithLoggingObserver:contentViewLayoutConfig:pageLoadMetricManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10054ac64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = &UNK_10f726dc5;
  FUN_1000ba800(&UNK_10f726dc5);
  puStack_48 = PTR_PTR_112705608;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126b0ea0;
    func_0x000107c610fc();
    lVar5 = (long)_DAT_11278c710;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c41c10(*(undefined8 *)((long)puVar2 + lVar5));
    func_0x000107c5677c(puVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar2 + (long)_DAT_11278c714),param_3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278c718);
    *(undefined **)((long)puVar2 + (long)_DAT_11278c718) = puVar3;
    func_0x000107c61170(uVar4);
    lVar5 = (long)_DAT_11278c71c;
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c5676c(puVar2);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11278c720) = 0;
    lVar5 = (long)_DAT_11278c724;
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278c728);
    *(undefined **)((long)puVar2 + (long)_DAT_11278c728) = puVar3;
    func_0x000107c61170(uVar4);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10054ae4c; end: 10054aecf;  */

long FUN_10054ae4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  FUN_10045d9f0();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  for (param_5 = param_5 * 0x58; param_5 != 0; param_5 = param_5 + -0x58) {
    FUN_10054af38((undefined8 *)(param_1 + 0x20),param_4 + 4,param_4);
    param_4 = param_4 + 0x58;
  }
  return param_1;
}



/* Entry: 10054aed0; end: 10054af37;  */

void FUN_10054aed0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x80;
  func_0x000107c60e20();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  FUN_10054afac(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10054af38; end: 10054afab;  */

long FUN_10054af38(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_10054aed0(alStack_38);
  uVar2 = param_1;
  func_0x00010054b0a4(param_1,&uStack_40,alStack_38[0] + 0x20);
  FUN_10054b0f0(param_1,uStack_40,uVar2,alStack_38[0]);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  FUN_10054b15c(alStack_38);
  return lVar1;
}



/* Entry: 10054afac; end: 10054afdb;  */

undefined4 * FUN_10054afac(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  FUN_10054afdc(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 10054afdc; end: 10054b023;  */

undefined8 * FUN_10054afdc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10054b024();
  FUN_10054b044(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10054b024; end: 10054b043;  */

void FUN_10054b024(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1 + 8,param_2 + 8);
  return;
}



/* Entry: 10054b044; end: 10054b08f;  */

undefined1 * FUN_10054b044(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  func_0x00010054b030();
  return param_1;
}



/* Entry: 10054b090; end: 10054b0ef;  */

void FUN_10054b090(void)

{
  return;
}



/* Entry: 10054b0f0; end: 10054b13b;  */

void FUN_10054b0f0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  FUN_10002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10054b13c; end: 10054b15b;  */

void FUN_10054b13c(void)

{
  return;
}



/* Entry: 10054b15c; end: 10054b1bf;  */

undefined8 FUN_10054b15c(undefined8 param_1)

{
  func_0x00010054b144(param_1,0);
  return param_1;
}



/* Entry: 10054b1c0; end: 10054b1cf;  */

void FUN_10054b1c0(void)

{
  return;
}



/* Entry: 10054b1d0; end: 10054b8f7;  */

undefined8 FUN_10054b1d0(uint *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  long *plVar15;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 uVar16;
  uint *puStack_2a0;
  uint *puStack_298;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [64];
  undefined8 uStack_228;
  uint *puStack_220;
  undefined1 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [120];
  undefined1 auStack_e0 [120];
  undefined8 uStack_68;
  
  puVar12 = param_1;
  FUN_10054b8f8();
  uStack_228 = 0;
  uStack_68 = extraout_x8;
  FUN_10028bb78();
  uStack_218 = 1;
  puStack_220 = puVar12;
  FUN_10054b908(auStack_e0,param_2,&UNK_10f4d33fe,0x13);
  FUN_10054b908(auStack_158,param_2,&UNK_10f82f86a,0x35);
  FUN_10002b838(auStack_280,"");
  FUN_10054b97c(auStack_268,param_2,auStack_280);
  puVar13 = auStack_280;
  func_0x000107c60ca0();
  func_0x00010054bdb4();
  uVar10 = (uint)puVar13;
  if (uVar10 == 0) {
    FUN_10054bec8(&uStack_210,auStack_158);
    puVar14 = &uStack_210;
    FUN_10054c948();
    FUN_10054cb18(&uStack_210);
    if ((((ulong)puVar14 >> 0x20 & 1) != 0) && (((ulong)puVar14 & 0xffffffff) != 0))
    goto LAB_10054b2b8;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    puStack_188 = &UNK_105277f7c;
    ppuStack_180 = &PTR_DAT_110873830;
    func_0x000107c3a4cc();
    func_0x000107c3a4ac(ppuStack_180);
    plVar15 = param_2;
    func_0x000107c313ec(param_2,*param_1);
    func_0x00010054bdb4();
    uVar10 = *param_1;
    uVar11 = (uint)plVar15;
    cVar7 = SBORROW4(uVar11,uVar10);
    cVar8 = (int)(uVar11 - uVar10) < 0;
    uVar9 = uVar11 == uVar10;
    if (!(bool)uVar9) {
      func_0x000107c3a4bc();
      puStack_2a0 = (uint *)(ulong)*param_1;
      puStack_298 = (uint *)0x0;
      FUN_1003a91d4(&UNK_10f82f8a0);
      FUN_1003a9204(&uStack_210);
      func_0x000107c3a4a4();
      func_0x000107c3a4a0();
      goto LAB_10054b66c;
    }
    FUN_10054cba4();
    FUN_1004c330c();
    lVar4 = param_2[0x13];
    func_0x000107c3a4e4();
    uVar1 = uStack_208;
    uVar2 = uStack_210;
    uVar3 = uStack_200 >> 0x38;
    func_0x000107c3a4e0();
    func_0x000107c3a4e8();
    if (cVar8 == cVar7) {
      uVar1 = uVar3;
      uVar2 = extraout_x8_01;
    }
    (**(code **)(*plVar15 + 0x28))(plVar15,(int)lVar4,uVar2,uVar1,0);
    func_0x000107c60ca0(&uStack_210);
    uVar16 = 0;
LAB_10054b4d8:
    FUN_10054d120(auStack_268);
    FUN_10054d21c(auStack_158);
    FUN_10054d21c(auStack_e0);
    FUN_10054d280(uStack_68);
    if ((bool)uVar9) {
      return uVar16;
    }
    func_0x000107c60e78();
LAB_10054b5d4:
    func_0x000107c3a4bc();
    func_0x000107c3a4c8();
  }
  else {
LAB_10054b2b8:
    uVar9 = uVar10 == *param_1;
    if ((bool)uVar9) {
      FUN_10054cba4();
      uVar16 = 1;
      goto LAB_10054b4d8;
    }
    if ((*(byte *)((long)param_2 + 0x15f) & 1) == 0) goto LAB_10054b5d4;
    if ((int)uVar10 < (int)*param_1) {
      func_0x000107c313f0(&puStack_2a0,param_1,puVar13);
      if (puStack_2a0 == puStack_298) {
        func_0x000107c3a4bc();
        func_0x000107c3a4c8();
        func_0x000107c3a4c4();
        goto LAB_10054b66c;
      }
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      puStack_1b8 = &UNK_105277f7c;
      ppuStack_1b0 = &PTR_DAT_110873830;
      plVar15 = param_2;
      FUN_1004c3d34(param_2,&UNK_10f4beab8,0x1f,1,&puStack_1b8);
      func_0x000107c3a4ac(ppuStack_1b0);
      puVar5 = puStack_298;
      puVar12 = puStack_2a0;
      while( true ) {
        cVar7 = SBORROW8((long)puVar12,(long)puVar5);
        cVar8 = (long)puVar12 - (long)puVar5 < 0;
        uVar9 = puVar12 == puVar5;
        if ((bool)uVar9) break;
        func_0x00010054bdb4();
        if ((uint)plVar15 != *puVar12) {
          func_0x000107c3a4bc();
          func_0x00010054bdb4();
          uStack_200 = (ulong)*puVar12;
          uStack_210 = (ulong)plVar15 & 0xffffffff;
          uStack_208 = 0;
          uStack_1f8 = 0;
          FUN_1003a91d4(&UNK_10f82f8ca);
          func_0x000107c3a4a8();
          func_0x000107c3a4b0();
          func_0x000107c3a4a4();
          func_0x000107c3a4a0();
          goto LAB_10054b66c;
        }
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        puStack_1e8 = &UNK_105277f7c;
        ppuStack_1e0 = &PTR_DAT_110873830;
        func_0x000107c3a4cc();
        func_0x000107c3a4ac(ppuStack_1e0);
        if (((char)puVar12[0x14] == '\x01') &&
           (plVar15 = param_2, (**(code **)(puVar12 + 8))(), ((ulong)plVar15 & 1) == 0)) {
          func_0x000107c3a4bc();
          func_0x000107c3a4ec();
          FUN_1003a91d4(&UNK_10f82f8f9);
          func_0x000107c3a4a8();
          func_0x000107c3a4b0();
          func_0x000107c3a4a4();
          func_0x000107c3a4a0();
          goto LAB_10054b66c;
        }
        plVar15 = param_2;
        func_0x000107c313ec(param_2,puVar12[1]);
        func_0x00010054bdb4();
        if ((uint)plVar15 != puVar12[1]) {
          func_0x000107c3a4bc();
          func_0x000107c3a4ec();
          FUN_1003a91d4(&UNK_10f82f921);
          func_0x000107c3a4a8();
          func_0x000107c3a4b0();
          func_0x000107c3a4a4();
          func_0x000107c3a4a0();
          goto LAB_10054b66c;
        }
        puVar12 = puVar12 + 0x16;
      }
      FUN_10054cba4();
      FUN_1004c330c();
      lVar4 = param_2[0x13];
      func_0x000107c3a4e4();
      uVar1 = uStack_208;
      uVar2 = uStack_210;
      uVar3 = uStack_200 >> 0x38;
      func_0x000107c3a4e0();
      func_0x000107c3a4e8();
      if (cVar8 == cVar7) {
        uVar1 = uVar3;
        uVar2 = extraout_x8_00;
      }
      (**(code **)(*plVar15 + 0x28))(plVar15,(int)lVar4,uVar2,uVar1,1);
      func_0x000107c60ca0(&uStack_210);
      func_0x00010527508c(&puStack_2a0);
      uVar16 = 2;
      goto LAB_10054b4d8;
    }
    func_0x000107c3a4bc();
    func_0x000107c3a4c8();
  }
  func_0x000107c3a4c4();
LAB_10054b66c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10054b670);
  (*pcVar6)();
}



/* Entry: 10054b8f8; end: 10054b907;  */

void FUN_10054b8f8(void)

{
  return;
}



/* Entry: 10054b908; end: 10054b96f;  */

undefined8 *
FUN_10054b908(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_100060b18(param_1 + 9,&uStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 10054b970; end: 10054b97b;  */

void FUN_10054b970(void)

{
  return;
}



/* Entry: 10054b97c; end: 10054ba67;  */

undefined8 * FUN_10054b97c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  FUN_10054ba68();
  *puVar4 = param_2;
  do {
    iVar3 = iRam0000000113847180;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113847180,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113847180 = iRam0000000113847180 + 1;
    }
  } while (cVar1 != '\0');
  *(int *)(param_1 + 1) = iVar3;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[2];
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_10054ba78(param_1 + 5,1);
  FUN_1003a91d4(&UNK_10f82fb37);
  FUN_10054bab8();
  func_0x00010054bbd0();
  func_0x00010054bbe4();
  func_0x00010054bc0c();
  func_0x00010054bc1c();
  func_0x00010054bc2c();
  puVar4 = (undefined8 *)*param_1;
  FUN_10054bc34(puVar4);
  FUN_10054bd90(extraout_x8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x00010054bc1c();
    func_0x00010054bc2c();
    func_0x000107c60ca0(param_1 + 2);
    func_0x000107c60bd8(puVar4);
    return puVar4;
  }
  return param_1;
}



/* Entry: 10054ba68; end: 10054ba77;  */

void FUN_10054ba68(void)

{
  return;
}



/* Entry: 10054ba78; end: 10054bab7;  */

undefined8 * FUN_10054ba78(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_2 == 1) {
    puVar1 = param_1;
    FUN_10028bb78();
    param_1[1] = puVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 10054bab8; end: 10054baff;  */

/* WARNING: Possible PIC construction at 0x000107330270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107330348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107330274) */
/* WARNING: Removing unreachable block (ram,0x000107330298) */
/* WARNING: Removing unreachable block (ram,0x000107330290) */
/* WARNING: Removing unreachable block (ram,0x00010733034c) */
/* WARNING: Removing unreachable block (ram,0x000107330370) */
/* WARNING: Removing unreachable block (ram,0x000107330368) */
/* WARNING: Removing unreachable block (ram,0x000107344d98) */

undefined8 * FUN_10054bab8(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  undefined1 auVar7 [8];
  code *pcVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  double dVar12;
  long lVar13;
  double dVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  double *pdVar19;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar20;
  undefined8 *extraout_x8_05;
  undefined8 *puVar21;
  long extraout_x8_06;
  undefined1 *puVar22;
  uint uVar23;
  int iVar24;
  int extraout_w9;
  undefined1 uVar25;
  int extraout_w11;
  undefined8 *extraout_x12;
  long lVar26;
  undefined8 *puVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  float fVar31;
  double dVar32;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [400];
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 uStack_3d;
  undefined1 auStack_3c [28];
  ulong uStack_20;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  pdVar19 = (double *)&stack0x00000020;
  uVar18 = 2;
  FUN_1003a994c(&stack0x00000008);
  puVar22 = param_2;
  uVar30 = uVar18;
  func_0x0001003a9964();
  iVar29 = (int)uVar30;
  uVar9 = puVar22 == (undefined1 *)0x2;
  uStack_8 = extraout_x8_00;
  if ((!(bool)uVar9) || (puVar21 = param_1, FUN_100574918(), (int)puVar21 == 0)) {
    func_0x0001003a9974();
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_01;
    FUN_1003a9984(auStack_220,param_1,param_2,uVar18,pdVar19,0);
    func_0x0001003ac6b8();
code_r0x0001003a9298:
    puVar17 = (undefined8 *)auStack_220;
    func_0x0001003ac644(puVar17);
    goto LAB_1003a92a0;
  }
  if ((long)uVar18 < 0) {
    if ((0 < (int)(uint)uVar18) && (uVar1 = *(uint *)(pdVar19 + 2), uVar1 != 0)) goto LAB_1003a92c8;
    goto LAB_1003a98cc;
  }
  uVar1 = (uint)uVar18 & 0xf;
  if ((uVar18 & 0xf) == 0) goto LAB_1003a98cc;
LAB_1003a92c8:
  uVar1 = uVar1 - 1;
  uVar9 = uVar1 == 0xe;
  if (0xe < uVar1) {
    func_0x000107c3aa80();
    puVar17 = puVar21;
    goto LAB_1003a92a0;
  }
  pcVar8 = (code *)pdVar19[1];
  fVar5 = *(float *)pdVar19;
  uVar30 = (ulong)(uint)fVar5;
  uVar11 = *(uint *)((long)pdVar19 + 4);
  dVar32 = *pdVar19;
  puVar15 = (undefined2 *)*pdVar19;
  dVar12 = *pdVar19;
  dVar14 = *pdVar19;
  puVar17 = extraout_x8;
  uStack_60 = uVar30;
  uStack_20 = uVar30;
  switch(uVar1) {
  case 0:
    puVar17 = (undefined8 *)auStack_220;
    if ((int)fVar5 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar9 = fVar5 == 0.0;
    fVar31 = (float)-(int)fVar5;
    if (-1 < (int)fVar5) {
      fVar31 = fVar5;
    }
    uVar18 = (ulong)(uint)fVar31;
    uVar30 = uVar18;
    func_0x00010054bacc(uVar18);
    FUN_10054bb78(puVar17,uVar18,uVar30);
    func_0x000107c3a9d4();
    break;
  case 1:
    uVar18 = uVar30;
    func_0x00010054bacc(uVar30);
    puVar17 = (undefined8 *)auStack_220;
    FUN_10054bb78(puVar17,uVar30,uVar18);
    func_0x000107c3a9d4();
    break;
  case 2:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar17 = (undefined8 *)(uVar30 | extraout_x8_03 << 0x20);
      func_0x000107c3aa4c(extraout_x8);
      func_0x0001073447e0();
      puStack_48 = &UNK_10733034c;
      puStack_70 = param_2;
      pcStack_68 = pcVar8;
      puStack_50 = auStack_10;
      func_0x000107345c14(auStack_3c);
      puVar21 = (undefined8 *)-(long)puVar17;
      if (-1 < (long)puVar17) {
        puVar21 = puVar17;
      }
      FUN_1003b0470(puVar21);
      if ((long)pcVar8 < 0) {
        *(undefined1 *)extraout_x8 = 0x2d;
      }
      func_0x000107345ba8();
      func_0x0001003b04f4();
      return puVar17;
    }
    goto LAB_1003a98c8;
  case 3:
    func_0x000107c3aa7c();
    if ((bool)uVar9) {
      puVar21 = (undefined8 *)(uVar30 | extraout_x8_04 << 0x20);
      func_0x000107c3aa4c(extraout_x8,puVar21);
      func_0x0001073447e0();
      puStack_48 = &UNK_107330274;
      puStack_50 = auStack_10;
      FUN_100a2b988(&uStack_3d);
      FUN_1003b0470(puVar21);
      func_0x000107345dfc();
      func_0x0001003b04f4();
      return puVar21;
    }
    goto LAB_1003a98c8;
  case 4:
    puVar17 = (undefined8 *)auStack_220;
    if ((long)pcVar8 < 0) {
      puVar17 = (undefined8 *)(auStack_220 + 1);
      auStack_220[0] = 0x2d;
    }
    uVar30 = (long)pcVar8 >> 0x3f;
    lVar2 = ((ulong)*pdVar19 ^ uVar30) - uVar30;
    uVar9 = lVar2 == 0;
    lVar26 = ((ulong)pcVar8 ^ uVar30) - (uVar30 + (((ulong)*pdVar19 ^ uVar30) < uVar30));
    lVar13 = lVar2;
    func_0x000107c3176c(lVar2,lVar26);
    func_0x000107c31770(puVar17,lVar2,lVar26,lVar13);
    func_0x000107c3a9d4();
    break;
  case 5:
    dVar14 = dVar12;
    func_0x000107c3176c(dVar12,pcVar8);
    puVar17 = (undefined8 *)auStack_220;
    func_0x000107c31770(puVar17,dVar12,pcVar8,dVar14);
    func_0x000107c3a9d4();
    break;
  case 6:
    uVar9 = ((uint)fVar5 & 1) == 0;
    lVar2 = 4;
    if ((bool)uVar9) {
      lVar2 = 5;
    }
    pcVar3 = "true";
    if ((bool)uVar9) {
      pcVar3 = "false";
    }
    func_0x000107c610b4(auStack_220,pcVar3,lVar2);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + lVar2);
    break;
  case 7:
    auStack_220[0] = SUB41(fVar5,0);
    func_0x00010015492c(extraout_x8,auStack_220,auStack_220 + 1);
    break;
  case 8:
    fVar31 = fVar5;
    func_0x000107c3aa80();
    auStack_220 = (undefined1  [8])0x0;
    if ((int)fVar5 < 0) {
      auStack_220 = (undefined1  [8])0x10000000000;
      fVar31 = -fVar31;
    }
    if ((((uint)fVar5 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar9 = ABS(fVar31) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60dafc,auStack_220);
    }
    else {
      func_0x000107c31744();
      auVar7 = auStack_220;
      uVar18 = (ulong)auStack_220 >> 0x20;
      puVar16 = puVar21;
      func_0x00010054bacc();
      uVar30 = (ulong)auVar7 >> 0x28 & 0xff;
      iVar29 = (int)uVar30;
      uVar11 = (uint)puVar16;
      uVar1 = uVar11;
      if (iVar29 != 0) {
        uVar1 = uVar11 + 1;
      }
      uVar20 = (ulong)uVar1;
      uVar1 = uVar11 + (int)((ulong)puVar21 >> 0x20);
      uVar4 = auVar7._4_4_;
      uVar28 = auVar7._0_4_;
      if (((ulong)auVar7 >> 0x20 & 0xff) == 0) {
        if (-4 < (int)uVar1) {
          uVar23 = uVar28;
          if ((int)uVar28 < 1) {
            uVar23 = 0x10;
          }
          if ((int)uVar1 <= (int)uVar23) goto code_r0x0001003a9768;
        }
      }
      else if ((uVar4 & 0xff) != 1) {
code_r0x0001003a9768:
        if ((long)puVar21 < 0) {
          if ((int)uVar1 < 1) {
            uVar4 = uVar28;
            if ((int)(uVar28 + uVar1) < 0 == SCARRY4(uVar28,uVar1)) {
              uVar4 = -uVar1;
            }
            uVar9 = uVar28 < 0x80000000 && uVar11 == 0;
            if (uVar28 >= 0x80000000 || uVar11 != 0) {
              uVar4 = -uVar1;
            }
            puVar27 = (undefined8 *)(ulong)uVar4;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar21 = puVar16;
            if (iVar29 != 0) {
              puVar21 = (undefined8 *)((long)puVar16 + 1);
              *(undefined *)puVar16 = (&UNK_10e60dacd)[uVar30];
            }
            puVar17 = (undefined8 *)((long)puVar21 + 1);
            *(undefined1 *)puVar21 = 0x30;
            if ((((ulong)auVar7 & 0x10000000000000) != 0 || uVar11 != 0) || uVar4 != 0) {
              *(undefined1 *)((long)puVar21 + 1) = 0x2e;
              func_0x000107c3aa8c(puVar17);
              func_0x000107330b24(extraout_x8_06 + 2,puVar27);
              puVar17 = puVar27;
              func_0x000107c3aab0();
            }
          }
          else {
            uVar1 = uVar28 - uVar11 & (int)(uVar4 << 0xb) >> 0x1f;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar17 = puVar16;
            if (iVar29 != 0) {
              func_0x000107c3aa38();
              puVar17 = puVar16;
            }
            func_0x000107c31774();
            uVar9 = uVar1 == 1;
            if (0 < (int)uVar1) {
              func_0x000107c3aa8c();
              goto code_r0x0001003a9840;
            }
          }
        }
        else {
          bVar10 = (uVar4 & 0xff) != 2 && (uVar28 == uVar1 || (int)(uVar28 - uVar1) < 0);
          func_0x000107c3aa78(((ulong)puVar21 >> 0x20) + uVar20);
          puVar17 = extraout_x8_05;
          iVar24 = extraout_w9;
          if (!bVar10) {
            puVar17 = extraout_x12;
            iVar24 = extraout_w11;
          }
          uVar9 = ((ulong)auVar7 & 0x10000000000000) == 0;
          puVar16 = extraout_x8_05;
          iVar6 = extraout_w9;
          if (!(bool)uVar9) {
            puVar16 = puVar17;
            iVar6 = iVar24;
          }
          func_0x000107c3aa40();
          func_0x000107c3a9c8();
          if (iVar29 != 0) {
            func_0x000107c3aa38();
          }
          func_0x000107c3aab0();
          func_0x000107c3aa8c();
          func_0x000107330b24(puVar16,(ulong)puVar21 >> 0x20);
          puVar17 = puVar16;
          if ((uVar4 >> 0x14 & 1) != 0) {
            puVar17 = (undefined8 *)((long)puVar16 + 1);
            *(undefined1 *)puVar16 = 0x2e;
            uVar9 = iVar6 == 1;
            if (0 < iVar6) {
              func_0x000107c3aa8c(puVar17);
code_r0x0001003a9840:
              func_0x000107330b24();
            }
          }
        }
        func_0x000107c3a9c8();
        break;
      }
      puVar17 = (undefined8 *)(ulong)(uVar1 - 1);
      iVar24 = 0;
      if (uVar11 != 1) {
        iVar24 = 0x2e;
      }
      uVar1 = uVar28 - uVar11 & ((int)(uVar28 - uVar11) >> 0x1f ^ 0xffffffffU);
      bVar10 = (uVar18 & 0x100000) != 0;
      if (bVar10) {
        iVar24 = 0x2e;
      }
      uVar11 = 0;
      if (bVar10) {
        uVar20 = uVar1 + uVar20;
        uVar11 = uVar1;
      }
      uVar25 = 0x65;
      if (((ulong)auVar7 & 0x1000000000000) != 0) {
        uVar25 = 0x45;
      }
      func_0x000107c3aa94(uVar20);
      uVar9 = iVar24 == 0;
      func_0x000107c3aa40();
      if (iVar29 != 0) {
        func_0x000107c3aa38();
      }
      func_0x000107c31774();
      if (uVar11 != 0) {
        func_0x000107c3aa8c();
        func_0x000107330b24(puVar16,uVar11);
      }
      *(undefined1 *)puVar16 = uVar25;
      func_0x000107330ac0(puVar17,(long)puVar16 + 1);
    }
    break;
  case 9:
    puVar17 = (undefined8 *)auStack_220;
    auStack_220 = (undefined1  [8])*pdVar19;
    func_0x000107330414(extraout_x8,puVar17);
    break;
  case 10:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puStack_258 = (undefined8 *)0x0;
    if ((int)uVar11 < 0) {
      puStack_258 = (undefined8 *)0x10000000000;
      dVar32 = -dVar32;
    }
    uVar9 = (~uVar11 & 0x7ff00000) == 0;
    if ((bool)uVar9) {
      uVar9 = ABS(dVar32) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar9,&UNK_10e60db10,&puStack_258);
    }
    else {
      func_0x000107c31748();
      auStack_220 = (undefined1  [8])puVar21;
      puStack_218 = puVar22;
      func_0x000107330548(extraout_x8,auStack_220,&UNK_10e60db10,puStack_258,0x2e);
    }
    break;
  case 0xb:
    func_0x000107c3aa80();
    if (dVar14 == 0.0) goto code_r0x0001003a98d0;
    dVar12 = dVar14;
    func_0x000107c613d0(dVar14);
    func_0x000107c31778(extraout_x8,dVar14,dVar12);
    break;
  case 0xc:
    func_0x000107c3aa80();
    func_0x000107c31778(extraout_x8);
    break;
  case 0xd:
    func_0x000107c3aa80();
    func_0x000107c3177c();
    uVar30 = ((ulong)puVar15 & 0xffffffff) + 2;
    func_0x000107c3aa40();
    puVar21 = (undefined8 *)(puVar15 + 1);
    *puVar15 = 0x7830;
    func_0x0001003ac67c(uStack_8);
    if ((bool)uVar9) {
      func_0x000107c3aa48();
      func_0x000107c3aa4c();
      puVar22 = (undefined1 *)((long)puVar21 + (long)iVar29);
      do {
        puVar22 = puVar22 + -1;
        *puVar22 = (&UNK_10e60dabc)[uVar30 & 0xf];
        bVar10 = 0xf < uVar30;
        uVar30 = uVar30 >> 4;
      } while (bVar10);
      return puVar21;
    }
    goto LAB_1003a98c8;
  case 0xe:
    func_0x0001003a9974(*pdVar19);
    puStack_258 = (undefined8 *)auStack_220;
    puStack_218 = auStack_200;
    uStack_208 = 500;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_250 = 0;
    uStack_240 = 0;
    auStack_220 = (undefined1  [8])extraout_x8_02;
    (*pcVar8)();
    func_0x0001003ac6b8();
    goto code_r0x0001003a9298;
  }
LAB_1003a92a0:
  func_0x0001003ac67c(uStack_8);
  puVar21 = puVar17;
  if ((bool)uVar9) {
    return puVar17;
  }
LAB_1003a98c8:
  func_0x000107c60e78();
LAB_1003a98cc:
  func_0x000107c3aa14();
code_r0x0001003a98d0:
  func_0x000107c3a9ec();
  func_0x000106e53aac();
  func_0x000107c60e54(puVar21,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1003a9900);
  (*pcVar8)();
}



/* Entry: 10054bb00; end: 10054bb77;  */

undefined1 * FUN_10054bb00(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined1 *puVar4;
  
  puVar2 = param_2;
  func_0x00010054bacc();
  puVar3 = param_1;
  FUN_1003a9c88(param_1,(long)(int)puVar2);
  func_0x0001003b04a4();
  if (puVar3 != (undefined1 *)0x0) {
    FUN_10054bb78();
    return param_1;
  }
  func_0x000107c3a9b4();
  func_0x000107c284c0(&stack0xffffffffffffffce);
  puVar3 = &stack0xffffffffffffffce;
  func_0x00010bd4d020();
  func_0x000107c3a9a8(extraout_x8);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x000107c3aa44((ulong)param_2 ^ (long)puVar2 >> 0x3f);
  iVar1 = (int)puVar4;
  func_0x00010bd49c5c();
  puVar4 = puVar3;
  func_0x000107c28394(puVar3,(long)iVar1 - ((long)puVar2 >> 0x3f));
  puVar5 = puVar4;
  func_0x000107c29928();
  if (puVar5 == (undefined1 *)0x0) {
    if ((long)puVar2 < 0) {
      func_0x00010bd4d0dc();
    }
    func_0x000107c3aa90(puVar4);
    func_0x00010bd4a19c();
  }
  else {
    if ((long)puVar2 < 0) {
      *puVar5 = 0x2d;
    }
    func_0x000107c3aa90();
    func_0x00010bd49ce4();
    puVar4 = puVar3;
  }
  return puVar4;
}



/* Entry: 10054bb78; end: 10054bc33;  */

void FUN_10054bb78(long param_1,uint param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)(param_1 + param_3);
  for (; puVar2 = puVar1 + -1, 99 < param_2; param_2 = param_2 / 100) {
    *puVar2 = *(undefined2 *)(&UNK_10e60d9f4 + (ulong)(param_2 % 100) * 2);
    puVar1 = puVar2;
  }
  if (9 < param_2) {
    *puVar2 = *(undefined2 *)(&UNK_10e60d9f4 + (ulong)param_2 * 2);
    return;
  }
  *(byte *)((long)puVar1 + -1) = (byte)param_2 | 0x30;
  return;
}



/* Entry: 10054bc34; end: 10054bc5f;  */

void FUN_10054bc34(void)

{
  long unaff_x19;
  
  FUN_10054a7b8();
  FUN_10054bc60(unaff_x19 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 10054bc60; end: 10054bd8f;  */

undefined8 * FUN_10054bc60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = puVar1 + 3;
    puVar1[2] = 0;
  }
  else {
    puVar2 = param_1;
    func_0x00010054bcf4();
  }
  param_1[1] = puVar2;
  return puVar2 + -3;
}



/* Entry: 10054bd90; end: 10054bdcb;  */

void FUN_10054bd90(void)

{
  return;
}



/* Entry: 10054bdcc; end: 10054bec7;  */

long FUN_10054bdcc(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [144];
  undefined8 uStack_28;
  
  lVar6 = param_1;
  func_0x00010054bdbc();
  uStack_c0 = 1;
  lStack_c8 = lVar6;
  uStack_28 = extraout_x8;
  func_0x000107c60d88();
  lVar6 = param_1 + 0x60;
  lVar2 = *(long *)(param_1 + 0x68);
  FUN_10054bf40(lVar2,lVar6);
  uVar1 = lVar6 == lVar2;
  if ((bool)uVar1) {
    FUN_10054bf64(&lStack_c8);
    lVar2 = (long)*(char *)(param_1 + 0x5f);
    if (lVar2 < 0) {
      lVar5 = *(long *)(param_1 + 0x48);
      lVar2 = *(long *)(param_1 + 0x50);
    }
    else {
      lVar5 = param_1 + 0x48;
    }
    func_0x00010054c0a8(auStack_b8,*(undefined8 *)(param_1 + 0x40),lVar5,lVar2);
    FUN_10054c0f8(&lStack_c8);
    FUN_10054c1d4(lVar6,auStack_b8);
    FUN_10054c360(auStack_b8);
  }
  else {
    func_0x000107319fb0(lVar6,lVar6,lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x60);
  *(long *)(lVar6 + 0x98) = param_1;
  plVar3 = &lStack_c8;
  FUN_1000df5a0();
  func_0x00010054c318(uStack_28);
  if ((bool)uVar1) {
    return lVar6 + 0x10;
  }
  func_0x000107c60e78();
  plVar4 = &lStack_c8;
  FUN_1000df5a0();
  func_0x00010731c938();
  pcStack_d8 = FUN_10054bec8;
  lStack_f0 = lVar6;
  plStack_e8 = plVar3;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10054bdcc();
  lVar6 = extraout_x8_00;
  plStack_f8 = plVar4;
  func_0x00010054c67c(extraout_x8_00,&plStack_f8);
  return lVar6;
}



/* Entry: 10054bec8; end: 10054beeb;  */

void FUN_10054bec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_10054bdcc();
  uStack_28 = param_2;
  func_0x00010054c67c(param_1,&uStack_28);
  return;
}



/* Entry: 10054beec; end: 10054bf3f;  */

undefined4 FUN_10054beec(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [24];
  
  FUN_10054bec8(auStack_38);
  puVar2 = auStack_38;
  FUN_10054c948();
  uVar1 = 0;
  if (((ulong)puVar2 & 0x100000000) != 0) {
    uVar1 = SUB84(puVar2,0);
  }
  FUN_10054cb18(auStack_38);
  return uVar1;
}



/* Entry: 10054bf40; end: 10054bf63;  */

long FUN_10054bf40(long param_1,long param_2)

{
  long lVar1;
  
  for (; (lVar1 = param_2, param_1 != param_2 && (lVar1 = param_1, *(long *)(param_1 + 0x98) != 0));
      param_1 = *(long *)(param_1 + 8)) {
  }
  return lVar1;
}



/* Entry: 10054bf64; end: 10054bf9b;  */

ulong FUN_10054bf64(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x00010015b848();
    func_0x000107c60d8c();
    *(undefined1 *)(unaff_x19 + 8) = 0;
    return param_1;
  }
  uVar2 = 1;
  func_0x000107c60d78(1,"unique_lock::unlock: not locked");
  uVar1 = (uint)uVar2;
  if (0x7f < uVar1) {
    func_0x000107c60e64();
    return (ulong)(uVar1 != 0);
  }
  return (ulong)((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (uVar2 & 0xffffffff) * 4 + 0x3c) &
                 0x4000) != 0);
}



/* Entry: 10054bf9c; end: 10054bfa3;  */

bool FUN_10054bf9c(uint param_1)

{
  if (0x7f < param_1) {
    func_0x000107c60e64();
    return param_1 != 0;
  }
  return (*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)param_1 * 4 + 0x3c) & 0x4000) != 0;
}



/* Entry: 10054bfa4; end: 10054c08f;  */

undefined8 * FUN_10054bfa4(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  *param_1 = &PTR_DAT_110d99f30;
  param_1[1] = param_2;
  param_1[3] = 0x32aaaba7;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  lVar3 = param_3;
  for (lVar2 = 0; lVar3 = lVar3 + -1, lStack_48 = param_4, param_4 != lVar2; lVar2 = lVar2 + 1) {
    iVar1 = (int)*(char *)(lVar3 + param_4);
    FUN_10054bf9c();
    lStack_48 = lVar2;
    if (iVar1 == 0) break;
  }
  lStack_48 = param_4 - lStack_48;
  lStack_50 = param_3;
  FUN_100060b18(param_1 + 0xb,&lStack_50);
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((*(byte *)(param_1[1] + 0x16c) & 1) == 0) {
    FUN_10054c7ec(param_1);
  }
  return param_1;
}



/* Entry: 10054c090; end: 10054c0c3;  */

void FUN_10054c090(void)

{
  FUN_10054bfa4();
  FUN_10054c0c4();
  return;
}



/* Entry: 10054c0c4; end: 10054c0f7;  */

void FUN_10054c0c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109a07c8;
  return;
}



/* Entry: 10054c0f8; end: 10054c14f;  */

long * FUN_10054c0f8(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long unaff_x19;
  long alStack_70 [2];
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x00010054c0ec();
  if (param_1 == (long *)0x0) {
    func_0x000107c60d78(1,&UNK_10f2e1659);
  }
  else {
    in_ZR = *(char *)(unaff_x19 + 8) == '\x01';
    if (!(bool)in_ZR) {
      func_0x000107c60d88();
      *(undefined1 *)(unaff_x19 + 8) = 1;
      return param_1;
    }
  }
  puVar3 = &UNK_10f2e1682;
  func_0x000107c60d78(0xb);
  plVar1 = alStack_70;
  func_0x00010054bdbc();
  uStack_58 = extraout_x8;
  FUN_10054c244(alStack_70,1);
  *plStack_60 = (long)puVar3;
  plStack_60[1] = param_3;
  FUN_10054c2e0(plStack_60 + 2,param_4);
  plVar2 = plStack_60;
  plStack_60 = (long *)0x0;
  FUN_10054c308();
  func_0x00010054c318(uStack_58);
  if ((bool)in_ZR) {
    return plVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  plVar2 = plVar1;
  FUN_10054c150();
  lVar4 = *plVar1;
  *plVar2 = lVar4;
  plVar2[1] = (long)plVar1;
  *(long **)(lVar4 + 8) = plVar2;
  *plVar1 = (long)plVar2;
  plVar1[2] = plVar1[2] + 1;
  return plVar2;
}



/* Entry: 10054c150; end: 10054c1d3;  */

long * FUN_10054c150(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long alStack_50 [2];
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = alStack_50;
  func_0x00010054bdbc();
  uStack_38 = extraout_x8;
  FUN_10054c244(alStack_50,1);
  *plStack_40 = param_2;
  plStack_40[1] = param_3;
  FUN_10054c2e0(plStack_40 + 2,param_4);
  plVar2 = plStack_40;
  plStack_40 = (long *)0x0;
  FUN_10054c308();
  func_0x00010054c318(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  plVar2 = plVar1;
  FUN_10054c150();
  lVar3 = *plVar1;
  *plVar2 = lVar3;
  plVar2[1] = (long)plVar1;
  *(long **)(lVar3 + 8) = plVar2;
  *plVar1 = (long)plVar2;
  plVar1[2] = plVar1[2] + 1;
  return plVar2;
}



/* Entry: 10054c1d4; end: 10054c217;  */

void FUN_10054c1d4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10054c150(param_1,0,0,param_2);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10054c218; end: 10054c243;  */

long FUN_10054c218(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = param_2 * 0xa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10054c218();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10054c244; end: 10054c26b;  */

long FUN_10054c244(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10054c218();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10054c26c; end: 10054c2c7;  */

void FUN_10054c26c(void)

{
  return;
}



/* Entry: 10054c2c8; end: 10054c2df;  */

void FUN_10054c2c8(void)

{
  func_0x00010054c274();
  FUN_10054c0c4();
  return;
}



/* Entry: 10054c2e0; end: 10054c307;  */

void FUN_10054c2e0(long param_1,long param_2)

{
  FUN_10054c2c8();
  func_0x00010054c0d8();
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  return;
}



/* Entry: 10054c308; end: 10054c333;  */

void FUN_10054c308(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10054c334; end: 10054c35f;  */

void FUN_10054c334(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x000107c61388();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



/* Entry: 10054c360; end: 10054c3a3;  */

undefined8 * FUN_10054c360(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  FUN_10054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10054c3a4; end: 10054c5f7;  */

undefined8 FUN_10054c3a4(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  uint *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_98 [24];
  uint *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  uint *puStack_48;
  
  puVar5 = auStack_160;
  if ((param_1[0x1c] & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  FUN_1004c3ea4(*(undefined8 *)(param_1 + 2),2);
  puVar2 = param_1;
  FUN_10054c7ec();
  puVar7 = (uint *)0x0;
  puStack_130 = (uint *)0x1e;
  for (iVar9 = -5; iVar9 != 0; iVar9 = iVar9 + 1) {
    puVar7 = puVar2;
    func_0x000107c613a8();
    if ((int)puVar7 != 5) {
      if ((int)puVar7 == 0x1b0a) {
        func_0x000107c6136c();
        func_0x000107c61368();
        uStack_128 = 0;
        puStack_130 = puVar2;
        FUN_1003a91d4(&UNK_10f82f6ae);
        FUN_1003a9204(auStack_98);
        puVar7 = puVar2;
        func_0x000107c613b8(puVar2,&puStack_130);
        puVar3 = puVar7;
        func_0x000107c60e5c();
        uVar6 = *puVar3;
        puVar4 = auStack_98;
        func_0x000107c613b8(puVar4,&puStack_130);
        if ((int)puVar7 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 2);
          puVar7 = param_1 + 0x16;
          func_0x000107c60c94();
          func_0x000107c3a50c();
          uStack_60 = (ulong)((int)puVar4 == 0);
          uStack_78 = 0;
          uStack_68 = 0;
          uStack_58 = 0;
          puStack_80 = puVar2;
          uStack_70 = (ulong)uVar6;
          puStack_50 = puVar5;
          puStack_48 = puVar7;
          FUN_1003a91d4(&UNK_10f82fad6);
          FUN_1003a9204(auStack_148);
          func_0x000107c313a4(uVar8,0x1b0a,auStack_148);
          func_0x000107c3a4fc();
          func_0x000107c3a504();
        }
        func_0x000107c60ca0(auStack_98);
        bVar1 = false;
        puVar7 = (uint *)0x1b0a;
        goto LAB_10054c548;
      }
      break;
    }
    func_0x000107c310bc(&puStack_130);
    puStack_130 = (uint *)((long)puStack_130 << 1);
  }
  uVar6 = (uint)puVar7;
  bVar1 = uVar6 == 100;
  if ((uVar6 & 0xfffffffe) == 100) {
    if (uVar6 != 100) {
LAB_10054c538:
      FUN_10054cb48(param_1);
      return 0;
    }
  }
  else {
LAB_10054c548:
    uVar8 = *(undefined8 *)(param_1 + 2);
    func_0x000107c60c94(&puStack_80,param_1 + 0x16);
    FUN_1004c3cd0(&puStack_130,&UNK_10f82fb25,&puStack_80);
    func_0x000107c313a4(uVar8,puVar7,&puStack_130);
    func_0x000107c60ca0(&puStack_130);
    func_0x000107c60ca0(&puStack_80);
    if (!bVar1) goto LAB_10054c538;
  }
  return 1;
}



/* Entry: 10054c5f8; end: 10054c6b3;  */

void FUN_10054c5f8(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 == 0) || (FUN_10054c3a4(), (int)lVar2 == 0)) {
    if (*(char *)((long)param_1 + 0xc) == '\x01') {
      *(undefined1 *)((long)param_1 + 0xc) = 0;
    }
  }
  else {
    uVar1 = (undefined4)*param_1;
    FUN_10054c8d8();
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined1 *)((long)param_1 + 0xc) = 1;
  }
  return;
}



/* Entry: 10054c6b4; end: 10054c713;  */

void FUN_10054c6b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x00010054c67c(param_1,&uStack_28);
  return;
}



/* Entry: 10054c714; end: 10054c7eb;  */

void FUN_10054c714(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_1004c3ea4(*(undefined8 *)(param_1 + 8),1);
  uStack_50 = 0;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x188);
  lVar2 = param_1 + 0x58;
  lVar4 = (long)*(char *)(param_1 + 0x6f);
  lVar3 = lVar2;
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 0x60);
    lVar3 = *(long *)(param_1 + 0x58);
  }
  func_0x000107c613a0(uVar1,lVar3,lVar4,&uStack_48,&uStack_50);
  if ((int)uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_1005d466c();
    lStack_40 = lVar2;
    lStack_38 = lVar3;
    FUN_1003a91d4(&UNK_10f82fa0a);
    FUN_1003a9204(auStack_68);
    func_0x000107c313a4(uVar5,uVar1,auStack_68);
    func_0x000107c60ca0(auStack_68);
  }
  *(undefined8 *)(param_1 + 0x80) = uStack_48;
  func_0x000107c61334();
  *(long *)(param_1 + 0x78) = (long)(int)uStack_48;
  return;
}



/* Entry: 10054c7ec; end: 10054c8d7;  */

long FUN_10054c7ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_10054c714(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
  }
  return lVar1;
}



/* Entry: 10054c8d8; end: 10054c8f3;  */

void FUN_10054c8d8(undefined8 param_1)

{
  FUN_10054c7ec();
  FUN_10054c8f4(param_1,0);
  return;
}



/* Entry: 10054c8f4; end: 10054c917;  */

void FUN_10054c8f4(void)

{
  FUN_10054c918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_11034cff8)();
  return;
}



/* Entry: 10054c918; end: 10054c947;  */

void FUN_10054c918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_type_11034d010)();
  return;
}



/* Entry: 10054c948; end: 10054c993;  */

ulong FUN_10054c948(void)

{
  ulong uVar1;
  uint *puVar2;
  long lStack_20;
  char cStack_14;
  
  puVar2 = (uint *)&lStack_20;
  func_0x00010054c930(&lStack_20);
  if (cStack_14 == '\x01' && lStack_20 != 0) {
    FUN_10054ca48();
    uVar1 = (ulong)*puVar2 | 0x100000000;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10054c994; end: 10054c99f;  */

void FUN_10054c994(void)

{
  return;
}



/* Entry: 10054c9a0; end: 10054c9d3;  */

void FUN_10054c9a0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10054c994();
  FUN_10054c9d4(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10054c9d4; end: 10054ca47;  */

void FUN_10054c9d4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 1);
  if (cVar2 == *(char *)(param_2 + 1)) {
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      return;
    }
  }
  else if (cVar2 == '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  return;
}



/* Entry: 10054ca48; end: 10054cac3;  */

long FUN_10054ca48(long param_1)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    func_0x00010731d2a4(auStack_50);
    FUN_1004c3cd0(auStack_38,&UNK_10f40a221,auStack_50);
    func_0x00010731cc5c();
    func_0x00010731cfd8();
    func_0x00010731cb14();
  }
  return param_1 + 8;
}



/* Entry: 10054cac4; end: 10054cb17;  */

void FUN_10054cac4(long *param_1)

{
  func_0x000107c60d88(param_1 + 3);
  FUN_10054cb48(param_1);
  func_0x000107c60d8c(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010054cb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 10054cb18; end: 10054cb47;  */

undefined8 * FUN_10054cb18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10054cac4(uVar1);
  return param_1;
}



/* Entry: 10054cb48; end: 10054cb67;  */

void FUN_10054cb48(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
    if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbfd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__sqlite3_reset_11034d0a8)();
      return;
    }
  }
  return;
}



/* Entry: 10054cb68; end: 10054cb73; +[SCStoriesCustomStoryMetadata table] */

undefined * FUN_10054cb68(void)

{
  return &UNK_10f4a109f;
}



/* Entry: 10054cb74; end: 10054cba3;  */

void FUN_10054cb74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c60d88(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 10054cba4; end: 10054cbab;  */

void FUN_10054cba4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_48;
  
  plVar4 = (long *)&stack0x00000058;
  FUN_10054ba68();
  plVar5 = plVar4;
  uStack_48 = extraout_x8;
  if ((*(byte *)((long)plVar4 + 0xc) & 1) == 0) {
    uStack_90 = (ulong)*(uint *)(plVar4 + 1);
    uStack_88 = 0;
    FUN_1003a91d4(&UNK_10f82fb67);
    FUN_10054bab8();
    func_0x00010054bbd0();
    func_0x00010054bbe4();
    func_0x00010054bc0c();
    func_0x00010054bc1c();
    func_0x00010054bc2c();
    *(undefined1 *)((long)plVar4 + 0xc) = 1;
    plVar5 = (long *)*plVar4;
    FUN_10054ccf8();
    if (*(char *)((long)plVar4 + 0x27) < '\0') {
      if (plVar4[3] == 0) goto LAB_10054ccac;
    }
    else if (*(char *)((long)plVar4 + 0x27) == '\0') goto LAB_10054ccac;
    FUN_1004c330c();
    func_0x000107c60c94(auStack_a8,*plVar4 + 0xf8);
    func_0x00010054bbd0();
    uVar1 = extraout_x11;
    puVar3 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_00;
      puVar3 = auStack_a8;
    }
    lVar6 = (long)*(char *)((long)plVar4 + 0x27);
    if (lVar6 < 0) {
      plVar9 = (long *)plVar4[2];
      lVar6 = plVar4[3];
    }
    else {
      plVar9 = plVar4 + 2;
    }
    plVar4 = plVar4 + 5;
    func_0x0001004c3350(plVar4);
    (**(code **)(*plVar5 + 0x30))(plVar5,0,puVar3,uVar1,plVar9,lVar6,2,plVar4);
    func_0x00010054bc2c();
  }
LAB_10054ccac:
  FUN_10054bd90(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010054bc1c();
  func_0x00010054bc2c();
  func_0x000107c60bd8(plVar5);
  FUN_10054a7b8();
  lVar6 = plVar5[8];
  lVar2 = plVar5[9];
  if (lVar6 != lVar2) {
    uVar8 = (lVar2 - lVar6) / 0x18 & 0xffffffff;
    lVar6 = lVar6 + uVar8 * 0x18;
    do {
      if ((int)uVar8 < 1) goto LAB_10054cd64;
      lVar7 = (long)*(char *)(lVar6 + -1);
      if (lVar7 < 0) {
        lVar7 = *(long *)(lVar6 + -0x10);
      }
      lVar6 = lVar6 + -0x18;
      uVar8 = uVar8 - 1;
    } while (lVar7 != 0);
    func_0x000107c60ca4(lVar6,lVar2 + -0x18);
    FUN_10054cd88(plVar5 + 8);
    if (uVar8 == 0) {
LAB_10054cd64:
      FUN_10054cd94(plVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar5 + 0xb);
  return;
}



/* Entry: 10054cbac; end: 10054ccf7;  */

void FUN_10054cbac(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar6;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  ulong uVar7;
  long *plVar8;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_48;
  
  FUN_10054ba68();
  plVar4 = param_1;
  uStack_48 = extraout_x8;
  if ((*(byte *)((long)param_1 + 0xc) & 1) == 0) {
    uStack_90 = (ulong)*(uint *)(param_1 + 1);
    uStack_88 = 0;
    FUN_1003a91d4(&UNK_10f82fb67);
    FUN_10054bab8();
    func_0x00010054bbd0();
    func_0x00010054bbe4();
    func_0x00010054bc0c();
    func_0x00010054bc1c();
    func_0x00010054bc2c();
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    plVar4 = (long *)*param_1;
    FUN_10054ccf8();
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      if (param_1[3] == 0) goto LAB_10054ccac;
    }
    else if (*(char *)((long)param_1 + 0x27) == '\0') goto LAB_10054ccac;
    FUN_1004c330c();
    func_0x000107c60c94(auStack_a8,*param_1 + 0xf8);
    func_0x00010054bbd0();
    uVar1 = extraout_x11;
    puVar3 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_00;
      puVar3 = auStack_a8;
    }
    lVar5 = (long)*(char *)((long)param_1 + 0x27);
    if (lVar5 < 0) {
      plVar8 = (long *)param_1[2];
      lVar5 = param_1[3];
    }
    else {
      plVar8 = param_1 + 2;
    }
    param_1 = param_1 + 5;
    func_0x0001004c3350(param_1);
    (**(code **)(*plVar4 + 0x30))(plVar4,0,puVar3,uVar1,plVar8,lVar5,2,param_1);
    func_0x00010054bc2c();
  }
LAB_10054ccac:
  FUN_10054bd90(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010054bc1c();
  func_0x00010054bc2c();
  func_0x000107c60bd8(plVar4);
  FUN_10054a7b8();
  lVar5 = plVar4[8];
  lVar2 = plVar4[9];
  if (lVar5 != lVar2) {
    uVar7 = (lVar2 - lVar5) / 0x18 & 0xffffffff;
    lVar5 = lVar5 + uVar7 * 0x18;
    do {
      if ((int)uVar7 < 1) goto LAB_10054cd64;
      lVar6 = (long)*(char *)(lVar5 + -1);
      if (lVar6 < 0) {
        lVar6 = *(long *)(lVar5 + -0x10);
      }
      lVar5 = lVar5 + -0x18;
      uVar7 = uVar7 - 1;
    } while (lVar6 != 0);
    func_0x000107c60ca4(lVar5,lVar2 + -0x18);
    FUN_10054cd88(plVar4 + 8);
    if (uVar7 == 0) {
LAB_10054cd64:
      FUN_10054cd94(plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar4 + 0xb);
  return;
}



/* Entry: 10054ccf8; end: 10054cd87;  */

void FUN_10054ccf8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  ulong uVar4;
  
  FUN_10054a7b8();
  lVar2 = *(long *)(unaff_x19 + 0x40);
  lVar1 = *(long *)(unaff_x19 + 0x48);
  if (lVar2 != lVar1) {
    uVar4 = (lVar1 - lVar2) / 0x18 & 0xffffffff;
    lVar2 = lVar2 + uVar4 * 0x18;
    do {
      if ((int)uVar4 < 1) goto LAB_10054cd64;
      lVar3 = (long)*(char *)(lVar2 + -1);
      if (lVar3 < 0) {
        lVar3 = *(long *)(lVar2 + -0x10);
      }
      lVar2 = lVar2 + -0x18;
      uVar4 = uVar4 - 1;
    } while (lVar3 != 0);
    func_0x000107c60ca4(lVar2,lVar1 + -0x18);
    FUN_10054cd88((long *)(unaff_x19 + 0x40));
    if (uVar4 == 0) {
LAB_10054cd64:
      FUN_10054cd94();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 10054cd88; end: 10054cd93;  */

void FUN_10054cd88(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002b82c(param_1,*(long *)(param_1 + 8) + -0x18);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10054cd94; end: 10054cdef;  */

void FUN_10054cd94(long param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar1 = param_1;
  FUN_10028bb78();
  FUN_10054ce38(param_1,&uStack_40,1,lVar1);
  FUN_10054d108();
  return;
}



/* Entry: 10054cdf0; end: 10054ce1b;  */

undefined8 *
FUN_10054cdf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_register_00005008;
  undefined8 uVar18;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar11 = LZCOUNT(((long)param_3 - (long)param_2) / 0x18) << 1 ^ 0x7e;
  uVar14 = 1;
  puVar9 = param_3;
  puVar8 = param_2;
LAB_10016e9a0:
  puVar10 = puVar9 + -3;
  puStack_88 = puVar9 + -6;
  puStack_90 = puVar9 + -9;
LAB_10016e9b4:
  lVar12 = -uVar11;
  puVar7 = puVar8;
LAB_10016e9bc:
  puVar8 = puVar7;
  lVar12 = lVar12 + 1;
  uVar11 = (long)puVar9 - (long)puVar8;
  uStack_c8 = uVar14;
  puStack_c0 = puVar8;
  puStack_b8 = puVar9;
  puStack_b0 = puVar10;
  puStack_a8 = param_4;
  switch((long)uVar11 / 0x18) {
  case 2:
    puVar7 = puVar10;
    func_0x00010016f000();
    if (((uint)puVar7 >> 7 & 1) != 0) {
      func_0x000105493cb4();
      uVar13 = puVar9[-2];
      uVar14 = *puVar10;
      puVar8[2] = puVar9[-1];
      puVar8[1] = uVar13;
      *puVar8 = uVar14;
      puVar9[-2] = uStack_78;
      *puVar10 = uStack_80;
      puVar9[-1] = uStack_70;
    }
  case 0:
  case 1:
LAB_10016eb60:
    func_0x00010016eefc(unaff_x30);
    return unaff_x30;
  case 3:
    uVar4 = (int)puVar8 + 0x18;
    func_0x00010016eefc();
    uVar2 = uVar4;
    func_0x00010016ec8c();
    uVar3 = uVar2;
    func_0x00010016ed48();
    if ((uVar2 >> 7 & 1) == 0) {
      if (-1 < (char)uVar3) {
        return (undefined8 *)0x0;
      }
      func_0x00010016efe4();
      puVar10[1] = in_register_00005008;
      *puVar10 = param_1;
      puVar10[2] = extraout_x8_00;
      func_0x00010016ec8c();
      if ((uVar4 >> 7 & 1) != 0) {
        func_0x00010016ed54();
      }
    }
    else {
      if ((char)uVar3 < '\0') {
        uVar14 = puVar8[2];
        in_register_00005008 = puVar8[1];
        param_1 = *puVar8;
        uVar13 = puVar10[2];
        uVar16 = *puVar10;
        puVar8[1] = puVar10[1];
        *puVar8 = uVar16;
        puVar8[2] = uVar13;
      }
      else {
        func_0x00010016ed54();
        func_0x00010016ed48();
        if ((uVar3 >> 7 & 1) == 0) {
          return (undefined8 *)0x1;
        }
        func_0x00010016efe4();
        uVar14 = extraout_x8;
      }
      puVar10[1] = in_register_00005008;
      *puVar10 = param_1;
      puVar10[2] = uVar14;
    }
    return (undefined8 *)0x1;
  case 4:
    func_0x00010016eefc(puVar8,puVar8 + 3,puVar8 + 6,puVar10,param_4);
    func_0x00010016ed84();
    FUN_10016ec94();
    func_0x00010016ec8c();
    if (((((uint)puVar10 >> 7 & 1) != 0) && (FUN_10016f0f8(), ((uint)puVar10 >> 7 & 1) != 0)) &&
       (func_0x00010016f124(), ((uint)puVar10 >> 7 & 1) != 0)) {
      func_0x00010016f150();
    }
    return puVar10;
  case 5:
    puVar9 = puVar8 + 9;
    func_0x00010016eefc(puVar8,puVar8 + 3,puVar8 + 6,puVar9,puVar10,param_4);
    uStack_d0 = 0x18;
    func_0x00010016ed84();
    FUN_10016f09c();
    puVar8 = puVar10;
    func_0x00010016f000();
    if (((uint)puVar8 >> 7 & 1) != 0) {
      uVar14 = puVar9[2];
      uVar17 = puVar9[1];
      uVar16 = *puVar9;
      uVar13 = puVar10[2];
      uVar18 = *puVar10;
      puVar9[1] = puVar10[1];
      *puVar9 = uVar18;
      puVar9[2] = uVar13;
      puVar10[1] = uVar17;
      *puVar10 = uVar16;
      puVar10[2] = uVar14;
      func_0x00010016ec8c();
      puVar8 = puVar9;
      if (((((uint)puVar9 >> 7 & 1) != 0) &&
          (FUN_10016f0f8(), puVar8 = puVar9, ((uint)puVar9 >> 7 & 1) != 0)) &&
         (func_0x00010016f124(), puVar8 = puVar9, ((uint)puVar9 >> 7 & 1) != 0)) {
        func_0x00010016f150();
        puVar8 = puVar9;
      }
    }
    return puVar8;
  }
  if ((long)uVar11 < 0x240) {
    func_0x00010016ed78();
    if ((int)uVar14 == 0) {
      func_0x00010016eefc();
      if (param_2 != param_3) {
        func_0x00010016ed84();
        while (puVar8 = puVar10, puVar10 = puVar8 + 3, puVar10 != param_4) {
          param_2 = puVar10;
          func_0x00010016ec8c();
          if (((uint)param_2 >> 7 & 1) != 0) {
            uStack_d8 = puVar8[4];
            uStack_e0 = *puVar10;
            uStack_d0 = puVar8[5];
            puVar8[4] = 0;
            puVar8[5] = 0;
            *puVar10 = 0;
            do {
              param_2 = puVar8;
              uVar4 = (int)param_2 + 0x18;
              func_0x00010016eee0();
              FUN_10016f200();
              puVar8 = param_2 + -3;
            } while ((uVar4 >> 7 & 1) != 0);
            func_0x00010016efdc(param_2);
            func_0x00010016eef4();
          }
        }
      }
      return param_2;
    }
    func_0x00010016eefc();
    if (param_2 == param_3) {
      return param_2;
    }
    uStack_d0 = 0x18;
    func_0x00010016ed84();
    lVar12 = 0;
    puVar8 = param_2;
    goto LAB_10016ef44;
  }
  if (lVar12 == 1) {
    func_0x00010016ed78();
    func_0x00010016eefc();
    if (param_2 == param_3) {
      return puVar9;
    }
    uStack_d0 = 0x18;
    if (param_2 != param_3) {
      func_0x0001054913e8();
      for (puVar8 = param_3; puVar8 != puVar9; puVar8 = puVar8 + 3) {
        puVar10 = puVar8;
        func_0x00010016f000();
        if (((uint)puVar10 >> 7 & 1) != 0) {
          uVar14 = puVar8[2];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          uVar13 = param_2[2];
          uVar18 = *param_2;
          puVar8[1] = param_2[1];
          *puVar8 = uVar18;
          puVar8[2] = uVar13;
          param_2[1] = uVar17;
          *param_2 = uVar16;
          param_2[2] = uVar14;
          func_0x000105491460(param_2,param_4,((long)param_3 - (long)param_2) / 0x18,param_2);
        }
      }
      func_0x0001054915a4(param_2,param_3,param_4);
      puVar9 = puVar8;
    }
    return puVar9;
  }
  puVar7 = puVar8 + ((ulong)((long)uVar11 / 0x18) >> 1) * 3;
  if (uVar11 < 0xc01) {
    param_3 = puVar8;
    FUN_10016ec84(puVar7,puVar8,puVar10);
    puVar5 = puVar7;
  }
  else {
    FUN_10016ec84(puVar8,puVar7,puVar10);
    puVar5 = puVar7 + -3;
    FUN_10016ec84(puVar8 + 3,puVar5,puStack_88);
    FUN_10016ec84(puVar8 + 6,puVar7 + 3,puStack_90);
    param_3 = puVar7;
    FUN_10016ec84(puVar5,puVar7,puVar7 + 3);
    func_0x000105493cb4();
    uVar16 = puVar7[1];
    uVar13 = *puVar7;
    puVar8[2] = puVar7[2];
    puVar8[1] = uVar16;
    *puVar8 = uVar13;
    puVar7[2] = uStack_70;
    puVar7[1] = uStack_78;
    *puVar7 = uStack_80;
    param_1 = uStack_80;
    in_register_00005008 = uStack_78;
  }
  if ((int)uVar14 == 0) {
    param_2 = puVar8 + -3;
    func_0x00010016f000();
    puVar5 = param_2;
    if (((uint)param_2 >> 7 & 1) == 0) {
      func_0x00010016ed78();
      func_0x0001054910b0();
      puVar8 = param_2;
      goto LAB_10016eafc;
    }
  }
  func_0x00010016ed78();
  FUN_10016ed90();
  if (((ulong)param_3 & 1) != 0) {
    puVar6 = puVar8;
    func_0x000105491198(puVar8,puVar5,param_4);
    puVar7 = puVar5 + 3;
    param_2 = puVar7;
    param_3 = puVar9;
    func_0x000105491198(puVar7,puVar9,param_4);
    if ((int)param_2 == 0) goto code_r0x00010016eac4;
    uVar11 = -lVar12;
    puVar9 = puVar5;
    if (((ulong)puVar6 & 1) != 0) goto LAB_10016eb60;
    goto LAB_10016e9a0;
  }
  goto LAB_10016eacc;
LAB_10016ef44:
  puVar8 = puVar8 + 3;
  if (puVar8 == param_4) {
    return param_2;
  }
  func_0x00010016eed8();
  if (((uint)param_2 >> 7 & 1) != 0) {
    func_0x00010016efc0();
    lVar1 = lVar12;
    do {
      lVar15 = lVar1;
      FUN_100066230((long)puVar10 + lVar15 + 0x18);
      param_2 = puVar10;
      if (lVar15 == 0) goto LAB_10016ef94;
      uVar4 = 0;
      func_0x000100125af4(auStack_f0,lVar15 + -0x18 + (long)puVar10);
      lVar1 = lVar15 + -0x18;
    } while ((uVar4 >> 7 & 1) != 0);
    param_2 = (undefined8 *)((long)puVar10 + lVar15);
LAB_10016ef94:
    func_0x00010016efdc();
    func_0x00010016eef4();
  }
  lVar12 = lVar12 + 0x18;
  goto LAB_10016ef44;
code_r0x00010016eac4:
  if (((ulong)puVar6 & 1) == 0) goto LAB_10016eacc;
  goto LAB_10016e9bc;
LAB_10016eacc:
  param_3 = puVar5;
  FUN_10016e96c(puVar8,puVar5,param_4,-lVar12,uVar14);
  param_2 = puVar8;
  puVar8 = puVar5 + 3;
LAB_10016eafc:
  uVar14 = 0;
  uVar11 = -lVar12;
  goto LAB_10016e9b4;
}



/* Entry: 10054ce1c; end: 10054ce37;  */

void FUN_10054ce1c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10054cdf0(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10054ce38; end: 10054d09f;  */

void FUN_10054ce38(long param_1,ulong *param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  undefined8 *puStack_68;
  
  FUN_10054ce1c(*param_2,param_2[1]);
  uVar17 = *param_2;
  uVar18 = param_2[1];
  if (uVar17 != uVar18) {
    do {
      uVar15 = uVar17;
      uVar14 = uVar15 + 0x18;
      uVar17 = uVar18;
      if (uVar14 == uVar18) goto LAB_10054cedc;
      uVar13 = uVar15;
      FUN_1000e107c(uVar15,uVar14);
      uVar17 = uVar14;
    } while ((int)uVar13 == 0);
    while (uVar14 = uVar14 + 0x18, uVar14 != uVar18) {
      uVar17 = uVar15;
      FUN_1000e107c(uVar15,uVar14);
      if ((uVar17 & 1) == 0) {
        uVar15 = uVar15 + 0x18;
        FUN_100066230(uVar15,uVar14);
      }
    }
    uVar17 = uVar15 + 0x18;
  }
LAB_10054cedc:
  FUN_1001bc934(param_2,uVar17,param_2[1]);
  puVar7 = (undefined8 *)0x30;
  func_0x000107c60e20();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110d99ca8;
  uVar18 = param_2[1];
  uVar17 = *param_2;
  puVar7[5] = param_2[2];
  puStack_80 = puVar7 + 3;
  puVar7[4] = uVar18;
  *puStack_80 = uVar17;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar11 = *(long **)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x30);
  puStack_78 = puVar7;
  do {
    if (plVar11 == plVar2) {
      FUN_10054d0b0(&puStack_80);
      return;
    }
    puVar7 = *(undefined8 **)(*plVar11 + 8);
    puVar3 = *(undefined8 **)(*plVar11 + 0x10);
    while( true ) {
      if (puVar7 == puVar3) goto LAB_10054d054;
      uVar17 = puVar7[1];
      puVar10 = (undefined8 *)*puVar7;
      if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
        uVar17 = (ulong)*(byte *)((long)puVar7 + 0x17);
        puVar10 = puVar7;
      }
      pcVar8 = "*";
      FUN_1000633dc("*",1,puVar10,uVar17);
      if (((ulong)pcVar8 & 1) != 0) break;
      uVar17 = puStack_80[1];
      uVar14 = *puStack_80;
      uVar18 = (long)(uVar17 - *puStack_80) / 0x18;
      while (uVar15 = uVar14, uVar18 != 0) {
        uVar13 = uVar18 >> 1;
        lVar16 = uVar15 + uVar13 * 0x18;
        lVar9 = lVar16;
        func_0x000100125af4(lVar16,puVar7);
        uVar14 = lVar16 + 0x18;
        uVar18 = uVar18 + (uVar18 >> 1 ^ 0xffffffffffffffff);
        if (-1 < (char)lVar9) {
          uVar14 = uVar15;
          uVar18 = uVar13;
        }
      }
      if ((uVar17 != uVar15) &&
         (puVar10 = puVar7, func_0x000100125af4(puVar7,uVar15), ((uint)puVar10 >> 7 & 1) == 0))
      break;
      puVar7 = puVar7 + 3;
    }
    uVar4 = *(uint *)(*plVar11 + 0x20);
    if (param_3 == 0) {
      if (1 < uVar4 - 1) goto LAB_10054d054;
    }
    else if ((uVar4 & 0xfffffffd) != 0) goto LAB_10054d054;
    pcVar12 = *(code **)(*plVar11 + 0x28);
    puStack_68 = puStack_78;
    puStack_70 = puStack_80;
    if (puStack_78 != (undefined8 *)0x0) {
      plVar1 = puStack_78 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    (*pcVar12)(plVar11,&puStack_70,param_4);
    FUN_10054d0b0(&puStack_70);
LAB_10054d054:
    plVar11 = plVar11 + 2;
  } while( true );
}



/* Entry: 10054d0a0; end: 10054d0af;  */

void FUN_10054d0a0(void)

{
  return;
}



/* Entry: 10054d0b0; end: 10054d107;  */

long FUN_10054d0b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10054d108; end: 10054d11f;  */

void FUN_10054d108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10054d120; end: 10054d1c3;  */

long * FUN_10054d120(long *param_1,int param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *plVar3;
  int extraout_w10;
  long lVar4;
  long *plVar5;
  int unaff_w21;
  
  plVar1 = param_1;
  FUN_10054ba68();
  if ((*(byte *)((long)plVar1 + 0xc) & 1) == 0) {
    lVar4 = *param_1;
    FUN_1003a91d4(&UNK_10f82fb46);
    FUN_10054bab8();
    func_0x00010054bbd0();
    param_2 = extraout_w10;
    if (in_NG == in_OV) {
      param_2 = unaff_w21;
    }
    func_0x00010054bbe4();
    FUN_1004c3d34(lVar4);
    func_0x00010054bc1c();
    func_0x00010054bc2c();
    func_0x000107c313d4(*param_1);
  }
  plVar1 = param_1 + 2;
  func_0x000107c60ca0();
  FUN_10054bd90(extraout_x8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    if (param_2 == 0) {
      func_0x000107c60bd8();
    }
    func_0x000104bd46a0();
    plVar2 = plVar1;
    if (plVar1[2] != 0) {
      plVar5 = (long *)plVar1[1];
      plVar3 = *(long **)(*plVar1 + 8);
      lVar4 = *plVar5;
      *(long **)(lVar4 + 8) = plVar3;
      *plVar3 = lVar4;
      plVar1[2] = 0;
      while (plVar5 != plVar1) {
        plVar5 = (long *)plVar5[1];
        plVar2 = plVar1;
        FUN_10054d250(plVar1);
      }
    }
    return plVar2;
  }
  return param_1;
}



/* Entry: 10054d1c4; end: 10054d21b;  */

void FUN_10054d1c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_10054d250(param_1);
    }
  }
  return;
}



/* Entry: 10054d21c; end: 10054d24b;  */

void FUN_10054d21c(long param_1)

{
  FUN_10054d1c4(param_1 + 0x60);
  func_0x000107c60ca0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10054d24c; end: 10054d24f;  */

undefined8 * FUN_10054d24c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  FUN_10054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10054d250; end: 10054d27f;  */

void FUN_10054d250(undefined8 param_1,long param_2)

{
  (*(code *)**(undefined8 **)(param_2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10054d280; end: 10054d29f;  */

void FUN_10054d280(void)

{
  return;
}



/* Entry: 10054d2a0; end: 10054d32f;  */

void FUN_10054d2a0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  if (param_2 != 0) {
    func_0x00010054d294();
    FUN_10054d2a0();
    FUN_10054d2a0();
    func_0x00010054b180(unaff_x19 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10054d330; end: 10054d337;  */

void FUN_10054d330(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10054d338; end: 10054d38b;  */

void FUN_10054d338(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  func_0x000107c60e20();
  FUN_10054d3cc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10054d38c; end: 10054d3cb;  */

void FUN_10054d38c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x278;
  func_0x000107c60e20();
  FUN_10054d4b4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10054d3cc; end: 10054d45b;  */

undefined8 * FUN_10054d3cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a602e0;
  param_1[1] = param_2;
  FUN_10054d38c(param_1 + 2,param_2);
  FUN_10054d62c(param_1 + 3,param_2);
  FUN_10054d7e8(param_1 + 4,param_2);
  FUN_10054d9a4(param_1 + 5,param_2);
  return param_1;
}



/* Entry: 10054d45c; end: 10054d487;  */

void FUN_10054d45c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  return;
}



/* Entry: 10054d488; end: 10054d4b3;  */

void FUN_10054d488(void)

{
  FUN_10054d45c();
  FUN_10054d584();
  func_0x00010054d590();
  return;
}



/* Entry: 10054d4b4; end: 10054d583;  */

long FUN_10054d4b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10054d488(param_1,param_2,&UNK_10f4af64b,0x85);
  FUN_10054d5b0(lVar1 + 0x78,param_2,&UNK_10f4af6d1,0x50);
  FUN_10054d5dc(param_1 + 0xf0,param_2,&UNK_10f4af722,0x65);
  FUN_10054bfa4(param_1 + 0x168,param_2,&UNK_10f4af788,0x83);
  FUN_10054bfa4(param_1 + 0x1f0,param_2,&UNK_10f4af80c,0x3d);
  return param_1;
}


