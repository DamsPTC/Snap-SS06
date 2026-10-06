/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10312c48c; end: 10312c5cf;  */

/* WARNING: Possible PIC construction at 0x00010312c4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312c520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312c500) */
/* WARNING: Removing unreachable block (ram,0x00010312c5cc) */
/* WARNING: Removing unreachable block (ram,0x00010312c504) */
/* WARNING: Removing unreachable block (ram,0x00010312c524) */
/* WARNING: Removing unreachable block (ram,0x00010312c53c) */
/* WARNING: Removing unreachable block (ram,0x00010312c540) */
/* WARNING: Removing unreachable block (ram,0x00010312c544) */
/* WARNING: Removing unreachable block (ram,0x00010312c564) */
/* WARNING: Removing unreachable block (ram,0x00010312c568) */
/* WARNING: Removing unreachable block (ram,0x00010312c56c) */
/* WARNING: Removing unreachable block (ram,0x00010312c570) */
/* WARNING: Removing unreachable block (ram,0x00010312c574) */
/* WARNING: Removing unreachable block (ram,0x00010312c578) */
/* WARNING: Removing unreachable block (ram,0x00010312c590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312c48c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f43690);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_10312e5c4();
    func_0x00010312e704();
    func_0x000107c5de64();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10312c5d0; end: 10312c647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312c5d0(long param_1)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = param_1 - 2U >> 1;
  if ((uVar1 | param_1 << 0x3f) < 8) {
    uStack_30 = *(undefined8 *)(&UNK_10db8fbc0 + uVar1 * 8);
  }
  else {
    uStack_30 = 0;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112f436c8) = uStack_30;
  uStack_28 = 0;
  func_0x0001002a64a8(&uStack_30);
  FUN_10312c48c();
  return;
}



/* Entry: 10312c648; end: 10312c64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312c648(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f43688);
    func_0x000107c5d17c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      uVar9 = *(undefined8 *)(lVar3 + _DAT_112f436a0);
      uStack_98 = 0;
      uStack_90 = 1;
      func_0x000107c6157c(uVar9);
      func_0x0001002a64a8(&uStack_98);
      func_0x000107c61574(uVar9);
      lVar1 = _DAT_112f43690;
      if (*(long *)(lVar3 + _DAT_112f43690) == 0) {
        uVar9 = *(undefined8 *)(lVar3 + _DAT_112f436b8);
        puVar7 = &UNK_110611838;
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_110611838,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,lVar3);
        FUN_10312eea4(0);
        func_0x000107c610f8();
        lVar6 = 1;
        FUN_10312f1a0(uVar9,1,0x10312c6b8,puVar5);
        func_0x000107c61574(puVar5);
        uVar9 = *(undefined8 *)(lVar3 + lVar1);
        *(long *)(lVar3 + lVar1) = lVar6;
        func_0x000107c61174(lVar6);
        func_0x000107c61170(uVar9);
        FUN_10312e69c();
        func_0x000107c3e2c0();
        func_0x000107c61170(uVar9);
        func_0x000107c61604(lVar6 + _DAT_112f43928,lVar3);
        FUN_10312e300(lVar4);
        lVar1 = lVar3 + _DAT_112f436a8;
        uVar9 = *(undefined8 *)(lVar1 + 0x18);
        lVar2 = *(long *)(lVar1 + 0x20);
        func_0x0001000a8868(lVar1,uVar9);
        (**(code **)(lVar2 + 8))(uVar9,lVar2);
        lVar1 = _DAT_112f436c0;
        func_0x000100c82230();
        plVar10 = *(long **)(lVar3 + _DAT_112f436b0);
        func_0x000107c613fc(&UNK_110611838,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,lVar3);
        uVar9 = 0x10312c6c0;
        puVar5 = puVar7;
        (**(code **)(*plVar10 + 0x60))(0x10312c6c0);
        func_0x000107c61574(puVar7);
        uVar8 = uVar9;
        func_0x000107c614f0(uVar9);
        (**(code **)(puVar5 + 0x18))(*(undefined8 *)(lVar3 + lVar1),uVar8,puVar5);
        func_0x000107c615e8(uVar9);
        func_0x0001000d224c(&uStack_98);
        uVar9 = uStack_98;
        func_0x000107c4291c(uStack_98);
        func_0x000107c615e8(uVar9);
        func_0x000107c61170(lVar3);
      }
      else {
        FUN_10312bad4(param_1);
        lVar6 = lVar3;
      }
      func_0x000107c61170(lVar6);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 10312c650; end: 10312c67b;  */

void FUN_10312c650(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10312c67c; end: 10312c6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312c67c(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + _DAT_112f43690);
    if (lVar8 != 0) {
      func_0x000107c61174(lVar8);
      func_0x000100c82230();
      func_0x0001000d224c(&uStack_70);
      func_0x000107c42b7c(uStack_70);
      func_0x000107c615e8(uStack_70);
      puVar5 = &UNK_110611838;
      func_0x000107c613fc(&UNK_110611838,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,lVar4);
      puVar6 = &UNK_110611900;
      func_0x000107c613fc(&UNK_110611900,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar8);
      puVar7 = &UNK_110611928;
      func_0x000107c613fc(&UNK_110611928,0x30,7);
      *(undefined **)(puVar7 + 0x10) = puVar5;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      *(code **)(puVar7 + 0x20) = param_1;
      *(undefined8 *)(puVar7 + 0x28) = param_2;
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(puVar6);
      func_0x000100b64c10(param_1,param_2);
      FUN_10312e228(1,0x10312c6a0,puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
      lVar1 = lVar4 + _DAT_112f436a8;
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar3 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar2);
      (**(code **)(lVar3 + 0x10))(uVar2,lVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar8);
      return;
    }
    func_0x000107c61170();
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 10312c6f0; end: 10312c733;  */

void FUN_10312c6f0(void)

{
  long unaff_x20;
  
  FUN_10312c7e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10312c734; end: 10312c743;  */

void FUN_10312c734(void)

{
  long *unaff_x20;
  
  *(undefined1 *)(*unaff_x20 + 0x18) = 1;
  return;
}



/* Entry: 10312c744; end: 10312c783;  */

void FUN_10312c744(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  lVar1 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5cfa8(0);
    func_0x000107c615e8(lVar1);
  }
  *(undefined1 *)(lVar2 + 0x18) = 0;
  return;
}



/* Entry: 10312c784; end: 10312c7e3;  */

void FUN_10312c784(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  
  if (*(char *)(*unaff_x20 + 0x18) == '\x01') {
    lVar1 = *unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c5cfa8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10312c7e4; end: 10312c807;  */

undefined8 FUN_10312c7e4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10312c808; end: 10312c877; -[_TtC14MiniCameraImplP33_044BD615E94C1A89DABA094B7F29AC1422MiniCameraTrayBaseView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312c808(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112f437a8;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MiniCameraImpl/MiniCameraTrayBackgroundViewController.swift",0x3b,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10312c878);
  (*pcVar1)();
}



/* Entry: 10312c878; end: 10312ca77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10312c878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,&stack0xffffffffffffff70,PTR_s_hitTest_withEvent__1125d6850,
                      param_3);
  func_0x000107c61180();
  if (puVar2 != (undefined1 *)0x0) {
    if (puVar2 != unaff_x20) {
      return puVar2;
    }
    lVar6 = *(long *)(unaff_x20 + _DAT_112f437b0);
    if (lVar6 == 0) {
      return puVar2;
    }
    if (lVar6 != 1) {
      uVar7 = *(ulong *)(lVar6 + 0x10);
      if (uVar7 == 0) {
        return unaff_x20;
      }
      uVar8 = 0;
      do {
        if (*(ulong *)(lVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10312ca78);
          (*pcVar1)();
        }
        puVar3 = *(undefined1 **)(lVar6 + 0x20 + uVar8 * 8);
        if (puVar3 != (undefined1 *)0x0) {
          func_0x000107c61174();
          uVar9 = param_1;
          uVar10 = param_2;
          func_0x000107c40720(param_1,param_2);
          puVar4 = puVar3;
          func_0x000107c44ec4();
          func_0x000107c61180();
          if (puVar4 != (undefined1 *)0x0) {
            func_0x000107c61170(puVar2);
            puVar2 = puVar3;
LAB_10312ca68:
            func_0x000107c61170(puVar2);
            return puVar4;
          }
          puVar4 = puVar3;
          func_0x000107c4eadc(uVar9,uVar10);
          if ((int)puVar4 == 0) {
            func_0x000107c61170(puVar3);
          }
          else {
            puVar4 = puVar3;
            func_0x000107c5c42c(puVar3);
            func_0x000107c61180();
            uVar9 = param_1;
            uVar10 = param_2;
            func_0x000107c40724(param_1,param_2);
            func_0x000107c61170(puVar4);
            puVar5 = puVar3;
            func_0x000107c5c42c();
            func_0x000107c61180();
            puVar4 = puVar5;
            func_0x000107c44ec4(uVar9,uVar10);
            func_0x000107c61180();
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar3);
            if (puVar4 != (undefined1 *)0x0) goto LAB_10312ca68;
          }
        }
        uVar8 = uVar8 + 1;
        if (uVar7 == uVar8) {
          return unaff_x20;
        }
      } while( true );
    }
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10312ca78; end: 10312caef; -[_TtC14MiniCameraImplP33_044BD615E94C1A89DABA094B7F29AC1422MiniCameraTrayBaseView hitTest:withEvent:] */

void FUN_10312ca78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_10312c878(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10312caf0; end: 10312cb1b; -[_TtC14MiniCameraImplP33_044BD615E94C1A89DABA094B7F29AC1422MiniCameraTrayBaseView initWithFrame:] */

void FUN_10312caf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraImpl.MiniCameraTrayBaseView",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10312cb1c);
  (*pcVar1)();
}



/* Entry: 10312cb1c; end: 10312cb53; -[_TtC14MiniCameraImplP33_044BD615E94C1A89DABA094B7F29AC1422MiniCameraTrayBaseView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312cb1c(long param_1)

{
  FUN_10312d3b0(param_1 + _DAT_112f437a8);
  if (*(ulong *)(param_1 + _DAT_112f437b0) < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10312cb54; end: 10312cb73;  */

void FUN_10312cb54(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9968);
  return;
}



/* Entry: 10312cb74; end: 10312cc03; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312cb74(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f437e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f437e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1 = param_1 + _DAT_112f437f0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MiniCameraImpl/MiniCameraTrayBackgroundViewController.swift",0x3b,2,0x56,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10312cc04);
  (*pcVar2)();
}



/* Entry: 10312cc04; end: 10312cdf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312cc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  long lStack_78;
  
  plVar7 = &lStack_80;
  lVar1 = unaff_x20 + _DAT_112f437f0;
  lVar3 = lVar1;
  func_0x000107c61618(lVar1);
  uVar9 = *(undefined8 *)(lVar1 + 8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f437f8);
  lVar4 = 0;
  FUN_10312cb54();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = lVar5 + _DAT_112f437a8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar5 + _DAT_112f437b0) = uVar8;
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010312d3a0(uVar8);
  func_0x000107c4c194(puVar6);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar6);
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_80,PTR_s_initWithFrame__1125e2948);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c3fa94(puVar6);
  func_0x000107c61180();
  func_0x000107c52b50(plVar7);
  func_0x000107c61170(puVar6);
  *(undefined8 *)((undefined1 *)((long)plVar7 + _DAT_112f437a8) + 8) = uVar9;
  func_0x000107c61604((undefined1 *)((long)plVar7 + _DAT_112f437a8),lVar3);
  func_0x000107c61170(plVar7);
  func_0x000107c615e8(lVar3);
  func_0x000107c5a568();
  func_0x000107c61170(plVar7);
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c53fcc();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d6fc();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10312cdf8);
  (*pcVar2)();
}



/* Entry: 10312cdf8; end: 10312ce1f; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController loadView] */

void FUN_10312cdf8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10312cc04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10312ce20; end: 10312ce8f; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController onViewTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312ce20(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f437e0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f437e0))[1];
  func_0x000107c61174();
  func_0x000100d36614(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10312ce90; end: 10312cf5f; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController viewControllerDismissSelf:] */

/* WARNING: Possible PIC construction at 0x00010312cf34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312cf38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312ce90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar3 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_110611ad8;
    func_0x000107c613fc(&UNK_110611ad8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_3;
    pcVar3 = FUN_10312d398;
  }
  pcVar4 = *(code **)(param_1 + _DAT_112f437e8);
  if (pcVar4 != (code *)0x0) {
    uVar1 = ((undefined8 *)(param_1 + _DAT_112f437e8))[1];
    func_0x000107c61174(param_1);
    func_0x000100d36614(pcVar4,uVar1);
    (*pcVar4)(pcVar3,puVar2);
    func_0x000107c61170(param_1);
  }
  if (pcVar3 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10312cf60; end: 10312cfd3; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController gestureRecognizer:shouldReceiveTouch:] */

uint FUN_10312cf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_10312d2c0(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10312cfd4; end: 10312cfff; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController initWithNibName:bundle:] */

void FUN_10312cfd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraImpl.MiniCameraTrayBackgroundViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10312d000);
  (*pcVar1)();
}



/* Entry: 10312d000; end: 10312d003;  */

void FUN_10312d000(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10312d004; end: 10312d037;  */

void FUN_10312d004(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10312d038; end: 10312d097; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312d038(long param_1)

{
  func_0x000100d36624(*(undefined8 *)(param_1 + _DAT_112f437e0),
                      ((undefined8 *)(param_1 + _DAT_112f437e0))[1]);
  func_0x000100d36624(*(undefined8 *)(param_1 + _DAT_112f437e8),
                      ((undefined8 *)(param_1 + _DAT_112f437e8))[1]);
  FUN_10312d3b0(param_1 + _DAT_112f437f0);
  if (*(ulong *)(param_1 + _DAT_112f437f8) < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10312d098; end: 10312d0b7;  */

void FUN_10312d098(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9a30);
  return;
}



/* Entry: 10312d0b8; end: 10312d0cf;  */

void FUN_10312d0b8(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10312d0d0; end: 10312d1c3;  */

ulong * FUN_10312d0d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61434();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c6142c(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar2);
  }
  return param_1;
}



/* Entry: 10312d1c4; end: 10312d2bf;  */

int FUN_10312d1c4(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 10312d2c0; end: 10312d397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10312d2c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112f437f0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_10312e69c();
    lVar4 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c4b8b8(param_1,param_2,unaff_x20);
      func_0x000107c61170(unaff_x20);
      lVar2 = lVar4;
      func_0x000107c438d4(lVar4);
      uVar1 = (uint)lVar2;
      func_0x000107c609a4();
      func_0x000107c61170(lVar4);
      return uVar1 ^ 1;
    }
  }
  return 1;
}



/* Entry: 10312d398; end: 10312d3af;  */

void FUN_10312d398(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10312d3b0; end: 10312d3d3;  */

undefined8 FUN_10312d3b0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10312d3d4; end: 10312d3e3;  */

void FUN_10312d3d4(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10312d3e4; end: 10312d3e7; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController viewControllerPrefersSelfDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10312d3e4(long param_1)

{
  return *(long *)(param_1 + _DAT_112f437e8) != 0;
}



/* Entry: 10312d3e8; end: 10312d3f7; -[_TtC14MiniCameraImpl38MiniCameraTrayBackgroundViewController shouldPopToRootViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10312d3e8(long param_1)

{
  return *(long *)(param_1 + _DAT_112f437e8) != 0;
}



/* Entry: 10312d3f8; end: 10312d72b;  */

/* WARNING: Possible PIC construction at 0x00010312d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312d6d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312d6cc) */
/* WARNING: Removing unreachable block (ram,0x00010312d6bc) */
/* WARNING: Removing unreachable block (ram,0x00010312d5ec) */
/* WARNING: Removing unreachable block (ram,0x00010312d5c8) */
/* WARNING: Removing unreachable block (ram,0x00010312d590) */
/* WARNING: Removing unreachable block (ram,0x00010312d558) */
/* WARNING: Removing unreachable block (ram,0x00010312d728) */
/* WARNING: Removing unreachable block (ram,0x00010312d574) */
/* WARNING: Removing unreachable block (ram,0x00010312d530) */
/* WARNING: Removing unreachable block (ram,0x00010312d724) */
/* WARNING: Removing unreachable block (ram,0x00010312d544) */
/* WARNING: Removing unreachable block (ram,0x00010312d514) */
/* WARNING: Removing unreachable block (ram,0x00010312d4f8) */
/* WARNING: Removing unreachable block (ram,0x00010312d4b0) */
/* WARNING: Removing unreachable block (ram,0x00010312d6dc) */

void FUN_10312d3f8(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c3f2f8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c438d4(lVar1);
    func_0x000107c609b0();
    dVar3 = param_1;
    func_0x000107c4abec(lVar2);
    func_0x000107c609b8();
    *(double *)(unaff_x20 + 0x28) = -(param_1 - dVar3);
    func_0x000107c3ec1c(lVar2);
    func_0x000107c61180();
    func_0x000107c3ec1c(lVar1);
    func_0x000107c61180();
    func_0x000107c40284(*(undefined8 *)(unaff_x20 + 0x28),lVar2,param_3,lVar1);
    func_0x000107c61180();
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10312d72c; end: 10312d817;  */

double FUN_10312d72c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  dVar5 = 0.0;
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = lVar1;
      func_0x000107c40784(lVar1);
      func_0x000107c61180();
      func_0x000107c438d4(param_2);
      func_0x000107c609b8();
      lVar4 = lVar2;
      func_0x000107c40784(lVar2);
      func_0x000107c61180();
      dVar5 = 0.0;
      func_0x000107c40718(0,param_1,lVar3,param_3,lVar4);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar4);
      func_0x000107c438d4(lVar1);
      func_0x000107c609b0();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      dVar5 = dVar5 - param_1;
    }
  }
  return dVar5;
}



/* Entry: 10312d818; end: 10312da7b;  */

/* WARNING: Possible PIC construction at 0x00010312d88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312da04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312da48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312da18) */
/* WARNING: Removing unreachable block (ram,0x00010312da08) */
/* WARNING: Removing unreachable block (ram,0x00010312d890) */
/* WARNING: Removing unreachable block (ram,0x00010312da44) */
/* WARNING: Removing unreachable block (ram,0x00010312d898) */
/* WARNING: Removing unreachable block (ram,0x00010312da4c) */

void FUN_10312d818(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (((lVar3 != 0) && (lVar2 = *(long *)(unaff_x20 + 0x20), lVar2 != 0)) &&
     (lVar4 = *(long *)(unaff_x20 + 0x30), lVar4 != 0)) {
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(lVar4);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10312da7c; end: 10312db2b;  */

long FUN_10312da7c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10312db2c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4e1ec(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5c42c(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c5c42c(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  return lVar3;
}



/* Entry: 10312db2c; end: 10312dcab;  */

void FUN_10312db2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar2 = 0x112d360b8;
  FUN_10312e104(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 7;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  *(undefined8 *)(lVar2 + 0x30) = param_4;
  uVar3 = 0;
  FUN_10312e17c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,uVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c413a0(puVar1);
  func_0x000107c61170(lVar4);
  uVar3 = *(undefined8 *)(param_5 + 0x18);
  *(undefined8 *)(param_5 + 0x18) = 0;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  *(undefined8 *)(param_5 + 0x20) = 0;
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(param_5 + 0x30) = 0;
  func_0x000107c61170(uVar3);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    lVar2 = param_5;
    func_0x000107c3f250();
    func_0x000107c61180();
    func_0x000107c61170(param_5);
    if (lVar2 != 0) {
      func_0x000107c5a03c(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10312dcac; end: 10312deeb;  */

/* WARNING: Possible PIC construction at 0x00010312dd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312dd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312de5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312de6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312dea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312debc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312dea8) */
/* WARNING: Removing unreachable block (ram,0x00010312de70) */
/* WARNING: Removing unreachable block (ram,0x00010312de60) */
/* WARNING: Removing unreachable block (ram,0x00010312dd50) */
/* WARNING: Removing unreachable block (ram,0x00010312dd54) */
/* WARNING: Removing unreachable block (ram,0x00010312dd64) */
/* WARNING: Removing unreachable block (ram,0x00010312dd68) */
/* WARNING: Removing unreachable block (ram,0x00010312dd6c) */
/* WARNING: Removing unreachable block (ram,0x00010312dd1c) */
/* WARNING: Removing unreachable block (ram,0x00010312deb8) */
/* WARNING: Removing unreachable block (ram,0x00010312dd24) */
/* WARNING: Removing unreachable block (ram,0x00010312dea0) */
/* WARNING: Removing unreachable block (ram,0x00010312dd34) */
/* WARNING: Removing unreachable block (ram,0x00010312dec0) */
/* WARNING: Removing unreachable block (ram,0x00010312dec4) */

void FUN_10312dcac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((lVar3 != 0) && (lVar2 = *(long *)(unaff_x20 + 0x30), lVar2 != 0)) {
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10312deec; end: 10312dfb3;  */

void FUN_10312deec(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  double dVar1;
  undefined1 auStack_80 [48];
  
  if (-param_1 <= param_2) {
    param_2 = -param_1;
  }
  func_0x000107c5378c(param_2);
  if (-(param_3 + 23.0) <= param_4) {
    param_4 = -(param_3 + 23.0);
  }
  func_0x000107c5378c(param_4,param_7);
  dVar1 = param_5 * -0.43000000000000005 + 1.0;
  func_0x000107c6088c(auStack_80,dVar1,dVar1);
  func_0x000107c5a03c(param_8);
  func_0x000107c56a14(param_9);
  func_0x000107c4abfc(param_9);
  return;
}



/* Entry: 10312dfb4; end: 10312e00f;  */

void FUN_10312dfb4(void)

{
  long unaff_x20;
  
  func_0x000100e456b4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10312e010; end: 10312e06f;  */

void FUN_10312e010(void)

{
  FUN_10312d3f8();
  return;
}



/* Entry: 10312e070; end: 10312e0a7;  */

void FUN_10312e070(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_80 [48];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  dVar5 = *(double *)(unaff_x20 + 0x30);
  dVar6 = *(double *)(unaff_x20 + 0x38);
  dVar7 = *(double *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  dVar4 = *(double *)(unaff_x20 + 0x20);
  if (-*(double *)(unaff_x20 + 0x18) <= *(double *)(unaff_x20 + 0x20)) {
    dVar4 = -*(double *)(unaff_x20 + 0x18);
  }
  func_0x000107c5378c(dVar4,*(undefined8 *)(unaff_x20 + 0x10));
  dVar4 = -(dVar5 + 23.0);
  if (dVar4 <= dVar6) {
    dVar6 = dVar4;
  }
  func_0x000107c5378c(dVar6,uVar3);
  dVar6 = dVar7 * -0.43000000000000005 + 1.0;
  func_0x000107c6088c(auStack_80,dVar6,dVar6);
  func_0x000107c5a03c(uVar1);
  func_0x000107c56a14(uVar2);
  func_0x000107c4abfc(uVar2);
  return;
}



/* Entry: 10312e0a8; end: 10312e0f7;  */

void FUN_10312e0a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c5378c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5378c(uVar3,uVar1);
  func_0x000107c56a14(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10312e0f8; end: 10312e103;  */

void FUN_10312e0f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = 0x112d360b8;
  FUN_10312e104(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 7;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  *(undefined8 *)(lVar4 + 0x30) = uVar1;
  uVar5 = 0;
  FUN_10312e17c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  lVar6 = lVar4;
  func_0x000107c5fc48(lVar4,uVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c413a0(puVar3);
  func_0x000107c61170(lVar6);
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  *(undefined8 *)(lVar8 + 0x20) = 0;
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  func_0x000107c61170(uVar7);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    lVar4 = lVar8;
    func_0x000107c3f250();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar4 != 0) {
      func_0x000107c5a03c(lVar4);
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 10312e104; end: 10312e17b;  */

void FUN_10312e104(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10312e17c(0,param_1,param_2);
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



/* Entry: 10312e17c; end: 10312e217;  */

void FUN_10312e17c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10312e218; end: 10312e227;  */

void FUN_10312e218(long param_1,long param_2)

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



/* Entry: 10312e228; end: 10312e2ff;  */

/* WARNING: Possible PIC construction at 0x00010312e2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312e2ac) */
/* WARNING: Removing unreachable block (ram,0x00010312e2b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312e228(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f438f8) == 2) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c41570();
    func_0x000107c61180();
    func_0x000107c4ffac();
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f438f0);
    puVar3 = (undefined *)*puVar1;
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000100b64c10(param_2,param_3);
    func_0x000100d36728(puVar3,uVar2);
    FUN_10312e894();
    func_0x000107c42018();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10312e300; end: 10312e49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312e300(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = &UNK_110611c70;
  func_0x000107c613fc(&UNK_110611c70,0x18,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  func_0x000107c61174();
  uVar2 = param_1;
  func_0x000107c50648();
  if ((int)uVar2 == 0) {
    func_0x00010312e704();
    func_0x000107c3e2c0(param_1);
    func_0x000107c61170(uVar2);
    FUN_10312e768(unaff_x20);
  }
  else {
    uVar2 = param_1;
    func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_attachUI_completion__1125a0c10);
    if ((uVar2 & 1) != 0) {
      func_0x00010312e704();
      uStack_50 = 0x10312f198;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000b0c7c;
      puStack_58 = &UNK_110611c88;
      puStack_48 = puVar1;
      func_0x000107c60bc4(&puStack_70);
      puVar4 = puStack_48;
      func_0x000107c61580(puVar1,2);
      func_0x000107c61574(puVar4);
      func_0x000107c3e2c4(param_1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(puVar1);
    }
  }
  func_0x000107c61604(unaff_x20 + _DAT_112f43910,param_1);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10312e4a0; end: 10312e5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10312e4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  
  dVar5 = -1.0;
  if (param_6 != 0x10) {
    if (param_6 == 8) {
      dVar6 = *(double *)(unaff_x20 + _DAT_112f43918);
      func_0x00010312e704();
      lVar2 = param_5;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(param_5);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10312e5c4);
        (*pcVar1)();
      }
      func_0x000107c438d4(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c609b0(dVar5,param_2,param_3,param_4);
      dVar5 = dVar6 * dVar5;
    }
    else {
      uVar3 = unaff_x20 + _DAT_112f43928;
      func_0x000107c61618(0xbff0000000000000);
      if (uVar3 != 0) {
        uVar4 = uVar3;
        func_0x000107c61150();
        if ((uVar4 & 1) != 0) {
          func_0x000107c5cf8c(uVar3);
          func_0x000107c615e8(uVar3);
          return dVar5;
        }
        func_0x000107c615e8(uVar3);
      }
      dVar5 = -1.0;
    }
  }
  return dVar5;
}



/* Entry: 10312e5c4; end: 10312e69b;  */

double FUN_10312e5c4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010312e704();
  lVar2 = param_5;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10312e698);
    (*pcVar1)();
  }
  func_0x000107c438d4(lVar2);
  func_0x000107c61170();
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x00010312e69c();
  lVar3 = lVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c438d4(lVar3);
    func_0x000107c61170(lVar3);
    return (param_1 - param_2) + 23.0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10312e69c);
  (*pcVar1)();
}



/* Entry: 10312e69c; end: 10312e767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10312e69c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f43930;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f43930);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000103131bfc();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10312e768; end: 10312e893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312e768(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = param_5;
  FUN_10312e894();
  dVar6 = *(double *)(param_5 + _DAT_112f43918);
  lVar4 = lVar2;
  func_0x00010312e704();
  lVar3 = lVar4;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10312e890);
    (*pcVar1)();
  }
  func_0x000107c438d4(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  func_0x000107c61170(lVar2);
  lVar2 = _DAT_112f43938;
  lVar4 = *(long *)(param_5 + _DAT_112f43938);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c438d4();
    func_0x000107c61170(lVar4);
    func_0x000107c609b0(dVar5,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c10c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((dVar6 * param_1) / dVar5,*(undefined8 *)(param_5 + _DAT_112f43940),
               PTR_s_presentIn_withPullBar_withDefaul_112620b90,*(undefined8 *)(param_5 + lVar2),1,8
              );
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10312e894);
  (*pcVar1)();
}



/* Entry: 10312e894; end: 10312ea9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10312e894(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f43940;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f43940);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_10312e69c();
    puVar3 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c61170(puVar2);
    func_0x000107c52aa4(puVar3,param_2,0);
    func_0x000107c52684(puVar3,param_2,0x1a);
    func_0x000107c5a05c(puVar3,param_2,1);
    func_0x000107c5a074(puVar3);
    func_0x000107c5a070(puVar3,param_2,1);
    func_0x000107c5a06c(puVar3,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10312ea9c; end: 10312eccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312ea9c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  if (1 < *(long *)(unaff_x20 + _DAT_112f438f8) - 1U) {
    lVar2 = param_1;
    FUN_10312e69c();
    lVar3 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10312ebc0);
      (*pcVar1)();
    }
    func_0x000107c5a378();
    func_0x000107c61170(lVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_110611cc0;
    func_0x000107c613fc(&UNK_110611cc0,0x19,7);
    *(long *)(puVar5 + 0x10) = lVar2;
    puVar5[0x18] = (byte)param_1 & 1;
    pcStack_40 = FUN_10312f2d8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110611cd8;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar5 = puStack_38;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar5);
    func_0x000107c3dccc(0x3fb999999999999a,puVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10312eccc; end: 10312ed2b;  */

void FUN_10312eccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10312e228(1,0,0);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10312ed2c; end: 10312ed93; -[_TtC14MiniCameraImpl31MiniCameraTrayContainerProvider handleKeyboardWillShow] */

/* WARNING: Possible PIC construction at 0x00010312ed6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312ed70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312ed2c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f438f8) == 2) {
    return;
  }
  func_0x000107c61174();
  FUN_10312e894();
  func_0x000107c52684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10312ed94; end: 10312edf3; -[_TtC14MiniCameraImpl31MiniCameraTrayContainerProvider init] */

void FUN_10312ed94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraImpl.MiniCameraTrayContainerProvider",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10312edc0);
  (*pcVar1)();
}



/* Entry: 10312edf4; end: 10312eea3; -[_TtC14MiniCameraImpl31MiniCameraTrayContainerProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010312ee78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312ee7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312edf4(long param_1)

{
  func_0x000100d36728(*(undefined8 *)(param_1 + _DAT_112f438f0),
                      ((undefined8 *)(param_1 + _DAT_112f438f0))[1]);
  FUN_10312d3d4(*(undefined8 *)(param_1 + _DAT_112f43900));
  func_0x000100d36728(*(undefined8 *)(param_1 + _DAT_112f43908),
                      ((undefined8 *)(param_1 + _DAT_112f43908))[1]);
  func_0x000100d3675c(param_1 + _DAT_112f43910);
  func_0x000100d3675c(param_1 + _DAT_112f43920);
  func_0x000100d3675c(param_1 + _DAT_112f43928);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f43930));
  return;
}



/* Entry: 10312eea4; end: 10312eec3;  */

void FUN_10312eea4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9b08);
  return;
}



/* Entry: 10312eec4; end: 10312ef53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312eec4(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  *(long *)(unaff_x20 + _DAT_112f438f8) = param_2;
  if (param_2 == 8) {
    func_0x000107c52684(param_1,8,0x1a);
  }
  else if (param_2 == 2) {
    func_0x00010312e970();
  }
  lVar1 = unaff_x20 + _DAT_112f43928;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5cf90();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10312ef54; end: 10312efab; -[_TtC14MiniCameraImpl31MiniCameraTrayContainerProvider tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x00010312ef94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312ef98) */

void FUN_10312ef54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10312eec4(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10312efac; end: 10312f017; -[_TtC14MiniCameraImpl31MiniCameraTrayContainerProvider tray:heightForPosition:] */

undefined8
FUN_10312efac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_10312e4a0(param_4,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10312f018; end: 10312f07f; -[_TtC14MiniCameraImpl31MiniCameraTrayContainerProvider trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312f018(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112f43928;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c5cfa4(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 10312f080; end: 10312f173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10312f080(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar3 = param_3;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_3 + _DAT_112f437e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_3 + _DAT_112f437e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = param_3 + _DAT_112f437f0;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(param_3 + _DAT_112f437f8) = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  *(undefined ***)((undefined1 *)((long)plVar4 + _DAT_112f437f0) + 8) = &PTR_DAT_110611c00;
  func_0x000107c61604((undefined1 *)((long)plVar4 + _DAT_112f437f0),param_1);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(param_1);
  return (undefined1 *)plVar4;
}



/* Entry: 10312f174; end: 10312f19f;  */

void FUN_10312f174(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10312e228(1,0,0);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10312f1a0; end: 10312f2d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312f1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f438f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f438f8) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f43908);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f43910,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f43920,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f43928,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f43930) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f43938) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f43940) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f43900) = param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000100b64c10(param_3,param_4);
  func_0x000100d36728(uVar2,uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112f43918) = param_1;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10312f2d8; end: 10312f2f3;  */

void FUN_10312f2d8(void)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0x3ff0000000000000;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0x3fd3333333333333;
    }
    func_0x000107c526c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103131b9c);
  (*pcVar2)();
}



/* Entry: 10312f2f4; end: 10312f303; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter currentContainerPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10312f2f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f439c8);
}



/* Entry: 10312f304; end: 10312f313; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter setCurrentContainerPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312f304(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112f439c8) = param_3;
  return;
}



/* Entry: 10312f314; end: 10312f43f;  */

/* WARNING: Possible PIC construction at 0x00010312f3b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312f3b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312f314(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x20 + _DAT_112f43978);
  puVar1 = &UNK_110611d30;
  func_0x000107c613fc(&UNK_110611d30,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcVar2 = FUN_103130f84;
  puVar4 = puVar1;
  (**(code **)(*plVar5 + 0x60))(FUN_103130f84);
  func_0x000107c61574(puVar1);
  pcVar3 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f439b8),pcVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
  return;
}



/* Entry: 10312f440; end: 10312f44f; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter isContainerAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10312f440(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f439d0);
}



/* Entry: 10312f450; end: 10312f45f; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter setIsContainerAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312f450(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f439d0) = param_3;
  return;
}



/* Entry: 10312f460; end: 10312f493; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter trayContentContainer] */

void FUN_10312f460(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10312f494();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10312f494; end: 10312f4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10312f494(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f439d8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f439d8);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_10312f54c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000100e3da34(uVar4);
  }
  func_0x000100e3da44(lVar3);
  return lVar2;
}



/* Entry: 10312f500; end: 10312f54b; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter setTrayContentContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312f500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f439d8);
  *(undefined8 *)(param_1 + _DAT_112f439d8) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e3da34(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10312f54c; end: 10312fa87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10312f54c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  
  ppuVar13 = &puStack_d0;
  if (*(char *)(param_1 + _DAT_112f439c0) == '\x01') {
    func_0x0001000d224c(&puStack_a0);
    puVar4 = puStack_a0;
    if (puStack_a0 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    puVar3 = puStack_a0;
    func_0x000107c5cf9c();
  }
  else {
    func_0x0001000d224c(&puStack_a0);
    puVar4 = puStack_a0;
    if (puStack_a0 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    puVar3 = puStack_a0;
    func_0x000107c4d6f8();
  }
  func_0x000107c61180();
  func_0x000107c615e8(puVar4);
  if (puVar3 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_a0);
    if (puStack_a0 != (undefined *)0x0) {
      puVar4 = puStack_a0;
      func_0x000107c403cc();
      func_0x000107c61180();
      func_0x000107c615e8(puStack_a0);
      if (puVar4 != (undefined *)0x0) {
        uVar5 = 0;
        func_0x00010312dff0();
        puVar6 = puVar4;
        func_0x000107c614f0(puVar4);
        puVar7 = puVar4;
        func_0x00010312e1bc(puVar4,uVar5,puVar6);
        lVar2 = _DAT_112f439a8;
        ppuStack_80 = &PTR_DAT_110611af0;
        puStack_88 = (undefined *)uVar5;
        func_0x000107c61428(param_1 + _DAT_112f439a8,&puStack_d0,0x21,0);
        func_0x000107c6157c(puVar7);
        FUN_10312a280(&puStack_a0,param_1 + lVar2);
        func_0x000107c614a8(&puStack_d0);
        uVar5 = *(undefined8 *)(param_1 + _DAT_112f43990);
        puVar6 = &UNK_110611d30;
        puVar8 = puVar6;
        func_0x000107c613fc(&UNK_110611d30,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,param_1);
        puVar9 = &UNK_110611d58;
        func_0x000107c613fc(&UNK_110611d58,0x30,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(undefined **)(puVar9 + 0x18) = puVar3;
        *(undefined **)(puVar9 + 0x20) = puVar7;
        *(undefined8 *)(puVar9 + 0x28) = uVar5;
        func_0x000107c613fc(&UNK_110611d30,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,param_1);
        puVar10 = &UNK_110611d80;
        func_0x000107c613fc(&UNK_110611d80,0x30,7);
        *(undefined **)(puVar10 + 0x10) = puVar6;
        *(undefined8 *)(puVar10 + 0x18) = uVar5;
        *(undefined **)(puVar10 + 0x20) = puVar3;
        *(undefined **)(puVar10 + 0x28) = puVar7;
        puVar11 = PTR_PTR_1126aeaf8;
        func_0x000107c610f8(PTR_PTR_1126aeaf8);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_80 = (undefined **)FUN_103130e54;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100e1779c;
        puStack_88 = &UNK_110611d98;
        ppuVar12 = &puStack_a0;
        puStack_78 = puVar9;
        func_0x000107c60bc4(ppuVar12);
        pcStack_b0 = FUN_103130eb4;
        puStack_d0 = puVar1;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_100e17304;
        puStack_b8 = &UNK_110611dc0;
        puStack_a8 = puVar10;
        func_0x000107c60bc4(&puStack_d0);
        func_0x000107c61580(puVar7,2);
        func_0x000107c615f4(puVar3,2);
        func_0x000107c61580(uVar5,2);
        func_0x000107c6157c(puVar8);
        func_0x000107c6157c(puVar6);
        func_0x000107c47be0(puVar11);
        func_0x000107c61574(puVar7);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c61574(puStack_a8);
        puVar4 = puStack_78;
        func_0x000107c61574(puVar8);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar4);
        return puVar11;
      }
    }
    func_0x000107c615e8(puVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 10312fa88; end: 10312fb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312fa88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f43988);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    FUN_10312e69c();
    func_0x000107c61170(lVar1);
    puVar3 = &UNK_110611d30;
    func_0x000107c613fc(&UNK_110611d30,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110611f10;
    func_0x000107c613fc(&UNK_110611f10,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    uStack_40 = 0x103130f34;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110611f28;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c41864(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10312fb94; end: 10312fc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312fb94(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112f43988) != 0) {
      func_0x000107c61174(*(long *)(param_1 + _DAT_112f43988));
      func_0x000107c61170(param_1);
      FUN_10312e228(1,0,0);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10312fc18; end: 10312fd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312fc18(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  func_0x0001000d224c(&puStack_80);
  if (puStack_80 != (undefined *)0x0) {
    puVar1 = puStack_80;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_80);
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar3 = &UNK_110611ec0;
      func_0x000107c613fc(&UNK_110611ec0,0x21,7);
      *(undefined **)(puVar3 + 0x10) = puVar1;
      *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
      puVar3[0x20] = param_2 & 1;
      pcStack_60 = FUN_103130f20;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110611ed8;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      puVar3 = puStack_58;
      func_0x000107c61174(puVar1);
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      func_0x000107c3dccc(param_1,puVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar1);
    }
  }
  return;
}



/* Entry: 10312fd4c; end: 10312fedb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312fd4c(code *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + _DAT_112f43988);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x0001000d224c(&uStack_80);
      func_0x000107c42b7c(uStack_80);
      func_0x000107c615e8(uStack_80);
      FUN_10312fc18(0x3fd3333333333333,0);
      puVar1 = &UNK_110611d30;
      func_0x000107c613fc(&UNK_110611d30,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_3);
      puVar2 = &UNK_110611df8;
      func_0x000107c613fc(&UNK_110611df8,0x38,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(long *)(puVar2 + 0x18) = lVar3;
      *(undefined8 *)(puVar2 + 0x20) = param_5;
      *(code **)(puVar2 + 0x28) = param_1;
      *(undefined8 *)(puVar2 + 0x30) = param_2;
      func_0x000107c61174(lVar3);
      func_0x000107c6157c(puVar1);
      func_0x000107c615f0(param_5);
      func_0x000100b64c10(param_1,param_2);
      FUN_10312e228(1,0x103130edc,puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar2);
      FUN_10312d818();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar3);
      return;
    }
    func_0x000107c61170();
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 10312fedc; end: 10313007b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312fedc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar4 = &puStack_b0;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + _DAT_112f439c0) == '\x01') {
      puStack_b0 = (undefined *)0x1;
      uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
      func_0x0001002a64a8(&puStack_b0);
    }
    func_0x000107c61170();
  }
  FUN_10312e69c();
  puVar2 = &UNK_110611d30;
  func_0x000107c613fc(&UNK_110611d30,0x18,7);
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618(param_1);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61170(param_1);
  puVar3 = &UNK_110611e20;
  func_0x000107c613fc(&UNK_110611e20,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uStack_90 = 0x103130eec;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000b0c7c;
  puStack_98 = &UNK_110611e38;
  puStack_88 = puVar3;
  func_0x000107c60bc4(&puStack_b0);
  puVar2 = puStack_88;
  func_0x000107c615f0(param_3);
  func_0x000100b64c10(param_4,param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c41864(lVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10313007c; end: 10313017f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313007c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110611e70;
  func_0x000107c613fc(&UNK_110611e70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_50 = FUN_103130ef8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_110611e88;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000100b64c10(param_2,param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61428(param_4 + 0x10,&puStack_70,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112f43988);
    *(undefined8 *)(param_4 + _DAT_112f43988) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103130180; end: 1031301eb;  */

/* WARNING: Possible PIC construction at 0x0001031301cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031301d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130180(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f43988);
  if ((lVar1 != 0) && (*(long *)(lVar1 + _DAT_112f438f8) == 0x10)) {
    func_0x000107c61174();
    FUN_10312e894();
    func_0x000107c575ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1031301ec; end: 1031303bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031301ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  long alStack_a0 [3];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x0001000d224c(alStack_a0);
  if (alStack_a0[0] != 0) {
    lVar2 = alStack_a0[0];
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_a0[0]);
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112f43988);
      if (lVar3 != 0) {
        func_0x000107c61174();
        lVar4 = lVar3;
        FUN_10312e69c();
        lVar5 = lVar4;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031303c0);
          (*pcVar1)();
        }
        func_0x000107c438d4(lVar5);
        func_0x000107c61170(lVar5);
        func_0x000107c609c8(param_1,param_2,param_3,param_4);
        dVar6 = param_1;
        func_0x000107c438d4(lVar2);
        func_0x000107c609b0();
        dVar7 = dVar6;
        func_0x000107c438d4(lVar2);
        func_0x000107c609b0();
        dVar8 = *(double *)(unaff_x20 + _DAT_112f439b0);
        lVar4 = unaff_x20 + _DAT_112f439a8;
        func_0x000107c61428(lVar4,auStack_78,0,0);
        if (*(long *)(lVar4 + 0x18) != 0) {
          dVar8 = ((dVar6 - param_1) / dVar7) / dVar8;
          FUN_103127418(lVar4,alStack_a0);
          func_0x0001000a8868(alStack_a0,uStack_88);
          dVar7 = 1.0;
          if (dVar8 <= 1.0) {
            dVar7 = dVar8;
          }
          dVar8 = 0.0;
          if (0.0 < dVar7) {
            dVar8 = dVar7;
          }
          (**(code **)(lStack_80 + 0x18))(dVar6 - param_1,dVar8,uStack_88,lStack_80);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar2);
          func_0x0001000834e4(alStack_a0);
          return;
        }
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1031303c0; end: 10313060f;  */

/* WARNING: Possible PIC construction at 0x00010313051c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031305a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031304a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031305a4) */
/* WARNING: Removing unreachable block (ram,0x000103130520) */
/* WARNING: Removing unreachable block (ram,0x000103130534) */
/* WARNING: Removing unreachable block (ram,0x000103130548) */
/* WARNING: Removing unreachable block (ram,0x0001031305c0) */
/* WARNING: Removing unreachable block (ram,0x000103130554) */
/* WARNING: Removing unreachable block (ram,0x000103130560) */
/* WARNING: Removing unreachable block (ram,0x00010313053c) */
/* WARNING: Removing unreachable block (ram,0x000103130498) */
/* WARNING: Removing unreachable block (ram,0x00010313059c) */
/* WARNING: Removing unreachable block (ram,0x0001031304a8) */
/* WARNING: Removing unreachable block (ram,0x0001031304b4) */
/* WARNING: Removing unreachable block (ram,0x0001031305c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031303c0(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x000107c44dd8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103130610);
    (*pcVar2)();
  }
  uVar5 = param_1;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = 0;
  func_0x000100f115fc(0);
  uVar4 = uVar5;
  func_0x000107c5fc54(uVar5,uVar3);
  func_0x000107c61170(uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar5 = *(ulong *)(param_2 + _DAT_112f43998);
    uVar1 = ((ulong *)(param_2 + _DAT_112f43998))[1];
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031305cc);
        (*pcVar2)();
      }
      func_0x000107c61174(*(undefined8 *)(uVar4 + 0x20));
    }
    else {
      func_0x000100f040d0(0x3ff0000000000000,0,0,uVar4);
    }
    func_0x000107c614f0(uVar5);
    (**(code **)(uVar1 + 8))();
    FUN_103130610();
    uVar4 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103130610; end: 1031307ff;  */

undefined * FUN_103130610(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    FUN_103130bcc(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103130800);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x000100f115fc(0);
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_78 = *puVar8;
        func_0x000107c61174();
        uVar3 = 0x112d6ca30;
        func_0x0001000285a8(0x112d6ca30,&UNK_10d92f680);
        func_0x000107c6147c(&uStack_70,&uStack_78,uVar4,uVar3,7);
        uVar3 = uStack_70;
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_103130bcc(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puStack_68 + uVar7 * 8 + 0x20) = uVar3;
        uVar5 = uVar5 - 1;
        puVar6 = puStack_68;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar6 = puStack_68;
        uVar2 = uVar7;
        func_0x000100f040d0(uVar7,param_1);
        uVar3 = 0;
        uStack_78 = uVar2;
        func_0x000100f115fc(0);
        uVar4 = 0x112d6ca30;
        func_0x0001000285a8(0x112d6ca30,&UNK_10d92f680);
        func_0x000107c6147c(&uStack_70,&uStack_78,uVar3,uVar4,7);
        uVar4 = uStack_70;
        uVar2 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
          FUN_103130bcc(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puStack_68 + uVar2 * 8 + 0x20) = uVar4;
      } while (uVar5 != uVar7);
    }
  }
  return puStack_68;
}



/* Entry: 103130800; end: 103130857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130800(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112f439d0) = uVar1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103130858; end: 1031309d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130858(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f43988;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112f43988);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      FUN_10312ea9c(bVar1);
      func_0x000107c61170(lVar2);
    }
    if ((((bVar1 & 1) == 0) && (lVar3 = *(long *)(param_2 + lVar3), lVar3 != 0)) &&
       (*(long *)(lVar3 + _DAT_112f438f8) == 0x10)) {
      func_0x000107c61174(lVar3);
      FUN_10312e894();
      func_0x000107c575ec();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1031309d4; end: 103130a33; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter init] */

void FUN_1031309d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraImpl.MiniCameraTrayContainerProviderAdapter",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103130a00);
  (*pcVar1)();
}



/* Entry: 103130a34; end: 103130aeb; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130a34(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f43970));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f43978));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f43980));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f43988));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f43990));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f43998));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f439a0));
  FUN_103130f3c(param_1 + _DAT_112f439a8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f439b8));
  if (*(long *)(param_1 + _DAT_112f439d8) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 103130aec; end: 103130b0b;  */

void FUN_103130aec(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9c18);
  return;
}



/* Entry: 103130b0c; end: 103130b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130b0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f439a0));
  return;
}



/* Entry: 103130b20; end: 103130b73; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x000103130b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103130b60) */

void FUN_103130b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103130d18(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103130b74; end: 103130b7b; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter tray:heightForPosition:] */

undefined8 FUN_103130b74(void)

{
  return 0xbff0000000000000;
}



/* Entry: 103130b7c; end: 103130bcb; -[_TtC14MiniCameraImpl38MiniCameraTrayContainerProviderAdapter trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130b7c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = 1;
  uStack_28 = 1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}


