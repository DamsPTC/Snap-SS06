/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103361c28; end: 103361deb;  */

void FUN_103361c28(void)

{
  return;
}



/* Entry: 103361dec; end: 103361e53;  */

void FUN_103361dec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037c3f8();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1033620e8();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103361e54; end: 103361e5b;  */

void FUN_103361e54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037c3f8();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1033620e8();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103361e5c; end: 103361ea3;  */

undefined8 FUN_103361e5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1033620e8(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 103361ea4; end: 103361ec7;  */

void FUN_103361ea4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103361ec8; end: 103361f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103361ec8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037cd24();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5bf10) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103361f34; end: 103361f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103361f34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5bf10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103361f80; end: 103362077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103361f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x00010037c3d8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = param_6;
  lStack_60 = lVar1;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x00010008a7c8(&uStack_58,&lStack_60);
  func_0x000100083b20(&lStack_60);
  func_0x000107c61574(uStack_58);
  func_0x000107c61574(lVar1);
  lVar1 = lStack_60;
  uVar2 = *(undefined8 *)(lStack_60 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lVar1);
  return uVar2;
}



/* Entry: 103362078; end: 1033620d7; -[_TtC26LensURISaberPluginRegistry31LensURISaberPluginScopeServices init] */

void FUN_103362078(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensURISaberPluginRegistry.LensURISaberPluginScopeServices",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033620a4);
  (*pcVar1)();
}



/* Entry: 1033620d8; end: 1033620e7; -[_TtC26LensURISaberPluginRegistry31LensURISaberPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033620d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5bf10));
  return;
}



/* Entry: 1033620e8; end: 103362227;  */

void FUN_1033620e8(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112f5c008);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          func_0x000102b2e308(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000102b2e308(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  return;
}



/* Entry: 103362228; end: 10336224f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103362228(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037cd24();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5bf10) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103362250; end: 1033622ff;  */

void FUN_103362250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 103362300; end: 10336234b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103362300(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5c0d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336234c; end: 1033623ab; -[GamesConsentObtainerServices init] */

void FUN_10336234c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesConsentObtainerServices.GamesConsentObtainerServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103362378);
  (*pcVar1)();
}



/* Entry: 1033623ac; end: 1033623bb; -[GamesConsentObtainerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033623ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5c0d8));
  return;
}



/* Entry: 1033623bc; end: 103362427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033623bc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1033627b0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5c110) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103362428; end: 103362493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103362428(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5c110) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103362494; end: 1033624f3; -[_TtC57LensesCollectionModularCameraScopedFactoryServiceProvider45SCLensesCollectionModularCameraScopedServices init] */

void FUN_103362494(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCollectionModularCameraScopedFactoryServiceProvider.SCLensesCollectionModularCameraScopedServices"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033624c0);
  (*pcVar1)();
}



/* Entry: 1033624f4; end: 103362503; -[_TtC57LensesCollectionModularCameraScopedFactoryServiceProvider45SCLensesCollectionModularCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033624f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5c110));
  return;
}



/* Entry: 103362504; end: 10336256f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103362504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110643810;
  func_0x000107c613fc(&UNK_110643810,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10336288c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103362570; end: 10336260b;  */

void FUN_103362570(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110643720;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110643720;
  return;
}



/* Entry: 10336260c; end: 103362643;  */

void FUN_10336260c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103362644; end: 10336264b;  */

undefined8 FUN_103362644(void)

{
  return 0x1b;
}



/* Entry: 10336264c; end: 10336277f;  */

void FUN_10336264c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110643838;
  func_0x000107c613fc(&UNK_110643838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103362864;
  func_0x00010058fa64(FUN_103362864,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103362780; end: 1033627af;  */

undefined ** FUN_103362780(void)

{
  return &PTR_DAT_112fef8f0;
}



/* Entry: 1033627b0; end: 1033627cf;  */

void FUN_1033627b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0678);
  return;
}



/* Entry: 1033627d0; end: 10336281f;  */

undefined1  [16] FUN_1033627d0(void)

{
  return ZEXT816(0x110643770);
}



/* Entry: 103362820; end: 103362863;  */

void FUN_103362820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5c178 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad0d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f5c178 = puVar1;
  return;
}



/* Entry: 103362864; end: 10336288b;  */

void FUN_103362864(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10336288c; end: 10336288f;  */

void FUN_10336288c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103362890; end: 10336290b;  */

void FUN_103362890(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f5c188,&UNK_10dbb4cb0);
  func_0x000107c613fc();
  pcVar1 = FUN_103362c8c;
  func_0x0001000841fc(FUN_103362c8c,param_2);
  func_0x000100084214(&UNK_10dbb4c70,0x3b,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10336290c; end: 103362923;  */

void FUN_10336290c(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f5c188,&UNK_10dbb4cb0);
  func_0x000107c613fc();
  pcVar1 = FUN_103362c8c;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dbb4c70,0x3b,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103362924; end: 103362c8b;  */

void FUN_103362924(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f5c190,&UNK_10dbb4cb8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103363b9c();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_103363c28();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10336260c;
  func_0x0001000823a8(FUN_10336260c,0);
  func_0x000100082720("SCLensesCollectionModularCameraScopedServicesCleanupRelayServiceProvider",
                      0x48,2);
  puVar5 = puVar2;
  FUN_103363a50();
  func_0x000100082720("LensesCollectionModularCameraScopeGraphBridgeServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f5c198,&UNK_10dbb4cd0);
  puVar6 = &UNK_110643898;
  func_0x000107c613fc(&UNK_110643898,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x103362c94;
  func_0x0001000823a8(0x103362c94,puVar6);
  func_0x000100082720("SCLensesCollectionModularCameraUIEntryPointWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f5c1a0,&UNK_10dbb4cc0);
  puVar6 = &UNK_1106438c0;
  func_0x000107c613fc(&UNK_1106438c0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  uVar7 = 0x103362ca0;
  func_0x0001000823a8(0x103362ca0,puVar6);
  func_0x000100082720("SCLensesCollectionModularCameraScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f5c118,&UNK_10dbb49f0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103362cac;
  func_0x0001000823a8(0x103362cac,uVar7);
  func_0x000100082720("SCLensesCollectionModularCameraScopeInitializationServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f5c108,&UNK_10dbb49e0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x103362cb4;
  func_0x0001000823a8(0x103362cb4,uVar8);
  func_0x000100082720("SCLensesCollectionModularCameraScopedServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1106438e8;
  func_0x000107c613fc(&UNK_1106438e8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x103362cbc;
  func_0x0001000823a8(0x103362cbc,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensesCollectionModularCameraScopeEntryPointProvider",0x36,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 103362c8c; end: 103362cc3;  */

void FUN_103362c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f5c190,&UNK_10dbb4cb8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103363b9c();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_103363c28();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10336260c;
  func_0x0001000823a8(FUN_10336260c,0);
  func_0x000100082720("SCLensesCollectionModularCameraScopedServicesCleanupRelayServiceProvider",
                      0x48,2);
  puVar5 = puVar2;
  FUN_103363a50();
  func_0x000100082720("LensesCollectionModularCameraScopeGraphBridgeServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f5c198,&UNK_10dbb4cd0);
  puVar6 = &UNK_110643898;
  func_0x000107c613fc(&UNK_110643898,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x103362c94;
  func_0x0001000823a8(0x103362c94,puVar6);
  func_0x000100082720("SCLensesCollectionModularCameraUIEntryPointWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f5c1a0,&UNK_10dbb4cc0);
  puVar6 = &UNK_1106438c0;
  func_0x000107c613fc(&UNK_1106438c0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  uVar7 = 0x103362ca0;
  func_0x0001000823a8(0x103362ca0,puVar6);
  func_0x000100082720("SCLensesCollectionModularCameraScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f5c118,&UNK_10dbb49f0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103362cac;
  func_0x0001000823a8(0x103362cac,uVar7);
  func_0x000100082720("SCLensesCollectionModularCameraScopeInitializationServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f5c108,&UNK_10dbb49e0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x103362cb4;
  func_0x0001000823a8(0x103362cb4,uVar8);
  func_0x000100082720("SCLensesCollectionModularCameraScopedServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1106438e8;
  func_0x000107c613fc(&UNK_1106438e8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x103362cbc;
  func_0x0001000823a8(0x103362cbc,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensesCollectionModularCameraScopeEntryPointProvider",0x36,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 103362cc4; end: 103362d73;  */

void FUN_103362cc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_103363108();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103362f08(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103362d74; end: 103362de3;  */

undefined8 FUN_103362d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103362f08(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 103362de4; end: 103362e17;  */

void FUN_103362de4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103362e18; end: 103362e1f;  */

undefined8 FUN_103362e18(void)

{
  return 0x1b;
}



/* Entry: 103362e20; end: 103362ea3;  */

void FUN_103362e20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103363148,param_2,FUN_10336314c,param_2,FUN_103363174,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103362ea4; end: 103362ef3;  */

undefined8 FUN_103362ea4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 103362ef4; end: 103362f07;  */

void FUN_103362ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110643900;
  return;
}



/* Entry: 103362f08; end: 1033630eb;  */

void FUN_103362f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ad0d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536172656d6163;
  func_0x000107c5fadc(0x63536172656d6163,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0714b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0714d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1033630ec; end: 103363107;  */

undefined ** FUN_1033630ec(void)

{
  return &PTR_DAT_112fef8f0;
}



/* Entry: 103363108; end: 103363127;  */

void FUN_103363108(void)

{
  func_0x000107c61168(&PTR_PTR_112f5c210);
  return;
}



/* Entry: 103363128; end: 10336314b;  */

undefined1  [16] FUN_103363128(void)

{
  return ZEXT816(0x110643940);
}



/* Entry: 10336314c; end: 103363173;  */

void FUN_10336314c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103363174; end: 10336317b;  */

undefined8 FUN_103363174(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10336317c; end: 1033631b7;  */

void FUN_10336317c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1033631b8();
  func_0x0001000a7f38("SCLensesCollectionModularCameraScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1033631b8; end: 1033633a3;  */

void FUN_1033631b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106d9668;
  ppuVar4 = &PTR_DAT_112fef8f0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110643990;
  func_0x000107c613fc(&UNK_110643990,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f5c280;
  func_0x0001000285a8(0x112f5c280,&UNK_10dbb4e48);
  func_0x0001000a6ee8(&UNK_110643be0,
                      "LensesCollectionModularCameraScopeGraphBridgeScopeInitializationPluginKey",
                      0x49,2,FUN_1033633a4,puVar2,uVar3,&UNK_110643be0,&PTR_DAT_112f5c318);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106439b8;
  func_0x000107c613fc(&UNK_1106439b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106437b0,
                      "SCLensesCollectionModularCameraScopedServicesScopeInitializationPluginKey",
                      0x49,2,FUN_10336348c,puVar2,uVar3,&UNK_1106437b0,&PTR_DAT_112f5c120);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110643940,
                      "SCLensesCollectionModularCameraUIEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4e,2,FUN_103363508,param_4,uVar3,&UNK_110643940,&PTR_DAT_112f5c1a8);
  func_0x000107c61574(param_4);
  uVar3 = 0x112f5c288;
  func_0x0001000285a8(0x112f5c288,&UNK_10dbb4e50);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1033633a4; end: 1033633e3;  */

void FUN_1033633a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103363cd0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensesCollectionModularCameraScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033633e4; end: 10336348b;  */

void FUN_1033633e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106439e0;
  func_0x000107c613fc(&UNK_1106439e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103363544;
  func_0x0001000823a8(FUN_103363544,puVar1);
  func_0x000100082720("SCLensesCollectionModularCameraScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10336348c; end: 103363493;  */

void FUN_10336348c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106439e0;
  func_0x000107c613fc(&UNK_1106439e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103363544;
  func_0x0001000823a8(FUN_103363544,puVar3);
  func_0x000100082720("SCLensesCollectionModularCameraScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103363494; end: 103363507;  */

void FUN_103363494(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103363510;
  func_0x0001000823a8(0x103363510,param_3);
  func_0x000100082720("SCLensesCollectionModularCameraUIEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x53,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103363508; end: 103363517;  */

void FUN_103363508(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103363510;
  func_0x0001000823a8();
  func_0x000100082720("SCLensesCollectionModularCameraUIEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x53,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103363518; end: 103363543;  */

void FUN_103363518(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103363544; end: 10336354b;  */

void FUN_103363544(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110643838;
  func_0x000107c613fc(&UNK_110643838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103362864;
  func_0x00010058fa64(FUN_103362864,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10336354c; end: 103363627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336354c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103363960();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f5c290) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f5c298) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103363628);
  (*pcVar1)();
}



/* Entry: 103363628; end: 103363687; -[_TtC45LensesCollectionModularCameraScopeGraphBridge60LensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_103363628(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCollectionModularCameraScopeGraphBridge.LensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103363654);
  (*pcVar1)();
}



/* Entry: 103363688; end: 1033636bf; -[_TtC45LensesCollectionModularCameraScopeGraphBridge60LensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033636a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033636a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5c290));
  return;
}



/* Entry: 1033636c0; end: 1033636e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033636c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f5c298),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f5c290));
  return;
}



/* Entry: 1033636e8; end: 103363707;  */

void FUN_1033636e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0738);
  return;
}



/* Entry: 103363708; end: 10336378f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103363708(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5c2c8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f5c2d0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103363790);
  (*pcVar2)();
}



/* Entry: 103363790; end: 103363877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103363790(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5c2c8);
  *(undefined **)(unaff_x20 + _DAT_112f5c2c8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5c2d0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5c2d0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110643b00;
  func_0x000107c613fc(&UNK_110643b00,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10336387c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103363878; end: 103363883;  */

void FUN_103363878(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103363884; end: 1033638e3; -[_TtC45LensesCollectionModularCameraScopeGraphBridge60SCLensesCollectionModularCameraScopedServicesSaberEntryPoint init] */

void FUN_103363884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCollectionModularCameraScopeGraphBridge.SCLensesCollectionModularCameraScopedServicesSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033638b0);
  (*pcVar1)();
}



/* Entry: 1033638e4; end: 10336391b; -[_TtC45LensesCollectionModularCameraScopeGraphBridge60SCLensesCollectionModularCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033638e4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5c2d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5c2c8));
  return;
}



/* Entry: 10336391c; end: 10336391f;  */

void FUN_10336391c(void)

{
  return;
}



/* Entry: 103363920; end: 10336393f;  */

void FUN_103363920(void)

{
  FUN_103363790();
  return;
}



/* Entry: 103363940; end: 10336395f;  */

void FUN_103363940(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0800);
  return;
}



/* Entry: 103363960; end: 103363a2f;  */

undefined8 FUN_103363960(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f5c300,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_103363a30();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103363a30; end: 103363a4f;  */

void FUN_103363a30(void)

{
  func_0x000107c61168(&PTR_PTR_1128d08c8);
  return;
}



/* Entry: 103363a50; end: 103363a6b;  */

void FUN_103363a50(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5c308,&UNK_10dbb4f38);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103363ad8,param_1);
  return;
}



/* Entry: 103363a6c; end: 103363ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363a6c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_103363a30();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f5c310) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103363ad8; end: 103363adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363ad8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_103363a30();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f5c310) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103363ae0; end: 103363b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363ae0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5c310) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103363b2c; end: 103363b8b; -[_TtC45LensesCollectionModularCameraScopeGraphBridge53LensesCollectionModularCameraScopeGraphBridgeServices init] */

void FUN_103363b2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCollectionModularCameraScopeGraphBridge.LensesCollectionModularCameraScopeGraphBridgeServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103363b58);
  (*pcVar1)();
}



/* Entry: 103363b8c; end: 103363b9b; -[_TtC45LensesCollectionModularCameraScopeGraphBridge53LensesCollectionModularCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5c310));
  return;
}



/* Entry: 103363b9c; end: 103363c27;  */

void FUN_103363b9c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x103363bdc,0);
  return;
}



/* Entry: 103363c28; end: 103363c43;  */

void FUN_103363c28(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103363c94,param_1);
  return;
}



/* Entry: 103363c44; end: 103363c93;  */

void FUN_103363c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 103363c94; end: 103363cc7;  */

void FUN_103363c94(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103363cc8; end: 103363ccf;  */

undefined8 FUN_103363cc8(void)

{
  return 0x1b;
}



/* Entry: 103363cd0; end: 103363e47;  */

void FUN_103363cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110643b48;
  func_0x000107c613fc(&UNK_110643b48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103363e48,puVar1);
  return;
}



/* Entry: 103363e48; end: 103363e4f;  */

void FUN_103363e48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f5c300,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f5c300,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110643c20;
  func_0x000107c613fc(&UNK_110643c20,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103363f1c;
  func_0x00010058fa64(0x103363f1c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103363e50; end: 103363eab;  */

void FUN_103363e50(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f5c300,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f5c300,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103363eac; end: 103363f23;  */

undefined ** FUN_103363eac(void)

{
  return &PTR_DAT_112fef8f0;
}



/* Entry: 103363f24; end: 103363f6b; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363f24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5c368;
  func_0x000107c61428(param_1 + _DAT_112f5c368,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103363f6c; end: 103363fc3; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5c368;
  func_0x000107c61428(param_1 + _DAT_112f5c368,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103363fc4; end: 10336400b; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103363fc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5c370;
  func_0x000107c61428(param_1 + _DAT_112f5c370,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10336400c; end: 103364017; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336400c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5c370;
  func_0x000107c61428(param_1 + _DAT_112f5c370,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103364018; end: 10336405f; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint lensesCollectionModularCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364018(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5c378;
  func_0x000107c61428(param_1 + _DAT_112f5c378,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103364060; end: 10336406b; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint setLensesCollectionModularCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364060(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5c378;
  func_0x000107c61428(param_1 + _DAT_112f5c378,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10336406c; end: 1033640cb;  */

void FUN_10336406c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1033640cc; end: 103364287;  */

/* WARNING: Possible PIC construction at 0x0001033641e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103364208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103364218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336425c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336421c) */
/* WARNING: Removing unreachable block (ram,0x00010336420c) */
/* WARNING: Removing unreachable block (ram,0x0001033641e8) */
/* WARNING: Removing unreachable block (ram,0x000103364260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033640cc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4b594();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1033636e8();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_103363960();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103364288);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f5c290) = lVar5;
      *(long *)(lVar3 + _DAT_112f5c298) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103364288; end: 1033642af; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103364288(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033640cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033642b0; end: 1033642f3; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_1033642b0(undefined8 param_1)

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



/* Entry: 1033642f4; end: 1033644f7;  */

void FUN_1033642f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffc4) || (param_3 != -0x7ffffffef0ebf080)) &&
           (func_0x000107c605b8(0xd00000000000003c,0x800000010f140f80,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LensesCollectionModularCameraScopeGraphBridge/SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x72,2,0x37,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033644f8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55f24();
        goto LAB_103364380;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_103364380:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033644f8; end: 1033645a3; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1033644f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033642f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033645a4; end: 10336461b; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033645a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5c368,0);
  *(undefined8 *)(param_1 + _DAT_112f5c370) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5c378) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5c380) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


