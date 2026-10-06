/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101096348; end: 1010963b7;  */

void FUN_101096348(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_101095a1c(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1010963b8; end: 1010963e3; -[_TtC26EnableFindFriendsUpsellFST35EnableFindFriendsUpsellFSTPresenter init] */

void FUN_1010963b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EnableFindFriendsUpsellFST.EnableFindFriendsUpsellFSTPresenter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010963e4);
  (*pcVar1)();
}



/* Entry: 1010963e4; end: 1010963e7;  */

void FUN_1010963e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010963e8; end: 1010964db; -[_TtC26EnableFindFriendsUpsellFST35EnableFindFriendsUpsellFSTPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101096414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109648c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101096418) */
/* WARNING: Removing unreachable block (ram,0x000101096490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010963e8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d593b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d593c8));
  return;
}



/* Entry: 1010964dc; end: 1010964df; -[_TtC26EnableFindFriendsUpsellFST35EnableFindFriendsUpsellFSTPresenter tray:positionDidChange:] */

void FUN_1010964dc(void)

{
  return;
}



/* Entry: 1010964e0; end: 10109652f; -[_TtC26EnableFindFriendsUpsellFST35EnableFindFriendsUpsellFSTPresenter trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010964e0(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  FUN_101095f54(1);
  lVar1 = param_1 + _DAT_112d59368;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c445ec();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101096530; end: 101096597; -[_TtC26EnableFindFriendsUpsellFST35EnableFindFriendsUpsellFSTPresenter tray:heightForPosition:] */

undefined8
FUN_101096530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_1010967e8(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101096598; end: 1010965ef; -[_TtC26EnableFindFriendsUpsellFST49EnableFindFriendsUpsellFSTContainerViewController initWithValdiView:] */

void FUN_101096598(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000029,0x800000010ef23220,
                      "EnableFindFriendsUpsellFST/EnableFindFriendsUpsellFSTPresenter.swift",0x44,2,
                      0x114,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010965f0);
  (*pcVar1)();
}



/* Entry: 1010965f0; end: 101096647; -[_TtC26EnableFindFriendsUpsellFST49EnableFindFriendsUpsellFSTContainerViewController initWithCoder:] */

void FUN_1010965f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "EnableFindFriendsUpsellFST/EnableFindFriendsUpsellFSTPresenter.swift",0x44,2,
                      0x118,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101096648);
  (*pcVar1)();
}



/* Entry: 101096648; end: 10109665f; -[_TtC26EnableFindFriendsUpsellFST49EnableFindFriendsUpsellFSTContainerViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_101096648(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112d59380) ^ 0xff) & 1;
}



/* Entry: 101096660; end: 1010966bf; -[_TtC26EnableFindFriendsUpsellFST49EnableFindFriendsUpsellFSTContainerViewController initWithNibName:bundle:] */

void FUN_101096660(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EnableFindFriendsUpsellFST.EnableFindFriendsUpsellFSTContainerViewController"
                      ,0x4c,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10109668c);
  (*pcVar1)();
}



/* Entry: 1010966c0; end: 1010967e7;  */

undefined8
FUN_1010966c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11037e9f8;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_11037ea20;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100c75f50;
  puStack_d8 = &UNK_11037ea48;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c47bd0();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 1010967e8; end: 101096933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1010967e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  
  dVar5 = -1.0;
  if (param_5 == 8) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d59370);
    if (lVar2 != 0) {
      func_0x000107c61174(0xbff0000000000000);
      lVar3 = lVar2;
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c517d0();
        func_0x000107c61170(lVar2);
        dVar6 = dVar5 + 500.0;
      }
      else {
        func_0x000107c5e07c();
        puVar4 = *(undefined **)(unaff_x20 + _DAT_112d59388);
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
          func_0x000107c4c194();
          func_0x000107c61180();
        }
        else {
          func_0x000107c5de64();
          func_0x000107c61180();
          if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101096864);
            (*pcVar1)();
          }
        }
        func_0x000107c3ec60();
        func_0x000107c61170(puVar4);
        func_0x000107c609cc(dVar5,param_2,param_3,param_4);
        dVar6 = 1.79769313486232e+308;
        func_0x000107c5b098(lVar2);
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c517d0();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar2);
        dVar6 = dVar6 + dVar5;
      }
      dVar5 = dVar6 + 8.0;
    }
  }
  return dVar5;
}



/* Entry: 101096934; end: 101096943;  */

undefined1  [16] FUN_101096934(void)

{
  return ZEXT816(0x11037e9c0);
}



/* Entry: 101096944; end: 101096963;  */

void FUN_101096944(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad3e8);
  return;
}



/* Entry: 101096964; end: 101096997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101096964(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112d593d0);
    if (lVar3 != 0) {
      func_0x000107c4f808();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        puVar5 = PTR_PTR_1126b15b0;
        func_0x000107c61168(PTR_PTR_1126b15b0);
        func_0x000107c42b14();
        func_0x000107c61180();
        puVar6 = &UNK_11037ebc0;
        func_0x000107c613fc(&UNK_11037ebc0,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = 0x656c62616e65;
        *(undefined8 *)(puVar6 + 0x18) = 0xe600000000000000;
        uStack_68 = 0x1010969ec;
        puStack_88 = puVar1;
        uStack_80 = 0x42000000;
        puStack_78 = (undefined *)0x101095cec;
        puStack_70 = &UNK_11037ebd8;
        ppuVar7 = &puStack_88;
        puStack_60 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_60);
        func_0x000107c5d5c0(lVar4);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(puVar5);
      }
    }
    FUN_101095f54(3);
    pcVar8 = "dismissTakeover()";
    func_0x0001000c10c0("dismissTakeover()");
    func_0x000107c61180();
    puVar6 = &UNK_11037eb70;
    func_0x000107c613fc(&UNK_11037eb70,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    uStack_68 = 0x101096a2c;
    puStack_88 = puVar1;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11037eb88;
    ppuVar7 = &puStack_88;
    puStack_60 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar1 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    func_0x000107c4e590(pcVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(pcVar8);
    lVar3 = lVar2 + _DAT_112d59368;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c445a8();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101096998; end: 1010969c3;  */

/* WARNING: Possible PIC construction at 0x000101095ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101095cd0) */

void FUN_101096998(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  FUN_100dfa6ec(0);
  uVar4 = uVar3;
  FUN_100f33384();
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1010969c4; end: 101096a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010969c4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d593a8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_dismissAnimated__1125be608,1);
    return;
  }
  return;
}



/* Entry: 101096a30; end: 101096a3b; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory initWithComposerServices:] */

void FUN_101096a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0009d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithComposerServices_userInf_1125ddc38,param_3,0,0);
  return;
}



/* Entry: 101096a3c; end: 101096a43; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory initWithComposerServices:userInfoServices:] */

void FUN_101096a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0009d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithComposerServices_userInf_1125ddc38,param_3,param_4,0);
  return;
}



/* Entry: 101096a44; end: 101096afb; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory initWithComposerServices:userInfoServices:dismissLogger:] */

undefined8
FUN_101096a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = 0x4152545349474552;
  func_0x000107c5fadc(0x4152545349474552,0xec0000004e4f4954);
  func_0x000107c45f40(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return param_1;
}



/* Entry: 101096afc; end: 101096c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101096afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  puVar4 = auStack_60;
  func_0x000107c614f0();
  uVar3 = param_1;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d59440) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d59448) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d59450) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d59458);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d59460) = 0;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(auStack_60,puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar4;
}



/* Entry: 101096c2c; end: 101096cab; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory initWithComposerServices:userInfoServices:dismissLogger:source:] */

void FUN_101096c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_101096afc(param_3,param_4,param_5,param_6,param_2);
  return;
}



/* Entry: 101096cac; end: 101096df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101096cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  puVar4 = auStack_70;
  func_0x000107c614f0();
  uVar3 = param_1;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d59440) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d59448) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d59450) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d59458);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d59460) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c61154(auStack_70,puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar4;
}



/* Entry: 101096df8; end: 101096e8f; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory initWithComposerServices:userInfoServices:dismissLogger:source:complianceChecker:] */

void FUN_101096df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_7);
  FUN_101096cac(param_3,param_4,param_5,param_6,param_2,param_7);
  return;
}



/* Entry: 101096e90; end: 101096f67; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory makePresenterWithUiContainer:delegate:addFriendsPageSessionId:] */

void FUN_101096e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  uVar1 = param_3;
  func_0x000107c614f0(param_3);
  uVar2 = param_4;
  func_0x000107c614f0(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_101097034(param_3,param_4,param_5,param_2,param_1,uVar1,uVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101096f68; end: 101096fc7; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory init] */

void FUN_101096f68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EnableFindFriendsUpsellFST.EnableFindFriendsUpsellFSTPresenterFactory",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101096f94);
  (*pcVar1)();
}



/* Entry: 101096fc8; end: 101097033; -[_TtC26EnableFindFriendsUpsellFST42EnableFindFriendsUpsellFSTPresenterFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101097004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101097008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101096fc8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d59440));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d59448));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d59450));
  return;
}



/* Entry: 101097034; end: 10109721b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101097034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(undefined8 *)(param_5 + _DAT_112d59440);
  uVar10 = *(undefined8 *)(param_5 + _DAT_112d59448);
  uVar8 = *(undefined8 *)(param_5 + _DAT_112d59450);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112d59458);
  uVar3 = ((undefined8 *)(param_5 + _DAT_112d59458))[1];
  uVar9 = *(undefined8 *)(param_5 + _DAT_112d59460);
  lVar6 = 0;
  FUN_101096944();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar5 = _DAT_112d59368;
  func_0x000107c61614(lVar7 + _DAT_112d59368,0);
  *(undefined8 *)(lVar7 + _DAT_112d593a8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d59388) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d59370) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d59390);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar7 + _DAT_112d59398) = 0;
  *(undefined1 *)(lVar7 + _DAT_112d593a0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d593b8) = 0x407f400000000000;
  *(undefined8 *)(lVar7 + _DAT_112d593c0) = 0x4020000000000000;
  *(undefined8 *)(lVar7 + _DAT_112d593b0) = param_1;
  *(undefined8 *)(lVar7 + _DAT_112d593c8) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112d593d0) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112d593d8) = uVar8;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d593e0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d593e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar7 + _DAT_112d59378) = uVar9;
  func_0x000107c61604(lVar7 + lVar5,param_2);
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar10);
  func_0x000107c615f0(uVar8);
  func_0x000107c61434(param_4);
  func_0x000107c615f0(uVar9);
  func_0x000107c61154(&lStack_70,puVar4);
  return;
}



/* Entry: 10109721c; end: 10109723b;  */

void FUN_10109721c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad5e0);
  return;
}



/* Entry: 10109723c; end: 101097533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10109723c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  lVar5 = _DAT_112d59490;
  func_0x000107c61614(unaff_x20 + _DAT_112d59490,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d59498) = 0xfe;
  func_0x000107c61604(unaff_x20 + lVar5,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d594a0) = param_5;
  lVar4 = 0;
  FUN_10109519c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112d59310,0);
  func_0x000107c61614(lVar5 + _DAT_112d59318,0);
  *(undefined8 *)(lVar5 + _DAT_112d59320) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d59328) = 0;
  lVar11 = *(long *)(param_2 + _DAT_1130218f0);
  func_0x000107c615f4(param_5,2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 != 0) {
    *(long *)(lVar5 + _DAT_112d59330) = lVar11;
    func_0x000107c615f0();
    uVar6 = param_3;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar7 = 0;
    FUN_10109721c();
    lVar8 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar8 + _DAT_112d59440) = uVar6;
    *(undefined8 *)(lVar8 + _DAT_112d59448) = param_4;
    *(undefined8 *)(lVar8 + _DAT_112d59450) = param_5;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112d59458);
    *puVar1 = 0x4152545349474552;
    puVar1[1] = 0xec0000004e4f4954;
    *(long *)(lVar8 + _DAT_112d59460) = lVar11;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c615f0(param_5);
    func_0x000107c61174(param_4);
    func_0x000107c615f0(lVar11);
    plVar9 = &lStack_70;
    func_0x000107c61154(plVar9,puVar2);
    *(long **)(lVar5 + _DAT_112d59338) = plVar9;
    plVar9 = &lStack_80;
    lStack_80 = lVar5;
    lStack_78 = lVar4;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(param_5);
    func_0x000107c615e8(lVar11);
    *(long **)(unaff_x20 + _DAT_112d594a8) = plVar9;
    puVar10 = auStack_90;
    func_0x000107c61154(puVar10,PTR_s_init_1125d9248);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(param_5);
    return puVar10;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000002e,0x800000010ef23090,
                      "EnableFindFriendsUpsellFST/EnableFindFriendsUpsellCoordinator.swift",0x43,2,
                      0x4a,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101097534);
  (*pcVar3)();
}



/* Entry: 101097534; end: 1010975fb; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate initWithRealDelegate:friendingComplianceServices:composerServices:userInfoServices:dismissLogger:] */

undefined8
FUN_101097534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  uVar1 = param_3;
  FUN_10109794c(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  return uVar1;
}



/* Entry: 1010975fc; end: 10109761b; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010975fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
            (*(long *)(param_1 + _DAT_112d594a8) + _DAT_112d59310,param_3);
  return;
}



/* Entry: 10109761c; end: 10109767b; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate init] */

void FUN_10109761c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EnableFindFriendsUpsellFST.UpsellContactPermissionWorkflowDelegate",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101097648);
  (*pcVar1)();
}



/* Entry: 10109767c; end: 1010976c3; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109767c(long param_1)

{
  FUN_101097c0c(param_1 + _DAT_112d59490);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d594a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d594a8));
  return;
}



/* Entry: 1010976c4; end: 101097707; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate contactPermissionWorkflowSkipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010976c4(long param_1)

{
  param_1 = param_1 + _DAT_112d59490;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c40320();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101097708; end: 10109782f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101097708(ulong param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if ((param_1 & 1) == 0) {
    lVar3 = unaff_x20 + _DAT_112d59490;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c4031c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
      return;
    }
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_112d59498) = 1;
    lVar3 = *(long *)(unaff_x20 + _DAT_112d594a8);
    func_0x000107c61604(lVar3 + _DAT_112d59318);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112d59330);
    puVar1 = &UNK_11037ec10;
    func_0x000107c613fc(&UNK_11037ec10,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar3);
    pcStack_40 = FUN_101097c30;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f3aa0;
    puStack_48 = &UNK_11037ec28;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c5ad4c(uVar4);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 101097830; end: 10109785f; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate contactPermissionWorkflowCompletedWithPermissionGranted:] */

void FUN_101097830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101097708(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101097860; end: 1010978ab; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate contactPermissionWorkflowCompletedWithGoToSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101097860(long param_1)

{
  param_1 = param_1 + _DAT_112d59490;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c40318();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1010978ac; end: 10109794b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010978ac(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_112d59498);
  if (bVar1 < 0xfe) {
    *(undefined1 *)(unaff_x20 + _DAT_112d59498) = 0xfe;
    lVar2 = unaff_x20 + _DAT_112d59490;
    func_0x000107c61618();
    if (lVar2 != 0) {
      if (bVar1 >> 6 == 0) {
        func_0x000107c4031c(lVar2,param_2,bVar1 & 1);
      }
      else if (bVar1 >> 6 == 1) {
        func_0x000107c40318(lVar2,param_2,bVar1 & 1);
      }
      else {
        func_0x000107c40320(lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 10109794c; end: 101097c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109794c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c614f0();
  lVar5 = _DAT_112d59490;
  func_0x000107c61614(unaff_x20 + _DAT_112d59490,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d59498) = 0xfe;
  func_0x000107c61604(unaff_x20 + lVar5,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d594a0) = param_5;
  lVar4 = 0;
  FUN_10109519c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112d59310,0);
  func_0x000107c61614(lVar5 + _DAT_112d59318,0);
  *(undefined8 *)(lVar5 + _DAT_112d59320) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d59328) = 0;
  lVar10 = *(long *)(param_2 + _DAT_1130218f0);
  func_0x000107c615f4(param_5,2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    *(long *)(lVar5 + _DAT_112d59330) = lVar10;
    func_0x000107c615f0();
    uVar6 = param_3;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar7 = 0;
    FUN_10109721c();
    lVar8 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar8 + _DAT_112d59440) = uVar6;
    *(undefined8 *)(lVar8 + _DAT_112d59448) = param_4;
    *(undefined8 *)(lVar8 + _DAT_112d59450) = param_5;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112d59458);
    *puVar1 = 0x4152545349474552;
    puVar1[1] = 0xec0000004e4f4954;
    *(long *)(lVar8 + _DAT_112d59460) = lVar10;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c615f0(param_5);
    func_0x000107c61174(param_4);
    func_0x000107c615f0(lVar10);
    plVar9 = &lStack_70;
    func_0x000107c61154(plVar9,puVar2);
    *(long **)(lVar5 + _DAT_112d59338) = plVar9;
    plVar9 = &lStack_80;
    lStack_80 = lVar5;
    lStack_78 = lVar4;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(param_5);
    func_0x000107c615e8(lVar10);
    *(long **)(unaff_x20 + _DAT_112d594a8) = plVar9;
    func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000002e,0x800000010ef23090,
                      "EnableFindFriendsUpsellFST/EnableFindFriendsUpsellCoordinator.swift",0x43,2,
                      0x4a,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101097c0c);
  (*pcVar3)();
}



/* Entry: 101097c0c; end: 101097c2f;  */

undefined8 FUN_101097c0c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101097c30; end: 101097c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101097c30(ulong param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((param_1 & 1) == 0) {
      lVar5 = lVar1 + _DAT_112d59318;
      func_0x000107c61618();
      if (lVar5 != 0) {
        func_0x000107c5d7ac();
        func_0x000107c615e8(lVar5);
      }
      func_0x000107c61170(lVar1);
    }
    else {
      pcVar2 = "presentTray()";
      func_0x0001000c10c0("presentTray()");
      func_0x000107c61180();
      puVar3 = &UNK_11037e948;
      func_0x000107c613fc(&UNK_11037e948,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar1);
      pcStack_58 = FUN_1010951bc;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_11037e960;
      ppuVar4 = &puStack_78;
      puStack_50 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e590(pcVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}



/* Entry: 101097c54; end: 101097c73;  */

void FUN_101097c54(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad6c0);
  return;
}



/* Entry: 101097c74; end: 101097e37;  */

int FUN_101097c74(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x7d < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x82) {
      iVar2 = 4;
    }
    if (param_2 + 0x82 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101097cf0;
        goto LAB_101097cd4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101097cd4:
      return ((uint)*param_1 | uVar1 << 8) - 0x82;
    }
  }
LAB_101097cf0:
  uVar1 = ((uint)(*param_1 >> 6) | (*param_1 >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101097e38; end: 101097e3b; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate upsellCoordinatorNotInCohort] */

void FUN_101097e38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010978ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101097e3c; end: 101097e3f; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate upsellCoordinatorDidAccept] */

void FUN_101097e3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010978ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101097e40; end: 101097e43; -[_TtC26EnableFindFriendsUpsellFST39UpsellContactPermissionWorkflowDelegate upsellCoordinatorDidDismiss] */

void FUN_101097e40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010978ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101097e44; end: 101097e9f; -[_TtC15StoryAutoSaving24OnboardingViewController viewDidLoad] */

void FUN_101097e44(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_10109910c();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_101097ea0();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101097ea0; end: 101098c2f;  */

/* WARNING: Possible PIC construction at 0x000101097f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101097f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101097f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101097fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109806c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109809c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109824c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109825c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010982e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010983c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109847c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109849c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010984ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109852c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010985a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010985f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010986bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010987a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010987f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109889c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010988d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010988fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010989a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010989f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101098bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101098bd0) */
/* WARNING: Removing unreachable block (ram,0x000101098bc0) */
/* WARNING: Removing unreachable block (ram,0x000101098b70) */
/* WARNING: Removing unreachable block (ram,0x000101098b50) */
/* WARNING: Removing unreachable block (ram,0x000101098b34) */
/* WARNING: Removing unreachable block (ram,0x000101098b0c) */
/* WARNING: Removing unreachable block (ram,0x000101098ab8) */
/* WARNING: Removing unreachable block (ram,0x000101098a98) */
/* WARNING: Removing unreachable block (ram,0x000101098a5c) */
/* WARNING: Removing unreachable block (ram,0x000101098a38) */
/* WARNING: Removing unreachable block (ram,0x0001010989fc) */
/* WARNING: Removing unreachable block (ram,0x0001010989a8) */
/* WARNING: Removing unreachable block (ram,0x000101098954) */
/* WARNING: Removing unreachable block (ram,0x000101098900) */
/* WARNING: Removing unreachable block (ram,0x0001010988dc) */
/* WARNING: Removing unreachable block (ram,0x0001010988a0) */
/* WARNING: Removing unreachable block (ram,0x00010109884c) */
/* WARNING: Removing unreachable block (ram,0x0001010987f8) */
/* WARNING: Removing unreachable block (ram,0x0001010987a4) */
/* WARNING: Removing unreachable block (ram,0x00010109874c) */
/* WARNING: Removing unreachable block (ram,0x000101098728) */
/* WARNING: Removing unreachable block (ram,0x0001010986c0) */
/* WARNING: Removing unreachable block (ram,0x000101098c2c) */
/* WARNING: Removing unreachable block (ram,0x0001010986f4) */
/* WARNING: Removing unreachable block (ram,0x00010109869c) */
/* WARNING: Removing unreachable block (ram,0x00010109864c) */
/* WARNING: Removing unreachable block (ram,0x000101098c28) */
/* WARNING: Removing unreachable block (ram,0x000101098680) */
/* WARNING: Removing unreachable block (ram,0x0001010985f8) */
/* WARNING: Removing unreachable block (ram,0x0001010985a8) */
/* WARNING: Removing unreachable block (ram,0x000101098574) */
/* WARNING: Removing unreachable block (ram,0x000101098530) */
/* WARNING: Removing unreachable block (ram,0x00010109850c) */
/* WARNING: Removing unreachable block (ram,0x0001010984f0) */
/* WARNING: Removing unreachable block (ram,0x0001010984a0) */
/* WARNING: Removing unreachable block (ram,0x000101098c24) */
/* WARNING: Removing unreachable block (ram,0x0001010984d4) */
/* WARNING: Removing unreachable block (ram,0x000101098480) */
/* WARNING: Removing unreachable block (ram,0x0001010983c8) */
/* WARNING: Removing unreachable block (ram,0x000101098c20) */
/* WARNING: Removing unreachable block (ram,0x000101098464) */
/* WARNING: Removing unreachable block (ram,0x000101098398) */
/* WARNING: Removing unreachable block (ram,0x000101098c1c) */
/* WARNING: Removing unreachable block (ram,0x0001010983ac) */
/* WARNING: Removing unreachable block (ram,0x00010109831c) */
/* WARNING: Removing unreachable block (ram,0x0001010982ec) */
/* WARNING: Removing unreachable block (ram,0x000101098c18) */
/* WARNING: Removing unreachable block (ram,0x000101098300) */
/* WARNING: Removing unreachable block (ram,0x000101098288) */
/* WARNING: Removing unreachable block (ram,0x000101098260) */
/* WARNING: Removing unreachable block (ram,0x000101098c14) */
/* WARNING: Removing unreachable block (ram,0x000101098274) */
/* WARNING: Removing unreachable block (ram,0x000101098250) */
/* WARNING: Removing unreachable block (ram,0x000101098164) */
/* WARNING: Removing unreachable block (ram,0x000101098144) */
/* WARNING: Removing unreachable block (ram,0x00010109811c) */
/* WARNING: Removing unreachable block (ram,0x0001010980a0) */
/* WARNING: Removing unreachable block (ram,0x000101098070) */
/* WARNING: Removing unreachable block (ram,0x000101098c10) */
/* WARNING: Removing unreachable block (ram,0x00010109808c) */
/* WARNING: Removing unreachable block (ram,0x000101098038) */
/* WARNING: Removing unreachable block (ram,0x000101097fc8) */
/* WARNING: Removing unreachable block (ram,0x000101097fa0) */
/* WARNING: Removing unreachable block (ram,0x000101098c0c) */
/* WARNING: Removing unreachable block (ram,0x000101097fb4) */
/* WARNING: Removing unreachable block (ram,0x000101097f8c) */
/* WARNING: Removing unreachable block (ram,0x000101097f18) */
/* WARNING: Removing unreachable block (ram,0x000101098be0) */

void FUN_101097ea0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101098c0c);
  (*pcVar1)();
}



/* Entry: 101098c30; end: 101098ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101098c30(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d594f0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10109ac30(1);
    FUN_10109a9ec();
    FUN_10109acb0();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d595e8);
    func_0x000107c61174(uVar2);
    func_0x000107c42018();
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101098ca4; end: 101098d3b; -[_TtC15StoryAutoSaving24OnboardingViewController didTapTurnOn] */

void FUN_101098ca4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101098c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101098d3c; end: 101098d63; -[_TtC15StoryAutoSaving24OnboardingViewController didTapMaybeLater] */

void FUN_101098d3c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101098ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101098d64; end: 101098e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101098d64(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112d594d8) = 0x4055000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d594e0) = 0x4030000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d594e8);
  *puVar1 = 0xd000000000000062;
  puVar1[1] = 0x800000010ef23330;
  lVar2 = unaff_x20 + _DAT_112d594f0;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_10109910c();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 101098e54; end: 101098f7f; -[_TtC15StoryAutoSaving24OnboardingViewController initWithNibName:bundle:] */

void FUN_101098e54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_101098d64(param_3,param_2,param_4);
  return;
}



/* Entry: 101098f80; end: 101098fa7; -[_TtC15StoryAutoSaving24OnboardingViewController initWithCoder:] */

void FUN_101098f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000101098eb4();
  return;
}



/* Entry: 101098fa8; end: 101098fd7;  */

void FUN_101098fa8(void)

{
  FUN_10109910c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101098fd8; end: 101099013; -[_TtC15StoryAutoSaving24OnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101098fd8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d594e8 + 8));
  param_1 = param_1 + _DAT_112d594f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101099014; end: 10109910b; -[_TtC15StoryAutoSaving24OnboardingViewController textView:shouldInteractWithURL:inRange:interaction:] */

undefined8
FUN_101099014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  puVar2 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
  func_0x000107c610f8(PTR__OBJC_CLASS___SFSafariViewController_1126d6d00);
  func_0x000107c61174(param_1);
  uVar3 = param_1;
  func_0x000107c5ed90();
  func_0x000107c48fbc(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5677c(puVar2);
  func_0x000107c4f018(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return 0;
}



/* Entry: 10109910c; end: 10109912b;  */

void FUN_10109910c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad7a0);
  return;
}



/* Entry: 10109912c; end: 10109914f;  */

void FUN_10109912c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d59520;
  plVar5 = (long *)&UNK_10d9314f0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001010991ec(0,0x112d59528,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101099150; end: 1010991c7;  */

void FUN_101099150(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001010991ec(0,param_1,param_2);
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



/* Entry: 1010991c8; end: 10109922b;  */

undefined8 FUN_1010991c8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10109922c; end: 101099723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10109922c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,long param_10)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_78;
  long lStack_70;
  
  uVar13 = 0x20;
  func_0x000107c613fc();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112ee9220);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  uVar15 = *(undefined8 *)(param_1 + _DAT_112ee9228);
  func_0x000107c61174();
  func_0x000107c615f0(uVar14);
  func_0x000107c61434(uVar15);
  uVar3 = param_2;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar4 = *(long *)(param_7 + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  uStack_d8 = uVar13;
  if (lVar4 == 0) {
    func_0x000107c5faec();
    uStack_d8 = uVar13;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar13);
  }
  lVar5 = param_5;
  func_0x000107c42498();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 != 0) {
    lVar5 = lVar6;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c4248c();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        lStack_e0 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
        goto LAB_1010993bc;
      }
    }
  }
  lStack_e0 = 0;
  uStack_d8 = 0xe000000000000000;
LAB_1010993bc:
  uVar13 = *(undefined8 *)(param_9 + _DAT_113083868);
  func_0x000107c61174();
  lVar5 = param_10;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c61170(lVar4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101099718);
    (*pcVar2)();
  }
  func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
  uVar7 = param_4;
  func_0x000107c4d80c();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  lVar9 = 0;
  FUN_10109b300();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112d595e8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112d595f0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112d59618) = 0;
  *(undefined **)(lVar10 + _DAT_112d59628) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar10 + _DAT_112d59630) = 5;
  *(undefined8 *)(lVar10 + _DAT_112d59638) = 0x407c200000000000;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112d59640);
  *puVar1 = 0xd000000000000016;
  puVar1[1] = 0x800000010ef233a0;
  lVar6 = lVar10 + _DAT_112d59648;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61614(lVar6,0);
  *(undefined8 *)(lVar10 + _DAT_112d595d8) = uVar14;
  *(undefined8 *)(lVar10 + _DAT_112d59620) = uVar15;
  *(undefined8 *)(lVar10 + _DAT_112d595e0) = uVar3;
  *(undefined8 *)(lVar10 + _DAT_112d59600) = param_8;
  *(undefined8 *)(lVar10 + _DAT_112d59650) = uVar13;
  *(long *)(lVar10 + _DAT_112d59608) = lVar5;
  *(undefined8 *)(lVar10 + _DAT_112d59610) = uVar8;
  func_0x000107c615f0(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar8);
  func_0x000107c61174();
  lVar6 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar6 != 0) {
    puVar11 = PTR_PTR_1126dc810;
    func_0x000107c610f8();
    func_0x000107c61174(param_6);
    func_0x000107c5fadc(lStack_e0,uStack_d8);
    func_0x000107c6142c(uStack_d8);
    func_0x000107c47a8c();
    func_0x000107c61170(param_6);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lStack_e0);
    *(undefined **)(lVar10 + _DAT_112d595f8) = puVar11;
    plVar12 = &lStack_78;
    lStack_78 = lVar10;
    lStack_70 = lVar9;
    func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
    func_0x000107c615e8(uVar14);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_8);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(uVar8);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_10);
    *(long **)(unaff_x20 + 0x10) = plVar12;
    *(undefined ***)((long)plVar12 + _DAT_112d59648 + 8) = &PTR_DAT_11037edf0;
    func_0x000107c61604((long)plVar12 + _DAT_112d59648,unaff_x20);
    return unaff_x20;
  }
  func_0x000107c61170(lVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101099724);
  (*pcVar2)();
}



/* Entry: 101099724; end: 101099833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101099724(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  FUN_101099ff0();
  if ((param_1 & 1) == 0) {
    lVar1 = *(long *)(lVar5 + _DAT_112d59600);
    func_0x000107c4f3e4();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_11037ed98;
      func_0x000107c613fc(&UNK_11037ed98,0x18,7);
      *(long *)(puVar3 + 0x10) = lVar5;
      uStack_40 = 0x101099888;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      pcStack_50 = FUN_101099890;
      puStack_48 = &UNK_11037edb0;
      puStack_38 = puVar3;
      func_0x000107c60bc4(&puStack_60);
      puVar3 = puStack_38;
      func_0x000107c61174(lVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c4c24c(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c60bd0(ppuVar4);
      FUN_10109996c();
      FUN_10109a42c();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 101099834; end: 10109985f;  */

void FUN_101099834(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101099860; end: 10109987f;  */

void FUN_101099860(void)

{
  FUN_101099724();
  return;
}



/* Entry: 101099880; end: 10109988f;  */

undefined8 FUN_101099880(void)

{
  return 0;
}



/* Entry: 101099890; end: 1010998eb;  */

void FUN_101099890(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  func_0x000101099928(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1010998ec; end: 101099907;  */

void FUN_1010998ec(long param_1,long param_2)

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



/* Entry: 101099908; end: 10109996b;  */

void FUN_101099908(void)

{
  func_0x000107c61168(&PTR_PTR_112d59570);
  return;
}



/* Entry: 10109996c; end: 101099d2b;  */

/* WARNING: Possible PIC construction at 0x0001010999f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101099bac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101099b80) */
/* WARNING: Removing unreachable block (ram,0x000101099cb4) */
/* WARNING: Removing unreachable block (ram,0x000101099c78) */
/* WARNING: Removing unreachable block (ram,0x000101099b2c) */
/* WARNING: Removing unreachable block (ram,0x000101099b38) */
/* WARNING: Removing unreachable block (ram,0x000101099ab8) */
/* WARNING: Removing unreachable block (ram,0x000101099c10) */
/* WARNING: Removing unreachable block (ram,0x000101099c18) */
/* WARNING: Removing unreachable block (ram,0x000101099ad8) */
/* WARNING: Removing unreachable block (ram,0x000101099c28) */
/* WARNING: Removing unreachable block (ram,0x000101099ae4) */
/* WARNING: Removing unreachable block (ram,0x000101099af0) */
/* WARNING: Removing unreachable block (ram,0x000101099b3c) */
/* WARNING: Removing unreachable block (ram,0x000101099af4) */
/* WARNING: Removing unreachable block (ram,0x000101099c0c) */
/* WARNING: Removing unreachable block (ram,0x000101099b00) */
/* WARNING: Removing unreachable block (ram,0x000101099b0c) */
/* WARNING: Removing unreachable block (ram,0x000101099c08) */
/* WARNING: Removing unreachable block (ram,0x000101099b18) */
/* WARNING: Removing unreachable block (ram,0x000101099b5c) */
/* WARNING: Removing unreachable block (ram,0x000101099b24) */
/* WARNING: Removing unreachable block (ram,0x000101099a7c) */
/* WARNING: Removing unreachable block (ram,0x000101099a48) */
/* WARNING: Removing unreachable block (ram,0x0001010999f8) */
/* WARNING: Removing unreachable block (ram,0x000101099bb0) */
/* WARNING: Removing unreachable block (ram,0x000101099cec) */
/* WARNING: Removing unreachable block (ram,0x000101099cf4) */
/* WARNING: Removing unreachable block (ram,0x000101099bb8) */
/* WARNING: Removing unreachable block (ram,0x000101099d00) */
/* WARNING: Removing unreachable block (ram,0x000101099c2c) */
/* WARNING: Removing unreachable block (ram,0x000101099bc4) */
/* WARNING: Removing unreachable block (ram,0x000101099d08) */
/* WARNING: Removing unreachable block (ram,0x000101099bcc) */
/* WARNING: Removing unreachable block (ram,0x000101099d28) */
/* WARNING: Removing unreachable block (ram,0x000101099bd8) */
/* WARNING: Removing unreachable block (ram,0x000101099be0) */
/* WARNING: Removing unreachable block (ram,0x000101099c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109996c(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = 0;
  FUN_10109910c();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined ***)(lVar1 + _DAT_112d594f0 + 8) = &PTR_DAT_11037ee10;
  func_0x000107c61604();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d595f0);
  *(long *)(unaff_x20 + _DAT_112d595f0) = lVar1;
  func_0x000107c61174(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101099d2c; end: 101099fef;  */

undefined * FUN_101099d2c(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_10109bac8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_101099fac:
        puStack_58 = (undefined *)0x0;
LAB_101099fb0:
        FUN_10109bac0(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_10109bac8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101099ff0);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_101099fac;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_101099fb0;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_10109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 101099ff0; end: 10109a32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101099ff0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112d595e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    uVar13 = 1;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112d59608);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x000107c3ee44();
      func_0x000107c61180();
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar6;
        func_0x000107c5faec();
        func_0x000107c61170(puVar6);
        uStack_88 = 0x2c;
        uStack_80 = 0xe100000000000000;
        puStack_78 = puVar7;
        uStack_70 = param_2;
        FUN_100e8b654();
        puVar8 = &uStack_88;
        func_0x000107c601dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar6,puVar6);
        func_0x000107c6142c(param_2);
        uVar16 = 0;
        uVar17 = puVar8[2];
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          puVar11 = puVar8 + uVar16 * 2 + 5;
          do {
            if (uVar17 == uVar16) {
              func_0x000107c6142c(puVar8);
              if (*(long *)(puVar6 + 0x10) == 0) {
                func_0x000107c61574(puVar6);
              }
              else {
                FUN_10109a32c(puVar6);
              }
              goto LAB_10109a1d8;
            }
            if ((ulong)puVar8[2] <= uVar16) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10109a32c);
              (*pcVar3)();
            }
            uVar1 = puVar11[-1];
            uVar2 = *puVar11;
            puVar11 = puVar11 + 2;
            uVar16 = uVar16 + 1;
            uVar10 = uVar1 & 0xffffffffffff;
            if ((uVar2 & 0x2000000000000000) != 0) {
              uVar10 = uVar2 >> 0x38 & 0xf;
            }
          } while (uVar10 == 0);
          func_0x000107c61434(uVar2);
          puVar7 = puVar6;
          func_0x000107c61558();
          puStack_78 = puVar6;
          if (((ulong)puVar7 & 1) == 0) {
            func_0x000100403514(0,*(long *)(puVar6 + 0x10) + 1,1);
          }
          uVar10 = *(ulong *)(puStack_78 + 0x10);
          if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar10) {
            func_0x000100403514(1 < *(ulong *)(puStack_78 + 0x18),uVar10 + 1,1);
          }
          *(ulong *)(puStack_78 + 0x10) = uVar10 + 1;
          *(ulong *)(puStack_78 + uVar10 * 0x10 + 0x20) = uVar1;
          *(ulong *)(puStack_78 + uVar10 * 0x10 + 0x28) = uVar2;
          puVar6 = puStack_78;
        } while( true );
      }
LAB_10109a1d8:
      func_0x000107c61170(puVar5);
    }
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d59640);
    func_0x000107c5fadc(uVar13,((undefined8 *)(unaff_x20 + _DAT_112d59640))[1]);
    puVar5 = puVar4;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    if (puVar5 != (undefined *)0x0) {
      uVar13 = 0x112d373e8;
      puStack_78 = puVar5;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      uVar9 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      puVar8 = &uStack_88;
      func_0x000107c6147c(puVar8,&puStack_78,uVar13,uVar9,6);
      if (((ulong)puVar8 & 1) != 0) {
        FUN_10109a32c(uStack_88);
      }
    }
    puVar5 = puStack_68;
    lVar12 = *(long *)(unaff_x20 + _DAT_112d59620);
    lVar14 = *(long *)(lVar12 + 0x10);
    if (lVar14 != 0) {
      lVar15 = 0;
      puVar11 = (ulong *)(puStack_68 + 0x28);
      do {
        puVar19 = (ulong *)(lVar12 + 0x20 + lVar15 * 0x10);
        uVar16 = *puVar19;
        uVar17 = puVar19[1];
        lVar15 = lVar15 + 1;
        lVar18 = *(long *)(puVar5 + 0x10) + 1;
        puVar19 = puVar11;
        do {
          lVar18 = lVar18 + -1;
          if (lVar18 == 0) {
            uVar13 = 0;
            goto LAB_10109a2f4;
          }
          uVar10 = puVar19[-1];
          uVar1 = *puVar19;
          if (uVar10 == uVar16 && uVar1 == uVar17) break;
          puVar19 = puVar19 + 2;
          func_0x000107c605b8(uVar10,uVar1,uVar16,uVar17,0);
        } while ((uVar10 & 1) == 0);
      } while (lVar15 != lVar14);
    }
    uVar13 = 1;
LAB_10109a2f4:
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(puVar5);
  }
  return uVar13;
}



/* Entry: 10109a32c; end: 10109a42b;  */

void FUN_10109a32c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10109a420);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    func_0x00010109b660();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10109a424);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10109a428);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
                        PTR___sSSN_11034da80);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10109a42c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10109a42c; end: 10109a9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109a42c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  ulong *puVar18;
  long unaff_x20;
  long lVar19;
  undefined **ppuVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112d595e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  lVar19 = *(long *)(unaff_x20 + _DAT_112d59620);
  lVar4 = lVar19;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(lVar19);
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112d59608);
  lStack_68 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar10 = puVar5;
    func_0x000107c3ee44();
    func_0x000107c61180();
    if (puVar10 != (undefined *)0x0) {
      puVar6 = puVar10;
      func_0x000107c5faec();
      func_0x000107c61170(puVar10);
      uStack_a0 = 0x2c;
      uStack_98 = 0xe100000000000000;
      puStack_90 = puVar6;
      uStack_88 = param_2;
      FUN_100e8b654();
      puVar7 = &uStack_a0;
      func_0x000107c601dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar10,puVar10);
      func_0x000107c6142c(param_2);
      uVar21 = 0;
      uVar23 = puVar7[2];
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        puVar18 = puVar7 + uVar21 * 2 + 5;
        do {
          if (uVar23 == uVar21) {
            func_0x000107c6142c(puVar7);
            puVar6 = PTR__swift_bridgeObjectRelease_11034f258;
            uVar21 = *(ulong *)(lVar19 + 0x10);
            puStack_90 = puVar10;
            if (uVar21 == 0) goto LAB_10109a7a0;
            uVar23 = 0;
            plVar24 = (long *)(lVar19 + 0x28);
            goto LAB_10109a634;
          }
          if ((ulong)puVar7[2] <= uVar21) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10109a9e8);
            (*pcVar2)();
          }
          uVar1 = puVar18[-1];
          uVar8 = *puVar18;
          puVar18 = puVar18 + 2;
          uVar21 = uVar21 + 1;
          uVar22 = uVar1 & 0xffffffffffff;
          if ((uVar8 & 0x2000000000000000) != 0) {
            uVar22 = uVar8 >> 0x38 & 0xf;
          }
        } while (uVar22 == 0);
        func_0x000107c61434(uVar8);
        puVar6 = puVar10;
        func_0x000107c61558();
        puStack_90 = puVar10;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
        }
        uVar22 = *(ulong *)(puStack_90 + 0x10);
        if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar22) {
          func_0x000100403514(1 < *(ulong *)(puStack_90 + 0x18),uVar22 + 1,1);
        }
        *(ulong *)(puStack_90 + 0x10) = uVar22 + 1;
        *(ulong *)(puStack_90 + uVar22 * 0x10 + 0x20) = uVar1;
        *(ulong *)(puStack_90 + uVar22 * 0x10 + 0x28) = uVar8;
        puVar10 = puStack_90;
      } while( true );
    }
    func_0x000107c61170(puVar5);
  }
  goto LAB_10109a820;
LAB_10109a634:
  do {
    if (*(ulong *)(lVar19 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10109a9ec);
      (*pcVar2)();
    }
    uVar22 = *(ulong *)(puVar10 + 0x10);
    if (uVar22 < 5) {
      uVar1 = plVar24[-1];
      lVar4 = *plVar24;
      if (uVar22 == 0) {
LAB_10109a680:
        func_0x000107c61434(lVar4);
        puVar9 = puVar10;
        func_0x000107c61558();
        puVar11 = puVar10;
        if (((ulong)puVar9 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          func_0x00010109b660(0,uVar22 + 1,1,puVar10,puVar6);
        }
        uVar22 = *(ulong *)(puVar11 + 0x10);
        puVar10 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar22) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          func_0x00010109b660(puVar10,uVar22 + 1,1,puVar11,puVar6);
        }
        *(ulong *)(puVar10 + 0x10) = uVar22 + 1;
        *(ulong *)(puVar10 + uVar22 * 0x10 + 0x20) = uVar1;
        *(long *)(puVar10 + uVar22 * 0x10 + 0x28) = lVar4;
        puStack_90 = puVar10;
      }
      else {
        uVar8 = *(ulong *)(puVar10 + 0x20);
        if ((uVar8 != uVar1 || *(long *)(puVar10 + 0x28) != lVar4) &&
           (func_0x000107c605b8(uVar8,*(long *)(puVar10 + 0x28),uVar1,lVar4,0), (uVar8 & 1) == 0)) {
          if (uVar22 == 1) goto LAB_10109a680;
          uVar8 = *(ulong *)(puVar10 + 0x30);
          if (((uVar8 != uVar1) || (*(long *)(puVar10 + 0x38) != lVar4)) &&
             (func_0x000107c605b8(uVar8,*(long *)(puVar10 + 0x38),uVar1,lVar4,0), (uVar8 & 1) == 0))
          {
            if (uVar22 == 2) goto LAB_10109a680;
            uVar8 = *(ulong *)(puVar10 + 0x40);
            if (((uVar8 != uVar1) || (*(long *)(puVar10 + 0x48) != lVar4)) &&
               (func_0x000107c605b8(uVar8,*(long *)(puVar10 + 0x48),uVar1,lVar4,0), (uVar8 & 1) == 0
               )) {
              if (uVar22 == 3) goto LAB_10109a680;
              uVar8 = *(ulong *)(puVar10 + 0x50);
              if (((uVar8 != uVar1) || (*(long *)(puVar10 + 0x58) != lVar4)) &&
                 (func_0x000107c605b8(uVar8,*(long *)(puVar10 + 0x58),uVar1,lVar4,0),
                 (uVar8 & 1) == 0)) {
                if (uVar22 == 4) goto LAB_10109a680;
                if ((*(ulong *)(puVar10 + 0x60) != uVar1) || (*(long *)(puVar10 + 0x68) != lVar4)) {
                  func_0x000107c605b8(*(ulong *)(puVar10 + 0x60),*(long *)(puVar10 + 0x68),uVar1,
                                      lVar4,0);
                }
              }
            }
          }
        }
      }
    }
    uVar23 = uVar23 + 1;
    plVar24 = plVar24 + 2;
  } while (uVar21 != uVar23);
LAB_10109a7a0:
  uVar12 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar13 = uVar12;
  func_0x00010011d734();
  uVar14 = 0x2c;
  uVar17 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar12,uVar13);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar17);
  func_0x000107c52e80(puVar5);
  func_0x000107c6142c(puVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar5);
LAB_10109a820:
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d59640);
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_112d59640))[1];
  uVar14 = uVar12;
  func_0x000107c5fadc(uVar12,uVar13);
  puVar5 = puVar3;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  if (puVar5 != (undefined *)0x0) {
    uVar14 = 0x112d373e8;
    puStack_90 = puVar5;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    uVar17 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    puVar7 = &uStack_a0;
    func_0x000107c6147c(puVar7,&puStack_90,uVar14,uVar17,6);
    uVar14 = uStack_a0;
    if (((ulong)puVar7 & 1) != 0) {
      func_0x00010040448c(uStack_a0);
      func_0x000107c6142c(uVar14);
    }
  }
  lVar4 = lStack_68;
  ppuVar20 = *(undefined ***)(lStack_68 + 0x10);
  ppuVar15 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar20 != (undefined **)0x0) {
    func_0x000107c61434(lStack_68);
    ppuVar15 = ppuVar20;
    FUN_10109b448(ppuVar20,0);
    ppuVar16 = &puStack_90;
    FUN_10109b930(ppuVar16,ppuVar15 + 4,ppuVar20,lVar4);
    FUN_10109bac0(puStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    if (ppuVar16 != ppuVar20) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10109a920);
      (*pcVar2)();
    }
  }
  ppuVar20 = ppuVar15;
  FUN_10102c3b8(ppuVar15);
  func_0x000107c61574(ppuVar15);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  ppuVar15 = ppuVar20;
  func_0x000107c5fc48(ppuVar20,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(ppuVar20);
  func_0x000107c45788(puVar5);
  func_0x000107c61170(ppuVar15);
  func_0x000107c5fadc(uVar12,uVar13);
  func_0x000107c56bcc(puVar3);
  func_0x000107c6142c(lVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 10109a9ec; end: 10109abb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109a9ec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar10 = _DAT_112d59628;
  func_0x000107c61428(unaff_x20 + _DAT_112d59628,auStack_88,0,0);
  lVar2 = _DAT_112d595f8;
  lVar9 = *(long *)(unaff_x20 + lVar10);
  lVar10 = *(long *)(lVar9 + 0x10);
  if (lVar10 != 0) {
    FUN_10109bac8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c61434(lVar9);
    puVar11 = (undefined8 *)(lVar9 + 0x28);
    do {
      uVar4 = puVar11[-1];
      uVar1 = *puVar11;
      puVar3 = PTR_PTR_1126a6348;
      func_0x000107c610f8(PTR_PTR_1126a6348);
      func_0x000107c61434(uVar1);
      func_0x000107c453e4(puVar3);
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c578cc(puVar3);
      func_0x000107c61170(uVar4);
      puVar5 = PTR_PTR_1126c0308;
      func_0x000107c610f8(PTR_PTR_1126c0308);
      func_0x000107c453e4();
      func_0x000107c5a494();
      puVar6 = puVar3;
      func_0x000107c52a74(puVar3);
      func_0x000107c5ffdc();
      pcStack_98 = FUN_10109abb4;
      uStack_90 = 0;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_10109abb8;
      puStack_a0 = &UNK_11037eea0;
      ppuVar7 = &puStack_b8;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c5d414(uVar8);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      puVar11 = puVar11 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000107c6142c(lVar9);
  }
  return;
}



/* Entry: 10109abb4; end: 10109abb7;  */

void FUN_10109abb4(void)

{
  return;
}



/* Entry: 10109abb8; end: 10109ac2f;  */

/* WARNING: Possible PIC construction at 0x00010109ac14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010109ac18) */

void FUN_10109abb8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10109ac30; end: 10109acaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109ac30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e29e0;
  func_0x000107c610f8(PTR_PTR_1126e29e0);
  func_0x000107c453e4();
  func_0x000107c52a78();
  func_0x000107c59558(puVar1,param_2,0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d59650);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10109acb0; end: 10109af47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109acb0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR_PTR_1126c3378;
  func_0x000107c61168(PTR_PTR_1126c3378);
  puVar3 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  uVar10 = 0x800000010ef23310;
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef23310);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c451b0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c4a978(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126b0ae0;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x00010109bf30();
  uVar4 = uVar10;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar10);
  func_0x00010109c000();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10109af48;
  uStack_78 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11037ee28;
  ppuVar7 = &puStack_a0;
  func_0x000107c60bc4(ppuVar7);
  pcStack_80 = (code *)0x10109af4c;
  uStack_78 = 0;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11037ee50;
  ppuVar8 = &puStack_a0;
  func_0x000107c60bc4();
  pcStack_80 = (code *)0x10109af50;
  uStack_78 = 0;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11037ee78;
  ppuVar9 = &puStack_a0;
  func_0x000107c60bc4();
  func_0x000107c40b00();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  lVar1 = _DAT_112d59618;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d59618);
  *(undefined **)(unaff_x20 + _DAT_112d59618) = puVar5;
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(&puStack_a0);
  puVar3 = puStack_a0;
  if (puStack_a0 != (undefined *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c5c2e0(puVar3);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10109af48; end: 10109af53;  */

void FUN_10109af48(void)

{
  return;
}



/* Entry: 10109af54; end: 10109b1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109af54(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [24];
  
  puVar7 = param_2;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    lVar2 = _DAT_112d59628;
  }
  else {
    puVar11 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_1) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
    lVar2 = _DAT_112d59628;
  }
  _DAT_112d59628 = lVar2;
  if (puVar11 != (undefined1 *)0x0) {
    if ((long)puVar11 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10109b1a8);
      (*pcVar3)();
    }
    puVar12 = (undefined1 *)0x0;
    uVar14 = *(undefined8 *)(param_2 + _DAT_112d59620);
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        puVar4 = *(undefined1 **)(param_1 + (long)puVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar12;
        puVar7 = param_1;
        FUN_10109b774(puVar12,param_1,&PTR_PTR_1126d4dd8,0x112d4c900);
      }
      puVar5 = puVar4;
      func_0x000107c3f460();
      if (((ulong)puVar5 & 1) != 0) {
        puVar5 = puVar4;
        func_0x000107c4f348();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c4f38c();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        puVar5 = puVar6;
        func_0x000107c5faec();
        func_0x000107c61170(puVar6);
        puVar6 = puVar7;
        func_0x000100077018(puVar5,puVar7,uVar14);
        func_0x000107c6142c(puVar7);
        puVar7 = puVar6;
        if (((ulong)puVar5 & 1) != 0) {
          puVar7 = puVar4;
          func_0x000107c4f348();
          func_0x000107c61180();
          puVar5 = puVar7;
          func_0x000107c4f38c();
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          puVar8 = puVar5;
          func_0x000107c5faec();
          func_0x000107c61170(puVar5);
          puVar7 = auStack_78;
          func_0x000107c61428(param_2 + lVar2,puVar7,0x21,0);
          uVar13 = *(ulong *)(param_2 + lVar2);
          uVar9 = uVar13;
          func_0x000107c61558();
          *(ulong *)(param_2 + lVar2) = uVar13;
          uVar10 = uVar13;
          if ((uVar9 & 1) == 0) {
            puVar7 = (undefined1 *)(*(long *)(uVar13 + 0x10) + 1);
            uVar10 = 0;
            func_0x00010109b660(0,puVar7,1,uVar13,PTR__swift_bridgeObjectRelease_11034f258);
            *(ulong *)(param_2 + lVar2) = uVar10;
          }
          uVar9 = *(ulong *)(uVar10 + 0x10);
          puVar5 = (undefined1 *)(uVar9 + 1);
          uVar13 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
            uVar13 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            puVar7 = puVar5;
            func_0x00010109b660(uVar13,puVar5,1,uVar10,PTR__swift_bridgeObjectRelease_11034f258);
          }
          *(undefined1 **)(uVar13 + 0x10) = puVar5;
          lVar1 = uVar13 + uVar9 * 0x10;
          *(undefined1 **)(lVar1 + 0x20) = puVar8;
          *(undefined1 **)(lVar1 + 0x28) = puVar6;
          *(ulong *)(param_2 + lVar2) = uVar13;
          func_0x000107c614a8(auStack_78);
        }
      }
      puVar12 = puVar12 + 1;
      func_0x000107c61170(puVar4);
    } while (puVar11 != puVar12);
  }
  return;
}



/* Entry: 10109b1a8; end: 10109b203; -[_TtC15StoryAutoSaving23StoryAutoSavingWorkflow init] */

void FUN_10109b1a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryAutoSaving.StoryAutoSavingWorkflow",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10109b1d4);
  (*pcVar1)();
}



/* Entry: 10109b204; end: 10109b2ff; -[_TtC15StoryAutoSaving23StoryAutoSavingWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010109b230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109b250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109b270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010109b2a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010109b274) */
/* WARNING: Removing unreachable block (ram,0x00010109b254) */
/* WARNING: Removing unreachable block (ram,0x00010109b234) */
/* WARNING: Removing unreachable block (ram,0x00010109b2a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109b204(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d595d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d595e0));
  return;
}



/* Entry: 10109b300; end: 10109b31f;  */

void FUN_10109b300(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad8a8);
  return;
}



/* Entry: 10109b320; end: 10109b447;  */

ulong FUN_10109b320(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10109b448);
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
  func_0x00010109b4c8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10109b444);
      (*pcVar1)();
    }
    FUN_10109b548(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10109b448; end: 10109b547;  */

undefined * FUN_10109b448(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Entry: 10109b548; end: 10109b773;  */

long FUN_10109b548(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10109b65c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10109b660);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10109bac8(0,0x112d59528,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
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
      FUN_10109bac8(0,0x112d59528,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10109b658);
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



/* Entry: 10109b774; end: 10109b92f;  */

ulong FUN_10109b774(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10109b858);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10109b85c);
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
  FUN_10109bac8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10109b930);
  (*pcVar2)();
}



/* Entry: 10109b930; end: 10109ba7f;  */

long FUN_10109b930(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x38);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10109ba80);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10109ba7c);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_10109ba40;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_10109ba40:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 10109ba80; end: 10109ba9b;  */

void FUN_10109ba80(long param_1,long param_2)

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



/* Entry: 10109ba9c; end: 10109babf;  */

undefined8 FUN_10109ba9c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10109bac0; end: 10109bac7;  */

void FUN_10109bac0(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10109bac8; end: 10109bb07;  */

void FUN_10109bac8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10109bb08; end: 10109bb1f;  */

void FUN_10109bb08(long param_1,long param_2)

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



/* Entry: 10109bb20; end: 10109c0cf;  */

undefined1  [16] FUN_10109bb20(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef234c0);
  uVar3 = 0x74754179726f7453;
  func_0x000107c5fadc(0x74754179726f7453,0xef676e697661536f);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10109bbf0);
  (*pcVar1)();
}



/* Entry: 10109c0d0; end: 10109c0db; -[SCStoryAutoSavingEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109c0d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59680;
  func_0x000107c61428(param_1 + _DAT_112d59680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10109c0dc; end: 10109c0e7; -[SCStoryAutoSavingEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109c0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59680;
  func_0x000107c61428(param_1 + _DAT_112d59680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10109c0e8; end: 10109c0f3; -[SCStoryAutoSavingEntryPoint userStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109c0e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59688;
  func_0x000107c61428(param_1 + _DAT_112d59688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


