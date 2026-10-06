/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a2944c; end: 102a2944f;  */

void FUN_102a2944c(void)

{
  return;
}



/* Entry: 102a29450; end: 102a29473;  */

undefined8 FUN_102a29450(void)

{
  FUN_102a293bc();
  return 0;
}



/* Entry: 102a29474; end: 102a29493;  */

void FUN_102a29474(void)

{
  func_0x000107c61168(&PTR_PTR_112ee22f0);
  return;
}



/* Entry: 102a29494; end: 102a2966f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102a29494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  
  puVar5 = auStack_70;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee2350);
  *puVar1 = 0xd000000000000029;
  puVar1[1] = 0x800000010f0e3840;
  lVar2 = _DAT_112ee2358;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2358) = 0;
  lVar3 = _DAT_112ee2360;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2360) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ee2368) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee2370);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ee2378,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ee2380) = 0;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar6);
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ee2388) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2390) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2398) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ee23a0) = param_5;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ee23a8) = puVar4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  return puVar5;
}



/* Entry: 102a29670; end: 102a2981b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a29670(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int iVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  iVar4 = (int)*(undefined8 *)(unaff_x20 + _DAT_112ee2390);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ee2350);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112ee2350))[1]);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if (iVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ee2360);
    if (lVar5 != 0) {
      puVar2 = &UNK_110587a88;
      func_0x000107c613fc(&UNK_110587a88,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_40 = FUN_102a29a28;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100b5ebe4;
      puStack_48 = &UNK_110587aa0;
      puStack_38 = puVar2;
      func_0x000107c60bc4(&puStack_60);
      puVar2 = puStack_38;
      func_0x000107c61174(lVar5);
      func_0x000107c61574(puVar2);
      func_0x000107c5dc64(lVar5);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 102a2981c; end: 102a29a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2981c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c3d14c();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
      func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
      puVar3 = param_3 + 0x10;
      func_0x000107c61618();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = &UNK_110587a88;
        func_0x000107c613fc(&UNK_110587a88,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,puVar3);
        pcStack_78 = FUN_102a2a178;
        puStack_98 = puVar1;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100b610dc;
        puStack_80 = &UNK_110587ac8;
        ppuVar5 = &puStack_98;
        puStack_70 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_70);
        lVar6 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c3e924(lVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61428(param_3 + 0x10,auStack_b0,0,0);
      puVar3 = param_3 + 0x10;
      func_0x000107c61618();
      if (puVar3 != (undefined *)0x0) {
        lVar6 = *(long *)(puVar3 + _DAT_112ee2358);
        if (lVar6 == 0) {
          func_0x000107c61170();
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61170(puVar3);
          pcStack_78 = (code *)0x102a2a180;
          puStack_98 = puVar1;
          uStack_90 = 0x42000000;
          puStack_88 = (undefined *)0x102a2a198;
          puStack_80 = &UNK_110587af0;
          ppuVar5 = &puStack_98;
          puStack_70 = param_3;
          func_0x000107c60bc4(ppuVar5);
          puVar3 = puStack_70;
          func_0x000107c6157c(param_3);
          func_0x000107c61574(puVar3);
          func_0x000107c5dc64(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar5);
          lVar2 = lVar6;
        }
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102a29a28; end: 102a29a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a29a28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [24];
  
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c3d14c();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar3 != 0) {
        puVar4 = &UNK_110587a88;
        func_0x000107c613fc(&UNK_110587a88,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,lVar3);
        pcStack_78 = FUN_102a2a178;
        puStack_98 = puVar1;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100b610dc;
        puStack_80 = &UNK_110587ac8;
        ppuVar5 = &puStack_98;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puVar4);
        lVar6 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c3e924(lVar6);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_b0,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + _DAT_112ee2358);
        if (lVar6 == 0) {
          func_0x000107c61170();
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61170(lVar3);
          pcStack_78 = (code *)0x102a2a180;
          puStack_98 = puVar1;
          uStack_90 = 0x42000000;
          puStack_88 = (undefined *)0x102a2a198;
          puStack_80 = &UNK_110587af0;
          ppuVar5 = &puStack_98;
          func_0x000107c60bc4(ppuVar5);
          func_0x000107c6157c();
          func_0x000107c61574(unaff_x20);
          func_0x000107c5dc64(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar5);
          lVar2 = lVar6;
        }
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102a29a30; end: 102a29ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a29a30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    if (param_1 != 0) {
      func_0x000107c4b1a0();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar1 = param_3 + _DAT_112ee2378;
        func_0x000107c61604(lVar1,param_1);
        func_0x000102a29790();
        func_0x000107c3d6fc(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_1);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102a29ae4; end: 102a29aff;  */

void FUN_102a29ae4(long param_1,long param_2)

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



/* Entry: 102a29b00; end: 102a29c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a29b00(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_70;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    lVar5 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + _DAT_112ee2368) = 0;
      func_0x000107c61170();
    }
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    puVar2 = (undefined8 *)(param_2 + _DAT_112ee2370);
    lVar5 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    func_0x000107c61170();
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    lVar5 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar3 = param_1;
      func_0x000107c4a4d8();
      *(char *)(lVar5 + _DAT_112ee2368) = (char)lVar3;
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c61170(param_1);
      return;
    }
    lVar5 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(param_1);
    plVar1 = (long *)(param_2 + _DAT_112ee2370);
    lVar5 = plVar1[1];
    *plVar1 = lVar3;
    plVar1[1] = (long)puVar4;
    func_0x000107c61170(param_2);
  }
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 102a29c7c; end: 102a29c7f; -[_TtC27SponsoredLensEngagementImpl29SponsoredLensEngagedClickImpl tapGestureAction:] */

void FUN_102a29c7c(void)

{
  return;
}



/* Entry: 102a29c80; end: 102a29f7f;  */

/* WARNING: Possible PIC construction at 0x000102a29d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a29d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a29da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a29ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a29e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a29f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a29f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a29f04) */
/* WARNING: Removing unreachable block (ram,0x000102a29e18) */
/* WARNING: Removing unreachable block (ram,0x000102a29f74) */
/* WARNING: Removing unreachable block (ram,0x000102a29e7c) */
/* WARNING: Removing unreachable block (ram,0x000102a29e88) */
/* WARNING: Removing unreachable block (ram,0x000102a29e8c) */
/* WARNING: Removing unreachable block (ram,0x000102a29f78) */
/* WARNING: Removing unreachable block (ram,0x000102a29e90) */
/* WARNING: Removing unreachable block (ram,0x000102a29e98) */
/* WARNING: Removing unreachable block (ram,0x000102a29e9c) */
/* WARNING: Removing unreachable block (ram,0x000102a29f7c) */
/* WARNING: Removing unreachable block (ram,0x000102a29ea0) */
/* WARNING: Removing unreachable block (ram,0x000102a29de0) */
/* WARNING: Removing unreachable block (ram,0x000102a29dac) */
/* WARNING: Removing unreachable block (ram,0x000102a29f48) */
/* WARNING: Removing unreachable block (ram,0x000102a29db0) */
/* WARNING: Removing unreachable block (ram,0x000102a29d5c) */
/* WARNING: Removing unreachable block (ram,0x000102a29d38) */
/* WARNING: Removing unreachable block (ram,0x000102a29f1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a29c80(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ee2370))[1];
  if ((lVar2 != 0) && (*(char *)(unaff_x20 + _DAT_112ee2368) == '\x01')) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ee2370);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ee23a0);
    func_0x000107c61434(lVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c40f18();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c3dfe8(lVar2);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    func_0x0001000f66f0(uVar3,lVar2,PTR___swiftEmptySetSingleton_11034f1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
    return;
  }
  return;
}



/* Entry: 102a29f80; end: 102a29fcf; -[_TtC27SponsoredLensEngagementImpl29SponsoredLensEngagedClickImpl handleTapGesture:] */

/* WARNING: Possible PIC construction at 0x000102a29fb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a29fbc) */

void FUN_102a29f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102a29c80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102a29fd0; end: 102a2a02f; -[_TtC27SponsoredLensEngagementImpl29SponsoredLensEngagedClickImpl init] */

void FUN_102a29fd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensEngagementImpl.SponsoredLensEngagedClickImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a29ffc);
  (*pcVar1)();
}



/* Entry: 102a2a030; end: 102a2a0ff; -[_TtC27SponsoredLensEngagementImpl29SponsoredLensEngagedClickImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a2a060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2a090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2a0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a2a094) */
/* WARNING: Removing unreachable block (ram,0x000102a2a064) */
/* WARNING: Removing unreachable block (ram,0x000102a2a0c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2a030(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ee2350 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee2358));
  return;
}



/* Entry: 102a2a100; end: 102a2a11f;  */

void FUN_102a2a100(void)

{
  func_0x000107c61168(&PTR_PTR_112880e40);
  return;
}



/* Entry: 102a2a120; end: 102a2a177; -[_TtC27SponsoredLensEngagementImpl29SponsoredLensEngagedClickImpl gestureRecognizer:shouldReceiveTouch:] */

undefined8
FUN_102a2a120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102a29c80(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 102a2a178; end: 102a2a19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2a178(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_70;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar6 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + _DAT_112ee2368) = 0;
      func_0x000107c61170();
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
    lVar6 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar6 == 0) {
      return;
    }
    puVar2 = (undefined8 *)(lVar6 + _DAT_112ee2370);
    lVar6 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    func_0x000107c61170();
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar6 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar3 = param_1;
      func_0x000107c4a4d8();
      *(char *)(lVar6 + _DAT_112ee2368) = (char)lVar3;
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
      return;
    }
    lVar6 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar4 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(param_1);
    plVar1 = (long *)(lVar3 + _DAT_112ee2370);
    lVar6 = plVar1[1];
    *plVar1 = lVar4;
    plVar1[1] = (long)puVar5;
    func_0x000107c61170(lVar3);
  }
  func_0x000107c6142c(lVar6);
  return;
}



/* Entry: 102a2a19c; end: 102a2a1f7;  */

long FUN_102a2a19c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010042d600();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  puVar1 = puVar2;
  func_0x00010042d700();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x00010042d808();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  return unaff_x20;
}



/* Entry: 102a2a1f8; end: 102a2a22b;  */

void FUN_102a2a1f8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a2a22c; end: 102a2a2a3;  */

undefined8 FUN_102a2a22c(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar1;
}



/* Entry: 102a2a2a4; end: 102a2a4bf; -[_TtC27SponsoredLensEngagementImpl34SponsoredLensEngagementGenericImpl retrieveLensEngagedClickWithLensId:resetEngagedClick:] */

void FUN_102a2a2a4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec(param_3);
  func_0x000107c61428(param_1 + 0x10,auStack_58,0x20,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102a2a22c(param_3,param_2,uVar2);
  func_0x000107c614a8(auStack_58);
  if (param_4 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c61574(param_1);
  }
  else {
    func_0x000107c61428(param_1 + 0x10,auStack_58,0x21,0);
    FUN_102a2bad4(param_3,param_2);
    func_0x000107c614a8(auStack_58);
    func_0x000107c61574(param_1);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102a2a4c0; end: 102a2a70f;  */

undefined * FUN_102a2a4c0(long param_1,code *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    (*param_2)(0,lVar11,0);
    uVar1 = param_1 + 0x40;
    uVar12 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar14 = 0;
    iVar2 = *(int *)(param_1 + 0x24);
    do {
      if (uVar12 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2a6fc);
        (*pcVar4)();
      }
      uVar10 = uVar12 >> 6;
      uVar8 = 1L << (uVar12 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar10 * 8) & uVar8) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2a700);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2a704);
        (*pcVar4)();
      }
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar12 * 8);
      uVar13 = *(ulong *)(puVar3 + 0x10);
      uVar6 = *(ulong *)(puVar3 + 0x18);
      func_0x000107c61174();
      if (uVar6 >> 1 <= uVar13) {
        (*param_2)(1 < uVar6,uVar13 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar13 + 1;
      *(undefined8 *)(puVar3 + uVar13 * 8 + 0x20) = uVar5;
      uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2a708);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(uVar1 + uVar10 * 8);
      if ((uVar6 & uVar8) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2a70c);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2a710);
        (*pcVar4)();
      }
      uVar6 = uVar6 & -2L << (uVar12 & 0x3f);
      if (uVar6 == 0) {
        lVar9 = uVar10 << 6;
        puVar7 = (ulong *)(param_1 + 0x48 + uVar10 * 8);
        do {
          uVar10 = uVar10 + 1;
          if (uVar13 + 0x3f >> 6 <= uVar10) {
            FUN_102a2d764(uVar12,iVar2,0);
            uVar12 = uVar13;
            goto LAB_102a2a574;
          }
          uVar8 = *puVar7;
          lVar9 = lVar9 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar8 == 0);
        FUN_102a2d764(uVar12,iVar2,0);
        uVar12 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + lVar9;
      }
      else {
        uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 & 0x7fffffffffffffc0;
      }
LAB_102a2a574:
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar11);
  }
  return puVar3;
}



/* Entry: 102a2a710; end: 102a2a723; -[_TtC27SponsoredLensEngagementImpl34SponsoredLensEngagementGenericImpl retrieveLensCreatorInteractionWithLensId:reset:] */

void FUN_102a2a710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  (*(code *)0x102a2a38c)(param_3,param_2,param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = 0;
  (*(code *)&SUB_1042d75d0)(0);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102a2a724; end: 102a2a857;  */

undefined * FUN_102a2a724(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_58,0x20,0);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar1 = param_1;
    uVar3 = param_2;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      puVar5 = *(undefined **)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61434(puVar5);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar4);
      if ((param_3 & 1) != 0) {
        func_0x000107c61428(unaff_x20 + 0x20,auStack_58,0x21,0);
        func_0x000107c61434(param_2);
        FUN_102a2bb90(param_1,param_2,0x112ee2250,&UNK_10db0d140);
        func_0x000107c614a8(auStack_58);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(param_1);
      }
      puVar2 = puVar5;
      FUN_102a2a4c0(puVar5,0x102a2ccf0);
      func_0x000107c6142c(puVar5);
      return puVar2;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c614a8(auStack_58);
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 102a2a858; end: 102a2a86b; -[_TtC27SponsoredLensEngagementImpl34SponsoredLensEngagementGenericImpl retrieveLensShoppingLensTrackingEventsWithLensId:reset:] */

void FUN_102a2a858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_102a2a724(param_3,param_2,param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = 0;
  (*(code *)&SUB_1042d857c)(0);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102a2a86c; end: 102a2aaf7;  */

void FUN_102a2a86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  (*param_5)(param_3,param_2,param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = 0;
  (*param_6)(0);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102a2aaf8; end: 102a2ad57; -[_TtC27SponsoredLensEngagementImpl34SponsoredLensEngagementGenericImpl setLensEngagementClickWithLensId:click:] */

void FUN_102a2aaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000102a2a908(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a2ad58; end: 102a2ad7f; -[_TtC27SponsoredLensEngagementImpl34SponsoredLensEngagementGenericImpl resetLensEngagementState] */

void FUN_102a2ad58(undefined8 param_1)

{
  func_0x000107c6157c();
  func_0x000102a2ab68();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102a2ad80; end: 102a2b213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2ad80(long param_1,long param_2,long *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_e8 [32];
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [72];
  undefined1 auStack_68 [24];
  
  lVar9 = *(long *)(param_1 + _DAT_11306bf80);
  if ((int)lVar9 == 0) {
    return;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar5 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
LAB_102a2afc4:
    func_0x000107c61428(param_2 + 0x10,auStack_e8,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      lVar5 = 0x112ee2498;
      func_0x0001000285a8(0x112ee2498,&UNK_10db0d258);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(long *)(lVar5 + 0x20) = lVar9;
      *(long *)(lVar5 + 0x28) = param_1;
      lVar9 = lVar5;
      func_0x000102a28244();
      func_0x000107c61588(lVar5);
      func_0x000107c61174(param_1);
      FUN_102a2d724((long *)(lVar5 + 0x20),0x112ee24a0,&UNK_10db0d260);
      func_0x000107c61428(param_2 + 0x18,auStack_b0,0x21,0);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      func_0x000107c61558(uVar6);
      auStack_c8[0] = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x18) = 0x8000000000000000;
      FUN_102a2cfd0(lVar9,param_3,param_4,uVar6,0x112ee2258,&UNK_10db0d270);
      *(undefined8 *)(param_2 + 0x18) = auStack_c8[0];
      func_0x000107c614a8(auStack_b0);
      func_0x000107c61574(param_2);
      func_0x000107c6142c(lVar9);
    }
    return;
  }
  func_0x000107c61428(lVar5 + 0x18,auStack_e8,0x20,0);
  lVar10 = *(long *)(lVar5 + 0x18);
  if (*(long *)(lVar10 + 0x10) == 0) {
    func_0x000107c614a8(auStack_e8);
    func_0x000107c61574(lVar5);
    goto LAB_102a2afc4;
  }
  func_0x000107c61434(lVar10);
  plVar4 = param_3;
  uVar7 = param_4;
  func_0x000100029284();
  if ((uVar7 & 1) == 0) {
    func_0x000107c614a8(auStack_e8);
    func_0x000107c61574(lVar5);
    func_0x000107c6142c(lVar10);
    goto LAB_102a2afc4;
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + (long)plVar4 * 8);
  func_0x000107c61434(lVar11);
  func_0x000107c614a8(auStack_e8);
  func_0x000107c61574(lVar5);
  func_0x000107c6142c(lVar10);
  if ((*(long *)(lVar11 + 0x10) == 0) || (lVar5 = lVar9, func_0x00010035a314(), (uVar7 & 1) == 0)) {
    func_0x000107c6142c(lVar11);
    func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return;
    }
    func_0x000107c61428(param_2 + 0x18,auStack_c8,0x21,0);
    pcVar3 = (code *)auStack_e8;
    FUN_102a2b214(pcVar3,param_3,param_4);
    if (*param_3 == 0) {
      (*pcVar3)(auStack_e8,0);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(param_2);
      return;
    }
    func_0x000107c61558();
    lVar5 = *param_3;
    *param_3 = -0x8000000000000000;
    func_0x000107c61174(param_1);
    FUN_102a2d134();
    lVar9 = *param_3;
    *param_3 = lVar5;
    func_0x000107c6142c(lVar9);
    (*pcVar3)(auStack_e8,0);
    func_0x000107c614a8(auStack_c8);
LAB_102a2b1b4:
    func_0x000107c61574(param_2);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + lVar5 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(lVar11);
    iVar1 = *(int *)(lVar5 + _DAT_11306bf88);
    iVar2 = *(int *)(param_1 + _DAT_11306bf88);
    if (SCARRY4(iVar1,iVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a2b214);
      (*pcVar3)();
    }
    uVar6 = 0;
    func_0x0001042d75d0(0);
    func_0x000107c610f8();
    param_1 = lVar9;
    func_0x0001042d7040(lVar9,iVar1 + iVar2,uVar6);
    func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61428(param_2 + 0x18,auStack_c8,0x21,0);
      pcVar3 = (code *)auStack_e8;
      FUN_102a2b214(pcVar3,param_3,param_4);
      lVar10 = *param_3;
      if (lVar10 != 0) {
        func_0x000107c61174(param_1);
        func_0x000107c61558(lVar10);
        lVar8 = *param_3;
        *param_3 = -0x8000000000000000;
        lVar11 = param_1;
        FUN_102a2d134(param_1,lVar9,lVar10,0x112ee2248,&UNK_10db0d138);
        lVar9 = *param_3;
        *param_3 = lVar8;
        func_0x000107c6142c(lVar9);
        (*pcVar3)(auStack_e8,0);
        func_0x000107c614a8(auStack_c8);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar5);
        param_1 = lVar11;
        goto LAB_102a2b1b4;
      }
      (*pcVar3)(auStack_e8,0);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(param_2);
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102a2b214; end: 102a2b287;  */

code * FUN_102a2b214(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x90b7);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_102a2ce60();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_102a2b288;
}



/* Entry: 102a2b288; end: 102a2b28b;  */

void FUN_102a2b288(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 102a2b28c; end: 102a2b2ff;  */

undefined8 FUN_102a2b28c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x6927);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_102a2cefc();
  *(long *)(lVar1 + 0x20) = lVar2;
  return 0x102a2d790;
}



/* Entry: 102a2b300; end: 102a2b32f;  */

void FUN_102a2b300(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 102a2b330; end: 102a2b353; -[_TtC27SponsoredLensEngagementImpl34SponsoredLensEngagementGenericImpl setCreatorInteractionWithLensId:interaction:] */

void FUN_102a2b330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000102a2b400(param_3,param_2,param_4,"setCreatorInteraction(lensId:interaction:)",
                      &UNK_110587bc8,0x102a2d6d8,&UNK_110587be0);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a2b354; end: 102a2b517;  */

void FUN_102a2b354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000102a2b400(param_3,param_2,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a2b518; end: 102a2b9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2b518(long param_1,long param_2,long *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_e8 [32];
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [72];
  undefined1 auStack_68 [24];
  
  lVar9 = *(long *)(param_1 + _DAT_11306c008);
  if ((int)lVar9 == 0) {
    return;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar5 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
LAB_102a2b75c:
    func_0x000107c61428(param_2 + 0x10,auStack_e8,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      lVar5 = 0x112ee2488;
      func_0x0001000285a8(0x112ee2488,&UNK_10db0d248);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(long *)(lVar5 + 0x20) = lVar9;
      *(long *)(lVar5 + 0x28) = param_1;
      lVar9 = lVar5;
      func_0x000102a28258();
      func_0x000107c61588(lVar5);
      func_0x000107c61174(param_1);
      FUN_102a2d724((long *)(lVar5 + 0x20),0x112ee2490,&UNK_10db0d250);
      func_0x000107c61428(param_2 + 0x20,auStack_b0,0x21,0);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      func_0x000107c61558(uVar6);
      auStack_c8[0] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
      FUN_102a2cfd0(lVar9,param_3,param_4,uVar6,0x112ee2250,&UNK_10db0d140);
      *(undefined8 *)(param_2 + 0x20) = auStack_c8[0];
      func_0x000107c614a8(auStack_b0);
      func_0x000107c61574(param_2);
      func_0x000107c6142c(lVar9);
    }
    return;
  }
  func_0x000107c61428(lVar5 + 0x20,auStack_e8,0x20,0);
  lVar10 = *(long *)(lVar5 + 0x20);
  if (*(long *)(lVar10 + 0x10) == 0) {
    func_0x000107c614a8(auStack_e8);
    func_0x000107c61574(lVar5);
    goto LAB_102a2b75c;
  }
  func_0x000107c61434(lVar10);
  plVar4 = param_3;
  uVar7 = param_4;
  func_0x000100029284();
  if ((uVar7 & 1) == 0) {
    func_0x000107c614a8(auStack_e8);
    func_0x000107c61574(lVar5);
    func_0x000107c6142c(lVar10);
    goto LAB_102a2b75c;
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + (long)plVar4 * 8);
  func_0x000107c61434(lVar11);
  func_0x000107c614a8(auStack_e8);
  func_0x000107c61574(lVar5);
  func_0x000107c6142c(lVar10);
  if ((*(long *)(lVar11 + 0x10) == 0) || (lVar5 = lVar9, func_0x00010035a314(), (uVar7 & 1) == 0)) {
    func_0x000107c6142c(lVar11);
    func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return;
    }
    func_0x000107c61428(param_2 + 0x20,auStack_c8,0x21,0);
    pcVar3 = (code *)auStack_e8;
    FUN_102a2b28c(pcVar3,param_3,param_4);
    if (*param_3 == 0) {
      (*pcVar3)(auStack_e8,0);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(param_2);
      return;
    }
    func_0x000107c61558();
    lVar5 = *param_3;
    *param_3 = -0x8000000000000000;
    func_0x000107c61174(param_1);
    FUN_102a2d134();
    lVar9 = *param_3;
    *param_3 = lVar5;
    func_0x000107c6142c(lVar9);
    (*pcVar3)(auStack_e8,0);
    func_0x000107c614a8(auStack_c8);
LAB_102a2b94c:
    func_0x000107c61574(param_2);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + lVar5 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(lVar11);
    iVar1 = *(int *)(lVar5 + _DAT_11306c010);
    iVar2 = *(int *)(param_1 + _DAT_11306c010);
    if (SCARRY4(iVar1,iVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a2b9ac);
      (*pcVar3)();
    }
    uVar6 = 0;
    func_0x0001042d857c(0);
    func_0x000107c610f8();
    param_1 = lVar9;
    func_0x0001042d7fdc(lVar9,iVar1 + iVar2,uVar6);
    func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61428(param_2 + 0x20,auStack_c8,0x21,0);
      pcVar3 = (code *)auStack_e8;
      FUN_102a2b28c(pcVar3,param_3,param_4);
      lVar10 = *param_3;
      if (lVar10 != 0) {
        func_0x000107c61174(param_1);
        func_0x000107c61558(lVar10);
        lVar8 = *param_3;
        *param_3 = -0x8000000000000000;
        lVar11 = param_1;
        FUN_102a2d134(param_1,lVar9,lVar10,0x112ee2240,&UNK_10db0d130);
        lVar9 = *param_3;
        *param_3 = lVar8;
        func_0x000107c6142c(lVar9);
        (*pcVar3)(auStack_e8,0);
        func_0x000107c614a8(auStack_c8);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar5);
        param_1 = lVar11;
        goto LAB_102a2b94c;
      }
      (*pcVar3)(auStack_e8,0);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(param_2);
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102a2b9ac; end: 102a2b9cf; -[_TtC27SponsoredLensEngagementImpl34SponsoredLensEngagementGenericImpl setShoppingLensTrackingWithLensId:tracking:] */

void FUN_102a2b9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000102a2b400(param_3,param_2,param_4,"setShoppingLensTracking(lensId:tracking:)",
                      &UNK_110587c18,FUN_102a2d718,&UNK_110587c30);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a2b9d0; end: 102a2ba3b;  */

void FUN_102a2b9d0(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102a2ba3c; end: 102a2bad3;  */

undefined * FUN_102a2ba3c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = &SUB_1042d75d0;
    FUN_102a2b9d0(&SUB_1042d75d0,0x112ee24b0,&UNK_10db0d290);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102a2bad4; end: 102a2bb8f;  */

undefined8 FUN_102a2bad4(long param_1,ulong param_2)

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
      func_0x000102a2bdb4();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000102a2c95c(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102a2bb90; end: 102a2bc63;  */

undefined8 FUN_102a2bb90(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102a2bf24(param_3,param_4);
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x000102a2cb0c(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 102a2bc64; end: 102a2c1cf;  */

void FUN_102a2bc64(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2bd3c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102a2c1d0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2bd04);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102a2bdb4();
    lVar6 = *unaff_x20;
    goto joined_r0x000102a2bd50;
  }
  lVar6 = *unaff_x20;
joined_r0x000102a2bd50:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2bdb4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102a2c1d0; end: 102a2ccbb;  */

void FUN_102a2c1d0(long param_1,ulong param_2)

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
  uVar6 = 0x112ee2260;
  func_0x0001000285a8(0x112ee2260,&UNK_10db0d150);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102a2c438:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102a2c468);
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
          goto LAB_102a2c438;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102a2c46c);
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



/* Entry: 102a2ccbc; end: 102a2cd23;  */

void FUN_102a2ccbc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a2cd24();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102a2cd24; end: 102a2ce5f;  */

code * FUN_102a2cd24(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2ce60);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_102a2b9d0(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 102a2ce60; end: 102a2cef7;  */

code * FUN_102a2ce60(long *param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x000107c61458(0x50,0x381f);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_102a2d66c();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  func_0x000102a2d278(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_102a2cef8;
}



/* Entry: 102a2cef8; end: 102a2cefb;  */

void FUN_102a2cef8(long *param_1)

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



/* Entry: 102a2cefc; end: 102a2cf93;  */

undefined8 FUN_102a2cefc(long *param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x000107c61458(0x50,0x4384);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  func_0x000102a2d690();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_102a2d3dc(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return 0x102a2d794;
}



/* Entry: 102a2cf94; end: 102a2cfcf;  */

void FUN_102a2cf94(long *param_1)

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



/* Entry: 102a2cfd0; end: 102a2d133;  */

undefined8
FUN_102a2cfd0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
             undefined8 param_6)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2d0a4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102a2c46c(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2d084);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102a2bf24(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102a2d0c0;
  }
  lVar6 = *unaff_x20;
joined_r0x000102a2d0c0:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar3 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2d134);
      (*pcVar2)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    func_0x000107c61434(param_3);
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  }
  return uVar7;
}



/* Entry: 102a2d134; end: 102a2d3d7;  */

undefined8
FUN_102a2d134(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar7 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a2d1f8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar7) {
    param_3 = param_3 & 1;
    func_0x000102a2c700(lVar7,param_3,param_4,param_5);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a2d1d8);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000102a2c084(param_4,param_5);
    lVar7 = *unaff_x20;
    goto joined_r0x000102a2d214;
  }
  lVar7 = *unaff_x20;
joined_r0x000102a2d214:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar7 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar7 + 0x30) + uVar2 * 8) = param_2;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a2d278);
      (*pcVar1)();
    }
    uVar5 = 0;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar2 * 8) = param_1;
  }
  return uVar5;
}



/* Entry: 102a2d3d8; end: 102a2d3db;  */

void FUN_102a2d3d8(long *param_1,ulong param_2)

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
    if (lVar9 == 0) goto LAB_102a2d5cc;
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) goto LAB_102a2d5c0;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2d66c);
      (*pcVar4)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_102a2d5cc:
      if ((bVar3 & 1) != 0) {
        lVar6 = param_1[4];
        lVar7 = *(long *)param_1[3];
        func_0x000100bcb1dc(*(long *)(lVar7 + 0x30) + lVar6 * 0x10);
        func_0x000102a2cb0c(lVar6,lVar7);
      }
      goto LAB_102a2d640;
    }
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) {
LAB_102a2d5c0:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
      goto LAB_102a2d640;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2d5b0);
      (*pcVar4)();
    }
  }
  lVar5 = param_1[2];
  *(long *)(lVar6 + 0x10) = lVar7 + 1;
  func_0x000107c61434(lVar5);
LAB_102a2d640:
  lVar6 = *param_1;
  func_0x000107c61434(lVar9);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 102a2d3dc; end: 102a2d53b;  */

undefined1  [16] FUN_102a2d3dc(long *param_1,long param_2,ulong param_3,uint param_4)

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
    func_0x000107c61458(0x30,0x1228);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2d4e4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    func_0x000102a2c46c(lVar1,param_4 & 1,0x112ee2250,&UNK_10db0d140);
    func_0x000100029284();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a2d4c4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102a2bf24(0x112ee2250,&UNK_10db0d140);
    puVar3[4] = lVar4;
    goto joined_r0x000102a2d50c;
  }
  puVar3[4] = lVar4;
joined_r0x000102a2d50c:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = 0x102a2d798;
  return auVar10;
}



/* Entry: 102a2d53c; end: 102a2d66b;  */

void FUN_102a2d53c(long *param_1,ulong param_2)

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
    if (lVar9 == 0) goto LAB_102a2d5cc;
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) goto LAB_102a2d5c0;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2d66c);
      (*pcVar4)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_102a2d5cc:
      if ((bVar3 & 1) != 0) {
        lVar6 = param_1[4];
        lVar7 = *(long *)param_1[3];
        func_0x000100bcb1dc(*(long *)(lVar7 + 0x30) + lVar6 * 0x10);
        func_0x000102a2cb0c(lVar6,lVar7);
      }
      goto LAB_102a2d640;
    }
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) {
LAB_102a2d5c0:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
      goto LAB_102a2d640;
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2d5b0);
      (*pcVar4)();
    }
  }
  lVar5 = param_1[2];
  *(long *)(lVar6 + 0x10) = lVar7 + 1;
  func_0x000107c61434(lVar5);
LAB_102a2d640:
  lVar6 = *param_1;
  func_0x000107c61434(lVar9);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 102a2d66c; end: 102a2d6e3;  */

undefined1  [16] FUN_102a2d66c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x102a2d684;
  return auVar1;
}



/* Entry: 102a2d6e4; end: 102a2d717;  */

void FUN_102a2d6e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a2d718; end: 102a2d723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d718(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined1 auStack_e8 [32];
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [72];
  undefined1 auStack_68 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  plVar11 = *(long **)(unaff_x20 + 0x20);
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  lVar13 = *(long *)(lVar9 + _DAT_11306c008);
  if ((int)lVar13 == 0) {
    return;
  }
  func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
  lVar6 = lVar8 + 0x10;
  func_0x000107c61648();
  if (lVar6 == 0) {
LAB_102a2b75c:
    func_0x000107c61428(lVar8 + 0x10,auStack_e8,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61648();
    if (lVar8 != 0) {
      lVar6 = 0x112ee2488;
      func_0x0001000285a8(0x112ee2488,&UNK_10db0d248);
      func_0x000107c61534();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(long *)(lVar6 + 0x20) = lVar13;
      *(long *)(lVar6 + 0x28) = lVar9;
      lVar13 = lVar6;
      func_0x000102a28258();
      func_0x000107c61588(lVar6);
      func_0x000107c61174(lVar9);
      FUN_102a2d724((long *)(lVar6 + 0x20),0x112ee2490,&UNK_10db0d250);
      func_0x000107c61428(lVar8 + 0x20,auStack_b0,0x21,0);
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
      func_0x000107c61558(uVar7);
      auStack_c8[0] = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar8 + 0x20) = 0x8000000000000000;
      FUN_102a2cfd0(lVar13,plVar11,uVar1,uVar7,0x112ee2250,&UNK_10db0d140);
      *(undefined8 *)(lVar8 + 0x20) = auStack_c8[0];
      func_0x000107c614a8(auStack_b0);
      func_0x000107c61574(lVar8);
      func_0x000107c6142c(lVar13);
    }
    return;
  }
  func_0x000107c61428(lVar6 + 0x20,auStack_e8,0x20,0);
  lVar14 = *(long *)(lVar6 + 0x20);
  if (*(long *)(lVar14 + 0x10) == 0) {
    func_0x000107c614a8(auStack_e8);
    func_0x000107c61574(lVar6);
    goto LAB_102a2b75c;
  }
  func_0x000107c61434(lVar14);
  plVar5 = plVar11;
  uVar10 = uVar1;
  func_0x000100029284();
  if ((uVar10 & 1) == 0) {
    func_0x000107c614a8(auStack_e8);
    func_0x000107c61574(lVar6);
    func_0x000107c6142c(lVar14);
    goto LAB_102a2b75c;
  }
  lVar15 = *(long *)(*(long *)(lVar14 + 0x38) + (long)plVar5 * 8);
  func_0x000107c61434(lVar15);
  func_0x000107c614a8(auStack_e8);
  func_0x000107c61574(lVar6);
  func_0x000107c6142c(lVar14);
  if ((*(long *)(lVar15 + 0x10) == 0) || (lVar6 = lVar13, func_0x00010035a314(), (uVar10 & 1) == 0))
  {
    func_0x000107c6142c(lVar15);
    func_0x000107c61428(lVar8 + 0x10,auStack_b0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61648();
    if (lVar8 == 0) {
      return;
    }
    func_0x000107c61428(lVar8 + 0x20,auStack_c8,0x21,0);
    pcVar4 = (code *)auStack_e8;
    FUN_102a2b28c(pcVar4,plVar11,uVar1);
    if (*plVar11 == 0) {
      (*pcVar4)(auStack_e8,0);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(lVar8);
      return;
    }
    func_0x000107c61558();
    lVar6 = *plVar11;
    *plVar11 = -0x8000000000000000;
    func_0x000107c61174(lVar9);
    FUN_102a2d134();
    lVar13 = *plVar11;
    *plVar11 = lVar6;
    func_0x000107c6142c(lVar13);
    (*pcVar4)(auStack_e8,0);
    func_0x000107c614a8(auStack_c8);
LAB_102a2b94c:
    func_0x000107c61574(lVar8);
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar15 + 0x38) + lVar6 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(lVar15);
    iVar2 = *(int *)(lVar6 + _DAT_11306c010);
    iVar3 = *(int *)(lVar9 + _DAT_11306c010);
    if (SCARRY4(iVar2,iVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a2b9ac);
      (*pcVar4)();
    }
    uVar7 = 0;
    func_0x0001042d857c(0);
    func_0x000107c610f8();
    lVar9 = lVar13;
    func_0x0001042d7fdc(lVar13,iVar2 + iVar3,uVar7);
    func_0x000107c61428(lVar8 + 0x10,auStack_b0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61648();
    if (lVar8 != 0) {
      func_0x000107c61428(lVar8 + 0x20,auStack_c8,0x21,0);
      pcVar4 = (code *)auStack_e8;
      FUN_102a2b28c(pcVar4,plVar11,uVar1);
      lVar14 = *plVar11;
      if (lVar14 != 0) {
        func_0x000107c61174(lVar9);
        func_0x000107c61558(lVar14);
        lVar12 = *plVar11;
        *plVar11 = -0x8000000000000000;
        lVar15 = lVar9;
        FUN_102a2d134(lVar9,lVar13,lVar14,0x112ee2240,&UNK_10db0d130);
        lVar13 = *plVar11;
        *plVar11 = lVar12;
        func_0x000107c6142c(lVar13);
        (*pcVar4)(auStack_e8,0);
        func_0x000107c614a8(auStack_c8);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar6);
        lVar9 = lVar15;
        goto LAB_102a2b94c;
      }
      (*pcVar4)(auStack_e8,0);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c61574(lVar8);
    }
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 102a2d724; end: 102a2d763;  */

undefined8 FUN_102a2d724(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102a2d764; end: 102a2d79f;  */

void FUN_102a2d764(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102a2d7a0; end: 102a2d7bf;  */

void FUN_102a2d7a0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 102a2d7c0; end: 102a2d7cf;  */

void FUN_102a2d7c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a2d7d0; end: 102a2d85f;  */

void FUN_102a2d7d0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x00010042d564();
  func_0x000107c613fc();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010042d600();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  puVar2 = puVar3;
  func_0x00010042d700();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  func_0x00010042d808();
  *(undefined **)(lVar1 + 0x20) = puVar3;
  func_0x0001001d4f8c(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x00010042d81c();
  *param_1 = lVar1;
  return;
}



/* Entry: 102a2d860; end: 102a2d86b; -[SCSponsoredLensEngagedClickEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d860(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee2580;
  func_0x000107c61428(param_1 + _DAT_112ee2580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d86c; end: 102a2d877; -[SCSponsoredLensEngagedClickEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee2580;
  func_0x000107c61428(param_1 + _DAT_112ee2580,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d878; end: 102a2d883; -[SCSponsoredLensEngagedClickEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d878(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee2588;
  func_0x000107c61428(param_1 + _DAT_112ee2588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d884; end: 102a2d88f; -[SCSponsoredLensEngagedClickEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee2588;
  func_0x000107c61428(param_1 + _DAT_112ee2588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d890; end: 102a2d89b; -[SCSponsoredLensEngagedClickEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d890(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee2590;
  func_0x000107c61428(param_1 + _DAT_112ee2590,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d89c; end: 102a2d8a7; -[SCSponsoredLensEngagedClickEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee2590;
  func_0x000107c61428(param_1 + _DAT_112ee2590,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d8a8; end: 102a2d8b3; -[SCSponsoredLensEngagedClickEntryPoint carouselService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d8a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee2598;
  func_0x000107c61428(param_1 + _DAT_112ee2598,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d8b4; end: 102a2d8bf; -[SCSponsoredLensEngagedClickEntryPoint setCarouselService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee2598;
  func_0x000107c61428(param_1 + _DAT_112ee2598,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d8c0; end: 102a2d8cb; -[SCSponsoredLensEngagedClickEntryPoint appStartExperimentReaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d8c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee25a0;
  func_0x000107c61428(param_1 + _DAT_112ee25a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d8cc; end: 102a2d8d7; -[SCSponsoredLensEngagedClickEntryPoint setAppStartExperimentReaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee25a0;
  func_0x000107c61428(param_1 + _DAT_112ee25a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d8d8; end: 102a2d8e3; -[SCSponsoredLensEngagedClickEntryPoint sponsoredLensEngagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d8d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee25a8;
  func_0x000107c61428(param_1 + _DAT_112ee25a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d8e4; end: 102a2d8ef; -[SCSponsoredLensEngagedClickEntryPoint setSponsoredLensEngagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee25a8;
  func_0x000107c61428(param_1 + _DAT_112ee25a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d8f0; end: 102a2d8fb; -[SCSponsoredLensEngagedClickEntryPoint cameraUIScopedLensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d8f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee25b0;
  func_0x000107c61428(param_1 + _DAT_112ee25b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d8fc; end: 102a2d93f;  */

void FUN_102a2d8fc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a2d940; end: 102a2d94b; -[SCSponsoredLensEngagedClickEntryPoint setCameraUIScopedLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee25b0;
  func_0x000107c61428(param_1 + _DAT_112ee25b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d94c; end: 102a2d99f;  */

void FUN_102a2d94c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a2d9a0; end: 102a2de83;  */

/* WARNING: Possible PIC construction at 0x000102a2dcd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2dcf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2dda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2ddcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2ddec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2ddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2de0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2de1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2de2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2de4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2db54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2db64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2db74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2db34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2db44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2db14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2daf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2dae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a2daf8) */
/* WARNING: Removing unreachable block (ram,0x000102a2db18) */
/* WARNING: Removing unreachable block (ram,0x000102a2db48) */
/* WARNING: Removing unreachable block (ram,0x000102a2db38) */
/* WARNING: Removing unreachable block (ram,0x000102a2db78) */
/* WARNING: Removing unreachable block (ram,0x000102a2db68) */
/* WARNING: Removing unreachable block (ram,0x000102a2db58) */
/* WARNING: Removing unreachable block (ram,0x000102a2de50) */
/* WARNING: Removing unreachable block (ram,0x000102a2de30) */
/* WARNING: Removing unreachable block (ram,0x000102a2de20) */
/* WARNING: Removing unreachable block (ram,0x000102a2de10) */
/* WARNING: Removing unreachable block (ram,0x000102a2de00) */
/* WARNING: Removing unreachable block (ram,0x000102a2ddf0) */
/* WARNING: Removing unreachable block (ram,0x000102a2ddd0) */
/* WARNING: Removing unreachable block (ram,0x000102a2ddac) */
/* WARNING: Removing unreachable block (ram,0x000102a2dcf8) */
/* WARNING: Removing unreachable block (ram,0x000102a2dcdc) */
/* WARNING: Removing unreachable block (ram,0x000102a2dae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2d9a0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_b8;
  
  lVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f284();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar6 = unaff_x20;
    func_0x000107c3f2a4();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3f6b4();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c3de4c();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar5);
          lVar5 = lVar2;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c5b7dc();
          func_0x000107c61180();
          if (lVar4 == 0) {
            func_0x000107c61170(lVar5);
            lVar5 = lVar2;
          }
          else {
            func_0x000107c3f2a0();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_102a29474();
              func_0x000107c613fc();
              func_0x000107c4b364();
              func_0x000107c61180();
              lVar5 = *(long *)(lVar6 + _DAT_1130385c0);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar5 == 0) {
                lStack_b8 = 0;
              }
              else {
                lStack_b8 = lVar5;
                func_0x000107c403c8();
                func_0x000107c61180();
                func_0x000107c615e8(lVar5);
              }
              func_0x000107c4aeb4();
              func_0x000107c61180();
              uVar8 = *(undefined8 *)(lVar3 + _DAT_113092298);
              uVar7 = *(undefined8 *)(lVar4 + _DAT_11306bf30);
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c615f4(uVar8,2);
              func_0x000107c615f4(uVar7,2);
              func_0x000107c4b11c();
              func_0x000107c61180();
              lVar6 = 0;
              FUN_102a2a100();
              func_0x000107c610f8();
              puVar1 = (undefined8 *)(lVar6 + _DAT_112ee2350);
              *puVar1 = 0xd000000000000029;
              puVar1[1] = 0x800000010f0e3840;
              lVar2 = _DAT_112ee2358;
              *(undefined8 *)(lVar6 + _DAT_112ee2358) = 0;
              *(undefined8 *)(lVar6 + _DAT_112ee2360) = 0;
              *(undefined1 *)(lVar6 + _DAT_112ee2368) = 0;
              puVar1 = (undefined8 *)(lVar6 + _DAT_112ee2370);
              *puVar1 = 0;
              puVar1[1] = 0;
              func_0x000107c61614(lVar6 + _DAT_112ee2378,0);
              *(undefined8 *)(lVar6 + _DAT_112ee2380) = 0;
              lVar5 = *(long *)(lVar6 + lVar2);
              *(long *)(lVar6 + lVar2) = lStack_b8;
              func_0x000107c61174();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 102a2de84; end: 102a2deab; -[SCSponsoredLensEngagedClickEntryPoint begin] */

void FUN_102a2de84(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a2d9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a2deac; end: 102a2e327; -[SCSponsoredLensEngagedClickEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2deac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112ee25b8);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_102a293bc();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_102a2df40;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_102a2df40:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102a2e328; end: 102a2e3d3; -[SCSponsoredLensEngagedClickEntryPoint setValue:forIvarName:] */

void FUN_102a2e328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x000102a2df60(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102a2e3d4; end: 102a2e4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2e3d4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ee2580,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee2588,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee2590,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee2598,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee25a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee25a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ee25b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ee25b8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a2e4ac; end: 102a2e4cb; -[SCSponsoredLensEngagedClickEntryPoint init] */

void FUN_102a2e4ac(void)

{
  FUN_102a2e3d4();
  return;
}



/* Entry: 102a2e4cc; end: 102a2e4ff;  */

void FUN_102a2e4cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a2e500; end: 102a2e597; -[SCSponsoredLensEngagedClickEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2e500(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ee2580);
  func_0x000107c61610(param_1 + _DAT_112ee2588);
  func_0x000107c61610(param_1 + _DAT_112ee2590);
  func_0x000107c61610(param_1 + _DAT_112ee2598);
  func_0x000107c61610(param_1 + _DAT_112ee25a0);
  func_0x000107c61610(param_1 + _DAT_112ee25a8);
  func_0x000107c61610(param_1 + _DAT_112ee25b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee25b8));
  return;
}



/* Entry: 102a2e598; end: 102a2e5b7;  */

void FUN_102a2e598(void)

{
  func_0x000107c61168(&PTR_PTR_112880f58);
  return;
}



/* Entry: 102a2e5b8; end: 102a2e68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102a2e5b8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ee2618;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ee2618);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102a2e68c; end: 102a2e837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a2e68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee25f0);
  *puVar1 = 0xd000000000000017;
  puVar1[1] = 0x800000010f0e3a70;
  lVar2 = _DAT_112ee25f8;
  *(undefined8 *)(unaff_x20 + _DAT_112ee25f8) = 0;
  lVar3 = _DAT_112ee2600;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2600) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ee2608) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ee2610,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ee2618) = 0;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar6);
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ee2620) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2628) = param_3;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ee25e8) = puVar4;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ee2630) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_102a2e838();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar5;
}



/* Entry: 102a2e838; end: 102a2e95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2e838(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ee2628);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ee25f0);
    func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112ee25f0))[1]);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((int)lVar4 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112ee2600);
      if (lVar4 != 0) {
        puVar2 = &UNK_110587d68;
        func_0x000107c613fc(&UNK_110587d68,0x18,7);
        func_0x000107c61614(puVar2 + 0x10);
        pcStack_40 = FUN_102a2f038;
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0x42000000;
        puStack_50 = &UNK_100b5ebe4;
        puStack_48 = &UNK_110587d80;
        puStack_38 = puVar2;
        func_0x000107c60bc4(&puStack_60);
        puVar2 = puStack_38;
        func_0x000107c61174(lVar4);
        func_0x000107c61574(puVar2);
        func_0x000107c5dc64(lVar4);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(lVar4);
      }
    }
  }
  return;
}



/* Entry: 102a2e95c; end: 102a2eb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2e95c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c3d14c();
      func_0x000107c61180();
      func_0x000107c615e8(param_1);
      func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
      puVar3 = param_3 + 0x10;
      func_0x000107c61618();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = &UNK_110587d68;
        func_0x000107c613fc(&UNK_110587d68,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,puVar3);
        uStack_78 = 0x102a2f05c;
        puStack_98 = puVar1;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_100b610dc;
        puStack_80 = &UNK_110587da8;
        ppuVar5 = &puStack_98;
        puStack_70 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_70);
        lVar6 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c3e924(lVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61428(param_3 + 0x10,auStack_b0,0,0);
      puVar3 = param_3 + 0x10;
      func_0x000107c61618();
      if (puVar3 != (undefined *)0x0) {
        lVar6 = *(long *)(puVar3 + _DAT_112ee25f8);
        if (lVar6 == 0) {
          func_0x000107c61170();
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61170(puVar3);
          uStack_78 = 0x102a2f064;
          puStack_98 = puVar1;
          uStack_90 = 0x42000000;
          puStack_88 = (undefined *)0x102a2a198;
          puStack_80 = &UNK_110587dd0;
          ppuVar5 = &puStack_98;
          puStack_70 = param_3;
          func_0x000107c60bc4(ppuVar5);
          puVar3 = puStack_70;
          func_0x000107c6157c(param_3);
          func_0x000107c61574(puVar3);
          func_0x000107c5dc64(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar5);
          lVar2 = lVar6;
        }
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102a2eb68; end: 102a2ec1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2eb68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      lVar1 = param_1;
      FUN_102a2e5b8();
      func_0x000107c3d6fc(param_1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c61604(param_3 + _DAT_112ee2610,param_1);
      func_0x000107c61170(param_3);
      param_3 = param_1;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102a2ec1c; end: 102a2ec1f; -[_TtC30SponsoredLensCameraHeatMapImpl30SponsoredLensCameraHeatMapImpl tapGestureAction] */

void FUN_102a2ec1c(void)

{
  return;
}



/* Entry: 102a2ec20; end: 102a2ece3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2ec20(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    *(undefined1 *)(param_2 + _DAT_112ee2608) = 0;
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar1 = param_1;
      func_0x000107c4a4d8();
      func_0x000107c61170(param_1);
      *(char *)(param_2 + _DAT_112ee2608) = (char)lVar1;
    }
  }
  func_0x000107c61170();
  return;
}



/* Entry: 102a2ece4; end: 102a2ed43; -[_TtC30SponsoredLensCameraHeatMapImpl30SponsoredLensCameraHeatMapImpl init] */

void FUN_102a2ece4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensCameraHeatMapImpl.SponsoredLensCameraHeatMapImpl",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a2ed10);
  (*pcVar1)();
}



/* Entry: 102a2ed44; end: 102a2edef; -[_TtC30SponsoredLensCameraHeatMapImpl30SponsoredLensCameraHeatMapImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a2ed74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2ed94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a2edb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a2ed98) */
/* WARNING: Removing unreachable block (ram,0x000102a2ed78) */
/* WARNING: Removing unreachable block (ram,0x000102a2edb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2ed44(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ee25f0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee25f8));
  return;
}



/* Entry: 102a2edf0; end: 102a2ee03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2edf0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + _DAT_112ee25e8));
  return;
}



/* Entry: 102a2ee04; end: 102a2efbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a2ee04(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(char *)(unaff_x20 + _DAT_112ee2608) != '\x01') {
    return;
  }
  lVar3 = unaff_x20 + _DAT_112ee2610;
  func_0x000107c61618(lVar3);
  func_0x000107c4b8b8(param_5);
  dVar4 = param_1;
  dVar6 = param_2;
  func_0x000107c61170(lVar3);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c61170(puVar2);
  dVar5 = dVar4;
  func_0x000107c609cc(dVar4,dVar6,param_3,param_4);
  func_0x000107c609b0(dVar4,dVar6,param_3,param_4);
  dVar6 = dVar4;
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112ee2620));
  dVar6 = dVar6 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a2efb8);
    (*pcVar1)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a2efbc);
    (*pcVar1)();
  }
  if (dVar6 < 9.223372036854776e+18) {
    lVar3 = 0;
    func_0x00010349cce8();
    func_0x000107c613fc();
    *(double *)(lVar3 + 0x10) = param_1;
    *(double *)(lVar3 + 0x18) = param_2;
    *(double *)(lVar3 + 0x20) = param_1 / dVar5;
    *(double *)(lVar3 + 0x28) = param_2 / dVar4;
    *(long *)(lVar3 + 0x30) = (long)dVar6;
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112ee25e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a2efc0);
  (*pcVar1)();
}



/* Entry: 102a2efc0; end: 102a2f017; -[_TtC30SponsoredLensCameraHeatMapImpl30SponsoredLensCameraHeatMapImpl gestureRecognizer:shouldReceiveTouch:] */

undefined8
FUN_102a2efc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102a2ee04(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return 0;
}


