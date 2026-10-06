/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002885fc; end: 100288607; +[SCBlizzardEventLoggerAdapter setIsUserTrackedLoggerInitialized:] */

void FUN_1002885fc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam00000001136c4ac8 = param_3;
  return;
}



/* Entry: 100288608; end: 10028869f;  */

void FUN_100288608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e12f98,&UNK_10d9ee690);
  puVar1 = &UNK_110465e80;
  func_0x000107c613fc(&UNK_110465e80,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1007ea818,puVar1);
  return;
}



/* Entry: 1002886a0; end: 1002886bf;  */

void FUN_1002886a0(void)

{
  func_0x000107c61168(&PTR_PTR_112e13010);
  return;
}



/* Entry: 1002886c0; end: 1002886cb; +[SCBlizzard setRtusClientCacheManager:] */

void FUN_1002886c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uRam00000001136c4b78,PTR_s_setRtusClientCacheManager__112659560);
  return;
}



/* Entry: 1002886cc; end: 1002886fb; -[SCBlizzardRtusEventRouter setRtusClientCacheManager:] */

void FUN_1002886cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1002886fc; end: 100288717;  */

void FUN_1002886fc(undefined8 param_1)

{
  FUN_1000285a8(0x112e12fa0,&UNK_10d9ee698);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007ea7bc,param_1);
  return;
}



/* Entry: 100288718; end: 100288767;  */

void FUN_100288718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100288768; end: 100288773;  */

void FUN_100288768(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_48);
  uVar3 = uVar1;
  FUN_100288810(uVar1,uVar2,uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_48);
  *param_1 = uVar3;
  return;
}



/* Entry: 100288774; end: 10028880f;  */

void FUN_100288774(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_48);
  uVar2 = param_2;
  FUN_100288810(param_2,uVar1,uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_48);
  *param_1 = uVar2;
  return;
}



/* Entry: 100288810; end: 100288a17;  */

void FUN_100288810(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6071c();
  puVar1 = PTR_PTR_1126ae720;
  dVar5 = 1.60807493534087e-314;
  func_0x000107c61174(param_2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c421c0();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126b65a8;
  func_0x000107c610f4(PTR_PTR_1126b65a8);
  func_0x000107c46efc();
  uVar3 = param_4;
  func_0x000107c5da68();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c49e14();
  func_0x000107c61170(uVar3);
  if ((int)uVar4 != 0) {
    uVar3 = param_3;
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    func_0x000107c6071c();
    func_0x000107c4be90(dVar5 - param_1,uVar3);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100288a18; end: 100288a8b;  */

void FUN_100288a18(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b65d0;
  func_0x000107c61158(PTR_PTR_1126b65d0);
  uVar4 = uVar2;
  func_0x000107c6115c(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100288a8c; end: 100288aab;  */

void FUN_100288a8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720,uVar2,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1002bf824;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1002bf7e4;
  puStack_88 = &UNK_1104376b0;
  ppuVar6 = &puStack_a0;
  uStack_78 = uVar1;
  func_0x000107c60bc4(ppuVar6);
  uVar4 = uStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar4);
  puVar7 = puVar5;
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  pcStack_80 = FUN_100351aac;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1002bf7e4;
  puStack_88 = &UNK_1104376d8;
  ppuVar6 = &puStack_a0;
  uStack_78 = uVar2;
  func_0x000107c60bc4(ppuVar6);
  uVar1 = uStack_78;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  FUN_100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  func_0x0001000ad7c4();
  ppuVar8 = ppuVar6;
  FUN_100083b20(&uStack_a8);
  func_0x0001000ad7c4();
  puVar9 = puVar3;
  FUN_10029bef0(puVar3,ppuVar6,uStack_a8,ppuVar8,puVar7,puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(ppuVar6);
  func_0x000107c615e8(uStack_a8);
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  *param_1 = puVar9;
  return;
}



/* Entry: 100288aac; end: 100288c87;  */

void FUN_100288aac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1002bf824;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1002bf7e4;
  puStack_88 = &UNK_1104376b0;
  ppuVar4 = &puStack_a0;
  uStack_78 = param_2;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  puVar5 = puVar3;
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  pcStack_80 = FUN_100351aac;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1002bf7e4;
  puStack_88 = &UNK_1104376d8;
  ppuVar4 = &puStack_a0;
  uStack_78 = param_3;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  FUN_100083b20(&puStack_a0);
  puVar1 = puStack_a0;
  func_0x0001000ad7c4();
  ppuVar6 = ppuVar4;
  FUN_100083b20(&uStack_a8);
  func_0x0001000ad7c4();
  puVar7 = puVar1;
  FUN_10029bef0(puVar1,ppuVar4,uStack_a8,ppuVar6,puVar5,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(ppuVar4);
  func_0x000107c615e8(uStack_a8);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  *param_1 = puVar7;
  return;
}



/* Entry: 100288c88; end: 100288caf;  */

void FUN_100288c88(long param_1,long param_2)

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



/* Entry: 100288cb0; end: 100288eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100288cb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_113091ae0);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lVar2);
  puVar5 = &UNK_110437670;
  func_0x000107c613fc(&UNK_110437670,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  *(undefined8 *)(puVar5 + 0x20) = param_5;
  pcStack_78 = FUN_100288f4c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_100288f10;
  puStack_80 = &UNK_110437688;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_70;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar5);
  func_0x000107c4c6f8(uVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  FUN_100083b20(&puStack_98);
  puVar5 = puStack_98;
  func_0x000107c3e7c8(puStack_98);
  func_0x000107c61170(puVar5);
  FUN_1000285a8(0x112dc6498,&UNK_10d9c25f0);
  puVar5 = &UNK_101a822f0;
  FUN_1000823a8(&UNK_101a822f0,0);
  puVar7 = puVar5;
  FUN_100083b20(&puStack_98);
  puVar1 = puStack_98;
  FUN_100083b20(&lStack_68);
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_a0);
  puVar8 = PTR_PTR_1126b65c0;
  func_0x000107c610f8();
  func_0x000107c46d04();
  func_0x000107c615e8(puVar1);
  func_0x000107c615e8(lStack_68);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uStack_a0);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61574(puVar5);
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100288eb8);
  (*pcVar3)();
}



/* Entry: 100288eb8; end: 100288eff; -[SCUserSessionContext matchResumed:] */

void FUN_100288eb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c4a350();
  if ((int)lVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100288f00; end: 100288f0f; -[SCUserSessionContext isResumed] */

bool FUN_100288f00(long param_1)

{
  return *(long *)(param_1 + 8) == 0;
}



/* Entry: 100288f10; end: 100288f4b;  */

void FUN_100288f10(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100288f4c; end: 100288f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100288f4c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_50;
  ulong uStack_48;
  
  FUN_100288f58(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if ((int)param_1 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar3);
  }
  else {
    FUN_100083b20(&uStack_48);
    uVar1 = uStack_48;
    uVar2 = uStack_48;
    func_0x000107c4f2bc();
    func_0x000107c615e8(uVar1);
    if ((uVar2 & 1) == 0) {
      FUN_100083b20(&lStack_50);
      uVar4 = *(undefined8 *)(lStack_50 + _DAT_113091b78);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lStack_50);
      func_0x000107c3dfc0(uVar4);
      func_0x000107c615e8(uVar4);
    }
  }
  FUN_100083b20(&uStack_48);
  func_0x000107c4dd7c(uStack_48);
  func_0x000107c61170(uStack_48);
  return;
}



/* Entry: 100288f58; end: 100288f97;  */

undefined1 FUN_100288f58(void)

{
  if (lRam00000001137fc088 != -1) {
    FUN_10002a2fc(0x1137fc088,&PTR___NSConcreteGlobalBlock_110d66398);
  }
  return uRam00000001137fc005;
}



/* Entry: 100288f98; end: 1002890b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100288f98(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_50;
  ulong uStack_48;
  
  FUN_100288f58();
  if (param_1 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar3);
  }
  else {
    FUN_100083b20(&uStack_48);
    uVar1 = uStack_48;
    uVar2 = uStack_48;
    func_0x000107c4f2bc();
    func_0x000107c615e8(uVar1);
    if ((uVar2 & 1) == 0) {
      FUN_100083b20(&lStack_50);
      uVar4 = *(undefined8 *)(lStack_50 + _DAT_113091b78);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lStack_50);
      func_0x000107c3dfc0(uVar4);
      func_0x000107c615e8(uVar4);
    }
  }
  FUN_100083b20(&uStack_48);
  func_0x000107c4dd7c(uStack_48);
  func_0x000107c61170(uStack_48);
  return;
}



/* Entry: 1002890b4; end: 1002890fb;  */

void FUN_1002890b4(void)

{
  undefined1 uVar1;
  
  uVar1 = 0x78;
  FUN_100069c44(&PTR____CFConstantStringClassReference_110f98578,0);
  uRam00000001137fc005 = uVar1;
  return;
}



/* Entry: 1002890fc; end: 10028913b;  */

void FUN_1002890fc(void)

{
  FUN_1000285a8(0x112dfa180,&UNK_10d9cbf60);
  FUN_1000823a8(&UNK_101ad5c9c,0);
  return;
}



/* Entry: 10028913c; end: 1002891f7;  */

void FUN_10028913c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e11420,&UNK_10d9ec5b0);
  puVar1 = &UNK_1104646a0;
  func_0x000107c613fc(&UNK_1104646a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_10091d744,puVar1);
  return;
}



/* Entry: 1002891f8; end: 100289217;  */

void FUN_1002891f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e11498);
  return;
}



/* Entry: 100289218; end: 10028921f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100289218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  puVar2 = PTR_PTR_1126b65b0;
  func_0x000107c610f8(PTR_PTR_1126b65b0);
  func_0x000107c453e4();
  FUN_100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_113091b70);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_48);
  puVar3 = PTR_PTR_1126b65b8;
  func_0x000107c610f8();
  func_0x000107c492b8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 100289220; end: 1002892e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100289220(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126b65b0;
  func_0x000107c610f8(PTR_PTR_1126b65b0);
  func_0x000107c453e4();
  FUN_100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_113091b70);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_48);
  puVar2 = PTR_PTR_1126b65b8;
  func_0x000107c610f8();
  func_0x000107c492b8();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 1002892e4; end: 1002892ff;  */

void FUN_1002892e4(undefined8 param_1)

{
  FUN_1000285a8(0x112e11428,&UNK_10d9ec5b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10091d6e8,param_1);
  return;
}



/* Entry: 100289300; end: 10028934f;  */

void FUN_100289300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100289350; end: 10028936f;  */

void FUN_100289350(void)

{
  func_0x000107c61168(&PTR_PTR_11290bec0);
  return;
}



/* Entry: 100289370; end: 1002893af;  */

void FUN_100289370(void)

{
  FUN_1000285a8(0x112e0dac8,&UNK_10d9e7f10);
  FUN_1000823a8(FUN_100723dc8,0);
  return;
}



/* Entry: 1002893b0; end: 1002893bf;  */

void FUN_1002893b0(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001002893f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1002893c0; end: 10028941b;  */

void FUN_1002893c0(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001002893f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10028941c; end: 100289487;  */

double FUN_10028941c(long param_1)

{
  ulong uVar1;
  
  func_0x000107c61070();
  if (lRam00000001138473a0 != -1) {
    FUN_10002a2fc(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = (param_1 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 100289488; end: 1002894cb; -[SCSnapTokenMainAppLogger onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_100289488(undefined8 param_1,long param_2,undefined8 param_3,int param_4,uint param_5)

{
  if ((param_5 & 1) == 0) {
    if (param_4 == 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
    else {
      *(undefined8 *)(param_2 + 0x18) = 1;
      *(undefined1 *)(param_2 + 0x20) = 0;
      FUN_10028941c();
      *(undefined8 *)(param_2 + 0x28) = param_1;
    }
  }
  return;
}



/* Entry: 1002894cc; end: 10028954b;  */

void FUN_1002894cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e20eb8,&UNK_10da040c0);
  puVar1 = &UNK_1104753c0;
  func_0x000107c613fc(&UNK_1104753c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101d1e4a8,puVar1);
  return;
}



/* Entry: 10028954c; end: 100289577;  */

void FUN_10028954c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100289578; end: 100289583;  */

void FUN_100289578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbeff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_timebase_info_11034c5d8)(0x1138473a8);
  return;
}



/* Entry: 100289584; end: 1002895a3;  */

void FUN_100289584(void)

{
  func_0x000107c61168(&PTR_PTR_112e20f30);
  return;
}



/* Entry: 1002895a4; end: 1002895af;  */

void FUN_1002895a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1002895b0; end: 1002895e3;  */

void FUN_1002895b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002895e4; end: 1002895ff;  */

void FUN_1002895e4(undefined8 param_1)

{
  FUN_1000285a8(0x112e20ec0,&UNK_10da040c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d1e5f0,param_1);
  return;
}



/* Entry: 100289600; end: 10028964f;  */

void FUN_100289600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100289650; end: 10028985b; -[SCSnapTokenMainAppLogger beginObserving] */

void FUN_100289650(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5e370(uVar2);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_10af74e1c;
  puStack_78 = &UNK_110846510;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c41b80(uVar2);
  func_0x000107c61180();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_10af74e48;
  puStack_a0 = &UNK_110846510;
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5e3d8(uVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_c0,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10028985c; end: 10028987b;  */

void FUN_10028985c(void)

{
  func_0x000107c61168(&PTR_PTR_112918290);
  return;
}



/* Entry: 10028987c; end: 100289897;  */

void FUN_10028987c(undefined8 param_1)

{
  FUN_1000285a8(0x112e212f0,&UNK_10da04840);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10078e8c0,param_1);
  return;
}



/* Entry: 100289898; end: 1002898e7;  */

void FUN_100289898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002898e8; end: 100289907;  */

void FUN_1002898e8(void)

{
  func_0x000107c61168(&PTR_PTR_112e21368);
  return;
}



/* Entry: 100289908; end: 100289923;  */

void FUN_100289908(undefined8 param_1)

{
  FUN_1000285a8(0x112e212f8,&UNK_10da04848);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10078e864,param_1);
  return;
}



/* Entry: 100289924; end: 100289943;  */

void FUN_100289924(void)

{
  func_0x000107c61168(&PTR_PTR_112940200);
  return;
}



/* Entry: 100289944; end: 100289983;  */

void FUN_100289944(void)

{
  FUN_1000285a8(0x112e073f0,&UNK_10d9db7a0);
  FUN_1000823a8(&UNK_101bbbe24,0);
  return;
}



/* Entry: 100289984; end: 100289a03;  */

void FUN_100289984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e21ab8,&UNK_10da05600);
  puVar1 = &UNK_110475c30;
  func_0x000107c613fc(&UNK_110475c30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101d21a00,puVar1);
  return;
}



/* Entry: 100289a04; end: 100289a4f;  */

void FUN_100289a04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100289a50; end: 100289a7f; -[SCApplicationLifecycleEventsImpl willTerminate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100289a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091e10));
  return;
}



/* Entry: 100289a80; end: 100289acf;  */

void FUN_100289a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100289ad0; end: 100289aef;  */

void FUN_100289ad0(void)

{
  func_0x000107c61168(&PTR_PTR_112961a80);
  return;
}



/* Entry: 100289af0; end: 100289b0b;  */

void FUN_100289af0(undefined8 param_1)

{
  FUN_1000285a8(0x112e21ba0,&UNK_10da057c0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100780b54,param_1);
  return;
}



/* Entry: 100289b0c; end: 100289b5b;  */

void FUN_100289b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100289b5c; end: 100289b7b;  */

void FUN_100289b5c(void)

{
  func_0x000107c61168(&PTR_PTR_112e21c18);
  return;
}



/* Entry: 100289b7c; end: 100289b97;  */

void FUN_100289b7c(undefined8 param_1)

{
  FUN_1000285a8(0x112e21ba8,&UNK_10da057c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100780af8,param_1);
  return;
}



/* Entry: 100289b98; end: 100289bb7;  */

void FUN_100289b98(void)

{
  func_0x000107c61168(&PTR_PTR_1129403a8);
  return;
}



/* Entry: 100289bb8; end: 100289c37;  */

void FUN_100289bb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e21d60,&UNK_10da05aa0);
  puVar1 = &UNK_110475e40;
  func_0x000107c613fc(&UNK_110475e40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1007859b0,puVar1);
  return;
}



/* Entry: 100289c38; end: 100289c57;  */

void FUN_100289c38(void)

{
  func_0x000107c61168(&PTR_PTR_112e21dd8);
  return;
}



/* Entry: 100289c58; end: 100289c73;  */

void FUN_100289c58(undefined8 param_1)

{
  FUN_1000285a8(0x112e21d68,&UNK_10da05aa8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100785954,param_1);
  return;
}



/* Entry: 100289c74; end: 100289cc3;  */

void FUN_100289c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100289cc4; end: 100289ce3;  */

void FUN_100289cc4(void)

{
  func_0x000107c61168(&PTR_PTR_112940050);
  return;
}



/* Entry: 100289ce4; end: 100289cff;  */

void FUN_100289ce4(undefined8 param_1)

{
  FUN_1000285a8(0x112e21e48,&UNK_10da05c40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007a5738,param_1);
  return;
}



/* Entry: 100289d00; end: 100289d4f;  */

void FUN_100289d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100289d50; end: 100289d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100289d50(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_11307d800);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b8270;
    func_0x000107c61168();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x000107c61168(PTR_PTR_1126b7f68);
    func_0x000107c5a9bc();
    func_0x000107c61180();
    func_0x000107c44f50();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar3);
    *param_1 = puVar4;
    return;
  }
  func_0x0001048d9980(0xd000000000000036,0x800000010ef7fa10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100289e50);
  (*pcVar1)();
}



/* Entry: 100289d58; end: 100289e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100289d58(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_11307d800);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b8270;
    func_0x000107c61168();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x000107c61168(PTR_PTR_1126b7f68);
    func_0x000107c5a9bc();
    func_0x000107c61180();
    func_0x000107c44f50();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar3);
    *param_1 = puVar4;
    return;
  }
  func_0x0001048d9980(0xd000000000000036,0x800000010ef7fa10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100289e50);
  (*pcVar1)();
}



/* Entry: 100289e50; end: 100289e6f;  */

void FUN_100289e50(void)

{
  func_0x000107c61168(&PTR_PTR_112e21ec0);
  return;
}



/* Entry: 100289e70; end: 100289e77;  */

void FUN_100289e70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_100289fbc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100289fb8;
  puStack_58 = &UNK_110406538;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_100095af8(0);
  func_0x000107c610f8();
  FUN_100289f6c(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 100289e78; end: 100289f57;  */

void FUN_100289e78(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_100289fbc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100289fb8;
  puStack_58 = &UNK_110406538;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar3 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_100095af8(0);
  func_0x000107c610f8();
  FUN_100289f6c(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 100289f58; end: 100289f6b;  */

void FUN_100289f58(long param_1,long param_2)

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



/* Entry: 100289f6c; end: 100289fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100289f6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11307d800) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100289fb8; end: 100289fbb;  */

void FUN_100289fb8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100289fbc; end: 100289fdf;  */

undefined8 FUN_100289fbc(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 100289fe0; end: 100289ffb;  */

void FUN_100289fe0(undefined8 param_1)

{
  FUN_1000285a8(0x112e21e50,&UNK_10da05c48);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007a56dc,param_1);
  return;
}



/* Entry: 100289ffc; end: 10028a01b;  */

void FUN_100289ffc(void)

{
  func_0x000107c61168(&PTR_PTR_112918d20);
  return;
}



/* Entry: 10028a01c; end: 10028a053;  */

void FUN_10028a01c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e01a8;
  func_0x000107c61168();
  func_0x000107c4096c();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 10028a054; end: 10028a0eb;  */

void FUN_10028a054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e22048,&UNK_10da06040);
  puVar1 = &UNK_110476070;
  func_0x000107c613fc(&UNK_110476070,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101d227e0,puVar1);
  return;
}



/* Entry: 10028a0ec; end: 10028a13f;  */

void FUN_10028a0ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10028a140; end: 10028a1db;  */

undefined8 FUN_10028a140(void)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  if ((bRam000000011383a448 & 1) == 0) {
    iVar1 = 0x1383a448;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100100ed0(auStack_30);
      FUN_10028a364(0x11383a318,auStack_30);
      FUN_1000df75c(auStack_30);
      func_0x000107c60e4c(0x11383a448);
    }
  }
  return 0x11383a318;
}



/* Entry: 10028a1dc; end: 10028a24f;  */

void FUN_10028a1dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10028a140();
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110cd1a08;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x11383a318;
  *param_1 = 0x11383a318;
  param_1[1] = puVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10028d06c(&uStack_30);
  return;
}



/* Entry: 10028a250; end: 10028a2d7; +[SCNClientSwitchboardClientSwitchboardFactory createClientSwitchboardConfigFetcher] */

void FUN_10028a250(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10028a1dc(auStack_30);
  FUN_10028d11c(auStack_30);
  func_0x000107c61180();
  func_0x00010028d2b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10028a2d8; end: 10028a2f3;  */

void FUN_10028a2d8(undefined8 param_1)

{
  FUN_1000285a8(0x112e22050,&UNK_10da06048);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d22918,param_1);
  return;
}



/* Entry: 10028a2f4; end: 10028a343;  */

void FUN_10028a2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10028a344; end: 10028a363;  */

void FUN_10028a344(void)

{
  func_0x000107c61168(&PTR_PTR_112918890);
  return;
}



/* Entry: 10028a364; end: 10028a98f;  */

undefined8 * FUN_10028a364(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  code **ppcVar12;
  long lVar13;
  long *plVar14;
  code **ppcVar15;
  ulong uVar16;
  long *plVar17;
  code **ppcVar18;
  undefined1 auStack_5d8 [288];
  undefined1 uStack_4b8;
  undefined1 auStack_4b0 [32];
  undefined4 uStack_490;
  undefined1 auStack_484 [16];
  undefined1 uStack_474;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined1 auStack_440 [40];
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [40];
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [80];
  undefined1 auStack_380 [24];
  undefined1 uStack_368;
  undefined1 auStack_360 [24];
  undefined1 uStack_348;
  undefined1 auStack_340 [24];
  undefined1 uStack_328;
  undefined1 auStack_320 [24];
  long *plStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [336];
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110cd1910;
  lVar11 = param_2[1];
  uVar6 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar6;
  if (lVar11 != 0) {
    plVar7 = (long *)(lVar11 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10002b838(auStack_320,&DAT_10f741eba);
  auStack_340[0] = 0;
  uStack_328 = 0;
  auStack_360[0] = 0;
  uStack_348 = 0;
  auStack_380[0] = 0;
  uStack_368 = 0;
  uStack_80 = 0xe00000004;
  FUN_1001ceff0(auStack_440,&uStack_80,2);
  uStack_418 = 0x14;
  uStack_410 = 3;
  uStack_408 = 500;
  FUN_10028aa7c(auStack_400,auStack_440);
  uStack_3d8 = 0;
  FUN_10028ab2c(auStack_3d0,&uStack_418);
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_450 = 0x3f800000;
  auStack_484[0] = 0;
  uStack_474 = 0;
  FUN_10028ab48(&plStack_308,auStack_320,auStack_340,auStack_360,auStack_380,auStack_3d0,&uStack_470
                ,0,0,0,auStack_484,0);
  func_0x00010028ad98(&uStack_470);
  func_0x00010028adfc(auStack_3d0);
  FUN_1001ba7c0(auStack_400);
  FUN_1001ba7c0(auStack_440);
  FUN_1001148fc(auStack_380);
  FUN_1001148fc(auStack_360);
  FUN_1001148fc(auStack_340);
  func_0x000107c60ca0(auStack_320);
  FUN_10028aeac(auStack_5d8,&plStack_308);
  uStack_4b8 = 1;
  FUN_10028b26c(auStack_4b0,&PTR_DAT_110cd19f0);
  uStack_490 = 0;
  FUN_10028b28c(&plStack_308);
  FUN_10002b838(&pcStack_1e8,&DAT_10f741eba);
  FUN_10028b2ec(auStack_1d0,auStack_5d8);
  lVar11 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  plVar7 = param_1 + 5;
  do {
    ppcVar15 = &pcStack_1e8;
    if (lVar11 == 0x168) {
      func_0x00010028b824(&pcStack_1e8);
      puVar5 = auStack_5d8;
      func_0x00010028b7fc(puVar5);
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
      param_1[0x18] = 0;
      param_1[0x17] = 0;
      param_1[0x1a] = 0;
      param_1[0x19] = 0;
      *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x25) = 0;
      param_1[0x22] = 0;
      param_1[0x21] = 0;
      param_1[0x24] = 0;
      param_1[0x23] = 0;
      FUN_10028b86c();
      uVar6 = 0xa0;
      func_0x000107c60e20();
      FUN_10002b838(&pcStack_1e8,&UNK_10f741ea7);
      uVar10 = 6;
      FUN_10028bc78(uVar6,&pcStack_1e8,6,puVar5,0);
      func_0x000107c60ca0(&pcStack_1e8);
      plVar7 = (long *)param_1[0x22];
      param_1[0x22] = uVar6;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      FUN_10028c284(param_1 + 0x23);
      plVar7 = (long *)param_1[0x22];
      pcStack_1e8 = FUN_10028e5c8;
      ppuStack_1e0 = &PTR_DAT_110cd1a58;
      ppcVar15 = &pcStack_1e8;
      puStack_1d8 = param_1;
      (**(code **)(*plVar7 + 0x10))();
      func_0x00010028d05c();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return param_1;
      }
      func_0x000107c60e78();
      func_0x00010028d05c();
      func_0x00010563d08c(param_1 + 0x22);
      func_0x000107c2c51c(param_1 + 0x1c);
      func_0x000107c2c51c(param_1 + 0x17);
      func_0x000107c2c51c(param_1 + 0x12);
      func_0x000107c2c51c(param_1 + 0xd);
      func_0x000107c2c51c(param_1 + 8);
      func_0x000107c2c51c(param_1 + 3);
      FUN_1000df75c(param_1 + 1);
      func_0x000107c60bd8();
      FUN_1000285a8(0x112e22138,&UNK_10da06210);
      puVar8 = &UNK_110476138;
      func_0x000107c613fc(&UNK_110476138,0x28,7);
      *(long **)(puVar8 + 0x10) = plVar7;
      *(code ***)(puVar8 + 0x18) = ppcVar15;
      *(undefined8 *)(puVar8 + 0x20) = uVar10;
      func_0x000107c6157c(plVar7);
      func_0x000107c6157c(ppcVar15);
      func_0x000107c6157c(uVar10);
      puVar9 = (undefined8 *)&UNK_101d22a90;
      FUN_1000823a8(&UNK_101d22a90,puVar8);
      return puVar9;
    }
    lVar13 = (long)ppcVar15 + lVar11;
    ppcVar3 = (code **)(param_1 + 6);
    FUN_100102e7c(ppcVar3,lVar13);
    ppcVar18 = (code **)param_1[4];
    if (ppcVar18 != (code **)0x0) {
      uVar16 = (long)ppcVar18 - 1;
      if (((ulong)ppcVar18 & uVar16) == 0) {
        ppcVar15 = (code **)(uVar16 & (ulong)ppcVar3);
      }
      else {
        ppcVar15 = ppcVar3;
        if (ppcVar18 <= ppcVar3) {
          uVar4 = 0;
          if (ppcVar18 != (code **)0x0) {
            uVar4 = (ulong)ppcVar3 / (ulong)ppcVar18;
          }
          ppcVar15 = (code **)((long)ppcVar3 - uVar4 * (long)ppcVar18);
        }
      }
      plVar17 = *(long **)(param_1[3] + (long)ppcVar15 * 8);
      if (plVar17 != (long *)0x0) {
        do {
          while( true ) {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_10028a5fc;
            ppcVar12 = (code **)plVar17[1];
            if (ppcVar12 != ppcVar3) break;
            uVar4 = (ulong)(plVar17 + 2);
            FUN_1000e107c(uVar4,lVar13);
            if ((uVar4 & 1) != 0) goto LAB_10028a720;
          }
          if (((ulong)ppcVar18 & uVar16) == 0) {
            ppcVar12 = (code **)((ulong)ppcVar12 & uVar16);
          }
          else if (ppcVar18 <= ppcVar12) {
            uVar4 = 0;
            if (ppcVar18 != (code **)0x0) {
              uVar4 = (ulong)ppcVar12 / (ulong)ppcVar18;
            }
            ppcVar12 = (code **)((long)ppcVar12 - uVar4 * (long)ppcVar18);
          }
        } while (ppcVar12 == ppcVar15);
      }
    }
LAB_10028a5fc:
    plVar17 = (long *)0x178;
    func_0x000107c60e20();
    uStack_2f8 = 0;
    *plVar17 = 0;
    plVar17[1] = (long)ppcVar3;
    plStack_308 = plVar17;
    plStack_300 = plVar7;
    func_0x000107c60c94(plVar17 + 2,lVar13);
    FUN_10028b544(plVar17 + 5,auStack_1d0 + lVar11);
    uStack_2f8 = CONCAT71(uStack_2f8._1_7_,1);
    if ((ppcVar18 == (code **)0x0) ||
       (*(float *)(param_1 + 7) * (float)ppcVar18 < (float)(param_1[6] + 1))) {
      func_0x00010028b5e8((long)ppcVar18 << 1);
      FUN_10028b600(param_1 + 3);
      ppcVar18 = (code **)param_1[4];
      if (((ulong)ppcVar18 & (long)ppcVar18 - 1U) == 0) {
        ppcVar15 = (code **)((long)ppcVar18 - 1U & (ulong)ppcVar3);
      }
      else {
        ppcVar15 = ppcVar3;
        if (ppcVar18 <= ppcVar3) {
          uVar16 = 0;
          if (ppcVar18 != (code **)0x0) {
            uVar16 = (ulong)ppcVar3 / (ulong)ppcVar18;
          }
          ppcVar15 = (code **)((long)ppcVar3 - uVar16 * (long)ppcVar18);
        }
      }
    }
    lVar13 = param_1[3];
    plVar14 = *(long **)(lVar13 + (long)ppcVar15 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar17 = *plVar7;
      *plVar7 = (long)plVar17;
      *(long **)(lVar13 + (long)ppcVar15 * 8) = plVar7;
      if (*plVar17 != 0) {
        ppcVar15 = *(code ***)(*plVar17 + 8);
        if (((ulong)ppcVar18 & (long)ppcVar18 - 1U) == 0) {
          ppcVar15 = (code **)((ulong)ppcVar15 & (long)ppcVar18 - 1U);
        }
        else if (ppcVar18 <= ppcVar15) {
          uVar16 = 0;
          if (ppcVar18 != (code **)0x0) {
            uVar16 = (ulong)ppcVar15 / (ulong)ppcVar18;
          }
          ppcVar15 = (code **)((long)ppcVar15 - uVar16 * (long)ppcVar18);
        }
        *(long **)(lVar13 + (long)ppcVar15 * 8) = plVar17;
      }
    }
    else {
      *plVar17 = *plVar14;
      *plVar14 = (long)plVar17;
    }
    plStack_308 = (long *)0x0;
    param_1[6] = param_1[6] + 1;
    FUN_10028b7b8(&plStack_308);
LAB_10028a720:
    lVar11 = lVar11 + 0x168;
  } while( true );
}



/* Entry: 10028a990; end: 10028aa27;  */

void FUN_10028a990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e22138,&UNK_10da06210);
  puVar1 = &UNK_110476138;
  func_0x000107c613fc(&UNK_110476138,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101d22a90,puVar1);
  return;
}



/* Entry: 10028aa28; end: 10028aa7b;  */

void FUN_10028aa28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10028aa7c; end: 10028aae7;  */

void FUN_10028aa7c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10028aae8; end: 10028ab2b;  */

undefined8 * FUN_10028aae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10028aa7c(param_1 + 3,param_2 + 3);
  param_1[8] = param_2[8];
  return param_1;
}



/* Entry: 10028ab2c; end: 10028ab47;  */

void FUN_10028ab2c(long param_1)

{
  FUN_10028aae8();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 10028ab48; end: 10028ac8f;  */

undefined8 *
FUN_10028ab48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined1 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[9] = param_4[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0xd] = param_5[2];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_10028aca4(param_1 + 0xf,param_6);
  FUN_10028acf0(param_1 + 0x19,param_7);
  *(undefined1 *)(param_1 + 0x1e) = param_8;
  *(undefined8 *)((long)param_1 + 0xf4) = param_9;
  *(undefined8 *)((long)param_1 + 0xfc) = param_10;
  uVar2 = param_11[1];
  uVar1 = *param_11;
  *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)(param_11 + 2);
  *(undefined8 *)((long)param_1 + 0x10c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x104) = uVar1;
  *(undefined1 *)(param_1 + 0x23) = param_12;
  return param_1;
}



/* Entry: 10028ac90; end: 10028aca3;  */

void FUN_10028ac90(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_10028aae8();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  return;
}



/* Entry: 10028aca4; end: 10028acd3;  */

undefined1 * FUN_10028aca4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  FUN_10028ac90();
  return param_1;
}



/* Entry: 10028acd4; end: 10028acef;  */

void FUN_10028acd4(long param_1)

{
  FUN_10028aae8();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 10028acf0; end: 10028ad5f;  */

void FUN_10028acf0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10028ad60; end: 10028adbf;  */

void FUN_10028ad60(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    FUN_1002aa0bc(param_2 + 2);
    func_0x000107c60e14(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}


