/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103039494; end: 1030394df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103039494(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f35700) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030394e0; end: 103039527; -[_TtC19SCSnapProIdValidity27SCSnapProIdValidityServices snapProIdValidity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030394e0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103039528; end: 103039587; -[_TtC19SCSnapProIdValidity27SCSnapProIdValidityServices init] */

void FUN_103039528(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapProIdValidity.SCSnapProIdValidityServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103039554);
  (*pcVar1)();
}



/* Entry: 103039588; end: 103039597;  */

undefined1  [16] FUN_103039588(void)

{
  return ZEXT816(0x110600640);
}



/* Entry: 103039598; end: 1030395a7; -[_TtC19SCSnapProIdValidity27SCSnapProIdValidityServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103039598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f35700));
  return;
}



/* Entry: 1030395a8; end: 103039647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1030395a8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f35780;
  uVar4 = (uint)*(byte *)(unaff_x20 + _DAT_112f35780);
  if (*(byte *)(unaff_x20 + _DAT_112f35780) == 2) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f357b0);
    func_0x000107c615f0(uVar5);
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f11ade0);
    uVar3 = uVar5;
    func_0x000107c3ebd4();
    uVar4 = (uint)uVar3;
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uVar2);
    *(char *)(unaff_x20 + lVar1) = (char)uVar3;
  }
  return uVar4 & 1;
}



/* Entry: 103039648; end: 1030398bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103039648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f35730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f35738) = 0x4014000000000000;
  lVar2 = _DAT_112f35740;
  *(undefined8 *)(unaff_x20 + _DAT_112f35740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f35748) = 0;
  lVar3 = _DAT_112f35750;
  uVar7 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar7;
  lVar3 = _DAT_112f35758;
  *(undefined **)(unaff_x20 + _DAT_112f35758) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35760);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar4 = _DAT_112f35768;
  *(undefined8 *)(unaff_x20 + _DAT_112f35768) = 0;
  lVar5 = _DAT_112f35770;
  func_0x000107c61614(unaff_x20 + _DAT_112f35770,0);
  lVar6 = _DAT_112f35778;
  func_0x000107c61614(unaff_x20 + _DAT_112f35778,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f35780) = 2;
  puVar8 = PTR_PTR_1126b10e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f35788) = puVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35790);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f35798);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f357a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f357a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f357b0) = param_8;
  func_0x000107c61604(unaff_x20 + lVar5,param_11);
  func_0x000107c61604(unaff_x20 + lVar6,param_9);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = param_10;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar7);
  puVar9 = auStack_88;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(param_11);
  return puVar9;
}



/* Entry: 1030398bc; end: 103039917;  */

void FUN_1030398bc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103039918(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103039918; end: 103039b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103039918(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar2 = param_2;
  func_0x00010006c804();
  FUN_1030395a8();
  lVar1 = _DAT_112f35758;
  lVar8 = *(long *)(param_2 + 0x10);
  if ((uVar2 & 1) == 0) {
    if (lVar8 != 0) {
      puVar7 = (undefined8 *)(param_2 + 0x28);
      do {
        param_3 = puVar7[-1];
        uVar4 = *puVar7;
        func_0x000107c61428(unaff_x20 + lVar1,auStack_88,0x21,0);
        func_0x000107c61434(uVar4);
        func_0x000100403b00(auStack_70,param_3,uVar4);
        func_0x000107c614a8(auStack_88);
        func_0x000107c6142c(uStack_68);
        puVar7 = puVar7 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else if (lVar8 != 0) {
    puVar7 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar4 = puVar7[-1];
      uVar5 = *puVar7;
      func_0x000107c61434(uVar5);
      uVar6 = uVar5;
      func_0x000107c5fadc(uVar4,uVar5);
      uVar3 = uVar4;
      func_0x000108ea5f00();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      param_3 = uVar3;
      func_0x000107c5faec(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61428(unaff_x20 + lVar1,auStack_88,0x21,0);
      func_0x000100403b00(auStack_70,param_3,uVar6);
      func_0x000107c614a8(auStack_88);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uStack_68);
      puVar7 = puVar7 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  func_0x000100070bfc();
  lVar8 = *(long *)(unaff_x20 + _DAT_112f357b0);
  func_0x000108f4833c();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f35788);
  func_0x000107c61174(uVar4);
  uVar5 = 0x735f72656c6c6f70;
  func_0x000107c5fadc(0x735f72656c6c6f70,0xec00000074726174);
  func_0x000108f34fe8(uVar4,uVar5,lVar8,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x20 + _DAT_112f35748) = param_1;
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x20 + _DAT_112f35740) = param_1;
  FUN_103039b5c();
  return;
}



/* Entry: 103039b5c; end: 103039c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103039b5c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112f35730;
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112f35730) != 0) {
    func_0x000107c498f8();
  }
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f35738);
  puVar3 = &UNK_1106006e0;
  func_0x000107c613fc(&UNK_1106006e0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_50 = FUN_10303b220;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100fef460;
  puStack_58 = &UNK_1106006f8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c51924(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 103039c60; end: 103039ce7;  */

void FUN_103039c60(long param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_103039ce8(param_2);
    uVar1 = (uint)param_2;
    func_0x000107c61170(param_1);
  }
  (*param_3)(uVar1 & 1);
  return;
}



/* Entry: 103039ce8; end: 103039df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103039ce8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [24];
  
  func_0x00010006c804();
  lVar4 = _DAT_112f35758;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar2 = puVar6[-1];
      uVar1 = *puVar6;
      func_0x000107c61428(unaff_x20 + lVar4,auStack_68,0x21,0);
      func_0x000107c61434(uVar1);
      uVar3 = uVar1;
      func_0x0001010af1e4(uVar2,uVar1);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar3);
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  func_0x000107c61428(unaff_x20 + lVar4,auStack_68,0,0);
  lVar4 = *(long *)(*(long *)(unaff_x20 + lVar4) + 0x10);
  func_0x000100070bfc();
  lVar5 = _DAT_112f35730;
  if (lVar4 == 0) {
    uVar2 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f35730) != 0) {
      func_0x000107c498f8();
      uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
    }
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    func_0x000107c61170(uVar2);
  }
  return lVar4 == 0;
}



/* Entry: 103039df8; end: 103039e4b;  */

void FUN_103039df8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103039e4c();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103039e4c; end: 10303a0d7;  */

/* WARNING: Possible PIC construction at 0x000103039ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103039ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103039f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103039fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303a070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303a090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303a074) */
/* WARNING: Removing unreachable block (ram,0x000103039fa4) */
/* WARNING: Removing unreachable block (ram,0x00010303a0ac) */
/* WARNING: Removing unreachable block (ram,0x000103039fc0) */
/* WARNING: Removing unreachable block (ram,0x00010303a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010303a0c0) */
/* WARNING: Removing unreachable block (ram,0x000103039fd8) */
/* WARNING: Removing unreachable block (ram,0x000103039f54) */
/* WARNING: Removing unreachable block (ram,0x000103039efc) */
/* WARNING: Removing unreachable block (ram,0x000103039eec) */
/* WARNING: Removing unreachable block (ram,0x00010303a094) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103039e4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f357b0);
  func_0x000108f4833c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f35788);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f11ace0);
  func_0x000108f34fe8(uVar2,uVar3,lVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10303a0d8; end: 10303a133;  */

void FUN_10303a0d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10303a134(param_1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10303a134; end: 10303ab0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303a134(long param_1)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long extraout_x8;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_150 [8];
  long lStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [24];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined auStack_90 [32];
  
  lVar4 = 0;
  func_0x000107c5f824();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  func_0x000107c4c264();
  func_0x000107c61180();
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_128 = param_1;
  if (param_1 != 0) {
    func_0x000107c4246c();
    func_0x000107c61180();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != 0) {
      puStack_d8 = (undefined *)0x0;
      uVar5 = 0;
      FUN_10303b42c(0,0x112f357e0,&PTR_PTR_1126d5220);
      func_0x000107c5fc50(param_1,&puStack_d8,uVar5);
      func_0x000107c61170(param_1);
      if (puStack_d8 != (undefined *)0x0) {
        puVar13 = puStack_d8;
      }
    }
  }
  uStack_130 = *(undefined8 *)(unaff_x20 + _DAT_112f35750);
  func_0x00010006c804();
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar21 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar21 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      puVar21 = puVar13;
    }
    func_0x000107c60480();
  }
  lVar23 = _DAT_112f35758;
  puStack_140 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_138 = lVar17;
  if (puVar21 == (undefined *)0x0) {
    func_0x000107c6142c(puVar13);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uStack_f8 = (ulong)puVar13 & 0xc000000000000001;
    puVar10 = auStack_90;
    lStack_148 = lVar4;
    func_0x000107c61428(unaff_x20 + _DAT_112f35758,puVar10,0,0);
    puVar24 = (undefined *)0x0;
    uStack_118 = (ulong)puVar13 & 0xffffffffffffff8;
    puStack_120 = puVar13 + 0x20;
    puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_110 = lVar23;
    puStack_108 = puVar21;
    do {
      if (uStack_f8 == 0) {
        if (*(undefined **)(uStack_118 + 0x10) <= puVar24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10303aaf8);
          (*pcVar2)();
        }
        puVar6 = *(undefined **)(puStack_120 + (long)puVar24 * 8);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar24;
        puVar10 = puVar13;
        FUN_10303b24c();
      }
      bVar3 = SCARRY8((long)puVar24,1);
      puVar24 = puVar24 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10303aaf4);
        (*pcVar2)();
      }
      puVar20 = puVar6;
      func_0x000107c5ba00();
      func_0x000107c61180();
      if (puVar20 == (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
        puVar20 = (undefined *)0xe000000000000000;
      }
      else {
        puVar18 = puVar20;
        func_0x000107c5faec();
        func_0x000107c61170(puVar20);
        func_0x000107c61434(puVar10);
        puVar20 = puVar10;
      }
      puVar7 = puVar18;
      puVar10 = puVar20;
      func_0x000107c5fb5c();
      puVar8 = puVar20;
      func_0x000107c6142c();
      puVar14 = puVar20;
      if ((0 < (long)puVar7) && (FUN_1030395a8(), ((ulong)puVar8 & 1) != 0)) {
        func_0x000107c5fadc();
        puVar7 = puVar18;
        func_0x000108ea5f00();
        func_0x000107c61180();
        func_0x000107c61170(puVar18);
        puVar18 = puVar7;
        func_0x000107c5faec();
        puVar10 = puVar14;
        func_0x000107c6142c(puVar20);
        func_0x000107c61170(puVar7);
      }
      lVar4 = *(long *)(unaff_x20 + lVar23);
      if (*(long *)(lVar4 + 0x10) == 0) {
        func_0x000107c61170(puVar6);
      }
      else {
        func_0x000107c6068c(&puStack_d8,*(undefined8 *)(lVar4 + 0x28));
        func_0x000107c61434(lVar4);
        ppuVar9 = &puStack_d8;
        puVar10 = puVar18;
        func_0x000107c5fb58(ppuVar9,puVar18,puVar14);
        func_0x000107c606a8();
        uVar16 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
        uVar22 = (ulong)ppuVar9 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar4 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0) {
          do {
            plVar1 = (long *)(*(long *)(lVar4 + 0x30) + uVar22 * 0x10);
            puVar21 = (undefined *)*plVar1;
            puVar10 = (undefined *)plVar1[1];
            if ((puVar21 == puVar18 && puVar10 == puVar14) ||
               (func_0x000107c605b8(puVar21,puVar10,puVar18,puVar14,0), ((ulong)puVar21 & 1) != 0))
            {
              func_0x000107c6142c(lVar4);
              func_0x000107c61434(puVar14);
              puVar21 = puStack_100;
              func_0x000107c61558();
              puVar10 = puStack_100;
              if (((ulong)puVar21 & 1) == 0) {
                puVar10 = (undefined *)0x0;
                func_0x0001000d182c(0,*(long *)(puStack_100 + 0x10) + 1,1);
              }
              uVar16 = *(ulong *)(puVar10 + 0x10);
              if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar16) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                func_0x0001000d182c(puVar10,uVar16 + 1,1);
              }
              puVar21 = puStack_108;
              lVar23 = lStack_110;
              *(ulong *)(puVar10 + 0x10) = uVar16 + 1;
              *(undefined **)(puVar10 + uVar16 * 0x10 + 0x20) = puVar18;
              *(undefined **)(puVar10 + uVar16 * 0x10 + 0x28) = puVar14;
              puStack_100 = puVar10;
              func_0x000107c61428(unaff_x20 + lStack_110,&puStack_d8,0x21,0);
              puVar20 = puVar14;
              func_0x0001010af1e4(puVar18);
              puVar10 = puVar20;
              func_0x000107c614a8(&puStack_d8);
              func_0x000107c61170(puVar6);
              func_0x000107c6142c(puVar14);
              puVar14 = puVar20;
              goto LAB_10303a2bc;
            }
            uVar22 = uVar22 + 1 & ~uVar16;
          } while ((*(ulong *)(lVar4 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(lVar4);
        func_0x000107c61170(puVar6);
        puVar21 = puStack_108;
        lVar23 = lStack_110;
      }
LAB_10303a2bc:
      func_0x000107c6142c(puVar14);
    } while (puVar24 != puVar21);
    func_0x000107c6142c(puVar13);
    puVar13 = puStack_100;
    lVar4 = lStack_148;
  }
  lVar17 = _DAT_112f35758;
  puVar15 = auStack_f0;
  func_0x000107c61428(unaff_x20 + _DAT_112f35758,puVar15,0,0);
  lVar23 = *(long *)(*(long *)(unaff_x20 + lVar17) + 0x10);
  func_0x000100070bfc();
  lVar17 = *(long *)(puVar13 + 0x10);
  puStack_100 = puVar13;
  if (lVar17 != 0) {
    lVar11 = *(long *)(unaff_x20 + _DAT_112f357b0);
    func_0x000108f4833c();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar15);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f35788);
    func_0x000107c61174(uVar5);
    uVar12 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f11ad80);
    func_0x000108f34fe8(uVar5,uVar12,lVar11,lVar17);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar11);
    FUN_10303ab88();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f35790);
    uVar12 = ((undefined8 *)(unaff_x20 + _DAT_112f35790))[1];
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f357a0);
    puVar13 = &UNK_1106006e0;
    func_0x000107c613fc(&UNK_1106006e0,0x18,7);
    func_0x000107c61614(puVar13 + 0x10,unaff_x20);
    puVar21 = &UNK_110600758;
    func_0x000107c613fc(&UNK_110600758,0x30,7);
    puVar24 = puStack_100;
    *(undefined **)(puVar21 + 0x10) = puVar13;
    *(undefined8 *)(puVar21 + 0x18) = uVar5;
    *(undefined8 *)(puVar21 + 0x20) = uVar12;
    *(undefined **)(puVar21 + 0x28) = puStack_100;
    uStack_b8 = 0x10303b420;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_1000f6b44;
    puStack_c0 = &UNK_110600770;
    ppuVar9 = &puStack_d8;
    puStack_b0 = puVar21;
    func_0x000107c60bc4(ppuVar9);
    puVar13 = puStack_b0;
    func_0x000107c61438(uVar12,2);
    func_0x000107c615f0(uVar19);
    func_0x000107c61434(puVar24);
    func_0x000107c61574(puVar13);
    func_0x000107c4e524(uVar19);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c615e8(uVar19);
    lVar17 = unaff_x20 + _DAT_112f35770;
    func_0x000107c61618();
    if (lVar17 == 0) {
      func_0x000107c6142c(uVar12);
    }
    else {
      func_0x000107c5fadc(uVar5,uVar12);
      func_0x000107c6142c(uVar12);
      func_0x000107c4d878(lVar17);
      func_0x000107c615e8(lVar17);
      func_0x000107c61170(uVar5);
    }
  }
  lVar17 = _DAT_112f357b0;
  if (lVar23 != 0) {
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f357b0);
    uVar12 = 0x800000010f11ad00;
    func_0x000107c615f0(uVar19);
    uVar5 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f11ad00);
    dVar25 = 5.6022294884157e-315;
    func_0x000107c436e4(uVar19);
    dVar26 = dVar25;
    func_0x000107c615e8(uVar19);
    func_0x000107c61170(uVar5);
    func_0x000107c6071c();
    if (dVar26 - *(double *)(unaff_x20 + _DAT_112f35748) < (double)SUB84(dVar25,0)) {
      lVar17 = *(long *)(unaff_x20 + lVar17);
      func_0x000108f4833c();
      func_0x000107c61180();
      if (lVar17 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar12);
      }
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f35788);
      func_0x000107c61174(uVar12);
      uVar5 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f11ad40);
      func_0x000108f34fe8(uVar12,uVar5,lVar17,1);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar17);
      pcVar2 = FUN_10303b410;
      lVar17 = lStack_138;
      puVar15 = puStack_140;
      goto LAB_10303aa18;
    }
  }
  lVar17 = _DAT_112f357b0;
  uVar12 = 0x800000010f11ad00;
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f357b0);
  func_0x000107c615f0(uVar19);
  uVar5 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f11ad00);
  dVar25 = 5.6022294884157e-315;
  func_0x000107c436e4(uVar19);
  dVar26 = dVar25;
  func_0x000107c615e8(uVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c6071c();
  if ((double)SUB84(dVar25,0) <= dVar26 - *(double *)(unaff_x20 + _DAT_112f35748)) {
    lVar23 = *(long *)(unaff_x20 + lVar17);
    func_0x000108f4833c();
    func_0x000107c61180();
    lVar17 = lStack_138;
    puVar15 = puStack_140;
    if (lVar23 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar12);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f35788);
    func_0x000107c61174(uVar5);
    uVar12 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f11ad60);
    func_0x000108f34fe8(uVar5,uVar12,lVar23,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar23);
    func_0x00010303ad50();
    pcVar2 = (code *)0x10303b418;
  }
  else {
    pcVar2 = (code *)0x10303b418;
    lVar17 = lStack_138;
    puVar15 = puStack_140;
  }
LAB_10303aa18:
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f357a8);
  func_0x000107c61174(uVar5);
  func_0x000107c5f818(puVar15);
  puVar13 = &UNK_1106006e0;
  func_0x000107c613fc(&UNK_1106006e0,0x18,7);
  func_0x000107c61614(puVar13 + 0x10,unaff_x20);
  uVar12 = 0;
  FUN_10303b42c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(puVar13);
  func_0x000100905790(puVar15,pcVar2,puVar13,uVar12);
  func_0x000107c61170(lStack_128);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(puVar13);
  (**(code **)(lVar17 + 8))(puVar15,lVar4);
  func_0x000107c61574(puVar13);
  func_0x000107c6142c(puStack_100);
  return;
}



/* Entry: 10303ab10; end: 10303ab87;  */

/* WARNING: Possible PIC construction at 0x00010303ab6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303ab70) */

void FUN_10303ab10(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10303ab88; end: 10303ac7f;  */

/* WARNING: Possible PIC construction at 0x00010303ac58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303ac5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303ab88(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  double dVar4;
  
  func_0x000107c6071c();
  dVar4 = (param_1 - *(double *)(unaff_x20 + _DAT_112f35748)) * 1000.0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f357b0);
  func_0x000108f4833c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10303ac78);
    (*pcVar1)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10303ac7c);
    (*pcVar1)();
  }
  if (dVar4 < 9.223372036854776e+18) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f35788);
    func_0x000107c61174(uVar3);
    func_0x000108f35218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10303ac80);
  (*pcVar1)();
}



/* Entry: 10303ac80; end: 10303afb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303ac80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f35770;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c5fc48(param_4,PTR___sSSN_11034da80);
      func_0x000107c5b544(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
    }
  }
  return;
}



/* Entry: 10303afb4; end: 10303b087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303afb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f35730;
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112f35730) == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c498f8(*(long *)(param_1 + _DAT_112f35730));
      uVar2 = *(undefined8 *)(param_1 + lVar1);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10303b088; end: 10303b0e7; -[_TtC40SCCreatorsPostedPublicStoryPollerManager31CreatorsPostedPublicStoryPoller init] */

void FUN_10303b088(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCreatorsPostedPublicStoryPollerManager.CreatorsPostedPublicStoryPoller",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10303b0b4);
  (*pcVar1)();
}



/* Entry: 10303b0e8; end: 10303b1db; -[_TtC40SCCreatorsPostedPublicStoryPollerManager31CreatorsPostedPublicStoryPoller .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303b0e8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f35730));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f35750));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f35758));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f35790 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f35798 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f357a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f357a8));
  func_0x0001010398f0(*(undefined8 *)(param_1 + _DAT_112f35760),
                      ((undefined8 *)(param_1 + _DAT_112f35760))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f35788));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f357b0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f35768));
  FUN_10303b1fc(param_1 + _DAT_112f35770);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f35778);
  return;
}



/* Entry: 10303b1dc; end: 10303b1fb;  */

void FUN_10303b1dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1668);
  return;
}



/* Entry: 10303b1fc; end: 10303b21f;  */

undefined8 FUN_10303b1fc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10303b220; end: 10303b24b;  */

void FUN_10303b220(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103039e4c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10303b24c; end: 10303b40f;  */

ulong FUN_10303b24c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10303b330);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10303b334);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d5220;
    func_0x000107c61168(PTR_PTR_1126d5220);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d5220;
    func_0x000107c61168(PTR_PTR_1126d5220);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10303b42c(0,0x112f357e0,&PTR_PTR_1126d5220);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10303b410);
  (*pcVar2)();
}



/* Entry: 10303b410; end: 10303b42b;  */

void FUN_10303b410(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103039b5c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10303b42c; end: 10303b46b;  */

void FUN_10303b42c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10303b46c; end: 10303b4bb;  */

void FUN_10303b46c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e1c120 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d5d480;
  func_0x00010002969c(0x112d5d480,&UNK_10d923b90);
  puVar2 = PTR___sShyxGSTsMc_11034de90;
  func_0x000107c61520(PTR___sShyxGSTsMc_11034de90,uVar1);
  puRam0000000112e1c120 = puVar2;
  return;
}



/* Entry: 10303b4bc; end: 10303b4cb;  */

void FUN_10303b4bc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10303b4cc; end: 10303b513; -[SCCreatorsPublicStoryPollerManager delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303b4cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f357e8;
  func_0x000107c61428(param_1 + _DAT_112f357e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10303b514; end: 10303b56b; -[SCCreatorsPublicStoryPollerManager setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303b514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f357e8;
  func_0x000107c61428(param_1 + _DAT_112f357e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10303b56c; end: 10303b6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10303b56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar1 = _DAT_112f357f0;
  *(undefined8 *)(unaff_x20 + _DAT_112f357f0) = 0;
  lVar2 = _DAT_112f357f8;
  func_0x000107c61614(unaff_x20 + _DAT_112f357f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f357e8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f35800) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f35808) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f35810) = param_3;
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10303cd9c();
  *(undefined **)(unaff_x20 + _DAT_112f35818) = puVar3;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c615e8(uVar5);
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  return puVar4;
}



/* Entry: 10303b6c4; end: 10303b8eb; -[SCCreatorsPublicStoryPollerManager initWithCompletionPerformer:mainQueue:circumstanceEngine:crashLogger:snapProRPC:] */

undefined8
FUN_10303b6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_3;
  FUN_10303ce9c(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  return uVar1;
}



/* Entry: 10303b8ec; end: 10303bf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303b8ec(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  uStack_e8 = param_5;
  uStack_d0 = param_3;
  func_0x000107c5f824();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar2 = _DAT_112f35818;
  lVar14 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112f35818,auStack_80,0x20,0);
  lVar12 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    lVar4 = param_2;
    uVar10 = uStack_d0;
    func_0x000100029284();
    if ((uVar10 & 1) != 0) {
      plVar5 = *(long **)(*(long *)(lVar12 + 0x38) + lVar4 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_80);
      func_0x000107c6142c(lVar12);
      uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f357a8);
      func_0x000107c61174(uVar6);
      func_0x000107c5f818(lVar14);
      puVar8 = &UNK_110600820;
      func_0x000107c613fc(&UNK_110600820,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,plVar5);
      puVar9 = &UNK_110600870;
      func_0x000107c613fc(&UNK_110600870,0x20,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined8 *)(puVar9 + 0x18) = param_6;
      uVar7 = 0;
      func_0x000100964acc(0);
      func_0x000107c6157c(puVar8);
      func_0x000107c61434(param_6);
      uVar15 = 0x10303d094;
      goto LAB_10303beb0;
    }
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c614a8(auStack_80);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f35800);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f35808);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f35810);
  lVar12 = unaff_x20 + _DAT_112f357f8;
  uStack_128 = param_4;
  uStack_100 = param_6;
  lStack_f8 = lVar13;
  uStack_e0 = uVar6;
  func_0x000107c61618();
  lVar13 = _DAT_112f357e8;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f357f0);
  uStack_138 = uVar15;
  lStack_120 = lVar12;
  func_0x000107c61428(unaff_x20 + _DAT_112f357e8,auStack_80,0,0);
  lVar13 = unaff_x20 + lVar13;
  func_0x000107c61618();
  lVar12 = 0;
  lStack_140 = lVar13;
  FUN_10303b1dc();
  lStack_110 = lVar12;
  func_0x000107c610f8();
  *(undefined8 *)(lVar12 + _DAT_112f35730) = 0;
  *(undefined8 *)(lVar12 + _DAT_112f35738) = 0x4014000000000000;
  lStack_130 = _DAT_112f35740;
  *(undefined8 *)(lVar12 + _DAT_112f35740) = 0;
  *(undefined8 *)(lVar12 + _DAT_112f35748) = 0;
  lVar13 = _DAT_112f35750;
  lStack_f0 = lVar3;
  lStack_d8 = param_2;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar15);
  func_0x000107c615f0(uVar11);
  func_0x000107c61174();
  func_0x000107c615f0();
  func_0x00010006a360();
  uVar15 = uStack_e8;
  *(undefined8 *)(lVar12 + lVar13) = uVar6;
  lVar13 = _DAT_112f35758;
  *(undefined **)(lVar12 + _DAT_112f35758) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112f35760);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_118 = lVar2;
  lStack_148 = _DAT_112f35768;
  *(undefined8 *)(lVar12 + _DAT_112f35768) = 0;
  lVar2 = _DAT_112f35770;
  func_0x000107c61614(lVar12 + _DAT_112f35770,0);
  uVar10 = uStack_d0;
  lVar3 = _DAT_112f35778;
  lStack_108 = lVar14;
  func_0x000107c61614(lVar12 + _DAT_112f35778,0);
  *(undefined1 *)(lVar12 + _DAT_112f35780) = 2;
  puVar8 = PTR_PTR_1126b10e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = uStack_e0;
  lVar14 = lStack_140;
  *(undefined **)(lVar12 + _DAT_112f35788) = puVar8;
  plVar5 = (long *)(lVar12 + _DAT_112f35790);
  *plVar5 = lStack_d8;
  plVar5[1] = uVar10;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112f35798);
  *puVar1 = uStack_128;
  puVar1[1] = uVar15;
  *(undefined8 *)(lVar12 + _DAT_112f357a0) = uVar11;
  *(undefined8 *)(lVar12 + _DAT_112f357a8) = uVar7;
  *(undefined8 *)(lVar12 + _DAT_112f357b0) = uStack_e0;
  uStack_150 = uVar11;
  func_0x000107c61604(lVar12 + lVar2,lStack_140);
  lVar2 = lStack_120;
  func_0x000107c61604(lVar12 + lVar3,lStack_120);
  func_0x000107c615f0(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(uVar6);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar15);
  func_0x000107c6071c();
  *(undefined8 *)(lVar12 + lStack_130) = param_1;
  func_0x000107c61428(lVar12 + lVar13,auStack_98,1,0);
  uVar15 = *(undefined8 *)(lVar12 + lVar13);
  *(undefined **)(lVar12 + lVar13) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar15);
  uVar15 = uStack_138;
  uVar6 = *(undefined8 *)(lVar12 + lStack_148);
  *(undefined8 *)(lVar12 + lStack_148) = uStack_138;
  func_0x000107c615f0(uStack_138);
  lVar13 = lStack_f8;
  func_0x000107c615e8(uVar6);
  lVar3 = lStack_f0;
  lStack_a0 = lStack_110;
  plVar5 = &lStack_a8;
  lStack_a8 = lVar12;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c615e8(uStack_150);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uStack_e0);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(uVar15);
  func_0x000107c615e8(lVar14);
  lVar2 = lStack_118;
  func_0x000107c61428(unaff_x20 + lStack_118,auStack_c0,0x21,0);
  func_0x000107c61434(uVar10);
  func_0x000107c61174();
  uVar15 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61558();
  uStack_c8 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
  FUN_10303c690(plVar5,lStack_d8,uVar10,uVar15);
  func_0x000107c6142c(uVar10);
  *(undefined8 *)(unaff_x20 + lVar2) = uStack_c8;
  func_0x000107c614a8(auStack_c0);
  uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f357a8);
  func_0x000107c61174(uVar6);
  lVar14 = lStack_108;
  func_0x000107c5f818(lStack_108);
  puVar8 = &UNK_110600820;
  func_0x000107c613fc(&UNK_110600820,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,plVar5);
  puVar9 = &UNK_110600848;
  func_0x000107c613fc(&UNK_110600848,0x20,7);
  uVar15 = uStack_100;
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(undefined8 *)(puVar9 + 0x18) = uStack_100;
  uVar7 = 0;
  func_0x000100964acc(0);
  func_0x000107c61434(uVar15);
  func_0x000107c6157c(puVar8);
  uVar15 = 0x10303cfe8;
LAB_10303beb0:
  func_0x000100905790(lVar14,uVar15,puVar9,uVar7);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar9);
  (**(code **)(lVar13 + 8))(lVar14,lVar3);
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 10303bf10; end: 10303bf9f;  */

void FUN_10303bf10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10303b8ec(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10303bfa0; end: 10303c04b; -[SCCreatorsPublicStoryPollerManager scheduleSnapClientIdsForBusinessId:hostUserId:snapClientIds:] */

/* WARNING: Possible PIC construction at 0x00010303c028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303c02c) */

void FUN_10303bfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  func_0x00010303b788(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303c04c; end: 10303c287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303c04c(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = _DAT_112f35818;
  puVar11 = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + _DAT_112f35818,auStack_78,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    lVar2 = param_1;
    uVar8 = param_2;
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(lVar9 + 0x38) + lVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar9);
      puVar3 = &UNK_1106007a8;
      func_0x000107c613fc(&UNK_1106007a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_110600898;
      func_0x000107c613fc(&UNK_110600898,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = param_1;
      *(ulong *)(puVar4 + 0x20) = param_2;
      uVar10 = *(undefined8 *)(lVar2 + _DAT_112f357a8);
      lStack_80 = lVar2;
      func_0x000107c6157c(puVar3);
      func_0x000107c61434(param_2);
      func_0x000107c61174(uVar10);
      func_0x000107c5f818(puVar11);
      puVar5 = &UNK_110600820;
      func_0x000107c613fc(&UNK_110600820,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,lVar2);
      puVar6 = &UNK_1106008c0;
      func_0x000107c613fc(&UNK_1106008c0,0x30,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = param_3;
      *(code **)(puVar6 + 0x20) = FUN_10303d01c;
      *(undefined **)(puVar6 + 0x28) = puVar4;
      uVar7 = 0;
      func_0x000100964acc(0);
      func_0x000107c6157c(puVar5);
      func_0x000107c61434(param_3);
      func_0x000107c6157c(puVar4);
      func_0x000100905790(puVar11,0x10303d028,puVar6,uVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(lStack_80);
      func_0x000107c61170(uVar10);
      func_0x000107c61574(puVar6);
      (**(code **)(lVar12 + 8))(puVar11,lVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar5);
      return;
    }
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c614a8(auStack_78);
  return;
}



/* Entry: 10303c288; end: 10303c3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303c288(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112f35800);
      puVar1 = &UNK_1106007a8;
      func_0x000107c613fc(&UNK_1106007a8,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_2);
      puVar2 = &UNK_1106008e8;
      func_0x000107c613fc(&UNK_1106008e8,0x28,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_3;
      *(undefined8 *)(puVar2 + 0x20) = param_4;
      pcStack_68 = FUN_10303d080;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110600900;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c615f0(uVar4);
      func_0x000107c61434(param_4);
      func_0x000107c61574(puVar1);
      func_0x000107c4e524(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 10303c3c0; end: 10303c4eb; -[SCCreatorsPublicStoryPollerManager invalidateSnapClientIdsForBusinessId:snapClientIds:] */

/* WARNING: Possible PIC construction at 0x00010303c424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303c428) */

void FUN_10303c3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  FUN_10303c04c(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303c4ec; end: 10303c54b; -[SCCreatorsPublicStoryPollerManager init] */

void FUN_10303c4ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCreatorsPostedPublicStoryPollerManager.CreatorsPublicStoryPollerManager",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10303c518);
  (*pcVar1)();
}



/* Entry: 10303c54c; end: 10303c5d3; -[SCCreatorsPublicStoryPollerManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10303c54c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f35818));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f35800));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f35808));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f35810));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f357f0));
  func_0x000107c61610(param_1 + _DAT_112f357f8);
  param_1 = param_1 + _DAT_112f357e8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10303c5d4; end: 10303c68f;  */

undefined8 FUN_10303c5d4(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010303c7e0();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x00010303cbec(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 10303c690; end: 10303c94f;  */

void FUN_10303c690(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10303c768);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10303c950(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10303c730);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010303c7e0();
    lVar6 = *unaff_x20;
    goto joined_r0x00010303c77c;
  }
  lVar6 = *unaff_x20;
joined_r0x00010303c77c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10303c7e0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10303c950; end: 10303cd9b;  */

void FUN_10303c950(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f35848;
  func_0x0001000285a8(0x112f35848,&UNK_10db7dc58);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10303cbb8:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10303cbe8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10303cbb8;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10303cbec);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10303cd9c; end: 10303ce9b;  */

undefined * FUN_10303cd9c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f35848,&UNK_10db7dc58);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10303ce98);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10303ce9c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10303ce9c; end: 10303cfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303ce9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f357f0;
  *(undefined8 *)(unaff_x20 + _DAT_112f357f0) = 0;
  lVar2 = _DAT_112f357f8;
  func_0x000107c61614(unaff_x20 + _DAT_112f357f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f357e8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f35800) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f35808) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f35810) = param_3;
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10303cd9c();
  *(undefined **)(unaff_x20 + _DAT_112f35818) = puVar3;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c615e8(uVar4);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10303cfbc; end: 10303cfef;  */

void FUN_10303cfbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    FUN_10303b8ec(uVar3,uVar1,uVar4,uVar2,uVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10303cff0; end: 10303d01b;  */

void FUN_10303cff0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10303d01c; end: 10303d033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303d01c(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(lVar2 + _DAT_112f35800);
      puVar3 = &UNK_1106007a8;
      func_0x000107c613fc(&UNK_1106007a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar2);
      puVar4 = &UNK_1106008e8;
      func_0x000107c613fc(&UNK_1106008e8,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = uVar1;
      *(undefined8 *)(puVar4 + 0x20) = uVar6;
      pcStack_68 = FUN_10303d080;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110600900;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_60;
      func_0x000107c615f0(uVar7);
      func_0x000107c61434(uVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(uVar7);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uVar7);
    }
  }
  return;
}



/* Entry: 10303d034; end: 10303d07f;  */

void FUN_10303d034(void)

{
  func_0x000107c61168(&PTR_PTR_1128b17a8);
  return;
}



/* Entry: 10303d080; end: 10303d097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303d080(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112f35818,auStack_60,0x21,0);
    func_0x000107c61434(uVar3);
    FUN_10303c5d4(uVar2,uVar3);
    func_0x000107c614a8(auStack_60);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10303d098; end: 10303d127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303d098(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f35850;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100c84ffc();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f35858;
  func_0x000100c85110();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f35860) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10303d128; end: 10303d937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303d128(long param_1,undefined1 *param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_78 [24];
  
  lVar6 = param_1;
  puVar4 = param_2;
  func_0x000107c3fb8c();
  func_0x000107c61180();
  lVar3 = lVar6;
  func_0x000107c5faec();
  func_0x000107c61170(lVar6);
  lVar6 = _DAT_112f35850;
  puVar9 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112f35850,puVar9,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  lVar8 = *(long *)(lVar6 + 0x10);
  func_0x000107c61434(param_3);
  if (lVar8 != 0) {
    func_0x000107c61434(lVar6);
    lVar8 = lVar3;
    puVar9 = puVar4;
    FUN_10303eccc(lVar3,puVar4,param_2,param_3);
    if (((ulong)puVar9 & 1) != 0) {
      uVar1 = *(ushort *)(*(long *)(lVar6 + 0x38) + lVar8 * 2);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar6);
      uVar1 = uVar1 >> 0xe;
      if ((uVar1 == 0) || (uVar1 == 1)) {
        func_0x000107c6142c(param_3);
        func_0x000107c6142c(puVar4);
        return;
      }
      func_0x000107c4d1b8();
      func_0x000107c61180();
      if (param_1 == 0) {
LAB_10303d344:
        lVar8 = 0;
        puVar9 = (undefined1 *)0x0;
      }
      else {
        lVar6 = param_1;
        func_0x000107c3ee04();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        if (lVar6 == 0) goto LAB_10303d344;
        lVar8 = lVar6;
        func_0x000107c5faec(lVar6);
        func_0x000107c61170(lVar6);
      }
      func_0x00010303d3ac(lVar3,puVar4,param_2,param_3,1,lVar8,puVar9);
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(puVar4);
      func_0x000107c6142c(puVar9);
      uVar2 = (uint)puVar9;
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f35860);
      func_0x00010303d5f4();
      uVar5 = 1;
      goto LAB_10303d2cc;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_78);
  func_0x000107c4d1b8();
  func_0x000107c61180();
  if (param_1 == 0) {
LAB_10303d268:
    lVar8 = 0;
    puVar9 = (undefined1 *)0x0;
  }
  else {
    lVar6 = param_1;
    func_0x000107c3ee04();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar6 == 0) goto LAB_10303d268;
    lVar8 = lVar6;
    func_0x000107c5faec(lVar6);
    func_0x000107c61170(lVar6);
  }
  func_0x00010303d3ac(lVar3,puVar4,param_2,param_3,0,lVar8,puVar9);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar9);
  uVar2 = (uint)puVar9;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f35860);
  func_0x00010303d5f4();
  uVar5 = 0;
LAB_10303d2cc:
  func_0x00010696f240(uVar7,uVar5,uVar2 & 1,1);
  return;
}



/* Entry: 10303d938; end: 10303d943; -[SCCreatorsPublicStorySendingLogger isSendingWithSnap:businessId:] */

void FUN_10303d938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10303d128(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303d944; end: 10303daa7;  */

/* WARNING: Possible PIC construction at 0x00010303d990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303d9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303da00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303de14) */
/* WARNING: Removing unreachable block (ram,0x00010303de18) */
/* WARNING: Removing unreachable block (ram,0x00010303dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010303ddf8) */
/* WARNING: Removing unreachable block (ram,0x00010303dd64) */
/* WARNING: Removing unreachable block (ram,0x00010303e018) */
/* WARNING: Removing unreachable block (ram,0x00010303e138) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3dc) */
/* WARNING: Removing unreachable block (ram,0x00010303e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e388) */
/* WARNING: Removing unreachable block (ram,0x00010303e38c) */
/* WARNING: Removing unreachable block (ram,0x00010303e304) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b8) */
/* WARNING: Removing unreachable block (ram,0x00010303e36c) */
/* WARNING: Removing unreachable block (ram,0x00010303e2dc) */
/* WARNING: Removing unreachable block (ram,0x00010303dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010303dff0) */
/* WARNING: Removing unreachable block (ram,0x00010303dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010303dff8) */
/* WARNING: Removing unreachable block (ram,0x00010303e000) */
/* WARNING: Removing unreachable block (ram,0x00010303dc14) */
/* WARNING: Removing unreachable block (ram,0x00010303dc64) */
/* WARNING: Removing unreachable block (ram,0x00010303de80) */
/* WARNING: Removing unreachable block (ram,0x00010303de88) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010303de90) */
/* WARNING: Removing unreachable block (ram,0x00010303e01c) */
/* WARNING: Removing unreachable block (ram,0x00010303e130) */
/* WARNING: Removing unreachable block (ram,0x00010303e05c) */
/* WARNING: Removing unreachable block (ram,0x00010303e254) */
/* WARNING: Removing unreachable block (ram,0x00010303e090) */
/* WARNING: Removing unreachable block (ram,0x00010303e0d4) */
/* WARNING: Removing unreachable block (ram,0x00010303e0e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e110) */
/* WARNING: Removing unreachable block (ram,0x00010303e0c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0cc) */
/* WARNING: Removing unreachable block (ram,0x00010303e160) */
/* WARNING: Removing unreachable block (ram,0x00010303e1a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1b4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e180) */
/* WARNING: Removing unreachable block (ram,0x00010303e1e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e190) */
/* WARNING: Removing unreachable block (ram,0x00010303e19c) */
/* WARNING: Removing unreachable block (ram,0x00010303e204) */
/* WARNING: Removing unreachable block (ram,0x00010303e224) */
/* WARNING: Removing unreachable block (ram,0x00010303e234) */
/* WARNING: Removing unreachable block (ram,0x00010303e23c) */
/* WARNING: Removing unreachable block (ram,0x00010303e248) */
/* WARNING: Removing unreachable block (ram,0x00010303e27c) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f8) */
/* WARNING: Removing unreachable block (ram,0x00010303e400) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e8) */
/* WARNING: Removing unreachable block (ram,0x00010303e404) */
/* WARNING: Removing unreachable block (ram,0x00010303e468) */
/* WARNING: Removing unreachable block (ram,0x00010303e414) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e4d0) */
/* WARNING: Removing unreachable block (ram,0x00010303e41c) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e284) */
/* WARNING: Removing unreachable block (ram,0x00010303e28c) */
/* WARNING: Removing unreachable block (ram,0x00010303de98) */
/* WARNING: Removing unreachable block (ram,0x00010303dea4) */
/* WARNING: Removing unreachable block (ram,0x00010303dea8) */
/* WARNING: Removing unreachable block (ram,0x00010303de78) */
/* WARNING: Removing unreachable block (ram,0x00010303def0) */
/* WARNING: Removing unreachable block (ram,0x00010303df44) */
/* WARNING: Removing unreachable block (ram,0x00010303dfa0) */
/* WARNING: Removing unreachable block (ram,0x00010303df78) */
/* WARNING: Removing unreachable block (ram,0x00010303dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010303df8c) */
/* WARNING: Removing unreachable block (ram,0x00010303df20) */
/* WARNING: Removing unreachable block (ram,0x00010303da04) */
/* WARNING: Removing unreachable block (ram,0x00010303d9e8) */
/* WARNING: Removing unreachable block (ram,0x00010303d9ec) */
/* WARNING: Removing unreachable block (ram,0x00010303d994) */
/* WARNING: Removing unreachable block (ram,0x00010303da08) */
/* WARNING: Removing unreachable block (ram,0x00010303da10) */
/* WARNING: Removing unreachable block (ram,0x00010303db64) */
/* WARNING: Removing unreachable block (ram,0x00010303db88) */
/* WARNING: Removing unreachable block (ram,0x00010303dba8) */
/* WARNING: Removing unreachable block (ram,0x00010303dca4) */
/* WARNING: Removing unreachable block (ram,0x00010303dcac) */
/* WARNING: Removing unreachable block (ram,0x00010303dd20) */
/* WARNING: Removing unreachable block (ram,0x00010303dcb8) */
/* WARNING: Removing unreachable block (ram,0x00010303dbbc) */
/* WARNING: Removing unreachable block (ram,0x00010303d9cc) */
/* WARNING: Removing unreachable block (ram,0x00010303de30) */
/* WARNING: Removing unreachable block (ram,0x00010303de68) */
/* WARNING: Removing unreachable block (ram,0x00010303e13c) */
/* WARNING: Removing unreachable block (ram,0x00010303e140) */

void FUN_10303d944(undefined8 param_1)

{
  func_0x000107c3fb8c();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10303daa8; end: 10303db63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_10303daa8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112f35850;
  func_0x000107c61428(unaff_x20 + _DAT_112f35850,auStack_58,0x20,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    FUN_10303eccc(param_1,param_2,param_3,param_4);
    if ((param_2 & 1) != 0) {
      uVar1 = *(ushort *)(*(long *)(lVar2 + 0x38) + param_1 * 2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar2);
      goto LAB_10303db48;
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c614a8(auStack_58);
  uVar1 = 0;
LAB_10303db48:
  return uVar1 & 1;
}



/* Entry: 10303db64; end: 10303e4e7;  */

/* WARNING: Possible PIC construction at 0x00010303dbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303de14) */
/* WARNING: Removing unreachable block (ram,0x00010303de18) */
/* WARNING: Removing unreachable block (ram,0x00010303dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010303ddf8) */
/* WARNING: Removing unreachable block (ram,0x00010303dd64) */
/* WARNING: Removing unreachable block (ram,0x00010303e018) */
/* WARNING: Removing unreachable block (ram,0x00010303e138) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3dc) */
/* WARNING: Removing unreachable block (ram,0x00010303e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e388) */
/* WARNING: Removing unreachable block (ram,0x00010303e38c) */
/* WARNING: Removing unreachable block (ram,0x00010303e304) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b8) */
/* WARNING: Removing unreachable block (ram,0x00010303e36c) */
/* WARNING: Removing unreachable block (ram,0x00010303e2dc) */
/* WARNING: Removing unreachable block (ram,0x00010303dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010303dff0) */
/* WARNING: Removing unreachable block (ram,0x00010303dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010303dff8) */
/* WARNING: Removing unreachable block (ram,0x00010303e000) */
/* WARNING: Removing unreachable block (ram,0x00010303dc14) */
/* WARNING: Removing unreachable block (ram,0x00010303dc64) */
/* WARNING: Removing unreachable block (ram,0x00010303de80) */
/* WARNING: Removing unreachable block (ram,0x00010303de88) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010303de90) */
/* WARNING: Removing unreachable block (ram,0x00010303e01c) */
/* WARNING: Removing unreachable block (ram,0x00010303e130) */
/* WARNING: Removing unreachable block (ram,0x00010303e05c) */
/* WARNING: Removing unreachable block (ram,0x00010303e254) */
/* WARNING: Removing unreachable block (ram,0x00010303e090) */
/* WARNING: Removing unreachable block (ram,0x00010303e0d4) */
/* WARNING: Removing unreachable block (ram,0x00010303e0e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e110) */
/* WARNING: Removing unreachable block (ram,0x00010303e0c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0cc) */
/* WARNING: Removing unreachable block (ram,0x00010303e160) */
/* WARNING: Removing unreachable block (ram,0x00010303e1a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1b4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e180) */
/* WARNING: Removing unreachable block (ram,0x00010303e1e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e190) */
/* WARNING: Removing unreachable block (ram,0x00010303e19c) */
/* WARNING: Removing unreachable block (ram,0x00010303e204) */
/* WARNING: Removing unreachable block (ram,0x00010303e224) */
/* WARNING: Removing unreachable block (ram,0x00010303e234) */
/* WARNING: Removing unreachable block (ram,0x00010303e23c) */
/* WARNING: Removing unreachable block (ram,0x00010303e248) */
/* WARNING: Removing unreachable block (ram,0x00010303e27c) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f8) */
/* WARNING: Removing unreachable block (ram,0x00010303e400) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e8) */
/* WARNING: Removing unreachable block (ram,0x00010303e404) */
/* WARNING: Removing unreachable block (ram,0x00010303e468) */
/* WARNING: Removing unreachable block (ram,0x00010303e414) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e4d0) */
/* WARNING: Removing unreachable block (ram,0x00010303e41c) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e284) */
/* WARNING: Removing unreachable block (ram,0x00010303e28c) */
/* WARNING: Removing unreachable block (ram,0x00010303de98) */
/* WARNING: Removing unreachable block (ram,0x00010303dea4) */
/* WARNING: Removing unreachable block (ram,0x00010303dea8) */
/* WARNING: Removing unreachable block (ram,0x00010303de78) */
/* WARNING: Removing unreachable block (ram,0x00010303def0) */
/* WARNING: Removing unreachable block (ram,0x00010303df44) */
/* WARNING: Removing unreachable block (ram,0x00010303dfa0) */
/* WARNING: Removing unreachable block (ram,0x00010303df78) */
/* WARNING: Removing unreachable block (ram,0x00010303dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010303df8c) */
/* WARNING: Removing unreachable block (ram,0x00010303df20) */
/* WARNING: Removing unreachable block (ram,0x00010303de30) */
/* WARNING: Removing unreachable block (ram,0x00010303de68) */
/* WARNING: Removing unreachable block (ram,0x00010303e13c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303db64(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if ((param_4 & 1) != 0) {
    return;
  }
  func_0x000107c4d1b8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c3ee04();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5faec();
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(param_1);
  }
  uVar1 = (uint)param_1;
  if ((short)param_4 < -0x4000) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f35860);
    func_0x00010303d5f4();
    lVar2 = 0x31;
    func_0x000107c5fadc(0x31,0xe100000000000000);
    func_0x00010696fa3c(uVar3,param_4 >> 8 & 1,uVar1 & 1,lVar2,1);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f35860);
    func_0x00010303d5f4();
    lVar2 = 0x31;
    func_0x000107c5fadc(0x31,0xe100000000000000);
    func_0x00010696f850(uVar3,uVar1 & 1,lVar2,1);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10303e4e8; end: 10303e4f3; -[SCCreatorsPublicStorySendingLogger didSendWithSnap:businessId:] */

void FUN_10303e4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10303d944(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303e4f4; end: 10303e573;  */

void FUN_10303e4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303e574; end: 10303e6d7;  */

/* WARNING: Possible PIC construction at 0x00010303e5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303de14) */
/* WARNING: Removing unreachable block (ram,0x00010303de18) */
/* WARNING: Removing unreachable block (ram,0x00010303dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010303ddf8) */
/* WARNING: Removing unreachable block (ram,0x00010303dd64) */
/* WARNING: Removing unreachable block (ram,0x00010303e018) */
/* WARNING: Removing unreachable block (ram,0x00010303e138) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3dc) */
/* WARNING: Removing unreachable block (ram,0x00010303e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e388) */
/* WARNING: Removing unreachable block (ram,0x00010303e38c) */
/* WARNING: Removing unreachable block (ram,0x00010303e304) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b8) */
/* WARNING: Removing unreachable block (ram,0x00010303e36c) */
/* WARNING: Removing unreachable block (ram,0x00010303e2dc) */
/* WARNING: Removing unreachable block (ram,0x00010303dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010303dff0) */
/* WARNING: Removing unreachable block (ram,0x00010303dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010303dff8) */
/* WARNING: Removing unreachable block (ram,0x00010303e000) */
/* WARNING: Removing unreachable block (ram,0x00010303dc14) */
/* WARNING: Removing unreachable block (ram,0x00010303dc64) */
/* WARNING: Removing unreachable block (ram,0x00010303de80) */
/* WARNING: Removing unreachable block (ram,0x00010303de88) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010303de90) */
/* WARNING: Removing unreachable block (ram,0x00010303e01c) */
/* WARNING: Removing unreachable block (ram,0x00010303e130) */
/* WARNING: Removing unreachable block (ram,0x00010303e05c) */
/* WARNING: Removing unreachable block (ram,0x00010303e254) */
/* WARNING: Removing unreachable block (ram,0x00010303e090) */
/* WARNING: Removing unreachable block (ram,0x00010303e0d4) */
/* WARNING: Removing unreachable block (ram,0x00010303e0e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e110) */
/* WARNING: Removing unreachable block (ram,0x00010303e0c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0cc) */
/* WARNING: Removing unreachable block (ram,0x00010303e160) */
/* WARNING: Removing unreachable block (ram,0x00010303e1a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1b4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e180) */
/* WARNING: Removing unreachable block (ram,0x00010303e1e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e190) */
/* WARNING: Removing unreachable block (ram,0x00010303e19c) */
/* WARNING: Removing unreachable block (ram,0x00010303e204) */
/* WARNING: Removing unreachable block (ram,0x00010303e224) */
/* WARNING: Removing unreachable block (ram,0x00010303e234) */
/* WARNING: Removing unreachable block (ram,0x00010303e23c) */
/* WARNING: Removing unreachable block (ram,0x00010303e248) */
/* WARNING: Removing unreachable block (ram,0x00010303e27c) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f8) */
/* WARNING: Removing unreachable block (ram,0x00010303e400) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e8) */
/* WARNING: Removing unreachable block (ram,0x00010303e404) */
/* WARNING: Removing unreachable block (ram,0x00010303e468) */
/* WARNING: Removing unreachable block (ram,0x00010303e414) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e4d0) */
/* WARNING: Removing unreachable block (ram,0x00010303e41c) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e284) */
/* WARNING: Removing unreachable block (ram,0x00010303e28c) */
/* WARNING: Removing unreachable block (ram,0x00010303de98) */
/* WARNING: Removing unreachable block (ram,0x00010303dea4) */
/* WARNING: Removing unreachable block (ram,0x00010303dea8) */
/* WARNING: Removing unreachable block (ram,0x00010303de78) */
/* WARNING: Removing unreachable block (ram,0x00010303def0) */
/* WARNING: Removing unreachable block (ram,0x00010303df44) */
/* WARNING: Removing unreachable block (ram,0x00010303dfa0) */
/* WARNING: Removing unreachable block (ram,0x00010303df78) */
/* WARNING: Removing unreachable block (ram,0x00010303dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010303df8c) */
/* WARNING: Removing unreachable block (ram,0x00010303df20) */
/* WARNING: Removing unreachable block (ram,0x00010303e634) */
/* WARNING: Removing unreachable block (ram,0x00010303e618) */
/* WARNING: Removing unreachable block (ram,0x00010303e61c) */
/* WARNING: Removing unreachable block (ram,0x00010303e5c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e638) */
/* WARNING: Removing unreachable block (ram,0x00010303e640) */
/* WARNING: Removing unreachable block (ram,0x00010303db64) */
/* WARNING: Removing unreachable block (ram,0x00010303db88) */
/* WARNING: Removing unreachable block (ram,0x00010303dba8) */
/* WARNING: Removing unreachable block (ram,0x00010303dca4) */
/* WARNING: Removing unreachable block (ram,0x00010303dcac) */
/* WARNING: Removing unreachable block (ram,0x00010303dd20) */
/* WARNING: Removing unreachable block (ram,0x00010303dcb8) */
/* WARNING: Removing unreachable block (ram,0x00010303dbbc) */
/* WARNING: Removing unreachable block (ram,0x00010303e5fc) */
/* WARNING: Removing unreachable block (ram,0x00010303de30) */
/* WARNING: Removing unreachable block (ram,0x00010303de68) */
/* WARNING: Removing unreachable block (ram,0x00010303e13c) */
/* WARNING: Removing unreachable block (ram,0x00010303e140) */

void FUN_10303e574(undefined8 param_1)

{
  func_0x000107c3fb8c();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10303e6d8; end: 10303e6e3; -[SCCreatorsPublicStorySendingLogger didFailWithSnap:businessId:] */

void FUN_10303e6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10303e574(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303e6e4; end: 10303e847;  */

/* WARNING: Possible PIC construction at 0x00010303e730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303e014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303dd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010303de2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303de14) */
/* WARNING: Removing unreachable block (ram,0x00010303de18) */
/* WARNING: Removing unreachable block (ram,0x00010303dd8c) */
/* WARNING: Removing unreachable block (ram,0x00010303ddf8) */
/* WARNING: Removing unreachable block (ram,0x00010303dd64) */
/* WARNING: Removing unreachable block (ram,0x00010303e018) */
/* WARNING: Removing unreachable block (ram,0x00010303e138) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3dc) */
/* WARNING: Removing unreachable block (ram,0x00010303e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e388) */
/* WARNING: Removing unreachable block (ram,0x00010303e38c) */
/* WARNING: Removing unreachable block (ram,0x00010303e304) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b8) */
/* WARNING: Removing unreachable block (ram,0x00010303e36c) */
/* WARNING: Removing unreachable block (ram,0x00010303e2dc) */
/* WARNING: Removing unreachable block (ram,0x00010303dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010303dff0) */
/* WARNING: Removing unreachable block (ram,0x00010303dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010303dff8) */
/* WARNING: Removing unreachable block (ram,0x00010303e000) */
/* WARNING: Removing unreachable block (ram,0x00010303dc14) */
/* WARNING: Removing unreachable block (ram,0x00010303dc64) */
/* WARNING: Removing unreachable block (ram,0x00010303de80) */
/* WARNING: Removing unreachable block (ram,0x00010303de88) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010303de90) */
/* WARNING: Removing unreachable block (ram,0x00010303e01c) */
/* WARNING: Removing unreachable block (ram,0x00010303e130) */
/* WARNING: Removing unreachable block (ram,0x00010303e05c) */
/* WARNING: Removing unreachable block (ram,0x00010303e254) */
/* WARNING: Removing unreachable block (ram,0x00010303e090) */
/* WARNING: Removing unreachable block (ram,0x00010303e0d4) */
/* WARNING: Removing unreachable block (ram,0x00010303e0e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e110) */
/* WARNING: Removing unreachable block (ram,0x00010303e0c0) */
/* WARNING: Removing unreachable block (ram,0x00010303e0cc) */
/* WARNING: Removing unreachable block (ram,0x00010303e160) */
/* WARNING: Removing unreachable block (ram,0x00010303e1a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1b4) */
/* WARNING: Removing unreachable block (ram,0x00010303e1c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e180) */
/* WARNING: Removing unreachable block (ram,0x00010303e1e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e190) */
/* WARNING: Removing unreachable block (ram,0x00010303e19c) */
/* WARNING: Removing unreachable block (ram,0x00010303e204) */
/* WARNING: Removing unreachable block (ram,0x00010303e224) */
/* WARNING: Removing unreachable block (ram,0x00010303e234) */
/* WARNING: Removing unreachable block (ram,0x00010303e23c) */
/* WARNING: Removing unreachable block (ram,0x00010303e248) */
/* WARNING: Removing unreachable block (ram,0x00010303e27c) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e0) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f0) */
/* WARNING: Removing unreachable block (ram,0x00010303e4e4) */
/* WARNING: Removing unreachable block (ram,0x00010303e3f8) */
/* WARNING: Removing unreachable block (ram,0x00010303e400) */
/* WARNING: Removing unreachable block (ram,0x00010303e3e8) */
/* WARNING: Removing unreachable block (ram,0x00010303e404) */
/* WARNING: Removing unreachable block (ram,0x00010303e468) */
/* WARNING: Removing unreachable block (ram,0x00010303e414) */
/* WARNING: Removing unreachable block (ram,0x00010303e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010303e4d0) */
/* WARNING: Removing unreachable block (ram,0x00010303e41c) */
/* WARNING: Removing unreachable block (ram,0x00010303e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010303e284) */
/* WARNING: Removing unreachable block (ram,0x00010303e28c) */
/* WARNING: Removing unreachable block (ram,0x00010303de98) */
/* WARNING: Removing unreachable block (ram,0x00010303dea4) */
/* WARNING: Removing unreachable block (ram,0x00010303dea8) */
/* WARNING: Removing unreachable block (ram,0x00010303de78) */
/* WARNING: Removing unreachable block (ram,0x00010303def0) */
/* WARNING: Removing unreachable block (ram,0x00010303df44) */
/* WARNING: Removing unreachable block (ram,0x00010303dfa0) */
/* WARNING: Removing unreachable block (ram,0x00010303df78) */
/* WARNING: Removing unreachable block (ram,0x00010303dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010303df8c) */
/* WARNING: Removing unreachable block (ram,0x00010303df20) */
/* WARNING: Removing unreachable block (ram,0x00010303e7a4) */
/* WARNING: Removing unreachable block (ram,0x00010303e788) */
/* WARNING: Removing unreachable block (ram,0x00010303e78c) */
/* WARNING: Removing unreachable block (ram,0x00010303e734) */
/* WARNING: Removing unreachable block (ram,0x00010303e7a8) */
/* WARNING: Removing unreachable block (ram,0x00010303e7b0) */
/* WARNING: Removing unreachable block (ram,0x00010303db64) */
/* WARNING: Removing unreachable block (ram,0x00010303db88) */
/* WARNING: Removing unreachable block (ram,0x00010303dba8) */
/* WARNING: Removing unreachable block (ram,0x00010303dca4) */
/* WARNING: Removing unreachable block (ram,0x00010303dcac) */
/* WARNING: Removing unreachable block (ram,0x00010303dd20) */
/* WARNING: Removing unreachable block (ram,0x00010303dcb8) */
/* WARNING: Removing unreachable block (ram,0x00010303dbbc) */
/* WARNING: Removing unreachable block (ram,0x00010303e76c) */
/* WARNING: Removing unreachable block (ram,0x00010303de30) */
/* WARNING: Removing unreachable block (ram,0x00010303de68) */
/* WARNING: Removing unreachable block (ram,0x00010303e13c) */
/* WARNING: Removing unreachable block (ram,0x00010303e140) */

void FUN_10303e6e4(undefined8 param_1)

{
  func_0x000107c3fb8c();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10303e848; end: 10303e853; -[SCCreatorsPublicStorySendingLogger didFailUnrecoverablyWithSnap:businessId:] */

void FUN_10303e848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10303e6e4(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303e854; end: 10303e9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303e854(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = param_1;
  uVar3 = param_2;
  func_0x000107c3fb8c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107c61428(unaff_x20 + _DAT_112f35850,auStack_68,0x21,0);
  func_0x000107c61434(param_3);
  uVar4 = uVar3;
  FUN_103040814(lVar2,uVar3,param_2,param_3);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar3);
  func_0x000107c4d1b8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c3ee04();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      func_0x000107c61428(unaff_x20 + _DAT_112f35858,auStack_68,0x21,0);
      FUN_103040758(lVar2,uVar4);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(lVar2);
    }
  }
  return;
}



/* Entry: 10303e9a8; end: 10303ea1b; -[SCCreatorsPublicStorySendingLogger didRemoveWithSnap:businessId:] */

void FUN_10303e9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10303e854(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10303ea1c; end: 10303ea4f;  */

void FUN_10303ea1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10303ea50; end: 10303ea97; -[SCCreatorsPublicStorySendingLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010303ea7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010303ea80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10303ea50(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f35860));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f35850));
  return;
}



/* Entry: 10303ea98; end: 10303eb0b;  */

code * FUN_10303ea98(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x3b60);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_10303ee4c();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_10303eb0c;
}



/* Entry: 10303eb0c; end: 10303eb3b;  */

void FUN_10303eb0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 10303eb3c; end: 10303eccb;  */

void FUN_10303eb3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,uVar1,uVar3);
  func_0x000107c5fb58(auStack_78,uVar2,uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 10303eccc; end: 10303ed57;  */

undefined1  [16] FUN_10303eccc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [40];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_88,param_1,param_2);
  puVar3 = auStack_88;
  func_0x000107c5fb58(puVar3,param_3,param_4);
  func_0x000107c606a8();
  uVar7 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar8 = (ulong)puVar3 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar9 + uVar8 * 0x20);
      uVar4 = *puVar1;
      uVar5 = puVar1[2];
      uVar2 = puVar1[3];
      if (((uVar4 == param_1 && puVar1[1] == param_2) ||
          (func_0x000107c605b8(uVar4,puVar1[1],param_1,param_2,0), (uVar4 & 1) != 0)) &&
         ((uVar5 == param_3 && uVar2 == param_4 ||
          (func_0x000107c605b8(uVar5,uVar2,param_3,param_4,0), (uVar5 & 1) != 0)))) {
        uVar6 = 1;
        goto LAB_10303ee2c;
      }
      uVar8 = uVar8 + 1 & ~uVar7;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = 0;
LAB_10303ee2c:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 10303ed58; end: 10303ee4b;  */

undefined1  [16]
FUN_10303ed58(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_5 = param_5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar7 + param_5 * 0x20);
      uVar3 = *puVar1;
      uVar4 = puVar1[2];
      uVar2 = puVar1[3];
      if (((uVar3 == param_1 && puVar1[1] == param_2) ||
          (func_0x000107c605b8(uVar3,puVar1[1],param_1,param_2,0), (uVar3 & 1) != 0)) &&
         ((uVar4 == param_3 && uVar2 == param_4 ||
          (func_0x000107c605b8(uVar4,uVar2,param_3,param_4,0), (uVar4 & 1) != 0)))) {
        uVar5 = 1;
        goto LAB_10303ee2c;
      }
      param_5 = param_5 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_10303ee2c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = param_5;
  return auVar8;
}



/* Entry: 10303ee4c; end: 10303eee3;  */

code * FUN_10303ee4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0xbc70);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_10303fb5c();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_10303f8f0(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_10303eee4;
}



/* Entry: 10303eee4; end: 10303ef1f;  */

void FUN_10303eee4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10303ef20; end: 10303f4f7;  */

undefined8 FUN_10303ef20(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long alStack_a8 [9];
  
  lVar8 = *unaff_x20;
  func_0x000107c6068c(alStack_a8,*(undefined8 *)(lVar8 + 0x28));
  func_0x000107c5fb58(alStack_a8,param_2,param_3);
  plVar3 = alStack_a8;
  func_0x000107c5fb58(plVar3,param_4,param_5);
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar7 = (ulong)plVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    lVar9 = *(long *)(lVar8 + 0x30);
    do {
      puVar1 = (ulong *)(lVar9 + uVar7 * 0x20);
      uVar4 = *puVar1;
      uVar5 = puVar1[2];
      uVar2 = puVar1[3];
      if (((uVar4 == param_2 && puVar1[1] == param_3) ||
          (func_0x000107c605b8(uVar4,puVar1[1],param_2,param_3,0), (uVar4 & 1) != 0)) &&
         ((uVar5 == param_4 && uVar2 == param_5 ||
          (func_0x000107c605b8(uVar5,uVar2,param_4,param_5,0), (uVar5 & 1) != 0)))) {
        func_0x000107c6142c(param_5);
        func_0x000107c6142c(param_3);
        puVar1 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar7 * 0x20);
        uVar7 = puVar1[1];
        uVar6 = puVar1[2];
        uVar4 = puVar1[3];
        *param_1 = *puVar1;
        param_1[1] = uVar7;
        param_1[2] = uVar6;
        param_1[3] = uVar4;
        func_0x000107c61434();
        func_0x000107c61434(uVar4);
        return 0;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  func_0x000107c61558(lVar8);
  alStack_a8[0] = *unaff_x20;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x00010303f0ec(param_2,param_3,param_4,param_5,uVar7,lVar8);
  *unaff_x20 = alStack_a8[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return 1;
}



/* Entry: 10303f4f8; end: 10303f663;  */

void FUN_10303f4f8(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112f358a8,&UNK_10db7dd60);
  lVar13 = *unaff_x20;
  lVar8 = lVar13;
  func_0x000107c602dc();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x38;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar13 || lVar1 + uVar9 * 8 <= lVar8 + 0x38U) {
      func_0x000107c610b8(lVar8 + 0x38U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar13 + 0x38);
    if (uVar9 == 0) goto LAB_10303f5d4;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        lVar12 = (LZCOUNT(uVar11) | lVar14 << 6) * 0x20;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = puVar2[1];
        uVar4 = puVar2[2];
        uVar6 = puVar2[3];
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar12);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar4;
        puVar3[3] = uVar6;
        func_0x000107c61434();
        func_0x000107c61434(uVar6);
        if (uVar9 != 0) break;
LAB_10303f5d4:
        do {
          lVar12 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10303f664);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_10303f63c;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar12;
      }
    } while( true );
  }
LAB_10303f63c:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 10303f664; end: 10303f8ef;  */

void FUN_10303f664(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar8 = 0x112f358a8;
  func_0x0001000285a8(0x112f358a8,&UNK_10db7dd60);
  lVar9 = lVar19;
  func_0x000107c602e0(lVar19,lVar1,1,uVar8);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_10303f8bc:
    func_0x000107c61574(lVar19);
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar19 + 0x38);
  uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar9 + 0x38;
  lVar12 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar20 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10303f8ec);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          uVar17 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
            *puVar18 = -1L << (uVar17 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar19 + 0x10) = 0;
          goto LAB_10303f8bc;
        }
        uVar17 = puVar18[lVar20];
        lVar12 = lVar12 + 1;
      } while (uVar17 == 0);
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar20 = lVar12;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + (LZCOUNT(uVar11) | lVar20 << 6) * 0x20);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    uVar3 = puVar2[2];
    uVar5 = puVar2[3];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    func_0x000107c5fb58(auStack_a8,uVar8,uVar4);
    puVar10 = auStack_a8;
    func_0x000107c5fb58(puVar10,uVar3,uVar5);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar11 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10303f8f0);
          (*pcVar7)();
        }
        uVar13 = 0;
        if (uVar15 != uVar11) {
          uVar13 = uVar15;
        }
        bVar6 = (bool)(uVar15 == uVar11 | bVar6);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x20);
    *puVar2 = uVar8;
    puVar2[1] = uVar4;
    puVar2[2] = uVar3;
    puVar2[3] = uVar5;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar20;
  } while( true );
}



/* Entry: 10303f8f0; end: 10303fa2b;  */

undefined1  [16] FUN_10303f8f0(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0x7a4e);
  }
  *param_1 = (long)puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  func_0x000100029284();
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10303f9e8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    FUN_1030401f4(lVar1,param_4 & 1);
    func_0x000100029284();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10303f9c8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10303ff0c();
    puVar3[4] = lVar4;
    goto joined_r0x00010303f9fc;
  }
  puVar3[4] = lVar4;
joined_r0x00010303f9fc:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_10303fa2c;
  return auVar10;
}



/* Entry: 10303fa2c; end: 10303fb5b;  */

void FUN_10303fa2c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  lVar9 = *param_1;
  bVar3 = *(byte *)(param_1 + 5);
  if ((param_2 & 1) == 0) {
    if (lVar9 == 0) goto LAB_10303fabc;
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) goto LAB_10303fab0;
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10303fb5c);
      (*pcVar4)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_10303fabc:
      if ((bVar3 & 1) != 0) {
        lVar6 = param_1[4];
        lVar7 = *(long *)param_1[3];
        func_0x000100bcb1dc(*(long *)(lVar7 + 0x30) + lVar6 * 0x10);
        FUN_10303fb80(lVar6,lVar7);
      }
      goto LAB_10303fb30;
    }
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) {
LAB_10303fab0:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
      goto LAB_10303fb30;
    }
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10303faa0);
      (*pcVar4)();
    }
  }
  lVar5 = param_1[2];
  *(long *)(lVar6 + 0x10) = lVar7 + 1;
  func_0x000107c61434(lVar5);
LAB_10303fb30:
  lVar6 = *param_1;
  func_0x000107c61434(lVar9);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10303fb5c; end: 10303fb7f;  */

undefined1  [16] FUN_10303fb5c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x10303fb74;
  return auVar1;
}



/* Entry: 10303fb80; end: 10303ff0b;  */

void FUN_10303fb80(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_10303fc74:
          if ((long)param_1 < (long)uVar8) goto LAB_10303fbfc;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_10303fc74;
LAB_10303fbfc:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10303fd30);
  (*pcVar5)();
}



/* Entry: 10303ff0c; end: 1030401f3;  */

void FUN_10303ff0c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f35890,&UNK_10db7dd48);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10303ffe8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_10303ffe8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10304007c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_103040054;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_103040054:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1030401f4; end: 103040757;  */

void FUN_1030401f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f35890;
  func_0x0001000285a8(0x112f35890,&UNK_10db7dd48);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10304045c:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10304048c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10304045c;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103040490);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103040758; end: 103040813;  */

undefined8 FUN_103040758(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10303ff0c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_10303fb80(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 103040814; end: 1030408f3;  */

undefined2 FUN_103040814(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long *unaff_x20;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *unaff_x20;
  func_0x000107c61434(lVar5);
  FUN_10303eccc(param_1,param_2,param_3,param_4);
  func_0x000107c6142c(lVar5);
  if ((param_2 & 1) == 0) {
    uVar3 = 0xfefe;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar5 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x00010304007c();
    }
    lVar1 = *(long *)(lVar5 + 0x30) + param_1 * 0x20;
    uVar4 = *(undefined8 *)(lVar1 + 8);
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c6142c(uVar4);
    uVar3 = *(undefined2 *)(*(long *)(lVar5 + 0x38) + param_1 * 2);
    func_0x00010303fd30(param_1,lVar5);
    *unaff_x20 = lVar5;
  }
  return uVar3;
}



/* Entry: 1030408f4; end: 103040a43;  */

void FUN_1030408f4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1030409cc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1030401f4(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103040994);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10303ff0c();
    lVar6 = *unaff_x20;
    goto joined_r0x0001030409e0;
  }
  lVar6 = *unaff_x20;
joined_r0x0001030409e0:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103040a44);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103040a44; end: 103040bbb;  */

/* WARNING: Possible PIC construction at 0x000103040b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103040b98) */

void FUN_103040a44(undefined2 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  uint param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_10303eccc(param_2,param_3,param_4,param_5);
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103040b34);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    func_0x000103040490(lVar6,param_6 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    FUN_10303eccc(param_2,param_3,param_4,param_5);
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(&UNK_110600aa0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103040b00);
      (*pcVar2)();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x00010304007c();
    lVar6 = *unaff_x20;
    goto joined_r0x000103040b48;
  }
  lVar6 = *unaff_x20;
joined_r0x000103040b48:
  if ((uVar4 & 1) != 0) {
    *(undefined2 *)(*(long *)(lVar6 + 0x38) + uVar3 * 2) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x20);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  *(undefined2 *)(*(long *)(lVar6 + 0x38) + uVar3 * 2) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103040bbc);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103040bbc; end: 103040bdf;  */

void FUN_103040bbc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103040be0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103040be0; end: 103040ce3;  */

undefined *
FUN_103040be0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103040ce4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f358a0;
    func_0x0001000285a8(0x112f358a0,&UNK_10db7dd58);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) =
         (long)(puVar4 + -0x20) - ((long)(puVar4 + -0x20) >> 0x3f) & 0xfffffffffffffffe;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 << 1);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 2 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 << 1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 103040ce4; end: 103040d03;  */

void FUN_103040ce4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1898);
  return;
}



/* Entry: 103040d04; end: 103040ebb;  */

int FUN_103040d04(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x3ffd < param_2) {
    iVar3 = 4;
    if (param_2 + 0xc002 < 0xffff0000) {
      iVar3 = 2;
    }
    if (param_2 + 0xc002 < 0xff0000) {
      iVar3 = 1;
    }
    if (iVar3 == 4) {
      uVar2 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar3 == 2) {
        uVar2 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_103040d84;
        goto LAB_103040d64;
      }
      uVar2 = (uint)(byte)param_1[1];
    }
    if (uVar2 != 0) {
LAB_103040d64:
      return ((uint)*param_1 | uVar2 << 0x10) - 0xc002;
    }
  }
LAB_103040d84:
  uVar1 = *param_1;
  uVar2 = (uVar1 & 0x3e00 | (uint)(uVar1 >> 0xe) | (uVar1 >> 1 & 0x7f) << 2) ^ 0x3fff;
  if (0x3ffc < uVar2) {
    uVar2 = 0xffffffff;
  }
  return uVar2 + 1;
}



/* Entry: 103040ebc; end: 103040f4b;  */

long FUN_103040ebc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103040f4c; end: 103040fb7;  */

undefined8 * FUN_103040f4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103040fb8; end: 103040ffb;  */

undefined8 * FUN_103040fb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103040ffc; end: 103041097;  */

int FUN_103040ffc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103041098; end: 1030410d7;  */

void FUN_103041098(void)

{
  undefined *puVar1;
  
  if (puRam0000000113509ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7dce0;
  func_0x000107c61520(&UNK_10db7dce0,&UNK_110600aa0);
  puRam0000000113509ac0 = puVar1;
  return;
}



/* Entry: 1030410d8; end: 1030410df;  */

void FUN_1030410d8(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1030410e0; end: 10304111f;  */

undefined8 FUN_1030410e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103041120; end: 103041127; +[SCTinselUtility tinselMediaSourceFrom:] */

undefined8 FUN_103041120(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_3 - 1;
  if ((uVar2 < 6) && ((0x27U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    return *(undefined8 *)(&UNK_10db7dd90 + (ulong)uVar2 * 8);
  }
  uVar1 = 5;
  if (param_3 != 7) {
    uVar1 = 0;
  }
  return uVar1;
}


