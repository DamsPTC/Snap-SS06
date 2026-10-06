/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10316fc3c; end: 10316fc4b; -[_TtC19LensGamesChatDrawer36GamesDrawerCategoriesProviderFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316fc3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f46818));
  return;
}



/* Entry: 10316fc4c; end: 10316fc7f; -[_TtC19LensGamesChatDrawer29GamesDrawerCategoriesProvider categoriesResponse] */

void FUN_10316fc4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10316fc80();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10316fc80; end: 10316ff0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10316fc80(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x0001000285a8(0x112f46828,&UNK_10db93b70);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f46820);
  func_0x000107c3f6e4(uVar1);
  func_0x000107c61180();
  pcStack_50 = FUN_10316ffd4;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103170028;
  puStack_58 = &UNK_110616b98;
  func_0x000107c60bc4(&puStack_70);
  uVar3 = uVar1;
  func_0x000107c421bc(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
  uVar4 = uVar3;
  func_0x0001000b637c(uVar3);
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_110616bd0;
  func_0x000107c613fc(&UNK_110616bd0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  uVar3 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  uVar1 = 0x10317008c;
  func_0x0001000bfde0(0x10317008c,puVar5,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar5);
  func_0x0001004575f0();
  func_0x000107c61574(uVar1);
  return puVar5;
}



/* Entry: 10316ff0c; end: 10316ffd3; -[_TtC19LensGamesChatDrawer29GamesDrawerCategoriesProvider categoriesAggregator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316ff0c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f46820);
  func_0x000107c61174();
  func_0x000107c3f6e4(uVar3);
  func_0x000107c61180();
  pcStack_40 = FUN_10316ffd4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103170028;
  puStack_48 = &UNK_110616be8;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uVar3;
  func_0x000107c421bc(uVar3,param_2,ppuVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10316ffd4; end: 103170027;  */

void FUN_10316ffd4(undefined8 param_1)

{
  if (lRam0000000112f46808 != -1) {
    func_0x000107c61568(0x112f46808,FUN_10316f918);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf01990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_allowlistCategory__11259e008,uRam0000000113806ee8);
  return;
}



/* Entry: 103170028; end: 10317006f;  */

void FUN_103170028(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 103170070; end: 103170093;  */

void FUN_103170070(long param_1,long param_2)

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



/* Entry: 103170094; end: 1031700bf; -[_TtC19LensGamesChatDrawer29GamesDrawerCategoriesProvider init] */

void FUN_103170094(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.GamesDrawerCategoriesProvider",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031700c0);
  (*pcVar1)();
}



/* Entry: 1031700c0; end: 1031700c3;  */

void FUN_1031700c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031700c4; end: 103170117;  */

void FUN_1031700c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103170118; end: 103170133; -[_TtC19LensGamesChatDrawer29GamesDrawerCategoriesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f46820));
  return;
}



/* Entry: 103170134; end: 10317017f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170134(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f46880) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103170180; end: 10317019f;  */

void FUN_103170180(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc7c0);
  return;
}



/* Entry: 1031701a0; end: 10317021b; -[_TtC19LensGamesChatDrawer27GamesDrawerDataStoreFactory lensFeedDataStoreWithSectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031701a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f46880);
  FUN_103170180(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  FUN_103170604(param_3,param_2,uVar1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10317021c; end: 10317023b; -[_TtC19LensGamesChatDrawer27GamesDrawerDataStoreFactory remoteStateProviderForSectionId:] */

void FUN_10317021c(void)

{
  FUN_1031707a8(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10317023c; end: 10317023f; -[_TtC19LensGamesChatDrawer27GamesDrawerDataStoreFactory reset] */

void FUN_10317023c(void)

{
  return;
}



/* Entry: 103170240; end: 10317026b; -[_TtC19LensGamesChatDrawer27GamesDrawerDataStoreFactory init] */

void FUN_103170240(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.GamesDrawerDataStoreFactory",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317026c);
  (*pcVar1)();
}



/* Entry: 10317026c; end: 10317026f;  */

void FUN_10317026c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103170270; end: 10317027f; -[_TtC19LensGamesChatDrawer27GamesDrawerDataStoreFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f46880));
  return;
}



/* Entry: 103170280; end: 1031702cb; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C520GamesDrawerDataStore dataStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170280(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f468b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f468b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1031702cc; end: 1031702db; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C520GamesDrawerDataStore remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031702cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f468b8));
  return;
}



/* Entry: 1031702dc; end: 1031702eb; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C520GamesDrawerDataStore allItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031702dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f468c0));
  return;
}



/* Entry: 1031702ec; end: 1031702fb; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C520GamesDrawerDataStore isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031702ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f468c8));
  return;
}



/* Entry: 1031702fc; end: 1031704df;  */

void FUN_1031702fc(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar9 = *param_2;
  uVar12 = uVar9 & 0xffffffffffffff8;
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar12 + 0x10);
  }
  else {
    uVar10 = uVar12;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(param_3);
  func_0x000107c61170(puVar7);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0;
  while( true ) {
    if (uVar10 == uVar11) {
      uVar8 = 0;
      FUN_1031707f0(0,0x112e56278,&PTR_PTR_1126ccc20);
      puVar6 = puVar7;
      func_0x000107c5fc48(puVar7,uVar8);
      func_0x000107c6142c(puVar7);
      *param_1 = puVar6;
      return;
    }
    if ((uVar9 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031704cc);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = uVar11;
      func_0x000100ff3f88(uVar11,uVar9);
    }
    uVar1 = uVar11 + 1;
    if (SCARRY8(uVar11,1)) break;
    uVar4 = uVar1;
    FUN_1031781ec();
    func_0x000107c61170(uVar3);
    uVar11 = uVar11 + 1;
    if (uVar4 != 0) {
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_103174ed0(0,puVar5 + 1,1,puVar7);
      }
      uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar3 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar11) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_103174ed0(puVar7,uVar11 + 1,1,puVar6);
        uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar3 + uVar11 * 8 + 0x20) = uVar4;
      uVar11 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031704c8);
  (*pcVar2)();
}



/* Entry: 1031704e0; end: 10317050b; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C520GamesDrawerDataStore init] */

void FUN_1031704e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.GamesDrawerDataStore",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317050c);
  (*pcVar1)();
}



/* Entry: 10317050c; end: 103170567; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C520GamesDrawerDataStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010317053c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103170540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317050c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f468b0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f468b8));
  return;
}



/* Entry: 103170568; end: 103170577; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C530GamesDrawerRemoteStateProvider remoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f468f8));
  return;
}



/* Entry: 103170578; end: 1031705bf; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C530GamesDrawerRemoteStateProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170578(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f468f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031705c0; end: 1031705f3;  */

void FUN_1031705c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031705f4; end: 103170603; -[_TtC19LensGamesChatDrawerP33_F0E6E760B3C796A9BF13781141F433C530GamesDrawerRemoteStateProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031705f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f468f8));
  return;
}



/* Entry: 103170604; end: 1031707a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170604(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f468b8) = 0;
  if (lRam0000000112f46810 != -1) {
    func_0x000107c61568(0x112f46810,0x10316f8d8);
  }
  uVar5 = uRam0000000113806ed0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f468b0);
  *puVar1 = uRam0000000113806ec8;
  puVar1[1] = uVar5;
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61434(uVar5);
  func_0x000107c46db0();
  puVar3 = puVar2;
  func_0x000107c43bf4();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112f468c8) = puVar3;
  func_0x0001000d224c(&uStack_48);
  FUN_103171910();
  func_0x000107c61574(uStack_48);
  puVar4 = &UNK_110616c20;
  func_0x000107c613fc(&UNK_110616c20,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  uVar5 = 0;
  FUN_1031707f0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61174(puVar2);
  pcVar6 = FUN_1031707e8;
  func_0x0001000bfde0(FUN_1031707e8,puVar4,uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574();
  func_0x0001004575f0();
  func_0x000107c61574(pcVar6);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + _DAT_112f468c0) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031707a8; end: 1031707e7;  */

void FUN_1031707a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc898);
  return;
}



/* Entry: 1031707e8; end: 1031707ef;  */

void FUN_1031707e8(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *param_2;
  uVar12 = uVar9 & 0xffffffffffffff8;
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar12 + 0x10);
  }
  else {
    uVar10 = uVar12;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar8);
  func_0x000107c61170(puVar7);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0;
  while( true ) {
    if (uVar10 == uVar11) {
      uVar8 = 0;
      FUN_1031707f0(0,0x112e56278,&PTR_PTR_1126ccc20);
      puVar6 = puVar7;
      func_0x000107c5fc48(puVar7,uVar8);
      func_0x000107c6142c(puVar7);
      *param_1 = puVar6;
      return;
    }
    if ((uVar9 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031704cc);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = uVar11;
      func_0x000100ff3f88(uVar11,uVar9);
    }
    uVar1 = uVar11 + 1;
    if (SCARRY8(uVar11,1)) break;
    uVar4 = uVar1;
    FUN_1031781ec();
    func_0x000107c61170(uVar3);
    uVar11 = uVar11 + 1;
    if (uVar4 != 0) {
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_103174ed0(0,puVar5 + 1,1,puVar7);
      }
      uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar3 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar11) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_103174ed0(puVar7,uVar11 + 1,1,puVar6);
        uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar3 + uVar11 * 8 + 0x20) = uVar4;
      uVar11 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031704c8);
  (*pcVar2)();
}



/* Entry: 1031707f0; end: 10317082f;  */

void FUN_1031707f0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103170830; end: 103170837;  */

void FUN_103170830(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103170838; end: 103170883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170838(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f46928) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103170884; end: 10317094f; -[_TtC19LensGamesChatDrawer32GamesDrawerQueryContextDecorator decorateCategoriesProviderFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  puVar2 = PTR_PTR_1126cce30;
  func_0x000107c610f8(PTR_PTR_1126cce30);
  func_0x000107c615f0(param_3);
  func_0x000107c468c4(puVar2);
  uVar3 = param_3;
  func_0x000107c3f6ec();
  func_0x000107c61180();
  lVar4 = 0;
  func_0x0001031700f8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f46818) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c615f0(uVar3);
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar6);
  return;
}



/* Entry: 103170950; end: 1031709b7; -[_TtC19LensGamesChatDrawer32GamesDrawerQueryContextDecorator decorateDataStoreFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170950(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_30;
  long lStack_28;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f46928);
  lVar2 = 0;
  func_0x0001031707c8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f46880) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031709b8; end: 1031709db; -[_TtC19LensGamesChatDrawer32GamesDrawerQueryContextDecorator decorateQueryCoordinatorFactory:auxiliaryNamespaceWriter:] */

void FUN_1031709b8(void)

{
  FUN_103170af8(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031709dc; end: 103170a13; -[_TtC19LensGamesChatDrawer32GamesDrawerQueryContextDecorator decorateSectionConfigurationsDataStore:] */

void FUN_1031709dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103171298(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  FUN_103170e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103170a14; end: 103170a73; -[_TtC19LensGamesChatDrawer32GamesDrawerQueryContextDecorator init] */

void FUN_103170a14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.GamesDrawerQueryContextDecorator",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103170a40);
  (*pcVar1)();
}



/* Entry: 103170a74; end: 103170a83; -[_TtC19LensGamesChatDrawer32GamesDrawerQueryContextDecorator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f46928));
  return;
}



/* Entry: 103170a84; end: 103170ac3;  */

void FUN_103170a84(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc950);
  return;
}



/* Entry: 103170ac4; end: 103170ae3; -[_TtC19LensGamesChatDrawer34GamesDrawerQueryCoordinatorFactory lensQueryCoordinatorWithSectionIdentifier:] */

void FUN_103170ac4(void)

{
  func_0x000103170aa4(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103170ae4; end: 103170af7; -[_TtC19LensGamesChatDrawer34GamesDrawerQueryCoordinatorFactory reset] */

void FUN_103170ae4(void)

{
  return;
}



/* Entry: 103170af8; end: 103170b17;  */

void FUN_103170af8(void)

{
  func_0x000107c61168(&PTR_PTR_112f46998);
  return;
}



/* Entry: 103170b18; end: 103170b27; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f469f0));
  return;
}



/* Entry: 103170b28; end: 103170b5b; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator setIsEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f469f0);
  *(undefined8 *)(param_1 + _DAT_112f469f0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103170b5c; end: 103170b6b; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103170b5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f469f8);
}



/* Entry: 103170b6c; end: 103170b7b; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator setIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170b6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f469f8) = param_3;
  return;
}



/* Entry: 103170b7c; end: 103170b8b; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator currentQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f46a00));
  return;
}



/* Entry: 103170b8c; end: 103170bbf; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator setCurrentQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f46a00);
  *(undefined8 *)(param_1 + _DAT_112f46a00) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103170bc0; end: 103170c73; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170bc0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112f469f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f46a00) = 0;
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined **)(param_1 + _DAT_112f469f0) = puVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103170c74; end: 103170c7b; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator canPerformQuery:] */

undefined8 FUN_103170c74(void)

{
  return 1;
}



/* Entry: 103170c7c; end: 103170d57;  */

/* WARNING: Possible PIC construction at 0x000103170cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103170d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103170d3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103170cb0) */
/* WARNING: Removing unreachable block (ram,0x000103170d40) */
/* WARNING: Removing unreachable block (ram,0x000103170ce0) */
/* WARNING: Removing unreachable block (ram,0x000103170d2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170c7c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f46a00);
  *(undefined8 *)(unaff_x20 + _DAT_112f46a00) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103170d58; end: 103170e03; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator resultsForQuery:updatingBlock:] */

/* WARNING: Possible PIC construction at 0x000103170de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103170dec) */

void FUN_103170d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110616c48;
    func_0x000107c613fc(&UNK_110616c48,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x103170e88;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103170c7c(param_3,uVar2,puVar1);
  FUN_103170e78(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103170e04; end: 103170e07; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_103170e04(void)

{
  return;
}



/* Entry: 103170e08; end: 103170e0b; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator reset] */

void FUN_103170e08(void)

{
  return;
}



/* Entry: 103170e0c; end: 103170e3f;  */

void FUN_103170e0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103170e40; end: 103170e77; -[_TtC19LensGamesChatDrawerP33_1B111DBA47000F1F262BDF7A9A5C676827GamesDrawerQueryCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103170e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103170e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f469f0));
  return;
}



/* Entry: 103170e78; end: 103170e97;  */

void FUN_103170e78(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103170e98; end: 1031711b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103170e98(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  
  func_0x000107c614f0();
  if (lRam0000000112f46800 != -1) {
    func_0x000107c61568(0x112f46800,FUN_10316f8b8);
  }
  uVar1 = uRam0000000113806ec0;
  uVar12 = uRam0000000113806eb8;
  puVar3 = PTR_PTR_1126ccbc8;
  func_0x000107c610f8(PTR_PTR_1126ccbc8);
  uVar4 = uVar12;
  func_0x000107c5fadc(uVar12,uVar1);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c48544(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ccf20;
  func_0x000107c610f8(PTR_PTR_1126ccf20);
  uVar4 = uVar12;
  func_0x000107c5fadc(uVar12,uVar1);
  func_0x000107c47554(puVar5);
  func_0x000107c61170(uVar4);
  uVar6 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c60108(0x4020000000000000);
  uVar4 = uVar6;
  func_0x000107c60108(0x4028000000000000);
  uVar7 = uVar4;
  func_0x000107c60108(0x4034000000000000);
  puVar8 = PTR_PTR_1126acd00;
  func_0x000107c610f8(PTR_PTR_1126acd00);
  func_0x000107c46cf0();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  puVar9 = PTR_PTR_1126acd08;
  func_0x000107c610f8();
  func_0x000107c486b0();
  if (puVar9 != (undefined *)0x0) {
    puVar10 = PTR_PTR_1126ccd88;
    func_0x000107c61168(PTR_PTR_1126ccd88);
    func_0x000107c5dd24();
    func_0x000107c61180();
    puVar11 = PTR_PTR_1126ccd80;
    func_0x000107c610f8(PTR_PTR_1126ccd80);
    func_0x000107c48904(0x3ff0000000000000,0);
    func_0x000107c61170(puVar10);
    puVar10 = PTR_PTR_1126ccc58;
    func_0x000107c610f8(PTR_PTR_1126ccc58);
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(puVar11);
    func_0x000107c61174(puVar8);
    func_0x000107c61174();
    func_0x000107c5fadc(uVar12,uVar1);
    func_0x000107c4854c(puVar10);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar12);
    func_0x000107c5bee0(param_1);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    *(undefined8 *)(unaff_x20 + _DAT_112f46a30) = param_1;
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031711b8);
  (*pcVar2)();
}



/* Entry: 1031711b8; end: 1031711df; -[_TtC19LensGamesChatDrawer41GamesDrawerSectionConfigurationsDataStore feedConfigurationWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031711b8(long param_1)

{
  func_0x000107c42f0c(*(undefined8 *)(param_1 + _DAT_112f46a30));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031711e0; end: 103171207; -[_TtC19LensGamesChatDrawer41GamesDrawerSectionConfigurationsDataStore feedConfigurationsWithIdentifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031711e0(long param_1)

{
  func_0x000107c42f10(*(undefined8 *)(param_1 + _DAT_112f46a30));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103171208; end: 103171217; -[_TtC19LensGamesChatDrawer41GamesDrawerSectionConfigurationsDataStore storeFeedConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103171208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c257770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f46a30),PTR_s_storeFeedConfiguration__112673800);
  return;
}



/* Entry: 103171218; end: 103171227; -[_TtC19LensGamesChatDrawer41GamesDrawerSectionConfigurationsDataStore reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103171218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f46a30),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 103171228; end: 103171287; -[_TtC19LensGamesChatDrawer41GamesDrawerSectionConfigurationsDataStore init] */

void FUN_103171228(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.GamesDrawerSectionConfigurationsDataStore",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103171254);
  (*pcVar1)();
}



/* Entry: 103171288; end: 103171297; -[_TtC19LensGamesChatDrawer41GamesDrawerSectionConfigurationsDataStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103171288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f46a30));
  return;
}



/* Entry: 103171298; end: 10317130b;  */

void FUN_103171298(void)

{
  func_0x000107c61168(&PTR_PTR_1128bcad8);
  return;
}



/* Entry: 10317130c; end: 103171383;  */

undefined8 FUN_10317130c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 103171384; end: 1031713cf;  */

void FUN_103171384(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031713d0; end: 103171447;  */

void FUN_1031713d0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103171448; end: 10317144b;  */

void FUN_103171448(void)

{
  return;
}



/* Entry: 10317144c; end: 1031714f3;  */

long FUN_10317144c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001000285a8(0x112f46bb8,&UNK_10db93dd0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_5);
  pcVar1 = FUN_1031715d0;
  func_0x0001000bdd8c(FUN_1031715d0,param_5);
  *(code **)(unaff_x20 + 0x38) = pcVar1;
  return unaff_x20;
}



/* Entry: 1031714f4; end: 1031715cf;  */

void FUN_1031714f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001000285a8(0x112f46bb8,&UNK_10db93dd0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_5);
  uVar1 = 0x10317190c;
  func_0x0001000bdd8c(0x10317190c,param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 1031715d0; end: 1031715d7;  */

void FUN_1031715d0(long *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000103172b84();
  func_0x000107c613fc();
  pcVar2 = "GamesDrawerSelectedLensHydrator";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  *(char **)(lVar1 + 0x18) = pcVar2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1031715d8; end: 103171893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1031715d8(undefined8 param_1,undefined **param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130344b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar5 = 0;
    param_2 = (undefined **)0x0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c49b40();
    if ((int)lVar5 == 0) {
      func_0x0001031716f0();
      func_0x000107c615e8(lVar1);
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c41284();
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102e007d0(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar4 = uVar2;
      FUN_1033bc5a8(uVar2,uVar6,9,0,puVar3);
      func_0x000107c615e8(uVar2);
      func_0x000107c6142c(puVar3);
      func_0x000107c615e8(lVar1);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
      lVar5 = 0;
      func_0x0001031713b0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = uVar4;
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      *(undefined8 *)(lVar5 + 0x10) = uVar2;
      func_0x000107c6157c(uVar2);
      param_2 = &PTR_DAT_110616c80;
    }
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 103171894; end: 1031718ff;  */

void FUN_103171894(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103171900; end: 10317190f;  */

void FUN_103171900(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103171910; end: 103171957;  */

long FUN_103171910(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x40) = lVar2;
    func_0x000107c61580(lVar2,2);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 103171958; end: 103171eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103171958(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  long unaff_x20;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  double dVar20;
  long lStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar15 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12_00;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar12 - extraout_x12_02;
  func_0x000107c5eea0(lVar19);
  lVar2 = _DAT_112f46c90;
  func_0x000107c61428(unaff_x20 + _DAT_112f46c90,auStack_88,0,0);
  func_0x0001009f0578(unaff_x20 + lVar2,lVar16);
  pcVar18 = *(code **)(lVar13 + 0x30);
  lVar4 = lVar16;
  (*pcVar18)(lVar16,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x0001000d1dcc(lVar16);
    dVar20 = param_1;
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar12,lVar16,lVar3);
    func_0x000107c5ee68(lVar12);
    pcVar14 = *(code **)(lVar13 + 8);
    (*pcVar14)(lVar12,lVar3);
    dVar20 = 30.0;
    if (param_1 < 30.0) goto LAB_103171bf4;
  }
  (**(code **)(lVar13 + 0x10))(lVar17,lVar19,lVar3);
  (**(code **)(lVar13 + 0x38))(lVar17,0,1,lVar3);
  func_0x000107c61428(unaff_x20 + lVar2,&puStack_d0,0x21,0);
  func_0x000100ed9cbc(lVar17,unaff_x20 + lVar2);
  func_0x000107c614a8(&puStack_d0);
  lVar2 = _DAT_112f46c98;
  func_0x000107c61428(unaff_x20 + _DAT_112f46c98,auStack_a0,0,0);
  func_0x0001009f0578(unaff_x20 + lVar2,lVar15);
  lVar4 = lVar15;
  (*pcVar18)(lVar15,1,lVar3);
  lVar2 = lStack_e0;
  if ((int)lVar4 == 1) {
    func_0x0001000d1dcc(lVar15);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lStack_e0,lVar15,lVar3);
    func_0x000107c5ee68(lVar2);
    pcVar14 = *(code **)(lVar13 + 8);
    (*pcVar14)(lVar2,lVar3);
    if (dVar20 < 1800.0) {
LAB_103171bf4:
      (*pcVar14)(lVar19,lVar3);
      return;
    }
  }
  func_0x0001000d224c(&puStack_d0);
  puVar11 = puStack_d0;
  if (puStack_d0 == (undefined *)0x0) {
    pcVar18 = *(code **)(lVar13 + 8);
LAB_103171e58:
    (*pcVar18)(lVar19,lVar3);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar5 = PTR_PTR_1126b6868;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c47914();
    func_0x000107c61170(uVar6);
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(lVar13 + 8))(lVar19,lVar3);
    }
    else {
      lVar2 = 0x112d53088;
      FUN_10317250c(0x112d53088,&PTR_PTR_1126b6868,0x112d53090,&UNK_10d919920);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 3;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined **)(lVar2 + 0x20) = puVar5;
      uVar6 = 0;
      func_0x0001031726c8(0,0x112d53088,&PTR_PTR_1126b6868);
      func_0x000107c61174(puVar5);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar6);
      func_0x000107c61574(lVar2);
      puVar7 = puVar11;
      func_0x000107c4cfd0();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c615e8(puVar11);
        func_0x000107c61170(puVar5);
        pcVar18 = *(code **)(lVar13 + 8);
        goto LAB_103171e58;
      }
      puVar8 = puVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(lVar13 + 8))(lVar19,lVar3);
        func_0x000107c61170(puVar5);
      }
      else {
        puVar9 = puVar8;
        func_0x000107c4cd74();
        func_0x000107c61180();
        puVar7 = &UNK_110616cb0;
        func_0x000107c613fc(&UNK_110616cb0,0x18,7);
        func_0x000107c61644(puVar7 + 0x10,unaff_x20);
        pcStack_b0 = FUN_103172584;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        pcStack_c0 = FUN_103172414;
        puStack_b8 = &UNK_110616cc8;
        ppuVar10 = &puStack_d0;
        puStack_a8 = puVar7;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c61574(puStack_a8);
        puVar7 = puVar9;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(puVar9);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
        *(undefined **)(unaff_x20 + 0x28) = puVar7;
        func_0x000107c61170(uVar6);
        func_0x000107c5bc1c(puVar8);
        func_0x000107c61170(puVar5);
        func_0x000107c615e8(puVar11);
        (**(code **)(lVar13 + 8))(lVar19,lVar3);
        puVar11 = *(undefined **)(unaff_x20 + 0x30);
        *(undefined **)(unaff_x20 + 0x30) = puVar8;
      }
    }
    func_0x000107c615e8(puVar11);
  }
  return;
}



/* Entry: 103171eac; end: 103171eff;  */

undefined8 FUN_103171eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103171f00(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 103171f00; end: 103171fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103171f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x0001000285a8(0x112f467e8,&UNK_10db93b40);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  lVar1 = _DAT_112f46c98;
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar4)(unaff_x20 + lVar1,1,1,lVar3);
  (*pcVar4)(unaff_x20 + _DAT_112f46c90,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103171fcc; end: 103172027;  */

void FUN_103171fcc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103172028(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103172028; end: 103172413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172028(undefined *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  ulong uVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar12 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_c8 = auStack_d0 + -extraout_x8;
  func_0x000107c3d128();
  func_0x000107c61180();
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001031726c8(0,0x112d530b0,&PTR_PTR_1126d8840);
    puVar15 = param_1;
    func_0x000107c5fc54(param_1,uVar6);
    func_0x000107c61170(param_1);
  }
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar14 = puVar15;
    }
    func_0x000107c60480();
  }
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar14 != (undefined *)0x0) {
    uStack_b0 = (ulong)puVar15 & 0xffffffffffffff8;
    puVar11 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar15 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_b0 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103172314);
            (*pcVar5)();
          }
          puVar7 = *(undefined **)(puVar15 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174(puVar7);
        }
        else {
          puVar7 = puVar11;
          func_0x000100ff3f74(puVar11,puVar15);
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103172310);
          (*pcVar5)();
        }
        lStack_78 = 0;
        puVar8 = &UNK_110616d00;
        func_0x000107c613fc(&UNK_110616d00,0x18,7);
        *(long **)(puVar8 + 0x10) = &lStack_78;
        puVar9 = &UNK_110616d28;
        func_0x000107c613fc(&UNK_110616d28,0x20,7);
        *(undefined8 *)(puVar9 + 0x10) = 0x10317267c;
        *(undefined **)(puVar9 + 0x18) = puVar8;
        uStack_88 = 0x1031726a8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100fe4704;
        puStack_90 = &UNK_110616d40;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar4 = puStack_80;
        func_0x000107c6157c(puVar9);
        func_0x000107c61574(puVar4);
        func_0x000107c4c5c4(puVar7);
        func_0x000107c61170(puVar7);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61574(puVar8);
        puVar7 = puVar9;
        func_0x000107c61544(puVar9,"",0x4f,0x6c,0x23,1);
        func_0x000107c61574(puVar9);
        lVar12 = lStack_78;
        if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103172318);
          (*pcVar5)();
        }
        if (lStack_78 != 0) break;
        puVar11 = puVar11 + 1;
        if (puVar1 == puVar14) goto LAB_103172340;
      }
      puVar11 = puStack_b8;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puStack_b8 < 0)) ||
         (puVar11 = puStack_b8, ((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_b8 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_b8) {
            puVar7 = puStack_b8;
          }
          func_0x000107c60480(puVar7);
        }
        puVar11 = (undefined *)0x0;
        func_0x000100fe2a60(0,puVar7 + 1,1,puStack_b8);
      }
      uVar13 = (ulong)puVar11 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar13 + 0x10);
      puStack_b8 = puVar11;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
        puStack_b8 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        func_0x000100fe2a60(puStack_b8,uVar2 + 1,1,puVar11);
        uVar13 = (ulong)puStack_b8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
      *(long *)(uVar13 + uVar2 * 8 + 0x20) = lVar12;
      puVar11 = puVar1;
    } while (puVar1 != puVar14);
  }
LAB_103172340:
  func_0x000107c6142c(puVar15);
  puStack_a8 = puStack_b8;
  func_0x000100087c34(&puStack_a8);
  if ((ulong)puStack_b8 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_b8) {
      puVar15 = puStack_b8;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(puStack_b8);
  puVar3 = puStack_c8;
  if (puVar15 != (undefined *)0x0) {
    func_0x000107c5eea0(puStack_c8);
    lVar12 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(puVar3,0,1,lVar12);
    lVar12 = _DAT_112f46c98;
    func_0x000107c61428(unaff_x20 + _DAT_112f46c98,&puStack_a8,0x21,0);
    func_0x000100ed9cbc(puVar3,unaff_x20 + lVar12);
    func_0x000107c614a8(&puStack_a8);
  }
  return;
}



/* Entry: 103172414; end: 10317245f;  */

void FUN_103172414(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103172460; end: 1031724e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172460(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001000d1dcc(unaff_x20 + _DAT_112f46c98);
  func_0x0001000d1dcc(unaff_x20 + _DAT_112f46c90);
  return;
}



/* Entry: 1031724e8; end: 10317250b;  */

void FUN_1031724e8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f46d88;
  plVar5 = (long *)&UNK_10dbbec90;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001031726c8(0,0x112e56278,&PTR_PTR_1126ccc20);
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



/* Entry: 10317250c; end: 103172583;  */

void FUN_10317250c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001031726c8(0,param_1,param_2);
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



/* Entry: 103172584; end: 1031725af;  */

void FUN_103172584(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103172028(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1031725b0; end: 1031725e7;  */

void FUN_1031725b0(undefined8 param_1)

{
  if (lRam0000000112f46cc8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74c4f4);
  return;
}



/* Entry: 1031725e8; end: 103172707;  */

void FUN_1031725e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_60 = PTR___sBoWV_11034d678 + 0x40;
  puStack_58 = &UNK_10db93ea8;
  puStack_50 = &UNK_10db93ec0;
  puStack_48 = &UNK_10db93ec0;
  puStack_38 = &UNK_10db93ec0;
  lVar1 = 0x13f;
  puStack_40 = puStack_60;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c61630(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 103172708; end: 10317270f;  */

void FUN_103172708(long param_1,long param_2)

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



/* Entry: 103172710; end: 10317296f;  */

/* WARNING: Possible PIC construction at 0x000103172788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103172810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317294c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103172814) */
/* WARNING: Removing unreachable block (ram,0x00010317278c) */
/* WARNING: Removing unreachable block (ram,0x0001031727a0) */
/* WARNING: Removing unreachable block (ram,0x0001031727a8) */
/* WARNING: Removing unreachable block (ram,0x000103172918) */
/* WARNING: Removing unreachable block (ram,0x000103172934) */
/* WARNING: Removing unreachable block (ram,0x00010317291c) */
/* WARNING: Removing unreachable block (ram,0x00010317293c) */
/* WARNING: Removing unreachable block (ram,0x00010317294c) */
/* WARNING: Removing unreachable block (ram,0x0001031727c0) */
/* WARNING: Removing unreachable block (ram,0x0001031727d8) */
/* WARNING: Removing unreachable block (ram,0x0001031727f0) */
/* WARNING: Removing unreachable block (ram,0x000103172950) */

void FUN_103172710(undefined8 param_1,int param_2,char param_3,int param_4,undefined8 param_5,
                  long param_6,code *param_7)

{
  if ((param_3 == '\x01' || param_2 != 0) || param_4 != 0) {
    if (param_6 == 0) {
      func_0x000107c61174(param_1);
    }
    else {
      FUN_103172c2c(param_1,param_1,param_5,param_6);
    }
    (*param_7)();
  }
  else {
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103172970; end: 103172b53;  */

void FUN_103172970(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = 0;
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
    pcVar7 = (code *)0x0;
  }
  else {
    puVar6 = &UNK_110616dc8;
    func_0x000107c613fc(&UNK_110616dc8,0x18,7);
    *(long **)(puVar6 + 0x10) = &lStack_78;
    puVar2 = &UNK_110616df0;
    func_0x000107c613fc(&UNK_110616df0,0x20,7);
    pcVar7 = FUN_103172bd0;
    *(code **)(puVar2 + 0x10) = FUN_103172bd0;
    *(undefined **)(puVar2 + 0x18) = puVar6;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x103172bfc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2610;
    puStack_90 = &UNK_110616e08;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_80);
    pcStack_88 = FUN_103172b54;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2654;
    puStack_90 = &UNK_110616e30;
    ppuVar4 = &puStack_a8;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    if (lStack_78 != 0) {
      lVar5 = lStack_78;
      func_0x000107c61174();
      FUN_103172c2c(param_7,lVar5,param_5,param_6);
      (*param_3)();
      func_0x000107c61170(lVar5);
      pcVar7 = FUN_103172bd0;
      goto LAB_103172b14;
    }
  }
  if (param_6 == 0) {
    func_0x000107c61174(param_7);
  }
  else {
    FUN_103172c2c(param_7,param_7,param_5,param_6);
  }
  (*param_3)();
LAB_103172b14:
  func_0x000107c61170(param_7);
  func_0x000107c61170(lStack_78);
  func_0x0001016c1ed0(pcVar7,puVar6);
  return;
}



/* Entry: 103172b54; end: 103172b57;  */

void FUN_103172b54(void)

{
  return;
}



/* Entry: 103172b58; end: 103172ba3;  */

void FUN_103172b58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103172ba4; end: 103172bcf;  */

void FUN_103172ba4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  code *pcVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  lStack_78 = 0;
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
    pcVar11 = (code *)0x0;
  }
  else {
    puVar10 = &UNK_110616dc8;
    func_0x000107c613fc(&UNK_110616dc8,0x18,7,*(undefined8 *)(unaff_x20 + 0x18));
    *(long **)(puVar10 + 0x10) = &lStack_78;
    puVar5 = &UNK_110616df0;
    func_0x000107c613fc(&UNK_110616df0,0x20,7);
    pcVar11 = FUN_103172bd0;
    *(code **)(puVar5 + 0x10) = FUN_103172bd0;
    *(undefined **)(puVar5 + 0x18) = puVar10;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x103172bfc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2610;
    puStack_90 = &UNK_110616e08;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_80);
    pcStack_88 = FUN_103172b54;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar4;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fe2654;
    puStack_90 = &UNK_110616e30;
    ppuVar7 = &puStack_a8;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    if (lStack_78 != 0) {
      lVar8 = lStack_78;
      func_0x000107c61174();
      FUN_103172c2c(uVar9,lVar8,uVar2,lVar3);
      (*pcVar1)();
      func_0x000107c61170(lVar8);
      pcVar11 = FUN_103172bd0;
      goto LAB_103172b14;
    }
  }
  if (lVar3 == 0) {
    func_0x000107c61174(uVar9);
  }
  else {
    FUN_103172c2c(uVar9,uVar9,uVar2,lVar3);
  }
  (*pcVar1)();
LAB_103172b14:
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lStack_78);
  func_0x0001016c1ed0(pcVar11,puVar10);
  return;
}



/* Entry: 103172bd0; end: 103172c1b;  */

void FUN_103172bd0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103172c1c; end: 103172c2b;  */

void FUN_103172c1c(long param_1,long param_2)

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


