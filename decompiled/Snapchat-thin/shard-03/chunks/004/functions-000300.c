/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028c0fa8; end: 1028c10e7;  */

undefined1  [16] FUN_1028c0fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  puVar5 = *(undefined **)(unaff_x20 + 0x20);
  puVar1 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    puVar2 = puVar1;
    FUN_1028c11e8();
    puVar3 = &UNK_110562c70;
    func_0x000107c613fc(&UNK_110562c70,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0;
    func_0x00010434d014(0);
    func_0x000107c613fc();
    func_0x00010434cbd0(uVar4,puVar1,0,puVar2,param_2,0xd00000000000001a,0x800000010f0c6e50,0,1,
                        0x1028c11e0,puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = puVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
  }
  func_0x000107c6157c(puVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 1028c10e8; end: 1028c1157;  */

void FUN_1028c10e8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_1);
    (*pcVar1)();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1028c1158; end: 1028c11a3;  */

void FUN_1028c1158(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028c11a4; end: 1028c11b3;  */

undefined8 FUN_1028c11a4(void)

{
  return 6;
}



/* Entry: 1028c11b4; end: 1028c11cb;  */

void FUN_1028c11b4(void)

{
  FUN_1028c0fa8();
  return;
}



/* Entry: 1028c11cc; end: 1028c11e7;  */

undefined8 FUN_1028c11cc(void)

{
  return 0;
}



/* Entry: 1028c11e8; end: 1028c12b3;  */

undefined1  [16] FUN_1028c11e8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdf;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0c6e70);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0c6ea0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c12b4);
  (*pcVar1)();
}



/* Entry: 1028c12b4; end: 1028c12fb; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c12b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec7fe0;
  func_0x000107c61428(param_1 + _DAT_112ec7fe0,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028c12fc; end: 1028c135f; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c12fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec7fe0;
  func_0x000107c61428(param_1 + _DAT_112ec7fe0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1028c1360; end: 1028c141f; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin isApplicableToMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1028c1360(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112ec7fe8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c4ce08(lVar3,param_2,param_3);
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c4c9e4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  if (lVar2 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4e084(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    bVar1 = lVar3 == 8;
  }
  return bVar1;
}



/* Entry: 1028c1420; end: 1028c1427; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin pluginType] */

undefined8 FUN_1028c1420(void)

{
  return 0;
}



/* Entry: 1028c1428; end: 1028c143f; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028c143c) */

void FUN_1028c1428(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028c1440; end: 1028c1b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c1440(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined *apuStack_c8 [3];
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar17 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar17,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    puVar5 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
  }
  else {
    lVar1 = *(long *)(param_3 + _DAT_112ec7fe8);
    func_0x000107c4ce08();
    func_0x000107c61180();
    lVar9 = lVar1;
    func_0x000107c4c9e4();
    func_0x000107c61180();
    if (lVar9 != 0) {
      lVar2 = lVar9;
      func_0x000107c4e084();
      func_0x000107c61170(lVar9);
      if (lVar2 == 8) {
        lVar2 = *(long *)(param_3 + _DAT_112ec8000);
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar9 = _DAT_112ec8008;
        if (lVar2 != 0) {
          lVar18 = *(long *)(param_3 + _DAT_112ec8008);
          if (lVar18 != 0) {
            lVar3 = lVar18;
            func_0x000107c615f0();
            func_0x000107c43d28();
            func_0x000107c61180();
            lVar4 = lVar3;
            func_0x000107c41050();
            func_0x000107c61180();
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
            func_0x000107c5bcc0();
            func_0x000107c61170(lVar4);
            func_0x000107c615e8(lVar18);
            if (lVar3 == 1) {
              lVar18 = *(long *)(param_3 + _DAT_112ec8010);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar18 != 0) {
                func_0x000107c4bf68();
                func_0x000107c615e8(lVar18);
              }
            }
          }
          lVar18 = lVar1;
          func_0x000107c4cde0();
          func_0x000107c61180();
          lVar3 = lVar18;
          func_0x000107c5faec();
          if (lVar3 != *(long *)(param_3 + _DAT_112ec7ff8) ||
              puVar17 != (undefined1 *)((long *)(param_3 + _DAT_112ec7ff8))[1]) {
            func_0x000107c605b8();
          }
          func_0x000107c6142c(puVar17);
          puVar5 = &UNK_110562d48;
          func_0x000107c613fc(&UNK_110562d48,0x18,7);
          func_0x000107c61614(puVar5 + 0x10,param_3);
          pppuVar6 = (undefined8 ***)PTR_PTR_1126ab6e8;
          func_0x000107c610f8();
          pcStack_88 = FUN_1028c20a4;
          pppuStack_a8 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_110562d88;
          ppppuVar7 = &pppuStack_a8;
          puStack_80 = puVar5;
          func_0x000107c60bc4(ppppuVar7);
          func_0x000107c6157c(puVar5);
          func_0x000107c46f8c();
          func_0x000107c60bd0(ppppuVar7);
          func_0x000107c61170(lVar18);
          puVar8 = puStack_80;
          func_0x000107c61574(puVar5);
          func_0x000107c61574(puVar8);
          puVar8 = PTR_PTR_1126ab6f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c5a3d0();
          lVar9 = *(long *)(param_3 + lVar9);
          if (lVar9 == 0) {
            func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
            ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            ppppuVar7 = &pppuStack_a8;
            pppuStack_a8 = ppppuVar11;
            func_0x000100854cb0(ppppuVar7);
            func_0x000107c61170(ppppuVar11);
            func_0x0001004575f0();
            func_0x000107c61574(ppppuVar7);
            ppppuVar7 = ppppuVar11;
            func_0x000107c5cb24(ppppuVar11);
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar11);
            func_0x000107c54500(puVar8);
          }
          else {
            func_0x000107c43d28();
            func_0x000107c61180();
            func_0x0001000285a8(0x112d6ca20,&UNK_10d92f668);
            lVar18 = lVar9;
            func_0x000107c5d6fc(lVar9);
            func_0x000107c61180();
            lVar3 = lVar18;
            func_0x0001000b637c();
            func_0x000107c61170(lVar18);
            puVar5 = &UNK_110562dc0;
            func_0x000107c613fc(&UNK_110562dc0,0x18,7);
            *(undefined8 *)(puVar5 + 0x10) = param_5;
            uVar10 = 0;
            FUN_1028c20c8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar12 = 0x1028c2108;
            func_0x0001000bfde0(0x1028c2108,puVar5,uVar10);
            func_0x000107c61574(lVar3);
            func_0x000107c61574(puVar5);
            lVar18 = lVar9;
            func_0x000107c41050(lVar9);
            func_0x000107c61180();
            func_0x000107c5bcc0();
            func_0x000107c61170(lVar18);
            ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            ppppuVar11 = &pppuStack_a8;
            pppuStack_a8 = ppppuVar7;
            func_0x0001006c71a4(ppppuVar11);
            func_0x000107c61170(ppppuVar7);
            func_0x000107c61574(uVar12);
            func_0x00010109e534();
            func_0x0001000c2068();
            func_0x000107c61574(ppppuVar11);
            func_0x0001004575f0();
            func_0x000107c61574(uVar12);
            ppppuVar7 = ppppuVar11;
            func_0x000107c5cb24(ppppuVar11);
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar11);
            func_0x000107c54500(puVar8);
            func_0x000107c61170(lVar9);
          }
          func_0x000107c61170(ppppuVar7);
          func_0x0001000285a8(0x112ec3528,&UNK_10dae40c0);
          func_0x0001000b637c(param_4);
          uVar12 = 0;
          FUN_1028c20c8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pcVar13 = FUN_1028c1d2c;
          func_0x0001000bfde0(FUN_1028c1d2c,0,uVar12);
          func_0x000107c61574(param_4);
          func_0x00010109e534();
          func_0x0001000c2068();
          func_0x000107c61574(pcVar13);
          func_0x0001004575f0();
          func_0x000107c61574(param_4);
          pcVar14 = pcVar13;
          func_0x000107c5cb24(pcVar13);
          func_0x000107c61180();
          func_0x000107c61170(pcVar13);
          func_0x000107c57cec(puVar8);
          func_0x000107c61170(pcVar14);
          uVar12 = 0x112ec8048;
          uVar15 = 0;
          FUN_1028c20c8(0,0x112ec8048,&PTR_PTR_1126ab6f8);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar10 = uVar15;
          func_0x000107c5faec();
          func_0x000107c61170(uVar15);
          uVar15 = 0;
          FUN_1028c20c8(0,0x112ec8050,&PTR_PTR_1126ab6e8);
          uVar16 = 0;
          pppuStack_a8 = pppuVar6;
          puStack_90 = (undefined *)uVar15;
          FUN_1028c20c8(0,0x112ec8058,&PTR_PTR_1126ab6f0);
          apuStack_c8[0] = puVar8;
          uStack_b0 = uVar16;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          func_0x000107c61174(pppuVar6);
          func_0x000107c61174(puVar8);
          FUN_1027efbc4(uVar10,uVar12,&pppuStack_a8,apuStack_c8);
          puVar5 = PTR_PTR_1126ae750;
          func_0x000107c61168();
          func_0x000107c4e01c();
          func_0x000107c61180();
          func_0x000107c61170(param_3);
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(pppuVar6);
          goto LAB_1028c1af8;
        }
      }
    }
    puVar5 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c615e8(lVar1);
  }
LAB_1028c1af8:
  *param_1 = puVar5;
  return;
}



/* Entry: 1028c1b1c; end: 1028c1b6f;  */

void FUN_1028c1b1c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1028c1b70();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028c1b70; end: 1028c1d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c1b70(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar4 = _DAT_112ec7fe0;
  func_0x000107c61428(unaff_x20 + _DAT_112ec7fe0,auStack_58,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ec8008);
    if (lVar5 != 0) {
      func_0x000107c615f0(lVar4);
      lVar6 = lVar5;
      func_0x000107c615f0();
      func_0x000107c43d28();
      func_0x000107c61180();
      lVar1 = lVar6;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      lVar6 = lVar1;
      func_0x000107c5bcc0();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar5);
      if (lVar6 == 1) {
        uVar2 = 0;
        func_0x00010439c014(0);
        func_0x000107c610f8();
        uVar3 = 0x17;
        func_0x00010439b9d8(uVar2,0x17,0,0,0x8f,0,0,0x42,0);
        lVar6 = *(long *)(unaff_x20 + _DAT_112ec7ff0);
        lVar5 = lVar6;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar6);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec8018);
        func_0x00010439a550(0);
        uVar2 = 0;
        func_0x0001043998c4(0);
        func_0x000107c3eda8(uVar7);
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c42c1c(lVar6);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar7);
      }
      else {
        func_0x000107c615e8(lVar4);
      }
    }
  }
  return;
}



/* Entry: 1028c1d2c; end: 1028c1d6b;  */

void FUN_1028c1d2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  func_0x000107c500a4(*param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 1028c1d6c; end: 1028c1ecb; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_1028c1d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x0001000b637c(param_3);
  uVar3 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar2);
  puVar4 = &UNK_110562d48;
  func_0x000107c613fc(&UNK_110562d48,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  puVar5 = &UNK_110562d70;
  func_0x000107c613fc(&UNK_110562d70,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  func_0x000107c61174(param_4);
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar6 = FUN_1028c214c;
  func_0x0001000bfde0(FUN_1028c214c,puVar5,uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar5);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1028c1ecc; end: 1028c1f2b; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin init] */

void FUN_1028c1ecc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateSongStatusMessageAccessoryPlugin.CreateSongStatusMessageAccessoryPlugin"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c1ef8);
  (*pcVar1)();
}



/* Entry: 1028c1f2c; end: 1028c1fc7; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028c1f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c1f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c1f70) */
/* WARNING: Removing unreachable block (ram,0x0001028c1fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c1f2c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7fe0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec7ff8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec8000));
  return;
}



/* Entry: 1028c1fc8; end: 1028c204b;  */

/* WARNING: Possible PIC construction at 0x0001028c2004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c2020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c2008) */
/* WARNING: Removing unreachable block (ram,0x0001028c2024) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c1fc8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028c204c; end: 1028c2057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c204c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x20;
  undefined *apuStack_c8 [3];
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar17 = auStack_78;
  func_0x000107c61428(lVar1 + 0x10,puVar17,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
  }
  else {
    lVar2 = *(long *)(lVar1 + _DAT_112ec7fe8);
    func_0x000107c4ce08();
    func_0x000107c61180();
    lVar10 = lVar2;
    func_0x000107c4c9e4();
    func_0x000107c61180();
    if (lVar10 != 0) {
      lVar3 = lVar10;
      func_0x000107c4e084();
      func_0x000107c61170(lVar10);
      if (lVar3 == 8) {
        lVar3 = *(long *)(lVar1 + _DAT_112ec8000);
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar10 = _DAT_112ec8008;
        if (lVar3 != 0) {
          lVar19 = *(long *)(lVar1 + _DAT_112ec8008);
          if (lVar19 != 0) {
            lVar4 = lVar19;
            func_0x000107c615f0();
            func_0x000107c43d28();
            func_0x000107c61180();
            lVar5 = lVar4;
            func_0x000107c41050();
            func_0x000107c61180();
            func_0x000107c61170(lVar4);
            lVar4 = lVar5;
            func_0x000107c5bcc0();
            func_0x000107c61170(lVar5);
            func_0x000107c615e8(lVar19);
            if (lVar4 == 1) {
              lVar19 = *(long *)(lVar1 + _DAT_112ec8010);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar19 != 0) {
                func_0x000107c4bf68();
                func_0x000107c615e8(lVar19);
              }
            }
          }
          lVar19 = lVar2;
          func_0x000107c4cde0();
          func_0x000107c61180();
          lVar4 = lVar19;
          func_0x000107c5faec();
          if (lVar4 != *(long *)(lVar1 + _DAT_112ec7ff8) ||
              puVar17 != (undefined1 *)((long *)(lVar1 + _DAT_112ec7ff8))[1]) {
            func_0x000107c605b8();
          }
          func_0x000107c6142c(puVar17);
          puVar6 = &UNK_110562d48;
          func_0x000107c613fc(&UNK_110562d48,0x18,7);
          func_0x000107c61614(puVar6 + 0x10,lVar1);
          pppuVar7 = (undefined8 ***)PTR_PTR_1126ab6e8;
          func_0x000107c610f8();
          pcStack_88 = FUN_1028c20a4;
          pppuStack_a8 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_110562d88;
          ppppuVar8 = &pppuStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppppuVar8);
          func_0x000107c6157c(puVar6);
          func_0x000107c46f8c();
          func_0x000107c60bd0(ppppuVar8);
          func_0x000107c61170(lVar19);
          puVar9 = puStack_80;
          func_0x000107c61574(puVar6);
          func_0x000107c61574(puVar9);
          puVar9 = PTR_PTR_1126ab6f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c5a3d0();
          lVar10 = *(long *)(lVar1 + lVar10);
          if (lVar10 == 0) {
            func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
            ppppuVar12 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            ppppuVar8 = &pppuStack_a8;
            pppuStack_a8 = ppppuVar12;
            func_0x000100854cb0(ppppuVar8);
            func_0x000107c61170(ppppuVar12);
            func_0x0001004575f0();
            func_0x000107c61574(ppppuVar8);
            ppppuVar8 = ppppuVar12;
            func_0x000107c5cb24(ppppuVar12);
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar12);
            func_0x000107c54500(puVar9);
          }
          else {
            func_0x000107c43d28();
            func_0x000107c61180();
            func_0x0001000285a8(0x112d6ca20,&UNK_10d92f668);
            lVar19 = lVar10;
            func_0x000107c5d6fc(lVar10);
            func_0x000107c61180();
            lVar4 = lVar19;
            func_0x0001000b637c();
            func_0x000107c61170(lVar19);
            puVar6 = &UNK_110562dc0;
            func_0x000107c613fc(&UNK_110562dc0,0x18,7);
            *(undefined8 *)(puVar6 + 0x10) = uVar18;
            uVar11 = 0;
            FUN_1028c20c8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar18 = 0x1028c2108;
            func_0x0001000bfde0(0x1028c2108,puVar6,uVar11);
            func_0x000107c61574(lVar4);
            func_0x000107c61574(puVar6);
            lVar19 = lVar10;
            func_0x000107c41050(lVar10);
            func_0x000107c61180();
            func_0x000107c5bcc0();
            func_0x000107c61170(lVar19);
            ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            ppppuVar12 = &pppuStack_a8;
            pppuStack_a8 = ppppuVar8;
            func_0x0001006c71a4(ppppuVar12);
            func_0x000107c61170(ppppuVar8);
            func_0x000107c61574(uVar18);
            func_0x00010109e534();
            func_0x0001000c2068();
            func_0x000107c61574(ppppuVar12);
            func_0x0001004575f0();
            func_0x000107c61574(uVar18);
            ppppuVar8 = ppppuVar12;
            func_0x000107c5cb24(ppppuVar12);
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar12);
            func_0x000107c54500(puVar9);
            func_0x000107c61170(lVar10);
          }
          func_0x000107c61170(ppppuVar8);
          func_0x0001000285a8(0x112ec3528,&UNK_10dae40c0);
          func_0x0001000b637c(uVar13);
          uVar18 = 0;
          FUN_1028c20c8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pcVar14 = FUN_1028c1d2c;
          func_0x0001000bfde0(FUN_1028c1d2c,0,uVar18);
          func_0x000107c61574(uVar13);
          func_0x00010109e534();
          func_0x0001000c2068();
          func_0x000107c61574(pcVar14);
          func_0x0001004575f0();
          func_0x000107c61574(uVar13);
          pcVar15 = pcVar14;
          func_0x000107c5cb24(pcVar14);
          func_0x000107c61180();
          func_0x000107c61170(pcVar14);
          func_0x000107c57cec(puVar9);
          func_0x000107c61170(pcVar15);
          uVar13 = 0x112ec8048;
          uVar11 = 0;
          FUN_1028c20c8(0,0x112ec8048,&PTR_PTR_1126ab6f8);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar18 = uVar11;
          func_0x000107c5faec();
          func_0x000107c61170(uVar11);
          uVar11 = 0;
          FUN_1028c20c8(0,0x112ec8050,&PTR_PTR_1126ab6e8);
          uVar16 = 0;
          pppuStack_a8 = pppuVar7;
          puStack_90 = (undefined *)uVar11;
          FUN_1028c20c8(0,0x112ec8058,&PTR_PTR_1126ab6f0);
          apuStack_c8[0] = puVar9;
          uStack_b0 = uVar16;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          func_0x000107c61174(pppuVar7);
          func_0x000107c61174(puVar9);
          FUN_1027efbc4(uVar18,uVar13,&pppuStack_a8,apuStack_c8);
          puVar6 = PTR_PTR_1126ae750;
          func_0x000107c61168();
          func_0x000107c4e01c();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar18);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(pppuVar7);
          goto LAB_1028c1af8;
        }
      }
    }
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
LAB_1028c1af8:
  *param_1 = puVar6;
  return;
}



/* Entry: 1028c2058; end: 1028c20a3;  */

void FUN_1028c2058(void)

{
  func_0x000107c61168(&PTR_PTR_11286b1c8);
  return;
}



/* Entry: 1028c20a4; end: 1028c20c7;  */

void FUN_1028c20a4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1028c1b70();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1028c20c8; end: 1028c214b;  */

void FUN_1028c20c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028c214c; end: 1028c214f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c214c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x20;
  undefined *apuStack_c8 [3];
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar17 = auStack_78;
  func_0x000107c61428(lVar1 + 0x10,puVar17,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
  }
  else {
    lVar2 = *(long *)(lVar1 + _DAT_112ec7fe8);
    func_0x000107c4ce08();
    func_0x000107c61180();
    lVar10 = lVar2;
    func_0x000107c4c9e4();
    func_0x000107c61180();
    if (lVar10 != 0) {
      lVar3 = lVar10;
      func_0x000107c4e084();
      func_0x000107c61170(lVar10);
      if (lVar3 == 8) {
        lVar3 = *(long *)(lVar1 + _DAT_112ec8000);
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar10 = _DAT_112ec8008;
        if (lVar3 != 0) {
          lVar19 = *(long *)(lVar1 + _DAT_112ec8008);
          if (lVar19 != 0) {
            lVar4 = lVar19;
            func_0x000107c615f0();
            func_0x000107c43d28();
            func_0x000107c61180();
            lVar5 = lVar4;
            func_0x000107c41050();
            func_0x000107c61180();
            func_0x000107c61170(lVar4);
            lVar4 = lVar5;
            func_0x000107c5bcc0();
            func_0x000107c61170(lVar5);
            func_0x000107c615e8(lVar19);
            if (lVar4 == 1) {
              lVar19 = *(long *)(lVar1 + _DAT_112ec8010);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar19 != 0) {
                func_0x000107c4bf68();
                func_0x000107c615e8(lVar19);
              }
            }
          }
          lVar19 = lVar2;
          func_0x000107c4cde0();
          func_0x000107c61180();
          lVar4 = lVar19;
          func_0x000107c5faec();
          if (lVar4 != *(long *)(lVar1 + _DAT_112ec7ff8) ||
              puVar17 != (undefined1 *)((long *)(lVar1 + _DAT_112ec7ff8))[1]) {
            func_0x000107c605b8();
          }
          func_0x000107c6142c(puVar17);
          puVar6 = &UNK_110562d48;
          func_0x000107c613fc(&UNK_110562d48,0x18,7);
          func_0x000107c61614(puVar6 + 0x10,lVar1);
          pppuVar7 = (undefined8 ***)PTR_PTR_1126ab6e8;
          func_0x000107c610f8();
          pcStack_88 = FUN_1028c20a4;
          pppuStack_a8 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_110562d88;
          ppppuVar8 = &pppuStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppppuVar8);
          func_0x000107c6157c(puVar6);
          func_0x000107c46f8c();
          func_0x000107c60bd0(ppppuVar8);
          func_0x000107c61170(lVar19);
          puVar9 = puStack_80;
          func_0x000107c61574(puVar6);
          func_0x000107c61574(puVar9);
          puVar9 = PTR_PTR_1126ab6f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c5a3d0();
          lVar10 = *(long *)(lVar1 + lVar10);
          if (lVar10 == 0) {
            func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
            ppppuVar12 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            ppppuVar8 = &pppuStack_a8;
            pppuStack_a8 = ppppuVar12;
            func_0x000100854cb0(ppppuVar8);
            func_0x000107c61170(ppppuVar12);
            func_0x0001004575f0();
            func_0x000107c61574(ppppuVar8);
            ppppuVar8 = ppppuVar12;
            func_0x000107c5cb24(ppppuVar12);
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar12);
            func_0x000107c54500(puVar9);
          }
          else {
            func_0x000107c43d28();
            func_0x000107c61180();
            func_0x0001000285a8(0x112d6ca20,&UNK_10d92f668);
            lVar19 = lVar10;
            func_0x000107c5d6fc(lVar10);
            func_0x000107c61180();
            lVar4 = lVar19;
            func_0x0001000b637c();
            func_0x000107c61170(lVar19);
            puVar6 = &UNK_110562dc0;
            func_0x000107c613fc(&UNK_110562dc0,0x18,7);
            *(undefined8 *)(puVar6 + 0x10) = uVar18;
            uVar11 = 0;
            FUN_1028c20c8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar18 = 0x1028c2108;
            func_0x0001000bfde0(0x1028c2108,puVar6,uVar11);
            func_0x000107c61574(lVar4);
            func_0x000107c61574(puVar6);
            lVar19 = lVar10;
            func_0x000107c41050(lVar10);
            func_0x000107c61180();
            func_0x000107c5bcc0();
            func_0x000107c61170(lVar19);
            ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8();
            func_0x000107c45a48();
            ppppuVar12 = &pppuStack_a8;
            pppuStack_a8 = ppppuVar8;
            func_0x0001006c71a4(ppppuVar12);
            func_0x000107c61170(ppppuVar8);
            func_0x000107c61574(uVar18);
            func_0x00010109e534();
            func_0x0001000c2068();
            func_0x000107c61574(ppppuVar12);
            func_0x0001004575f0();
            func_0x000107c61574(uVar18);
            ppppuVar8 = ppppuVar12;
            func_0x000107c5cb24(ppppuVar12);
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar12);
            func_0x000107c54500(puVar9);
            func_0x000107c61170(lVar10);
          }
          func_0x000107c61170(ppppuVar8);
          func_0x0001000285a8(0x112ec3528,&UNK_10dae40c0);
          func_0x0001000b637c(uVar13);
          uVar18 = 0;
          FUN_1028c20c8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pcVar14 = FUN_1028c1d2c;
          func_0x0001000bfde0(FUN_1028c1d2c,0,uVar18);
          func_0x000107c61574(uVar13);
          func_0x00010109e534();
          func_0x0001000c2068();
          func_0x000107c61574(pcVar14);
          func_0x0001004575f0();
          func_0x000107c61574(uVar13);
          pcVar15 = pcVar14;
          func_0x000107c5cb24(pcVar14);
          func_0x000107c61180();
          func_0x000107c61170(pcVar14);
          func_0x000107c57cec(puVar9);
          func_0x000107c61170(pcVar15);
          uVar13 = 0x112ec8048;
          uVar11 = 0;
          FUN_1028c20c8(0,0x112ec8048,&PTR_PTR_1126ab6f8);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar18 = uVar11;
          func_0x000107c5faec();
          func_0x000107c61170(uVar11);
          uVar11 = 0;
          FUN_1028c20c8(0,0x112ec8050,&PTR_PTR_1126ab6e8);
          uVar16 = 0;
          pppuStack_a8 = pppuVar7;
          puStack_90 = (undefined *)uVar11;
          FUN_1028c20c8(0,0x112ec8058,&PTR_PTR_1126ab6f0);
          apuStack_c8[0] = puVar9;
          uStack_b0 = uVar16;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          func_0x000107c61174(pppuVar7);
          func_0x000107c61174(puVar9);
          FUN_1027efbc4(uVar18,uVar13,&pppuStack_a8,apuStack_c8);
          puVar6 = PTR_PTR_1126ae750;
          func_0x000107c61168();
          func_0x000107c4e01c();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar18);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(pppuVar7);
          goto LAB_1028c1af8;
        }
      }
    }
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
LAB_1028c1af8:
  *param_1 = puVar6;
  return;
}



/* Entry: 1028c2150; end: 1028c2153; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001028c2004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c2020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c2008) */
/* WARNING: Removing unreachable block (ram,0x0001028c2024) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c2150(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028c2154; end: 1028c2157; -[_TtC38CreateSongStatusMessageAccessoryPlugin38CreateSongStatusMessageAccessoryPlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001028c2004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c2020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c2008) */
/* WARNING: Removing unreachable block (ram,0x0001028c2024) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c2154(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028c2158; end: 1028c221f;  */

void FUN_1028c2158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_110562de8;
  func_0x000107c613fc(&UNK_110562de8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028c24ac,puVar1);
  return;
}



/* Entry: 1028c2220; end: 1028c24ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c2220(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar2 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x00010017da58(lVar3);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_70);
  uVar6 = uStack_70;
  func_0x000107c5da38();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  lVar3 = lStack_78;
  lVar7 = lStack_78;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&lStack_78);
  uVar11 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar11);
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&uStack_80);
  uVar8 = uStack_80;
  func_0x000107c42e68();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&uStack_88);
  lVar9 = 0;
  FUN_1028c2058();
  lVar7 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112ec7fe0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ec7ff8);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ec8000) = uVar6;
  *(long *)(lVar7 + _DAT_112ec8008) = lVar3;
  *(undefined8 *)(lVar7 + _DAT_112ec7fe8) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112ec8010) = uVar8;
  *(undefined **)(lVar7 + _DAT_112ec7ff0) = puVar4;
  *(undefined8 *)(lVar7 + _DAT_112ec8018) = uStack_88;
  plVar10 = &lStack_98;
  lStack_98 = lVar7;
  lStack_90 = lVar9;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1028c24ac; end: 1028c24cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c24ac(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = lStack_68;
  uVar2 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x00010017da58(lVar3);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_70);
  uVar6 = uStack_70;
  func_0x000107c5da38();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&lStack_78);
  lVar3 = lStack_78;
  lVar7 = lStack_78;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&lStack_78);
  uVar11 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar11);
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&uStack_80);
  uVar8 = uStack_80;
  func_0x000107c42e68();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&uStack_88);
  lVar9 = 0;
  FUN_1028c2058();
  lVar7 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112ec7fe0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ec7ff8);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ec8000) = uVar6;
  *(long *)(lVar7 + _DAT_112ec8008) = lVar3;
  *(undefined8 *)(lVar7 + _DAT_112ec7fe8) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112ec8010) = uVar8;
  *(undefined **)(lVar7 + _DAT_112ec7ff0) = puVar4;
  *(undefined8 *)(lVar7 + _DAT_112ec8018) = uStack_88;
  plVar10 = &lStack_98;
  lStack_98 = lVar7;
  lStack_90 = lVar9;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1028c24cc; end: 1028c258f;  */

void FUN_1028c24cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ec8098;
  func_0x0001000285a8(0x112ec8098,&UNK_10daea3d0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1028c2590; end: 1028c2593;  */

void FUN_1028c2590(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec80e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea3e0;
  func_0x000107c61520(&UNK_10daea3e0,&UNK_110562f48);
  puRam0000000112ec80e0 = puVar1;
  return;
}



/* Entry: 1028c2594; end: 1028c25ff;  */

void FUN_1028c2594(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec80e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea3e0;
  func_0x000107c61520(&UNK_10daea3e0,&UNK_110562f48);
  puRam0000000112ec80e0 = puVar1;
  return;
}



/* Entry: 1028c2600; end: 1028c2603;  */

void FUN_1028c2600(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec80f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea488;
  func_0x000107c61520(&UNK_10daea488,&UNK_110562fd8);
  puRam0000000112ec80f8 = puVar1;
  return;
}



/* Entry: 1028c2604; end: 1028c266f;  */

void FUN_1028c2604(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec80f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea488;
  func_0x000107c61520(&UNK_10daea488,&UNK_110562fd8);
  puRam0000000112ec80f8 = puVar1;
  return;
}



/* Entry: 1028c2670; end: 1028c26f3;  */

void FUN_1028c2670(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1028c26f4; end: 1028c26f7;  */

void FUN_1028c26f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec8110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea4f8;
  func_0x000107c61520(&UNK_10daea4f8,&UNK_110562fd8);
  puRam0000000112ec8110 = puVar1;
  return;
}



/* Entry: 1028c26f8; end: 1028c2737;  */

void FUN_1028c26f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec8110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea4f8;
  func_0x000107c61520(&UNK_10daea4f8,&UNK_110562fd8);
  puRam0000000112ec8110 = puVar1;
  return;
}



/* Entry: 1028c2738; end: 1028c273b;  */

void FUN_1028c2738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec8118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea4b0;
  func_0x000107c61520(&UNK_10daea4b0,&UNK_110562fd8);
  puRam0000000112ec8118 = puVar1;
  return;
}



/* Entry: 1028c273c; end: 1028c277b;  */

void FUN_1028c273c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec8118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea4b0;
  func_0x000107c61520(&UNK_10daea4b0,&UNK_110562fd8);
  puRam0000000112ec8118 = puVar1;
  return;
}



/* Entry: 1028c277c; end: 1028c2923;  */

void FUN_1028c277c(void)

{
  return;
}



/* Entry: 1028c2924; end: 1028c296f;  */

void FUN_1028c2924(undefined8 param_1)

{
  func_0x0001000285a8(0x112ec8148,&UNK_10daea580);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028c29dc,param_1);
  return;
}



/* Entry: 1028c2970; end: 1028c29db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c2970(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028c2d8c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec8150) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028c29dc; end: 1028c29e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c29dc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028c2d8c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec8150) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1028c29e4; end: 1028c2a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c29e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec8150) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028c2a30; end: 1028c2b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028c2a30(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112ec8088);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_1028c2c54(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_1028c2c54(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0xf);
  return puVar5;
}



/* Entry: 1028c2b70; end: 1028c2bcf; -[_TtC32SCMessageAccessoryPluginRegistry37SCMessageAccessoryPluginSaberServices buildSaberPlugins] */

void FUN_1028c2b70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028c2a30();
  func_0x000107c61170(param_1);
  uVar2 = 0x112ec8180;
  func_0x0001000285a8(0x112ec8180,&UNK_10daea5f8);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1028c2bd0; end: 1028c2c2f; -[_TtC32SCMessageAccessoryPluginRegistry37SCMessageAccessoryPluginSaberServices init] */

void FUN_1028c2bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMessageAccessoryPluginRegistry.SCMessageAccessoryPluginSaberServices",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c2bfc);
  (*pcVar1)();
}



/* Entry: 1028c2c30; end: 1028c2c53; -[_TtC32SCMessageAccessoryPluginRegistry37SCMessageAccessoryPluginSaberServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c2c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec8150));
  return;
}



/* Entry: 1028c2c54; end: 1028c2d7b;  */

ulong FUN_1028c2c54(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c2d7c);
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
  FUN_1028c2dac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c2d78);
      (*pcVar1)();
    }
    FUN_1028c2e2c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1028c2d7c; end: 1028c2d8b;  */

undefined1  [16] FUN_1028c2d7c(void)

{
  return ZEXT816(0x110563058);
}



/* Entry: 1028c2d8c; end: 1028c2dab;  */

void FUN_1028c2d8c(void)

{
  func_0x000107c61168(&PTR_PTR_11286b2c0);
  return;
}



/* Entry: 1028c2dac; end: 1028c2e2b;  */

undefined * FUN_1028c2dac(undefined *param_1,undefined *param_2)

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
    func_0x0001028c2c40();
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



/* Entry: 1028c2e2c; end: 1028c2f4f;  */

long FUN_1028c2e2c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1028c2f4c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1028c2f50);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ec8180;
        func_0x0001000285a8(0x112ec8180,&UNK_10daea5f8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ec8180;
      func_0x0001000285a8(0x112ec8180,&UNK_10daea5f8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028c2f48);
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



/* Entry: 1028c2f50; end: 1028c3547;  */

void FUN_1028c2f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110563120;
  func_0x000107c613fc(&UNK_110563120,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_11;
  *(undefined8 *)(puVar1 + 0x20) = param_13;
  *(undefined8 *)(puVar1 + 0x28) = param_15;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_10;
  func_0x000107c6157c();
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(0x1028c30c0,puVar1);
  return;
}



/* Entry: 1028c3548; end: 1028c3557;  */

undefined1  [16] FUN_1028c3548(void)

{
  return ZEXT816(0x110563148);
}



/* Entry: 1028c3558; end: 1028c387f;  */

void FUN_1028c3558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110563210;
  func_0x000107c613fc(&UNK_110563210,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1028c3614,puVar1);
  return;
}



/* Entry: 1028c3880; end: 1028c388f;  */

undefined1  [16] FUN_1028c3880(void)

{
  return ZEXT816(0x110563238);
}



/* Entry: 1028c3890; end: 1028c38af; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c3890(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec8190);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028c38b0; end: 1028c38c3; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c38b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec8190,param_3);
  return;
}



/* Entry: 1028c38c4; end: 1028c38d3; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c38c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec8198));
  return;
}



/* Entry: 1028c38d4; end: 1028c3913; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin setActiveConversationIdObservable:] */

void FUN_1028c38d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1028c3914(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028c3914; end: 1028c3a53;  */

/* WARNING: Possible PIC construction at 0x0001028c3948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c39f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c3a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c39fc) */
/* WARNING: Removing unreachable block (ram,0x0001028c394c) */
/* WARNING: Removing unreachable block (ram,0x0001028c3a38) */
/* WARNING: Removing unreachable block (ram,0x0001028c3954) */
/* WARNING: Removing unreachable block (ram,0x0001028c3a18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c3914(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec8198);
  *(undefined8 *)(unaff_x20 + _DAT_112ec8198) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028c3a54; end: 1028c3aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c3a54(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112ec81e0) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1028c3aac; end: 1028c3abb; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c3aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec81a0));
  return;
}



/* Entry: 1028c3abc; end: 1028c3aef; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c3abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec81a0);
  *(undefined8 *)(param_1 + _DAT_112ec81a0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028c3af0; end: 1028c3b4f; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin init] */

void FUN_1028c3af0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterInviteMessagePluginImplementation.FamilyCenterInviteMessagePlugin"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c3b1c);
  (*pcVar1)();
}



/* Entry: 1028c3b50; end: 1028c3c1b; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028c3b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c3bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c3be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c3c00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c3be4) */
/* WARNING: Removing unreachable block (ram,0x0001028c3bb4) */
/* WARNING: Removing unreachable block (ram,0x0001028c3b80) */
/* WARNING: Removing unreachable block (ram,0x0001028c3c04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c3b50(long param_1)

{
  func_0x000100e3b598(param_1 + _DAT_112ec8190);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec8198));
  return;
}



/* Entry: 1028c3c1c; end: 1028c3c3b;  */

void FUN_1028c3c1c(void)

{
  func_0x000107c61168(&PTR_PTR_11286b380);
  return;
}



/* Entry: 1028c3c3c; end: 1028c3c53; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028c3c50) */

void FUN_1028c3c3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028c3c54; end: 1028c3c5b; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin pluginType] */

undefined8 FUN_1028c3c54(void)

{
  return 0;
}



/* Entry: 1028c3c5c; end: 1028c41ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028c3c5c(undefined8 param_1,undefined *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec81d0);
  puVar5 = param_2;
  func_0x000107c4ce08(lVar3,param_2,param_1);
  func_0x000107c61180();
  lVar9 = lVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar9 == 0) goto LAB_1028c407c;
  lVar4 = lVar9;
  func_0x000107c404a8();
  func_0x000107c61170(lVar9);
  if ((int)lVar4 != 0xf) goto LAB_1028c407c;
  plVar1 = (long *)(unaff_x20 + _DAT_112ec81a8);
  lVar9 = lVar3;
  func_0x000107c4cde0();
  func_0x000107c61180();
  lVar4 = lVar9;
  func_0x000107c5faec();
  func_0x000107c61170(lVar9);
  lVar9 = *plVar1;
  puVar6 = (undefined *)plVar1[1];
  if (lVar9 == lVar4 && puVar6 == puVar5) {
    uVar2 = 1;
  }
  else {
    lVar16 = lVar9;
    func_0x000107c605b8(lVar9,puVar6,lVar4,puVar5,0);
    uVar2 = (uint)lVar16;
  }
  func_0x000107c6142c(puVar5);
  func_0x000107c5fadc(lVar9,puVar6);
  puVar5 = param_2;
  func_0x0001070b1d3c(param_2,lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (puVar5 == (undefined *)0x0) goto LAB_1028c407c;
  lVar9 = lVar3;
  func_0x000107c4cde0(lVar3);
  func_0x000107c61180();
  func_0x0001070b1fb4(param_2,lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (param_2 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar5;
      func_0x000107c5db08();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61170(puVar5);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar3);
LAB_1028c40e4:
        func_0x000107c61170(puVar6);
        return 0;
      }
      puVar8 = PTR_PTR_1126ab710;
      func_0x000107c610f8();
      func_0x000107c49260();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      puVar6 = puVar5;
      func_0x000107c42120(puVar5);
      func_0x000107c61180();
      func_0x000107c54230(puVar8);
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126ab718;
      func_0x000107c610f8();
      func_0x000107c46f7c();
      puVar7 = param_2;
      func_0x000107c5d984(param_2);
      func_0x000107c61180();
      func_0x000107c58f44(puVar6);
      func_0x000107c61170(puVar7);
      lVar9 = *(long *)(unaff_x20 + _DAT_112ec81c8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 == 0) {
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(param_2);
        func_0x000107c61170(puVar8);
        goto LAB_1028c40e4;
      }
      uVar19 = 0x112ec8218;
      uVar10 = 0;
      FUN_1028c4850(0,0x112ec8218,&PTR_PTR_1126ab720);
      uVar11 = uVar10;
      func_0x000107c614e8();
      func_0x000107c615f0(lVar9);
      func_0x000107c610f8();
      func_0x000107c47d0c();
      func_0x000107c615e8(lVar9);
      if ((uVar2 & 1) != 0) goto LAB_1028c4118;
      puVar12 = param_2;
      func_0x000107c61174();
      lVar4 = lVar3;
      func_0x000107c40674();
      func_0x000107c61180();
      lVar16 = lVar4;
      func_0x000107c5faec();
      uVar18 = uVar19;
      func_0x000107c61170(lVar4);
      lVar4 = lVar3;
      func_0x000107c40258();
      func_0x000107c61180();
      lVar13 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      puVar7 = &UNK_110563300;
      func_0x000107c613fc(&UNK_110563300,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar14 = &UNK_110563328;
      func_0x000107c613fc(&UNK_110563328,0x40,7);
      *(undefined **)(puVar14 + 0x10) = puVar7;
      *(undefined **)(puVar14 + 0x18) = puVar12;
      *(long *)(puVar14 + 0x20) = lVar16;
      *(undefined8 *)(puVar14 + 0x28) = uVar19;
      *(long *)(puVar14 + 0x30) = lVar13;
      *(undefined8 *)(puVar14 + 0x38) = uVar18;
      pcStack_70 = FUN_1028c4824;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110563340;
      ppuVar15 = &puStack_90;
      puStack_68 = puVar14;
      func_0x000107c60bc4(ppuVar15);
      puVar7 = puStack_68;
      func_0x000107c61174(puVar12);
      func_0x000107c61574(puVar7);
      func_0x000107c56dd8(uVar11);
      func_0x000107c60bd0(ppuVar15);
      lVar4 = _DAT_112ec81d8;
      lVar16 = *(long *)(unaff_x20 + _DAT_112ec81d8);
      if ((lVar16 == 0) || (*(char *)(unaff_x20 + _DAT_112ec81e0) == '\x01')) {
        puVar7 = PTR_PTR_1126ae568;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar19 = *(undefined8 *)(unaff_x20 + lVar4);
        *(undefined **)(unaff_x20 + lVar4) = puVar7;
        func_0x000107c61170(uVar19);
        *(undefined1 *)(unaff_x20 + _DAT_112ec81e0) = 0;
        lVar16 = *(long *)(unaff_x20 + lVar4);
        if (lVar16 != 0) goto LAB_1028c4050;
        lVar16 = 0;
      }
      else {
LAB_1028c4050:
        func_0x000107c5cb24();
        func_0x000107c61180();
      }
      func_0x000107c55500(uVar11);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(lVar16);
LAB_1028c4118:
      uVar19 = 0x112ec8220;
      uVar17 = 0;
      FUN_1028c4850(0,0x112ec8220,&PTR_PTR_1126ab728);
      func_0x000107c614e8();
      func_0x000107c3ff48();
      func_0x000107c61180();
      uVar18 = uVar17;
      func_0x000107c5faec();
      func_0x000107c61170(uVar17);
      uVar17 = 0;
      FUN_1028c4850(0,0x112ec8228,&PTR_PTR_1126ab718);
      auStack_b0[0] = uVar11;
      uStack_98 = uVar10;
      puStack_90 = puVar6;
      puStack_78 = (undefined *)uVar17;
      func_0x000107c610f8(PTR_PTR_1126c67d8);
      func_0x000107c61174(puVar6);
      func_0x000107c61174(uVar11);
      FUN_1027efbc4(uVar18,uVar19,&puStack_90,auStack_b0);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar5);
      return uVar18;
    }
    func_0x000107c61170(puVar5);
    puVar5 = param_2;
  }
  func_0x000107c61170(puVar5);
LAB_1028c407c:
  func_0x000107c615e8(lVar3);
  return 0;
}



/* Entry: 1028c4200; end: 1028c428f;  */

void FUN_1028c4200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1028c4290(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028c4290; end: 1028c4403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ec81b0);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec81c0);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  puVar2 = &UNK_110563300;
  func_0x000107c613fc(&UNK_110563300,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110563378;
  func_0x000107c613fc(&UNK_110563378,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_60 = FUN_1028c4890;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1011bb4a8;
  puStack_68 = &UNK_110563390;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c432a8(uVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1028c4404; end: 1028c453b; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028c4404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028c3c5c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028c453c; end: 1028c456b; -[_TtC45FamilyCenterInviteMessagePluginImplementation31FamilyCenterInviteMessagePlugin dismissFamilyCenterInvitePromptWithAccepted:] */

void FUN_1028c453c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001028c447c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028c456c; end: 1028c45e3;  */

void FUN_1028c456c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_1028c45e4(param_6,param_3,param_4);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 1028c45e4; end: 1028c46f7;  */

void FUN_1028c45e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "openInvitePromptForSender(_:serverMessageId:)";
  func_0x0001000c10c0("openInvitePromptForSender(_:serverMessageId:)");
  func_0x000107c61180();
  puVar2 = &UNK_110563300;
  func_0x000107c613fc(&UNK_110563300,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105633c8;
  func_0x000107c613fc(&UNK_1105633c8,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  uStack_50 = 0x1028c4898;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105633e0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1028c46f8; end: 1028c4823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c46f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ec8190;
    func_0x000107c61618();
    lVar4 = param_1;
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + _DAT_112ec81b8);
      uVar3 = 0;
      if (param_4 != 0) {
        uVar3 = param_3;
      }
      lVar4 = -0x2000000000000000;
      if (param_4 != 0) {
        lVar4 = param_4;
      }
      func_0x000107c61174(lVar2);
      func_0x000107c61434(param_4);
      func_0x000107c5fadc(uVar3,lVar4);
      func_0x000107c6142c(lVar4);
      lVar4 = lVar2;
      func_0x000107c3edd0(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112ec81b0));
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1028c4824; end: 1028c484f;  */

void FUN_1028c4824(void)

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
    FUN_1028c4290(uVar3,uVar1,uVar4,uVar2,uVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1028c4850; end: 1028c488f;  */

void FUN_1028c4850(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028c4890; end: 1028c48c3;  */

void FUN_1028c4890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1028c45e4(uVar1,param_3,param_4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1028c48c4; end: 1028c498b;  */

void FUN_1028c48c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110563440;
  func_0x000107c613fc(&UNK_110563440,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1028c4c88,puVar1);
  return;
}



/* Entry: 1028c498c; end: 1028c4c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c498c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  uVar2 = 0x112ec8230;
  func_0x0001000285a8(0x112ec8230,&UNK_10daea6e8);
  func_0x000107c610f8();
  func_0x00010017da58(lVar3);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar6 = uStack_78;
  func_0x000107c498a0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar7 = uStack_80;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar11 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar11);
  func_0x000107c61170(lStack_88);
  lVar8 = 0;
  FUN_1028c3c1c();
  lVar3 = lVar8;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ec8190,0);
  *(undefined8 *)(lVar3 + _DAT_112ec8198) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec81a0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec81d8) = 0;
  *(undefined1 *)(lVar3 + _DAT_112ec81e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ec81a8);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  *(undefined **)(lVar3 + _DAT_112ec81b0) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112ec81b8) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112ec81c0) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112ec81c8) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112ec81d0) = uVar11;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar11);
  func_0x000107c61174(puVar4);
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar3 + _DAT_112ec81e8) = puVar9;
  plVar10 = &lStack_98;
  lStack_98 = lVar3;
  lStack_90 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uVar11);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1028c4c88; end: 1028c4ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4c88(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = lStack_68;
  uVar2 = 0x112ec8230;
  func_0x0001000285a8(0x112ec8230,&UNK_10daea6e8);
  func_0x000107c610f8();
  func_0x00010017da58(lVar3);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar6 = uStack_78;
  func_0x000107c498a0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar7 = uStack_80;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar11 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar11);
  func_0x000107c61170(lStack_88);
  lVar8 = 0;
  FUN_1028c3c1c();
  lVar3 = lVar8;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ec8190,0);
  *(undefined8 *)(lVar3 + _DAT_112ec8198) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec81a0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec81d8) = 0;
  *(undefined1 *)(lVar3 + _DAT_112ec81e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ec81a8);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  *(undefined **)(lVar3 + _DAT_112ec81b0) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112ec81b8) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112ec81c0) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112ec81c8) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112ec81d0) = uVar11;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar11);
  func_0x000107c61174(puVar4);
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar3 + _DAT_112ec81e8) = puVar9;
  plVar10 = &lStack_98;
  lStack_98 = lVar3;
  lStack_90 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uVar11);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1028c4ca8; end: 1028c4cc7; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4ca8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec8238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028c4cc8; end: 1028c4cdb; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec8238,param_3);
  return;
}



/* Entry: 1028c4cdc; end: 1028c4cfb; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4cdc(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec8240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028c4cfc; end: 1028c4d0f; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec8240,param_3);
  return;
}



/* Entry: 1028c4d10; end: 1028c4d1f; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec8248));
  return;
}



/* Entry: 1028c4d20; end: 1028c4d53; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec8248);
  *(undefined8 *)(param_1 + _DAT_112ec8248) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028c4d54; end: 1028c4d63; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec8250));
  return;
}



/* Entry: 1028c4d64; end: 1028c4d97; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec8250);
  *(undefined8 *)(param_1 + _DAT_112ec8250) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028c4d98; end: 1028c4df7; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin init] */

void FUN_1028c4d98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterLocationRequestMessagePlugin.FamilyCenterLocationRequestMessagePlugin"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c4dc4);
  (*pcVar1)();
}



/* Entry: 1028c4df8; end: 1028c4f13; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028c4ee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c4eec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c4df8(long param_1)

{
  func_0x000100d0e618(param_1 + _DAT_112ec8238);
  func_0x000100d0e618(param_1 + _DAT_112ec8240);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8248));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8250));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec8258 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8260));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec8268));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8270));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8278));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8280));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8288));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8290));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec8298));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec82a0));
  return;
}



/* Entry: 1028c4f14; end: 1028c4f33;  */

void FUN_1028c4f14(void)

{
  func_0x000107c61168(&PTR_PTR_11286b498);
  return;
}



/* Entry: 1028c4f34; end: 1028c4f4b; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028c4f48) */

void FUN_1028c4f34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028c4f4c; end: 1028c4f53; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin pluginType] */

undefined8 FUN_1028c4f4c(void)

{
  return 0;
}



/* Entry: 1028c4f54; end: 1028c554f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028c4f54(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long alStack_a0 [3];
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec82a0);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar8 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_1028c53fc:
    func_0x000107c615e8(lVar2);
    return 0;
  }
  lVar17 = lVar8;
  func_0x000107c5a934();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c5550);
    (*pcVar1)();
  }
  lVar8 = lVar17;
  func_0x000107c42da0();
  func_0x000107c61180();
  func_0x000107c61170(lVar17);
  if (lVar8 == 0) goto LAB_1028c53fc;
  func_0x000107c61170(lVar8);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ec8258);
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_112ec8258))[1];
  uVar10 = uVar16;
  func_0x000107c5fadc(uVar16,uVar13);
  uVar12 = uVar10;
  func_0x0001070b1d3c(param_2,uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  if (param_2 == 0) goto LAB_1028c53fc;
  lVar8 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c61170(param_2);
    goto LAB_1028c53fc;
  }
  lVar17 = param_2;
  func_0x000107c5db08();
  func_0x000107c61180();
  if (lVar17 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar8);
    return 0;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec8298);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar17);
    return 0;
  }
  func_0x000107c51f08();
  func_0x000107c61180();
  uVar10 = param_1;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar4 = uVar10;
  func_0x000107c5faec();
  puVar5 = PTR_PTR_1126ab710;
  func_0x000107c610f8();
  func_0x000107c49260();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar17);
  lVar8 = param_2;
  func_0x000107c42120(param_2);
  func_0x000107c61180();
  func_0x000107c54230(puVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c61174();
  FUN_1028c5550(uVar4,uVar12);
  uVar6 = uVar4;
  func_0x0001004575f0();
  func_0x000107c61574(uVar4);
  uVar4 = uVar6;
  func_0x000107c5cb24(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar12);
  puVar7 = PTR_PTR_1126ab730;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar16,uVar13);
  func_0x000107c485c4();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  lVar8 = *(long *)(unaff_x20 + _DAT_112ec8288);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_1028c5210:
    lVar17 = 0;
  }
  else {
    lVar17 = lVar8;
    func_0x000107c3e544();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    if (lVar17 == 0) goto LAB_1028c5210;
  }
  func_0x000107c53cc0(puVar7);
  func_0x000107c61170(lVar17);
  lVar8 = _DAT_112ec82a8;
  lVar9 = *(long *)(unaff_x20 + _DAT_112ec82a8);
  lVar17 = lVar9;
  if (lVar9 == 0) {
    lVar9 = unaff_x20 + _DAT_112ec8238;
    func_0x000107c61618();
    if (lVar9 != 0) {
      lVar14 = *(long *)(unaff_x20 + _DAT_112ec8278);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar14 == 0) {
        func_0x000107c61170(lVar9);
      }
      else {
        lVar15 = lVar14;
        func_0x000107c409cc();
        func_0x000107c61180();
        if (lVar15 != 0) {
          lVar17 = lVar15;
          func_0x000107c508d0();
          func_0x000107c61180();
          func_0x000107c615e8(lVar15);
          func_0x000107c615e8(lVar14);
          func_0x000107c61170(lVar9);
          uVar16 = *(undefined8 *)(unaff_x20 + lVar8);
          *(long *)(unaff_x20 + lVar8) = lVar17;
          func_0x000107c615f4(lVar17,2);
          func_0x000107c615e8(uVar16);
          lVar9 = 0;
          goto LAB_1028c523c;
        }
        func_0x000107c61170(lVar9);
        func_0x000107c615e8(lVar14);
      }
    }
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_2);
    return 0;
  }
LAB_1028c523c:
  func_0x000107c615f4(lVar9,2);
  lVar8 = lVar17;
  func_0x000107c40974();
  func_0x000107c61180();
  func_0x000107c615e8(lVar17);
  uVar10 = 0;
  FUN_1028c660c(0,0x112ec82e0,&PTR_PTR_1126ab738);
  lVar9 = lVar8;
  func_0x000107c41408();
  func_0x000107c61180();
  lVar14 = lVar3;
  func_0x000107c614f0(lVar3);
  puVar11 = &UNK_110563530;
  func_0x000107c613fc(&UNK_110563530,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  func_0x000107c615f0(lVar3);
  func_0x0001028c63e4(lVar9,lVar3,0x1028c62b0,puVar11,uVar10,lVar14);
  uVar16 = 0x112ec82e8;
  uVar12 = 0;
  FUN_1028c660c(0,0x112ec82e8,&PTR_PTR_1126ab740);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  uVar12 = 0;
  FUN_1028c660c(0,0x112ec82f0,&PTR_PTR_1126ab730);
  alStack_a0[0] = lVar9;
  uStack_88 = uVar10;
  apuStack_80[0] = puVar7;
  uStack_68 = uVar12;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(lVar9);
  FUN_1027efbc4(uVar13,uVar16,apuStack_80,alStack_a0);
  func_0x000107c615e8(lVar2);
  func_0x000107c615e8(lVar8);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(lVar17);
  return uVar13;
}



/* Entry: 1028c5550; end: 1028c56bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c5550(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec8258);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112ec8258))[1];
  if ((uVar2 != param_1 || uVar1 != param_2) &&
     (func_0x000107c605b8(uVar2,uVar1,param_1,param_2,0), (uVar2 & 1) == 0)) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ec8260);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x0001000285a8(0x112e573b0,&UNK_10dacc510);
      lVar4 = lVar3;
      func_0x000107c4ec88(lVar3);
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x0001000b637c();
      func_0x000107c61170(lVar4);
      func_0x00010061bc80();
      func_0x000107c61574(lVar5);
      puVar6 = &UNK_110563670;
      func_0x000107c613fc(&UNK_110563670,0x28,7);
      *(long *)(puVar6 + 0x10) = lVar3;
      *(ulong *)(puVar6 + 0x18) = param_1;
      *(ulong *)(puVar6 + 0x20) = param_2;
      uVar7 = 0;
      FUN_1028c660c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c615f0(lVar3);
      func_0x000107c61434(param_2);
      func_0x0001000bfde0(0x1028c6600,puVar6,uVar7);
      func_0x000107c615e8(lVar3);
      func_0x000107c61574(lVar4);
      func_0x000107c61574(puVar6);
      return;
    }
  }
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000104886440();
  return;
}


