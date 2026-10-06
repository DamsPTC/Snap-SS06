/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012bcfb4; end: 1012bd023;  */

undefined8 FUN_1012bcfb4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103b100d4)(param_2,param_1);
  return param_2;
}



/* Entry: 1012bd024; end: 1012bd04b;  */

void FUN_1012bd024(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3fdac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012bd04c; end: 1012bd157;  */

void FUN_1012bd04c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar1 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_1012b5df4();
  }
  uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  lStack_50 = (uVar4 & 0xffffffffffffff8) + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_1012aeb90(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1012c009c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1012c088c(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1012bd158; end: 1012bd327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd158(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d6fbd8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6fbe0);
  puVar3 = &UNK_11039d598;
  func_0x000107c613fc(&UNK_11039d598,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  func_0x0001012b3f24(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  func_0x000107c615f0();
  func_0x0001012aebb0();
  lVar1 = _DAT_112d6fbd0;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6fbd0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6fbd0) = uVar6;
  func_0x000107c61574(uVar8);
  lVar2 = _DAT_112d6fc00;
  *(undefined8 *)(unaff_x20 + _DAT_112d6fc00) = 2;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d6fb88);
  if (lVar7 != 0) {
    *(undefined8 *)(unaff_x20 + lVar2) = 1;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6fb98);
    puVar3 = &UNK_11039d520;
    func_0x000107c613fc(&UNK_11039d520,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,uVar6);
    puVar4 = &UNK_11039d610;
    func_0x000107c613fc(&UNK_11039d610,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar8;
    *(long *)(puVar4 + 0x20) = lVar7;
    uStack_50 = 0x1012c14f8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11039d628;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c615f4(lVar7,2);
    func_0x000107c6157c(uVar6);
    func_0x000107c61174(uVar8);
    func_0x000107c61574(puVar3);
    func_0x000107c4e590(lVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar7);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 1012bd328; end: 1012bd6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd328(double param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uStack_118;
  undefined *apuStack_108 [3];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar12 = (long)apuStack_108 + (-0x18 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eea0(lVar12);
  func_0x000107c5ee8c();
  (**(code **)(lVar8 + 8))(lVar12,lVar4);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd5cc);
    (*pcVar3)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd5d0);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd5d4);
    (*pcVar3)();
  }
  if (param_2 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar10 = param_2;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar10 != 0) {
    uStack_118 = param_2 & 0xffffffffffffff8;
    uVar11 = 0;
    do {
      while( true ) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_118 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd5c4);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(param_2 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar11;
          FUN_1012bfd08(uVar11,param_2);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd5c0);
          (*pcVar3)();
        }
        plVar2 = (long *)(uVar5 + _DAT_112d6f630);
        lStack_98 = plVar2[0xb];
        lStack_a0 = plVar2[10];
        lStack_88 = plVar2[0xd];
        lStack_90 = plVar2[0xc];
        lVar12 = plVar2[7];
        lStack_c0 = plVar2[6];
        lStack_a8 = plVar2[9];
        lVar4 = plVar2[8];
        lStack_d8 = plVar2[3];
        lStack_e0 = plVar2[2];
        lStack_c8 = plVar2[5];
        lStack_d0 = plVar2[4];
        lStack_e8 = plVar2[1];
        lVar8 = *plVar2;
        lStack_f0 = lVar8;
        lStack_b8 = lVar12;
        lStack_b0 = lVar4;
        if (lStack_a8 < 0) break;
        func_0x000107c61434(lStack_98);
        func_0x000107c6142c();
        if (lVar4 < 1) {
          lVar4 = 0xe10;
        }
        if (SCARRY8(lVar12,lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd5c8);
          (*pcVar3)();
        }
        if ((long)param_1 <= lVar12 + lVar4) goto LAB_1012bd544;
LAB_1012bd518:
        func_0x000107c61170(uVar5);
        uVar11 = uVar11 + 1;
        if (uVar1 == uVar10) goto LAB_1012bd5fc;
      }
      func_0x000107c61174();
      func_0x000107c40834();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd6a8);
        (*pcVar3)();
      }
      lVar4 = lVar8;
      func_0x000107c5bbf4();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bd6a4);
        (*pcVar3)();
      }
      lVar8 = lVar4;
      func_0x000107c51b2c();
      FUN_1012a9dfc(&lStack_f0);
      func_0x000107c61170(lVar4);
      if (lVar8 < (long)param_1) goto LAB_1012bd518;
LAB_1012bd544:
      puVar6 = puVar9;
      func_0x000107c61558();
      apuStack_108[0] = puVar9;
      if (((ulong)puVar6 & 1) == 0) {
        FUN_1012b5810(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar11 = *(ulong *)(apuStack_108[0] + 0x10);
      if (*(ulong *)(apuStack_108[0] + 0x18) >> 1 <= uVar11) {
        FUN_1012b5810(1 < *(ulong *)(apuStack_108[0] + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(apuStack_108[0] + 0x10) = uVar11 + 1;
      *(ulong *)(apuStack_108[0] + uVar11 * 8 + 0x20) = uVar5;
      puVar9 = apuStack_108[0];
      uVar11 = uVar1;
    } while (uVar1 != uVar10);
  }
LAB_1012bd5fc:
  lVar4 = _DAT_112d6fbe8;
  func_0x000107c61428(unaff_x20 + _DAT_112d6fbe8,&lStack_f0,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = puVar9;
  func_0x000107c6142c(uVar7);
  func_0x000107c61428(unaff_x20 + lVar4,apuStack_108,0x21,0);
  FUN_1012bd04c(unaff_x20 + lVar4);
  func_0x000107c614a8(apuStack_108);
  lVar4 = unaff_x20 + _DAT_112d6fb80;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c51b5c();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 1012bd6a8; end: 1012bd6c7; -[SCProfileCalendarSectionDataProvider dataProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd6a8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d6fb80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012bd6c8; end: 1012bd6db; -[SCProfileCalendarSectionDataProvider setDataProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d6fb80,param_3);
  return;
}



/* Entry: 1012bd6dc; end: 1012bd6fb; -[SCProfileCalendarSectionDataProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd6dc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6fb88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012bd6fc; end: 1012bd73b; -[SCProfileCalendarSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1012bd6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1012bd73c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012bd73c; end: 1012bd8bb;  */

/* WARNING: Possible PIC construction at 0x0001012bd770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012bd890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012bd8a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012bd894) */
/* WARNING: Removing unreachable block (ram,0x0001012bd774) */
/* WARNING: Removing unreachable block (ram,0x0001012bd77c) */
/* WARNING: Removing unreachable block (ram,0x0001012bd7ac) */
/* WARNING: Removing unreachable block (ram,0x0001012bd790) */
/* WARNING: Removing unreachable block (ram,0x0001012bd8a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd73c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6fb88);
  *(undefined8 *)(unaff_x20 + _DAT_112d6fb88) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012bd8bc; end: 1012bd8db; -[SCProfileCalendarSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd8bc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6fb90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012bd8dc; end: 1012bd91b; -[SCProfileCalendarSectionDataProvider setSectionDataModel:] */

void FUN_1012bd8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1012bd91c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012bd91c; end: 1012bd987;  */

/* WARNING: Possible PIC construction at 0x0001012bd948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012bd970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012bd94c) */
/* WARNING: Removing unreachable block (ram,0x0001012bd974) */
/* WARNING: Removing unreachable block (ram,0x0001012bd960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bd91c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6fb90);
  *(undefined8 *)(unaff_x20 + _DAT_112d6fb90) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012bd988; end: 1012bd98b;  */

void FUN_1012bd988(void)

{
  return;
}



/* Entry: 1012bd98c; end: 1012bd9fb;  */

/* WARNING: Possible PIC construction at 0x0001012bd9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012bd9e8) */

void FUN_1012bd98c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_11039d5e8;
  func_0x000107c613fc(&UNK_11039d5e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x1012c14a4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1012bd9fc; end: 1012bda47;  */

void FUN_1012bd9fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1012aeb90(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012bda48; end: 1012bdabf;  */

void FUN_1012bda48(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    FUN_1012bdac0(param_1,param_2,param_3 & 1);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1012bdac0; end: 1012be0ff;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bdac0(double param_1,long param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 auStack_160 [8];
  long lStack_158;
  long lStack_150;
  byte *pbStack_148;
  long lStack_140;
  long lStack_138;
  uint uStack_12c;
  undefined *puStack_110;
  long lStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar7 = 0;
  uStack_12c = param_4;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_112d6fc00) = 2;
  lVar5 = _DAT_112d6fc08;
  lVar18 = _DAT_112d6fbf8;
  lVar19 = _DAT_112d6fbe8;
  lVar13 = *(long *)(unaff_x20 + _DAT_112d6fbf8);
  bVar4 = *(byte *)(unaff_x20 + _DAT_112d6fc08);
  func_0x000107c61428(unaff_x20 + _DAT_112d6fbe8,auStack_90,1,0);
  lStack_140 = lVar19;
  uVar14 = *(ulong *)(unaff_x20 + lVar19);
  lStack_138 = lVar5;
  if (uVar14 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar8 = uVar14;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    uVar3 = uStack_12c ^ bVar4;
    if (param_3 >> 0x3e == 0) {
      uVar14 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar14 = param_3;
      }
      func_0x000107c60480();
    }
    pbStack_148 = (byte *)(unaff_x20 + _DAT_112d6fc10);
    if (((((uint)(param_2 != lVar13) | *pbStack_148 ^ 0xffffffff | uVar3) & 1) == 0) &&
       (uVar14 == 0)) {
      return;
    }
  }
  else {
    pbStack_148 = (byte *)(unaff_x20 + _DAT_112d6fc10);
  }
  uVar16 = *(undefined8 *)(unaff_x20 + lVar18);
  *(long *)(unaff_x20 + lVar18) = param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar16);
  func_0x000107c5eea0(auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar15 + 8))(auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar7);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1012be0a8);
    (*pcVar6)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1012be0ac);
    (*pcVar6)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1012be0b0);
    (*pcVar6)();
  }
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d6fbf0);
  lStack_158 = _DAT_112d6fbf0;
  *(ulong *)(unaff_x20 + _DAT_112d6fbf0) = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar16);
  uVar14 = param_3 & 0xffffffffffffff8;
  if (param_3 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar14 + 0x10);
  }
  else {
    uVar8 = uVar14;
    if (0x7fffffffffffffff < param_3) {
      uVar8 = param_3;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_150 = param_2;
  if (uVar8 != 0) {
    uVar17 = 0;
    do {
      while( true ) {
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1012be000);
            (*pcVar6)();
          }
          uVar9 = *(ulong *)(param_3 + uVar17 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar9 = uVar17;
          FUN_1012bfd08(uVar17,param_3);
        }
        uVar1 = uVar17 + 1;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1012bdffc);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar9 + _DAT_112d6f630);
        lStack_b8 = plVar2[0xb];
        lStack_c0 = plVar2[10];
        lStack_a8 = plVar2[0xd];
        lStack_b0 = plVar2[0xc];
        lVar18 = plVar2[7];
        lStack_e0 = plVar2[6];
        lStack_c8 = plVar2[9];
        lVar19 = plVar2[8];
        puStack_f8 = (undefined *)plVar2[3];
        pcStack_100 = (code *)plVar2[2];
        puStack_e8 = (undefined *)plVar2[5];
        pcStack_f0 = (code *)plVar2[4];
        lStack_108 = plVar2[1];
        puVar20 = (undefined *)*plVar2;
        puStack_110 = puVar20;
        lStack_d8 = lVar18;
        lStack_d0 = lVar19;
        if (lStack_c8 < 0) break;
        func_0x000107c61434(lStack_b8);
        func_0x000107c6142c();
        if (lVar19 < 1) {
          lVar19 = 0xe10;
        }
        if (SCARRY8(lVar18,lVar19)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1012be004);
          (*pcVar6)();
        }
        if ((long)param_1 <= lVar18 + lVar19) goto LAB_1012bddc4;
LAB_1012bdd98:
        func_0x000107c61170(uVar9);
        uVar17 = uVar17 + 1;
        if (uVar1 == uVar8) goto LAB_1012bde44;
      }
      func_0x000107c61174();
      func_0x000107c40834();
      func_0x000107c61180();
      if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1012be100);
        (*pcVar6)();
      }
      puVar10 = puVar20;
      func_0x000107c5bbf4();
      func_0x000107c61180();
      func_0x000107c61170(puVar20);
      if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1012be0fc);
        (*pcVar6)();
      }
      puVar20 = puVar10;
      func_0x000107c51b2c();
      FUN_1012a9dfc(&puStack_110);
      func_0x000107c61170(puVar10);
      if ((long)puVar20 < (long)param_1) goto LAB_1012bdd98;
LAB_1012bddc4:
      puVar20 = puVar11;
      func_0x000107c61558();
      puStack_98 = puVar11;
      if (((ulong)puVar20 & 1) == 0) {
        FUN_1012b5810(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar17 = *(ulong *)(puStack_98 + 0x10);
      if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar17) {
        FUN_1012b5810(1 < *(ulong *)(puStack_98 + 0x18),uVar17 + 1,1);
      }
      *(ulong *)(puStack_98 + 0x10) = uVar17 + 1;
      *(ulong *)(puStack_98 + uVar17 * 8 + 0x20) = uVar9;
      puVar11 = puStack_98;
      uVar17 = uVar1;
    } while (uVar1 != uVar8);
  }
LAB_1012bde44:
  lVar19 = lStack_140;
  uVar16 = *(undefined8 *)(unaff_x20 + lStack_140);
  *(undefined **)(unaff_x20 + lStack_140) = puVar11;
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(unaff_x20 + lVar19,&puStack_110,0x21,0);
  FUN_1012bd04c(unaff_x20 + lVar19);
  func_0x000107c614a8(&puStack_110);
  *(byte *)(unaff_x20 + lStack_138) = (byte)uStack_12c & 1;
  *pbStack_148 = 1;
  lVar19 = unaff_x20 + _DAT_112d6fbc8;
  func_0x000107c61618();
  lVar18 = lStack_158;
  if (lVar19 != 0) {
    uVar14 = *(ulong *)(unaff_x20 + lStack_158);
    if (uVar14 >> 0x3e != 0) {
      uVar8 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar8 = uVar14;
      }
      func_0x000107c60480(uVar8);
      uVar14 = *(ulong *)(unaff_x20 + lVar18);
    }
    FUN_1012aeb90(0);
    uVar8 = uVar14;
    func_0x000107c61434(uVar14);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar14);
    puVar11 = &UNK_11039d598;
    func_0x000107c613fc(&UNK_11039d598,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,unaff_x20);
    pcStack_f0 = FUN_1012c149c;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_108 = 0x42000000;
    pcStack_100 = FUN_1012bd98c;
    puStack_f8 = &UNK_11039d5b0;
    ppuVar12 = &puStack_110;
    puStack_e8 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_e8);
    func_0x000107c3ef84(lVar19);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c615e8(lVar19);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1012be100; end: 1012be163; -[SCProfileCalendarSectionDataProvider numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012be100(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_112d6fbe8;
  func_0x000107c61428(param_1 + _DAT_112d6fbe8,auStack_38,0,0);
  uVar3 = *(ulong *)(param_1 + lVar2);
  if (uVar3 >> 0x3e != 0) {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480(uVar1);
  }
  return 2;
}



/* Entry: 1012be164; end: 1012bf203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012be164(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  long unaff_x20;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_160 [8];
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  func_0x000107c5eff8();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = _DAT_112d6fbe8;
  puVar18 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112d6fbe8,auStack_80,0,0);
  uVar14 = *(ulong *)(unaff_x20 + lVar22);
  if (uVar14 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar5 = uVar14;
    }
    func_0x000107c60480();
  }
  lVar19 = _DAT_112d6f9b0;
  if ((long)uVar5 < 2) {
    if (uVar5 == 0) {
      func_0x0001012beafc();
      if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
        puVar6 = *(undefined **)
                  (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        func_0x000107c60480(puVar6);
      }
      puVar9 = (undefined *)0x0;
      FUN_1012bf760(0,puVar6 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x1012c5c28,0x1012bfa20);
      uVar15 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar15 + 0x10);
      puVar6 = puVar9;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar14) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_1012bf760(puVar6,uVar14 + 1,1,puVar9,0x1012c5c28,0x1012bfa20);
        uVar15 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar15 + 0x10) = uVar14 + 1;
      *(ulong *)(uVar15 + uVar14 * 8 + 0x20) = uVar5;
      puVar9 = puVar6;
      goto LAB_1012be694;
    }
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1012be9a4);
      (*pcVar17)();
    }
  }
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112d6fba8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6fba0);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d6fba0))[1];
  lVar16 = *(long *)(unaff_x20 + _DAT_112d6fb98);
  func_0x000107c61428(unaff_x20 + lVar22,&uStack_f0,0x20,0);
  uVar14 = *(ulong *)(unaff_x20 + lVar22);
  if ((uVar14 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1012be9ec);
      (*pcVar17)();
    }
    puVar6 = *(undefined **)(uVar14 + 0x20);
    func_0x000107c61174();
  }
  else {
    puVar6 = (undefined *)0x0;
    FUN_1012bfd08();
  }
  func_0x000107c614a8(&uStack_f0);
  puVar1 = (undefined8 *)(puVar6 + _DAT_112d6f630);
  uVar26 = puVar1[3];
  uStack_e0 = puVar1[2];
  uStack_c8 = puVar1[5];
  uVar23 = puVar1[4];
  uVar25 = puVar1[1];
  uVar24 = *puVar1;
  uVar27 = puVar1[0xb];
  uStack_a0 = puVar1[10];
  uStack_88 = puVar1[0xd];
  uStack_90 = puVar1[0xc];
  uVar29 = puVar1[7];
  uStack_c0 = puVar1[6];
  lStack_a8 = puVar1[9];
  uVar28 = puVar1[8];
  uStack_f0 = uVar24;
  uStack_e8 = uVar25;
  uStack_d8 = uVar26;
  uStack_d0 = uVar23;
  uStack_b8 = uVar29;
  uStack_b0 = uVar28;
  uStack_98 = uVar27;
  if (lStack_a8 < 0) {
    func_0x000107c61174(uVar24);
    puVar10 = puVar6;
    func_0x0001012bed68(puVar6,uVar24);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61550();
    if ((((int)puVar9 == 0) || ((long)puVar11 < 0)) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar11 >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar11) {
          puVar9 = puVar11;
        }
        func_0x000107c60480(puVar9);
      }
      puVar11 = (undefined *)0x0;
      FUN_1012bf760(0,puVar9 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x1012c5c28,0x1012bfa20);
    }
    uVar5 = (ulong)puVar11 & 0xffffffffffffff8;
    uVar14 = *(ulong *)(uVar5 + 0x10);
    puVar9 = puVar11;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1012bf760(puVar9,uVar14 + 1,1,puVar11,0x1012c5c28,0x1012bfa20);
      uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar5 + 0x10) = uVar14 + 1;
    *(undefined **)(uVar5 + uVar14 * 8 + 0x20) = puVar10;
    FUN_1012a9dfc(&uStack_f0);
  }
  else {
    func_0x000107c61434(uVar27);
    func_0x000107c61434(uVar25);
    func_0x000107c61434(uVar23);
    func_0x000107c6142c(uVar25);
    func_0x000107c6142c(uVar27);
    puVar9 = PTR_PTR_1126b02a8;
    func_0x000107c610f8();
    uVar24 = 0xd000000000000035;
    uVar14 = 0x800000010ef33a50;
    func_0x000107c5fadc(0xd000000000000035);
    func_0x000107c46d50();
    func_0x000107c61170(uVar24);
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1012beaf4);
      (*pcVar17)();
    }
    uVar5 = (ulong)~(uint)*(byte *)(lVar16 + lVar19) & 1;
    func_0x000107c31200();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1012beaf8);
      (*pcVar17)();
    }
    uVar15 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    lVar16 = 0;
    FUN_1012b6efc();
    lVar19 = lVar16;
    func_0x000107c610f8();
    lVar22 = _DAT_112d6f840;
    *(undefined8 *)(lVar19 + _DAT_112d6f840) = 0;
    puVar1 = (undefined8 *)(lVar19 + _DAT_112d6f828);
    *puVar1 = uVar26;
    puVar1[1] = uVar23;
    *(undefined8 *)(lVar19 + _DAT_112d6f8e0) = uVar29;
    *(undefined8 *)(lVar19 + _DAT_112d6f8e8) = uVar28;
    *(undefined **)(lVar19 + _DAT_112d6f830) = puVar9;
    puVar1 = (undefined8 *)(lVar19 + _DAT_112d6f838);
    *puVar1 = uVar8;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar19 + lVar22) = uVar20;
    puVar2 = (ulong *)(lVar19 + _DAT_112d6f848);
    *puVar2 = uVar15;
    puVar2[1] = uVar14;
    func_0x000107c61434(uVar23);
    func_0x000107c61174(puVar9);
    FUN_100cab2f8(uVar8,uVar3);
    puVar11 = PTR_s_init_1125d9248;
    lStack_100 = lVar19;
    lStack_f8 = lVar16;
    func_0x000107c61174(uVar20);
    plVar7 = &lStack_100;
    func_0x000107c61154(plVar7,puVar11);
    puVar11 = PTR_PTR_1126aea98;
    func_0x000107c610f8();
    func_0x000107c61174(plVar7);
    uVar8 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef33da0);
    func_0x000107c45d60();
    func_0x000107c61170(plVar7);
    func_0x000107c61170(uVar8);
    if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1012beafc);
      (*pcVar17)();
    }
    func_0x000107c6142c(uVar23);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(plVar7);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61550();
    if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar9 = puVar10;
        }
        func_0x000107c60480(puVar9);
      }
      puVar10 = (undefined *)0x0;
      FUN_1012bf760(0,puVar9 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x1012c5c28,0x1012bfa20);
    }
    uVar5 = (ulong)puVar10 & 0xffffffffffffff8;
    uVar14 = *(ulong *)(uVar5 + 0x10);
    puVar9 = puVar10;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1012bf760(puVar9,uVar14 + 1,1,puVar10,0x1012c5c28,0x1012bfa20);
      uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar5 + 0x10) = uVar14 + 1;
    *(undefined **)(uVar5 + uVar14 * 8 + 0x20) = puVar11;
  }
  func_0x000107c61170();
LAB_1012be694:
  FUN_1012bf204();
  puVar11 = puVar9;
  func_0x000107c61550();
  if ((((int)puVar11 == 0) || ((long)puVar9 < 0)) ||
     (puVar11 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar10 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar10 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar10 = puVar9;
      }
      func_0x000107c60480(puVar10);
    }
    puVar11 = (undefined *)0x0;
    FUN_1012bf760(0,puVar10 + 1,1,puVar9,0x1012c5c28,0x1012bfa20);
  }
  puStack_108 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
  uVar14 = *(ulong *)(puStack_108 + 0x10);
  puVar9 = (undefined *)(uVar14 + 1);
  puVar10 = puVar11;
  if (*(ulong *)(puStack_108 + 0x18) >> 1 <= uVar14) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_108 + 0x18));
    FUN_1012bf760(puVar10,puVar9,1,puVar11,0x1012c5c28,0x1012bfa20);
    puStack_108 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
  }
  *(undefined **)(puStack_108 + 0x10) = puVar9;
  *(undefined **)(puStack_108 + uVar14 * 8 + 0x20) = puVar6;
  lVar22 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar22 != 0) {
    if ((ulong)puVar10 >> 0x3e != 0) {
      puVar9 = puStack_108;
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar9 = puVar10;
      }
      func_0x000107c60480();
    }
    param_1 = param_1 + ((ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff));
    lVar19 = *(long *)(lVar21 + 0x48);
    pcVar17 = *(code **)(lVar21 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar12 = puVar18;
      (*pcVar17)(puVar18,param_1,lVar4);
      func_0x000107c5efec();
      if ((long)puVar12 < (long)puVar9) {
        func_0x000107c5efec();
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012be988);
            (*pcVar17)();
          }
          if (*(undefined1 **)(puStack_108 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1012be98c);
            (*pcVar17)();
          }
          puVar12 = *(undefined1 **)(puVar10 + (long)puVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          FUN_1012bfeb8();
        }
        (**(code **)(lVar21 + 8))(puVar18,lVar4);
        puVar11 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar11 == 0) || ((long)puVar6 < 0)) ||
           (puVar11 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar13 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar13 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar13 = puVar6;
            }
            func_0x000107c60480(puVar13);
          }
          puVar11 = (undefined *)0x0;
          FUN_1012bf760(0,puVar13 + 1,1,puVar6,0x1012c5c28,0x1012bfa20);
        }
        uVar5 = (ulong)puVar11 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar5 + 0x10);
        puVar6 = puVar11;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_1012bf760(puVar6,uVar14 + 1,1,puVar11,0x1012c5c28,0x1012bfa20);
          uVar5 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar5 + 0x10) = uVar14 + 1;
        *(undefined1 **)(uVar5 + uVar14 * 8 + 0x20) = puVar12;
      }
      else {
        (**(code **)(lVar21 + 8))(puVar18,lVar4);
      }
      param_1 = param_1 + lVar19;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  func_0x000107c6142c(puVar10);
  return puVar6;
}



/* Entry: 1012bf204; end: 1012bf3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012bf204(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d6fb98);
  puVar4 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010ef33a90);
  func_0x000107c46d50();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bf3c8);
    (*pcVar3)();
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d6fba0);
  uVar10 = ((undefined8 *)(unaff_x20 + _DAT_112d6fba0))[1];
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d6fba8);
  lVar5 = 0;
  FUN_1012b73f4();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112d6f8d8;
  *(undefined8 *)(lVar6 + _DAT_112d6f8d8) = 0;
  *(undefined **)(lVar6 + _DAT_112d6f8c8) = puVar4;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d6f8d0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  *(undefined8 *)(lVar6 + lVar2) = uVar11;
  func_0x000107c61174(puVar4);
  FUN_100cab2f8(uVar9,uVar10);
  puVar8 = PTR_s_init_1125d9248;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61174(uVar11);
  func_0x000107c61154(&lStack_50,puVar8);
  puVar8 = PTR_PTR_1126aea98;
  func_0x000107c610f8();
  func_0x000107c61174(plVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef33de0);
  func_0x000107c45d60();
  func_0x000107c61170(plVar7);
  func_0x000107c61170(uVar9);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    func_0x000107c61170(plVar7);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bf3cc);
  (*pcVar3)();
}



/* Entry: 1012bf3cc; end: 1012bf473; -[SCProfileCalendarSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1012bf3cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000107c5eff8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  FUN_1012be164();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1012c145c(0,0x112d6fa28,&PTR_PTR_1126aea98);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1012bf474; end: 1012bf4eb; -[SCProfileCalendarSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1012bf474(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112d6fa20 != -1) {
    func_0x000107c61568(0x112d6fa20,FUN_1012b7b8c);
  }
  uVar1 = uRam00000001137ff300;
  uVar2 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012bf4ec; end: 1012bf4ef; -[SCProfileCalendarSectionDataProvider addListener:] */

void FUN_1012bf4ec(void)

{
  return;
}



/* Entry: 1012bf4f0; end: 1012bf4f3; -[SCProfileCalendarSectionDataProvider removeListener:] */

void FUN_1012bf4f0(void)

{
  return;
}



/* Entry: 1012bf4f4; end: 1012bf51f; +[SCProfileCalendarSectionDataProvider announcerIdentifier] */

void FUN_1012bf4f4(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010d931350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012bf520; end: 1012bf5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bf520(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112d6fbd0);
    func_0x000107c6157c(uVar1);
    FUN_1012b2454(param_1,param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1012bf5ac; end: 1012bf60b; -[SCProfileCalendarSectionDataProvider init] */

void FUN_1012bf5ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarSectionDataProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012bf5d8);
  (*pcVar1)();
}



/* Entry: 1012bf60c; end: 1012bf72b; -[SCProfileCalendarSectionDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012bf658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012bf67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012bf6f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012bf680) */
/* WARNING: Removing unreachable block (ram,0x0001012bf65c) */
/* WARNING: Removing unreachable block (ram,0x0001012bf6f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bf60c(long param_1)

{
  FUN_100cab2d4(param_1 + _DAT_112d6fb80);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fb88));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fb90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6fb98));
  return;
}



/* Entry: 1012bf72c; end: 1012bf74b;  */

void FUN_1012bf72c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3cd8);
  return;
}



/* Entry: 1012bf74c; end: 1012bf75f;  */

ulong FUN_1012bf74c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012bf89c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1012bf8a8(uVar2,uVar4,FUN_1012c5b30);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012bf898);
      (*pcVar1)();
    }
    FUN_1012bf928(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1012bf760; end: 1012bf89b;  */

ulong FUN_1012bf760(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012bf89c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1012bf8a8(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012bf898);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1012bf89c; end: 1012bf8a7;  */

undefined * FUN_1012bf89c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1012c5b30();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1012bf8a8; end: 1012bf927;  */

undefined * FUN_1012bf8a8(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1012bf928; end: 1012bfb37;  */

long FUN_1012bf928(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bfa1c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bfa20);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1012aeb90(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1012aeb90(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bfa18);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1012bfb38; end: 1012bfb4b;  */

ulong FUN_1012bfb38(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfc30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfc34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    func_0x000107c61168(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
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
    puVar4 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    func_0x000107c61168(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
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
  FUN_1012c145c(0,0x112d59528,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfd08);
  (*pcVar2)();
}



/* Entry: 1012bfb4c; end: 1012bfd07;  */

ulong FUN_1012bfb4c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfc30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfc34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1012c145c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfd08);
  (*pcVar2)();
}



/* Entry: 1012bfd08; end: 1012bfea3;  */

ulong FUN_1012bfd08(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfdd8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfddc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1012aeb90(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_1012aeb90(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010ef33f10);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bfea4);
  (*pcVar2)();
}



/* Entry: 1012bfea4; end: 1012bfeb7;  */

ulong FUN_1012bfea4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bff9c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bffa0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a68d8;
    func_0x000107c61168(PTR_PTR_1126a68d8);
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
    puVar4 = PTR_PTR_1126a68d8;
    func_0x000107c61168(PTR_PTR_1126a68d8);
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
  FUN_1012c145c(0,0x112d6f760,&PTR_PTR_1126a68d8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0074);
  (*pcVar2)();
}



/* Entry: 1012bfeb8; end: 1012c0073;  */

ulong FUN_1012bfeb8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bff9c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bffa0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1012c145c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0074);
  (*pcVar2)();
}



/* Entry: 1012c0074; end: 1012c009b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c0074(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x20;
  undefined1 *puVar18;
  long lStack_100;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar17 = *(long *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar13 = auStack_80;
  func_0x000107c61428(lVar3 + 0x10,puVar13,0,0);
  puVar2 = (undefined *)(lVar3 + 0x10);
  func_0x000107c61648();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar7 = puVar2;
  if ((puVar2[0x38] & 1) != 0) goto LAB_1012af1a8;
  puVar2[0x38] = 1;
  lVar3 = *(long *)(lVar17 + _DAT_112d6f9a0);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lStack_e0 = 0;
    puVar18 = (undefined1 *)0xe000000000000000;
    puStack_d8 = puVar13;
  }
  else {
    lStack_e0 = lVar3;
    func_0x000107c5faec();
    puStack_d8 = puVar13;
    func_0x000107c61170(lVar3);
    puVar18 = puVar13;
  }
  lVar3 = *(long *)(lVar17 + _DAT_112d6f9a8);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lStack_100 = 0;
    puStack_d8 = (undefined1 *)0xe000000000000000;
  }
  else {
    lStack_100 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  cVar1 = *(char *)(lVar17 + _DAT_112d6f9b0);
  func_0x000107c60f34();
  puVar4 = &UNK_11039cf80;
  func_0x000107c613fc(&UNK_11039cf80,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar5 = &UNK_11039cfa8;
  func_0x000107c613fc(&UNK_11039cfa8,0x18,7);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = &UNK_11039cfd0;
  func_0x000107c613fc(&UNK_11039cfd0,0x18,7);
  *(undefined **)(puVar6 + 0x10) = puVar11;
  func_0x000107c60f38(lVar3);
  puVar7 = &UNK_11039cff8;
  func_0x000107c613fc(&UNK_11039cff8,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar4;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(long *)(puVar7 + 0x20) = lVar3;
  lVar17 = *(long *)(puVar2 + 0x10);
  if (lVar17 == 0) {
    func_0x000107c61428(puVar4 + 0x10,&puStack_c8,1,0);
    uVar16 = *(undefined8 *)(puVar4 + 0x10);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    func_0x000107c61580(puVar5,2);
    lVar17 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar4);
    func_0x000107c61170(uVar16);
    func_0x000107c61428(puVar5 + 0x10,auStack_98,1,0);
    uVar16 = *(undefined8 *)(puVar5 + 0x10);
    *(undefined **)(puVar5 + 0x10) = puVar11;
    func_0x000107c6142c(uVar16);
    func_0x000107c60f3c(lVar17);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c60f38(lVar17);
    if (cVar1 != '\0') goto LAB_1012aef38;
LAB_1012af078:
    func_0x000107c6142c(puVar18);
    puVar7 = &UNK_11039d020;
    func_0x000107c613fc(&UNK_11039d020,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar6);
    uVar16 = 0x1012b6e28;
    puVar11 = &UNK_11039d228;
    puVar15 = &UNK_10d931150;
    lStack_e0 = lStack_100;
  }
  else {
    func_0x000107c61580(puVar5,2);
    lVar8 = lVar3;
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x000107c615f0(lVar17);
    lVar9 = lStack_e0;
    func_0x000107c5fadc(lStack_e0,puVar18);
    if (cVar1 == '\0') {
      lVar10 = lStack_100;
      func_0x000107c5fadc(lStack_100,puStack_d8);
      puVar11 = &UNK_11039d0c0;
      func_0x000107c613fc(&UNK_11039d0c0,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x1012b436c;
      *(undefined **)(puVar11 + 0x18) = puVar7;
      pcStack_a8 = (code *)0x1012b6e1c;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      uStack_b8 = 0x1012b6e2c;
      puStack_b0 = &UNK_11039d0d8;
      ppuVar12 = &puStack_c8;
      puStack_a0 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar11 = puStack_a0;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar11);
      func_0x000107c442c0(lVar17);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c615e8(lVar17);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c60f38(lVar8);
      goto LAB_1012af078;
    }
    puVar11 = &UNK_11039d110;
    func_0x000107c613fc(&UNK_11039d110,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = 0x1012b436c;
    *(undefined **)(puVar11 + 0x18) = puVar7;
    pcStack_a8 = FUN_1012b43e8;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    uStack_b8 = 0x1012b6e30;
    puStack_b0 = &UNK_11039d128;
    ppuVar12 = &puStack_c8;
    puStack_a0 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_a0;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar11);
    func_0x000107c43fc4(lVar17);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c615e8(lVar17);
    func_0x000107c61170(lVar9);
    func_0x000107c60f38(lVar8);
LAB_1012aef38:
    func_0x000107c6142c(puStack_d8);
    puVar7 = &UNK_11039d098;
    func_0x000107c613fc(&UNK_11039d098,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar6);
    uVar16 = 0x1012b43b4;
    puVar11 = &UNK_11039d160;
    puVar15 = &UNK_10d9310f0;
    puStack_d8 = puVar18;
  }
  FUN_1012af2dc(lStack_e0,puStack_d8,uVar16,puVar7,puVar11,puVar15);
  func_0x000107c6142c(puStack_d8);
  func_0x000107c61574(puVar7);
  puVar11 = &UNK_11039d048;
  func_0x000107c613fc(&UNK_11039d048,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,puVar2);
  puVar7 = &UNK_11039d070;
  func_0x000107c613fc(&UNK_11039d070,0x38,7);
  *(undefined **)(puVar7 + 0x10) = puVar11;
  *(undefined8 *)(puVar7 + 0x18) = uVar14;
  *(undefined **)(puVar7 + 0x20) = puVar6;
  *(undefined **)(puVar7 + 0x28) = puVar5;
  *(undefined **)(puVar7 + 0x30) = puVar4;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar11);
  func_0x000107c615f0(uVar14);
  func_0x00010488b768();
  func_0x000107c61574(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar11);
LAB_1012af1a8:
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 1012c009c; end: 1012c088b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c009c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x21;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      lVar17 = lVar7 + 1;
      lVar14 = lVar17;
      if (lVar17 < lVar8) {
        lVar12 = *param_3;
        uVar3 = *(ulong *)(lVar12 + lVar17 * 8);
        uVar15 = *(undefined8 *)(lVar12 + lVar7 * 8);
        func_0x000107c61174();
        func_0x000107c61174(uVar15);
        uVar13 = uVar3;
        FUN_1012b6010(uVar3,uVar15);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar15);
        lVar14 = lVar7 + 2;
        if (lVar14 < lVar8) {
          plVar16 = (long *)(lVar12 + lVar7 * 8 + 0x10);
          lVar17 = lVar14;
          do {
            lVar14 = plVar16[-1];
            lVar12 = *plVar16;
            plVar18 = (long *)(lVar12 + _DAT_112d6f630);
            lStack_c8 = plVar18[3];
            lStack_d0 = plVar18[2];
            lStack_b8 = plVar18[5];
            lVar10 = plVar18[4];
            lVar19 = plVar18[1];
            lVar24 = *plVar18;
            lVar20 = plVar18[0xb];
            lStack_90 = plVar18[10];
            lVar22 = plVar18[0xd];
            lStack_80 = plVar18[0xc];
            lStack_158 = plVar18[7];
            lVar21 = plVar18[6];
            lStack_98 = plVar18[9];
            lStack_a0 = plVar18[8];
            lStack_e0 = lVar24;
            lStack_d8 = lVar19;
            lStack_c0 = lVar10;
            lStack_b0 = lVar21;
            lStack_a8 = lStack_158;
            lStack_88 = lVar20;
            lStack_78 = lVar22;
            if (lStack_98 < 0) {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar24 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0880);
                (*pcVar2)();
              }
              lVar10 = lVar24;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar24);
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c087c);
                (*pcVar2)();
              }
              lStack_158 = lVar10;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_e0);
              func_0x000107c61170(lVar10);
            }
            else {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c6142c(lVar19);
              func_0x000107c6142c(lVar10);
              func_0x000107c6142c(lVar21);
              func_0x000107c6142c(lVar22);
              func_0x000107c6142c(lVar20);
            }
            plVar18 = (long *)(lVar14 + _DAT_112d6f630);
            lVar20 = plVar18[0xb];
            lStack_100 = plVar18[10];
            lStack_e8 = plVar18[0xd];
            lStack_f0 = plVar18[0xc];
            lVar24 = plVar18[7];
            lStack_120 = plVar18[6];
            lStack_108 = plVar18[9];
            lStack_110 = plVar18[8];
            lStack_138 = plVar18[3];
            lStack_140 = plVar18[2];
            lStack_128 = plVar18[5];
            lStack_130 = plVar18[4];
            lStack_148 = plVar18[1];
            lVar10 = *plVar18;
            lStack_150 = lVar10;
            lStack_118 = lVar24;
            lStack_f8 = lVar20;
            if (lStack_108 < 0) {
              func_0x000107c61174();
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0878);
                (*pcVar2)();
              }
              lVar20 = lVar10;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar10);
              if (lVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0874);
                (*pcVar2)();
              }
              lVar24 = lVar20;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_150);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c61170(lVar20);
            }
            else {
              func_0x000107c61434(lVar20);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c6142c(lVar20);
            }
            lVar14 = lVar17;
            if ((((uint)uVar13 ^ (uint)(lVar24 <= lStack_158)) & 1) == 0) break;
            plVar16 = plVar16 + 1;
            lVar17 = lVar17 + 1;
            lVar14 = lVar8;
          } while (lVar8 != lVar17);
          lVar17 = lVar17 + -1;
        }
        if ((uVar13 & 1) != 0) {
          if (lVar14 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0840);
            (*pcVar2)();
          }
          if (lVar7 <= lVar17) {
            lVar12 = *param_3;
            puVar9 = (undefined8 *)(lVar12 + lVar14 * 8);
            puVar11 = (undefined8 *)(lVar12 + lVar7 * 8);
            lVar17 = lVar14;
            lVar8 = lVar7;
            do {
              puVar9 = puVar9 + -1;
              lVar17 = lVar17 + -1;
              if (lVar8 != lVar17) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0870);
                  (*pcVar2)();
                }
                uVar15 = *puVar11;
                *puVar11 = *puVar9;
                *puVar9 = uVar15;
              }
              lVar8 = lVar8 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar8 < lVar17);
          }
        }
      }
      lVar8 = param_3[1];
      lVar17 = lVar14;
      if (lVar14 < lVar8) {
        if (SBORROW8(lVar14,lVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c083c);
          (*pcVar2)();
        }
        if (lVar14 - lVar7 < param_4) {
          if (SCARRY8(lVar7,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0844);
            (*pcVar2)();
          }
          lVar12 = lVar7 + param_4;
          if (lVar8 <= lVar7 + param_4) {
            lVar12 = lVar8;
          }
          if (lVar12 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0848);
            (*pcVar2)();
          }
          if (lVar14 != lVar12) {
            lVar10 = *param_3;
            plVar16 = (long *)(lVar10 + lVar14 * 8);
            lVar8 = (lVar7 - lVar14) + 1;
            plVar18 = plVar16;
            lVar24 = lVar8;
LAB_1012c0420:
            do {
              lVar17 = plVar16[-1];
              lVar20 = *plVar16;
              plVar1 = (long *)(lVar20 + _DAT_112d6f630);
              lStack_c8 = plVar1[3];
              lStack_d0 = plVar1[2];
              lStack_b8 = plVar1[5];
              lVar19 = plVar1[4];
              lVar25 = plVar1[1];
              lVar22 = *plVar1;
              lVar21 = plVar1[0xb];
              lStack_90 = plVar1[10];
              lVar23 = plVar1[0xd];
              lStack_80 = plVar1[0xc];
              lStack_158 = plVar1[7];
              lVar26 = plVar1[6];
              lStack_98 = plVar1[9];
              lStack_a0 = plVar1[8];
              lStack_e0 = lVar22;
              lStack_d8 = lVar25;
              lStack_c0 = lVar19;
              lStack_b0 = lVar26;
              lStack_a8 = lStack_158;
              lStack_88 = lVar21;
              lStack_78 = lVar23;
              if (lStack_98 < 0) {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0864);
                  (*pcVar2)();
                }
                lVar19 = lVar22;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar22);
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0860);
                  (*pcVar2)();
                }
                lStack_158 = lVar19;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_e0);
                func_0x000107c61170(lVar19);
              }
              else {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c6142c(lVar25);
                func_0x000107c6142c(lVar19);
                func_0x000107c6142c(lVar26);
                func_0x000107c6142c(lVar23);
                func_0x000107c6142c(lVar21);
              }
              plVar1 = (long *)(lVar17 + _DAT_112d6f630);
              lVar21 = plVar1[0xb];
              lStack_100 = plVar1[10];
              lStack_e8 = plVar1[0xd];
              lStack_f0 = plVar1[0xc];
              lVar22 = plVar1[7];
              lStack_120 = plVar1[6];
              lStack_108 = plVar1[9];
              lStack_110 = plVar1[8];
              lStack_138 = plVar1[3];
              lStack_140 = plVar1[2];
              lStack_128 = plVar1[5];
              lStack_130 = plVar1[4];
              lStack_148 = plVar1[1];
              lVar19 = *plVar1;
              lStack_150 = lVar19;
              lStack_118 = lVar22;
              lStack_f8 = lVar21;
              if (lStack_108 < 0) {
                func_0x000107c61174();
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c086c);
                  (*pcVar2)();
                }
                lVar21 = lVar19;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar19);
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0868);
                  (*pcVar2)();
                }
                lVar22 = lVar21;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_150);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c61170(lVar21);
              }
              else {
                func_0x000107c61434(lVar21);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c6142c(lVar21);
              }
              if (lStack_158 < lVar22) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c084c);
                  (*pcVar2)();
                }
                lVar17 = plVar16[-1];
                plVar16[-1] = *plVar16;
                *plVar16 = lVar17;
                if (lVar8 != 0) {
                  lVar8 = lVar8 + 1;
                  plVar16 = plVar16 + -1;
                  goto LAB_1012c0420;
                }
              }
              lVar14 = lVar14 + 1;
              plVar16 = plVar18 + 1;
              lVar8 = lVar24 + -1;
              lVar17 = lVar12;
              plVar18 = plVar16;
              lVar24 = lVar8;
            } while (lVar14 != lVar12);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar17 < lVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0830);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar13 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar13 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar13 + 1;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x20) = lVar7;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0884);
        (*pcVar2)();
      }
      FUN_1012c0b4c(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1012c0800;
      lVar8 = param_3[1];
      lVar7 = lVar17;
    } while (lVar17 < lVar8);
  }
  puVar6 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c088c);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar13 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar13) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0888);
      (*pcVar2)();
    }
    lVar12 = uVar13 - 1;
    lVar14 = *(long *)(puVar6 + uVar13 * 0x10);
    lVar17 = *(long *)(puVar6 + lVar12 * 0x10 + 0x28);
    FUN_1012c0db4(lVar7 + lVar14 * 8,lVar7 + *(long *)(puVar6 + lVar12 * 0x10 + 0x20) * 8,
                  lVar7 + lVar17 * 8,lVar8);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0834);
      (*pcVar2)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0838);
      (*pcVar2)();
    }
    *(long *)(puVar6 + uVar13 * 0x10) = lVar14;
    *(long *)((long)(puVar6 + uVar13 * 0x10) + 8) = lVar17;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar12);
    puVar6 = puStack_58;
    uVar13 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1012c0800:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1012c088c; end: 1012c0b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c088c(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_58;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar5 = (long *)(lVar3 + param_3 * 8 + -8);
    lVar4 = (param_1 - param_3) + 1;
    do {
      lVar7 = *(long *)(lVar3 + param_3 * 8);
      plVar6 = plVar5;
      lVar9 = lVar4;
      while( true ) {
        lVar8 = *plVar6;
        plVar1 = (long *)(lVar7 + _DAT_112d6f630);
        lVar10 = plVar1[0xb];
        lStack_90 = plVar1[10];
        lVar11 = plVar1[0xd];
        lStack_80 = plVar1[0xc];
        lStack_58 = plVar1[7];
        lVar12 = plVar1[6];
        lStack_98 = plVar1[9];
        lStack_a0 = plVar1[8];
        lStack_c8 = plVar1[3];
        lStack_d0 = plVar1[2];
        lStack_b8 = plVar1[5];
        lVar14 = plVar1[4];
        lVar15 = plVar1[1];
        lVar13 = *plVar1;
        lStack_e0 = lVar13;
        lStack_d8 = lVar15;
        lStack_c0 = lVar14;
        lStack_b0 = lVar12;
        lStack_a8 = lStack_58;
        lStack_88 = lVar10;
        lStack_78 = lVar11;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0b44);
            (*pcVar2)();
          }
          lVar10 = lVar13;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0b40);
            (*pcVar2)();
          }
          lStack_58 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar12);
          func_0x000107c6142c(lVar11);
          func_0x000107c6142c(lVar10);
        }
        plVar1 = (long *)(lVar8 + _DAT_112d6f630);
        lVar11 = plVar1[0xb];
        lStack_100 = plVar1[10];
        lStack_e8 = plVar1[0xd];
        lStack_f0 = plVar1[0xc];
        lVar13 = plVar1[7];
        lStack_120 = plVar1[6];
        lStack_108 = plVar1[9];
        lStack_110 = plVar1[8];
        lStack_138 = plVar1[3];
        lStack_140 = plVar1[2];
        lStack_128 = plVar1[5];
        lStack_130 = plVar1[4];
        lStack_148 = plVar1[1];
        lVar10 = *plVar1;
        lStack_150 = lVar10;
        lStack_118 = lVar13;
        lStack_f8 = lVar11;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0b4c);
            (*pcVar2)();
          }
          lVar11 = lVar10;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar10);
          if (lVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0b48);
            (*pcVar2)();
          }
          lVar13 = lVar11;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar11);
        }
        else {
          func_0x000107c61434(lVar11);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c6142c(lVar11);
        }
        if (lVar13 <= lStack_58) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c0b3c);
          (*pcVar2)();
        }
        lVar13 = *plVar6;
        lVar7 = plVar6[1];
        *plVar6 = lVar7;
        plVar6[1] = lVar13;
        if (lVar9 == 0) break;
        lVar9 = lVar9 + 1;
        plVar6 = plVar6 + -1;
      }
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1012c0b4c; end: 1012c0db3;  */

undefined8 FUN_1012c0b4c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1012c0c20;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d9c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1012c0c84:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d8c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d94);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d74);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d78);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d80);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d88);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1012c0c20:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d7c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d84);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d90);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d98);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1012c0c84;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0da0);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d68);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0db4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1012c0db4(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d6c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012c0d70);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1012c0db4; end: 1012c145b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012c0db4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar3 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar3 = lVar9;
  }
  lVar3 = lVar3 >> 3;
  lVar10 = (long)param_3 - (long)param_2;
  lVar6 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar4 = param_4 + lVar3;
    plVar11 = param_1;
    if (7 < lVar9) {
      do {
        plVar11 = param_1;
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar9 = *param_4;
        plVar11 = (long *)(lVar6 + _DAT_112d6f630);
        lStack_c8 = plVar11[3];
        lStack_d0 = plVar11[2];
        lStack_b8 = plVar11[5];
        lVar10 = plVar11[4];
        lVar15 = plVar11[1];
        lVar3 = *plVar11;
        lVar13 = plVar11[0xb];
        lStack_90 = plVar11[10];
        lVar14 = plVar11[0xd];
        lStack_80 = plVar11[0xc];
        lStack_160 = plVar11[7];
        lVar16 = plVar11[6];
        lStack_98 = plVar11[9];
        lStack_a0 = plVar11[8];
        lStack_e0 = lVar3;
        lStack_d8 = lVar15;
        lStack_c0 = lVar10;
        lStack_b0 = lVar16;
        lStack_a8 = lStack_160;
        lStack_88 = lVar13;
        lStack_78 = lVar14;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c1458);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c1450);
            (*pcVar2)();
          }
          lStack_160 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar10);
          func_0x000107c6142c(lVar16);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar13);
        }
        plVar11 = (long *)(lVar9 + _DAT_112d6f630);
        lVar10 = plVar11[0xb];
        lStack_100 = plVar11[10];
        lStack_e8 = plVar11[0xd];
        lStack_f0 = plVar11[0xc];
        lVar13 = plVar11[7];
        lStack_120 = plVar11[6];
        lStack_108 = plVar11[9];
        lStack_110 = plVar11[8];
        lStack_138 = plVar11[3];
        lStack_140 = plVar11[2];
        lStack_128 = plVar11[5];
        lStack_130 = plVar11[4];
        lStack_148 = plVar11[1];
        lVar3 = *plVar11;
        lStack_150 = lVar3;
        lStack_118 = lVar13;
        lStack_f8 = lVar10;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c1448);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c145c);
            (*pcVar2)();
          }
          lVar3 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar10);
          if (lVar3 <= lStack_160) goto LAB_1012c10c0;
LAB_1012c1034:
          plVar12 = param_2 + 1;
          plVar11 = param_4;
        }
        else {
          func_0x000107c61434(lVar10);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c6142c(lVar10);
          if (lStack_160 < lVar13) goto LAB_1012c1034;
LAB_1012c10c0:
          plVar12 = param_2;
          plVar11 = param_4 + 1;
          param_2 = param_4;
        }
        param_4 = plVar11;
        if (param_1 != param_2) {
          *param_1 = *param_2;
        }
        param_1 = param_1 + 1;
        plVar11 = param_1;
        param_2 = plVar12;
      } while (param_4 < plVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar4 = param_4 + lVar6;
    plVar11 = param_2;
    if ((param_1 < param_2) && (7 < lVar10)) {
      do {
        plVar7 = param_2 + -1;
        plVar12 = param_3;
        while( true ) {
          param_3 = plVar12 + -1;
          plVar8 = plVar4 + -1;
          lVar6 = *plVar8;
          lVar9 = *plVar7;
          plVar11 = (long *)(lVar6 + _DAT_112d6f630);
          lStack_c8 = plVar11[3];
          lStack_d0 = plVar11[2];
          lStack_b8 = plVar11[5];
          lVar10 = plVar11[4];
          lVar15 = plVar11[1];
          lVar3 = *plVar11;
          lVar13 = plVar11[0xb];
          lStack_90 = plVar11[10];
          lVar14 = plVar11[0xd];
          lStack_80 = plVar11[0xc];
          lStack_160 = plVar11[7];
          lVar16 = plVar11[6];
          lStack_98 = plVar11[9];
          lStack_a0 = plVar11[8];
          lStack_e0 = lVar3;
          lStack_d8 = lVar15;
          lStack_c0 = lVar10;
          lStack_b0 = lVar16;
          lStack_a8 = lStack_160;
          lStack_88 = lVar13;
          lStack_78 = lVar14;
          if (lStack_98 < 0) {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c1440);
              (*pcVar2)();
            }
            lVar10 = lVar3;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar3);
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c1454);
              (*pcVar2)();
            }
            lStack_160 = lVar10;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_e0);
            func_0x000107c61170(lVar10);
          }
          else {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c6142c(lVar15);
            func_0x000107c6142c(lVar10);
            func_0x000107c6142c(lVar16);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar13);
          }
          plVar11 = (long *)(lVar9 + _DAT_112d6f630);
          lVar13 = plVar11[0xb];
          lStack_100 = plVar11[10];
          lStack_e8 = plVar11[0xd];
          lStack_f0 = plVar11[0xc];
          lVar3 = plVar11[7];
          lStack_120 = plVar11[6];
          lStack_108 = plVar11[9];
          lStack_110 = plVar11[8];
          lStack_138 = plVar11[3];
          lStack_140 = plVar11[2];
          lStack_128 = plVar11[5];
          lStack_130 = plVar11[4];
          lStack_148 = plVar11[1];
          lVar10 = *plVar11;
          lStack_150 = lVar10;
          lStack_118 = lVar3;
          lStack_f8 = lVar13;
          if (lStack_108 < 0) {
            func_0x000107c61174();
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c144c);
              (*pcVar2)();
            }
            lVar13 = lVar10;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar10);
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012c1444);
              (*pcVar2)();
            }
            lVar3 = lVar13;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_150);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar13);
          }
          else {
            func_0x000107c61434(lVar13);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c6142c(lVar13);
          }
          if (lStack_160 < lVar3) break;
          if (plVar12 != plVar4) {
            *param_3 = *plVar8;
          }
          plVar4 = plVar8;
          plVar11 = param_2;
          plVar12 = param_3;
          if (plVar8 <= param_4) goto LAB_1012c13cc;
        }
        if (plVar12 != param_2) {
          *param_3 = *plVar7;
        }
        plVar11 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar4));
    }
  }
LAB_1012c13cc:
  uVar5 = (long)plVar4 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar11 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar11)) {
    func_0x000107c610b8(plVar11,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1012c145c; end: 1012c149b;  */

void FUN_1012c145c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012c149c; end: 1012c14b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c149c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d6fbd0);
    func_0x000107c6157c(uVar2);
    FUN_1012b2454(param_1,param_2);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1012c14b4; end: 1012c14e7;  */

void FUN_1012c14b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012c14e8; end: 1012c14fb;  */

void FUN_1012c14e8(long param_1,long param_2)

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



/* Entry: 1012c14fc; end: 1012c151b; -[SCProfileCalendarCountdownViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c14fc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6fc40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c151c; end: 1012c154f; -[SCProfileCalendarCountdownViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c151c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6fc40);
  *(undefined8 *)(param_1 + _DAT_112d6fc40) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012c1550; end: 1012c163b; -[SCProfileCalendarCountdownViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c1550(long param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = _DAT_112d6fc48;
  func_0x000107c61428(param_1 + _DAT_112d6fc48,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar3,auStack_60);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1012c163c; end: 1012c170b; -[SCProfileCalendarCountdownViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c163c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  lVar1 = _DAT_112d6fc48;
  func_0x000107c61428(param_1 + _DAT_112d6fc48,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar1,auStack_60);
  func_0x000107c61428(param_1 + lVar1,auStack_90,0x21,0);
  FUN_1012c2668(&uStack_40,param_1 + lVar1);
  func_0x000107c614a8(auStack_90);
  FUN_1012c170c(auStack_60);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(auStack_60);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 1012c170c; end: 1012c183b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c170c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = _DAT_112d6fc48;
  uVar5 = 0;
  uVar6 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6fc48,auStack_78,0,0);
  func_0x000100672b50(unaff_x20 + lVar2,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
LAB_1012c17f0:
    *(undefined1 *)(unaff_x20 + _DAT_112d6fc58) = 0;
    return;
  }
  uVar4 = 0;
  FUN_1012b6ff4(0);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&uStack_80,auStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
  uVar3 = uStack_80;
  if ((uVar5 & 1) == 0) goto LAB_1012c17f0;
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    func_0x000107c6147c(&uStack_80,auStack_60,puVar1 + 8,uVar4,6);
    if ((uVar6 & 1) != 0) {
      uVar5 = uVar3;
      FUN_1012b7014();
      func_0x000107c61170(uStack_80);
      if ((uVar5 & 1) != 0) goto LAB_1012c181c;
    }
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d6fc58) = 0;
  FUN_1012c183c(uVar3);
LAB_1012c181c:
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1012c183c; end: 1012c205b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c183c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long unaff_x20;
  undefined8 uVar23;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar5 = _DAT_112d6fc50;
  if (*(long *)(unaff_x20 + _DAT_112d6fc50) != 0) {
    func_0x000107c4ff34();
  }
  lVar6 = *(long *)(param_5 + _DAT_112d6f880);
  if (lVar6 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      if (lVar7 != 0) {
        uVar23 = *(undefined8 *)(param_5 + _DAT_112d6f850);
        uVar1 = ((undefined8 *)(param_5 + _DAT_112d6f850))[1];
        uVar9 = *(undefined8 *)(param_5 + _DAT_112d6f858);
        uVar2 = ((undefined8 *)(param_5 + _DAT_112d6f858))[1];
        uVar10 = *(undefined8 *)(param_5 + _DAT_112d6f860);
        uVar3 = ((undefined8 *)(param_5 + _DAT_112d6f860))[1];
        lVar6 = *(long *)(param_5 + _DAT_112d6f918);
        uVar11 = *(undefined8 *)(param_5 + _DAT_112d6f868);
        uVar4 = ((undefined8 *)(param_5 + _DAT_112d6f868))[1];
        puVar8 = PTR_PTR_1126b0c88;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar23,uVar1);
        func_0x000107c5fadc(uVar9,uVar2);
        func_0x000107c5fadc(uVar10,uVar3);
        func_0x000107c5fadc(uVar11,uVar4);
        func_0x000107c46204((double)lVar6);
        func_0x000107c61170(uVar23);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar11);
        puVar12 = PTR_PTR_1126b0ca0;
        func_0x000107c610f8(PTR_PTR_1126b0ca0);
        func_0x000107c453e4();
        lVar6 = *(long *)(param_5 + _DAT_112d6f888);
        if (lVar6 != 0) {
          puVar13 = PTR_PTR_1126b0c98;
          func_0x000107c610f8(PTR_PTR_1126b0c98);
          func_0x000107c61174();
          func_0x000107c47f1c(puVar13);
          lVar14 = lVar6;
          func_0x000107c439dc();
          func_0x000107c61180();
          lVar15 = lVar14;
          (**(code **)(lVar14 + 0x10))();
          func_0x000107c61180();
          func_0x000107c60bd0(lVar14);
          lVar14 = lVar15;
          func_0x000107c5c734(lVar15);
          func_0x000107c61180();
          func_0x000107c61170(lVar15);
          func_0x000107c54c28(puVar12);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(puVar13);
          func_0x000107c615e8(lVar14);
        }
        puVar13 = &UNK_11039d660;
        func_0x000107c613fc(&UNK_11039d660,0x18,7);
        func_0x000107c61614(puVar13 + 0x10,unaff_x20);
        pcStack_90 = FUN_1012c26b8;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uVar23 = 0x42000000;
        uStack_a8 = 0x42000000;
        pcStack_a0 = FUN_100c75f50;
        puStack_98 = &UNK_11039d678;
        ppuVar16 = &puStack_b0;
        puStack_88 = puVar13;
        func_0x000107c60bc4(ppuVar16);
        func_0x000107c61574(puStack_88);
        func_0x000107c56dd0(puVar12);
        func_0x000107c60bd0(ppuVar16);
        puVar13 = PTR_PTR_1126b0c90;
        func_0x000107c610f8();
        func_0x000107c49520();
        func_0x000107c3ec60(unaff_x20);
        puVar17 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8();
        func_0x000107c469a4(uVar23,param_2,param_3,param_4);
        puVar18 = puVar17;
        func_0x000107c4aba4();
        func_0x000107c61180();
        func_0x000107c539d4(0x4024000000000000);
        func_0x000107c61170(puVar18);
        puVar18 = puVar17;
        func_0x000107c4aba4(puVar17);
        func_0x000107c61180();
        func_0x000107c562fc();
        func_0x000107c61170(puVar18);
        lVar6 = unaff_x20;
        func_0x000107c40510(unaff_x20);
        func_0x000107c61180();
        func_0x000107c3d89c();
        func_0x000107c61170(lVar6);
        func_0x000107c5a050(puVar17);
        puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168();
        puVar19 = puVar18;
        func_0x0001008478a8();
        puVar20 = puVar19;
        func_0x000107c613fc();
        *(undefined8 *)(puVar20 + 0x18) = 9;
        *(undefined8 *)(puVar20 + 0x10) = 4;
        puVar21 = puVar17;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        lVar6 = unaff_x20;
        func_0x000107c40510(unaff_x20);
        func_0x000107c61180();
        lVar14 = lVar6;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        puVar22 = puVar21;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        func_0x000107c61170(lVar14);
        *(undefined **)(puVar20 + 0x20) = puVar22;
        puVar21 = puVar17;
        func_0x000107c4acb0();
        func_0x000107c61180();
        lVar6 = unaff_x20;
        func_0x000107c40510(unaff_x20);
        func_0x000107c61180();
        lVar14 = lVar6;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        puVar22 = puVar21;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        func_0x000107c61170(lVar14);
        *(undefined **)(puVar20 + 0x28) = puVar22;
        puVar21 = puVar17;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar6 = unaff_x20;
        func_0x000107c40510(unaff_x20);
        func_0x000107c61180();
        lVar14 = lVar6;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        puVar22 = puVar21;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        func_0x000107c61170(lVar14);
        *(undefined **)(puVar20 + 0x30) = puVar22;
        puVar21 = puVar17;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        lVar6 = unaff_x20;
        func_0x000107c40510(unaff_x20);
        func_0x000107c61180();
        lVar14 = lVar6;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        puVar22 = puVar21;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        func_0x000107c61170(lVar14);
        *(undefined **)(puVar20 + 0x38) = puVar22;
        uVar23 = 0;
        func_0x000100847984(0);
        puVar21 = puVar20;
        func_0x000107c5fc48(puVar20,uVar23);
        func_0x000107c61574(puVar20);
        func_0x000107c3d048(puVar18);
        func_0x000107c61170(puVar21);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c3d89c(puVar17);
        func_0x000107c5a050(puVar13);
        func_0x000107c613fc(puVar19,((ulong)*(uint *)(puVar19 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                            *(ushort *)(puVar19 + 0x34) | 7);
        *(undefined8 *)(puVar19 + 0x18) = 9;
        *(undefined8 *)(puVar19 + 0x10) = 4;
        puVar20 = puVar13;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        puVar21 = puVar17;
        func_0x000107c5cbe4(puVar17);
        func_0x000107c61180();
        puVar22 = puVar20;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar21);
        *(undefined **)(puVar19 + 0x20) = puVar22;
        puVar20 = puVar13;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        puVar21 = puVar17;
        func_0x000107c4acb0(puVar17);
        func_0x000107c61180();
        puVar22 = puVar20;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar21);
        *(undefined **)(puVar19 + 0x28) = puVar22;
        puVar20 = puVar13;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        puVar22 = puVar17;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        puVar21 = puVar20;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar22);
        *(undefined **)(puVar19 + 0x30) = puVar21;
        puVar22 = puVar13;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        puVar21 = puVar17;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        puVar20 = puVar22;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar22);
        func_0x000107c61170(puVar21);
        *(undefined **)(puVar19 + 0x38) = puVar20;
        puVar20 = puVar19;
        func_0x000107c5fc48(puVar19,uVar23);
        func_0x000107c61574(puVar19);
        func_0x000107c3d048(puVar18);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar13);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar8);
        uVar23 = *(undefined8 *)(unaff_x20 + lVar5);
        *(undefined **)(unaff_x20 + lVar5) = puVar17;
        func_0x000107c61170(uVar23);
      }
    }
  }
  return;
}



/* Entry: 1012c205c; end: 1012c20c7; +[SCProfileCalendarCountdownViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1012c205c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_4);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_4);
  }
  func_0x00010006e7f4(&uStack_50);
  auVar1._8_8_ = 0x4050000000000000;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1012c20c8; end: 1012c21cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c20c8(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong unaff_x20;
  long lVar5;
  code *pcVar6;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = _DAT_112d6fc58;
  lVar5 = _DAT_112d6fc48;
  uVar4 = 0;
  if ((*(byte *)(unaff_x20 + _DAT_112d6fc58) & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d6fc48,auStack_68,0,0);
    func_0x000100672b50(unaff_x20 + lVar5,auStack_50);
    if (lStack_38 == 0) {
      func_0x00010006e7f4(auStack_50);
    }
    else {
      uVar3 = 0;
      FUN_1012b6ff4(0);
      func_0x000107c6147c(&lStack_70,auStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if ((uVar4 & 1) != 0) {
        plVar1 = (long *)(lStack_70 + _DAT_112d6f890);
        if ((*plVar1 != 0) && (uVar4 = unaff_x20, FUN_1012ae800(), (uVar4 & 1) != 0)) {
          *(undefined1 *)(unaff_x20 + lVar2) = 1;
          pcVar6 = (code *)*plVar1;
          if (pcVar6 != (code *)0x0) {
            lVar5 = plVar1[1];
            func_0x000107c6157c(lVar5);
            (*pcVar6)();
            func_0x000107c61170(lStack_70);
            func_0x00010058d43c(pcVar6,lVar5);
            return;
          }
        }
        func_0x000107c61170(lStack_70);
      }
    }
  }
  return;
}



/* Entry: 1012c21d0; end: 1012c2303; -[SCProfileCalendarCountdownViewCell layoutSubviews] */

void FUN_1012c21d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1012c20c8();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012c2304; end: 1012c2457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c2304(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112d6fc48;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112d6fc48,auStack_80,0,0);
    func_0x000100672b50(param_1 + lVar3,auStack_68);
    if (lStack_50 == 0) {
      func_0x000107c61170(param_1);
      func_0x00010006e7f4(auStack_68);
    }
    else {
      uVar1 = 0;
      FUN_1012b6ff4(0);
      plVar2 = &lStack_88;
      func_0x000107c6147c(plVar2,auStack_68,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if (((ulong)plVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + _DAT_112d6fc40);
        if (lVar3 != 0) {
          uVar1 = *(undefined8 *)(lStack_88 + _DAT_112d6f870);
          func_0x000107c61174(param_1);
          func_0x000107c61174();
          func_0x000107c615f0(lVar3);
          func_0x000107c61174(uVar1);
          func_0x000107c445ac(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_1);
        }
        func_0x000107c61170(param_1);
        param_1 = lStack_88;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1012c2458; end: 1012c24fb; -[SCProfileCalendarCountdownViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c2458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112d6fc40) = 0;
  puVar1 = (undefined8 *)(param_5 + _DAT_112d6fc48);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(param_5 + _DAT_112d6fc50) = 0;
  *(undefined1 *)(param_5 + _DAT_112d6fc58) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1012c24fc; end: 1012c25a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1012c24fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d6fc40) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6fc48);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6fc50) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6fc58) = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2;
}



/* Entry: 1012c25a4; end: 1012c25cb; -[SCProfileCalendarCountdownViewCell initWithCoder:] */

void FUN_1012c25a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1012c24fc();
  return;
}



/* Entry: 1012c25cc; end: 1012c25ff;  */

void FUN_1012c25cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012c2600; end: 1012c2647; -[SCProfileCalendarCountdownViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c2600(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fc40));
  func_0x00010006e7f4(param_1 + _DAT_112d6fc48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6fc50));
  return;
}



/* Entry: 1012c2648; end: 1012c2667;  */

void FUN_1012c2648(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3e28);
  return;
}



/* Entry: 1012c2668; end: 1012c26b7;  */

undefined8 FUN_1012c2668(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1012c26b8; end: 1012c26eb;  */

void FUN_1012c26b8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039d660;
    func_0x000107c613fc(&UNK_11039d660,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    uStack_48 = 0x1012c26dc;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_11039d6a0;
    ppuVar3 = &puStack_68;
    puStack_40 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10d9313a0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012c26ec; end: 1012c270b; -[SCProfileCalendarCreateCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c26ec(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6fc88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c270c; end: 1012c273f; -[SCProfileCalendarCreateCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c270c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6fc88);
  *(undefined8 *)(param_1 + _DAT_112d6fc88) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012c2740; end: 1012c282b; -[SCProfileCalendarCreateCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c2740(long param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = _DAT_112d6fc90;
  func_0x000107c61428(param_1 + _DAT_112d6fc90,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar3,auStack_60);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1012c282c; end: 1012c28fb; -[SCProfileCalendarCreateCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c282c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  lVar1 = _DAT_112d6fc90;
  func_0x000107c61428(param_1 + _DAT_112d6fc90,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar1,auStack_60);
  func_0x000107c61428(param_1 + lVar1,auStack_90,0x21,0);
  FUN_1012c2668(&uStack_40,param_1 + lVar1);
  func_0x000107c614a8(auStack_90);
  FUN_1012c28fc(auStack_60);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(auStack_60);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 1012c28fc; end: 1012c2a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c28fc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = _DAT_112d6fc90;
  uVar5 = 0;
  uVar6 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6fc90,auStack_78,0,0);
  func_0x000100672b50(unaff_x20 + lVar2,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return;
  }
  uVar4 = 0;
  FUN_1012b7240(0);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&uStack_80,auStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
  uVar3 = uStack_80;
  if ((uVar5 & 1) == 0) {
    return;
  }
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    func_0x000107c6147c(&uStack_80,auStack_60,puVar1 + 8,uVar4,6);
    if ((uVar6 & 1) != 0) {
      uVar5 = uVar3;
      FUN_1012b7260();
      func_0x000107c61170(uStack_80);
      if ((uVar5 & 1) != 0) goto LAB_1012c29f4;
    }
  }
  FUN_1012c2a14(uVar3);
LAB_1012c29f4:
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1012c2a14; end: 1012c3127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c2a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar2 = _DAT_112d6fc98;
  if (*(long *)(unaff_x20 + _DAT_112d6fc98) != 0) {
    func_0x000107c4ff34();
  }
  lVar3 = *(long *)(param_5 + _DAT_112d6f8c0);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar4 != 0) {
        uVar17 = *(undefined8 *)(param_5 + _DAT_112d6f898);
        uVar1 = ((undefined8 *)(param_5 + _DAT_112d6f898))[1];
        lVar3 = ((undefined8 *)(param_5 + _DAT_112d6f8a0))[1];
        if (lVar3 == 0) {
          uVar16 = 0;
          lVar15 = -0x2000000000000000;
        }
        else {
          uVar16 = *(undefined8 *)(param_5 + _DAT_112d6f8a0);
          lVar15 = lVar3;
        }
        puVar5 = PTR_PTR_1126a68e0;
        func_0x000107c610f8();
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar17,uVar1);
        func_0x000107c5fadc(uVar16,lVar15);
        func_0x000107c6142c(lVar15);
        func_0x000107c48cb0();
        func_0x000107c61170(uVar17);
        func_0x000107c61170(uVar16);
        puVar6 = PTR_PTR_1126a68e8;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar7 = &UNK_11039d6d8;
        func_0x000107c613fc(&UNK_11039d6d8,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        pcStack_90 = FUN_1012c35b8;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uVar17 = 0x42000000;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1000f6b44;
        puStack_98 = &UNK_11039d6f0;
        ppuVar8 = &puStack_b0;
        puStack_88 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_88);
        func_0x000107c56ea0(puVar6);
        func_0x000107c60bd0(ppuVar8);
        puVar7 = PTR_PTR_1126a68f0;
        func_0x000107c610f8();
        func_0x000107c49520();
        func_0x000107c3ec60();
        puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8();
        func_0x000107c469a4(uVar17,param_2,param_3,param_4);
        puVar10 = puVar9;
        func_0x000107c4aba4();
        func_0x000107c61180();
        func_0x000107c539d4(0x4024000000000000);
        func_0x000107c61170(puVar10);
        puVar10 = puVar9;
        func_0x000107c4aba4(puVar9);
        func_0x000107c61180();
        func_0x000107c562fc();
        func_0x000107c61170(puVar10);
        lVar3 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        func_0x000107c3d89c();
        func_0x000107c61170(lVar3);
        func_0x000107c5a050(puVar9);
        puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168();
        puVar11 = puVar10;
        func_0x0001008478a8();
        puVar12 = puVar11;
        func_0x000107c613fc();
        *(undefined8 *)(puVar12 + 0x18) = 9;
        *(undefined8 *)(puVar12 + 0x10) = 4;
        puVar13 = puVar9;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        lVar3 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar3;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        puVar14 = puVar13;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar12 + 0x20) = puVar14;
        puVar13 = puVar9;
        func_0x000107c4acb0();
        func_0x000107c61180();
        lVar3 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar3;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        puVar14 = puVar13;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar12 + 0x28) = puVar14;
        puVar13 = puVar9;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar3 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar3;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        puVar14 = puVar13;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar12 + 0x30) = puVar14;
        puVar13 = puVar9;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        lVar3 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar3;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        puVar14 = puVar13;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar12 + 0x38) = puVar14;
        uVar17 = 0;
        func_0x000100847984(0);
        puVar13 = puVar12;
        func_0x000107c5fc48(puVar12,uVar17);
        func_0x000107c61574(puVar12);
        func_0x000107c3d048(puVar10);
        func_0x000107c61170(puVar13);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c3d89c(puVar9);
        func_0x000107c5a050(puVar7);
        func_0x000107c613fc(puVar11,((ulong)*(uint *)(puVar11 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                            *(ushort *)(puVar11 + 0x34) | 7);
        *(undefined8 *)(puVar11 + 0x18) = 9;
        *(undefined8 *)(puVar11 + 0x10) = 4;
        puVar12 = puVar7;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        puVar13 = puVar9;
        func_0x000107c5cbe4(puVar9);
        func_0x000107c61180();
        puVar14 = puVar12;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar13);
        *(undefined **)(puVar11 + 0x20) = puVar14;
        puVar12 = puVar7;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar13 = puVar9;
        func_0x000107c4acb0();
        func_0x000107c61180();
        puVar14 = puVar12;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar13);
        *(undefined **)(puVar11 + 0x28) = puVar14;
        puVar12 = puVar7;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar13 = puVar9;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        puVar14 = puVar12;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar13);
        *(undefined **)(puVar11 + 0x30) = puVar14;
        puVar12 = puVar7;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar13 = puVar9;
        func_0x000107c3ec1c(puVar9);
        func_0x000107c61180();
        puVar14 = puVar12;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar13);
        *(undefined **)(puVar11 + 0x38) = puVar14;
        puVar12 = puVar11;
        func_0x000107c5fc48(puVar11,uVar17);
        func_0x000107c61574(puVar11);
        func_0x000107c3d048(puVar10);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        uVar17 = *(undefined8 *)(unaff_x20 + lVar2);
        *(undefined **)(unaff_x20 + lVar2) = puVar9;
        func_0x000107c61170(uVar17);
      }
    }
  }
  return;
}



/* Entry: 1012c3128; end: 1012c3193; +[SCProfileCalendarCreateCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1012c3128(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_4);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_4);
  }
  func_0x00010006e7f4(&uStack_50);
  auVar1._8_8_ = 0x404c000000000000;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1012c3194; end: 1012c326b;  */

void FUN_1012c3194(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_11039d6d8;
    func_0x000107c613fc(&UNK_11039d6d8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    uStack_48 = 0x1012c35dc;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_11039d718;
    ppuVar2 = &puStack_68;
    puStack_40 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10d9313f0,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012c326c; end: 1012c33bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c326c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112d6fc90;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112d6fc90,auStack_80,0,0);
    func_0x000100672b50(param_1 + lVar3,auStack_68);
    if (lStack_50 == 0) {
      func_0x000107c61170(param_1);
      func_0x00010006e7f4(auStack_68);
    }
    else {
      uVar1 = 0;
      FUN_1012b7240(0);
      plVar2 = &lStack_88;
      func_0x000107c6147c(plVar2,auStack_68,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if (((ulong)plVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + _DAT_112d6fc88);
        if (lVar3 != 0) {
          uVar1 = *(undefined8 *)(lStack_88 + _DAT_112d6f8a8);
          func_0x000107c61174(param_1);
          func_0x000107c61174();
          func_0x000107c615f0(lVar3);
          func_0x000107c61174(uVar1);
          func_0x000107c445ac(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_1);
        }
        func_0x000107c61170(param_1);
        param_1 = lStack_88;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1012c33c0; end: 1012c3457; -[SCProfileCalendarCreateCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c33c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112d6fc88) = 0;
  puVar1 = (undefined8 *)(param_5 + _DAT_112d6fc90);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(param_5 + _DAT_112d6fc98) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1012c3458; end: 1012c34f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1012c3458(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d6fc88) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6fc90);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6fc98) = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2;
}



/* Entry: 1012c34f4; end: 1012c351b; -[SCProfileCalendarCreateCell initWithCoder:] */

void FUN_1012c34f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1012c3458();
  return;
}



/* Entry: 1012c351c; end: 1012c354f;  */

void FUN_1012c351c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012c3550; end: 1012c3597; -[SCProfileCalendarCreateCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c3550(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fc88));
  func_0x00010006e7f4(param_1 + _DAT_112d6fc90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6fc98));
  return;
}



/* Entry: 1012c3598; end: 1012c35b7;  */

void FUN_1012c3598(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3ef8);
  return;
}



/* Entry: 1012c35b8; end: 1012c35eb;  */

void FUN_1012c35b8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039d6d8;
    func_0x000107c613fc(&UNK_11039d6d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    uStack_48 = 0x1012c35dc;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_11039d718;
    ppuVar3 = &puStack_68;
    puStack_40 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10d9313f0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012c35ec; end: 1012c360b; -[SCProfileCalendarEventViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c35ec(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6fcc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012c360c; end: 1012c363f; -[SCProfileCalendarEventViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c360c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6fcc8);
  *(undefined8 *)(param_1 + _DAT_112d6fcc8) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012c3640; end: 1012c372b; -[SCProfileCalendarEventViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c3640(long param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = _DAT_112d6fcd0;
  func_0x000107c61428(param_1 + _DAT_112d6fcd0,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar3,auStack_60);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1012c372c; end: 1012c37fb; -[SCProfileCalendarEventViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c372c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  lVar1 = _DAT_112d6fcd0;
  func_0x000107c61428(param_1 + _DAT_112d6fcd0,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar1,auStack_60);
  func_0x000107c61428(param_1 + lVar1,auStack_90,0x21,0);
  FUN_1012c2668(&uStack_40,param_1 + lVar1);
  func_0x000107c614a8(auStack_90);
  FUN_1012c37fc(auStack_60);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(auStack_60);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 1012c37fc; end: 1012c3973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c37fc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = _DAT_112d6fcd0;
  uVar4 = 0;
  uVar5 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6fcd0,auStack_78,0,0);
  func_0x000100672b50(unaff_x20 + lVar2,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return;
  }
  uVar3 = 0;
  FUN_1012b6efc(0);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&lStack_80,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
  lVar2 = lStack_80;
  if ((uVar4 & 1) == 0) {
    return;
  }
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    func_0x000107c6147c(&lStack_80,auStack_60,puVar1 + 8,uVar3,6);
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)(lStack_80 + _DAT_112d6f828);
      if (((uVar4 == *(ulong *)(lVar2 + _DAT_112d6f828) &&
            ((ulong *)(lStack_80 + _DAT_112d6f828))[1] == ((ulong *)(lVar2 + _DAT_112d6f828))[1]) ||
          (func_0x000107c605b8(), (uVar4 & 1) != 0)) &&
         (*(long *)(lStack_80 + _DAT_112d6f8e0) == *(long *)(lVar2 + _DAT_112d6f8e0))) {
        lVar6 = *(long *)(lStack_80 + _DAT_112d6f8e8);
        func_0x000107c61170(lStack_80);
        if (lVar6 == *(long *)(lVar2 + _DAT_112d6f8e8)) goto LAB_1012c3954;
      }
      else {
        func_0x000107c61170(lStack_80);
      }
    }
  }
  FUN_1012c3974(lVar2);
LAB_1012c3954:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1012c3974; end: 1012c40a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c3974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long unaff_x20;
  undefined8 uVar17;
  double dVar18;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar2 = _DAT_112d6fcd8;
  if (*(long *)(unaff_x20 + _DAT_112d6fcd8) != 0) {
    func_0x000107c4ff34();
  }
  lVar4 = *(long *)(param_5 + _DAT_112d6f840);
  if (lVar4 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar5 != 0) {
        lVar4 = *(long *)(param_5 + _DAT_112d6f8e0) * 1000;
        if (SUB168(SEXT816(*(long *)(param_5 + _DAT_112d6f8e0)) * SEXT816(1000),8) != lVar4 >> 0x3f)
        {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012c40a8);
          (*pcVar3)();
        }
        uVar17 = *(undefined8 *)(param_5 + _DAT_112d6f828);
        uVar1 = ((undefined8 *)(param_5 + _DAT_112d6f828))[1];
        dVar18 = (double)*(long *)(param_5 + _DAT_112d6f8e8);
        puVar6 = PTR_PTR_1126a68f8;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar17,uVar1);
        func_0x000107c48d78((double)lVar4,dVar18);
        func_0x000107c61170(uVar17);
        uVar17 = *(undefined8 *)(param_5 + _DAT_112d6f848);
        func_0x000107c5fadc(uVar17,((undefined8 *)(param_5 + _DAT_112d6f848))[1]);
        func_0x000107c5a170(puVar6);
        func_0x000107c61170(uVar17);
        puVar7 = PTR_PTR_1126a6900;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar8 = &UNK_11039d750;
        func_0x000107c613fc(&UNK_11039d750,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        pcStack_90 = FUN_1012c4538;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uVar17 = 0x42000000;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1000f6b44;
        puStack_98 = &UNK_11039d768;
        ppuVar9 = &puStack_b0;
        puStack_88 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_88);
        func_0x000107c56dd4(puVar7);
        func_0x000107c60bd0(ppuVar9);
        puVar8 = PTR_PTR_1126a6908;
        func_0x000107c610f8();
        func_0x000107c49520();
        func_0x000107c3ec60();
        puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8();
        func_0x000107c469a4(uVar17,dVar18,param_3,param_4);
        puVar11 = puVar10;
        func_0x000107c4aba4();
        func_0x000107c61180();
        func_0x000107c539d4(0x4024000000000000);
        func_0x000107c61170(puVar11);
        puVar11 = puVar10;
        func_0x000107c4aba4(puVar10);
        func_0x000107c61180();
        func_0x000107c562fc();
        func_0x000107c61170(puVar11);
        lVar4 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        func_0x000107c3d89c();
        func_0x000107c61170(lVar4);
        func_0x000107c5a050(puVar10);
        puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168();
        puVar12 = puVar11;
        func_0x0001008478a8();
        puVar13 = puVar12;
        func_0x000107c613fc();
        *(undefined8 *)(puVar13 + 0x18) = 9;
        *(undefined8 *)(puVar13 + 0x10) = 4;
        puVar14 = puVar10;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        lVar4 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar4;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        puVar16 = puVar14;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar13 + 0x20) = puVar16;
        puVar14 = puVar10;
        func_0x000107c4acb0();
        func_0x000107c61180();
        lVar4 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar4;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        puVar16 = puVar14;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar13 + 0x28) = puVar16;
        puVar14 = puVar10;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar4 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar4;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        puVar16 = puVar14;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar13 + 0x30) = puVar16;
        puVar14 = puVar10;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        lVar4 = unaff_x20;
        func_0x000107c40510();
        func_0x000107c61180();
        lVar15 = lVar4;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        puVar16 = puVar14;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lVar15);
        *(undefined **)(puVar13 + 0x38) = puVar16;
        uVar17 = 0;
        func_0x000100847984(0);
        puVar14 = puVar13;
        func_0x000107c5fc48(puVar13,uVar17);
        func_0x000107c61574(puVar13);
        func_0x000107c3d048(puVar11);
        func_0x000107c61170(puVar14);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c3d89c(puVar10);
        func_0x000107c5a050(puVar8);
        func_0x000107c613fc(puVar12,((ulong)*(uint *)(puVar12 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                            *(ushort *)(puVar12 + 0x34) | 7);
        *(undefined8 *)(puVar12 + 0x18) = 9;
        *(undefined8 *)(puVar12 + 0x10) = 4;
        puVar13 = puVar8;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        puVar14 = puVar10;
        func_0x000107c5cbe4(puVar10);
        func_0x000107c61180();
        puVar16 = puVar13;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar14);
        *(undefined **)(puVar12 + 0x20) = puVar16;
        puVar14 = puVar8;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar16 = puVar10;
        func_0x000107c4acb0();
        func_0x000107c61180();
        puVar13 = puVar14;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar16);
        *(undefined **)(puVar12 + 0x28) = puVar13;
        puVar13 = puVar8;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar16 = puVar10;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        puVar14 = puVar13;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar16);
        *(undefined **)(puVar12 + 0x30) = puVar14;
        puVar13 = puVar8;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar14 = puVar10;
        func_0x000107c3ec1c(puVar10);
        func_0x000107c61180();
        puVar16 = puVar13;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar14);
        *(undefined **)(puVar12 + 0x38) = puVar16;
        puVar13 = puVar12;
        func_0x000107c5fc48(puVar12,uVar17);
        func_0x000107c61574(puVar12);
        func_0x000107c3d048(puVar11);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        uVar17 = *(undefined8 *)(unaff_x20 + lVar2);
        *(undefined **)(unaff_x20 + lVar2) = puVar10;
        func_0x000107c61170(uVar17);
      }
    }
  }
  return;
}



/* Entry: 1012c40a8; end: 1012c4113; +[SCProfileCalendarEventViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1012c40a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_4);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_4);
  }
  func_0x00010006e7f4(&uStack_50);
  auVar1._8_8_ = 0x4050000000000000;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1012c4114; end: 1012c41eb;  */

void FUN_1012c4114(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_11039d750;
    func_0x000107c613fc(&UNK_11039d750,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    uStack_48 = 0x1012c455c;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_11039d790;
    ppuVar2 = &puStack_68;
    puStack_40 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10d931430,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012c41ec; end: 1012c433f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c41ec(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112d6fcd0;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112d6fcd0,auStack_80,0,0);
    func_0x000100672b50(param_1 + lVar3,auStack_68);
    if (lStack_50 == 0) {
      func_0x000107c61170(param_1);
      func_0x00010006e7f4(auStack_68);
    }
    else {
      uVar1 = 0;
      FUN_1012b6efc(0);
      plVar2 = &lStack_88;
      func_0x000107c6147c(plVar2,auStack_68,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if (((ulong)plVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + _DAT_112d6fcc8);
        if (lVar3 != 0) {
          uVar1 = *(undefined8 *)(lStack_88 + _DAT_112d6f830);
          func_0x000107c61174(param_1);
          func_0x000107c61174();
          func_0x000107c615f0(lVar3);
          func_0x000107c61174(uVar1);
          func_0x000107c445ac(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_1);
        }
        func_0x000107c61170(param_1);
        param_1 = lStack_88;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1012c4340; end: 1012c43d7; -[SCProfileCalendarEventViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c4340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112d6fcc8) = 0;
  puVar1 = (undefined8 *)(param_5 + _DAT_112d6fcd0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(param_5 + _DAT_112d6fcd8) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1012c43d8; end: 1012c4473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1012c43d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d6fcc8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6fcd0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6fcd8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2;
}



/* Entry: 1012c4474; end: 1012c449b; -[SCProfileCalendarEventViewCell initWithCoder:] */

void FUN_1012c4474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1012c43d8();
  return;
}



/* Entry: 1012c449c; end: 1012c44cf;  */

void FUN_1012c449c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012c44d0; end: 1012c4517; -[SCProfileCalendarEventViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012c44d0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fcc8));
  func_0x00010006e7f4(param_1 + _DAT_112d6fcd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6fcd8));
  return;
}



/* Entry: 1012c4518; end: 1012c4537;  */

void FUN_1012c4518(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3fc0);
  return;
}



/* Entry: 1012c4538; end: 1012c456b;  */

void FUN_1012c4538(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039d750;
    func_0x000107c613fc(&UNK_11039d750,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    uStack_48 = 0x1012c455c;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_11039d790;
    ppuVar3 = &puStack_68;
    puStack_40 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10d931430,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012c456c; end: 1012c4697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1012c456c(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffd0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d6fd08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6fd10) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6fd18) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6fd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6fd28);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  func_0x0001012c4618();
  func_0x000107c61170(puVar2);
  return puVar2;
}


