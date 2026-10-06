/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007f8240; end: 1007f8423; -[SCCameraViewController initialCameraTimerNGSBottomOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1007f8240(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  
  uVar2 = param_5;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3f084();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c3f238();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c49cd8();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  dVar9 = 46.0;
  uVar10 = 0x4034000000000000;
  dVar14 = 46.0;
  if ((int)uVar7 == 0) {
    dVar14 = 20.0;
  }
  if ((*(byte *)(param_5 + (long)_DAT_112762560) & 1) == 0) {
    func_0x000107c3c420();
    if ((param_5 & 1) == 0) {
      puVar8 = PTR_PTR_1126b9e78;
      func_0x000107c49d70();
      iVar1 = (int)puVar8;
      if ((iVar1 != 0) && (FUN_1007f8afc(), puVar8 = PTR_PTR_1126b9e78, iVar1 != 0)) {
        func_0x000107c515a0(PTR_PTR_1126b9e78);
        func_0x000107c4c85c(puVar8);
        puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        dVar15 = param_3;
        uVar11 = param_4;
        func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c61180();
        func_0x000107c51724();
        dVar12 = dVar15;
        uVar13 = uVar11;
        FUN_100841590(dVar15,uVar11);
        func_0x000107c61170(puVar8);
        func_0x000107c609b8(dVar15,uVar11,dVar12,uVar13);
        func_0x000107c609b8(dVar9,uVar10,param_3,param_4);
        dVar15 = dVar15 - dVar9;
        func_0x000107c44f74(PTR_PTR_1126b9aa0);
        dVar9 = dVar9 - dVar15;
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        dVar14 = dVar14 + dVar9;
      }
    }
  }
  else {
    dVar14 = 48.0;
  }
  return dVar14;
}



/* Entry: 1007f8424; end: 1007f8517; -[SCCameraViewController _runtimeViewfinderSizingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8424(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = (long)_DAT_112762584;
  lVar1 = *(long *)(param_1 + lVar8);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c3f1ac(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3f084();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5b038();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c509bc();
    func_0x000107c4d94c();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    lVar1 = *(long *)(param_1 + lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1007f8518; end: 1007f852b; -[SCCameraSimpleUIFeatureGatingConfigurationImpl runtimeViewfinderSizingEnabled] */

void FUN_1007f8518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b9c88,PTR_s_runtimeViewfinderSizingEnabledWi_11262e5d0,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1007f852c; end: 1007f85eb; +[SCCameraViewfinderLayoutExperiment runtimeViewfinderSizingEnabledWithAppStartExperimentReader:] */

long FUN_1007f852c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112fea038,auStack_48,0,0);
  if (cRam0000000112fea038 != '\0') {
    if (cRam0000000112fea038 == '\x01') {
      return 1;
    }
    if (param_3 != 0) {
      func_0x000107c615f0(param_3);
      uVar1 = 0xd00000000000002c;
      func_0x000107c5fadc(0xd00000000000002c,0x800000010f19e000);
      lVar2 = param_3;
      func_0x000107c3ebd4(param_3);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(param_3);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 1007f85ec; end: 1007f85f7; +[SCCameraWidenedFOVSettingsProvider isFeatureEnabledAndSupported] */

void FUN_1007f85ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b9aa0,PTR_s_legacyAllScreenSupportedForCamer_112601500);
  return;
}



/* Entry: 1007f85f8; end: 1007f85fb; +[SCCameraCapriUtils legacyAllScreenSupportedForCameraGeometry] */

bool FUN_1007f85f8(double param_1)

{
  bool bVar1;
  undefined *puVar2;
  
  if (lRam00000001137f3f68 != -1) {
    FUN_10002a2fc(0x1137f3f68,&PTR___NSConcreteGlobalBlock_110cb7098);
  }
  if ((bRam00000001137f3f60 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c4d488();
    if (2.0 <= param_1) {
      if (lRam00000001137f3fa8 != -1) {
        FUN_10002a2fc(0x1137f3fa8,&PTR___NSConcreteGlobalBlock_110cb7118);
      }
      bVar1 = lRam00000001137f3fa0 != -1;
    }
    else {
      bVar1 = false;
    }
    func_0x000107c61170(puVar2);
  }
  else {
    if (lRam00000001137f3f78 != -1) {
      FUN_10002a2fc(0x1137f3f78,&PTR___NSConcreteGlobalBlock_110cb70b8);
    }
    bVar1 = lRam00000001137f3f70 - 3U < 0xfffffffffffffffe;
  }
  return bVar1;
}



/* Entry: 1007f85fc; end: 1007f86fb;  */

bool FUN_1007f85fc(double param_1)

{
  bool bVar1;
  undefined *puVar2;
  
  if (lRam00000001137f3f68 != -1) {
    FUN_10002a2fc(0x1137f3f68,&PTR___NSConcreteGlobalBlock_110cb7098);
  }
  if ((bRam00000001137f3f60 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c4d488();
    if (2.0 <= param_1) {
      if (lRam00000001137f3fa8 != -1) {
        FUN_10002a2fc(0x1137f3fa8,&PTR___NSConcreteGlobalBlock_110cb7118);
      }
      bVar1 = lRam00000001137f3fa0 != -1;
    }
    else {
      bVar1 = false;
    }
    func_0x000107c61170(puVar2);
  }
  else {
    if (lRam00000001137f3f78 != -1) {
      FUN_10002a2fc(0x1137f3f78,&PTR___NSConcreteGlobalBlock_110cb70b8);
    }
    bVar1 = lRam00000001137f3f70 - 3U < 0xfffffffffffffffe;
  }
  return bVar1;
}



/* Entry: 1007f86fc; end: 1007f87c7;  */

/* WARNING: Possible PIC construction at 0x0001007f877c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007f8780) */

void FUN_1007f86fc(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  if (lRam00000001137f3f78 != -1) {
    FUN_10002a2fc(0x1137f3f78,&PTR___NSConcreteGlobalBlock_110cb70b8);
  }
  if (lRam00000001137f3f70 - 5U < 7) {
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51820();
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar2 = param_1;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c4d488();
    uRam00000001137f3f60 = param_1 != dVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  uRam00000001137f3f60 = 1;
  return;
}



/* Entry: 1007f87c8; end: 1007f881b;  */

void FUN_1007f87c8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f3f88 != -1) {
    FUN_10002a2fc(0x1137f3f88,&PTR___NSConcreteGlobalBlock_110cb70d8);
  }
  uVar1 = uRam00000001137f3f80;
  func_0x000107c61174(uRam00000001137f3f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007f881c; end: 1007f8a63;  */

/* WARNING: Possible PIC construction at 0x0001007f8a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007f8a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007f89bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007f8a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007f8a18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007f8a34) */
/* WARNING: Removing unreachable block (ram,0x0001007f89c0) */
/* WARNING: Removing unreachable block (ram,0x0001007f89d4) */
/* WARNING: Removing unreachable block (ram,0x0001007f89f0) */
/* WARNING: Removing unreachable block (ram,0x0001007f89f8) */
/* WARNING: Removing unreachable block (ram,0x0001007f89fc) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a00) */
/* WARNING: Removing unreachable block (ram,0x0001007f89e0) */
/* WARNING: Removing unreachable block (ram,0x0001007f8a04) */

void FUN_1007f881c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  FUN_1007f87c8();
  func_0x000107c61180();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111175508;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = param_1;
    func_0x000107c4040c();
    if ((int)ppuVar2 == 0) {
      ppuRam00000001137f3f70 = (undefined **)0x0;
    }
    else {
      func_0x000107c61174(param_1);
      if (lRam00000001137f3f98 != -1) {
        FUN_10002a2fc(0x1137f3f98,&PTR___NSConcreteGlobalBlock_110cb70f8);
      }
      ppuVar1 = param_1;
      if ((((ABS(dRam00000001137f3f90 + -1.5228) < 0.01) ||
           (dRam00000001137f3f90 + -1.5 < 2.2250738585072014e-308)) &&
          (ppuVar2 = param_1, func_0x000107c49d0c(), ((ulong)ppuVar2 & 1) == 0)) &&
         (ppuVar2 = param_1, func_0x000107c49d0c(), ((ulong)ppuVar2 & 1) == 0)) {
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
        func_0x000107c4fd2c();
        func_0x000107c61180();
        func_0x000107c4adac(param_1);
        ppuVar2 = ppuVar1;
        func_0x000107c4c7f0();
        func_0x000107c61180();
        ppuVar3 = ppuVar2;
        func_0x000107c40808();
        if (ppuVar3 == (undefined **)0x0) {
          func_0x000107c61170(ppuVar2);
        }
        else {
          func_0x000107c4d9a4(ppuVar2);
          func_0x000107c61180();
          func_0x000107c4f88c();
          func_0x000107c5c380(param_1);
          func_0x000107c61180();
          ppuVar1 = ppuVar2;
        }
      }
    }
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x000107c5d388();
    ppuRam00000001137f3f70 = ppuVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1007f8a64; end: 1007f8afb;  */

undefined * FUN_1007f8a64(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_538 [1280];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puRam00000001137f3f80 == (undefined *)0x0) {
    func_0x000107c616a0(auStack_538);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c1f0();
    func_0x000107c61180();
    puVar1 = puRam00000001137f3f80;
    param_1 = puRam00000001137f3f80;
    puRam00000001137f3f80 = puVar2;
    func_0x000107c61170(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  if (lRam00000001137fbc68 != -1) {
    FUN_10002a2fc(0x1137fbc68,&PTR___NSConcreteGlobalBlock_110d62d80);
  }
  return (undefined *)(ulong)bRam00000001137fbc50;
}



/* Entry: 1007f8afc; end: 1007f8b3b;  */

undefined1 FUN_1007f8afc(void)

{
  if (lRam00000001137fbc68 != -1) {
    FUN_10002a2fc(0x1137fbc68,&PTR___NSConcreteGlobalBlock_110d62d80);
  }
  return uRam00000001137fbc50;
}



/* Entry: 1007f8b3c; end: 1007f8b87;  */

void FUN_1007f8b3c(long param_1)

{
  long lVar1;
  
  FUN_100478fc4();
  func_0x000107c61180();
  lVar1 = param_1;
  FUN_1007f8b88();
  func_0x000107c61170(param_1);
  uRam00000001137fbc50 = lVar1 - 3U < 2;
  return;
}



/* Entry: 1007f8b88; end: 1007f8cfb;  */

undefined8 FUN_1007f8b88(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x000107c61174();
  FUN_1007f8cfc();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000107c49d0c();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000107c49d0c(), (uVar1 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x000107c4fd2c();
      func_0x000107c61180();
      func_0x000107c4adac(param_1);
      puVar3 = puVar2;
      func_0x000107c4c7f0();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c40808();
      if (puVar4 == (undefined *)0x0) {
        uVar6 = 1;
      }
      else {
        puVar4 = puVar3;
        func_0x000107c4d9a4(puVar3);
        func_0x000107c61180();
        func_0x000107c4f88c();
        uVar1 = param_1;
        func_0x000107c5c380();
        func_0x000107c61180();
        uVar5 = uVar1;
        func_0x000107c49820();
        if ((uVar5 - 1 < 0xc) && ((0xc7fU >> (ulong)((uint)(uVar5 - 1) & 0x1f) & 1) != 0)) {
          uVar6 = 3;
        }
        else {
          uVar6 = 4;
          if (2 < uVar5 - 8 && (long)uVar5 < 0xd) {
            uVar6 = 1;
          }
        }
        func_0x000107c61170(uVar1);
        func_0x000107c61170(puVar4);
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
    }
    else {
      uVar6 = 4;
    }
  }
  else {
    uVar6 = 1;
  }
  func_0x000107c61170(param_1);
  return uVar6;
}



/* Entry: 1007f8cfc; end: 1007f8d7f;  */

bool FUN_1007f8cfc(void)

{
  if (lRam00000001137fbcb0 != -1) {
    FUN_10002a2fc(0x1137fbcb0,&PTR___NSConcreteGlobalBlock_110d62e40);
  }
  return 0.01 <= ABS(dRam00000001137fbca8 + -1.5228) &&
         2.2250738585072014e-308 <= dRam00000001137fbca8 + -1.5;
}



/* Entry: 1007f8d80; end: 1007f8ed7; -[SCCameraOverlayFooterLayoutController initWithFooterView:overlayBottomAnchor:viewfinderBottomAnchor:bottomOffset:] */

undefined1 *
FUN_1007f8d80(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126f83b8;
  uStack_60 = param_2;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(double *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c40284(-param_1);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    if (param_6 != 0) {
      func_0x000107c5784c(0x443b4000,*(undefined8 *)((long)puVar1 + 8));
      uVar2 = param_4;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c402a8(-param_1);
      func_0x000107c61180();
      uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c521e8(*(undefined8 *)((long)puVar1 + 8));
    func_0x000107c521e8(*(undefined8 *)((long)puVar1 + 0x10));
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1007f8ed8; end: 1007f8f67; -[SCLongPressGestureRecognizer initWithTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1007f8ed8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f83e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithTarget_action__1125f1c48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762944) = 0x47efffffe0000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762948) = 0;
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276294c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276294c) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1007f8f68; end: 1007f8fa7; -[SCCameraOverlayView setLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628c4;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007f8fa8; end: 1007f8fb7; -[SCCameraOverlayView longPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f8fa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628c4);
}



/* Entry: 1007f8fb8; end: 1007f8ff7; -[SCCameraOverlayView setPinchGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276291c;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007f8ff8; end: 1007f9007; -[SCCameraOverlayView pinchGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f8ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276291c);
}



/* Entry: 1007f9008; end: 1007f9047; -[SCCameraOverlayView setPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f9008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628c0;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007f9048; end: 1007f9057; -[SCCameraOverlayView panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f9048(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628c0);
}



/* Entry: 1007f9058; end: 1007f9097; -[SCCameraOverlayView setTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f9058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762918;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007f9098; end: 1007f90a7; -[SCCameraOverlayView tapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f9098(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762918);
}



/* Entry: 1007f90a8; end: 1007f90bf; -[SCLegacyCameraResourcesImpl legacyCameraTooltipsService] */

void FUN_1007f90a8(long param_1)

{
  func_0x000107c61148(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f90c0; end: 1007f90ff;  */

void FUN_1007f90c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc28();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007f9100; end: 1007f928f; -[SCLegacyCameraTooltipsServicesEntryPoint _legacyCameraTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f9100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c8280;
  func_0x000107c610f4(PTR_PTR_1126c8280);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273fb74;
    func_0x000107c61148(lVar6);
  }
  lVar2 = lVar6;
  func_0x000107c42eac(lVar6);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11273fb70;
    func_0x000107c61148(lVar7);
  }
  lVar3 = lVar7;
  func_0x000107c4ec80(lVar7);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11273fb6c;
    func_0x000107c61148(lVar8);
    lVar9 = param_1 + _DAT_11273fb7c;
    func_0x000107c61148(lVar9);
  }
  lVar4 = lVar9;
  func_0x000107c519cc(lVar9);
  func_0x000107c61180();
  func_0x000107c3df78(param_1);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c4688c(puVar1,param_2,lVar2,lVar3,lVar8,lVar4,lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007f9290; end: 1007f9297; -[SCUserInfoServices scoreInfoProvider] */

undefined8 FUN_1007f9290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1007f9298; end: 1007f92b7; -[SCLegacyCameraTooltipsServicesEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f9298(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_11273fb78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f92b8; end: 1007f93cb; -[SCLegacyCameraTooltipsServiceImpl initWithFeatureSettingsService:preferences:cameraConfigurationServices:scoreInfoProvider:circumstanceEngine:] */

undefined1 *
FUN_1007f92b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126efc88;
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_5);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007f93cc; end: 1007f945f; -[SCLegacyCameraTooltipsServiceImpl shouldDisplayVideoHelp] */

uint FUN_1007f93cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c41050();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c51f24();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c51c04();
    uVar6 = (uint)uVar5 ^ 1;
    func_0x000107c61170(uVar4);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 1007f9460; end: 1007f949f;  */

void FUN_1007f9460(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c4cc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007f94a0; end: 1007f9687; -[SCUserInfoServicesEntryPoint _scoreInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f94a0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf698;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6b0;
  ppuStack_88 = ppuVar1;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6c8;
  ppuStack_80 = ppuVar2;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6e0;
  ppuStack_78 = ppuVar3;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_70 = ppuVar4;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  func_0x000107c407cc();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(ppuVar1);
  puVar5 = PTR_PTR_1126b88e0;
  func_0x000107c610f4();
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148();
  lVar7 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar6 = puVar5;
  lVar9 = lVar7;
  func_0x000107c46bcc();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  func_0x000107c60e78();
  puVar8 = &uStack_c0;
  pcStack_98 = FUN_1007f9688;
  puStack_b8 = PTR_PTR_1126e8320;
  uStack_c0 = uVar10;
  puStack_b0 = puVar5;
  puStack_a8 = puVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&uStack_c0,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    *(long *)((long)puVar8 + 8) = lVar9;
  }
  return;
}



/* Entry: 1007f9688; end: 1007f96cf; -[SCUserInfoLongProperty initWithValue:] */

void FUN_1007f9688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8320;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1007f96d0; end: 1007f9737; +[SCUserInfoProperty longPropertyWithLongProperty:] */

void FUN_1007f96d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b8998;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007f9738; end: 1007f98b7;  */

void FUN_1007f9738(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_2);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6c8;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6c8);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  FUN_1007f98b8();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6b0;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6b0);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  FUN_1007f98b8();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf698;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf698);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  FUN_1007f98b8();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6e0;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6e0);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  FUN_1007f98b8(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(ppuVar1);
  func_0x000107c610f4(PTR_PTR_1126b8910);
  func_0x000107c485c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f98b8; end: 1007f997f;  */

undefined8 FUN_1007f98b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x000107c4c694(param_1);
  uVar1 = puStack_38[3];
  func_0x000107c60bcc(&uStack_40,8);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1007f9980; end: 1007f99af;  */

void FUN_1007f9980(long param_1,undefined8 param_2)

{
  func_0x000107c5dc0c();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1007f99b0; end: 1007f99b7; -[SCUserInfoLongProperty value] */

undefined8 FUN_1007f99b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007f99b8; end: 1007f9a17; -[SCUserScoreInfo initWithSentCount:receivedCount:totalScore:storiesPosted:] */

void FUN_1007f99b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e0e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 1007f9a18; end: 1007f9a1f; -[SCUserScoreInfo totalScore] */

undefined8 FUN_1007f9a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007f9a20; end: 1007f9abb;  */

/* WARNING: Possible PIC construction at 0x0001007f9a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007f9aa0) */

void FUN_1007f9a20(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c5da4c();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b8c60;
  func_0x000107c5d9a8(PTR_PTR_1126b8c60);
  func_0x000107c61180();
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c45314(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1007f9abc; end: 1007f9c13; -[SCGrapheneRegistry userScoreGraphene] */

void FUN_1007f9abc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1007f9b44;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bbd78 != -1) {
    FUN_10002a2fc(0x1136bbd78,&puStack_48);
  }
  uVar1 = uRam00000001136bbd70;
  func_0x000107c61174(uRam00000001136bbd70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007f9c14; end: 1007f9c3f; +[SCGrapheneUserScoreMetric userInfoAccess] */

void FUN_1007f9c14(void)

{
  func_0x000107c610f4(PTR_PTR_1126b8c60);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f9c40; end: 1007f9c47; -[SCUserScoreInfo sentCount] */

undefined8 FUN_1007f9c40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007f9c48; end: 1007f9c57; -[SCFeatureSettingsService seenTakeSnap] */

void FUN_1007f9c48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e42018,0);
  return;
}



/* Entry: 1007f9c58; end: 1007f9c67; -[SCCameraOverlayView setShouldDisplayVideoHelp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f9c58(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127628a0) = param_3;
  return;
}



/* Entry: 1007f9c68; end: 1007f9c97; -[SCCameraViewControllerInternalState setCameraOverlay:] */

void FUN_1007f9c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007f9c98; end: 1007f9c9f; -[SCCameraViewControllerInternalState cameraOverlay] */

undefined8 FUN_1007f9c98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007f9ca0; end: 1007f9d1b; -[SCCameraViewController lensDelegate] */

void FUN_1007f9ca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3f128();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4b14c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b064();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1007f9d1c; end: 1007f9d2b; -[SCCameraViewController cameraLensesViewControllerManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f9d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762644);
}



/* Entry: 1007f9d2c; end: 1007f9d2f; -[SCCameraLensesViewControllerManager lensFeaturesDelegateProvider] */

void FUN_1007f9d2c(void)

{
  return;
}



/* Entry: 1007f9d30; end: 1007f9d73; -[SCCameraLensesViewControllerManager lensDelegate] */

void FUN_1007f9d30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4b068();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007f9d74; end: 1007f9e57; -[SCCameraLensesViewControllerManager lensDelegateHandler] */

void FUN_1007f9d74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x1d8);
  if (lVar3 == 0) {
    func_0x000107c61144(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined **)(param_1 + 0x1d8) = puVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
    lVar3 = *(long *)(param_1 + 0x1d8);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1007f9e58; end: 1007f9e97;  */

void FUN_1007f9e58(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b2a8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007f9e98; end: 1007fa0bb; -[SCCameraLensesViewControllerManager _createLensDelegateHandler] */

void FUN_1007f9e98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61144(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d1308;
  func_0x000107c610f4();
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c4ae44();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c4b500();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c3f10c();
  func_0x000107c61180();
  func_0x000107c4b460();
  func_0x000107c61180();
  func_0x000107c47350(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007fa0bc; end: 1007fa0fb;  */

void FUN_1007fa0bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc44();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007fa0fc; end: 1007fa2eb; -[SCLensDataProviderEntryPoint _lensCarouselDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fa0fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d10c0;
  func_0x000107c610f4(PTR_PTR_1126d10c0);
  lVar3 = param_1 + _DAT_112759dc0;
  func_0x000107c61148(lVar3);
  lVar4 = lVar3;
  func_0x000107c5d1b0();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112759dc4;
  func_0x000107c61148(lVar5);
  lVar6 = param_1 + _DAT_112759dc8;
  func_0x000107c61148(lVar6);
  lVar7 = lVar6;
  func_0x000107c4b020();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112759dcc;
  func_0x000107c61148(param_1);
  lVar8 = param_1;
  func_0x000107c4af3c();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c4af38();
  func_0x000107c61180();
  func_0x000107c45c00(puVar2);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007fa2ec; end: 1007fa46f; -[SCLensDataProviderAdapter initWithCameraLensesInteractorCreator:uiUpdateAnnouncer:userSessionScope:lensDataConfig:lensCarouselSettings:] */

undefined8 *
FUN_1007fa2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126f5850;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007fa470; end: 1007fa553; -[SCCameraLensesViewControllerManager lensCarouselActivator] */

void FUN_1007fa470(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x1c0);
  if (lVar3 == 0) {
    func_0x000107c61144(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined **)(param_1 + 0x1c0) = puVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
    lVar3 = *(long *)(param_1 + 0x1c0);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1007fa554; end: 1007fa637; -[SCCameraLensesViewControllerManager lensUrlBrowsingManager] */

void FUN_1007fa554(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x208);
  if (lVar3 == 0) {
    func_0x000107c61144(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x208);
    *(undefined **)(param_1 + 0x208) = puVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
    lVar3 = *(long *)(param_1 + 0x208);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1007fa638; end: 1007fa6ef; -[SCCameraLensesViewControllerManager cameraLensCarouselDeactivationCoordinator] */

void FUN_1007fa638(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007fa6f0; end: 1007fa7a7; -[SCCameraLensesViewControllerManager lensStudioNotificationsHandler] */

void FUN_1007fa6f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007fa7a8; end: 1007fac5b; -[SCCameraViewControllerLensDelegateHandler initWithLensLogger:lensPreferences:lensCrashLogger:lensesUIControllerProvider:effectApplicator:trackingProvider:cameraViewControllerInfoProvider:lensDataProviderUpdater:lensDataStoreUpdater:lensCarouselActivator:lensUrlBrowsingManager:legacyLensDataFetcher:lensStateWorkflowProvider:lensPersistentStoragesCleaner:uiUpdateAnnouncer:cameraLensCarouselDeactivationCoordinator:lensesFeaturesInfoProvider:lensStudioNotificationsHandler:lensCarouselManager:lensCarouselOnCameraScopeController:lensCarouselStudySettings:visibilityController:lensCarouselSettings:cameraLensesCoordinator:] */

undefined8 *
FUN_1007fa7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  puStack_70 = PTR_PTR_1126f5890;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x16,param_6);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x17,param_11);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007fac5c; end: 1007fac63; -[SCCameraViewControllerInternalState initialLensDataProvider] */

undefined8 FUN_1007fac5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1007fac64; end: 1007facdf; -[SCCameraViewControllerLensDelegateHandler setUpLensesWithLensDataProvider:] */

/* WARNING: Possible PIC construction at 0x0001007faca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007facac) */

void FUN_1007fac64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5a1e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1007face0; end: 1007fad27;  */

void FUN_1007face0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc6c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007fad28; end: 1007faeef; -[SCLensDataProviderEntryPoint _lensDataProviderUpdaterWithInteractorProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fad28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126d10d0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  lVar12 = (long)_DAT_112759e0c;
  lVar2 = param_1 + lVar12;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3f300();
  func_0x000107c45ca8(puVar1,param_2,lVar3);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126d10d8;
  func_0x000107c610f4();
  uVar5 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar6 = uVar5;
  func_0x000107c3f11c(uVar5);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_112759e10;
  func_0x000107c61148(lVar2);
  lVar8 = lVar2;
  func_0x000107c4b518();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112759e14;
  func_0x000107c61148(lVar3);
  lVar9 = lVar3;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  lVar10 = param_1 + lVar12;
  func_0x000107c61148(lVar10);
  lVar11 = lVar10;
  func_0x000107c3f300();
  param_1 = param_1 + lVar12;
  func_0x000107c61148(param_1);
  lVar12 = param_1;
  func_0x000107c519ac();
  func_0x000107c45bfc(puVar4,param_2,uVar7,lVar8,lVar9,lVar11,lVar12,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1007faef0; end: 1007faf0f; -[SCLensCarouselActivationSourceDefaultMapper initWithCameraViewType:] */

void FUN_1007faef0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x20;
  if (param_3 != 10) {
    uVar1 = 0;
  }
  uVar2 = 1;
  if (1 < param_3 - 1U) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c00a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDefaultLensSource__1125e01f0,uVar2);
  return;
}



/* Entry: 1007faf10; end: 1007faf5b; -[SCLensCarouselActivationSourceDefaultMapper initWithDefaultLensSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007faf10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f85250) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007faf5c; end: 1007fb013; -[SCLensDataProviderAdapter cameraLensesInteractor] */

void FUN_1007faf5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007fb014; end: 1007fb357; -[SCLensDataProviderEntryPoint _cameraLensesInteractorCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fb014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  puVar1 = PTR_PTR_1126d10c8;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112759dd0;
  func_0x000107c61148();
  lVar3 = param_1 + _DAT_112759dd4;
  func_0x000107c61148();
  lVar4 = lVar3;
  func_0x000107c4b2fc();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112759dd8;
  func_0x000107c61148();
  lVar6 = param_1 + _DAT_112759ddc;
  func_0x000107c61148();
  lVar7 = lVar6;
  func_0x000107c3f770();
  func_0x000107c61180();
  lVar8 = param_1 + _DAT_112759de0;
  func_0x000107c61148();
  lVar9 = param_1 + _DAT_112759de4;
  func_0x000107c61148();
  lVar10 = lVar9;
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar11 = param_1 + _DAT_112759de8;
  func_0x000107c61148();
  lVar12 = lVar11;
  func_0x000107c3ee24();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_112759dec;
  func_0x000107c61148();
  lVar14 = lVar13;
  func_0x000107c4b4ec();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_112759df0;
  func_0x000107c61148();
  lVar16 = lVar15;
  func_0x000107c4b040();
  func_0x000107c61180();
  lVar17 = param_1 + _DAT_112759df4;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_112759df8;
  func_0x000107c61148();
  lVar20 = param_1 + _DAT_112759dfc;
  func_0x000107c61148();
  lVar21 = param_1 + _DAT_112759e00;
  func_0x000107c61148();
  lVar22 = lVar21;
  func_0x000107c4b58c();
  func_0x000107c61180();
  lVar23 = param_1 + _DAT_112759e04;
  func_0x000107c61148();
  lVar24 = lVar23;
  func_0x000107c4af44();
  func_0x000107c61180();
  lVar25 = param_1;
  func_0x000107c3baa4();
  func_0x000107c61180();
  lVar26 = param_1 + _DAT_112759e08;
  func_0x000107c61148();
  lVar27 = lVar26;
  func_0x000107c4ae58();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112759e0c;
  func_0x000107c61148();
  lVar28 = param_1;
  func_0x000107c41f48();
  func_0x000107c4909c(puVar1,param_2,lVar2,lVar4,lVar5,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,
                      lVar18,lVar19,lVar20,lVar22,lVar24,lVar25,lVar27,(char)lVar28);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007fb358; end: 1007fb35f; -[SCLensPickerMetadataStoreServices lensPickerMetadataStore] */

undefined8 FUN_1007fb358(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007fb360; end: 1007fb36f; -[_TtC29SCLensDataProviderCreationAPI36SCLensUnlockableDataProviderServices lensUnlockableDataProviderCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fb360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034638));
  return;
}



/* Entry: 1007fb370; end: 1007fb37f; -[_TtC29SCLensDataProviderCreationAPI26SCLensDataProviderServices lensDataProviderCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fb370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034600));
  return;
}



/* Entry: 1007fb380; end: 1007fb3ef; -[SCLensDataProviderEntryPoint _isBitmojiLinked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fb380(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112759e10;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4b518();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1007fb3f0; end: 1007fb3ff; -[SCLensConfigurationServices lensCarouselConfigProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fb3f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130813f8));
  return;
}



/* Entry: 1007fb400; end: 1007fb417; -[_TtC15SCCameraUIScope15SCCameraUIScope disallowsLensExplorer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1007fb400(long param_1)

{
  return *(long *)(param_1 + _DAT_113082488) != 0;
}



/* Entry: 1007fb418; end: 1007fb7a7; -[SCCameraLensesInteractorFactory initWithUnlockableDataStoreServices:lensPickerMetadataStore:lensScheduleMetadataStoreServices:centralizedMetadataStoreProvider:lensInjectionServices:lensExplorerStudySettings:bundledLensProvider:lensUnlockableDataProviderCreator:lensDataProviderCreator:cameraConfig:lensOnboardingMetadataStoreServices:lensPerformerServices:cameraCapturerStateUpdatesProvider:lensCarouselStudySettings:isBitmojiLinked:lensConfigProvider:explorerLensDisabled:] */

undefined8 *
FUN_1007fb418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  puStack_70 = PTR_PTR_1126f5838;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 10,param_12);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0x11) = param_19;
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007fb7a8; end: 1007fb913; -[SCCameraLensesInteractorFactory createCameraLensesInteractorWithUiUpdateAnnouncer:] */

void FUN_1007fb7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar5 = PTR_PTR_1126d1268;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  lVar6 = param_1 + 0x50;
  func_0x000107c61148();
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c3ebcc();
  func_0x000107c47460(puVar5,param_2,param_3,uVar2,uVar3,uVar1,uVar4,uVar12,uVar15,uVar16,uVar13,
                      lVar6,uVar14,uVar8,(char)uVar10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar6);
  puVar11 = PTR_PTR_1126d1270;
  func_0x000107c610f4(PTR_PTR_1126d1270);
  func_0x000107c4727c();
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1007fb914; end: 1007fb963;  */

void FUN_1007fb914(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3bd14(param_1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1007fb964; end: 1007fbb37; -[SCLensUserProviderEntryPoint _lensUserProviderInitHelper] */

void FUN_1007fb964(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100bc8a48;
  puStack_78 = &UNK_11089c2b0;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1008059b8;
  puStack_a0 = &UNK_11089c2e0;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c0,auStack_68);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bb8e8;
  func_0x000107c610f4(PTR_PTR_1126bb8e8);
  func_0x000107c47428();
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1007fbb38; end: 1007fbc4b; -[SCLensUserProvider initWithLensUser:lensStudioUser:bitmojiUser:] */

undefined1 *
FUN_1007fbb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e92e8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007fbc4c; end: 1007fbcd7;  */

void FUN_1007fbc4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c3ea68(param_2);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c3e978();
  func_0x000107c61180();
  func_0x000107c4a0ec(puVar1);
  func_0x000107c4d94c(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007fbcd8; end: 1007fbcdf; -[SCLensUserProvider bitmojiUser] */

void FUN_1007fbcd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1007fbce0; end: 1007fbdb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fbce0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bb8e0;
    func_0x000107c610f4(PTR_PTR_1126bb8e0);
    lVar1 = param_1 + _DAT_112726300;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c3e550();
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_112726304;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c51d3c();
    func_0x000107c61180();
    func_0x000107c45998(puVar5,param_2,lVar2,lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1007fbdb8; end: 1007fbdbf; -[SCBitmojiSelfieServices selfieProvider] */

undefined8 FUN_1007fbdb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007fbdc0; end: 1007fbe63; -[SCLensBitmojiUserSettings initWithBitmojiAvatarProvider:bitmojiSelfieProvider:] */

undefined1 *
FUN_1007fbdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e92d8;
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



/* Entry: 1007fbe64; end: 1007fbeab; -[SCLensBitmojiUserSettings bitmojiAvatarId] */

void FUN_1007fbe64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3e544();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1007fbeac; end: 1007fc2d3; -[SCLensDataProviderRegistry initWithLensesUIUpdateAnnouncer:unlockableDataStoreServices:dataProviderFactory:unlockableDataProviderFactory:lensPickerMetadataStore:lensScheduleMetadataStoreServices:lensInjectionServices:lensExplorerStudySettings:bundledLensProvider:cameraConfig:lensOnboardingMetadataStoreServices:lensPerformerProvider:isBitmojiLinked:lensCarouselStudySettings:centralizedMetadataStoreProvider:lensConfigProvider:explorerLensDisabled:] */

undefined8 *
FUN_1007fbeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  puStack_70 = PTR_PTR_112700da8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar2 = PTR_PTR_1126ddcd0;
    func_0x000107c61160();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_3);
    uVar5 = puVar1[4];
    puVar1[4] = param_3;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_4);
    uVar5 = puVar1[9];
    puVar1[9] = param_4;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_8);
    uVar5 = puVar1[10];
    puVar1[10] = param_8;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_9);
    uVar5 = puVar1[0xb];
    puVar1[0xb] = param_9;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_5);
    uVar5 = puVar1[6];
    puVar1[6] = param_5;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_6);
    uVar5 = puVar1[7];
    puVar1[7] = param_6;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_11);
    uVar5 = puVar1[0xd];
    puVar1[0xd] = param_11;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_13);
    uVar5 = puVar1[0xe];
    puVar1[0xe] = param_13;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_18);
    uVar5 = puVar1[0x13];
    puVar1[0x13] = param_18;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_7);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = param_7;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_10);
    uVar5 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar5);
    func_0x000107c611a0(puVar1 + 0xf,param_12);
    func_0x000107c61174(param_14);
    uVar5 = puVar1[0x10];
    puVar1[0x10] = param_14;
    func_0x000107c61170(uVar5);
    *(undefined1 *)(puVar1 + 0x14) = param_15;
    func_0x000107c61174(param_17);
    uVar5 = puVar1[0x12];
    puVar1[0x12] = param_17;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_19);
    uVar5 = puVar1[0x15];
    puVar1[0x15] = param_19;
    func_0x000107c61170(uVar5);
    *(undefined1 *)(puVar1 + 0x16) = param_20;
    puVar2 = PTR_PTR_1126ddcd8;
    func_0x000107c610f4();
    func_0x000107c48c28();
    puVar3 = PTR_PTR_1126d10e8;
    func_0x000107c610f4();
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    func_0x000107c463a8();
    uVar5 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007fc2d4; end: 1007fc2f3; -[SCLensDataProviderRegistryUpdateListenerAnnouncer .cxx_construct] */

void FUN_1007fc2d4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1007fc2f4; end: 1007fc35f; -[SCLensPredefinedDataProviderFactoryWeakAdapter initWithTarget:] */

undefined1 * FUN_1007fc2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700db0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007fc360; end: 1007fc4bf; -[SCLensDataProviderContextRegistryImpl initWithDataProviderFactory:unlockableDataProviderFactory:predefinedDataProviderFactory:bundledLensProvider:centralizedMetadataStoreProvider:] */

undefined1 *
FUN_1007fc360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_112700da0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007fc4c0; end: 1007fc697; -[SCCameraLensesInteractor initWithLensDataProviderRegistry:cameraCapturerStateUpdatesProvider:] */

undefined8 *
FUN_1007fc4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_112700cc8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_68,puVar1);
    uVar2 = param_4;
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c41a3c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c3f600();
    func_0x000107c61180();
    func_0x000107c3b498(puVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1007fc698; end: 1007fc6a7;  */

void FUN_1007fc698(long param_1)

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



/* Entry: 1007fc6a8; end: 1007fc783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1007fc6a8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61574();
    uVar4 = *(undefined8 *)(param_2 + _DAT_113074f68);
    lVar1 = 0;
    FUN_1007fc784();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x10) = uVar4;
    uVar3 = *(undefined8 *)(param_2 + _DAT_113074f88);
    uVar2 = 0;
    func_0x0001007fc7a4(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar3);
    FUN_1007fc7c4(lVar1,uVar3,uVar2);
    func_0x000107c61170(uVar3);
  }
  return lVar1;
}



/* Entry: 1007fc784; end: 1007fc7c3;  */

void FUN_1007fc784(void)

{
  func_0x000107c61168(&PTR_PTR_112ee3a80);
  return;
}



/* Entry: 1007fc7c4; end: 1007fc973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1007fc7c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar2 = 0;
  FUN_1007fc784();
  lVar1 = _DAT_112ee3c60;
  ppuStack_38 = &PTR_DAT_11058a810;
  puVar3 = PTR_PTR_1126ae568;
  auStack_58[0] = param_1;
  uStack_40 = uVar2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3c68;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3c70;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3c78;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3c80;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3c88;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3c90;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3c98;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3ca0;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3cb0;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar3;
  FUN_1007fc974(auStack_58,param_3 + _DAT_112ee3c58);
  *(undefined8 *)(param_3 + _DAT_112ee3ca8) = param_2;
  uVar2 = 0;
  func_0x0001007fc7a4();
  puVar3 = PTR_s_init_1125d9248;
  lStack_68 = param_3;
  uStack_60 = uVar2;
  func_0x000107c61174(param_2);
  plVar4 = &lStack_68;
  func_0x000107c61154(plVar4,puVar3);
  func_0x000107c61180();
  FUN_1007fc9b8();
  func_0x000107c61170(plVar4);
  func_0x0001000834e4(auStack_58);
  return plVar4;
}



/* Entry: 1007fc974; end: 1007fc9b7;  */

long FUN_1007fc974(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}


