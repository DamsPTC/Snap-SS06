/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10347967c; end: 1034796cf;  */

void FUN_10347967c(void)

{
  return;
}



/* Entry: 1034796d0; end: 1034796ef; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController lensCarouselScopeInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034796d0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f705d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1034796f0; end: 103479747; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController setLensCarouselScopeInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034796f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61604(param_1 + _DAT_112f705d8,param_3);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103479748();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103479748; end: 1034798fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103479748(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lVar1 = _DAT_112f705d0;
  uVar4 = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f705d0);
  *(undefined8 *)(unaff_x20 + _DAT_112f705d0) = 0;
  func_0x000107c61574(uVar2);
  lVar3 = unaff_x20 + _DAT_112f705d8;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar2 = 0x112f70608;
    alStack_78[0] = lVar3;
    func_0x0001000285a8(0x112f70608,&UNK_10dbccbe0);
    uVar9 = 0x112f70610;
    func_0x0001000285a8(0x112f70610,&UNK_10dbccbe8);
    func_0x000107c6147c(&uStack_a0,alStack_78,uVar2,uVar9,6);
    if ((uVar4 & 1) != 0) {
      if (lStack_88 != 0) {
        FUN_103420c88(&uStack_a0,alStack_78);
        uVar2 = 0;
        func_0x0001000c6560();
        func_0x000107c613fc();
        func_0x0001000c6580();
        func_0x0001000a8868(alStack_78,plStack_60);
        plVar5 = plStack_60;
        (**(code **)(lStack_58 + 0x10))(plStack_60,lStack_58);
        puVar6 = &UNK_11065a800;
        func_0x000107c613fc(&UNK_11065a800,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        pcVar7 = FUN_103479b78;
        puVar10 = puVar6;
        (**(code **)(*plVar5 + 0x60))(FUN_103479b78);
        func_0x000107c61574(plVar5);
        func_0x000107c61574(puVar6);
        pcVar8 = pcVar7;
        func_0x000107c614f0(pcVar7);
        (**(code **)(puVar10 + 0x10))(uVar2,pcVar8,puVar10);
        func_0x000107c615e8(pcVar7);
        uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
        *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
        func_0x000107c61574(uVar9);
        func_0x0001000834e4(alStack_78);
        return;
      }
      goto LAB_1034798d8;
    }
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
LAB_1034798d8:
  FUN_103479b30(&uStack_a0);
  return;
}



/* Entry: 1034798fc; end: 103479a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034798fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f705c8);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_50 = uVar2;
    func_0x0001002a64a8(&uStack_50);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 103479a04; end: 103479a27; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController dealloc] */

void FUN_103479a04(void)

{
  func_0x000107c61174();
  func_0x000103479980();
  return;
}



/* Entry: 103479a28; end: 103479a8f; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103479a28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f705b8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f705c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f705c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f705d0));
  param_1 = param_1 + _DAT_112f705d8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103479a90; end: 103479abb; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController init] */

void FUN_103479a90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselOnCameraScopeController",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103479abc);
  (*pcVar1)();
}



/* Entry: 103479abc; end: 103479acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103479abc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112f705c0));
  return;
}



/* Entry: 103479ad0; end: 103479ad3; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController setUIHidden:] */

void FUN_103479ad0(void)

{
  return;
}



/* Entry: 103479ad4; end: 103479b2f; -[_TtC25SCLensCarouselIntegration35LensCarouselOnCameraScopeController isPointInsideView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103479ad4(undefined8 param_1,undefined8 param_2,long param_3)

{
  param_3 = param_3 + _DAT_112f705d8;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c4eae0(param_1,param_2);
    func_0x000107c615e8(param_3);
  }
  return;
}



/* Entry: 103479b30; end: 103479b77;  */

undefined8 FUN_103479b30(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f67628;
  func_0x0001000285a8(0x112f67628,&UNK_10dbc3170);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103479b78; end: 103479b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103479b78(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f705c8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_50 = uVar3;
    func_0x0001002a64a8(&uStack_50);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 103479b80; end: 103479ba3;  */

undefined8 FUN_103479b80(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103479ba4; end: 103479c5f; -[_TtC25SCLensCarouselIntegration48LensCarouselOnCameraScopeDataProviderObjcAdapter disableScrollObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103479ba4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  pcVar3 = FUN_103479c60;
  func_0x0001000bfde0(FUN_103479c60,0,uVar2);
  func_0x000107c61574(uVar1);
  puVar4 = auStack_58;
  func_0x0001000834e4(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 103479c60; end: 103479c97;  */

void FUN_103479c60(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 103479c98; end: 103479cf7; -[_TtC25SCLensCarouselIntegration48LensCarouselOnCameraScopeDataProviderObjcAdapter init] */

void FUN_103479c98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselOnCameraScopeDataProviderObjcAdapter",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103479cc4);
  (*pcVar1)();
}



/* Entry: 103479cf8; end: 103479d07; -[_TtC25SCLensCarouselIntegration48LensCarouselOnCameraScopeDataProviderObjcAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103479cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70620));
  return;
}



/* Entry: 103479d08; end: 10347a007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103479d08(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(long *)(unaff_x20 + 0x10) = param_1;
  uVar7 = *(undefined8 *)(param_1 + _DAT_113081ca0);
  lVar1 = 0;
  FUN_103476d58();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f70358) = uVar7;
  *(undefined8 *)(lVar2 + _DAT_112f70350) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112f70348) = param_4;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar2;
  lStack_68 = lVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  plVar3 = &lStack_70;
  func_0x000107c61154(plVar3,puVar4);
  *(long **)(unaff_x20 + 0x18) = plVar3;
  uVar7 = *(undefined8 *)(param_2 + _DAT_113038ac8);
  FUN_10347b150(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(uVar7);
  lVar2 = param_1;
  FUN_10347a2a0(param_1,uVar7);
  FUN_10347a3a8();
  func_0x00010347a5fc();
  func_0x00010347a8ac();
  *(long *)(unaff_x20 + 0x20) = lVar2;
  uVar7 = *(undefined8 *)((long)plVar3 + _DAT_112f70358);
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_103484888(uVar7);
  func_0x000107c42c1c(*(undefined8 *)((long)plVar3 + _DAT_112f70348));
  func_0x000107c61170(plVar3);
  func_0x000107c61170(uVar7);
  puVar4 = &UNK_11065a830;
  func_0x000107c613fc(&UNK_11065a830,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  func_0x0001000285a8(0x112f70650,&UNK_10dbccc40);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar5 = FUN_10347a22c;
  func_0x0001000bdd8c(FUN_10347a22c,puVar4);
  puVar4 = &UNK_11065a858;
  func_0x000107c613fc(&UNK_11065a858,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  func_0x0001000285a8(0x112f70658,&UNK_10dbccc48);
  func_0x000107c613fc();
  func_0x000107c61174(lVar2);
  uVar7 = 0x10347a238;
  func_0x0001000bdd8c(0x10347a238,puVar4);
  uVar6 = 0;
  func_0x000103f95eec(0);
  func_0x000107c610f8();
  func_0x000103f95df0(pcVar5,uVar7,uVar6);
  func_0x000107c42c20(param_5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(pcVar5);
  return unaff_x20;
}



/* Entry: 10347a008; end: 10347a00f;  */

void FUN_10347a008(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10347a010; end: 10347a047;  */

void FUN_10347a010(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11065a8b8;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10347a048; end: 10347a1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10347a048(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c4d6c8();
  func_0x000107c61180();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c3e26c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_11065a880;
    func_0x000107c613fc(&UNK_11065a880,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112f70728);
    *(undefined8 *)(lVar3 + _DAT_112f70728) = 0;
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(uVar5);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112f70730);
    *(undefined8 *)(lVar3 + _DAT_112f70730) = 0;
    func_0x000107c61574(uVar5);
    if ((*(byte *)(lVar3 + _DAT_112f70748) & 1) == 0) {
      FUN_10347ae58(FUN_10347a278,puVar2);
    }
    else {
      func_0x000107c4358c(puVar1);
    }
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar3);
    puVar2 = puVar1;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000107c61170(uVar4);
  puVar1 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10347a1cc; end: 10347a207;  */

void FUN_10347a1cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10347a208; end: 10347a20b;  */

void FUN_10347a208(void)

{
  return;
}



/* Entry: 10347a20c; end: 10347a22b;  */

void FUN_10347a20c(void)

{
  FUN_10347a048();
  return;
}



/* Entry: 10347a22c; end: 10347a23b;  */

void FUN_10347a22c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10347a23c; end: 10347a277;  */

void FUN_10347a23c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11065a8b8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 10347a278; end: 10347a27f;  */

void FUN_10347a278(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x18),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10347a280; end: 10347a29f;  */

void FUN_10347a280(void)

{
  func_0x000107c61168(&PTR_PTR_112f706a0);
  return;
}



/* Entry: 10347a2a0; end: 10347a3a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347a2a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f70728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f70730) = 0;
  lVar1 = _DAT_112f70738;
  func_0x0001000285a8(0x112f707a0,&UNK_10dbccce8);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f70740;
  func_0x0001000285a8(0x112f70790,&UNK_10dbccce0);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112f70748) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f70718) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f70720) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10347a3a8; end: 10347aa77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347a3a8(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_a0 [24];
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f70728);
  *(undefined8 *)(unaff_x20 + _DAT_112f70728) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar9);
  func_0x0001000d224c(auStack_78);
  lVar5 = lStack_58;
  uVar9 = uStack_60;
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lVar5 + 8))(auStack_a0,uVar9,lVar5);
  lVar5 = lStack_80;
  plVar2 = plStack_88;
  func_0x0001000a8868(auStack_a0,plStack_88);
  (**(code **)(lVar5 + 8))(plVar2,lVar5);
  puVar3 = &UNK_11065a900;
  func_0x000107c613fc(&UNK_11065a900,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uVar9 = 0x10347b7d8;
  puVar8 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x10347b7d8);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  uVar4 = uVar9;
  func_0x000107c614f0(uVar9);
  (**(code **)(puVar8 + 0x10))(uVar1,uVar4,puVar8);
  func_0x000107c615e8(uVar9);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(auStack_a0,uStack_60,lStack_58);
  func_0x0001000a8868(auStack_a0,plStack_88);
  plVar2 = plStack_88;
  (**(code **)(lStack_80 + 0x10))(plStack_88,lStack_80);
  lVar7 = _DAT_112f70740;
  pcVar10 = *(code **)(*plVar2 + 0x58);
  lVar5 = 0x112f70790;
  func_0x0001000285a8(0x112f70790,&UNK_10dbccce0);
  lVar6 = lVar5;
  FUN_10347b7e0();
  lVar7 = unaff_x20 + lVar7;
  (*pcVar10)(lVar7,lVar5,lVar6);
  func_0x000107c61574(plVar2);
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  lVar6 = lVar7;
  func_0x000107c614f0(lVar7);
  (**(code **)(lVar5 + 0x10))(uVar1,lVar6,lVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(lVar7);
  return;
}



/* Entry: 10347aa78; end: 10347aac3;  */

void FUN_10347aa78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10347aac4; end: 10347acab;  */

void FUN_10347aac4(long param_1,undefined8 param_2)

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



/* Entry: 10347acac; end: 10347adfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347acac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001000d224c(auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x20))(uVar1,uStack_68,lStack_60);
    func_0x000107c61170(param_2);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 10347adfc; end: 10347ae57;  */

void FUN_10347adfc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10347ae58(0,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10347ae58; end: 10347af97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347ae58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_113081cc0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f70718);
  func_0x000107c61428(lVar4 + _DAT_113081cc0,auStack_68,0,0);
  lVar4 = lVar4 + lVar1;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c5e350();
    func_0x000107c615e8(lVar4);
  }
  func_0x0001000d224c(auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  puVar2 = &UNK_11065a900;
  func_0x000107c613fc(&UNK_11065a900,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11065a928;
  func_0x000107c613fc(&UNK_11065a928,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  pcVar5 = *(code **)(lStack_70 + 0x18);
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c6157c(puVar2);
  (*pcVar5)(FUN_10347b788,puVar3,uStack_78,lStack_70);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_90);
  return;
}



/* Entry: 10347af98; end: 10347b077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347af98(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if ((*(byte *)(param_4 + _DAT_112f70748) & 1) == 0) {
      *(undefined1 *)(param_4 + _DAT_112f70748) = 1;
      lVar1 = _DAT_113081cc0;
      lVar2 = *(long *)(param_4 + _DAT_112f70718);
      func_0x000107c61428(lVar2 + _DAT_113081cc0,auStack_70,0,0);
      lVar2 = lVar2 + lVar1;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c41b04(lVar2);
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61170();
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 10347b078; end: 10347b0d7; -[_TtC25SCLensCarouselIntegration20LensCarouselWorkflow init] */

void FUN_10347b078(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselWorkflow",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10347b0a4);
  (*pcVar1)();
}



/* Entry: 10347b0d8; end: 10347b14f; -[_TtC25SCLensCarouselIntegration20LensCarouselWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010347b104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010347b124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010347b108) */
/* WARNING: Removing unreachable block (ram,0x00010347b128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b0d8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f70718));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70720));
  return;
}



/* Entry: 10347b150; end: 10347b16f;  */

void FUN_10347b150(void)

{
  func_0x000107c61168(&PTR_PTR_1128dcdc8);
  return;
}



/* Entry: 10347b170; end: 10347b21f; -[_TtC25SCLensCarouselIntegration20LensCarouselWorkflow firstApplicableLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b170(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(auStack_80,uStack_40,lStack_38);
  func_0x0001000a8868(auStack_80,uStack_68);
  uVar1 = uStack_68;
  (**(code **)(lStack_60 + 0x20))(uStack_68,lStack_60);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_80);
  func_0x0001000834e4(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10347b220; end: 10347b2f7; -[_TtC25SCLensCarouselIntegration20LensCarouselWorkflow defaultSelectionLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b220(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(auStack_80,uStack_40,lStack_38);
  func_0x0001000a8868(auStack_80,uStack_68);
  uVar2 = uStack_68;
  lVar1 = lStack_60;
  (**(code **)(lStack_60 + 0x28))(uStack_68);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_80);
  func_0x0001000834e4(auStack_58);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10347b2f8; end: 10347b3bf; -[_TtC25SCLensCarouselIntegration20LensCarouselWorkflow pointInsideLensCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10347b2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(auStack_90,uStack_50,lStack_48);
  func_0x0001000a8868(auStack_90,uStack_78);
  uVar1 = uStack_78;
  (**(code **)(lStack_70 + 0x30))(param_1,param_2,uStack_78,lStack_70);
  func_0x000107c61170(param_3);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  return (uint)uVar1 & 1;
}



/* Entry: 10347b3c0; end: 10347b3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b3c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112f70738));
  return;
}



/* Entry: 10347b3e8; end: 10347b5db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10347b3e8(void)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(auStack_80,uStack_40,lStack_38);
  func_0x0001000a8868(auStack_80,uStack_68);
  uVar1 = uStack_68;
  (**(code **)(lStack_60 + 0x18))(uStack_68,lStack_60);
  func_0x0001000834e4(auStack_80);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 10347b5dc; end: 10347b697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10347b5dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(auStack_90,uStack_50,lStack_48);
  func_0x0001000a8868(auStack_90,uStack_78);
  uVar1 = uStack_78;
  (**(code **)(lStack_70 + 0x30))(param_1,param_2,uStack_78,lStack_70);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  return (uint)uVar1 & 1;
}



/* Entry: 10347b698; end: 10347b747; -[_TtC25SCLensCarouselIntegration20LensCarouselWorkflow activeLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b698(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(auStack_80,uStack_40,lStack_38);
  func_0x0001000a8868(auStack_80,uStack_68);
  uVar1 = uStack_68;
  (**(code **)(lStack_60 + 0x18))(uStack_68,lStack_60);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_80);
  func_0x0001000834e4(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10347b748; end: 10347b787; -[_TtC25SCLensCarouselIntegration20LensCarouselWorkflow lensCarouselDidScrollObservableObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b748(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10347b788; end: 10347b7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b788(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + _DAT_112f70748) & 1) == 0) {
      *(undefined1 *)(lVar3 + _DAT_112f70748) = 1;
      lVar2 = _DAT_113081cc0;
      lVar3 = *(long *)(lVar3 + _DAT_112f70718);
      func_0x000107c61428(lVar3 + _DAT_113081cc0,auStack_70,0,0);
      lVar3 = lVar3 + lVar2;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c41b04(lVar3);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61170();
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 10347b7e0; end: 10347b82f;  */

void FUN_10347b7e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f70798 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f70790;
  func_0x00010002969c(0x112f70790,&UNK_10dbccce0);
  puVar2 = &DAT_10dd3ca70;
  func_0x000107c61520(&DAT_10dd3ca70,uVar1);
  puRam0000000112f70798 = puVar2;
  return;
}



/* Entry: 10347b830; end: 10347b88b; -[_TtC25SCLensCarouselIntegration34LensCarouselDataProviderController init] */

void FUN_10347b830(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselDataProviderController",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10347b85c);
  (*pcVar1)();
}



/* Entry: 10347b88c; end: 10347b8f7; -[_TtC25SCLensCarouselIntegration34LensCarouselDataProviderController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010347b8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010347b8ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f707a8));
  return;
}



/* Entry: 10347b8f8; end: 10347b917;  */

void FUN_10347b8f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128dceb8);
  return;
}



/* Entry: 10347b918; end: 10347ba5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347b918(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  if (uStack_48 == 0) {
    return;
  }
  uVar1 = uStack_48;
  func_0x000107c40f70();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_48);
  uVar2 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  uVar2 = uVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x000107c3df58();
    func_0x000107c61180();
    if (uVar2 == 0) {
      uVar2 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (uVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar4);
      }
      uVar3 = uVar1;
      func_0x000107c4b17c();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar3 != 0) goto LAB_10347b9d4;
    }
    else {
      func_0x000107c61170();
    }
  }
  func_0x000107c61174(param_1);
  uVar3 = param_1;
LAB_10347b9d4:
  func_0x000107c58dfc(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 10347ba60; end: 10347bb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347ba60(void)

{
  long alStack_b0 [2];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  func_0x0001000d224c(alStack_b0);
  if (alStack_b0[0] != 0) {
    lStack_40 = alStack_b0[0];
    lStack_60 = alStack_b0[0];
    lStack_80 = alStack_b0[0];
    func_0x000107c615f0(alStack_b0[0]);
    func_0x0001044fd80c(FUN_10347cad4,auStack_50,FUN_10347cb18,auStack_70,0x10347cb4c,auStack_90,
                        FUN_10347cb80,alStack_b0);
    func_0x000107c615ec(alStack_b0[0],2);
  }
  return;
}



/* Entry: 10347bb08; end: 10347bb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347bb08(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  if (((param_2 & 1) == 0) && (*(long *)(param_1 + _DAT_1130820a8) != 0)) {
    uStack_90 = param_4;
    uStack_70 = param_4;
    uStack_50 = param_4;
    uStack_30 = param_4;
    func_0x000104502c4c(0x10347cb88,auStack_40,0x10347cb94,auStack_60,0x10347cba8,auStack_80,
                        FUN_10347cbb8,auStack_a0);
  }
  return;
}



/* Entry: 10347bb84; end: 10347bc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347bb84(void)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c40f70(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c3d740(lVar1);
    FUN_10347bc04();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10347bc04; end: 10347bd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347bc04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    func_0x000107c4b04c(puStack_70);
    puVar2 = puStack_70;
    func_0x000107c61180();
    puVar3 = &UNK_11065aa38;
    func_0x000107c613fc(&UNK_11065aa38,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_10347ca98;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_10347c364;
    puStack_58 = &UNK_11065aa50;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar3 = puVar2;
    func_0x000107c5c320(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c3e924(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 10347bd24; end: 10347be57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347bd24(void)

{
  long lVar1;
  long unaff_x20;
  long lStack_38;
  
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f707b8));
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c40f70(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c4ff64(lVar1);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10347be58; end: 10347bf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347be58(ulong param_1)

{
  long lVar1;
  long lVar2;
  long alStack_60 [2];
  
  func_0x0001000d224c(alStack_60);
  lVar2 = alStack_60[0];
  if (alStack_60[0] != 0) {
    lVar1 = alStack_60[0];
    func_0x000107c40f70(alStack_60[0]);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if ((param_1 & 1) == 0) {
      func_0x000107c576c0(lVar1);
      FUN_10347bf8c();
      func_0x000107c58dfc(lVar1);
    }
    else {
      func_0x0001000d224c(alStack_60);
      if (alStack_60[0] != 0) {
        lVar2 = alStack_60[0];
        func_0x000107c40f70();
        func_0x000107c61180();
        func_0x000107c615e8(alStack_60[0]);
        alStack_60[0] = 0;
        alStack_60[1] = 0;
        func_0x0001002a64a8(alStack_60);
        func_0x000107c3d740(lVar2);
        func_0x000100087bd4(FUN_10347ca68,alStack_60,PTR___sytN_11034f1b0 + 8);
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10347bf8c; end: 10347c033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347bf8c(void)

{
  long lVar1;
  long alStack_50 [2];
  
  func_0x0001000d224c(alStack_50);
  if (alStack_50[0] != 0) {
    lVar1 = alStack_50[0];
    func_0x000107c40f70();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_50[0]);
    func_0x000107c4ff64(lVar1);
    func_0x000100087bd4(0x10347ca80,alStack_50,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10347c034; end: 10347c1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c034(ulong param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    return;
  }
  lVar2 = lStack_48;
  func_0x000107c40f70(lStack_48);
  func_0x000107c61180();
  func_0x000107c615e8(lStack_48);
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10347c1b0);
      (*pcVar1)();
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + _DAT_1130820f8);
  }
  else {
    lVar5 = 0;
    func_0x00010346fbc0(0,param_1);
    lVar5 = *(long *)(lVar5 + _DAT_1130820f8);
    func_0x000107c615e8();
  }
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10347c1ac);
    (*pcVar1)();
  }
  if (SCARRY8(lVar5,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10347c184);
    (*pcVar1)();
  }
  if (uVar4 != 0) {
    uVar3 = uVar4 - 1;
    if (SBORROW8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10347c1b4);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10347c1e8);
        (*pcVar1)();
      }
      if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10347c1ec);
        (*pcVar1)();
      }
      lVar5 = *(long *)(*(long *)(param_1 + uVar3 * 8 + 0x20) + _DAT_1130820f8);
    }
    else {
      func_0x00010346fbc0(uVar3,param_1,lVar5 + param_3);
      lVar5 = *(long *)(uVar3 + _DAT_1130820f8);
      func_0x000107c615e8();
    }
    if (SCARRY8(lVar5,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10347c1e4);
      (*pcVar1)();
    }
  }
  func_0x000107c597f4(lVar2);
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 10347c1ec; end: 10347c267;  */

void FUN_10347c1ec(undefined8 param_1,long param_2)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_60 = param_2;
    lStack_40 = param_2;
    func_0x000104476828(0x10347cabc,auStack_50,0x10347cacc,auStack_70);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10347c268; end: 10347c363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c268(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_1 != 0) {
    func_0x000107c3d740(param_1,param_2,param_5);
  }
  if ((param_2 & 1) != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 != 0) {
      lVar1 = lStack_60;
      func_0x000107c40f70();
      func_0x000107c61180();
      func_0x000107c615e8(lStack_60);
      uStack_50 = CONCAT71(uStack_50._1_7_,0x80);
      lStack_60 = param_3;
      uStack_58 = param_4;
      func_0x000107c61434(param_4);
      func_0x0001002a64a8(&lStack_60);
      func_0x000107c3d740(lVar1);
      uStack_50 = param_5;
      func_0x000100087bd4(FUN_10347cbec,&lStack_60,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar1);
      func_0x000107c6142c(param_4);
    }
  }
  return;
}



/* Entry: 10347c364; end: 10347c3af;  */

void FUN_10347c364(long param_1,undefined8 param_2)

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



/* Entry: 10347c3b0; end: 10347c463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c3b0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + _DAT_112f707c0);
  lVar4 = plVar1[1];
  lVar2 = param_2;
  if (lVar4 != 0) {
    lVar3 = *plVar1;
    func_0x000107c61434(lVar4);
    lVar2 = lVar4;
    func_0x000107c5fadc(lVar3);
    func_0x000107c6142c(lVar4);
    func_0x000107c5be94(param_2);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c5bc10();
  func_0x000107c61180();
  lVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  lVar3 = plVar1[1];
  *plVar1 = lVar4;
  plVar1[1] = lVar2;
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 10347c464; end: 10347c4ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c464(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f707c0);
  lVar2 = puVar1[1];
  if (lVar2 != 0) {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c5be94(param_2);
    func_0x000107c61170(uVar3);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 10347c4f0; end: 10347c56f;  */

void FUN_10347c4f0(void)

{
  FUN_10347b918();
  return;
}



/* Entry: 10347c570; end: 10347c5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c570(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c40f70(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c58dfc(lVar1,param_2,param_1);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10347c5ec; end: 10347c64b;  */

void FUN_10347c5ec(void)

{
  func_0x00010347bdac();
  return;
}



/* Entry: 10347c64c; end: 10347c6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c64c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c40f70(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c43154(lVar1,param_2,param_1,1);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10347c6c8; end: 10347c6e7;  */

void FUN_10347c6c8(void)

{
  FUN_10347c64c();
  return;
}



/* Entry: 10347c6e8; end: 10347c773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10347c6e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c40f70(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lVar2 = lVar1;
    func_0x000107c49d88(lVar1,param_2,param_1);
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 10347c774; end: 10347c787;  */

void FUN_10347c774(void)

{
  func_0x000107c49d84();
  return;
}



/* Entry: 10347c788; end: 10347c8d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10347c788(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar3 = lStack_38;
    func_0x000107c40f70();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c4e09c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4b1dc(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      lVar3 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lStack_38);
      goto LAB_10347c840;
    }
    func_0x000107c615e8(lStack_38);
  }
  lVar3 = 0;
  param_2 = 0;
LAB_10347c840:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 10347c8d8; end: 10347c8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c8d8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112f707b0));
  return;
}



/* Entry: 10347c8ec; end: 10347c92b;  */

void FUN_10347c8ec(void)

{
  FUN_10347c788();
  return;
}



/* Entry: 10347c92c; end: 10347c9e7; -[_TtC25SCLensCarouselIntegration34LensCarouselDataProviderController didUpdateAllLenses:requiresAnimation:lensDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_5);
  func_0x000107c61174();
  uVar1 = param_5;
  func_0x000107c51c84();
  func_0x000107c61180();
  uStack_58 = param_3;
  uStack_50 = uVar1;
  uStack_48 = param_4;
  func_0x0001002a64a8(&uStack_58);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_5);
  return;
}



/* Entry: 10347c9e8; end: 10347ca67; -[_TtC25SCLensCarouselIntegration34LensCarouselDataProviderController didUpdateLens:contentUpdateType:lensDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347c9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  
  uStack_40 = (ulong)((param_4 & 10) != 0);
  uStack_38 = 0x40;
  uStack_48 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10347ca68; end: 10347ca97;  */

void FUN_10347ca68(void)

{
  long unaff_x20;
  
  FUN_10347c3b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10347ca98; end: 10347cad3;  */

void FUN_10347ca98(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lStack_60 = lVar1;
    lStack_40 = lVar1;
    func_0x000104476828(0x10347cabc,auStack_50,0x10347cacc,auStack_70);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10347cad4; end: 10347cb17;  */

void FUN_10347cad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c4fbf4(uVar1,param_2,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10347cb18; end: 10347cb7f;  */

void FUN_10347cb18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c3d050(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10347cb80; end: 10347cbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347cb80(long param_1,ulong param_2)

{
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x18);
  if (((param_2 & 1) == 0) && (*(long *)(param_1 + _DAT_1130820a8) != 0)) {
    uStack_70 = uStack_90;
    uStack_50 = uStack_90;
    uStack_30 = uStack_90;
    func_0x000104502c4c(0x10347cb88,auStack_40,0x10347cb94,auStack_60,0x10347cba8,auStack_80,
                        FUN_10347cbb8,auStack_a0);
  }
  return;
}



/* Entry: 10347cbb8; end: 10347cbeb;  */

void FUN_10347cbb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c3d050(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10347cbec; end: 10347cbff;  */

void FUN_10347cbec(void)

{
  FUN_10347ca68();
  return;
}



/* Entry: 10347cc00; end: 10347cd6f;  */

void FUN_10347cc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_78 [24];
  long *plStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,plStack_60);
  plVar3 = plStack_60;
  (**(code **)(lStack_58 + 8))(plStack_60,lStack_58);
  puVar1 = &UNK_11065aaa0;
  func_0x000107c613fc(&UNK_11065aaa0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar4 = FUN_10347d2dc;
  puVar6 = puVar1;
  (**(code **)(*plVar3 + 0x60))(FUN_10347d2dc);
  func_0x000107c61574(puVar1);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + 0x30),pcVar5,puVar6);
  func_0x000107c61574(plVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c615e8(pcVar4);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 10347cd70; end: 10347d0df;  */

void FUN_10347cd70(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (((uVar1 & 0xc0) == 0x40) && ((uVar2 & 1) != 0)) {
      func_0x0001000d224c(auStack_80);
      func_0x0001000a8868(auStack_80,uStack_68);
      uVar2 = uVar3;
      (**(code **)(lStack_60 + 0x18))(uVar3,uStack_68,lStack_60);
      func_0x0001000834e4(auStack_80);
      if ((uVar2 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        func_0x000103f9906c(0);
        func_0x000103f98ec8(uVar3);
        func_0x000107c4d664(uVar4);
        func_0x000107c61574(param_2);
        func_0x000107c61170(uVar3);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10347d0e0; end: 10347d143;  */

void FUN_10347d0e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10347d144; end: 10347d14b; -[_TtC25SCLensCarouselIntegration26LensCarouselLensDownloader lensDownloadEventObservable] */

void FUN_10347d144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10347d14c; end: 10347d1e7; -[_TtC25SCLensCarouselIntegration26LensCarouselLensDownloader isLensDownloaded:] */

uint FUN_10347d14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = param_3;
  (**(code **)(lStack_48 + 0x18))(param_3,uStack_50,lStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_68);
  return (uint)uVar1 & 1;
}



/* Entry: 10347d1e8; end: 10347d283; -[_TtC25SCLensCarouselIntegration26LensCarouselLensDownloader isLensDownloadInProgress:] */

uint FUN_10347d1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = param_3;
  (**(code **)(lStack_48 + 0x10))(param_3,uStack_50,lStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_68);
  return (uint)uVar1 & 1;
}



/* Entry: 10347d284; end: 10347d2db; -[_TtC25SCLensCarouselIntegration26LensCarouselLensDownloader downloadLens:] */

uint FUN_10347d284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  func_0x00010347ce68(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10347d2dc; end: 10347d2e3;  */

void FUN_10347d2dc(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (((uVar1 & 0xc0) == 0x40) && ((uVar3 & 1) != 0)) {
      func_0x0001000d224c(auStack_80);
      func_0x0001000a8868(auStack_80,uStack_68);
      uVar3 = uVar4;
      (**(code **)(lStack_60 + 0x18))(uVar4,uStack_68,lStack_60);
      func_0x0001000834e4(auStack_80);
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x10);
        func_0x000103f9906c(0);
        func_0x000103f98ec8(uVar4);
        func_0x000107c4d664(uVar5);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(uVar4);
        return;
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10347d2e4; end: 10347d3cf;  */

void FUN_10347d2e4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000104505ba4(FUN_10347d6b0,param_2,0x10347d6b8,param_2,FUN_10347d6c0,param_2,0x10347d6dc,
                        param_2,FUN_10347d6f8,param_2,FUN_10347d560,0,0x10347d700,param_2,
                        FUN_10347d5cc,0,0x10347d708,param_2,FUN_10347d650,0,0x10347d654,0,
                        0x10347d658,0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10347d3d0; end: 10347d55f;  */

void FUN_10347d3d0(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x20))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 10347d560; end: 10347d563;  */

void FUN_10347d560(void)

{
  return;
}



/* Entry: 10347d564; end: 10347d5cb;  */

void FUN_10347d564(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x38))(param_1,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 10347d5cc; end: 10347d5cf;  */

void FUN_10347d5cc(void)

{
  return;
}



/* Entry: 10347d5d0; end: 10347d64f;  */

void FUN_10347d5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x48))(param_1,param_2,param_3,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}


