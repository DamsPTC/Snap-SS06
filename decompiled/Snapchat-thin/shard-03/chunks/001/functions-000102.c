/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10251513c; end: 10251519b; -[_TtC37MapArrivalNotificationsImplementation43MapMultiFriendArrivalNotificationsPresenter init] */

void FUN_10251513c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsImplementation.MapMultiFriendArrivalNotificationsPresenter"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102515168);
  (*pcVar1)();
}



/* Entry: 10251519c; end: 102515213; -[_TtC37MapArrivalNotificationsImplementation43MapMultiFriendArrivalNotificationsPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025151b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025151d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025151f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025151dc) */
/* WARNING: Removing unreachable block (ram,0x0001025151bc) */
/* WARNING: Removing unreachable block (ram,0x0001025151fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251519c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea3750));
  return;
}



/* Entry: 102515214; end: 102515233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515214(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar10 = &lStack_70;
  lVar7 = lVar1;
  FUN_102515234();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar6 = _DAT_112ea3770;
  uVar9 = 0x112e5c570;
  func_0x0001000285a8(0x112e5c570,&UNK_10dab5c40);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar8 + lVar6) = uVar9;
  *(long *)(lVar8 + _DAT_112ea3760) = lVar1;
  *(undefined8 *)(lVar8 + _DAT_112ea3750) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112ea3758) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112ea3768) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112ea3748) = uVar11;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar5);
  *param_1 = plVar10;
  return;
}



/* Entry: 102515234; end: 102515253;  */

void FUN_102515234(void)

{
  func_0x000107c61168(&PTR_PTR_11284b728);
  return;
}



/* Entry: 102515254; end: 102515377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102515254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea37a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea37b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea37b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea37c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea37c8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea37d0) = param_5;
  puVar1 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(0,0,0,0,auStack_50,puVar1);
  func_0x000107c61180();
  FUN_102515378();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar2;
}



/* Entry: 102515378; end: 1025155c3;  */

/* WARNING: Possible PIC construction at 0x00010251543c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025154e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251550c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102515544) */
/* WARNING: Removing unreachable block (ram,0x000102515510) */
/* WARNING: Removing unreachable block (ram,0x0001025154e8) */
/* WARNING: Removing unreachable block (ram,0x000102515494) */
/* WARNING: Removing unreachable block (ram,0x000102515440) */
/* WARNING: Removing unreachable block (ram,0x000102515584) */

void FUN_102515378(long param_1)

{
  undefined *puVar1;
  
  FUN_102515628();
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c3d89c();
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 9;
    *(undefined8 *)(puVar1 + 0x10) = 4;
    func_0x000107c5cbe4(param_1);
    func_0x000107c61180();
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c40280(param_1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1025155c4; end: 102515627; -[_TtC37MapArrivalNotificationsImplementation38MapMultiFriendArrivalNotificationsView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025155c4(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea37a8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapArrivalNotificationsImplementation/MapMultiFriendArrivalNotificationsView.swift"
                      ,0x52,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102515628);
  (*pcVar1)();
}



/* Entry: 102515628; end: 10251589b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515628(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar8 = *(long *)(unaff_x20 + _DAT_112ea37b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar2 = lVar8;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126aa9c0;
      func_0x000107c610f8(PTR_PTR_1126aa9c0);
      func_0x000107c453e4();
      puVar4 = &UNK_11051b908;
      func_0x000107c613fc(&UNK_11051b908,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_50 = FUN_102515a30;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_100f7177c;
      puStack_58 = &UNK_11051b920;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c56f5c(puVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c5a3d0(puVar3);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ea37d0);
      func_0x000107c5fc48(uVar6,PTR___sSSN_11034da80);
      func_0x000107c57098(puVar3);
      func_0x000107c61170(uVar6);
      lVar8 = *(long *)(unaff_x20 + _DAT_112ea37c0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x000100083b20(&puStack_70);
        puVar1 = puStack_70;
        puVar4 = puStack_70 + _DAT_112ea35a0;
        func_0x000107c61618();
        func_0x000107c61170(puVar1);
        lVar9 = lVar8;
        if (puVar4 != (undefined *)0x0) {
          lVar7 = lVar8;
          func_0x000107c409cc();
          func_0x000107c61180();
          if (lVar7 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = lVar7;
            func_0x000107c40978();
            func_0x000107c61180();
            func_0x000107c615e8(lVar7);
          }
          func_0x000107c53e94(puVar3);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(puVar4);
        }
        func_0x000107c615e8(lVar9);
      }
      puVar4 = PTR_PTR_1126aa9c8;
      func_0x000107c610f8(PTR_PTR_1126aa9c8);
      func_0x000107c61174(puVar3);
      func_0x000107c49520(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10251589c; end: 102515937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251589c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ea37b0);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    uStack_60 = param_1;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102515938; end: 102515997; -[_TtC37MapArrivalNotificationsImplementation38MapMultiFriendArrivalNotificationsView initWithFrame:] */

void FUN_102515938(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsImplementation.MapMultiFriendArrivalNotificationsView"
                      ,0x4c,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102515964);
  (*pcVar1)();
}



/* Entry: 102515998; end: 102515a0f; -[_TtC37MapArrivalNotificationsImplementation38MapMultiFriendArrivalNotificationsView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025159b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025159d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025159b8) */
/* WARNING: Removing unreachable block (ram,0x0001025159d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea37b8));
  return;
}



/* Entry: 102515a10; end: 102515a2f;  */

void FUN_102515a10(void)

{
  func_0x000107c61168(&PTR_PTR_11284b810);
  return;
}



/* Entry: 102515a30; end: 102515a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515a30(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ea37b0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uStack_60 = param_1;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102515a54; end: 102515c3f;  */

/* WARNING: Possible PIC construction at 0x000102515b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102515c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102515c0c) */
/* WARNING: Removing unreachable block (ram,0x000102515bfc) */
/* WARNING: Removing unreachable block (ram,0x000102515bec) */
/* WARNING: Removing unreachable block (ram,0x000102515bdc) */
/* WARNING: Removing unreachable block (ram,0x000102515bcc) */
/* WARNING: Removing unreachable block (ram,0x000102515bbc) */
/* WARNING: Removing unreachable block (ram,0x000102515bac) */
/* WARNING: Removing unreachable block (ram,0x000102515b9c) */
/* WARNING: Removing unreachable block (ram,0x000102515b8c) */
/* WARNING: Removing unreachable block (ram,0x000102515b7c) */
/* WARNING: Removing unreachable block (ram,0x000102515c1c) */

void FUN_102515a54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  code *pcVar24;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xb8);
  puVar22 = &UNK_11051ba48;
  func_0x000107c613fc(&UNK_11051ba48,0xc0,7);
  *(undefined8 *)(puVar22 + 0x10) = uVar1;
  *(undefined8 *)(puVar22 + 0x18) = uVar11;
  *(undefined8 *)(puVar22 + 0x20) = uVar23;
  *(undefined8 *)(puVar22 + 0x28) = uVar12;
  *(undefined8 *)(puVar22 + 0x30) = uVar2;
  *(undefined8 *)(puVar22 + 0x38) = uVar13;
  *(undefined8 *)(puVar22 + 0x40) = uVar3;
  *(undefined8 *)(puVar22 + 0x48) = uVar14;
  *(undefined8 *)(puVar22 + 0x50) = uVar4;
  *(undefined8 *)(puVar22 + 0x58) = uVar15;
  *(undefined8 *)(puVar22 + 0x60) = uVar5;
  *(undefined8 *)(puVar22 + 0x68) = uVar16;
  *(undefined8 *)(puVar22 + 0x70) = uVar6;
  *(undefined8 *)(puVar22 + 0x78) = uVar17;
  *(undefined8 *)(puVar22 + 0x80) = uVar7;
  *(undefined8 *)(puVar22 + 0x88) = uVar18;
  *(undefined8 *)(puVar22 + 0x90) = uVar8;
  *(undefined8 *)(puVar22 + 0x98) = uVar19;
  *(undefined8 *)(puVar22 + 0xa0) = uVar9;
  *(undefined8 *)(puVar22 + 0xa8) = uVar20;
  *(undefined8 *)(puVar22 + 0xb0) = uVar10;
  *(undefined8 *)(puVar22 + 0xb8) = uVar21;
  uVar23 = 0x112ea3808;
  func_0x0001000285a8(0x112ea3808,&UNK_10dab6090);
  func_0x000107c613fc();
  pcVar24 = FUN_102515d1c;
  func_0x0001000841fc(FUN_102515d1c,puVar22,uVar23);
  func_0x000100084214(&UNK_10dab6060,0x2f,2);
  *param_1 = pcVar24;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102515c40; end: 102515c4f;  */

undefined1  [16] FUN_102515c40(void)

{
  return ZEXT816(0x11051ba28);
}



/* Entry: 102515c50; end: 102515d1b;  */

void FUN_102515c50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102515d1c; end: 102515d8f;  */

void FUN_102515d1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1025174f4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000100082720("MapChatLocationTrayRouterEntryPointProvider",0x2b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102515d90; end: 102515da3;  */

void FUN_102515d90(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11051bb18;
  if (lRam0000000112ea3818 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ea3818 = param_1;
  }
  return;
}



/* Entry: 102515da4; end: 102515de7;  */

void FUN_102515da4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102515de8; end: 102515e8f;  */

undefined8
FUN_102515de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = param_5;
  func_0x0001000c6518(param_5,*(undefined8 *)(param_5 + 0x18));
  FUN_102516dbc(param_1,param_3,param_4,lVar1,param_6);
  func_0x0001000834e4(param_5);
  return param_1;
}



/* Entry: 102515e90; end: 102515ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515e90(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ea3820));
  (**(code **)(lVar1 + 0x90))();
  return;
}



/* Entry: 102515ecc; end: 102515f33; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler onSendCurrentLocationTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515ecc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3820);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3820))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x90);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102515f34; end: 102515f3b;  */

/* WARNING: Possible PIC construction at 0x000102516f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102516f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102516fb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102516f48) */
/* WARNING: Removing unreachable block (ram,0x000102516f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515f34(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3820);
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
    func_0x000107c614f0(uVar2);
    (**(code **)(lVar3 + 0x98))(1,0,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ea3828);
  func_0x000107c615f0();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = param_2;
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c4e864();
    func_0x000107c61180();
    lVar3 = lVar4;
    if (lVar1 != 0) {
      func_0x000107c4d06c();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3820);
      lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
      func_0x000107c614f0(uVar2);
      pcVar5 = *(code **)(lVar3 + 0x98);
      func_0x000107c615f0(lVar1);
      (*pcVar5)(1,lVar1,uVar2,lVar3);
      lVar3 = param_2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 102515f3c; end: 102515f83; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler onShareMyLocationTapWithShouldShare:deckContainerFactory:] */

void FUN_102515f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102516e8c(param_4);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102515f84; end: 102516073;  */

/* WARNING: Possible PIC construction at 0x00010251602c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102516030) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102515f84(undefined8 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea3828);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c4e864();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4d06c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea3820);
    lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
    func_0x000107c614f0(uVar4);
    (**(code **)(lVar1 + 0xa0))(param_1,param_2 & 1,lVar3,uVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102516074; end: 1025160ef; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler onGroupShareMyLocationTapWithFriendIds:shouldShare:deckContainerFactory:] */

void FUN_102516074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_102515f84(param_3,param_4,param_5);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1025160f0; end: 10251612b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025160f0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ea3820));
  (**(code **)(lVar1 + 0xa8))();
  return;
}



/* Entry: 10251612c; end: 102516193; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler onEditLocationSettingsTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251612c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3820);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3820))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0xa8);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102516194; end: 1025161db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516194(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3820);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x98))(0,0,uVar2,lVar1);
  return;
}



/* Entry: 1025161dc; end: 102516257; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler requestShareMyLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025161dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3820);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3820))[1];
  func_0x000107c614f0(uVar2);
  pcVar4 = *(code **)(lVar1 + 0x98);
  func_0x000107c61174(param_1);
  uVar3 = 0;
  (*pcVar4)(0,0,uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102516258; end: 102516293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516258(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ea3820));
  (**(code **)(lVar1 + 0xb0))();
  return;
}



/* Entry: 102516294; end: 102516307; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler requestLocationPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516294(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3820);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3820))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0xb0);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102516308; end: 10251630b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102516308(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3830);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3830))[1];
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x60))();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar4 = &UNK_11051bc78;
  func_0x000107c613fc(&UNK_11051bc78,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  pcStack_40 = FUN_102517440;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1004725e8;
  puStack_48 = &UNK_11051bc90;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  puVar4 = puStack_38;
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c408f0(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar4 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 10251630c; end: 1025164b7;  */

undefined8 FUN_10251630c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar2 = &UNK_11051bcc8;
  func_0x000107c613fc(&UNK_11051bcc8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x102517464;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100b5fdac;
  puStack_68 = &UNK_11051bce0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11051bd18;
  func_0x000107c613fc(&UNK_11051bd18,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_60 = 0x10251746c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1012519d0;
  puStack_68 = &UNK_11051bd30;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11051bd68;
  func_0x000107c613fc(&UNK_11051bd68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_60 = 0x102517474;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11051bd80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c5c34c(param_2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return param_2;
}



/* Entry: 1025164b8; end: 10251650b;  */

void FUN_1025164b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c3ebcc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10251650c; end: 10251657b; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler requestAlwaysLocationPermissionsWithUpsellType:] */

void FUN_10251650c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102516fd8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10251657c; end: 1025165ef; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler requestExitGhostMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251657c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3820);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3820))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0xb8);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1025165f0; end: 10251662b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025165f0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3830))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ea3830));
  (**(code **)(lVar1 + 0x68))();
  return;
}



/* Entry: 10251662c; end: 10251669f; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler checkHomeSetUpObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251662c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3830);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3830))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x68);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1025166a0; end: 102516757;  */

/* WARNING: Possible PIC construction at 0x00010251673c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102516740) */

void FUN_1025166a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11051bb38;
  func_0x000107c613fc(&UNK_11051bb38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  puVar2 = &UNK_11051bb60;
  func_0x000107c613fc(&UNK_11051bb60,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab60d8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab60e8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102516758; end: 1025167c3;  */

void FUN_102516758(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025167c4,uVar1,uVar2);
  return;
}



/* Entry: 1025167c4; end: 102516827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025167c4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = lVar1 + _DAT_112ea3838;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x38))(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000102516824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102516828; end: 102516863;  */

void FUN_102516828(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102516860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102516864; end: 1025169e7; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler dismissTray] */

void FUN_102516864(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11051bc28;
  func_0x000107c613fc(&UNK_11051bc28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11051bc50;
  func_0x000107c613fc(&UNK_11051bc50,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab6168;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6170,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025169e8; end: 102516a53;  */

void FUN_1025169e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102516a54,uVar1,uVar2);
  return;
}



/* Entry: 102516a54; end: 102516ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516a54(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = lVar1 + _DAT_112ea3838;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x40))(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000102516ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102516ab8; end: 102516b83; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler onTrayHeightChangedWithHeight:] */

void FUN_102516ab8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11051bbd8;
  func_0x000107c613fc(&UNK_11051bbd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11051bc00;
  func_0x000107c613fc(&UNK_11051bc00,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab6158;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6160,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102516b84; end: 102516bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516b84(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3830))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ea3830));
  (**(code **)(lVar1 + 0x38))();
  return;
}



/* Entry: 102516bc0; end: 102516c27; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler setArrivalNotificationsOnboardingSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516bc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3830);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea3830))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x38);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102516c28; end: 102516c83; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler init] */

void FUN_102516c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChatLocationTray.MapChatLocationTrayActionHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102516c54);
  (*pcVar1)();
}



/* Entry: 102516c84; end: 102516cdb; -[_TtC19MapChatLocationTray32MapChatLocationTrayActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516c84(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea3820));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea3830));
  func_0x0001000834e4(param_1 + _DAT_112ea3838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea3828));
  return;
}



/* Entry: 102516cdc; end: 102516dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102516cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,undefined8 param_7,long param_8,
                    undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_10;
  lStack_60 = param_8;
  func_0x0001000c5db4(auStack_78);
  (**(code **)(*(long *)(param_8 + -8) + 0x20))();
  puVar1 = (undefined8 *)(param_6 + _DAT_112ea3820);
  *puVar1 = param_1;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(param_6 + _DAT_112ea3830);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar2 = auStack_78;
  FUN_10251747c(puVar2,param_6 + _DAT_112ea3838);
  *(undefined8 *)(param_6 + _DAT_112ea3828) = param_5;
  FUN_10251726c();
  plVar3 = &lStack_88;
  lStack_88 = param_6;
  puStack_80 = puVar2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_78);
  return plVar3;
}



/* Entry: 102516dbc; end: 102516e8b;  */

void FUN_102516dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_8 + -8);
  uVar2 = param_1;
  uStack_70 = param_5;
  uStack_68 = param_7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10251726c();
  func_0x000107c610f8();
  (**(code **)(lVar3 + 0x10))((long)&uStack_70 + lVar1,param_4,param_8);
  *(undefined8 *)((long)auStack_80 + lVar1) = param_9;
  *(undefined8 *)((long)auStack_80 + lVar1 + 8) = param_10;
  FUN_102516cdc(param_1,param_2,param_3,(long)&uStack_70 + lVar1,uStack_70,uVar2,uStack_68,param_8);
  return;
}



/* Entry: 102516e8c; end: 102516fd7;  */

/* WARNING: Possible PIC construction at 0x000102516f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102516f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102516fb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102516f48) */
/* WARNING: Removing unreachable block (ram,0x000102516f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102516e8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  if (param_1 == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3820);
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
    func_0x000107c614f0(uVar2);
    (**(code **)(lVar3 + 0x98))(1,0,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ea3828);
  func_0x000107c615f0();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = param_1;
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c4e864();
    func_0x000107c61180();
    lVar3 = lVar4;
    if (lVar1 != 0) {
      func_0x000107c4d06c();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3820);
      lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ea3820))[1];
      func_0x000107c614f0(uVar2);
      pcVar5 = *(code **)(lVar3 + 0x98);
      func_0x000107c615f0(lVar1);
      (*pcVar5)(1,lVar1,uVar2,lVar3);
      lVar3 = param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 102516fd8; end: 1025170f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102516fd8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3830);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3830))[1];
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x60))();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar4 = &UNK_11051bc78;
  func_0x000107c613fc(&UNK_11051bc78,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  pcStack_40 = FUN_102517440;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1004725e8;
  puStack_48 = &UNK_11051bc90;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  puVar4 = puStack_38;
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c408f0(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar4 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 1025170f4; end: 10251713f;  */

void FUN_1025170f4(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1025174dc;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025167c4,lVar1,lVar3);
  return;
}



/* Entry: 102517140; end: 1025171af;  */

void FUN_102517140(undefined8 param_1)

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
  plVar3[1] = 0x1025174d8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1025171b0; end: 1025171fb;  */

void FUN_1025171b0(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1025174e4;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102516a54,lVar1,lVar3);
  return;
}



/* Entry: 1025171fc; end: 10251726b;  */

void FUN_1025171fc(undefined8 param_1)

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
  plVar3[1] = 0x1025174e0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10251726c; end: 102517313;  */

void FUN_10251726c(void)

{
  func_0x000107c61168(&PTR_PTR_11284b8f8);
  return;
}



/* Entry: 102517314; end: 102517383;  */

void FUN_102517314(undefined8 param_1)

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
  plVar3[1] = 0x1025174e8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102517384; end: 1025173cf;  */

void FUN_102517384(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1025174ec;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025167c4,lVar1,lVar3);
  return;
}



/* Entry: 1025173d0; end: 10251743f;  */

void FUN_1025173d0(undefined8 param_1)

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
  plVar3[1] = 0x1025174f0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102517440; end: 10251747b;  */

undefined8 FUN_102517440(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar2 = &UNK_11051bcc8;
  func_0x000107c613fc(&UNK_11051bcc8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x102517464;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100b5fdac;
  puStack_68 = &UNK_11051bce0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11051bd18;
  func_0x000107c613fc(&UNK_11051bd18,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_60 = 0x10251746c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1012519d0;
  puStack_68 = &UNK_11051bd30;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11051bd68;
  func_0x000107c613fc(&UNK_11051bd68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_60 = 0x102517474;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11051bd80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c5c34c(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return uVar6;
}



/* Entry: 10251747c; end: 1025174bf;  */

long FUN_10251747c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1025174c0; end: 1025174f3;  */

void FUN_1025174c0(long param_1,long param_2)

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



/* Entry: 1025174f4; end: 102517b53;  */

void FUN_1025174f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea3868,&UNK_10dab6180);
  puVar1 = &UNK_11051bdb8;
  func_0x000107c613fc(&UNK_11051bdb8,0xc0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
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
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  func_0x000107c6157c(param_1);
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
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x0001000823a8(FUN_102517b54,puVar1);
  return;
}



/* Entry: 102517b54; end: 102517b9f;  */

void FUN_102517b54(void)

{
  long unaff_x20;
  
  func_0x0001025176d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 102517ba0; end: 102517e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102517ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ea3870;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3878);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3880);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3888) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3890) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3898);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38d0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea38d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea38f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3900) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3908) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3910) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3918) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3920) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3928) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3930) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3938) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3940) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3948) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3950) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3958) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3960) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3968) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3970) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3978) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3980) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3988) = param_22;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102517e80; end: 102517ef3;  */

void FUN_102517e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102517ef4,uVar1,uVar2);
  return;
}



/* Entry: 102517ef4; end: 102517fd3;  */

void FUN_102517ef4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x70) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0xf0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x102517f88;
    lVar2 = *(long *)(unaff_x22 + 0x30);
    plVar1[0x12] = *(long *)(unaff_x22 + 0x38);
    plVar1[0x13] = lVar3;
    plVar1[0x11] = lVar2;
    lVar2 = 0;
    func_0x000107c5fcec();
    plVar1[0x14] = lVar2;
    lVar3 = lVar2;
    func_0x000107c5fce8();
    plVar1[0x15] = lVar3;
    func_0x000100eea164();
    plVar1[0x16] = lVar3;
    func_0x000107c5fca8();
    plVar1[0x17] = lVar2;
    plVar1[0x18] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1025182d4,lVar2,lVar3);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000102517f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102517fd4; end: 10251825b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102517fd4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  
  lVar11 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  if (lVar11 == 0) {
    lVar11 = *(long *)(unaff_x22 + 0x70);
    goto LAB_10251822c;
  }
  uVar12 = *(ulong *)(unaff_x22 + 0x80);
  lVar11 = *(long *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  puVar1 = (undefined8 *)(lVar11 + _DAT_112ea3880);
  uVar4 = puVar1[1];
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[1] = uVar2;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)(lVar11 + _DAT_112ea3898);
  uVar4 = puVar1[1];
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar4);
  uVar13 = *(undefined8 *)(lVar11 + _DAT_112ea3888);
  *(ulong *)(lVar11 + _DAT_112ea3888) = uVar12;
  func_0x000107c61174();
  func_0x000107c61170(uVar13);
  uVar15 = uVar12;
  func_0x000107c4e3a4();
  func_0x000107c61180();
  uVar13 = 0;
  FUN_10251ad28(0);
  uVar5 = uVar15;
  func_0x000107c5fc54(uVar15,uVar13);
  func_0x000107c61170(uVar15);
  if (uVar5 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    if (uVar15 != 0) goto LAB_1025180cc;
LAB_1025181ec:
    func_0x000107c6142c(uVar5);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar15 = uVar5;
    }
    func_0x000107c60480();
    if (uVar15 == 0) goto LAB_1025181ec;
LAB_1025180cc:
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar9,0);
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10251825c);
      (*pcVar3)();
    }
    uVar16 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar5 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
        uVar10 = uVar9;
      }
      else {
        uVar6 = uVar16;
        uVar10 = uVar5;
        FUN_102521c64();
      }
      uVar9 = uVar6;
      func_0x000107c4e3a0();
      func_0x000107c61180();
      uVar7 = uVar9;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      uVar8 = uVar7;
      func_0x000107c5faec();
      uVar9 = uVar10;
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      uVar7 = *(ulong *)(puVar17 + 0x10);
      uVar6 = uVar7 + 1;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar7) {
        uVar9 = uVar6;
        func_0x000100403514(1 < *(ulong *)(puVar17 + 0x18),uVar6,1);
      }
      uVar16 = uVar16 + 1;
      *(ulong *)(puVar17 + 0x10) = uVar6;
      *(ulong *)(puVar17 + uVar7 * 0x10 + 0x20) = uVar8;
      *(ulong *)(puVar17 + uVar7 * 0x10 + 0x28) = uVar10;
    } while (uVar15 != uVar16);
    func_0x000107c6142c(uVar5);
  }
  lVar11 = *(long *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar13 = *(undefined8 *)(lVar11 + _DAT_112ea3890);
  *(undefined **)(lVar11 + _DAT_112ea3890) = puVar17;
  func_0x000107c6142c(uVar13);
  FUN_102518548(uVar14);
  func_0x000107c61170(uVar12);
LAB_10251822c:
  func_0x000107c61170(lVar11);
                    /* WARNING: Could not recover jumptable at 0x000102518254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10251825c; end: 1025182d3;  */

void FUN_10251825c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025182d4,uVar1,uVar2);
  return;
}



/* Entry: 1025182d4; end: 10251839f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025182d4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ea3960);
  func_0x000107c40664();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 200) = lVar2;
  func_0x000107c61170();
  if (lVar2 != 0) {
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0xd0) = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0xd8) = lVar1;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1025183a0,lVar1);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000102518374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1025183a0; end: 102518493;  */

void FUN_1025183a0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102518494;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  func_0x000107c5fadc(uVar3,uVar1);
  puVar4 = &UNK_11051bf38;
  func_0x000107c613fc(&UNK_11051bf38,0x18,7);
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar4 + 0x10) = lVar2;
  *(code **)(unaff_x22 + 0x70) = FUN_10251ad74;
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100e46b24;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11051bf50;
  func_0x000107c60bc4(puVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c43050(uVar5);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102518494; end: 102518547;  */

void FUN_102518494(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1025184d0,*(undefined8 *)(*unaff_x22 + 0xd8),*(undefined8 *)(*unaff_x22 + 0xe0));
  return;
}



/* Entry: 102518548; end: 1025186ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102518548(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112ea3878);
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar9 = plVar1[1];
    lVar2 = lVar7;
    func_0x000107c614f0(lVar7);
    pcVar11 = *(code **)(lVar9 + 8);
    func_0x000107c615f0(lVar7);
    (*pcVar11)(lVar2,lVar9);
    func_0x000107c615e8(lVar7);
    lVar7 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar7);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea3968) + _DAT_112fcd700);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(auStack_78);
  func_0x000107c61574(uVar8);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar8 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  pcVar3 = "setupPrimacyDeviceObserver(uiContainer:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar4 = (long *)pcVar3;
  func_0x000100471e0c();
  func_0x000107c61574(uVar8);
  func_0x000107c615e8(pcVar3);
  func_0x0001000834e4(auStack_78);
  puVar5 = &UNK_11051bde0;
  func_0x000107c613fc(&UNK_11051bde0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_11051bf10;
  func_0x000107c613fc(&UNK_11051bf10,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  pcVar10 = *(code **)(*plVar4 + 0x60);
  func_0x000107c615f0(param_1);
  pcVar11 = FUN_10251ad6c;
  puVar5 = puVar6;
  (*pcVar10)();
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar6);
  lVar7 = *plVar1;
  *plVar1 = (long)pcVar11;
  plVar1[1] = (long)puVar5;
  func_0x000107c615e8(lVar7);
  return;
}



/* Entry: 102518700; end: 102518847; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter handlePresentLocationTrayIn:conversationId:drawerSessionId:] */

void FUN_102518700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  if (param_5 == 0) {
    param_5 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec();
  }
  puVar1 = &UNK_11051bde0;
  func_0x000107c613fc(&UNK_11051bde0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11051bec0;
  func_0x000107c613fc(&UNK_11051bec0,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(long *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  func_0x000107c61434(uVar4);
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  uVar3 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6210,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102518848; end: 102518913;  */

void FUN_102518848(char *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\0') {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_102518914();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    FUN_1025189a4(param_3);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    FUN_102519620(param_3);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102518914; end: 1025189a3;  */

/* WARNING: Possible PIC construction at 0x000102518938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251897c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251893c) */
/* WARNING: Removing unreachable block (ram,0x000102518988) */
/* WARNING: Removing unreachable block (ram,0x000102518950) */
/* WARNING: Removing unreachable block (ram,0x000102518980) */
/* WARNING: Removing unreachable block (ram,0x00010251898c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102518914(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea38b8);
  *(undefined8 *)(unaff_x20 + _DAT_112ea38b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1025189a4; end: 10251961f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025189a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long unaff_x20;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c614f0();
  lVar21 = _DAT_113083f78;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ea3888);
  if (lVar5 == 0) {
    return;
  }
  lVar32 = ((undefined8 *)(unaff_x20 + _DAT_112ea3880))[1];
  if (lVar32 == 0) {
    return;
  }
  lVar36 = *(long *)(unaff_x20 + _DAT_112ea3890);
  if (lVar36 == 0) {
    return;
  }
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112ea3880);
  uVar42 = *(ulong *)(lVar36 + 0x10);
  lVar40 = *(long *)(unaff_x20 + _DAT_112ea38e0);
  func_0x000107c61174();
  func_0x000107c61434(lVar32);
  func_0x000107c61434(lVar36);
  puVar38 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar42 != 0) {
    uVar26 = 0;
LAB_102518a78:
    plVar23 = (long *)(lVar36 + 0x28 + uVar26 * 0x10);
    lVar27 = param_2;
    uVar41 = uVar26;
    do {
      if (*(ulong *)(lVar36 + 0x10) <= uVar41) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10251961c);
        (*pcVar4)();
      }
      uVar2 = plVar23[-1];
      lVar33 = *plVar23;
      uVar34 = *(ulong *)(lVar40 + lVar21);
      func_0x000107c61434(lVar33);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar26 = uVar34;
      func_0x000107c5faec();
      param_2 = lVar27;
      func_0x000107c61170(uVar34);
      if (uVar2 == uVar26 && lVar33 == lVar27) {
        func_0x000107c6142c(lVar33);
        lVar33 = lVar27;
      }
      else {
        uVar34 = uVar2;
        param_2 = lVar33;
        func_0x000107c605b8(uVar2,lVar33,uVar26,lVar27,0);
        func_0x000107c6142c(lVar27);
        if ((uVar34 & 1) == 0) goto LAB_102518b3c;
      }
      uVar41 = uVar41 + 1;
      func_0x000107c6142c(lVar33);
      plVar23 = plVar23 + 2;
      lVar27 = param_2;
      if (uVar42 == uVar41) goto LAB_102518bd4;
    } while( true );
  }
  lVar27 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
joined_r0x000102518bd8:
  if (lVar27 == 0) {
    lVar27 = 0;
    uVar37 = 0;
  }
  else {
    lVar27 = *(long *)(puVar38 + 0x20);
    uVar37 = *(undefined8 *)(puVar38 + 0x28);
    func_0x000107c61434(uVar37);
  }
  func_0x000107c61574(puVar38);
  puStack_98 = (undefined *)CONCAT71(puStack_98._1_7_,1);
  lStack_90 = lVar27;
  uStack_88 = uVar37;
  func_0x00010008a7c8(auStack_70,&puStack_98);
  func_0x000107c6142c(uVar37);
  func_0x000100083b20(&puStack_98);
  func_0x000107c61574(auStack_70[0]);
  lVar33 = lStack_90;
  puVar38 = puStack_98;
  uVar7 = *(undefined8 *)(lVar40 + lVar21);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar37 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  lVar27 = _DAT_112fcd5d8;
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea3980) + _DAT_113083868);
  lVar28 = *(long *)(unaff_x20 + _DAT_112ea3940);
  uVar29 = *(undefined8 *)(lVar28 + _DAT_112fcd5d8);
  uVar35 = *(undefined8 *)(unaff_x20 + _DAT_112ea3948);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4c3ac();
  func_0x000107c61180();
  uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112ea3988);
  uVar7 = uVar30;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  uVar31 = uVar30;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea3928);
  func_0x000107c4ec94();
  func_0x000107c61180();
  uVar39 = *(undefined8 *)(unaff_x20 + _DAT_112ea3900);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ea3958);
  func_0x000107c4c440();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea3938);
  func_0x000107c4c3ec();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ea3950);
  func_0x000107c4e7e4();
  func_0x000107c61180();
  func_0x000107c5d9d8();
  func_0x000107c61180();
  lVar13 = *(long *)(unaff_x20 + _DAT_112ea38f0);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102519620);
    (*pcVar4)();
  }
  lVar14 = 0;
  FUN_102522650();
  lVar15 = lVar14;
  func_0x000107c610f8();
  lVar16 = _DAT_112ea3a90;
  ppuStack_78 = &PTR_DAT_11051be48;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f0(puVar38);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + lVar16) = puVar6;
  *(undefined8 *)(lVar15 + _DAT_112ea3aa0) = 0;
  lVar3 = _DAT_112ea3af8;
  lVar16 = 0x112ea35c0;
  func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
  lVar17 = lVar16;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(lVar15 + lVar3) = lVar17;
  lVar3 = _DAT_112ea3aa8;
  uVar18 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar15 + lVar3) = uVar18;
  lVar3 = _DAT_112ea3b00;
  lVar17 = lVar16;
  func_0x000107c613fc(lVar16,*(undefined4 *)(lVar16 + 0x30),*(undefined2 *)(lVar16 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar15 + lVar3) = lVar17;
  lVar3 = _DAT_112ea3ab0;
  func_0x000107c613fc(lVar16,*(undefined4 *)(lVar16 + 0x30),*(undefined2 *)(lVar16 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar15 + lVar3) = lVar16;
  lVar16 = _DAT_112ea3ad8;
  uVar18 = 0x112ea3810;
  func_0x0001000285a8(0x112ea3810,&UNK_10dab6230);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar15 + lVar16) = uVar18;
  lVar16 = _DAT_112ea3ae0;
  uVar18 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar15 + lVar16) = uVar18;
  lVar16 = _DAT_112ea3b10;
  uVar18 = 0x112ea35d8;
  func_0x0001000285a8(0x112ea35d8,&UNK_10dab6240);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar15 + lVar16) = uVar18;
  lVar16 = _DAT_112ea3b18;
  puVar6 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + lVar16) = puVar6;
  *(undefined8 *)(lVar15 + _DAT_112ea3a98) = 0;
  FUN_10251747c(&puStack_98,lVar15 + _DAT_112ea3ae8);
  puVar1 = (undefined8 *)(lVar15 + _DAT_112ea3af0);
  *puVar1 = puVar38;
  puVar1[1] = lVar33;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112ea3ac8);
  *puVar1 = uVar37;
  puVar1[1] = param_2;
  *(long *)(lVar15 + _DAT_112ea3b20) = lVar5;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112ea3b28);
  *puVar1 = uVar25;
  puVar1[1] = lVar32;
  *(long *)(lVar15 + _DAT_112ea3ab8) = lVar36;
  *(undefined8 *)(lVar15 + _DAT_112ea3b08) = uVar8;
  *(undefined8 *)(lVar15 + _DAT_112ea3b30) = uVar29;
  *(undefined8 *)(lVar15 + _DAT_112ea3b38) = uVar35;
  *(undefined8 *)(lVar15 + _DAT_112ea3ac0) = uVar7;
  *(undefined8 *)(lVar15 + _DAT_112ea3a88) = uVar31;
  *(undefined8 *)(lVar15 + _DAT_112ea3a80) = uVar9;
  *(undefined8 *)(lVar15 + _DAT_112ea3ad0) = uVar39;
  *(undefined8 *)(lVar15 + _DAT_112ea3b40) = uVar10;
  *(undefined8 *)(lVar15 + _DAT_112ea3b48) = uVar11;
  *(undefined8 *)(lVar15 + _DAT_112ea3b50) = uVar12;
  *(undefined8 *)(lVar15 + _DAT_112ea3b58) = uVar30;
  *(long *)(lVar15 + _DAT_112ea3b60) = lVar13;
  puVar6 = PTR_s_init_1125d9248;
  lStack_a8 = lVar15;
  lStack_a0 = lVar14;
  func_0x000107c61174(uVar39);
  plVar19 = &lStack_a8;
  func_0x000107c61154(plVar19,puVar6);
  func_0x0001000834e4(&puStack_98);
  uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112ea3910);
  func_0x000107c615f0(puVar38);
  func_0x000107c61174();
  uVar37 = uVar31;
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar25 = uVar37;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(uVar37);
  lVar36 = 0;
  FUN_10251726c();
  lVar32 = lVar36;
  func_0x000107c610f8();
  ppuStack_78 = &PTR_DAT_11051be48;
  puVar1 = (undefined8 *)(lVar32 + _DAT_112ea3820);
  *puVar1 = plVar19;
  puVar1[1] = &PTR_DAT_11051c138;
  puVar1 = (undefined8 *)(lVar32 + _DAT_112ea3830);
  *puVar1 = puVar38;
  puVar1[1] = lVar33;
  FUN_10251747c(&puStack_98,lVar32 + _DAT_112ea3838);
  *(undefined8 *)(lVar32 + _DAT_112ea3828) = uVar25;
  puVar6 = PTR_s_init_1125d9248;
  lStack_b8 = lVar32;
  lStack_b0 = lVar36;
  func_0x000107c61174();
  plVar20 = &lStack_b8;
  func_0x000107c61154();
  func_0x0001000834e4(&puStack_98);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea3908);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar35 = *(undefined8 *)(lVar28 + lVar27);
  uVar25 = *(undefined8 *)(lVar40 + lVar21);
  func_0x000107c61174();
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar7 = uVar25;
  func_0x000107c5faec();
  func_0x000107c61170(uVar25);
  func_0x000107c615f0(puVar38);
  func_0x000107c61174();
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar29 = uVar31;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(uVar31);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ea38f8);
  uVar8 = uVar10;
  func_0x000107c3dae4();
  func_0x000107c61180();
  uVar31 = uVar10;
  func_0x000107c4d814();
  func_0x000107c61180();
  func_0x000107c3cfe0();
  func_0x000107c61180();
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112ea3898);
  uVar37 = ((undefined8 *)(unaff_x20 + _DAT_112ea3898))[1];
  lVar32 = 0;
  FUN_10251c5c8();
  lVar21 = lVar32;
  func_0x000107c610f8();
  *(undefined8 *)(lVar21 + _DAT_112ea39c8) = 0;
  *(undefined8 *)(lVar21 + _DAT_112ea39c0) = 0;
  *(undefined8 *)(lVar21 + _DAT_112ea39e0) = uVar9;
  *(undefined8 *)(lVar21 + _DAT_112ea39f0) = uVar35;
  puVar1 = (undefined8 *)(lVar21 + _DAT_112ea39e8);
  *puVar1 = uVar7;
  puVar1[1] = puVar6;
  puVar1 = (undefined8 *)(lVar21 + _DAT_112ea39d0);
  *puVar1 = plVar19;
  puVar1[1] = &PTR_DAT_11051c138;
  puVar1 = (undefined8 *)(lVar21 + _DAT_112ea39d8);
  *puVar1 = puVar38;
  puVar1[1] = lVar33;
  *(undefined8 *)(lVar21 + _DAT_112ea39f8) = uVar29;
  *(undefined8 *)(lVar21 + _DAT_112ea3a00) = uVar8;
  *(undefined8 *)(lVar21 + _DAT_112ea3a08) = uVar31;
  *(undefined8 *)(lVar21 + _DAT_112ea3a10) = uVar10;
  *(long **)(lVar21 + _DAT_112ea3a18) = plVar20;
  puVar1 = (undefined8 *)(lVar21 + _DAT_112ea3a20);
  *puVar1 = uVar25;
  puVar1[1] = uVar37;
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_c8 = lVar21;
  lStack_c0 = lVar32;
  func_0x000107c615f0(puVar38);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(uVar37);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  plVar22 = &lStack_c8;
  func_0x000107c61154(plVar22,puVar6,0,0);
  FUN_10251b168();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(plVar19);
  func_0x000107c615e8(puVar38);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar10);
  puVar6 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c48e88();
  func_0x000107c52684();
  func_0x000107c5a070(puVar6);
  func_0x000107c5921c(puVar6);
  func_0x000107c5a074(puVar6);
  func_0x000107c4ef3c(0x3fe0000000000000,puVar6);
  lVar21 = _DAT_112ea3a98;
  func_0x000107c61428((long)plVar19 + _DAT_112ea3a98,&puStack_98,1,0);
  uVar25 = *(undefined8 *)((long)plVar19 + lVar21);
  *(long **)((long)plVar19 + lVar21) = plVar22;
  plVar23 = plVar22;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(uVar25);
  FUN_10251c738();
  puVar24 = puVar38;
  func_0x000107c614f0(puVar38);
  (**(code **)(lVar33 + 0x10))(plVar22,puVar24);
  func_0x000107c61170(plVar23);
  func_0x000107c615e8(puVar38);
  func_0x000107c61170(plVar20);
  func_0x000107c61170(lVar5);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112ea38a8);
  *(long **)(unaff_x20 + _DAT_112ea38a8) = plVar22;
  func_0x000107c61170(uVar25);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112ea38a0);
  *(undefined **)(unaff_x20 + _DAT_112ea38a0) = puVar6;
  func_0x000107c61170(uVar25);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea38d8);
  uVar25 = *puVar1;
  *puVar1 = plVar19;
  puVar1[1] = &PTR_DAT_11051c138;
  func_0x000107c615e8(uVar25);
  return;
LAB_102518b3c:
  puVar6 = puVar38;
  func_0x000107c61558();
  puStack_98 = puVar38;
  if (((ulong)puVar6 & 1) == 0) {
    param_2 = *(long *)(puVar38 + 0x10) + 1;
    func_0x000100403514(0,param_2,1);
  }
  uVar34 = *(ulong *)(puStack_98 + 0x10);
  lVar27 = uVar34 + 1;
  if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar34) {
    param_2 = lVar27;
    func_0x000100403514(1 < *(ulong *)(puStack_98 + 0x18),lVar27,1);
  }
  uVar26 = uVar41 + 1;
  *(long *)(puStack_98 + 0x10) = lVar27;
  *(ulong *)(puStack_98 + uVar34 * 0x10 + 0x20) = uVar2;
  *(long *)(puStack_98 + uVar34 * 0x10 + 0x28) = lVar33;
  puVar38 = puStack_98;
  if (uVar42 - 1 == uVar41) goto LAB_102518bd4;
  goto LAB_102518a78;
LAB_102518bd4:
  lVar27 = *(long *)(puVar38 + 0x10);
  goto joined_r0x000102518bd8;
}



/* Entry: 102519620; end: 102519807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102519620(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = _DAT_112ea38b8;
  if (*(long *)(unaff_x20 + _DAT_112ea38b8) == 0) {
    func_0x000100337a84(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c615f0();
    func_0x0001038b597c();
    uStack_50 = param_1;
    func_0x00010008a7c8(&uStack_48,&uStack_50);
    func_0x000100083b20(&uStack_50);
    func_0x000107c61574(uStack_48);
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = uStack_50;
    func_0x000107c615e8(uVar1);
    lVar2 = *(long *)(unaff_x20 + lVar2);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar2);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102519808; end: 102519963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102519808(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = _DAT_112ea38c8;
  if (*(long *)(unaff_x20 + _DAT_112ea38c8) == 0) {
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_1);
    lVar1 = unaff_x20;
    func_0x000107c61174();
    func_0x000107c615f0();
    func_0x000103a28f00();
    uStack_70 = param_4;
    func_0x00010008a7c8(&uStack_68,&uStack_70);
    func_0x000100083b20(&uStack_70);
    func_0x000107c61574(uStack_68);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = uStack_70;
    func_0x000107c615e8(uVar2);
    if (*(long *)(unaff_x20 + lVar3) != 0) {
      func_0x000107c4ee7c();
    }
    if ((param_3 & 1) != 0) {
      lVar3 = *(long *)(lVar1 + _DAT_112ea38d8);
      if (lVar3 != 0) {
        lVar4 = ((long *)(lVar1 + _DAT_112ea38d8))[1];
        lVar1 = lVar3;
        func_0x000107c614f0(lVar3);
        pcVar5 = *(code **)(lVar4 + 0x70);
        func_0x000107c615f0(lVar3);
        (*pcVar5)(param_1,lVar1,lVar4);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 102519964; end: 102519a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102519964(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = _DAT_112ea38c8;
  if (*(long *)(unaff_x20 + _DAT_112ea38c8) == 0) {
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c615f0();
    func_0x000103a28f00();
    uStack_50 = param_1;
    func_0x00010008a7c8(&uStack_48,&uStack_50);
    func_0x000100083b20(&uStack_50);
    func_0x000107c61574(uStack_48);
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = uStack_50;
    func_0x000107c615e8(uVar1);
    lVar2 = *(long *)(unaff_x20 + lVar2);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar2);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102519a54; end: 102519e67;  */

/* WARNING: Possible PIC construction at 0x000102519b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102519e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102519e20) */
/* WARNING: Removing unreachable block (ram,0x000102519df4) */
/* WARNING: Removing unreachable block (ram,0x000102519e10) */
/* WARNING: Removing unreachable block (ram,0x000102519dfc) */
/* WARNING: Removing unreachable block (ram,0x000102519d50) */
/* WARNING: Removing unreachable block (ram,0x000102519d40) */
/* WARNING: Removing unreachable block (ram,0x000102519c7c) */
/* WARNING: Removing unreachable block (ram,0x000102519b18) */
/* WARNING: Removing unreachable block (ram,0x000102519b70) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102519b1c) */
/* WARNING: Removing unreachable block (ram,0x000102519b30) */
/* WARNING: Removing unreachable block (ram,0x000102519b98) */
/* WARNING: Removing unreachable block (ram,0x000102519bc8) */
/* WARNING: Removing unreachable block (ram,0x000102519bb8) */
/* WARNING: Removing unreachable block (ram,0x000102519be8) */
/* WARNING: Removing unreachable block (ram,0x000102519c0c) */
/* WARNING: Removing unreachable block (ram,0x000102519c24) */
/* WARNING: Removing unreachable block (ram,0x000102519c3c) */
/* WARNING: Removing unreachable block (ram,0x000102519c54) */
/* WARNING: Removing unreachable block (ram,0x000102519e54) */
/* WARNING: Removing unreachable block (ram,0x000102519c64) */
/* WARNING: Removing unreachable block (ram,0x000102519b40) */
/* WARNING: Removing unreachable block (ram,0x000102519e64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102519a54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea3940) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea38e0) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c4c39c(lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102519e68; end: 102519fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102519e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lStack_90;
  undefined8 uStack_88;
  
  lVar3 = _DAT_112ea38b0;
  if (*(long *)(unaff_x20 + _DAT_112ea38b0) == 0) {
    func_0x00010037ef84(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_7);
    func_0x000107c615f0(param_5);
    lVar1 = unaff_x20;
    func_0x000107c61174();
    func_0x0001038b88bc(param_1,param_2,param_3,param_4);
    lStack_90 = lVar1;
    func_0x00010008a7c8(&uStack_88,&lStack_90);
    func_0x000100083b20(&lStack_90);
    func_0x000107c61574(uStack_88);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lStack_90;
    func_0x000107c615e8(uVar2);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c4f028();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102519fb8; end: 10251a017; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter init] */

void FUN_102519fb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChatLocationTray.MapChatLocationTrayRouter",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102519fe4);
  (*pcVar1)();
}



/* Entry: 10251a018; end: 10251a277; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010251a1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251a21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251a23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251a25c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251a240) */
/* WARNING: Removing unreachable block (ram,0x00010251a220) */
/* WARNING: Removing unreachable block (ram,0x00010251a1a8) */
/* WARNING: Removing unreachable block (ram,0x00010251a260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a018(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea38e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3908));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3940));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3988));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea38f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3980));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3960));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3928));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3958));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3968));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3948));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3910));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3900));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3938));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3950));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea38f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3930));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3920));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3970));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3978));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3918));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea38e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3870));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea3878));
  return;
}



/* Entry: 10251a278; end: 10251a36f;  */

/* WARNING: Possible PIC construction at 0x00010251a34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251a350) */

void FUN_10251a278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_11051bde0;
  func_0x000107c613fc(&UNK_11051bde0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_11051bee8;
  func_0x000107c613fc(&UNK_11051bee8,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  func_0x000107c61434(param_5);
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_3);
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6218,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10251a370; end: 10251a40f;  */

void FUN_10251a370(void)

{
  func_0x000102519724();
  return;
}



/* Entry: 10251a410; end: 10251a44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a410(void)

{
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + _DAT_112ea38a0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(*unaff_x20 + _DAT_112ea38a0),PTR_s_dismissAnimated__1125be608,1);
    return;
  }
  return;
}



/* Entry: 10251a450; end: 10251a53f;  */

/* WARNING: Possible PIC construction at 0x00010251a4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251a518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251a51c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a450(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea38a0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea38a0) = 0;
  func_0x000107c61170(uVar2);
  lVar4 = _DAT_112ea38a8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea38a8);
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + _DAT_112ea39c8);
    if (lVar5 != 0) {
      func_0x000107c61174();
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c41848();
        goto code_r0x000107c615e8;
      }
      func_0x000107c61170(lVar3);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar2);
  plVar1 = (long *)(unaff_x20 + _DAT_112ea38d8);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    lVar5 = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
  }
  else {
    lVar3 = plVar1[1];
    lVar4 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar6 = *(code **)(lVar3 + 0x68);
    func_0x000107c615f0(lVar5);
    (*pcVar6)(lVar4,lVar3);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 10251a540; end: 10251a573; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter tray:positionDidChange:] */

void FUN_10251a540(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    func_0x000107c61174();
    FUN_10251a450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10251a574; end: 10251a5e3; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10251a574(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112ea38a8);
  if (lVar1 == 0) {
    param_1 = 0xbff0000000000000;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    FUN_10251afd0();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_2);
  }
  return param_1;
}



/* Entry: 10251a5e4; end: 10251a5fb; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter locationSharingSettingsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a5e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea38d0);
  *(undefined8 *)(param_1 + _DAT_112ea38d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10251a5fc; end: 10251a623; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter onSecondaryLocationDevicePromptCancelled] */

void FUN_10251a5fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102518914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10251a624; end: 10251a6bf; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter onShareLocationActionCompletedWith:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_112ea38d8);
  if (lVar2 != 0) {
    lVar3 = ((long *)(param_1 + _DAT_112ea38d8))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 0x88);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(param_4,lVar1,lVar3);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10251a6c0; end: 10251a6d7; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a6c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea38c8);
  *(undefined8 *)(param_1 + _DAT_112ea38c8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10251a6d8; end: 10251a773; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter onExitGhostModeWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_112ea38d8);
  if (lVar2 != 0) {
    lVar3 = ((long *)(param_1 + _DAT_112ea38d8))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 0x80);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(param_3,lVar1,lVar3);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10251a774; end: 10251a8b3;  */

/* WARNING: Possible PIC construction at 0x00010251a890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251a894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a774(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea38c0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea38c0) = 0;
  func_0x000107c615e8(uVar1);
  if ((param_3 & 1) != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ea38d8);
    if (lVar5 != 0) {
      lVar6 = ((long *)(unaff_x20 + _DAT_112ea38d8))[1];
      lVar2 = lVar5;
      func_0x000107c614f0(lVar5);
      pcVar7 = *(code **)(lVar6 + 0x78);
      func_0x000107c615f0(lVar5);
      (*pcVar7)(param_1,param_2,lVar2,lVar6);
      func_0x000107c615e8(lVar5);
    }
  }
  puVar3 = &UNK_11051be08;
  func_0x000107c613fc(&UNK_11051be08,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_11051be30;
  func_0x000107c613fc(&UNK_11051be30,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_10dab6198;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c61174();
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab61a0,puVar4,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}


