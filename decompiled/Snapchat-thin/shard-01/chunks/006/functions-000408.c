/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012605bc; end: 1012605c3;  */

void FUN_1012605bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar1;
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_101260610();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_38;
  *(long *)(lVar2 + 0x18) = lVar1;
  *param_1 = lVar2;
  func_0x000107c6157c(lVar1);
  return;
}



/* Entry: 1012605c4; end: 1012605ef;  */

void FUN_1012605c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012605f0; end: 10126060f;  */

undefined1  [16] FUN_1012605f0(void)

{
  return ZEXT816(0x110399df8);
}



/* Entry: 101260610; end: 10126062f;  */

void FUN_101260610(void)

{
  func_0x000107c61168(&PTR_PTR_112d6c7a0);
  return;
}



/* Entry: 101260630; end: 1012606a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101260630(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d6c808;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6c808);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d6c810);
    func_0x000107c5cb24();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1012606a4; end: 10126070f;  */

void FUN_1012606a4(void)

{
  func_0x0001000285a8(0x112d6c818,&UNK_10d92f5a0);
  func_0x0001000823a8(0x1012606e4,0);
  return;
}



/* Entry: 101260710; end: 101260807; -[_TtC24MyProfile3Implementation28MyProfile3ScreenshotObserver handleScreenshot] */

/* WARNING: Possible PIC construction at 0x00010126076c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101260770) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101260710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6c810);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c45a48(puVar1,param_2,1);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101260808; end: 10126089f; -[_TtC24MyProfile3Implementation28MyProfile3ScreenshotObserver dealloc] */

void FUN_101260808(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61174();
  func_0x000107c41570(puVar2);
  func_0x000107c61180();
  func_0x000107c4ffac();
  func_0x000107c61170(puVar2);
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012608a0; end: 1012608d7; -[_TtC24MyProfile3Implementation28MyProfile3ScreenshotObserver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012608bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012608c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012608a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6c810));
  return;
}



/* Entry: 1012608d8; end: 1012608e7;  */

undefined1  [16] FUN_1012608d8(void)

{
  return ZEXT816(0x110399e38);
}



/* Entry: 1012608e8; end: 101260957; -[_TtC24MyProfile3Implementation28MyProfile3ScreenshotObserver init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012608e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112d6c810;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112d6c808) = 0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101260958; end: 101260977;  */

void FUN_101260958(void)

{
  func_0x000107c61168(&PTR_PTR_1127c0108);
  return;
}



/* Entry: 101260978; end: 101260aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101260978(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar2 = PTR_PTR_1126a67f8;
  func_0x000107c610f8(PTR_PTR_1126a67f8);
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8e8);
  func_0x000107c5cb24(uVar3);
  func_0x000107c61180();
  func_0x000107c55878(puVar2);
  func_0x000107c61170(uVar3);
  puVar6 = &UNK_110399e58;
  puVar4 = puVar6;
  func_0x000107c613fc(&UNK_110399e58,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1012612b0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_110399e70;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c57e20(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c613fc(&UNK_110399e58,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_60 = FUN_101261304;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_110399e98;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c57e1c(puVar2);
  func_0x000107c60bd0(ppuVar7);
  return puVar2;
}



/* Entry: 101260aec; end: 101260ba3;  */

void FUN_101260aec(undefined1 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c613fc(param_3,0x19,7);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  *(undefined1 *)(param_3 + 0x18) = param_1;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_5;
  uStack_50 = param_4;
  lStack_48 = param_3;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(lVar1);
  func_0x0001000d76cc(param_6,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101260ba4; end: 101260c07;  */

void FUN_101260ba4(long param_1,byte param_2,long *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(byte *)(param_1 + *param_3) = param_2 & 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101260c08; end: 101260c4f; -[_TtC24MyProfile3Implementation24MyProfile3ViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101260c08(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + _DAT_112d6c8e0);
  func_0x00010451429c(0);
  if (cVar1 == '\x01') {
    func_0x000104514080();
  }
  else {
    func_0x000104514100();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101260c50; end: 101260c57; -[_TtC24MyProfile3Implementation24MyProfile3ViewController shouldDismissViewControllerLater] */

undefined8 FUN_101260c50(void)

{
  return 1;
}



/* Entry: 101260c58; end: 101260ca3; -[_TtC24MyProfile3Implementation24MyProfile3ViewController cardTransitionWillBeginWithView:] */

/* WARNING: Possible PIC construction at 0x000101260c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101260c90) */

void FUN_101260c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101260f24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101260ca4; end: 101260dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101260ca4(double param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112d6c8f0) == '\x01') {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d6c850);
    if (lVar4 != 0) {
      FUN_101261384(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c61174();
      func_0x000107c60118(param_3,lVar4);
      if ((param_3 & 1) != 0) {
        lVar2 = lVar4;
        func_0x000107c44ec4(param_1,param_2);
        func_0x000107c61180();
        lVar3 = lVar2;
        FUN_101260fd8();
        if (lVar3 != 0) {
          func_0x000107c404a0();
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          return param_1 <= 1.0;
        }
        func_0x000107c61170(lVar4);
        lVar4 = lVar2;
      }
      func_0x000107c61170(lVar4);
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 101260dc0; end: 101260e33; -[_TtC24MyProfile3Implementation24MyProfile3ViewController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_101260dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_5;
  FUN_101260ca4(param_1,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 101260e34; end: 101260e77; -[_TtC24MyProfile3Implementation24MyProfile3ViewController cardToExpandTransition] */

void FUN_101260e34(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(param_1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 101260e78; end: 101260ecb; -[_TtC24MyProfile3Implementation24MyProfile3ViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Possible PIC construction at 0x000101260eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101260eb8) */

void FUN_101260e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012610d8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101260ecc; end: 101260ecf; -[_TtC24MyProfile3Implementation24MyProfile3ViewController impalaProfileDidComplete] */

void FUN_101260ecc(void)

{
  return;
}



/* Entry: 101260ed0; end: 101260ed3; -[_TtC24MyProfile3Implementation24MyProfile3ViewController impalaProfileNeedsRemoval] */

void FUN_101260ed0(void)

{
  return;
}



/* Entry: 101260ed4; end: 101260ed7; -[_TtC24MyProfile3Implementation24MyProfile3ViewController impalaProfileDidReloadManagedProfiles] */

void FUN_101260ed4(void)

{
  return;
}



/* Entry: 101260ed8; end: 101260edf; -[_TtC24MyProfile3Implementation24MyProfile3ViewController pageViewName] */

undefined8 FUN_101260ed8(void)

{
  return 0xe3;
}



/* Entry: 101260ee0; end: 101260f23;  */

void FUN_101260ee0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040702e4();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101260f24; end: 101260fd7;  */

/* WARNING: Possible PIC construction at 0x000101260f94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101260f98) */
/* WARNING: Removing unreachable block (ram,0x000101260fac) */
/* WARNING: Removing unreachable block (ram,0x000101260fb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101260f24(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8f8) = 1;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8e8);
  FUN_101261384(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = 1;
  func_0x000107c60110(1);
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101260fd8; end: 1012610d7;  */

long FUN_101260fd8(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar2 = param_2;
  func_0x000107c61174();
  puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  do {
    if (param_2 == 0) {
      PTR__OBJC_CLASS___UIScrollView_1126af098 = puVar3;
      return 0;
    }
    PTR__OBJC_CLASS___UIScrollView_1126af098 = puVar3;
    func_0x000107c61168(puVar3);
    lVar4 = lVar2;
    func_0x000107c6148c(lVar2,puVar3);
    func_0x000107c61174();
    if (lVar4 != 0) {
      lVar5 = lVar2;
      func_0x000107c61174(lVar2);
      lVar6 = lVar4;
      func_0x000107c4a3a8();
      if ((int)lVar6 == 0) {
        func_0x000107c61170(lVar5);
      }
      else {
        func_0x000107c404f0(lVar4);
        dVar7 = param_1;
        func_0x000107c3ec60(lVar4);
        func_0x000107c609cc();
        func_0x000107c61170(lVar5);
        bVar1 = dVar7 + 1.0 < param_1;
        param_1 = dVar7 + 1.0;
        if (bVar1) {
          func_0x000107c61170(lVar5);
          return lVar4;
        }
      }
    }
    param_2 = lVar2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
    lVar2 = param_2;
    puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  } while( true );
}



/* Entry: 1012610d8; end: 1012612af;  */

/* WARNING: Possible PIC construction at 0x00010126114c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101261184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012611ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101261294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012611b0) */
/* WARNING: Removing unreachable block (ram,0x000101261274) */
/* WARNING: Removing unreachable block (ram,0x0001012611b4) */
/* WARNING: Removing unreachable block (ram,0x000101261188) */
/* WARNING: Removing unreachable block (ram,0x00010126118c) */
/* WARNING: Removing unreachable block (ram,0x000101261150) */
/* WARNING: Removing unreachable block (ram,0x0001012611bc) */
/* WARNING: Removing unreachable block (ram,0x000101261158) */
/* WARNING: Removing unreachable block (ram,0x00010126115c) */
/* WARNING: Removing unreachable block (ram,0x000101261260) */
/* WARNING: Removing unreachable block (ram,0x000101261170) */
/* WARNING: Removing unreachable block (ram,0x000101261298) */
/* WARNING: Removing unreachable block (ram,0x00010126129c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012610d8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8f8) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8e8);
  FUN_101261384(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = 0;
  func_0x000107c60110(0);
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012612b0; end: 1012612e7;  */

void FUN_1012612b0(void)

{
  FUN_101260aec();
  return;
}



/* Entry: 1012612e8; end: 101261303;  */

void FUN_1012612e8(long param_1,long param_2)

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



/* Entry: 101261304; end: 101261383;  */

void FUN_101261304(void)

{
  FUN_101260aec();
  return;
}



/* Entry: 101261384; end: 1012613c3;  */

void FUN_101261384(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012613c4; end: 1012613eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012613c4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d6c928);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112fde9e0;
    func_0x000107c61428(lVar2 + _DAT_112fde9e0,auStack_50,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c41b30(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1012613ec; end: 1012613ef; -[_TtC24MyProfile3Implementation24MyProfile3ViewController defaultProjectNameV3] */

void FUN_1012613ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040702e4();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1012613f0; end: 1012613f3; -[_TtC24MyProfile3Implementation24MyProfile3ViewController defaultProjectNameV2] */

void FUN_1012613f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040702e4();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1012613f4; end: 101261433; -[_TtC24MyProfile3Implementation24MyProfile3ViewController unifiedProfileView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012613f4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d6c898) != 0) {
    func_0x000107c61174(*(undefined8 *)(*(long *)(param_1 + _DAT_112d6c898) + _DAT_112d6cad0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101261434; end: 101261483; -[_TtC24MyProfile3Implementation24MyProfile3ViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101261434(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + _DAT_112d6c888) + 0x18);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + _DAT_112d6c888) + 0x10);
    func_0x000107c61174(lVar2);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101261484; end: 10126149f;  */

void FUN_101261484(long param_1,long param_2)

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



/* Entry: 1012614a0; end: 1012614c7; -[_TtC24MyProfile3Implementation24MyProfile3ViewController dismissUnifiedProfile] */

void FUN_1012614a0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101261794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012614c8; end: 10126168f;  */

void FUN_1012614c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = &UNK_110399f98;
  func_0x000107c613fc(&UNK_110399f98,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110399fc0;
  func_0x000107c613fc(&UNK_110399fc0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar1 = &UNK_110399fe8;
  func_0x000107c613fc(&UNK_110399fe8,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_1012616e0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  pcStack_40 = FUN_1012616e8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039a000;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("MyProfile3ViewController.handleNotificationWhenReady",ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101261690; end: 1012616df; -[_TtC24MyProfile3Implementation24MyProfile3ViewController handleNotificationWhenReady:] */

/* WARNING: Possible PIC construction at 0x0001012616c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012616cc) */

void FUN_101261690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012614c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012616e0; end: 1012616e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012616e0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_101261860();
    if (lVar2 != 0) {
      func_0x000107c61170();
      lVar2 = *(long *)(lVar1 + _DAT_112d6c890);
      if (lVar2 != 0) {
        func_0x000107c61428(lVar2 + 0x18,auStack_60,0,0);
        lVar2 = *(long *)(lVar2 + 0x18);
        if (lVar2 != 0) {
          puStack_68 = PTR_DAT_11269dff8;
          func_0x000107c61494(lVar2,1,&puStack_68);
          if (lVar2 != 0) {
            func_0x000107c44614();
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012616e8; end: 101261707;  */

void FUN_1012616e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101261708; end: 10126170f;  */

void FUN_101261708(long param_1,long param_2)

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



/* Entry: 101261710; end: 10126185f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101261710(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar5;
  long lVar4;
  
  lVar1 = _DAT_112d6c910;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6c910);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    func_0x000107c30a44();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c53224();
    uVar2 = (uint)lVar4;
    func_0x000101262f50();
    func_0x000107c5479c(lVar3,param_2,uVar2 & 1);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000107c615e8(uVar5);
    lVar4 = 0;
  }
  func_0x000107c615f0(lVar4);
  return lVar3;
}



/* Entry: 101261860; end: 101261be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101261860(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar10 = _DAT_112d6c898;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d6c898);
  if ((*(byte *)(unaff_x20 + _DAT_112d6c8d0) & 1) != 0) {
    func_0x000107c61174(lVar4);
    return lVar4;
  }
  if (lVar4 == 0) {
    lVar8 = 0;
    func_0x000101277f9c();
    func_0x000107c613fc();
    plVar5 = (long *)(lVar8 + 0x10);
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *plVar5 = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    lVar4 = *(long *)(unaff_x20 + _DAT_112d6c928);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    uVar9 = *(ulong *)(lVar4 + _DAT_112fde9f0);
    uVar7 = *(undefined8 *)(lVar4 + _DAT_112fde9d8);
    func_0x000107c615f0(uVar7);
    uVar1 = uVar9;
    func_0x000107c615f0();
    FUN_101277b50();
    func_0x000107c615e8(uVar9);
    func_0x000107c615e8(uVar7);
    if ((uVar1 & 1) == 0) {
      func_0x000107c61574(lVar8);
      return 0;
    }
    func_0x000107c61428(plVar5,auStack_68,0,0);
    lVar6 = *plVar5;
    lVar4 = 0;
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d6c890);
      *(long *)(unaff_x20 + _DAT_112d6c890) = lVar8;
      func_0x000107c6157c(lVar8);
      lVar4 = lVar6;
      func_0x000107c61174();
      func_0x000107c61574(uVar7);
      uVar7 = *(undefined8 *)(unaff_x20 + lVar10);
      *(long *)(unaff_x20 + lVar10) = lVar6;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61170(uVar7);
      uVar7 = *(undefined8 *)(lVar4 + _DAT_112d6cae0);
      *(undefined8 *)(lVar4 + _DAT_112d6cae0) = *(undefined8 *)(unaff_x20 + _DAT_112d6c8a8);
      func_0x000107c6157c();
      func_0x000107c61574(uVar7);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d6c9a8);
      uVar7 = uVar11;
      func_0x000107c3fa04();
      func_0x000107c61180();
      uVar2 = uVar7;
      func_0x000108fab2c0();
      func_0x000107c615e8(uVar7);
      *(char *)(lVar4 + _DAT_1137ff2d8) = (char)uVar2;
      func_0x000107c3fa04();
      func_0x000107c61180();
      uVar7 = uVar11;
      func_0x000108fab2d4();
      func_0x000107c615e8(uVar11);
      *(char *)(lVar4 + _DAT_1137ff2e0) = (char)uVar7;
      lVar12 = *(long *)(unaff_x20 + _DAT_112d6c888);
      func_0x000107c61428((undefined8 *)(lVar8 + 0x20),auStack_80,0,0);
      uVar7 = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar8 + 0x20);
      func_0x000107c61174();
      func_0x000107c61170(uVar7);
      func_0x000107c61428(lVar8 + 0x28,auStack_98,0,0);
      lVar10 = *(long *)(lVar8 + 0x28);
      func_0x000107c61604(lVar12 + 0x20,lVar10);
      if (lVar10 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174(lVar10);
        func_0x000107c45a48(puVar3);
        func_0x000107c4d664(lVar10);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar10);
      }
      func_0x000107c61428(lVar8 + 0x18,auStack_b0,0,0);
      if (*(long *)(lVar8 + 0x18) != 0) {
        func_0x000107c5a180();
      }
      lVar10 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6c9c8) + 0x110);
      if ((lVar10 == 0) || (lVar12 = *(long *)(lVar8 + 0x18), lVar12 == 0)) {
        func_0x000107c61574(lVar8);
      }
      else {
        func_0x000107c61174();
        func_0x000107c61174(lVar12);
        func_0x000107c3d890();
        func_0x000107c61574(lVar8);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar10);
      }
      func_0x000107c61170(lVar4);
      return lVar6;
    }
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8a8);
    lVar8 = *(long *)(lVar4 + _DAT_112d6cae0);
    *(undefined8 *)(lVar4 + _DAT_112d6cae0) = uVar7;
    func_0x000107c61174(lVar4);
    func_0x000107c6157c(uVar7);
  }
  func_0x000107c61574(lVar8);
  return lVar4;
}



/* Entry: 101261be8; end: 101262557;  */

void FUN_101261be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d6c848,&UNK_10d92f600);
  puVar1 = &UNK_11039a038;
  func_0x000107c613fc(&UNK_11039a038,0xd0,7);
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
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
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
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x0001000823a8(FUN_101262558,puVar1);
  return;
}



/* Entry: 101262558; end: 1012625ab;  */

void FUN_101262558(void)

{
  long unaff_x20;
  
  func_0x000101261df4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 1012625ac; end: 101262beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1012625ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d6c850) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c858) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c860) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c868) = 0;
  lVar1 = _DAT_112d6c870;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  func_0x000107c61614(unaff_x20 + _DAT_112d6c878,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c880) = 0;
  lVar1 = _DAT_112d6c888;
  lVar3 = 0;
  FUN_10125ff30();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x000100431464();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  func_0x000107c61614(lVar3 + 0x20,0);
  *(undefined1 *)(lVar3 + 0x28) = 0;
  puVar4 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(lVar3 + 0x30) = puVar4;
  *(long *)(unaff_x20 + lVar1) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c890) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c898) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d6c8a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c8a8) = 0;
  lVar1 = _DAT_112d6c8b0;
  uVar2 = 0;
  FUN_10124cecc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c8b8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d6c8c0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8c8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c8d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8e0) = 1;
  lVar1 = _DAT_112d6c8e8;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8f0) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c900) = 2;
  lVar1 = _DAT_112d6c908;
  lVar3 = 0;
  func_0x000101253558();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(long *)(unaff_x20 + lVar1) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c910) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c918) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c920) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c928) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c930) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c938) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c940) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c948) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c950) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c958) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c960) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c968) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c970) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c978) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c980) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c988) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c990) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c998) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9a0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9a8) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9b0) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9b8) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9c0) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9c8) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9d0) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9d8) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c9e0) = param_23;
  puVar4 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar5 = auStack_78;
  func_0x000107c61154(puVar5,puVar4,0,0);
  func_0x000107c61180();
  func_0x000107c54394();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61574(param_18);
  func_0x000107c61574(param_19);
  func_0x000107c61574(param_20);
  func_0x000107c61574(param_21);
  func_0x000107c61574(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  return puVar5;
}



/* Entry: 101262bec; end: 101262c13; -[_TtC24MyProfile3Implementation24MyProfile3ViewController initWithCoder:] */

void FUN_101262bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101266e20();
  return;
}



/* Entry: 101262c14; end: 101262cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101262c14(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d6c858;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d6c858);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b4a98;
    func_0x000107c610f8();
    func_0x000107c48074();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101262d00; end: 101262e1b;  */

/* WARNING: Possible PIC construction at 0x000101262d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101262d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101262dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101262e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101262d84) */
/* WARNING: Removing unreachable block (ram,0x000101262d5c) */
/* WARNING: Removing unreachable block (ram,0x000101262df0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101262d00(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112d6c8d0;
  if ((*(byte *)(unaff_x20 + _DAT_112d6c8d0) & 1) == 0) {
    lVar2 = unaff_x20 + _DAT_112d6c878;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar2 = unaff_x20 + _DAT_112d6c8a0;
      func_0x000107c61618();
      if (((lVar2 == 0) && (FUN_101261860(), lVar2 != 0)) &&
         ((*(byte *)(unaff_x20 + lVar1) & 1) == 0)) {
        FUN_101278640();
        lVar1 = _DAT_112d6cad8;
        func_0x000107c61428(lVar2 + _DAT_112d6cad8,auStack_58,1,0);
        func_0x000107c61604(lVar2 + lVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 101262e1c; end: 101262e63; -[_TtC24MyProfile3Implementation24MyProfile3ViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101262e1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6c8c0;
  func_0x000107c61428(param_1 + _DAT_112d6c8c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101262e64; end: 101262ebb; -[_TtC24MyProfile3Implementation24MyProfile3ViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101262e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6c8c0;
  func_0x000107c61428(param_1 + _DAT_112d6c8c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101262ebc; end: 101262eff; -[_TtC24MyProfile3Implementation24MyProfile3ViewController isOverlayPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101262ebc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6c8c8;
  func_0x000107c61428(param_1 + _DAT_112d6c8c8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 101262f00; end: 101262fb7; -[_TtC24MyProfile3Implementation24MyProfile3ViewController setIsOverlayPresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101262f00(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6c8c8;
  func_0x000107c61428(param_1 + _DAT_112d6c8c8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 101262fb8; end: 101262fbb;  */

void FUN_101262fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_101267160(param_1,param_2);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 101262fbc; end: 1012631f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101262fbc(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  char *pcVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6c8d8) + 1;
  if (SCARRY8(*(long *)(unaff_x20 + _DAT_112d6c8d8),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1012631f4);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + _DAT_112d6c8d8) = lVar1;
  uVar6 = 0x112d6c9e8;
  func_0x0001000285a8(0x112d6c9e8,&UNK_10d92f630);
  func_0x000100087bd4(&puStack_48,0x10126744c,&puStack_80,uVar6);
  puVar4 = puStack_48;
  if (puStack_48 == (undefined *)0x0) {
    puVar3 = &UNK_11039a0b0;
    func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    func_0x000107c4a02c();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107c61574(puVar3);
      goto LAB_10126308c;
    }
    puVar4 = puVar3;
    FUN_101265734(puVar3);
    func_0x000107c61574(puVar3);
  }
  func_0x000107c61170(puVar4);
LAB_10126308c:
  func_0x0001000285a8(0x112d6c9f0,&UNK_10d92f638);
  puVar4 = &UNK_11039a0b0;
  puVar5 = puVar4;
  func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  uVar6 = 0;
  func_0x0001048897a0(0,1,0,0x10126742c,puVar5);
  func_0x000107c61574(puVar5);
  func_0x00010488b12c();
  func_0x000107c61574(uVar6);
  func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar3 = &UNK_11039a3a0;
  func_0x000107c613fc(&UNK_11039a3a0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(long *)(puVar3 + 0x18) = lVar1;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puVar3);
  pcVar8 = "buildComposerView()";
  func_0x0001000c10c0("buildComposerView()");
  func_0x000107c61180();
  func_0x000107c5dc64(puVar5);
  func_0x000107c615e8(pcVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1012631f4; end: 101263253; -[_TtC24MyProfile3Implementation24MyProfile3ViewController loadView] */

void FUN_1012631f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_101262fbc();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_loadView_112604be0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101263254; end: 10126330f; -[_TtC24MyProfile3Implementation24MyProfile3ViewController viewDidLoad] */

void FUN_101263254(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x000107c53dec();
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010d92f5f0);
    func_0x000107c520f4(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    lStack_40 = param_1;
    lStack_38 = lVar2;
    func_0x000107c61154(&lStack_40,PTR_s_viewDidLoad_112684cd8);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101263310);
  (*pcVar1)();
}



/* Entry: 101263310; end: 10126360f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101263310(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c5eea0(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar8 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  if (*(char *)(unaff_x20 + _DAT_112d6c8d0) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112d6c8d0) = 0;
    FUN_101262fbc();
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  FUN_101261860();
  func_0x000107c61170();
  lVar8 = *(long *)(unaff_x20 + _DAT_112d6c8b0);
  lVar7 = *(long *)(unaff_x20 + _DAT_112d6c890);
  lVar1 = 0;
  if (lVar7 != 0) {
    func_0x000107c61428(lVar7 + 0x18,auStack_68,0,0);
    lVar1 = *(long *)(lVar7 + 0x18);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x000107c61174();
    }
  }
  func_0x000107c61604(lVar8 + _DAT_112d6b408,lVar1);
  func_0x000107c615e8(lVar1);
  lVar1 = _DAT_112fdea28;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d6c928);
  func_0x000107c61428(lVar7 + _DAT_112fdea28,auStack_80,1,0);
  func_0x000107c61604(lVar7 + lVar1,lVar8);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d6c9d8) + _DAT_112fde970);
  func_0x000107c61174(uVar2);
  func_0x000103a93568(lVar8);
  func_0x000107c61170(uVar2);
  FUN_101262d00();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  puVar4 = puVar3;
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffac();
  func_0x000107c61170(puVar4);
  func_0x000107c41570(puVar3);
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar3);
  lVar1 = _DAT_112fde9e0;
  func_0x000107c61428(lVar7 + _DAT_112fde9e0,auStack_98,0,0);
  uVar5 = lVar7 + lVar1;
  func_0x000107c61618();
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c61150();
    if ((uVar6 & 1) != 0) {
      func_0x000107c5e390(uVar5);
    }
    func_0x000107c615e8(uVar5);
  }
  lVar1 = unaff_x20;
  func_0x000107c49aa8();
  lVar8 = unaff_x20;
  func_0x000107c4a098();
  func_0x000107c4d508();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    lVar7 = 2;
  }
  else {
    lVar7 = unaff_x20;
    func_0x000107c49aa8();
    func_0x000107c61170(unaff_x20);
  }
  FUN_10125f818(lVar1,lVar8,lVar7);
  return;
}



/* Entry: 101263610; end: 10126363f; -[_TtC24MyProfile3Implementation24MyProfile3ViewController viewWillAppear:] */

void FUN_101263610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101263310(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101263640; end: 101263883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101263640(uint param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar1,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  lVar10 = _DAT_112d6c8f8;
  if ((*(char *)(unaff_x20 + _DAT_112d6c8f8) == '\x01') &&
     (func_0x000101262f50(), ((ulong)puVar1 & 1) != 0)) {
    *(undefined1 *)(unaff_x20 + lVar10) = 0;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8e8);
    FUN_10126736c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = 0;
    func_0x000107c60110(0);
    func_0x000107c4d664(uVar8);
    func_0x000107c61170(uVar2);
  }
  lVar5 = _DAT_112fde9e0;
  lVar10 = *(long *)(unaff_x20 + _DAT_112d6c928);
  func_0x000107c61428(lVar10 + _DAT_112fde9e0,auStack_78,0,0);
  uVar3 = lVar10 + lVar5;
  func_0x000107c61618();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c61150();
    if ((uVar4 & 1) != 0) {
      func_0x000107c41c5c(uVar3);
    }
    func_0x000107c615e8(uVar3);
  }
  lVar5 = unaff_x20;
  func_0x000107c49aa8();
  lVar7 = unaff_x20;
  func_0x000107c4a098();
  lVar6 = unaff_x20;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar9 = 2;
  }
  else {
    lVar9 = lVar6;
    func_0x000107c49aa8();
    func_0x000107c61170(lVar6);
  }
  FUN_10125fa48(lVar5,lVar7,lVar9);
  lVar5 = _DAT_112d6c920;
  lVar7 = *(long *)(lVar10 + _DAT_112fdea10);
  if ((lVar7 != 0) && ((*(byte *)(unaff_x20 + _DAT_112d6c920) & 1) == 0)) {
    func_0x000107c61174();
    lVar6 = unaff_x20;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar6 != 0) {
      *(undefined1 *)(unaff_x20 + lVar5) = 1;
      lVar5 = _DAT_112fdea18;
      func_0x000107c61428(lVar10 + _DAT_112fdea18,auStack_90,0,0);
      lVar10 = lVar10 + lVar5;
      func_0x000107c61618();
      lVar5 = lVar6;
      if (lVar10 != 0) {
        func_0x000107c445e0();
        func_0x000107c615e8(lVar10);
        lVar5 = lVar7;
        lVar7 = lVar6;
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 101263884; end: 1012638b3; -[_TtC24MyProfile3Implementation24MyProfile3ViewController viewDidAppear:] */

void FUN_101263884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101263640(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012638b4; end: 10126399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012638b4(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillDisappear__112685438,param_1 & 1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffac();
  func_0x000107c61170(puVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6c888);
  *(undefined1 *)(lVar2 + 0x28) = 0;
  lVar2 = lVar2 + 0x20;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10126399c; end: 1012639cb; -[_TtC24MyProfile3Implementation24MyProfile3ViewController viewWillDisappear:] */

void FUN_10126399c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1012638b4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012639cc; end: 101263cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012639cc(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  ulong unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidDisappear__112684c48,param_2 & 1);
  func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar7 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c918) = param_1;
  lVar5 = _DAT_112fdea28;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d6c928);
  func_0x000107c61428(lVar7 + _DAT_112fdea28,auStack_78,1,0);
  lVar1 = lVar7 + lVar5;
  func_0x000107c61618();
  if ((lVar1 != 0) &&
     (lVar6 = *(long *)(unaff_x20 + _DAT_112d6c8b0), func_0x000107c615e8(), lVar1 == lVar6)) {
    func_0x000107c61604(lVar7 + lVar5,0);
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d6c9d8) + _DAT_112fde970);
  func_0x000107c61174(uVar2);
  func_0x000103a93694();
  func_0x000107c61170(uVar2);
  uVar3 = unaff_x20;
  func_0x000107c49aa0();
  if ((uVar3 & 1) == 0) {
    uVar3 = unaff_x20;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c49aa0();
      func_0x000107c61170(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_101263b54;
    }
    uVar3 = unaff_x20;
    func_0x000107c4a094();
    if ((int)uVar3 == 0) {
      return;
    }
  }
LAB_101263b54:
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8d0) = 1;
  FUN_10125faec(1);
  lVar1 = unaff_x20 + _DAT_112d6c878;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000101279260();
    lVar5 = _DAT_112d6cd78;
    if (*(long *)(lVar1 + _DAT_112d6cd78) == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c4ff34(*(undefined8 *)(*(long *)(lVar1 + _DAT_112d6cd78) + _DAT_112d6cad0));
      uVar2 = *(undefined8 *)(lVar1 + lVar5);
    }
    *(undefined8 *)(lVar1 + lVar5) = 0;
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  lVar1 = _DAT_112d6cad8;
  lVar5 = *(long *)(unaff_x20 + _DAT_112d6c898);
  if (lVar5 != 0) {
    func_0x000107c61428(lVar5 + _DAT_112d6cad8,auStack_90,1,0);
    func_0x000107c61604(lVar5 + lVar1,0);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6c890);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_101277a34();
    func_0x000107c61574(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6c850);
  if (lVar1 != 0) {
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c41848();
      func_0x000107c615e8(lVar1);
    }
  }
  FUN_101263cc8();
  lVar1 = _DAT_112fde9e0;
  func_0x000107c61428(lVar7 + _DAT_112fde9e0,auStack_a8,0,0);
  lVar7 = lVar7 + lVar1;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c41b30();
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 101263cc8; end: 101263e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101263cc8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(FUN_1012672cc,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar3 = _DAT_112d6c850;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d6c850) != 0) {
    func_0x000107c4ff34();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61170(uVar1);
  lVar3 = _DAT_112d6c878;
  func_0x000107c61604(unaff_x20 + _DAT_112d6c878,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61170();
    if ((*(byte *)(unaff_x20 + _DAT_112d6c8d0) & 1) == 0) {
      FUN_101262d00();
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6c880);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c880) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c61604(unaff_x20 + _DAT_112d6c8a0,0);
  lVar3 = _DAT_112d6c898;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6c898);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112d6cae0);
    *(undefined8 *)(lVar2 + _DAT_112d6cae0) = 0;
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6c890);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c890) = 0;
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8a8);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c8a8) = 0;
  func_0x000107c61574(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6c888);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c61604(lVar3 + 0x20,0);
  lVar3 = _DAT_112d6c8b8;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d6c8b8) != 0) {
    func_0x000107c42194();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101263e50; end: 101263e7f; -[_TtC24MyProfile3Implementation24MyProfile3ViewController viewDidDisappear:] */

void FUN_101263e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1012639cc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101263e80; end: 1012640d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101263e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8b8);
  *(undefined **)(unaff_x20 + _DAT_112d6c8b8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  uStack_40 = 0x101263f70;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x10126408c;
  puStack_48 = &UNK_11039a2c8;
  func_0x000107c60bc4(&puStack_60);
  puVar4 = puVar1;
  func_0x000107c5c320(puVar1,param_2,ppuVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c3e924(puVar4,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1012640d8; end: 101264267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012640d8(void)

{
  int iVar1;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puVar2;
  
  func_0x000107c614f0();
  lVar6 = *(long *)(unaff_x20 + _DAT_112d6c850);
  lVar5 = *(long *)(unaff_x20 + _DAT_112d6c890);
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c6157c(lVar5);
  lVar3 = lVar6;
  func_0x000107c61174();
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    puVar2 = &UNK_11039a060;
    func_0x000107c613fc(&UNK_11039a060,0x20,7);
    *(long *)(puVar2 + 0x10) = lVar6;
    *(long *)(puVar2 + 0x18) = lVar5;
    pcStack_50 = FUN_101266a8c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11039a078;
    ppuVar4 = &puStack_70;
    puStack_48 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_48;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(lVar5);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc("MyProfile3ViewController.deinit",ppuVar4);
    func_0x000107c61574(lVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c60bd0(ppuVar4);
  }
  else {
    if (lVar6 != 0) {
      lVar6 = lVar3;
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c41848();
        func_0x000107c615e8(lVar6);
      }
    }
    if (lVar5 != 0) {
      func_0x000107c6157c(lVar5);
      FUN_101277a34();
      func_0x000107c61578(lVar5,2);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101264268; end: 1012642af;  */

void FUN_101264268(long param_1,long param_2)

{
  if (param_1 != 0) {
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c41848();
      func_0x000107c615e8(param_1);
    }
  }
  if (param_2 != 0) {
    FUN_101277a34();
  }
  return;
}



/* Entry: 1012642b0; end: 1012642d3; -[_TtC24MyProfile3Implementation24MyProfile3ViewController dealloc] */

void FUN_1012642b0(void)

{
  func_0x000107c61174();
  FUN_1012640d8();
  return;
}



/* Entry: 1012642d4; end: 10126458b; -[_TtC24MyProfile3Implementation24MyProfile3ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012642d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c928));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c930));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c938));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c940));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c948));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c950));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c958));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c960));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c968));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c970));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c978));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c980));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c988));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c990));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c998));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c9a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c9a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c9b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c9b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c9c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c9c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c9d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c9e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c9d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c850));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c858));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c860));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c868));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c870));
  func_0x000107c61610(param_1 + _DAT_112d6c878);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c880));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c888));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c890));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c898));
  func_0x000107c61610(param_1 + _DAT_112d6c8a0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c8a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c8b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c8b8));
  FUN_101267094(param_1 + _DAT_112d6c8c0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6c8e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6c908));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6c910));
  return;
}



/* Entry: 10126458c; end: 10126476f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10126458c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_48;
  undefined *puVar4;
  
  ppuVar6 = &puStack_80;
  uVar2 = 0x112d6c9e8;
  func_0x0001000285a8(0x112d6c9e8,&UNK_10d92f630);
  func_0x000100087bd4(&puStack_48,FUN_101267438,&puStack_80,uVar2);
  puVar4 = puStack_48;
  if (puStack_48 == (undefined *)0x0) {
    puVar3 = &UNK_11039a0b0;
    func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    iVar1 = (int)puVar4;
    func_0x000107c6157c(puVar3);
    func_0x000107c4a02c();
    if ((param_1 & 1) == 0) {
      if (iVar1 == 0) {
        func_0x000107c61578(puVar3,2);
        return (undefined *)0x0;
      }
    }
    else if (iVar1 == 0) {
      func_0x000107c61574(puVar3);
      puStack_48 = (undefined *)0x0;
      puVar4 = &UNK_11039a328;
      func_0x000107c613fc(&UNK_11039a328,0x28,7);
      *(undefined ***)(puVar4 + 0x10) = &puStack_48;
      *(undefined8 *)(puVar4 + 0x18) = 0x10126728c;
      *(undefined **)(puVar4 + 0x20) = puVar3;
      puVar5 = &UNK_11039a350;
      func_0x000107c613fc(&UNK_11039a350,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_101267294;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c312c8("MyProfile3ViewController.getOrCreateComposerContext",ppuVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c60bd0(ppuVar6);
      puVar3 = puStack_48;
      func_0x000107c61574(puVar4);
      return puVar3;
    }
    puVar4 = puVar3;
    FUN_101265734(puVar3);
    func_0x000107c61578(puVar3,2);
  }
  return puVar4;
}



/* Entry: 101264770; end: 101264a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101264770(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  puVar2 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = *(long *)(puVar2 + _DAT_112d6c930);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar3 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSThread_1126b47e0;
        func_0x000107c61168();
        uVar1 = (uint)puVar7;
        func_0x000107c4a02c();
        uVar5 = (ulong)(uVar1 ^ 1);
        FUN_10126458c();
        if (uVar5 == 0) {
          pcVar8 = "dismiss()";
          func_0x0001000c10c0("dismiss()");
          func_0x000107c61180();
          puVar7 = &UNK_11039a0b0;
          func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,puVar2);
          uStack_78 = 0x101267284;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_1000f6b44;
          puStack_80 = &UNK_11039a2f0;
          ppuVar9 = &puStack_98;
          puStack_70 = puVar7;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c61574(puStack_70);
          func_0x000107c4e524(pcVar8);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c615e8(pcVar8);
          uVar10 = 0xd00000000000001a;
          func_0x000107c5fadc(0xd00000000000001a,0x800000010ef31f40);
          uVar11 = 0xd000000000000013;
          func_0x000107c5fadc(0xd000000000000013,0x800000010ef31f90);
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar11);
          func_0x00010488ade0(puVar7);
          func_0x000107c61170(puVar2);
          func_0x000107c615e8(lVar3);
        }
        else {
          puVar7 = PTR_PTR_1126a6838;
          func_0x000107c610f8(PTR_PTR_1126a6838);
          func_0x000107c453e4();
          puVar6 = PTR_PTR_1126a6840;
          func_0x000107c610f8();
          func_0x000107c49520();
          puStack_98 = puVar6;
          func_0x000100b60084(&puStack_98);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(lVar3);
          puVar7 = puVar2;
        }
        goto LAB_101264934;
      }
    }
    func_0x000107c61170(puVar2);
  }
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef31f40);
  uVar10 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef31f60);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x00010488ade0(puVar7);
LAB_101264934:
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101264a98; end: 1012651e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101264a98(char *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (*(long *)(param_3 + _DAT_112d6c8d8) == param_4) {
      if ((*(byte *)(param_3 + _DAT_112d6c8d0) & 1) != 0) {
        if (param_1 != (char *)0x0) {
          puVar2 = PTR_PTR_1126a6840;
          func_0x000107c61168(PTR_PTR_1126a6840);
          func_0x000107c6148c(param_1,puVar2);
          if (param_1 != (char *)0x0) {
            func_0x000107c5dbc0();
            func_0x000107c61180();
            if (param_1 != (char *)0x0) {
              func_0x000107c41848();
              func_0x000107c615e8(param_1);
            }
          }
        }
        func_0x000107c61170(param_3);
        return;
      }
      if ((param_2 == 0) && (param_1 != (char *)0x0)) {
        puVar2 = PTR_PTR_1126a6840;
        func_0x000107c61168(PTR_PTR_1126a6840);
        pcVar3 = param_1;
        func_0x000107c6148c(param_1,puVar2);
        lVar7 = _DAT_112d6c850;
        if (pcVar3 != (char *)0x0) {
          pcVar11 = *(char **)(param_3 + _DAT_112d6c850);
          if (pcVar11 == (char *)0x0) {
            func_0x000107c61174(param_1);
          }
          else {
            func_0x000107c61174(param_1);
            if (pcVar3 != pcVar11) {
              func_0x000107c4ff34(pcVar11);
              pcVar11 = *(char **)(param_3 + lVar7);
            }
          }
          *(char **)(param_3 + lVar7) = pcVar3;
          func_0x000107c61174(param_1);
          func_0x000107c61170(pcVar11);
          func_0x000107c61174(param_1);
          uVar5 = 0xd000000000000011;
          func_0x000107c5fadc(0xd000000000000011,0x800000010ef32010);
          func_0x000107c520f4(pcVar3);
          func_0x000107c61170(uVar5);
          FUN_1012651e8(pcVar3);
          func_0x000107c5a050(pcVar3);
          func_0x000107c61174();
          lVar7 = param_3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012651d8);
            (*pcVar1)();
          }
          func_0x000107c3d89c();
          func_0x000107c61170(lVar7);
          lVar6 = param_3;
          func_0x000107c5de64();
          func_0x000107c61180();
          lVar7 = 0;
          if (lVar6 != 0) {
            lVar7 = 0x5f64656966696e75;
            func_0x000107c5fadc(0x5f64656966696e75,0xef656c69666f7270);
            func_0x000107c520f4(lVar6);
            func_0x000107c61170(lVar6);
            func_0x000107c61170();
          }
          func_0x0001008478a8();
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x18) = 9;
          *(undefined8 *)(lVar7 + 0x10) = 4;
          pcVar11 = pcVar3;
          func_0x000107c4acb0();
          func_0x000107c61180();
          lVar6 = param_3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012651dc);
            (*pcVar1)();
          }
          lVar8 = lVar6;
          func_0x000107c4acb0();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          pcVar9 = pcVar11;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar11);
          func_0x000107c61170(lVar8);
          *(char **)(lVar7 + 0x20) = pcVar9;
          pcVar11 = pcVar3;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          lVar6 = param_3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012651e0);
            (*pcVar1)();
          }
          lVar8 = lVar6;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          pcVar9 = pcVar11;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar11);
          func_0x000107c61170(lVar8);
          *(char **)(lVar7 + 0x28) = pcVar9;
          pcVar11 = pcVar3;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          lVar6 = param_3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012651e4);
            (*pcVar1)();
          }
          lVar8 = lVar6;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          pcVar9 = pcVar11;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar11);
          func_0x000107c61170(lVar8);
          *(char **)(lVar7 + 0x30) = pcVar9;
          pcVar11 = pcVar3;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          lVar6 = param_3;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c61170(param_3);
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012651e8);
            (*pcVar1)();
          }
          puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar8 = lVar6;
          func_0x000107c3ec1c(lVar6);
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          pcVar9 = pcVar11;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar11);
          func_0x000107c61170(lVar8);
          *(char **)(lVar7 + 0x38) = pcVar9;
          uVar5 = 0;
          FUN_10126736c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar6 = lVar7;
          func_0x000107c5fc48(lVar7,uVar5);
          func_0x000107c61574(lVar7);
          func_0x000107c3d048(puVar2);
          func_0x000107c61170();
          FUN_101261710();
          lVar7 = lVar6;
          func_0x0001008479c8();
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x18) = 3;
          *(undefined8 *)(lVar7 + 0x10) = 1;
          *(char **)(lVar7 + 0x20) = pcVar3;
          uVar5 = 0;
          FUN_10126736c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
          func_0x000107c61174(param_1);
          lVar8 = lVar7;
          func_0x000107c5fc48(lVar7,uVar5);
          func_0x000107c61574(lVar7);
          func_0x000107c497d0(lVar6);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(lVar8);
          func_0x000107c5dbc0();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          if (pcVar3 == (char *)0x0) {
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_1);
            return;
          }
          puVar2 = &UNK_11039a0b0;
          func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
          func_0x000107c61614(puVar2 + 0x10,param_3);
          puVar10 = &UNK_11039a418;
          func_0x000107c613fc(&UNK_11039a418,0x20,7);
          *(undefined **)(puVar10 + 0x10) = puVar2;
          *(long *)(puVar10 + 0x18) = param_4;
          uStack_88 = 0x10126730c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000b0c7c;
          puStack_90 = &UNK_11039a430;
          ppuVar4 = &puStack_a8;
          puStack_80 = puVar10;
          func_0x000107c60bc4(ppuVar4);
          func_0x000107c61574(puStack_80);
          func_0x000107c5e080(pcVar3);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_1);
          func_0x000107c60bd0(ppuVar4);
          param_1 = pcVar3;
          goto LAB_101264ce0;
        }
      }
      puVar2 = (undefined *)0x112d6ca30;
      func_0x0001000285a8(0x112d6ca30,&UNK_10d92f680);
      uVar5 = 0x112d6ca38;
      puStack_a8 = puVar2;
      func_0x0001000285a8(0x112d6ca38,&UNK_10d92f688);
      func_0x000107c5fb18(&puStack_a8,uVar5);
      func_0x000107c6142c(uVar5);
      param_1 = "dismiss()";
      func_0x0001000c10c0("dismiss()");
      func_0x000107c61180();
      puVar2 = &UNK_11039a0b0;
      func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_3);
      uStack_88 = 0x101267430;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11039a3e0;
      ppuVar4 = &puStack_a8;
      puStack_80 = puVar2;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_80);
      func_0x000107c4e524(param_1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(param_3);
      goto LAB_101264ce0;
    }
    func_0x000107c61170(param_3);
  }
  if (param_1 == (char *)0x0) {
    return;
  }
  puVar2 = PTR_PTR_1126a6840;
  func_0x000107c61168(PTR_PTR_1126a6840);
  func_0x000107c6148c(param_1,puVar2);
  if (param_1 == (char *)0x0) {
    return;
  }
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (param_1 == (char *)0x0) {
    return;
  }
  func_0x000107c41848();
LAB_101264ce0:
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1012651e8; end: 10126541f;  */

/* WARNING: Possible PIC construction at 0x000101265250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101265274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101265290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012653c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101265294) */
/* WARNING: Removing unreachable block (ram,0x0001012653fc) */
/* WARNING: Removing unreachable block (ram,0x0001012652a8) */
/* WARNING: Removing unreachable block (ram,0x000101265278) */
/* WARNING: Removing unreachable block (ram,0x000101265288) */
/* WARNING: Removing unreachable block (ram,0x000101265254) */
/* WARNING: Removing unreachable block (ram,0x00010126528c) */
/* WARNING: Removing unreachable block (ram,0x000101265274) */
/* WARNING: Removing unreachable block (ram,0x0001012653cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012651e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x00010127a648();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6c880);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c880) = uVar1;
  func_0x000107c61174();
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101265420; end: 1012655a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101265420(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  undefined *puVar3;
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112d6c8d8) == param_2) {
      puVar2 = &UNK_11039a0b0;
      func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c61168();
      iVar1 = (int)puVar3;
      func_0x000107c6157c(puVar2);
      func_0x000107c4a02c();
      if (iVar1 == 0) {
        func_0x000107c61574(puVar2);
        puVar3 = &UNK_11039a468;
        func_0x000107c613fc(&UNK_11039a468,0x20,7);
        *(undefined8 *)(puVar3 + 0x10) = 0x101267314;
        *(undefined **)(puVar3 + 0x18) = puVar2;
        pcStack_58 = FUN_10126731c;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_11039a480;
        ppuVar4 = &puStack_78;
        puStack_50 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_50;
        func_0x000107c6157c(puVar2);
        func_0x000107c61574(puVar3);
        func_0x0001000d76cc("MyProfile3ViewController.attachProfileContentIfPossible",ppuVar4);
        func_0x000107c61170(param_1);
        func_0x000107c61574(puVar2);
        func_0x000107c60bd0(ppuVar4);
      }
      else {
        FUN_1012655a4(puVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61578(puVar2,2);
      }
    }
    else {
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1012655a4; end: 10126562b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012655a4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (((*(byte *)(param_1 + _DAT_112d6c8d0) & 1) == 0) &&
       (*(long *)(param_1 + _DAT_112d6c850) != 0)) {
      func_0x000107c61618(param_1 + _DAT_112d6c878);
      func_0x000107c61170();
      FUN_101262d00();
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10126562c; end: 1012656a3;  */

/* WARNING: Possible PIC construction at 0x000101265688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010126568c) */

void FUN_10126562c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1012656a4; end: 101265733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012656a4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126b3e88);
    func_0x000107c4887c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101265734; end: 101265807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101265734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_101265808();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112d6c870);
      lStack_60 = param_1;
      lStack_58 = lVar1;
      func_0x000107c6157c(uVar3);
      uVar2 = 0x112d6c9e8;
      func_0x0001000285a8(0x112d6c9e8,&UNK_10d92f630);
      func_0x000100087bd4(auStack_50,FUN_1012670b8,auStack_70,uVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar3);
    }
  }
  return;
}



/* Entry: 101265808; end: 101266713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101265808(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *unaff_x20;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 auStack_c0 [3];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6c948);
  func_0x000107c3e9c4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    return (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126a6800;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126a6808;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126a6810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0x112d38c88;
  uVar7 = 0;
  FUN_10126736c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = 0;
  func_0x000107c6010c(0);
  func_0x000107c5a2b0(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c553c8(puVar5);
  func_0x000107c54014(puVar4);
  puVar9 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  lVar27 = *(long *)(unaff_x20 + _DAT_112d6c928);
  lVar10 = *(long *)(lVar27 + _DAT_112fdea00);
  if (lVar10 != 0) {
    func_0x000107c49820();
    if (lVar10 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1012666fc);
      (*pcVar1)();
    }
    if (0x7fffffff < lVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101265960);
      (*pcVar1)();
    }
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112d6c940);
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar10 = lVar11;
  if (lVar11 == 0) {
    lVar10 = lVar2;
    func_0x000107c5faec();
    lVar2 = lVar10;
    func_0x000107c5fadc();
    func_0x000107c6142c();
  }
  func_0x00010011df08();
  func_0x000107c61180();
  if (lVar10 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  uVar8 = *(undefined8 *)(lVar27 + _DAT_112fde9f8);
  puVar12 = PTR_PTR_1126a6818;
  func_0x000107c610f8();
  func_0x000107c478a0(uVar8);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  lVar2 = ((undefined8 *)(lVar27 + _DAT_112fdea08))[1];
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar27 + _DAT_112fdea08);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar8,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c59584(puVar12);
  func_0x000107c61170();
  FUN_101263e80();
  puVar13 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar10 = 0;
  FUN_10125e914();
  func_0x000107c613fc();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar10 + 0x18) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar10 + 0x20) = puVar14;
  *(undefined **)(lVar10 + 0x10) = puVar13;
  lVar2 = _DAT_112d6c8a8;
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8a8);
  *(long *)(unaff_x20 + _DAT_112d6c8a8) = lVar10;
  func_0x000107c61174();
  func_0x000107c61574(uVar25);
  lVar10 = *(long *)(unaff_x20 + _DAT_112d6c898);
  if (lVar10 != 0) {
    uVar25 = *(undefined8 *)(unaff_x20 + lVar2);
    uVar26 = *(undefined8 *)(lVar10 + _DAT_112d6cae0);
    *(undefined8 *)(lVar10 + _DAT_112d6cae0) = uVar25;
    func_0x000107c61174();
    func_0x000107c6157c(uVar25);
    func_0x000107c61170(lVar10);
    func_0x000107c61574(uVar26);
  }
  puVar14 = puVar5;
  func_0x000107c57190(puVar5);
  FUN_101260978();
  func_0x000107c569d8(puVar5);
  func_0x000107c61170(puVar14);
  uVar25 = uVar8;
  FUN_101254c74(uVar8,puVar13,puVar12);
  func_0x000107c560e4(puVar5);
  func_0x000107c61170(uVar25);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d6c978);
  puVar14 = &UNK_11039a0f8;
  func_0x000107c613fc(&UNK_11039a0f8,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar25;
  *(undefined **)(puVar14 + 0x18) = puVar9;
  puVar19 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_88 = FUN_1012670d0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101016bdc;
  puStack_90 = &UNK_11039a110;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  func_0x000107c6157c(uVar25);
  func_0x000107c61174();
  func_0x000107c46b38(puVar19);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61574(puStack_80);
  func_0x000107c54b4c(puVar5);
  func_0x000107c61170(puVar19);
  puVar14 = unaff_x20;
  FUN_101251b60();
  func_0x000107c54b50(puVar5);
  func_0x000107c61170(puVar14);
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112d6c8b0);
  lVar2 = lVar3;
  func_0x000107c40b7c();
  func_0x000107c61180();
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112d6c950);
  func_0x000107c400d0();
  func_0x000107c61180();
  uVar25 = 0;
  func_0x000102da51a4(0);
  func_0x000107c610f8();
  func_0x000102da4e8c(uVar26,uVar25);
  puVar14 = PTR_PTR_1126a6820;
  func_0x000107c610f8(PTR_PTR_1126a6820);
  func_0x000107c459d0();
  func_0x000107c52cd8(puVar5);
  func_0x000107c61170(puVar14);
  func_0x000100083b20(&puStack_a8);
  puVar14 = puStack_a8;
  puVar19 = unaff_x20;
  FUN_10124bff8();
  func_0x000107c61170(puVar14);
  func_0x000107c56960(puVar5);
  func_0x000107c61170(puVar19);
  puVar16 = PTR_PTR_1126b4a90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar14 = puVar16;
  FUN_101262c14();
  puVar19 = puVar14;
  func_0x000107c4ab40();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = puVar19;
  func_0x000107c5cb24(puVar19);
  func_0x000107c61180();
  func_0x000107c61170(puVar19);
  func_0x000107c55afc(puVar16);
  func_0x000107c61170(puVar14);
  func_0x000101262c84();
  puVar19 = puVar14;
  func_0x000107c4b718();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar14 = puVar19;
  func_0x000107c5cb24(puVar19);
  func_0x000107c61180();
  func_0x000107c61170(puVar19);
  func_0x000107c537b0(puVar16);
  func_0x000107c61170(puVar14);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d6c938);
  puVar14 = &UNK_11039a148;
  func_0x000107c613fc(&UNK_11039a148,0x18,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar25;
  puVar17 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  puVar19 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x1012670d8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101016bdc;
  puStack_90 = &UNK_11039a160;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  func_0x000107c61174(uVar25);
  func_0x000107c46b38(puVar17);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61574(puStack_80);
  func_0x000107c5526c(puVar16);
  func_0x000107c61170(puVar17);
  func_0x000107c56904(puVar5);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112d6c960);
  func_0x000107c6157c(uVar25);
  func_0x000100083b20(&puStack_a8);
  func_0x000107c61574(uVar25);
  puVar17 = puStack_a8;
  puVar14 = &UNK_11039a0b0;
  func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  func_0x000107c6157c(puVar14);
  puVar18 = unaff_x20;
  FUN_101266b20();
  func_0x000107c61578(puVar14,2);
  if (puVar18 == (undefined *)0x0) {
    puVar23 = unaff_x20;
    FUN_101253444();
    puVar14 = &UNK_11039a198;
    func_0x000107c613fc(&UNK_11039a198,0x18,7);
    *(undefined **)(puVar14 + 0x10) = puVar23;
    puVar21 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_88 = FUN_1012670f8;
    puStack_a8 = puVar19;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101016bdc;
    puStack_90 = &UNK_11039a1b0;
    ppuVar15 = &puStack_a8;
    puStack_80 = puVar14;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61174();
    func_0x000107c46b38(puVar21);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61574(puStack_80);
    func_0x000107c552e8(puVar5);
    func_0x000107c61170(puVar21);
    func_0x000100083b20(&puStack_a8);
    puVar19 = puStack_a8;
    puVar14 = puVar23;
    func_0x000107c451d0();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      if (lRam0000000112d6be18 != -1) {
        func_0x000107c61568(0x112d6be18,0x101253e2c);
      }
      puVar14 = puRam00000001137ff2a8;
      func_0x000107c615f0(puRam00000001137ff2a8);
    }
    func_0x000101253d60(0);
    func_0x000107c613fc();
    puVar21 = puVar14;
    func_0x000107c615f0(puVar14);
    FUN_101253690();
    puVar22 = puVar21;
    FUN_1012553c8();
    func_0x000107c61574(puVar19);
    func_0x000107c615e8(puVar14);
    func_0x000107c61574(puVar21);
    func_0x000107c57a18(puVar5);
    func_0x000107c61170(puVar23);
  }
  else {
    puVar14 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_88 = (code *)0x101267134;
    puStack_a8 = puVar19;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101016bdc;
    puStack_90 = &UNK_11039a200;
    ppuVar15 = &puStack_a8;
    puStack_80 = puVar18;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61580(puVar18,2);
    func_0x000107c46b38(puVar14);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61574(puStack_80);
    func_0x000107c552e8(puVar5);
    func_0x000107c61170(puVar14);
    func_0x000100083b20(&puStack_a8);
    puVar14 = puStack_a8;
    puVar19 = (undefined *)0x0;
    func_0x000101253d60();
    func_0x000107c613fc();
    auStack_c0[0] = 0;
    func_0x0001000285a8(0x112d6bca0,&UNK_10d92f670);
    func_0x000107c613fc();
    func_0x000107c6157c(puVar18);
    puVar20 = auStack_c0;
    func_0x00010006c248();
    *(undefined **)(puVar19 + 0x18) = puVar18;
    *(undefined8 **)(puVar19 + 0x20) = puVar20;
    *(code **)(puVar19 + 0x10) = FUN_10126714c;
    func_0x000107c6157c(puVar18);
    puVar22 = puVar19;
    FUN_1012553c8(puVar19);
    func_0x000107c61574(puVar14);
    func_0x000107c61574(puVar18);
    func_0x000107c61574(puVar19);
    func_0x000107c57a18(puVar5);
    func_0x000107c61574(puVar18);
  }
  func_0x000107c61170(puVar22);
  puVar14 = PTR_PTR_1126a6828;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar19 = puVar14;
  func_0x000108fab138();
  if ((int)puVar19 == 0) {
    puVar23 = *(undefined **)(unaff_x20 + _DAT_112d6c9a0);
    func_0x000107c42e5c();
    func_0x000107c61180();
    puVar19 = puVar23;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar23);
    if (puVar19 != (undefined *)0x0) {
      func_0x0001000285a8(0x112d6ca20,&UNK_10d92f668);
      puVar23 = puVar19;
      func_0x000107c3e614(puVar19);
      func_0x000107c61180();
      puVar21 = puVar23;
      func_0x000107c5d6fc();
      func_0x000107c61180();
      func_0x000107c61170(puVar23);
      puVar22 = puVar21;
      func_0x0001000b637c(puVar21);
      func_0x000107c61170(puVar21);
      uVar25 = 0x1012668e8;
      func_0x0001000bfde0(0x1012668e8,0,uVar7);
      func_0x000107c61574(puVar22);
      func_0x0001004575f0();
      func_0x000107c61574(uVar25);
      puVar23 = puVar22;
      func_0x000107c5cb24(puVar22);
      func_0x000107c61180();
      func_0x000107c61170(puVar22);
      func_0x000107c5423c(puVar14);
      func_0x000107c615e8(puVar19);
      goto LAB_1012663e0;
    }
    puVar19 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4a8a4(puVar19);
    func_0x000107c61180();
    func_0x000107c61170(puVar23);
    puVar23 = puVar19;
    func_0x000107c5cb24(puVar19);
  }
  else {
    puVar19 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4a8a4(puVar19);
    func_0x000107c61180();
    func_0x000107c61170(puVar23);
    puVar23 = puVar19;
    func_0x000107c5cb24(puVar19);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar19);
  func_0x000107c5423c(puVar14);
LAB_1012663e0:
  func_0x000107c61170(puVar23);
  puVar23 = puVar5;
  func_0x000107c57550(puVar5);
  func_0x000100083b20(&puStack_a8);
  puVar19 = puStack_a8;
  func_0x00010125c08c();
  func_0x000107c61574(puVar19);
  func_0x000107c529a8(puVar5);
  func_0x000107c61170(puVar23);
  FUN_101254ee8();
  func_0x000107c567e4(puVar5);
  func_0x000107c61170(puVar23);
  lVar10 = *(long *)(unaff_x20 + _DAT_112d6c9c8);
  func_0x000107c61604(lVar10 + 0x108,uVar24);
  puVar19 = unaff_x20;
  FUN_1012570a8();
  func_0x000107c573a4(puVar5);
  func_0x000107c61170(puVar19);
  if (((*(long *)(lVar10 + 0x110) != 0) &&
      (lVar10 = *(long *)(unaff_x20 + _DAT_112d6c890), lVar10 != 0)) &&
     (func_0x000107c61428(lVar10 + 0x18,auStack_c0,0,0), *(long *)(lVar10 + 0x18) != 0)) {
    func_0x000107c3d890();
  }
  func_0x000100083b20(&puStack_a8);
  puVar23 = puStack_a8;
  puVar19 = &UNK_11039a0b0;
  func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
  func_0x000107c61614(puVar19 + 0x10);
  func_0x000107c61174();
  func_0x000107c6157c(puVar19);
  puVar21 = puVar9;
  FUN_101266d1c(puVar9,FUN_101267100,puVar19,puVar23);
  func_0x000107c61574(puVar23);
  func_0x000107c61170(puVar9);
  uVar7 = 2;
  func_0x000107c61578(puVar19);
  if (puVar21 != (undefined *)0x0) {
    func_0x000107c54e38(puVar5);
    func_0x000107c61170(puVar21);
  }
  puVar19 = PTR_PTR_1126a6830;
  func_0x000107c610f8(PTR_PTR_1126a6830);
  func_0x000107c453e4();
  func_0x000107c58b90(puVar5);
  func_0x000107c61170(puVar19);
  puVar23 = puVar5;
  func_0x000107c51618(puVar5);
  func_0x000107c61180();
  puVar21 = puVar23;
  func_0x000100083b20(&puStack_a8);
  puVar19 = puStack_a8;
  FUN_10125b434();
  func_0x000107c61574(puVar19);
  func_0x000107c58b88(puVar23);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar21);
  puVar19 = puVar5;
  func_0x000107c51618();
  func_0x000107c61180();
  puVar23 = puVar19;
  FUN_10125a39c();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_11039a1d8;
  ppuVar15 = &puStack_a8;
  pcStack_88 = (code *)puVar23;
  puStack_80 = (undefined *)uVar7;
  func_0x000107c60bc4(ppuVar15);
  func_0x000107c61574(puStack_80);
  func_0x000107c56e38(puVar19);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar13);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(puVar16);
  func_0x000107c61574(puVar17);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar19);
  func_0x000107c61574(puVar18);
  return puVar4;
}



/* Entry: 101266714; end: 101266777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101266714(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + _DAT_112d6c868);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    *(long *)(param_2 + _DAT_112d6c868) = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    lVar1 = param_3;
  }
  *param_1 = lVar1;
  func_0x000107c61174(lVar2);
  return;
}



/* Entry: 101266778; end: 10126680f;  */

undefined8 FUN_101266778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000101251f94(param_2);
  func_0x000107c61574(uStack_28);
  return param_2;
}



/* Entry: 101266810; end: 10126687f;  */

void FUN_101266810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_101267160(param_1,param_2);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 101266880; end: 1012669db;  */

void FUN_101266880(long param_1)

{
  long lVar1;
  
  FUN_1012524a0();
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c451d0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (lRam0000000112d6be18 != -1) {
      func_0x000107c61568(0x112d6be18,0x101253e2c);
    }
    func_0x000107c615f0(uRam00000001137ff2a8);
  }
  return;
}



/* Entry: 1012669dc; end: 101266a07; -[_TtC24MyProfile3Implementation24MyProfile3ViewController initWithNibName:bundle:] */

void FUN_1012669dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.MyProfile3ViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101266a08);
  (*pcVar1)();
}



/* Entry: 101266a08; end: 101266a8b; -[_TtC24MyProfile3Implementation24MyProfile3ViewController didCompleteCommunityPillTapScope] */

/* WARNING: Possible PIC construction at 0x000101266a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101266a60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101266a48) */
/* WARNING: Removing unreachable block (ram,0x000101266a64) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101266a08(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101266a8c; end: 101266aaf;  */

void FUN_101266a8c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 != 0) {
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c41848();
      func_0x000107c615e8(lVar2);
    }
  }
  if (lVar1 != 0) {
    FUN_101277a34();
  }
  return;
}



/* Entry: 101266ab0; end: 101266ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101266ab0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6c868);
  func_0x000107c61174();
  return;
}



/* Entry: 101266ae8; end: 101266aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101266ae8(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  puVar2 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = *(long *)(puVar2 + _DAT_112d6c930);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar3 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSThread_1126b47e0;
        func_0x000107c61168();
        uVar1 = (uint)puVar7;
        func_0x000107c4a02c();
        uVar5 = (ulong)(uVar1 ^ 1);
        FUN_10126458c();
        if (uVar5 == 0) {
          pcVar8 = "dismiss()";
          func_0x0001000c10c0("dismiss()");
          func_0x000107c61180();
          puVar7 = &UNK_11039a0b0;
          func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,puVar2);
          uStack_78 = 0x101267284;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_1000f6b44;
          puStack_80 = &UNK_11039a2f0;
          ppuVar9 = &puStack_98;
          puStack_70 = puVar7;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c61574(puStack_70);
          func_0x000107c4e524(pcVar8);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c615e8(pcVar8);
          uVar10 = 0xd00000000000001a;
          func_0x000107c5fadc(0xd00000000000001a,0x800000010ef31f40);
          uVar11 = 0xd000000000000013;
          func_0x000107c5fadc(0xd000000000000013,0x800000010ef31f90);
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
          func_0x000107c42a5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar11);
          func_0x00010488ade0(puVar7);
          func_0x000107c61170(puVar2);
          func_0x000107c615e8(lVar3);
        }
        else {
          puVar7 = PTR_PTR_1126a6838;
          func_0x000107c610f8(PTR_PTR_1126a6838);
          func_0x000107c453e4();
          puVar6 = PTR_PTR_1126a6840;
          func_0x000107c610f8();
          func_0x000107c49520();
          puStack_98 = puVar6;
          func_0x000100b60084(&puStack_98);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(lVar3);
          puVar7 = puVar2;
        }
        goto LAB_101264934;
      }
    }
    func_0x000107c61170(puVar2);
  }
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef31f40);
  uVar10 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef31f60);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x00010488ade0(puVar7);
LAB_101264934:
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101266b00; end: 101266b1f;  */

void FUN_101266b00(void)

{
  func_0x000107c61168(&PTR_PTR_1127c01c8);
  return;
}



/* Entry: 101266b20; end: 101266d1b;  */

long FUN_101266b20(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1012527e4(&lStack_98);
  if (lStack_98 != 0) {
    uVar1 = 0;
    func_0x00010128321c(0);
    lVar2 = lStack_90;
    func_0x000107c61480(lStack_90,uVar1);
    if (lVar2 == 0) {
      func_0x000107c615e8(lStack_90);
      func_0x000107c61170(lStack_98);
    }
    else {
      lVar2 = lStack_90;
      func_0x000107c615f0();
      func_0x000101282a70();
      lVar3 = lStack_98;
      func_0x000107c61174();
      uVar1 = uStack_78;
      func_0x000107c61174();
      func_0x00010127af80(param_1,lStack_98,uStack_80,param_4,uVar1,uStack_70);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar1);
      if ((param_1 & 1) != 0) {
        puVar4 = PTR_PTR_1126a67a0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c552f8();
        lVar5 = 0;
        func_0x000101252770();
        func_0x000107c613fc();
        puVar6 = PTR__OBJC_CLASS___NSCondition_1126db998;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c615e8(lStack_90);
        *(undefined2 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined **)(lVar5 + 0x10) = puVar4;
        *(undefined **)(lVar5 + 0x18) = puVar6;
        puVar4 = &UNK_11039a288;
        func_0x000107c613fc(&UNK_11039a288,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_4);
        puVar6 = &UNK_11039a2b0;
        func_0x000107c613fc(&UNK_11039a2b0,0x50,7);
        *(long *)(puVar6 + 0x10) = lVar2;
        *(long *)(puVar6 + 0x18) = lVar3;
        *(long *)(puVar6 + 0x20) = lStack_90;
        *(undefined8 *)(puVar6 + 0x28) = uStack_88;
        *(undefined8 *)(puVar6 + 0x30) = uStack_80;
        *(undefined8 *)(puVar6 + 0x38) = uVar1;
        *(undefined8 *)(puVar6 + 0x40) = uStack_70;
        *(undefined **)(puVar6 + 0x48) = puVar4;
        *(code **)(lVar5 + 0x30) = FUN_101267274;
        *(undefined **)(lVar5 + 0x38) = puVar6;
        return lVar5;
      }
      func_0x000107c61170(lVar3);
      func_0x000107c615ec(lStack_90,2);
      func_0x000107c61574(lVar2);
      uStack_78 = uVar1;
    }
    uStack_68 = uStack_88;
    FUN_10126722c(&uStack_68);
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(uStack_78);
    func_0x000107c615e8(uStack_80);
  }
  return 0;
}



/* Entry: 101266d1c; end: 101266e1f;  */

undefined * FUN_101266d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(param_4 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11039a238;
    func_0x000107c613fc(&UNK_11039a238,0x30,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    *(undefined8 *)(puVar2 + 0x28) = param_3;
    puVar4 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    uStack_50 = 0x101267154;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101016bdc;
    puStack_58 = &UNK_11039a250;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_3);
    func_0x000107c46b38(puVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puStack_48);
  }
  return puVar4;
}



/* Entry: 101266e20; end: 101267093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101266e20(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d6c850) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c858) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c860) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c868) = 0;
  lVar1 = _DAT_112d6c870;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112d6c878,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c880) = 0;
  lVar1 = _DAT_112d6c888;
  lVar4 = 0;
  FUN_10125ff30();
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x000100431464();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  func_0x000107c61614(lVar4 + 0x20,0);
  *(undefined1 *)(lVar4 + 0x28) = 0;
  puVar5 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(lVar4 + 0x30) = puVar5;
  *(long *)(unaff_x20 + lVar1) = lVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c890) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c898) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d6c8a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6c8a8) = 0;
  lVar1 = _DAT_112d6c8b0;
  uVar3 = 0;
  FUN_10124cecc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c8b8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d6c8c0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8c8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c8d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8e0) = 1;
  lVar1 = _DAT_112d6c8e8;
  puVar5 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8f0) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c8f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c900) = 2;
  lVar1 = _DAT_112d6c908;
  lVar4 = 0;
  func_0x000101253558();
  func_0x000107c613fc();
  *(long *)(unaff_x20 + lVar1) = lVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c910) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6c918) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d6c920) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MyProfile3Implementation/MyProfile3ViewController.swift",0x37,2,0x8e,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101267094);
  (*pcVar2)();
}



/* Entry: 101267094; end: 1012670b7;  */

undefined8 FUN_101267094(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}


