/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b3d1cc; end: 102b3d22b; -[_TtC29LensCarouselFeaturesWorkflows41SnapPlusLensCaptureButtonOverrideWorkflow init] */

void FUN_102b3d1cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.SnapPlusLensCaptureButtonOverrideWorkflow",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3d1f8);
  (*pcVar1)();
}



/* Entry: 102b3d22c; end: 102b3d2a3; -[_TtC29LensCarouselFeaturesWorkflows41SnapPlusLensCaptureButtonOverrideWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3d22c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5a68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5a70));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5a78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5a80));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef5a88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef5a90));
  return;
}



/* Entry: 102b3d2a4; end: 102b3d2c3;  */

void FUN_102b3d2a4(void)

{
  func_0x000107c61168(&PTR_PTR_11288c7d0);
  return;
}



/* Entry: 102b3d2c4; end: 102b3d41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3d2c4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar2 = lStack_48;
    func_0x000107c615f0(lStack_48);
    func_0x000107c3d14c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c615ec(lStack_48,2);
    func_0x000107c61170(lVar2);
    uVar7 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar4 = FUN_102b3d41c;
    func_0x0001000bfde0(FUN_102b3d41c,0,uVar7);
    pcVar5 = pcVar4;
    FUN_102ae5c08();
    func_0x000104884898();
    func_0x000107c61574(pcVar4);
    puVar6 = &UNK_1105a01d0;
    func_0x000107c613fc(&UNK_1105a01d0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    pcVar4 = FUN_102b3d5b8;
    puVar8 = puVar6;
    (**(code **)(*(long *)pcVar5 + 0x60))();
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(lVar3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef5a88);
    uVar7 = *puVar1;
    *puVar1 = pcVar4;
    puVar1[1] = puVar8;
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 102b3d41c; end: 102b3d44b;  */

void FUN_102b3d41c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b3d44c; end: 102b3d4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3d44c(long *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  long lVar2;
  
  lVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112ef5a90);
    *(long *)(param_2 + _DAT_112ef5a90) = lVar3;
    lVar2 = lVar3;
    func_0x000107c61174();
    uVar1 = (undefined1)lVar2;
    func_0x000107c61170(uVar4);
    if (lVar3 != 0) {
      func_0x000107c4a4c0();
      *(undefined1 *)(param_2 + _DAT_112ef5a98) = uVar1;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b3d4e4; end: 102b3d503;  */

void FUN_102b3d4e4(void)

{
  FUN_102b3d2c4();
  return;
}



/* Entry: 102b3d504; end: 102b3d583;  */

/* WARNING: Possible PIC construction at 0x000102b3d55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3d560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3d504(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  code *pcVar5;
  
  plVar1 = (long *)(*unaff_x20 + _DAT_112ef5a88);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    lVar4 = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
  }
  else {
    lVar3 = plVar1[1];
    lVar2 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar5 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar4);
    (*pcVar5)(lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 102b3d584; end: 102b3d5b7; -[_TtC29LensCarouselFeaturesWorkflows41SnapPlusLensCaptureButtonOverrideWorkflow isCameraRecordingDisabled] */

uint FUN_102b3d584(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b3d5c0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102b3d5b8; end: 102b3d5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3d5b8(long *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  long lVar3;
  
  lVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112ef5a90);
    *(long *)(lVar2 + _DAT_112ef5a90) = lVar4;
    lVar3 = lVar4;
    func_0x000107c61174();
    uVar1 = (undefined1)lVar3;
    func_0x000107c61170(uVar5);
    if (lVar4 != 0) {
      func_0x000107c4a4c0();
      *(undefined1 *)(lVar2 + _DAT_112ef5a98) = uVar1;
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b3d5c0; end: 102b3d697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102b3d5c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef5a90);
  if (lVar1 == 0) {
LAB_102b3d678:
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_48);
    uVar2 = uStack_48;
    func_0x000107c49f94(uStack_48,param_2,lVar1,0);
    func_0x000107c615e8(uStack_48);
    uVar3 = (uint)uStack_48;
    if ((int)uVar2 == 0) {
      func_0x0001000d224c(&uStack_50);
      uVar2 = uStack_50;
      func_0x000107c44698(uStack_50,param_2,lVar1);
      func_0x000107c615e8(uStack_50);
      uVar3 = (uint)uStack_50;
      if ((int)uVar2 == 0) {
        func_0x000107c61170(lVar1);
        goto LAB_102b3d678;
      }
    }
    FUN_102b3d698();
    func_0x000107c61170(lVar1);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 102b3d698; end: 102b3d857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b3d698(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uStack_58;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ef5a90);
  if (uVar1 == 0) {
    return 0;
  }
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x000107c4a63c();
  if (((int)uVar2 != 0) && (func_0x0001000d224c(&uStack_58), uStack_58 != 0)) {
    uVar2 = uStack_58;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_58);
    uVar3 = uVar2;
    func_0x000107c501d0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c5cb20();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (uVar2 != 0) {
        uVar3 = uVar1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c5faec();
        lVar6 = param_2;
        func_0x000107c61170(uVar3);
        uVar3 = uVar2;
        func_0x000107c4f494();
        func_0x000107c61180();
        if (uVar3 == 0) {
          func_0x000107c6142c(param_2);
        }
        else {
          uVar5 = uVar3;
          func_0x000107c5faec();
          func_0x000107c61170(uVar3);
          if ((uVar4 == uVar5) && (param_2 == lVar6)) {
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(lVar6);
LAB_102b3d800:
            uVar3 = uVar2;
            func_0x000107c49984();
            func_0x000107c61170(uVar2);
            func_0x000107c61170(uVar1);
            if ((uVar3 & 1) == 0) {
              return 0;
            }
            return 1;
          }
          func_0x000107c605b8(uVar4,param_2,uVar5,lVar6,0);
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(lVar6);
          if ((uVar4 & 1) != 0) goto LAB_102b3d800;
        }
        func_0x000107c61170(uVar2);
      }
    }
  }
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 102b3d858; end: 102b3d9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3d858(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef5ac8);
  *(long *)(unaff_x20 + _DAT_112ef5ac8) = param_1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  if (param_1 != 0) {
    uVar6 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ef5ad8);
    *(undefined8 *)(unaff_x20 + _DAT_112ef5ad8) = uVar6;
    func_0x000107c6157c();
    func_0x000107c61574(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c6157c(uVar7);
    plVar2 = (long *)PTR___sSbSQsWP_11034dd50;
    puVar1 = PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c61574(uVar7);
    func_0x000104884898();
    func_0x000107c61574(puVar1);
    puVar1 = &UNK_1105a0228;
    func_0x000107c613fc(&UNK_1105a0228,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcVar3 = FUN_102b3e474;
    puVar5 = puVar1;
    (**(code **)(*plVar2 + 0x60))(FUN_102b3e474);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar1);
    pcVar4 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(puVar5 + 0x10))(uVar6,pcVar4,puVar5);
    func_0x000107c61574(param_1);
    func_0x000107c61574(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
    return;
  }
  return;
}



/* Entry: 102b3d9c0; end: 102b3db93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b3d9c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ef5af8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ef5af8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102b3db94; end: 102b3dbf3; -[_TtC29LensCarouselFeaturesWorkflows29SnapButtonOverlayUIController init] */

void FUN_102b3db94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.SnapButtonOverlayUIController",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3dbc0);
  (*pcVar1)();
}



/* Entry: 102b3dbf4; end: 102b3dc7b; -[_TtC29LensCarouselFeaturesWorkflows29SnapButtonOverlayUIController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b3dc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3dc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3dc60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3dc44) */
/* WARNING: Removing unreachable block (ram,0x000102b3dc24) */
/* WARNING: Removing unreachable block (ram,0x000102b3dc64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3dbf4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef5ac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef5ad0));
  return;
}



/* Entry: 102b3dc7c; end: 102b3dc9b;  */

void FUN_102b3dc7c(void)

{
  func_0x000107c61168(&PTR_PTR_11288c8c0);
  return;
}



/* Entry: 102b3dc9c; end: 102b3de5b; -[_TtC29LensCarouselFeaturesWorkflows29SnapButtonOverlayUIController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_102b3dc9c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  FUN_102b3e530(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_102b3d9c0();
  uVar2 = param_3;
  func_0x000107c60118(param_3,uVar1);
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x000102b3da4c();
    uVar2 = param_3;
    func_0x000107c60118(param_3,uVar1);
    uVar3 = (uint)uVar2;
    func_0x000107c61170(uVar1);
  }
  else {
    uVar3 = 1;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar3 & 1;
}



/* Entry: 102b3de5c; end: 102b3ded3; -[_TtC29LensCarouselFeaturesWorkflows29SnapButtonOverlayUIController gestureRecognizer:shouldReceiveTouch:] */

uint FUN_102b3de5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102b3dd70(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102b3ded4; end: 102b3dfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3ded4(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ef5ad0;
  if (param_2 != 0) {
    lVar5 = param_2;
    if (cVar1 == '\0') {
      lVar3 = *(long *)(param_2 + _DAT_112ef5ad0);
      if (lVar3 != 0) {
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c4ff34();
        lVar5 = _DAT_112ef5ae0;
        uVar6 = *(undefined8 *)(param_2 + _DAT_112ef5ae0);
        FUN_102b3d9c0();
        func_0x000107c4ff3c(uVar6);
        func_0x000107c61170(lVar4);
        uVar6 = *(undefined8 *)(param_2 + lVar5);
        func_0x000102b3da4c();
        func_0x000107c4ff3c(uVar6);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        lVar5 = *(long *)(param_2 + lVar2);
        *(undefined8 *)(param_2 + lVar2) = 0;
        func_0x000107c61170(param_2);
      }
    }
    else {
      FUN_102b3dfc4();
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102b3dfc4; end: 102b3e2eb;  */

/* WARNING: Possible PIC construction at 0x000102b3e07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3e178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3e1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3e208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3e23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3e280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3e29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3e2b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3e2a0) */
/* WARNING: Removing unreachable block (ram,0x000102b3e284) */
/* WARNING: Removing unreachable block (ram,0x000102b3e240) */
/* WARNING: Removing unreachable block (ram,0x000102b3e20c) */
/* WARNING: Removing unreachable block (ram,0x000102b3e1d0) */
/* WARNING: Removing unreachable block (ram,0x000102b3e17c) */
/* WARNING: Removing unreachable block (ram,0x000102b3e080) */
/* WARNING: Removing unreachable block (ram,0x000102b3e2bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3dfc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  if (*(long *)(unaff_x20 + _DAT_112ef5ad0) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a050();
  if (*(char *)(unaff_x20 + _DAT_112ef5af0) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c52b50(puVar1);
    puVar1 = puVar2;
  }
  else {
    func_0x000107c5a378(puVar1);
    func_0x000107c3d89c(*(undefined8 *)(unaff_x20 + _DAT_112ef5ae0));
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef5ae8);
    func_0x000107c5b078(uVar4);
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = 0x112d360b8;
    FUN_102b3e4b8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    func_0x000107c3f75c(puVar1);
    func_0x000107c61180();
    func_0x000107c3f75c(uVar4);
    func_0x000107c61180();
    func_0x000107c40280(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102b3e2ec; end: 102b3e423; -[_TtC29LensCarouselFeaturesWorkflows29SnapButtonOverlayUIController overlayViewTappedWithGestureRecognizer:] */

/* WARNING: Possible PIC construction at 0x000102b3e33c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3e340) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3e2ec(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112ef5ac8);
  if ((lVar3 != 0) && (pcVar1 = *(code **)(lVar3 + 0x10), pcVar1 != (code *)0x0)) {
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    func_0x000107c61174();
    func_0x000107c6157c(lVar3);
    func_0x000100b64c10(pcVar1,uVar2);
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 102b3e424; end: 102b3e473; -[_TtC29LensCarouselFeaturesWorkflows29SnapButtonOverlayUIController overlayLongPressedWithGestureRecognizer:] */

/* WARNING: Possible PIC construction at 0x000102b3e45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3e460) */

void FUN_102b3e424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102b3e370(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b3e474; end: 102b3e4b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3e474(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ef5ad0;
  if (lVar3 != 0) {
    lVar6 = lVar3;
    if (cVar1 == '\0') {
      lVar4 = *(long *)(lVar3 + _DAT_112ef5ad0);
      if (lVar4 != 0) {
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c4ff34();
        lVar6 = _DAT_112ef5ae0;
        uVar7 = *(undefined8 *)(lVar3 + _DAT_112ef5ae0);
        FUN_102b3d9c0();
        func_0x000107c4ff3c(uVar7);
        func_0x000107c61170(lVar5);
        uVar7 = *(undefined8 *)(lVar3 + lVar6);
        func_0x000102b3da4c();
        func_0x000107c4ff3c(uVar7);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        lVar6 = *(long *)(lVar3 + lVar2);
        *(undefined8 *)(lVar3 + lVar2) = 0;
        func_0x000107c61170(lVar3);
      }
    }
    else {
      FUN_102b3dfc4();
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102b3e4b8; end: 102b3e52f;  */

void FUN_102b3e4b8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102b3e530(0,param_1,param_2);
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



/* Entry: 102b3e530; end: 102b3e56f;  */

void FUN_102b3e530(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b3e570; end: 102b3e5cb;  */

void FUN_102b3e570(void)

{
  long unaff_x20;
  
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3e5cc; end: 102b3e7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3e5cc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] != 0) {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar1 = alStack_78[0];
    func_0x000107c3d14c(alStack_78[0]);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    plVar11 = *(long **)(unaff_x20 + _DAT_112ef5c38);
    plVar3 = plVar11;
    func_0x000100471e0c(plVar11,0);
    func_0x000107c61574(lVar2);
    puVar8 = &UNK_1105a0270;
    puVar4 = puVar8;
    func_0x000107c613fc(&UNK_1105a0270,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcVar5 = FUN_102b3eee4;
    puVar10 = puVar4;
    (**(code **)(*plVar3 + 0x60))(FUN_102b3eee4);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    pcVar6 = pcVar5;
    func_0x000107c614f0(pcVar5);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ef5c40);
    (**(code **)(puVar10 + 0x18))(uVar12,pcVar6,puVar10);
    func_0x000107c615e8(pcVar5);
    func_0x0001000d224c(alStack_78);
    func_0x0001000a8868(alStack_78,uStack_60);
    uVar7 = uStack_60;
    (**(code **)(lStack_58 + 0x10))(uStack_60,lStack_58);
    func_0x000100471e0c(plVar11,0);
    func_0x000107c61574(uVar7);
    func_0x0001000834e4(alStack_78);
    func_0x000107c613fc(&UNK_1105a0270,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    uVar7 = 0x102b3eeec;
    puVar4 = puVar8;
    (**(code **)(*plVar11 + 0x60))(0x102b3eeec);
    func_0x000107c61574(plVar11);
    func_0x000107c61574(puVar8);
    uVar9 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar4 + 0x18))(uVar12,uVar9,puVar4);
    func_0x000107c615e8(alStack_78[0]);
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 102b3e7ec; end: 102b3e953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3e7ec(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long alStack_60 [2];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ef5c48;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112ef5c48);
    uStack_50 = uVar3;
    func_0x000107c6157c(uVar2);
    func_0x000100075034(FUN_102b3f40c,alStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(alStack_60);
    func_0x000107c61574(uVar3);
    lVar1 = alStack_60[0];
    if (alStack_60[0] != 0) {
      lVar4 = *(long *)(param_2 + _DAT_112ef5c20);
      if (lVar4 == 0) {
        func_0x000107c61174(alStack_60[0]);
      }
      else {
        func_0x000107c61174(alStack_60[0]);
        func_0x000107c550dc(0,lVar4);
      }
      lVar4 = lVar1;
      func_0x000107c61174(lVar1);
      FUN_102b3e9b0(lVar1);
      func_0x000107c61170(lVar4);
      func_0x0001000d224c(alStack_60);
      if (alStack_60[0] == 0) {
        func_0x000107c61170(param_2);
      }
      else {
        func_0x000107c5050c(alStack_60[0]);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(alStack_60[0]);
      }
      func_0x000107c61170(lVar4);
      param_2 = lVar4;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b3e954; end: 102b3e9af;  */

void FUN_102b3e954(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102b3e9b0(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b3e9b0; end: 102b3ebe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3e9b0(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uStack_38;
  
  if (param_1 != 0) {
    func_0x000107c4d2b4();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar2 = 0;
      func_0x000102b3f47c(0,0x112d53b58,&PTR_PTR_1126bb878);
      uVar3 = param_1;
      func_0x000107c5fc54(param_1,uVar2);
      func_0x000107c61170(param_1);
      if (uVar3 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar4 = uVar3;
        }
        func_0x000107c60480();
      }
      if (uVar4 == 0) {
        func_0x000107c6142c(uVar3);
      }
      else {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3eb34);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(uVar3 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = 0;
          func_0x000101b66d1c(0,uVar3);
        }
        func_0x000107c6142c(uVar3);
        uVar3 = uVar4;
        func_0x000107c5d844();
        func_0x000107c61170(uVar4);
        if ((uVar3 & 1) != 0) {
          return;
        }
      }
    }
  }
  lVar5 = unaff_x20 + _DAT_112ef5c28;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef5c48);
    func_0x000107c6157c(uVar2);
    func_0x0001000c74f0(&uStack_38);
    func_0x000107c61574(uVar2);
    if (uStack_38 != 0) {
      uVar3 = uStack_38;
      func_0x000107c4a6a8();
      if ((uVar3 & 1) == 0) {
        func_0x000102b3eb34();
      }
      func_0x000107c61170(uStack_38);
    }
    func_0x000107c5a60c(lVar5);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 102b3ebe8; end: 102b3ec47; -[_TtC29LensCarouselFeaturesWorkflows38LensCarouselCameraButtonsSetupWorkflow init] */

void FUN_102b3ebe8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensCarouselCameraButtonsSetupWorkflow",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3ec14);
  (*pcVar1)();
}



/* Entry: 102b3ec48; end: 102b3ecef; -[_TtC29LensCarouselFeaturesWorkflows38LensCarouselCameraButtonsSetupWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b3ec64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3ec84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3ecb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3ecd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3ecb8) */
/* WARNING: Removing unreachable block (ram,0x000102b3ec88) */
/* WARNING: Removing unreachable block (ram,0x000102b3ec68) */
/* WARNING: Removing unreachable block (ram,0x000102b3ecd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3ec48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef5c08));
  return;
}



/* Entry: 102b3ecf0; end: 102b3ed0f;  */

void FUN_102b3ecf0(void)

{
  func_0x000107c61168(&PTR_PTR_11288c9b8);
  return;
}



/* Entry: 102b3ed10; end: 102b3ed43; -[_TtC29LensCarouselFeaturesWorkflows38LensCarouselCameraButtonsSetupWorkflow isCameraRecordingDisabled] */

uint FUN_102b3ed10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b3ed44();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102b3ed44; end: 102b3ee73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102b3ed44(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ef5c48);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(uVar3);
  if (lStack_38 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = lStack_38;
    func_0x000107c4a6a8();
    uVar1 = (uint)lVar2;
    if (uVar1 == 0) {
      func_0x000102b3eb34();
      func_0x000107c61170(lStack_38);
      uVar1 = uVar1 ^ 1;
    }
    else {
      func_0x000107c61170(lStack_38);
      uVar1 = 1;
    }
  }
  return uVar1 & 1;
}



/* Entry: 102b3ee74; end: 102b3eee3;  */

void FUN_102b3ee74(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 102b3eee4; end: 102b3ef07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3eee4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long alStack_60 [2];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ef5c48;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ef5c48);
    uStack_50 = uVar4;
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_102b3f40c,alStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    uVar4 = *(undefined8 *)(lVar2 + lVar1);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(alStack_60);
    func_0x000107c61574(uVar4);
    lVar1 = alStack_60[0];
    if (alStack_60[0] != 0) {
      lVar5 = *(long *)(lVar2 + _DAT_112ef5c20);
      if (lVar5 == 0) {
        func_0x000107c61174(alStack_60[0]);
      }
      else {
        func_0x000107c61174(alStack_60[0]);
        func_0x000107c550dc(0,lVar5);
      }
      lVar5 = lVar1;
      func_0x000107c61174(lVar1);
      FUN_102b3e9b0(lVar1);
      func_0x000107c61170(lVar5);
      func_0x0001000d224c(alStack_60);
      if (alStack_60[0] == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        func_0x000107c5050c(alStack_60[0]);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(alStack_60[0]);
      }
      func_0x000107c61170(lVar5);
      lVar2 = lVar5;
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b3ef08; end: 102b3f0c3;  */

ulong FUN_102b3ef08(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3efec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3eff0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102b3f47c(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f0c4);
  (*pcVar2)();
}



/* Entry: 102b3f0c4; end: 102b3f40b;  */

ulong FUN_102b3f0c4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f19c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f1a0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000020,0x800000010f0f22f0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f268);
  (*pcVar2)();
}



/* Entry: 102b3f40c; end: 102b3f457;  */

void FUN_102b3f40c(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b3f458; end: 102b3f4bb;  */

undefined8 FUN_102b3f458(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b3f4bc; end: 102b3f893;  */

void FUN_102b3f4bc(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar5 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f570);
          (*pcVar2)();
        }
        uVar9 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
        func_0x000107c615f0(uVar9);
      }
      else {
        uVar9 = uVar6;
        func_0x000102b3f268(uVar6,uVar3);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f56c);
        (*pcVar2)();
      }
      uVar10 = uVar6 + 1;
      func_0x000107c4fc08(uVar7);
      func_0x000107c615e8(uVar9);
      uVar6 = uVar6 + 1;
    } while (uVar10 != uVar5);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x28);
  if (uVar3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar5 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f61c);
          (*pcVar2)();
        }
        uVar9 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
        func_0x000107c615f0(uVar9);
      }
      else {
        uVar9 = uVar6;
        FUN_102b3f0c4(uVar6,uVar3);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3f618);
        (*pcVar2)();
      }
      uVar10 = uVar6 + 1;
      func_0x000107c4fc08(uVar7);
      func_0x000107c615e8(uVar9);
      uVar6 = uVar6 + 1;
    } while (uVar10 != uVar5);
  }
  lVar8 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x10);
  if (lVar8 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x30) + 0x20;
    do {
      FUN_102b3f8f8(lVar4,auStack_88);
      lVar1 = lStack_68;
      uVar7 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lVar1 + 8))(uVar7,lVar1);
      func_0x0001000834e4(auStack_88);
      lVar4 = lVar4 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 102b3f894; end: 102b3f8f7;  */

void FUN_102b3f894(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3f8f8; end: 102b3f93b;  */

long FUN_102b3f8f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102b3f93c; end: 102b3fa57;  */

undefined8 FUN_102b3f93c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c501d0();
  func_0x000107c61180();
  uVar5 = 0;
  if (lVar1 != 0) {
    puVar2 = &UNK_1105a02b0;
    func_0x000107c613fc(&UNK_1105a02b0,0x18,7);
    *(undefined8 **)(puVar2 + 0x10) = &uStack_38;
    puVar3 = &UNK_1105a02d8;
    func_0x000107c613fc(&UNK_1105a02d8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x102b3fa9c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uStack_48 = 0x102b3fb04;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1019dec28;
    puStack_50 = &UNK_1105a02f0;
    ppuVar4 = &puStack_68;
    puStack_40 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_40);
    func_0x000107c4c590(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c60bd0(ppuVar4);
    uVar5 = uStack_38;
    func_0x000107c61574(puVar2);
  }
  return uVar5;
}



/* Entry: 102b3fa58; end: 102b3fa7b;  */

void FUN_102b3fa58(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3fa7c; end: 102b3fb23;  */

void FUN_102b3fa7c(void)

{
  FUN_102b3f93c();
  return;
}



/* Entry: 102b3fb24; end: 102b3fb3f;  */

void FUN_102b3fb24(long param_1,long param_2)

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



/* Entry: 102b3fb40; end: 102b3fbb7;  */

void FUN_102b3fb40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = param_1;
    func_0x000107c615f0(param_1);
    func_0x000107c615e8(uVar1);
    FUN_102b3fbb8();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102b3fbb8; end: 102b3ff93;  */

void FUN_102b3fbb8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar9 = &puStack_80;
  ppuVar10 = &puStack_80;
  lVar2 = *(long *)(unaff_x20 + 0x70);
  if (lVar2 != 0) {
    func_0x000107c5e3e8();
    func_0x000107c61180();
    puVar3 = &UNK_1105a0330;
    func_0x000107c613fc(&UNK_1105a0330,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_60 = FUN_102b40738;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1019eb2d8;
    puStack_68 = &UNK_1105a0348;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar5 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar5);
    func_0x000107c61170(lVar5);
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x000107c3f18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar3 = &UNK_1105a0330;
    func_0x000107c613fc(&UNK_1105a0330,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_60 = (code *)0x102b4076c;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined *)0x102b407d0;
    puStack_68 = &UNK_1105a0410;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar2 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c3e924(lVar2);
    func_0x000107c61170(lVar2);
  }
  puVar3 = &UNK_1105a0380;
  func_0x000107c613fc(&UNK_1105a0380,0x11,7);
  puVar3[0x10] = 0;
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x000107c4b188();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar5;
    func_0x000107c421ac(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = &UNK_1105a0330;
    func_0x000107c613fc(&UNK_1105a0330,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    puVar8 = &UNK_1105a03d0;
    func_0x000107c613fc(&UNK_1105a03d0,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar3;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    pcStack_60 = (code *)0x102b40764;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100b5fdac;
    puStack_68 = &UNK_1105a03e8;
    puStack_58 = puVar8;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar7);
    lVar5 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar5);
    func_0x000107c61170(lVar5);
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61574(puVar3);
  }
  else {
    lVar5 = lVar2;
    func_0x000107c50688();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar7 = &UNK_1105a0330;
    func_0x000107c613fc(&UNK_1105a0330,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    pcStack_60 = (code *)0x102b4075c;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined *)0x102b407cc;
    puStack_68 = &UNK_1105a0398;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar2 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar5);
    func_0x000107c3e924(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b3ff94; end: 102b3ffef;  */

void FUN_102b3ff94(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102b3fff0(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102b3fff0; end: 102b4018b;  */

/* WARNING: Possible PIC construction at 0x000102b40034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b40084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b400dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b400f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b40168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b400fc) */
/* WARNING: Removing unreachable block (ram,0x000102b400e0) */
/* WARNING: Removing unreachable block (ram,0x000102b40088) */
/* WARNING: Removing unreachable block (ram,0x000102b40038) */
/* WARNING: Removing unreachable block (ram,0x000102b4016c) */

void FUN_102b3fff0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
  }
  else {
    uVar2 = param_1;
    func_0x000107c5faec();
    lVar3 = *(long *)(unaff_x20 + 0x68);
    if (lVar3 == 0) {
LAB_102b40108:
      lVar3 = *(long *)(unaff_x20 + 0x28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
        lVar5 = *(long *)(unaff_x20 + 0x50);
        func_0x0001000a8868(unaff_x20 + 0x30,uVar1);
        (**(code **)(lVar5 + 8))(uVar1,lVar5);
        func_0x000107c4f6c0(lVar3);
        func_0x000107c615e8(lVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    uVar4 = *(ulong *)(unaff_x20 + 0x60);
    if (((uVar2 != uVar4) || (lVar3 != param_2)) &&
       (func_0x000107c605b8(uVar2,param_2,uVar4,lVar3,0), (uVar2 & 1) == 0)) {
      lVar5 = *(long *)(unaff_x20 + 0x28);
      func_0x000107c61434(lVar3);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c6142c(lVar3);
        goto LAB_102b40108;
      }
      func_0x000107c5fadc(uVar4,lVar3);
      param_2 = lVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102b4018c; end: 102b4043b;  */

void FUN_102b4018c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x70);
    if (lVar1 != 0) {
      func_0x000107c3dff4();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
        func_0x000107c5faec(lVar2);
        func_0x000107c61170(lVar2);
        lVar2 = *(long *)(param_2 + 0x28);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c6142c(puVar3);
        }
        else {
          func_0x000107c5fadc(lVar1,puVar3);
          func_0x000107c6142c(puVar3);
          func_0x000107c4f6c0(lVar2);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar1);
        }
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102b4043c; end: 102b405bb;  */

void FUN_102b4043c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_2 != 0) {
    pcStack_78 = FUN_102b405bc;
    puStack_70 = (undefined *)0x0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_1105a0438;
    ppuVar2 = &puStack_98;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_70);
    pcStack_78 = FUN_102b405bc;
    puStack_70 = (undefined *)0x0;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_1105a0460;
    ppuVar3 = &puStack_98;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_70);
    puVar4 = &UNK_1105a0498;
    func_0x000107c613fc(&UNK_1105a0498,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x102b40774;
    *(long *)(puVar4 + 0x18) = param_2;
    pcStack_78 = FUN_102b4077c;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_1105a04b0;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar1 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4c7d8(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61578(param_2,2);
  }
  return;
}



/* Entry: 102b405bc; end: 102b405c3;  */

void FUN_102b405bc(void)

{
  return;
}



/* Entry: 102b405c4; end: 102b406c3;  */

/* WARNING: Possible PIC construction at 0x000102b40608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b4060c) */
/* WARNING: Removing unreachable block (ram,0x000102b40610) */
/* WARNING: Removing unreachable block (ram,0x000102b4062c) */
/* WARNING: Removing unreachable block (ram,0x000102b40640) */
/* WARNING: Removing unreachable block (ram,0x000102b40654) */

void FUN_102b405c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    func_0x000107c3dff4();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102b406c4; end: 102b40737;  */

void FUN_102b406c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102b40738; end: 102b4077b;  */

void FUN_102b40738(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102b3fff0(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b4077c; end: 102b4079b;  */

void FUN_102b4077c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b4079c; end: 102b407d3;  */

void FUN_102b4079c(long param_1,long param_2)

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



/* Entry: 102b407d4; end: 102b40967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b407d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 auStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  uVar6 = auStack_68[0];
  uVar1 = auStack_68[0];
  func_0x000107c4aea4();
  func_0x000107c615e8(uVar6);
  if ((int)uVar1 != 0xb) {
    func_0x0001000d224c(auStack_68);
    uVar6 = auStack_68[0];
    func_0x000107c4aea4();
    func_0x000107c615e8(auStack_68[0]);
    if ((int)uVar6 != 0xc) {
      uVar2 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef5ed0);
      *(undefined8 *)(unaff_x20 + _DAT_112ef5ed0) = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar6);
      func_0x0001000d224c(auStack_68);
      func_0x0001000a8868(auStack_68,plStack_50);
      plVar3 = plStack_50;
      (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
      puVar4 = &UNK_1105a0500;
      func_0x000107c613fc(&UNK_1105a0500,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uVar6 = 0x102b40b98;
      puVar5 = puVar4;
      (**(code **)(*plVar3 + 0x60))(0x102b40b98);
      func_0x000107c61574(plVar3);
      func_0x000107c61574(puVar4);
      func_0x0001000834e4(auStack_68);
      uVar1 = uVar6;
      func_0x000107c614f0(uVar6);
      (**(code **)(puVar5 + 0x10))(uVar2,uVar1,puVar5);
      func_0x000107c61574(uVar2);
      func_0x000107c615e8(uVar6);
    }
  }
  return;
}



/* Entry: 102b40968; end: 102b40a5b;  */

void FUN_102b40968(undefined8 param_1,long param_2)

{
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_40 = param_2;
    func_0x000104505ba4(FUN_102b40a5c,0,0x102b40a60,0,0x102b40a64,0,0x102b40a68,0,0x102b40a6c,0,
                        FUN_102b40ba0,auStack_50,0x102b40a70,0,0x102b40a74,0,0x102b40a78,0,
                        0x102b40a7c,0,0x102b40a80,0,0x102b40a84,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b40a5c; end: 102b40a87;  */

void FUN_102b40a5c(void)

{
  return;
}



/* Entry: 102b40a88; end: 102b40ae7; -[_TtC29LensCarouselFeaturesWorkflows24LensPageTrackingWorkflow init] */

void FUN_102b40a88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensPageTrackingWorkflow",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b40ab4);
  (*pcVar1)();
}



/* Entry: 102b40ae8; end: 102b40b3f; -[_TtC29LensCarouselFeaturesWorkflows24LensPageTrackingWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b40b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b40b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b40ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef5eb8));
  return;
}



/* Entry: 102b40b40; end: 102b40b5f;  */

void FUN_102b40b40(void)

{
  func_0x000107c61168(&PTR_PTR_11288cab8);
  return;
}



/* Entry: 102b40b60; end: 102b40b7f;  */

void FUN_102b40b60(void)

{
  FUN_102b407d4();
  return;
}



/* Entry: 102b40b80; end: 102b40b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b40b80(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + _DAT_112ef5ed0);
  *(undefined8 *)(*unaff_x20 + _DAT_112ef5ed0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102b40ba0; end: 102b40bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b40ba0(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4a144();
  uVar1 = 0x1f;
  if (param_1 == 0) {
    uVar1 = 0x8d;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_112ef5ec8),PTR_s_startPage__112671938,uVar1);
  return;
}



/* Entry: 102b40bdc; end: 102b40e33;  */

undefined8 FUN_102b40bdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x0001000c6518(param_3,*(undefined8 *)(param_3 + 0x18));
  FUN_102b40fac(param_1,param_2,lVar1);
  func_0x0001000834e4(param_3);
  return param_1;
}



/* Entry: 102b40e34; end: 102b40ed7;  */

void FUN_102b40e34(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  iVar2 = (int)*param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c3ebcc();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = 0x7365736e656c;
    func_0x000107c5fadc(0x7365736e656c,0xe600000000000000);
    if (iVar2 == 0) {
      func_0x000107c5d290(uVar3);
    }
    else {
      func_0x000107c4b964();
    }
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102b40ed8; end: 102b40f1b;  */

void FUN_102b40ed8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b40f1c; end: 102b40fab;  */

long FUN_102b40f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = param_5;
  uStack_48 = param_6;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))();
  puVar1 = &UNK_10db246b0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(param_4 + 0x48) = puVar1;
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  FUN_102b3badc(auStack_68,param_4 + 0x20);
  return param_4;
}



/* Entry: 102b40fac; end: 102b41063;  */

void FUN_102b40fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c613fc(param_4,0x58,7);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,param_5);
  FUN_102b40f1c(param_1,param_2,
                &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,
                param_5,param_6);
  return;
}



/* Entry: 102b41064; end: 102b4106b;  */

void FUN_102b41064(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  iVar3 = (int)*param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c3ebcc();
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = 0x7365736e656c;
    func_0x000107c5fadc(0x7365736e656c,0xe600000000000000);
    if (iVar3 == 0) {
      func_0x000107c5d290(uVar4);
    }
    else {
      func_0x000107c4b964();
    }
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102b4106c; end: 102b4108b;  */

void FUN_102b4106c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef5f40);
  return;
}



/* Entry: 102b4108c; end: 102b41097; -[SCLensActionBarEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4108c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5fc0;
  func_0x000107c61428(param_1 + _DAT_112ef5fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b41098; end: 102b410a3; -[SCLensActionBarEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41098(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5fc0;
  func_0x000107c61428(param_1 + _DAT_112ef5fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b410a4; end: 102b410af; -[SCLensActionBarEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5fc8;
  func_0x000107c61428(param_1 + _DAT_112ef5fc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b410b0; end: 102b410bb; -[SCLensActionBarEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5fc8;
  func_0x000107c61428(param_1 + _DAT_112ef5fc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b410bc; end: 102b410c7; -[SCLensActionBarEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5fd0;
  func_0x000107c61428(param_1 + _DAT_112ef5fd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b410c8; end: 102b410d3; -[SCLensActionBarEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5fd0;
  func_0x000107c61428(param_1 + _DAT_112ef5fd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b410d4; end: 102b410df; -[SCLensActionBarEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5fd8;
  func_0x000107c61428(param_1 + _DAT_112ef5fd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b410e0; end: 102b410eb; -[SCLensActionBarEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5fd8;
  func_0x000107c61428(param_1 + _DAT_112ef5fd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b410ec; end: 102b410f7; -[SCLensActionBarEntryPoint lensInfoButtonServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5fe0;
  func_0x000107c61428(param_1 + _DAT_112ef5fe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b410f8; end: 102b41103; -[SCLensActionBarEntryPoint setLensInfoButtonServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b410f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5fe0;
  func_0x000107c61428(param_1 + _DAT_112ef5fe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b41104; end: 102b4110f; -[SCLensActionBarEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41104(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5fe8;
  func_0x000107c61428(param_1 + _DAT_112ef5fe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b41110; end: 102b4111b; -[SCLensActionBarEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5fe8;
  func_0x000107c61428(param_1 + _DAT_112ef5fe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b4111c; end: 102b41127; -[SCLensActionBarEntryPoint lensCarouselStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4111c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5ff0;
  func_0x000107c61428(param_1 + _DAT_112ef5ff0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b41128; end: 102b41133; -[SCLensActionBarEntryPoint setLensCarouselStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5ff0;
  func_0x000107c61428(param_1 + _DAT_112ef5ff0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b41134; end: 102b4113f; -[SCLensActionBarEntryPoint lensesFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef5ff8;
  func_0x000107c61428(param_1 + _DAT_112ef5ff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b41140; end: 102b41183;  */

void FUN_102b41140(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b41184; end: 102b4118f; -[SCLensActionBarEntryPoint setLensesFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41184(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef5ff8;
  func_0x000107c61428(param_1 + _DAT_112ef5ff8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b41190; end: 102b411e3;  */

void FUN_102b41190(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b411e4; end: 102b4122b; -[SCLensActionBarEntryPoint lensActionBarPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b411e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6000;
  func_0x000107c61428(param_1 + _DAT_112ef6000,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b4122c; end: 102b4128f; -[SCLensActionBarEntryPoint setLensActionBarPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b4122c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6000;
  func_0x000107c61428(param_1 + _DAT_112ef6000,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b41290; end: 102b4184b;  */

/* WARNING: Possible PIC construction at 0x000102b4140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b417cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b417dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b417ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b417fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4180c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4178c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4179c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b417ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b417bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b416f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b41724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4168c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4169c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b416ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b416bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4165c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4166c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4167c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4162c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4163c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b415fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b4160c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b415dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b415ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b415cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b415f0) */
/* WARNING: Removing unreachable block (ram,0x000102b415e0) */
/* WARNING: Removing unreachable block (ram,0x000102b41610) */
/* WARNING: Removing unreachable block (ram,0x000102b41600) */
/* WARNING: Removing unreachable block (ram,0x000102b41640) */
/* WARNING: Removing unreachable block (ram,0x000102b41630) */
/* WARNING: Removing unreachable block (ram,0x000102b41680) */
/* WARNING: Removing unreachable block (ram,0x000102b41670) */
/* WARNING: Removing unreachable block (ram,0x000102b41660) */
/* WARNING: Removing unreachable block (ram,0x000102b416c0) */
/* WARNING: Removing unreachable block (ram,0x000102b416b0) */
/* WARNING: Removing unreachable block (ram,0x000102b416a0) */
/* WARNING: Removing unreachable block (ram,0x000102b41690) */
/* WARNING: Removing unreachable block (ram,0x000102b41728) */
/* WARNING: Removing unreachable block (ram,0x000102b41718) */
/* WARNING: Removing unreachable block (ram,0x000102b41708) */
/* WARNING: Removing unreachable block (ram,0x000102b416f8) */
/* WARNING: Removing unreachable block (ram,0x000102b417c0) */
/* WARNING: Removing unreachable block (ram,0x000102b417b0) */
/* WARNING: Removing unreachable block (ram,0x000102b417a0) */
/* WARNING: Removing unreachable block (ram,0x000102b41790) */
/* WARNING: Removing unreachable block (ram,0x000102b41810) */
/* WARNING: Removing unreachable block (ram,0x000102b41800) */
/* WARNING: Removing unreachable block (ram,0x000102b41804) */
/* WARNING: Removing unreachable block (ram,0x000102b417f0) */
/* WARNING: Removing unreachable block (ram,0x000102b417e0) */
/* WARNING: Removing unreachable block (ram,0x000102b417d0) */
/* WARNING: Removing unreachable block (ram,0x000102b4158c) */
/* WARNING: Removing unreachable block (ram,0x000102b41814) */
/* WARNING: Removing unreachable block (ram,0x000102b4157c) */
/* WARNING: Removing unreachable block (ram,0x000102b4156c) */
/* WARNING: Removing unreachable block (ram,0x000102b4155c) */
/* WARNING: Removing unreachable block (ram,0x000102b4154c) */
/* WARNING: Removing unreachable block (ram,0x000102b41410) */
/* WARNING: Removing unreachable block (ram,0x000102b417c8) */
/* WARNING: Removing unreachable block (ram,0x000102b41418) */
/* WARNING: Removing unreachable block (ram,0x000102b415d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41290(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  ulong uStack_88;
  long lStack_80;
  
  lVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c3f284();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f2a4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar5);
      lVar5 = lVar1;
    }
    else {
      lVar2 = unaff_x20;
      func_0x000107c4b2f4();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar5);
        lVar5 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c4b20c();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar2 = unaff_x20;
          func_0x000107c4afbc();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar3 = unaff_x20;
            func_0x000107c4af4c();
            func_0x000107c61180();
            if (lVar3 == 0) {
              func_0x000107c61170(lVar5);
              lVar5 = lVar1;
            }
            else {
              lVar4 = unaff_x20;
              func_0x000107c4b59c();
              func_0x000107c61180();
              if (lVar4 == 0) {
                func_0x000107c61170(lVar5);
                lVar5 = lVar1;
              }
              else {
                func_0x000107c4add0();
                func_0x000107c61180();
                if (unaff_x20 != 0) {
                  lVar5 = 0;
                  FUN_102b37e78();
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar5 + 0x10) = 0;
                  if ((*(byte *)(lVar1 + _DAT_113082448 + 1) >> 3 & 1) == 0) {
                    if (2 < *(ulong *)(lVar1 + _DAT_113082420)) {
                      lVar5 = lVar1;
                      if (*(ulong *)(lVar1 + _DAT_113082420) != 8) goto code_r0x000107c61170;
                      func_0x0001000d224c(auStack_a0);
                      func_0x000102b4209c(auStack_a0);
                      uVar6 = uStack_88;
                      (**(code **)(lStack_80 + 0x40))(uStack_88,lStack_80);
                      FUN_102b420e0(auStack_a0);
                      if ((uVar6 & 1) == 0) goto code_r0x000107c61170;
                    }
                    func_0x000107c4af44(lVar3);
                    func_0x000107c61180();
                    func_0x000107c5c734();
                    func_0x000107c61180();
                    lVar5 = lVar3;
                  }
                  else {
                    func_0x000107c61170(lVar1);
                    lVar5 = lVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 102b4184c; end: 102b41873; -[SCLensActionBarEntryPoint begin] */

void FUN_102b4184c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b41290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b41874; end: 102b41903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b41874(void)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef6008);
  if ((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) {
    func_0x000107c6157c(lVar2);
    func_0x000107c61174(lVar1);
    func_0x000102b302b8();
    func_0x000107c61170(lVar1);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}


