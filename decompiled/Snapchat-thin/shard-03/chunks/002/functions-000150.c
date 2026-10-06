/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10260ca84; end: 10260cbd7;  */

/* WARNING: Possible PIC construction at 0x00010260cb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260cbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260cb4c) */
/* WARNING: Removing unreachable block (ram,0x00010260cbb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260ca84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112eafc98;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c4e790();
    func_0x000107c61180();
    uVar4 = param_2;
    if (lVar2 == 0) {
      func_0x000107c5faec();
      uVar4 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar3 = param_1;
    func_0x000107c4b860();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c3e350();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c4c2ec(lVar1);
      func_0x000107c615e8(lVar1);
    }
    else {
      func_0x000107c5faec();
      lVar2 = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10260cbd8; end: 10260cd1b; -[_TtC33MapChromeV2ServicesImplementation36MapChromeV2PlacePivotsContextFactory handlePlacePivotTapWithPivot:isSearchQuery:actionId:] */

/* WARNING: Possible PIC construction at 0x00010260ccec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260ccfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260ccf0) */
/* WARNING: Removing unreachable block (ram,0x00010260cd00) */

void FUN_10260cbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11052a870;
  func_0x000107c613fc(&UNK_11052a870,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  puVar2 = &UNK_11052a898;
  func_0x000107c613fc(&UNK_11052a898,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4090;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar3 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4098,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10260cd1c; end: 10260cd87;  */

void FUN_10260cd1c(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10260cd88,uVar1,uVar2);
  return;
}



/* Entry: 10260cd88; end: 10260cddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260cd88(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = lVar1 + _DAT_112eafc98;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c2e4();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010260cdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10260cddc; end: 10260cdff; -[_TtC33MapChromeV2ServicesImplementation36MapChromeV2PlacePivotsContextFactory handleMemoriesPivotTap] */

void FUN_10260cddc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11052a820;
  puVar2 = &UNK_11052a848;
  func_0x000107c613fc(&UNK_11052a820,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c613fc(&UNK_11052a848,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4078;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4080,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10260ce00; end: 10260ce6b;  */

void FUN_10260ce00(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10260ce6c,uVar1,uVar2);
  return;
}



/* Entry: 10260ce6c; end: 10260cebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260ce6c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = lVar1 + _DAT_112eafc98;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c2d4();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010260cebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10260cec0; end: 10260cee3; -[_TtC33MapChromeV2ServicesImplementation36MapChromeV2PlacePivotsContextFactory handleFootstepsPivotTap] */

void FUN_10260cec0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11052a7d0;
  puVar2 = &UNK_11052a7f8;
  func_0x000107c613fc(&UNK_11052a7d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c613fc(&UNK_11052a7f8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4060;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4068,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10260cee4; end: 10260cfaf;  */

void FUN_10260cee4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(long *)(param_4 + 0x18) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar1 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,param_6,param_4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10260cfb0; end: 10260d1a7;  */

undefined * FUN_10260cfb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar3 = lVar2;
  func_0x000100403a6c();
  func_0x000100bcb1dc(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5fe08(lVar3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  uVar4 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar5 = &UNK_11052a730;
  func_0x000107c613fc(&UNK_11052a730,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x10260d36c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1019e993c;
  puStack_78 = &UNK_11052a748;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c4da68();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  puVar7 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar5 = &UNK_11052a780;
  func_0x000107c613fc(&UNK_11052a780,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  uStack_70 = 0x10260d374;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11052a798;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c408f0(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(param_2);
  return puVar7;
}



/* Entry: 10260d1a8; end: 10260d27f;  */

void FUN_10260d1a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 uStack_51;
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434();
    uVar4 = 0;
    lVar1 = -0x2fffffffffffffe9;
    func_0x000100029284(0xd000000000000017);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_50);
      func_0x000107c6142c(param_1);
      puVar2 = &uStack_51;
      func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)puVar2 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c4d664(param_2);
        func_0x000107c61170(puVar3);
      }
    }
  }
  return;
}



/* Entry: 10260d280; end: 10260d2df; -[_TtC33MapChromeV2ServicesImplementation36MapChromeV2PlacePivotsContextFactory init] */

void FUN_10260d280(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2ServicesImplementation.MapChromeV2PlacePivotsContextFactory",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10260d2ac);
  (*pcVar1)();
}



/* Entry: 10260d2e0; end: 10260d327; -[_TtC33MapChromeV2ServicesImplementation36MapChromeV2PlacePivotsContextFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260d2e0(long param_1)

{
  FUN_102607080(param_1 + _DAT_112eafc98);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eafca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eafca8));
  return;
}



/* Entry: 10260d328; end: 10260d347;  */

void FUN_10260d328(void)

{
  func_0x000107c61168(&PTR_PTR_1128544a8);
  return;
}



/* Entry: 10260d348; end: 10260d383;  */

undefined * FUN_10260d348(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar3 = lVar2;
  func_0x000100403a6c();
  func_0x000100bcb1dc(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5fe08(lVar3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  uVar4 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar5 = &UNK_11052a730;
  func_0x000107c613fc(&UNK_11052a730,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x10260d36c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1019e993c;
  puStack_78 = &UNK_11052a748;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c4da68();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  puVar7 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar5 = &UNK_11052a780;
  func_0x000107c613fc(&UNK_11052a780,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  uStack_70 = 0x10260d374;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11052a798;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c615f0(uVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c408f0(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(uVar9);
  return puVar7;
}



/* Entry: 10260d384; end: 10260d3cf;  */

void FUN_10260d384(void)

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
  plVar2[1] = 0x10260d620;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10260ce6c,lVar1,lVar3);
  return;
}



/* Entry: 10260d3d0; end: 10260d43f;  */

void FUN_10260d3d0(undefined8 param_1)

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
  plVar3[1] = 0x10260d61c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10260d440; end: 10260d48b;  */

void FUN_10260d440(void)

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
  plVar2[1] = 0x10260d628;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10260cd88,lVar1,lVar3);
  return;
}



/* Entry: 10260d48c; end: 10260d4fb;  */

void FUN_10260d48c(undefined8 param_1)

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
  plVar3[1] = 0x10260d624;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10260d4fc; end: 10260d55f;  */

void FUN_10260d4fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10260d560;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10260ca10,lVar3,lVar4);
  return;
}



/* Entry: 10260d560; end: 10260d59b;  */

void FUN_10260d560(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010260d598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10260d59c; end: 10260d60b;  */

void FUN_10260d59c(undefined8 param_1)

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
  plVar3[1] = 0x10260d62c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10260d60c; end: 10260d62f;  */

void FUN_10260d60c(long param_1,long param_2)

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



/* Entry: 10260d630; end: 10260d7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10260d630(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126aac50;
  func_0x000107c610f8(PTR_PTR_1126aac50);
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eafd10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_11052a8c0;
    func_0x000107c613fc(&UNK_11052a8c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_10260da80;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_10260d97c;
    puStack_58 = &UNK_11052a8d8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c56f20(puVar1);
    func_0x000107c60bd0(ppuVar4);
    lVar5 = lVar2;
    func_0x000107c5d94c();
    if ((int)lVar5 != 0) {
      func_0x000107c5da54(lVar2);
    }
    puVar3 = PTR_PTR_1126aac58;
    func_0x000107c610f8(PTR_PTR_1126aac58);
    func_0x000107c453e4();
    func_0x000107c521f4();
    puVar6 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c49470();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eafd20);
    *(undefined **)(unaff_x20 + _DAT_112eafd20) = puVar6;
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    puVar7 = puVar3;
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c5cb24(puVar6);
      func_0x000107c61180();
      func_0x000107c59e70(puVar1);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(lVar2);
  }
  return puVar1;
}



/* Entry: 10260d7d4; end: 10260d82f;  */

void FUN_10260d7d4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10260d830(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10260d830; end: 10260d97b;  */

/* WARNING: Possible PIC construction at 0x00010260d8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260d958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260d8c0) */
/* WARNING: Removing unreachable block (ram,0x00010260d8ec) */
/* WARNING: Removing unreachable block (ram,0x00010260d8f4) */
/* WARNING: Removing unreachable block (ram,0x00010260d940) */
/* WARNING: Removing unreachable block (ram,0x00010260d900) */
/* WARNING: Removing unreachable block (ram,0x00010260d950) */
/* WARNING: Removing unreachable block (ram,0x00010260d95c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260d830(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112eafd10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c5d94c();
  if ((uVar2 & 1) == 0) {
    func_0x000107c4c4f8(uVar1);
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112eafd18) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c51a88();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10260d97c; end: 10260d9b7;  */

void FUN_10260d97c(long param_1,undefined8 param_2)

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



/* Entry: 10260d9b8; end: 10260da17; -[_TtC33MapChromeV2ServicesImplementation42MapChromeV2Satellite3DToggleContextFactory init] */

void FUN_10260d9b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2ServicesImplementation.MapChromeV2Satellite3DToggleContextFactory"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10260d9e4);
  (*pcVar1)();
}



/* Entry: 10260da18; end: 10260da5f; -[_TtC33MapChromeV2ServicesImplementation42MapChromeV2Satellite3DToggleContextFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010260da34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260da38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260da18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eafd10));
  return;
}



/* Entry: 10260da60; end: 10260da7f;  */

void FUN_10260da60(void)

{
  func_0x000107c61168(&PTR_PTR_112854578);
  return;
}



/* Entry: 10260da80; end: 10260daa3;  */

void FUN_10260da80(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10260d830(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10260daa4; end: 10260daf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260daa4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112eafe10) != 0) {
    func_0x000107c5d320();
  }
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10260daf8; end: 10260db6b; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260daf8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112eafe10);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5d320(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10260db6c; end: 10260dd2f; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010260dba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dbec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dc2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dc6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dcac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260dccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260dcb0) */
/* WARNING: Removing unreachable block (ram,0x00010260dc90) */
/* WARNING: Removing unreachable block (ram,0x00010260dc70) */
/* WARNING: Removing unreachable block (ram,0x00010260dc30) */
/* WARNING: Removing unreachable block (ram,0x00010260dc10) */
/* WARNING: Removing unreachable block (ram,0x00010260dbf0) */
/* WARNING: Removing unreachable block (ram,0x00010260dbd0) */
/* WARNING: Removing unreachable block (ram,0x00010260dbac) */
/* WARNING: Removing unreachable block (ram,0x00010260dcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260db6c(long param_1)

{
  FUN_102607080(param_1 + _DAT_112eafd50);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eafd58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eafd60));
  return;
}



/* Entry: 10260dd30; end: 10260e057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10260dd30(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar8 = _DAT_112eafdf0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eafdf0);
  *(undefined **)(unaff_x20 + _DAT_112eafdf0) = puVar2;
  func_0x000107c61170(uVar5);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = _DAT_112eafdd0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eafdd0);
  *(undefined **)(unaff_x20 + _DAT_112eafdd0) = puVar2;
  func_0x000107c61170(uVar5);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar10 = _DAT_112eafdd8;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eafdd8);
  *(undefined **)(unaff_x20 + _DAT_112eafdd8) = puVar2;
  func_0x000107c61170(uVar5);
  uVar1 = (uint)uVar5;
  FUN_10260e058();
  FUN_10260f878();
  lVar6 = *(long *)(unaff_x20 + lVar10);
  if (lVar6 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(lVar6);
    func_0x000107c45a48(puVar2,param_2,uVar1 & 1);
    func_0x000107c4d664(lVar6,param_2,puVar2);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar2);
  }
  func_0x00010260e648();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = _DAT_112eafde0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eafde0);
  *(undefined **)(unaff_x20 + _DAT_112eafde0) = puVar2;
  func_0x000107c61170(uVar5);
  FUN_10260e8e0();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar7 = _DAT_112eafde8;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eafde8);
  *(undefined **)(unaff_x20 + _DAT_112eafde8) = puVar2;
  func_0x000107c61170(uVar5);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar9 = _DAT_112eafdf8;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eafdf8);
  *(undefined **)(unaff_x20 + _DAT_112eafdf8) = puVar2;
  func_0x000107c61170(uVar5);
  func_0x00010260ea24();
  puVar2 = PTR_PTR_1126aac60;
  func_0x000107c610f8(PTR_PTR_1126aac60);
  func_0x000107c453e4();
  func_0x000107c52168();
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if ((((lVar3 != 0) && (lVar6 = *(long *)(unaff_x20 + lVar6), lVar6 != 0)) &&
      (lVar7 = *(long *)(unaff_x20 + lVar7), lVar7 != 0)) &&
     (((lVar8 = *(long *)(unaff_x20 + lVar8), lVar8 != 0 &&
       (lVar9 = *(long *)(unaff_x20 + lVar9), lVar9 != 0)) &&
      (lVar10 = *(long *)(unaff_x20 + lVar10), lVar10 != 0)))) {
    func_0x000107c61174();
    func_0x000107c61174(lVar6);
    func_0x000107c61174(lVar7);
    func_0x000107c61174(lVar8);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(lVar10);
    lVar4 = lVar3;
    func_0x000107c5cb24(lVar3);
    func_0x000107c61180();
    func_0x000107c52cc8(puVar2,param_2,lVar4);
    func_0x000107c61170(lVar4);
    lVar4 = lVar10;
    func_0x000107c5cb24(lVar10);
    func_0x000107c61180();
    func_0x000107c563d0(puVar2,param_2,lVar4);
    func_0x000107c61170(lVar4);
    lVar4 = lVar6;
    func_0x000107c5cb24(lVar6);
    func_0x000107c61180();
    func_0x000107c521f8(puVar2,param_2,lVar4);
    func_0x000107c61170(lVar4);
    lVar4 = lVar7;
    func_0x000107c5cb24(lVar7);
    func_0x000107c61180();
    func_0x000107c53620(puVar2,param_2,lVar4);
    func_0x000107c61170(lVar4);
    lVar4 = lVar8;
    func_0x000107c5cb24(lVar8);
    func_0x000107c61180();
    func_0x000107c5a384(puVar2,param_2,lVar4);
    func_0x000107c61170(lVar4);
    lVar4 = lVar9;
    func_0x000107c5cb24(lVar9);
    func_0x000107c61180();
    func_0x000107c558cc(puVar2,param_2,lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar4);
  }
  return puVar2;
}



/* Entry: 10260e058; end: 10260e8df;  */

/* WARNING: Possible PIC construction at 0x00010260e588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260e598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260e5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260e60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260e61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260e5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260e620) */
/* WARNING: Removing unreachable block (ram,0x00010260e610) */
/* WARNING: Removing unreachable block (ram,0x00010260e5ac) */
/* WARNING: Removing unreachable block (ram,0x00010260e59c) */
/* WARNING: Removing unreachable block (ram,0x00010260e58c) */
/* WARNING: Removing unreachable block (ram,0x00010260e600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260e058(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112eafd60) + _DAT_113072718);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eafd78);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112eafd98);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = *(long *)(unaff_x20 + _DAT_112eafda0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar6 = *(long *)(unaff_x20 + _DAT_112eafd80);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar2;
            func_0x000107c5bd48(lVar2);
            func_0x000107c61180();
            puVar11 = &UNK_11052a910;
            puVar8 = puVar11;
            func_0x000107c613fc(&UNK_11052a910,0x18,7);
            func_0x000107c61614(puVar8 + 0x10);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_80 = FUN_102610a84;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            puStack_90 = (undefined *)0x102610fc4;
            puStack_88 = &UNK_11052aab8;
            ppuVar9 = &puStack_a0;
            puStack_78 = puVar8;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61574(puStack_78);
            lVar10 = lVar7;
            func_0x000107c5c320(lVar7);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(lVar7);
            func_0x000107c3e924(lVar10);
            func_0x000107c61170(lVar10);
            func_0x000107c4ec88(lVar4);
            func_0x000107c61180();
            func_0x000107c613fc(&UNK_11052a910,0x18,7);
            func_0x000107c61614(puVar11 + 0x10);
            pcStack_80 = (code *)0x102610a8c;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_101114e90;
            puStack_88 = &UNK_11052aae0;
            ppuVar9 = &puStack_a0;
            puStack_78 = puVar11;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61574(puStack_78);
            lVar7 = lVar4;
            func_0x000107c5c320(lVar4);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(lVar4);
            func_0x000107c3e924(lVar7);
            func_0x000107c61170(lVar7);
            func_0x000107c4e640(lVar5);
            func_0x000107c61180();
            puVar11 = &UNK_11052a910;
            func_0x000107c613fc(&UNK_11052a910,0x18,7);
            func_0x000107c61614(puVar11 + 0x10);
            pcStack_80 = FUN_102610a94;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_10103b94c;
            puStack_88 = &UNK_11052ab08;
            ppuVar9 = &puStack_a0;
            puStack_78 = puVar11;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61574(puStack_78);
            lVar4 = lVar5;
            func_0x000107c5c320(lVar5);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(lVar5);
            func_0x000107c3e924(lVar4);
            func_0x000107c61170(lVar4);
            func_0x000107c4b930(lVar6);
            func_0x000107c61180();
            puVar11 = &UNK_11052a910;
            func_0x000107c613fc(&UNK_11052a910,0x18,7);
            func_0x000107c61614(puVar11 + 0x10);
            pcStack_80 = FUN_102610ab4;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_101981064;
            puStack_88 = &UNK_11052ab30;
            ppuVar9 = &puStack_a0;
            puStack_78 = puVar11;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61574(puStack_78);
            lVar4 = lVar6;
            func_0x000107c5c320(lVar6);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(lVar6);
            func_0x000107c3e924(lVar4);
            func_0x000107c61170(lVar4);
            lVar4 = *(long *)(unaff_x20 + _DAT_112eafd58);
            if (lVar4 != 0) {
              func_0x000107c4b93c();
              func_0x000107c61180();
              puVar11 = &UNK_11052a910;
              func_0x000107c613fc(&UNK_11052a910,0x18,7);
              func_0x000107c61614(puVar11 + 0x10);
              pcStack_80 = (code *)0x102610fd0;
              puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_98 = 0x42000000;
              puStack_90 = &UNK_101114e8c;
              puStack_88 = &UNK_11052ab80;
              ppuVar9 = &puStack_a0;
              puStack_78 = puVar11;
              func_0x000107c60bc4(ppuVar9);
              func_0x000107c61574(puStack_78);
              lVar5 = lVar4;
              func_0x000107c5c320(lVar4);
              func_0x000107c61180();
              func_0x000107c60bd0(ppuVar9);
              func_0x000107c61170(lVar4);
              func_0x000107c3e924(lVar5);
              func_0x000107c61170(lVar5);
            }
            func_0x000107c3e548(lVar3);
            func_0x000107c61180();
            puVar11 = &UNK_11052a910;
            func_0x000107c613fc(&UNK_11052a910,0x18,7);
            func_0x000107c61614(puVar11 + 0x10);
            pcStack_80 = (code *)0x102610fcc;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_10083fefc;
            puStack_88 = &UNK_11052ab58;
            ppuVar9 = &puStack_a0;
            puStack_78 = puVar11;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61574(puStack_78);
            lVar4 = lVar3;
            func_0x000107c5c320(lVar3);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(lVar3);
            func_0x000107c3e924(lVar4);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 10260e8e0; end: 10260eb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260e8e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eafd88) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4c358();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c3d134();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar4 = &UNK_11052a910;
    func_0x000107c613fc(&UNK_11052a910,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_50 = 0x102610a00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x1026147d4;
    puStack_58 = &UNK_11052a950;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar2 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10260eb6c; end: 10260ec0b;  */

void FUN_10260eb6c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_11052a910;
  func_0x000107c613fc(&UNK_11052a910,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  func_0x000107c61170(param_2);
  func_0x000104387ff0(FUN_10260ec0c,0,FUN_102610ae4,puVar1);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 10260ec0c; end: 10260ec0f;  */

void FUN_10260ec0c(void)

{
  return;
}



/* Entry: 10260ec10; end: 10260f163;  */

/* WARNING: Possible PIC construction at 0x00010260eec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260eed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260ef74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260ef84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260f080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260f090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260ef38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260ef48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260f120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260f130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260ed5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260f134) */
/* WARNING: Removing unreachable block (ram,0x00010260f124) */
/* WARNING: Removing unreachable block (ram,0x00010260ef4c) */
/* WARNING: Removing unreachable block (ram,0x00010260f13c) */
/* WARNING: Removing unreachable block (ram,0x00010260ef3c) */
/* WARNING: Removing unreachable block (ram,0x00010260f094) */
/* WARNING: Removing unreachable block (ram,0x00010260f140) */
/* WARNING: Removing unreachable block (ram,0x00010260f084) */
/* WARNING: Removing unreachable block (ram,0x00010260ef88) */
/* WARNING: Removing unreachable block (ram,0x00010260ef78) */
/* WARNING: Removing unreachable block (ram,0x00010260eedc) */
/* WARNING: Removing unreachable block (ram,0x00010260ef8c) */
/* WARNING: Removing unreachable block (ram,0x00010260eecc) */
/* WARNING: Removing unreachable block (ram,0x00010260ed60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260ec10(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 auStack_78 [24];
  
  puVar2 = *(undefined8 **)(*(long *)(unaff_x20 + _DAT_112eafd60) + _DAT_113072718);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112eafd78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 == 0) goto code_r0x000107c615e8;
  puVar4 = *(undefined8 **)(unaff_x20 + _DAT_112eafd98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) goto code_r0x000107c615e8;
  puVar13 = puVar4;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (puVar13 == (undefined8 *)0x0) {
LAB_10260ecfc:
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112eafd68);
    puVar16 = (undefined1 *)((undefined8 *)(unaff_x20 + _DAT_112eafd68))[1];
    uVar5 = uVar15;
    puVar14 = puVar16;
    func_0x000107c5fadc(uVar15);
    func_0x000107c410e4();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (puVar2 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x3737323237303032;
      puVar13 = *(undefined8 **)(unaff_x20 + _DAT_112eafd58);
      puVar10 = puVar14;
      if (puVar13 != (undefined8 *)0x0) {
        func_0x000107c5fadc(uVar15);
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c61170(uVar15);
        puVar10 = puVar16;
        if (puVar13 != (undefined8 *)0x0) {
          puVar2 = puVar13;
          func_0x000107c5bd58();
          func_0x000107c61180();
          func_0x000107c61170(puVar13);
          puVar10 = puVar16;
          if (puVar2 != (undefined8 *)0x0) {
            puVar12 = *(undefined8 **)((long)puVar2 + _DAT_113072870);
            puVar14 = (undefined1 *)((undefined8 *)((long)puVar2 + _DAT_113072870))[1];
            func_0x000107c61434(puVar14);
            goto LAB_10260ed50;
          }
        }
      }
      puVar14 = (undefined1 *)0xe800000000000000;
    }
    else {
      puVar12 = puVar2;
      func_0x000107c5faec();
      puVar16 = puVar14;
LAB_10260ed50:
      func_0x000107c61170(puVar2);
      puVar10 = puVar16;
    }
  }
  else {
    puVar12 = puVar13;
    func_0x000107c443c8();
    func_0x000107c61170();
    if ((int)puVar12 == 0) goto LAB_10260ecfc;
    func_0x000103a2c718();
    puVar10 = auStack_78;
    func_0x000107c61428();
    puVar12 = (undefined8 *)*puVar13;
    puVar14 = (undefined1 *)puVar13[1];
    func_0x000107c61434(puVar14);
  }
  func_0x000107c3e544();
  func_0x000107c61180();
  puVar2 = puVar4;
  if (uVar3 == 0) {
    puVar1 = (ulong *)(unaff_x20 + _DAT_112eafe00);
    if (puVar1[1] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
      if (((uVar3 == 0x4c4f484543414c50) && (puVar1[1] == 0xeb00000000524544)) ||
         (func_0x000107c605b8(), (uVar3 & 1) != 0)) goto code_r0x000107c615e8;
      uVar3 = puVar1[1];
    }
    puVar1[1] = 0xeb00000000524544;
    *puVar1 = 0x4c4f484543414c50;
    func_0x000107c6142c(uVar3);
    puVar9 = PTR_PTR_1126aac78;
    func_0x000107c610f8(PTR_PTR_1126aac78);
    func_0x000107c453e4();
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112eafd68);
    func_0x000107c5fadc(uVar15,((undefined8 *)(unaff_x20 + _DAT_112eafd68))[1]);
    func_0x000107c5a344(puVar9);
    func_0x000107c61170(uVar15);
    lVar8 = *(long *)(unaff_x20 + _DAT_112eafdd0);
    if (lVar8 != 0) {
      func_0x000107c61174();
      func_0x000107c4d664();
      func_0x000107c61170(lVar8);
    }
    goto code_r0x000107c615e8;
  }
  uVar6 = uVar3;
  func_0x000107c5faec();
  puVar1 = (ulong *)(unaff_x20 + _DAT_112eafe00);
  puVar16 = (undefined1 *)puVar1[1];
  if ((puVar16 != (undefined1 *)0x0) &&
     (((uVar6 == *puVar1 && (puVar16 == puVar10)) ||
      (uVar7 = uVar6, func_0x000107c605b8(uVar6,puVar10,*puVar1,puVar16,0), (uVar7 & 1) != 0)))) {
    puVar11 = (undefined1 *)((undefined8 *)(unaff_x20 + _DAT_112eafe08))[1];
    if (puVar11 != (undefined1 *)0x0) {
      if ((puVar12 == *(undefined8 **)(unaff_x20 + _DAT_112eafe08)) && (puVar11 == puVar14)) {
        func_0x000107c6142c(puVar10);
        goto code_r0x000107c615e8;
      }
      puVar4 = puVar12;
      func_0x000107c605b8();
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000107c6142c(puVar10);
        goto code_r0x000107c615e8;
      }
    }
  }
  *puVar1 = uVar6;
  puVar1[1] = (ulong)puVar10;
  func_0x000107c61434(puVar10);
  func_0x000107c6142c(puVar16);
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112eafe08);
  uVar15 = puVar4[1];
  *puVar4 = puVar12;
  puVar4[1] = puVar14;
  func_0x000107c61434(puVar14);
  func_0x000107c6142c(uVar15);
  puVar9 = PTR_PTR_1126aac78;
  func_0x000107c610f8(PTR_PTR_1126aac78);
  func_0x000107c453e4();
  func_0x000107c6142c(puVar10);
  func_0x000107c52cc4(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(puVar12,puVar14);
  func_0x000107c598a0(puVar9);
  func_0x000107c61170(puVar12);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112eafd68);
  func_0x000107c5fadc(uVar15,((undefined8 *)(unaff_x20 + _DAT_112eafd68))[1]);
  func_0x000107c5a344(puVar9);
  func_0x000107c61170(uVar15);
  lVar8 = *(long *)(unaff_x20 + _DAT_112eafdd0);
  if (lVar8 != 0) {
    func_0x000107c61174();
    func_0x000107c4d664();
    func_0x000107c61170(lVar8);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 10260f164; end: 10260f1e7;  */

void FUN_10260f164(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10260f1e8();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10260ec10();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10260f1e8; end: 10260f46b;  */

/* WARNING: Possible PIC construction at 0x00010260f274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260f2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260f32c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260f33c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260f2f4) */
/* WARNING: Removing unreachable block (ram,0x00010260f278) */
/* WARNING: Removing unreachable block (ram,0x00010260f340) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260f1e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  
  ppuVar1 = *(undefined ***)(unaff_x20 + _DAT_112eafd98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppuVar1 == (undefined **)0x0) {
    return;
  }
  ppuVar2 = *(undefined ***)(unaff_x20 + _DAT_112eafda0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(ppuVar1);
    return;
  }
  puVar3 = PTR_PTR_1126aac80;
  func_0x000107c610f8(PTR_PTR_1126aac80);
  func_0x000107c453e4();
  ppuVar4 = ppuVar1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (ppuVar4 == (undefined **)0x0) {
    func_0x000107c556cc(puVar3,param_2,0);
    ppuVar4 = ppuVar2;
    func_0x000107c3e488();
    if (ppuVar4 == (undefined **)0x1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f72698;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
      func_0x000107c49a70(ppuVar2,param_2,ppuVar4);
    }
    else {
      func_0x000107c55830(puVar3,param_2,0);
      ppuVar4 = *(undefined ***)(unaff_x20 + _DAT_112eafdf0);
      if (ppuVar4 == (undefined **)0x0) {
        func_0x000107c615e8(ppuVar1);
        ppuVar1 = ppuVar2;
        goto code_r0x000107c615e8;
      }
      func_0x000107c61174();
      func_0x000107c4d664();
    }
  }
  else {
    func_0x000107c443c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 10260f46c; end: 10260f517;  */

void FUN_10260f46c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10260f1e8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10260f518; end: 10260f5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260f518(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10260f878();
    lVar2 = *(long *)(param_2 + _DAT_112eafdd8);
    if (lVar2 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61174(lVar2);
      func_0x000107c45a48(puVar1);
      func_0x000107c4d664(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10260f5d0; end: 10260f80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260f5d0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_11052a9d8;
    func_0x000107c613fc(&UNK_11052a9d8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    puVar3 = &UNK_11052aa00;
    func_0x000107c613fc(&UNK_11052aa00,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x102610a18;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_102610a2c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_10260f80c;
    puStack_90 = &UNK_11052aa18;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11052aa50;
    func_0x000107c613fc(&UNK_11052aa50,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    puVar5 = &UNK_11052aa78;
    func_0x000107c613fc(&UNK_11052aa78,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_102610a4c;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_88 = FUN_102610a64;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_101e77884;
    puStack_90 = &UNK_11052aa90;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    func_0x000107c4c6b4(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    FUN_10260f878();
    lVar7 = *(long *)(param_2 + _DAT_112eafdd8);
    if (lVar7 == 0) {
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar2);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61174(lVar7);
      func_0x000107c45a48(puVar5);
      func_0x000107c4d664(lVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10260f80c; end: 10260f82b;  */

void FUN_10260f80c(long param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}



/* Entry: 10260f82c; end: 10260f877;  */

void FUN_10260f82c(long param_1,undefined8 param_2)

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



/* Entry: 10260f878; end: 10260f993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260f878(void)

{
  int iVar1;
  long lVar2;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uStack_58;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eafdc0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112eafdb8);
    lVar3 = lVar6;
    func_0x000107c615f0();
    iVar1 = (int)lVar3;
    func_0x000109021cc4();
    func_0x000100083b20(&uStack_58);
    uVar5 = uStack_58;
    uVar4 = uStack_58;
    func_0x000107c44efc();
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&uStack_58);
    uVar5 = uStack_58;
    func_0x000107c44ef4();
    func_0x000107c61170(uStack_58);
    lVar3 = lVar6;
    func_0x0001090218bc();
    func_0x000107c615e8(lVar6);
    if (((iVar1 == 0) || ((uVar4 & 1) != 0)) && (lVar3 <= (long)uVar5)) {
      func_0x000107c5ad3c();
      func_0x000107c615e8(lVar2);
    }
    else {
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10260f994; end: 10260fa9b;  */

/* WARNING: Possible PIC construction at 0x00010260fa50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260fa64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260fa54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260f994(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126aac70;
  func_0x000107c610f8(PTR_PTR_1126aac70);
  func_0x000107c453e4();
  lVar2 = *(long *)(param_1 + _DAT_112fed420);
  if (((lVar2 == 0) || (lVar2 == 2)) || (lVar2 == 1)) {
    func_0x000107c55b2c(puVar1);
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c61170(puVar1);
      return;
    }
    if (*(long *)(param_2 + _DAT_112eafde0) != 0) {
      func_0x000107c61174(*(long *)(param_2 + _DAT_112eafde0));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10260fa9c; end: 10260fbcb;  */

void FUN_10260fa9c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_58 [24];
  
  puVar3 = &UNK_11052a910;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_11052a910,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c613fc(&UNK_11052a910,0x18,7);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61170(lVar2);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  func_0x000107c61170(param_2);
  func_0x000103b3598c(FUN_10260fbcc,0,0x1026109f0,puVar1,FUN_10260fe80,0,0x1026109f8,puVar3,
                      FUN_10260fedc,0,0x10260fee0,0,0x10260fee4,0,0x10260fee8,0);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 10260fbcc; end: 10260fbcf;  */

void FUN_10260fbcc(void)

{
  return;
}



/* Entry: 10260fbd0; end: 10260fca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260fbd0(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10260fca4(1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112eafdf8);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c4d664(lVar1);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10260fca4; end: 10260fe7f;  */

/* WARNING: Possible PIC construction at 0x00010260fcfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010260fe60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010260fd00) */
/* WARNING: Removing unreachable block (ram,0x00010260fd68) */
/* WARNING: Removing unreachable block (ram,0x00010260fd80) */
/* WARNING: Removing unreachable block (ram,0x00010260fdb8) */
/* WARNING: Removing unreachable block (ram,0x00010260fdbc) */
/* WARNING: Removing unreachable block (ram,0x00010260fe04) */
/* WARNING: Removing unreachable block (ram,0x00010260fe10) */
/* WARNING: Removing unreachable block (ram,0x00010260fe14) */
/* WARNING: Removing unreachable block (ram,0x00010260fe18) */
/* WARNING: Removing unreachable block (ram,0x00010260fdc0) */
/* WARNING: Removing unreachable block (ram,0x00010260fe20) */
/* WARNING: Removing unreachable block (ram,0x00010260fe28) */
/* WARNING: Removing unreachable block (ram,0x00010260fd08) */
/* WARNING: Removing unreachable block (ram,0x00010260fd6c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x00010260fd0c) */
/* WARNING: Removing unreachable block (ram,0x00010260fd44) */
/* WARNING: Removing unreachable block (ram,0x00010260fd48) */
/* WARNING: Removing unreachable block (ram,0x00010260fdcc) */
/* WARNING: Removing unreachable block (ram,0x00010260fdd8) */
/* WARNING: Removing unreachable block (ram,0x00010260fddc) */
/* WARNING: Removing unreachable block (ram,0x00010260fde0) */
/* WARNING: Removing unreachable block (ram,0x00010260fd4c) */
/* WARNING: Removing unreachable block (ram,0x00010260fde8) */
/* WARNING: Removing unreachable block (ram,0x00010260fdf0) */
/* WARNING: Removing unreachable block (ram,0x00010260fe38) */
/* WARNING: Removing unreachable block (ram,0x00010260fe64) */
/* WARNING: Removing unreachable block (ram,0x00010260fe4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260fca4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eafd88) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4c458();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10260fe80; end: 10260fe83;  */

void FUN_10260fe80(void)

{
  return;
}



/* Entry: 10260fe84; end: 10260fedb;  */

void FUN_10260fe84(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10260fca4(0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10260fedc; end: 10260feeb;  */

void FUN_10260fedc(void)

{
  return;
}



/* Entry: 10260feec; end: 1026100bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10260feec(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  
  lVar1 = _DAT_112fecfb0;
  lVar6 = *(long *)(unaff_x20 + _DAT_112eafd88);
  lVar2 = *(long *)(lVar6 + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = *(long *)(unaff_x20 + _DAT_112eafd90);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar4 = *(ulong *)(lVar6 + lVar1);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c3f140();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        uVar4 = uVar5;
        func_0x000107c49cd8();
        if ((uVar4 & 1) != 0) {
          func_0x000107c49c28(uVar5);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(uVar5);
          return;
        }
        func_0x000107c4e788(lVar3);
        func_0x000107c3e508(lVar2);
        func_0x000107c41e58(lVar3);
        if (ABS(param_1) < 0.1) {
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(uVar5);
          return;
        }
        func_0x000107c41e58(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar5);
        return;
      }
      func_0x000107c615e8(lVar3);
      lVar3 = lVar2;
    }
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1026100bc; end: 10261011f;  */

/* WARNING: Possible PIC construction at 0x000102610178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102610308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026102d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026102d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026100bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  
  iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112eafdb8);
  func_0x0001090219fc();
  if (iVar2 == 0) {
    uVar8 = unaff_x20 + _DAT_112eafd50;
    func_0x000107c61618();
    if (uVar8 == 0) {
      return;
    }
    func_0x000107c4c2cc();
  }
  else {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112eafda8);
    func_0x000107c4c448();
    func_0x000107c61180();
    uVar8 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    lVar1 = _DAT_112fecfb0;
    if (uVar8 == 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112eafd88);
      uVar3 = *(ulong *)(lVar9 + _DAT_112fecfb0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar3 == 0) {
        uVar8 = 0;
        FUN_10260feec();
      }
      else {
        uVar8 = uVar3;
        func_0x000107c4c458();
        func_0x000107c61180();
        func_0x000107c61170();
        FUN_10260feec();
      }
      if ((uVar3 & 1) == 0) {
        uVar3 = unaff_x20 + _DAT_112eafd50;
        func_0x000107c61618();
        if (uVar3 != 0) {
          func_0x000107c4c2cc();
          uVar8 = uVar3;
        }
      }
      else {
        puVar4 = *(undefined **)(lVar9 + lVar1);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar4 != (undefined *)0x0) {
          puVar5 = puVar4;
          func_0x000107c3f140();
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          puVar4 = puVar5;
          func_0x000107c49cd8();
          if ((int)puVar4 != 0) {
            func_0x000107c561cc(puVar5,param_2,0);
            puVar4 = PTR_PTR_1126b1dc8;
            func_0x000107c61168();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c46ed0();
            puVar7 = puVar4;
            func_0x000107c3f164(puVar4,param_2,0,puVar6);
            func_0x000107c61180();
            func_0x000107c61170(puVar6);
            if (puVar7 != (undefined *)0x0) {
              func_0x000107c3dd04(puVar4,param_2,1);
              func_0x000107c61180();
              func_0x000107c4d148(puVar5,param_2,puVar7,puVar4);
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar7);
              puVar5 = puVar4;
            }
            func_0x000107c61170(puVar5);
            goto code_r0x000107c615e8;
          }
          func_0x000107c61170(puVar5);
        }
        uVar3 = *(ulong *)(unaff_x20 + _DAT_112eafd90);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (uVar3 == 0) {
          if (uVar8 == 0) {
            return;
          }
          func_0x000107c50550(uVar8,param_2,1);
        }
        else {
          func_0x000107c50570();
          uVar8 = uVar3;
        }
      }
    }
    else {
      func_0x000107c41da4(uVar8);
    }
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar8);
  return;
}



/* Entry: 102610120; end: 102610353;  */

/* WARNING: Possible PIC construction at 0x000102610178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102610308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026102d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026102d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102610120(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112eafda8);
  func_0x000107c4c448();
  func_0x000107c61180();
  uVar7 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112fecfb0;
  if (uVar7 == 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112eafd88);
    uVar2 = *(ulong *)(lVar8 + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar2 == 0) {
      uVar7 = 0;
      FUN_10260feec();
    }
    else {
      uVar7 = uVar2;
      func_0x000107c4c458();
      func_0x000107c61180();
      func_0x000107c61170();
      FUN_10260feec();
    }
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x20 + _DAT_112eafd50;
      func_0x000107c61618();
      if (uVar2 != 0) {
        func_0x000107c4c2cc();
        uVar7 = uVar2;
      }
    }
    else {
      puVar3 = *(undefined **)(lVar8 + lVar1);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x000107c3f140();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        puVar3 = puVar4;
        func_0x000107c49cd8();
        if ((int)puVar3 != 0) {
          func_0x000107c561cc(puVar4,param_2,0);
          puVar3 = PTR_PTR_1126b1dc8;
          func_0x000107c61168();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          puVar6 = puVar3;
          func_0x000107c3f164(puVar3,param_2,0,puVar5);
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          if (puVar6 != (undefined *)0x0) {
            func_0x000107c3dd04(puVar3,param_2,1);
            func_0x000107c61180();
            func_0x000107c4d148(puVar4,param_2,puVar6,puVar3);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar6);
            puVar4 = puVar3;
          }
          func_0x000107c61170(puVar4);
          goto code_r0x000107c615e8;
        }
        func_0x000107c61170(puVar4);
      }
      uVar2 = *(ulong *)(unaff_x20 + _DAT_112eafd90);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar2 == 0) {
        if (uVar7 == 0) {
          return;
        }
        func_0x000107c50550(uVar7,param_2,1);
      }
      else {
        func_0x000107c50570();
        uVar7 = uVar2;
      }
    }
  }
  else {
    func_0x000107c41da4(uVar7);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
  return;
}



/* Entry: 102610354; end: 10261037b; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory handleCompassWasTapped] */

void FUN_102610354(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026100bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10261037c; end: 1026103e7;  */

void FUN_10261037c(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026103e8,uVar1,uVar2);
  return;
}



/* Entry: 1026103e8; end: 102610447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026103e8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = lVar1 + _DAT_112eafd50;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c2c0();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102610444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 102610448; end: 10261051b; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory handleCompassLongPress] */

void FUN_102610448(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11052aca8;
  func_0x000107c613fc(&UNK_11052aca8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11052acd0;
  func_0x000107c613fc(&UNK_11052acd0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4140;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4148,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10261051c; end: 102610587;  */

void FUN_10261051c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102610588,uVar1,uVar2);
  return;
}



/* Entry: 102610588; end: 1026105c7;  */

void FUN_102610588(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c3d07c(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026105c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026105c8; end: 1026105f7; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory handleLayerActivatedWithLayerType:layerSessionId:] */

void FUN_1026105c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102610bc4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026105f8; end: 10261076f;  */

/* WARNING: Possible PIC construction at 0x000102610718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102610728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261071c) */
/* WARNING: Removing unreachable block (ram,0x00010261072c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026105f8(uint param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eafd88) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c4c358();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (param_1 < 3) {
    uVar6 = (ulong)param_1;
    uVar3 = 0;
    func_0x000103b3929c(0);
    func_0x000107c610f8();
    func_0x000103b39118(uVar6,uVar3);
    puVar4 = &UNK_11052ac08;
    func_0x000107c613fc(&UNK_11052ac08,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(ulong *)(puVar4 + 0x18) = uVar6;
    puVar5 = &UNK_11052ac30;
    func_0x000107c613fc(&UNK_11052ac30,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10dac4110;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    func_0x000107c615f0(lVar2);
    func_0x000107c61174(uVar6);
    func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4118,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102610770; end: 1026107db;  */

void FUN_102610770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026107dc,uVar1,uVar2);
  return;
}



/* Entry: 1026107dc; end: 10261081b;  */

void FUN_1026107dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c413a8(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102610818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261081c; end: 10261084b; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory handleLayerDeactivatedWithLayerType:] */

void FUN_10261081c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1026105f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10261084c; end: 102610893; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory handleOpenMeTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261084c(long param_1)

{
  param_1 = param_1 + _DAT_112eafd50;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4c2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102610894; end: 102610957;  */

/* WARNING: Possible PIC construction at 0x0001026108f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102610910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026108f8) */
/* WARNING: Removing unreachable block (ram,0x000102610954) */
/* WARNING: Removing unreachable block (ram,0x0001026108fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102610894(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eafda8);
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + _DAT_112eafd50;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c4c2dc();
  }
  else {
    func_0x000107c42ae4(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102610958; end: 10261097f; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory handleOpenLocationSettings] */

void FUN_102610958(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102610894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102610980; end: 1026109cb; -[_TtC33MapChromeV2ServicesImplementation32MapChromeV2SidebarContextFactory init] */

void FUN_102610980(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2ServicesImplementation.MapChromeV2SidebarContextFactory",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026109ac);
  (*pcVar1)();
}



/* Entry: 1026109cc; end: 102610a2b;  */

void FUN_1026109cc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar3 = &UNK_11052a910;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_11052a910,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c613fc(&UNK_11052a910,0x18,7);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000103b3598c(FUN_10260fbcc,0,0x1026109f0,puVar1,FUN_10260fe80,0,0x1026109f8,puVar3,
                      FUN_10260fedc,0,0x10260fee0,0,0x10260fee4,0,0x10260fee8,0);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102610a2c; end: 102610a4b;  */

void FUN_102610a2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102610a4c; end: 102610a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102610a4c(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eafe18) = 1;
  return;
}



/* Entry: 102610a64; end: 102610a83;  */

void FUN_102610a64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102610a84; end: 102610a93;  */

void FUN_102610a84(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_11052a910;
  func_0x000107c613fc(&UNK_11052a910,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000104387ff0(FUN_10260ec0c,0,FUN_102610ae4,puVar1);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102610a94; end: 102610ab3;  */

void FUN_102610a94(void)

{
  func_0x00010260f4c0();
  return;
}



/* Entry: 102610ab4; end: 102610ac3;  */

void FUN_102610ab4(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_11052abb8;
  func_0x000107c613fc(&UNK_11052abb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x102610abc;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_102610ac4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_11052abd0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c604(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x78,0xa2,0x2c,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10260f46c);
  (*pcVar1)();
}



/* Entry: 102610ac4; end: 102610ae3;  */

void FUN_102610ac4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102610ae4; end: 102610b03;  */

void FUN_102610ae4(void)

{
  func_0x00010260f4c0();
  return;
}



/* Entry: 102610b04; end: 102610b53;  */

void FUN_102610b04(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102610fd8;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026107dc,lVar1,lVar2);
  return;
}



/* Entry: 102610b54; end: 102610bc3;  */

void FUN_102610b54(undefined8 param_1)

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
  plVar3[1] = 0x102610fd4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102610bc4; end: 102610d3b;  */

/* WARNING: Possible PIC construction at 0x000102610ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102610cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102610ce8) */
/* WARNING: Removing unreachable block (ram,0x000102610cf8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102610bc4(uint param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eafd88) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c4c358();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (param_1 < 3) {
    uVar6 = (ulong)param_1;
    uVar3 = 0;
    func_0x000103b3929c(0);
    func_0x000107c610f8();
    func_0x000103b39118(uVar6,uVar3);
    puVar4 = &UNK_11052ac58;
    func_0x000107c613fc(&UNK_11052ac58,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(ulong *)(puVar4 + 0x18) = uVar6;
    puVar5 = &UNK_11052ac80;
    func_0x000107c613fc(&UNK_11052ac80,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10dac4128;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    func_0x000107c615f0(lVar2);
    func_0x000107c61174(uVar6);
    func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4130,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102610d3c; end: 102610d67;  */

void FUN_102610d3c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102610d68; end: 102610db7;  */

void FUN_102610d68(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102610db8;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102610588,lVar1,lVar2);
  return;
}



/* Entry: 102610db8; end: 102610df3;  */

void FUN_102610db8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102610df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102610df4; end: 102610e63;  */

void FUN_102610df4(undefined8 param_1)

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
  plVar3[1] = 0x102610fdc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102610e64; end: 102610ef3;  */

void FUN_102610e64(void)

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
  plVar2[1] = 0x102610eb0;
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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026103e8,lVar1,lVar3);
  return;
}



/* Entry: 102610ef4; end: 102610f63;  */

void FUN_102610ef4(undefined8 param_1)

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
  plVar3[1] = 0x102610fe0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102610f64; end: 102610fe3;  */

void FUN_102610f64(long param_1,long param_2)

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



/* Entry: 102610fe4; end: 102611447;  */

/* WARNING: Possible PIC construction at 0x000102611160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010261119c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026111e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102611250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026112b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026112f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102611340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026113a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026113f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026113ac) */
/* WARNING: Removing unreachable block (ram,0x000102611344) */
/* WARNING: Removing unreachable block (ram,0x0001026112f8) */
/* WARNING: Removing unreachable block (ram,0x0001026112bc) */
/* WARNING: Removing unreachable block (ram,0x000102611254) */
/* WARNING: Removing unreachable block (ram,0x0001026111ec) */
/* WARNING: Removing unreachable block (ram,0x0001026111a0) */
/* WARNING: Removing unreachable block (ram,0x000102611164) */
/* WARNING: Removing unreachable block (ram,0x0001026113f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102610fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4acdc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000107c5088c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c3d89c(param_2);
        func_0x000107c3d89c(param_2);
        func_0x000107c5a050(lVar2);
        func_0x000107c5a050(lVar1);
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar1 = 0x112d360b8;
        FUN_1026114d4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                      &UNK_10d9011a0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar1 + 0x18) = 0x11;
        *(undefined8 *)(lVar1 + 0x10) = 8;
        func_0x000107c5cbe4(lVar2);
        func_0x000107c61180();
        func_0x000107c5cbe4(param_2);
        func_0x000107c61180();
        func_0x000107c40284(*(double *)(param_1 + _DAT_112fa9568) + 8.0,lVar2);
        func_0x000107c61180();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 102611448; end: 10261148b;  */

void FUN_102611448(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10261148c; end: 1026114d3;  */

void FUN_10261148c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112eaff68;
  plVar5 = (long *)&UNK_10dac41a0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102611614(0,0x112eaf7c0,&PTR_PTR_1126aabf8);
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



/* Entry: 1026114d4; end: 10261154b;  */

void FUN_1026114d4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102611614(0,param_1,param_2);
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



/* Entry: 10261154c; end: 1026115b7;  */

void FUN_10261154c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112eaff58;
  plVar5 = (long *)&UNK_10dac4190;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102611614(0,0x112eafba0,&PTR_PTR_1126aac28);
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



/* Entry: 1026115b8; end: 102611613;  */

void FUN_1026115b8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001038b9ff8();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112eaff48;
  plVar5 = (long *)&UNK_10dac4180;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102611614; end: 102611653;  */

void FUN_102611614(undefined8 param_1,long *param_2,long *param_3)

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


