/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10286c008; end: 10286c03f; -[_TtC24UnavailableMessagePlugin24UnavailableMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010286c024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286c028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286c008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec5038));
  return;
}



/* Entry: 10286c040; end: 10286c05f;  */

void FUN_10286c040(void)

{
  func_0x000107c61168(&PTR_PTR_112867318);
  return;
}



/* Entry: 10286c060; end: 10286c12b;  */

void FUN_10286c060(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *apuStack_50 [3];
  undefined8 uStack_38;
  
  uVar5 = 0x112ec3bd0;
  uVar1 = 0;
  FUN_10286c12c(0,0x112ec3bd0,&PTR_PTR_1126ab1d8);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126ab1e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar1 = 0;
  FUN_10286c12c(0,0x112ec3bd8,&PTR_PTR_1126ab1e0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puVar4 = PTR_PTR_1126c67d8;
  apuStack_50[0] = puVar3;
  uStack_38 = uVar1;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar2,uVar5,apuStack_50,&uStack_70,puVar4);
  return;
}



/* Entry: 10286c12c; end: 10286c1db;  */

void FUN_10286c12c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10286c1dc; end: 10286c1eb;  */

undefined1  [16] FUN_10286c1dc(void)

{
  return ZEXT816(0x11055a510);
}



/* Entry: 10286c1ec; end: 10286c1fb; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286c1ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec5070));
  return;
}



/* Entry: 10286c1fc; end: 10286c22f; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286c1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec5070);
  *(undefined8 *)(param_1 + _DAT_112ec5070) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286c230; end: 10286c23f; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286c230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec5078));
  return;
}



/* Entry: 10286c240; end: 10286c273; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286c240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec5078);
  *(undefined8 *)(param_1 + _DAT_112ec5078) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286c274; end: 10286c7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10286c274(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec5080);
  func_0x000107c4ce08(uVar2,param_2,param_1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ab570;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar8 = uVar2;
  func_0x000107c4cde0(uVar2);
  func_0x000107c61180();
  func_0x0001070b2c1c(param_2,uVar8);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c58f3c(puVar3);
  func_0x000107c61170(param_2);
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = PTR___sypN_11034f1a8;
  if (puVar5 == (undefined *)0x0) {
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar5;
    func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar5);
    if (*(long *)(puVar6 + 0x10) != 0) {
      func_0x000107c61434(puVar6);
      lVar7 = 0x656c646e75424643;
      uVar14 = 0xed0000736e6f6349;
      func_0x000100029284(0x656c646e75424643);
      if ((uVar14 & 1) != 0) {
        func_0x0001000bb420(*(long *)(puVar6 + 0x38) + lVar7 * 0x20,&puStack_90);
        func_0x000107c61430(puVar6,2);
        if (puStack_78 == (undefined *)0x0) goto LAB_10286c4ac;
        uVar8 = 0;
        FUN_10286c998(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
        ppuVar9 = &puStack_b0;
        func_0x000107c6147c(ppuVar9,&puStack_90,puVar4 + 8,uVar8,6);
        puVar5 = puStack_b0;
        if (((ulong)ppuVar9 & 1) == 0) goto LAB_10286c4c4;
        puStack_b0 = (undefined *)0xd000000000000013;
        uStack_a8 = 0x800000010f0c3460;
        ppuVar9 = &puStack_b0;
        func_0x000107c6061c(ppuVar9,PTR___sSSN_11034da80);
        puVar6 = puVar5;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c615e8(ppuVar9);
        if (puVar6 == (undefined *)0x0) {
          uStack_a8 = 0;
          puStack_b0 = (undefined *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x000107c60234(&puStack_b0,puVar6);
          func_0x000107c615e8(puVar6);
        }
        uStack_88 = uStack_a8;
        puStack_90 = puStack_b0;
        puStack_78 = (undefined *)lStack_98;
        puStack_80 = (undefined *)uStack_a0;
        if (lStack_98 != 0) {
          plVar13 = &lStack_b8;
          func_0x000107c6147c(plVar13,&puStack_90,puVar4 + 8,uVar8,6);
          lVar7 = lStack_b8;
          if (((ulong)plVar13 & 1) != 0) {
            puStack_b0 = (undefined *)0xd000000000000011;
            uStack_a8 = 0x800000010f0c3480;
            ppuVar9 = &puStack_b0;
            func_0x000107c6061c(ppuVar9,PTR___sSSN_11034da80);
            lVar15 = lVar7;
            func_0x000107c3ac74();
            func_0x000107c61180();
            func_0x000107c615e8(ppuVar9);
            if (lVar15 == 0) {
              uStack_a8 = 0;
              puStack_b0 = (undefined *)0x0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              func_0x000107c60234(&puStack_b0,lVar15);
              func_0x000107c615e8(lVar15);
            }
            uStack_88 = uStack_a8;
            puStack_90 = puStack_b0;
            puStack_78 = (undefined *)lStack_98;
            puStack_80 = (undefined *)uStack_a0;
            if (lStack_98 == 0) {
              func_0x000107c61170(lVar7);
              goto LAB_10286c76c;
            }
            uVar8 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            plVar13 = &lStack_b8;
            func_0x000107c6147c(plVar13,&puStack_90,puVar4 + 8,uVar8,6);
            if (((ulong)plVar13 & 1) != 0) {
              lVar15 = *(long *)(lStack_b8 + 0x10);
              if (lVar15 == 0) {
                lVar15 = 0;
              }
              else {
                plVar13 = (long *)(lStack_b8 + 0x10) + lVar15 * 2;
                lVar15 = *plVar13;
                lVar1 = plVar13[1];
                func_0x000107c61434(lVar1);
                func_0x000107c5fadc(lVar15,lVar1);
                func_0x000107c6142c(lVar1);
              }
              func_0x000107c6142c(lStack_b8);
              func_0x000107c5276c(puVar3);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(lVar7);
              func_0x000107c61170(lVar15);
              goto LAB_10286c4c4;
            }
            func_0x000107c61170(lVar7);
          }
          func_0x000107c61170(puVar5);
          goto LAB_10286c4c4;
        }
LAB_10286c76c:
        func_0x000107c61170(puVar5);
        goto LAB_10286c4ac;
      }
      func_0x000107c6142c(puVar6);
    }
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined *)0x0;
    func_0x000107c6142c(puVar6);
  }
LAB_10286c4ac:
  FUN_10286cba4(&puStack_90,0x112d387f8,&UNK_10d902650);
LAB_10286c4c4:
  puVar4 = &UNK_11055a5d8;
  func_0x000107c613fc(&UNK_11055a5d8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar6 = PTR_PTR_1126ab578;
  func_0x000107c610f8();
  pcStack_70 = FUN_10286c974;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11055a5f0;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar4);
  func_0x000107c47c38();
  func_0x000107c60bd0(ppuVar9);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  uVar8 = 0x112ec50b0;
  uVar10 = 0;
  FUN_10286c998(0,0x112ec50b0,&PTR_PTR_1126ab580);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  uVar10 = 0;
  FUN_10286c998(0,0x112ec50b8,&PTR_PTR_1126ab570);
  uVar12 = 0;
  puStack_90 = puVar3;
  puStack_78 = (undefined *)uVar10;
  FUN_10286c998(0,0x112ec50c0,&PTR_PTR_1126ab578);
  puStack_b0 = puVar6;
  lStack_98 = uVar12;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar11,uVar8,&puStack_90,&puStack_b0);
  func_0x000107c615e8(uVar2);
  return uVar11;
}



/* Entry: 10286c7c0; end: 10286c813;  */

void FUN_10286c7c0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10286c9d8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10286c814; end: 10286c88b; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10286c814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286c274(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286c88c; end: 10286c8a3; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010286c8a0) */

void FUN_10286c88c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10286c8a4; end: 10286c8ab; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin pluginType] */

undefined8 FUN_10286c8a4(void)

{
  return 0;
}



/* Entry: 10286c8ac; end: 10286c90b; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin init] */

void FUN_10286c8ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnknownMessagePlugin.UnknownMessagePlugin",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10286c8d8);
  (*pcVar1)();
}



/* Entry: 10286c90c; end: 10286c953; -[_TtC20UnknownMessagePlugin20UnknownMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286c90c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5070));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec5078));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec5080));
  return;
}



/* Entry: 10286c954; end: 10286c973;  */

void FUN_10286c954(void)

{
  func_0x000107c61168(&PTR_PTR_1128673d8);
  return;
}



/* Entry: 10286c974; end: 10286c997;  */

void FUN_10286c974(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10286c9d8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10286c998; end: 10286c9d7;  */

void FUN_10286c998(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10286c9d8; end: 10286cba3;  */

void FUN_10286c9d8(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar10,0xd000000000000031,0x800000010f0c34a0);
  puVar2 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_10286cba4(puVar10,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = 0x112d377a8;
    func_0x00010286cbe4(0x112d377a8,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 10286cba4; end: 10286cc6f;  */

undefined8 FUN_10286cba4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10286cc70; end: 10286cd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cc70(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_10286c954();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ec5070) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec5078) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec5080) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10286cd20; end: 10286cd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cd20(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_10286c954();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ec5070) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec5078) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec5080) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10286cd38; end: 10286cd57; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cd38(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec50c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10286cd58; end: 10286cd6b; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cd58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec50c8,param_3);
  return;
}



/* Entry: 10286cd6c; end: 10286cd8b; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin playbackPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cd6c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec50d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10286cd8c; end: 10286cd9f; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin setPlaybackPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cd8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec50d0,param_3);
  return;
}



/* Entry: 10286cda0; end: 10286cdaf; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec50d8));
  return;
}



/* Entry: 10286cdb0; end: 10286cde3; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec50d8);
  *(undefined8 *)(param_1 + _DAT_112ec50d8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286cde4; end: 10286cdf3; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec50e0));
  return;
}



/* Entry: 10286cdf4; end: 10286ce27; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cdf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec50e0);
  *(undefined8 *)(param_1 + _DAT_112ec50e0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286ce28; end: 10286ce37; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin visibleMessageIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286ce28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec50e8));
  return;
}



/* Entry: 10286ce38; end: 10286ce6b; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin setVisibleMessageIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286ce38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec50e8);
  *(undefined8 *)(param_1 + _DAT_112ec50e8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286ce6c; end: 10286ce9f; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin dismissPresentedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286ce6c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102873880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10286cea0; end: 10286ceaf; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec5150));
  return;
}



/* Entry: 10286ceb0; end: 10286ceef; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin setActiveConversationIdObservable:] */

void FUN_10286ceb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10286cef0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10286cef0; end: 10286d02f;  */

/* WARNING: Possible PIC construction at 0x00010286cf24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286cfd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286cff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286cfd8) */
/* WARNING: Removing unreachable block (ram,0x00010286cf28) */
/* WARNING: Removing unreachable block (ram,0x00010286d014) */
/* WARNING: Removing unreachable block (ram,0x00010286cf30) */
/* WARNING: Removing unreachable block (ram,0x00010286cff4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286cef0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec5150);
  *(undefined8 *)(unaff_x20 + _DAT_112ec5150) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10286d030; end: 10286d0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286d030(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ec5148;
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112ec5148);
    func_0x000107c6157c(uVar3);
    func_0x00010006c804();
    func_0x000107c61574(uVar3);
    lVar1 = _DAT_112ec50f0;
    func_0x000107c61428(param_2 + _DAT_112ec50f0,auStack_60,1,0);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined **)(param_2 + lVar1) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lVar2);
    func_0x000107c6157c(uVar3);
    func_0x000100070bfc();
    func_0x000107c61170(param_2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 10286d0f0; end: 10286d6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10286d0f0(undefined *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar19 = *(long *)(unaff_x20 + _DAT_112ec5128);
  lVar3 = lVar19;
  func_0x000107c4ce08(lVar19,param_2,param_1);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c615e8(lVar3);
    uVar16 = 0;
  }
  else {
    lVar18 = lVar4;
    func_0x000107c4ca5c();
    iVar2 = (int)lVar18;
    func_0x0001085436b8();
    puVar5 = PTR_PTR_1126ab598;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = PTR_PTR_1126ab5a0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar7 = &UNK_11055a770;
    func_0x000107c613fc(&UNK_11055a770,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_11055a978;
    uVar16 = 0x28;
    func_0x000107c613fc(&UNK_11055a978,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = lVar3;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    pcStack_70 = FUN_1028715ac;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1012935d4;
    puStack_78 = &UNK_11055a990;
    ppuVar9 = &puStack_90;
    puStack_68 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_68;
    func_0x000107c615f0(lVar3);
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    func_0x000107c56ea0(puVar6);
    func_0x000107c60bd0(ppuVar9);
    lVar18 = lVar3;
    func_0x000107c40258(lVar3);
    func_0x000107c61180();
    lVar10 = lVar18;
    func_0x000107c5faec();
    func_0x000107c61170(lVar18);
    FUN_10286f56c(lVar10,uVar16,param_1);
    func_0x000107c6142c(uVar16);
    puStack_90 = param_1;
    func_0x0001007d6d78(&puStack_90);
    func_0x0001044d77a8(0);
    bVar1 = (byte)*(undefined8 *)(unaff_x20 + _DAT_112ec5130);
    func_0x0001044d67d0();
    puVar7 = &UNK_11055a9c8;
    func_0x000107c613fc(&UNK_11055a9c8,0x19,7);
    *(long *)(puVar7 + 0x10) = lVar19;
    puVar7[0x18] = bVar1 & 1;
    uVar11 = 0;
    FUN_1028715cc(0,0x112ec3648,&PTR_PTR_1126d9fa8);
    func_0x000107c615f0(lVar19);
    uVar16 = 0x1028715b8;
    puVar17 = puVar7;
    func_0x0001000d5158(0x1028715b8,puVar7,uVar11);
    func_0x000107c61574(puVar7);
    func_0x0001004575f0();
    func_0x000107c61574(uVar16);
    puVar8 = puVar7;
    func_0x000107c421ac(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar8;
    func_0x000107c5cb24(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c56454(puVar6);
    func_0x000107c61170(puVar7);
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ec5120);
    func_0x000107c5c734(uVar16);
    func_0x000107c61180();
    func_0x000107c54244(puVar6);
    func_0x000107c615e8(uVar16);
    lVar18 = lVar3;
    func_0x000107c40258();
    func_0x000107c61180();
    lVar12 = lVar18;
    func_0x000107c5faec();
    func_0x000107c61170(lVar18);
    lVar18 = *(long *)(unaff_x20 + _DAT_112ec50e8);
    puVar7 = (undefined *)0x0;
    if (lVar18 != 0) {
      func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
      func_0x000107c61174(lVar18);
      lVar13 = lVar18;
      func_0x0001000b637c();
      puVar7 = &UNK_11055a9f0;
      func_0x000107c613fc(&UNK_11055a9f0,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar12;
      *(undefined **)(puVar7 + 0x18) = puVar17;
      uVar11 = 0;
      FUN_1028715cc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61434(puVar17);
      uVar16 = 0x102871660;
      func_0x0001000bfde0(0x102871660,puVar7,uVar11);
      func_0x000107c61574(lVar13);
      func_0x000107c61574(puVar7);
      func_0x0001004575f0();
      func_0x000107c61574(uVar16);
      puVar8 = puVar7;
      func_0x000107c421ac(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = puVar8;
      func_0x000107c5cb24(puVar8);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar18);
    }
    func_0x000107c6142c(puVar17);
    func_0x000107c56660(puVar6);
    func_0x000107c61170(puVar7);
    puVar7 = &UNK_11055a770;
    func_0x000107c613fc(&UNK_11055a770,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    func_0x000107c6157c(puVar7);
    lVar18 = lVar10;
    func_0x0001028731c0(lVar10,lVar19,param_2,0x1028715c4,puVar7);
    func_0x000107c61578(puVar7,2);
    func_0x000107c58cf4(puVar6);
    func_0x000107c61170(lVar18);
    if (iVar2 != 0) {
      lVar19 = *(long *)(unaff_x20 + _DAT_112ec50f8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar19 != 0) {
        lVar18 = lVar19;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar19);
        if (lVar18 != 0) {
          lVar19 = lVar18;
          func_0x0001065c2f88(lVar18,*(undefined8 *)(unaff_x20 + _DAT_112ec5100));
          func_0x000107c61180();
          if (lVar19 != 0) {
            func_0x000107c5942c(puVar6);
            func_0x000107c615e8(lVar18);
            lVar18 = lVar19;
          }
          func_0x000107c615e8(lVar18);
        }
      }
    }
    uVar11 = 0x112ec51a0;
    uVar14 = 0;
    FUN_1028715cc(0,0x112ec51a0,&PTR_PTR_1126ab5a8);
    func_0x000107c614e8();
    func_0x000107c3ff48();
    func_0x000107c61180();
    uVar16 = uVar14;
    func_0x000107c5faec();
    func_0x000107c61170(uVar14);
    uVar14 = 0;
    FUN_1028715cc(0,0x112ec51a8,&PTR_PTR_1126ab598);
    uVar15 = 0;
    puStack_90 = puVar5;
    puStack_78 = (undefined *)uVar14;
    FUN_1028715cc(0,0x112ec51b0,&PTR_PTR_1126ab5a0);
    apuStack_b0[0] = puVar6;
    uStack_98 = uVar15;
    func_0x000107c610f8(PTR_PTR_1126c67d8);
    FUN_1027efbc4(uVar16,uVar11,&puStack_90,apuStack_b0);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(lVar10);
    func_0x000107c61170(lVar4);
  }
  return uVar16;
}



/* Entry: 10286d6e8; end: 10286daef;  */

void FUN_10286d6e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = "valdiContextParams(for:conversationParticipants:)";
    func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
    func_0x000107c61180();
    puVar2 = &UNK_11055aa18;
    func_0x000107c613fc(&UNK_11055aa18,0x30,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    *(undefined8 *)(puVar2 + 0x28) = param_1;
    pcStack_78 = FUN_10287160c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11055aa30;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 10286daf0; end: 10286db5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10286daf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112ec50c8;
    func_0x000107c61618(lVar1);
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 10286db60; end: 10286dbd7; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10286db60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286d0f0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286dbd8; end: 10286dc5f; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin quotedRenderingStyleForMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10286dbd8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ec5118);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ec5118))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5fadc(uVar2,uVar1);
  uVar3 = param_3;
  func_0x000107c4a2bc(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar3 & 0xffffffff;
}



/* Entry: 10286dc60; end: 10286df87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10286dc60(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *apuStack_70 [3];
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec5128);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar9 = *(long *)(unaff_x20 + _DAT_112ec5118);
  lVar1 = ((long *)(unaff_x20 + _DAT_112ec5118))[1];
  lVar3 = lVar9;
  func_0x000107c5fadc(lVar9,lVar1);
  uVar6 = param_1;
  func_0x000107c4a2bc();
  func_0x000107c61170(lVar3);
  if ((int)uVar6 == 0) {
    puVar4 = PTR_PTR_1126ab588;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar5 = param_2;
    func_0x0001070b1c70();
    if ((uVar5 & 1) == 0) {
      lVar3 = lVar9;
      func_0x000107c5fadc(lVar9,lVar1);
      func_0x0001070b1d3c(param_2,lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (param_2 != 0) {
        func_0x000107c61170(param_2);
      }
    }
    lVar3 = 0x112d38c88;
    FUN_1028715cc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = 1;
    func_0x000107c6010c(1);
    func_0x000107c557d4(puVar4);
    func_0x000107c61170(uVar6);
    lVar7 = lVar2;
    func_0x000107c3f91c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar8 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      if (lVar8 != lVar9 || lVar3 != lVar1) {
        func_0x000107c605b8(lVar8,lVar3,lVar9,lVar1,0);
      }
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c55824(puVar4);
    func_0x000107c5579c(puVar4);
    func_0x000107c5fadc(lVar9,lVar1);
    func_0x000107c4a2b8(lVar2);
    func_0x000107c61170(lVar9);
    func_0x000107c55768(puVar4);
    func_0x000107c44ae4(lVar2);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c55004(puVar4);
    func_0x000107c61170(puVar10);
    lVar9 = lVar2;
    func_0x000107c4f860();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c55048(puVar4);
    }
    else {
      func_0x000107c4ca5c();
      func_0x000107d60730();
      func_0x000107c55048(puVar4);
      func_0x000107c61170(lVar9);
    }
    uVar6 = 0x112ec5190;
    uVar11 = 0;
    FUN_1028715cc(0,0x112ec5190,&PTR_PTR_1126ab590);
    func_0x000107c614e8();
    func_0x000107c3ff48();
    func_0x000107c61180();
    param_1 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    uVar11 = 0;
    FUN_1028715cc(0,0x112ec5198,&PTR_PTR_1126ab588);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    apuStack_70[0] = puVar4;
    uStack_58 = uVar11;
    func_0x000107c610f8(PTR_PTR_1126c67d8);
    FUN_1027efbc4(param_1,uVar6,apuStack_70,&uStack_90);
  }
  else {
    FUN_10286e994(param_1,param_2,0);
  }
  func_0x000107c615e8(lVar2);
  return param_1;
}



/* Entry: 10286df88; end: 10286dfff; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_10286df88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286dc60(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286e000; end: 10286e367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10286e000(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  bool bVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec5128);
  func_0x000107c4ce08(uVar2,param_2,param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4a71c();
  if (((uVar3 & 1) != 0) || (uVar3 = uVar2, func_0x000107c4a384(), (int)uVar3 != 0)) {
    FUN_10286e994(param_1,param_2,1);
    goto LAB_10286e330;
  }
  puVar4 = PTR_PTR_1126ab588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = param_2;
  func_0x0001070b1c70();
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec5118);
    func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_112ec5118))[1]);
    func_0x0001070b1d3c(param_2,uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (param_2 != 0) {
      func_0x000107c61170(param_2);
      goto LAB_10286e0e0;
    }
    bVar11 = true;
  }
  else {
LAB_10286e0e0:
    bVar11 = false;
  }
  lVar9 = 0x112d38c88;
  FUN_1028715cc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = 1;
  func_0x000107c6010c(1);
  func_0x000107c557d4(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c51f08();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  lVar7 = lVar6;
  func_0x000107c5faec();
  func_0x000107c61170(lVar6);
  lVar6 = *(long *)(unaff_x20 + _DAT_112ec5118);
  lVar1 = ((long *)(unaff_x20 + _DAT_112ec5118))[1];
  if ((lVar7 != lVar6) || (lVar9 != lVar1)) {
    func_0x000107c605b8(lVar7,lVar9,lVar6,lVar1,0);
  }
  func_0x000107c6142c(lVar9);
  func_0x000107c55824(puVar4);
  func_0x000107c5579c(puVar4);
  lVar9 = lVar6;
  func_0x000107c5fadc(lVar6,lVar1);
  uVar3 = uVar2;
  func_0x000107c4a3cc();
  func_0x000107c61170(lVar9);
  if (bVar11) {
    if ((int)uVar3 != 0) {
      func_0x000107c5fadc(lVar6,lVar1);
LAB_10286e228:
      func_0x000107c4a134(uVar2);
      goto LAB_10286e234;
    }
  }
  else {
    func_0x000107c5fadc(lVar6,lVar1);
    if ((int)uVar3 == 0) goto LAB_10286e228;
    func_0x000107c4a138(uVar2);
LAB_10286e234:
    func_0x000107c61170(lVar6);
  }
  func_0x000107c55768(puVar4);
  func_0x000107c4ca5c(uVar2);
  func_0x000107d60730();
  func_0x000107c55048(puVar4);
  func_0x000107c44ae4(uVar2);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55004(puVar4);
  func_0x000107c61170(puVar8);
  uVar5 = 0x112ec5190;
  lVar9 = 0;
  FUN_1028715cc(0,0x112ec5190,&PTR_PTR_1126ab590);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  param_1 = lVar9;
  func_0x000107c5faec();
  func_0x000107c61170(lVar9);
  uVar10 = 0;
  FUN_1028715cc(0,0x112ec5198,&PTR_PTR_1126ab588);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  apuStack_80[0] = puVar4;
  uStack_68 = uVar10;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(param_1,uVar5,apuStack_80,&uStack_a0);
LAB_10286e330:
  func_0x000107c615e8(uVar2);
  return param_1;
}



/* Entry: 10286e368; end: 10286e3df; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_10286e368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286e000(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286e3e0; end: 10286e3e7; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin pluginType] */

undefined8 FUN_10286e3e0(void)

{
  return 0;
}



/* Entry: 10286e3e8; end: 10286e3ff; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010286e3fc) */

void FUN_10286e3e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10286e400; end: 10286e5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10286e400(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = param_1;
  func_0x000107d6151c();
  func_0x000107c61180();
  if (uVar1 != 0) {
    func_0x000103b06ae4(0);
    uVar2 = uVar1;
    func_0x000103b06328();
    func_0x000107c61170(uVar1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec5128);
  func_0x000107c4ce08();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_10286e55c:
    func_0x000107c615e8(uVar2);
    return 0;
  }
  uVar3 = uVar1;
  func_0x000107c4f864();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar3 == 0) goto LAB_10286e55c;
  func_0x000107c61170(uVar3);
  uVar1 = uVar2;
  func_0x000107c4f858();
  func_0x000107c61180();
  if (uVar1 == 0) goto LAB_10286e55c;
  uVar3 = uVar1;
  func_0x000107c404a8();
  func_0x000107c61170(uVar1);
  if ((int)uVar3 != 0xb) goto LAB_10286e55c;
  uVar1 = param_1;
  func_0x000107c3f914();
  if ((int)uVar1 != 0) {
    uVar1 = uVar2;
    func_0x000107c3f91c();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar4 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec5118);
      uVar3 = ((ulong *)(unaff_x20 + _DAT_112ec5118))[1];
      if ((uVar4 == uVar1) && (param_2 == uVar3)) {
        func_0x000107c615e8(uVar2);
        func_0x000107c6142c(param_2);
        return 1;
      }
      func_0x000107c605b8(uVar4,param_2,uVar1,uVar3,0);
      func_0x000107c6142c(param_2);
      if ((uVar4 & 1) != 0) goto LAB_10286e5d0;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec5118);
    func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_112ec5118))[1]);
    func_0x000107c3f90c();
    func_0x000107c61170(uVar5);
    if ((int)param_1 != 0) {
LAB_10286e5d0:
      func_0x000107c615e8(uVar2);
      return 1;
    }
  }
  uVar1 = uVar2;
  func_0x000107c3f910(uVar2);
  func_0x000107c615e8(uVar2);
  return uVar1;
}



/* Entry: 10286e5fc; end: 10286e657; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin shouldDisplayContextualHeaderForMessage:] */

uint FUN_10286e5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286e400(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10286e658; end: 10286e91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10286e658(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  
  uVar7 = param_2;
  func_0x000107d6151c();
  func_0x000107c61180();
  if (param_1 != (undefined *)0x0) {
    func_0x000103b06ae4(0);
    puVar1 = param_1;
    func_0x000103b06364();
    func_0x000107c61170(param_1);
    if (puVar1 != (undefined *)0x0) {
      return puVar1;
    }
  }
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec5128);
  func_0x000107c4ce08();
  func_0x000107c61180();
  uVar3 = uVar2;
  FUN_102871b48();
  uVar13 = uVar2;
  uVar5 = uVar7;
  func_0x000107c3f91c();
  func_0x000107c61180();
  uVar6 = uVar3;
  uVar12 = uVar7;
  if (uVar13 == 0) {
LAB_10286e850:
    func_0x000107c61434(uVar7);
    uVar13 = 0;
    goto LAB_10286e864;
  }
  uVar4 = uVar13;
  func_0x000107c5faec();
  uVar11 = uVar5;
  if (uVar4 == *(ulong *)(unaff_x20 + _DAT_112ec5118) &&
      uVar5 == ((ulong *)(unaff_x20 + _DAT_112ec5118))[1]) {
    func_0x000107c61170(uVar13);
    func_0x000107c6142c(uVar5);
LAB_10286e75c:
    func_0x000102871c14();
    uVar6 = uVar5;
    uVar12 = uVar11;
    func_0x000102871c14();
    func_0x000107c6142c(uVar7);
    uVar7 = uVar11;
    uVar3 = uVar5;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(uVar5);
    if ((uVar4 & 1) != 0) {
      func_0x000107c61170(uVar13);
      uVar5 = uVar13;
      goto LAB_10286e75c;
    }
    uVar5 = uVar13;
    func_0x0001070b2c1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (param_2 == 0) goto LAB_10286e850;
    uVar7 = param_2;
    func_0x000107c5faec();
    uVar3 = uVar5;
    func_0x000107c61170(param_2);
    func_0x000102871ce0();
    lVar8 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
    lVar9 = lVar8;
    func_0x00010075bbf0();
    *(long *)(lVar8 + 0x40) = lVar9;
    *(ulong *)(lVar8 + 0x20) = uVar7;
    *(ulong *)(lVar8 + 0x28) = uVar5;
    uVar7 = uVar3;
    func_0x000107c5fb00(param_2,uVar3,lVar8);
    func_0x000107c6142c(uVar3);
    uVar3 = param_2;
  }
  func_0x000107c61434(uVar7);
  uVar13 = uVar7;
LAB_10286e864:
  puVar1 = PTR_PTR_1126c68c8;
  func_0x000107c61168(PTR_PTR_1126c68c8);
  func_0x000107c501a8();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126c68c0;
  func_0x000107c610f8(PTR_PTR_1126c68c0);
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(uVar6,uVar12);
  func_0x000107c48c9c(puVar10);
  func_0x000107c615e8(uVar2);
  func_0x000107c6142c(uVar13);
  func_0x000107c6142c(uVar12);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  return puVar10;
}



/* Entry: 10286e91c; end: 10286e993; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_10286e91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286e658(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286e994; end: 10286f10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10286e994(undefined *param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ec5128);
  uVar2 = uVar16;
  uVar14 = param_2;
  func_0x000107c4ce08(uVar16,param_2,param_1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c6a48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c557bc(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126c6a50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar5 = *(long *)(unaff_x20 + _DAT_112ec50f8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    if (lVar6 != 0) {
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ec5100);
      lVar5 = lVar6;
      func_0x0001065c2f88(lVar6,uVar14);
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c5942c(puVar4);
        func_0x000107c615e8(lVar6);
        lVar6 = lVar5;
      }
      func_0x000107c615e8(lVar6);
    }
  }
  if (param_3 == '\0') {
    puVar7 = &UNK_11055a770;
    func_0x000107c613fc(&UNK_11055a770,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_11055a8d8;
    uVar14 = 0x28;
    func_0x000107c613fc(&UNK_11055a8d8,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar2;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    uStack_90 = 0x102871548;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10281e828;
    puStack_98 = &UNK_11055a8f0;
    ppuVar9 = &puStack_b0;
    puStack_88 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_88;
    func_0x000107c615f0(uVar2);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c56ea0(puVar4);
    func_0x000107c60bd0(ppuVar9);
  }
  uVar12 = uVar2;
  func_0x000107c40258(uVar2);
  func_0x000107c61180();
  uVar10 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  FUN_10286f56c(uVar10,uVar14,param_1);
  func_0x000107c6142c(uVar14);
  puStack_b0 = param_1;
  func_0x0001007d6d78(&puStack_b0);
  func_0x0001044d77a8(0);
  bVar1 = (byte)*(undefined8 *)(unaff_x20 + _DAT_112ec5130);
  func_0x0001044d67d0();
  puVar7 = &UNK_11055a888;
  func_0x000107c613fc(&UNK_11055a888,0x1a,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar16;
  puVar7[0x18] = param_3;
  puVar7[0x19] = bVar1 & 1;
  uVar14 = 0;
  FUN_1028715cc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c615f0(uVar16);
  pcVar11 = FUN_102871530;
  puVar15 = puVar7;
  func_0x0001000bfde0(FUN_102871530,puVar7,uVar14);
  func_0x000107c61574(puVar7);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar11);
  puVar8 = puVar7;
  func_0x000107c421ac(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = puVar8;
  func_0x000107c5cb24(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c564b4(puVar4);
  func_0x000107c61170(puVar7);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ec5120);
  func_0x000107c5c734(uVar14);
  func_0x000107c61180();
  func_0x000107c54244(puVar4);
  func_0x000107c615e8(uVar14);
  if (param_3 == '\0') {
    uVar14 = uVar2;
    func_0x000107c40258();
    func_0x000107c61180();
    uVar16 = uVar14;
    func_0x000107c5faec();
    func_0x000107c61170(uVar14);
    lVar5 = *(long *)(unaff_x20 + _DAT_112ec50e8);
    puVar7 = (undefined *)0x0;
    if (lVar5 != 0) {
      func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
      func_0x000107c61174(lVar5);
      lVar6 = lVar5;
      func_0x0001000b637c();
      puVar7 = &UNK_11055a8b0;
      func_0x000107c613fc(&UNK_11055a8b0,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar16;
      *(undefined **)(puVar7 + 0x18) = puVar15;
      uVar16 = 0;
      FUN_1028715cc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61434(puVar15);
      uVar14 = 0x102871540;
      func_0x0001000bfde0(0x102871540,puVar7,uVar16);
      func_0x000107c61574(lVar6);
      func_0x000107c61574(puVar7);
      func_0x0001004575f0();
      func_0x000107c61574(uVar14);
      puVar8 = puVar7;
      func_0x000107c421ac(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = puVar8;
      func_0x000107c5cb24(puVar8);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar5);
    }
    func_0x000107c6142c(puVar15);
    func_0x000107c56660(puVar4);
    func_0x000107c61170(puVar7);
  }
  uVar14 = 0x112ec3630;
  uVar12 = 0;
  FUN_1028715cc(0,0x112ec3630,&PTR_PTR_1126c6a58);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar16 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  uVar12 = 0;
  FUN_1028715cc(0,0x112ec3638,&PTR_PTR_1126c6a48);
  uVar13 = 0;
  puStack_b0 = puVar3;
  puStack_98 = (undefined *)uVar12;
  FUN_1028715cc(0,0x112ec3640,&PTR_PTR_1126c6a50);
  apuStack_80[0] = puVar4;
  uStack_68 = uVar13;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar16,uVar14,&puStack_b0,apuStack_80);
  func_0x000107c615e8(uVar2);
  func_0x000107c61574(uVar10);
  return uVar16;
}



/* Entry: 10286f110; end: 10286f503;  */

/* WARNING: Possible PIC construction at 0x00010286f208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286f20c) */
/* WARNING: Removing unreachable block (ram,0x00010286f21c) */
/* WARNING: Removing unreachable block (ram,0x00010286f26c) */
/* WARNING: Removing unreachable block (ram,0x00010286f230) */
/* WARNING: Removing unreachable block (ram,0x00010286f238) */
/* WARNING: Removing unreachable block (ram,0x00010286f24c) */
/* WARNING: Removing unreachable block (ram,0x00010286f1bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286f110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  
  func_0x000107c3f910(param_6);
  uVar1 = param_7;
  func_0x0001070b1c70();
  if ((uVar1 & 1) == 0) {
    param_2 = *(undefined8 *)(param_1 + _DAT_112ec5118);
    func_0x000107c5fadc(param_2,((undefined8 *)(param_1 + _DAT_112ec5118))[1]);
    func_0x0001070b1d3c(param_7,param_2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c61168(PTR_PTR_1126c6a60);
    func_0x000107c5b444();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10286f504; end: 10286f56b;  */

void FUN_10286f504(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c40404(uVar2);
  func_0x000107c61170(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 10286f56c; end: 10286f6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10286f56c(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  func_0x00010006c804();
  lVar1 = _DAT_112ec50f0;
  func_0x000107c61428(unaff_x20 + _DAT_112ec50f0,auStack_68,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61438(lVar6,2);
    lVar2 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
      func_0x000107c6157c(puVar7);
      func_0x000107c61430(lVar6,2);
      goto LAB_10286f658;
    }
    func_0x000107c61430(lVar6,2);
  }
  auStack_80[0] = param_3;
  func_0x0001000285a8(0x112ec5180,&UNK_10dae5288);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  puVar7 = auStack_80;
  func_0x00010042e6a0(puVar7);
LAB_10286f658:
  func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar7);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_102870508(puVar7,param_1,param_2,uVar3);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_80);
  func_0x000100070bfc();
  return puVar7;
}



/* Entry: 10286f6ec; end: 10286f747; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin init] */

void FUN_10286f6ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatSnapMessagePlugin.ChatSnapMessagePlugin",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10286f718);
  (*pcVar1)();
}



/* Entry: 10286f748; end: 10286f883; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010286f784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286f848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286f81c) */
/* WARNING: Removing unreachable block (ram,0x00010286f7e8) */
/* WARNING: Removing unreachable block (ram,0x00010286f7c8) */
/* WARNING: Removing unreachable block (ram,0x00010286f7a8) */
/* WARNING: Removing unreachable block (ram,0x00010286f788) */
/* WARNING: Removing unreachable block (ram,0x00010286f84c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286f748(long param_1)

{
  func_0x000100d0bb7c(param_1 + _DAT_112ec50c8);
  func_0x000100d0bb7c(param_1 + _DAT_112ec50d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec50d8));
  return;
}



/* Entry: 10286f884; end: 10286f8a3;  */

void FUN_10286f884(void)

{
  func_0x000107c61168(&PTR_PTR_1128674a8);
  return;
}



/* Entry: 10286f8a4; end: 10286f93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10286f8a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec5128);
  func_0x000107c4ce08(uVar1,param_2,param_1);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c4a4a4();
  if (((int)uVar3 == 0) || (uVar3 = uVar1, func_0x000107c4a384(), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec5118);
    func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112ec5118))[1]);
    uVar3 = uVar1;
    func_0x000107c4a3cc(uVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c615e8(uVar1);
  return uVar3;
}



/* Entry: 10286f93c; end: 10286f997; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_10286f93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286f8a4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10286f998; end: 10286f9f3; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin canForwardMessageFromCTA:] */

uint FUN_10286f998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10286f8a4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10286f9f4; end: 10286fa8b; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_10286f9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102870a64(param_3,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10286fa8c; end: 10286fb4b; -[_TtC21ChatSnapMessagePlugin21ChatSnapMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

/* WARNING: Possible PIC construction at 0x00010286fb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286fb30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286fb24) */
/* WARNING: Removing unreachable block (ram,0x00010286fb34) */

void FUN_10286fa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c60bc4(param_7);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102870b20(param_3,param_5,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10286fb4c; end: 10287000f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10286fb4c(double param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  double dVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  if ((param_2 == 0) || (param_3 != 0)) {
    (*param_4)(0);
  }
  else {
    func_0x000107c61174();
    lVar9 = param_2;
    func_0x00010011df08();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_3);
    }
    func_0x000107c4ca5c(param_6);
    func_0x0001085439dc();
    puVar2 = PTR_PTR_1126cfd18;
    func_0x000107c610f8(PTR_PTR_1126cfd18);
    func_0x000107c46d0c();
    func_0x000107c61170(lVar9);
    if (param_7 == 0) {
      func_0x000107c61174(puVar2);
      lVar9 = 0;
    }
    else {
      lVar3 = 0x112e5e2f0;
      FUN_102870490(0x112e5e2f0,&PTR_PTR_1126c4548,0x112e5e788,&UNK_10da65b10);
      func_0x000107c613fc();
      param_1 = 4.94065645841247e-324;
      *(undefined8 *)(lVar3 + 0x18) = 3;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(long *)(lVar3 + 0x20) = param_7;
      uVar4 = 0;
      FUN_1028715cc(0,0x112e5e2f0,&PTR_PTR_1126c4548);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(param_7);
      lVar9 = lVar3;
      func_0x000107c5fc48(lVar3,uVar4);
      func_0x000107c61574(lVar3);
    }
    func_0x000107c56460(puVar2);
    func_0x000107c61170(lVar9);
    func_0x000107c55258(puVar2);
    func_0x000107c5b078(param_2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10286fffc);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102870000);
      (*pcVar1)();
    }
    dVar13 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102870004);
      (*pcVar1)();
    }
    func_0x000107c564ac(puVar2);
    func_0x000107c5b078(param_2);
    if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102870008);
      (*pcVar1)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10287000c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102870010);
      (*pcVar1)();
    }
    func_0x000107c5641c(puVar2);
    func_0x000107c61170(puVar2);
    puVar12 = auStack_78;
    func_0x000107c61428(param_8 + 0x10,puVar12,0,0);
    puVar5 = (undefined *)(param_8 + 0x10);
    func_0x000107c61618();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010011df08();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar12);
      }
      puVar7 = puVar2;
      func_0x000106e0c1a0(puVar2);
      func_0x000107c61180();
      puVar8 = PTR_PTR_1126cfb00;
      func_0x000107c610f8();
      func_0x000107c47638();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      lVar9 = *(long *)(puVar5 + _DAT_112ec5108);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar3 = 0x112e5e778;
        FUN_102870490(0x112e5e778,&PTR_PTR_1126cfb00,0x112e5e780,&UNK_10dae5280);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 3;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined **)(lVar3 + 0x20) = puVar8;
        uVar4 = 0;
        FUN_1028715cc(0,0x112e5e778,&PTR_PTR_1126cfb00);
        func_0x000107c61174(puVar8);
        lVar10 = lVar3;
        func_0x000107c5fc48(lVar3,uVar4);
        func_0x000107c61574(lVar3);
        uVar4 = *(undefined8 *)(param_9 + _DAT_11307fc78);
        func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
        puVar6 = &UNK_11055a7e8;
        func_0x000107c613fc(&UNK_11055a7e8,0x20,7);
        *(code **)(puVar6 + 0x10) = param_4;
        *(undefined8 *)(puVar6 + 0x18) = param_5;
        pcStack_88 = FUN_102871508;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f5c588;
        puStack_90 = &UNK_11055a800;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar11);
        puVar6 = puStack_80;
        func_0x000107c6157c(param_5);
        func_0x000107c61574(puVar6);
        func_0x000107c51dd8(lVar9);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(param_2);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c615e8(lVar9);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(uVar4);
        return;
      }
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar2);
      puVar2 = puVar5;
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102870010; end: 102870083;  */

void FUN_102870010(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_1,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102870084; end: 10287048f;  */

/* WARNING: Possible PIC construction at 0x00010287012c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102870200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102870238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028702a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102870418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102870438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102870468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010287043c) */
/* WARNING: Removing unreachable block (ram,0x00010287041c) */
/* WARNING: Removing unreachable block (ram,0x0001028702a4) */
/* WARNING: Removing unreachable block (ram,0x000102870464) */
/* WARNING: Removing unreachable block (ram,0x0001028702c8) */
/* WARNING: Removing unreachable block (ram,0x00010287023c) */
/* WARNING: Removing unreachable block (ram,0x000102870250) */
/* WARNING: Removing unreachable block (ram,0x000102870268) */
/* WARNING: Removing unreachable block (ram,0x000102870204) */
/* WARNING: Removing unreachable block (ram,0x000102870130) */
/* WARNING: Removing unreachable block (ram,0x0001028701e4) */
/* WARNING: Removing unreachable block (ram,0x000102870138) */
/* WARNING: Removing unreachable block (ram,0x0001028701f0) */
/* WARNING: Removing unreachable block (ram,0x00010287046c) */

void FUN_102870084(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  if ((param_2 != 3) && (param_2 != 0)) {
    (*param_3)(0);
    return;
  }
  func_0x00010011df08();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c4ca5c(param_5);
  func_0x0001085439dc();
  func_0x000107c610f8(PTR_PTR_1126d2a00);
  func_0x000107c46d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102870490; end: 102870507;  */

void FUN_102870490(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1028715cc(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102870508; end: 1028707c7;  */

void FUN_102870508(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028705e0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1028707c8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028705a8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102870658();
    lVar6 = *unaff_x20;
    goto joined_r0x0001028705f4;
  }
  lVar6 = *unaff_x20;
joined_r0x0001028705f4:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102870658);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1028707c8; end: 102870a63;  */

void FUN_1028707c8(long param_1,ulong param_2)

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
  uVar6 = 0x112ec5188;
  func_0x0001000285a8(0x112ec5188,&UNK_10dae5290);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102870a30:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102870a60);
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
          goto LAB_102870a30;
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
      func_0x000107c6157c(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102870a64);
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



/* Entry: 102870a64; end: 102870b1f;  */

undefined * FUN_102870a64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_10286e994(param_1,param_2,2);
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c6898;
    func_0x000107c61168(PTR_PTR_1126c6898);
    func_0x000107c3fff0();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126c68a0;
    func_0x000107c61168(PTR_PTR_1126c68a0);
    func_0x000107c43b80();
    func_0x000107c61180();
  }
  puVar1 = PTR_PTR_1126c68a8;
  func_0x000107c610f8(PTR_PTR_1126c68a8);
  func_0x000107c480c8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 102870b20; end: 102871417;  */

/* WARNING: Possible PIC construction at 0x000102870fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102870ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028711ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028710b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028713a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028713b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028713f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102871148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028713f8) */
/* WARNING: Removing unreachable block (ram,0x0001028713bc) */
/* WARNING: Removing unreachable block (ram,0x0001028713ac) */
/* WARNING: Removing unreachable block (ram,0x0001028710bc) */
/* WARNING: Removing unreachable block (ram,0x000102871168) */
/* WARNING: Removing unreachable block (ram,0x0001028710c4) */
/* WARNING: Removing unreachable block (ram,0x000102871170) */
/* WARNING: Removing unreachable block (ram,0x000102871210) */
/* WARNING: Removing unreachable block (ram,0x0001028713d8) */
/* WARNING: Removing unreachable block (ram,0x00010287123c) */
/* WARNING: Removing unreachable block (ram,0x000102870ff8) */
/* WARNING: Removing unreachable block (ram,0x000102870fe0) */
/* WARNING: Removing unreachable block (ram,0x00010287114c) */
/* WARNING: Removing unreachable block (ram,0x0001028711f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102870b20(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar4 = 0x112d36580;
  lStack_98 = param_2;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puStack_d0 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar4 = 0;
  lStack_c8 = lVar10;
  func_0x000107c5ede0();
  lStack_c0 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lStack_c0 + 0x40);
  lStack_b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  lVar4 = 0;
  lStack_d8 = lVar10;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &UNK_11055a6f8;
  uVar9 = 0x18;
  func_0x000107c613fc(&UNK_11055a6f8,0x18,7);
  *(long *)(puVar5 + 0x10) = param_5;
  puVar12 = *(undefined **)(param_4 + _DAT_112ec5128);
  lStack_a0 = param_4;
  func_0x000107c60bc4(param_5);
  func_0x000107c4ce08();
  func_0x000107c61180();
  puVar6 = puVar12;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c61574(puVar5);
    goto code_r0x000107c615e8;
  }
  puVar7 = PTR_PTR_1126b1a40;
  puStack_b0 = puVar5;
  puStack_a8 = puVar12;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar7;
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar12 = puVar5;
  func_0x000107c5e4a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar12;
  func_0x000107c5e5cc();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  puVar7 = puVar5;
  func_0x000107c5e870();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar12);
  uVar11 = *(undefined8 *)(lStack_98 + _DAT_11307fc80);
  uVar9 = 0;
  func_0x0001044c309c(0);
  func_0x000107c5fc48(uVar11,uVar9);
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102871418);
    (*pcVar2)();
  }
  uVar9 = uVar11;
  func_0x0001086063d8();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  puVar5 = puVar7;
  func_0x000107c5e500();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5eea0(lVar10);
  func_0x000107c5ee70();
  (**(code **)(lVar13 + 8))(lVar10,lVar4);
  puVar12 = puVar5;
  func_0x000107c5e5b0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar9);
  puVar5 = puVar12;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar12 = puStack_a8;
  puVar7 = puStack_a8;
  func_0x000107c4c9e4();
  func_0x000107c61180();
  puVar14 = puVar6;
  func_0x000107c4ca5c();
  func_0x0001085436ac();
  if (((ulong)puVar14 & 1) == 0) {
    puVar14 = puVar6;
    func_0x000107c4ca5c();
    iVar3 = (int)puVar14;
    func_0x000108543658();
    if (iVar3 != 0) goto LAB_102870e84;
    puVar14 = puVar6;
    func_0x000107c4ca5c();
    func_0x0001085436b8();
    if (((ulong)puVar14 & 1) == 0) {
      puVar14 = puVar6;
      func_0x000107c4ca5c();
      iVar3 = (int)puVar14;
      func_0x000108543674();
      if (iVar3 == 0) {
        (**(code **)(param_5 + 0x10))(param_5,0);
        func_0x000107c61574(puStack_b0);
        goto code_r0x000107c615e8;
      }
    }
    puVar14 = *(undefined **)(lStack_a0 + _DAT_112ec5110);
    puStack_e8 = puVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lStack_c8;
    if (puVar14 != (undefined *)0x0) {
      func_0x000107c5de4c();
      func_0x000107c61180();
      puVar12 = puVar14;
      goto code_r0x000107c615e8;
    }
    (**(code **)(lStack_c0 + 0x38))(lStack_c8,1,1,lStack_b8);
    func_0x0001000293e4(lVar4);
    (**(code **)(param_5 + 0x10))(param_5,0);
    func_0x000107c61574(puStack_b0);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    puVar7 = puStack_e8;
  }
  else {
LAB_102870e84:
    puVar14 = puVar6;
    func_0x000107c4c99c();
    func_0x000107c61180();
    lVar4 = lStack_a0;
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
      func_0x000107c61574(puStack_b0);
    }
    else {
      lVar10 = *(long *)(lStack_a0 + _DAT_112ec5110);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        puVar14 = &UNK_11055a770;
        func_0x000107c613fc(&UNK_11055a770,0x18,7);
        func_0x000107c61614(puVar14 + 0x10,lVar4);
        puVar8 = &UNK_11055a798;
        func_0x000107c613fc(&UNK_11055a798,0x48,7);
        lVar4 = lStack_98;
        puVar1 = puStack_b0;
        *(code **)(puVar8 + 0x10) = FUN_102871418;
        *(undefined **)(puVar8 + 0x18) = puStack_b0;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        *(undefined **)(puVar8 + 0x28) = puVar7;
        *(undefined **)(puVar8 + 0x30) = puVar14;
        *(long *)(puVar8 + 0x38) = lStack_98;
        *(undefined **)(puVar8 + 0x40) = puVar5;
        pcStack_70 = FUN_1028714d8;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_102870010;
        puStack_78 = &UNK_11055a7b0;
        puStack_68 = puVar8;
        func_0x000107c60bc4(&puStack_90);
        puVar14 = puStack_68;
        func_0x000107c6157c(puVar1);
        func_0x000107c61174(puVar6);
        func_0x000107c61174(puVar7);
        func_0x000107c61174(lVar4);
        func_0x000107c61174(puVar5);
        func_0x000107c61574(puVar14);
        func_0x000107c45088(lVar10);
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar7);
        goto code_r0x000107c615e8;
      }
      func_0x000107c61574(puStack_b0);
      func_0x000107c61170(puVar14);
    }
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar7);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar12);
  return;
}



/* Entry: 102871418; end: 10287142b;  */

void FUN_102871418(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102871428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10287142c; end: 1028714bb;  */

void FUN_10287142c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  FUN_102870084(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                unaff_x20 + uVar3,*(undefined8 *)(unaff_x20 + uVar2),
                *(undefined8 *)(unaff_x20 + uVar2 + 8),
                *(undefined8 *)(unaff_x20 + (uVar2 + 0x17 & 0xffffffffffffff8)));
  return;
}



/* Entry: 1028714bc; end: 1028714d7;  */

void FUN_1028714bc(long param_1,long param_2)

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



/* Entry: 1028714d8; end: 102871507;  */

void FUN_1028714d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10286fb4c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102871508; end: 10287152f;  */

void FUN_102871508(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  return;
}



/* Entry: 102871530; end: 102871567;  */

void FUN_102871530(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x19);
  cVar2 = *(char *)(unaff_x20 + 0x18);
  lVar10 = lVar8;
  func_0x000107c4ce08(lVar8,lVar8,*param_2);
  func_0x000107c61180();
  lVar9 = lVar8;
  lVar3 = lVar8;
  if (cVar2 == '\0') {
    func_0x000107c4f860();
    func_0x000107c61180();
    func_0x000107c3f908();
    func_0x000107c61180();
    if (lVar3 != 0) goto LAB_10286f31c;
    if (lVar9 == 0) {
      lVar10 = 0;
      goto LAB_10286f4a0;
    }
  }
  else {
    func_0x000107c4c930();
    func_0x000107c61180();
    func_0x000107c40258(lVar8);
    func_0x000107c61180();
LAB_10286f31c:
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    if (lVar9 == 0) {
LAB_10286f4a0:
      func_0x000107c6142c(lVar10);
      lVar9 = 0;
    }
    else if (lVar10 != 0) {
      func_0x000107c5fadc(lVar4,lVar10);
      func_0x000107c6142c(lVar10);
      lVar10 = lVar8;
      func_0x000107c3dc7c(lVar8);
      func_0x000107c61180();
      lVar3 = lVar8;
      func_0x000107c40674(lVar8);
      func_0x000107c61180();
      lVar5 = lVar9;
      func_0x000107c5caf0();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar3);
      if (((bVar1 & 1) != 0) && (lVar10 = lVar9, func_0x000107c5ab50(), (int)lVar10 != 0)) {
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c55610(lVar5);
        func_0x000107c61170(puVar7);
      }
      puVar7 = (undefined *)0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      uVar6 = 0;
      FUN_1028715cc(0,0x112ec3648,&PTR_PTR_1126d9fa8);
      *(undefined8 *)(puVar7 + 0x38) = uVar6;
      *(long *)(puVar7 + 0x20) = lVar5;
      FUN_1028715cc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61174(lVar5);
      func_0x000107c600f0();
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(lVar5);
      goto LAB_10286f4e0;
    }
  }
  FUN_1028715cc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0();
  func_0x000107c615e8(lVar8);
LAB_10286f4e0:
  func_0x000107c61170(lVar9);
  *param_1 = puVar7;
  return;
}



/* Entry: 102871568; end: 1028715ab;  */

void FUN_102871568(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028715ac; end: 1028715cb;  */

void FUN_1028715ac(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    pcVar3 = "valdiContextParams(for:conversationParticipants:)";
    func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
    func_0x000107c61180();
    puVar4 = &UNK_11055aa18;
    func_0x000107c613fc(&UNK_11055aa18,0x30,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    *(undefined8 *)(puVar4 + 0x20) = uVar6;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    pcStack_78 = FUN_10287160c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11055aa30;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_70;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(lVar2);
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(uVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1028715cc; end: 10287160b;  */

void FUN_1028715cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10287160c; end: 102871667;  */

/* WARNING: Possible PIC construction at 0x00010286d92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286d93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286d98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010286d8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286d940) */
/* WARNING: Removing unreachable block (ram,0x00010286d990) */
/* WARNING: Removing unreachable block (ram,0x00010286d954) */
/* WARNING: Removing unreachable block (ram,0x00010286d95c) */
/* WARNING: Removing unreachable block (ram,0x00010286d970) */
/* WARNING: Removing unreachable block (ram,0x00010286d930) */
/* WARNING: Removing unreachable block (ram,0x00010286d8d4) */
/* WARNING: Removing unreachable block (ram,0x00010286d904) */
/* WARNING: Removing unreachable block (ram,0x00010286d8e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287160c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = uVar5;
  func_0x000107c40258(uVar5,uVar5,uVar3,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61180();
  func_0x000107c4cde0(uVar5);
  func_0x000107c61180();
  func_0x000107c4a384(uVar5);
  uVar5 = uVar3;
  func_0x0001070b1c70();
  if ((int)uVar5 == 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ec5118);
    uVar4 = *puVar1;
    func_0x000107c5fadc(uVar4,puVar1[1]);
    func_0x0001070b1d3c(uVar3,uVar4);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61168(PTR_PTR_1126c6a60);
    func_0x000107c5b444();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 102871668; end: 102871b03;  */

void FUN_102871668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_11055aa90;
  func_0x000107c613fc(&UNK_11055aa90,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_102871b04,puVar1);
  return;
}



/* Entry: 102871b04; end: 102871b37;  */

void FUN_102871b04(void)

{
  long unaff_x20;
  
  func_0x00010287176c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102871b38; end: 102871b47;  */

undefined1  [16] FUN_102871b38(void)

{
  return ZEXT816(0x11055aab8);
}



/* Entry: 102871b48; end: 102871dab;  */

undefined1  [16] FUN_102871b48(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0c35c0);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010dae52c0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102871c14);
  (*pcVar1)();
}



/* Entry: 102871dac; end: 102871dbb;  */

undefined1  [16] FUN_102871dac(void)

{
  return ZEXT816(0x11055aad8);
}



/* Entry: 102871dbc; end: 102871e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102871dbc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec51b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102871e54; end: 10287203b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102871e54(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 uStack_59;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_112ec51f8);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_112ec5200);
  FUN_102874488(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  FUN_1028740f0();
  if (param_1 == 0) {
    func_0x0001000285a8(0x112ec51c0,&UNK_10dae5320);
    uStack_59 = 5;
    puVar4 = &uStack_59;
    func_0x000100854cb0(puVar4);
    uVar3 = 0;
    func_0x0001002ed07c(0);
    pcVar6 = FUN_1028724cc;
    func_0x0001000bfde0(FUN_1028724cc,0,uVar3);
    func_0x000107c61574(puVar4);
    func_0x0001004575f0();
    func_0x000107c61170(lStack_58);
  }
  else {
    uVar3 = *(undefined8 *)(lStack_58 + _DAT_112ec5208);
    lVar1 = ((undefined8 *)(lStack_58 + _DAT_112ec5208))[1];
    func_0x000107c614f0(uVar3);
    pcVar6 = *(code **)(lVar1 + 8);
    uVar2 = 0x100;
    if ((param_3 & 1) == 0) {
      uVar2 = 0;
    }
    puVar4 = (undefined1 *)(ulong)(uVar2 | param_2 & 1);
    func_0x000107c6157c(param_1);
    (*pcVar6)(puVar4,param_1,&PTR_DAT_11055ae58,uVar3,lVar1);
    uVar3 = 0;
    func_0x0001002ed07c(0);
    pcVar6 = FUN_1028724cc;
    func_0x0001000bfde0(0x1028724d0,0,uVar3);
    func_0x000107c61574(puVar4);
    func_0x0001004575f0();
    func_0x000107c61170(lStack_58);
    func_0x000107c61578(param_1,2);
  }
  func_0x000107c61574(pcVar6);
  return puVar4;
}



/* Entry: 10287203c; end: 1028720ab; -[SCWChatMediaBridge scwStateBridgeObservableForMediaContent:isVideo:isSelfSent:] */

void FUN_10287203c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102871e54(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028720ac; end: 102872137; +[SCWChatMediaBridge disabledStateBridgeObservable] */

void FUN_1028720ac(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uStack_21;
  
  func_0x0001000285a8(0x112ec51c0,&UNK_10dae5320);
  uStack_21 = 5;
  puVar1 = &uStack_21;
  func_0x000100854cb0(puVar1);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  uVar3 = 0x1028724d4;
  func_0x0001000bfde0(0x1028724d4,0,uVar2);
  func_0x000107c61574(puVar1);
  func_0x0001004575f0();
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102872138; end: 1028721ff; -[SCWChatMediaBridge markRevealedForMediaID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102872138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112ec5208);
  lVar2 = ((undefined8 *)(lStack_48 + _DAT_112ec5208))[1];
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_48);
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  (**(code **)(lVar2 + 0x10))(param_3,param_2,uVar3,lVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102872200; end: 102872237;  */

void FUN_102872200(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar1;
  return;
}



/* Entry: 102872238; end: 1028722a3; -[SCWChatMediaBridge saveRestrictionVersionBridgeObservable] */

void FUN_102872238(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x000104032b00();
  uVar3 = *param_1;
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6157c(uVar3);
  pcVar2 = FUN_102872200;
  func_0x0001000bfde0(FUN_102872200,0,uVar1);
  func_0x000107c61574(uVar3);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1028722a4; end: 102872373; -[SCWChatMediaBridge requiresModalRevealForMediaID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1028722a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112ec5208);
  lVar2 = ((undefined8 *)(lStack_48 + _DAT_112ec5208))[1];
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_48);
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  (**(code **)(lVar2 + 0x28))(param_3,param_2,uVar3,lVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 102872374; end: 10287243b; -[SCWChatMediaBridge videoBecameAvailableForMediaID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102872374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_112ec5208);
  lVar2 = ((undefined8 *)(lStack_48 + _DAT_112ec5208))[1];
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_48);
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  (**(code **)(lVar2 + 0x30))(param_3,param_2,uVar3,lVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 10287243c; end: 10287249b; -[SCWChatMediaBridge init] */

void FUN_10287243c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCWChatMediaServices.SCWChatMediaBridge",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102872468);
  (*pcVar1)();
}



/* Entry: 10287249c; end: 1028724ab; -[SCWChatMediaBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10287249c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec51b8));
  return;
}



/* Entry: 1028724ac; end: 1028724cb;  */

void FUN_1028724ac(void)

{
  func_0x000107c61168(&PTR_PTR_112867708);
  return;
}


