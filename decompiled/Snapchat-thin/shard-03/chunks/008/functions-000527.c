/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ce648c; end: 102ce64b7; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdPlayableComposerNavigator init] */

void FUN_102ce648c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.AdPlayableComposerNavigator",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce64b8);
  (*pcVar1)();
}



/* Entry: 102ce64b8; end: 102ce64bb;  */

void FUN_102ce64b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ce64bc; end: 102ce64f3; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdPlayableComposerNavigator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ce64d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce64dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ce64bc(long param_1)

{
  param_1 = param_1 + _DAT_112f0c6b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ce64f4; end: 102ce6513;  */

void FUN_102ce64f4(void)

{
  func_0x000107c61168(&PTR_PTR_11289f2d0);
  return;
}



/* Entry: 102ce6514; end: 102ce656b; -[_TtC40AdOperaLayerFactoryServiceImplementationP33_DB21D40F9E5A26E107327552A9F3843E48PlayableSilentlyPresentedContainerViewController initWithCoder:] */

void FUN_102ce6514(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AdOperaLayerFactoryServiceImplementation/AdPlayableComposerNavigator.swift",
                      0x4a,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce656c);
  (*pcVar1)();
}



/* Entry: 102ce656c; end: 102ce66d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce656c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0c6f8);
  func_0x000107c3d614();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce66c8);
    (*pcVar1)();
  }
  lVar3 = lVar4;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce66cc);
    (*pcVar1)();
  }
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = lVar4;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce66d0);
    (*pcVar1)();
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c54b80(param_1,param_2,param_3,param_4,lVar2);
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c52ab8();
      func_0x000107c61170(lVar2);
      func_0x000107c41c30(lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce66d8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce66d4);
  (*pcVar1)();
}



/* Entry: 102ce66d8; end: 102ce66ff; -[_TtC40AdOperaLayerFactoryServiceImplementationP33_DB21D40F9E5A26E107327552A9F3843E48PlayableSilentlyPresentedContainerViewController viewDidLoad] */

void FUN_102ce66d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ce656c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ce6700; end: 102ce6707; -[_TtC40AdOperaLayerFactoryServiceImplementationP33_DB21D40F9E5A26E107327552A9F3843E48PlayableSilentlyPresentedContainerViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_102ce6700(void)

{
  return 0;
}



/* Entry: 102ce6708; end: 102ce670f; -[_TtC40AdOperaLayerFactoryServiceImplementationP33_DB21D40F9E5A26E107327552A9F3843E48PlayableSilentlyPresentedContainerViewController shouldAlwaysBeSilentlyPresented] */

undefined8 FUN_102ce6708(void)

{
  return 1;
}



/* Entry: 102ce6710; end: 102ce676f; -[_TtC40AdOperaLayerFactoryServiceImplementationP33_DB21D40F9E5A26E107327552A9F3843E48PlayableSilentlyPresentedContainerViewController initWithNibName:bundle:] */

void FUN_102ce6710(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.PlayableSilentlyPresentedContainerViewController"
                      ,0x59,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce673c);
  (*pcVar1)();
}



/* Entry: 102ce6770; end: 102ce677f; -[_TtC40AdOperaLayerFactoryServiceImplementationP33_DB21D40F9E5A26E107327552A9F3843E48PlayableSilentlyPresentedContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce6770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0c6f8));
  return;
}



/* Entry: 102ce6780; end: 102ce679f;  */

void FUN_102ce6780(void)

{
  func_0x000107c61168(&PTR_PTR_11289f398);
  return;
}



/* Entry: 102ce67a0; end: 102ce680b;  */

void FUN_102ce67a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ce680c;
  *(undefined1 *)(plVar4 + 10) = uVar3;
  plVar4[6] = lVar1;
  plVar4[7] = lVar2;
  plVar4[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce5da8,0,0);
  return;
}



/* Entry: 102ce680c; end: 102ce6847;  */

void FUN_102ce680c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ce6844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ce6848; end: 102ce686f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce6848(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112f0c6b8;
  func_0x000107c61618();
  if (lVar2 == 0) {
LAB_102ce63fc:
    func_0x000107c61170(lVar1);
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = 0;
      func_0x000103b98e4c(0);
      lVar5 = lVar3;
      func_0x000107c61480(lVar3,uVar4);
      if (lVar5 == 0) {
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        lVar1 = lVar3;
        goto LAB_102ce63fc;
      }
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112ff2528);
      lVar5 = ((undefined8 *)(lVar5 + _DAT_112ff2528))[1];
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c614f0(uVar4);
      (**(code **)(lVar5 + 0x48))();
      func_0x000107c615e8(uVar4);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102ce6870; end: 102ce68d3; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdPlayableLayerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce6870(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f0c738) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AdOperaLayerFactoryServiceImplementation/AdPlayableLayerView.swift",0x42,2,
                      0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce68d4);
  (*pcVar1)();
}



/* Entry: 102ce68d4; end: 102ce6997;  */

/* WARNING: Possible PIC construction at 0x000102ce696c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce6970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce68d4(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f0c738) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112f0c738),PTR_s_setViewModel__1126663d8,param_1);
    return;
  }
  puVar1 = PTR_PTR_1126ac298;
  func_0x000107c610f8(PTR_PTR_1126ac298);
  func_0x000107c49520();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c54b80(puVar1);
  func_0x000107c52ab8(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102ce6998; end: 102ce6a33; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdPlayableLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce6998(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c49eac();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_3 + _DAT_112f0c738);
    if (lVar2 != 0) {
      func_0x000107c44ec4(param_1,param_2,lVar2,param_4,param_5);
      func_0x000107c61180();
      goto LAB_102ce6a0c;
    }
  }
  lVar2 = 0;
LAB_102ce6a0c:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102ce6a34; end: 102ce6a93; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdPlayableLayerView initWithFrame:] */

void FUN_102ce6a34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.AdPlayableLayerView",0x3c,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce6a60);
  (*pcVar1)();
}



/* Entry: 102ce6a94; end: 102ce6adb; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdPlayableLayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ce6ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce6ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce6a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0c728));
  return;
}



/* Entry: 102ce6adc; end: 102ce6afb;  */

void FUN_102ce6adc(void)

{
  func_0x000107c61168(&PTR_PTR_11289f458);
  return;
}



/* Entry: 102ce6afc; end: 102ce6b03;  */

void FUN_102ce6afc(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 102ce6b04; end: 102ce6b23;  */

void FUN_102ce6b04(void)

{
  FUN_102ce68d4();
  return;
}



/* Entry: 102ce6b24; end: 102ce6dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ce6b24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f0c798;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0c798);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000102ce6b88();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    lVar2 = 0;
  }
  func_0x000107c615f0(lVar2);
  return lVar3;
}



/* Entry: 102ce6dc8; end: 102ce7343;  */

/* WARNING: Possible PIC construction at 0x000102ce6ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce6f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce72f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce70b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce71c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce71d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce72e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce72e4) */
/* WARNING: Removing unreachable block (ram,0x000102ce71d4) */
/* WARNING: Removing unreachable block (ram,0x000102ce71c4) */
/* WARNING: Removing unreachable block (ram,0x000102ce70b8) */
/* WARNING: Removing unreachable block (ram,0x000102ce708c) */
/* WARNING: Removing unreachable block (ram,0x000102ce7044) */
/* WARNING: Removing unreachable block (ram,0x000102ce72f4) */
/* WARNING: Removing unreachable block (ram,0x000102ce6f10) */
/* WARNING: Removing unreachable block (ram,0x000102ce6f1c) */
/* WARNING: Removing unreachable block (ram,0x000102ce72f0) */
/* WARNING: Removing unreachable block (ram,0x000102ce6ea8) */
/* WARNING: Removing unreachable block (ram,0x000102ce6f4c) */
/* WARNING: Removing unreachable block (ram,0x000102ce6eb8) */
/* WARNING: Removing unreachable block (ram,0x000102ce7308) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce6dc8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  uVar3 = 0;
  func_0x000103b98e4c(0);
  lVar4 = lVar2;
  func_0x000107c61480(lVar2,uVar3);
  lVar1 = _DAT_112f0c7a0;
  if (lVar4 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0c7a0,auStack_b8,0,0);
    FUN_102ce8398(unaff_x20 + lVar1,auStack_e8);
    if (lStack_d0 != 0) {
      FUN_102ce83e8(auStack_e8,auStack_a0);
      func_0x0001000a8868(auStack_a0,lStack_88);
      lVar2 = lStack_88;
      (**(code **)(lStack_80 + 8))(lStack_88,lStack_80);
      func_0x000107c550d8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102ce7344; end: 102ce736b;  */

void FUN_102ce7344(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102ce6cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ce736c; end: 102ce74ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce736c(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  
  func_0x000107c614f0();
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar1,PTR_s_viewDidLoad_112684cd8);
  FUN_102ce9dc0();
  puVar2 = &UNK_1105c0ba8;
  func_0x000107c613fc(&UNK_1105c0ba8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar3 = 0x102ce8708;
  func_0x0001000c0ebc(0x102ce8708,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  uVar4 = 0;
  func_0x000103b98e4c();
  puStack_68 = &UNK_1105c3600;
  ppuStack_60 = &PTR_DAT_1105c32c0;
  puVar2 = &UNK_10db3fd18;
  uStack_70 = uVar4;
  func_0x000107c614e0(&UNK_10db3fd18,&uStack_70);
  pcVar5 = FUN_102ce8718;
  func_0x0001000bfde0(FUN_102ce8718,puVar2,&UNK_1105c3600);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1105c0b58;
  func_0x000107c613fc(&UNK_1105c0b58,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar6 = FUN_102ce8754;
  puVar7 = puVar2;
  (**(code **)(*(long *)pcVar5 + 0x60))(FUN_102ce8754);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar2);
  pcVar5 = pcVar6;
  func_0x000107c614f0(pcVar6);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f0c790),pcVar5,puVar7);
  func_0x000107c615e8(pcVar6);
  return;
}



/* Entry: 102ce74f0; end: 102ce763b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce74f0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  if ((char)param_1[1] == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_102ce763c(lVar2);
      func_0x000107c61170(param_2);
    }
  }
  else if ((char)param_1[1] == '\x04') {
    if (lVar2 == 4) {
      func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 != 0) {
        uVar3 = *(undefined8 *)(param_2 + _DAT_112f0c7b0);
        func_0x000107c6157c(uVar3);
        func_0x000107c61170(param_2);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c45a48();
        puStack_40 = puVar1;
        func_0x0001002a64a8(&puStack_40);
        func_0x000107c61170(puVar1);
        func_0x000107c61574(uVar3);
      }
    }
    else if (lVar2 == 5) {
      func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 != 0) {
        lVar2 = param_2;
        FUN_102ce6b24();
        func_0x000107c61170(param_2);
        func_0x000107c420bc(lVar2);
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 102ce763c; end: 102ce781b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce763c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112f0c770);
  uVar1 = puVar5[3];
  lVar3 = puVar5[4];
  func_0x0001000a8868(puVar5,uVar1);
  func_0x000103b82204();
  uVar2 = *puVar5;
  uVar4 = puVar5[1];
  func_0x000107c61434(uVar4);
  func_0x000107c4e230();
  func_0x000107c61180();
  puVar5 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar5[3] = 4;
  puVar5[2] = 2;
  puVar7 = puVar5;
  func_0x000103b81bc8();
  uVar8 = puVar7[1];
  puVar5[4] = *puVar7;
  puVar5[5] = uVar8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar8);
  func_0x000107c46ed0();
  puVar7 = (undefined8 *)0x0;
  FUN_102ce8614(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5[9] = puVar7;
  puVar5[6] = puVar6;
  func_0x000103b82400();
  uVar8 = puVar7[1];
  puVar5[10] = *puVar7;
  puVar5[0xb] = uVar8;
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar8);
  func_0x000107c5dc50(0,0);
  func_0x000107c61180();
  uVar8 = 0;
  FUN_102ce8614(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar5[0xf] = uVar8;
  puVar5[0xc] = puVar6;
  puVar7 = puVar5;
  func_0x000100214a84(puVar5);
  func_0x000107c61588(puVar5);
  uVar8 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar5 + 4,2,uVar8);
  (**(code **)(lVar3 + 0x20))(uVar2,uVar4,unaff_x20,puVar7,uVar1,lVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(unaff_x20);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102ce781c; end: 102ce7843;  */

void FUN_102ce781c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ce736c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ce7844; end: 102ce7847;  */

/* WARNING: Possible PIC construction at 0x000102ce6ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce6f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce72f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce70b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce71c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce71d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce72e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce72e4) */
/* WARNING: Removing unreachable block (ram,0x000102ce71d4) */
/* WARNING: Removing unreachable block (ram,0x000102ce71c4) */
/* WARNING: Removing unreachable block (ram,0x000102ce70b8) */
/* WARNING: Removing unreachable block (ram,0x000102ce708c) */
/* WARNING: Removing unreachable block (ram,0x000102ce7044) */
/* WARNING: Removing unreachable block (ram,0x000102ce72f4) */
/* WARNING: Removing unreachable block (ram,0x000102ce6f10) */
/* WARNING: Removing unreachable block (ram,0x000102ce6f1c) */
/* WARNING: Removing unreachable block (ram,0x000102ce72f0) */
/* WARNING: Removing unreachable block (ram,0x000102ce6ea8) */
/* WARNING: Removing unreachable block (ram,0x000102ce6f4c) */
/* WARNING: Removing unreachable block (ram,0x000102ce6eb8) */
/* WARNING: Removing unreachable block (ram,0x000102ce7308) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce7844(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  uVar3 = 0;
  func_0x000103b98e4c(0);
  lVar4 = lVar2;
  func_0x000107c61480(lVar2,uVar3);
  lVar1 = _DAT_112f0c7a0;
  if (lVar4 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0c7a0,auStack_b8,0,0);
    FUN_102ce8398(unaff_x20 + lVar1,auStack_e8);
    if (lStack_d0 != 0) {
      FUN_102ce83e8(auStack_e8,auStack_a0);
      func_0x0001000a8868(auStack_a0,lStack_88);
      lVar2 = lStack_88;
      (**(code **)(lStack_80 + 8))(lStack_88,lStack_80);
      func_0x000107c550d8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102ce7848; end: 102ce78b3;  */

void FUN_102ce7848(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce78b4,uVar1,uVar2);
  return;
}



/* Entry: 102ce78b4; end: 102ce7927;  */

void FUN_102ce78b4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102ce7928();
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102ce7924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce7928; end: 102ce7a73;  */

/* WARNING: Possible PIC construction at 0x000102ce7a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce7a28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce7928(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar4 = unaff_x20;
  func_0x000107c4deec();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar1 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f0cc48))[1];
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0cc48);
    func_0x000107c61434(lVar4);
    func_0x000107c61434(param_2);
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    uVar2 = 0x112f0c918;
    func_0x0001000285a8(0x112f0c918,&UNK_10db3fd10);
    uStack_88 = uVar2;
    FUN_102ce86a8();
    puVar3 = &UNK_1105c0b80;
    uStack_80 = uVar2;
    func_0x000107c613fc(&UNK_1105c0b80,0x40,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    puVar3[0x18] = 4;
    *(long *)(puVar3 + 0x20) = lVar1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
    *(long *)(puVar3 + 0x38) = lVar4;
    apuStack_a0[0] = puVar3;
    (**(code **)(lStack_58 + 0x10))(apuStack_a0,uStack_60,lStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102ce7a74; end: 102ce7adf;  */

void FUN_102ce7a74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce7ae0,uVar1,uVar2);
  return;
}



/* Entry: 102ce7ae0; end: 102ce7b57;  */

void FUN_102ce7ae0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102ce763c(0x10);
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102ce7b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce7b58; end: 102ce7bc3;  */

void FUN_102ce7b58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce7bc4,uVar1,uVar2);
  return;
}



/* Entry: 102ce7bc4; end: 102ce7c37;  */

void FUN_102ce7bc4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102ce7c38();
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102ce7c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce7c38; end: 102ce7ef3;  */

/* WARNING: Possible PIC construction at 0x000102ce7d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce7ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce7da8) */
/* WARNING: Removing unreachable block (ram,0x000102ce7e1c) */
/* WARNING: Removing unreachable block (ram,0x000102ce7ec4) */
/* WARNING: Removing unreachable block (ram,0x000102ce7e50) */
/* WARNING: Removing unreachable block (ram,0x000102ce7ddc) */
/* WARNING: Removing unreachable block (ram,0x000102ce7d90) */
/* WARNING: Removing unreachable block (ram,0x000102ce7d74) */
/* WARNING: Removing unreachable block (ram,0x000102ce7eb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce7c38(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    return;
  }
  uVar2 = 0;
  func_0x000103b98e4c(0);
  lVar1 = unaff_x20;
  func_0x000107c61480(unaff_x20,uVar2);
  if (lVar1 != 0) {
    func_0x000107c61174(*(undefined8 *)(lVar1 + _DAT_112ff2520));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 102ce7ef4; end: 102ce7f93;  */

/* WARNING: Possible PIC construction at 0x000102ce7f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce7f7c) */

void FUN_102ce7ef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1105c0b58;
  func_0x000107c613fc(&UNK_1105c0b58,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(6,0,8,3,0,0,param_2,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102ce7f94; end: 102ce7fff;  */

void FUN_102ce7f94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce8000,uVar1,uVar2);
  return;
}



/* Entry: 102ce8000; end: 102ce8103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce8000(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar3 = 0;
      func_0x000103b98e4c(0);
      lVar4 = lVar2;
      func_0x000107c61480(lVar2,uVar3);
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        uVar3 = *(undefined8 *)(lVar4 + _DAT_112ff2528);
        lVar4 = ((undefined8 *)(lVar4 + _DAT_112ff2528))[1];
        func_0x000107c615f0(uVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c614f0(uVar3);
        (**(code **)(lVar4 + 0x50))();
        func_0x000107c615e8(uVar3);
      }
    }
    FUN_102cebd98(2,4);
    func_0x000107c61170(lVar1);
    uVar5 = 0;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000102ce8100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce8104; end: 102ce81f7;  */

/* WARNING: Possible PIC construction at 0x000102ce811c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce814c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce816c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce8150) */
/* WARNING: Removing unreachable block (ram,0x000102ce8120) */
/* WARNING: Removing unreachable block (ram,0x000102ce8170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce8104(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112f0c768 + 8));
  return;
}



/* Entry: 102ce81f8; end: 102ce82c3;  */

/* WARNING: Possible PIC construction at 0x000102ce8218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce8248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce8268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce824c) */
/* WARNING: Removing unreachable block (ram,0x000102ce821c) */
/* WARNING: Removing unreachable block (ram,0x000102ce826c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce81f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0c768 + 8));
  return;
}



/* Entry: 102ce82c4; end: 102ce838f;  */

void FUN_102ce82c4(undefined8 param_1)

{
  if (lRam0000000112f0c7e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72895c);
  return;
}



/* Entry: 102ce8390; end: 102ce8397;  */

void FUN_102ce8390(void)

{
  if (lRam0000000112f0c7e0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e72895c);
  return;
}



/* Entry: 102ce8398; end: 102ce83e7;  */

undefined8 FUN_102ce8398(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f0c910;
  func_0x0001000285a8(0x112f0c910,&UNK_10db3fcb8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102ce83e8; end: 102ce83ff;  */

undefined8 * FUN_102ce83e8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102ce8400; end: 102ce845f;  */

void FUN_102ce8400(void)

{
  long unaff_x20;
  
  FUN_102ce7ef4(*(undefined8 *)(unaff_x20 + 0x10),&UNK_10db3fd08);
  return;
}



/* Entry: 102ce8460; end: 102ce847b;  */

void FUN_102ce8460(long param_1,long param_2)

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



/* Entry: 102ce847c; end: 102ce849b;  */

void FUN_102ce847c(void)

{
  long unaff_x20;
  
  FUN_102ce7ef4(*(undefined8 *)(unaff_x20 + 0x10),&UNK_10db3fcc8);
  return;
}



/* Entry: 102ce849c; end: 102ce84ef;  */

void FUN_102ce849c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ce8808;
  plVar3[5] = param_1;
  plVar3[6] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce8000,lVar1,lVar2);
  return;
}



/* Entry: 102ce84f0; end: 102ce8543;  */

void FUN_102ce84f0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ce880c;
  plVar3[5] = param_1;
  plVar3[6] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce7bc4,lVar1,lVar2);
  return;
}



/* Entry: 102ce8544; end: 102ce8583;  */

undefined8 FUN_102ce8544(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102ce8584; end: 102ce85d7;  */

void FUN_102ce8584(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102ce85d8;
  plVar3[5] = param_1;
  plVar3[6] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce7ae0,lVar1,lVar2);
  return;
}



/* Entry: 102ce85d8; end: 102ce8613;  */

void FUN_102ce85d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ce8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ce8614; end: 102ce8653;  */

void FUN_102ce8614(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102ce8654; end: 102ce86a7;  */

void FUN_102ce8654(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ce8810;
  plVar3[5] = param_1;
  plVar3[6] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce78b4,lVar1,lVar2);
  return;
}



/* Entry: 102ce86a8; end: 102ce86f7;  */

void FUN_102ce86a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f0c920 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f0c918;
  func_0x00010002969c(0x112f0c918,&UNK_10db3fd10);
  puVar2 = &DAT_10db4158c;
  func_0x000107c61520(&DAT_10db4158c,uVar1);
  puRam0000000112f0c920 = puVar2;
  return;
}



/* Entry: 102ce86f8; end: 102ce8717;  */

void FUN_102ce86f8(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102ce8718; end: 102ce8753;  */

void FUN_102ce8718(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = *param_1;
  uStack_28 = *(undefined1 *)(param_1 + 1);
  uStack_20 = param_1[2];
  uStack_18 = param_1[3];
  func_0x000107c614bc(&uStack_30);
  return;
}



/* Entry: 102ce8754; end: 102ce875b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce8754(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  lVar3 = *param_1;
  if ((char)param_1[1] == '\x01') {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_102ce763c(lVar3);
      func_0x000107c61170(lVar1);
    }
  }
  else if ((char)param_1[1] == '\x04') {
    if (lVar3 == 4) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + _DAT_112f0c7b0);
        func_0x000107c6157c(uVar4);
        func_0x000107c61170(lVar3);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c45a48();
        puStack_40 = puVar2;
        func_0x0001002a64a8(&puStack_40);
        func_0x000107c61170(puVar2);
        func_0x000107c61574(uVar4);
      }
    }
    else if (lVar3 == 5) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar1 = lVar3;
        FUN_102ce6b24();
        func_0x000107c61170(lVar3);
        func_0x000107c420bc(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 102ce875c; end: 102ce87ef;  */

long FUN_102ce875c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ce87f0; end: 102ce8813;  */

void FUN_102ce87f0(long param_1,long param_2)

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



/* Entry: 102ce8814; end: 102ce88bb; -[_TtC40AdOperaLayerFactoryServiceImplementation40AdPlayableTopmostWindowComposerNavigator initWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce8814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = param_1 + _DAT_112f0c928;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112f0c930;
  func_0x000107c61614(param_1 + _DAT_112f0c930,0);
  *(undefined8 *)(param_1 + _DAT_112f0c938) = 0;
  func_0x000107c61614(param_1 + _DAT_112f0c940,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_initWithRuntime__1125edce0,param_3);
  return;
}



/* Entry: 102ce88bc; end: 102ce88db;  */

void FUN_102ce88bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce88dc,0,0);
  return;
}



/* Entry: 102ce88dc; end: 102ce89b3;  */

void FUN_102ce88dc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x40) = lVar4;
  if (lVar4 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    uVar3 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
    uVar3 = 0x112d45220;
    FUN_102ce98b4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce89b4,uVar2,uVar3);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102ce89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce89b4; end: 102ce8a17;  */

void FUN_102ce89b4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  FUN_102ce8a18(uVar3,uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ce9918,0,0);
  return;
}



/* Entry: 102ce8a18; end: 102ce8cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce8a18(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = unaff_x20 + _DAT_112f0c930;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c31900();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce8cdc);
      (*pcVar1)();
    }
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar7 = puVar6;
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c52b50(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c57f18(lVar3);
    uVar8 = 0;
    func_0x00010058ec44(0);
    uStack_68 = 0x3ff0000000000000;
    uVar12 = 0x112e5e398;
    FUN_102ce98b4(0x112e5e398,&SUB_10058ec44,
                  PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628);
    func_0x000107c5f16c(&puStack_98,PTR__UIWindowLevelAlert_110345e80,&uStack_68,uVar8,uVar12);
    func_0x000107c5a738(puStack_98,lVar3);
    func_0x000107c61174();
    func_0x000107c3ea80(puVar6);
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c4c1c0(lVar3);
    lVar9 = lVar2;
    func_0x000107c40ef4(lVar2);
    func_0x000107c61180();
    lVar10 = unaff_x20;
    func_0x000107c4c1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    func_0x000107c5677c(lVar10);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f0c938);
    *(long *)(unaff_x20 + _DAT_112f0c938) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c61604(unaff_x20 + _DAT_112f0c940,lVar10);
    puVar5 = &UNK_1105c0bf8;
    func_0x000107c613fc(&UNK_1105c0bf8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_78 = FUN_102ce98f4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105c0d50;
    ppuVar11 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar11);
    puVar5 = puStack_70;
    func_0x000107c61174(lVar10);
    func_0x000107c61574(puVar5);
    func_0x000107c4f018(puVar4);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar10);
  }
  return;
}



/* Entry: 102ce8cdc; end: 102ce8eeb; -[_TtC40AdOperaLayerFactoryServiceImplementation40AdPlayableTopmostWindowComposerNavigator presentComponentWithPage:animated:] */

/* WARNING: Possible PIC construction at 0x000102ce8db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce8dbc) */

void FUN_102ce8cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105c0bf8;
  func_0x000107c613fc(&UNK_1105c0bf8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1105c0d38;
  func_0x000107c613fc(&UNK_1105c0d38,0x21,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db3fd90,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ce8eec; end: 102ce8f07;  */

void FUN_102ce8eec(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce8f08,0,0);
  return;
}



/* Entry: 102ce8f08; end: 102ce8fdf;  */

void FUN_102ce8f08(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x38) = lVar4;
  if (lVar4 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    uVar3 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
    uVar3 = 0x112d45220;
    FUN_102ce98b4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce8fe0,uVar2,uVar3);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102ce8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce8fe0; end: 102ce902f;  */

void FUN_102ce8fe0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  FUN_102ce9040(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce9030,0,0);
  return;
}



/* Entry: 102ce9030; end: 102ce903f;  */

void FUN_102ce9030(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102ce903c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce9040; end: 102ce9533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9040(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *unaff_x20;
  undefined *puVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112f0c940;
  lVar1 = _DAT_112f0c938;
  ppuVar9 = &puStack_90;
  ppuVar12 = &puStack_90;
  ppuVar13 = &puStack_90;
  puVar14 = *(undefined **)(unaff_x20 + _DAT_112f0c938);
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c4c250();
    func_0x000107c61180();
    if (unaff_x20 == (undefined *)0x0) {
      return;
    }
    puVar14 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ce9534);
      (*pcVar3)();
    }
    puVar10 = puVar14;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    if (puVar10 == (undefined *)0x0) {
      param_1 = *(undefined **)PTR__UIWindowLevelNormal_110345e88;
    }
    else {
      func_0x000107c5e3fc(puVar10);
    }
    uVar6 = 0;
    func_0x00010058ec44(0);
    uVar5 = 0x112f0c970;
    puStack_90 = param_1;
    FUN_102ce98b4(0x112f0c970,&SUB_10058ec44,PTR___sSo13UIWindowLevelaSL5UIKitMc_110351630);
    puVar11 = PTR__UIWindowLevelNormal_110345e88;
    func_0x000107c5fa88(PTR__UIWindowLevelNormal_110345e88,&puStack_90,uVar6,uVar5);
    puVar14 = &UNK_1105c0c48;
    func_0x000107c613fc(&UNK_1105c0c48,0x18,7);
    func_0x000107c61614(puVar14 + 0x10,puVar10);
    func_0x000107c61170(puVar10);
    puVar10 = &UNK_1105c0c70;
    func_0x000107c613fc(&UNK_1105c0c70,0x20,7);
    puVar10[0x10] = 1;
    puVar10[0x11] = (byte)puVar11 & 1;
    *(undefined **)(puVar10 + 0x18) = puVar14;
    puVar11 = unaff_x20;
    func_0x000107c4f090();
    func_0x000107c61180();
    puStack_68 = puVar10;
    if (puVar11 == (undefined *)0x0) {
      pcStack_70 = FUN_102ce981c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105c0c88;
      func_0x000107c60bc4(&puStack_90);
      puVar14 = puStack_68;
      func_0x000107c6157c(puVar10);
      func_0x000107c61174(unaff_x20);
      func_0x000107c61574(puVar14);
      func_0x000107c420a8(unaff_x20);
      func_0x000107c61574(puVar10);
      puVar11 = unaff_x20;
      ppuVar9 = ppuVar13;
    }
    else {
      pcStack_70 = FUN_102ce981c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105c0cb0;
      func_0x000107c60bc4(&puStack_90);
      puVar14 = puStack_68;
      func_0x000107c6157c(puVar10);
      func_0x000107c61574(puVar14);
      func_0x000107c420a8(puVar11);
      func_0x000107c61574(puVar10);
      ppuVar9 = ppuVar12;
    }
    func_0x000107c61170(unaff_x20);
LAB_102ce9504:
    func_0x000107c60bd0(ppuVar9);
    puVar14 = puVar11;
  }
  else {
    puVar10 = unaff_x20 + _DAT_112f0c940;
    func_0x000107c61618();
    func_0x000107c61174();
    if (puVar10 == (undefined *)0x0) {
LAB_102ce90b8:
      puVar4 = puVar14;
      func_0x000107c508f0();
      func_0x000107c61180();
    }
    else {
      puVar4 = puVar10;
      func_0x000107c4f090();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      if (puVar4 == (undefined *)0x0) goto LAB_102ce90b8;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar5);
    func_0x000107c61604(unaff_x20 + lVar2,0);
    uVar6 = 0;
    func_0x00010058ec44(0);
    func_0x000107c61174(puVar14);
    func_0x000107c5e3fc();
    uVar5 = 0x112f0c970;
    puStack_90 = param_1;
    FUN_102ce98b4(0x112f0c970,&SUB_10058ec44,PTR___sSo13UIWindowLevelaSL5UIKitMc_110351630);
    puVar11 = PTR__UIWindowLevelNormal_110345e88;
    func_0x000107c5fa88(PTR__UIWindowLevelNormal_110345e88,&puStack_90,uVar6,uVar5);
    puVar10 = &UNK_1105c0c48;
    func_0x000107c613fc(&UNK_1105c0c48,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,puVar14);
    func_0x000107c61170(puVar14);
    puVar7 = &UNK_1105c0ce8;
    func_0x000107c613fc(&UNK_1105c0ce8,0x20,7);
    puVar7[0x10] = 0;
    puVar7[0x11] = (byte)puVar11 & 1;
    *(undefined **)(puVar7 + 0x18) = puVar10;
    func_0x000107c6157c(puVar10);
    if (puVar4 != (undefined *)0x0) {
      puVar11 = puVar4;
      func_0x000107c61174();
      puVar8 = puVar11;
      func_0x000107c4f078();
      func_0x000107c61180();
      if (puVar8 != (undefined *)0x0) {
        func_0x000107c61170();
        func_0x000107c61170(puVar11);
        pcStack_70 = (code *)0x102ce991c;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_1105c0d00;
        puStack_68 = puVar7;
        func_0x000107c60bc4(&puStack_90);
        puVar4 = puStack_68;
        func_0x000107c6157c(puVar7);
        func_0x000107c61574(puVar4);
        func_0x000107c420a8(puVar11);
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar7);
        func_0x000107c61170(puVar14);
        goto LAB_102ce9504;
      }
      func_0x000107c61170(puVar11);
    }
    func_0x000107c61428(puVar10 + 0x10,&puStack_90,0,0);
    puVar11 = puVar10 + 0x10;
    func_0x000107c61618();
    if (puVar11 != (undefined *)0x0) {
      func_0x000107c550d8();
      func_0x000107c61170(puVar11);
    }
    puVar11 = puVar10 + 0x10;
    func_0x000107c61618();
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(puVar4);
    }
    else {
      func_0x000107c57f18();
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar14);
      puVar14 = puVar11;
    }
  }
  func_0x000107c61170(puVar14);
  return;
}



/* Entry: 102ce9534; end: 102ce960b; -[_TtC40AdOperaLayerFactoryServiceImplementation40AdPlayableTopmostWindowComposerNavigator dismissWithAnimated:] */

void FUN_102ce9534(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105c0bf8;
  func_0x000107c613fc(&UNK_1105c0bf8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1105c0c20;
  func_0x000107c613fc(&UNK_1105c0c20,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_3;
  func_0x000107c61174(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db3fd78,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ce960c; end: 102ce969f;  */

void FUN_102ce960c(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (((param_1 & 1) == 0) || ((param_2 & 1) != 0)) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    lVar1 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c550d8();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61428(param_3 + 0x10,auStack_50,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x000107c57f18();
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 102ce96a0; end: 102ce96ff; -[_TtC40AdOperaLayerFactoryServiceImplementation40AdPlayableTopmostWindowComposerNavigator init] */

void FUN_102ce96a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.AdPlayableTopmostWindowComposerNavigator"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce96cc);
  (*pcVar1)();
}



/* Entry: 102ce9700; end: 102ce9757; -[_TtC40AdOperaLayerFactoryServiceImplementation40AdPlayableTopmostWindowComposerNavigator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9700(long param_1)

{
  func_0x000100d23b94(param_1 + _DAT_112f0c928);
  func_0x000100d23b94(param_1 + _DAT_112f0c930);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0c938));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f0c940);
  return;
}



/* Entry: 102ce9758; end: 102ce9777;  */

void FUN_102ce9758(void)

{
  func_0x000107c61168(&PTR_PTR_11289f5c0);
  return;
}



/* Entry: 102ce9778; end: 102ce97df;  */

void FUN_102ce9778(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ce97e0;
  *(undefined1 *)(plVar2 + 9) = uVar1;
  plVar2[5] = param_1;
  plVar2[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce8f08,0,0);
  return;
}



/* Entry: 102ce97e0; end: 102ce981b;  */

void FUN_102ce97e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ce9818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ce981c; end: 102ce9847;  */

void FUN_102ce981c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (((*(byte *)(unaff_x20 + 0x10) & 1) == 0) || ((*(byte *)(unaff_x20 + 0x11) & 1) != 0)) {
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar1 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c550d8();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c57f18();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102ce9848; end: 102ce98b3;  */

void FUN_102ce9848(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102ce9914;
  *(undefined1 *)(plVar4 + 10) = uVar3;
  plVar4[6] = lVar1;
  plVar4[7] = lVar2;
  plVar4[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce88dc,0,0);
  return;
}



/* Entry: 102ce98b4; end: 102ce98f3;  */

void FUN_102ce98b4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102ce98f4; end: 102ce991f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce98f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112f0c928;
  func_0x000107c61618();
  if (lVar2 == 0) {
LAB_102ce8ed0:
    func_0x000107c61170(lVar1);
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = 0;
      func_0x000103b98e4c(0);
      lVar5 = lVar3;
      func_0x000107c61480(lVar3,uVar4);
      if (lVar5 == 0) {
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        lVar1 = lVar3;
        goto LAB_102ce8ed0;
      }
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112ff2528);
      lVar5 = ((undefined8 *)(lVar5 + _DAT_112ff2528))[1];
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c614f0(uVar4);
      (**(code **)(lVar5 + 0x48))();
      func_0x000107c615e8(uVar4);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102ce9920; end: 102ce99cb; -[_TtC40AdOperaLayerFactoryServiceImplementation26AdPlayableContentLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  func_0x000107c61614(param_5 + _DAT_112f0c978,0);
  *(undefined8 *)(param_5 + _DAT_112f0c980) = 0;
  *(undefined1 *)(param_5 + _DAT_112f0c988) = 1;
  *(undefined1 *)(param_5 + _DAT_112f0c990) = 1;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102ce99cc; end: 102ce9a67; -[_TtC40AdOperaLayerFactoryServiceImplementation26AdPlayableContentLayerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce99cc(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112f0c978,0);
  *(undefined8 *)(param_1 + _DAT_112f0c980) = 0;
  *(undefined1 *)(param_1 + _DAT_112f0c988) = 1;
  *(undefined1 *)(param_1 + _DAT_112f0c990) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AdOperaLayerFactoryServiceImplementation/AdPlayableContentLayerView.swift",
                      0x49,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce9a68);
  (*pcVar1)();
}



/* Entry: 102ce9a68; end: 102ce9af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9a68(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f0c980) = param_1;
  lVar1 = _DAT_112f0c978;
  lVar2 = unaff_x20 + _DAT_112f0c978;
  func_0x000107c61618();
  if ((lVar2 == 0) || (func_0x000107c61170(), lVar2 != param_2)) {
    lVar2 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4ff34();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c3d89c();
    func_0x000107c61604(unaff_x20 + lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102ce9af4; end: 102ce9b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9af4(double param_1,double param_2,undefined8 param_3,double param_4)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_layoutSubviews_112600e60);
  lVar1 = unaff_x20 + _DAT_112f0c978;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c3ec60();
    func_0x000107c54b80(param_1 + 0.0,param_2 + 0.0,param_3,
                        param_4 - (*(double *)(unaff_x20 + _DAT_112f0c980) + 0.0),lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102ce9b80; end: 102ce9ba7; -[_TtC40AdOperaLayerFactoryServiceImplementation26AdPlayableContentLayerView layoutSubviews] */

void FUN_102ce9b80(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ce9af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ce9ba8; end: 102ce9c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9ba8(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong unaff_x20;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1;
  func_0x000107c614f0();
  uVar2 = unaff_x20;
  func_0x000107c49eac();
  if ((uVar2 & 1) == 0) {
    func_0x000107c3ec60();
    func_0x000107c609cc();
    dVar4 = dVar3 * 0.15;
    bVar1 = false;
    if ((*(char *)(unaff_x20 + _DAT_112f0c988) == '\x01') &&
       (bVar1 = false, !NAN(param_1) && !NAN(dVar4))) {
      bVar1 = param_1 < dVar4;
    }
    if (!bVar1) {
      if (*(char *)(unaff_x20 + _DAT_112f0c990) == '\x01') {
        func_0x000107c3ec60();
        func_0x000107c609cc();
        if (dVar3 - dVar4 < param_1) {
          return;
        }
      }
      func_0x000107c61154(param_1,param_2,&stack0xffffffffffffffa0,
                          PTR_s_hitTest_withEvent__1125d6850,param_3);
      func_0x000107c61180();
    }
  }
  return;
}



/* Entry: 102ce9c94; end: 102ce9d0b; -[_TtC40AdOperaLayerFactoryServiceImplementation26AdPlayableContentLayerView hitTest:withEvent:] */

void FUN_102ce9c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102ce9ba8(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 102ce9d0c; end: 102ce9d3f;  */

void FUN_102ce9d0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ce9d40; end: 102ce9d4f; -[_TtC40AdOperaLayerFactoryServiceImplementation26AdPlayableContentLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f0c978);
  return;
}



/* Entry: 102ce9d50; end: 102ce9d6f;  */

void FUN_102ce9d50(void)

{
  func_0x000107c61168(&PTR_PTR_11289f690);
  return;
}



/* Entry: 102ce9d70; end: 102ce9d77;  */

void FUN_102ce9d70(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 102ce9d78; end: 102ce9d97;  */

void FUN_102ce9d78(void)

{
  FUN_102ce9a68();
  return;
}



/* Entry: 102ce9d98; end: 102ce9dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce9d98(undefined1 param_1)

{
  long *unaff_x20;
  
  *(undefined1 *)(*unaff_x20 + _DAT_112f0c988) = param_1;
  return;
}



/* Entry: 102ce9dc0; end: 102cea163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ce9dc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  func_0x0001000d224c(&uStack_60);
  func_0x0001000a8868(&uStack_60,uStack_48);
  uVar1 = uStack_48;
  (**(code **)(lStack_40 + 8))(uStack_48,lStack_40);
  uVar2 = 0x112f0c918;
  func_0x0001000285a8(0x112f0c918,&UNK_10db3fd10);
  uVar5 = 0x102ceb188;
  func_0x0001000d5158(0x102ceb188,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(&uStack_60);
  puVar3 = &UNK_1105c0e28;
  func_0x000107c613fc(&UNK_1105c0e28,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar4 = FUN_102ceb184;
  func_0x0001000c0ebc(FUN_102ceb184,puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  uVar5 = 0;
  func_0x000103b98e4c();
  uVar2 = 0x112f0cb10;
  uStack_60 = uVar5;
  func_0x0001000285a8(0x112f0cb10,&UNK_10db3fe98);
  ppuStack_50 = &PTR_DAT_1105c4558;
  puVar3 = &UNK_10db3fe78;
  uStack_58 = uVar2;
  func_0x000107c614e0(&UNK_10db3fe78,&uStack_60);
  uVar5 = 0x102ceb190;
  func_0x0001000bfde0(0x102ceb190,puVar3,uVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar3);
  return uVar5;
}


