/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026eb048; end: 1026eb063; -[SCMapPetLocation description] */

void FUN_1026eb048(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026eb064; end: 1026eb0df; -[SCMapPetLocation init] */

void FUN_1026eb064(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapPersonLocationAccessoryUtilities/MapPetLocationWrapper.swift",0x41,2,
                      0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026eb0ac);
  (*pcVar1)();
}



/* Entry: 1026eb0e0; end: 1026eb0f3; -[SCMapPetLocation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eb0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb8a90 + 8))
  ;
  return;
}



/* Entry: 1026eb0f4; end: 1026eb113;  */

void FUN_1026eb0f4(void)

{
  func_0x000107c61168(&PTR_PTR_11285b9e0);
  return;
}



/* Entry: 1026eb114; end: 1026eb11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eb114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8a90);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8a98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026eb11c; end: 1026eb62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026eb11c(undefined1 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar1 = _DAT_112eb8ad0;
  func_0x000107c61614(unaff_x20 + _DAT_112eb8ad0,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112eb8ac8) = puVar3;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112eb8ac8;
  uVar12 = *(undefined8 *)(puVar4 + _DAT_112eb8ac8);
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c52b2c(uVar12);
  func_0x000107c54280(*(undefined8 *)(puVar4 + lVar1));
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  func_0x000107c5a050(*(undefined8 *)(puVar4 + lVar1));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 5;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  uVar7 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c5cbe4(puVar5);
  func_0x000107c61180();
  uVar12 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar6 + 0x20) = uVar12;
  uVar7 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  uVar12 = 0;
  func_0x000100847984(0);
  puVar9 = puVar6;
  func_0x000107c5fc48(puVar6,uVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar9);
  puVar8 = param_1;
  func_0x000107c3cf88();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  uVar12 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5ce8c(uVar12);
  func_0x000107c61180();
  puVar10 = puVar5;
  func_0x000107c5ce8c(puVar5);
  func_0x000107c61180();
  puVar11 = puVar5;
  if (puVar8 == (undefined1 *)0x0) {
    uVar7 = uVar12;
    func_0x000107c40280(uVar12);
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar10);
    func_0x000107c521e8(uVar7);
    func_0x000107c61170(uVar7);
    uVar12 = *(undefined8 *)(puVar4 + lVar1);
    func_0x000107c4acb0(uVar12);
    func_0x000107c61180();
    func_0x000107c4acb0(puVar5);
LAB_1026eb4c0:
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    uVar7 = uVar12;
    func_0x000107c40280(uVar12);
  }
  else {
    if (puVar8 == (undefined1 *)0x4) {
      uVar7 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar10);
      func_0x000107c521e8(uVar7);
      func_0x000107c61170(uVar7);
      uVar12 = *(undefined8 *)(puVar4 + lVar1);
      func_0x000107c4acb0(uVar12);
      func_0x000107c61180();
      func_0x000107c4acb0(puVar5);
    }
    else {
      if (puVar8 == (undefined1 *)0x1) {
        uVar7 = uVar12;
        func_0x000107c402a4();
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        func_0x000107c61170(puVar10);
        func_0x000107c521e8(uVar7);
        func_0x000107c61170(uVar7);
        uVar12 = *(undefined8 *)(puVar4 + lVar1);
        func_0x000107c4acb0(uVar12);
        func_0x000107c61180();
        func_0x000107c4acb0(puVar5);
        goto LAB_1026eb4c0;
      }
      uVar7 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar10);
      func_0x000107c521e8(uVar7);
      func_0x000107c61170(uVar7);
      uVar12 = *(undefined8 *)(puVar4 + lVar1);
      func_0x000107c4acb0(uVar12);
      func_0x000107c61180();
      func_0x000107c4acb0(puVar5);
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    uVar7 = uVar12;
    func_0x000107c40294(uVar12);
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c521e8(uVar7);
  func_0x000107c61170(uVar7);
  puVar8 = puVar5 + _DAT_112eb8ad0;
  func_0x000107c61618();
  if (puVar8 == (undefined1 *)0x0) {
    func_0x000107c61170(puVar5);
  }
  else {
    puVar10 = puVar8;
    func_0x000107c4d90c();
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026eb630);
      (*pcVar2)();
    }
    if (puVar10 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
      uVar12 = *(undefined8 *)(puVar4 + lVar1);
      do {
        puVar11 = puVar11 + 1;
        puVar4 = puVar8;
        func_0x000107c3cf8c(puVar8);
        func_0x000107c61180();
        func_0x000107c3d5b4(uVar12);
        func_0x000107c61170(puVar4);
      } while (puVar10 != puVar11);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(param_1);
    param_1 = puVar8;
  }
  func_0x000107c615e8(param_1);
  return puVar5;
}



/* Entry: 1026eb630; end: 1026eb6d3; -[_TtC26MapActionBarViewController9ActionBar initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eb630(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112eb8ad0,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapActionBarViewController/ActionBar.swift",0x2a,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026eb69c);
  (*pcVar1)();
}



/* Entry: 1026eb6d4; end: 1026eb733; -[_TtC26MapActionBarViewController9ActionBar initWithFrame:] */

void FUN_1026eb6d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapActionBarViewController.ActionBar",0x24,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026eb700);
  (*pcVar1)();
}



/* Entry: 1026eb734; end: 1026eb76b; -[_TtC26MapActionBarViewController9ActionBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026eb734(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb8ac8));
  param_1 = param_1 + _DAT_112eb8ad0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026eb76c; end: 1026eb78b;  */

void FUN_1026eb76c(void)

{
  func_0x000107c61168(&PTR_PTR_11285bab0);
  return;
}



/* Entry: 1026eb78c; end: 1026eb7af;  */

undefined8 FUN_1026eb78c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026eb7b0; end: 1026eb7ef;  */

void FUN_1026eb7b0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1026eb7f0(param_1,param_2);
  return;
}



/* Entry: 1026eb7f0; end: 1026eba4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026eb7f0(undefined8 param_1,double param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  puVar1 = &stack0xffffffffffffff90;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8b00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8b08) = 0;
  FUN_1026eba4c();
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40290(param_1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_112eb8b00);
  *(undefined1 **)(puVar1 + _DAT_112eb8b00) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  puVar2 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c40290(param_2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_112eb8b08);
  *(undefined1 **)(puVar1 + _DAT_112eb8b08) = puVar4;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 5;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  *(undefined1 **)(puVar6 + 0x20) = puVar3;
  *(undefined1 **)(puVar6 + 0x28) = puVar4;
  uVar8 = 0;
  func_0x0001026ebee8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar4);
  puVar7 = puVar6;
  func_0x000107c5fc48(puVar6,uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(puVar7);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar5);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c539d4(param_2 * 0.5,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1026eba4c; end: 1026eba6b;  */

void FUN_1026eba4c(void)

{
  func_0x000107c61168(&PTR_PTR_11285bb78);
  return;
}



/* Entry: 1026eba6c; end: 1026ebadb; -[_TtC26MapActionBarViewController18MapActionBarButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eba6c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112eb8b00) = 0;
  *(undefined8 *)(param_1 + _DAT_112eb8b08) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapActionBarViewController/MapActionBarButton.swift",0x33,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ebadc);
  (*pcVar1)();
}



/* Entry: 1026ebadc; end: 1026ebb97; -[_TtC26MapActionBarViewController18MapActionBarButton layoutSubviews] */

void FUN_1026ebadc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  FUN_1026eba4c();
  puVar2 = PTR_s_layoutSubviews_112600e60;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x00010085b3c8(0x4028000000000000,0x3fc3333333333333,0,0x4000000000000000,puVar2,param_1,
                      puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1026ebb98; end: 1026ebc0f;  */

/* WARNING: Possible PIC construction at 0x0001026ebbec: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ebb98(double param_1,double param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(param_2 * 0.5);
  func_0x000107c61170(lVar1);
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb8b00);
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112eb8b08);
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,lVar1,PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1026ebc10; end: 1026ebc63;  */

void FUN_1026ebc10(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  func_0x000107c6088c(auStack_50,0x3fe999999999999a,0x3fe999999999999a);
  func_0x000107c5a03c(param_1,param_2,auStack_50);
  return;
}



/* Entry: 1026ebc64; end: 1026ebc87; -[_TtC26MapActionBarViewController18MapActionBarButton touchesBegan:withEvent:] */

void FUN_1026ebc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = &UNK_11053cbc8;
  ppuVar6 = &puStack_a0;
  uVar1 = 0;
  func_0x0001026ebee8(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar1,uVar2);
  uVar2 = uVar3;
  FUN_1026eba4c();
  uStack_70 = param_1;
  uStack_68 = uVar2;
  func_0x000107c61154(&uStack_70,PTR_s_touchesBegan_withEvent__11267b780,uVar3,param_4);
  func_0x000107c61170(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(&UNK_11053cbc8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  uStack_80 = 0x1026ebfa0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11053cbe0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c3dccc(0x3fd0000000000000,puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1026ebc88; end: 1026ebcab; -[_TtC26MapActionBarViewController18MapActionBarButton touchesEnded:withEvent:] */

void FUN_1026ebc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = &UNK_11053cb78;
  ppuVar6 = &puStack_a0;
  uVar1 = 0;
  func_0x0001026ebee8(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar1,uVar2);
  uVar2 = uVar3;
  FUN_1026eba4c();
  uStack_70 = param_1;
  uStack_68 = uVar2;
  func_0x000107c61154(&uStack_70,PTR_s_touchesEnded_withEvent__11267b788,uVar3,param_4);
  func_0x000107c61170(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(&UNK_11053cb78,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  uStack_80 = 0x1026ebfac;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11053cb90;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c3dccc(0x3fd0000000000000,puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1026ebcac; end: 1026ebe2f;  */

void FUN_1026ebcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_a0;
  uVar2 = 0;
  func_0x0001026ebee8(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  uVar3 = uVar4;
  FUN_1026eba4c();
  uStack_70 = param_1;
  uStack_68 = uVar3;
  func_0x000107c61154(&uStack_70,*param_5,uVar4,param_4);
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(param_6,0x18,7);
  *(undefined8 *)(param_6 + 0x10) = param_1;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  uStack_88 = param_8;
  uStack_80 = param_7;
  lStack_78 = param_6;
  func_0x000107c60bc4(&puStack_a0);
  lVar1 = lStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c3dccc(0x3fd0000000000000,puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1026ebe30; end: 1026ebe53; -[_TtC26MapActionBarViewController18MapActionBarButton touchesCancelled:withEvent:] */

void FUN_1026ebe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = &UNK_11053cb28;
  ppuVar6 = &puStack_a0;
  uVar1 = 0;
  func_0x0001026ebee8(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5fe08(param_3,uVar1,uVar2);
  uVar2 = uVar3;
  FUN_1026eba4c();
  uStack_70 = param_1;
  uStack_68 = uVar2;
  func_0x000107c61154(&uStack_70,PTR_s_touchesCancelled_withEvent__112526c90,uVar3,param_4);
  func_0x000107c61170(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(&UNK_11053cb28,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  uStack_80 = 0x1026ebfa8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11053cb40;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c3dccc(0x3fd0000000000000,puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1026ebe54; end: 1026ebeaf; -[_TtC26MapActionBarViewController18MapActionBarButton initWithFrame:] */

void FUN_1026ebe54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapActionBarViewController.MapActionBarButton",0x2d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ebe80);
  (*pcVar1)();
}



/* Entry: 1026ebeb0; end: 1026ebf27; -[_TtC26MapActionBarViewController18MapActionBarButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026ebecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ebed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ebeb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb8b00));
  return;
}



/* Entry: 1026ebf28; end: 1026ebf4f;  */

void FUN_1026ebf28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6088c(auStack_50,0x3fe999999999999a,0x3fe999999999999a);
  func_0x000107c5a03c(uVar1,param_2,auStack_50);
  return;
}



/* Entry: 1026ebf50; end: 1026ebf8b;  */

void FUN_1026ebf50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 1026ebf8c; end: 1026ebfaf;  */

void FUN_1026ebf8c(long param_1,long param_2)

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



/* Entry: 1026ebfb0; end: 1026ec03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026ebfb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  FUN_1026eb76c(0);
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x000107c615f0();
  FUN_1026eb11c();
  *(undefined8 *)(unaff_x20 + _DAT_112eb8b38) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 1026ec040; end: 1026ec0cf; -[_TtC26MapActionBarViewController26MapActionBarViewController initWithDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026ec040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar1 = param_1;
  func_0x000107c614f0();
  FUN_1026eb76c(0);
  func_0x000107c610f8();
  uVar2 = param_3;
  func_0x000107c615f4(param_3,2);
  FUN_1026eb11c();
  *(undefined8 *)(param_1 + _DAT_112eb8b38) = uVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 1026ec0d0; end: 1026ec127; -[_TtC26MapActionBarViewController26MapActionBarViewController initWithCoder:] */

void FUN_1026ec0d0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapActionBarViewController/MapActionBarViewController.swift",0x3b,2,0x12,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec128);
  (*pcVar1)();
}



/* Entry: 1026ec128; end: 1026ec42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec128(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar8 = *(long *)(unaff_x20 + _DAT_112eb8b38);
  func_0x000107c550d8(lVar8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec41c);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = lVar8;
  func_0x000107c5a050();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = lVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec420);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40284(0x4018000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x20) = lVar4;
  lVar3 = lVar8;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec424);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40284(0xc018000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x28) = lVar4;
  lVar3 = lVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c40284(0x4018000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x30) = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      lVar4 = lVar8;
      func_0x000107c40284(0xc018000000000000);
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar3);
      *(long *)(lVar2 + 0x38) = lVar4;
      uVar7 = 0;
      func_0x0001026ec750(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar8 = lVar2;
      func_0x000107c5fc48(lVar2,uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec42c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec428);
  (*pcVar1)();
}



/* Entry: 1026ec42c; end: 1026ec453; -[_TtC26MapActionBarViewController26MapActionBarViewController viewDidLoad] */

void FUN_1026ec42c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026ec128();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026ec454; end: 1026ec4b3; -[_TtC26MapActionBarViewController26MapActionBarViewController initWithNibName:bundle:] */

void FUN_1026ec454(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapActionBarViewController.MapActionBarViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec480);
  (*pcVar1)();
}



/* Entry: 1026ec4b4; end: 1026ec4c3; -[_TtC26MapActionBarViewController26MapActionBarViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb8b38));
  return;
}



/* Entry: 1026ec4c4; end: 1026ec4cf; -[_TtC26MapActionBarViewController26MapActionBarViewController estimatedHeight] */

undefined8 FUN_1026ec4c4(void)

{
  return 0x4048000000000000;
}



/* Entry: 1026ec4d0; end: 1026ec727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec4d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112eb8b38);
  func_0x000107c550d8(lVar10,param_2,0);
  uVar3 = *(ulong *)(lVar10 + _DAT_112eb8ac8);
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x0001026ec750(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = uVar3;
  func_0x000107c5fc54(uVar3,uVar4);
  func_0x000107c61170(uVar3);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar11 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026ec6dc);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar11;
        func_0x000100f040d0(uVar11,uVar5);
      }
      uVar1 = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026ec6d8);
        (*pcVar2)();
      }
      func_0x000107c6088c(&puStack_c0,0x3f847ae147ae147b,0x3f847ae147ae147b);
      func_0x000107c5a03c(uVar6);
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar8 = &UNK_11053cc18;
      func_0x000107c613fc(&UNK_11053cc18,0x18,7);
      *(ulong *)(puVar8 + 0x10) = uVar6;
      pcStack_a0 = FUN_1026ec790;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_11053cc30;
      ppuVar9 = &puStack_c0;
      puStack_98 = puVar8;
      func_0x000107c60bc4(&puStack_c0);
      puVar8 = puStack_98;
      func_0x000107c61174(uVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c3dcd8(0x3fc3333333333333,(double)(long)uVar11 * 0.1 + 0.25,0x4014000000000000,
                          0x4024000000000000,puVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c60bd0(ppuVar9);
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar3);
  }
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 1026ec728; end: 1026ec78f; -[_TtC26MapActionBarViewController26MapActionBarViewController handleTrayWillMoveToInitialPosition] */

void FUN_1026ec728(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026ec4d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026ec790; end: 1026ec7b3;  */

void FUN_1026ec790(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 1026ec7b4; end: 1026ec7d3;  */

void FUN_1026ec7b4(void)

{
  func_0x000107c61168(&PTR_PTR_11285bc78);
  return;
}



/* Entry: 1026ec7d4; end: 1026ec7f3; -[_TtC26MapSDKDataBridgingServices33MapSDKDataBridgingFactoryServices bridgeBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec7d4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb8b68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026ec7f4; end: 1026ec88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec7f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb8b68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026ec88c; end: 1026ec8eb; -[_TtC26MapSDKDataBridgingServices33MapSDKDataBridgingFactoryServices init] */

void FUN_1026ec88c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSDKDataBridgingServices.MapSDKDataBridgingFactoryServices",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec8b8);
  (*pcVar1)();
}



/* Entry: 1026ec8ec; end: 1026ec8fb; -[_TtC26MapSDKDataBridgingServices33MapSDKDataBridgingFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb8b68));
  return;
}



/* Entry: 1026ec8fc; end: 1026ec91b;  */

void FUN_1026ec8fc(void)

{
  func_0x000107c61168(&PTR_PTR_11285bd38);
  return;
}



/* Entry: 1026ec91c; end: 1026ec92b; -[_TtC34SCMapViewportItemsRegistryServices34SCMapViewportItemsRegistryServices mapViewportItemDestinationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec91c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb8b98));
  return;
}



/* Entry: 1026ec92c; end: 1026ec977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec92c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb8b98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026ec978; end: 1026ec9cf; -[_TtC34SCMapViewportItemsRegistryServices34SCMapViewportItemsRegistryServices initWithMapViewportItemDestinationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ec978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb8b98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1026ec9d0; end: 1026eca2f; -[_TtC34SCMapViewportItemsRegistryServices34SCMapViewportItemsRegistryServices init] */

void FUN_1026ec9d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapViewportItemsRegistryServices.SCMapViewportItemsRegistryServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ec9fc);
  (*pcVar1)();
}



/* Entry: 1026eca30; end: 1026eca3f; -[_TtC34SCMapViewportItemsRegistryServices34SCMapViewportItemsRegistryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eca30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb8b98));
  return;
}



/* Entry: 1026eca40; end: 1026eca5f;  */

void FUN_1026eca40(void)

{
  func_0x000107c61168(&PTR_PTR_11285bdf8);
  return;
}



/* Entry: 1026eca60; end: 1026ecc53;  */

undefined *
FUN_1026eca60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  
  puVar2 = PTR_PTR_1126ba8f8;
  func_0x000107c610f8(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  func_0x000107c610f8(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  puVar5 = puVar3;
  func_0x000107c545cc();
  uVar9 = (uint)puVar5;
  puVar5 = PTR_PTR_1126dc3a0;
  func_0x000107c610f8(PTR_PTR_1126dc3a0);
  func_0x000107c453e4();
  func_0x000103ee34e0(param_1,param_2);
  if ((uVar9 & 0xff) != 1) {
    puVar6 = PTR_PTR_1126afad0;
    func_0x000107c610f8(PTR_PTR_1126afad0);
    func_0x000107c453e4();
    func_0x000107c55138();
    func_0x000107c5616c(puVar6);
    func_0x000107c573f4(puVar5);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c56954(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c5a0f8(puVar5);
  puVar6 = PTR_PTR_1126b0cc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x000107c453bc();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c57414(puVar8);
      func_0x000107c61170(puVar8);
      puVar7 = PTR_PTR_1126b5b48;
      func_0x000107c61168(PTR_PTR_1126b5b48);
      func_0x000107c40dd0();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ecc54);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ecc50);
  (*pcVar1)();
}



/* Entry: 1026ecc54; end: 1026ecc67;  */

bool FUN_1026ecc54(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026ecc68; end: 1026ecd13;  */

void FUN_1026ecc68(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026ecd14; end: 1026ecd83;  */

undefined8 FUN_1026ecd14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10dacfea8;
  func_0x000107c614e0(&UNK_10dacfea8);
  puVar2 = &UNK_10dacfed0;
  func_0x000107c614e0(&UNK_10dacfed0);
  func_0x000107c5f20c(&uStack_38);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_38;
}



/* Entry: 1026ecd84; end: 1026ecdbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ecd84(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112eb8bf0;
  lVar2 = 0x112eb8d70;
  func_0x0001000285a8(0x112eb8d70,&UNK_10dacfea0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026ecdbc; end: 1026ece47;  */

void FUN_1026ecdbc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = 0x112eb8c30;
  lVar1 = 0x13f;
  FUN_1026f8a0c(0x13f,0x112eb8c30,0x112eb8c38,&UNK_10dacfe08,PTR___s7Combine9PublishedVMa_11034ae80)
  ;
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 1026ece48; end: 1026eceb7;  */

undefined1 FUN_1026ece48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10dacfef0;
  func_0x000107c614e0(&UNK_10dacfef0);
  puVar2 = &UNK_10dacff18;
  func_0x000107c614e0(&UNK_10dacff18);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 1026eceb8; end: 1026eced3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026eceb8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112eb8cb8;
  lVar2 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026eced4; end: 1026ecf1f;  */

void FUN_1026eced4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(unaff_x20 + lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026ecf20; end: 1026ecf3b;  */

void FUN_1026ecf20(void)

{
  if (lRam0000000112eb8ce8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6eed74);
  return;
}



/* Entry: 1026ecf3c; end: 1026ecfa7;  */

void FUN_1026ecf3c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000100f8b92c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 1026ecfa8; end: 1026ecfbf;  */

undefined * FUN_1026ecfa8(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 1026ecfc0; end: 1026ed283;  */

void FUN_1026ecfc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_800 [288];
  undefined1 auStack_6e0 [272];
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [272];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [272];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_4e8 = unaff_x20[0x19];
  uStack_4f0 = unaff_x20[0x18];
  uStack_4d8 = unaff_x20[0x1b];
  uStack_4e0 = unaff_x20[0x1a];
  uStack_4c8 = unaff_x20[0x1d];
  uStack_4d0 = unaff_x20[0x1c];
  uStack_4b8 = unaff_x20[0x1f];
  uStack_4c0 = unaff_x20[0x1e];
  uStack_528 = unaff_x20[0x11];
  uStack_530 = unaff_x20[0x10];
  uStack_518 = unaff_x20[0x13];
  uStack_520 = unaff_x20[0x12];
  uStack_508 = unaff_x20[0x15];
  uStack_510 = unaff_x20[0x14];
  uStack_4f8 = unaff_x20[0x17];
  uStack_500 = unaff_x20[0x16];
  uStack_568 = unaff_x20[9];
  uStack_570 = unaff_x20[8];
  uStack_558 = unaff_x20[0xb];
  uStack_560 = unaff_x20[10];
  uStack_548 = unaff_x20[0xd];
  uStack_550 = unaff_x20[0xc];
  uStack_538 = unaff_x20[0xf];
  uStack_540 = unaff_x20[0xe];
  uStack_5a8 = unaff_x20[1];
  uStack_5b0 = *unaff_x20;
  uStack_598 = unaff_x20[3];
  uStack_5a0 = unaff_x20[2];
  uStack_588 = unaff_x20[5];
  uStack_590 = unaff_x20[4];
  uStack_578 = unaff_x20[7];
  uStack_580 = unaff_x20[6];
  uVar4 = unaff_x20[0x21];
  uStack_5c0 = unaff_x20[0x20];
  uVar1 = 0;
  uStack_5b8 = uVar4;
  func_0x0001026ecda8();
  uVar2 = 0x112eb8d80;
  func_0x0001026f73b0(0x112eb8d80,0x1026ecda8,&UNK_10dacfe60);
  func_0x000107c5f1e4(uVar1,uVar2);
  uStack_3e8 = unaff_x20[0x19];
  uStack_3f0 = unaff_x20[0x18];
  uStack_2c8 = unaff_x20[0x1b];
  uStack_2d0 = unaff_x20[0x1a];
  uStack_3f8 = unaff_x20[0x17];
  uStack_400 = unaff_x20[0x16];
  uStack_2d8 = unaff_x20[0x19];
  uStack_2e0 = unaff_x20[0x18];
  uStack_3d8 = unaff_x20[0x1b];
  uStack_3e0 = unaff_x20[0x1a];
  uStack_2b8 = unaff_x20[0x1d];
  uStack_2c0 = unaff_x20[0x1c];
  uStack_3c8 = unaff_x20[0x1d];
  uStack_3d0 = unaff_x20[0x1c];
  uStack_2a8 = unaff_x20[0x1f];
  uStack_2b0 = unaff_x20[0x1e];
  uStack_428 = unaff_x20[0x11];
  uStack_430 = unaff_x20[0x10];
  uStack_308 = unaff_x20[0x13];
  uStack_310 = unaff_x20[0x12];
  uStack_438 = unaff_x20[0xf];
  uStack_440 = unaff_x20[0xe];
  uStack_318 = unaff_x20[0x11];
  uStack_320 = unaff_x20[0x10];
  uStack_418 = unaff_x20[0x13];
  uStack_420 = unaff_x20[0x12];
  uStack_2f8 = unaff_x20[0x15];
  uStack_300 = unaff_x20[0x14];
  uStack_408 = unaff_x20[0x15];
  uStack_410 = unaff_x20[0x14];
  uStack_2e8 = unaff_x20[0x17];
  uStack_2f0 = unaff_x20[0x16];
  uStack_468 = unaff_x20[9];
  uStack_470 = unaff_x20[8];
  uStack_348 = unaff_x20[0xb];
  uStack_350 = unaff_x20[10];
  uStack_478 = unaff_x20[7];
  uStack_480 = unaff_x20[6];
  uStack_358 = unaff_x20[9];
  uStack_360 = unaff_x20[8];
  uStack_458 = unaff_x20[0xb];
  uStack_460 = unaff_x20[10];
  uStack_338 = unaff_x20[0xd];
  uStack_340 = unaff_x20[0xc];
  uStack_448 = unaff_x20[0xd];
  uStack_450 = unaff_x20[0xc];
  uStack_328 = unaff_x20[0xf];
  uStack_330 = unaff_x20[0xe];
  uStack_398 = unaff_x20[1];
  uStack_3a0 = *unaff_x20;
  uStack_388 = unaff_x20[3];
  uStack_390 = unaff_x20[2];
  uStack_378 = unaff_x20[5];
  uStack_380 = unaff_x20[4];
  uStack_368 = unaff_x20[7];
  uStack_370 = unaff_x20[6];
  uStack_4a8 = unaff_x20[1];
  uStack_4b0 = *unaff_x20;
  uStack_498 = unaff_x20[3];
  uStack_4a0 = unaff_x20[2];
  uStack_488 = unaff_x20[5];
  uStack_490 = unaff_x20[4];
  uVar5 = unaff_x20[0x23];
  uStack_5d0 = unaff_x20[0x22];
  uStack_3b8 = unaff_x20[0x1f];
  uStack_3c0 = unaff_x20[0x1e];
  uVar3 = 0;
  uStack_5c8 = uVar5;
  uStack_3b0 = uVar1;
  uStack_3a8 = uVar4;
  func_0x0001026ecf28();
  func_0x0001026f737c(&uStack_5b0,auStack_170);
  func_0x0001026f9b24(&uStack_5c0,auStack_170,0x112eb8d88,&UNK_10dad0090);
  uVar2 = 0x112eb8d90;
  func_0x0001026f73b0(0x112eb8d90,0x1026ecf28,&UNK_10dacfe28);
  func_0x000107c5f1e4(uVar3,uVar2);
  func_0x000107c610b4(auStack_6e0,&uStack_4b0,0x110);
  uStack_2a0 = uVar1;
  uStack_298 = uVar4;
  func_0x0001026f9b24(&uStack_4b0,auStack_170,0x112eb8d98,&UNK_10dad0098);
  func_0x0001026f9b24(&uStack_5d0,auStack_170,0x112eb8da0,&UNK_10dad00a0);
  func_0x0001026f9b6c(&uStack_3a0,0x112eb8d98,&UNK_10dad0098);
  func_0x000107c610b4(auStack_290,auStack_6e0,0x110);
  uStack_180 = uVar3;
  uStack_178 = uVar5;
  func_0x000107c610b4(auStack_170,auStack_6e0,0x110);
  uStack_60 = uVar3;
  uStack_58 = uVar5;
  func_0x0001026f9b24(auStack_290,auStack_800,0x112eb8da8,&UNK_10dad00a8);
  func_0x0001026f9b6c(auStack_170,0x112eb8da8,&UNK_10dad00a8);
  func_0x000107c610b4(param_1,auStack_290,0x120);
  return;
}



/* Entry: 1026ed284; end: 1026ed287;  */

void FUN_1026ed284(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_800 [288];
  undefined1 auStack_6e0 [272];
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [272];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [272];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_4e8 = unaff_x20[0x19];
  uStack_4f0 = unaff_x20[0x18];
  uStack_4d8 = unaff_x20[0x1b];
  uStack_4e0 = unaff_x20[0x1a];
  uStack_4c8 = unaff_x20[0x1d];
  uStack_4d0 = unaff_x20[0x1c];
  uStack_4b8 = unaff_x20[0x1f];
  uStack_4c0 = unaff_x20[0x1e];
  uStack_528 = unaff_x20[0x11];
  uStack_530 = unaff_x20[0x10];
  uStack_518 = unaff_x20[0x13];
  uStack_520 = unaff_x20[0x12];
  uStack_508 = unaff_x20[0x15];
  uStack_510 = unaff_x20[0x14];
  uStack_4f8 = unaff_x20[0x17];
  uStack_500 = unaff_x20[0x16];
  uStack_568 = unaff_x20[9];
  uStack_570 = unaff_x20[8];
  uStack_558 = unaff_x20[0xb];
  uStack_560 = unaff_x20[10];
  uStack_548 = unaff_x20[0xd];
  uStack_550 = unaff_x20[0xc];
  uStack_538 = unaff_x20[0xf];
  uStack_540 = unaff_x20[0xe];
  uStack_5a8 = unaff_x20[1];
  uStack_5b0 = *unaff_x20;
  uStack_598 = unaff_x20[3];
  uStack_5a0 = unaff_x20[2];
  uStack_588 = unaff_x20[5];
  uStack_590 = unaff_x20[4];
  uStack_578 = unaff_x20[7];
  uStack_580 = unaff_x20[6];
  uVar4 = unaff_x20[0x21];
  uStack_5c0 = unaff_x20[0x20];
  uVar1 = 0;
  uStack_5b8 = uVar4;
  func_0x0001026ecda8();
  uVar2 = 0x112eb8d80;
  func_0x0001026f73b0(0x112eb8d80,0x1026ecda8,&UNK_10dacfe60);
  func_0x000107c5f1e4(uVar1,uVar2);
  uStack_3e8 = unaff_x20[0x19];
  uStack_3f0 = unaff_x20[0x18];
  uStack_2c8 = unaff_x20[0x1b];
  uStack_2d0 = unaff_x20[0x1a];
  uStack_3f8 = unaff_x20[0x17];
  uStack_400 = unaff_x20[0x16];
  uStack_2d8 = unaff_x20[0x19];
  uStack_2e0 = unaff_x20[0x18];
  uStack_3d8 = unaff_x20[0x1b];
  uStack_3e0 = unaff_x20[0x1a];
  uStack_2b8 = unaff_x20[0x1d];
  uStack_2c0 = unaff_x20[0x1c];
  uStack_3c8 = unaff_x20[0x1d];
  uStack_3d0 = unaff_x20[0x1c];
  uStack_2a8 = unaff_x20[0x1f];
  uStack_2b0 = unaff_x20[0x1e];
  uStack_428 = unaff_x20[0x11];
  uStack_430 = unaff_x20[0x10];
  uStack_308 = unaff_x20[0x13];
  uStack_310 = unaff_x20[0x12];
  uStack_438 = unaff_x20[0xf];
  uStack_440 = unaff_x20[0xe];
  uStack_318 = unaff_x20[0x11];
  uStack_320 = unaff_x20[0x10];
  uStack_418 = unaff_x20[0x13];
  uStack_420 = unaff_x20[0x12];
  uStack_2f8 = unaff_x20[0x15];
  uStack_300 = unaff_x20[0x14];
  uStack_408 = unaff_x20[0x15];
  uStack_410 = unaff_x20[0x14];
  uStack_2e8 = unaff_x20[0x17];
  uStack_2f0 = unaff_x20[0x16];
  uStack_468 = unaff_x20[9];
  uStack_470 = unaff_x20[8];
  uStack_348 = unaff_x20[0xb];
  uStack_350 = unaff_x20[10];
  uStack_478 = unaff_x20[7];
  uStack_480 = unaff_x20[6];
  uStack_358 = unaff_x20[9];
  uStack_360 = unaff_x20[8];
  uStack_458 = unaff_x20[0xb];
  uStack_460 = unaff_x20[10];
  uStack_338 = unaff_x20[0xd];
  uStack_340 = unaff_x20[0xc];
  uStack_448 = unaff_x20[0xd];
  uStack_450 = unaff_x20[0xc];
  uStack_328 = unaff_x20[0xf];
  uStack_330 = unaff_x20[0xe];
  uStack_398 = unaff_x20[1];
  uStack_3a0 = *unaff_x20;
  uStack_388 = unaff_x20[3];
  uStack_390 = unaff_x20[2];
  uStack_378 = unaff_x20[5];
  uStack_380 = unaff_x20[4];
  uStack_368 = unaff_x20[7];
  uStack_370 = unaff_x20[6];
  uStack_4a8 = unaff_x20[1];
  uStack_4b0 = *unaff_x20;
  uStack_498 = unaff_x20[3];
  uStack_4a0 = unaff_x20[2];
  uStack_488 = unaff_x20[5];
  uStack_490 = unaff_x20[4];
  uVar5 = unaff_x20[0x23];
  uStack_5d0 = unaff_x20[0x22];
  uStack_3b8 = unaff_x20[0x1f];
  uStack_3c0 = unaff_x20[0x1e];
  uVar3 = 0;
  uStack_5c8 = uVar5;
  uStack_3b0 = uVar1;
  uStack_3a8 = uVar4;
  func_0x0001026ecf28();
  func_0x0001026f737c(&uStack_5b0,auStack_170);
  func_0x0001026f9b24(&uStack_5c0,auStack_170,0x112eb8d88,&UNK_10dad0090);
  uVar2 = 0x112eb8d90;
  func_0x0001026f73b0(0x112eb8d90,0x1026ecf28,&UNK_10dacfe28);
  func_0x000107c5f1e4(uVar3,uVar2);
  func_0x000107c610b4(auStack_6e0,&uStack_4b0,0x110);
  uStack_2a0 = uVar1;
  uStack_298 = uVar4;
  func_0x0001026f9b24(&uStack_4b0,auStack_170,0x112eb8d98,&UNK_10dad0098);
  func_0x0001026f9b24(&uStack_5d0,auStack_170,0x112eb8da0,&UNK_10dad00a0);
  func_0x0001026f9b6c(&uStack_3a0,0x112eb8d98,&UNK_10dad0098);
  func_0x000107c610b4(auStack_290,auStack_6e0,0x110);
  uStack_180 = uVar3;
  uStack_178 = uVar5;
  func_0x000107c610b4(auStack_170,auStack_6e0,0x110);
  uStack_60 = uVar3;
  uStack_58 = uVar5;
  func_0x0001026f9b24(auStack_290,auStack_800,0x112eb8da8,&UNK_10dad00a8);
  func_0x0001026f9b6c(auStack_170,0x112eb8da8,&UNK_10dad00a8);
  func_0x000107c610b4(param_1,auStack_290,0x120);
  return;
}



/* Entry: 1026ed288; end: 1026ee8db;  */

void FUN_1026ed288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong **ppuVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  ulong uVar25;
  double dVar26;
  long lVar27;
  undefined8 uVar28;
  ulong auStack_1c10 [6];
  ulong auStack_1be0 [5];
  long alStack_1bb8 [4];
  uint uStack_1b94;
  long lStack_1b90;
  uint uStack_1b84;
  long *aplStack_1b80 [2];
  long lStack_1b70;
  long lStack_1b68;
  undefined8 uStack_1b60;
  undefined *puStack_1b58;
  long lStack_1b48;
  undefined8 *puStack_1b40;
  undefined8 uStack_1b38;
  undefined *puStack_1b30;
  undefined8 uStack_1b28;
  undefined1 uStack_1b20;
  undefined7 uStack_1b1f;
  undefined8 uStack_1b18;
  undefined1 uStack_1b10;
  undefined7 uStack_1b0f;
  ulong uStack_1b08;
  undefined8 uStack_1b00;
  undefined8 uStack_1af8;
  undefined8 uStack_1af0;
  undefined1 auStack_1ae8 [320];
  undefined8 uStack_19a8;
  undefined *puStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  ulong uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  undefined1 uStack_1958;
  undefined8 uStack_1950;
  undefined *puStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  ulong uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined1 uStack_1900;
  undefined8 uStack_1810;
  undefined *puStack_1808;
  undefined8 uStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  ulong uStack_17e0;
  undefined8 uStack_17d8;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined1 uStack_17c0;
  undefined8 uStack_17b0;
  undefined *puStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  ulong uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  ulong uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined1 auStack_1670 [280];
  undefined8 uStack_1558;
  undefined1 auStack_1550 [280];
  undefined8 uStack_1438;
  undefined1 auStack_1430 [288];
  undefined8 uStack_1310;
  undefined1 uStack_1308;
  undefined1 auStack_1300 [288];
  undefined8 uStack_11e0;
  undefined1 uStack_11d8;
  ulong *puStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  ulong uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  ulong uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined1 *puStack_10a0;
  undefined1 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  ulong uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  ulong uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined1 *puStack_f60;
  undefined1 uStack_f58;
  ulong *puStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  ulong uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  ulong uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  ulong uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  ulong *puStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  ulong uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  ulong uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  ulong uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  ulong *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  ulong uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  ulong uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  ulong uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  ulong *puStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  ulong uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  ulong uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  ulong uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  ulong *puStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  ulong uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  ulong uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  ulong uStack_a58;
  undefined1 uStack_a50;
  undefined7 uStack_a4f;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined1 auStack_a18 [280];
  undefined1 auStack_900 [288];
  undefined1 auStack_7e0 [304];
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  ulong uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  ulong uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  ulong uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  ulong *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  ulong uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined1 uStack_3a0;
  ulong *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined1 uStack_2d0;
  long lStack_2c0;
  byte bStack_2b8;
  long lStack_2b0;
  byte bStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = 0x112eb8dc8;
  aplStack_1b80[0] = extraout_x8;
  func_0x0001000285a8(0x112eb8dc8,&UNK_10dad00c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar27 + -8) + 0x40));
  lVar27 = (long)auStack_1be0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_1b68 = lVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (ulong *)(lVar27 - extraout_x12);
  lVar27 = 0x112eb8dd0;
  puVar14 = &UNK_10dad00d0;
  func_0x0001000285a8(0x112eb8dd0,&UNK_10dad00d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar27 + -8) + 0x40));
  lVar17 = (long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_1b48 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = (undefined8 *)(lVar17 - extraout_x12_00);
  func_0x000107c5f6cc();
  uVar18 = *(undefined8 *)(param_5 + 0xf8);
  lStack_1b70 = lVar27;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&lStack_2c0,0,1,uVar18,0,lVar27,puVar14);
  uStack_1b84 = (uint)bStack_2b8;
  lStack_1b90 = lStack_2b0;
  uStack_1b94 = (uint)bStack_2a8;
  alStack_1bb8[3] = lStack_2a0;
  alStack_1bb8[1] = lStack_2c0;
  alStack_1bb8[2] = lStack_298;
  uStack_b0 = *(undefined8 *)(param_5 + 0xd0);
  uStack_a8 = *(undefined8 *)(param_5 + 0xd8);
  uStack_1090 = *(undefined8 *)(param_5 + 0xd0);
  uStack_1088 = *(undefined8 *)(param_5 + 0xd8);
  uVar7 = 0x112eb8db0;
  func_0x0001000285a8(0x112eb8db0,&UNK_10dad00b0);
  func_0x000107c5f72c(&puStack_11d0);
  puVar10 = puVar19;
  uStack_1b60 = uVar18;
  puStack_1b40 = puVar19;
  if ((char)puStack_11d0 == '\x03') {
    lVar27 = 0x112eb8e00;
    func_0x0001000285a8(0x112eb8e00,&UNK_10dad0108);
    (**(code **)(*(long *)(lVar27 + -8) + 0x38))(puVar19,1,1,lVar27);
  }
  else {
    lVar27 = 0;
    func_0x000107c5f37c();
    iVar3 = *(int *)(lVar27 + 0x14);
    uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
    lVar27 = 0;
    func_0x000107c5f41c();
    (**(code **)(*(long *)(lVar27 + -8) + 0x68))((long)puVar19 + (long)iVar3,uVar2,lVar27);
    auVar24 = NEON_fmov(0x4036000000000000,8);
    puVar19[1] = auVar24._8_8_;
    *puVar19 = auVar24._0_8_;
    uVar18 = 0x29;
    FUN_1026ff7d0();
    lVar27 = 0x112d50058;
    func_0x0001000285a8(0x112d50058,&UNK_10d916410);
    *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar27 + 0x34)) = uVar18;
    *(undefined2 *)((long)puVar19 + (long)*(int *)(lVar27 + 0x38)) = 0x100;
    func_0x000107c5f6c8();
    lVar17 = lVar27;
    func_0x000107c5f6d4(0x3fc47ae147ae147b);
    func_0x000107c61574(lVar27);
    lVar27 = 0x112eb8dd8;
    func_0x0001000285a8(0x112eb8dd8,&UNK_10dad00e0);
    plVar8 = (long *)((long)puVar19 + (long)*(int *)(lVar27 + 0x24));
    *plVar8 = lVar17;
    plVar8[2] = 0;
    plVar8[1] = 0x4026000000000000;
    plVar8[3] = 0x4018000000000000;
    func_0x000107c5f6c8();
    lVar17 = lVar27;
    func_0x000107c5f6d4(0x3faeb851eb851eb8);
    func_0x000107c61574(lVar27);
    lVar27 = 0x112eb8de0;
    puVar14 = &UNK_10dad00e8;
    func_0x0001000285a8(0x112eb8de0,&UNK_10dad00e8);
    plVar8 = (long *)((long)puVar19 + (long)*(int *)(lVar27 + 0x24));
    *plVar8 = lVar17;
    plVar8[2] = 0;
    plVar8[1] = 0x3ff8000000000000;
    plVar8[3] = 0x3ff0000000000000;
    func_0x000107c5f7ac();
    func_0x000107c5f2d4(&uStack_290,0,1,uStack_1b60,0,lVar27,puVar14);
    plVar8 = (long *)0x112eb8de8;
    puVar14 = &UNK_10dad00f0;
    func_0x0001000285a8();
    puVar1 = (undefined8 *)((long)puVar19 + (long)*(int *)((long)plVar8 + 0x24));
    puVar1[1] = uStack_288;
    *puVar1 = uStack_290;
    puVar1[3] = uStack_278;
    puVar1[2] = uStack_280;
    puVar1[5] = uStack_268;
    puVar1[4] = uStack_270;
    FUN_1026ee8dc();
    auStack_1be0[4] = uVar7;
    if (((ulong)plVar8 & 1) == 0) {
      func_0x000107c5f7ac();
      dVar26 = INFINITY;
    }
    else {
      dVar26 = *(double *)(param_5 + 0xf0);
      func_0x000107c5f7ac();
      if (NAN(dVar26)) {
        aplStack_1b80[1] = plVar8;
        func_0x000107c5ff78();
        uVar7 = (ulong)plVar8;
        func_0x000107c5f558();
        func_0x000107c5f124(plVar8,0x100000000,uVar7,"Contradictory frame constraints specified.",
                            0x2a,2,PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000107c61170(uVar7);
        plVar8 = aplStack_1b80[1];
        puVar10 = puStack_1b40;
      }
    }
    puVar19[-2] = plVar8;
    puVar19[-1] = puVar14;
    *(undefined1 *)(puVar19 + -3) = 1;
    puVar19[-4] = 0;
    *(undefined1 *)(puVar19 + -5) = 1;
    puVar19[-6] = 0;
    func_0x000107c5f388(&uStack_260,0,1,0,1,dVar26,0,0,1);
    lVar27 = 0x112eb8df0;
    func_0x0001000285a8(0x112eb8df0,&UNK_10dad00f8);
    puVar1 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar27 + 0x24));
    puVar1[9] = uStack_218;
    puVar1[8] = uStack_220;
    puVar1[0xb] = uStack_208;
    puVar1[10] = uStack_210;
    puVar1[0xd] = uStack_1f8;
    puVar1[0xc] = uStack_200;
    puVar1[1] = uStack_258;
    *puVar1 = uStack_260;
    puVar1[3] = uStack_248;
    puVar1[2] = uStack_250;
    puVar1[5] = uStack_238;
    puVar1[4] = uStack_240;
    puVar1[7] = uStack_228;
    puVar1[6] = uStack_230;
    param_3 = 0x3fd3333333333333;
    param_4 = 0x3ff0000000000000;
    func_0x000107c5f7b8(0x3fe3333333333333,0,0x3fd3333333333333,0x3ff0000000000000,
                        0x3fd6666666666666);
    lVar9 = lVar27;
    FUN_1026ee8dc();
    lVar17 = 0x112eb8df8;
    puVar14 = &UNK_10dad0100;
    func_0x0001000285a8();
    plVar8 = (long *)((long)puVar10 + (long)*(int *)(lVar17 + 0x24));
    *plVar8 = lVar27;
    *(byte *)(plVar8 + 1) = (byte)lVar9 & 1;
    func_0x000107c5f7b0();
    puVar19[-2] = lVar17;
    puVar19[-1] = puVar14;
    *(undefined1 *)(puVar19 + -3) = 1;
    puVar19[-4] = 0;
    *(undefined1 *)(puVar19 + -5) = 1;
    puVar19[-6] = 0;
    func_0x000107c5f388(&uStack_1f0,0,1,0,1,0x7ff0000000000000,0,0,1);
    lVar27 = 0x112eb8e00;
    func_0x0001000285a8(0x112eb8e00,&UNK_10dad0108);
    puVar1 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar27 + 0x24));
    puVar1[9] = uStack_1a8;
    puVar1[8] = uStack_1b0;
    puVar1[0xb] = uStack_198;
    puVar1[10] = uStack_1a0;
    puVar1[0xd] = uStack_188;
    puVar1[0xc] = uStack_190;
    puVar1[1] = uStack_1e8;
    *puVar1 = uStack_1f0;
    puVar1[3] = uStack_1d8;
    puVar1[2] = uStack_1e0;
    puVar1[5] = uStack_1c8;
    puVar1[4] = uStack_1d0;
    puVar1[7] = uStack_1b8;
    puVar1[6] = uStack_1c0;
    (**(code **)(*(long *)(lVar27 + -8) + 0x38))(puVar10,0,1,lVar27);
    uVar18 = uStack_1b60;
    uVar7 = auStack_1be0[4];
    param_2 = uStack_1d0;
  }
  FUN_1026ee8dc();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000107c5f410();
    *puVar20 = (ulong)puVar10;
    puVar20[1] = 0x4020000000000000;
    *(undefined1 *)(puVar20 + 2) = 0;
    lVar27 = 0x112eb8e08;
    func_0x0001000285a8(0x112eb8e08,&UNK_10dad0110);
    lVar17 = param_5;
    FUN_1026ee96c((long)puVar20 + (long)*(int *)(lVar27 + 0x2c));
    uVar6 = (undefined1)lVar17;
    func_0x000107c5f578();
    uVar21 = func_0x000107c5f280(0x4050000000000000);
    lVar27 = 0x112eb8e10;
    uVar22 = param_2;
    uVar23 = param_3;
    uVar28 = param_4;
    func_0x0001000285a8(0x112eb8e10,&UNK_10dad0118);
    puVar13 = (undefined1 *)((long)puVar20 + (long)*(int *)(lVar27 + 0x24));
    *puVar13 = uVar6;
    *(undefined8 *)(puVar13 + 8) = uVar21;
    *(undefined8 *)(puVar13 + 0x10) = param_2;
    *(undefined8 *)(puVar13 + 0x18) = param_3;
    *(undefined8 *)(puVar13 + 0x20) = param_4;
    puVar13[0x28] = 0;
    func_0x000107c5f580();
    uVar21 = func_0x000107c5f280(0x4020000000000000);
    lVar17 = 0x112eb8e18;
    puVar14 = &UNK_10dad0120;
    func_0x0001000285a8();
    puVar13 = (undefined1 *)((long)puVar20 + (long)*(int *)(lVar17 + 0x24));
    *puVar13 = (char)lVar27;
    *(undefined8 *)(puVar13 + 8) = uVar21;
    *(undefined8 *)(puVar13 + 0x10) = uVar22;
    *(undefined8 *)(puVar13 + 0x18) = uVar23;
    *(undefined8 *)(puVar13 + 0x20) = uVar28;
    puVar13[0x28] = 0;
    func_0x000107c5f7b0();
    puVar19[-2] = lVar17;
    puVar19[-1] = puVar14;
    *(undefined1 *)(puVar19 + -3) = 1;
    puVar19[-4] = 0;
    *(undefined1 *)(puVar19 + -5) = 1;
    puVar19[-6] = 0;
    func_0x000107c5f388(&uStack_180,0,1,0,1,0x7ff0000000000000,0,0,1);
    lVar27 = 0x112eb8e20;
    puVar14 = &UNK_10dad0128;
    func_0x0001000285a8(0x112eb8e20,&UNK_10dad0128);
    puVar10 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar27 + 0x24));
    puVar10[9] = uStack_138;
    puVar10[8] = uStack_140;
    puVar10[0xb] = uStack_128;
    puVar10[10] = uStack_130;
    puVar10[0xd] = uStack_118;
    puVar10[0xc] = uStack_120;
    puVar10[1] = uStack_178;
    *puVar10 = uStack_180;
    puVar10[3] = uStack_168;
    puVar10[2] = uStack_170;
    puVar10[5] = uStack_158;
    puVar10[4] = uStack_160;
    puVar10[7] = uStack_148;
    puVar10[6] = uStack_150;
    func_0x000107c5f7ac();
    func_0x000107c5f2d4(&uStack_110,0,1,uVar18,0,lVar27,puVar14);
    lVar27 = 0x112eb8e28;
    func_0x0001000285a8(0x112eb8e28,&UNK_10dad0130);
    puVar10 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar27 + 0x24));
    puVar10[1] = uStack_108;
    *puVar10 = uStack_110;
    puVar10[3] = uStack_f8;
    puVar10[2] = uStack_100;
    puVar10[5] = uStack_e8;
    puVar10[4] = uStack_f0;
    uStack_1088 = uStack_a8;
    uStack_1090 = uStack_b0;
    func_0x000107c5f72c(&puStack_11d0,uVar7);
    uVar18 = 0x3ff0000000000000;
    if ((char)puStack_11d0 != '\0') {
      uVar18 = 0;
    }
    lVar27 = 0x112eb8e30;
    func_0x0001000285a8(0x112eb8e30,&UNK_10dad0138);
    *(undefined8 *)((long)puVar20 + (long)*(int *)(lVar27 + 0x24)) = uVar18;
    uStack_1088 = uStack_a8;
    uStack_1090 = uStack_b0;
    func_0x000107c5f72c(&puStack_11d0,uVar7);
    uVar18 = 0;
    if ((char)puStack_11d0 != '\0') {
      uVar18 = 0x4030000000000000;
    }
    lVar27 = 0x112eb8e38;
    func_0x0001000285a8(0x112eb8e38,&UNK_10dad0140);
    puVar10 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar27 + 0x24));
    *puVar10 = uVar18;
    puVar10[1] = 0;
    func_0x000107c5f7d0(0x3fd0a3d70a3d70a4);
    uStack_1088 = uStack_a8;
    uStack_1090 = uStack_b0;
    func_0x000107c5f72c(&puStack_11d0,uVar7);
    lVar17 = 0x3ff0000000000000;
    if ((char)puStack_11d0 != '\0') {
      lVar17 = 0;
    }
    lVar9 = 0x112eb8e40;
    func_0x0001000285a8(0x112eb8e40,&UNK_10dad0148);
    plVar8 = (long *)((long)puVar20 + (long)*(int *)(lVar9 + 0x24));
    *plVar8 = lVar27;
    plVar8[1] = lVar17;
    func_0x000107c5f7b8(0x3fd999999999999a,0,0x3fd3333333333333,0x3ff0000000000000,
                        0x3fd3333333333333);
    uStack_1088 = uStack_a8;
    uStack_1090 = uStack_b0;
    func_0x000107c5f72c(&puStack_11d0,uVar7);
    lVar27 = 0;
    if ((char)puStack_11d0 != '\0') {
      lVar27 = 0x4030000000000000;
    }
    lVar17 = 0x112eb8e48;
    func_0x0001000285a8(0x112eb8e48,&UNK_10dad0150);
    plVar8 = (long *)((long)puVar20 + (long)*(int *)(lVar17 + 0x24));
    *plVar8 = lVar9;
    plVar8[1] = lVar27;
    pcVar16 = *(code **)(*(long *)(lVar17 + -8) + 0x38);
    uVar18 = 0;
  }
  else {
    lVar17 = 0x112eb8e48;
    func_0x0001000285a8(0x112eb8e48,&UNK_10dad0150);
    pcVar16 = *(code **)(*(long *)(lVar17 + -8) + 0x38);
    uVar18 = 1;
  }
  puVar11 = puVar20;
  (*pcVar16)(puVar20,uVar18,1,lVar17);
  aplStack_1b80[1] = (long *)puVar20;
  func_0x000107c5f7a0();
  FUN_1026efcf0(&uStack_1090,param_5);
  uStack_630 = uStack_1010;
  uStack_658 = uStack_1038;
  uStack_660 = uStack_1040;
  uStack_648 = uStack_1028;
  uStack_650 = uStack_1030;
  uStack_638 = uStack_1018;
  uStack_640 = uStack_1020;
  uStack_698 = uStack_1078;
  uStack_6a0 = uStack_1080;
  uStack_688 = uStack_1068;
  uStack_690 = uStack_1070;
  uStack_678 = uStack_1058;
  uStack_680 = uStack_1060;
  uStack_668 = uStack_1048;
  uStack_670 = uStack_1050;
  uStack_6a8 = uStack_1088;
  uStack_6b0 = uStack_1090;
  uStack_5c8 = uStack_1038;
  uStack_5d0 = uStack_1040;
  uStack_5b8 = uStack_1028;
  uStack_5c0 = uStack_1030;
  uStack_5a8 = uStack_1018;
  uStack_5b0 = uStack_1020;
  uStack_5a0 = uStack_1010;
  uStack_608 = uStack_1078;
  uStack_610 = uStack_1080;
  uStack_5f8 = uStack_1068;
  uStack_600 = uStack_1070;
  uStack_5e8 = uStack_1058;
  uStack_5f0 = uStack_1060;
  uStack_5d8 = uStack_1048;
  uStack_5e0 = uStack_1050;
  uStack_618 = uStack_1088;
  uStack_620 = uStack_1090;
  func_0x0001026f9b24(&uStack_6b0,&puStack_11d0,0x112eb8e50,&UNK_10dad0158);
  puVar10 = &uStack_620;
  func_0x0001026f9b6c(puVar10,0x112eb8e50,&UNK_10dad0158);
  uVar6 = SUB81(puVar10,0);
  uStack_1748 = uStack_648;
  uStack_1750 = uStack_650;
  uStack_1738 = uStack_638;
  uStack_1740 = uStack_640;
  uStack_1730 = uStack_630;
  uStack_1788 = uStack_688;
  uStack_1790 = uStack_690;
  uStack_1778 = uStack_678;
  uStack_1780 = uStack_680;
  uStack_1768 = uStack_668;
  uStack_1770 = uStack_670;
  uStack_1758 = uStack_658;
  uStack_1760 = uStack_660;
  puStack_17a8 = (undefined *)uStack_6a8;
  uStack_17b0 = uStack_6b0;
  uStack_1798 = uStack_698;
  uStack_17a0 = uStack_6a0;
  func_0x000107c5f578();
  uStack_528 = uStack_1758;
  uStack_530 = uStack_1760;
  uStack_518 = uStack_1748;
  uStack_520 = uStack_1750;
  uStack_508 = uStack_1738;
  uStack_510 = uStack_1740;
  uStack_568 = uStack_1798;
  uStack_570 = uStack_17a0;
  uStack_558 = uStack_1788;
  uStack_560 = uStack_1790;
  uStack_548 = uStack_1778;
  uStack_550 = uStack_1780;
  uStack_538 = uStack_1768;
  uStack_540 = uStack_1770;
  uStack_500 = uStack_1730;
  uStack_578 = puStack_17a8;
  uStack_580 = uStack_17b0;
  uVar23 = uStack_1770;
  uVar28 = uStack_17b0;
  uVar25 = uStack_1780;
  puStack_590 = puVar11;
  uStack_588 = uVar18;
  uVar21 = func_0x000107c5f280(0x4028000000000000);
  uStack_1168 = uStack_528;
  uStack_1170 = uStack_530;
  uStack_1158 = uStack_518;
  uStack_1160 = uStack_520;
  uStack_1148 = uStack_508;
  uStack_1150 = uStack_510;
  uStack_1140 = uStack_500;
  uStack_11a8 = uStack_568;
  uStack_11b0 = uStack_570;
  uStack_1198 = uStack_558;
  uStack_11a0 = uStack_560;
  uStack_1188 = uStack_548;
  uStack_1190 = uStack_550;
  uStack_1178 = uStack_538;
  uStack_1180 = uStack_540;
  uStack_11c8 = uStack_588;
  puStack_11d0 = puStack_590;
  uStack_11b8 = uStack_578;
  uStack_11c0 = uStack_580;
  uStack_480 = uStack_1748;
  uStack_488 = uStack_1750;
  uStack_470 = uStack_1738;
  uStack_478 = uStack_1740;
  uStack_468 = uStack_1730;
  uStack_4c0 = uStack_1788;
  uStack_4c8 = uStack_1790;
  uStack_4b0 = uStack_1778;
  uStack_4b8 = uStack_1780;
  uStack_490 = uStack_1758;
  uStack_498 = uStack_1760;
  uStack_4a0 = uStack_1768;
  uStack_4a8 = uStack_1770;
  uStack_4d0 = uStack_1798;
  uStack_4d8 = uStack_17a0;
  uStack_4e0 = puStack_17a8;
  uStack_4e8 = uStack_17b0;
  uVar22 = 0x112eb8e58;
  puStack_4f8 = puVar11;
  uStack_4f0 = uVar18;
  func_0x0001026f9b24(&puStack_590,&uStack_1090,0x112eb8e58,&UNK_10dad0160);
  ppuVar12 = &puStack_4f8;
  func_0x0001026f9b6c(ppuVar12,0x112eb8e58,&UNK_10dad0160);
  func_0x000107c5f7ac();
  uStack_3f8 = uStack_1168;
  uStack_400 = uStack_1170;
  uStack_3e8 = uStack_1158;
  uStack_3f0 = uStack_1160;
  uStack_3d8 = uStack_1148;
  uStack_3e0 = uStack_1150;
  uStack_3d0 = uStack_1140;
  uStack_438 = uStack_11a8;
  uStack_440 = uStack_11b0;
  uStack_428 = uStack_1198;
  uStack_430 = uStack_11a0;
  uStack_418 = uStack_1188;
  uStack_420 = uStack_1190;
  uStack_408 = uStack_1178;
  uStack_410 = uStack_1180;
  uStack_458 = uStack_11c8;
  puStack_460 = puStack_11d0;
  uStack_448 = uStack_11b8;
  uStack_450 = uStack_11c0;
  uStack_3a0 = 0;
  uStack_3c8 = uVar6;
  uStack_3c0 = uVar21;
  uStack_3b8 = uVar23;
  uStack_3b0 = uVar28;
  uStack_3a8 = uVar25;
  func_0x000107c5f2d4(&uStack_a48,0,1,uStack_1b60,0,ppuVar12,uVar22);
  uStack_a78 = CONCAT71(uStack_3c7,uStack_3c8);
  uStack_a80 = uStack_3d0;
  uStack_a68 = uStack_3b8;
  uStack_a70 = uStack_3c0;
  uStack_a58 = uStack_3a8;
  uStack_a60 = uStack_3b0;
  uStack_ab8 = uStack_408;
  uStack_ac0 = uStack_410;
  uStack_aa8 = uStack_3f8;
  uStack_ab0 = uStack_400;
  uStack_a98 = uStack_3e8;
  uStack_aa0 = uStack_3f0;
  uStack_a88 = uStack_3d8;
  uStack_a90 = uStack_3e0;
  uStack_af8 = uStack_448;
  uStack_b00 = uStack_450;
  uStack_ae8 = uStack_438;
  uStack_af0 = uStack_440;
  uStack_ad8 = uStack_428;
  uStack_ae0 = uStack_430;
  uStack_a50 = uStack_3a0;
  uStack_ac8 = uStack_418;
  uStack_ad0 = uStack_420;
  uStack_b08 = uStack_458;
  puStack_b10 = puStack_460;
  uStack_328 = uStack_1168;
  uStack_330 = uStack_1170;
  uStack_318 = uStack_1158;
  uStack_320 = uStack_1160;
  uStack_308 = uStack_1148;
  uStack_310 = uStack_1150;
  uStack_300 = uStack_1140;
  uStack_368 = uStack_11a8;
  uStack_370 = uStack_11b0;
  uStack_358 = uStack_1198;
  uStack_360 = uStack_11a0;
  uStack_348 = uStack_1188;
  uStack_350 = uStack_1190;
  uStack_338 = uStack_1178;
  uStack_340 = uStack_1180;
  uStack_388 = uStack_11c8;
  puStack_390 = puStack_11d0;
  uStack_378 = uStack_11b8;
  uStack_380 = uStack_11c0;
  uStack_2d0 = 0;
  uVar18 = uStack_11c0;
  uStack_2f8 = uVar6;
  uStack_2f0 = uVar21;
  uStack_2e8 = uVar23;
  uStack_2e0 = uVar28;
  uStack_2d8 = uVar25;
  func_0x0001026f9b24(&puStack_460,&uStack_1090,0x112eb8e60,&UNK_10dad0168);
  func_0x0001026f9b6c(&puStack_390,0x112eb8e60,&UNK_10dad0168);
  uStack_1088 = uStack_a8;
  uStack_1090 = uStack_b0;
  func_0x000107c5f72c(&puStack_11d0,uVar7);
  uVar22 = 0x3fd999999999999a;
  if ((char)puStack_11d0 != '\x03') {
    uVar22 = 0x3ff0000000000000;
  }
  uVar23 = func_0x000107c5f7e4();
  uStack_c20 = uStack_a20;
  uStack_c50 = CONCAT71(uStack_a4f,uStack_a50);
  uStack_c48 = uStack_a48;
  uStack_c38 = uStack_a38;
  uStack_c40 = uStack_a40;
  uStack_c28 = uStack_a28;
  uStack_c30 = uStack_a30;
  uStack_c88 = uStack_a88;
  uStack_c90 = uStack_a90;
  uStack_c78 = uStack_a78;
  uStack_c80 = uStack_a80;
  uStack_c68 = uStack_a68;
  uStack_c70 = uStack_a70;
  uStack_c58 = uStack_a58;
  uStack_c60 = uStack_a60;
  uStack_cc8 = uStack_ac8;
  uStack_cd0 = uStack_ad0;
  uStack_cb8 = uStack_ab8;
  uStack_cc0 = uStack_ac0;
  uStack_ca8 = uStack_aa8;
  uStack_cb0 = uStack_ab0;
  uStack_c98 = uStack_a98;
  uStack_ca0 = uStack_aa0;
  uStack_d08 = uStack_b08;
  puStack_d10 = puStack_b10;
  uStack_cf8 = uStack_af8;
  uStack_d00 = uStack_b00;
  uStack_ce8 = uStack_ae8;
  uStack_cf0 = uStack_af0;
  uStack_cd8 = uStack_ad8;
  uStack_ce0 = uStack_ae0;
  uStack_b50 = CONCAT71(uStack_a4f,uStack_a50);
  uStack_b48 = uStack_a48;
  uStack_b38 = uStack_a38;
  uStack_b40 = uStack_a40;
  uStack_b28 = uStack_a28;
  uStack_b30 = uStack_a30;
  uStack_b20 = uStack_a20;
  uStack_b88 = uStack_a88;
  uStack_b90 = uStack_a90;
  uStack_b78 = uStack_a78;
  uStack_b80 = uStack_a80;
  uStack_b68 = uStack_a68;
  uStack_b70 = uStack_a70;
  uStack_b58 = uStack_a58;
  uStack_b60 = uStack_a60;
  uStack_bc8 = uStack_ac8;
  uStack_bd0 = uStack_ad0;
  uStack_bb8 = uStack_ab8;
  uStack_bc0 = uStack_ac0;
  uStack_ba8 = uStack_aa8;
  uStack_bb0 = uStack_ab0;
  uStack_b98 = uStack_a98;
  uStack_ba0 = uStack_aa0;
  uStack_c08 = uStack_b08;
  puStack_c10 = puStack_b10;
  uStack_bf8 = uStack_af8;
  uStack_c00 = uStack_b00;
  uStack_be8 = uStack_ae8;
  uStack_bf0 = uStack_af0;
  uStack_bd8 = uStack_ad8;
  uStack_be0 = uStack_ae0;
  func_0x0001026f9b24(&puStack_d10,&uStack_1090,0x112eb8e68,&UNK_10dad0170);
  func_0x0001026f9b6c(&puStack_c10,0x112eb8e68,&UNK_10dad0170);
  uStack_1088 = uStack_a8;
  uStack_1090 = uStack_b0;
  func_0x000107c5f72c(&puStack_11d0,uVar7);
  uVar28 = 0;
  if ((char)puStack_11d0 != '\x03') {
    uVar28 = 0x3ff0000000000000;
  }
  uStack_e90 = CONCAT71(uStack_a4f,uStack_a50);
  uStack_e88 = uStack_a48;
  uStack_e78 = uStack_a38;
  uStack_e80 = uStack_a40;
  uStack_e68 = uStack_a28;
  uStack_e70 = uStack_a30;
  uStack_e60 = uStack_a20;
  uStack_ec8 = uStack_a88;
  uStack_ed0 = uStack_a90;
  uStack_eb8 = uStack_a78;
  uStack_ec0 = uStack_a80;
  uStack_ea8 = uStack_a68;
  uStack_eb0 = uStack_a70;
  uStack_e98 = uStack_a58;
  uStack_ea0 = uStack_a60;
  uStack_f08 = uStack_ac8;
  uStack_f10 = uStack_ad0;
  uStack_ef8 = uStack_ab8;
  uStack_f00 = uStack_ac0;
  uStack_ee8 = uStack_aa8;
  uStack_ef0 = uStack_ab0;
  uStack_ed8 = uStack_a98;
  uStack_ee0 = uStack_aa0;
  uStack_f48 = uStack_b08;
  puStack_f50 = puStack_b10;
  uStack_f38 = uStack_af8;
  uStack_f40 = uStack_b00;
  uStack_f28 = uStack_ae8;
  uStack_f30 = uStack_af0;
  uStack_f18 = uStack_ad8;
  uStack_f20 = uStack_ae0;
  uStack_e58 = uVar22;
  uStack_e50 = uVar22;
  uStack_e48 = uVar23;
  uStack_e40 = uVar18;
  func_0x000107c610b4(auStack_a18,&puStack_f50,0x118);
  uStack_d70 = CONCAT71(uStack_a4f,uStack_a50);
  uStack_d68 = uStack_a48;
  uStack_d58 = uStack_a38;
  uStack_d60 = uStack_a40;
  uStack_d48 = uStack_a28;
  uStack_d50 = uStack_a30;
  uStack_d40 = uStack_a20;
  uStack_da8 = uStack_a88;
  uStack_db0 = uStack_a90;
  uStack_d98 = uStack_a78;
  uStack_da0 = uStack_a80;
  uStack_d88 = uStack_a68;
  uStack_d90 = uStack_a70;
  uStack_d78 = uStack_a58;
  uStack_d80 = uStack_a60;
  uStack_de8 = uStack_ac8;
  uStack_df0 = uStack_ad0;
  uStack_dd8 = uStack_ab8;
  uStack_de0 = uStack_ac0;
  uStack_dc8 = uStack_aa8;
  uStack_dd0 = uStack_ab0;
  uStack_db8 = uStack_a98;
  uStack_dc0 = uStack_aa0;
  uStack_e28 = uStack_b08;
  puStack_e30 = puStack_b10;
  uStack_e18 = uStack_af8;
  uStack_e20 = uStack_b00;
  uStack_e08 = uStack_ae8;
  uStack_e10 = uStack_af0;
  uStack_df8 = uStack_ad8;
  uStack_e00 = uStack_ae0;
  uStack_d38 = uVar22;
  uStack_d30 = uVar22;
  uStack_d28 = uVar23;
  uStack_d20 = uVar18;
  func_0x0001026f9b24(&puStack_f50,&uStack_1090,0x112eb8e70,&UNK_10dad0178);
  func_0x0001026f9b6c(&puStack_e30,0x112eb8e70,&UNK_10dad0178);
  uStack_1088 = uStack_a8;
  uStack_1090 = uStack_b0;
  func_0x000107c5f72c(&puStack_11d0,uVar7);
  uStack_11e0 = 0x4000000000000000;
  if ((char)puStack_11d0 != '\x03') {
    uStack_11e0 = 0;
  }
  func_0x000107c610b4(auStack_1670,auStack_a18,0x118);
  uStack_1558 = uVar28;
  func_0x000107c610b4(auStack_900,auStack_1670,0x120);
  func_0x000107c610b4(auStack_1550,auStack_a18,0x118);
  uStack_1438 = uVar28;
  func_0x0001026f9b24(auStack_1670,&uStack_1090,0x112eb8e78,&UNK_10dad0180);
  puVar13 = auStack_1550;
  func_0x0001026f9b6c(puVar13,0x112eb8e78,&UNK_10dad0180);
  func_0x000107c5f7b8(0x3fd3333333333333,0,0x3fc999999999999a,0x3ff0000000000000,0x3fe999999999999a)
  ;
  uStack_1088 = uStack_a8;
  uStack_1090 = uStack_b0;
  func_0x000107c5f72c(&puStack_11d0,uVar7);
  bVar5 = (char)puStack_11d0 == '\x03';
  func_0x000107c610b4(auStack_1430,auStack_900,0x120);
  uStack_1308 = 0;
  uStack_1310 = uStack_11e0;
  func_0x000107c610b4(auStack_7e0,auStack_1430,0x129);
  func_0x000107c610b4(auStack_1300,auStack_900,0x120);
  uStack_11d8 = 0;
  func_0x0001026f9b24(auStack_1430,&uStack_1090,0x112eb8e80,&UNK_10dad0188);
  func_0x0001026f9b6c(auStack_1300,0x112eb8e80,&UNK_10dad0188);
  func_0x000107c610b4(&puStack_11d0,auStack_7e0,0x130);
  puStack_10a0 = puVar13;
  uStack_1098 = bVar5;
  func_0x000107c610b4(&uStack_1090,auStack_7e0,0x130);
  puStack_f60 = puVar13;
  uStack_f58 = bVar5;
  func_0x0001026f9b24(&puStack_11d0,&uStack_17b0,0x112eb8e88,&UNK_10dad0190);
  func_0x0001026f9b6c(&uStack_1090,0x112eb8e88,&UNK_10dad0190);
  uStack_17b0 = *(undefined8 *)(param_5 + 0xe0);
  puStack_17a8 = *(undefined **)(param_5 + 0xe8);
  uVar18 = 0x112d4f580;
  puVar14 = &UNK_10d915430;
  func_0x0001000285a8();
  func_0x000107c5f72c(&uStack_1950);
  if ((char)uStack_1950 == '\x01') {
    FUN_1026f73f0();
    puVar15 = puVar14;
    uStack_1b60 = uVar18;
    func_0x000107c5f7ac();
    func_0x000107c5f2d4(&uStack_e0,0,0,0,0,uVar18,puVar15);
    uStack_17b0 = *(undefined8 *)(param_5 + 0xc0);
    puStack_17a8 = *(undefined **)(param_5 + 200);
    func_0x0001000285a8(0x112eb8ea0,&UNK_10dad01b0);
    func_0x000107c5f72c(&uStack_1950);
    uStack_1b38 = uStack_1b60;
    uStack_1af8 = 0x4041000000000000;
    if ((char)uStack_1950 != '\x01') {
      uStack_1af8 = 0x4040000000000000;
    }
    uStack_1b28 = uStack_e0;
    uStack_1b20 = uStack_d8;
    uStack_1b18 = uStack_d0;
    uStack_1b10 = uStack_c8;
    uStack_1b08 = uStack_c0;
    uStack_1b00 = uStack_b8;
    uStack_1af0 = 0;
    uStack_17f8 = CONCAT71(uStack_1b1f,uStack_d8);
    uStack_17e8 = CONCAT71(uStack_1b0f,uStack_c8);
    uStack_17d8 = uStack_b8;
    uStack_17e0 = uStack_c0;
    uStack_17c8 = 0;
    uStack_1800 = uStack_e0;
    uStack_17f0 = uStack_d0;
    uStack_1810 = uStack_1b60;
    uStack_19a8 = uStack_1b60;
    uStack_1998 = uStack_e0;
    uStack_1990 = CONCAT71(uStack_1990._1_7_,uStack_d8);
    uStack_1988 = uStack_d0;
    uStack_1980 = CONCAT71(uStack_1980._1_7_,uStack_c8);
    uStack_1978 = uStack_c0;
    uStack_1970 = uStack_b8;
    uStack_1960 = 0;
    puStack_1b30 = puVar14;
    puStack_19a0 = puVar14;
    uStack_1968 = uStack_1af8;
    puStack_1808 = puVar14;
    uStack_17d0 = uStack_1af8;
    func_0x0001026f9b24(&uStack_1b38,&uStack_17b0,0x112eb8ea8,&UNK_10dad01b8);
    func_0x0001026f9b6c(&uStack_19a8,0x112eb8ea8,&UNK_10dad01b8);
    uStack_1928 = uStack_17e8;
    uStack_1930 = uStack_17f0;
    uStack_1918 = uStack_17d8;
    uStack_1920 = uStack_17e0;
    uStack_1908 = uStack_17c8;
    uStack_1910 = uStack_17d0;
    puStack_1948 = puStack_1808;
    uStack_1950 = uStack_1810;
    uStack_1938 = uStack_17f8;
    uStack_1940 = uStack_1800;
    uStack_1900 = 0;
    uStack_1788 = uStack_17e8;
    uStack_1790 = uStack_17f0;
    uStack_1778 = uStack_17d8;
    uStack_1780 = uStack_17e0;
    uStack_1768 = uStack_17c8;
    uStack_1770 = uStack_17d0;
    puStack_17a8 = puStack_1808;
    uStack_17b0 = uStack_1810;
    uStack_1798 = uStack_17f8;
    uStack_17a0 = uStack_1800;
    uStack_1760 = uStack_1760 & 0xffffffffffffff00;
    func_0x0001026f9b24(&uStack_1950,auStack_1ae8,0x112eb8eb0,&UNK_10dad01c0);
    func_0x0001026f9b6c(&uStack_17b0,0x112eb8eb0,&UNK_10dad01c0);
    puStack_1b58 = puStack_1948;
    uStack_1b60 = uStack_1950;
    auStack_1be0[1] = uStack_1918;
    auStack_1be0[0] = uStack_1920;
    auStack_1be0[3] = uStack_1928;
    auStack_1be0[2] = uStack_1930;
    alStack_1bb8[0] = uStack_1938;
    auStack_1be0[4] = uStack_1940;
    uVar18 = uStack_1910;
    uVar22 = uStack_1908;
    uStack_1958 = uStack_1900;
  }
  else {
    uVar18 = 0;
    uVar22 = 0;
    uStack_1958 = 0;
    puStack_1b58 = (undefined *)0x0;
    uStack_1b60 = 0;
    auStack_1be0[3] = 0;
    auStack_1be0[2] = 0;
    alStack_1bb8[0] = 0;
    auStack_1be0[4] = 0;
    auStack_1be0[1] = 0;
    auStack_1be0[0] = 0;
  }
  lVar4 = lStack_1b48;
  func_0x0001026f9b24(puStack_1b40,lStack_1b48,0x112eb8dd0,&UNK_10dad00d0);
  lVar9 = lStack_1b68;
  plVar8 = aplStack_1b80[1];
  func_0x0001026f9b24(aplStack_1b80[1],lStack_1b68,0x112eb8dc8,&UNK_10dad00c8);
  func_0x000107c610b4(&uStack_1950,&puStack_11d0,0x139);
  lVar17 = lStack_1b70;
  uStack_1990 = alStack_1bb8[0];
  uStack_1998 = auStack_1be0[4];
  puStack_19a0 = puStack_1b58;
  uStack_19a8 = uStack_1b60;
  uStack_1970 = auStack_1be0[1];
  uStack_1978 = auStack_1be0[0];
  uStack_1980 = auStack_1be0[3];
  uStack_1988 = auStack_1be0[2];
  *aplStack_1b80[0] = lStack_1b70;
  aplStack_1b80[0][1] = alStack_1bb8[1];
  *(char *)(aplStack_1b80[0] + 2) = (char)uStack_1b84;
  aplStack_1b80[0][3] = lStack_1b90;
  *(char *)(aplStack_1b80[0] + 4) = (char)uStack_1b94;
  aplStack_1b80[0][5] = alStack_1bb8[3];
  aplStack_1b80[0][6] = alStack_1bb8[2];
  lVar27 = 0x112eb8e90;
  uStack_1968 = uVar18;
  uStack_1960 = uVar22;
  func_0x0001000285a8(0x112eb8e90,&UNK_10dad01a0);
  func_0x0001026f9b24(lVar4,(long)aplStack_1b80[0] + (long)*(int *)(lVar27 + 0x30),0x112eb8dd0,
                      &UNK_10dad00d0);
  func_0x0001026f9b24(lVar9,(long)aplStack_1b80[0] + (long)*(int *)(lVar27 + 0x40),0x112eb8dc8,
                      &UNK_10dad00c8);
  iVar3 = *(int *)(lVar27 + 0x50);
  func_0x000107c610b4(&uStack_17b0,&uStack_1950,0x139);
  func_0x000107c610b4((long)aplStack_1b80[0] + (long)iVar3,&uStack_1950,0x139);
  puVar10 = (undefined8 *)((long)aplStack_1b80[0] + (long)*(int *)(lVar27 + 0x60));
  uStack_17e8 = uStack_1980;
  uStack_17f0 = uStack_1988;
  uStack_17d8 = uStack_1970;
  uStack_17e0 = uStack_1978;
  uStack_17c8 = uStack_1960;
  uStack_17d0 = uStack_1968;
  uStack_17c0 = uStack_1958;
  puStack_1808 = puStack_19a0;
  uStack_1810 = uStack_19a8;
  uStack_17f8 = uStack_1990;
  uStack_1800 = uStack_1998;
  puVar10[5] = uStack_1980;
  puVar10[4] = uStack_1988;
  puVar10[7] = uStack_1970;
  puVar10[6] = uStack_1978;
  puVar10[9] = uStack_1960;
  puVar10[8] = uStack_1968;
  *(undefined1 *)(puVar10 + 10) = uStack_1958;
  puVar10[1] = puStack_19a0;
  *puVar10 = uStack_19a8;
  puVar10[3] = uStack_1990;
  puVar10[2] = uStack_1998;
  func_0x000107c6157c(lVar17);
  func_0x0001026f9b24(&uStack_17b0,auStack_1ae8,0x112eb8e88,&UNK_10dad0190);
  func_0x0001026f9b24(&uStack_1810,auStack_1ae8,0x112eb8e98,&UNK_10dad01a8);
  func_0x0001026f9b6c(plVar8,0x112eb8dc8,&UNK_10dad00c8);
  func_0x0001026f9b6c(puStack_1b40,0x112eb8dd0,&UNK_10dad00d0);
  func_0x0001026f9b6c(&uStack_19a8,0x112eb8e98,&UNK_10dad01a8);
  func_0x0001026f9b6c(&uStack_1950,0x112eb8e88,&UNK_10dad0190);
  func_0x0001026f9b6c(lVar9,0x112eb8dc8,&UNK_10dad00c8);
  func_0x0001026f9b6c(lStack_1b48,0x112eb8dd0,&UNK_10dad00d0);
  func_0x000107c61574(lVar17);
  return;
}



/* Entry: 1026ee8dc; end: 1026ee96b;  */

bool FUN_1026ee8dc(void)

{
  bool bVar1;
  undefined8 uVar2;
  long unaff_x20;
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar2 = 0x112eb8db0;
  func_0x0001000285a8(0x112eb8db0,&UNK_10dad00b0);
  func_0x000107c5f72c(&cStack_41);
  if (cStack_41 == '\x02') {
    bVar1 = true;
  }
  else {
    uStack_38 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_40 = *(undefined8 *)(unaff_x20 + 0xd0);
    func_0x000107c5f72c(&cStack_41,uVar2);
    bVar1 = cStack_41 == '\x03';
  }
  return bVar1;
}



/* Entry: 1026ee96c; end: 1026eebd7;  */

void FUN_1026ee96c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long alStack_100 [6];
  long alStack_d0 [14];
  
  lVar2 = 0x112eb8ec8;
  func_0x0001000285a8(0x112eb8ec8,&UNK_10dad01e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0x112eb8ed0;
  func_0x0001000285a8(0x112eb8ed0,&UNK_10dad01e8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar8 = (long *)(lVar7 - extraout_x12_00);
  func_0x000107c5f43c();
  *plVar8 = lVar3;
  plVar8[1] = 0;
  *(undefined1 *)(plVar8 + 2) = 0;
  lVar3 = 0x112eb8ed8;
  puVar4 = &UNK_10dad01f0;
  func_0x0001000285a8();
  FUN_1026eebd8((long)plVar8 + (long)*(int *)(lVar3 + 0x2c));
  func_0x000107c5f7b0();
  plVar8[-2] = param_2;
  plVar8[-1] = (long)puVar4;
  *(undefined1 *)(plVar8 + -3) = 1;
  plVar8[-4] = 0;
  *(undefined1 *)(plVar8 + -5) = 1;
  plVar8[-6] = 0;
  func_0x000107c5f388(alStack_d0,0,1,0,1,0x7ff0000000000000,0,0,1);
  plVar1 = (long *)((long)plVar8 + (long)*(int *)(lVar2 + 0x24));
  plVar1[9] = alStack_d0[9];
  plVar1[8] = alStack_d0[8];
  plVar1[0xb] = alStack_d0[0xb];
  plVar1[10] = alStack_d0[10];
  plVar1[0xd] = alStack_d0[0xd];
  plVar1[0xc] = alStack_d0[0xc];
  plVar1[1] = alStack_d0[1];
  *plVar1 = alStack_d0[0];
  plVar1[3] = alStack_d0[3];
  plVar1[2] = alStack_d0[2];
  plVar1[5] = alStack_d0[5];
  plVar1[4] = alStack_d0[4];
  plVar1[7] = alStack_d0[7];
  plVar1[6] = alStack_d0[6];
  FUN_1026ef80c(lVar6);
  func_0x0001026f9b24(plVar8,lVar7,0x112eb8ed0,&UNK_10dad01e8);
  func_0x0001026f9b24(lVar6,lVar5,0x112eb8ec8,&UNK_10dad01e0);
  func_0x0001026f9b24(lVar7,param_1,0x112eb8ed0,&UNK_10dad01e8);
  lVar2 = 0x112eb8ee0;
  func_0x0001000285a8(0x112eb8ee0,&UNK_10dad01f8);
  func_0x0001026f9b24(lVar5,param_1 + *(int *)(lVar2 + 0x30),0x112eb8ec8,&UNK_10dad01e0);
  func_0x0001026f9b6c(lVar6,0x112eb8ec8,&UNK_10dad01e0);
  func_0x0001026f9b6c(plVar8,0x112eb8ed0,&UNK_10dad01e8);
  func_0x0001026f9b6c(lVar5,0x112eb8ec8,&UNK_10dad01e0);
  func_0x0001026f9b6c(lVar7,0x112eb8ed0,&UNK_10dad01e8);
  return;
}



/* Entry: 1026eebd8; end: 1026ef72f;  */

void FUN_1026eebd8(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined7 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong *puVar18;
  undefined7 *puVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar21;
  long extraout_x8_02;
  long lVar22;
  long lVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong auStack_8e0 [4];
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  ulong *puStack_8a0;
  long lStack_898;
  ulong *puStack_890;
  ulong *puStack_888;
  undefined8 *puStack_880;
  undefined1 auStack_878 [248];
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  undefined1 uStack_690;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  undefined2 uStack_5e8;
  undefined6 uStack_5e6;
  undefined2 uStack_5e0;
  undefined6 uStack_5de;
  undefined2 uStack_5d8;
  undefined6 uStack_5d6;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  undefined1 uStack_590;
  ulong uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  ulong uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  ulong uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined2 uStack_4e8;
  undefined6 uStack_4e6;
  undefined2 uStack_4e0;
  undefined8 uStack_4de;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_420;
  ulong uStack_418;
  undefined1 uStack_410;
  undefined7 uStack_40f;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined7 uStack_3cf;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  ulong auStack_358 [2];
  undefined1 uStack_348;
  undefined8 uStack_347;
  undefined8 uStack_33f;
  undefined8 uStack_337;
  undefined8 uStack_32f;
  undefined8 uStack_327;
  undefined8 uStack_31f;
  undefined8 uStack_317;
  undefined8 uStack_30f;
  undefined8 uStack_307;
  undefined8 uStack_2ff;
  undefined8 uStack_2f7;
  undefined8 uStack_2ef;
  undefined8 uStack_2e7;
  undefined8 uStack_2df;
  undefined8 uStack_2d7;
  undefined8 uStack_2cf;
  undefined8 uStack_2c7;
  undefined8 uStack_2bf;
  undefined8 uStack_2b7;
  undefined8 uStack_2af;
  undefined8 uStack_2a7;
  undefined8 uStack_29f;
  undefined1 uStack_297;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined6 uStack_ef;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 uStack_a0;
  
  lVar23 = 0x112eb8f80;
  puStack_890 = param_1;
  puStack_888 = param_2;
  func_0x0001000285a8(0x112eb8f80,&UNK_10dad0308);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = 0x112d373d8;
  lStack_8b8 = (long)auStack_8e0 - extraout_x8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  lStack_8c0 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  lVar22 = ((long)auStack_8e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  auStack_8e0[3] = lVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar22 - extraout_x12;
  lVar23 = 0x112eb8f88;
  auStack_8e0[2] = lVar22;
  func_0x0001000285a8(0x112eb8f88,&UNK_10dad0318);
  lStack_8b0 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  lVar22 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_898 = lVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (ulong *)(lVar22 - extraout_x12_00);
  uVar24 = 0x112eb8f90;
  puStack_8a0 = puVar21;
  func_0x0001000285a8(0x112eb8f90,&UNK_10dad0320);
  auStack_8e0[1] = uVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar24 - 8) + 0x40));
  lVar23 = (long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_8a8 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_880 = (undefined8 *)(lVar23 - extraout_x12_01);
  func_0x000107c5f410();
  auStack_8e0[0] = uVar24;
  FUN_1026f0080(&uStack_680,param_2);
  uStack_508 = uStack_608;
  uStack_510 = uStack_610;
  uStack_4f8 = uStack_5f8;
  uStack_500 = uStack_600;
  uStack_4e8 = uStack_5e8;
  uStack_4f0 = uStack_5f0;
  uStack_4de = CONCAT26(uStack_5d8,uStack_5de);
  uStack_4e6 = uStack_5e6;
  uStack_4e0 = uStack_5e0;
  uStack_538 = uStack_638;
  uStack_540 = uStack_640;
  uStack_528 = uStack_628;
  uStack_530 = uStack_630;
  uStack_518 = uStack_618;
  uStack_520 = uStack_620;
  uStack_578 = uStack_678;
  uStack_580 = uStack_680;
  uStack_568 = uStack_668;
  uStack_570 = uStack_670;
  uStack_558 = uStack_658;
  uStack_560 = uStack_660;
  uStack_548 = uStack_648;
  uStack_550 = uStack_650;
  uStack_458 = uStack_608;
  uStack_460 = uStack_610;
  uStack_448 = uStack_5f8;
  uStack_450 = uStack_600;
  uStack_440 = uStack_5f0;
  uStack_488 = uStack_638;
  uStack_490 = uStack_640;
  uStack_478 = uStack_628;
  uStack_480 = uStack_630;
  uStack_468 = uStack_618;
  uStack_470 = uStack_620;
  uStack_4c8 = uStack_678;
  uStack_4d0 = uStack_680;
  uStack_4b8 = uStack_668;
  uStack_4c0 = uStack_670;
  uStack_4a8 = uStack_658;
  uStack_4b0 = uStack_660;
  uStack_498 = uStack_648;
  uStack_4a0 = uStack_650;
  func_0x0001026f9b24(&uStack_580,&uStack_190,0x112eb8f98,&UNK_10dad0328);
  puVar21 = &uStack_4d0;
  func_0x0001026f9b6c(puVar21,0x112eb8f98,&UNK_10dad0328);
  uVar8 = SUB81(puVar21,0);
  uStack_111 = (undefined1)uStack_508;
  uStack_110 = (undefined7)((ulong)uStack_508 >> 8);
  uStack_119 = (undefined1)uStack_510;
  uStack_118 = (undefined7)((ulong)uStack_510 >> 8);
  uStack_101 = (undefined1)uStack_4f8;
  uStack_100 = (undefined7)((ulong)uStack_4f8 >> 8);
  uStack_109 = (undefined1)uStack_500;
  uStack_108 = (undefined7)((ulong)uStack_500 >> 8);
  uStack_f1 = (undefined1)uStack_4e8;
  uStack_f0 = (undefined1)((ushort)uStack_4e8 >> 8);
  uStack_f9 = (undefined1)uStack_4f0;
  uStack_f8 = (undefined7)((ulong)uStack_4f0 >> 8);
  uStack_e7 = (undefined7)uStack_4de;
  uStack_e0 = (undefined1)((ulong)uStack_4de >> 0x38);
  uStack_ef = uStack_4e6;
  uStack_e9 = (undefined1)uStack_4e0;
  uStack_e8 = (undefined1)((ushort)uStack_4e0 >> 8);
  uStack_151 = (undefined1)uStack_548;
  uStack_150 = (undefined7)((ulong)uStack_548 >> 8);
  uStack_159 = (undefined1)uStack_550;
  uStack_158 = (undefined7)((ulong)uStack_550 >> 8);
  uStack_141 = (undefined1)uStack_538;
  uStack_140 = (undefined7)((ulong)uStack_538 >> 8);
  uStack_149 = (undefined1)uStack_540;
  uStack_148 = (undefined7)((ulong)uStack_540 >> 8);
  uStack_131 = (undefined1)uStack_528;
  uStack_130 = (undefined7)((ulong)uStack_528 >> 8);
  uStack_139 = (undefined1)uStack_530;
  uStack_138 = (undefined7)(uStack_530 >> 8);
  uStack_121 = (undefined1)uStack_518;
  uStack_120 = (undefined7)((ulong)uStack_518 >> 8);
  uStack_129 = (undefined1)uStack_520;
  uStack_128 = (undefined7)((ulong)uStack_520 >> 8);
  uStack_181 = (undefined1)uStack_578;
  uStack_180 = (undefined7)((ulong)uStack_578 >> 8);
  uStack_189 = (undefined1)uStack_580;
  uStack_188 = (undefined7)(uStack_580 >> 8);
  uStack_171 = (undefined1)uStack_568;
  uStack_170 = (undefined7)((ulong)uStack_568 >> 8);
  uStack_179 = (undefined1)uStack_570;
  uStack_178 = (undefined7)((ulong)uStack_570 >> 8);
  uStack_161 = (undefined1)uStack_558;
  uStack_160 = (undefined7)((ulong)uStack_558 >> 8);
  uStack_169 = (undefined1)uStack_560;
  uStack_168 = (undefined7)(uStack_560 >> 8);
  uVar29 = uStack_560;
  uVar26 = uStack_530;
  func_0x000107c5f574();
  uVar27 = auStack_8e0[0];
  uStack_387 = uStack_108;
  uStack_380 = uStack_101;
  uStack_38f = uStack_110;
  uStack_388 = uStack_109;
  uStack_377 = uStack_f8;
  uStack_370 = uStack_f1;
  uStack_37f = uStack_100;
  uStack_378 = uStack_f9;
  uStack_36f = CONCAT61(uStack_ef,uStack_f0);
  uStack_367 = (undefined7)CONCAT71(uStack_e7,uStack_e8);
  uStack_360 = (undefined1)((uint7)uStack_e7 >> 0x30);
  uStack_368 = uStack_e9;
  uStack_3c7 = uStack_148;
  uStack_3c0 = uStack_141;
  uStack_3cf = uStack_150;
  uStack_3c8 = uStack_149;
  uStack_3b7 = uStack_138;
  uStack_3b0 = uStack_131;
  uStack_3bf = uStack_140;
  uStack_3b8 = uStack_139;
  uStack_3a7 = uStack_128;
  uStack_3a0 = uStack_121;
  uStack_3af = uStack_130;
  uStack_3a8 = uStack_129;
  uStack_397 = uStack_118;
  uStack_390 = uStack_111;
  uStack_39f = uStack_120;
  uStack_398 = uStack_119;
  uStack_407 = uStack_188;
  uStack_400 = uStack_181;
  uStack_40f = uStack_190;
  uStack_408 = uStack_189;
  uStack_3f7 = uStack_178;
  uStack_3f0 = uStack_171;
  uStack_3ff = uStack_180;
  uStack_3f8 = uStack_179;
  uVar24 = CONCAT17(uStack_159,uStack_160);
  uStack_3e7 = uStack_168;
  uStack_3e0 = uStack_161;
  uStack_3ef = uStack_170;
  uStack_3e8 = uStack_169;
  uStack_420 = auStack_8e0[0];
  uStack_418 = 0x4010000000000000;
  uStack_410 = 0;
  uStack_35f = uStack_e0;
  uStack_3d7 = uStack_158;
  uStack_3d0 = uStack_151;
  uStack_3df = uStack_160;
  uStack_3d8 = uStack_159;
  uVar25 = 0x3ff0000000000000;
  func_0x000107c5f280();
  uStack_6d8 = CONCAT71(uStack_377,uStack_378);
  uStack_6e0 = CONCAT71(uStack_37f,uStack_380);
  uStack_6c8 = CONCAT71(uStack_367,uStack_368);
  uStack_6d0 = CONCAT71(uStack_36f,uStack_370);
  uStack_718 = CONCAT71(uStack_3b7,uStack_3b8);
  uStack_720 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_708 = CONCAT71(uStack_3a7,uStack_3a8);
  uStack_710 = CONCAT71(uStack_3af,uStack_3b0);
  uStack_6f8 = CONCAT71(uStack_397,uStack_398);
  uStack_700 = CONCAT71(uStack_39f,uStack_3a0);
  uStack_6e8 = CONCAT71(uStack_387,uStack_388);
  uStack_6f0 = CONCAT71(uStack_38f,uStack_390);
  uStack_758 = CONCAT71(uStack_3f7,uStack_3f8);
  uStack_760 = CONCAT71(uStack_3ff,uStack_400);
  uStack_748 = CONCAT71(uStack_3e7,uStack_3e8);
  uStack_750 = CONCAT71(uStack_3ef,uStack_3f0);
  uStack_738 = CONCAT71(uStack_3d7,uStack_3d8);
  uStack_740 = CONCAT71(uStack_3df,uStack_3e0);
  uStack_728 = CONCAT71(uStack_3c7,uStack_3c8);
  uStack_730 = CONCAT71(uStack_3cf,uStack_3d0);
  uStack_768 = CONCAT71(uStack_407,uStack_408);
  uStack_770 = CONCAT71(uStack_40f,uStack_410);
  uStack_778 = uStack_418;
  uStack_780 = uStack_420;
  uStack_2bf = CONCAT17(uStack_101,uStack_108);
  uStack_2c7 = CONCAT17(uStack_109,uStack_110);
  uStack_2af = CONCAT17(uStack_f1,uStack_f8);
  uStack_2b7 = CONCAT17(uStack_f9,uStack_100);
  uStack_29f = CONCAT71(uStack_e7,uStack_e8);
  uStack_2a7 = CONCAT17(uStack_e9,CONCAT61(uStack_ef,uStack_f0));
  uStack_2ff = CONCAT17(uStack_141,uStack_148);
  uStack_307 = CONCAT17(uStack_149,uStack_150);
  uStack_2ef = CONCAT17(uStack_131,uStack_138);
  uStack_2f7 = CONCAT17(uStack_139,uStack_140);
  uStack_2df = CONCAT17(uStack_121,uStack_128);
  uStack_2e7 = CONCAT17(uStack_129,uStack_130);
  uStack_2cf = CONCAT17(uStack_111,uStack_118);
  uStack_2d7 = CONCAT17(uStack_119,uStack_120);
  uStack_33f = CONCAT17(uStack_181,uStack_188);
  uStack_347 = CONCAT17(uStack_189,uStack_190);
  uStack_32f = CONCAT17(uStack_171,uStack_178);
  uStack_337 = CONCAT17(uStack_179,uStack_180);
  uStack_31f = CONCAT17(uStack_161,uStack_168);
  uStack_327 = CONCAT17(uStack_169,uStack_170);
  uStack_30f = CONCAT17(uStack_151,uStack_158);
  uStack_317 = CONCAT17(uStack_159,uStack_160);
  uStack_6c0 = CONCAT62(uStack_6c0._2_6_,CONCAT11(uStack_35f,uStack_360));
  auStack_358[0] = uVar27;
  auStack_358[1] = 0x4010000000000000;
  uStack_348 = 0;
  uStack_297 = uStack_e0;
  func_0x0001026f9b24(&uStack_420,&uStack_680,0x112eb8fa0,&UNK_10dad0330);
  func_0x0001026f9b6c(auStack_358,0x112eb8fa0,&UNK_10dad0330);
  uStack_1e8 = uStack_6d8;
  uStack_1f0 = uStack_6e0;
  uStack_1d8 = uStack_6c8;
  uStack_1e0 = uStack_6d0;
  uStack_228 = uStack_718;
  uStack_230 = uStack_720;
  uStack_218 = uStack_708;
  uStack_220 = uStack_710;
  uStack_208 = uStack_6f8;
  uStack_210 = uStack_700;
  uStack_1f8 = uStack_6e8;
  uStack_200 = uStack_6f0;
  uStack_268 = uStack_758;
  uStack_270 = uStack_760;
  uStack_258 = uStack_748;
  uStack_260 = uStack_750;
  uStack_248 = uStack_738;
  uStack_250 = uStack_740;
  uStack_238 = uStack_728;
  uStack_240 = uStack_730;
  uStack_288 = uStack_778;
  uStack_290 = uStack_780;
  uStack_278 = uStack_768;
  uStack_280 = uStack_770;
  uStack_e8 = (undefined1)uStack_6d8;
  uStack_e7 = (undefined7)(uStack_6d8 >> 8);
  uStack_f0 = (undefined1)uStack_6e0;
  uStack_ef = (undefined6)(uStack_6e0 >> 8);
  uStack_e9 = (undefined1)(uStack_6e0 >> 0x38);
  uStack_d8 = uStack_6c8;
  uStack_e0 = (undefined1)uStack_6d0;
  uStack_df = (undefined7)(uStack_6d0 >> 8);
  uStack_128 = (undefined7)uStack_718;
  uStack_121 = (undefined1)(uStack_718 >> 0x38);
  uStack_130 = (undefined7)uStack_720;
  uStack_129 = (undefined1)(uStack_720 >> 0x38);
  uStack_118 = (undefined7)uStack_708;
  uStack_111 = (undefined1)(uStack_708 >> 0x38);
  uStack_120 = (undefined7)uStack_710;
  uStack_119 = (undefined1)(uStack_710 >> 0x38);
  uStack_108 = (undefined7)uStack_6f8;
  uStack_101 = (undefined1)(uStack_6f8 >> 0x38);
  uStack_110 = (undefined7)uStack_700;
  uStack_109 = (undefined1)(uStack_700 >> 0x38);
  uStack_f8 = (undefined7)uStack_6e8;
  uStack_f1 = (undefined1)(uStack_6e8 >> 0x38);
  uStack_100 = (undefined7)uStack_6f0;
  uStack_f9 = (undefined1)(uStack_6f0 >> 0x38);
  uStack_168 = (undefined7)uStack_758;
  uStack_161 = (undefined1)(uStack_758 >> 0x38);
  uStack_170 = (undefined7)uStack_760;
  uStack_169 = (undefined1)(uStack_760 >> 0x38);
  uStack_158 = (undefined7)uStack_748;
  uStack_151 = (undefined1)(uStack_748 >> 0x38);
  uStack_160 = (undefined7)uStack_750;
  uStack_159 = (undefined1)(uStack_750 >> 0x38);
  uStack_148 = (undefined7)uStack_738;
  uStack_141 = (undefined1)(uStack_738 >> 0x38);
  uStack_150 = (undefined7)uStack_740;
  uStack_149 = (undefined1)(uStack_740 >> 0x38);
  uStack_138 = (undefined7)uStack_728;
  uStack_131 = (undefined1)(uStack_728 >> 0x38);
  uStack_140 = (undefined7)uStack_730;
  uStack_139 = (undefined1)(uStack_730 >> 0x38);
  uStack_1d0 = uStack_6c0;
  uStack_1a0 = 0;
  uStack_d0 = uStack_6c0;
  uStack_188 = (undefined7)uStack_778;
  uStack_181 = (undefined1)(uStack_778 >> 0x38);
  uStack_190 = (undefined7)uStack_780;
  uStack_189 = (undefined1)(uStack_780 >> 0x38);
  uStack_178 = (undefined7)uStack_768;
  uStack_171 = (undefined1)(uStack_768 >> 0x38);
  uStack_180 = (undefined7)uStack_770;
  uStack_179 = (undefined1)(uStack_770 >> 0x38);
  uStack_a0 = 0;
  puVar12 = &UNK_10dad0338;
  uVar27 = uStack_730;
  uVar28 = uStack_6e0;
  uStack_1c8 = uVar8;
  uStack_1c0 = uVar25;
  uStack_1b8 = uVar24;
  uStack_1b0 = uVar29;
  uStack_1a8 = uVar26;
  uStack_c8 = uVar8;
  uStack_c0 = uVar25;
  uStack_b8 = uVar24;
  uStack_b0 = uVar29;
  uStack_a8 = uVar26;
  func_0x0001026f9b24(&uStack_290,&uStack_680,0x112eb8fa8);
  puVar9 = &uStack_190;
  func_0x0001026f9b6c(puVar9,0x112eb8fa8,&UNK_10dad0338);
  uStack_680 = *puStack_888;
  uVar24 = puStack_888[1];
  uVar29 = puStack_888[7];
  uStack_678 = uVar24;
  func_0x000100e8b654();
  func_0x000107c61434(uVar24);
  puVar21 = &uStack_680;
  puVar13 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  uVar10 = 0x16;
  func_0x0001026ff85c();
  uVar14 = uVar10;
  puVar15 = puVar21;
  puVar17 = puVar13;
  puVar19 = puVar9;
  func_0x000107c5f5d4();
  func_0x000107c61574(uVar10);
  func_0x000100f795bc(puVar21,puVar13,puVar9);
  func_0x000107c6142c(puVar12);
  uVar11 = 0xc6;
  func_0x0001026ff7d0();
  uVar10 = uVar11;
  uVar16 = uVar14;
  puVar18 = puVar15;
  puVar20 = puVar17;
  func_0x000107c5f5d0();
  func_0x000107c61574(uVar11);
  func_0x000100f795bc(uVar14,puVar15,puVar17);
  func_0x000107c6142c(puVar19);
  puVar12 = &UNK_10dad0340;
  func_0x000107c614e0();
  puVar6 = puStack_880;
  puVar1 = (undefined8 *)((long)puStack_880 + (long)*(int *)(auStack_8e0[1] + 0x24));
  lVar23 = 0x112d50038;
  func_0x0001000285a8(0x112d50038,&UNK_10d9163c0);
  iVar4 = *(int *)(lVar23 + 0x1c);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI4TextV14TruncationModeO4tailyA2EmFWC_1103493c0;
  lVar23 = 0;
  func_0x000107c5f5cc();
  (**(code **)(*(long *)(lVar23 + -8) + 0x68))((long)puVar1 + (long)iVar4,uVar3,lVar23);
  puVar13 = &UNK_10dad0378;
  func_0x000107c614e0();
  puVar21 = puStack_888;
  *puVar1 = puVar13;
  *puVar6 = uVar10;
  puVar6[1] = uVar16;
  *(char *)(puVar6 + 2) = (char)puVar18;
  puVar6[3] = puVar20;
  puVar6[4] = puVar12;
  puVar6[5] = 1;
  *(undefined1 *)(puVar6 + 6) = 0;
  uVar24 = puVar21[0x16];
  if (uVar24 != 0) {
    puVar12 = &UNK_10dacfef0;
    func_0x000107c614e0(&UNK_10dacfef0);
    puVar13 = &UNK_10dacff18;
    func_0x000107c614e0(&UNK_10dacff18);
    func_0x000107c6157c(uVar24);
    puVar15 = puStack_8a0;
    func_0x000107c5f20c(puStack_8a0 + 1);
    func_0x000107c61574(uVar24);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar13);
    puVar12 = &UNK_11053d010;
    func_0x000107c613fc(&UNK_11053d010,0x110,7);
    uVar24 = puVar21[0x18];
    uVar25 = puVar21[0x1b];
    uVar26 = puVar21[0x1a];
    *(ulong *)(puVar12 + 0xd8) = puVar21[0x19];
    *(ulong *)(puVar12 + 0xd0) = uVar24;
    *(ulong *)(puVar12 + 0xe8) = uVar25;
    *(ulong *)(puVar12 + 0xe0) = uVar26;
    uVar24 = puVar21[0x1c];
    uVar25 = puVar21[0x1f];
    uVar26 = puVar21[0x1e];
    *(ulong *)(puVar12 + 0xf8) = puVar21[0x1d];
    *(ulong *)(puVar12 + 0xf0) = uVar24;
    *(ulong *)(puVar12 + 0x108) = uVar25;
    *(ulong *)(puVar12 + 0x100) = uVar26;
    uVar24 = puVar21[0x10];
    uVar25 = puVar21[0x13];
    uVar26 = puVar21[0x12];
    *(ulong *)(puVar12 + 0x98) = puVar21[0x11];
    *(ulong *)(puVar12 + 0x90) = uVar24;
    *(ulong *)(puVar12 + 0xa8) = uVar25;
    *(ulong *)(puVar12 + 0xa0) = uVar26;
    uVar24 = puVar21[0x14];
    uVar25 = puVar21[0x17];
    uVar26 = puVar21[0x16];
    *(ulong *)(puVar12 + 0xb8) = puVar21[0x15];
    *(ulong *)(puVar12 + 0xb0) = uVar24;
    *(ulong *)(puVar12 + 200) = uVar25;
    *(ulong *)(puVar12 + 0xc0) = uVar26;
    uVar24 = puVar21[8];
    uVar25 = puVar21[0xb];
    uVar26 = puVar21[10];
    *(ulong *)(puVar12 + 0x58) = puVar21[9];
    *(ulong *)(puVar12 + 0x50) = uVar24;
    *(ulong *)(puVar12 + 0x68) = uVar25;
    *(ulong *)(puVar12 + 0x60) = uVar26;
    uVar24 = puVar21[0xc];
    uVar25 = puVar21[0xf];
    uVar26 = puVar21[0xe];
    *(ulong *)(puVar12 + 0x78) = puVar21[0xd];
    *(ulong *)(puVar12 + 0x70) = uVar24;
    *(ulong *)(puVar12 + 0x88) = uVar25;
    *(ulong *)(puVar12 + 0x80) = uVar26;
    uVar24 = *puVar21;
    uVar25 = puVar21[3];
    uVar26 = puVar21[2];
    *(ulong *)(puVar12 + 0x18) = puVar21[1];
    *(ulong *)(puVar12 + 0x10) = uVar24;
    *(ulong *)(puVar12 + 0x28) = uVar25;
    *(ulong *)(puVar12 + 0x20) = uVar26;
    uVar24 = puVar21[4];
    uVar25 = puVar21[7];
    uVar26 = puVar21[6];
    *(ulong *)(puVar12 + 0x38) = puVar21[5];
    *(ulong *)(puVar12 + 0x30) = uVar24;
    *(ulong *)(puVar12 + 0x48) = uVar25;
    *(ulong *)(puVar12 + 0x40) = uVar26;
    *puVar15 = uVar29;
    puVar15[2] = 0x1026f77a0;
    puVar15[3] = (ulong)puVar12;
    uStack_780 = 0;
    FUN_1026f737c(puVar21,&uStack_680);
    func_0x000107c5f728(puVar15 + 4,&uStack_780,PTR___sSdN_11034dd90);
    lVar23 = 0;
    func_0x0001026f77a8();
    iVar4 = *(int *)(lVar23 + 0x20);
    lVar22 = 0;
    func_0x000107c5eea4();
    uVar24 = auStack_8e0[2];
    (**(code **)(*(long *)(lVar22 + -8) + 0x38))(auStack_8e0[2],1,1,lVar22);
    uVar29 = auStack_8e0[3];
    func_0x0001026f9b24(uVar24,auStack_8e0[3],0x112d373d8,&UNK_10d9014c0);
    func_0x000107c5f728((long)puVar15 + (long)iVar4,uVar29,lStack_8c0);
    func_0x0001026f9b6c(uVar24,0x112d373d8,&UNK_10d9014c0);
    uStack_680 = uStack_680 & 0xffffffffffffff00;
    func_0x000107c5f728((long)puVar15 + (long)*(int *)(lVar23 + 0x24),&uStack_680,
                        PTR___sSbN_11034dd40);
    iVar4 = *(int *)(lVar23 + 0x28);
    func_0x0001026f77ec(0);
    puVar12 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8;
    lVar22 = 0;
    func_0x000107c60158();
    lVar23 = lStack_8b8;
    (**(code **)(*(long *)(lVar22 + -8) + 0x38))(lStack_8b8,1,1,lVar22);
    uVar24 = 0;
    func_0x000107c60104(0x3f91111111111111,0,1,puVar12,uVar10,lVar23);
    func_0x000107c61170(puVar12);
    func_0x0001026f9b6c(lVar23,0x112eb8f80,&UNK_10dad0308);
    uVar14 = 0;
    uStack_680 = uVar24;
    func_0x000107c60100();
    uVar10 = 0x112eb8fb0;
    func_0x0001026f73b0(0x112eb8fb0,PTR___sSo7NSTimerC10FoundationE14TimerPublisherCMa_1103511d0,
                        PTR___sSo7NSTimerC10FoundationE14TimerPublisherC7Combine011ConnectableD0ACMc_1103511c8
                       );
    func_0x000107c5f1f4(uVar14,uVar10);
    func_0x000107c61574();
    uVar8 = (undefined1)uVar24;
    *(undefined8 *)((long)puVar15 + (long)iVar4) = uVar14;
    func_0x000107c5f570();
    uVar10 = 0x4010000000000000;
    func_0x000107c5f280();
    lVar22 = lStack_8a8;
    puVar2 = (undefined1 *)((long)puVar15 + (long)*(int *)(lStack_8b0 + 0x24));
    *puVar2 = uVar8;
    *(undefined8 *)(puVar2 + 8) = uVar10;
    *(ulong *)(puVar2 + 0x10) = uVar26;
    *(ulong *)(puVar2 + 0x18) = uVar27;
    *(ulong *)(puVar2 + 0x20) = uVar28;
    puVar2[0x28] = 0;
    uStack_6b8 = CONCAT71(uStack_1c7,uStack_1c8);
    uStack_6c0 = uStack_1d0;
    uStack_6a8 = uStack_1b8;
    uStack_6b0 = uStack_1c0;
    uStack_698 = uStack_1a8;
    uStack_6a0 = uStack_1b0;
    uStack_690 = uStack_1a0;
    uStack_6f8 = uStack_208;
    uStack_700 = uStack_210;
    uStack_6e8 = uStack_1f8;
    uStack_6f0 = uStack_200;
    uStack_6d8 = uStack_1e8;
    uStack_6e0 = uStack_1f0;
    uStack_6c8 = uStack_1d8;
    uStack_6d0 = uStack_1e0;
    uStack_738 = uStack_248;
    uStack_740 = uStack_250;
    uStack_728 = uStack_238;
    uStack_730 = uStack_240;
    uStack_718 = uStack_228;
    uStack_720 = uStack_230;
    uStack_708 = uStack_218;
    uStack_710 = uStack_220;
    uStack_778 = uStack_288;
    uStack_780 = uStack_290;
    uStack_768 = uStack_278;
    uStack_770 = uStack_280;
    uStack_758 = uStack_268;
    uStack_760 = uStack_270;
    uStack_748 = uStack_258;
    uStack_750 = uStack_260;
    func_0x0001026f9b24(puVar6,lStack_8a8,0x112eb8f90);
    lVar5 = lStack_898;
    func_0x0001026f9b24(puVar15,lStack_898,0x112eb8f88,&UNK_10dad0318);
    puVar21 = puStack_890;
    uStack_5b8 = uStack_6b8;
    uStack_5c0 = uStack_6c0;
    uStack_5a8 = uStack_6a8;
    uStack_5b0 = uStack_6b0;
    uStack_598 = uStack_698;
    uStack_5a0 = uStack_6a0;
    uStack_5f8 = uStack_6f8;
    uStack_600 = uStack_700;
    uStack_5e8 = (undefined2)uStack_6e8;
    uStack_5e6 = (undefined6)(uStack_6e8 >> 0x10);
    uStack_5f0 = uStack_6f0;
    uStack_5d8 = (undefined2)uStack_6d8;
    uStack_5d6 = (undefined6)(uStack_6d8 >> 0x10);
    uStack_5e0 = (undefined2)uStack_6e0;
    uStack_5de = (undefined6)(uStack_6e0 >> 0x10);
    uStack_5c8 = uStack_6c8;
    uStack_5d0 = uStack_6d0;
    uStack_638 = uStack_738;
    uStack_640 = uStack_740;
    uStack_628 = uStack_728;
    uStack_630 = uStack_730;
    uStack_618 = uStack_718;
    uStack_620 = uStack_720;
    uStack_608 = uStack_708;
    uStack_610 = uStack_710;
    uStack_678 = uStack_778;
    uStack_680 = uStack_780;
    uStack_668 = uStack_768;
    uStack_670 = uStack_770;
    uStack_658 = uStack_758;
    uStack_660 = uStack_760;
    uStack_648 = uStack_748;
    uStack_650 = uStack_750;
    puStack_890[0x19] = uStack_6b8;
    puStack_890[0x18] = uStack_6c0;
    puStack_890[0x1b] = uStack_6a8;
    puStack_890[0x1a] = uStack_6b0;
    puStack_890[0x1d] = uStack_698;
    puStack_890[0x1c] = uStack_6a0;
    puStack_890[0x11] = uStack_6f8;
    puStack_890[0x10] = uStack_700;
    puStack_890[0x13] = uStack_6e8;
    puStack_890[0x12] = uStack_6f0;
    puStack_890[0x15] = uStack_6d8;
    puStack_890[0x14] = uStack_6e0;
    puStack_890[0x17] = uStack_6c8;
    puStack_890[0x16] = uStack_6d0;
    puStack_890[9] = uStack_738;
    puStack_890[8] = uStack_740;
    puStack_890[0xb] = uStack_728;
    puStack_890[10] = uStack_730;
    puStack_890[0xd] = uStack_718;
    puStack_890[0xc] = uStack_720;
    puStack_890[0xf] = uStack_708;
    puStack_890[0xe] = uStack_710;
    puStack_890[1] = uStack_778;
    *puStack_890 = uStack_780;
    puStack_890[3] = uStack_768;
    puStack_890[2] = uStack_770;
    uStack_590 = uStack_690;
    *(undefined1 *)(puStack_890 + 0x1e) = uStack_690;
    puStack_890[5] = uStack_758;
    puStack_890[4] = uStack_760;
    puStack_890[7] = uStack_748;
    puStack_890[6] = uStack_750;
    lVar23 = 0x112eb8fb8;
    func_0x0001000285a8(0x112eb8fb8,&UNK_10dad03a8);
    func_0x0001026f9b24(lVar22,(long)puVar21 + (long)*(int *)(lVar23 + 0x30),0x112eb8f90,
                        &UNK_10dad0320);
    func_0x0001026f9b24(lVar5,(long)puVar21 + (long)*(int *)(lVar23 + 0x40),0x112eb8f88,
                        &UNK_10dad0318);
    func_0x0001026f9b24(&uStack_680,auStack_878,0x112eb8fa8,&UNK_10dad0338);
    func_0x0001026f9b6c(puVar15,0x112eb8f88,&UNK_10dad0318);
    func_0x0001026f9b6c(puStack_880,0x112eb8f90,&UNK_10dad0320);
    func_0x0001026f9b6c(lVar5,0x112eb8f88,&UNK_10dad0318);
    func_0x0001026f9b6c(lVar22,0x112eb8f90,&UNK_10dad0320);
    func_0x0001026f9b6c(&uStack_780,0x112eb8fa8,&UNK_10dad0338);
    return;
  }
  uVar24 = puVar21[0x17];
  uVar14 = 0;
  func_0x0001026ecf28(0);
  uVar10 = 0x112eb8d90;
  func_0x0001026f73b0(0x112eb8d90,0x1026ecf28,&UNK_10dacfe28);
  func_0x000107c5f394(0,uVar24,uVar14,uVar10);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1026ef730);
  (*pcVar7)();
}



/* Entry: 1026ef730; end: 1026ef80b;  */

void FUN_1026ef730(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_130 [256];
  
  puVar1 = &UNK_11053d038;
  func_0x000107c613fc(&UNK_11053d038,0x110,7);
  uVar2 = param_1[0x18];
  uVar4 = param_1[0x1b];
  uVar3 = param_1[0x1a];
  *(undefined8 *)(puVar1 + 0xd8) = param_1[0x19];
  *(undefined8 *)(puVar1 + 0xd0) = uVar2;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  uVar2 = param_1[0x1c];
  uVar4 = param_1[0x1f];
  uVar3 = param_1[0x1e];
  *(undefined8 *)(puVar1 + 0xf8) = param_1[0x1d];
  *(undefined8 *)(puVar1 + 0xf0) = uVar2;
  *(undefined8 *)(puVar1 + 0x108) = uVar4;
  *(undefined8 *)(puVar1 + 0x100) = uVar3;
  uVar2 = param_1[0x10];
  uVar4 = param_1[0x13];
  uVar3 = param_1[0x12];
  *(undefined8 *)(puVar1 + 0x98) = param_1[0x11];
  *(undefined8 *)(puVar1 + 0x90) = uVar2;
  *(undefined8 *)(puVar1 + 0xa8) = uVar4;
  *(undefined8 *)(puVar1 + 0xa0) = uVar3;
  uVar2 = param_1[0x14];
  uVar4 = param_1[0x17];
  uVar3 = param_1[0x16];
  *(undefined8 *)(puVar1 + 0xb8) = param_1[0x15];
  *(undefined8 *)(puVar1 + 0xb0) = uVar2;
  *(undefined8 *)(puVar1 + 200) = uVar4;
  *(undefined8 *)(puVar1 + 0xc0) = uVar3;
  uVar2 = param_1[8];
  uVar4 = param_1[0xb];
  uVar3 = param_1[10];
  *(undefined8 *)(puVar1 + 0x58) = param_1[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  uVar2 = param_1[0xc];
  uVar4 = param_1[0xf];
  uVar3 = param_1[0xe];
  *(undefined8 *)(puVar1 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar1 + 0x70) = uVar2;
  *(undefined8 *)(puVar1 + 0x88) = uVar4;
  *(undefined8 *)(puVar1 + 0x80) = uVar3;
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[7];
  uVar3 = param_1[6];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  FUN_1026f737c(param_1,auStack_130);
  uVar2 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dad03b8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1026ef80c; end: 1026efcef;  */

void FUN_1026ef80c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long alStack_560 [25];
  undefined4 auStack_491 [6];
  undefined7 uStack_478;
  undefined1 uStack_471;
  undefined7 uStack_470;
  undefined1 uStack_469;
  undefined7 uStack_468;
  undefined1 uStack_3c1;
  undefined2 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined2 uStack_307;
  undefined5 uStack_305;
  undefined3 uStack_300;
  undefined6 uStack_2fd;
  undefined2 uStack_2f7;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined3 uStack_240;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined6 uStack_15f;
  undefined1 uStack_159;
  undefined1 uStack_158;
  undefined2 uStack_157;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined5 uStack_a5;
  undefined1 uStack_a0;
  undefined2 uStack_9f;
  undefined6 uStack_9d;
  undefined2 uStack_97;
  undefined6 uStack_95;
  undefined8 uStack_8f;
  undefined8 uStack_87;
  undefined2 uStack_7f;
  
  lVar4 = 0x112eb8ee8;
  alStack_560[1] = param_1;
  func_0x0001000285a8(0x112eb8ee8,&UNK_10dad0200);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar9 = (undefined8 *)((long)alStack_560 + lVar1);
  lVar5 = 0x112eb8ef0;
  func_0x0001000285a8(0x112eb8ef0,&UNK_10dad0208);
  alStack_560[0] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)puVar9 - extraout_x8_00);
  uStack_148 = *(undefined8 *)(unaff_x20 + 200);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar6 = 0x112eb8ea0;
  func_0x0001000285a8(0x112eb8ea0,&UNK_10dad01b0);
  func_0x000107c5f72c(&uStack_228);
  if ((char)uStack_228 == '\x01') {
    func_0x000107c5f410();
    FUN_1026f18b0(&uStack_150);
    uStack_328 = uStack_c8;
    uStack_327 = uStack_c7;
    uStack_330 = uStack_d0;
    uStack_32f = uStack_cf;
    uStack_318 = uStack_b8;
    uStack_317 = uStack_b7;
    uStack_320 = uStack_c0;
    uStack_31f = uStack_bf;
    uStack_308 = uStack_a8;
    uStack_307 = uStack_a7;
    uStack_310 = uStack_b0;
    uStack_30f = uStack_af;
    uStack_2fd = uStack_9d;
    uStack_2f7 = uStack_97;
    uStack_305 = uStack_a5;
    uStack_300 = (undefined3)(CONCAT26(uStack_9f,CONCAT15(uStack_a0,uStack_a5)) >> 0x28);
    uStack_368 = uStack_108;
    uStack_367 = uStack_107;
    uStack_370 = uStack_110;
    uStack_36f = uStack_10f;
    uStack_358 = uStack_f8;
    uStack_357 = uStack_f7;
    uStack_360 = uStack_100;
    uStack_35f = uStack_ff;
    uStack_348 = uStack_e8;
    uStack_347 = uStack_e7;
    uStack_350 = uStack_f0;
    uStack_34f = uStack_ef;
    uStack_338 = uStack_d8;
    uStack_337 = uStack_d7;
    uStack_340 = uStack_e0;
    uStack_33f = uStack_df;
    uStack_398 = uStack_138;
    uStack_397 = uStack_137;
    uStack_3a0 = uStack_140;
    uStack_39f = uStack_13f;
    uStack_3a8 = uStack_148;
    uStack_3b0 = uStack_150;
    uStack_388 = uStack_128;
    uStack_387 = uStack_127;
    uStack_390 = uStack_130;
    uStack_38f = uStack_12f;
    uStack_378 = uStack_118;
    uStack_377 = uStack_117;
    uStack_380 = uStack_120;
    uStack_37f = uStack_11f;
    uStack_240 = (undefined3)(CONCAT26(uStack_9f,CONCAT15(uStack_a0,uStack_a5)) >> 0x28);
    uStack_2e8 = uStack_148;
    uStack_2f0 = uStack_150;
    func_0x0001026f9b24(&uStack_3b0,&uStack_228,0x112eb8f18,&UNK_10dad0220);
    func_0x0001026f9b6c(&uStack_2f0,0x112eb8f18,&UNK_10dad0220);
    uStack_3c1 = (undefined1)uStack_300;
    uStack_3c0 = (undefined2)((uint3)uStack_300 >> 8);
    uStack_469 = (undefined1)uStack_3a8;
    uStack_468 = (undefined7)((ulong)uStack_3a8 >> 8);
    uStack_471 = (undefined1)uStack_3b0;
    uStack_470 = (undefined7)((ulong)uStack_3b0 >> 8);
    uStack_17f = uStack_31f;
    uStack_178 = uStack_318;
    uStack_187 = uStack_327;
    uStack_180 = uStack_320;
    uStack_16f = uStack_30f;
    uStack_168 = uStack_308;
    uStack_177 = uStack_317;
    uStack_170 = uStack_310;
    uStack_167 = CONCAT52(uStack_305,uStack_307);
    uStack_15f = (undefined6)CONCAT62(uStack_2fd,uStack_3c0);
    uStack_159 = (undefined1)((uint6)uStack_2fd >> 0x20);
    uStack_158 = (undefined1)((uint6)uStack_2fd >> 0x28);
    uStack_160 = uStack_3c1;
    uStack_1bf = uStack_35f;
    uStack_1b8 = uStack_358;
    uStack_1c7 = uStack_367;
    uStack_1c0 = uStack_360;
    uStack_1af = uStack_34f;
    uStack_1a8 = uStack_348;
    uStack_1b7 = uStack_357;
    uStack_1b0 = uStack_350;
    uStack_19f = uStack_33f;
    uStack_198 = uStack_338;
    uStack_1a7 = uStack_347;
    uStack_1a0 = uStack_340;
    uStack_18f = uStack_32f;
    uStack_188 = uStack_328;
    uStack_197 = uStack_337;
    uStack_190 = uStack_330;
    uStack_1ff = uStack_39f;
    uStack_1f8 = uStack_398;
    uStack_207 = uStack_468;
    uStack_200 = uStack_3a0;
    uStack_1ef = uStack_38f;
    uStack_1e8 = uStack_388;
    uStack_1f7 = uStack_397;
    uStack_1f0 = uStack_390;
    uStack_1df = uStack_37f;
    uStack_1d8 = uStack_378;
    uStack_1e7 = uStack_387;
    uStack_1e0 = uStack_380;
    uStack_1cf = uStack_36f;
    uStack_1c8 = uStack_368;
    uStack_1d7 = uStack_377;
    uStack_1d0 = uStack_370;
    uStack_20f = uStack_470;
    uStack_208 = uStack_469;
    uStack_217 = uStack_478;
    uStack_210 = uStack_471;
    uStack_a7 = (undefined2)uStack_31f;
    uStack_a5 = (undefined5)((uint7)uStack_31f >> 0x10);
    uStack_97 = (undefined2)uStack_30f;
    uStack_95 = (undefined6)(CONCAT17(uStack_308,uStack_30f) >> 0x10);
    uStack_9f = (undefined2)uStack_317;
    uStack_9d = (undefined6)(CONCAT17(uStack_310,uStack_317) >> 0x10);
    uStack_87 = CONCAT62(uStack_2fd,uStack_3c0);
    uStack_8f = CONCAT17(uStack_3c1,CONCAT52(uStack_305,uStack_307));
    uStack_12f = uStack_468;
    uStack_220 = 0x4010000000000000;
    uStack_218 = 0;
    uStack_157 = uStack_2f7;
    uStack_148 = 0x4010000000000000;
    uStack_140 = 0;
    uStack_7f = uStack_2f7;
    uStack_137 = uStack_470;
    uStack_130 = uStack_469;
    uStack_138 = uStack_471;
    uVar7 = 0x112eb8f00;
    uStack_228 = uVar6;
    uStack_150 = uVar6;
    func_0x0001026f9b24(&uStack_228,alStack_560 + 2,0x112eb8f00,&UNK_10dad0218);
    func_0x0001026f9b6c(&uStack_150,0x112eb8f00,&UNK_10dad0218);
    *(ulong *)((long)alStack_560 + lVar1 + 0xa8) = CONCAT71(uStack_17f,uStack_180);
    *(ulong *)((long)alStack_560 + lVar1 + 0xa0) = CONCAT71(uStack_187,uStack_188);
    *(ulong *)((long)alStack_560 + lVar1 + 0xb8) = CONCAT71(uStack_16f,uStack_170);
    *(ulong *)((long)alStack_560 + lVar1 + 0xb0) = CONCAT71(uStack_177,uStack_178);
    *(ulong *)(&stack0xfffffffffffffb68 + lVar1) =
         CONCAT17(uStack_159,CONCAT61(uStack_15f,uStack_160));
    *(ulong *)((long)alStack_560 + lVar1 + 0xc0) = CONCAT71(uStack_167,uStack_168);
    *(uint *)((long)auStack_491 + lVar1) = CONCAT22(uStack_157,CONCAT11(uStack_158,uStack_159));
    *(ulong *)((long)alStack_560 + lVar1 + 0x68) = CONCAT71(uStack_1bf,uStack_1c0);
    *(ulong *)((long)alStack_560 + lVar1 + 0x60) = CONCAT71(uStack_1c7,uStack_1c8);
    *(ulong *)((long)alStack_560 + lVar1 + 0x78) = CONCAT71(uStack_1af,uStack_1b0);
    *(ulong *)((long)alStack_560 + lVar1 + 0x70) = CONCAT71(uStack_1b7,uStack_1b8);
    *(ulong *)((long)alStack_560 + lVar1 + 0x88) = CONCAT71(uStack_19f,uStack_1a0);
    *(ulong *)((long)alStack_560 + lVar1 + 0x80) = CONCAT71(uStack_1a7,uStack_1a8);
    *(ulong *)((long)alStack_560 + lVar1 + 0x98) = CONCAT71(uStack_18f,uStack_190);
    *(ulong *)((long)alStack_560 + lVar1 + 0x90) = CONCAT71(uStack_197,uStack_198);
    uVar6 = CONCAT71(uStack_207,uStack_208);
    *(ulong *)((long)alStack_560 + lVar1 + 0x28) = CONCAT71(uStack_1ff,uStack_200);
    *(undefined8 *)((long)alStack_560 + lVar1 + 0x20) = uVar6;
    *(ulong *)((long)alStack_560 + lVar1 + 0x38) = CONCAT71(uStack_1ef,uStack_1f0);
    *(ulong *)((long)alStack_560 + lVar1 + 0x30) = CONCAT71(uStack_1f7,uStack_1f8);
    *(ulong *)((long)alStack_560 + lVar1 + 0x48) = CONCAT71(uStack_1df,uStack_1e0);
    *(ulong *)((long)alStack_560 + lVar1 + 0x40) = CONCAT71(uStack_1e7,uStack_1e8);
    *(ulong *)((long)alStack_560 + lVar1 + 0x58) = CONCAT71(uStack_1cf,uStack_1d0);
    *(ulong *)((long)alStack_560 + lVar1 + 0x50) = CONCAT71(uStack_1d7,uStack_1d8);
    uVar3 = uStack_228;
    uVar8 = CONCAT71(uStack_20f,uStack_210);
    uVar6 = CONCAT71(uStack_217,uStack_218);
    *(undefined8 *)((long)alStack_560 + lVar1 + 8) = uStack_220;
    *puVar9 = uVar3;
    *(undefined8 *)((long)alStack_560 + lVar1 + 0x18) = uVar8;
    *(undefined8 *)((long)alStack_560 + lVar1 + 0x10) = uVar6;
    func_0x000107c6159c(puVar9,lVar4,1);
    func_0x0001000285a8(0x112eb8f00,&UNK_10dad0218);
    puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
    uVar6 = 0x112eb8f08;
    FUN_1026fa158(0x112eb8f08,0x112eb8ef0,&UNK_10dad0208,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    uVar8 = 0x112eb8f10;
    FUN_1026fa158(0x112eb8f10,0x112eb8f00,&UNK_10dad0218,puVar2);
    func_0x000107c5f490(alStack_560[1],puVar9,alStack_560[0],uVar7,uVar6,uVar8);
  }
  else {
    func_0x000107c5f410();
    *puVar10 = uVar6;
    puVar10[1] = 0x4018000000000000;
    *(undefined1 *)(puVar10 + 2) = 0;
    lVar5 = 0x112eb8ef8;
    func_0x0001000285a8(0x112eb8ef8,&UNK_10dad0210);
    FUN_1026f0a38((long)puVar10 + (long)*(int *)(lVar5 + 0x2c));
    func_0x0001026f9b24(puVar10,puVar9,0x112eb8ef0,&UNK_10dad0208);
    func_0x000107c6159c(puVar9,lVar4,0);
    uVar6 = 0x112eb8f00;
    func_0x0001000285a8(0x112eb8f00,&UNK_10dad0218);
    puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
    uVar7 = 0x112eb8f08;
    FUN_1026fa158(0x112eb8f08,0x112eb8ef0,&UNK_10dad0208,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    uVar8 = 0x112eb8f10;
    FUN_1026fa158(0x112eb8f10,0x112eb8f00,&UNK_10dad0218,puVar2);
    func_0x000107c5f490(alStack_560[1],puVar9,alStack_560[0],uVar6,uVar7,uVar8);
    func_0x0001026f9b6c(puVar10,0x112eb8ef0,&UNK_10dad0208);
  }
  return;
}



/* Entry: 1026efcf0; end: 1026f007f;  */

void FUN_1026efcf0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_210 [80];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar11 = *(undefined8 *)(param_2 + 0x48);
  uStack_1b8 = *(undefined8 *)(param_2 + 200);
  uStack_1c0 = *(undefined8 *)(param_2 + 0xc0);
  uStack_c8 = *(undefined8 *)(param_2 + 200);
  uStack_d0 = *(undefined8 *)(param_2 + 0xc0);
  func_0x000107c61434(uVar10);
  uVar14 = 0x112eb8ea0;
  func_0x0001000285a8(0x112eb8ea0,&UNK_10dad01b0);
  func_0x000107c5f72c(&uStack_120);
  uStack_110 = 0x4046000000000000;
  if ((char)uStack_120 != '\x01') {
    uStack_110 = 0x4044000000000000;
  }
  uStack_c8 = *(undefined8 *)(param_2 + 200);
  uStack_d0 = *(undefined8 *)(param_2 + 0xc0);
  func_0x000107c5f72c(&uStack_120,uVar14);
  bVar2 = (char)uStack_120 == '\x01';
  uStack_120 = 0;
  func_0x000107c61434(uVar11);
  uVar12 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  puVar3 = &uStack_120;
  func_0x000107c5f728(&uStack_d0,puVar3,uVar12);
  uVar13 = uStack_c8;
  uVar12 = uStack_d0;
  func_0x000107c5f7d4(0x3fd1eb851eb851ec);
  uStack_c8 = *(undefined8 *)(param_2 + 200);
  uStack_d0 = *(undefined8 *)(param_2 + 0xc0);
  func_0x000107c5f72c(&uStack_120,uVar14);
  uStack_d8 = (char)uStack_120 == '\x01';
  uStack_f0 = uVar12;
  uStack_e8 = (undefined1)uVar13;
  uStack_e7 = (undefined7)((ulong)uVar13 >> 8);
  uStack_e0 = SUB81(puVar3,0);
  uStack_df = (undefined7)((ulong)puVar3 >> 8);
  uStack_a0 = uVar12;
  uStack_98 = uVar13;
  uStack_120 = uVar6;
  uStack_118 = uVar10;
  uStack_108 = bVar2;
  uStack_100 = uVar9;
  uStack_f8 = uVar11;
  uStack_d0 = uVar6;
  uStack_c8 = uVar10;
  uStack_c0 = uStack_110;
  uStack_b8 = bVar2;
  uStack_b0 = uVar9;
  uStack_a8 = uVar11;
  puStack_90 = puVar3;
  uStack_88 = uStack_d8;
  func_0x0001026f9b24(&uStack_120,&uStack_170,0x112eb8ec0,&UNK_10dad01d8);
  func_0x0001026f9b6c(&uStack_d0,0x112eb8ec0,&UNK_10dad01d8);
  func_0x000107c5f72c(&uStack_170,uVar14);
  uVar14 = 0;
  uVar6 = 0;
  if ((char)uStack_170 == '\x01') {
    if (*(long *)(lVar7 + 0x10) != 0) {
      lVar8 = *(long *)(param_2 + 0xa0);
      if (lVar8 == 0) {
        uVar9 = *(undefined8 *)(param_2 + 0xa8);
        uVar6 = 0;
        func_0x0001026ecda8(0);
        uVar14 = 0x112eb8d80;
        func_0x0001026f73b0(0x112eb8d80,0x1026ecda8,&UNK_10dacfe60);
        func_0x000107c61434(lVar7);
        func_0x000107c5f394(0,uVar9,uVar6,uVar14);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026f0080);
        (*pcVar1)();
      }
      puVar4 = &UNK_10dacfea8;
      func_0x000107c614e0(&UNK_10dacfea8);
      puVar5 = &UNK_10dacfed0;
      func_0x000107c614e0(&UNK_10dacfed0);
      func_0x000107c61434(lVar7);
      func_0x000107c6157c(lVar8);
      func_0x000107c5f20c(&uStack_170);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61574();
      func_0x000107c5f2e4();
      uVar16 = 0x4010000000000000;
      uVar15 = 0x4018000000000000;
      uVar6 = 0x4020000000000000;
      uVar14 = 0x4032000000000000;
      uVar10 = 0x4010000000000000;
      uVar11 = 0x4018000000000000;
      uVar12 = 0x4020000000000000;
      uVar13 = 0x4032000000000000;
      uVar9 = uStack_170;
      goto LAB_1026eff58;
    }
  }
  lVar7 = 0;
  uVar9 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  lVar8 = 0;
  uVar15 = 0;
  uVar16 = 0;
LAB_1026eff58:
  uStack_198 = uStack_f8;
  uStack_1a0 = uStack_100;
  uStack_188 = uStack_e8;
  uStack_190 = uStack_f0;
  uStack_17f = CONCAT17(uStack_d8,uStack_df);
  uStack_187 = uStack_e7;
  uStack_180 = uStack_e0;
  uStack_1a8 = CONCAT71(uStack_107,uStack_108);
  uStack_1b8 = uStack_118;
  uStack_1c0 = uStack_120;
  uStack_1b0 = uStack_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_137 = uStack_e7;
  uStack_130 = uStack_e0;
  uStack_168 = uStack_118;
  uStack_170 = uStack_120;
  uStack_160 = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = CONCAT71(uStack_e7,uStack_e8);
  param_1[6] = uStack_f0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_1a8;
  param_1[2] = uStack_110;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_17f;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_e0,uStack_e7);
  param_1[10] = lVar7;
  param_1[0xb] = uVar9;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar14;
  param_1[0xf] = uVar16;
  param_1[0xe] = uVar15;
  param_1[0x10] = lVar8;
  uStack_158 = uStack_1a8;
  uStack_12f = uStack_17f;
  func_0x0001026f9b24(&uStack_170,auStack_210,0x112eb8ec0,&UNK_10dad01d8);
  FUN_1026f766c(lVar7,uVar9,uVar13,uVar12,uVar11,uVar10,lVar8);
  func_0x0001026f76a4(lVar7,uVar9,uVar13,uVar12,uVar11,uVar10,lVar8);
  func_0x0001026f9b6c(&uStack_1c0,0x112eb8ec0,&UNK_10dad01d8);
  return;
}



/* Entry: 1026f0080; end: 1026f080b;  */

void FUN_1026f0080(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined8 uStack_1de;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  undefined *puVar10;
  
  uStack_118 = *(undefined8 *)(param_2 + 200);
  uStack_120 = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = 0x112eb8ea0;
  puVar6 = &UNK_10dad01b0;
  func_0x0001000285a8();
  func_0x000107c5f72c(&uStack_1d0);
  if ((char)uStack_1d0 == '\x01') {
    func_0x000107c5f7ac();
    FUN_1026f080c(&uStack_120);
    uStack_4b8 = uStack_d8;
    uStack_4c0 = uStack_e0;
    uStack_4a8 = uStack_c8;
    uStack_4b0 = uStack_d0;
    uStack_4a0 = uStack_c0;
    uStack_4f8 = uStack_118;
    uStack_500 = uStack_120;
    uStack_4e8 = uStack_108;
    uStack_4f0 = uStack_110;
    uStack_4d8 = uStack_f8;
    uStack_4e0 = uStack_100;
    uStack_4c8 = uStack_e8;
    uStack_4d0 = uStack_f0;
    uStack_488 = uStack_118;
    uStack_490 = uStack_120;
    uStack_478 = uStack_108;
    uStack_480 = uStack_110;
    uStack_468 = uStack_f8;
    uStack_470 = uStack_100;
    uStack_458 = uStack_e8;
    uStack_460 = uStack_f0;
    uStack_448 = uStack_d8;
    uStack_450 = uStack_e0;
    uStack_438 = uStack_c8;
    uStack_440 = uStack_d0;
    uStack_430 = uStack_c0;
    func_0x0001026f9b24(&uStack_500,&uStack_1d0,0x112eb8ff0,&UNK_10dad03d8);
    func_0x0001026f9b6c(&uStack_490,0x112eb8ff0,&UNK_10dad03d8);
    uStack_350 = uStack_4b8;
    uStack_358 = uStack_4c0;
    uStack_340 = uStack_4a8;
    uStack_348 = uStack_4b0;
    uStack_338 = uStack_4a0;
    uStack_390 = uStack_4f8;
    uStack_398 = uStack_500;
    uStack_380 = uStack_4e8;
    uStack_388 = uStack_4f0;
    uStack_370 = uStack_4d8;
    uStack_378 = uStack_4e0;
    uStack_360 = uStack_4c8;
    uStack_368 = uStack_4d0;
    uStack_3b0 = uStack_4a0;
    uStack_3c8 = uStack_4b8;
    uStack_3d0 = uStack_4c0;
    uStack_3b8 = uStack_4a8;
    uStack_3c0 = uStack_4b0;
    uStack_3e8 = uStack_4d8;
    uStack_3f0 = uStack_4e0;
    uStack_3d8 = uStack_4c8;
    uStack_3e0 = uStack_4d0;
    uStack_408 = uStack_4f8;
    uStack_410 = uStack_500;
    uStack_3f8 = uStack_4e8;
    uStack_400 = uStack_4f0;
    puVar10 = &UNK_10dad03e0;
    puVar13 = puVar10;
    uStack_420 = uVar1;
    puStack_418 = puVar6;
    uStack_3a8 = uVar1;
    puStack_3a0 = puVar6;
    func_0x0001026f9b24(&uStack_420,&uStack_120,0x112eb8ff8,&UNK_10dad03e0);
    func_0x0001026f9b6c(&uStack_3a8,0x112eb8ff8,&UNK_10dad03e0);
    uVar9 = (uint)puVar10;
    uVar2 = 0x6820657227756f59;
    uVar8 = 0xeb00000000657265;
    func_0x000107c5f414();
    uVar11 = (ulong)(uVar9 & 1);
    func_0x000107c5f5d8();
    uVar3 = 0x17;
    func_0x0001026ff85c();
    uVar1 = uVar3;
    uVar4 = uVar2;
    uVar7 = uVar8;
    uVar14 = uVar11;
    func_0x000107c5f5d4();
    func_0x000107c61574(uVar3);
    func_0x000100f795bc(uVar2,uVar8,uVar11);
    func_0x000107c6142c(puVar13);
    uVar3 = 0xd1;
    func_0x0001026ff7d0();
    uVar2 = uVar3;
    uVar8 = uVar1;
    uVar12 = uVar4;
    uVar5 = uVar7;
    func_0x000107c5f5d0();
    func_0x000107c61574(uVar3);
    func_0x000100f795bc(uVar1,uVar4,uVar7);
    func_0x000107c6142c(uVar14);
    puVar6 = &UNK_10dad0340;
    func_0x000107c614e0();
    uStack_538 = uStack_3d8;
    uStack_540 = uStack_3e0;
    uStack_528 = uStack_3c8;
    uStack_530 = uStack_3d0;
    uStack_518 = uStack_3b8;
    uStack_520 = uStack_3c0;
    uStack_510 = uStack_3b0;
    puStack_578 = puStack_418;
    uStack_580 = uStack_420;
    uStack_568 = uStack_408;
    uStack_570 = uStack_410;
    uStack_558 = uStack_3f8;
    uStack_560 = uStack_400;
    uStack_548 = uStack_3e8;
    uStack_550 = uStack_3f0;
    puStack_328 = puStack_418;
    uStack_330 = uStack_420;
    uStack_318 = uStack_408;
    uStack_320 = uStack_410;
    uStack_308 = uStack_3f8;
    uStack_310 = uStack_400;
    uStack_2f8 = uStack_3e8;
    uStack_300 = uStack_3f0;
    uStack_2c0 = uStack_3b0;
    uStack_2d8 = uStack_3c8;
    uStack_2e0 = uStack_3d0;
    uStack_2c8 = uStack_3b8;
    uStack_2d0 = uStack_3c0;
    uStack_2e8 = uStack_3d8;
    uStack_2f0 = uStack_3e0;
    uStack_168 = uStack_3b8;
    uStack_170 = uStack_3c0;
    puStack_1c8 = puStack_418;
    uStack_1d0 = uStack_420;
    uStack_1b8 = uStack_408;
    uStack_1c0 = uStack_410;
    uStack_1a8 = uStack_3f8;
    puStack_1b0 = (undefined *)uStack_400;
    uStack_198 = uStack_3e8;
    uStack_1a0 = uStack_3f0;
    uStack_178 = uStack_3c8;
    uStack_180 = uStack_3d0;
    uStack_188 = uStack_3d8;
    uStack_190 = uStack_3e0;
    uStack_160 = uStack_3b0;
    func_0x0001026f9b24(&uStack_420,&uStack_120,0x112eb8ff8,&UNK_10dad03e0);
    func_0x000100f8a880(uVar2,uVar8,uVar12);
    func_0x000107c61434(uVar5);
    func_0x000107c6157c(puVar6);
    func_0x0001026f9b24(&uStack_330,&uStack_120,0x112eb8ff8,&UNK_10dad03e0);
    func_0x000100f8a880(uVar2,uVar8,uVar12);
    func_0x000107c61434(uVar5);
    func_0x000107c6157c(puVar6);
    func_0x000100f795bc(uVar2,uVar8,uVar12);
    func_0x000107c61574(puVar6);
    func_0x000107c6142c(uVar5);
    func_0x0001026f9b6c(&uStack_580,0x112eb8ff8,&UNK_10dad03e0);
    uStack_148 = CONCAT71(uStack_148._1_7_,(char)uVar12);
    uStack_138 = SUB82(puVar6,0);
    uStack_136 = (undefined6)((ulong)puVar6 >> 0x10);
    uStack_130 = 1;
    uStack_12e = 0;
    uStack_128 = 0;
    uStack_158 = uVar2;
    uStack_150 = uVar8;
    uStack_140 = uVar5;
    FUN_1026f79bc(&uStack_1d0);
    uStack_1f8 = uStack_148;
    uStack_200 = uStack_150;
    uStack_1e8 = uStack_138;
    uStack_1f0 = uStack_140;
    uStack_1de = CONCAT17(uStack_127,CONCAT16(uStack_128,uStack_12e));
    uStack_1e6 = uStack_136;
    uStack_1e0 = uStack_130;
    uStack_238 = uStack_188;
    uStack_240 = uStack_190;
    uStack_228 = uStack_178;
    uStack_230 = uStack_180;
    uStack_218 = uStack_168;
    uStack_220 = uStack_170;
    uStack_208 = uStack_158;
    uStack_210 = uStack_160;
    puStack_278 = puStack_1c8;
    uStack_280 = uStack_1d0;
    uStack_268 = uStack_1b8;
    uStack_270 = uStack_1c0;
    uStack_258 = uStack_1a8;
    puStack_260 = puStack_1b0;
    uStack_248 = uStack_198;
    uStack_250 = uStack_1a0;
    uVar1 = 0x112eb8fc0;
    func_0x0001000285a8(0x112eb8fc0,&UNK_10dad03c0);
    uVar4 = 0x112eb8fc8;
    func_0x0001000285a8(0x112eb8fc8,&UNK_10dad03c8);
    uVar7 = 0x112eb8fd0;
    FUN_1026fa158(0x112eb8fd0,0x112eb8fc0,&UNK_10dad03c0,
                  PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
    uVar3 = uVar7;
    FUN_1026f7924();
    func_0x000107c5f490(&uStack_120,&uStack_280,uVar1,uVar4,uVar7,uVar3);
    func_0x000100f795bc(uVar2,uVar8,uVar12);
    func_0x000107c61574(puVar6);
    func_0x000107c6142c(uVar5);
    func_0x0001026f9b6c(&uStack_420,0x112eb8ff8,&UNK_10dad03e0);
  }
  else {
    uVar4 = 0x20756f7920657241;
    uVar8 = 0xed00003f65726568;
    func_0x000107c5f414();
    uVar11 = (ulong)(param_4 & 1);
    func_0x000107c5f5d8();
    uVar2 = 0x17;
    func_0x0001026ff85c();
    uVar1 = uVar2;
    uVar7 = uVar4;
    uVar3 = uVar8;
    uVar14 = uVar11;
    func_0x000107c5f5d4();
    func_0x000107c61574(uVar2);
    func_0x000100f795bc(uVar4,uVar8,uVar11);
    func_0x000107c6142c(param_5);
    uVar5 = 0xbf;
    func_0x0001026ff7d0();
    uVar4 = uVar5;
    uVar2 = uVar1;
    uVar8 = uVar7;
    uVar12 = uVar3;
    func_0x000107c5f5d0();
    func_0x000107c61574(uVar5);
    func_0x000100f795bc(uVar1,uVar7,uVar3);
    func_0x000107c6142c(uVar14);
    puVar6 = &UNK_10dad0340;
    func_0x000107c614e0();
    uStack_1c0 = CONCAT71(uStack_1c0._1_7_,(char)uVar8);
    uStack_1a8 = 1;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
    uStack_1d0 = uVar4;
    puStack_1c8 = (undefined *)uVar2;
    uStack_1b8 = uVar12;
    puStack_1b0 = puVar6;
    FUN_1026f7918(&uStack_1d0);
    uStack_1f8 = uStack_148;
    uStack_200 = uStack_150;
    uStack_1f0 = uStack_140;
    uStack_238 = uStack_188;
    uStack_240 = uStack_190;
    uStack_228 = uStack_178;
    uStack_230 = uStack_180;
    uStack_218 = uStack_168;
    uStack_220 = uStack_170;
    uStack_208 = uStack_158;
    uStack_210 = uStack_160;
    puStack_278 = puStack_1c8;
    uStack_280 = uStack_1d0;
    uStack_268 = uStack_1b8;
    uStack_270 = uStack_1c0;
    uStack_258 = uStack_1a8;
    puStack_260 = puStack_1b0;
    uStack_248 = uStack_198;
    uStack_250 = uStack_1a0;
    uVar1 = 0x112eb8fc0;
    func_0x0001000285a8(0x112eb8fc0,&UNK_10dad03c0);
    uVar4 = 0x112eb8fc8;
    func_0x0001000285a8(0x112eb8fc8,&UNK_10dad03c8);
    uVar7 = 0x112eb8fd0;
    FUN_1026fa158(0x112eb8fd0,0x112eb8fc0,&UNK_10dad03c0,
                  PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
    uVar2 = uVar7;
    FUN_1026f7924();
    func_0x000107c5f490(&uStack_120,&uStack_280,uVar1,uVar4,uVar7,uVar2);
  }
  uStack_1f8 = uStack_98;
  uStack_200 = uStack_a0;
  uStack_1f0 = uStack_90;
  uStack_1de = uStack_7e;
  uStack_238 = uStack_d8;
  uStack_240 = uStack_e0;
  uStack_228 = uStack_c8;
  uStack_230 = uStack_d0;
  uStack_218 = uStack_b8;
  uStack_220 = uStack_c0;
  uStack_208 = uStack_a8;
  uStack_210 = uStack_b0;
  puStack_278 = (undefined *)uStack_118;
  uStack_280 = uStack_120;
  uStack_268 = uStack_108;
  uStack_270 = uStack_110;
  uStack_258 = uStack_f8;
  puStack_260 = (undefined *)uStack_100;
  uStack_248 = uStack_e8;
  uStack_250 = uStack_f0;
  param_1[0x11] = uStack_98;
  param_1[0x10] = uStack_a0;
  param_1[0x13] = CONCAT62(uStack_86,uStack_88);
  param_1[0x12] = uStack_90;
  *(undefined8 *)((long)param_1 + 0xa2) = uStack_7e;
  *(ulong *)((long)param_1 + 0x9a) = CONCAT26(uStack_80,uStack_86);
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xd] = uStack_b8;
  param_1[0xc] = uStack_c0;
  param_1[0xf] = uStack_a8;
  param_1[0xe] = uStack_b0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  uStack_148 = uStack_98;
  uStack_150 = uStack_a0;
  uStack_140 = uStack_90;
  uStack_12e = (undefined6)uStack_7e;
  uStack_128 = (undefined1)((ulong)uStack_7e >> 0x30);
  uStack_127 = (undefined1)((ulong)uStack_7e >> 0x38);
  uStack_198 = uStack_e8;
  uStack_1a0 = uStack_f0;
  uStack_188 = uStack_d8;
  uStack_190 = uStack_e0;
  uStack_178 = uStack_c8;
  uStack_180 = uStack_d0;
  uStack_158 = uStack_a8;
  uStack_160 = uStack_b0;
  uStack_168 = uStack_b8;
  uStack_170 = uStack_c0;
  puStack_1c8 = (undefined *)uStack_118;
  uStack_1d0 = uStack_120;
  uStack_1b8 = uStack_108;
  uStack_1c0 = uStack_110;
  uStack_1a8 = uStack_f8;
  puStack_1b0 = (undefined *)uStack_100;
  func_0x0001026f9b24(&uStack_280,&uStack_330,0x112eb8f98,&UNK_10dad0328);
  func_0x0001026f9b6c(&uStack_1d0,0x112eb8f98,&UNK_10dad0328);
  return;
}



/* Entry: 1026f080c; end: 1026f0a37;  */

void FUN_1026f080c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_1e0 [64];
  undefined6 uStack_1a0;
  undefined2 uStack_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined2 uStack_18a;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined2 uStack_17a;
  undefined6 uStack_178;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined8 uStack_168;
  undefined1 auStack_160 [48];
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e6;
  undefined8 uStack_de;
  undefined8 uStack_d6;
  undefined8 uStack_ce;
  undefined8 uStack_c6;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  func_0x000107c5f58c();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xd1;
  FUN_1026ff7d0();
  uVar3 = uVar2;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(auStack_160,0x4024000000000000,0,0x4024000000000000,0,uVar3,param_3);
  uStack_192 = (undefined2)auStack_160._8_8_;
  uStack_190 = SUB86(auStack_160._8_8_,2);
  uStack_19a = (undefined2)auStack_160._0_8_;
  uStack_198 = SUB86(auStack_160._0_8_,2);
  uStack_182 = (undefined2)auStack_160._24_8_;
  uStack_180 = SUB86(auStack_160._24_8_,2);
  uStack_18a = (undefined2)auStack_160._16_8_;
  uStack_188 = SUB86(auStack_160._16_8_,2);
  uStack_172 = (undefined2)auStack_160._40_8_;
  uStack_170 = SUB86(auStack_160._40_8_,2);
  uStack_17a = (undefined2)auStack_160._32_8_;
  uStack_178 = SUB86(auStack_160._32_8_,2);
  uStack_11e = uStack_198;
  uStack_118 = uStack_192;
  uStack_126 = uStack_1a0;
  uStack_120 = uStack_19a;
  uStack_de = CONCAT26(uStack_192,uStack_198);
  uStack_e6 = CONCAT26(uStack_19a,uStack_1a0);
  uStack_ce = CONCAT26(uStack_182,uStack_188);
  uStack_d6 = CONCAT26(uStack_18a,uStack_190);
  uStack_10e = uStack_188;
  uStack_108 = uStack_182;
  uStack_116 = uStack_190;
  uStack_110 = uStack_18a;
  uVar3 = CONCAT26(uStack_17a,uStack_180);
  uStack_c6 = CONCAT26(uStack_17a,uStack_180);
  uStack_fe = uStack_178;
  uStack_106 = uStack_180;
  uStack_100 = uStack_17a;
  uStack_128 = 0x100;
  uStack_e8 = 0x100;
  uStack_be = uStack_178;
  uStack_b8 = uStack_172;
  uStack_130 = uVar2;
  uStack_f8 = uStack_172;
  uStack_f6 = uStack_170;
  uStack_f0 = uVar2;
  uStack_b6 = uStack_170;
  func_0x0001026f9b24(&uStack_130,&uStack_b0,0x112d4f680,&UNK_10d915678);
  func_0x0001026f9b6c(&uStack_f0,0x112d4f680,&UNK_10d915678);
  uVar2 = 0x72616d6b63656863;
  func_0x000107c5f6ec(0x72616d6b63656863,0xe90000000000006b);
  func_0x000107c5f590();
  (**(code **)(lVar9 + 0x68))
            (puVar8,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar1);
  puVar4 = puVar8;
  func_0x000107c5f5a4(0x4018000000000000,uVar3);
  (**(code **)(lVar9 + 8))(puVar8,lVar1);
  puVar5 = &UNK_10dad0238;
  func_0x000107c614e0();
  puVar6 = puVar5;
  func_0x000107c5f6d0();
  puVar7 = &UNK_10dad0268;
  func_0x000107c614e0();
  uStack_a8 = CONCAT62(uStack_126,uStack_128);
  uStack_98 = CONCAT62(uStack_116,uStack_118);
  uStack_a0 = CONCAT62(uStack_11e,uStack_120);
  uStack_198 = (undefined6)uStack_a8;
  uStack_192 = (undefined2)((uint6)uStack_126 >> 0x20);
  uStack_1a0 = (undefined6)uStack_130;
  uStack_19a = (undefined2)((ulong)uStack_130 >> 0x30);
  uStack_188 = (undefined6)uStack_98;
  uStack_182 = (undefined2)((uint6)uStack_116 >> 0x20);
  uStack_190 = (undefined6)uStack_a0;
  uStack_18a = (undefined2)((uint6)uStack_11e >> 0x20);
  uStack_88 = CONCAT62(uStack_106,uStack_108);
  uStack_90 = CONCAT62(uStack_10e,uStack_110);
  uStack_168 = CONCAT62(uStack_f6,uStack_f8);
  uStack_80 = CONCAT62(uStack_fe,uStack_100);
  uStack_178 = (undefined6)uStack_88;
  uStack_172 = (undefined2)((uint6)uStack_106 >> 0x20);
  uStack_180 = (undefined6)uStack_90;
  uStack_17a = (undefined2)((uint6)uStack_10e >> 0x20);
  uStack_170 = (undefined6)uStack_80;
  uStack_16a = (undefined2)((uint6)uStack_fe >> 0x20);
  uStack_b0 = uStack_130;
  param_1[1] = uStack_a8;
  *param_1 = uStack_130;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_168;
  param_1[6] = uStack_80;
  param_1[8] = uVar2;
  param_1[9] = puVar5;
  param_1[10] = puVar4;
  param_1[0xb] = puVar7;
  param_1[0xc] = puVar6;
  uStack_78 = uStack_168;
  func_0x0001026f9b24(&uStack_b0,auStack_1e0,0x112d4f680,&UNK_10d915678);
  func_0x0001026f9b6c(&uStack_1a0,0x112d4f680,&UNK_10d915678);
  return;
}



/* Entry: 1026f0a38; end: 1026f0f07;  */

void FUN_1026f0a38(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long extraout_x8;
  undefined8 *puVar15;
  long extraout_x8_00;
  undefined8 *puVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_2d0;
  uint uStack_2c8;
  uint uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  code *pcStack_2a0;
  undefined8 *puStack_298;
  long lStack_290;
  undefined4 uStack_284;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined1 auStack_258 [256];
  undefined8 uStack_158;
  byte bStack_150;
  undefined8 uStack_148;
  byte bStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar12 = 0x112eb8f30;
  lStack_268 = param_1;
  func_0x0001000285a8(0x112eb8f30,&UNK_10dad0298);
  lStack_278 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar12 = (long)&uStack_2d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_270 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined8 *)(lVar12 - extraout_x12);
  lVar12 = 0x112eb8f38;
  puStack_298 = puVar15;
  func_0x0001000285a8(0x112eb8f38,&UNK_10dad02a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar17 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_280 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined8 *)(lVar17 - extraout_x12_00);
  puVar9 = &UNK_11053cf98;
  puStack_260 = puVar16;
  func_0x000107c613fc(&UNK_11053cf98,0x110,7);
  uVar18 = param_2[0x18];
  uVar19 = param_2[0x1b];
  uVar13 = param_2[0x1a];
  *(undefined8 *)(puVar9 + 0xd8) = param_2[0x19];
  *(undefined8 *)(puVar9 + 0xd0) = uVar18;
  *(undefined8 *)(puVar9 + 0xe8) = uVar19;
  *(undefined8 *)(puVar9 + 0xe0) = uVar13;
  uVar18 = param_2[0x1c];
  uVar19 = param_2[0x1f];
  uVar13 = param_2[0x1e];
  *(undefined8 *)(puVar9 + 0xf8) = param_2[0x1d];
  *(undefined8 *)(puVar9 + 0xf0) = uVar18;
  *(undefined8 *)(puVar9 + 0x108) = uVar19;
  *(undefined8 *)(puVar9 + 0x100) = uVar13;
  uVar18 = param_2[0x10];
  uVar19 = param_2[0x13];
  uVar13 = param_2[0x12];
  *(undefined8 *)(puVar9 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar9 + 0x90) = uVar18;
  *(undefined8 *)(puVar9 + 0xa8) = uVar19;
  *(undefined8 *)(puVar9 + 0xa0) = uVar13;
  uVar18 = param_2[0x14];
  uVar19 = param_2[0x17];
  uVar13 = param_2[0x16];
  *(undefined8 *)(puVar9 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar9 + 0xb0) = uVar18;
  *(undefined8 *)(puVar9 + 200) = uVar19;
  *(undefined8 *)(puVar9 + 0xc0) = uVar13;
  uVar18 = param_2[8];
  uVar19 = param_2[0xb];
  uVar13 = param_2[10];
  *(undefined8 *)(puVar9 + 0x58) = param_2[9];
  *(undefined8 *)(puVar9 + 0x50) = uVar18;
  *(undefined8 *)(puVar9 + 0x68) = uVar19;
  *(undefined8 *)(puVar9 + 0x60) = uVar13;
  uVar18 = param_2[0xc];
  uVar19 = param_2[0xf];
  uVar13 = param_2[0xe];
  *(undefined8 *)(puVar9 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar9 + 0x70) = uVar18;
  *(undefined8 *)(puVar9 + 0x88) = uVar19;
  *(undefined8 *)(puVar9 + 0x80) = uVar13;
  uVar18 = *param_2;
  uVar19 = param_2[3];
  uVar13 = param_2[2];
  *(undefined8 *)(puVar9 + 0x18) = param_2[1];
  *(undefined8 *)(puVar9 + 0x10) = uVar18;
  *(undefined8 *)(puVar9 + 0x28) = uVar19;
  *(undefined8 *)(puVar9 + 0x20) = uVar13;
  uVar18 = param_2[4];
  uVar19 = param_2[7];
  uVar13 = param_2[6];
  *(undefined8 *)(puVar9 + 0x38) = param_2[5];
  *(undefined8 *)(puVar9 + 0x30) = uVar18;
  *(undefined8 *)(puVar9 + 0x48) = uVar19;
  *(undefined8 *)(puVar9 + 0x40) = uVar13;
  puVar14 = auStack_258;
  puVar15 = param_2;
  FUN_1026f737c(param_2,puVar14);
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_158,0,1,0x4042000000000000,0,puVar15,puVar14);
  uStack_2c8 = (uint)bStack_140;
  uStack_2c4 = (uint)bStack_150;
  uStack_2b8 = uStack_138;
  uStack_2b0 = uStack_148;
  uStack_2c0 = uStack_130;
  uVar10 = 0x66;
  FUN_1026ff7d0();
  uVar11 = uVar10;
  func_0x000107c5f56c();
  lVar17 = (long)puVar16 + (long)*(int *)(lVar12 + 0x24);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar12 = 0;
  uStack_284 = uVar1;
  func_0x000107c5f41c();
  pcStack_2a0 = *(code **)(*(long *)(lVar12 + -8) + 0x68);
  lStack_290 = lVar12;
  (*pcStack_2a0)(lVar17,uVar1,lVar12);
  uVar2 = uStack_2b0;
  uVar19 = uStack_2b8;
  uVar13 = uStack_2c0;
  pcStack_128 = FUN_1026f76dc;
  pcStack_118 = FUN_1026f1018;
  uStack_110 = 0;
  uStack_108 = uStack_158;
  bStack_100 = bStack_150;
  uStack_f8 = uStack_2b0;
  bStack_f0 = bStack_140;
  uStack_e8 = uStack_2b8;
  uStack_e0 = (undefined1)uStack_2c0;
  uStack_df = (undefined7)((ulong)uStack_2c0 >> 8);
  uStack_d8 = (undefined1)uVar10;
  uStack_d7 = (undefined7)((ulong)uVar10 >> 8);
  lVar12 = 0x112eb8f40;
  puStack_120 = puVar9;
  uStack_d0 = (char)uVar11;
  func_0x0001000285a8(0x112eb8f40,&UNK_10dad02a8);
  lStack_2a8 = lVar12;
  *(undefined2 *)(lVar17 + *(int *)(lVar12 + 0x24)) = 0x100;
  uVar8 = uStack_f8;
  uVar7 = uStack_108;
  puVar16 = puStack_260;
  uVar18 = CONCAT71(uStack_ef,bStack_f0);
  puVar15 = puStack_260 + 4;
  puStack_260[5] = CONCAT71(uStack_ff,bStack_100);
  *puVar15 = uVar7;
  puVar16[7] = uVar18;
  puVar16[6] = uVar8;
  uVar18 = uStack_e8;
  puVar16[9] = CONCAT71(uStack_df,uStack_e0);
  puVar16[8] = uVar18;
  uVar18 = CONCAT17(uStack_d8,uStack_df);
  *(ulong *)((long)puVar16 + 0x51) = CONCAT17(uStack_d0,uStack_d7);
  *(undefined8 *)((long)puVar16 + 0x49) = uVar18;
  uVar18 = uStack_110;
  pcVar6 = pcStack_118;
  pcVar5 = pcStack_128;
  puVar16[1] = puStack_120;
  *puVar16 = pcVar5;
  puVar16[3] = uVar18;
  puVar16[2] = pcVar6;
  pcStack_c8 = FUN_1026f76dc;
  pcStack_b8 = FUN_1026f1018;
  uStack_b0 = 0;
  uStack_a8 = uStack_158;
  uStack_a0 = (undefined1)uStack_2c4;
  uStack_98 = uVar2;
  uStack_90 = (undefined1)uStack_2c8;
  uStack_88 = uVar19;
  uStack_80 = uVar13;
  puStack_c0 = puVar9;
  uStack_78 = uVar10;
  uStack_70 = (char)uVar11;
  func_0x0001026f9b24(&pcStack_128,auStack_258,0x112eb8f48,&UNK_10dad02b0);
  func_0x0001026f9b6c(&pcStack_c8,0x112eb8f48,&UNK_10dad02b0);
  puVar9 = &UNK_11053cfc0;
  func_0x000107c613fc(&UNK_11053cfc0,0x110,7);
  uVar18 = param_2[0x18];
  uVar19 = param_2[0x1b];
  uVar13 = param_2[0x1a];
  *(undefined8 *)(puVar9 + 0xd8) = param_2[0x19];
  *(undefined8 *)(puVar9 + 0xd0) = uVar18;
  *(undefined8 *)(puVar9 + 0xe8) = uVar19;
  *(undefined8 *)(puVar9 + 0xe0) = uVar13;
  uVar18 = param_2[0x1c];
  uVar19 = param_2[0x1f];
  uVar13 = param_2[0x1e];
  *(undefined8 *)(puVar9 + 0xf8) = param_2[0x1d];
  *(undefined8 *)(puVar9 + 0xf0) = uVar18;
  *(undefined8 *)(puVar9 + 0x108) = uVar19;
  *(undefined8 *)(puVar9 + 0x100) = uVar13;
  uVar18 = param_2[0x10];
  uVar19 = param_2[0x13];
  uVar13 = param_2[0x12];
  *(undefined8 *)(puVar9 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar9 + 0x90) = uVar18;
  *(undefined8 *)(puVar9 + 0xa8) = uVar19;
  *(undefined8 *)(puVar9 + 0xa0) = uVar13;
  uVar18 = param_2[0x14];
  uVar19 = param_2[0x17];
  uVar13 = param_2[0x16];
  *(undefined8 *)(puVar9 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar9 + 0xb0) = uVar18;
  *(undefined8 *)(puVar9 + 200) = uVar19;
  *(undefined8 *)(puVar9 + 0xc0) = uVar13;
  uVar18 = param_2[8];
  uVar19 = param_2[0xb];
  uVar13 = param_2[10];
  *(undefined8 *)(puVar9 + 0x58) = param_2[9];
  *(undefined8 *)(puVar9 + 0x50) = uVar18;
  *(undefined8 *)(puVar9 + 0x68) = uVar19;
  *(undefined8 *)(puVar9 + 0x60) = uVar13;
  uVar18 = param_2[0xc];
  uVar19 = param_2[0xf];
  uVar13 = param_2[0xe];
  *(undefined8 *)(puVar9 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar9 + 0x70) = uVar18;
  *(undefined8 *)(puVar9 + 0x88) = uVar19;
  *(undefined8 *)(puVar9 + 0x80) = uVar13;
  uVar18 = *param_2;
  uVar19 = param_2[3];
  uVar13 = param_2[2];
  *(undefined8 *)(puVar9 + 0x18) = param_2[1];
  *(undefined8 *)(puVar9 + 0x10) = uVar18;
  *(undefined8 *)(puVar9 + 0x28) = uVar19;
  *(undefined8 *)(puVar9 + 0x20) = uVar13;
  uVar18 = param_2[4];
  uVar19 = param_2[7];
  uVar13 = param_2[6];
  *(undefined8 *)(puVar9 + 0x38) = param_2[5];
  *(undefined8 *)(puVar9 + 0x30) = uVar18;
  *(undefined8 *)(puVar9 + 0x48) = uVar19;
  *(undefined8 *)(puVar9 + 0x40) = uVar13;
  FUN_1026f737c(param_2,auStack_258);
  uVar13 = 99;
  FUN_1026ff7d0();
  uVar18 = uVar13;
  func_0x000107c5f56c();
  puVar15 = puStack_298;
  lVar12 = (long)puStack_298 + (long)*(int *)(lStack_278 + 0x24);
  (*pcStack_2a0)(lVar12,uStack_284,lStack_290);
  *(undefined2 *)(lVar12 + *(int *)(lStack_2a8 + 0x24)) = 0x100;
  *puVar15 = 0x1026f76e4;
  puVar15[1] = puVar9;
  puVar15[2] = FUN_1026f1248;
  puVar15[3] = 0;
  puVar15[4] = uVar13;
  *(char *)(puVar15 + 5) = (char)uVar18;
  puVar16 = puStack_260;
  lVar17 = lStack_280;
  func_0x0001026f9b24(puStack_260,lStack_280,0x112eb8f38,&UNK_10dad02a0);
  lVar3 = lStack_270;
  func_0x0001026f9b24(puVar15,lStack_270,0x112eb8f30,&UNK_10dad0298);
  lVar4 = lStack_268;
  func_0x0001026f9b24(lVar17,lStack_268,0x112eb8f38,&UNK_10dad02a0);
  lVar12 = 0x112eb8f50;
  func_0x0001000285a8(0x112eb8f50,&UNK_10dad02b8);
  func_0x0001026f9b24(lVar3,lVar4 + *(int *)(lVar12 + 0x30),0x112eb8f30,&UNK_10dad0298);
  func_0x0001026f9b6c(puVar15,0x112eb8f30,&UNK_10dad0298);
  func_0x0001026f9b6c(puVar16,0x112eb8f38,&UNK_10dad02a0);
  func_0x0001026f9b6c(lVar3,0x112eb8f30,&UNK_10dad0298);
  func_0x0001026f9b6c(lVar17,0x112eb8f38,&UNK_10dad02a0);
  return;
}



/* Entry: 1026f0f08; end: 1026f1017;  */

void FUN_1026f0f08(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_31;
  
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_31 = 2;
  uVar2 = 0x112eb8ea0;
  func_0x0001000285a8(0x112eb8ea0,&UNK_10dad01b0);
  func_0x000107c5f730(&uStack_31,uVar2);
  puVar1 = &UNK_11053cfe8;
  func_0x000107c613fc(&UNK_11053cfe8,0x110,7);
  uVar2 = param_1[0x18];
  uVar4 = param_1[0x1b];
  uVar3 = param_1[0x1a];
  *(undefined8 *)(puVar1 + 0xd8) = param_1[0x19];
  *(undefined8 *)(puVar1 + 0xd0) = uVar2;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  uVar2 = param_1[0x1c];
  uVar4 = param_1[0x1f];
  uVar3 = param_1[0x1e];
  *(undefined8 *)(puVar1 + 0xf8) = param_1[0x1d];
  *(undefined8 *)(puVar1 + 0xf0) = uVar2;
  *(undefined8 *)(puVar1 + 0x108) = uVar4;
  *(undefined8 *)(puVar1 + 0x100) = uVar3;
  uVar2 = param_1[0x10];
  uVar4 = param_1[0x13];
  uVar3 = param_1[0x12];
  *(undefined8 *)(puVar1 + 0x98) = param_1[0x11];
  *(undefined8 *)(puVar1 + 0x90) = uVar2;
  *(undefined8 *)(puVar1 + 0xa8) = uVar4;
  *(undefined8 *)(puVar1 + 0xa0) = uVar3;
  uVar2 = param_1[0x14];
  uVar4 = param_1[0x17];
  uVar3 = param_1[0x16];
  *(undefined8 *)(puVar1 + 0xb8) = param_1[0x15];
  *(undefined8 *)(puVar1 + 0xb0) = uVar2;
  *(undefined8 *)(puVar1 + 200) = uVar4;
  *(undefined8 *)(puVar1 + 0xc0) = uVar3;
  uVar2 = param_1[8];
  uVar4 = param_1[0xb];
  uVar3 = param_1[10];
  *(undefined8 *)(puVar1 + 0x58) = param_1[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = uVar4;
  *(undefined8 *)(puVar1 + 0x60) = uVar3;
  uVar2 = param_1[0xc];
  uVar4 = param_1[0xf];
  uVar3 = param_1[0xe];
  *(undefined8 *)(puVar1 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar1 + 0x70) = uVar2;
  *(undefined8 *)(puVar1 + 0x88) = uVar4;
  *(undefined8 *)(puVar1 + 0x80) = uVar3;
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[7];
  uVar3 = param_1[6];
  *(undefined8 *)(puVar1 + 0x38) = param_1[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  FUN_1026f737c(param_1,&uStack_140);
  uVar2 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dad02f0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1026f1018; end: 1026f11d7;  */

void FUN_1026f1018(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                  undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_158 [80];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar2 = 0x6f4e;
  uVar5 = 0xe200000000000000;
  func_0x000107c5f414();
  uVar7 = (ulong)(param_8 & 1);
  func_0x000107c5f5d8();
  uVar3 = 0x14;
  func_0x0001026ff85c();
  uVar11 = uVar3;
  uVar6 = uVar2;
  uVar8 = uVar5;
  uVar9 = uVar7;
  func_0x000107c5f5d4();
  uVar1 = (undefined1)uVar9;
  func_0x000107c61574(uVar3);
  func_0x000100f795bc(uVar2,uVar5,uVar7);
  func_0x000107c6142c(param_9);
  uVar4 = 0xc6;
  func_0x0001026ff7d0();
  uVar2 = uVar4;
  uVar3 = uVar11;
  uVar5 = uVar6;
  uVar10 = uVar8;
  func_0x000107c5f5d0();
  func_0x000107c61574(uVar4);
  func_0x000100f795bc(uVar11,uVar6,uVar8);
  func_0x000107c6142c();
  func_0x000107c5f568();
  uVar11 = 0x402c000000000000;
  func_0x000107c5f280();
  uStack_f8 = (undefined1)uVar5;
  uStack_d0 = (undefined1)param_4;
  uStack_cf = (undefined7)((ulong)param_4 >> 8);
  uStack_c8 = (undefined1)param_5;
  uStack_c7 = (undefined7)((ulong)param_5 >> 8);
  uStack_c0 = 0;
  uStack_70 = 0;
  uStack_108 = uVar2;
  uStack_100 = uVar3;
  uStack_f0 = uVar10;
  uStack_e8 = uVar1;
  uStack_e0 = uVar11;
  uStack_d8 = param_3;
  uStack_b8 = uVar2;
  uStack_b0 = uVar3;
  uStack_a8 = uStack_f8;
  uStack_a0 = uVar10;
  uStack_98 = uVar1;
  uStack_90 = uVar11;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x0001026f9b24(&uStack_108,auStack_158,0x112d4f490,&UNK_10d915340);
  func_0x0001026f9b6c(&uStack_b8,0x112d4f490,&UNK_10d915340);
  param_1[5] = uStack_e0;
  param_1[4] = CONCAT71(uStack_e7,uStack_e8);
  param_1[7] = CONCAT71(uStack_cf,uStack_d0);
  param_1[6] = uStack_d8;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_c0,uStack_c7);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_c8,uStack_cf);
  param_1[1] = uStack_100;
  *param_1 = uStack_108;
  param_1[3] = uStack_f0;
  param_1[2] = CONCAT71(uStack_f7,uStack_f8);
  return;
}



/* Entry: 1026f11d8; end: 1026f1247;  */

void FUN_1026f11d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5f7d4(0x3fd1eb851eb851ec);
  func_0x000107c5f300();
  func_0x000107c61574(lVar1);
  (**(code **)(param_1 + 0x50))();
  return;
}



/* Entry: 1026f1248; end: 1026f1607;  */

void FUN_1026f1248(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_5f0 [192];
  undefined7 uStack_530;
  undefined1 uStack_529;
  undefined7 uStack_528;
  undefined1 uStack_521;
  undefined7 uStack_520;
  undefined1 uStack_519;
  undefined7 uStack_518;
  undefined1 uStack_511;
  undefined7 uStack_510;
  undefined1 uStack_509;
  undefined7 uStack_508;
  undefined1 uStack_501;
  undefined7 uStack_500;
  undefined1 uStack_4f9;
  undefined7 uStack_4f8;
  undefined1 uStack_4f1;
  undefined7 uStack_4f0;
  undefined1 uStack_4e9;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 uStack_360;
  undefined8 uStack_35f;
  undefined8 uStack_357;
  undefined8 uStack_34f;
  undefined8 uStack_347;
  undefined8 uStack_33f;
  undefined8 uStack_337;
  undefined8 uStack_32f;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puVar2;
  
  func_0x000107c5f410();
  FUN_1026f1608(&uStack_130);
  uStack_448 = uStack_108;
  uStack_450 = uStack_110;
  uStack_438 = uStack_f8;
  uStack_440 = uStack_100;
  uStack_430 = uStack_f0;
  uStack_468 = uStack_128;
  uStack_470 = uStack_130;
  uStack_458 = uStack_118;
  uStack_460 = uStack_120;
  uStack_3f8 = uStack_108;
  uStack_400 = uStack_110;
  uStack_3e8 = uStack_f8;
  uStack_3f0 = uStack_100;
  uStack_3e0 = uStack_f0;
  uStack_418 = uStack_128;
  uStack_420 = uStack_130;
  uStack_408 = uStack_118;
  uStack_410 = uStack_120;
  func_0x0001026f9b24(&uStack_470,&uStack_1f0,0x112eb8f58,&UNK_10dad02c0);
  puVar2 = &uStack_420;
  func_0x0001026f9b6c(puVar2,0x112eb8f58,&UNK_10dad02c0);
  uVar1 = SUB81(puVar2,0);
  uStack_511 = (undefined1)uStack_458;
  uStack_510 = (undefined7)((ulong)uStack_458 >> 8);
  uStack_519 = (undefined1)uStack_460;
  uStack_518 = (undefined7)((ulong)uStack_460 >> 8);
  uStack_501 = (undefined1)uStack_448;
  uStack_500 = (undefined7)((ulong)uStack_448 >> 8);
  uStack_509 = (undefined1)uStack_450;
  uStack_508 = (undefined7)((ulong)uStack_450 >> 8);
  uStack_4f1 = (undefined1)uStack_438;
  uStack_4f0 = (undefined7)((ulong)uStack_438 >> 8);
  uStack_4f9 = (undefined1)uStack_440;
  uStack_4f8 = (undefined7)((ulong)uStack_440 >> 8);
  uStack_4e9 = (undefined1)uStack_430;
  uStack_4e8 = (undefined7)((ulong)uStack_430 >> 8);
  uStack_521 = (undefined1)uStack_468;
  uStack_520 = (undefined7)((ulong)uStack_468 >> 8);
  uStack_529 = (undefined1)uStack_470;
  uStack_528 = (undefined7)((ulong)uStack_470 >> 8);
  func_0x000107c5f568();
  uVar5 = CONCAT17(uStack_529,uStack_530);
  uStack_3a7 = uStack_518;
  uStack_3a0 = uStack_511;
  uStack_3af = uStack_520;
  uStack_3a8 = uStack_519;
  uVar6 = CONCAT17(uStack_4f9,uStack_500);
  uStack_397 = uStack_508;
  uStack_390 = uStack_501;
  uStack_39f = uStack_510;
  uStack_398 = uStack_509;
  uStack_387 = uStack_4f8;
  uStack_38f = uStack_500;
  uStack_388 = uStack_4f9;
  uStack_378 = CONCAT71(uStack_4e8,uStack_4e9);
  uStack_380 = uStack_4f1;
  uStack_37f = uStack_4f0;
  uStack_3c8 = 0x4014000000000000;
  uStack_3c0 = 0;
  uStack_3b7 = uStack_528;
  uStack_3b0 = uStack_521;
  uStack_3bf = uStack_530;
  uStack_3b8 = uStack_529;
  uVar4 = 0x402c000000000000;
  uVar7 = uStack_130;
  uStack_3d0 = param_2;
  func_0x000107c5f280();
  uStack_1c8 = CONCAT71(uStack_3a7,uStack_3a8);
  uStack_1d0 = CONCAT71(uStack_3af,uStack_3b0);
  uStack_1b8 = CONCAT71(uStack_397,uStack_398);
  uStack_1c0 = CONCAT71(uStack_39f,uStack_3a0);
  uStack_1a8 = CONCAT71(uStack_387,uStack_388);
  uStack_1b0 = CONCAT71(uStack_38f,uStack_390);
  uStack_1a0 = CONCAT71(uStack_37f,uStack_380);
  uStack_198 = uStack_378;
  uStack_1d8 = CONCAT71(uStack_3b7,uStack_3b8);
  uStack_1e0 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_1e8 = uStack_3c8;
  uStack_1f0 = uStack_3d0;
  uStack_368 = 0x4014000000000000;
  uStack_360 = 0;
  uStack_357 = CONCAT17(uStack_521,uStack_528);
  uStack_35f = CONCAT17(uStack_529,uStack_530);
  uStack_347 = CONCAT17(uStack_511,uStack_518);
  uStack_34f = CONCAT17(uStack_519,uStack_520);
  uStack_337 = CONCAT17(uStack_501,uStack_508);
  uStack_33f = CONCAT17(uStack_509,uStack_510);
  uStack_32f = CONCAT17(uStack_4f9,uStack_500);
  uStack_318 = CONCAT71(uStack_4e8,uStack_4e9);
  uStack_31f = uStack_4f0;
  uStack_327 = uStack_4f8;
  uStack_320 = uStack_4f1;
  uVar3 = 0x112eb8f60;
  uStack_370 = param_2;
  func_0x0001026f9b24(&uStack_3d0,&uStack_130,0x112eb8f60,&UNK_10dad02c8);
  puVar2 = &uStack_370;
  func_0x0001026f9b6c(puVar2,0x112eb8f60,&UNK_10dad02c8);
  func_0x000107c5f7ac();
  uStack_2e8 = uStack_1c8;
  uStack_2f0 = uStack_1d0;
  uStack_2d8 = uStack_1b8;
  uStack_2e0 = uStack_1c0;
  uStack_2c8 = uStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_308 = uStack_1e8;
  uStack_310 = uStack_1f0;
  uStack_2f8 = uStack_1d8;
  uStack_300 = uStack_1e0;
  uStack_298 = (undefined1)uVar6;
  uStack_297 = (undefined7)((ulong)uVar6 >> 8);
  uStack_290 = (undefined1)uVar7;
  uStack_28f = (undefined7)((ulong)uVar7 >> 8);
  uStack_288 = 0;
  uStack_2b0 = uVar1;
  uStack_2a8 = uVar4;
  uStack_2a0 = uVar5;
  func_0x000107c5f2d4(&uStack_4a0,0,1,0x4042000000000000,0,puVar2,uVar3);
  uStack_4d0 = CONCAT71(uStack_2af,uStack_2b0);
  uStack_4c8 = uStack_2a8;
  uStack_4b8 = uStack_298;
  uStack_4c0 = uStack_2a0;
  uStack_4af = uStack_28f;
  uStack_4a8 = uStack_288;
  uStack_4b7 = uStack_297;
  uStack_4b0 = uStack_290;
  uStack_508 = (undefined7)uStack_2e8;
  uStack_501 = (undefined1)((ulong)uStack_2e8 >> 0x38);
  uStack_510 = (undefined7)uStack_2f0;
  uStack_509 = (undefined1)((ulong)uStack_2f0 >> 0x38);
  uStack_4f8 = (undefined7)uStack_2d8;
  uStack_4f1 = (undefined1)((ulong)uStack_2d8 >> 0x38);
  uStack_500 = (undefined7)uStack_2e0;
  uStack_4f9 = (undefined1)((ulong)uStack_2e0 >> 0x38);
  uStack_4e8 = (undefined7)uStack_2c8;
  uStack_4e1 = (undefined1)((ulong)uStack_2c8 >> 0x38);
  uStack_4f0 = (undefined7)uStack_2d0;
  uStack_4e9 = (undefined1)((ulong)uStack_2d0 >> 0x38);
  uStack_4d8 = uStack_2b8;
  uStack_4e0 = uStack_2c0;
  uStack_528 = (undefined7)uStack_308;
  uStack_521 = (undefined1)((ulong)uStack_308 >> 0x38);
  uStack_530 = (undefined7)uStack_310;
  uStack_529 = (undefined1)((ulong)uStack_310 >> 0x38);
  uStack_518 = (undefined7)uStack_2f8;
  uStack_511 = (undefined1)((ulong)uStack_2f8 >> 0x38);
  uStack_520 = (undefined7)uStack_300;
  uStack_519 = (undefined1)((ulong)uStack_300 >> 0x38);
  uStack_258 = uStack_1c8;
  uStack_260 = uStack_1d0;
  uStack_248 = uStack_1b8;
  uStack_250 = uStack_1c0;
  uStack_238 = uStack_1a8;
  uStack_240 = uStack_1b0;
  uStack_228 = uStack_198;
  uStack_230 = uStack_1a0;
  uStack_278 = uStack_1e8;
  uStack_280 = uStack_1f0;
  uStack_268 = uStack_1d8;
  uStack_270 = uStack_1e0;
  uStack_1f8 = 0;
  uStack_220 = uVar1;
  uStack_218 = uVar4;
  uStack_210 = uVar5;
  uStack_208 = uVar6;
  func_0x0001026f9b24(&uStack_310,&uStack_130,0x112eb8f68,&UNK_10dad02d0);
  func_0x0001026f9b6c(&uStack_280,0x112eb8f68,&UNK_10dad02d0);
  uStack_168 = CONCAT71(uStack_4a7,uStack_4a8);
  uStack_170 = CONCAT71(uStack_4af,uStack_4b0);
  uStack_a8 = CONCAT71(uStack_4a7,uStack_4a8);
  uStack_b0 = CONCAT71(uStack_4af,uStack_4b0);
  uStack_158 = uStack_498;
  uStack_160 = uStack_4a0;
  uStack_148 = uStack_488;
  uStack_150 = uStack_490;
  uStack_138 = uStack_478;
  uStack_140 = uStack_480;
  uStack_1a8 = CONCAT17(uStack_4e1,uStack_4e8);
  uStack_1b0 = CONCAT17(uStack_4e9,uStack_4f0);
  uStack_e8 = CONCAT17(uStack_4e1,uStack_4e8);
  uStack_f0 = CONCAT17(uStack_4e9,uStack_4f0);
  uStack_198 = uStack_4d8;
  uStack_1a0 = uStack_4e0;
  uStack_178 = CONCAT71(uStack_4b7,uStack_4b8);
  uStack_b8 = CONCAT71(uStack_4b7,uStack_4b8);
  uStack_188 = uStack_4c8;
  uStack_190 = uStack_4d0;
  uStack_180 = uStack_4c0;
  uStack_1e8 = CONCAT17(uStack_521,uStack_528);
  uStack_1f0 = CONCAT17(uStack_529,uStack_530);
  uStack_1d8 = CONCAT17(uStack_511,uStack_518);
  uStack_1e0 = CONCAT17(uStack_519,uStack_520);
  uStack_128 = CONCAT17(uStack_521,uStack_528);
  uStack_130 = CONCAT17(uStack_529,uStack_530);
  uStack_118 = CONCAT17(uStack_511,uStack_518);
  uStack_120 = CONCAT17(uStack_519,uStack_520);
  uStack_1c8 = CONCAT17(uStack_501,uStack_508);
  uStack_1d0 = CONCAT17(uStack_509,uStack_510);
  uStack_1b8 = CONCAT17(uStack_4f1,uStack_4f8);
  uStack_1c0 = CONCAT17(uStack_4f9,uStack_500);
  uStack_108 = CONCAT17(uStack_501,uStack_508);
  uStack_110 = CONCAT17(uStack_509,uStack_510);
  uStack_f8 = CONCAT17(uStack_4f1,uStack_4f8);
  uStack_100 = CONCAT17(uStack_4f9,uStack_500);
  uStack_98 = uStack_498;
  uStack_a0 = uStack_4a0;
  uStack_88 = uStack_488;
  uStack_90 = uStack_490;
  uStack_78 = uStack_478;
  uStack_80 = uStack_480;
  uStack_d8 = uStack_4d8;
  uStack_e0 = uStack_4e0;
  uStack_c8 = uStack_4c8;
  uStack_d0 = uStack_4d0;
  uStack_c0 = uStack_4c0;
  func_0x0001026f9b24(&uStack_1f0,auStack_5f0,0x112eb8f70,&UNK_10dad02d8);
  func_0x0001026f9b6c(&uStack_130,0x112eb8f70,&UNK_10dad02d8);
  param_1[0x11] = uStack_168;
  param_1[0x10] = uStack_170;
  param_1[0x13] = uStack_158;
  param_1[0x12] = uStack_160;
  param_1[0x15] = uStack_148;
  param_1[0x14] = uStack_150;
  param_1[0x17] = uStack_138;
  param_1[0x16] = uStack_140;
  param_1[9] = uStack_1a8;
  param_1[8] = uStack_1b0;
  param_1[0xb] = uStack_198;
  param_1[10] = uStack_1a0;
  param_1[0xd] = uStack_188;
  param_1[0xc] = uStack_190;
  param_1[0xf] = uStack_178;
  param_1[0xe] = uStack_180;
  param_1[1] = uStack_1e8;
  *param_1 = uStack_1f0;
  param_1[3] = uStack_1d8;
  param_1[2] = uStack_1e0;
  param_1[5] = uStack_1c8;
  param_1[4] = uStack_1d0;
  param_1[7] = uStack_1b8;
  param_1[6] = uStack_1c0;
  return;
}



/* Entry: 1026f1608; end: 1026f18af;  */

void FUN_1026f1608(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 in_x3;
  ulong uVar16;
  undefined8 uVar17;
  long extraout_x8;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  func_0x000107c5f58c();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar19 = auStack_a0 + lVar1;
  uVar4 = 0x72616d6b63656863;
  func_0x000107c5f6ec(0x72616d6b63656863,0xe90000000000006b);
  uStack_78 = uVar4;
  func_0x000107c5f590();
  lVar13 = lVar3;
  (**(code **)(lVar18 + 0x68))
            (puVar19,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar3);
  uVar12 = (uint)lVar13;
  puVar5 = puVar19;
  func_0x000107c5f5a4(0x4028000000000000,param_2);
  puStack_80 = puVar5;
  (**(code **)(lVar18 + 8))(puVar19,lVar3);
  puVar6 = &UNK_10dad0238;
  func_0x000107c614e0();
  uVar4 = 0x2e;
  puStack_88 = puVar6;
  FUN_1026ff7d0();
  puVar6 = &UNK_10dad0268;
  uStack_90 = uVar4;
  func_0x000107c614e0();
  uVar7 = 0x736559;
  uVar10 = 0xe300000000000000;
  puStack_98 = puVar6;
  func_0x000107c5f414();
  *(undefined2 *)((long)auStack_a8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = 0;
  uVar14 = (ulong)(uVar12 & 1);
  func_0x000107c5f5d8();
  uVar8 = 0x14;
  func_0x0001026ff85c();
  uVar4 = uVar8;
  uVar11 = uVar7;
  uVar15 = uVar10;
  uVar16 = uVar14;
  func_0x000107c5f5d4();
  func_0x000107c61574(uVar8);
  func_0x000100f795bc(uVar7,uVar10,uVar14);
  func_0x000107c6142c(in_x3);
  uVar9 = 0x52;
  FUN_1026ff7d0();
  uVar7 = uVar9;
  uVar8 = uVar4;
  uVar10 = uVar11;
  uVar17 = uVar15;
  func_0x000107c5f5d0();
  func_0x000107c61574(uVar9);
  func_0x000100f795bc(uVar4,uVar11,uVar15);
  func_0x000107c6142c(uVar16);
  uVar11 = uStack_78;
  puVar5 = puStack_80;
  puVar2 = puStack_88;
  uVar4 = uStack_90;
  puVar6 = puStack_98;
  *param_1 = uStack_78;
  param_1[1] = puStack_88;
  param_1[2] = puStack_80;
  param_1[3] = puStack_98;
  param_1[4] = uStack_90;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  *(char *)(param_1 + 7) = (char)uVar10;
  param_1[8] = uVar17;
  func_0x000107c6157c(uStack_78);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar4);
  func_0x000100f8a880(uVar7,uVar8,uVar10);
  func_0x000107c61434(uVar17);
  func_0x000100f795bc(uVar7,uVar8,uVar10);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar11);
  func_0x000107c6142c(uVar17);
  return;
}



/* Entry: 1026f18b0; end: 1026f1dd3;  */

void FUN_1026f18b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_670 [96];
  undefined8 uStack_610;
  undefined8 uStack_608;
  code *pcStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined3 uStack_5c8;
  undefined5 uStack_5c5;
  undefined3 uStack_5c0;
  undefined5 uStack_5bd;
  undefined3 uStack_5b8;
  undefined5 uStack_5b5;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined3 uStack_568;
  undefined5 uStack_565;
  undefined3 uStack_560;
  undefined8 uStack_55d;
  undefined8 uStack_550;
  undefined8 uStack_548;
  code *pcStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined3 uStack_508;
  undefined5 uStack_505;
  undefined3 uStack_500;
  undefined8 uStack_4fd;
  undefined8 uStack_4f0;
  undefined1 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  code *pcStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined7 uStack_457;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined7 uStack_43f;
  undefined1 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined2 uStack_387;
  undefined5 uStack_385;
  undefined1 uStack_380;
  undefined2 uStack_37f;
  undefined6 uStack_37d;
  undefined2 uStack_377;
  undefined8 uStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined8 uStack_31f;
  undefined2 uStack_317;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined2 uStack_207;
  undefined5 uStack_205;
  undefined1 uStack_200;
  undefined2 uStack_1ff;
  undefined6 uStack_1fd;
  undefined2 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined2 uStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined3 uStack_148;
  undefined5 uStack_145;
  undefined3 uStack_140;
  undefined8 uStack_13d;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined2 uStack_e7;
  undefined5 uStack_e5;
  undefined1 uStack_e0;
  undefined2 uStack_df;
  undefined6 uStack_dd;
  undefined2 uStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_4f0,0x4044000000000000,0,0x4044000000000000,0,uVar2,param_3);
  uVar3 = 0x66;
  FUN_1026ff7d0();
  uVar2 = uVar3;
  func_0x000107c5f56c();
  pcStack_480 = FUN_1026f1dd4;
  uStack_478 = 0;
  uStack_470 = uStack_4f0;
  uStack_468 = uStack_4e8;
  uStack_460 = uStack_4e0;
  uStack_458 = uStack_4d8;
  uStack_450 = uStack_4d0;
  uStack_448 = (undefined1)uStack_4c8;
  uStack_447 = (undefined7)((ulong)uStack_4c8 >> 8);
  uStack_440 = (undefined1)uVar3;
  uStack_43f = (undefined7)((ulong)uVar3 >> 8);
  uStack_438 = (undefined1)uVar2;
  uStack_108 = CONCAT71(uStack_467,uStack_4e8);
  uStack_f8 = CONCAT71(uStack_457,uStack_4d8);
  uStack_110 = uStack_4f0;
  uStack_100 = uStack_4e0;
  uStack_f0 = uStack_4d0;
  uStack_df = (undefined2)((ulong)uVar3 >> 8);
  uStack_dd = (undefined6)(CONCAT17(uStack_438,uStack_43f) >> 0x10);
  uStack_e7 = (undefined2)((ulong)uStack_4c8 >> 8);
  uStack_e5 = (undefined5)((ulong)uStack_4c8 >> 0x18);
  uStack_e0 = uStack_440;
  uStack_118 = 0;
  pcStack_120 = FUN_1026f1dd4;
  pcStack_420 = FUN_1026f1dd4;
  uStack_418 = 0;
  uStack_410 = uStack_4f0;
  uStack_408 = uStack_4e8;
  uStack_400 = uStack_4e0;
  uStack_3f8 = uStack_4d8;
  uStack_3f0 = uStack_4d0;
  uStack_3e8 = uStack_4c8;
  uStack_490 = uVar4;
  uStack_488 = uVar1;
  uStack_430 = uVar4;
  uStack_428 = uVar1;
  uStack_3e0 = uVar3;
  uStack_3d8 = uStack_438;
  uStack_130 = uVar4;
  uStack_128 = uVar1;
  uStack_e8 = uStack_448;
  func_0x0001026f9b24(&uStack_490,&uStack_d0,0x112eb8f20,&UNK_10dad0228);
  func_0x0001026f9b6c(&uStack_430,0x112eb8f20,&UNK_10dad0228);
  uStack_3a8 = uStack_108;
  uStack_3b0 = uStack_110;
  uStack_398 = uStack_f8;
  uStack_3a0 = uStack_100;
  uStack_328 = uStack_e8;
  uStack_388 = uStack_e8;
  uStack_390 = uStack_f0;
  uStack_31f = CONCAT62(uStack_dd,uStack_df);
  uStack_327 = CONCAT52(uStack_e5,uStack_e7);
  uStack_37f = uStack_df;
  uStack_37d = uStack_dd;
  uStack_387 = uStack_e7;
  uStack_385 = uStack_e5;
  uStack_380 = uStack_e0;
  uStack_3c8 = uStack_128;
  uStack_3d0 = uStack_130;
  uStack_3b8 = uStack_118;
  pcStack_3c0 = pcStack_120;
  uStack_377 = 0x100;
  uStack_368 = uStack_128;
  uStack_370 = uStack_130;
  uStack_358 = uStack_118;
  pcStack_360 = pcStack_120;
  uStack_338 = uStack_f8;
  uStack_340 = uStack_100;
  uStack_330 = uStack_f0;
  uStack_348 = uStack_108;
  uStack_350 = uStack_110;
  uStack_320 = uStack_e0;
  uStack_317 = 0x100;
  uVar4 = 0x112eb8f28;
  func_0x0001026f9b24(&uStack_3d0,&uStack_d0,0x112eb8f28,&UNK_10dad0230);
  func_0x0001026f9b6c(&uStack_370,0x112eb8f28,&UNK_10dad0230);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_4c0,0x4044000000000000,0,0x4044000000000000,0,uVar3,uVar4);
  uVar3 = 0x66;
  FUN_1026ff7d0();
  uVar4 = uVar3;
  func_0x000107c5f56c();
  uStack_300 = 0x1026f1df4;
  uStack_2f8 = 0;
  uStack_2f0 = uStack_4c0;
  uStack_2e8 = uStack_4b8;
  uStack_2e0 = uStack_4b0;
  uStack_2d8 = uStack_4a8;
  uStack_2d0 = uStack_4a0;
  uStack_2c8 = (undefined1)uStack_498;
  uStack_2c7 = (undefined7)((ulong)uStack_498 >> 8);
  uStack_2c0 = (undefined1)uVar3;
  uStack_2bf = (undefined7)((ulong)uVar3 >> 8);
  uStack_2b8 = (undefined1)uVar4;
  uStack_108 = CONCAT71(uStack_2e7,uStack_4b8);
  uStack_f8 = CONCAT71(uStack_2d7,uStack_4a8);
  uStack_110 = uStack_4c0;
  uStack_100 = uStack_4b0;
  uStack_f0 = uStack_4a0;
  uStack_df = (undefined2)((ulong)uVar3 >> 8);
  uStack_dd = (undefined6)(CONCAT17(uStack_2b8,uStack_2bf) >> 0x10);
  uStack_e7 = (undefined2)((ulong)uStack_498 >> 8);
  uStack_e5 = (undefined5)((ulong)uStack_498 >> 0x18);
  uStack_e0 = uStack_2c0;
  uStack_118 = 0;
  pcStack_120 = (code *)0x1026f1df4;
  uStack_2a0 = 0x1026f1df4;
  uStack_298 = 0;
  uStack_290 = uStack_4c0;
  uStack_288 = uStack_4b8;
  uStack_280 = uStack_4b0;
  uStack_278 = uStack_4a8;
  uStack_270 = uStack_4a0;
  uStack_268 = uStack_498;
  uStack_310 = uVar1;
  uStack_308 = uVar2;
  uStack_2b0 = uVar1;
  uStack_2a8 = uVar2;
  uStack_260 = uVar3;
  uStack_258 = uStack_2b8;
  uStack_130 = uVar1;
  uStack_128 = uVar2;
  uStack_e8 = uStack_2c8;
  func_0x0001026f9b24(&uStack_310,&uStack_d0,0x112eb8f20,&UNK_10dad0228);
  func_0x0001026f9b6c(&uStack_2b0,0x112eb8f20,&UNK_10dad0228);
  uStack_228 = uStack_108;
  uStack_230 = uStack_110;
  uStack_218 = uStack_f8;
  uStack_220 = uStack_100;
  uStack_1a8 = uStack_e8;
  uStack_208 = uStack_e8;
  uStack_210 = uStack_f0;
  uStack_19f = CONCAT62(uStack_dd,uStack_df);
  uStack_1a7 = CONCAT52(uStack_e5,uStack_e7);
  uStack_1ff = uStack_df;
  uStack_1fd = uStack_dd;
  uStack_207 = uStack_e7;
  uStack_205 = uStack_e5;
  uStack_200 = uStack_e0;
  uStack_248 = uStack_128;
  uStack_250 = uStack_130;
  uStack_238 = uStack_118;
  uStack_240 = pcStack_120;
  uStack_1f7 = 0x100;
  uStack_1d8 = uStack_118;
  uStack_1e0 = pcStack_120;
  uStack_1e8 = uStack_128;
  uStack_1f0 = uStack_130;
  uStack_1b0 = uStack_f0;
  uStack_1b8 = uStack_f8;
  uStack_1c0 = uStack_100;
  uStack_1c8 = uStack_108;
  uStack_1d0 = uStack_110;
  uStack_1a0 = uStack_e0;
  uStack_197 = 0x100;
  func_0x0001026f9b24(&uStack_250,&uStack_d0,0x112eb8f28,&UNK_10dad0230);
  func_0x0001026f9b6c(&uStack_1f0,0x112eb8f28,&UNK_10dad0230);
  uStack_528 = uStack_3a8;
  uStack_530 = uStack_3b0;
  uStack_518 = uStack_398;
  uStack_520 = uStack_3a0;
  uStack_508 = CONCAT21(uStack_387,uStack_388);
  uStack_148 = CONCAT21(uStack_387,uStack_388);
  uStack_510 = uStack_390;
  uStack_4fd = CONCAT26(uStack_377,uStack_37d);
  uStack_505 = uStack_385;
  uStack_500 = (undefined3)(CONCAT26(uStack_37f,CONCAT15(uStack_380,uStack_385)) >> 0x28);
  uStack_548 = uStack_3c8;
  uStack_550 = uStack_3d0;
  uStack_538 = uStack_3b8;
  pcStack_540 = pcStack_3c0;
  uStack_c8 = uStack_248;
  uStack_d0 = uStack_250;
  uStack_b8 = uStack_238;
  uStack_c0 = uStack_240;
  uStack_7d = CONCAT26(uStack_1f7,uStack_1fd);
  uStack_80 = (undefined3)(CONCAT26(uStack_1ff,CONCAT15(uStack_200,uStack_205)) >> 0x28);
  uStack_88 = CONCAT21(uStack_207,uStack_208);
  uStack_85 = uStack_205;
  uStack_90 = uStack_210;
  uStack_a8 = uStack_228;
  uStack_b0 = uStack_230;
  uStack_98 = uStack_218;
  uStack_a0 = uStack_220;
  uStack_178 = uStack_3b8;
  pcStack_180 = pcStack_3c0;
  uStack_188 = uStack_3c8;
  uStack_190 = uStack_3d0;
  uStack_13d = CONCAT26(uStack_377,uStack_37d);
  uStack_140 = (undefined3)(CONCAT26(uStack_37f,CONCAT15(uStack_380,uStack_385)) >> 0x28);
  uStack_145 = uStack_385;
  uStack_150 = uStack_390;
  uStack_158 = uStack_398;
  uStack_160 = uStack_3a0;
  uStack_168 = uStack_3a8;
  uStack_170 = uStack_3b0;
  uStack_608 = uStack_3c8;
  uStack_610 = uStack_3d0;
  uStack_5f8 = uStack_3b8;
  pcStack_600 = pcStack_3c0;
  uStack_5bd = (undefined5)uStack_37d;
  uStack_5b8 = (undefined3)(CONCAT26(uStack_377,uStack_37d) >> 0x28);
  uStack_5c0 = (undefined3)(CONCAT26(uStack_37f,CONCAT15(uStack_380,uStack_385)) >> 0x28);
  uStack_5e8 = uStack_3a8;
  uStack_5f0 = uStack_3b0;
  uStack_5d8 = uStack_398;
  uStack_5e0 = uStack_3a0;
  uStack_118 = uStack_238;
  pcStack_120 = (code *)uStack_240;
  uStack_128 = uStack_248;
  uStack_130 = uStack_250;
  uStack_dd = uStack_1fd;
  uStack_d7 = uStack_1f7;
  uStack_e0 = uStack_200;
  uStack_df = uStack_1ff;
  uStack_e8 = uStack_208;
  uStack_e7 = uStack_207;
  uStack_e5 = uStack_205;
  uStack_f0 = uStack_210;
  uStack_f8 = uStack_218;
  uStack_100 = uStack_220;
  uStack_108 = uStack_228;
  uStack_110 = uStack_230;
  uStack_5c8 = CONCAT21(uStack_387,uStack_388);
  uStack_5c5 = uStack_385;
  uStack_5d0 = uStack_390;
  uStack_5a8 = uStack_248;
  uStack_5b0 = uStack_250;
  uStack_598 = uStack_238;
  uStack_5a0 = uStack_240;
  uStack_55d = CONCAT26(uStack_1f7,uStack_1fd);
  uStack_560 = (undefined3)(CONCAT26(uStack_1ff,CONCAT15(uStack_200,uStack_205)) >> 0x28);
  uStack_568 = CONCAT21(uStack_207,uStack_208);
  uStack_578 = uStack_218;
  uStack_580 = uStack_220;
  uStack_565 = uStack_205;
  uStack_570 = uStack_210;
  uStack_588 = uStack_228;
  uStack_590 = uStack_230;
  param_1[5] = uStack_3a8;
  param_1[4] = uStack_3b0;
  param_1[7] = uStack_398;
  param_1[6] = uStack_3a0;
  param_1[1] = uStack_3c8;
  *param_1 = uStack_3d0;
  param_1[3] = uStack_3b8;
  param_1[2] = pcStack_3c0;
  param_1[0xd] = uStack_248;
  param_1[0xc] = uStack_250;
  param_1[0xf] = uStack_238;
  param_1[0xe] = uStack_240;
  param_1[9] = CONCAT53(uStack_385,uStack_5c8);
  param_1[8] = uStack_390;
  param_1[0xb] = CONCAT53(uStack_5b5,uStack_5b8);
  param_1[10] = CONCAT53(uStack_5bd,uStack_5c0);
  *(undefined8 *)((long)param_1 + 0xb3) = uStack_55d;
  *(ulong *)((long)param_1 + 0xab) = CONCAT35(uStack_560,uStack_205);
  param_1[0x13] = uStack_218;
  param_1[0x12] = uStack_220;
  param_1[0x15] = CONCAT53(uStack_205,uStack_568);
  param_1[0x14] = uStack_210;
  param_1[0x11] = uStack_228;
  param_1[0x10] = uStack_230;
  func_0x0001026f9b24(&uStack_190,auStack_670,0x112eb8f28,&UNK_10dad0230);
  func_0x0001026f9b24(&uStack_130,auStack_670,0x112eb8f28,&UNK_10dad0230);
  func_0x0001026f9b6c(&uStack_d0,0x112eb8f28,&UNK_10dad0230);
  func_0x0001026f9b6c(&uStack_550,0x112eb8f28,&UNK_10dad0230);
  return;
}



/* Entry: 1026f1dd4; end: 1026f1e17;  */

void FUN_1026f1dd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  
  uVar1 = 0x662e6172656d6163;
  lVar2 = 0;
  func_0x000107c5f58c();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f6ec(0x662e6172656d6163,0xeb000000006c6c69);
  func_0x000107c5f594();
  (**(code **)(lVar8 + 0x68))
            (puVar7,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar2);
  puVar3 = puVar7;
  func_0x000107c5f5a4(0x4030000000000000,param_2);
  (**(code **)(lVar8 + 8))(puVar7,lVar2);
  puVar4 = &UNK_10dad0238;
  func_0x000107c614e0();
  uVar5 = 0x48;
  FUN_1026ff7d0();
  puVar6 = &UNK_10dad0268;
  func_0x000107c614e0();
  *param_1 = uVar1;
  param_1[1] = puVar4;
  param_1[2] = puVar3;
  param_1[3] = puVar6;
  param_1[4] = uVar5;
  return;
}



/* Entry: 1026f1e18; end: 1026f1f1b;  */

void FUN_1026f1e18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5f58c();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f6ec(param_3,param_4);
  func_0x000107c5f594();
  (**(code **)(lVar7 + 0x68))
            (puVar6,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar1);
  puVar2 = puVar6;
  func_0x000107c5f5a4(0x4030000000000000,param_2);
  (**(code **)(lVar7 + 8))(puVar6,lVar1);
  puVar3 = &UNK_10dad0238;
  func_0x000107c614e0();
  uVar4 = 0x48;
  FUN_1026ff7d0();
  puVar5 = &UNK_10dad0268;
  func_0x000107c614e0();
  *param_1 = param_3;
  param_1[1] = puVar3;
  param_1[2] = puVar2;
  param_1[3] = puVar5;
  param_1[4] = uVar4;
  return;
}



/* Entry: 1026f1f1c; end: 1026f1f93;  */

void FUN_1026f1f1c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  lVar5 = *(long *)(param_2 + 0x60);
  lVar4 = *(long *)(param_2 + 0x68);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026f1f94;
  plVar3[0x16] = lVar4;
  plVar3[0x17] = param_2;
  plVar3[0x15] = lVar5;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar3[0x18] = lVar5;
  lVar5 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[0x19] = lVar4;
  plVar3[0x1a] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f20d4,lVar4,lVar5);
  return;
}



/* Entry: 1026f1f94; end: 1026f200f;  */

void FUN_1026f1f94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  uVar1 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f2010,uVar2,uVar1);
  return;
}



/* Entry: 1026f2010; end: 1026f203f;  */

void FUN_1026f2010(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001026f203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026f2040; end: 1026f20d3;  */

void FUN_1026f2040(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  uVar3 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f20d4,uVar2,uVar3);
  return;
}



/* Entry: 1026f20d4; end: 1026f21db;  */

void FUN_1026f20d4(void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(lVar2 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  puVar3 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined1 *)(unaff_x22 + 0xf8) = 1;
  uVar4 = 0x112eb8db0;
  func_0x0001026f9b24(unaff_x22 + 0x10,unaff_x22 + 0x30,0x112eb8db0,&UNK_10dad00b0);
  func_0x0001026f9b24(puVar3,unaff_x22 + 0x98,0x112eb8f78,&UNK_10dad0300);
  func_0x0001026f9b24(puVar3,unaff_x22 + 0xa0,0x112eb8f78,&UNK_10dad0300);
  func_0x0001000285a8(0x112eb8db0,&UNK_10dad00b0);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar4;
  func_0x000107c5f730((undefined1 *)(unaff_x22 + 0xf8),uVar4);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026f21dc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(300000000)
  ;
  return;
}



/* Entry: 1026f21dc; end: 1026f223b;  */

void FUN_1026f21dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_1026f223c;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = (code *)0x1026fa52c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1026f223c; end: 1026f22c3;  */

void FUN_1026f223c(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)(unaff_x22 + 0xf9) = 2;
  func_0x000107c5f730((undefined1 *)(unaff_x22 + 0xf9),*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x0001026f9b6c(unaff_x22 + 0x10,0x112eb8db0,&UNK_10dad00b0);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026f22c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(350000000)
  ;
  return;
}



/* Entry: 1026f22c4; end: 1026f2323;  */

void FUN_1026f22c4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_1026f2324;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = (code *)0x1026fa50c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1026f2324; end: 1026f241f;  */

void FUN_1026f2324(void)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 200);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x0001000285a8(0x112eb8ea0,&UNK_10dad01b0);
  func_0x000107c5f72c(unaff_x22 + 0xfa);
  if (*(char *)(unaff_x22 + 0xfa) == '\x01') {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0xe8);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0xe0);
    *(undefined1 *)(unaff_x22 + 0xfd) = 1;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
    uVar2 = 0x112d4f580;
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    func_0x000107c5f730((undefined1 *)(unaff_x22 + 0xfd),uVar2);
  }
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)(unaff_x22 + 0xfb) = 3;
  func_0x000107c5f730((undefined1 *)(unaff_x22 + 0xfb),*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x0001026f9b6c(unaff_x22 + 0x10,0x112eb8db0,&UNK_10dad00b0);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1026f2420;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(800000000)
  ;
  return;
}



/* Entry: 1026f2420; end: 1026f247f;  */

void FUN_1026f2420(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_1026f2480;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = (code *)0x1026fa508;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1026f2480; end: 1026f24ff;  */

void FUN_1026f2480(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  pcVar1 = *(code **)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)(unaff_x22 + 0xfc) = 4;
  func_0x000107c5f730((undefined1 *)(unaff_x22 + 0xfc),uVar2);
  func_0x0001026f9b6c(unaff_x22 + 0x10,0x112eb8db0,&UNK_10dad00b0);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0001026f24fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026f2500; end: 1026f2577;  */

void FUN_1026f2500(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar4 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  lVar3 = *(long *)(param_2 + 0x70);
  lVar2 = *(long *)(param_2 + 0x78);
  plVar5 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1026f2578;
  plVar5[0x16] = lVar2;
  plVar5[0x17] = param_2;
  plVar5[0x15] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[0x18] = lVar3;
  lVar3 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[0x19] = lVar2;
  plVar5[0x1a] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f20d4,lVar2,lVar3);
  return;
}



/* Entry: 1026f2578; end: 1026f25f3;  */

void FUN_1026f2578(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  uVar1 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1026fa4a8,uVar2,uVar1);
  return;
}



/* Entry: 1026f25f4; end: 1026f2703;  */

void FUN_1026f25f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  char cStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[0x19];
  uStack_70 = unaff_x20[0x18];
  uStack_58 = unaff_x20[0x1b];
  uStack_60 = unaff_x20[0x1a];
  uStack_138 = unaff_x20[0x1b];
  uStack_140 = unaff_x20[0x1a];
  uStack_48 = unaff_x20[0x1d];
  uStack_50 = unaff_x20[0x1c];
  uStack_38 = unaff_x20[0x1f];
  uStack_40 = unaff_x20[0x1e];
  uStack_a8 = unaff_x20[0x11];
  uStack_b0 = unaff_x20[0x10];
  uStack_98 = unaff_x20[0x13];
  uStack_a0 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  uVar1 = 0x112eb8db0;
  puVar3 = &UNK_10dad00b0;
  func_0x0001000285a8();
  func_0x000107c5f72c(&cStack_141);
  if (cStack_141 != '\x04') {
    func_0x000107c5f7b0();
    *param_1 = uVar1;
    param_1[1] = puVar3;
    lVar2 = 0x112eb8db8;
    func_0x0001000285a8(0x112eb8db8,&UNK_10dad00b8);
    FUN_1026ed288((long)param_1 + (long)*(int *)(lVar2 + 0x2c),&uStack_130);
  }
  lVar2 = 0x112eb8dc0;
  func_0x0001000285a8(0x112eb8dc0,&UNK_10dad00c0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,cStack_141 == '\x04',1,lVar2);
  return;
}



/* Entry: 1026f2704; end: 1026f2e03;  */

void FUN_1026f2704(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  undefined8 *unaff_x20;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 auStack_6d0 [2];
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined1 *puStack_690;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 auStack_668 [2];
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4dd;
  undefined8 uStack_4d5;
  undefined8 uStack_4cd;
  undefined8 uStack_4c5;
  undefined8 uStack_4bd;
  undefined8 uStack_4b5;
  undefined8 uStack_4ad;
  undefined8 uStack_4a5;
  undefined5 uStack_49d;
  undefined3 uStack_498;
  undefined5 uStack_495;
  undefined8 uStack_490;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 *puStack_458;
  undefined2 uStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 *puStack_418;
  undefined2 uStack_410;
  undefined6 uStack_40e;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined2 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined3 uStack_328;
  undefined5 uStack_325;
  undefined3 uStack_320;
  undefined5 uStack_31d;
  undefined3 uStack_318;
  undefined5 uStack_315;
  undefined3 uStack_310;
  undefined5 uStack_30d;
  undefined3 uStack_308;
  undefined5 uStack_305;
  undefined3 uStack_300;
  undefined5 uStack_2fd;
  undefined3 uStack_2f8;
  undefined5 uStack_2f5;
  undefined3 uStack_2f0;
  undefined5 uStack_2ed;
  undefined3 uStack_2e8;
  undefined5 uStack_2e5;
  undefined3 uStack_2e0;
  undefined5 uStack_2dd;
  undefined3 uStack_2d8;
  undefined5 uStack_2d5;
  undefined3 uStack_2d0;
  undefined5 uStack_2cd;
  undefined3 uStack_2c8;
  undefined5 uStack_2c5;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined2 uStack_288;
  undefined5 uStack_280;
  undefined3 uStack_27b;
  undefined5 uStack_278;
  undefined3 uStack_273;
  undefined5 uStack_270;
  undefined3 uStack_26b;
  undefined5 uStack_268;
  undefined3 uStack_263;
  undefined5 uStack_260;
  undefined3 uStack_25b;
  undefined5 uStack_258;
  undefined3 uStack_253;
  undefined5 uStack_250;
  undefined3 uStack_24b;
  undefined5 uStack_248;
  undefined3 uStack_243;
  undefined5 uStack_240;
  undefined8 uStack_23b;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined3 uStack_1a8;
  undefined5 uStack_1a5;
  undefined3 uStack_1a0;
  undefined8 uStack_19d;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  puStack_680 = param_1;
  func_0x000107c5f7ac();
  uStack_678 = param_3;
  uStack_670 = param_2;
  FUN_1026f2e04(&uStack_3a0);
  uStack_1b8 = uStack_338;
  uStack_1c0 = uStack_340;
  uStack_1a8 = uStack_328;
  uStack_1b0 = uStack_330;
  uStack_19d = CONCAT35(uStack_318,uStack_31d);
  uStack_1a5 = uStack_325;
  uStack_1a0 = uStack_320;
  uStack_1f8 = uStack_378;
  uStack_200 = uStack_380;
  uStack_1e8 = uStack_368;
  uStack_1f0 = uStack_370;
  uStack_1d8 = uStack_358;
  uStack_1e0 = uStack_360;
  uStack_1c8 = uStack_348;
  uStack_1d0 = uStack_350;
  uStack_218 = uStack_398;
  uStack_220 = uStack_3a0;
  uStack_208 = uStack_388;
  uStack_210 = uStack_390;
  uStack_138 = uStack_348;
  uStack_140 = uStack_350;
  uStack_128 = uStack_338;
  uStack_130 = uStack_340;
  uStack_120 = uStack_330;
  uStack_168 = uStack_378;
  uStack_170 = uStack_380;
  uStack_158 = uStack_368;
  uStack_160 = uStack_370;
  uStack_148 = uStack_358;
  uStack_150 = uStack_360;
  uStack_188 = uStack_398;
  uStack_190 = uStack_3a0;
  uStack_178 = uStack_388;
  uStack_180 = uStack_390;
  func_0x0001026f9b24(&uStack_220,&uStack_570,0x112eb91d8,&UNK_10dad06c8);
  puVar5 = &uStack_190;
  func_0x0001026f9b6c(puVar5,0x112eb91d8,&UNK_10dad06c8);
  uStack_a8 = uStack_1c8;
  uStack_b0 = uStack_1d0;
  uStack_98 = uStack_1b8;
  uStack_a0 = uStack_1c0;
  uStack_88 = uStack_1a8;
  uStack_90 = uStack_1b0;
  uStack_7d = uStack_19d;
  uStack_85 = uStack_1a5;
  uStack_80 = uStack_1a0;
  uStack_d8 = uStack_1f8;
  uStack_e0 = uStack_200;
  uStack_c8 = uStack_1e8;
  uStack_d0 = uStack_1f0;
  uStack_b8 = uStack_1d8;
  uStack_c0 = uStack_1e0;
  uStack_f8 = uStack_218;
  uStack_100 = uStack_220;
  uStack_e8 = uStack_208;
  uStack_f0 = uStack_210;
  if ((*(byte *)(unaff_x20 + 3) & 1) == 0) {
    func_0x000107c5f6cc();
  }
  else {
    puVar5 = (undefined8 *)0xd1;
    FUN_1026ff7d0();
  }
  uVar6 = 0;
  uVar10 = 0;
  func_0x000107c5f2b4(&uStack_2b8,0x4000000000000000,0x4024000000000000,0,0,0,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  uStack_288 = 0x100;
  puStack_290 = puVar5;
  func_0x000107c5f7ac();
  uStack_478 = uStack_2b0;
  uStack_480 = uStack_2b8;
  uStack_468 = uStack_2a0;
  uStack_470 = uStack_2a8;
  puStack_458 = puStack_290;
  uStack_460 = uStack_298;
  uStack_450 = uStack_288;
  uStack_3e8 = uStack_2b0;
  uStack_3f0 = uStack_2b8;
  uStack_3d8 = uStack_2a0;
  uStack_3e0 = uStack_2a8;
  puStack_3c8 = puStack_290;
  uStack_3d0 = uStack_298;
  uStack_3c0 = uStack_288;
  uStack_438 = uStack_2b0;
  uStack_440 = uStack_2b8;
  uStack_428 = uStack_2a0;
  uStack_430 = uStack_2a8;
  puStack_418 = puStack_290;
  uStack_420 = uStack_298;
  uStack_410 = uStack_288;
  uStack_273 = (undefined3)uStack_2b0;
  uStack_270 = (undefined5)((ulong)uStack_2b0 >> 0x18);
  uStack_27b = (undefined3)uStack_2b8;
  uStack_278 = (undefined5)((ulong)uStack_2b8 >> 0x18);
  uStack_253 = SUB83(puStack_290,0);
  uStack_250 = (undefined5)((ulong)puStack_290 >> 0x18);
  uStack_25b = (undefined3)uStack_298;
  uStack_258 = (undefined5)((ulong)uStack_298 >> 0x18);
  uStack_263 = (undefined3)uStack_2a0;
  uStack_260 = (undefined5)((ulong)uStack_2a0 >> 0x18);
  uStack_26b = (undefined3)uStack_2a8;
  uStack_268 = (undefined5)((ulong)uStack_2a8 >> 0x18);
  uStack_243 = (undefined3)uVar6;
  uStack_240 = (undefined5)((ulong)uVar6 >> 0x18);
  uStack_24b = (undefined3)CONCAT62(uStack_40e,uStack_288);
  uStack_248 = (undefined5)((uint6)uStack_40e >> 8);
  uStack_408 = uVar6;
  uStack_400 = uVar10;
  uStack_3b8 = uVar6;
  uStack_3b0 = uVar10;
  uStack_23b = uVar10;
  func_0x0001026f9b24(&uStack_480,&uStack_3a0,0x112eb91e0,&UNK_10dad06d0);
  func_0x0001026f9b24(&uStack_440,&uStack_3a0,0x112eb91e8,&UNK_10dad06d8);
  func_0x0001026f9b6c(&uStack_3f0,0x112eb91e8,&UNK_10dad06d8);
  func_0x0001026f9b6c(&uStack_2b8,0x112eb91e0,&UNK_10dad06d0);
  uStack_228 = unaff_x20[5];
  uStack_230 = unaff_x20[4];
  func_0x000107c5fcec(0);
  puVar7 = PTR___sScMMa_11034fc70;
  func_0x0001026f9b24(&uStack_230,&uStack_3a0,0x112d35ff8,&UNK_10d900cd0);
  puVar5 = unaff_x20;
  FUN_1026f8ebc();
  func_0x000107c5fce8();
  uVar6 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar7,PTR___sScMScAsMc_11034fc78);
  puVar7 = &UNK_11053d308;
  func_0x000107c613fc(&UNK_11053d308,0x60,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar5;
  *(undefined8 *)(puVar7 + 0x18) = uVar6;
  uVar6 = *unaff_x20;
  uVar16 = unaff_x20[3];
  uVar10 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x20) = uVar6;
  *(undefined8 *)(puVar7 + 0x38) = uVar16;
  *(undefined8 *)(puVar7 + 0x30) = uVar10;
  uVar6 = unaff_x20[4];
  uVar16 = unaff_x20[7];
  uVar10 = unaff_x20[6];
  *(undefined8 *)(puVar7 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x40) = uVar6;
  *(undefined8 *)(puVar7 + 0x58) = uVar16;
  *(undefined8 *)(puVar7 + 0x50) = uVar10;
  lVar8 = 0;
  func_0x000107c5fd0c();
  lVar13 = *(long *)(lVar8 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lStack_688 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&lStack_6c0 - uVar15;
  func_0x000107c5fcf4(lVar8);
  uStack_328 = (undefined3)uStack_98;
  uStack_325 = (undefined5)((ulong)uStack_98 >> 0x18);
  uStack_330 = uStack_a0;
  uStack_318 = uStack_88;
  uStack_320 = (undefined3)uStack_90;
  uStack_31d = (undefined5)((ulong)uStack_90 >> 0x18);
  uStack_30d = (undefined5)uStack_7d;
  uStack_308 = (undefined3)((ulong)uStack_7d >> 0x28);
  uStack_315 = uStack_85;
  uStack_310 = uStack_80;
  uStack_368 = uStack_d8;
  uStack_370 = uStack_e0;
  uStack_358 = uStack_c8;
  uStack_360 = uStack_d0;
  uStack_348 = uStack_b8;
  uStack_350 = uStack_c0;
  uStack_338 = uStack_a8;
  uStack_340 = uStack_b0;
  uStack_388 = uStack_f8;
  uStack_390 = uStack_100;
  uStack_378 = uStack_e8;
  uStack_380 = uStack_f0;
  uStack_2ed = uStack_268;
  uStack_2e8 = uStack_263;
  uStack_2f5 = uStack_270;
  uStack_2f0 = uStack_26b;
  uStack_2dd = uStack_258;
  uStack_2d8 = uStack_253;
  uStack_2e5 = uStack_260;
  uStack_2e0 = uStack_25b;
  uStack_2cd = uStack_248;
  uStack_2d5 = uStack_250;
  uStack_2d0 = uStack_24b;
  uStack_2c0 = uStack_23b;
  uStack_2c8 = uStack_243;
  uStack_2c5 = uStack_240;
  uStack_3a0 = uStack_670;
  uStack_398 = uStack_678;
  uStack_2fd = uStack_278;
  uStack_2f8 = uStack_273;
  uStack_305 = uStack_280;
  uStack_300 = uStack_27b;
  iVar4 = 2;
  func_0x000100029b9c(2,0x1a,4,0);
  if (iVar4 == 0) {
    lVar14 = 0x112eb8bc8;
    func_0x0001000285a8(0x112eb8bc8,&UNK_10dacfd58);
    puVar3 = puStack_680;
    puVar5 = (undefined8 *)((long)puStack_680 + (long)*(int *)(lVar14 + 0x24));
    lVar14 = 0x112eb8bd0;
    func_0x0001000285a8(0x112eb8bd0,&UNK_10dad0700);
    puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar14 + 0x28));
    puVar1[1] = uStack_228;
    *puVar1 = uStack_230;
    (**(code **)(lVar13 + 0x20))((long)puVar5 + (long)*(int *)(lVar14 + 0x24),lVar8,lStack_688);
    *puVar5 = &UNK_10dad06f0;
    puVar5[1] = puVar7;
    puVar3[1] = uStack_398;
    *puVar3 = uStack_3a0;
    puVar3[3] = uStack_388;
    puVar3[2] = uStack_390;
    puVar3[9] = uStack_358;
    puVar3[8] = uStack_360;
    puVar3[0xb] = uStack_348;
    puVar3[10] = uStack_350;
    puVar3[5] = uStack_378;
    puVar3[4] = uStack_380;
    puVar3[7] = uStack_368;
    puVar3[6] = uStack_370;
    puVar3[0x11] = CONCAT53(uStack_315,uStack_318);
    puVar3[0x10] = CONCAT53(uStack_31d,uStack_320);
    puVar3[0x13] = CONCAT53(uStack_305,uStack_308);
    puVar3[0x12] = CONCAT53(uStack_30d,uStack_310);
    puVar3[0xd] = uStack_338;
    puVar3[0xc] = uStack_340;
    puVar3[0xf] = CONCAT53(uStack_325,uStack_328);
    puVar3[0xe] = uStack_330;
    puVar3[0x1c] = uStack_2c0;
    puVar3[0x19] = CONCAT53(uStack_2d5,uStack_2d8);
    puVar3[0x18] = CONCAT53(uStack_2dd,uStack_2e0);
    puVar3[0x1b] = CONCAT53(uStack_2c5,uStack_2c8);
    puVar3[0x1a] = CONCAT53(uStack_2cd,uStack_2d0);
    puVar3[0x15] = CONCAT53(uStack_2f5,uStack_2f8);
    puVar3[0x14] = CONCAT53(uStack_2fd,uStack_300);
    puVar3[0x17] = CONCAT53(uStack_2e5,uStack_2e8);
    puVar3[0x16] = CONCAT53(uStack_2ed,uStack_2f0);
  }
  else {
    lVar14 = 0x112eb8be0;
    func_0x0001000285a8(0x112eb8be0,&UNK_10dad0710);
    lStack_6a8 = *(long *)(lVar14 + -8);
    lStack_6a0 = lVar14;
    lStack_698 = lVar8;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(lStack_6a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar12 = lVar8 - extraout_x8;
    uStack_568 = uStack_228;
    uStack_570 = uStack_230;
    uStack_658 = 0;
    uStack_650 = 0xe000000000000000;
    lStack_6b0 = lVar12;
    func_0x0001026f9b24(&uStack_230,auStack_668,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(uStack_650);
    uStack_658 = 0xd000000000000050;
    uStack_650 = 0x800000010f0b72b0;
    auStack_668[0] = 0x137;
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    puStack_690 = (undefined1 *)&lStack_6c0;
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar11);
    uVar16 = uStack_650;
    uVar10 = uStack_658;
    lStack_6b8 = lVar12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar2 = lStack_688;
    lVar12 = lVar12 - uVar15;
    lStack_6c0 = lVar8;
    (**(code **)(lVar13 + 0x10))(lVar12,lVar8,lStack_688);
    uVar6 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    uVar9 = uVar6;
    func_0x000100dd41f8();
    *(undefined8 *)(lVar12 + -0x10) = uVar6;
    *(undefined8 *)(lVar12 + -8) = uVar9;
    lVar14 = lStack_6b0;
    func_0x000107c5f498(lStack_6b0,&uStack_570,uVar10,uVar16,0,0,lVar12,&UNK_10dad06f0,puVar7);
    func_0x0001026f9b6c(&uStack_230,0x112d35ff8,&UNK_10d900cd0);
    (**(code **)(lVar13 + 8))(lStack_6c0,lVar2);
    lVar8 = 0x112eb8be8;
    func_0x0001000285a8(0x112eb8be8,&UNK_10dacfd68);
    puVar5 = puStack_680;
    (**(code **)(lStack_6a8 + 0x20))
              ((long)puStack_680 + (long)*(int *)(lVar8 + 0x24),lVar14,lStack_6a0);
    puVar5[0x19] = CONCAT53(uStack_2d5,uStack_2d8);
    puVar5[0x18] = CONCAT53(uStack_2dd,uStack_2e0);
    puVar5[0x1b] = CONCAT53(uStack_2c5,uStack_2c8);
    puVar5[0x1a] = CONCAT53(uStack_2cd,uStack_2d0);
    puVar5[0x1c] = uStack_2c0;
    puVar5[0x11] = CONCAT53(uStack_315,uStack_318);
    puVar5[0x10] = CONCAT53(uStack_31d,uStack_320);
    puVar5[0x13] = CONCAT53(uStack_305,uStack_308);
    puVar5[0x12] = CONCAT53(uStack_30d,uStack_310);
    puVar5[0x15] = CONCAT53(uStack_2f5,uStack_2f8);
    puVar5[0x14] = CONCAT53(uStack_2fd,uStack_300);
    puVar5[0x17] = CONCAT53(uStack_2e5,uStack_2e8);
    puVar5[0x16] = CONCAT53(uStack_2ed,uStack_2f0);
    puVar5[9] = uStack_358;
    puVar5[8] = uStack_360;
    puVar5[0xb] = uStack_348;
    puVar5[10] = uStack_350;
    puVar5[0xd] = uStack_338;
    puVar5[0xc] = uStack_340;
    puVar5[0xf] = CONCAT53(uStack_325,uStack_328);
    puVar5[0xe] = uStack_330;
    puVar5[1] = uStack_398;
    *puVar5 = uStack_3a0;
    puVar5[3] = uStack_388;
    puVar5[2] = uStack_390;
    puVar5[5] = uStack_378;
    puVar5[4] = uStack_380;
    puVar5[7] = uStack_368;
    puVar5[6] = uStack_370;
  }
  uStack_4f8 = uStack_98;
  uStack_500 = uStack_a0;
  uStack_4f0 = uStack_90;
  uStack_4dd = uStack_7d;
  uStack_538 = uStack_d8;
  uStack_540 = uStack_e0;
  uStack_528 = uStack_c8;
  uStack_530 = uStack_d0;
  uStack_518 = uStack_b8;
  uStack_520 = uStack_c0;
  uStack_508 = uStack_a8;
  uStack_510 = uStack_b0;
  uStack_558 = uStack_f8;
  uStack_560 = uStack_100;
  uStack_548 = uStack_e8;
  uStack_550 = uStack_f0;
  uStack_4cd = CONCAT35(uStack_273,uStack_278);
  uStack_4d5 = CONCAT35(uStack_27b,uStack_280);
  uStack_4bd = CONCAT35(uStack_263,uStack_268);
  uStack_4c5 = CONCAT35(uStack_26b,uStack_270);
  uStack_4ad = CONCAT35(uStack_253,uStack_258);
  uStack_4b5 = CONCAT35(uStack_25b,uStack_260);
  uStack_4a5 = CONCAT35(uStack_24b,uStack_250);
  uStack_49d = uStack_248;
  uStack_490 = uStack_23b;
  uStack_498 = uStack_243;
  uStack_495 = uStack_240;
  uStack_570 = uStack_670;
  uStack_568 = uStack_678;
  func_0x0001026f9b24(&uStack_3a0,&uStack_658,0x112eb8bd8,&UNK_10dacfd60);
  func_0x0001026f9b6c(&uStack_570,0x112eb8bd8,&UNK_10dacfd60);
  return;
}



/* Entry: 1026f2e04; end: 1026f3487;  */

void FUN_1026f2e04(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  undefined1 auStack_470 [8];
  long lStack_468;
  long lStack_460;
  undefined8 *puStack_458;
  undefined1 *puStack_450;
  undefined8 uStack_448;
  undefined2 uStack_440;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
  undefined2 uStack_420;
  undefined6 uStack_41e;
  undefined2 uStack_418;
  undefined6 uStack_416;
  undefined2 uStack_410;
  undefined6 uStack_40e;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined3 uStack_388;
  undefined5 uStack_385;
  undefined3 uStack_380;
  undefined8 uStack_37d;
  undefined1 *puStack_370;
  long lStack_368;
  undefined2 uStack_360;
  undefined6 uStack_35e;
  undefined2 uStack_358;
  undefined6 uStack_356;
  undefined2 uStack_350;
  undefined6 uStack_34e;
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined6 uStack_33e;
  undefined2 uStack_338;
  undefined1 uStack_336;
  undefined5 uStack_335;
  undefined2 uStack_330;
  undefined1 uStack_32e;
  undefined5 uStack_32d;
  undefined3 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined2 uStack_2a8;
  undefined1 uStack_2a6;
  undefined5 uStack_2a5;
  undefined2 uStack_2a0;
  undefined1 uStack_29e;
  undefined5 uStack_29d;
  undefined2 uStack_298;
  undefined1 uStack_296;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined6 uStack_250;
  undefined2 uStack_24a;
  undefined6 uStack_248;
  undefined2 uStack_242;
  undefined6 uStack_240;
  undefined2 uStack_23a;
  undefined6 uStack_238;
  undefined2 uStack_232;
  undefined6 uStack_230;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  undefined2 uStack_222;
  undefined6 uStack_220;
  undefined2 uStack_21a;
  undefined3 uStack_218;
  undefined5 uStack_215;
  undefined3 uStack_210;
  undefined5 uStack_20d;
  undefined2 uStack_208;
  undefined1 uStack_206;
  undefined6 uStack_200;
  undefined2 uStack_1fa;
  undefined6 uStack_1f8;
  undefined2 uStack_1f2;
  undefined1 uStack_1f0;
  undefined5 uStack_1ef;
  undefined2 uStack_1ea;
  undefined6 uStack_1e8;
  undefined2 uStack_1e2;
  undefined6 uStack_1e0;
  undefined2 uStack_1da;
  undefined6 uStack_1d8;
  undefined2 uStack_1d2;
  undefined6 uStack_1d0;
  undefined2 uStack_1ca;
  undefined2 uStack_1c8;
  undefined1 uStack_1c6;
  undefined5 uStack_1c5;
  undefined2 uStack_1c0;
  undefined1 uStack_1be;
  undefined5 uStack_1bd;
  undefined2 uStack_1b8;
  undefined1 uStack_1b6;
  undefined1 *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 uStack_170;
  undefined8 uStack_16d;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_b6;
  undefined8 uStack_ae;
  undefined8 uStack_a6;
  undefined8 uStack_9e;
  undefined8 uStack_96;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  
  lVar1 = 0;
  puStack_458 = param_1;
  func_0x000107c5f6f0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar5 = auStack_470 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f58c();
  lStack_468 = *(long *)(lVar2 + -8);
  lStack_460 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_468 + 0x40));
  lVar13 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x16;
  FUN_1026ff7d0();
  dVar15 = (double)param_2[2];
  uVar14 = uVar3;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(auStack_160,dVar15,0,dVar15,0,uVar14,param_3);
  uStack_1f2 = (undefined2)auStack_160._8_8_;
  uStack_1f0 = SUB81(auStack_160._8_8_,2);
  uStack_1ef = SUB85(auStack_160._8_8_,3);
  uStack_1fa = (undefined2)auStack_160._0_8_;
  uStack_1f8 = SUB86(auStack_160._0_8_,2);
  uStack_1e2 = (undefined2)auStack_160._24_8_;
  uStack_1e0 = SUB86(auStack_160._24_8_,2);
  uStack_1ea = (undefined2)auStack_160._16_8_;
  uStack_1e8 = SUB86(auStack_160._16_8_,2);
  uStack_1d2 = (undefined2)auStack_160._40_8_;
  uStack_1d0 = SUB86(auStack_160._40_8_,2);
  uStack_1da = (undefined2)auStack_160._32_8_;
  uStack_1d8 = SUB86(auStack_160._32_8_,2);
  uStack_e6 = SUB86(auStack_160._8_8_,2);
  uStack_ee = uStack_1f8;
  uStack_e8 = uStack_1f2;
  uStack_f6 = uStack_200;
  uStack_f0 = uStack_1fa;
  uStack_ae = CONCAT26(uStack_1f2,uStack_1f8);
  uStack_b6 = CONCAT26(uStack_1fa,uStack_200);
  uStack_9e = CONCAT26(uStack_1e2,uStack_1e8);
  uStack_a6 = CONCAT26(uStack_1ea,uStack_e6);
  uStack_de = uStack_1e8;
  uStack_d8 = uStack_1e2;
  uStack_e0 = uStack_1ea;
  uStack_96 = CONCAT26(uStack_1da,uStack_1e0);
  uStack_ce = uStack_1d8;
  uStack_d6 = uStack_1e0;
  uStack_d0 = uStack_1da;
  uStack_f8 = 0x100;
  uStack_b8 = 0x100;
  uStack_8e = uStack_1d8;
  uStack_88 = uStack_1d2;
  puVar11 = &UNK_10d915678;
  uStack_100 = uVar3;
  uStack_c8 = uStack_1d2;
  uStack_c6 = uStack_1d0;
  uStack_c0 = uVar3;
  uStack_86 = uStack_1d0;
  func_0x0001026f9b24(&uStack_100,&puStack_1b0,0x112d4f680,&UNK_10d915678);
  func_0x0001026f9b6c(&uStack_c0,0x112d4f680,&UNK_10d915678);
  lStack_1a8 = param_2[7];
  puStack_1b0 = (undefined1 *)param_2[6];
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(&uStack_200);
  lVar2 = CONCAT26(uStack_1fa,uStack_200);
  if (lVar2 == 0) {
    puStack_1b0 = (undefined1 *)*param_2;
    uVar14 = param_2[1];
    lStack_1a8 = uVar14;
    func_0x000100e8b654();
    func_0x000107c61434(uVar14);
    ppuVar6 = &puStack_1b0;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5f5e0();
    uVar14 = 0x3fe0000000000000;
    func_0x000107c5f594();
    lVar12 = lStack_460;
    lVar1 = lStack_468;
    (**(code **)(lStack_468 + 0x68))
              (lVar13,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,
               lStack_460);
    lVar7 = lVar13;
    func_0x000107c5f5a4(dVar15 * 0.5,uVar14);
    (**(code **)(lVar1 + 8))(lVar13,lVar12);
    lVar1 = lVar7;
    ppuVar9 = ppuVar6;
    puVar10 = puVar8;
    lVar12 = lVar2;
    func_0x000107c5f5d4();
    func_0x000107c61574(lVar7);
    func_0x000100f795bc(ppuVar6,puVar8,lVar2);
    func_0x000107c6142c(puVar11);
    uStack_200 = (undefined6)lVar1;
    uStack_1fa = (undefined2)((ulong)lVar1 >> 0x30);
    uStack_1f8 = SUB86(ppuVar9,0);
    uStack_1f2 = (undefined2)((ulong)ppuVar9 >> 0x30);
    uStack_1f0 = SUB81(puVar10,0);
    uStack_1e8 = (undefined6)lVar12;
    uStack_1e2 = (undefined2)((ulong)lVar12 >> 0x30);
    uStack_1b6 = 1;
    uVar14 = 0x112eb91f0;
    func_0x0001000285a8(0x112eb91f0,&UNK_10dad0720);
    uVar3 = uVar14;
    FUN_1026f8f88();
    func_0x000107c5f490(&puStack_1b0,&uStack_200,uVar14,PTR___s7SwiftUI4TextVN_1103493f8,uVar3,
                        PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
  }
  else {
    func_0x000107c61174();
    lVar13 = lVar2;
    func_0x000107c5f6e8();
    (**(code **)(lVar12 + 0x68))
              (puVar5,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar1);
    puVar4 = puVar5;
    func_0x000107c5f6fc(0,0,0,0,puVar5,lVar13);
    func_0x000107c61574(lVar13);
    (**(code **)(lVar12 + 8))(puVar5,lVar1);
    func_0x000107c5f7ac();
    func_0x000107c5f2d4(auStack_130,dVar15,0,dVar15,0,puVar5,lVar1);
    uStack_232 = (undefined2)auStack_130._24_8_;
    uStack_230 = SUB86(auStack_130._24_8_,2);
    uStack_23a = (undefined2)auStack_130._16_8_;
    uStack_238 = SUB86(auStack_130._16_8_,2);
    uStack_242 = (undefined2)auStack_130._8_8_;
    uStack_240 = SUB86(auStack_130._8_8_,2);
    uStack_24a = (undefined2)auStack_130._0_8_;
    uStack_248 = SUB86(auStack_130._0_8_,2);
    uStack_222 = (undefined2)auStack_130._40_8_;
    uStack_220 = SUB86(auStack_130._40_8_,2);
    uStack_22a = (undefined2)auStack_130._32_8_;
    uStack_228 = SUB86(auStack_130._32_8_,2);
    uStack_448 = 0;
    uStack_440 = 0x101;
    uStack_426 = uStack_238;
    uStack_420 = uStack_232;
    uStack_42e = uStack_240;
    uStack_428 = uStack_23a;
    uStack_436 = uStack_248;
    uStack_430 = uStack_242;
    uStack_438 = uStack_24a;
    uStack_416 = uStack_228;
    uStack_41e = uStack_230;
    uStack_418 = uStack_22a;
    uStack_1d8 = (undefined6)auStack_130._16_8_;
    uStack_1d2 = SUB82(auStack_130._16_8_,6);
    uStack_1e0 = (undefined6)auStack_130._8_8_;
    uStack_1da = SUB82(auStack_130._8_8_,6);
    uStack_1c8 = uStack_22a;
    uStack_1c6 = SUB81(auStack_130._32_8_,2);
    uStack_1c5 = SUB85(auStack_130._32_8_,3);
    uStack_1d0 = (undefined6)auStack_130._24_8_;
    uStack_1ca = SUB82(auStack_130._24_8_,6);
    uStack_1f8 = 0;
    uStack_1f2 = 0;
    uStack_200 = SUB86(puVar4,0);
    uStack_1fa = (undefined2)((ulong)puVar4 >> 0x30);
    uStack_1e8 = (undefined6)auStack_130._0_8_;
    uStack_1e2 = SUB82(auStack_130._0_8_,6);
    uStack_1f0 = 1;
    uStack_1ef = (undefined5)(CONCAT62(uStack_250,0x101) >> 8);
    uStack_1ea = (undefined2)((uint6)uStack_250 >> 0x20);
    uStack_1be = SUB81(auStack_130._40_8_,2);
    uStack_1bd = SUB85(auStack_130._40_8_,3);
    lStack_368 = 0;
    uStack_360 = 0x101;
    uStack_330 = uStack_222;
    uStack_33e = uStack_230;
    uStack_338 = uStack_22a;
    uStack_346 = uStack_238;
    uStack_340 = uStack_232;
    uStack_34e = uStack_240;
    uStack_348 = uStack_23a;
    uStack_356 = uStack_248;
    uStack_350 = uStack_242;
    uStack_358 = uStack_24a;
    puStack_450 = puVar4;
    uStack_410 = uStack_222;
    uStack_40e = uStack_220;
    puStack_370 = puVar4;
    uStack_336 = uStack_1c6;
    uStack_335 = uStack_1c5;
    uStack_32e = uStack_1be;
    uStack_32d = uStack_1bd;
    uStack_1c0 = uStack_222;
    func_0x0001026f9b24(&puStack_450,&puStack_1b0,0x112eb9208,&UNK_10dad0728);
    func_0x0001026f9b6c(&puStack_370,0x112eb9208,&UNK_10dad0728);
    uStack_2b8._0_6_ = uStack_1d8;
    uStack_2b8._6_2_ = uStack_1d2;
    uStack_2c0._0_6_ = uStack_1e0;
    uStack_2c0._6_2_ = uStack_1da;
    uStack_218 = CONCAT12(uStack_1c6,uStack_1c8);
    uStack_2b0._0_6_ = uStack_1d0;
    uStack_2b0._6_2_ = uStack_1ca;
    uStack_2a8 = uStack_1c8;
    uStack_2a6 = uStack_1c6;
    uStack_2a5 = uStack_1c5;
    uStack_210 = CONCAT12(uStack_1be,uStack_1c0);
    uStack_2a0 = uStack_1c0;
    uStack_29e = uStack_1be;
    uStack_29d = uStack_1bd;
    uStack_2d8._0_6_ = uStack_1f8;
    uStack_2d8._6_2_ = uStack_1f2;
    uStack_2e0._0_6_ = uStack_200;
    uStack_2e0._6_2_ = uStack_1fa;
    uStack_2c8._0_6_ = uStack_1e8;
    uStack_2c8._6_2_ = uStack_1e2;
    uStack_240 = CONCAT51(uStack_1ef,uStack_1f0);
    uStack_2d0 = CONCAT26(uStack_1ea,uStack_240);
    uStack_298 = 0x100;
    uStack_228 = uStack_1d8;
    uStack_222 = uStack_1d2;
    uStack_230 = uStack_1e0;
    uStack_22a = uStack_1da;
    uStack_215 = uStack_1c5;
    uStack_220 = uStack_1d0;
    uStack_21a = uStack_1ca;
    uStack_20d = uStack_1bd;
    uStack_248 = uStack_1f8;
    uStack_242 = uStack_1f2;
    uStack_250 = uStack_200;
    uStack_24a = uStack_1fa;
    uStack_238 = uStack_1e8;
    uStack_232 = uStack_1e2;
    uStack_23a = uStack_1ea;
    uStack_208 = 0x100;
    uVar14 = 0x112eb91f0;
    func_0x0001026f9b24(&uStack_2e0,&puStack_1b0,0x112eb91f0,&UNK_10dad0720);
    func_0x0001026f9b6c(&uStack_250,0x112eb91f0,&UNK_10dad0720);
    uStack_1d8 = (undefined6)uStack_2b8;
    uStack_1d2 = uStack_2b8._6_2_;
    uStack_1e0 = (undefined6)uStack_2c0;
    uStack_1da = uStack_2c0._6_2_;
    uStack_1c8 = uStack_2a8;
    uStack_1d0 = (undefined6)uStack_2b0;
    uStack_1ca = uStack_2b0._6_2_;
    uStack_1be = uStack_29e;
    uStack_1bd = uStack_29d;
    uStack_1b8 = uStack_298;
    uStack_1c6 = uStack_2a6;
    uStack_1c5 = uStack_2a5;
    uStack_1c0 = uStack_2a0;
    uStack_1f8 = (undefined6)uStack_2d8;
    uStack_1f2 = uStack_2d8._6_2_;
    uStack_200 = (undefined6)uStack_2e0;
    uStack_1fa = uStack_2e0._6_2_;
    uStack_1e8 = (undefined6)uStack_2c8;
    uStack_1e2 = uStack_2c8._6_2_;
    uStack_1f0 = (undefined1)uStack_2d0;
    uStack_1ef = (undefined5)((ulong)uStack_2d0 >> 8);
    uStack_1ea = (undefined2)((ulong)uStack_2d0 >> 0x30);
    uStack_1b6 = 0;
    func_0x0001000285a8(0x112eb91f0,&UNK_10dad0720);
    uVar3 = uVar14;
    FUN_1026f8f88();
    func_0x000107c5f490(&puStack_1b0,&uStack_200,uVar14,PTR___s7SwiftUI4TextVN_1103493f8,uVar3,
                        PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
    func_0x000107c61170(lVar2);
  }
  uStack_318 = CONCAT62(uStack_f6,uStack_f8);
  uStack_308 = CONCAT62(uStack_e6,uStack_e8);
  uStack_310 = CONCAT62(uStack_ee,uStack_f0);
  uStack_288 = CONCAT62(uStack_f6,uStack_f8);
  uStack_3f8 = CONCAT62(uStack_f6,uStack_f8);
  uStack_320 = uStack_100;
  uStack_2f8 = CONCAT62(uStack_d6,uStack_d8);
  uStack_300 = CONCAT62(uStack_de,uStack_e0);
  uStack_2e8 = CONCAT62(uStack_c6,uStack_c8);
  uStack_2f0 = CONCAT62(uStack_ce,uStack_d0);
  uStack_268 = CONCAT62(uStack_d6,uStack_d8);
  uStack_270 = CONCAT62(uStack_de,uStack_e0);
  uStack_3d8 = CONCAT62(uStack_d6,uStack_d8);
  uStack_3e0 = CONCAT62(uStack_de,uStack_e0);
  uStack_2b8 = uStack_188;
  uStack_2c0 = uStack_190;
  uStack_2a8 = (undefined2)uStack_178;
  uStack_2a6 = (undefined1)((uint3)uStack_178 >> 0x10);
  uStack_2b0 = uStack_180;
  uStack_29d = (undefined5)uStack_16d;
  uStack_298 = (undefined2)((ulong)uStack_16d >> 0x28);
  uStack_296 = (undefined1)((ulong)uStack_16d >> 0x38);
  uStack_2a0 = (undefined2)uStack_170;
  uStack_29e = (undefined1)((uint3)uStack_170 >> 0x10);
  uStack_2d8 = lStack_1a8;
  uStack_2e0 = puStack_1b0;
  uStack_2c8 = uStack_198;
  uStack_2d0 = uStack_1a0;
  uStack_348 = (undefined2)uStack_188;
  uStack_346 = (undefined6)((ulong)uStack_188 >> 0x10);
  uStack_350 = (undefined2)uStack_190;
  uStack_34e = (undefined6)((ulong)uStack_190 >> 0x10);
  uStack_340 = (undefined2)uStack_180;
  uStack_33e = (undefined6)((ulong)uStack_180 >> 0x10);
  uStack_328 = (undefined3)((ulong)uStack_16d >> 0x28);
  lStack_368 = lStack_1a8;
  puStack_370 = puStack_1b0;
  uStack_358 = (undefined2)uStack_198;
  uStack_356 = (undefined6)((ulong)uStack_198 >> 0x10);
  uStack_360 = (undefined2)uStack_1a0;
  uStack_35e = (undefined6)((ulong)uStack_1a0 >> 0x10);
  uStack_258 = CONCAT62(uStack_c6,uStack_c8);
  uStack_260 = CONCAT62(uStack_ce,uStack_d0);
  uStack_3c8 = CONCAT62(uStack_c6,uStack_c8);
  uStack_3d0 = CONCAT62(uStack_ce,uStack_d0);
  uStack_278 = CONCAT62(uStack_e6,uStack_e8);
  uStack_280 = CONCAT62(uStack_ee,uStack_f0);
  uStack_3e8 = CONCAT62(uStack_e6,uStack_e8);
  uStack_3f0 = CONCAT62(uStack_ee,uStack_f0);
  uStack_290 = uStack_100;
  uStack_400 = uStack_100;
  uStack_228 = (undefined6)uStack_188;
  uStack_222 = (undefined2)((ulong)uStack_188 >> 0x30);
  uStack_230 = (undefined6)uStack_190;
  uStack_22a = (undefined2)((ulong)uStack_190 >> 0x30);
  uStack_220 = (undefined6)uStack_180;
  uStack_21a = (undefined2)((ulong)uStack_180 >> 0x30);
  uStack_248 = (undefined6)lStack_1a8;
  uStack_242 = (undefined2)((ulong)lStack_1a8 >> 0x30);
  uStack_250 = SUB86(puStack_1b0,0);
  uStack_24a = (undefined2)((ulong)puStack_1b0 >> 0x30);
  uStack_238 = (undefined6)uStack_198;
  uStack_232 = (undefined2)((ulong)uStack_198 >> 0x30);
  uStack_240 = (undefined6)uStack_1a0;
  uStack_23a = (undefined2)((ulong)uStack_1a0 >> 0x30);
  uStack_37d = uStack_16d;
  uStack_380 = uStack_170;
  uStack_398 = uStack_188;
  uStack_3a0 = uStack_190;
  uStack_388 = uStack_178;
  uStack_385 = uStack_175;
  uStack_390 = uStack_180;
  lStack_3b8 = lStack_1a8;
  puStack_3c0 = puStack_1b0;
  uStack_3a8 = uStack_198;
  uStack_3b0 = uStack_1a0;
  uStack_1f0 = (undefined1)uStack_1a0;
  uStack_1ef = (undefined5)((ulong)uStack_1a0 >> 8);
  uStack_338 = uStack_2a8;
  uStack_336 = uStack_2a6;
  uStack_330 = uStack_2a0;
  uStack_32e = uStack_29e;
  uStack_32d = uStack_29d;
  uStack_20d = uStack_29d;
  uStack_208 = uStack_298;
  uStack_206 = uStack_296;
  uStack_200 = uStack_250;
  uStack_1fa = uStack_24a;
  uStack_1f8 = uStack_248;
  uStack_1f2 = uStack_242;
  uStack_1ea = uStack_23a;
  uStack_1e8 = uStack_238;
  uStack_1e2 = uStack_232;
  uStack_1e0 = uStack_230;
  uStack_1da = uStack_22a;
  uStack_1d8 = uStack_228;
  uStack_1d2 = uStack_222;
  uStack_1d0 = uStack_220;
  uStack_1ca = uStack_21a;
  uStack_1c8 = uStack_2a8;
  uStack_1c6 = uStack_2a6;
  uStack_1c0 = uStack_2a0;
  uStack_1be = uStack_29e;
  uStack_1bd = uStack_29d;
  uStack_1b8 = uStack_298;
  uStack_1b6 = uStack_296;
  func_0x0001026f9b24(&uStack_2e0,&puStack_450,0x112eb9220,&UNK_10dad0740);
  func_0x0001026f9b24(&uStack_290,&puStack_450,0x112d4f680,&UNK_10d915678);
  func_0x0001026f9b24(&uStack_250,&puStack_450,0x112eb9220,&UNK_10dad0740);
  func_0x0001026f9b6c(&uStack_200,0x112eb9220,&UNK_10dad0740);
  puStack_458[0xd] = uStack_398;
  puStack_458[0xc] = uStack_3a0;
  puStack_458[0xf] = CONCAT53(uStack_385,uStack_388);
  puStack_458[0xe] = uStack_390;
  *(undefined8 *)((long)puStack_458 + 0x83) = uStack_37d;
  *(ulong *)((long)puStack_458 + 0x7b) = CONCAT35(uStack_380,uStack_385);
  puStack_458[5] = uStack_3d8;
  puStack_458[4] = uStack_3e0;
  puStack_458[7] = uStack_3c8;
  puStack_458[6] = uStack_3d0;
  puStack_458[9] = lStack_3b8;
  puStack_458[8] = puStack_3c0;
  puStack_458[0xb] = uStack_3a8;
  puStack_458[10] = uStack_3b0;
  puStack_458[1] = uStack_3f8;
  *puStack_458 = uStack_400;
  puStack_458[3] = uStack_3e8;
  puStack_458[2] = uStack_3f0;
  func_0x0001026f9b6c(&puStack_370,0x112eb9220,&UNK_10dad0740);
  func_0x0001026f9b6c(&uStack_320,0x112d4f680,&UNK_10d915678);
  return;
}



/* Entry: 1026f3488; end: 1026f356b;  */

void FUN_1026f3488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  uVar5 = 0x112d45220;
  func_0x0001026f73b0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026f356c,uVar4,uVar5);
  return;
}



/* Entry: 1026f356c; end: 1026f368f;  */

void FUN_1026f356c(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x28) + 0x28) == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar1 = *(long *)(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c5edd0(uVar4,*(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x20));
    (**(code **)(lVar1 + 0x30))(uVar4,1,uVar5);
    if ((int)uVar4 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x30),
                 *(undefined8 *)(unaff_x22 + 0x38));
      puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
      func_0x000107c61168();
      func_0x000107c5aa38();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x68) = puVar2;
      plVar3 = (long *)(ulong)*(uint *)(
                                       PTR___sSo12NSURLSessionC10FoundationE4data4from8delegateAC4DataV_So13NSURLResponseCtAC3URLV_So0A12TaskDelegate_pSgtYaKFTu_110351138
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x70) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1026f3690;
                    /* WARNING: Could not recover jumptable at 0x00010bdb85b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___sSo12NSURLSessionC10FoundationE4data4from8delegateAC4DataV_So13NSURLResponseCtAC3URLV_So0A12TaskDelegate_pSgtYaKF_110351130
      )(*(undefined8 *)(unaff_x22 + 0x48),0);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    func_0x0001026f9b6c(uVar5,0x112d36580,&UNK_10d9016d0);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001026f3618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


