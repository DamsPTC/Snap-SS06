/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101142104; end: 101142193;  */

void FUN_101142104(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101142194; end: 10114228b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101142194(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112d5fa30;
  ppuVar4 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112d5fa30) != 0) {
    func_0x000107c498f8();
  }
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar3 = &UNK_110388218;
  func_0x000107c613fc(&UNK_110388218,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  uStack_50 = 0x101142dcc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100fef460;
  puStack_58 = &UNK_110388230;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c51924(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10114228c; end: 10114241f;  */

/* WARNING: Possible PIC construction at 0x00010114238c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011423f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101142390) */
/* WARNING: Removing unreachable block (ram,0x0001011423f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114228c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d5fa48);
  func_0x000107c5c42c();
  func_0x000107c61180();
  lVar2 = _DAT_112d5fa30;
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d5fa50);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)0x0;
      puVar7 = (undefined *)puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      puVar7 = (undefined *)puVar1[1];
      func_0x000107c6157c(puVar7);
      (*pcVar6)();
    }
    if (pcVar6 == (code *)0x0) {
      return;
    }
  }
  else {
    uVar4 = 0;
    if (*(long *)(unaff_x20 + _DAT_112d5fa30) != 0) {
      func_0x000107c498f8();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar4);
    func_0x0001000c10c0("dismissAnimation()");
    func_0x000107c61180();
    puVar7 = &UNK_110388100;
    func_0x000107c613fc(&UNK_110388100,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar5 = &UNK_110388128;
    func_0x000107c613fc(&UNK_110388128,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar7;
    *(long *)(puVar5 + 0x18) = lVar3;
    pcStack_40 = FUN_101142d88;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110388140;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar7 = puStack_38;
    func_0x000107c61174(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 101142420; end: 10114242f; -[_TtC32MapFriendFocusViewImplementation29ReactionNotificationPresenter containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101142420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d5fa48));
  return;
}



/* Entry: 101142430; end: 1011428ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101142430(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  *(undefined1 *)(unaff_x20 + _DAT_112d5fa58) = 1;
  lVar13 = *(long *)(unaff_x20 + _DAT_112d5fa48);
  func_0x000107c3d89c(param_2,param_3,lVar13);
  lVar3 = lVar13;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c5cbe4(param_2);
  func_0x000107c61180();
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c517d4();
  lVar4 = lVar3;
  func_0x000107c40284(param_1 + 16.0);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar5);
  lVar3 = _DAT_112d5fa38;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5fa38);
  *(long *)(unaff_x20 + _DAT_112d5fa38) = lVar4;
  func_0x000107c61170(uVar5);
  lVar4 = lVar13;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c5cbe4(param_2);
  func_0x000107c61180();
  lVar6 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5fa40);
  *(long *)(unaff_x20 + _DAT_112d5fa40) = lVar6;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  if (lVar6 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar8 = puVar7;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar8 + 0x18) = 9;
    *(undefined8 *)(puVar8 + 0x10) = 4;
    lVar4 = lVar13;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar5 = param_2;
    func_0x000107c4acb0(param_2);
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    *(long *)(puVar8 + 0x20) = lVar9;
    lVar4 = lVar13;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar5 = param_2;
    func_0x000107c5ce8c(param_2);
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    *(long *)(puVar8 + 0x28) = lVar9;
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar4 = lVar13;
    func_0x000107c402a0(0);
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    *(long *)(puVar8 + 0x30) = lVar4;
    *(long *)(puVar8 + 0x38) = lVar6;
    uVar5 = 0;
    func_0x000100847984(0);
    func_0x000107c61174(lVar6);
    puVar10 = puVar8;
    func_0x000107c5fc48(puVar8,uVar5);
    func_0x000107c61574(puVar8);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c4abfc(param_2);
    func_0x000107c521e8(lVar6);
    if (*(long *)(unaff_x20 + lVar3) != 0) {
      func_0x000107c521e8();
    }
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_110388038;
    func_0x000107c613fc(&UNK_110388038,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = param_2;
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x101142d44;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_110388050;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_78;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar7);
    pcStack_80 = FUN_101142900;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar8;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_100288f10;
    puStack_88 = &UNK_110388078;
    ppuVar12 = &puStack_a0;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar10);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d5fa50);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000100b64c10();
    func_0x00010058d43c(uVar5,uVar2);
    puVar10 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    puVar7 = &UNK_1103880b0;
    func_0x000107c613fc(&UNK_1103880b0,0x18,7);
    *(long *)(puVar7 + 0x10) = unaff_x20;
    pcStack_80 = FUN_101142d68;
    puStack_a0 = puVar8;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100fef460;
    puStack_88 = &UNK_1103880c8;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    func_0x000107c51924(0x4015333333333333);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c60bd0(ppuVar11);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5fa30);
    *(undefined **)(unaff_x20 + _DAT_112d5fa30) = puVar10;
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 101142900; end: 101142903;  */

void FUN_101142900(void)

{
  return;
}



/* Entry: 101142904; end: 1011429af; -[_TtC32MapFriendFocusViewImplementation29ReactionNotificationPresenter presentNotificationOverView:completion:] */

/* WARNING: Possible PIC construction at 0x000101142994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101142998) */

void FUN_101142904(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_110388010;
    func_0x000107c613fc(&UNK_110388010,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_101142d38;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101142430(param_3,pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011429b0; end: 101142b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011429b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112d5fa38) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(param_1 + _DAT_112d5fa40) != 0) {
      func_0x000107c521e8();
    }
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_110388178;
    func_0x000107c613fc(&UNK_110388178,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x101142dbc;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110388190;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1103881c8;
    func_0x000107c613fc(&UNK_1103881c8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    uStack_78 = 0x101142d90;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100288f10;
    puStack_80 = &UNK_1103881e0;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_70;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101142b60; end: 101142bf7;  */

/* WARNING: Possible PIC construction at 0x000101142bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101142bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101142b60(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x000107c4ff34(*(undefined8 *)(param_2 + _DAT_112d5fa48));
  (**(code **)(param_2 + _DAT_112d5fa20))();
  *(undefined1 *)(param_2 + _DAT_112d5fa58) = 0;
  puVar1 = (undefined8 *)(param_2 + _DAT_112d5fa50);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)0x0;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
  }
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 101142bf8; end: 101142c23; -[_TtC32MapFriendFocusViewImplementation29ReactionNotificationPresenter debugInfo] */

void FUN_101142bf8(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef27c20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101142c24; end: 101142c83; -[_TtC32MapFriendFocusViewImplementation29ReactionNotificationPresenter init] */

void FUN_101142c24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendFocusViewImplementation.ReactionNotificationPresenter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101142c50);
  (*pcVar1)();
}



/* Entry: 101142c84; end: 101142d17; -[_TtC32MapFriendFocusViewImplementation29ReactionNotificationPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101142c84(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5fa20 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fa30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fa38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fa40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fa48));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d5fa50),
                      ((undefined8 *)(param_1 + _DAT_112d5fa50))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d5fa60 + 8))
  ;
  return;
}



/* Entry: 101142d18; end: 101142d37;  */

void FUN_101142d18(void)

{
  func_0x000107c61168(&PTR_PTR_1127b0e70);
  return;
}



/* Entry: 101142d38; end: 101142d67;  */

void FUN_101142d38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101142d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101142d68; end: 101142d87;  */

void FUN_101142d68(void)

{
  FUN_10114228c();
  return;
}



/* Entry: 101142d88; end: 101142dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101142d88(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + _DAT_112d5fa38) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(lVar3 + _DAT_112d5fa40) != 0) {
      func_0x000107c521e8();
    }
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_110388178;
    func_0x000107c613fc(&UNK_110388178,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x101142dbc;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110388190;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_70;
    func_0x000107c61174(uVar1);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1103881c8;
    func_0x000107c613fc(&UNK_1103881c8,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    uStack_78 = 0x101142d90;
    puStack_98 = puVar2;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100288f10;
    puStack_80 = &UNK_1103881e0;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_70;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101142dd0; end: 101142ff3;  */

undefined8 FUN_101142dd0(undefined8 param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  long lVar12;
  undefined8 ***pppuStack_78;
  
  if (param_2 != 0) {
    func_0x000107c4f4f0();
    func_0x000107c61180();
    if (param_2 != 0) {
      pppuStack_78 = (undefined8 ****)0x0;
      uVar4 = 0;
      FUN_1011434e4(0);
      ppppuVar7 = &pppuStack_78;
      func_0x000107c5fc50(param_2,ppppuVar7,uVar4);
      func_0x000107c61170(param_2);
      pppuVar2 = pppuStack_78;
      if ((undefined8 ****)pppuStack_78 != (undefined8 ****)0x0) {
        ppppuVar10 = (undefined8 ****)((ulong)pppuStack_78 & 0xffffffffffffff8);
        if ((ulong)pppuStack_78 >> 0x3e == 0) {
          ppppuVar9 = (undefined8 ****)ppppuVar10[2];
        }
        else {
          ppppuVar9 = (undefined8 ****)pppuStack_78;
          if (-1 < (long)pppuStack_78) {
            ppppuVar9 = ppppuVar10;
          }
          func_0x000107c60480();
        }
        if (ppppuVar9 != (undefined8 ****)0x0) {
          lVar12 = 4;
          do {
            pppuVar11 = (undefined8 ***)(lVar12 + -4);
            if (((ulong)pppuVar2 & 0xc000000000000001) == 0) {
              if (ppppuVar10[2] <= pppuVar11) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101142fa8);
                (*pcVar3)();
              }
              pppuVar5 = (undefined8 ***)pppuVar2[lVar12];
              func_0x000107c61174();
              ppppuVar8 = ppppuVar7;
            }
            else {
              pppuVar5 = pppuVar11;
              ppppuVar8 = (undefined8 ****)pppuVar2;
              func_0x00010111c554();
            }
            ppppuVar1 = (undefined8 ****)(lVar12 + -3);
            if (SCARRY8((long)pppuVar11,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101142fa4);
              (*pcVar3)();
            }
            pppuVar11 = pppuVar5;
            func_0x000107c4a8c4();
            func_0x000107c61180();
            ppppuVar7 = ppppuVar8;
            if (pppuVar11 != (undefined8 ***)0x0) {
              pppuVar6 = pppuVar11;
              func_0x000107c5faec();
              ppppuVar7 = ppppuVar8;
              func_0x000107c61170(pppuVar11);
              if ((pppuVar6 == (undefined8 ***)0x6e6f6973726576) &&
                 (ppppuVar8 == (undefined8 ****)0xe700000000000000)) {
                func_0x000107c6142c(0xe700000000000000);
              }
              else {
                ppppuVar7 = ppppuVar8;
                func_0x000107c605b8(pppuVar6,ppppuVar8,0x6e6f6973726576,0xe700000000000000,0);
                func_0x000107c6142c(ppppuVar8);
                if (((ulong)pppuVar6 & 1) == 0) goto LAB_101142e6c;
              }
              pppuVar11 = pppuVar5;
              func_0x000107c5d108();
              func_0x000107c61180();
              if (pppuVar11 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101142ff0);
                (*pcVar3)();
              }
              pppuVar6 = pppuVar11;
              func_0x000107c5dc3c();
              func_0x000107c61170(pppuVar11);
              if ((int)pppuVar6 == 5) {
                pppuVar11 = pppuVar5;
                func_0x000107c5d108();
                func_0x000107c61180();
                if (pppuVar11 != (undefined8 ***)0x0) {
                  func_0x000107c4223c();
                  func_0x000107c6142c(pppuVar2);
                  func_0x000107c61170(pppuVar11);
                  func_0x000107c61170(pppuVar5);
                  return param_1;
                }
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101142ff4);
                (*pcVar3)();
              }
            }
LAB_101142e6c:
            func_0x000107c61170(pppuVar5);
            lVar12 = lVar12 + 1;
          } while (ppppuVar1 != ppppuVar9);
        }
        func_0x000107c6142c(pppuVar2);
      }
    }
  }
  return 0;
}



/* Entry: 101142ff4; end: 1011434e3;  */

ulong FUN_101142ff4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_70;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar9 == 0) {
    return 0;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uVar10 = 0;
LAB_101143068:
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
LAB_1011434b4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011434b8);
      (*pcVar1)();
    }
    uVar6 = *(ulong *)(param_1 + 0x20 + uVar10 * 8);
    func_0x000107c61174();
    uVar8 = param_2;
  }
  else {
    uVar6 = uVar10;
    uVar8 = param_1;
    func_0x00010111c554();
  }
  uVar11 = uVar10 + 1;
  if (SCARRY8(uVar10,1)) {
LAB_1011434b0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011434b4);
    (*pcVar1)();
  }
  uVar2 = uVar6;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (uVar2 == 0) {
LAB_101143054:
    func_0x000107c61170(uVar6);
    param_2 = uVar8;
    goto LAB_10114305c;
  }
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar7 = uVar8;
  func_0x000107c61170(uVar2);
  uVar2 = uVar8;
  if ((uVar3 != 0x656d616e) || (uVar8 != 0xe400000000000000)) {
    uVar4 = 0;
    uVar7 = 0xe400000000000000;
    func_0x000107c605b8(0x656d616e,0xe400000000000000,uVar3,uVar8,0);
    if ((uVar4 & 1) != 0) goto LAB_10114310c;
LAB_1011432fc:
    if ((uVar3 == 0x72752d6567616d69) && (uVar2 == 0xe90000000000006c)) {
      func_0x000107c6142c(0xe90000000000006c);
      uVar8 = uVar7;
    }
    else {
      uVar10 = 0x72752d6567616d69;
      uVar8 = 0xe90000000000006c;
      func_0x000107c605b8(0x72752d6567616d69,0xe90000000000006c,uVar3,uVar2,0);
      func_0x000107c6142c(uVar2);
      if ((uVar10 & 1) == 0) goto LAB_101143054;
    }
    uVar10 = uVar6;
    func_0x000107c5d108();
    func_0x000107c61180();
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011434e0);
      (*pcVar1)();
    }
    uVar2 = uVar10;
    func_0x000107c5dc3c();
    func_0x000107c61170(uVar10);
    if ((int)uVar2 != 2) goto LAB_101143054;
    uVar10 = uVar6;
    func_0x000107c5d108();
    func_0x000107c61180();
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011434e4);
      (*pcVar1)();
    }
    uVar2 = uVar10;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar2 == 0) {
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uStack_80);
      uStack_90 = 0;
      uStack_80 = 0;
      param_2 = uVar8;
    }
    else {
      uStack_90 = uVar2;
      func_0x000107c5faec();
      param_2 = uVar8;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uStack_80);
      uStack_80 = uVar8;
    }
    goto LAB_10114305c;
  }
LAB_10114310c:
  uVar4 = uVar6;
  func_0x000107c5d108();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_1011434d4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011434d8);
    (*pcVar1)();
  }
  uVar5 = uVar4;
  func_0x000107c5dc3c();
  func_0x000107c61170(uVar4);
  if ((int)uVar5 != 2) goto LAB_1011432fc;
  func_0x000107c6142c(uVar8);
  uVar8 = uVar6;
  func_0x000107c5d108();
  func_0x000107c61180();
  if (uVar8 == 0) {
LAB_1011434d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011434dc);
    (*pcVar1)();
  }
  uVar2 = uVar8;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (uVar2 != 0) goto LAB_101143178;
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uStack_70);
  uVar4 = uStack_80;
  if (uVar11 != uVar9) {
    lVar12 = uVar10 + 5;
    do {
      uVar10 = lVar12 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) goto LAB_1011434b4;
        uVar6 = *(ulong *)(param_1 + lVar12 * 8);
        func_0x000107c61174();
        uVar8 = uVar7;
      }
      else {
        uVar6 = uVar10;
        uVar8 = param_1;
        func_0x00010111c554();
      }
      uVar11 = lVar12 - 3;
      if (SCARRY8(uVar10,1)) goto LAB_1011434b0;
      uVar10 = uVar6;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uStack_88 = 0;
        uStack_70 = 0;
        goto LAB_101143054;
      }
      uVar3 = uVar10;
      func_0x000107c5faec();
      uVar7 = uVar8;
      func_0x000107c61170(uVar10);
      if ((uVar3 != 0x656d616e) || (uVar8 != 0xe400000000000000)) {
        uVar10 = 0;
        uVar7 = 0xe400000000000000;
        func_0x000107c605b8(0x656d616e,0xe400000000000000,uVar3,uVar8,0);
        if ((uVar10 & 1) != 0) goto LAB_101143268;
LAB_1011432f4:
        uStack_88 = 0;
        uStack_70 = 0;
        uVar2 = uVar8;
        goto LAB_1011432fc;
      }
LAB_101143268:
      uVar10 = uVar6;
      func_0x000107c5d108();
      func_0x000107c61180();
      if (uVar10 == 0) goto LAB_1011434d4;
      uVar2 = uVar10;
      func_0x000107c5dc3c();
      func_0x000107c61170(uVar10);
      if ((int)uVar2 != 2) goto LAB_1011432f4;
      func_0x000107c6142c(uVar8);
      uVar10 = uVar6;
      func_0x000107c5d108();
      func_0x000107c61180();
      if (uVar10 == 0) goto LAB_1011434d8;
      uVar2 = uVar10;
      func_0x000107c5c1d4();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (uVar2 != 0) goto LAB_101143418;
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(0);
      lVar12 = lVar12 + 1;
      if (uVar11 == uVar9) break;
    } while( true );
  }
  goto LAB_101143474;
LAB_101143418:
  uStack_70 = 0;
LAB_101143178:
  uStack_88 = uVar2;
  func_0x000107c5faec();
  param_2 = uVar7;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uStack_70);
  uStack_70 = uVar7;
LAB_10114305c:
  uVar10 = uVar11;
  if (uVar11 == uVar9) goto LAB_101143420;
  goto LAB_101143068;
LAB_101143420:
  uVar4 = uStack_80;
  if (uStack_70 != 0) {
    uVar9 = uStack_88 & 0xffffffffffff;
    if ((uStack_70 & 0x2000000000000000) != 0) {
      uVar9 = uStack_70 >> 0x38 & 0xf;
    }
    if (uVar9 != 0) {
      uVar4 = uStack_70;
      if (uStack_80 == 0) goto LAB_101143474;
      uVar9 = uStack_90 & 0xffffffffffff;
      if ((uStack_80 & 0x2000000000000000) != 0) {
        uVar9 = uStack_80 >> 0x38 & 0xf;
      }
      if (uVar9 != 0) {
        return uStack_88;
      }
    }
    func_0x000107c6142c(uStack_70);
    uVar4 = uStack_80;
  }
LAB_101143474:
  func_0x000107c6142c(uVar4);
  return 0;
}



/* Entry: 1011434e4; end: 101143527;  */

void FUN_1011434e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ecb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bf1c0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5ecb0 = puVar1;
  return;
}



/* Entry: 101143528; end: 10114373b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101143528(long param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar9 = ((long *)(unaff_x20 + _DAT_112fcd620))[1];
  if (lVar9 == 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112fcd618);
    lVar7 = ((long *)(unaff_x20 + _DAT_112fcd618))[1];
    func_0x000107c61434(lVar7);
  }
  else {
    lVar8 = *(long *)(unaff_x20 + _DAT_112fcd620);
    lVar7 = lVar9;
  }
  if ((param_2 & 1) == 0) {
    func_0x000107c61434(lVar9);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fcd610);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112fcd610))[1];
    func_0x000107c61434(lVar9);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (param_1 != 0) {
      lVar9 = param_1;
      func_0x000107c40534();
      if (lVar9 == 1) {
        lVar3 = 0x615f646e65697266;
        func_0x000107c5fadc(0x615f646e65697266,0xee00656d6f685f74);
        lVar4 = 0x6569567375636f46;
        func_0x000107c5fadc(0x6569567375636f46,0xe900000000000077);
        uVar5 = 0;
        func_0x000107c5fe40(0);
        lVar9 = lVar3;
        lVar6 = lVar4;
        func_0x0001000f6108(lVar3,lVar4,uVar5);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar5);
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10114373c);
          (*pcVar2)();
        }
        lVar3 = lVar9;
        func_0x000107c5faec(lVar9);
        func_0x000107c61170(lVar9);
        lVar9 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x18) = 2;
        *(undefined8 *)(lVar9 + 0x10) = 1;
        *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
        lVar4 = lVar9;
        func_0x00010075bbf0();
        *(long *)(lVar9 + 0x40) = lVar4;
        *(long *)(lVar9 + 0x20) = lVar8;
        *(long *)(lVar9 + 0x28) = lVar7;
        lVar7 = lVar6;
        func_0x000107c5fb00(lVar3,lVar6,lVar9);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar6);
        lVar8 = lVar3;
      }
      else {
        func_0x000107c61170(param_1);
      }
    }
  }
  auVar10._8_8_ = lVar7;
  auVar10._0_8_ = lVar8;
  return auVar10;
}



/* Entry: 10114373c; end: 1011437c7;  */

void FUN_10114373c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Entry: 1011437c8; end: 1011438eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011437c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(unaff_x20 + _DAT_112d5fab8) == '\x01') {
    lVar4 = unaff_x20 + _DAT_112d5fa98;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c4c458();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar4 = *(long *)(unaff_x20 + _DAT_112d5fae0);
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        puVar2 = PTR_PTR_1126b1e08;
        func_0x000107c61168(PTR_PTR_1126b1e08);
        func_0x000107c61174(lVar4);
        lVar3 = lVar1;
        func_0x000107c3f040(lVar1);
        func_0x000107c61180();
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5faa8);
        func_0x000107c423a4(uVar5,((undefined8 *)(unaff_x20 + _DAT_112d5faa8))[1],puVar2,param_2,
                            lVar4,lVar3);
        func_0x000107c61170(lVar3);
        func_0x000103b356d8(0);
        func_0x000107c610f8();
        func_0x000103b3550c(uVar5,4);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar4);
      }
    }
  }
  return;
}



/* Entry: 1011438ec; end: 101143ac7;  */

void FUN_1011438ec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_1103882b8;
  func_0x000107c613fc(&UNK_1103882b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1011442d8;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1011442e0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10114375c;
  puStack_78 = &UNK_1103882d0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110388308;
  func_0x000107c613fc(&UNK_110388308,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101144300;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = FUN_101144308;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1011437a4;
  puStack_78 = &UNK_110388320;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c7c0(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x6e,0x51,0x23,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101143ac4);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x6e,0x58,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101143ac8);
  (*pcVar1)();
}



/* Entry: 101143ac8; end: 101143b23;  */

void FUN_101143ac8(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != 2) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_101143b24();
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 101143b24; end: 101143d4b;  */

/* WARNING: Possible PIC construction at 0x000101143c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101143c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101143ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101143d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101143ca8) */
/* WARNING: Removing unreachable block (ram,0x000101143c88) */
/* WARNING: Removing unreachable block (ram,0x000101143c48) */
/* WARNING: Removing unreachable block (ram,0x000101143d14) */
/* WARNING: Removing unreachable block (ram,0x000101143c54) */
/* WARNING: Removing unreachable block (ram,0x000101143d1c) */
/* WARNING: Removing unreachable block (ram,0x000101143d20) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101143b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = unaff_x20 + _DAT_112d5fa90;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20 + _DAT_112d5fa98;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = unaff_x20 + _DAT_112d5fab0;
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar1);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d5faa0);
    lVar5 = lVar4;
    func_0x000107c4c458(lVar4);
    func_0x000107c61180();
    func_0x000107c3ec60(lVar4);
    uVar9 = param_3;
    uVar10 = param_4;
    func_0x000107c515a0(lVar4);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d5fae8);
    pcVar7 = *(code **)(lVar2 + 8);
    func_0x000107c61174(uVar8);
    (*pcVar7)(param_3,param_4,param_1,param_2,uVar9,uVar10,uVar6,lVar3,lVar5,uVar8,uVar1,lVar2);
    lVar3 = lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 101143d4c; end: 101143fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101143d4c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_1 != 2) {
    ppuVar3 = &puStack_a0;
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_101143b24();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112d5fad8;
    if (param_2 != 0) {
      if (*(long *)(param_2 + _DAT_112d5fad8) == 0) {
        uVar5 = *(undefined8 *)(param_2 + _DAT_112d5faa0);
        func_0x000107c4b93c();
        func_0x000107c61180();
        puVar2 = &UNK_110388268;
        func_0x000107c613fc(&UNK_110388268,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,param_2);
        uStack_80 = 0x101144340;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        uStack_90 = 0x101114e8c;
        puStack_88 = &UNK_110388348;
        puStack_78 = puVar2;
        func_0x000107c60bc4(&puStack_a0);
        func_0x000107c61574(puStack_78);
        uVar4 = uVar5;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(uVar5);
        *(undefined8 *)(param_2 + lVar1) = uVar4;
        func_0x000107c61170(param_2);
      }
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 101143fbc; end: 101144067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101143fbc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d5fae8);
    *(undefined8 *)(lVar1 + _DAT_112d5fae8) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101143b24();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101144068; end: 1011440cb; -[_TtC32MapFriendFocusViewImplementation18FocusViewMapTarget camera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101144068(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d5fae0);
  func_0x000107c61174(uVar1);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011440cc; end: 1011440ff; -[_TtC32MapFriendFocusViewImplementation18FocusViewMapTarget transition] */

void FUN_1011440cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011437c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101144100; end: 10114410f; -[_TtC32MapFriendFocusViewImplementation18FocusViewMapTarget viewportTargetObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101144100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d5fac0));
  return;
}



/* Entry: 101144110; end: 101144117; -[_TtC32MapFriendFocusViewImplementation18FocusViewMapTarget shouldBeOverriddenByGestureRecognizer:] */

undefined8 FUN_101144110(void)

{
  return 1;
}



/* Entry: 101144118; end: 10114416b;  */

void FUN_101144118(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101143b24();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10114416c; end: 1011441cb; -[_TtC32MapFriendFocusViewImplementation18FocusViewMapTarget init] */

void FUN_10114416c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendFocusViewImplementation.FocusViewMapTarget",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101144198);
  (*pcVar1)();
}



/* Entry: 1011441cc; end: 101144293; -[_TtC32MapFriendFocusViewImplementation18FocusViewMapTarget .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011441cc(long param_1)

{
  FUN_100ca49b4(param_1 + _DAT_112d5fa90);
  FUN_100ca49b4(param_1 + _DAT_112d5fa98);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d5faa0));
  func_0x0001000834e4(param_1 + _DAT_112d5fab0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fac0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fac8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fad0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fad8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fae0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5fae8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5faf0));
  return;
}



/* Entry: 101144294; end: 1011442b3;  */

void FUN_101144294(void)

{
  func_0x000107c61168(&PTR_PTR_1127b0f70);
  return;
}



/* Entry: 1011442b4; end: 1011442df;  */

void FUN_1011442b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101143b24();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011442e0; end: 1011442ff;  */

void FUN_1011442e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101144300; end: 101144307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101144300(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_1 != 2) {
    ppuVar4 = &puStack_a0;
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_101143b24();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112d5fad8;
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + _DAT_112d5fad8) == 0) {
        uVar6 = *(undefined8 *)(lVar2 + _DAT_112d5faa0);
        func_0x000107c4b93c();
        func_0x000107c61180();
        puVar3 = &UNK_110388268;
        func_0x000107c613fc(&UNK_110388268,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar2);
        uStack_80 = 0x101144340;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        uStack_90 = 0x101114e8c;
        puStack_88 = &UNK_110388348;
        puStack_78 = puVar3;
        func_0x000107c60bc4(&puStack_a0);
        func_0x000107c61574(puStack_78);
        uVar5 = uVar6;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(uVar6);
        *(undefined8 *)(lVar2 + lVar1) = uVar5;
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 101144308; end: 101144327;  */

void FUN_101144308(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101144328; end: 101144343;  */

void FUN_101144328(long param_1,long param_2)

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



/* Entry: 101144344; end: 101144667;  */

undefined8
FUN_101144344(double param_1,double param_2,double param_3,double param_4,double param_5,
             long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dStack_90;
  char cStack_88;
  
  dVar12 = param_1;
  dVar9 = param_2;
  dVar11 = param_3;
  dVar16 = param_4;
  if ((*(byte *)(unaff_x20 + 0x50) & 1) == 0) {
    func_0x000107c5cfac(param_7,param_7,8);
    dVar9 = 100.0;
    if (dVar12 <= 100.0) {
      return 0;
    }
  }
  func_0x000107c5cf94(param_7);
  dVar7 = dVar12;
  func_0x000107c5cfac(param_7);
  dVar12 = dVar12 + dVar7;
  if (param_9 != 0) {
    dStack_90 = 0.0;
    cStack_88 = '\x01';
    func_0x000107c5f074(param_9,&dStack_90);
    if (cStack_88 != '\x01') {
      dVar9 = 100.0;
      dVar11 = dStack_90;
      if (dVar12 <= dStack_90) {
        dVar11 = dVar12;
      }
      dVar7 = dStack_90;
      if (100.0 < dStack_90) {
        dVar12 = dVar11;
      }
    }
  }
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar13,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (param_6 == 0) {
    return 0;
  }
  if (*(char *)(unaff_x20 + 0x38) != '\x01') {
    dVar15 = *(double *)(unaff_x20 + 0x28);
    dVar14 = *(double *)(unaff_x20 + 0x30);
    func_0x000107c3fc68(param_6);
    dVar15 = dVar15 - dVar7;
    dVar11 = 2.220446049250313e-16;
    dVar7 = ABS(dVar14 - dVar9);
    dVar9 = 2.220446049250313e-16;
    bVar2 = false;
    bVar3 = true;
    if (ABS(dVar15) <= 2.220446049250313e-16) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar2 = dVar7 == 2.220446049250313e-16;
        bVar3 = 2.220446049250313e-16 <= dVar7;
      }
    }
    if (!bVar3 || bVar2) {
      func_0x000107c61170(param_6);
      return 0;
    }
  }
  func_0x000107c3fc68(param_6);
  *(double *)(unaff_x20 + 0x28) = dVar7;
  *(double *)(unaff_x20 + 0x30) = dVar9;
  *(undefined1 *)(unaff_x20 + 0x38) = 0;
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    param_5 = (double)*(float *)(unaff_x20 + 0x54);
  }
  else {
    param_5 = param_5 + dVar12;
  }
  dVar12 = param_5;
  func_0x000107c5dfdc(param_8);
  dVar7 = dVar12;
  dVar15 = dVar9;
  func_0x000107c3fc68(param_6);
  bVar2 = false;
  bVar3 = true;
  if (dVar12 <= dVar7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar7) && !NAN(dVar11)) {
      bVar2 = dVar7 == dVar11;
      bVar3 = dVar11 <= dVar7;
    }
  }
  bVar1 = true;
  bVar4 = false;
  if (!bVar3 || bVar2) {
    bVar1 = false;
    bVar4 = true;
    if (!NAN(dVar15) && !NAN(dVar9)) {
      bVar1 = dVar15 < dVar9;
      bVar4 = false;
    }
  }
  bVar2 = false;
  bVar3 = true;
  if (bVar1 == bVar4) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar15) && !NAN(dVar16)) {
      bVar2 = dVar15 == dVar16;
      bVar3 = dVar16 <= dVar15;
    }
  }
  if ((!bVar3 || bVar2) &&
     (dVar12 = *(double *)(unaff_x20 + 0x48), func_0x000107c5ea20(param_8), dVar12 < dVar7)) {
    func_0x000107c5ea20(param_8);
    *(double *)(unaff_x20 + 0x48) = dVar7;
  }
  dVar11 = (*(double *)(unaff_x20 + 0x40) + 120.0) * 0.5;
  dVar16 = dVar11 + -20.0;
  func_0x000107c3fc68(param_6);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000108d31578();
  dVar12 = dVar11;
  func_0x000107c3fc68(param_6);
  dVar9 = dVar12;
  func_0x000107c41e58(param_8);
  func_0x000108d313b8(dVar12,uVar10,(dVar9 * 3.141592653589793) / 180.0 + 3.141592653589793,
                      -(dVar11 * dVar16));
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  dVar9 = dVar12;
  func_0x000107c3fc68(param_6);
  func_0x000108d31608(uVar13,dVar9,param_1,param_2);
  lVar5 = unaff_x20 + 0x20;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x000107c3e50c(uVar8);
    func_0x000107c615e8(lVar5);
  }
  uVar6 = 0;
  func_0x000103b354c8(0);
  func_0x000107c610f8();
  func_0x000103b3520c(dVar12,uVar10,0,uVar8,uVar13,param_3,param_4,param_5);
  func_0x000107c61170(param_6);
  return uVar6;
}



/* Entry: 101144668; end: 1011446b3;  */

void FUN_101144668(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001011446d4(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011446b4; end: 1011446f7;  */

void FUN_1011446b4(void)

{
  FUN_101144344();
  return;
}



/* Entry: 1011446f8; end: 10114478f;  */

void FUN_1011446f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined4 uVar2;
  
  func_0x000107c61614(unaff_x20 + 0x20,0);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61604(unaff_x20 + 0x20,param_4);
  uVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0x4073b00000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x4030400000000000;
  uVar1 = param_3;
  func_0x000109021a9c();
  *(char *)(unaff_x20 + 0x50) = (char)uVar1;
  func_0x000109021ab0(param_3);
  *(undefined4 *)(unaff_x20 + 0x54) = uVar2;
  return;
}



/* Entry: 101144790; end: 1011448a3;  */

ulong FUN_101144790(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_1 & 0xc000000000000001) == 0) {
    uVar3 = param_1 + 0x38;
    func_0x000107c60268(uVar3,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    uVar5 = 0;
    param_2 = (ulong)*(uint *)(param_1 + 0x24);
    if (uVar3 != 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) goto LAB_101144860;
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    uVar3 = uVar1;
    func_0x000107c60284();
    uVar4 = param_2;
    func_0x000107c602b4(uVar1);
    uVar2 = uVar3;
    func_0x000107c60290(uVar3,param_2,uVar1,uVar4);
    uVar5 = 1;
    func_0x000101146570(uVar1,uVar4,1);
    if ((uVar2 & 1) == 0) {
LAB_101144860:
      uVar1 = uVar3;
      FUN_10114691c(uVar3,param_2,uVar5,param_1);
      func_0x000101146570(uVar3,param_2,uVar5);
      return uVar1;
    }
  }
  func_0x000101146570(uVar3,param_2,uVar5);
  return 0;
}



/* Entry: 1011448a4; end: 1011448db;  */

undefined * FUN_1011448a4(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101144ac4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_101146b90(0,0x112d5e958,&PTR_PTR_1126a6398);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*(code *)0x10111c52c)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_101146b90(0,0x112d5e958,&PTR_PTR_1126a6398);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1011448dc; end: 101144ac3;  */

undefined * FUN_1011448dc(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101144ac4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_101146b90(0,param_3,param_4);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*param_2)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_101146b90(0,param_3,param_4);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 101144ac4; end: 101144c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101144ac4(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,long param_10)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  double dStack_90;
  char cStack_88;
  undefined7 uStack_87;
  
  dVar17 = param_1;
  func_0x000107c5cfac(param_8,param_8,8);
  if (dVar17 <= 100.0) {
    return 0;
  }
  func_0x000107c5cf94(param_8);
  dVar9 = dVar17;
  func_0x000107c5cfac(param_8);
  dVar17 = dVar17 + dVar9;
  if (param_10 != 0) {
    dStack_90 = 0.0;
    _cStack_88 = CONCAT71(uStack_87,1);
    func_0x000107c5f074(param_10,&dStack_90);
    if (cStack_88 != '\x01') {
      dVar9 = dStack_90;
      if (dVar17 <= dStack_90) {
        dVar9 = dVar17;
      }
      if (100.0 < dStack_90) {
        dVar17 = dVar9;
      }
    }
  }
  puStack_98 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  dVar9 = param_1;
  dVar14 = param_2;
  dVar16 = param_3;
  dVar11 = param_4;
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      uVar12 = puVar8[-1];
      uVar13 = *puVar8;
      func_0x000107c61434(uVar13);
      func_0x000107c5fadc(uVar12,uVar13);
      func_0x000107c6142c(uVar13);
      lVar3 = param_7;
      func_0x000107c4e67c();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      if (lVar3 != 0) {
        FUN_101145728(&puStack_c8,lVar3);
        func_0x000107c61170(puStack_c8);
      }
      puVar8 = puVar8 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  puVar2 = puStack_98;
  uVar1 = (ulong)puStack_98 & 0xc000000000000001;
  if (uVar1 == 0) {
    if (*(long *)(puStack_98 + 0x10) < 1) goto LAB_101144d48;
LAB_101144d10:
    lVar7 = param_9;
    func_0x000107c3f040();
    func_0x000107c61180();
    if (uVar1 == 0) {
      puVar4 = *(undefined **)(puVar2 + 0x10);
    }
    else {
      puVar4 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar2) {
        puVar4 = puVar2;
      }
      func_0x000107c6029c();
    }
    if (puVar4 == (undefined *)0x1) {
      puVar4 = puVar2;
      FUN_101144790();
      if (puVar4 == (undefined *)0x0) {
LAB_101144fb4:
        func_0x000107c6142c(puVar2);
        func_0x000107c61170(lVar7);
        goto LAB_101144fc4;
      }
      func_0x000107c4077c();
      dVar10 = dVar9;
      dVar15 = dVar14;
      func_0x000107c61170(puVar4);
      if (*(char *)(unaff_x20 + 0x38) != '\x01') {
        dVar10 = ABS(*(double *)(unaff_x20 + 0x28) - dVar9);
        dVar15 = 2.220446049250313e-16;
        if (dVar10 <= 2.220446049250313e-16) {
          dVar10 = ABS(*(double *)(unaff_x20 + 0x30) - dVar14);
          dVar15 = 2.220446049250313e-16;
          if (dVar10 <= 2.220446049250313e-16) goto LAB_101144fb4;
        }
      }
      *(double *)(unaff_x20 + 0x28) = dVar9;
      *(double *)(unaff_x20 + 0x30) = dVar14;
      *(undefined1 *)(unaff_x20 + 0x38) = 0;
      func_0x000107c5dfdc(param_9);
      if ((((dVar10 <= dVar9) && (dVar9 <= dVar16)) && (dVar15 <= dVar14)) &&
         ((dVar14 <= dVar11 &&
          (dVar16 = *(double *)(unaff_x20 + 0x20), func_0x000107c5ea20(param_9), dVar16 < dVar10))))
      {
        func_0x000107c5ea20(param_9);
        *(double *)(unaff_x20 + 0x20) = dVar10;
      }
      dVar15 = *(double *)(unaff_x20 + 0x40);
      dVar16 = dVar9;
      func_0x000108d31578(dVar9,*(undefined8 *)(unaff_x20 + 0x20));
      dVar11 = dVar16;
      func_0x000107c41e58(param_9);
      dVar10 = dVar9;
      func_0x000108d313b8(dVar9,dVar14,(dVar11 * 3.141592653589793) / 180.0 + 3.141592653589793,
                          -(dVar16 * (dVar15 * 0.5 + -8.0)));
      uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000108d31608(uVar12,dVar9,param_1,param_2);
      lVar3 = unaff_x20 + 0x18;
      func_0x000107c61618();
      if (lVar3 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x000107c3e50c(uVar13);
        func_0x000107c615e8(lVar3);
      }
      uVar18 = *(undefined8 *)(lVar7 + _DAT_112fecff0);
      param_9 = 0;
      func_0x000103b354c8(0);
      func_0x000107c610f8();
      func_0x000103b3520c(dVar10,dVar14,uVar18,uVar13,uVar12,param_3,param_4,param_5 + dVar17);
    }
    else {
      puVar4 = puVar2;
      func_0x000101146488(puVar2);
      puVar5 = puVar4;
      FUN_1011448dc();
      func_0x000107c61574(puVar4);
      puVar4 = puVar5;
      func_0x000107c5fc48(puVar5,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar5);
      pcStack_a8 = FUN_101145060;
      uStack_a0 = 0;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uVar12 = 0x42000000;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_1011450fc;
      puStack_b0 = &UNK_110388398;
      ppuVar6 = &puStack_c8;
      func_0x000107c60bc4(ppuVar6);
      func_0x000108d31a2c(puVar4,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c3f24c(uVar12,dVar14,dVar16,dVar11,param_3,param_4,param_5 + dVar17,param_6,
                          param_9);
      func_0x000107c61180();
    }
    func_0x000107c6142c(puVar2);
    func_0x000107c61170(lVar7);
  }
  else {
    puVar4 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_98) {
      puVar4 = puStack_98;
    }
    func_0x000107c6029c();
    if (0 < (long)puVar4) goto LAB_101144d10;
LAB_101144d48:
    func_0x000107c6142c(puVar2);
LAB_101144fc4:
    param_9 = 0;
  }
  return param_9;
}



/* Entry: 101144c08; end: 10114505f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101144c08(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,double param_7,long param_8,long param_9)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  dVar9 = param_1;
  dVar14 = param_2;
  dVar16 = param_3;
  dVar11 = param_4;
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      uVar12 = puVar8[-1];
      uVar13 = *puVar8;
      func_0x000107c61434(uVar13);
      func_0x000107c5fadc(uVar12,uVar13);
      func_0x000107c6142c(uVar13);
      lVar3 = param_8;
      func_0x000107c4e67c();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      if (lVar3 != 0) {
        FUN_101145728(&puStack_c8,lVar3);
        func_0x000107c61170(puStack_c8);
      }
      puVar8 = puVar8 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  puVar2 = puStack_98;
  uVar1 = (ulong)puStack_98 & 0xc000000000000001;
  if (uVar1 == 0) {
    if (*(long *)(puStack_98 + 0x10) < 1) goto LAB_101144d48;
LAB_101144d10:
    lVar7 = param_9;
    func_0x000107c3f040();
    func_0x000107c61180();
    if (uVar1 == 0) {
      puVar4 = *(undefined **)(puVar2 + 0x10);
    }
    else {
      puVar4 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar2) {
        puVar4 = puVar2;
      }
      func_0x000107c6029c();
    }
    if (puVar4 == (undefined *)0x1) {
      puVar4 = puVar2;
      FUN_101144790();
      if (puVar4 == (undefined *)0x0) {
LAB_101144fb4:
        func_0x000107c6142c(puVar2);
        func_0x000107c61170(lVar7);
        goto LAB_101144fc4;
      }
      func_0x000107c4077c();
      dVar10 = dVar9;
      dVar15 = dVar14;
      func_0x000107c61170(puVar4);
      if (*(char *)(unaff_x20 + 0x38) != '\x01') {
        dVar10 = ABS(*(double *)(unaff_x20 + 0x28) - dVar9);
        dVar15 = 2.220446049250313e-16;
        if (dVar10 <= 2.220446049250313e-16) {
          dVar10 = ABS(*(double *)(unaff_x20 + 0x30) - dVar14);
          dVar15 = 2.220446049250313e-16;
          if (dVar10 <= 2.220446049250313e-16) goto LAB_101144fb4;
        }
      }
      *(double *)(unaff_x20 + 0x28) = dVar9;
      *(double *)(unaff_x20 + 0x30) = dVar14;
      *(undefined1 *)(unaff_x20 + 0x38) = 0;
      func_0x000107c5dfdc(param_9);
      if ((((dVar10 <= dVar9) && (dVar9 <= dVar16)) && (dVar15 <= dVar14)) &&
         ((dVar14 <= dVar11 &&
          (dVar16 = *(double *)(unaff_x20 + 0x20), func_0x000107c5ea20(param_9), dVar16 < dVar10))))
      {
        func_0x000107c5ea20(param_9);
        *(double *)(unaff_x20 + 0x20) = dVar10;
      }
      dVar15 = *(double *)(unaff_x20 + 0x40);
      dVar16 = dVar9;
      func_0x000108d31578(dVar9,*(undefined8 *)(unaff_x20 + 0x20));
      dVar11 = dVar16;
      func_0x000107c41e58(param_9);
      dVar10 = dVar9;
      func_0x000108d313b8(dVar9,dVar14,(dVar11 * 3.141592653589793) / 180.0 + 3.141592653589793,
                          -(dVar16 * (dVar15 * 0.5 + -8.0)));
      uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000108d31608(uVar12,dVar9,param_1,param_2);
      lVar3 = unaff_x20 + 0x18;
      func_0x000107c61618();
      if (lVar3 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x000107c3e50c(uVar13);
        func_0x000107c615e8(lVar3);
      }
      uVar17 = *(undefined8 *)(lVar7 + _DAT_112fecff0);
      param_9 = 0;
      func_0x000103b354c8(0);
      func_0x000107c610f8();
      func_0x000103b3520c(dVar10,dVar14,uVar17,uVar13,uVar12,param_3,param_4,param_5 + param_7);
    }
    else {
      puVar4 = puVar2;
      func_0x000101146488(puVar2);
      puVar5 = puVar4;
      FUN_1011448dc();
      func_0x000107c61574(puVar4);
      puVar4 = puVar5;
      func_0x000107c5fc48(puVar5,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar5);
      pcStack_a8 = FUN_101145060;
      uStack_a0 = 0;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uVar12 = 0x42000000;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_1011450fc;
      puStack_b0 = &UNK_110388398;
      ppuVar6 = &puStack_c8;
      func_0x000107c60bc4(ppuVar6);
      func_0x000108d31a2c(puVar4,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c3f24c(uVar12,dVar14,dVar16,dVar11,param_3,param_4,param_5 + param_7,param_6,
                          param_9);
      func_0x000107c61180();
    }
    func_0x000107c6142c(puVar2);
    func_0x000107c61170(lVar7);
  }
  else {
    puVar4 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_98) {
      puVar4 = puStack_98;
    }
    func_0x000107c6029c();
    if (0 < (long)puVar4) goto LAB_101144d10;
LAB_101144d48:
    func_0x000107c6142c(puVar2);
LAB_101144fc4:
    param_9 = 0;
  }
  return param_9;
}



/* Entry: 101145060; end: 1011450fb;  */

undefined1  [16] FUN_101145060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_3,auStack_50);
  uVar1 = 0;
  FUN_101146b90(0,0x112d5ec90,&PTR_PTR_1126bf100);
  puVar2 = &uStack_58;
  func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    param_1 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c4077c(uStack_58);
    func_0x000107c61170(uStack_58);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1011450fc; end: 10114517b;  */

undefined1  [16]
FUN_1011450fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar3 = param_4;
  func_0x000107c614f0();
  auStack_60[0] = param_4;
  uStack_48 = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_4);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000100183ab8(auStack_60);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10114517c; end: 1011451c7;  */

void FUN_10114517c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001011446d4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011451c8; end: 1011451e7;  */

void FUN_1011451c8(void)

{
  FUN_101144ac4();
  return;
}



/* Entry: 1011451e8; end: 1011452cb;  */

void FUN_1011451e8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101146b90(0,param_1,param_2);
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



/* Entry: 1011452cc; end: 10114532f;  */

void FUN_1011452cc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d5fce0;
  plVar5 = (long *)&UNK_10dac5a40;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_1038bee3c)();
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



/* Entry: 101145330; end: 1011453a3;  */

/* WARNING: Possible PIC construction at 0x000101145370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101145374) */
/* WARNING: Removing unreachable block (ram,0x000101145378) */

void FUN_101145330(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x101145374;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 1011453a4; end: 1011453bf;  */

void FUN_1011453a4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1011453c0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1011453c0; end: 101145503;  */

undefined * FUN_1011453c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101145504);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d5fd18;
    func_0x0001000285a8(0x112d5fd18,&UNK_10d926740);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d5fd20;
    func_0x0001000285a8(0x112d5fd20,&UNK_10d926748);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101145504; end: 10114559b;  */

undefined * FUN_101145504(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = &SUB_103a2db6c;
    func_0x000101145260(&SUB_103a2db6c,0x112d5fcd0,&UNK_10d926a40);
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



/* Entry: 10114559c; end: 101145697;  */

undefined * FUN_10114559c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0x112d5ecd8;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1011451e8(0x112d5ecd8,&PTR_PTR_1126bf130,0x112d5fcf8,&UNK_10d926a90);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    puVar3 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar3 = puVar2 + -0x20;
    }
    *(long *)(puVar1 + 0x10) = param_1;
    *(ulong *)(puVar1 + 0x18) = ((long)puVar3 >> 3) << 1 | 1;
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 101145698; end: 101145727;  */

undefined *
FUN_101145698(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1011451e8(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101145728; end: 101145ec7;  */

undefined8 FUN_101145728(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_101146b90(0,0x112d5ec90,&PTR_PTR_1126bf100);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000101145b6c();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      FUN_101146b90(0,0x112d5ec90,&PTR_PTR_1126bf100);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101145970);
      (*pcVar1)();
    }
    func_0x000101145970(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_101146018(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_101146244(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 101145ec8; end: 101146017;  */

void FUN_101145ec8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112d5fcb0,&UNK_10d9266e0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_101145fa4;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_101145fa4:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101146018);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101145ff0;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_101145ff0:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101146018; end: 101146243;  */

void FUN_101146018(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112d5fcb0;
  func_0x0001000285a8(0x112d5fcb0,&UNK_10d9266e0);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101146214:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101146240);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_101146214;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101146244);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 101146244; end: 1011462c3;  */

void FUN_101146244(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 1011462c4; end: 1011463cf;  */

undefined * FUN_1011462c4(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011463d0);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112d5e958;
      FUN_1011451e8(0x112d5e958,&PTR_PTR_1126a6398,0x112d5fd00,&UNK_10d926720);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011463cc);
      (*pcVar3)();
    }
    uVar6 = 0;
    FUN_101146b90(0,0x112d5e958,&PTR_PTR_1126a6398);
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 8,lVar2,uVar6);
  }
  return puVar4;
}



/* Entry: 1011463d0; end: 101146553;  */

undefined * FUN_1011463d0(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar3 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar3 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar3 = param_1;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    FUN_101145698(puVar3,0,0x112d5ecd8,&PTR_PTR_1126bf130,0x112d5fcf8,&UNK_10d926a90);
    func_0x000107c61434(param_1);
    FUN_101146584(puVar2 + 0x20,puVar3);
    func_0x000107c6142c();
    if (param_1 != puVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101146454);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Entry: 101146554; end: 101146583;  */

void FUN_101146554(long param_1,long param_2)

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



/* Entry: 101146584; end: 1011466f7;  */

ulong FUN_101146584(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_3 >> 0x3e == 0) {
    if (0 < (long)param_2) {
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101146650);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (uVar3 <= param_2) {
        param_2 = uVar3;
      }
      uVar2 = 0;
      FUN_101146b90(0,0x112d5ecd8,&PTR_PTR_1126bf130);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,param_2,uVar2);
    }
  }
  else if (0 < (long)param_2) {
    uVar3 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar3 = param_3;
    }
    func_0x000107c61434(param_3);
    func_0x000101146650(param_1,param_2,uVar3);
    func_0x000107c615e8();
  }
  return param_3;
}



/* Entry: 1011466f8; end: 10114691b;  */

long FUN_1011466f8(long *****param_1,undefined8 *param_2,long param_3,long *****param_4)

{
  long ****pppplVar1;
  long *****ppppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  code *pcVar5;
  long *****ppppplVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *****ppppplVar11;
  long lVar12;
  long lVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  ulong uVar16;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  
  if (((ulong)param_4 & 0xc000000000000001) == 0) {
    uVar9 = -1L << ((ulong)*(byte *)(param_4 + 4) & 0x3f);
    uVar10 = -uVar9;
    uVar16 = 0xffffffffffffffff;
    if (uVar10 < 0x40) {
      uVar16 = ~(-1L << (uVar10 & 0x3f));
    }
    pppplVar14 = (long ****)0x0;
    ppppplVar2 = param_4 + 7;
    pppplVar3 = (long ****)~uVar9;
    pppplVar15 = (long ****)(uVar16 & (ulong)param_4[7]);
    ppppplVar6 = param_1;
  }
  else {
    ppppplVar6 = (long *****)((ulong)param_4 & 0xffffffffffffff8);
    if ((long *****)0x7fffffffffffffff < param_4) {
      ppppplVar6 = param_4;
    }
    func_0x000107c60288();
    uVar7 = 0;
    FUN_101146b90(0,0x112d5ec90,&PTR_PTR_1126bf100);
    uVar8 = uVar7;
    FUN_101146b3c();
    func_0x000107c5fe30(&pppplStack_88,ppppplVar6,uVar7,uVar8);
    pppplVar14 = (long ****)ppplStack_70;
    ppppplVar2 = (long *****)pppplStack_80;
    pppplVar3 = (long ****)ppplStack_78;
    pppplVar15 = (long ****)ppplStack_68;
    param_4 = (long *****)pppplStack_88;
  }
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10114691c);
        (*pcVar5)();
      }
      lVar12 = 0;
      uVar16 = (ulong)(pppplVar3 + 8) >> 6;
      do {
        pppplVar4 = pppplVar14;
        lVar13 = lVar12;
        if ((long)param_4 < 0) {
          func_0x000107c602ac();
          if (ppppplVar6 == (long *****)0x0) break;
          uVar8 = 0;
          pppplStack_98 = (long ****)ppppplVar6;
          FUN_101146b90(0,0x112d5ec90,&PTR_PTR_1126bf100);
          ppppplVar6 = &pppplStack_90;
          func_0x000107c6147c(ppppplVar6,&pppplStack_98,PTR___syXlN_11034f1a0 + 8,uVar8,7);
          ppppplVar11 = (long *****)pppplStack_90;
        }
        else {
          while (pppplVar15 == (long ****)0x0) {
            pppplVar1 = (long ****)((long)pppplVar4 + 1);
            if (SCARRY8((long)pppplVar4,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101146918);
              (*pcVar5)();
            }
            if ((long)uVar16 <= (long)pppplVar1) {
              pppplVar15 = (long ****)0x0;
              if ((long)uVar16 <= (long)pppplVar14 + 1) {
                uVar16 = (long)pppplVar14 + 1;
              }
              pppplVar14 = (long ****)(uVar16 - 1);
              goto LAB_1011468d0;
            }
            pppplVar4 = pppplVar1;
            pppplVar15 = ppppplVar2[(long)pppplVar1];
          }
          uVar9 = ((ulong)pppplVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  ((ulong)pppplVar15 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          pppplVar15 = (long ****)((long)pppplVar15 - 1U & (ulong)pppplVar15);
          ppppplVar11 = (long *****)
                        param_4[6][LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + (long)pppplVar4 * 0x40];
          ppppplVar6 = ppppplVar11;
          func_0x000107c61174();
          pppplVar14 = pppplVar4;
        }
        if (ppppplVar11 == (long *****)0x0) break;
        lVar12 = lVar12 + 1;
        *param_2 = ppppplVar11;
        param_2 = param_2 + 1;
        lVar13 = param_3;
      } while (lVar12 != param_3);
    }
  }
LAB_1011468d0:
  *param_1 = (long ****)param_4;
  param_1[1] = (long ****)ppppplVar2;
  param_1[2] = pppplVar3;
  param_1[3] = pppplVar14;
  param_1[4] = pppplVar15;
  return lVar13;
}



/* Entry: 10114691c; end: 101146b33;  */

/* WARNING: Possible PIC construction at 0x000101146a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101146a80) */
/* WARNING: Removing unreachable block (ram,0x000101146af8) */
/* WARNING: Removing unreachable block (ram,0x000101146aa0) */

undefined8 FUN_10114691c(ulong param_1,undefined8 param_2,char param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_3 == '\x01') {
      uVar3 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar3 = param_4;
      }
      func_0x000107c602a4(param_1,param_2,uVar3);
      uVar2 = 0;
      uStack_60 = param_1;
      FUN_101146b90(0,0x112d5ec90,&PTR_PTR_1126bf100);
      func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101146b34);
    (*pcVar1)();
  }
  if (param_3 == '\x01') {
    uVar2 = 0;
    FUN_101146b90(0,0x112d5ec90,&PTR_PTR_1126bf100);
    uVar3 = param_1;
    func_0x000107c60294(param_1,param_2);
    if ((int)uVar3 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101146b28);
      (*pcVar1)();
    }
    func_0x000107c60298(param_1,param_2);
    uStack_60 = param_1;
    func_0x000107c6147c(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
    uVar3 = *(ulong *)(param_4 + 0x28);
    func_0x000107c60114();
    uVar3 = uVar3 & (-1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
    if ((*(ulong *)(param_4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
      func_0x000107c61170(uStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101146ac4);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar3 * 8);
  }
  else {
    if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101146b2c);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) ==
        0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101146b30);
      (*pcVar1)();
    }
    if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101146af8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return uVar2;
}



/* Entry: 101146b34; end: 101146b3b;  */

void FUN_101146b34(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101146b3c; end: 101146b8f;  */

void FUN_101146b3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d5fcb8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101146b90(0xff,0x112d5ec90,&PTR_PTR_1126bf100);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112d5fcb8 = puVar2;
  return;
}



/* Entry: 101146b90; end: 101146bcf;  */

void FUN_101146b90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101146bd0; end: 10114720f;  */

undefined1  [16] FUN_101146bd0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef27d80);
  uVar3 = 0x6569567375636f46;
  func_0x000107c5fadc(0x6569567375636f46,0xe900000000000077);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101146c98);
  (*pcVar1)();
}



/* Entry: 101147210; end: 10114723f;  */

void FUN_101147210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101147240; end: 10114724b; -[SCMapFriendFocusViewEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147240(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fdc0;
  func_0x000107c61428(param_1 + _DAT_112d5fdc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10114724c; end: 101147257; -[SCMapFriendFocusViewEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114724c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fdc0;
  func_0x000107c61428(param_1 + _DAT_112d5fdc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101147258; end: 101147263; -[SCMapFriendFocusViewEntryPoint mapPeopleServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147258(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fdc8;
  func_0x000107c61428(param_1 + _DAT_112d5fdc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101147264; end: 10114726f; -[SCMapFriendFocusViewEntryPoint setMapPeopleServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147264(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fdc8;
  func_0x000107c61428(param_1 + _DAT_112d5fdc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101147270; end: 10114727b; -[SCMapFriendFocusViewEntryPoint mapPersonLocationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147270(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fdd0;
  func_0x000107c61428(param_1 + _DAT_112d5fdd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10114727c; end: 101147287; -[SCMapFriendFocusViewEntryPoint setMapPersonLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114727c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fdd0;
  func_0x000107c61428(param_1 + _DAT_112d5fdd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101147288; end: 101147293; -[SCMapFriendFocusViewEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147288(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fdd8;
  func_0x000107c61428(param_1 + _DAT_112d5fdd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101147294; end: 10114729f; -[SCMapFriendFocusViewEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fdd8;
  func_0x000107c61428(param_1 + _DAT_112d5fdd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011472a0; end: 1011472ab; -[SCMapFriendFocusViewEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fde0;
  func_0x000107c61428(param_1 + _DAT_112d5fde0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011472ac; end: 1011472b7; -[SCMapFriendFocusViewEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fde0;
  func_0x000107c61428(param_1 + _DAT_112d5fde0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011472b8; end: 1011472c3; -[SCMapFriendFocusViewEntryPoint storiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fde8;
  func_0x000107c61428(param_1 + _DAT_112d5fde8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011472c4; end: 1011472cf; -[SCMapFriendFocusViewEntryPoint setStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fde8;
  func_0x000107c61428(param_1 + _DAT_112d5fde8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011472d0; end: 1011472db; -[SCMapFriendFocusViewEntryPoint composerBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fdf0;
  func_0x000107c61428(param_1 + _DAT_112d5fdf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011472dc; end: 1011472e7; -[SCMapFriendFocusViewEntryPoint setComposerBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fdf0;
  func_0x000107c61428(param_1 + _DAT_112d5fdf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011472e8; end: 1011472f3; -[SCMapFriendFocusViewEntryPoint chatCameraScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fdf8;
  func_0x000107c61428(param_1 + _DAT_112d5fdf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011472f4; end: 1011472ff; -[SCMapFriendFocusViewEntryPoint setChatCameraScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011472f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fdf8;
  func_0x000107c61428(param_1 + _DAT_112d5fdf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101147300; end: 10114730b; -[SCMapFriendFocusViewEntryPoint locationSharingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147300(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fe00;
  func_0x000107c61428(param_1 + _DAT_112d5fe00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10114730c; end: 101147317; -[SCMapFriendFocusViewEntryPoint setLocationSharingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114730c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fe00;
  func_0x000107c61428(param_1 + _DAT_112d5fe00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101147318; end: 101147323; -[SCMapFriendFocusViewEntryPoint locationMutingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147318(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fe08;
  func_0x000107c61428(param_1 + _DAT_112d5fe08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101147324; end: 10114732f; -[SCMapFriendFocusViewEntryPoint setLocationMutingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fe08;
  func_0x000107c61428(param_1 + _DAT_112d5fe08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101147330; end: 10114733b; -[SCMapFriendFocusViewEntryPoint userLocationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147330(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fe10;
  func_0x000107c61428(param_1 + _DAT_112d5fe10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10114733c; end: 101147347; -[SCMapFriendFocusViewEntryPoint setUserLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114733c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fe10;
  func_0x000107c61428(param_1 + _DAT_112d5fe10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101147348; end: 101147353; -[SCMapFriendFocusViewEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147348(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5fe18;
  func_0x000107c61428(param_1 + _DAT_112d5fe18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101147354; end: 10114735f; -[SCMapFriendFocusViewEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101147354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5fe18;
  func_0x000107c61428(param_1 + _DAT_112d5fe18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


