/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c1a188; end: 103c1a20b; -[SCModularCallInAppNotificationPresentingPlugin initWithModularCallLauncher:callStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1a188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff84f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ff84f8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff8500) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103c1a20c; end: 103c1a55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c1a20c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lVar4;
  
  lVar1 = _DAT_112ff84f0;
  ppuVar11 = &puStack_90;
  uVar8 = param_2;
  if (*(long *)(unaff_x20 + _DAT_112ff84f0) != 0) {
    func_0x000107c42008(*(undefined8 *)(unaff_x20 + _DAT_112ff84f8));
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar3);
  }
  lVar4 = param_1;
  func_0x000107c4f6dc();
  iVar2 = (int)lVar4;
  func_0x000107fcbed4();
  if (iVar2 != 0) {
    lVar4 = param_1;
    func_0x000108616f18();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar7 = param_1;
      func_0x000107c4f6dc();
      iVar2 = (int)lVar7;
      func_0x000107fcbef0();
      if (iVar2 == 0) {
        lVar7 = param_1;
        func_0x000107c51f08();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x00010446de8c();
          lVar5 = 0;
          func_0x00010446dbbc(0,0xe000000000000000);
        }
        else {
          lVar5 = lVar7;
          func_0x000107c5faec();
          func_0x000107c61170(lVar7);
          func_0x00010446de8c(0);
          func_0x00010446dbbc(lVar5,uVar8);
          func_0x000107c6142c(uVar8);
        }
      }
      else {
        lVar5 = 0;
        func_0x00010446de8c(0);
        func_0x00010446db10();
      }
      uVar12 = *(ulong *)(unaff_x20 + _DAT_112ff84f8);
      uVar6 = uVar12;
      func_0x000107c49ae0();
      if (((uVar6 & 1) == 0) || (uVar6 = uVar12, func_0x000107c49ae0(), (uVar6 & 1) != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_112ff8500);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar7 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = lVar7;
          func_0x000107c3efa4();
          func_0x000107c61180();
          func_0x000107c615e8(lVar7);
          if ((lVar13 != 0) &&
             ((lVar7 = lVar13, func_0x000107c4b824(), lVar7 == 4 ||
              (lVar7 = lVar13, func_0x000107c4b824(), lVar7 == 3)))) {
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar13);
            func_0x000107c61170(lVar5);
            return 1;
          }
        }
        lVar7 = param_1;
        func_0x000107c4f6dc();
        iVar2 = (int)lVar7;
        func_0x000107fcbf00();
        uVar8 = 1;
        if (iVar2 == 0) {
          uVar8 = 2;
        }
        func_0x000107c5583c(param_1);
        uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
        *(long *)(unaff_x20 + lVar1) = param_1;
        func_0x000107c61170(uVar3);
        func_0x000104461378(0);
        func_0x000107c61174(param_1);
        func_0x000104460c2c(uVar8,0);
        func_0x000107c4d7e4(param_1);
        func_0x000107c61180();
        puVar9 = &UNK_1106ead30;
        func_0x000107c613fc(&UNK_1106ead30,0x18,7);
        func_0x000107c61614(puVar9 + 0x10);
        puVar10 = &UNK_1106ead58;
        func_0x000107c613fc(&UNK_1106ead58,0x20,7);
        *(undefined **)(puVar10 + 0x10) = puVar9;
        *(undefined8 *)(puVar10 + 0x18) = param_2;
        pcStack_70 = FUN_103c1a5f4;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f3aa0;
        puStack_78 = &UNK_1106ead70;
        puStack_68 = puVar10;
        func_0x000107c60bc4(&puStack_90);
        puVar9 = puStack_68;
        func_0x000107c615f0(param_2);
        func_0x000107c61574(puVar9);
        func_0x000107c4ab3c(uVar12);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar5);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(param_1);
        return 1;
      }
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
    }
  }
  return 0;
}



/* Entry: 103c1a55c; end: 103c1a5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1a55c(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112ff84f0);
    if (lVar1 != 0) {
      *(undefined8 *)(param_2 + _DAT_112ff84f0) = 0;
      if ((param_1 & 1) == 0) {
        func_0x000107c445d8(param_3);
      }
      else {
        func_0x000107c445dc();
      }
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103c1a5f4; end: 103c1a617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1a5f4(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ff84f0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar2 + _DAT_112ff84f0) = 0;
      if ((param_1 & 1) == 0) {
        func_0x000107c445d8(uVar1);
      }
      else {
        func_0x000107c445dc();
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103c1a618; end: 103c1a68b; -[SCModularCallInAppNotificationPresentingPlugin presentInAppNotification:delegate:] */

uint FUN_103c1a618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103c1a20c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103c1a68c; end: 103c1a68f; -[SCModularCallInAppNotificationPresentingPlugin presentInAppNotificationAsync:delegate:] */

void FUN_103c1a68c(void)

{
  return;
}



/* Entry: 103c1a690; end: 103c1a703; -[SCModularCallInAppNotificationPresentingPlugin dismissInAppNotification] */

/* WARNING: Possible PIC construction at 0x000103c1a6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c1a6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1a690(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112ff84f0;
  if (*(long *)(param_1 + _DAT_112ff84f0) != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ff84f8);
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x000107c42008(uVar3);
    *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103c1a704; end: 103c1a73f; -[SCModularCallInAppNotificationPresentingPlugin shouldHandleAppNotification:] */

undefined8 FUN_103c1a704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4f6dc();
  func_0x000107fcbed4();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103c1a740; end: 103c1a79f; -[SCModularCallInAppNotificationPresentingPlugin init] */

void FUN_103c1a740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCModularCallInAppNotificationPresentingPlugin.SCModularCallInAppNotificationPresentingPlugin"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1a76c);
  (*pcVar1)();
}



/* Entry: 103c1a7a0; end: 103c1a7e7; -[SCModularCallInAppNotificationPresentingPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c1a7cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c1a7d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1a7a0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff84f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8500));
  return;
}



/* Entry: 103c1a7e8; end: 103c1a807;  */

void FUN_103c1a7e8(void)

{
  func_0x000107c61168(&PTR_PTR_112946a00);
  return;
}



/* Entry: 103c1a808; end: 103c1a81b;  */

bool FUN_103c1a808(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c1a81c; end: 103c1a8f3;  */

void FUN_103c1a81c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c1a8f4; end: 103c1a8ff;  */

void FUN_103c1a8f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103c1a900; end: 103c1a957; -[SCTAnimation init] */

void FUN_103c1a900(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000015,0x800000010f1afbd0,
                      "SCTAnimation/SCTAnimation.swift",0x1f,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1a958);
  (*pcVar1)();
}



/* Entry: 103c1a958; end: 103c1adbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1a958(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  long lStack_58;
  
  func_0x000107c610f8();
  if (param_3 < 3) {
    if (param_3 == 0) {
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0x3fdae147ae147ae1;
    }
    else {
      if (param_3 == 1) {
        uVar3 = 0;
        FUN_103c1cbac();
        uVar4 = uVar3;
        func_0x000107c610f8();
        func_0x000107c610f8();
        uVar5 = 0x3fdae147ae147ae1;
        goto LAB_103c1aad4;
      }
      if (param_3 != 2) {
LAB_103c1ab70:
        lStack_58 = param_3;
        func_0x000107c60614(&UNK_1106eae28,&lStack_58,&UNK_1106eae28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1ab94);
        (*pcVar2)();
      }
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0;
    }
    uVar7 = 0x3fe28f5c28f5c28f;
  }
  else {
    if (param_3 == 3) {
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0;
    }
    else {
      if (param_3 == 4) {
        uVar3 = 0;
        FUN_103c1cbac();
        uVar4 = uVar3;
        func_0x000107c610f8();
        func_0x000107c610f8();
        uVar5 = 0x3fd51eb851eb851f;
        uVar7 = 0;
        uVar6 = uVar5;
        goto LAB_103c1aae4;
      }
      if (param_3 != 5) goto LAB_103c1ab70;
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0x3fc47ae147ae147b;
    }
LAB_103c1aad4:
    uVar7 = 0x3ff0000000000000;
  }
  uVar6 = 0;
LAB_103c1aae4:
  FUN_103c1cc50(uVar5,uVar6,uVar7,0x3ff0000000000000,0x3ff0000000000000);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  func_0x000107c61464(uVar4,uVar5,0x71,7);
  *(undefined8 *)(unaff_x20 + _DAT_112ff8530) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8538) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8540) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8548);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(auStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c1adc0; end: 103c1ae47; -[SCTAnimation initWithCurve:fromInterval:toInterval:completion:] */

void FUN_103c1adc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    pcVar1 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_1106eae70;
    func_0x000107c613fc(&UNK_1106eae70,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar1 = FUN_103c1c640;
  }
  func_0x000103c1ab94(param_1,param_2,param_5,pcVar1,puVar2);
  return;
}



/* Entry: 103c1ae48; end: 103c1ae93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1ae48(double param_1)

{
  long unaff_x20;
  
  FUN_103c1cf28((param_1 - *(double *)(unaff_x20 + _DAT_112ff8538)) /
                (*(double *)(unaff_x20 + _DAT_112ff8540) - *(double *)(unaff_x20 + _DAT_112ff8538)))
  ;
  return;
}



/* Entry: 103c1ae94; end: 103c1aedf; -[SCTAnimation deltaAtInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1ae94(double param_1,long param_2)

{
  FUN_103c1cf28((param_1 - *(double *)(param_2 + _DAT_112ff8538)) /
                (*(double *)(param_2 + _DAT_112ff8540) - *(double *)(param_2 + _DAT_112ff8538)));
  return;
}



/* Entry: 103c1aee0; end: 103c1af67;  */

/* WARNING: Possible PIC construction at 0x000103c1af48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c1af4c) */

void FUN_103c1aee0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f1afbf0);
  func_0x000107c478fc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103c1af68; end: 103c1afef; -[SCTAnimation updateForInterval:] */

/* WARNING: Possible PIC construction at 0x000103c1afd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c1afd4) */

void FUN_103c1af68(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f1afbf0);
  func_0x000107c478fc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103c1aff0; end: 103c1affb;  */

void FUN_103c1aff0(void)

{
  FUN_103c1c3e8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c1affc; end: 103c1b037; -[SCTAnimation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1affc(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112ff8548),
                      ((undefined8 *)(param_1 + _DAT_112ff8548))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8530));
  return;
}



/* Entry: 103c1b038; end: 103c1b067; -[SCTAnimator isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103c1b038(long param_1)

{
  return *(long *)(param_1 + _DAT_112ff8550) != 0;
}



/* Entry: 103c1b068; end: 103c1b117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1b068(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ff8558;
  func_0x000107c61428(unaff_x20 + _DAT_112ff8558,auStack_58,0x21,0);
  func_0x000103c1ba64();
  uVar3 = *(ulong *)(unaff_x20 + lVar2);
  uVar4 = uVar3 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_103c1bad4(uVar3,uVar1 + 1,1);
    uVar4 = uVar3 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar4 + uVar1 * 8 + 0x20) = param_1;
  *(ulong *)(unaff_x20 + lVar2) = uVar3;
  func_0x000107c614a8(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 103c1b118; end: 103c1b1e3; -[SCTAnimator addAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1b118(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ff8558;
  func_0x000107c61428(param_1 + _DAT_112ff8558,auStack_58,0x21,0);
  func_0x000107c61174();
  lVar3 = param_1;
  func_0x000107c61174(param_1);
  func_0x000103c1ba64();
  uVar4 = *(ulong *)(param_1 + lVar2);
  uVar5 = uVar4 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar5 + 0x10);
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_103c1bad4(uVar4,uVar1 + 1,1);
    uVar5 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar5 + uVar1 * 8 + 0x20) = param_3;
  *(ulong *)(param_1 + lVar2) = uVar4;
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 103c1b1e4; end: 103c1b1ef;  */

/* WARNING: Removing unreachable block (ram,0x000103c1b344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1b1e4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_112ff8558;
  func_0x000107c61428(unaff_x20 + _DAT_112ff8558,auStack_58,0,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar8 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar4 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8560);
    uVar7 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar7,uVar2);
    *(undefined8 *)(unaff_x20 + _DAT_112ff8568) = 0;
    puVar5 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x000107c61168();
    func_0x000100b64c10(0,0);
    func_0x000107c42110();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8fc(puVar5);
    func_0x000107c61170(puVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ff8550);
    *(undefined **)(unaff_x20 + _DAT_112ff8550) = puVar5;
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 103c1b1f0; end: 103c1b21f; -[SCTAnimator commitAnimations] */

void FUN_103c1b1f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c1b220(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c1b220; end: 103c1b363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1b220(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_112ff8558;
  func_0x000107c61428(unaff_x20 + _DAT_112ff8558,auStack_58,0,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar8 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar4 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8560);
    uVar7 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x00010058d43c(uVar7,uVar2);
    *(undefined8 *)(unaff_x20 + _DAT_112ff8568) = 0;
    puVar5 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x000107c61168();
    func_0x000100b64c10(param_1,param_2);
    func_0x000107c42110();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8fc(puVar5);
    func_0x000107c61170(puVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ff8550);
    *(undefined **)(unaff_x20 + _DAT_112ff8550) = puVar5;
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 103c1b364; end: 103c1b3ef; -[SCTAnimator commitAnimationsWithCompletion:] */

void FUN_103c1b364(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1106eae48;
    func_0x000107c613fc(&UNK_1106eae48,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x103c1c47c;
  }
  func_0x000107c61174(param_1);
  FUN_103c1b220(uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c1b3f0; end: 103c1b48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1b3f0(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  
  lVar1 = _DAT_112ff8568;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff8550);
  if (lVar2 != 0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_112ff8568);
    func_0x000107c61174();
    if (dVar3 == 0.0) {
      func_0x000107c5ca64(lVar2);
      dVar3 = param_1;
      func_0x000107c42378(lVar2);
      param_1 = param_1 - dVar3;
      *(double *)(unaff_x20 + lVar1) = param_1;
    }
    func_0x000107c5ca64(lVar2);
    FUN_103c1b4b4(param_1 - *(double *)(unaff_x20 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103c1b48c; end: 103c1b4b3; -[SCTAnimator updateAnimations] */

void FUN_103c1b48c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c1b3f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c1b4b4; end: 103c1b85f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1b4b4(double param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  
  lVar2 = _DAT_112ff8558;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61428(unaff_x20 + _DAT_112ff8558,auStack_90,0,0);
  puVar14 = *(ulong **)(unaff_x20 + lVar2);
  if ((ulong)puVar14 >> 0x3e == 0) {
    puVar15 = *(ulong **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (ulong *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((ulong *)0x7fffffffffffffff < puVar14) {
      puVar15 = puVar14;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (ulong *)0x0) {
    if ((long)puVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x103c1b834);
      (*pcVar10)();
    }
    func_0x000107c61434(puVar14);
    puVar7 = PTR__swift_isaMask_11034f488;
    puVar16 = (ulong *)0x0;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)puVar14 & 0xc000000000000001) == 0) {
        puVar3 = (ulong *)puVar14[(long)puVar16 + 4];
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar16;
        func_0x000103c1c18c(puVar16,puVar14);
      }
      if (param_1 < *(double *)((long)puVar3 + _DAT_112ff8538)) {
LAB_103c1b56c:
        func_0x000107c61170();
      }
      else {
        pcVar10 = *(code **)((*(ulong *)puVar7 & *puVar3) + 0x80);
        if (param_1 < *(double *)((long)puVar3 + _DAT_112ff8540)) {
          (*pcVar10)(param_1);
          goto LAB_103c1b56c;
        }
        (*pcVar10)();
        pcVar10 = *(code **)((long)puVar3 + _DAT_112ff8548);
        if (pcVar10 != (code *)0x0) {
          uVar13 = ((undefined8 *)((long)puVar3 + _DAT_112ff8548))[1];
          func_0x000107c6157c(uVar13);
          (*pcVar10)();
          func_0x00010058d43c(pcVar10,uVar13);
        }
        func_0x000107c61174();
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_103c1bad4(0,puVar4 + 1,1,puVar6);
        }
        uVar11 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar12 = *(ulong *)(uVar11 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar12) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_103c1bad4(puVar6,uVar12 + 1,1,puVar5);
          uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar12 + 1;
        *(ulong **)(uVar11 + uVar12 * 8 + 0x20) = puVar3;
        func_0x000107c61170(puVar3);
        puStack_78 = puVar6;
      }
      puVar16 = (ulong *)((long)puVar16 + 1);
    } while (puVar15 != puVar16);
    func_0x000107c6142c(puVar14);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar7 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar7 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61428(unaff_x20 + lVar2,auStack_a8,0x21,0);
    lVar8 = unaff_x20 + lVar2;
    FUN_103c1bdc4(lVar8,&puStack_78);
    uVar12 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar12 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar11 = uVar12;
      }
      func_0x000107c60480();
    }
    if ((long)uVar11 < lVar8) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x103c1b860);
      (*pcVar10)();
    }
    FUN_103c1c57c();
    func_0x000107c614a8(auStack_a8);
  }
  uVar12 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar12 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    lVar2 = _DAT_112ff8550;
  }
  else {
    uVar11 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar11 = uVar12;
    }
    func_0x000107c60480();
    lVar2 = _DAT_112ff8550;
  }
  _DAT_112ff8550 = lVar2;
  if (uVar11 == 0) {
    func_0x000107c498f8(*(undefined8 *)(unaff_x20 + lVar2));
    uVar13 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar13);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8560);
    pcVar10 = (code *)*puVar1;
    if (pcVar10 == (code *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = puVar1[1];
      func_0x000107c6157c(uVar13);
      (*pcVar10)();
      func_0x00010058d43c(pcVar10,uVar13);
      uVar13 = *puVar1;
    }
    uVar9 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar13,uVar9);
  }
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 103c1b860; end: 103c1b963;  */

undefined8 FUN_103c1b860(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *param_1;
  uVar3 = *param_2;
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
  func_0x000107c61434(uVar3);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1b944);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1b948);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar3 + 0x20 + uVar6 * 8);
      }
      else {
        uVar2 = uVar6;
        func_0x000103c1c18c(uVar6,uVar3);
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1b964);
          (*pcVar1)();
        }
        func_0x000107c615e8();
      }
      if (uVar2 == uVar7) {
        uVar5 = 1;
        goto LAB_103c1b914;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
    uVar5 = 0;
  }
LAB_103c1b914:
  func_0x000107c6142c(uVar3);
  return uVar5;
}



/* Entry: 103c1b964; end: 103c1b9db; -[SCTAnimator init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1b964(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff8560);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112ff8550) = 0;
  *(undefined8 *)(param_1 + _DAT_112ff8568) = 0;
  *(undefined **)(param_1 + _DAT_112ff8558) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = param_1;
  func_0x000103c1c408();
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c1b9dc; end: 103c1b9e7;  */

void FUN_103c1b9dc(void)

{
  (*(code *)0x103c1c408)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c1b9e8; end: 103c1ba17;  */

void FUN_103c1b9e8(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c1ba18; end: 103c1bad3; -[SCTAnimator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1ba18(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112ff8560),
                      ((undefined8 *)(param_1 + _DAT_112ff8560))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff8550));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff8558));
  return;
}



/* Entry: 103c1bad4; end: 103c1bbfb;  */

ulong FUN_103c1bad4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1bbfc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103c1bbfc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1bbf8);
      (*pcVar1)();
    }
    FUN_103c1bc7c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103c1bbfc; end: 103c1bc7b;  */

undefined * FUN_103c1bbfc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103c1bd6c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103c1bc7c; end: 103c1bd6b;  */

long FUN_103c1bc7c(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1bd68);
      (*pcVar2)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1bd6c);
        (*pcVar2)();
      }
      lVar3 = param_1;
      FUN_103c1c3e8();
      lVar4 = param_1;
      do {
        lVar5 = lVar4 + 1;
        func_0x000107c60318(lVar4,param_4,lVar3);
        lVar4 = lVar5;
      } while (param_2 != lVar5);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      FUN_103c1c3e8();
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,lVar5);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1bd64);
    (*pcVar2)();
  }
  uVar1 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar1);
  return param_1;
}



/* Entry: 103c1bd6c; end: 103c1bdc3;  */

void FUN_103c1bd6c(void)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar3 == 0) || (FUN_103c1c3e8(), lVar3 == 0)) {
    puVar1 = (ulong *)0x112ff85c8;
    plVar4 = (long *)&UNK_10dc67418;
  }
  else {
    puVar1 = (ulong *)0x112d36e60;
    plVar4 = (long *)&UNK_10d901170;
  }
  if (*puVar1 == 0 || (*puVar1 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar4 + (long)(int)*plVar4);
    func_0x000107c61518(puVar2,*plVar4 >> 0x20,0,0);
    *puVar1 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103c1bdc4; end: 103c1c033;  */

void FUN_103c1bdc4(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long unaff_x21;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  ulong uStack_58;
  
  uVar8 = *param_1;
  uVar4 = uVar8;
  uVar7 = param_2;
  FUN_103c1c034();
  if (unaff_x21 == 0) {
    if (((uint)uVar7 & 0xff) == 1) {
      if (uVar8 >> 0x3e != 0) {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar4 = uVar8;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar10 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1be58);
        (*pcVar2)();
      }
      while( true ) {
        uVar10 = uVar10 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar5 = uVar8;
          }
          func_0x000107c60480();
        }
        if (uVar10 == uVar5) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c004);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c008);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar10;
          func_0x000103c1c18c(uVar10,uVar8);
        }
        puVar6 = &uStack_58;
        uStack_58 = uVar5;
        FUN_103c1b860(puVar6,param_2);
        func_0x000107c61170(uVar5);
        if (((ulong)puVar6 & 1) == 0) {
          if (uVar4 != uVar10) {
            if ((uVar8 & 0xc000000000000001) == 0) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c018);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c01c);
                (*pcVar2)();
              }
              if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c020);
                (*pcVar2)();
              }
              uStack_68 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
              uVar5 = *(ulong *)(uVar8 + 0x20 + uVar10 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              uStack_68 = uVar4;
              func_0x000103c1c18c(uVar4,uVar8);
              uVar5 = uVar10;
              func_0x000103c1c18c(uVar10,uVar8);
            }
            uVar11 = uVar8;
            func_0x000107c61550();
            if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
              func_0x000103c1c13c();
              uVar9 = (uint)(uVar8 >> 0x3e) & 1;
            }
            else {
              uVar9 = 0;
            }
            uVar11 = uVar8 & 0xffffffffffffff8;
            lVar1 = uVar11 + uVar4 * 8;
            uVar7 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar5;
            func_0x000107c61170(uVar7);
            if (((long)uVar8 < 0) || (uVar9 != 0)) {
              func_0x000103c1c13c();
              uVar11 = uVar8 & 0xffffffffffffff8;
            }
            if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c000);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c014);
              (*pcVar2)();
            }
            lVar1 = uVar11 + uVar10 * 8;
            uVar7 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uStack_68;
            func_0x000107c61170(uVar7);
            *param_1 = uVar8;
          }
          bVar3 = SCARRY8(uVar4,1);
          uVar4 = uVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c010);
            (*pcVar2)();
          }
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1c00c);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 103c1c034; end: 103c1c13b;  */

ulong FUN_103c1c034(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x21;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_58;
  
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar5 = 0;
  do {
    if (uVar6 == uVar5) {
      return 0;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1c124);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar5;
      func_0x000103c1c18c(uVar5,param_1);
    }
    puVar4 = &uStack_58;
    uStack_58 = uVar3;
    FUN_103c1b860(puVar4,param_2);
    func_0x000107c61170(uVar3);
    if (unaff_x21 != 0) {
      return uVar5;
    }
    if (((ulong)puVar4 & 1) != 0) {
      return uVar5;
    }
    bVar2 = SCARRY8(uVar5,1);
    uVar5 = uVar5 + 1;
  } while (!bVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1c128);
  (*pcVar1)();
}



/* Entry: 103c1c13c; end: 103c1c327;  */

/* WARNING: Removing unreachable block (ram,0x000103c1bb08) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb2c) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb10) */
/* WARNING: Removing unreachable block (ram,0x000103c1bbf8) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb1c) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb24) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb68) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb7c) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb88) */
/* WARNING: Removing unreachable block (ram,0x000103c1bb90) */

ulong FUN_103c1c13c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_103c1bbfc(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_103c1bc7c(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1bbf8);
  (*pcVar1)();
}



/* Entry: 103c1c328; end: 103c1c3d7;  */

void FUN_103c1c328(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_103c1bad4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 103c1c3d8; end: 103c1c3e7;  */

undefined1  [16] FUN_103c1c3d8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103c1c3e8; end: 103c1c427;  */

void FUN_103c1c3e8(void)

{
  func_0x000107c61168(&PTR_PTR_112946ad0);
  return;
}



/* Entry: 103c1c428; end: 103c1c42b;  */

void FUN_103c1c428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67338;
  func_0x000107c61520(&UNK_10dc67338,&UNK_1106eae28);
  puRam0000000112ff8570 = puVar1;
  return;
}



/* Entry: 103c1c42c; end: 103c1c46b;  */

void FUN_103c1c42c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67338;
  func_0x000107c61520(&UNK_10dc67338,&UNK_1106eae28);
  puRam0000000112ff8570 = puVar1;
  return;
}



/* Entry: 103c1c46c; end: 103c1c483;  */

undefined1  [16] FUN_103c1c46c(void)

{
  return ZEXT816(0x1106eae28);
}



/* Entry: 103c1c484; end: 103c1c57b;  */

void FUN_103c1c484(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103c1c558);
    (*pcVar5)();
  }
  uVar8 = *unaff_x20;
  uVar7 = uVar8 & 0xffffffffffffff8;
  lVar1 = uVar7 + 0x20 + param_1 * 8;
  FUN_103c1c3e8();
  func_0x000107c61408(lVar1,lVar3,param_1);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103c1c55c);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar8 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar7 + 0x10);
      lVar3 = uVar6 - param_2;
    }
    else {
      uVar6 = uVar7;
      if ((uVar8 & 0x8000000000000000) != 0) {
        uVar6 = uVar8;
      }
      func_0x000107c60480();
      lVar3 = uVar6 - param_2;
    }
    if (SBORROW8(uVar6,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103c1c574);
      (*pcVar5)();
    }
    uVar6 = lVar1 + param_3 * 8;
    uVar2 = uVar7 + 0x20 + param_2 * 8;
    if (uVar6 != uVar2 || uVar2 + lVar3 * 8 <= uVar6) {
      func_0x000107c610b8(uVar6,uVar2,lVar3 << 3);
    }
    if (uVar8 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      uVar6 = uVar7;
      if ((uVar8 & 0x8000000000000000) != 0) {
        uVar6 = uVar8;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103c1c578);
      (*pcVar5)();
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103c1c57c);
    (*pcVar5)();
  }
  return;
}



/* Entry: 103c1c57c; end: 103c1c63f;  */

/* WARNING: Removing unreachable block (ram,0x000103c1c578) */

void FUN_103c1c57c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c61c);
    (*pcVar3)();
  }
  uVar6 = *unaff_x20;
  if (uVar6 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if ((uVar6 & 0x8000000000000000) != 0) {
      uVar5 = uVar6;
    }
    func_0x000107c60480();
  }
  if ((long)uVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c634);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c638);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar6 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar6 & 0xffffffffffffff8;
      if ((uVar6 & 0x8000000000000000) != 0) {
        uVar5 = uVar6;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar5,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c640);
      (*pcVar3)();
    }
    FUN_103c1c328(uVar5 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c558);
      (*pcVar3)();
    }
    uVar7 = *unaff_x20;
    uVar5 = uVar7 & 0xffffffffffffff8;
    uVar6 = uVar5 + 0x20 + param_1 * 8;
    FUN_103c1c3e8();
    func_0x000107c61408(uVar6,lVar1,param_1);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c55c);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar7 >> 0x3e == 0) {
        uVar4 = *(ulong *)(uVar5 + 0x10);
        lVar1 = uVar4 - param_2;
      }
      else {
        uVar4 = uVar5;
        if ((uVar7 & 0x8000000000000000) != 0) {
          uVar4 = uVar7;
        }
        func_0x000107c60480();
        lVar1 = uVar4 - param_2;
      }
      if (SBORROW8(uVar4,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c574);
        (*pcVar3)();
      }
      uVar4 = uVar5 + 0x20 + param_2 * 8;
      if (uVar6 != uVar4 || uVar4 + lVar1 * 8 <= uVar6) {
        func_0x000107c610b8(uVar6,uVar4,lVar1 << 3);
      }
      if (uVar7 >> 0x3e == 0) {
        uVar6 = *(ulong *)(uVar5 + 0x10);
      }
      else {
        uVar6 = uVar5;
        if ((uVar7 & 0x8000000000000000) != 0) {
          uVar6 = uVar7;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar6,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c578);
        (*pcVar3)();
      }
      *(ulong *)(uVar5 + 0x10) = uVar6 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1c63c);
  (*pcVar3)();
}



/* Entry: 103c1c640; end: 103c1c667;  */

void FUN_103c1c640(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103c1c668; end: 103c1c6ef;  */

undefined8 FUN_103c1c668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c1cbac();
  uVar1 = param_3;
  func_0x000107c610f8();
  func_0x000107c610f8(param_3);
  FUN_103c1cc50(param_1,0,param_2,0x3ff0000000000000,0x3ff0000000000000);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c61464(uVar1,uVar2,0x71,7);
  return param_3;
}



/* Entry: 103c1c6f0; end: 103c1c717; -[SCTAnimationTimingFunction controlPoint1] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c1c6f0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112ff85d0);
}



/* Entry: 103c1c718; end: 103c1c757; -[SCTAnimationTimingFunction setControlPoint1:] */

void FUN_103c1c718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103c1c758(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c1c758; end: 103c1c78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1c758(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff85d0);
  dVar3 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  if (dVar3 < 0.0) {
    dVar3 = 0.0;
  }
  dVar5 = (double)NEON_fminnm(param_2,0x3ff0000000000000);
  if (dVar5 < 0.0) {
    dVar5 = 0.0;
  }
  func_0x000107c6099c(*puVar1,puVar1[1],dVar3,dVar5);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  dVar5 = *(double *)(unaff_x20 + _DAT_112ff85d0) * 3.0;
  dVar4 = ((double *)(unaff_x20 + _DAT_112ff85d0))[1] * 3.0;
  dVar6 = *(double *)(unaff_x20 + _DAT_112ff85d8) * 3.0;
  dVar3 = ((double *)(unaff_x20 + _DAT_112ff85d8))[1] * 3.0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff85f0) = 0;
  *(double *)(unaff_x20 + _DAT_112ff8618) = dVar5;
  *(double *)(unaff_x20 + _DAT_112ff85f8) = dVar4;
  *(double *)(unaff_x20 + _DAT_112ff8620) = (0.0 - (dVar5 + dVar5)) + dVar6;
  *(double *)(unaff_x20 + _DAT_112ff8600) = (0.0 - (dVar4 + dVar4)) + dVar3;
  *(double *)(unaff_x20 + _DAT_112ff8628) = (dVar5 + 1.0) - dVar6;
  *(double *)(unaff_x20 + _DAT_112ff8608) = (dVar4 + 1.0) - dVar3;
  return;
}



/* Entry: 103c1c78c; end: 103c1c7b3; -[SCTAnimationTimingFunction controlPoint2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c1c78c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112ff85d8);
}



/* Entry: 103c1c7b4; end: 103c1c7f3; -[SCTAnimationTimingFunction setControlPoint2:] */

void FUN_103c1c7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103c1c7f4(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c1c7f4; end: 103c1c7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1c7f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff85d8);
  dVar3 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  if (dVar3 < 0.0) {
    dVar3 = 0.0;
  }
  dVar5 = (double)NEON_fminnm(param_2,0x3ff0000000000000);
  if (dVar5 < 0.0) {
    dVar5 = 0.0;
  }
  func_0x000107c6099c(*puVar1,puVar1[1],dVar3,dVar5);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  dVar5 = *(double *)(unaff_x20 + _DAT_112ff85d0) * 3.0;
  dVar4 = ((double *)(unaff_x20 + _DAT_112ff85d0))[1] * 3.0;
  dVar6 = *(double *)(unaff_x20 + _DAT_112ff85d8) * 3.0;
  dVar3 = ((double *)(unaff_x20 + _DAT_112ff85d8))[1] * 3.0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff85f0) = 0;
  *(double *)(unaff_x20 + _DAT_112ff8618) = dVar5;
  *(double *)(unaff_x20 + _DAT_112ff85f8) = dVar4;
  *(double *)(unaff_x20 + _DAT_112ff8620) = (0.0 - (dVar5 + dVar5)) + dVar6;
  *(double *)(unaff_x20 + _DAT_112ff8600) = (0.0 - (dVar4 + dVar4)) + dVar3;
  *(double *)(unaff_x20 + _DAT_112ff8628) = (dVar5 + 1.0) - dVar6;
  *(double *)(unaff_x20 + _DAT_112ff8608) = (dVar4 + 1.0) - dVar3;
  return;
}



/* Entry: 103c1c800; end: 103c1c86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1c800(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = (uint)param_3;
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  dVar3 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  if (dVar3 < 0.0) {
    dVar3 = 0.0;
  }
  dVar5 = (double)NEON_fminnm(param_2,0x3ff0000000000000);
  if (dVar5 < 0.0) {
    dVar5 = 0.0;
  }
  func_0x000107c6099c(*puVar1,puVar1[1],dVar3,dVar5);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  dVar5 = *(double *)(unaff_x20 + _DAT_112ff85d0) * 3.0;
  dVar4 = ((double *)(unaff_x20 + _DAT_112ff85d0))[1] * 3.0;
  dVar6 = *(double *)(unaff_x20 + _DAT_112ff85d8) * 3.0;
  dVar3 = ((double *)(unaff_x20 + _DAT_112ff85d8))[1] * 3.0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff85f0) = 0;
  *(double *)(unaff_x20 + _DAT_112ff8618) = dVar5;
  *(double *)(unaff_x20 + _DAT_112ff85f8) = dVar4;
  *(double *)(unaff_x20 + _DAT_112ff8620) = (0.0 - (dVar5 + dVar5)) + dVar6;
  *(double *)(unaff_x20 + _DAT_112ff8600) = (0.0 - (dVar4 + dVar4)) + dVar3;
  *(double *)(unaff_x20 + _DAT_112ff8628) = (dVar5 + 1.0) - dVar6;
  *(double *)(unaff_x20 + _DAT_112ff8608) = (dVar4 + 1.0) - dVar3;
  return;
}



/* Entry: 103c1c870; end: 103c1c893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c1c870(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = _DAT_112ff85d8;
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ff85d8))[1];
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ff85d8);
  param_1[2] = unaff_x20;
  param_1[3] = lVar1;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_103c1d1ec;
  return auVar4;
}



/* Entry: 103c1c894; end: 103c1c8f3;  */

void FUN_103c1c894(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = (uint)param_1;
  puVar1 = (undefined8 *)(param_1[2] + param_1[3]);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  dVar3 = (double)NEON_fminnm(uVar5,0x3ff0000000000000);
  if (dVar3 < 0.0) {
    dVar3 = 0.0;
  }
  dVar4 = (double)NEON_fminnm(uVar6,0x3ff0000000000000);
  if (dVar4 < 0.0) {
    dVar4 = 0.0;
  }
  func_0x000107c6099c(*puVar1,puVar1[1],dVar3,dVar4);
  if ((uVar2 & 1) == 0) {
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    FUN_103c1d024();
  }
  return;
}



/* Entry: 103c1c8f4; end: 103c1c913; -[SCTAnimationTimingFunction duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c1c8f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff85e0);
}



/* Entry: 103c1c914; end: 103c1c9bb; -[SCTAnimationTimingFunction setDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1c914(double param_1,long param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (*(double *)(param_2 + _DAT_112ff85e0) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_112ff85e0) = param_1;
  return;
}



/* Entry: 103c1c9bc; end: 103c1ca3f; -[SCTAnimationTimingFunction mirrored] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c1c9bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff85e8;
  func_0x000107c61428(param_1 + _DAT_112ff85e8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103c1ca40; end: 103c1cadb; -[SCTAnimationTimingFunction setMirrored:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1ca40(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff85e8;
  func_0x000107c61428(param_1 + _DAT_112ff85e8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103c1cadc; end: 103c1cb1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c1cadc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff85e8;
  func_0x000107c61428(unaff_x20 + _DAT_112ff85e8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103c1cb1c;
  return auVar2;
}



/* Entry: 103c1cb1c; end: 103c1cb1f;  */

void FUN_103c1cb1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103c1cb20; end: 103c1cbab;  */

undefined8
FUN_103c1cb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  uVar1 = unaff_x20;
  FUN_103c1cbac();
  func_0x000107c610f8();
  FUN_103c1cc50(param_1,param_2,param_3,param_4,0x3ff0000000000000);
  uVar2 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,uVar2,0x71,7);
  return uVar1;
}



/* Entry: 103c1cbac; end: 103c1cbcb;  */

void FUN_103c1cbac(void)

{
  func_0x000107c61168(&PTR_PTR_112946d18);
  return;
}



/* Entry: 103c1cbcc; end: 103c1cc4f; -[SCTAnimationTimingFunction initWithControlPoint1:controlPoint2:] */

undefined8
FUN_103c1cbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  FUN_103c1cbac();
  func_0x000107c610f8();
  FUN_103c1cc50(param_1,param_2,param_3,param_4,0x3ff0000000000000);
  uVar2 = param_5;
  func_0x000107c614f0(param_5);
  func_0x000107c61464(param_5,uVar2,0x71,7);
  return uVar1;
}



/* Entry: 103c1cc50; end: 103c1cdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c1cc50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  *(undefined8 *)(unaff_x20 + _DAT_112ff8610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff85f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8618) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff85f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8620) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8628) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8608) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff85d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff85d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff85e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff85e8) = 0;
  FUN_103c1cbac();
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  auVar4 = NEON_fmov(0x3ff0000000000000,8);
  auVar5 = NEON_fminnm(auVar5,auVar4,8);
  lVar7 = -(ulong)(0.0 <= auVar5._0_8_);
  lVar8 = -(ulong)(0.0 <= auVar5._8_8_);
  pbVar2 = puVar3 + _DAT_112ff85d0;
  pbVar2[8] = (byte)lVar8 & auVar5[8];
  pbVar2[9] = (byte)((ulong)lVar8 >> 8) & auVar5[9];
  pbVar2[10] = (byte)((ulong)lVar8 >> 0x10) & auVar5[10];
  pbVar2[0xb] = (byte)((ulong)lVar8 >> 0x18) & auVar5[0xb];
  pbVar2[0xc] = (byte)((ulong)lVar8 >> 0x20) & auVar5[0xc];
  pbVar2[0xd] = (byte)((ulong)lVar8 >> 0x28) & auVar5[0xd];
  pbVar2[0xe] = (byte)((ulong)lVar8 >> 0x30) & auVar5[0xe];
  pbVar2[0xf] = (byte)((ulong)lVar8 >> 0x38) & auVar5[0xf];
  *pbVar2 = (byte)lVar7 & auVar5[0];
  pbVar2[1] = (byte)((ulong)lVar7 >> 8) & auVar5[1];
  pbVar2[2] = (byte)((ulong)lVar7 >> 0x10) & auVar5[2];
  pbVar2[3] = (byte)((ulong)lVar7 >> 0x18) & auVar5[3];
  pbVar2[4] = (byte)((ulong)lVar7 >> 0x20) & auVar5[4];
  pbVar2[5] = (byte)((ulong)lVar7 >> 0x28) & auVar5[5];
  pbVar2[6] = (byte)((ulong)lVar7 >> 0x30) & auVar5[6];
  pbVar2[7] = (byte)((ulong)lVar7 >> 0x38) & auVar5[7];
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  auVar4 = NEON_fminnm(auVar6,auVar4,8);
  lVar7 = -(ulong)(0.0 <= auVar4._0_8_);
  lVar8 = -(ulong)(0.0 <= auVar4._8_8_);
  pbVar2 = puVar3 + _DAT_112ff85d8;
  pbVar2[8] = (byte)lVar8 & auVar4[8];
  pbVar2[9] = (byte)((ulong)lVar8 >> 8) & auVar4[9];
  pbVar2[10] = (byte)((ulong)lVar8 >> 0x10) & auVar4[10];
  pbVar2[0xb] = (byte)((ulong)lVar8 >> 0x18) & auVar4[0xb];
  pbVar2[0xc] = (byte)((ulong)lVar8 >> 0x20) & auVar4[0xc];
  pbVar2[0xd] = (byte)((ulong)lVar8 >> 0x28) & auVar4[0xd];
  pbVar2[0xe] = (byte)((ulong)lVar8 >> 0x30) & auVar4[0xe];
  pbVar2[0xf] = (byte)((ulong)lVar8 >> 0x38) & auVar4[0xf];
  *pbVar2 = (byte)lVar7 & auVar4[0];
  pbVar2[1] = (byte)((ulong)lVar7 >> 8) & auVar4[1];
  pbVar2[2] = (byte)((ulong)lVar7 >> 0x10) & auVar4[2];
  pbVar2[3] = (byte)((ulong)lVar7 >> 0x18) & auVar4[3];
  pbVar2[4] = (byte)((ulong)lVar7 >> 0x20) & auVar4[4];
  pbVar2[5] = (byte)((ulong)lVar7 >> 0x28) & auVar4[5];
  pbVar2[6] = (byte)((ulong)lVar7 >> 0x30) & auVar4[6];
  pbVar2[7] = (byte)((ulong)lVar7 >> 0x38) & auVar4[7];
  FUN_103c1d024();
  lVar7 = _DAT_112ff85e8;
  if (param_5 < 0.0) {
    param_5 = 0.0;
  }
  if (*(double *)(puVar3 + _DAT_112ff85e0) != param_5) {
    *(double *)(puVar3 + _DAT_112ff85e0) = param_5;
  }
  func_0x000107c61428(puVar3 + _DAT_112ff85e8,auStack_78,1,0);
  puVar3[lVar7] = 0;
  return puVar3;
}



/* Entry: 103c1cdc8; end: 103c1ce5f; +[SCTAnimationTimingFunction timingFunctionWithControlPoint1:controlPoint2:] */

void FUN_103c1cdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c1cbac();
  uVar1 = param_5;
  func_0x000107c610f8();
  func_0x000107c610f8(param_5);
  FUN_103c1cc50(param_1,param_2,param_3,param_4,0x3ff0000000000000);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c61464(uVar1,uVar2,0x71,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 103c1ce60; end: 103c1ce73; +[SCTAnimationTimingFunction easeInOutTimingFunction] */

void FUN_103c1ce60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c1cbac();
  uVar1 = param_1;
  func_0x000107c610f8();
  func_0x000107c610f8(param_1);
  FUN_103c1cc50(0x3fdae147ae147ae1,0,0x3fe28f5c28f5c28f,0x3ff0000000000000,0x3ff0000000000000);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c61464(uVar1,uVar2,0x71,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103c1ce74; end: 103c1ce83; +[SCTAnimationTimingFunction easeInTimingFunction] */

void FUN_103c1ce74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c1cbac();
  uVar1 = param_1;
  func_0x000107c610f8();
  func_0x000107c610f8(param_1);
  FUN_103c1cc50(0x3fdae147ae147ae1,0,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c61464(uVar1,uVar2,0x71,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103c1ce84; end: 103c1ce93; +[SCTAnimationTimingFunction easeOutTimingFunction] */

void FUN_103c1ce84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c1cbac();
  uVar1 = param_1;
  func_0x000107c610f8();
  func_0x000107c610f8(param_1);
  FUN_103c1cc50(0,0,0x3fe28f5c28f5c28f,0x3ff0000000000000,0x3ff0000000000000);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c61464(uVar1,uVar2,0x71,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103c1ce94; end: 103c1ce9f; +[SCTAnimationTimingFunction linearTimingFunction] */

void FUN_103c1ce94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c1cbac();
  uVar1 = param_1;
  func_0x000107c610f8();
  func_0x000107c610f8(param_1);
  FUN_103c1cc50(0,0,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c61464(uVar1,uVar2,0x71,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103c1cea0; end: 103c1cf27;  */

void FUN_103c1cea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c1cbac();
  uVar1 = param_3;
  func_0x000107c610f8();
  func_0x000107c610f8(param_3);
  FUN_103c1cc50(param_1,0,param_2,0x3ff0000000000000,0x3ff0000000000000);
  uVar2 = uVar1;
  func_0x000107c614f0(uVar1);
  func_0x000107c61464(uVar1,uVar2,0x71,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c1cf28; end: 103c1d003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103c1cf28(double param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ff85e8;
  dVar3 = *(double *)(unaff_x20 + _DAT_112ff85e0);
  func_0x000107c61428(unaff_x20 + _DAT_112ff85e8,auStack_58,0,0);
  cVar1 = *(char *)(unaff_x20 + lVar2);
  dVar4 = 1.0 - param_1;
  if (cVar1 == '\0') {
    dVar4 = param_1;
  }
  func_0x000103c1d0ec(dVar4,1.0 / (dVar3 * 200.0));
  dVar3 = *(double *)(unaff_x20 + _DAT_112ff85f0) +
          dVar4 * (*(double *)(unaff_x20 + _DAT_112ff85f8) +
                  dVar4 * (*(double *)(unaff_x20 + _DAT_112ff8600) +
                          dVar4 * *(double *)(unaff_x20 + _DAT_112ff8608)));
  dVar4 = 1.0 - dVar3;
  if (cVar1 == '\0') {
    dVar4 = dVar3;
  }
  return dVar4;
}



/* Entry: 103c1d004; end: 103c1d023; -[SCTAnimationTimingFunction valueForX:] */

void FUN_103c1d004(void)

{
  FUN_103c1cf28();
  return;
}



/* Entry: 103c1d024; end: 103c1d18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1d024(void)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *(double *)(unaff_x20 + _DAT_112ff85d0) * 3.0;
  dVar3 = ((double *)(unaff_x20 + _DAT_112ff85d0))[1] * 3.0;
  dVar4 = *(double *)(unaff_x20 + _DAT_112ff85d8) * 3.0;
  dVar1 = ((double *)(unaff_x20 + _DAT_112ff85d8))[1] * 3.0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff85f0) = 0;
  *(double *)(unaff_x20 + _DAT_112ff8618) = dVar2;
  *(double *)(unaff_x20 + _DAT_112ff85f8) = dVar3;
  *(double *)(unaff_x20 + _DAT_112ff8620) = (0.0 - (dVar2 + dVar2)) + dVar4;
  *(double *)(unaff_x20 + _DAT_112ff8600) = (0.0 - (dVar3 + dVar3)) + dVar1;
  *(double *)(unaff_x20 + _DAT_112ff8628) = (dVar2 + 1.0) - dVar4;
  *(double *)(unaff_x20 + _DAT_112ff8608) = (dVar3 + 1.0) - dVar1;
  return;
}



/* Entry: 103c1d190; end: 103c1d1eb; -[SCTAnimationTimingFunction init] */

void FUN_103c1d190(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTAnimation.SCTAnimationTimingFunction",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1d1bc);
  (*pcVar1)();
}



/* Entry: 103c1d1ec; end: 103c1d1ef;  */

void FUN_103c1d1ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = (uint)param_1;
  puVar1 = (undefined8 *)(param_1[2] + param_1[3]);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  dVar3 = (double)NEON_fminnm(uVar5,0x3ff0000000000000);
  if (dVar3 < 0.0) {
    dVar3 = 0.0;
  }
  dVar4 = (double)NEON_fminnm(uVar6,0x3ff0000000000000);
  if (dVar4 < 0.0) {
    dVar4 = 0.0;
  }
  func_0x000107c6099c(*puVar1,puVar1[1],dVar3,dVar4);
  if ((uVar2 & 1) == 0) {
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    FUN_103c1d024();
  }
  return;
}



/* Entry: 103c1d1f0; end: 103c1d247;  */

void FUN_103c1d1f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010f1afc80,
                      "SCTAnimation/SCTValueAnimation.swift",0x24,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1d248);
  (*pcVar1)();
}



/* Entry: 103c1d248; end: 103c1d29f; -[SCTFloatAnimation initWithCurve:fromInterval:toInterval:completion:] */

void FUN_103c1d248(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010f1afc80,
                      "SCTAnimation/SCTValueAnimation.swift",0x24,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1d2a0);
  (*pcVar1)();
}



/* Entry: 103c1d2a0; end: 103c1d52f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1d2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8658) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8660) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8668);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  if (param_5 < 3) {
    if (param_5 == 0) {
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0x3fdae147ae147ae1;
    }
    else {
      if (param_5 == 1) {
        uVar3 = 0;
        FUN_103c1cbac();
        uVar4 = uVar3;
        func_0x000107c610f8();
        func_0x000107c610f8();
        uVar5 = 0x3fdae147ae147ae1;
        goto LAB_103c1d458;
      }
      if (param_5 != 2) {
LAB_103c1d50c:
        lStack_68 = param_5;
        func_0x000107c60614(&UNK_1106eae28,&lStack_68,&UNK_1106eae28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1d530);
        (*pcVar2)();
      }
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0;
    }
    uVar7 = 0x3fe28f5c28f5c28f;
  }
  else {
    if (param_5 == 3) {
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0;
    }
    else {
      if (param_5 == 4) {
        uVar3 = 0;
        FUN_103c1cbac();
        uVar4 = uVar3;
        func_0x000107c610f8();
        func_0x000107c610f8();
        uVar5 = 0x3fd51eb851eb851f;
        uVar7 = 0;
        uVar6 = uVar5;
        goto LAB_103c1d468;
      }
      if (param_5 != 5) goto LAB_103c1d50c;
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0x3fc47ae147ae147b;
    }
LAB_103c1d458:
    uVar7 = 0x3ff0000000000000;
  }
  uVar6 = 0;
LAB_103c1d468:
  FUN_103c1cc50(uVar5,uVar6,uVar7,0x3ff0000000000000,0x3ff0000000000000);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  func_0x000107c61464(uVar4,uVar5,0x71,7);
  *(undefined8 *)(unaff_x20 + _DAT_112ff8530) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8538) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8540) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8548);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  uVar4 = 0;
  FUN_103c1c3e8();
  uStack_70 = uVar4;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c1d530; end: 103c1d62b; -[SCTFloatAnimation initWithCurve:fromInterval:toInterval:fromValue:toValue:callback:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1d530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb648;
  func_0x000107c613fc(&UNK_1106eb648,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  if (param_9 == 0) {
    uVar3 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1106eb670;
    func_0x000107c613fc(&UNK_1106eb670,0x18,7);
    *(long *)(puVar4 + 0x10) = param_9;
    uVar3 = 0x103c211b4;
  }
  *(undefined8 *)(param_5 + _DAT_112ff8658) = param_3;
  *(undefined8 *)(param_5 + _DAT_112ff8660) = param_4;
  puVar1 = (undefined8 *)(param_5 + _DAT_112ff8668);
  *puVar1 = 0x103c2117c;
  puVar1[1] = puVar2;
  func_0x000103c1ab94(param_1,param_2,param_7,uVar3,puVar4);
  return;
}



/* Entry: 103c1d62c; end: 103c1d6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1d62c(double param_1)

{
  long unaff_x20;
  double dVar1;
  
  dVar1 = (param_1 - *(double *)(unaff_x20 + _DAT_112ff8538)) /
          (*(double *)(unaff_x20 + _DAT_112ff8540) - *(double *)(unaff_x20 + _DAT_112ff8538));
  FUN_103c1cf28(dVar1);
  (**(code **)(unaff_x20 + _DAT_112ff8668))
            (*(double *)(unaff_x20 + _DAT_112ff8658) +
             dVar1 * (*(double *)(unaff_x20 + _DAT_112ff8660) -
                     *(double *)(unaff_x20 + _DAT_112ff8658)));
  return;
}



/* Entry: 103c1d6bc; end: 103c1d6f3; -[SCTFloatAnimation updateForInterval:] */

void FUN_103c1d6bc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103c1d62c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103c1d6f4; end: 103c1d713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1d6f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112ff8668 + 8));
  return;
}



/* Entry: 103c1d714; end: 103c1d733;  */

void FUN_103c1d714(void)

{
  func_0x000107c61168(&PTR_PTR_112946fc0);
  return;
}



/* Entry: 103c1d734; end: 103c1d747; -[SCTFloatAnimation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1d734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff8668 + 8));
  return;
}



/* Entry: 103c1d748; end: 103c1d79f;  */

void FUN_103c1d748(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010f1afc80,
                      "SCTAnimation/SCTValueAnimation.swift",0x24,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1d7a0);
  (*pcVar1)();
}



/* Entry: 103c1d7a0; end: 103c1d7f7; -[SCTSizeAnimation initWithCurve:fromInterval:toInterval:completion:] */

void FUN_103c1d7a0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010f1afc80,
                      "SCTAnimation/SCTValueAnimation.swift",0x24,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1d7f8);
  (*pcVar1)();
}



/* Entry: 103c1d7f8; end: 103c1da9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1d7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8670);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8678);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8680);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  if (param_7 < 3) {
    if (param_7 == 0) {
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0x3fdae147ae147ae1;
    }
    else {
      if (param_7 == 1) {
        uVar3 = 0;
        FUN_103c1cbac();
        uVar4 = uVar3;
        func_0x000107c610f8();
        func_0x000107c610f8();
        uVar5 = 0x3fdae147ae147ae1;
        goto LAB_103c1d9c4;
      }
      if (param_7 != 2) {
LAB_103c1da7c:
        lStack_78 = param_7;
        func_0x000107c60614(&UNK_1106eae28,&lStack_78,&UNK_1106eae28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1daa0);
        (*pcVar2)();
      }
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0;
    }
    uVar7 = 0x3fe28f5c28f5c28f;
  }
  else {
    if (param_7 == 3) {
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0;
    }
    else {
      if (param_7 == 4) {
        uVar3 = 0;
        FUN_103c1cbac();
        uVar4 = uVar3;
        func_0x000107c610f8();
        func_0x000107c610f8();
        uVar5 = 0x3fd51eb851eb851f;
        uVar7 = 0;
        uVar6 = uVar5;
        goto LAB_103c1d9d4;
      }
      if (param_7 != 5) goto LAB_103c1da7c;
      uVar3 = 0;
      FUN_103c1cbac();
      uVar4 = uVar3;
      func_0x000107c610f8();
      func_0x000107c610f8();
      uVar5 = 0x3fc47ae147ae147b;
    }
LAB_103c1d9c4:
    uVar7 = 0x3ff0000000000000;
  }
  uVar6 = 0;
LAB_103c1d9d4:
  FUN_103c1cc50(uVar5,uVar6,uVar7,0x3ff0000000000000,0x3ff0000000000000);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  func_0x000107c61464(uVar4,uVar5,0x71,7);
  *(undefined8 *)(unaff_x20 + _DAT_112ff8530) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8538) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8540) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8548);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  uVar4 = 0;
  FUN_103c1c3e8();
  uStack_80 = uVar4;
  func_0x000107c61154(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c1daa0; end: 103c1dbb3; -[SCTSizeAnimation initWithCurve:fromInterval:toInterval:fromValue:toValue:callback:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1daa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb5f8;
  func_0x000107c613fc(&UNK_1106eb5f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_10;
  if (param_11 == 0) {
    uVar3 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1106eb620;
    func_0x000107c613fc(&UNK_1106eb620,0x18,7);
    *(long *)(puVar4 + 0x10) = param_11;
    uVar3 = 0x103c211b0;
  }
  puVar1 = (undefined8 *)(param_7 + _DAT_112ff8670);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_7 + _DAT_112ff8678);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(param_7 + _DAT_112ff8680);
  *puVar1 = 0x103c2118c;
  puVar1[1] = puVar2;
  func_0x000103c1ab94(param_1,param_2,param_9,uVar3,puVar4);
  return;
}



/* Entry: 103c1dbb4; end: 103c1dc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1dbb4(double param_1)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1 - *(double *)(unaff_x20 + _DAT_112ff8538)) /
          (*(double *)(unaff_x20 + _DAT_112ff8540) - *(double *)(unaff_x20 + _DAT_112ff8538));
  FUN_103c1cf28(dVar1);
  dVar2 = *(double *)(unaff_x20 + _DAT_112ff8670);
  dVar3 = ((double *)(unaff_x20 + _DAT_112ff8670))[1];
  (**(code **)(unaff_x20 + _DAT_112ff8680))
            (dVar2 + dVar1 * (*(double *)(unaff_x20 + _DAT_112ff8678) - dVar2),
             dVar3 + dVar1 * (((double *)(unaff_x20 + _DAT_112ff8678))[1] - dVar3));
  return;
}



/* Entry: 103c1dc5c; end: 103c1dc93; -[SCTSizeAnimation updateForInterval:] */

void FUN_103c1dc5c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103c1dbb4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


