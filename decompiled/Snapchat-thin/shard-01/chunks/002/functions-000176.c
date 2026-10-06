/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e1c370; end: 100e1c38f;  */

void FUN_100e1c370(void)

{
  FUN_100e1ba8c();
  return;
}



/* Entry: 100e1c390; end: 100e1c3bf;  */

void FUN_100e1c390(void)

{
  long unaff_x20;
  
  FUN_100e1bdbc(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100e1c3c0; end: 100e1c4eb;  */

undefined8 FUN_100e1c3c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d39800;
  func_0x0001000285a8(0x112d39800,&UNK_10d9032c8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100e1c4ec; end: 100e1c503;  */

undefined8 * FUN_100e1c4ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100e1c504; end: 100e1c607;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100e1c504(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar7;
  long alStack_70 [4];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  func_0x000100e1b99c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a5da0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  ppuStack_48 = &PTR_DAT_110355da0;
  uVar4 = 0;
  alStack_70[1] = lVar2;
  lStack_50 = lVar1;
  func_0x000100e1c350();
  uVar5 = uVar4;
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_70 + 1,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  uVar6 = *puVar7;
  FUN_100e1c708(uVar6,uVar5);
  func_0x0001000834e4(alStack_70 + 1);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_110355de0;
  *param_1 = uVar6;
  return;
}



/* Entry: 100e1c608; end: 100e1c627;  */

void FUN_100e1c608(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 100e1c628; end: 100e1c693;  */

void FUN_100e1c628(undefined8 param_1)

{
  if (lRam0000000112d39838 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6104a4);
  return;
}



/* Entry: 100e1c694; end: 100e1c707;  */

void FUN_100e1c694(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112d39808,&UNK_10d9032d0);
  func_0x000107c613fc();
  pcVar1 = FUN_100e1c504;
  func_0x0001000bdd8c(FUN_100e1c504,0);
  uVar2 = 0;
  FUN_101427e44(0);
  func_0x000107c610f8();
  func_0x0001014279ac(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 100e1c708; end: 100e1c8b3;  */

long FUN_100e1c708(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  double dVar9;
  double dVar10;
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  uVar3 = 0;
  func_0x000100e1b99c();
  ppuStack_58 = &PTR_DAT_110355da0;
  dVar9 = 0.0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  puVar6 = (undefined8 *)(param_2 + 0x10);
  alStack_78[0] = param_1;
  uStack_60 = uVar3;
  FUN_100e1c8b4(alStack_78);
  func_0x000107c6071c();
  uVar3 = 0;
  dVar10 = dVar9;
  func_0x0001049a8368(0);
  func_0x0001049a1f14();
  func_0x0001049a233c();
  func_0x000107c61170(uVar3);
  uVar4 = 0;
  func_0x0001049eab50();
  func_0x0001049e48e0();
  uVar5 = uVar4;
  func_0x0001049e66d0();
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    uVar4 = uVar5 & 0xffffffffffff;
  }
  puVar7 = (undefined8 *)0xe000000000000000;
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = puVar7;
  func_0x000107c6142c();
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    func_0x0001049e48e0();
    puVar7 = puVar6;
    FUN_10142764c();
    uVar3 = *puVar7;
    uVar1 = puVar7[1];
    func_0x000107c61434(uVar1);
    func_0x0001049e674c(uVar3,uVar1);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c6071c();
  dVar10 = (dVar10 - dVar9) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e1c8ac);
    (*pcVar2)();
  }
  if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e1c8b0);
    (*pcVar2)();
  }
  if (dVar10 < 9.223372036854776e+18) {
    plVar8 = alStack_78;
    func_0x0001000a8868(plVar8,uStack_60);
    func_0x000104c99b18(*(undefined8 *)(*plVar8 + 0x10),(long)dVar10);
    func_0x0001000834e4(alStack_78);
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e1c8b4);
  (*pcVar2)();
}



/* Entry: 100e1c8b4; end: 100e1c8f7;  */

long FUN_100e1c8b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e1c8f8; end: 100e1c9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1c8f8(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_100e1c628();
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d398d8);
  *(undefined8 *)(param_1 + _DAT_112d398d8) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  func_0x0001000285a8(0x112d39808,&UNK_10d9032d0);
  func_0x000107c613fc();
  pcVar2 = FUN_100e1c504;
  func_0x0001000bdd8c(FUN_100e1c504,0);
  uVar3 = 0;
  FUN_101427e44(0);
  func_0x000107c610f8();
  func_0x0001014279ac(pcVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 100e1c9cc; end: 100e1ca0f; -[SCFacebookLoginServiceProvider end] */

void FUN_100e1c9cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1ca10; end: 100e1caeb; -[SCFacebookLoginServiceProvider setValue:forIvarName:] */

void FUN_100e1ca10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar2 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar2,param_2);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                      "FacebookLoginServicesImplementation/SCFacebookLoginServiceProvider.swift",
                      0x48,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1caec);
  (*pcVar1)();
}



/* Entry: 100e1caec; end: 100e1cb33; -[SCFacebookLoginServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1caec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d398d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e1cb34; end: 100e1cb67;  */

void FUN_100e1cb34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e1cb68; end: 100e1cb77; -[SCFacebookLoginServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1cb68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d398d8));
  return;
}



/* Entry: 100e1cb78; end: 100e1cb97;  */

void FUN_100e1cb78(void)

{
  func_0x000107c61168(&PTR_PTR_112d39920);
  return;
}



/* Entry: 100e1cb98; end: 100e1cb9b; -[SCFacebookLoginServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1cb98(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_100e1c628();
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d398d8);
  *(undefined8 *)(param_1 + _DAT_112d398d8) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  func_0x0001000285a8(0x112d39808,&UNK_10d9032d0);
  func_0x000107c613fc();
  pcVar2 = FUN_100e1c504;
  func_0x0001000bdd8c(FUN_100e1c504,0);
  uVar3 = 0;
  FUN_101427e44(0);
  func_0x000107c610f8();
  func_0x0001014279ac(pcVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 100e1cb9c; end: 100e1cb9f; -[SCFacebookLoginServiceProvider __safeProvide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1cb9c(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_100e1c628();
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d398d8);
  *(undefined8 *)(param_1 + _DAT_112d398d8) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  func_0x0001000285a8(0x112d39808,&UNK_10d9032d0);
  func_0x000107c613fc();
  pcVar2 = FUN_100e1c504;
  func_0x0001000bdd8c(FUN_100e1c504,0);
  uVar3 = 0;
  FUN_101427e44(0);
  func_0x000107c610f8();
  func_0x0001014279ac(pcVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 100e1cba0; end: 100e1cbc7;  */

bool FUN_100e1cba0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
  func_0x000107c61168(PTR__OBJC_CLASS___ATTrackingManager_1126b8f80);
  func_0x000107c5ce48();
  return puVar1 != (undefined *)0x3;
}



/* Entry: 100e1cbc8; end: 100e1cbef; +[_TtC13FacebookUtils15FacebookHelpers loginTracking] */

bool FUN_100e1cbc8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
  func_0x000107c61168(PTR__OBJC_CLASS___ATTrackingManager_1126b8f80);
  func_0x000107c5ce48();
  return puVar1 != (undefined *)0x3;
}



/* Entry: 100e1cbf0; end: 100e1cc2b; -[_TtC13FacebookUtils15FacebookHelpers init] */

void FUN_100e1cbf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100e1cc5c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e1cc2c; end: 100e1cc7b;  */

void FUN_100e1cc2c(void)

{
  func_0x000100e1cc5c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e1cc7c; end: 100e1cc83; -[_TtC37FollowCreatorsBillboardSignalProvider37FollowCreatorsBillboardSignalProvider preCheckSource] */

undefined8 FUN_100e1cc7c(void)

{
  return 0x1e;
}



/* Entry: 100e1cc84; end: 100e1cce3;  */

void FUN_100e1cc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c40808();
    uVar2 = (ulong)(0 < param_1);
  }
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6010c(uVar2,uVar1);
  func_0x000107c3fefc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100e1cce4; end: 100e1cd17; -[_TtC37FollowCreatorsBillboardSignalProvider37FollowCreatorsBillboardSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_100e1cce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e1cda8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e1cd18; end: 100e1cd77; -[_TtC37FollowCreatorsBillboardSignalProvider37FollowCreatorsBillboardSignalProvider init] */

void FUN_100e1cd18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowCreatorsBillboardSignalProvider.FollowCreatorsBillboardSignalProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1cd44);
  (*pcVar1)();
}



/* Entry: 100e1cd78; end: 100e1cd87; -[_TtC37FollowCreatorsBillboardSignalProvider37FollowCreatorsBillboardSignalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1cd78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d399a0));
  return;
}



/* Entry: 100e1cd88; end: 100e1cda7;  */

void FUN_100e1cd88(void)

{
  func_0x000107c61168(&PTR_PTR_112799b08);
  return;
}



/* Entry: 100e1cda8; end: 100e1cf23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e1cda8(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d399a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c43058();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    puVar5 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = &UNK_110355f70;
    func_0x000107c613fc(&UNK_110355f70,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar5;
    pcStack_40 = FUN_100e1cf24;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100bcda3c;
    puStack_48 = &UNK_110355f88;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    puVar4 = puStack_38;
    func_0x000107c61174(puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c5dc68(lVar2);
    func_0x000107c60bd0(ppuVar3);
    puVar4 = puVar5;
    func_0x000107c43bf4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar5);
  }
  return puVar4;
}



/* Entry: 100e1cf24; end: 100e1cf47;  */

void FUN_100e1cf24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c40808();
    uVar3 = (ulong)(0 < param_1);
  }
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6010c(uVar3,uVar1);
  func_0x000107c3fefc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100e1cf48; end: 100e1d023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100e1cf48(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_2 + _DAT_11300ce40);
  lVar2 = 0;
  FUN_100e1cd88();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d399a0) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_50,puVar1);
  uVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  return unaff_x20;
}



/* Entry: 100e1d024; end: 100e1d03f;  */

void FUN_100e1d024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e1d040; end: 100e1d05f;  */

void FUN_100e1d040(void)

{
  func_0x000107c61168(&PTR_PTR_112d39a10);
  return;
}



/* Entry: 100e1d060; end: 100e1d06b; -[SCFollowCreatorsBillboardSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39a68;
  func_0x000107c61428(param_1 + _DAT_112d39a68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1d06c; end: 100e1d077; -[SCFollowCreatorsBillboardSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39a68;
  func_0x000107c61428(param_1 + _DAT_112d39a68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1d078; end: 100e1d083; -[SCFollowCreatorsBillboardSignalProviderEntryPoint fetchCreatorsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d078(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39a70;
  func_0x000107c61428(param_1 + _DAT_112d39a70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1d084; end: 100e1d0c7;  */

void FUN_100e1d084(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e1d0c8; end: 100e1d0d3; -[SCFollowCreatorsBillboardSignalProviderEntryPoint setFetchCreatorsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d0c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39a70;
  func_0x000107c61428(param_1 + _DAT_112d39a70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1d0d4; end: 100e1d127;  */

void FUN_100e1d0d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1d128; end: 100e1d273; -[SCFollowCreatorsBillboardSignalProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100e1d1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1d20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1d22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1d254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1d210) */
/* WARNING: Removing unreachable block (ram,0x000100e1d200) */
/* WARNING: Removing unreachable block (ram,0x000100e1d230) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d128(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar5 = param_1;
  if (lVar2 != 0) {
    func_0x000107c4305c();
    func_0x000107c61180();
    lVar5 = lVar2;
    if (param_1 != 0) {
      FUN_100e1d040(0);
      func_0x000107c613fc();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11300ce40);
      lVar3 = 0;
      FUN_100e1cd88();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar4 + _DAT_112d399a0) = uVar6;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar3;
      func_0x000107c61174(uVar6);
      func_0x000107c61154(&lStack_50,puVar1);
      func_0x000107c4e9e4(lVar2);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 100e1d274; end: 100e1d2b7; -[SCFollowCreatorsBillboardSignalProviderEntryPoint end] */

void FUN_100e1d274(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1d2b8; end: 100e1d44f;  */

void FUN_100e1d2b8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10edc20)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010ef123e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FollowCreatorsBillboardSignalProvider/SCFollowCreatorsBillboardSignalProviderEntryPoint.swift"
                            ,0x5d,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1d450);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5495c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e1d450; end: 100e1d4fb; -[SCFollowCreatorsBillboardSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_100e1d450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e1d2b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e1d4fc; end: 100e1d56f; -[SCFollowCreatorsBillboardSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d4fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d39a68,0);
  func_0x000107c61614(param_1 + _DAT_112d39a70,0);
  *(undefined8 *)(param_1 + _DAT_112d39a78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e1d570; end: 100e1d5a3;  */

void FUN_100e1d570(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e1d5a4; end: 100e1d5eb; -[SCFollowCreatorsBillboardSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d5a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39a68);
  func_0x000107c61610(param_1 + _DAT_112d39a70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d39a78));
  return;
}



/* Entry: 100e1d5ec; end: 100e1d60b;  */

void FUN_100e1d5ec(void)

{
  func_0x000107c61168(&PTR_PTR_112799bc8);
  return;
}



/* Entry: 100e1d60c; end: 100e1d78b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_100e1d60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 auStack_90 [4];
  long lStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c43b5c(param_2);
  func_0x000107c61180();
  lVar2 = 0;
  func_0x00010033d714();
  ppuStack_68 = &PTR_DAT_110356070;
  uVar3 = 0;
  auStack_90[1] = param_4;
  lStack_70 = lVar2;
  FUN_100e1dcbc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_90 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)auStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  uVar4 = *puVar5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_100e1d7a8(uVar1,param_3,uVar4,uVar3);
  func_0x0001000834e4(auStack_90 + 1);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 100e1d78c; end: 100e1d7a7;  */

void FUN_100e1d78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e1d7a8; end: 100e1d883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100e1d7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x00010033d714();
  ppuStack_48 = &PTR_DAT_110356070;
  *(undefined8 *)(param_4 + _DAT_112d39b58) = 0;
  *(undefined8 *)(param_4 + _DAT_112d39b60) = 0;
  puVar1 = (undefined8 *)(param_4 + _DAT_112d39b68);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_4 + _DAT_112d39b40) = param_1;
  *(undefined8 *)(param_4 + _DAT_112d39b48) = param_2;
  auStack_68[0] = param_3;
  uStack_50 = uVar3;
  FUN_100e1d8a4(auStack_68,param_4 + _DAT_112d39b50);
  plVar4 = &lStack_78;
  lStack_78 = param_4;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_68);
  return plVar4;
}



/* Entry: 100e1d884; end: 100e1d8a3;  */

void FUN_100e1d884(void)

{
  func_0x000107c61168(&PTR_PTR_112d39ae8);
  return;
}



/* Entry: 100e1d8a4; end: 100e1d8e7;  */

long FUN_100e1d8a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e1d8e8; end: 100e1d96b; -[_TtC29FollowCreatorsTakeoverFeature30FollowCreatorsTakeoverProvider canShowCampaign:] */

uint FUN_100e1d8e8(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if ((param_3 == -0x2fffffffffffffe5) && (param_2 == -0x7ffffffef10edb20)) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 100e1d96c; end: 100e1db17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1d96c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d39b58);
  *(long *)(unaff_x20 + _DAT_112d39b58) = param_2;
  func_0x000107c615f0(param_2);
  func_0x000107c615e8(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d39b60);
  *(long *)(unaff_x20 + _DAT_112d39b60) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar7);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d39b68);
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000100b64c10(param_3,param_4);
  func_0x00010058d43c(uVar7,uVar2);
  FUN_100e1d8a4(unaff_x20 + _DAT_112d39b50,auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100e1db14);
    (*pcVar3)();
  }
  func_0x00010418a264(param_2);
  func_0x0001000834e4(auStack_88);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d39b48));
  lVar4 = *(long *)(unaff_x20 + _DAT_112d39b40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100e1db18);
      (*pcVar3)();
    }
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar6 = puVar5;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar5);
    func_0x000107c4c4bc(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100e1db18; end: 100e1dbdf; -[_TtC29FollowCreatorsTakeoverFeature30FollowCreatorsTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000100e1dbbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1dbc0) */

void FUN_100e1db18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110356130;
    func_0x000107c613fc(&UNK_110356130,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_100e1e0fc;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_100e1d96c(param_3,param_4,pcVar3,puVar2);
  func_0x00010058d43c(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100e1dbe0; end: 100e1dc3f; -[_TtC29FollowCreatorsTakeoverFeature30FollowCreatorsTakeoverProvider init] */

void FUN_100e1dbe0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowCreatorsTakeoverFeature.FollowCreatorsTakeoverProvider",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1dc0c);
  (*pcVar1)();
}



/* Entry: 100e1dc40; end: 100e1dcbb; -[_TtC29FollowCreatorsTakeoverFeature30FollowCreatorsTakeoverProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1dc40(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39b40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39b48));
  func_0x0001000834e4(param_1 + _DAT_112d39b50);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d39b58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39b60));
  if (*(long *)(param_1 + _DAT_112d39b68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d39b68))[1]);
    return;
  }
  return;
}



/* Entry: 100e1dcbc; end: 100e1dcdb;  */

void FUN_100e1dcbc(void)

{
  func_0x000107c61168(&PTR_PTR_112799c90);
  return;
}



/* Entry: 100e1dcdc; end: 100e1de83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1dcdc(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "followCreatorsDidComplete()";
  func_0x0001000c10c0("followCreatorsDidComplete()");
  func_0x000107c61180();
  puVar2 = &UNK_1103560e0;
  func_0x000107c613fc(&UNK_1103560e0,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  pcStack_50 = FUN_100e1e0e4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103560f8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d39b60);
  if (lVar4 != 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112d39b40);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar5 = puVar2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar2);
      func_0x000107c4c4c0(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(lVar4);
  }
  pcVar6 = *(code **)(unaff_x20 + _DAT_112d39b68);
  if (pcVar6 != (code *)0x0) {
    uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112d39b68))[1];
    func_0x000107c6157c(uVar7);
    (*pcVar6)();
    func_0x00010058d43c(pcVar6,uVar7);
  }
  return;
}



/* Entry: 100e1de84; end: 100e1deab; -[_TtC29FollowCreatorsTakeoverFeature30FollowCreatorsTakeoverProvider followCreatorsDidComplete] */

void FUN_100e1de84(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1dcdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1deac; end: 100e1e053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1deac(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "followCreatorsDidSkip()";
  func_0x0001000c10c0("followCreatorsDidSkip()");
  func_0x000107c61180();
  puVar2 = &UNK_110356090;
  func_0x000107c613fc(&UNK_110356090,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  uStack_50 = 0x100e1e10c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103560a8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d39b60);
  if (lVar4 != 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112d39b40);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar5 = puVar2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar2);
      func_0x000107c4c4b8(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(lVar4);
  }
  pcVar6 = *(code **)(unaff_x20 + _DAT_112d39b68);
  if (pcVar6 != (code *)0x0) {
    uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112d39b68))[1];
    func_0x000107c6157c(uVar7);
    (*pcVar6)();
    func_0x00010058d43c(pcVar6,uVar7);
  }
  return;
}



/* Entry: 100e1e054; end: 100e1e09f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e054(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_112d39b58) != 0) {
    func_0x000107c41864(*(long *)(param_1 + _DAT_112d39b58),param_2,0);
  }
  func_0x000107c4ffe8(*(undefined8 *)(param_1 + _DAT_112d39b48));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 100e1e0a0; end: 100e1e0c7; -[_TtC29FollowCreatorsTakeoverFeature30FollowCreatorsTakeoverProvider followCreatorsDidSkip] */

void FUN_100e1e0a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1deac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1e0c8; end: 100e1e0e3;  */

void FUN_100e1e0c8(long param_1,long param_2)

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



/* Entry: 100e1e0e4; end: 100e1e0fb;  */

void FUN_100e1e0e4(void)

{
  long unaff_x20;
  
  FUN_100e1e054(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e1e0fc; end: 100e1e113;  */

void FUN_100e1e0fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100e1e104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100e1e114; end: 100e1e11f; -[SCFollowCreatorsTakeoverFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39b98;
  func_0x000107c61428(param_1 + _DAT_112d39b98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1e120; end: 100e1e12b; -[SCFollowCreatorsTakeoverFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39b98;
  func_0x000107c61428(param_1 + _DAT_112d39b98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1e12c; end: 100e1e137; -[SCFollowCreatorsTakeoverFeatureEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e12c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39ba0;
  func_0x000107c61428(param_1 + _DAT_112d39ba0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1e138; end: 100e1e143; -[SCFollowCreatorsTakeoverFeatureEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e138(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39ba0;
  func_0x000107c61428(param_1 + _DAT_112d39ba0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1e144; end: 100e1e14f; -[SCFollowCreatorsTakeoverFeatureEntryPoint followCreatorsScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e144(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39ba8;
  func_0x000107c61428(param_1 + _DAT_112d39ba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1e150; end: 100e1e193;  */

void FUN_100e1e150(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e1e194; end: 100e1e19f; -[SCFollowCreatorsTakeoverFeatureEntryPoint setFollowCreatorsScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e194(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39ba8;
  func_0x000107c61428(param_1 + _DAT_112d39ba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1e1a0; end: 100e1e1f3;  */

void FUN_100e1e1a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e1e1f4; end: 100e1e23b; -[SCFollowCreatorsTakeoverFeatureEntryPoint followCreatorsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e1f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d39bb0;
  func_0x000107c61428(param_1 + _DAT_112d39bb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e1e23c; end: 100e1e29f; -[SCFollowCreatorsTakeoverFeatureEntryPoint setFollowCreatorsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e23c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d39bb0;
  func_0x000107c61428(param_1 + _DAT_112d39bb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e1e2a0; end: 100e1e4d7;  */

/* WARNING: Possible PIC construction at 0x000100e1e428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1e438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1e448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1e4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1e498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1e4ac) */
/* WARNING: Removing unreachable block (ram,0x000100e1e44c) */
/* WARNING: Removing unreachable block (ram,0x000100e1e43c) */
/* WARNING: Removing unreachable block (ram,0x000100e1e42c) */
/* WARNING: Removing unreachable block (ram,0x000100e1e49c) */

void FUN_100e1e2a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3e8cc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4375c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c43764();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        uVar4 = 0;
        FUN_100e1d884();
        func_0x000107c613fc();
        uStack_90 = uVar4;
        func_0x000107c43b5c(lVar2);
        func_0x000107c61180();
        lVar5 = 0;
        func_0x00010033d714();
        ppuStack_68 = &PTR_DAT_110356070;
        uVar4 = 0;
        lStack_70 = lVar5;
        FUN_100e1dcbc(0);
        func_0x000107c610f8();
        func_0x0001000c6518(auStack_88,lVar5);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
        (**(code **)(extraout_x12 + 0x10))
                  (auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
        uVar6 = *(undefined8 *)(auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
        func_0x000107c61174(lVar3);
        func_0x000107c61174(unaff_x20);
        FUN_100e1d7a8(lVar2,lVar3,uVar6,uVar4);
        FUN_100e1e9b0(auStack_88);
        func_0x000107c4e9e4(lVar1);
        func_0x000107c61180();
        func_0x000107c4fba8();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e1e4d8; end: 100e1e4ff; -[SCFollowCreatorsTakeoverFeatureEntryPoint begin] */

void FUN_100e1e4d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1e2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1e500; end: 100e1e543; -[SCFollowCreatorsTakeoverFeatureEntryPoint end] */

void FUN_100e1e500(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1e544; end: 100e1e7b3;  */

void FUN_100e1e544(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10eeea0)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001b;
        if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10edb00)) ||
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef12500,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54ad8();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10edae0)) &&
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12520,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "FollowCreatorsTakeoverFeature/SCFollowCreatorsTakeoverFeatureEntryPoint.swift"
                                ,0x4d,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1e7b4);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54ad0();
        }
        goto LAB_100e1e5d0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c50();
  }
LAB_100e1e5d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e1e7b4; end: 100e1e85f; -[SCFollowCreatorsTakeoverFeatureEntryPoint setValue:forIvarName:] */

void FUN_100e1e7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e1e544(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100e1e9b0(auStack_50);
  return;
}



/* Entry: 100e1e860; end: 100e1e8f3; -[SCFollowCreatorsTakeoverFeatureEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e860(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d39b98,0);
  func_0x000107c61614(param_1 + _DAT_112d39ba0,0);
  func_0x000107c61614(param_1 + _DAT_112d39ba8,0);
  *(undefined8 *)(param_1 + _DAT_112d39bb0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d39bb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e1e8f4; end: 100e1e927;  */

void FUN_100e1e8f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e1e928; end: 100e1e98f; -[SCFollowCreatorsTakeoverFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1e928(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d39b98);
  func_0x000107c61610(param_1 + _DAT_112d39ba0);
  func_0x000107c61610(param_1 + _DAT_112d39ba8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39bb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d39bb8));
  return;
}



/* Entry: 100e1e990; end: 100e1e9af;  */

void FUN_100e1e990(void)

{
  func_0x000107c61168(&PTR_PTR_112799d78);
  return;
}



/* Entry: 100e1e9b0; end: 100e1e9cf;  */

void FUN_100e1e9b0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100e1e9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100e1e9d0; end: 100e1eb3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100e1e9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  func_0x000107c613fc();
  uVar3 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c43b5c();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_100e1f1bc();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d39c98) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d39ca0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112d39ca8) = 0;
  *(undefined **)(lVar6 + _DAT_112d39cb0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar6 + _DAT_112d39c80) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d39c88) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112d39c90) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_60,puVar2);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 100e1eb40; end: 100e1eb5b;  */

void FUN_100e1eb40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e1eb5c; end: 100e1eb7b;  */

void FUN_100e1eb5c(void)

{
  func_0x000107c61168(&PTR_PTR_112d39c28);
  return;
}



/* Entry: 100e1eb7c; end: 100e1eb9b;  */

bool FUN_100e1eb7c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100e1eb9c; end: 100e1ec23; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider canShowCampaign:] */

uint FUN_100e1eb9c(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if ((param_3 == -0x2fffffffffffffec) && (param_2 == -0x7ffffffef10ed9d0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef12630,param_3,param_2,0);
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 100e1ec24; end: 100e1f007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1ec24(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d39c98);
  *(ulong *)(unaff_x20 + _DAT_112d39c98) = param_1;
  uVar5 = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar13);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d39ca0);
  uVar13 = *puVar1;
  uVar8 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000100b64c10(param_3,param_4);
  FUN_100c97bc4(uVar13,uVar8);
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100e1effc);
    (*pcVar4)();
  }
  uVar6 = uVar5;
  func_0x000107c5db78();
  func_0x000107c61180();
  if (uVar6 == 0) {
    return;
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  uVar7 = uVar6;
  func_0x000107c5c24c();
  func_0x000107c61180();
  uVar13 = 0;
  FUN_100dfa748();
  uVar16 = uVar7;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar7);
  if (uVar16 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar7 = uVar16;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    func_0x000107c6142c(uVar16);
    pcVar4 = (code *)0x0;
    puVar15 = (undefined *)0x0;
  }
  else {
    if ((uVar16 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar16 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100e1eff8);
        (*pcVar4)();
      }
      uVar8 = *(undefined8 *)(uVar16 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      uVar8 = 0;
      FUN_100df9834(0,uVar16);
    }
    func_0x000107c6142c(uVar16);
    puVar15 = &UNK_110356220;
    func_0x000107c613fc(&UNK_110356220,0x18,7);
    *(undefined8 **)(puVar15 + 0x10) = &uStack_70;
    puVar9 = &UNK_110356248;
    uVar13 = 0x20;
    func_0x000107c613fc(&UNK_110356248,0x20,7);
    pcVar4 = FUN_100e1f56c;
    *(code **)(puVar9 + 0x10) = FUN_100e1f56c;
    *(undefined **)(puVar9 + 0x18) = puVar15;
    uStack_80 = 0x100e1f59c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100df7adc;
    puStack_88 = &UNK_110356260;
    ppuVar10 = &puStack_a0;
    puStack_78 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_78);
    func_0x000107c4c660(uVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar8);
  }
  uVar7 = 0xd000000000000034;
  uVar14 = 0x800000010ef125f0;
  func_0x000107c4dd4c();
  func_0x000107c61180();
  uVar8 = uVar13;
  if (uVar5 != 0) {
    uVar16 = uVar5;
    func_0x000107c3cfdc();
    uVar8 = uVar13;
    if ((int)uVar16 == 0xb) {
      uVar7 = uVar5;
      func_0x000107c4de6c();
      func_0x000107c61180();
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100e1f004);
        (*pcVar4)();
      }
      uVar16 = uVar7;
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (uVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100e1f008);
        (*pcVar4)();
      }
      uVar7 = uVar16;
      func_0x000107c5faec();
      uVar8 = uVar13;
      func_0x000107c61170(uVar5);
      uVar5 = uVar16;
      uVar14 = uVar13;
    }
    func_0x000107c61170(uVar5);
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100e1f000);
    (*pcVar4)();
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d39c80);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d39c90);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  func_0x000107c615f0(param_2);
  uVar5 = uVar6;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (uVar5 == 0) {
    uVar16 = 0;
    uVar8 = 0;
  }
  else {
    uVar16 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
  }
  func_0x000101b813e0(0);
  uVar3 = uStack_68;
  uVar2 = uStack_70;
  func_0x000107c61434(uStack_68);
  func_0x000107c61434(uVar14);
  func_0x000107c61174();
  func_0x000101b80284(param_2,uVar13,uVar12,uVar16,uVar8,uVar2,uVar3,uVar7,uVar14,unaff_x20);
  lVar11 = _DAT_112d39ca8;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d39ca8);
  *(long *)(unaff_x20 + _DAT_112d39ca8) = param_2;
  func_0x000107c61170(uVar13);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if (lVar11 != 0) {
    func_0x000107c61174();
    func_0x000101b805c8();
    func_0x000107c61170(lVar11);
  }
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar14);
  func_0x000107c6142c(uStack_68);
  FUN_100c97bc4(pcVar4,puVar15);
  return;
}



/* Entry: 100e1f008; end: 100e1f0cf; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000100e1f0ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1f0b0) */

void FUN_100e1f008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1103561f8;
    func_0x000107c613fc(&UNK_1103561f8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_100e1f560;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_100e1ec24(param_3,param_4,pcVar3,puVar2);
  FUN_100c97bc4(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100e1f0d0; end: 100e1f12f; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider init] */

void FUN_100e1f0d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBillboardLegalComplianceTakeoverFeature.BillboardLegalComplianceTakeoverProvider"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1f0fc);
  (*pcVar1)();
}



/* Entry: 100e1f130; end: 100e1f1bb; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f130(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39c80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39c88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39c90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39c98));
  FUN_100c97bc4(*(undefined8 *)(param_1 + _DAT_112d39ca0),
                ((undefined8 *)(param_1 + _DAT_112d39ca0))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d39ca8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d39cb0));
  return;
}



/* Entry: 100e1f1bc; end: 100e1f1db;  */

void FUN_100e1f1bc(void)

{
  func_0x000107c61168(&PTR_PTR_112799e50);
  return;
}



/* Entry: 100e1f1dc; end: 100e1f2ab;  */

/* WARNING: Possible PIC construction at 0x000100e1f284: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f1dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d39c98);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d39c88);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d39cb0);
    func_0x00010018cc3c(lVar2);
    lVar1 = lVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar2);
    func_0x000107c4c4bc(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e1f2ac; end: 100e1f2d3; -[_TtC41SCBillboardLegalComplianceTakeoverFeature40BillboardLegalComplianceTakeoverProvider handleTakeoverDisplayed] */

void FUN_100e1f2ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1f1dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e1f2d4; end: 100e1f3a3;  */

/* WARNING: Possible PIC construction at 0x000100e1f37c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1f2d4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d39c98);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d39c88);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d39cb0);
    func_0x00010018cc3c(lVar2);
    lVar1 = lVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar2);
    func_0x000107c4c4c0(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


