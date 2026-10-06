/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e30410; end: 107e3050b; -[SCSpectaclesOnboardingPageViewModel hash] */

undefined8 * FUN_107e30410(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar4;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_107e30680:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e3068c;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (*(long *)((long)puVar5 + 8) == *(long *)(param_3 + 8))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x30) - *(double *)(param_3 + 0x30));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x30) + *(double *)(param_3 + 0x30)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x38) - *(double *)(param_3 + 0x38));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x38) + *(double *)(param_3 + 0x38)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x40) - *(double *)(param_3 + 0x40));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x40) + *(double *)(param_3 + 0x40)) *
                   2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if ((((bVar2) &&
               ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             (((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))) {
            puVar9 = *(undefined1 **)((long)puVar5 + 0x48);
            if (puVar9 != *(undefined1 **)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_107e3068c;
            }
            goto LAB_107e30680;
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_107e3068c:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 107e3050c; end: 107e306a7; -[SCSpectaclesOnboardingPageViewModel isEqual:] */

long FUN_107e3050c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e30680:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e3068c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
        dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
          dVar5 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if ((((bVar1) &&
               ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             (((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
            lVar4 = *(long *)(param_1 + 0x48);
            if (lVar4 != *(long *)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_107e3068c;
            }
            goto LAB_107e30680;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_107e3068c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107e306a8; end: 107e306af; -[SCSpectaclesOnboardingPageViewModel pageType] */

undefined8 FUN_107e306a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e306b0; end: 107e306b7; -[SCSpectaclesOnboardingPageViewModel primaryText] */

undefined8 FUN_107e306b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e306b8; end: 107e306bf; -[SCSpectaclesOnboardingPageViewModel secondaryText] */

undefined8 FUN_107e306b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e306c0; end: 107e306c7; -[SCSpectaclesOnboardingPageViewModel secondaryAttributedText] */

undefined8 FUN_107e306c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e306c8; end: 107e306cf; -[SCSpectaclesOnboardingPageViewModel accessibilityIdentifier] */

undefined8 FUN_107e306c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e306d0; end: 107e306d7; -[SCSpectaclesOnboardingPageViewModel minTime] */

undefined8 FUN_107e306d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e306d8; end: 107e306df; -[SCSpectaclesOnboardingPageViewModel startTime] */

undefined8 FUN_107e306d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e306e0; end: 107e306e7; -[SCSpectaclesOnboardingPageViewModel endTime] */

undefined8 FUN_107e306e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107e306e8; end: 107e306ef; -[SCSpectaclesOnboardingPageViewModel videoObjectFuture] */

undefined8 FUN_107e306e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107e306f0; end: 107e30743; -[SCSpectaclesOnboardingPageViewModel .cxx_destruct] */

void FUN_107e306f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e30744; end: 107e309df; -[SCSpectaclesOnboardingThemeViewModel initWithIsNewportTheme:controllerBackgroundColor:descriptionLabelsTextColor:primaryTextFont:secondaryTextFont:doneButtonBorderColor:doneButtonBackgroundColor:doneButtonTitleColor:doneButtonTitleFont:learnMoreButtonBorderColor:learnMoreButtonBackgroundColor:learnMoreButtonTitleColor:learnMoreButtonTitleFont:] */

undefined8 *
FUN_107e30744(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain();
  puStack_68 = PTR_PTR_1126fb4c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107e309e0; end: 107e30a03; -[SCSpectaclesOnboardingThemeViewModel copyWithZone:] */

undefined8 FUN_107e309e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e30a04; end: 107e30a0b; -[SCSpectaclesOnboardingThemeViewModel isNewportTheme] */

undefined1 FUN_107e30a04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e30a0c; end: 107e30a13; -[SCSpectaclesOnboardingThemeViewModel controllerBackgroundColor] */

undefined8 FUN_107e30a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e30a14; end: 107e30a1b; -[SCSpectaclesOnboardingThemeViewModel descriptionLabelsTextColor] */

undefined8 FUN_107e30a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e30a1c; end: 107e30a23; -[SCSpectaclesOnboardingThemeViewModel primaryTextFont] */

undefined8 FUN_107e30a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e30a24; end: 107e30a2b; -[SCSpectaclesOnboardingThemeViewModel secondaryTextFont] */

undefined8 FUN_107e30a24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e30a2c; end: 107e30a33; -[SCSpectaclesOnboardingThemeViewModel doneButtonBorderColor] */

undefined8 FUN_107e30a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e30a34; end: 107e30a3b; -[SCSpectaclesOnboardingThemeViewModel doneButtonBackgroundColor] */

undefined8 FUN_107e30a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e30a3c; end: 107e30a43; -[SCSpectaclesOnboardingThemeViewModel doneButtonTitleColor] */

undefined8 FUN_107e30a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107e30a44; end: 107e30a4b; -[SCSpectaclesOnboardingThemeViewModel doneButtonTitleFont] */

undefined8 FUN_107e30a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107e30a4c; end: 107e30a53; -[SCSpectaclesOnboardingThemeViewModel learnMoreButtonBorderColor] */

undefined8 FUN_107e30a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107e30a54; end: 107e30a5b; -[SCSpectaclesOnboardingThemeViewModel learnMoreButtonBackgroundColor] */

undefined8 FUN_107e30a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107e30a5c; end: 107e30a63; -[SCSpectaclesOnboardingThemeViewModel learnMoreButtonTitleColor] */

undefined8 FUN_107e30a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107e30a64; end: 107e30a6b; -[SCSpectaclesOnboardingThemeViewModel learnMoreButtonTitleFont] */

undefined8 FUN_107e30a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107e30a6c; end: 107e30b13; -[SCSpectaclesOnboardingThemeViewModel .cxx_destruct] */

void FUN_107e30a6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e30b14; end: 107e30bd3; -[SCSpectaclesOnboardingFlow initWithType:videoPlaybackMode:pages:theme:] */

undefined1 *
FUN_107e30b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fb4c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107e30bd4; end: 107e30bdb; -[SCSpectaclesOnboardingFlow type] */

undefined8 FUN_107e30bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e30bdc; end: 107e30be3; -[SCSpectaclesOnboardingFlow videoPlaybackMode] */

undefined8 FUN_107e30bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e30be4; end: 107e30beb; -[SCSpectaclesOnboardingFlow pages] */

undefined8 FUN_107e30be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e30bec; end: 107e30bf3; -[SCSpectaclesOnboardingFlow theme] */

undefined8 FUN_107e30bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e30bf4; end: 107e30c23; -[SCSpectaclesOnboardingFlow .cxx_destruct] */

void FUN_107e30bf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107e30c24; end: 107e30da7; -[SCSpectaclesConnectionInfo initWithSessionId:transferChannel:wifiConnectionStatus:deviceId:firmwareVersion:hardwareVersion:deviceColor:isCharging:deviceBattery:deviceStorage:socTemperature:nordicTemperature:coulombCtrlTemperature:wifiTemperature:temperatureReportUtc:] */

undefined8 *
FUN_107e30c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fb4d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_10;
    puVar1[8] = param_9;
    puVar1[9] = param_12;
    puVar1[10] = param_13;
    puVar1[0xb] = param_14;
    puVar1[0xc] = param_15;
    puVar1[0xd] = param_16;
    puVar1[0xe] = param_17;
    puVar1[0xf] = param_18;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107e30da8; end: 107e30dcb; -[SCSpectaclesConnectionInfo copyWithZone:] */

undefined8 FUN_107e30da8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e30dcc; end: 107e30eab; -[SCSpectaclesConnectionInfo hash] */

undefined8 * FUN_107e30dcc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  lStack_98 = -lVar5;
  if (-1 < lVar5) {
    lStack_98 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  lVar5 = *(long *)(param_1 + 0x78);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_78 = uVar2;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107e3100c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e31018;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(char *)((long)puVar3 + 8) == param_3[8] &&
           (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))) &&
       (((*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58) &&
         (*(long *)((long)puVar3 + 0x60) == *(long *)(param_3 + 0x60))) &&
        ((*(long *)((long)puVar3 + 0x68) == *(long *)(param_3 + 0x68) &&
         ((*(long *)((long)puVar3 + 0x70) == *(long *)(param_3 + 0x70) &&
          (*(long *)((long)puVar3 + 0x78) == *(long *)(param_3 + 0x78))))))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
            if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_107e31018;
            }
            goto LAB_107e3100c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107e31018:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107e30eac; end: 107e31033; -[SCSpectaclesConnectionInfo isEqual:] */

long FUN_107e30eac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e3100c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e31018;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
       (((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
         (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) &&
        ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
         ((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
          (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_107e31018;
            }
            goto LAB_107e3100c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107e31018:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e31034; end: 107e3103b; -[SCSpectaclesConnectionInfo sessionId] */

undefined8 FUN_107e31034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e3103c; end: 107e31043; -[SCSpectaclesConnectionInfo transferChannel] */

undefined8 FUN_107e3103c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e31044; end: 107e3104b; -[SCSpectaclesConnectionInfo wifiConnectionStatus] */

undefined8 FUN_107e31044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e3104c; end: 107e31053; -[SCSpectaclesConnectionInfo deviceId] */

undefined8 FUN_107e3104c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e31054; end: 107e3105b; -[SCSpectaclesConnectionInfo firmwareVersion] */

undefined8 FUN_107e31054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e3105c; end: 107e31063; -[SCSpectaclesConnectionInfo hardwareVersion] */

undefined8 FUN_107e3105c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e31064; end: 107e3106b; -[SCSpectaclesConnectionInfo deviceColor] */

undefined8 FUN_107e31064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107e3106c; end: 107e31073; -[SCSpectaclesConnectionInfo isCharging] */

undefined1 FUN_107e3106c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e31074; end: 107e3107b; -[SCSpectaclesConnectionInfo deviceBattery] */

undefined8 FUN_107e31074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107e3107c; end: 107e31083; -[SCSpectaclesConnectionInfo deviceStorage] */

undefined8 FUN_107e3107c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107e31084; end: 107e3108b; -[SCSpectaclesConnectionInfo socTemperature] */

undefined8 FUN_107e31084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107e3108c; end: 107e31093; -[SCSpectaclesConnectionInfo nordicTemperature] */

undefined8 FUN_107e3108c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107e31094; end: 107e3109b; -[SCSpectaclesConnectionInfo coulombCtrlTemperature] */

undefined8 FUN_107e31094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107e3109c; end: 107e310a3; -[SCSpectaclesConnectionInfo wifiTemperature] */

undefined8 FUN_107e3109c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107e310a4; end: 107e310ab; -[SCSpectaclesConnectionInfo temperatureReportUtc] */

undefined8 FUN_107e310a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107e310ac; end: 107e310f3; -[SCSpectaclesConnectionInfo .cxx_destruct] */

void FUN_107e310ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e310f4; end: 107e31253; -[SCSpectaclesOnboardingSessionInfo initWithOnboardingSource:page:sessionDurationSec:deviceId:firmwareVersion:hardwareVersion:deviceColor:pairingSessionId:pairingStartTime:] */

undefined1 *
FUN_107e310f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126fb4d8;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 107e31254; end: 107e3125b; -[SCSpectaclesOnboardingSessionInfo onboardingSource] */

undefined8 FUN_107e31254(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e3125c; end: 107e31263; -[SCSpectaclesOnboardingSessionInfo page] */

undefined8 FUN_107e3125c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e31264; end: 107e3126b; -[SCSpectaclesOnboardingSessionInfo sessionDurationSec] */

undefined8 FUN_107e31264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e3126c; end: 107e31273; -[SCSpectaclesOnboardingSessionInfo deviceId] */

undefined8 FUN_107e3126c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e31274; end: 107e3127b; -[SCSpectaclesOnboardingSessionInfo firmwareVersion] */

undefined8 FUN_107e31274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e3127c; end: 107e31283; -[SCSpectaclesOnboardingSessionInfo hardwareVersion] */

undefined8 FUN_107e3127c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e31284; end: 107e3128b; -[SCSpectaclesOnboardingSessionInfo deviceColor] */

undefined8 FUN_107e31284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e3128c; end: 107e31293; -[SCSpectaclesOnboardingSessionInfo pairingSessionId] */

undefined8 FUN_107e3128c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107e31294; end: 107e3129b; -[SCSpectaclesOnboardingSessionInfo pairingStartTime] */

undefined8 FUN_107e31294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107e3129c; end: 107e312ef; -[SCSpectaclesOnboardingSessionInfo .cxx_destruct] */

void FUN_107e3129c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107e312f0; end: 107e31447; -[SCSpectaclesPairingSessionInfo initWithPairingSessionId:pairingSource:retryCount:numOtherPairedSpecs:sessionDurationSec:hardwareVersion:firmwareVersion:deviceId:deviceColor:bleState:btcState:] */

undefined8 *
FUN_107e312f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126fb4e0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    puVar1[4] = param_7;
    puVar1[5] = param_1;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    puVar1[9] = param_11;
    puVar1[10] = param_12;
    puVar1[0xb] = param_13;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107e31448; end: 107e3146b; -[SCSpectaclesPairingSessionInfo copyWithZone:] */

undefined8 FUN_107e31448(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e3146c; end: 107e3153f; -[SCSpectaclesPairingSessionInfo hash] */

undefined8 * FUN_107e3146c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x48);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107e31688:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e31694;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
           (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
          (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
         ((*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
       (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x28) - *(double *)(param_3 + 0x28));
      if ((((dVar8 < 2.2250738585072014e-308) ||
           (dVar8 < ABS(*(double *)((long)puVar3 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16)) &&
          ((lVar6 = *(long *)((long)puVar3 + 8), lVar6 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = *(long *)((long)puVar3 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar3 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0x40);
        if (puVar7 != *(undefined1 **)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_107e31694;
        }
        goto LAB_107e31688;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_107e31694:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 107e31540; end: 107e316af; -[SCSpectaclesPairingSessionInfo isEqual:] */

long FUN_107e31540(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e31688:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e31694;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
           (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
       (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) {
      dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      if ((((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16)) &&
          ((lVar3 = *(long *)(param_1 + 8), lVar3 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         (((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x40);
        if (lVar3 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_107e31694;
        }
        goto LAB_107e31688;
      }
    }
    lVar3 = 0;
  }
LAB_107e31694:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e316b0; end: 107e316b7; -[SCSpectaclesPairingSessionInfo pairingSessionId] */

undefined8 FUN_107e316b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e316b8; end: 107e316bf; -[SCSpectaclesPairingSessionInfo pairingSource] */

undefined8 FUN_107e316b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e316c0; end: 107e316c7; -[SCSpectaclesPairingSessionInfo retryCount] */

undefined8 FUN_107e316c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e316c8; end: 107e316cf; -[SCSpectaclesPairingSessionInfo numOtherPairedSpecs] */

undefined8 FUN_107e316c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e316d0; end: 107e316d7; -[SCSpectaclesPairingSessionInfo sessionDurationSec] */

undefined8 FUN_107e316d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e316d8; end: 107e316df; -[SCSpectaclesPairingSessionInfo hardwareVersion] */

undefined8 FUN_107e316d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e316e0; end: 107e316e7; -[SCSpectaclesPairingSessionInfo firmwareVersion] */

undefined8 FUN_107e316e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e316e8; end: 107e316ef; -[SCSpectaclesPairingSessionInfo deviceId] */

undefined8 FUN_107e316e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107e316f0; end: 107e316f7; -[SCSpectaclesPairingSessionInfo deviceColor] */

undefined8 FUN_107e316f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107e316f8; end: 107e316ff; -[SCSpectaclesPairingSessionInfo bleState] */

undefined8 FUN_107e316f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107e31700; end: 107e31707; -[SCSpectaclesPairingSessionInfo btcState] */

undefined8 FUN_107e31700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107e31708; end: 107e3174f; -[SCSpectaclesPairingSessionInfo .cxx_destruct] */

void FUN_107e31708(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e31750; end: 107e3188b; -[SCSpectaclesTransferEventAnalyticsInfo initWithCoder:] */

undefined1 * FUN_107e31750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb4e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e3188c; end: 107e319b3; -[SCSpectaclesTransferEventAnalyticsInfo initWithType:channel:sessionId:deviceId:firmwareVersion:hardwareVersion:deviceColor:] */

undefined1 *
FUN_107e3188c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb4e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107e319b4; end: 107e319d7; -[SCSpectaclesTransferEventAnalyticsInfo copyWithZone:] */

undefined8 FUN_107e319b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e319d8; end: 107e31a9b; -[SCSpectaclesTransferEventAnalyticsInfo encodeWithCoder:] */

void FUN_107e319d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e2dc78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ebffd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ebfff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec0018);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ec0038);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ec0058);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ec0078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e31a9c; end: 107e31b43; -[SCSpectaclesTransferEventAnalyticsInfo hash] */

undefined8 * FUN_107e31a9c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107e31c24:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e31c30;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
            if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_107e31c30;
            }
            goto LAB_107e31c24;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107e31c30:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107e31b44; end: 107e31c4b; -[SCSpectaclesTransferEventAnalyticsInfo isEqual:] */

long FUN_107e31b44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e31c24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e31c30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_107e31c30;
            }
            goto LAB_107e31c24;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107e31c30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e31c4c; end: 107e31c53; -[SCSpectaclesTransferEventAnalyticsInfo type] */

undefined8 FUN_107e31c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e31c54; end: 107e31c5b; -[SCSpectaclesTransferEventAnalyticsInfo channel] */

undefined8 FUN_107e31c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e31c5c; end: 107e31c63; -[SCSpectaclesTransferEventAnalyticsInfo sessionId] */

undefined8 FUN_107e31c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e31c64; end: 107e31c6b; -[SCSpectaclesTransferEventAnalyticsInfo deviceId] */

undefined8 FUN_107e31c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e31c6c; end: 107e31c73; -[SCSpectaclesTransferEventAnalyticsInfo firmwareVersion] */

undefined8 FUN_107e31c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e31c74; end: 107e31c7b; -[SCSpectaclesTransferEventAnalyticsInfo hardwareVersion] */

undefined8 FUN_107e31c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e31c7c; end: 107e31c83; -[SCSpectaclesTransferEventAnalyticsInfo deviceColor] */

undefined8 FUN_107e31c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e31c84; end: 107e31ccb; -[SCSpectaclesTransferEventAnalyticsInfo .cxx_destruct] */

void FUN_107e31c84(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107e31ccc; end: 107e31e17; -[SCMemoriesSnapVideoFilterScope initWithMediaSource:destinationInfo:snapDoc:transcodeSnapInfo:respectSnapOrientation:isExporting:completionQueue:completion:] */

undefined1 *
FUN_107e31ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fb4f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e31e18; end: 107e31f83; -[SCMemoriesSnapVideoFilterScope initWithSnapVideoFilter:snapDoc:transcodeSnapInfo:watermarkProfile:respectSnapOrientation:isExporting:completionQueue:completion:] */

undefined1 *
FUN_107e31e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fb4f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e31f84; end: 107e3211b; -[SCMemoriesSnapVideoFilterScope initWithMediaSource:destinationInfo:snap:cloudFile:respectSnapOrientation:isExporting:captureSessionId:completionQueue:completion:] */

undefined1 *
FUN_107e31f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126fb4f0;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c2a5040();
    uVar3 = param_5;
    func_0x00010bfe0640();
    *(double *)((long)puVar1 + 0x78) = (double)(int)uVar2;
    *(double *)((long)puVar1 + 0x80) = (double)(int)uVar3;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e3211c; end: 107e3227f; -[SCMemoriesSnapVideoFilterScope initWithSnapVideoFilter:snap:cloudFile:respectSnapOrientation:isExporting:completionQueue:completion:] */

undefined1 *
FUN_107e3211c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fb4f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_4;
    func_0x00010c2a5040();
    uVar3 = param_4;
    func_0x00010bfe0640();
    *(double *)((long)puVar1 + 0x78) = (double)(int)uVar2;
    *(double *)((long)puVar1 + 0x80) = (double)(int)uVar3;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e32280; end: 107e323f3; -[SCMemoriesSnapVideoFilterScope initWithMediaSource:destinationInfo:snap:cloudFile:respectSnapOrientation:isExporting:videoTargetSize:spectaclesExportFormat:primaryCamera:completionQueue:completion:] */

undefined8 *
FUN_107e32280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_78 = PTR_PTR_1126fb4f0;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_10;
    puVar1[0xf] = param_1;
    puVar1[0x10] = param_2;
    puVar1[6] = param_11;
    puVar1[7] = param_12;
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}


