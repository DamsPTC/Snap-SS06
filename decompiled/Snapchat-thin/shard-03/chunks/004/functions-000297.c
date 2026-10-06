/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028af7e8; end: 1028af7ff; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028af7fc) */

void FUN_1028af7e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028af800; end: 1028af8b7;  */

/* WARNING: Possible PIC construction at 0x0001028af830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028af874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028af834) */
/* WARNING: Removing unreachable block (ram,0x0001028af844) */
/* WARNING: Removing unreachable block (ram,0x0001028af84c) */
/* WARNING: Removing unreachable block (ram,0x0001028af864) */
/* WARNING: Removing unreachable block (ram,0x0001028af878) */
/* WARNING: Removing unreachable block (ram,0x0001028af87c) */
/* WARNING: Removing unreachable block (ram,0x0001028af8a0) */
/* WARNING: Removing unreachable block (ram,0x0001028af894) */
/* WARNING: Removing unreachable block (ram,0x0001028af8a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028af800(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112ec7920;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112ec7920) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1028af8b8; end: 1028af8eb; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin dismissPresentedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028af8b8(long param_1)

{
  func_0x000107c61174();
  FUN_1028af800();
  *(undefined1 *)(param_1 + _DAT_112ec7940) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028af8ec; end: 1028afa57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028af8ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((*(byte *)(param_3 + _DAT_112ec7940) & 1) == 0) {
      *(undefined1 *)(param_3 + _DAT_112ec7940) = 1;
      func_0x000107c5c6c0();
      func_0x000107c61180();
      puVar1 = &UNK_110561530;
      func_0x000107c613fc(&UNK_110561530,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_3);
      puVar2 = &UNK_110561620;
      func_0x000107c613fc(&UNK_110561620,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_4;
      pcStack_68 = FUN_1028b1814;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_10283706c;
      puStack_70 = &UNK_110561638;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c61174(param_4);
      func_0x000107c61574(puVar1);
      uVar4 = param_5;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_5);
      *(undefined8 *)(param_3 + _DAT_112ec7920) = uVar4;
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028afa58; end: 1028afb77;  */

void FUN_1028afa58(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_110561530;
  func_0x000107c613fc(&UNK_110561530,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar2 = &UNK_110561670;
  func_0x000107c613fc(&UNK_110561670,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar1 = &UNK_110561698;
  func_0x000107c613fc(&UNK_110561698,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dae9f08;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  uVar3 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,4,0,0,&UNK_10dae9f18,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 1028afb78; end: 1028afbe7;  */

void FUN_1028afb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028afbe8,uVar1,uVar2);
  return;
}



/* Entry: 1028afbe8; end: 1028afd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028afbe8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar6 + 0x10,lVar5,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar2 = lVar6;
    if (*(char *)(lVar6 + _DAT_112ec7940) == '\x01') {
      lVar2 = *(long *)(unaff_x22 + 0x30);
      lVar4 = *(long *)(unaff_x22 + 0x38);
      uVar1 = *(undefined8 *)(lVar6 + _DAT_112ec7920);
      *(undefined8 *)(lVar6 + _DAT_112ec7920) = 0;
      func_0x000107c61170(uVar1);
      func_0x000107c406c0(lVar2);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x0001070b2918();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61174(lVar3);
      func_0x000107c4cde0();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar5);
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
      lVar2 = lVar3;
      func_0x0001070b210c(lVar3,lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      FUN_1028afd38(uVar1,lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001028afd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028afd38; end: 1028b01cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028afd38(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_80;
  if (param_2 == 0) {
    uVar19 = 0;
    uVar15 = 0;
    uVar18 = 0xe000000000000000;
    uVar17 = 0xe000000000000000;
    uVar2 = param_2;
  }
  else {
    uVar19 = param_2;
    uVar17 = param_2;
    func_0x000107c3e9e8();
    func_0x000107c61180();
    uVar13 = uVar17;
    if (uVar19 == 0) {
LAB_1028afdb4:
      uVar15 = 0;
      uVar17 = 0xe000000000000000;
    }
    else {
      uVar2 = uVar19;
      func_0x000107c3e978();
      func_0x000107c61180();
      func_0x000107c61170(uVar19);
      uVar13 = uVar17;
      if (uVar2 == 0) goto LAB_1028afdb4;
      uVar15 = uVar2;
      func_0x000107c5faec();
      uVar13 = uVar17;
      func_0x000107c61170(uVar2);
    }
    uVar19 = param_2;
    func_0x000107c3e9e8();
    func_0x000107c61180();
    if (uVar19 != 0) {
      uVar18 = uVar19;
      func_0x000107c3ea1c();
      func_0x000107c61180();
      func_0x000107c61170(uVar19);
      if (uVar18 != 0) {
        uVar19 = uVar18;
        func_0x000107c5faec();
        uVar2 = uVar13;
        func_0x000107c61170(uVar18);
        uVar19 = uVar19 & 0xffffffffffff;
        uVar18 = uVar13;
        goto LAB_1028afe2c;
      }
    }
    uVar19 = 0;
    uVar18 = 0xe000000000000000;
    uVar2 = uVar13;
  }
LAB_1028afe2c:
  func_0x000107c6142c(uVar17);
  uVar15 = uVar15 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar15 = uVar17 >> 0x38 & 0xf;
  }
  func_0x000107c6142c(uVar18);
  lVar5 = _DAT_112ec7918;
  if (uVar15 != 0) {
    if ((uVar18 & 0x2000000000000000) != 0) {
      uVar19 = uVar18 >> 0x38 & 0xf;
    }
    if (uVar19 != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112ec7918,&uStack_78,0,0);
      lVar5 = unaff_x20 + lVar5;
      func_0x000107c61618();
      if (lVar5 != 0) {
        uVar19 = *(ulong *)(unaff_x20 + _DAT_112ec7950);
        func_0x000107c49f74();
        lVar16 = lVar5;
        if (((uVar19 & 1) == 0) && (*(char *)(unaff_x20 + _DAT_112ec7940) == '\x01')) {
          FUN_1028af800();
          func_0x0001000d224c(&puStack_a8);
          puVar3 = puStack_a8;
          lVar16 = *(long *)(puStack_a8 + _DAT_11301aef0);
          func_0x000107c615f0(lVar16);
          func_0x000107c61170(puVar3);
          lVar9 = lVar16;
          func_0x000107c4ce08();
          func_0x000107c61180();
          func_0x000107c615e8(lVar16);
          lVar16 = lVar9;
          func_0x000107c4c930();
          func_0x000107c61180();
          func_0x000107c615e8(lVar9);
          func_0x0001000d224c(&puStack_a8);
          puVar3 = puStack_a8;
          puVar4 = puStack_a8;
          func_0x000107c4c984();
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          puVar3 = puVar4;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          if (lVar16 == 0 || puVar3 == (undefined *)0x0) {
            lVar9 = lVar5;
            func_0x000107c61174(lVar5);
            FUN_1028b0980(param_1,lVar9,0);
            func_0x000107c61170(lVar16);
            func_0x000107c615e8(puVar3);
            lVar16 = lVar9;
          }
          else {
            puVar4 = &UNK_110561710;
            func_0x000107c613fc(&UNK_110561710,0x18,7);
            puStack_a8 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff00);
            func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
            func_0x000107c613fc();
            ppuVar8 = &puStack_a8;
            func_0x00010006c248();
            *(undefined ***)(puVar4 + 0x10) = ppuVar8;
            puVar7 = &UNK_110561530;
            func_0x000107c613fc(&UNK_110561530,0x18,7);
            func_0x000107c61614(puVar7 + 0x10,unaff_x20);
            puVar10 = &UNK_110561738;
            func_0x000107c613fc(&UNK_110561738,0x38,7);
            *(undefined **)(puVar10 + 0x10) = puVar4;
            *(undefined **)(puVar10 + 0x18) = puVar7;
            *(undefined8 *)(puVar10 + 0x20) = param_1;
            *(ulong *)(puVar10 + 0x28) = param_2;
            *(long *)(puVar10 + 0x30) = lVar5;
            pcStack_88 = FUN_1028b1974;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_10196ca78;
            puStack_90 = &UNK_110561750;
            ppuVar8 = &puStack_a8;
            puStack_80 = puVar10;
            func_0x000107c60bc4(ppuVar8);
            puVar7 = puStack_80;
            func_0x000107c61174(param_2);
            lVar11 = lVar5;
            func_0x000107c61174(lVar5);
            func_0x000107c6157c(puVar10);
            func_0x000107c6157c(puVar4);
            func_0x000107c61174(param_1);
            func_0x000107c61574(puVar7);
            puVar7 = puVar3;
            func_0x000107c5c934();
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar8);
            lVar9 = _DAT_112ec7928;
            uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ec7928);
            *(undefined **)(unaff_x20 + _DAT_112ec7928) = puVar7;
            func_0x000107c615e8(uVar12);
            uVar12 = *(undefined8 *)(puVar4 + 0x10);
            func_0x000107c6157c(uVar12);
            func_0x0001000c74f0(&puStack_a8);
            func_0x000107c61574(uVar12);
            if ((((ulong)puStack_a8 & 1) == 0) && (*(long *)(unaff_x20 + lVar9) == 0)) {
              func_0x000107c61174(lVar11);
              FUN_1028b0980(param_1,lVar11,0);
              func_0x000107c61574(puVar4);
              func_0x000107c615e8(puVar3);
              func_0x000107c61574(puVar10);
              func_0x000107c61170(lVar11);
            }
            else {
              func_0x000107c61574(puVar4);
              func_0x000107c615e8(puVar3);
              func_0x000107c61574(puVar10);
            }
          }
          func_0x000107c61170(lVar5);
        }
        func_0x000107c61170(lVar16);
      }
      return;
    }
  }
  if (param_2 == 0) {
    uVar19 = 0;
LAB_1028afec0:
    uVar2 = 0xe000000000000000;
  }
  else {
    uVar15 = param_2;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar19 = uVar15;
    if (uVar15 == 0) goto LAB_1028afec0;
    func_0x000107c5faec();
    func_0x000107c61170(uVar15);
  }
  uVar17 = uVar2;
  func_0x000107c5fb1c();
  uVar18 = uVar17;
  func_0x000107c6142c(uVar2);
  uVar15 = uVar19 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar15 = uVar17 >> 0x38 & 0xf;
  }
  if (uVar15 == 0) {
    func_0x000107c6142c(uVar17);
  }
  else {
    func_0x0001000d224c(&puStack_80);
    puVar3 = puStack_80;
    uVar2 = *(ulong *)(puStack_80 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(puVar3);
    uVar15 = uVar2;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = uVar15;
    func_0x000107c5faec();
    func_0x000107c61170(uVar15);
    uVar15 = uVar18;
    func_0x000107c5fb1c();
    func_0x000107c6142c(uVar18);
    if (uVar19 == uVar2 && uVar17 == uVar15) {
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar15);
      goto LAB_1028b01a0;
    }
    func_0x000107c605b8(uVar19,uVar17,uVar2,uVar15,0);
    func_0x000107c6142c(uVar17);
    func_0x000107c6142c(uVar15);
    if ((uVar19 & 1) != 0) goto LAB_1028b01a0;
  }
  func_0x0001000d224c(&puStack_80);
  puVar3 = puStack_80;
  func_0x000107c5b484();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b01d0);
    (*pcVar1)();
  }
  puVar4 = puVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 != (undefined *)0x0) {
    lVar5 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar14 = 0x30;
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar12 = param_1;
    func_0x000107c4cde0();
    func_0x000107c61180();
    uVar6 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined8 *)(lVar5 + 0x28) = uVar14;
    lVar16 = lVar5;
    func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar5);
    uVar12 = 0;
    FUN_1028b1934(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar3 = &UNK_110561530;
    func_0x000107c613fc(&UNK_110561530,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar7 = &UNK_1105616c0;
    func_0x000107c613fc(&UNK_1105616c0,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar3;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    *(ulong *)(puVar7 + 0x20) = param_2;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100f6151c;
    puStack_68 = &UNK_1105616d8;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar7);
    func_0x000107c4b7e8(puVar4);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(uVar12);
    return;
  }
LAB_1028b01a0:
  FUN_1028b020c(param_1,param_2);
  return;
}



/* Entry: 1028b01d0; end: 1028b020b;  */

void FUN_1028b01d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028b0208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028b020c; end: 1028b05af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b020c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112ec7918;
  func_0x000107c61428(unaff_x20 + _DAT_112ec7918,auStack_78,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec7950);
    func_0x000107c49f74();
    lVar11 = lVar1;
    if (((uVar2 & 1) == 0) && (*(char *)(unaff_x20 + _DAT_112ec7940) == '\x01')) {
      FUN_1028af800();
      func_0x0001000d224c(&puStack_a8);
      puVar5 = puStack_a8;
      lVar11 = *(long *)(puStack_a8 + _DAT_11301aef0);
      func_0x000107c615f0(lVar11);
      func_0x000107c61170(puVar5);
      lVar3 = lVar11;
      func_0x000107c4ce08();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      lVar11 = lVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x0001000d224c(&puStack_a8);
      puVar5 = puStack_a8;
      puVar4 = puStack_a8;
      func_0x000107c4c984();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puVar5 = puVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (lVar11 == 0 || puVar5 == (undefined *)0x0) {
        lVar3 = lVar1;
        func_0x000107c61174(lVar1);
        FUN_1028b0980(param_1,lVar3,0);
        func_0x000107c61170(lVar11);
        func_0x000107c615e8(puVar5);
        lVar11 = lVar3;
      }
      else {
        puVar4 = &UNK_110561710;
        func_0x000107c613fc(&UNK_110561710,0x18,7);
        puStack_a8 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff00);
        func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
        func_0x000107c613fc();
        ppuVar6 = &puStack_a8;
        func_0x00010006c248();
        *(undefined ***)(puVar4 + 0x10) = ppuVar6;
        puVar7 = &UNK_110561530;
        func_0x000107c613fc(&UNK_110561530,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,unaff_x20);
        puVar8 = &UNK_110561738;
        func_0x000107c613fc(&UNK_110561738,0x38,7);
        *(undefined **)(puVar8 + 0x10) = puVar4;
        *(undefined **)(puVar8 + 0x18) = puVar7;
        *(undefined8 *)(puVar8 + 0x20) = param_1;
        *(undefined8 *)(puVar8 + 0x28) = param_2;
        *(long *)(puVar8 + 0x30) = lVar1;
        pcStack_88 = FUN_1028b1974;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_10196ca78;
        puStack_90 = &UNK_110561750;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar6);
        puVar7 = puStack_80;
        func_0x000107c61174(param_2);
        lVar9 = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c6157c(puVar8);
        func_0x000107c6157c(puVar4);
        func_0x000107c61174(param_1);
        func_0x000107c61574(puVar7);
        puVar7 = puVar5;
        func_0x000107c5c934();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        lVar3 = _DAT_112ec7928;
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ec7928);
        *(undefined **)(unaff_x20 + _DAT_112ec7928) = puVar7;
        func_0x000107c615e8(uVar10);
        uVar10 = *(undefined8 *)(puVar4 + 0x10);
        func_0x000107c6157c(uVar10);
        func_0x0001000c74f0(&puStack_a8);
        func_0x000107c61574(uVar10);
        if ((((ulong)puStack_a8 & 1) == 0) && (*(long *)(unaff_x20 + lVar3) == 0)) {
          func_0x000107c61174(lVar9);
          FUN_1028b0980(param_1,lVar9,0);
          func_0x000107c61574(puVar4);
          func_0x000107c615e8(puVar5);
          func_0x000107c61574(puVar8);
          func_0x000107c61170(lVar9);
        }
        else {
          func_0x000107c61574(puVar4);
          func_0x000107c615e8(puVar5);
          func_0x000107c61574(puVar8);
        }
      }
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(lVar11);
  }
  return;
}



/* Entry: 1028b05b0; end: 1028b097f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b05b0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  lVar5 = param_3;
  if (*(char *)(param_3 + _DAT_112ec7940) != '\x01') goto LAB_1028b0694;
  if (param_1 == 0) {
LAB_1028b0664:
    lVar5 = 0;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) goto LAB_1028b0664;
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b06c8);
        (*pcVar1)();
      }
      param_5 = *(long *)(param_1 + 0x20);
      func_0x000107c61174(param_5);
      lVar5 = param_5;
    }
    else {
      param_5 = 0;
      func_0x00010103193c(0,param_1);
      lVar5 = param_5;
    }
  }
  lVar3 = param_5;
  func_0x000107c61174(param_5);
  FUN_1028b020c(param_4,param_5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_3);
LAB_1028b0694:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1028b0980; end: 1028b0be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b0980(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec7950);
  func_0x000107c49f74();
  if ((uVar2 & 1) == 0) {
    func_0x0001000d224c(&lStack_68);
    uVar3 = *(undefined8 *)(lStack_68 + _DAT_112ff2c78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    func_0x0001000d224c(&lStack_70);
    lVar9 = lStack_70;
    func_0x000107c410f8();
    func_0x000107c61180();
    func_0x000107c61170(lStack_70);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b0be4);
      (*pcVar1)();
    }
    func_0x0001000d224c(&uStack_78);
    uVar8 = uStack_78;
    func_0x000107c4f3e4(uStack_78);
    func_0x000107c61180();
    func_0x000107c61170(uStack_78);
    func_0x0001000d224c(&uStack_80);
    uVar4 = uStack_80;
    func_0x000107c5da30(uStack_80);
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    FUN_1028b6394(0);
    func_0x000107c610f8();
    FUN_1028b527c(uVar3,lVar9,uVar8,uVar4);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec7938);
    *(undefined8 *)(unaff_x20 + _DAT_112ec7938) = uVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    lVar5 = param_1;
    func_0x000107c5b32c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar10 = 0;
      lVar9 = 0;
    }
    else {
      lVar10 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
    }
    func_0x000107c4a498(param_1);
    puVar6 = &UNK_110561530;
    func_0x000107c613fc(&UNK_110561530,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_110561800;
    func_0x000107c613fc(&UNK_110561800,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = param_2;
    *(undefined8 *)(puVar7 + 0x20) = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c6157c(puVar6);
    func_0x000107c61174(param_2);
    FUN_1028b53b0(lVar10,lVar9,param_1,FUN_1028b1af0,puVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(lVar9);
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_112ec7940) = 0;
  }
  return;
}



/* Entry: 1028b0be4; end: 1028b0d5b;  */

void FUN_1028b0be4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [32];
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c6157c(uVar4);
  puVar1 = PTR___sytN_11034f1b0 + 8;
  func_0x000100075034(FUN_1028b0d5c,0,puVar1);
  func_0x000107c61574(uVar4);
  puVar2 = &UNK_110561530;
  func_0x000107c613fc(&UNK_110561530,0x18,7);
  func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618(param_4);
  func_0x000107c61614(puVar2 + 0x10,param_4);
  func_0x000107c61170(param_4);
  puVar3 = &UNK_110561788;
  func_0x000107c613fc(&UNK_110561788,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_6;
  *(undefined8 *)(puVar3 + 0x30) = param_7;
  puVar2 = &UNK_1105617b0;
  func_0x000107c613fc(&UNK_1105617b0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dae9f28;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  uVar4 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,4,0,0,&UNK_10dae9f30,puVar2,puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1028b0d5c; end: 1028b0d67;  */

void FUN_1028b0d5c(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 1028b0d68; end: 1028b0ddb;  */

void FUN_1028b0d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028b0ddc,uVar1,uVar2);
  return;
}



/* Entry: 1028b0ddc; end: 1028b1113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b0ddc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  
  lVar9 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  lVar13 = unaff_x22 + 0x10;
  uVar7 = 0;
  func_0x000107c61428(lVar9 + 0x10,lVar13,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ec7940;
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + _DAT_112ec7940) == '\x01') {
      lVar10 = *(long *)(unaff_x22 + 0x48);
      uVar8 = *(undefined8 *)(lVar9 + _DAT_112ec7928);
      *(undefined8 *)(lVar9 + _DAT_112ec7928) = 0;
      func_0x000107c615e8(uVar8);
      if (lVar10 != 0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x0001000d224c(unaff_x22 + 0x28);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar14 = uVar11;
        func_0x000107c4f3e4();
        func_0x000107c61180();
        func_0x000107c61170(uVar11);
        uVar11 = uVar14;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x0001000d224c(unaff_x22 + 0x28);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar14 = uVar12;
        func_0x000107c51d00(uVar12);
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        uVar12 = uVar14;
        func_0x000107c5c734(uVar14);
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x0001000d224c(unaff_x22 + 0x28);
        lVar13 = *(long *)(unaff_x22 + 0x28);
        uVar15 = *(undefined8 *)(lVar13 + _DAT_11307d3e0);
        func_0x000107c615f0(uVar15);
        func_0x000107c61170(lVar13);
        FUN_1028b4ae0(0);
        func_0x000107c610f8();
        func_0x0001028b2744(uVar11,uVar12);
        uVar14 = *(undefined8 *)(lVar9 + _DAT_112ec7930);
        *(undefined8 *)(lVar9 + _DAT_112ec7930) = uVar11;
        func_0x000107c61174();
        func_0x000107c61170(uVar14);
        uVar14 = uVar8;
        func_0x0001028b06c8();
        puVar5 = &UNK_110561530;
        func_0x000107c613fc(&UNK_110561530,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,lVar9);
        puVar6 = &UNK_1105617d8;
        func_0x000107c613fc(&UNK_1105617d8,0x38,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(undefined8 *)(puVar6 + 0x18) = uVar1;
        *(undefined8 *)(puVar6 + 0x20) = uVar8;
        *(undefined8 *)(puVar6 + 0x28) = uVar3;
        *(undefined8 *)(puVar6 + 0x30) = uVar2;
        func_0x000107c61174(uVar8);
        func_0x000107c61174(uVar3);
        func_0x000107c61174(uVar2);
        func_0x000107c6157c(puVar5);
        func_0x000107c61174(uVar1);
        FUN_1028b2ad8(uVar8,uVar14,uVar12,uVar15,uVar7,FUN_1028b1aac,puVar6);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar5);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(lVar9);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar7);
        goto LAB_1028b10f0;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c40258(uVar8);
      func_0x000107c61180();
      uVar7 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      func_0x000107c61428(lVar9 + _DAT_112ec7948,unaff_x22 + 0x28,0x21,0);
      func_0x000100403b00(auStack_68,uVar7,lVar13);
      func_0x000107c614a8(unaff_x22 + 0x28);
      func_0x000107c6142c(uStack_60);
      *(undefined1 *)(lVar9 + lVar4) = 0;
    }
    func_0x000107c61170();
  }
LAB_1028b10f0:
                    /* WARNING: Could not recover jumptable at 0x0001028b1110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028b1114; end: 1028b12ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1114(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  puVar4 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + _DAT_112ec7940) != '\x01') goto LAB_1028b12dc;
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ec7930);
  *(undefined8 *)(param_2 + _DAT_112ec7930) = 0;
  func_0x000107c61170(uVar3);
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    if (param_4 == 0) {
      lVar7 = 0;
      puVar6 = (undefined1 *)0x0;
      lVar5 = 0;
      puVar4 = (undefined1 *)0x0;
    }
    else {
      lVar1 = param_4;
      func_0x000107c61174();
      lVar7 = lVar1;
      func_0x00010901d7c4();
      func_0x000107c61180();
      lVar5 = lVar7;
      func_0x000107c5faec();
      puVar6 = puVar4;
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar7);
      func_0x000107c4252c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar7 = 0;
        puVar6 = (undefined1 *)0x0;
      }
      else {
        lVar7 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
      }
    }
    uVar3 = 0;
    func_0x0001028b6d08(0);
    FUN_1028b6840(param_3,lVar5,puVar4,lVar7,puVar6,param_1,uVar3);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar4);
    if (param_4 == 0) {
LAB_1028b1284:
      param_4 = 0;
    }
    else {
      func_0x000107c5d984();
      func_0x000107c61180();
      if (param_4 == 0) goto LAB_1028b1284;
    }
    puVar2 = PTR_PTR_1126b5b40;
    func_0x000107c61168(PTR_PTR_1126b5b40);
    func_0x000107c5b330();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
  }
  FUN_1028b0980(param_5,param_6,puVar2);
  func_0x000107c61170(param_2);
LAB_1028b12dc:
  func_0x000107c61170();
  return;
}



/* Entry: 1028b1300; end: 1028b158b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1300(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec7940;
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_112ec7940) == '\x01') {
      uVar2 = *(undefined8 *)(param_2 + _DAT_112ec7938);
      *(undefined8 *)(param_2 + _DAT_112ec7938) = 0;
      func_0x000107c61170(uVar2);
      uVar3 = *(ulong *)(param_2 + _DAT_112ec7950);
      func_0x000107c49f74();
      if ((uVar3 & 1) == 0) {
        puVar4 = &UNK_110561530;
        func_0x000107c613fc(&UNK_110561530,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_2);
        puVar5 = &UNK_110561828;
        func_0x000107c613fc(&UNK_110561828,0x30,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x18) = param_3;
        *(undefined8 *)(puVar5 + 0x20) = param_1;
        *(undefined8 *)(puVar5 + 0x28) = param_4;
        uStack_68 = 0x1028b1afc;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        puStack_70 = &UNK_110561840;
        ppuVar6 = &puStack_88;
        puStack_60 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar4 = puStack_60;
        func_0x000107c61174(param_4);
        func_0x000107c61174(param_3);
        func_0x000107c61174(param_1);
        func_0x000107c61574(puVar4);
        func_0x0001000d76cc(&UNK_10dae9ed0,ppuVar6);
        func_0x000107c60bd0(ppuVar6);
      }
      else {
        *(undefined1 *)(param_2 + lVar1) = 0;
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1028b158c; end: 1028b15eb; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin init] */

void FUN_1028b158c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapMeReplyAddToStoryMessageAccessoryPlugin.SnapMeReplyAddToStoryMessageAccessoryPlugin"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b15b8);
  (*pcVar1)();
}



/* Entry: 1028b15ec; end: 1028b1743; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b15ec(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7950));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7958));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7960));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7968));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7970));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7978));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7980));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7988));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7990));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec7998));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec79a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec79a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec79b0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7910));
  func_0x0001012a9c58(param_1 + _DAT_112ec7918);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7920));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7928));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7930));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7938));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ec7948));
  return;
}



/* Entry: 1028b1744; end: 1028b1763;  */

void FUN_1028b1744(void)

{
  func_0x000107c61168(&PTR_PTR_11286a860);
  return;
}



/* Entry: 1028b1764; end: 1028b17bf; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPlugin43SnapMeReplyAddToStoryMessageAccessoryPlugin dismissCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1764(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + _DAT_112ec7940) = 0;
  lVar1 = _DAT_112ec7950;
  iVar3 = (int)*(undefined8 *)(param_1 + _DAT_112ec7950);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c49f74();
  if (iVar3 != 0) {
    func_0x000107c4283c(*(undefined8 *)(param_1 + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1028b17c0; end: 1028b17e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b17c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + _DAT_112ec7940) & 1) == 0) {
      *(undefined1 *)(lVar1 + _DAT_112ec7940) = 1;
      func_0x000107c5c6c0();
      func_0x000107c61180();
      puVar2 = &UNK_110561530;
      func_0x000107c613fc(&UNK_110561530,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      puVar3 = &UNK_110561620;
      func_0x000107c613fc(&UNK_110561620,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = uVar5;
      pcStack_68 = FUN_1028b1814;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_10283706c;
      puStack_70 = &UNK_110561638;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_60;
      func_0x000107c61174(uVar5);
      func_0x000107c61574(puVar2);
      uVar5 = uVar6;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(uVar6);
      *(undefined8 *)(lVar1 + _DAT_112ec7920) = uVar5;
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028b17e8; end: 1028b1813;  */

void FUN_1028b17e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028b1814; end: 1028b181b;  */

void FUN_1028b1814(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = &UNK_110561530;
  func_0x000107c613fc(&UNK_110561530,0x18,7);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_110561670;
  func_0x000107c613fc(&UNK_110561670,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  puVar1 = &UNK_110561698;
  func_0x000107c613fc(&UNK_110561698,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dae9f08;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar4);
  uVar4 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,4,0,0,&UNK_10dae9f18,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1028b181c; end: 1028b187b;  */

void FUN_1028b181c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1028b187c;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028afbe8,lVar1,lVar2);
  return;
}



/* Entry: 1028b187c; end: 1028b18b7;  */

void FUN_1028b187c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028b18b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028b18b8; end: 1028b1927;  */

void FUN_1028b18b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028b1b28;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1028b1928; end: 1028b1933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1928(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar8 = lVar3;
  if (*(char *)(lVar3 + _DAT_112ec7940) != '\x01') goto LAB_1028b0694;
  if (param_1 == 0) {
LAB_1028b0664:
    lVar8 = 0;
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      uVar4 = param_1;
      if (-1 < (long)param_1) {
        uVar4 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) goto LAB_1028b0664;
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b06c8);
        (*pcVar2)();
      }
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x000107c61174(lVar6);
      lVar8 = lVar6;
    }
    else {
      lVar6 = 0;
      func_0x00010103193c(0,param_1);
      lVar8 = lVar6;
    }
  }
  lVar5 = lVar6;
  func_0x000107c61174(lVar6);
  FUN_1028b020c(uVar1,lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
LAB_1028b0694:
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 1028b1934; end: 1028b1973;  */

void FUN_1028b1934(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028b1974; end: 1028b1983;  */

void FUN_1028b1974(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_70 [32];
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c6157c(uVar8);
  puVar1 = PTR___sytN_11034f1b0 + 8;
  func_0x000100075034(FUN_1028b0d5c,0,puVar1);
  func_0x000107c61574(uVar8);
  puVar3 = &UNK_110561530;
  func_0x000107c613fc(&UNK_110561530,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_110561788;
  func_0x000107c613fc(&UNK_110561788,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  puVar3 = &UNK_1105617b0;
  func_0x000107c613fc(&UNK_1105617b0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dae9f28;
  *(undefined **)(puVar3 + 0x18) = puVar5;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar6);
  uVar6 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,4,0,0,&UNK_10dae9f30,puVar3,puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1028b1984; end: 1028b19f7;  */

void FUN_1028b1984(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1028b1b2c;
  plVar5[0xb] = lVar2;
  plVar5[0xc] = lVar6;
  plVar5[9] = lVar1;
  plVar5[10] = lVar3;
  plVar5[8] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0xd] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028b0ddc,lVar3,lVar4);
  return;
}



/* Entry: 1028b19f8; end: 1028b1a67;  */

void FUN_1028b19f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028b1b30;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1028b1a68; end: 1028b1aab;  */

void FUN_1028b1a68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028b1aac; end: 1028b1abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1aac(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar9 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar9,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  if (*(char *)(lVar2 + _DAT_112ec7940) != '\x01') goto LAB_1028b12dc;
  uVar7 = *(undefined8 *)(lVar2 + _DAT_112ec7930);
  *(undefined8 *)(lVar2 + _DAT_112ec7930) = 0;
  func_0x000107c61170(uVar7);
  puVar5 = (undefined *)0x0;
  if (lVar4 != 0) {
    if (lVar8 == 0) {
      lVar12 = 0;
      puVar11 = (undefined1 *)0x0;
      lVar10 = 0;
      puVar9 = (undefined1 *)0x0;
    }
    else {
      lVar3 = lVar8;
      func_0x000107c61174();
      lVar12 = lVar3;
      func_0x00010901d7c4();
      func_0x000107c61180();
      lVar10 = lVar12;
      func_0x000107c5faec();
      puVar11 = puVar9;
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar12);
      func_0x000107c4252c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar12 = 0;
        puVar11 = (undefined1 *)0x0;
      }
      else {
        lVar12 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
      }
    }
    uVar7 = 0;
    func_0x0001028b6d08(0);
    FUN_1028b6840(lVar4,lVar10,puVar9,lVar12,puVar11,param_1,uVar7);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar9);
    if (lVar8 == 0) {
LAB_1028b1284:
      lVar8 = 0;
    }
    else {
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar8 == 0) goto LAB_1028b1284;
    }
    puVar5 = PTR_PTR_1126b5b40;
    func_0x000107c61168(PTR_PTR_1126b5b40);
    func_0x000107c5b330();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar4);
  }
  FUN_1028b0980(uVar1,uVar6,puVar5);
  func_0x000107c61170(lVar2);
LAB_1028b12dc:
  func_0x000107c61170();
  return;
}



/* Entry: 1028b1abc; end: 1028b1aef;  */

void FUN_1028b1abc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028b1af0; end: 1028b1b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1af0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ec7940;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + _DAT_112ec7940) == '\x01') {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112ec7938);
      *(undefined8 *)(lVar3 + _DAT_112ec7938) = 0;
      func_0x000107c61170(uVar4);
      uVar5 = *(ulong *)(lVar3 + _DAT_112ec7950);
      func_0x000107c49f74();
      if ((uVar5 & 1) == 0) {
        puVar6 = &UNK_110561530;
        func_0x000107c613fc(&UNK_110561530,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,lVar3);
        puVar7 = &UNK_110561828;
        func_0x000107c613fc(&UNK_110561828,0x30,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = uVar1;
        *(undefined8 *)(puVar7 + 0x20) = param_1;
        *(undefined8 *)(puVar7 + 0x28) = uVar9;
        uStack_68 = 0x1028b1afc;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        puStack_70 = &UNK_110561840;
        ppuVar8 = &puStack_88;
        puStack_60 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar6 = puStack_60;
        func_0x000107c61174(uVar9);
        func_0x000107c61174(uVar1);
        func_0x000107c61174(param_1);
        func_0x000107c61574(puVar6);
        func_0x0001000d76cc(&UNK_10dae9ed0,ppuVar8);
        func_0x000107c60bd0(ppuVar8);
      }
      else {
        *(undefined1 *)(lVar3 + lVar2) = 0;
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1028b1b34; end: 1028b1b8f; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPluginP33_2882CAD77CB2A44B7A99ADE7B1719A7632RetainingChatCameraScopeLauncher initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ec79e8) = param_3;
  puVar1 = PTR_s_initWithScopeExposer__1125ee1e0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1,param_3);
  return;
}



/* Entry: 1028b1b90; end: 1028b1bc3;  */

void FUN_1028b1b90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028b1bc4; end: 1028b1bd3; -[_TtC43SnapMeReplyAddToStoryMessageAccessoryPluginP33_2882CAD77CB2A44B7A99ADE7B1719A7632RetainingChatCameraScopeLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b1bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec79e8));
  return;
}



/* Entry: 1028b1bd4; end: 1028b213b;  */

void FUN_1028b1bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_110561878;
  func_0x000107c613fc(&UNK_110561878,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_1;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_1028b213c,puVar1);
  return;
}



/* Entry: 1028b213c; end: 1028b2197;  */

void FUN_1028b213c(void)

{
  long unaff_x20;
  
  func_0x0001028b1d20(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1028b2198; end: 1028b21a7;  */

undefined1  [16] FUN_1028b2198(void)

{
  return ZEXT816(0x1105618a0);
}



/* Entry: 1028b21a8; end: 1028b21bb; +[SCSnapMeReplyAddToStoryHelpers addToMyStoryReplyConfiguration] */

void FUN_1028b21a8(void)

{
  FUN_1028b22dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028b21bc; end: 1028b2233; +[SCSnapMeReplyAddToStoryHelpers customStoryReplyConfigurationWithStoryId:displayName:] */

void FUN_1028b21bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  FUN_1028b23a4();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1028b2234; end: 1028b226b; +[SCSnapMeReplyAddToStoryHelpers publicStoryReplyConfigurationWithProfileId:] */

void FUN_1028b2234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_1028b24ec();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1028b226c; end: 1028b22a7; -[SCSnapMeReplyAddToStoryHelpers init] */

void FUN_1028b226c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028b22a8; end: 1028b22db;  */

void FUN_1028b22a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028b22dc; end: 1028b23a3;  */

undefined * FUN_1028b22dc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae6c0;
  func_0x000107c61168(PTR_PTR_1126ae6c0);
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5c094(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c3e6c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 1028b23a4; end: 1028b24eb;  */

undefined * FUN_1028b23a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae6c0;
  func_0x000107c61168(PTR_PTR_1126ae6c0);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5c094(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c5fadc(param_1,param_2);
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = param_3;
  }
  puVar3 = PTR_PTR_1126ae6c8;
  func_0x000107c610f8(PTR_PTR_1126ae6c8);
  func_0x000107c48320();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar5 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c3e6c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 1028b24ec; end: 1028b268f;  */

undefined * FUN_1028b24ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b47d0;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48230();
  func_0x000107c61170();
  if (puVar1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000108f5935c();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fadc(lVar6,param_2);
      func_0x000107c6142c(param_2);
    }
    puVar2 = PTR_PTR_1126ae6c8;
    func_0x000107c610f8(PTR_PTR_1126ae6c8);
    func_0x000107c48320();
    func_0x000107c61170(lVar6);
    puVar5 = PTR_PTR_1126ae6c0;
    func_0x000107c61168(PTR_PTR_1126ae6c0);
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5daf4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae6d0;
    func_0x000107c610f8(PTR_PTR_1126ae6d0);
    func_0x000107c4831c();
    func_0x000107c61170(puVar5);
    puVar5 = PTR_PTR_1126b1bb0;
    func_0x000107c61168(PTR_PTR_1126b1bb0);
    func_0x000107c451ec();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
  }
  return puVar5;
}



/* Entry: 1028b2690; end: 1028b26af;  */

void FUN_1028b2690(void)

{
  func_0x000107c61168(&PTR_PTR_11286aa08);
  return;
}



/* Entry: 1028b26b0; end: 1028b27d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b26b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ec7ab0) = 0;
  *(undefined **)(unaff_x20 + _DAT_112ec7ab8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7ac0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7ac8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7ad0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028b27d8; end: 1028b2887; -[SCSnapMeReplyAvatarFetcher initWithProfilesProvider:selfieFetcher:imageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b27d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112ec7ab0) = 0;
  *(undefined **)(param_1 + _DAT_112ec7ab8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + _DAT_112ec7ac0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ec7ac8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ec7ad0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1028b2888; end: 1028b28cb;  */

void FUN_1028b2888(void)

{
  func_0x000107c614f0();
  FUN_1028b28cc();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028b28cc; end: 1028b29ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b28cc(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_78 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112ec7ab0) = 1;
  lVar1 = _DAT_112ec7ab8;
  func_0x000107c61428(unaff_x20 + _DAT_112ec7ab8,auStack_78,1,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar4);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b29e8);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c615f0(uVar7);
      }
      else {
        uVar7 = uVar6;
        func_0x0001028b4908(uVar6,uVar4);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b29a8);
        (*pcVar2)();
      }
      uVar8 = uVar6 + 1;
      func_0x000107c3f474(uVar7);
      func_0x000107c615e8(uVar7);
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar5);
  }
  func_0x000107c6142c(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1028b2a00; end: 1028b2a57; -[SCSnapMeReplyAvatarFetcher dealloc] */

void FUN_1028b2a00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_1028b28cc();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028b2a58; end: 1028b2aaf; -[SCSnapMeReplyAvatarFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b2a58(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7ac0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7ac8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7ad0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ec7ab8));
  return;
}



/* Entry: 1028b2ab0; end: 1028b2ad7; -[SCSnapMeReplyAvatarFetcher cancel] */

void FUN_1028b2ab0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028b28cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028b2ad8; end: 1028b2e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b2ad8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = &UNK_110561968;
  func_0x000107c613fc(&UNK_110561968,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110561990;
  func_0x000107c613fc(&UNK_110561990,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined **)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  *(undefined8 *)(puVar3 + 0x40) = param_6;
  *(undefined8 *)(puVar3 + 0x48) = param_7;
  if (param_1 == (undefined *)0x0) {
    func_0x000107c61438(param_5,2);
    func_0x000107c61580(puVar2,2);
    func_0x000107c61580(param_7,2);
    func_0x000107c61438(param_3,2);
LAB_1028b2c94:
    func_0x000107c61428(puVar2 + 0x10,&puStack_90,0,0);
    puVar5 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c61574(puVar2);
      func_0x000107c61574(puVar3);
      goto LAB_1028b2e40;
    }
    if (puVar5[_DAT_112ec7ab0] != '\x01') {
      FUN_1028b3574(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  else {
    func_0x000107c61438(param_5,2);
    func_0x000107c61580(puVar2,2);
    func_0x000107c61580(param_7,2);
    puVar4 = param_1;
    func_0x000107c61174();
    uVar9 = 2;
    func_0x000107c61438(param_3);
    func_0x000107c61174();
    puVar5 = puVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) goto LAB_1028b2c94;
    puVar10 = puVar5;
    func_0x000107c5faec();
    uVar11 = (ulong)puVar10 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar11 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) {
      func_0x000107c6142c(uVar9);
LAB_1028b2c8c:
      func_0x000107c61170(puVar5);
      goto LAB_1028b2c94;
    }
    lVar6 = *(long *)(unaff_x20 + _DAT_112ec7ac0);
    if (lVar6 == 0) {
      func_0x000107c6142c(uVar9);
      goto LAB_1028b2c8c;
    }
    uVar11 = uVar9;
    func_0x000107c615f0();
    func_0x000107c5b37c();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      uVar11 = 0xe000000000000000;
    }
    else {
      puVar10 = puVar4;
      func_0x000107c5faec();
      func_0x000107c61170(puVar4);
    }
    func_0x000107c5fadc(puVar10,uVar11);
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(uVar11);
    puVar4 = &UNK_110561968;
    func_0x000107c613fc(&UNK_110561968,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar7 = &UNK_1105619b8;
    func_0x000107c613fc(&UNK_1105619b8,0x30,7);
    *(undefined **)(puVar7 + 0x10) = puVar4;
    *(undefined8 *)(puVar7 + 0x18) = 0x1028b5120;
    *(undefined **)(puVar7 + 0x20) = puVar3;
    *(long *)(puVar7 + 0x28) = lVar1;
    uStack_70 = 0x1028b5114;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013ce928;
    puStack_78 = &UNK_1105619d0;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar4 = puStack_68;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c4468c(lVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(puVar10);
  }
  func_0x000107c61170(puVar5);
LAB_1028b2e40:
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_5);
  return;
}



/* Entry: 1028b2e88; end: 1028b2f9b; -[SCSnapMeReplyAvatarFetcher fetchAvatarImageForReplier:completion:] */

/* WARNING: Possible PIC construction at 0x0001028b2f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b2f7c) */

void FUN_1028b2e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110561a08;
  func_0x000107c613fc(&UNK_110561a08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_110561968;
  func_0x000107c613fc(&UNK_110561968,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110561a30;
  func_0x000107c613fc(&UNK_110561a30,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(code **)(puVar3 + 0x40) = FUN_1028b4b00;
  *(undefined **)(puVar3 + 0x48) = puVar1;
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  FUN_1028b3bcc(param_3,0x1028b5124,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1028b2f9c; end: 1028b3573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b2f9c(undefined8 param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_4 + 0x10,auStack_90,0,0);
  puVar4 = (undefined *)(param_4 + 0x10);
  func_0x000107c61618();
  if (puVar4 == (undefined *)0x0) {
    return;
  }
  if ((puVar4[_DAT_112ec7ab0] & 1) == 0) {
    if (param_3 != 0) {
      uVar1 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar1 = param_3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        puVar5 = &UNK_110561968;
        func_0x000107c613fc(&UNK_110561968,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,puVar4);
        puVar6 = &UNK_110561b20;
        func_0x000107c613fc(&UNK_110561b20,0x50,7);
        *(undefined8 *)(puVar6 + 0x10) = param_10;
        *(undefined8 *)(puVar6 + 0x18) = param_11;
        *(undefined **)(puVar6 + 0x20) = puVar5;
        *(undefined8 *)(puVar6 + 0x28) = param_5;
        *(undefined8 *)(puVar6 + 0x30) = param_6;
        *(undefined8 *)(puVar6 + 0x38) = param_7;
        *(undefined8 *)(puVar6 + 0x40) = param_8;
        *(undefined8 *)(puVar6 + 0x48) = param_9;
        puVar7 = PTR_PTR_1126b08b0;
        func_0x000107c61168();
        func_0x000107c61438(param_9,2);
        func_0x000107c61580(param_11,2);
        uVar8 = param_5;
        func_0x000107c61174();
        func_0x000107c61438(param_7,2);
        func_0x000107c6157c(puVar5);
        func_0x000107c61174();
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c3f71c();
        func_0x000107c61180();
        func_0x000107c61170(param_2);
        lVar19 = *(long *)(puVar4 + _DAT_112ec7ad0);
        if (lVar19 != 0) {
          puVar9 = PTR_PTR_1126b17d8;
          func_0x000107c610f8();
          puVar10 = puVar7;
          func_0x000107c61174();
          func_0x000107c615f0(lVar19);
          puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
          func_0x000107c460ec();
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar11);
          if (puVar9 != (undefined *)0x0) {
            puVar7 = puVar9;
            func_0x000107c3ecd0();
            func_0x000107c61180();
            if (puVar7 == (undefined *)0x0) {
              func_0x000107c6142c(param_9);
              func_0x000107c6142c(param_7);
              func_0x000107c61170(uVar8);
              func_0x000107c61574(puVar5);
              func_0x000107c61574(param_11);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1028b3574);
              (*pcVar3)();
            }
            func_0x000104479ecc(0);
            func_0x00010447a810(0);
            puVar12 = puVar7;
            func_0x00010447a08c(puVar7);
            func_0x000107c61170(puVar7);
            puVar7 = puVar4;
            func_0x000107c614f0();
            uVar13 = 0x112ec7b10;
            puStack_c0 = puVar7;
            func_0x0001000285a8(0x112ec7b10,&UNK_10daea018);
            ppuVar14 = &puStack_c0;
            func_0x000107c5fb18(ppuVar14,uVar13);
            uVar15 = 0;
            func_0x0001048b0ec8(0);
            func_0x000107c610f8();
            func_0x0001048b0b48(ppuVar14,uVar13,0x10,uVar15);
            puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
            func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
            func_0x000107c4c194();
            func_0x000107c61180();
            func_0x000107c51820();
            func_0x000107c61170(puVar7);
            func_0x000104478bf4(param_1,0,0,puVar12,ppuVar14);
            puVar7 = &UNK_110561968;
            func_0x000107c613fc(&UNK_110561968,0x18,7);
            func_0x000107c61614(puVar7 + 0x10,puVar4);
            puVar11 = &UNK_110561b48;
            func_0x000107c613fc(&UNK_110561b48,0x28,7);
            *(undefined **)(puVar11 + 0x10) = puVar7;
            *(code **)(puVar11 + 0x18) = FUN_1028b4f0c;
            *(undefined **)(puVar11 + 0x20) = puVar6;
            pcStack_a0 = FUN_1028b4f3c;
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0x42000000;
            pcStack_b0 = FUN_1024a6e04;
            puStack_a8 = &UNK_110561b60;
            ppuVar14 = &puStack_c0;
            puStack_98 = puVar11;
            func_0x000107c60bc4(ppuVar14);
            puVar7 = puStack_98;
            func_0x000107c6157c(puVar6);
            func_0x000107c61574(puVar7);
            lVar16 = lVar19;
            func_0x000107c43128();
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar14);
            lVar2 = _DAT_112ec7ab8;
            func_0x000107c61428(puVar4 + _DAT_112ec7ab8,&puStack_c0,0x21,0);
            func_0x000107c615f0(lVar16);
            FUN_1028b4898();
            uVar17 = *(ulong *)(puVar4 + lVar2);
            uVar18 = uVar17 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar18 + 0x10);
            if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar1) {
              uVar17 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
              FUN_1028b464c(uVar17,uVar1 + 1,1);
              uVar18 = uVar17 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar18 + 0x10) = uVar1 + 1;
            *(long *)(uVar18 + uVar1 * 8 + 0x20) = lVar16;
            *(ulong *)(puVar4 + lVar2) = uVar17;
            func_0x000107c614a8(&puStack_c0);
            func_0x000107c6142c(param_9);
            func_0x000107c61574(puVar6);
            func_0x000107c615e8(lVar19);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar12);
            func_0x000107c615e8(lVar16);
            func_0x000107c61170(puVar10);
            goto LAB_1028b34f8;
          }
          func_0x000107c615e8(lVar19);
        }
        func_0x000107c61428(puVar5 + 0x10,&puStack_c0,0,0);
        puVar9 = puVar5 + 0x10;
        func_0x000107c61618();
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c61574(puVar6);
        }
        else {
          if ((puVar9[_DAT_112ec7ab0] & 1) == 0) {
            FUN_1028b3574(param_5,param_6,param_7,param_8,param_9,param_10,param_11);
          }
          func_0x000107c61574(puVar6);
          func_0x000107c61170(puVar7);
          puVar7 = puVar9;
        }
        func_0x000107c61170(puVar7);
        func_0x000107c6142c(param_9);
LAB_1028b34f8:
        func_0x000107c61170(puVar4);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(param_11);
        func_0x000107c61170(uVar8);
        func_0x000107c6142c(param_7);
        return;
      }
    }
    FUN_1028b3574(param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  }
  func_0x000107c61170();
  return;
}



/* Entry: 1028b3574; end: 1028b3adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b3574(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  code *param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_1 == 0) goto LAB_1028b3a38;
  uVar15 = param_1;
  uVar11 = param_2;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  uVar12 = uVar11;
  if (uVar15 == 0) {
LAB_1028b35fc:
    uVar15 = 0;
    uVar11 = 0;
  }
  else {
    uVar14 = uVar15;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    uVar12 = uVar11;
    if (uVar14 == 0) goto LAB_1028b35fc;
    uVar15 = uVar14;
    func_0x000107c5faec();
    uVar12 = uVar11;
    func_0x000107c61170(uVar14);
  }
  uVar14 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar14 == 0) {
LAB_1028b3660:
    uVar14 = 0;
    uVar12 = 0;
    if (uVar11 == 0) goto LAB_1028b3654;
LAB_1028b366c:
    uVar2 = uVar15 & 0xffffffffffff;
    if ((uVar11 & 0x2000000000000000) != 0) {
      uVar2 = uVar11 >> 0x38 & 0xf;
    }
    func_0x000107c61174(param_1);
    if (uVar2 == 0) {
      func_0x000107c6142c(uVar11);
      goto LAB_1028b369c;
    }
LAB_1028b36ac:
    uVar2 = uVar15 & 0xffffffffffff;
    if ((uVar11 & 0x2000000000000000) != 0) {
      uVar2 = uVar11 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      if (uVar12 == 0) {
LAB_1028b36f4:
        func_0x000107c61434(param_5);
        uVar14 = param_4;
        uVar12 = param_5;
        if (param_5 == 0) {
          func_0x000107c61170(param_1);
          uVar12 = uVar11;
          goto LAB_1028b3a2c;
        }
      }
      else {
        uVar2 = uVar14 & 0xffffffffffff;
        if ((uVar12 & 0x2000000000000000) != 0) {
          uVar2 = uVar12 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          func_0x000107c6142c(uVar12);
          goto LAB_1028b36f4;
        }
      }
      uVar2 = uVar14 & 0xffffffffffff;
      if ((uVar12 & 0x2000000000000000) != 0) {
        uVar2 = uVar12 >> 0x38 & 0xf;
      }
      if ((uVar2 != 0) && (lVar13 = *(long *)(unaff_x20 + _DAT_112ec7ac8), lVar13 != 0)) {
        puVar3 = PTR_PTR_1126afd38;
        func_0x000107c610f8();
        func_0x000107c615f0(lVar13);
        func_0x000107c453e4();
        uVar2 = param_1;
        func_0x000107c5d984(param_1);
        func_0x000107c61180();
        puVar4 = puVar3;
        func_0x000107c5e868(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c5fadc(uVar15,uVar11);
        func_0x000107c6142c(uVar11);
        puVar4 = puVar3;
        func_0x000107c5e458(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar4);
        func_0x000107c5fadc(uVar14,uVar12);
        func_0x000107c6142c(uVar12);
        puVar4 = puVar3;
        func_0x000107c5e780(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar4);
        func_0x000107c5e770(puVar3);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c5e89c(puVar3);
        func_0x000107c61180();
        func_0x000107c61170();
        puVar4 = &UNK_110561aa8;
        func_0x000107c613fc(&UNK_110561aa8,0x11,7);
        pbVar16 = puVar4 + 0x10;
        *pbVar16 = 0;
        puVar5 = puVar3;
        func_0x000107c3ecc8(puVar3);
        func_0x000107c61180();
        uVar6 = 0;
        FUN_1028b4ec0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar7 = &UNK_110561968;
        func_0x000107c613fc(&UNK_110561968,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar8 = &UNK_110561ad0;
        func_0x000107c613fc(&UNK_110561ad0,0x30,7);
        *(undefined **)(puVar8 + 0x10) = puVar4;
        *(undefined **)(puVar8 + 0x18) = puVar7;
        *(code **)(puVar8 + 0x20) = param_6;
        *(undefined8 *)(puVar8 + 0x28) = param_7;
        pcStack_70 = FUN_1028b4f00;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1010a2bbc;
        puStack_78 = &UNK_110561ae8;
        ppuVar9 = &puStack_90;
        puStack_68 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar7 = puStack_68;
        func_0x000107c6157c(puVar4);
        func_0x000107c6157c(param_7);
        func_0x000107c61574(puVar7);
        lVar10 = lVar13;
        func_0x000107c4329c();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar6);
        lVar1 = _DAT_112ec7ab8;
        if (lVar10 == 0) {
          func_0x000107c61428(pbVar16,&puStack_90,0,0);
          if ((*pbVar16 & 1) == 0) {
            (*param_6)(0);
          }
          func_0x000107c61574(puVar4);
          func_0x000107c615e8(lVar13);
          func_0x000107c61170(puVar3);
        }
        else {
          func_0x000107c61428(unaff_x20 + _DAT_112ec7ab8,&puStack_90,0x21,0);
          func_0x000107c615f0(lVar10);
          FUN_1028b4898();
          uVar11 = *(ulong *)(unaff_x20 + lVar1);
          uVar12 = uVar11 & 0xffffffffffffff8;
          uVar15 = *(ulong *)(uVar12 + 0x10);
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar15) {
            uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_1028b464c(uVar11,uVar15 + 1,1);
            uVar12 = uVar11 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar15 + 1;
          *(long *)(uVar12 + uVar15 * 8 + 0x20) = lVar10;
          *(ulong *)(unaff_x20 + lVar1) = uVar11;
          func_0x000107c614a8(&puStack_90);
          func_0x000107c61574(puVar4);
          func_0x000107c615e8(lVar13);
          func_0x000107c61170(puVar3);
          func_0x000107c615e8(lVar10);
        }
        func_0x000107c61170(param_1);
        return;
      }
    }
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar11);
  }
  else {
    uVar2 = uVar14;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    if (uVar2 == 0) goto LAB_1028b3660;
    uVar14 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if (uVar11 != 0) goto LAB_1028b366c;
LAB_1028b3654:
    func_0x000107c61174(param_1);
LAB_1028b369c:
    func_0x000107c61434(param_3);
    uVar15 = param_2;
    uVar11 = param_3;
    if (param_3 != 0) goto LAB_1028b36ac;
    func_0x000107c61170(param_1);
  }
LAB_1028b3a2c:
  func_0x000107c6142c(uVar12);
LAB_1028b3a38:
  (*param_6)(0);
  return;
}



/* Entry: 1028b3adc; end: 1028b3bcb;  */

/* WARNING: Possible PIC construction at 0x0001028b3bac: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b3adc(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined1 auStack_68 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 == 0) {
      return;
    }
    if ((*(byte *)(param_4 + _DAT_112ec7ab0) & 1) == 0) {
      FUN_1028b3574(param_5,param_6,param_7,param_8,param_9,param_2,param_3);
    }
  }
  else {
    func_0x000107c61174();
    (*param_2)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028b3bcc; end: 1028b3dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b3bcc(ulong param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  lVar1 = unaff_x20;
  pcVar6 = param_2;
  func_0x000107c614f0();
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar8 = uVar2;
      func_0x000107c5faec();
      uVar8 = uVar8 & 0xffffffffffff;
      if (((ulong)pcVar6 & 0x2000000000000000) != 0) {
        uVar8 = (ulong)pcVar6 >> 0x38 & 0xf;
      }
      if ((uVar8 != 0) && (lVar7 = *(long *)(unaff_x20 + _DAT_112ec7ac0), lVar7 != 0)) {
        pcVar9 = pcVar6;
        func_0x000107c615f0(lVar7);
        func_0x000107c5b37c();
        func_0x000107c61180();
        if (param_1 == 0) {
          uVar8 = 0;
          pcVar9 = (code *)0xe000000000000000;
        }
        else {
          uVar8 = param_1;
          func_0x000107c5faec();
          func_0x000107c61170(param_1);
        }
        func_0x000107c5fadc(uVar8,pcVar9);
        func_0x000107c6142c(pcVar6);
        func_0x000107c6142c(pcVar9);
        puVar3 = &UNK_110561968;
        func_0x000107c613fc(&UNK_110561968,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        puVar4 = &UNK_110561cd8;
        func_0x000107c613fc(&UNK_110561cd8,0x30,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(code **)(puVar4 + 0x18) = param_2;
        *(undefined8 *)(puVar4 + 0x20) = param_3;
        *(long *)(puVar4 + 0x28) = lVar1;
        uStack_70 = 0x1028b5118;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1013ce928;
        puStack_78 = &UNK_110561cf0;
        puStack_68 = puVar4;
        func_0x000107c60bc4(&puStack_90);
        puVar3 = puStack_68;
        func_0x000107c6157c(param_3);
        func_0x000107c61574(puVar3);
        func_0x000107c4468c(lVar7);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar2);
        return;
      }
      func_0x000107c6142c(pcVar6);
      func_0x000107c61170(uVar2);
    }
  }
  (*param_2)(0,0);
  return;
}



/* Entry: 1028b3dc4; end: 1028b3fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b3dc4(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + _DAT_112ec7ab0) & 1) == 0) && (param_1 != 0)) {
      puVar3 = &UNK_110561968;
      func_0x000107c613fc(&UNK_110561968,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar4 = &UNK_110561a58;
      func_0x000107c613fc(&UNK_110561a58,0x30,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(code **)(puVar4 + 0x18) = param_3;
      *(undefined8 *)(puVar4 + 0x20) = param_4;
      *(undefined8 *)(puVar4 + 0x28) = param_5;
      pcStack_68 = FUN_1028b4d54;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100f3eca4;
      puStack_70 = &UNK_110561a70;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_60;
      func_0x000107c6157c(param_4);
      func_0x000107c615f0(param_1);
      func_0x000107c61574(puVar3);
      lVar6 = param_1;
      func_0x000107c5e06c();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      lVar2 = _DAT_112ec7ab8;
      if (lVar6 != 0) {
        func_0x000107c61428(param_2 + _DAT_112ec7ab8,&puStack_88,0x21,0);
        func_0x000107c615f0(lVar6);
        FUN_1028b4898();
        uVar7 = *(ulong *)(param_2 + lVar2);
        uVar8 = uVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar8 + 0x10);
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_1028b464c(uVar7,uVar1 + 1,1);
          uVar8 = uVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
        *(long *)(uVar8 + uVar1 * 8 + 0x20) = lVar6;
        *(ulong *)(param_2 + lVar2) = uVar7;
        func_0x000107c614a8(&puStack_88);
        func_0x000107c615e8(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar6);
        return;
      }
      func_0x000107c61170(param_2);
      func_0x000107c615e8(param_1);
      return;
    }
    func_0x000107c61170(param_2);
  }
  (*param_3)(0,0);
  return;
}



/* Entry: 1028b3fc4; end: 1028b40e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b3fc4(ulong param_1,long param_2,long param_3,code *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar5,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((*(byte *)(param_3 + _DAT_112ec7ab0) & 1) == 0) {
      if ((param_2 == 0) && (param_1 != 0)) {
        uVar2 = param_1;
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c3ee4c();
        func_0x000107c61180();
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b40e8);
          (*pcVar1)();
        }
        uVar4 = uVar3;
        func_0x000107c4a1c4();
        func_0x000107c61170(uVar3);
        if ((uVar4 & 1) == 0) {
          func_0x000107c61174(uVar2);
          FUN_1028b4d60(param_1);
          func_0x000107c61170(uVar2);
          (*param_4)(param_1,puVar5);
          func_0x000107c61170(param_3);
          func_0x000107c61170(uVar2);
          func_0x000107c6142c(puVar5);
          return;
        }
        func_0x000107c61170();
      }
      (*param_4)(0,0);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028b40e8; end: 1028b4213;  */

void FUN_1028b40e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  puVar1 = &UNK_110561968;
  func_0x000107c613fc(&UNK_110561968,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar2 = &UNK_110561b98;
  func_0x000107c613fc(&UNK_110561b98,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  puVar1 = &UNK_110561bc0;
  func_0x000107c613fc(&UNK_110561bc0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10daea028;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_4);
  uVar3 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,4,0,0,&UNK_10daea038,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 1028b4214; end: 1028b4283;  */

void FUN_1028b4214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028b4284,uVar1,uVar2);
  return;
}



/* Entry: 1028b4284; end: 1028b4467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b4284(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x40,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    if ((*(byte *)(lVar8 + _DAT_112ec7ab0) & 1) == 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
      puVar3 = &UNK_110561be8;
      func_0x000107c613fc(&UNK_110561be8,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar10;
      *(undefined8 *)(puVar3 + 0x18) = uVar1;
      puVar4 = &UNK_110561c10;
      func_0x000107c613fc(&UNK_110561c10,0x20,7);
      *(code **)(puVar4 + 0x10) = FUN_1028b5058;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      *(code **)(unaff_x22 + 0x30) = FUN_1028b5060;
      *(undefined **)(unaff_x22 + 0x38) = puVar4;
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x1024a72b8;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_110561c28;
      lVar8 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
      func_0x000107c6157c(uVar1);
      func_0x000107c61574(uVar9);
      puVar4 = &UNK_110561c60;
      func_0x000107c613fc(&UNK_110561c60,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar10;
      *(undefined8 *)(puVar4 + 0x18) = uVar1;
      puVar5 = &UNK_110561c88;
      func_0x000107c613fc(&UNK_110561c88,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = 0x1028b5080;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x30) = 0x1028b511c;
      *(undefined **)(unaff_x22 + 0x38) = puVar5;
      *(undefined **)(unaff_x22 + 0x10) = puVar2;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_100e27b38;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_110561ca0;
      lVar6 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar6);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
      func_0x000107c6157c(uVar1);
      func_0x000107c61574(uVar10);
      func_0x000107c4c754(uVar7);
      func_0x000107c60bd0(lVar6);
      func_0x000107c60bd0(lVar8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
    }
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x0001028b4464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028b4468; end: 1028b44bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b4468(long param_1,code *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11307d350);
    func_0x000107c61174(uVar1);
  }
  (*param_2)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b44c0; end: 1028b44fb;  */

void FUN_1028b44c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028b44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028b44fc; end: 1028b459f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b44fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,code *param_6)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,1,0);
  *(undefined1 *)(param_4 + 0x10) = 1;
  func_0x000107c61428(param_5 + 0x10,auStack_70,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    if ((*(byte *)(param_5 + _DAT_112ec7ab0) & 1) == 0) {
      (*param_6)(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028b45a0; end: 1028b45cb; -[SCSnapMeReplyAvatarFetcher init] */

void FUN_1028b45a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapMeReplyUtils.SCSnapMeReplyAvatarFetcher",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b45cc);
  (*pcVar1)();
}



/* Entry: 1028b45cc; end: 1028b464b;  */

undefined * FUN_1028b45cc(undefined *param_1,undefined *param_2)

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
    FUN_1028b6d28();
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



/* Entry: 1028b464c; end: 1028b4773;  */

ulong FUN_1028b464c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b4774);
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
  FUN_1028b45cc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b4770);
      (*pcVar1)();
    }
    FUN_1028b4774(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1028b4774; end: 1028b4897;  */

long FUN_1028b4774(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028b4894);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1028b4898);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ec7b08;
        func_0x0001000285a8(0x112ec7b08,&UNK_10daea010);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ec7b08;
      func_0x0001000285a8(0x112ec7b08,&UNK_10daea010);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028b4890);
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



/* Entry: 1028b4898; end: 1028b4ab3;  */

void FUN_1028b4898(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1028b464c(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1028b4ab4; end: 1028b4adf;  */

void FUN_1028b4ab4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1028b2f9c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1028b4ae0; end: 1028b4aff;  */

void FUN_1028b4ae0(void)

{
  func_0x000107c61168(&PTR_PTR_11286aab8);
  return;
}



/* Entry: 1028b4b00; end: 1028b4b0f;  */

void FUN_1028b4b00(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001028b4b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1028b4b10; end: 1028b4b83;  */

void FUN_1028b4b10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028b4b84; end: 1028b4b97;  */

ulong FUN_1028b4b84(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b4c7c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b4c80);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b1338;
    func_0x000107c61168(PTR_PTR_1126b1338);
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
    puVar4 = PTR_PTR_1126b1338;
    func_0x000107c61168(PTR_PTR_1126b1338);
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
  FUN_1028b4ec0(0,0x112ec7b00,&PTR_PTR_1126b1338);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b4d54);
  (*pcVar2)();
}



/* Entry: 1028b4b98; end: 1028b4d53;  */

ulong FUN_1028b4b98(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b4c7c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b4c80);
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
  FUN_1028b4ec0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b4d54);
  (*pcVar2)();
}



/* Entry: 1028b4d54; end: 1028b4d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b4d54(ulong param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar6 = auStack_68;
  func_0x000107c61428(lVar2 + 0x10,puVar6,0,0,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + _DAT_112ec7ab0) & 1) == 0) {
      if ((param_2 == 0) && (param_1 != 0)) {
        uVar3 = param_1;
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c3ee4c();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b40e8);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c4a1c4();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) == 0) {
          func_0x000107c61174(uVar3);
          FUN_1028b4d60(param_1);
          func_0x000107c61170(uVar3);
          (*pcVar1)(param_1,puVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(puVar6);
          return;
        }
        func_0x000107c61170();
      }
      (*pcVar1)(0,0);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028b4d60; end: 1028b4ebf;  */

undefined1  [16] FUN_1028b4d60(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_1 != 0) {
    func_0x000107c3ee4c();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b4eb8);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x000107c3ee48();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c49c24();
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar2;
        func_0x000107c41f7c();
        func_0x000107c61180();
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b4ebc);
          (*pcVar1)();
        }
        uVar4 = uVar3;
        func_0x000107c5faec();
        uVar7 = param_2;
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(param_2);
        uVar3 = uVar4 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar3 = param_2 >> 0x38 & 0xf;
        }
        uVar4 = uVar2;
        if (uVar3 == 0) {
          uVar3 = uVar2;
          func_0x000107c4caa0();
          func_0x000107c61180();
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b4ec0);
            (*pcVar1)();
          }
          uVar5 = uVar3;
          func_0x000107c5faec();
          uVar6 = uVar7;
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(uVar7);
          uVar3 = uVar5 & 0xffffffffffff;
          if ((uVar7 & 0x2000000000000000) != 0) {
            uVar3 = uVar7 >> 0x38 & 0xf;
          }
          if (uVar3 == 0) goto LAB_1028b4e94;
          func_0x000107c4caa0();
          func_0x000107c61180();
          uVar7 = uVar6;
        }
        else {
          func_0x000107c41f7c();
          func_0x000107c61180();
        }
        if (uVar4 != 0) {
          param_1 = uVar4;
          func_0x000107c5faec();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar2);
          goto LAB_1028b4ea4;
        }
      }
LAB_1028b4e94:
      func_0x000107c61170(uVar2);
    }
    param_1 = 0;
  }
  uVar7 = 0;
LAB_1028b4ea4:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1028b4ec0; end: 1028b4eff;  */

void FUN_1028b4ec0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028b4f00; end: 1028b4f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b4f00(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,1,0,lVar3,pcVar2,*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined1 *)(lVar1 + 0x10) = 1;
  func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + _DAT_112ec7ab0) & 1) == 0) {
      (*pcVar2)(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028b4f0c; end: 1028b4f3b;  */

void FUN_1028b4f0c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028b3adc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1028b4f3c; end: 1028b4f47;  */

void FUN_1028b4f3c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_110561968;
  func_0x000107c613fc(&UNK_110561968,0x18,7);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_110561b98;
  func_0x000107c613fc(&UNK_110561b98,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  puVar1 = &UNK_110561bc0;
  func_0x000107c613fc(&UNK_110561bc0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10daea028;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar5);
  uVar4 = 0x27;
  func_0x0001001ca524(0x27,3,0x2c,4,0,0,&UNK_10daea038,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1028b4f48; end: 1028b4fab;  */

void FUN_1028b4f48(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1028b4fac;
  plVar5[0xd] = lVar3;
  plVar5[0xe] = lVar2;
  plVar5[0xb] = lVar4;
  plVar5[0xc] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0xf] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028b4284,lVar3,lVar4);
  return;
}



/* Entry: 1028b4fac; end: 1028b4fe7;  */

void FUN_1028b4fac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028b4fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028b4fe8; end: 1028b5057;  */

void FUN_1028b4fe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1028b5128;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1028b5058; end: 1028b505f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b5058(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307d350);
    func_0x000107c61174(uVar2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  (*pcVar1)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1028b5060; end: 1028b50db;  */

void FUN_1028b5060(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028b50dc; end: 1028b512b;  */

void FUN_1028b50dc(long param_1,long param_2)

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



/* Entry: 1028b512c; end: 1028b527b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1028b512c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ec7b18) = 0;
  func_0x0001000285a8(0x112e93988,&UNK_10daea040);
  uVar1 = param_1;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b20) = uVar1;
  func_0x0001000285a8(0x112d56780,&UNK_10da9f4a0);
  uVar1 = param_2;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b28) = uVar1;
  func_0x0001000285a8(0x112e93990,&UNK_10daea050);
  uVar1 = param_3;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b30) = uVar1;
  func_0x0001000285a8(0x112ec7b38,&UNK_10daea058);
  uVar1 = param_4;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b40) = uVar1;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar2;
}



/* Entry: 1028b527c; end: 1028b52df;  */

undefined8
FUN_1028b527c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1028b6250();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 1028b52e0; end: 1028b5387; -[SCSnapMeReplyOriginalStoryResolver initWithMyStoriesDataCoordinator:customStoriesDataFetcher:snapProProfilesProvider:snapProUserProfileIdProvider:] */

undefined8
FUN_1028b52e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_3;
  FUN_1028b6250(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 1028b5388; end: 1028b539b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b5388(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112ec7b18) = 1;
  return;
}


