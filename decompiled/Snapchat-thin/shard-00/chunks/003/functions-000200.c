/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100488118; end: 10048811f; -[SCBitmojiFlatlandContentServices logger] */

undefined8 FUN_100488118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100488120; end: 100488127; -[SCBitmojiFlatlandContentServices configProvider] */

undefined8 FUN_100488120(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100488128; end: 10048812f; -[SCUserSessionScopedLensEffectOffscreenRenderingServices offscreenRenderingFactory] */

undefined8 FUN_100488128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100488130; end: 100488137; -[SCUserSessionScopedLensEffectOffscreenRenderingServices offscreenRenderingWarmuper] */

undefined8 FUN_100488130(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100488138; end: 10048813f; -[SCBitmojiGLBServices bitmojiSceneDataFetcher] */

undefined8 FUN_100488138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100488140; end: 100488147; -[SCBitmojiGLBServices bitmojiGLBFetcher] */

undefined8 FUN_100488140(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100488148; end: 10048814f; -[SCBitmojiFetchServices avatarProvider] */

undefined8 FUN_100488148(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100488150; end: 10048815f; -[BitmojiStyleProvidingServices bitmojiStyleProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100488150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130343d8));
  return;
}



/* Entry: 100488160; end: 10048816f; -[BitmojiClientRenderConfigServices renderConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100488160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d200));
  return;
}



/* Entry: 100488170; end: 1004881a7;  */

void FUN_100488170(long param_1)

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



/* Entry: 1004881a8; end: 1004881cb;  */

undefined8 FUN_1004881a8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1004881cc; end: 1004881d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004881cc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  FUN_100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar2 != 0) {
    uVar3 = 0;
    FUN_100488314(0);
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    FUN_100083b20(&uStack_60);
    uVar5 = uStack_60;
    func_0x000107c4cd00(uStack_60);
    func_0x000107c61180();
    func_0x000107c61170(uStack_60);
    FUN_100083b20(&lStack_68);
    uVar6 = *(undefined8 *)(lStack_68 + _DAT_1130343d8);
    func_0x000107c61174(uVar6);
    func_0x000107c61170(lStack_68);
    FUN_100083b20(&uStack_70);
    uVar7 = uStack_70;
    func_0x000107c40430(uStack_70);
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    FUN_10048856c(lVar2,uVar5,uVar6,uVar7,uVar3,lVar4);
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100488314);
  (*pcVar1)();
}



/* Entry: 1004881d8; end: 100488313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004881d8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar2 != 0) {
    uVar3 = 0;
    FUN_100488314(0);
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    FUN_100083b20(&uStack_60);
    uVar5 = uStack_60;
    func_0x000107c4cd00(uStack_60);
    func_0x000107c61180();
    func_0x000107c61170(uStack_60);
    FUN_100083b20(&lStack_68);
    uVar6 = *(undefined8 *)(lStack_68 + _DAT_1130343d8);
    func_0x000107c61174(uVar6);
    func_0x000107c61170(lStack_68);
    FUN_100083b20(&uStack_70);
    uVar7 = uStack_70;
    func_0x000107c40430(uStack_70);
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    FUN_10048856c(lVar2,uVar5,uVar6,uVar7,uVar3,lVar4);
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100488314);
  (*pcVar1)();
}



/* Entry: 100488314; end: 100488333;  */

void FUN_100488314(void)

{
  func_0x000107c61168(&PTR_PTR_1127eca50);
  return;
}



/* Entry: 100488334; end: 1004883bf;  */

void FUN_100488334(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4cd00(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  uVar2 = uStack_38;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a71c0;
  func_0x000107c610f8();
  func_0x000107c47778();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1004883c0; end: 1004884a7; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation memoryPressureState] */

void FUN_1004883c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1103c6740;
  func_0x000107c613fc(&UNK_1103c6740,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  pcStack_40 = FUN_100488a90;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100488a58;
  puStack_48 = &UNK_1103c6778;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004884a8; end: 1004884bf;  */

void FUN_1004884a8(long param_1,long param_2)

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



/* Entry: 1004884c0; end: 100488563; -[SCMemoryUsageServices initWithMemoryPressureState:memoryUsageInfoProvider:] */

undefined1 *
FUN_1004884c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112703030;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100488564; end: 10048856b; -[SCMemoryUsageServices memoryPressureState] */

undefined8 FUN_100488564(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10048856c; end: 1004885c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10048856c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  ppuVar2 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  lVar8 = param_5;
  func_0x000107c614f0();
  lVar5 = _DAT_112dd5de0;
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  FUN_1000285a8(0x112dd5dd0,&UNK_10d998790);
  func_0x000107c613fc();
  FUN_10006c248();
  *(undefined ***)(param_5 + lVar5) = ppuVar2;
  *(undefined8 *)(param_5 + _DAT_112dd5df8) = 0;
  *(undefined8 *)(param_5 + _DAT_112dd5dd8) = param_1;
  *(undefined8 *)(param_5 + _DAT_112dd5de8) = param_3;
  *(undefined8 *)(param_5 + _DAT_112dd5df0) = param_4;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = param_5;
  lStack_68 = lVar8;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  plVar3 = &lStack_70;
  func_0x000107c61154(plVar3,puVar4);
  puVar4 = &UNK_110413f88;
  func_0x000107c613fc(&UNK_110413f88,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,plVar3);
  func_0x000107c61174();
  lVar5 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    lVar8 = 0;
  }
  else {
    puStack_80 = &UNK_101931a14;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101930dd0;
    puStack_88 = &UNK_110413fa0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar1 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar1);
    lVar8 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar5);
  }
  uVar7 = *(undefined8 *)((long)plVar3 + _DAT_112dd5df8);
  *(long *)((long)plVar3 + _DAT_112dd5df8) = lVar8;
  func_0x000107c61170(plVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar7);
  return plVar3;
}



/* Entry: 1004885c8; end: 100488807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1004885c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar2 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  lVar8 = param_5;
  func_0x000107c614f0();
  lVar5 = _DAT_112dd5de0;
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  FUN_1000285a8(0x112dd5dd0,&UNK_10d998790);
  func_0x000107c613fc();
  FUN_10006c248();
  *(undefined ***)(param_5 + lVar5) = ppuVar2;
  *(undefined8 *)(param_5 + _DAT_112dd5df8) = 0;
  *(undefined8 *)(param_5 + _DAT_112dd5dd8) = param_1;
  *(undefined8 *)(param_5 + _DAT_112dd5de8) = param_3;
  *(undefined8 *)(param_5 + _DAT_112dd5df0) = param_4;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = param_5;
  lStack_68 = lVar8;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  plVar3 = &lStack_70;
  func_0x000107c61154(plVar3,puVar4);
  puVar4 = &UNK_110413f88;
  func_0x000107c613fc(&UNK_110413f88,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,plVar3);
  func_0x000107c61174();
  lVar5 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    lVar8 = 0;
  }
  else {
    puStack_80 = &UNK_101931a14;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101930dd0;
    puStack_88 = &UNK_110413fa0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar1 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar1);
    lVar8 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar5);
  }
  uVar7 = *(undefined8 *)((long)plVar3 + _DAT_112dd5df8);
  *(long *)((long)plVar3 + _DAT_112dd5df8) = lVar8;
  func_0x000107c61170(plVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar7);
  return plVar3;
}



/* Entry: 100488808; end: 10048882b;  */

void FUN_100488808(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048882c; end: 100488843;  */

undefined1  [16] FUN_10048882c(void)

{
  return ZEXT816(0x110413f68);
}



/* Entry: 100488844; end: 1004888b3;  */

void FUN_100488844(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    func_0x000107c60e14(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1004888b4; end: 10048892b;  */

long * FUN_1004888b4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *puVar2 = &PTR_DAT_1107c7d40;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x10;
  }
  FUN_10048892c(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10048892c; end: 1004889db;  */

/* WARNING: Possible PIC construction at 0x000100488990: Changing call to branch */

void FUN_10048892c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((plVar3 = (long *)param_2[1], plVar3 == (long *)0x0 || (plVar3[1] == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (plVar3 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = plVar5;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 1004889dc; end: 100488a57;  */

void FUN_1004889dc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 100488a58; end: 100488a8f;  */

void FUN_100488a58(long param_1)

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



/* Entry: 100488a90; end: 100488a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100488a90(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112da26a8;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61428(lVar1 + _DAT_112da26a8,auStack_50,0,0);
    lVar3 = *(long *)(lVar1 + lVar3);
    func_0x000107c6157c(lVar3);
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(lVar3);
  }
  return uVar2;
}



/* Entry: 100488a9c; end: 100488b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100488a9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112da26a8;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61428(param_1 + _DAT_112da26a8,auStack_50,0,0);
    lVar2 = *(long *)(param_1 + lVar2);
    func_0x000107c6157c(lVar2);
    func_0x000107c61170(param_1);
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(lVar2);
  }
  return uVar1;
}



/* Entry: 100488b34; end: 100488b5f;  */

void FUN_100488b34(void)

{
  func_0x000100488b40();
  func_0x000100488b84();
  return;
}



/* Entry: 100488b60; end: 100488ba7;  */

void FUN_100488b60(void)

{
  func_0x000100488b40();
  func_0x000100488b84();
  return;
}



/* Entry: 100488ba8; end: 100488bb3;  */

void FUN_100488ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100488bb4; end: 100488bd7;  */

void FUN_100488bb4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100488bd8; end: 100488c4b;  */

undefined8 FUN_100488bd8(void)

{
  int iVar1;
  
  if ((bRam0000000113839990 & 1) == 0) {
    iVar1 = 0x13839990;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100488c94(0x113839908);
      func_0x000107c60e4c(0x113839990);
    }
  }
  return 0x113839908;
}



/* Entry: 100488c4c; end: 100488c93;  */

void FUN_100488c4c(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  FUN_10045fcc4();
  uStack_28 = 0;
  uStack_30 = 2;
  uStack_20 = 0;
  FUN_100488cd0(&uStack_30);
  func_0x000100488cfc();
  return;
}



/* Entry: 100488c94; end: 100488cbb;  */

undefined8 * FUN_100488c94(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = param_1;
  FUN_100488c4c();
  puVar2 = param_1;
  FUN_100488e70(param_1,puVar4);
  *puVar2 = &PTR_DAT_110ccd230;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  uVar3 = 8;
  func_0x000107c60e20();
  func_0x000107c60d14();
  puVar4 = (undefined8 *)0x10;
  uStack_38 = uVar3;
  func_0x000107c60e20();
  uStack_38 = 0;
  *puVar4 = uVar3;
  puVar4[1] = param_1;
  puVar5 = auStack_48;
  puStack_40 = puVar4;
  func_0x000100489040(puVar5,FUN_1004913f8,puVar4);
  if ((int)puVar5 == 0) {
    puStack_40 = (undefined8 *)0x0;
    FUN_10048957c(&puStack_40);
    FUN_1004895c8(&uStack_38);
    FUN_1004895f4(puVar2 + 0xf,auStack_48);
    func_0x000107c60dc0(auStack_48);
    return param_1;
  }
  func_0x000107c60d78();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100488fac);
  (*pcVar1)();
}



/* Entry: 100488cbc; end: 100488ccf;  */

void FUN_100488cbc(long param_1,long param_2)

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



/* Entry: 100488cd0; end: 100488d1b;  */

undefined ** FUN_100488cd0(undefined **param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_c8 [72];
  
  if (0xfffffffd < *(int *)param_1 - 3U) {
    return &PTR_s_Default_Factory_1107c7220;
  }
  func_0x000107c2c420();
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100488d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1[2])();
    return param_1;
  }
  func_0x000107c2c424();
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = (ulong)uVar1 * 0x48;
  puVar4 = auStack_c8;
  FUN_100460de4();
  lVar7 = *(long *)(&UNK_1107c7028 + lVar3);
  (*(code *)(&PTR_FUN_1107c7100)[uVar2 * 7])();
  ppuVar5 = (undefined **)(puVar4 + lVar7 + 0x48);
  FUN_100460860();
  ppuVar5[2] = &UNK_1107c7020 + lVar3;
  ppuVar5[3] = &UNK_1107c70f8 + uVar2 * 0x38;
  *ppuVar5 = (undefined *)0x2;
  (*(code *)(&PTR_SUB_1107c7108)[uVar2 * 7])((long)(ppuVar5 + 9) + lVar7,ppuVar5 + 1);
  (*(code *)(&PTR_FUN_1107c7030)[(ulong)uVar1 * 9])(ppuVar5 + 9,uVar6);
  ppuVar5[5] = &UNK_104ada54c;
  ppuVar5[6] = (undefined *)ppuVar5;
  ppuVar5[7] = (undefined *)0x0;
  FUN_100467a48(auStack_c8);
  return ppuVar5;
}



/* Entry: 100488d1c; end: 100488d2b;  */

undefined8 * FUN_100488d1c(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_a8 [72];
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = (ulong)uVar1 * 0x48;
  puVar4 = auStack_a8;
  FUN_100460de4();
  lVar7 = *(long *)(&UNK_1107c7028 + lVar3);
  (*(code *)(&PTR_FUN_1107c7100)[uVar2 * 7])();
  puVar5 = (undefined8 *)(puVar4 + lVar7 + 0x48);
  FUN_100460860();
  puVar5[2] = &UNK_1107c7020 + lVar3;
  puVar5[3] = &UNK_1107c70f8 + uVar2 * 0x38;
  *puVar5 = 2;
  (*(code *)(&PTR_SUB_1107c7108)[uVar2 * 7])((long)(puVar5 + 9) + lVar7,puVar5 + 1);
  (*(code *)(&PTR_FUN_1107c7030)[(ulong)uVar1 * 9])(puVar5 + 9,uVar6);
  puVar5[5] = &UNK_104ada54c;
  puVar5[6] = puVar5;
  puVar5[7] = 0;
  FUN_100467a48(auStack_a8);
  return puVar5;
}



/* Entry: 100488d2c; end: 100488e33;  */

undefined8 * FUN_100488d2c(uint param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_a8 [72];
  
  puVar1 = auStack_a8;
  FUN_100460de4();
  lVar3 = *(long *)(&UNK_1107c7028 + (ulong)param_1 * 0x48);
  (*(code *)(&PTR_FUN_1107c7100)[(param_2 & 0xffffffff) * 7])();
  puVar2 = (undefined8 *)(puVar1 + lVar3 + 0x48);
  FUN_100460860();
  puVar2[2] = &UNK_1107c7020 + (ulong)param_1 * 0x48;
  puVar2[3] = &UNK_1107c70f8 + (param_2 & 0xffffffff) * 0x38;
  *puVar2 = 2;
  (*(code *)(&PTR_SUB_1107c7108)[(param_2 & 0xffffffff) * 7])((long)(puVar2 + 9) + lVar3,puVar2 + 1)
  ;
  (*(code *)(&PTR_FUN_1107c7030)[(ulong)param_1 * 9])(puVar2 + 9,param_3);
  puVar2[5] = &UNK_104ada54c;
  puVar2[6] = puVar2;
  puVar2[7] = 0;
  FUN_100467a48(auStack_a8);
  return puVar2;
}



/* Entry: 100488e34; end: 100488e6f;  */

void FUN_100488e34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar1 = param_1 + 10;
  param_1[0xb] = 0;
  *puVar1 = 0;
  param_1[1] = puVar1;
  param_1[9] = puVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *puVar1 = 0;
  param_1[0xd] = 1;
  return;
}



/* Entry: 100488e70; end: 100488eeb;  */

undefined8 * FUN_100488e70(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_DAT_1107ec498;
  param_1[2] = param_2;
  (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,param_1 + 4);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  param_1[3] = 1;
  return param_1;
}



/* Entry: 100488eec; end: 100488ffb;  */

undefined8 * FUN_100488eec(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  FUN_100488e70();
  *puVar2 = &PTR_DAT_110ccd230;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  uVar3 = 8;
  func_0x000107c60e20();
  func_0x000107c60d14();
  puVar4 = (undefined8 *)0x10;
  uStack_38 = uVar3;
  func_0x000107c60e20();
  uStack_38 = 0;
  *puVar4 = uVar3;
  puVar4[1] = param_1;
  puVar5 = auStack_48;
  puStack_40 = puVar4;
  func_0x000100489040(puVar5,FUN_1004913f8,puVar4);
  if ((int)puVar5 == 0) {
    puStack_40 = (undefined8 *)0x0;
    FUN_10048957c(&puStack_40);
    FUN_1004895c8(&uStack_38);
    FUN_1004895f4(puVar2 + 0xf,auStack_48);
    func_0x000107c60dc0(auStack_48);
    return param_1;
  }
  func_0x000107c60d78();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100488fac);
  (*pcVar1)();
}



/* Entry: 100488ffc; end: 100489037;  */

void FUN_100488ffc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100489038; end: 10048904f;  */

void FUN_100489038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100489050; end: 10048912b;  */

/* WARNING: Possible PIC construction at 0x0001004890a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004890a8) */

void FUN_100489050(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x48));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 10048912c; end: 100489227; -[SCBitmojiFlatlandBatchContentServices initWithBatchedSceneFetcher:clientRendererGatingProvider:customojiFetcher:clientRenderer:] */

undefined1 *
FUN_10048912c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112705b50;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100489228; end: 100489327;  */

void FUN_100489228(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100489328; end: 100489477;  */

void FUN_100489328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110414ba0;
  func_0x000107c613fc(&UNK_110414ba0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  puStack_70 = &UNK_101938b10;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101938a30;
  puStack_78 = &UNK_110414bb8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 100489478; end: 100489497;  */

void FUN_100489478(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100489498; end: 1004894c3;  */

void FUN_100489498(void)

{
  func_0x000107c610f8(PTR_PTR_1126a7e30);
                    /* WARNING: Could not recover jumptable at 0x00010c04c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1004894c4; end: 100489537; -[SCBitmoji3DStickerServices initWithStickerFetcher:] */

undefined1 * FUN_1004894c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd738;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100489538; end: 10048957b;  */

void FUN_100489538(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048957c; end: 1004895af;  */

long * FUN_10048957c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1004895c8();
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1004895b0; end: 1004895c7;  */

void FUN_1004895b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__115__thread_structD1Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1004895c8; end: 1004895eb;  */

undefined8 FUN_1004895c8(undefined8 param_1)

{
  FUN_1004895b0(param_1,0);
  return param_1;
}



/* Entry: 1004895ec; end: 1004895f3;  */

void FUN_1004895ec(void)

{
  return;
}



/* Entry: 1004895f4; end: 100489617;  */

void FUN_1004895f4(long *param_1,long *param_2)

{
  if (*param_1 == 0) {
    *param_1 = *param_2;
    *param_2 = 0;
    return;
  }
  func_0x000107c60e0c();
  FUN_100450ac0();
  func_0x0001004896ec();
  FUN_100450afc();
  return;
}



/* Entry: 100489618; end: 100489637;  */

void FUN_100489618(void)

{
  FUN_100450ac0();
  func_0x0001004896ec();
  FUN_100450afc();
  return;
}



/* Entry: 100489638; end: 1004896c7;  */

void FUN_100489638(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_100489618(auStack_40,1);
  FUN_100489780(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000100489a40(auStack_40);
  func_0x000100489a50(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100489a40(auStack_40);
  func_0x00010538e024();
  pcStack_48 = FUN_1004896c8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100489638(&uStack_51,puVar2);
  return;
}



/* Entry: 1004896c8; end: 10048971b;  */

void FUN_1004896c8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100489638(&uStack_11,param_1);
  return;
}



/* Entry: 10048971c; end: 100489727;  */

void FUN_10048971c(void)

{
  return;
}



/* Entry: 100489728; end: 10048977f;  */

void FUN_100489728(void)

{
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  FUN_10048971c();
  FUN_1004897e0(auStack_38,&PTR_s__messagingcoreservice_MessagingC_1107e98c0,&UNK_1107e98d8,
                &uStack_39);
  func_0x00010016ca30();
  FUN_100489930();
  func_0x0001001c1d38(auStack_38);
  return;
}



/* Entry: 100489780; end: 1004897c7;  */

undefined8 * FUN_100489780(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107e9880;
  param_1[1] = 0;
  FUN_100489728(param_1 + 3);
  return param_1;
}



/* Entry: 1004897c8; end: 1004897df;  */

void FUN_1004897c8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  return;
}



/* Entry: 1004897e0; end: 10048980b;  */

void FUN_1004897e0(void)

{
  FUN_1004897c8();
  FUN_100489888();
  return;
}



/* Entry: 10048980c; end: 100489887;  */

long FUN_10048980c(long *param_1)

{
  long lVar1;
  long alStack_38 [3];
  
  FUN_10048971c();
  FUN_1004898cc(alStack_38);
  func_0x00010016ca30();
  FUN_10016c888();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_100124874();
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
  }
  FUN_1001248bc(alStack_38);
  return lVar1;
}



/* Entry: 100489888; end: 1004898cb;  */

void FUN_100489888(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_10048980c(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 1004898cc; end: 10048990f;  */

void FUN_1004898cc(long param_1)

{
  long *unaff_x19;
  long unaff_x21;
  
  func_0x0001001247f0();
  *unaff_x19 = param_1;
  unaff_x19[1] = unaff_x21;
  unaff_x19[2] = 0;
  FUN_100489910(param_1 + 0x20);
  *(undefined1 *)(unaff_x19 + 2) = 1;
  return;
}



/* Entry: 100489910; end: 10048992f;  */

void FUN_100489910(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010002b82c(param_1,uVar1);
  func_0x000107c613d0(uVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 100489930; end: 100489993;  */

long FUN_100489930(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000100489924(&UNK_1107e98d8);
  lVar2 = param_2[1];
  uVar3 = *param_2;
  *(undefined8 *)(lVar1 + 0x10) = param_2[1];
  *(undefined8 *)(lVar1 + 8) = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  FUN_1004899a4(param_1 + 0x18,param_3);
  return param_1;
}



/* Entry: 100489994; end: 1004899a3;  */

void FUN_100489994(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1004899a4; end: 1004899d7;  */

void FUN_1004899a4(void)

{
  FUN_1004897c8();
  FUN_1004899e4();
  return;
}



/* Entry: 1004899d8; end: 1004899e3;  */

void FUN_1004899d8(void)

{
  return;
}



/* Entry: 1004899e4; end: 100489a2b;  */

void FUN_1004899e4(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  FUN_1004899d8();
  while (unaff_x21 != unaff_x19) {
    FUN_100489a2c(param_1,param_1 + 8,unaff_x21 + 0x20);
    FUN_10002c7d4();
  }
  return;
}



/* Entry: 100489a2c; end: 100489a73;  */

undefined1  [16] FUN_100489a2c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10016c888(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010016ca30(alStack_58);
    FUN_100124804();
    FUN_100124874(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    FUN_1001248bc(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 100489a74; end: 100489b3f;  */

void FUN_100489a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = auStack_70;
  func_0x000100489a64();
  uStack_58 = extraout_x8;
  FUN_100489ba8(auStack_70,1);
  FUN_100489c64(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar2 = lStack_60;
  lStack_60 = 0;
  FUN_10048b3d0(param_1,lVar2 + 0x18);
  FUN_10048b4c4(auStack_70);
  func_0x00010048b4d4(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_10048b4c4(auStack_70);
  func_0x000107c34cac();
  pcStack_78 = FUN_100489b40;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_100489a74(&uStack_81,puVar1,lVar2,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 100489b40; end: 100489ba7;  */

void FUN_100489b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_11;
  
  FUN_100489a74(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 100489ba8; end: 100489bcf;  */

long FUN_100489ba8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100489b78();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100489bd0; end: 100489c63;  */

undefined8
FUN_100489bd0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_100489cb8(param_1,param_2,&uStack_30,&uStack_40,*param_5);
  FUN_10048b3ac(&uStack_40);
  FUN_100450be4(&uStack_30);
  return param_1;
}



/* Entry: 100489c64; end: 100489ca7;  */

undefined8 * FUN_100489c64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110abd260;
  FUN_100489bd0(param_1 + 3);
  return param_1;
}



/* Entry: 100489ca8; end: 100489cb7;  */

void FUN_100489ca8(void)

{
  return;
}



/* Entry: 100489cb8; end: 10048a5a7;  */

undefined8 *
FUN_100489cb8(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined8 *puStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  
  puVar5 = param_1;
  FUN_100489ca8();
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_DAT_110abd6a0;
  puVar5[1] = &PTR_DAT_110abd740;
  uVar12 = *param_3;
  puVar8 = puVar5 + 4;
  puVar5[5] = param_3[1];
  *puVar8 = uVar12;
  *param_3 = 0;
  param_3[1] = 0;
  puVar5[6] = param_5;
  lVar9 = param_4[1];
  uVar12 = *param_4;
  puVar5[8] = param_4[1];
  puVar5[7] = uVar12;
  uStack_78 = extraout_x8;
  if (lVar9 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10 != 0);
  }
  lVar9 = param_6[1];
  uVar12 = *param_6;
  param_1[10] = param_6[1];
  param_1[9] = uVar12;
  if (lVar9 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10_00 != 0);
  }
  lVar9 = param_7[1];
  uVar12 = *param_7;
  param_1[0xc] = param_7[1];
  param_1[0xb] = uVar12;
  if (lVar9 != 0) {
    do {
      FUN_10048a5a8();
    } while (extraout_w10_01 != 0);
  }
  puVar6 = (undefined8 *)0x30;
  func_0x000107c60e20();
  puVar6[5] = 0;
  *puVar6 = &PTR_DAT_110abd910;
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  *(undefined4 *)(puVar6 + 5) = 0x3f800000;
  param_1[0xd] = puVar6;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x18);
  FUN_10048a5b8(param_1 + 0xf,param_2);
  uVar4 = *(undefined1 *)(param_2 + 0x4c);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined1 *)(param_2 + 0x54);
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x12) = uVar4;
  *(undefined4 *)((long)param_1 + 0x94) = uVar11;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = uVar1;
  *(undefined1 *)(param_1 + 0x14) = uVar2;
  *(undefined2 *)((long)param_1 + 0xa1) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x16] = 0;
  puVar6 = (undefined8 *)0xa8;
  func_0x000107c60e20();
  *puVar6 = param_1;
  FUN_10048a65c(auStack_290,&DAT_10f3637f7);
  func_0x000107c60c94(&puStack_138,auStack_290);
  func_0x000107c60c94(auStack_278,&puStack_138);
  FUN_10048a65c(auStack_2d8,&UNK_10f50ebca);
  func_0x000107c60c94(auStack_d8,auStack_2d8);
  func_0x000107c60c94(auStack_b8,auStack_d8);
  func_0x000107c60c94(auStack_2c0,auStack_b8);
  func_0x000107c60ca0(auStack_b8);
  func_0x000107c60ca0(auStack_d8);
  func_0x000107c60c94(auStack_90,auStack_2c0);
  func_0x000107c60c94(auStack_2a8,auStack_90);
  FUN_10048a65c(auStack_308,&UNK_10f50ebd7);
  func_0x000107c60c94(auStack_b0,auStack_308);
  func_0x000107c60c94(auStack_2f0,auStack_b0);
  FUN_10048a65c(auStack_338,&DAT_10f684e6a);
  func_0x000107c60c94(auStack_d0,auStack_338);
  func_0x000107c60c94(auStack_320,auStack_d0);
  FUN_10048a65c(auStack_368,&UNK_10f50ebe5);
  func_0x000107c60c94(auStack_f0,auStack_368);
  func_0x000107c60c94(auStack_350,auStack_f0);
  FUN_10048a65c(auStack_398,&UNK_10f50ebef);
  func_0x000107c60c94(auStack_110,auStack_398);
  func_0x000107c60c94(auStack_380,auStack_110);
  func_0x000107c60c94(auStack_1e8,auStack_278);
  func_0x000107c60c94(auStack_200,auStack_2a8);
  func_0x000107c60c94(auStack_218,auStack_2f0);
  func_0x000107c60c94(auStack_230,auStack_320);
  func_0x000107c60c94(auStack_248,auStack_350);
  func_0x000107c60c94(auStack_260,auStack_380);
  func_0x000107c60c94(auStack_158,auStack_1e8);
  func_0x000107c60c94(puVar6 + 1,auStack_158);
  func_0x000107c60ca0(auStack_158);
  func_0x000107c60c94(auStack_170,auStack_200);
  func_0x000107c60c94(puVar6 + 4,auStack_170);
  func_0x000107c60ca0(auStack_170);
  *(undefined1 *)(puVar6 + 7) = 0;
  func_0x000107c60c94(auStack_188,auStack_218);
  func_0x000107c60c94(puVar6 + 8,auStack_188);
  func_0x000107c60ca0(auStack_188);
  func_0x000107c60c94(auStack_1a0,auStack_230);
  func_0x000107c60c94(puVar6 + 0xb,auStack_1a0);
  func_0x000107c60ca0(auStack_1a0);
  func_0x000107c60c94(auStack_1b8,auStack_248);
  func_0x000107c60c94(puVar6 + 0xe,auStack_1b8);
  func_0x000107c60ca0(auStack_1b8);
  func_0x000107c60c94(auStack_1d0,auStack_260);
  func_0x000107c60c94(puVar6 + 0x11,auStack_1d0);
  func_0x000107c60ca0(auStack_1d0);
  func_0x000107c60ca0(auStack_260);
  func_0x000107c60ca0(auStack_248);
  func_0x000107c60ca0(auStack_230);
  func_0x000107c60ca0(auStack_218);
  func_0x000107c60ca0(auStack_200);
  func_0x000107c60ca0(auStack_1e8);
  func_0x000107c60ca0(auStack_380);
  func_0x000107c60ca0(auStack_110);
  FUN_10048a9f4();
  func_0x000107c60ca0(auStack_350);
  func_0x000107c60ca0(auStack_f0);
  func_0x000107c60ca0(auStack_368);
  func_0x00010048a9fc();
  func_0x000107c60ca0(auStack_d0);
  func_0x000107c60ca0(auStack_338);
  func_0x000107c60ca0(auStack_2f0);
  func_0x000107c60ca0(auStack_b0);
  func_0x000107c60ca0(auStack_308);
  func_0x000107c60ca0(auStack_2a8);
  func_0x000107c60ca0(auStack_90);
  func_0x000107c60ca0(auStack_2c0);
  func_0x000107c60ca0(auStack_2d8);
  func_0x000107c60ca0(auStack_278);
  func_0x00010048aa04();
  func_0x000107c60ca0(auStack_290);
  *(undefined1 *)(puVar6 + 0x14) = 0;
  FUN_10048aa18();
  param_1[0x18] = puVar6;
  iVar3 = *(int *)(param_2 + 0x48);
  FUN_10048aa88(&uStack_140,1);
  puVar6 = puStack_130;
  puStack_130[2] = 0;
  *puStack_130 = &PTR_DAT_1107e9ce0;
  puStack_130[1] = 0;
  FUN_10048aad4(puStack_130 + 3,puVar8,(long)iVar3,1);
  puVar10 = puStack_130;
  puStack_130 = (undefined8 *)0x0;
  func_0x00010048ab14(param_1 + 0x19,puVar10 + 3);
  func_0x00010048ac3c(&uStack_140);
  puVar10 = param_1 + 0x1c;
  param_1[0x1d] = 0;
  *puVar10 = 0;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  uStack_120 = 0;
  puStack_138 = (undefined8 *)0x0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (undefined8 *)0x0;
  auStack_90[0] = 0;
  puStack_98 = &uStack_140;
  func_0x00010048ac80(&uStack_140,5);
  for (lVar9 = 0; lVar9 != 0x28; lVar9 = lVar9 + 8) {
    *puStack_138 = *(undefined8 *)(&UNK_10df9dab8 + lVar9);
    puStack_138 = puStack_138 + 1;
  }
  auStack_90[0] = 1;
  FUN_10048aeb4(&puStack_98);
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  uVar11 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(char *)(param_2 + 0x5c) == '\0';
  if ((bool)uVar4) {
    uVar11 = 0;
  }
  uStack_128 = CONCAT44((int)(uStack_128 >> 0x20),uVar11) & 0xffffff00ffffffff;
  FUN_10048af90(param_1 + 0x25,&uStack_140);
  puVar7 = &uStack_140;
  FUN_10048b0a4(puVar7);
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x165) = 0;
  FUN_10048b0dc();
  FUN_10048b398(uStack_78);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    FUN_10048b0a4(param_1 + 0x25);
    func_0x000107c2a8d0(param_1 + 0x21);
    func_0x000107c2a8fc(puVar10);
    func_0x00010048ac10(param_1 + 0x19);
    func_0x000107c2a8f8(param_1 + 0x18);
    do {
      func_0x0001008e2700(param_1 + 0x15);
      func_0x000107c60ca0(param_1 + 0xf);
      func_0x000107c2a8f0(param_1 + 0xd);
      func_0x00010048b828(param_1 + 0xb);
      FUN_10048b4e8(param_1 + 9);
      FUN_10048b3ac(puVar5 + 7);
      FUN_100450be4(puVar8);
      FUN_10048b47c(puVar5 + 2);
      func_0x000107c60bd8(puVar7);
      func_0x000107c60ca0(param_1 + 0x24);
      func_0x000107c60ca0(param_1 + 0x20);
      func_0x000107c60ca0(puVar6);
      func_0x000107c60ca0(auStack_260);
      func_0x000107c60ca0(auStack_248);
      func_0x000107c60ca0(auStack_230);
      func_0x000107c60ca0(auStack_218);
      func_0x000107c60ca0(auStack_200);
      func_0x000107c60ca0(auStack_1e8);
      func_0x000107c60ca0(auStack_380);
      func_0x000107c60ca0(9);
      FUN_10048a9f4();
      func_0x000107c60ca0(auStack_350);
      func_0x000107c60ca0(auStack_f0);
      func_0x000107c60ca0(auStack_368);
      func_0x00010048a9fc();
      func_0x000107c60ca0(&puStack_138);
      func_0x000107c60ca0(auStack_338);
      func_0x000107c60ca0(auStack_2f0);
      func_0x000107c60ca0(&puStack_138);
      func_0x000107c60ca0(auStack_308);
      func_0x000107c60ca0(auStack_2a8);
      func_0x000107c60ca0(auStack_90);
      func_0x000107c60ca0(auStack_2c0);
      func_0x000107c60ca0(auStack_2d8);
      func_0x000107c60ca0(auStack_278);
      func_0x00010048aa04();
      func_0x000107c60ca0(auStack_290);
      func_0x000107c60e14(puVar10);
    } while( true );
  }
  return param_1;
}



/* Entry: 10048a5a8; end: 10048a5b7;  */

void FUN_10048a5a8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10048a5b8; end: 10048a653;  */

void FUN_10048a5b8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = param_2;
  func_0x000107c60be8(param_2,0x3a,0xffffffffffffffff);
  if (plVar4 != (long *)0xffffffffffffffff) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    uVar1 = param_2[1];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    if ((long)plVar4 + 1U < uVar1) {
      plVar2 = (long *)*param_2;
      if (-1 < (char)bVar3) {
        plVar2 = param_2;
      }
      lVar5 = (long)*(char *)((long)plVar2 + (long)plVar4 + 1U);
      if ((-1 < lVar5) &&
         ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + lVar5 * 4 + 0x3c) >> 10 & 1) != 0)) {
        func_0x000107c60c98(param_1,param_2,0,plVar4,&stack0xffffffffffffffef);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2);
  return;
}



/* Entry: 10048a654; end: 10048a65b;  */

void FUN_10048a654(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10048a65c; end: 10048a6c7;  */

void FUN_10048a65c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10048a654(param_1,&UNK_10f50ec02);
  FUN_10048a6c8(&uStack_38,auStack_50,param_2);
  func_0x00010048a704();
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010048a70c();
  return;
}



/* Entry: 10048a6c8; end: 10048a6e7;  */

void FUN_10048a6c8(void)

{
  func_0x000107c60c58();
  FUN_10048a6e8();
  return;
}



/* Entry: 10048a6e8; end: 10048a71b;  */

void FUN_10048a6e8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_1;
  unaff_x19[1] = param_1[1];
  *unaff_x19 = uVar1;
  unaff_x19[2] = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10048a71c; end: 10048a9f3; -[SCChatReactionServiceProvider provide] */

void FUN_10048a71c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1057d0c10;
  puStack_90 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar5;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_1057d0cb8;
  puStack_c0 = &UNK_1108b2e98;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_108 = puVar5;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_1057d0d00;
  puStack_f0 = &UNK_1108b2ec8;
  func_0x000107c6111c(auStack_e0,auStack_80);
  puStack_e8 = puVar2;
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_130 = puVar5;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_1057d0d48;
  puStack_118 = &UNK_1108b2ef8;
  func_0x000107c6111c(auStack_110,auStack_80);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_138,auStack_80);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126be668;
  func_0x000107c610f4(PTR_PTR_1126be668);
  func_0x000107c45d98();
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_138);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_110);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10048a9f4; end: 10048aa17;  */

void FUN_10048a9f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000028);
  return;
}



/* Entry: 10048aa18; end: 10048aa47;  */

undefined8 FUN_10048aa18(void)

{
  func_0x00010048aa10();
  FUN_10048aa48();
  FUN_10048aa74();
  return 1;
}



/* Entry: 10048aa48; end: 10048aa73;  */

void FUN_10048aa48(void)

{
  undefined1 auStack_28 [24];
  
  FUN_10002b838(auStack_28,&UNK_10f50eb89);
  FUN_10048aa74();
  return;
}



/* Entry: 10048aa74; end: 10048aa87;  */

void FUN_10048aa74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10048aa88; end: 10048aaa7;  */

void FUN_10048aa88(void)

{
  FUN_100450ac0();
  FUN_10048aaa8();
  FUN_100450afc();
  return;
}



/* Entry: 10048aaa8; end: 10048aad3;  */

void FUN_10048aaa8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_2) {
    func_0x000104bd35f4();
    *param_1 = 0;
    param_1[1] = 0;
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[3] = param_2[1];
    param_1[2] = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_100489994();
      } while (extraout_w10 != 0);
    }
    param_1[4] = param_3;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = param_4;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x60);
  return;
}



/* Entry: 10048aad4; end: 10048ab27;  */

void FUN_10048aad4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  param_1[4] = param_3;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10048ab28; end: 10048ab87;  */

void FUN_10048ab28(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        FUN_10048ab88();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10048ab98(param_2,&uStack_20);
    func_0x00010048ac10(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10048ab88; end: 10048ab97;  */

void FUN_10048ab88(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}


