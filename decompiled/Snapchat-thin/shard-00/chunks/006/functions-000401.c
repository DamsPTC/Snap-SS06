/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10085a230; end: 10085a29f; -[SCFeatureMemoriesSideButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085a230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762aac);
  func_0x000107c61174(param_3);
  func_0x000107c401b8(uVar1);
  func_0x000107c611a0(param_1 + _DAT_112762ab4,param_3);
  func_0x000107c61170(param_3);
  *(undefined1 *)(param_1 + _DAT_112762ab8) = 1;
  return;
}



/* Entry: 10085a2a0; end: 10085a6ef; -[SCMemoriesSideButtonInLeftCarouselHandler configureWithView:] */

long FUN_10085a2a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c5ada0();
  puVar2 = PTR_PTR_1126d4160;
  func_0x000107c610f4();
  lVar3 = param_1 + 0x20;
  func_0x000107c61148(lVar3);
  uVar13 = 1;
  func_0x000107c464a4(puVar2,param_2,lVar3,1,*(undefined8 *)(param_1 + 0x50),0,lVar1,
                      *(undefined8 *)(param_1 + 0x80));
  uVar11 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar3);
  puVar2 = PTR_PTR_1126d4168;
  func_0x000107c610f4();
  dVar14 = 50.0;
  dVar15 = 42.0;
  uVar7 = 0x4049000000000000;
  uVar12 = 0x4045000000000000;
  func_0x000107c47740(0x4049000000000000,0x4049000000000000,0x4045000000000000,0x4045000000000000);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  func_0x000107c61170(uVar11);
  func_0x000107c54d54(param_3,param_2,*(undefined8 *)(param_1 + 8),1);
  lVar3 = param_3;
  func_0x000107c44dd8(param_3);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(lVar3);
  func_0x000107c5a050(*(undefined8 *)(param_1 + 0x10),param_2,0);
  *(undefined8 *)(param_1 + 0x70) = 0x4053000000000000;
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c49edc();
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar11 = uVar6;
      func_0x000107c49ed8();
      uVar13 = (uint)uVar11 ^ 1;
      func_0x000107c61170(uVar6);
    }
    else {
      uVar13 = 0;
    }
    func_0x000107c61170(uVar4);
  }
  if ((int)lVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = uVar6;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar6);
    if (((uint)uVar11 & uVar13) == 1) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61180();
      func_0x000107c51724();
      func_0x000107c61170(puVar2);
      func_0x000107c609bc(dVar14,uVar7,dVar15,uVar12);
      lVar3 = param_3;
      func_0x000107c3f250(param_3);
      func_0x000107c61180();
      func_0x000107c3ebfc();
      func_0x000107c61170(lVar3);
      *(double *)(param_1 + 0x70) = dVar14 - (dVar14 - dVar15 * 0.5) * 0.5;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c3f250(param_3);
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar11 = uVar7;
  func_0x000107c40284(-*(double *)(param_1 + 0x70),uVar7,param_2,lVar1);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uStack_a8 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c3f250();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar7 = uVar11;
  func_0x000107c40280(uVar11,param_2,lVar1);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uStack_a0 = uVar7;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar12 = uVar8;
  func_0x000107c40290(0x4049000000000000);
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uStack_98 = uVar12;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar6 = uVar9;
  func_0x000107c40290(0x4049000000000000);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar6;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2,param_2,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c3adb4(param_1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  func_0x000107c60e78();
  if ((*(ulong *)(param_3 + 0x80) < 0x12) || (*(ulong *)(param_3 + 0x80) - 0x13 < 3)) {
    uVar7 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = uVar7;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar7);
    if ((int)uVar11 == 0) {
      param_3 = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c3bae0(param_3,param_2,puVar2);
      func_0x000107c61170(puVar2);
    }
  }
  else {
    param_3 = 1;
  }
  return param_3;
}



/* Entry: 10085a6f0; end: 10085a797; -[SCMemoriesSideButtonInLeftCarouselHandler shouldShowTextLabel] */

long FUN_10085a6f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if ((*(ulong *)(param_1 + 0x80) < 0x12) || (*(ulong *)(param_1 + 0x80) - 0x13 < 3)) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar1);
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c3bae0(param_1,param_2,puVar3);
      func_0x000107c61170(puVar3);
    }
  }
  else {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 10085a798; end: 10085a7c7;  */

void FUN_10085a798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c425d0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 10085a7c8; end: 10085a81f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableEntryPointLabel] */

uint FUN_10085a7c8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  FUN_100858660(3,0xd000000000000019,0x800000010efcabc0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 10085a820; end: 10085aab7; -[SCMemoriesSideButtonImpl initWithDelegate:alwaysOnCarouselEnabled:circumstanceEngine:alwaysShowEmptyButton:showTextLabel:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10085a820(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_68 = PTR_PTR_1126f8408;
  uStack_70 = param_1;
  func_0x000107c61154(0,0,0x4045000000000000,0x4045000000000000,&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112762ae0;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    func_0x000107c61170(uVar2);
    lVar7 = (long)_DAT_112762ae4;
    *(undefined8 *)((long)puVar1 + lVar7) = 2;
    puVar3 = PTR_PTR_1126d4188;
    func_0x000107c610f4();
    func_0x000107c486d4();
    lVar6 = (long)_DAT_112762ae8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3ec60(puVar1);
    func_0x000107c54b80(*(undefined8 *)((long)puVar1 + lVar6));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x000107c4aba4(uVar2);
    func_0x000107c61180();
    func_0x000107c5a81c(0xbff0000000000000);
    func_0x000107c61170(uVar2);
    func_0x000107c3d89c(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x000107c520f4(puVar1);
    FUN_10085b33c();
    func_0x000107c61180();
    func_0x000107c520fc(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c5472c(puVar1);
    func_0x000107c54514(puVar1);
    func_0x000107c5639c(0x3ff1f06f60000000,puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x000107c45130(puVar1);
    func_0x000107c61180();
    func_0x000107c53840();
    func_0x000107c61170(puVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112762aec) = param_6;
    puVar3 = PTR_PTR_1126cdd60;
    func_0x000107c610f4();
    func_0x000107c46568();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762af0);
    *(undefined **)((long)puVar1 + (long)_DAT_112762af0) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_112762af4),param_3);
    *(char *)((long)puVar1 + (long)_DAT_112762af8) = (char)param_4;
    if (param_4 != 0) {
      func_0x000107c5a29c(puVar1);
      func_0x000107c5527c(0x4018000000000000,0x4018000000000000,puVar1);
    }
    puVar3 = PTR_PTR_1126b08d8;
    if (*(long *)((long)puVar1 + lVar7) != 0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      FUN_10085b3c8(0x402e000000000000,0x3fc3333333333333,*(undefined8 *)PTR__CGSizeZero_110347620,
                    *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar3,puVar1,puVar5);
      func_0x000107c61170(puVar5);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10085aab8; end: 10085ab2f; -[SCGrowingButton initWithFrame:] */

undefined1 * FUN_10085aab8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127061a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c5774c(0x3ff19999a0000000,puVar1);
    func_0x000107c57750(0x3ff6666660000000,puVar1);
    func_0x000107c57754(0x3fee666660000000,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10085ab30; end: 10085ad1b; -[SCScalingButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10085ab30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127061b0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c552d4(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c57bfc(puVar1);
    func_0x000107c55280(puVar1);
    func_0x000107c57750(0x3ff0000000000000,puVar1);
    func_0x000107c57754(0x3ff0000000000000,puVar1);
    func_0x000107c5774c(0x3ff0000000000000,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e140);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e140) = puVar2;
    func_0x000107c61170(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c45130(puVar1);
    func_0x000107c61180();
    func_0x000107c53840();
    func_0x000107c61170(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c45130(puVar1);
    func_0x000107c61180();
    func_0x000107c3d89c(puVar1);
    func_0x000107c61170(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    func_0x000107c610f4(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x000107c48c2c();
    func_0x000107c56140(puVar1);
    func_0x000107c61170(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c4c0b0(puVar1);
    func_0x000107c61180();
    func_0x000107c56704(0);
    func_0x000107c61170(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c4c0b0(puVar1);
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c4c0b0(puVar1);
    func_0x000107c61180();
    func_0x000107c3d6fc(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c54514(puVar1);
    func_0x000107c55288(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10085ad1c; end: 10085ad2b; -[SCScalingButton setImageViewContentMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085ad1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e130) = param_3;
  return;
}



/* Entry: 10085ad2c; end: 10085af53;  */

void FUN_10085ad2c(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar9 = param_2 & 0xff;
  uVar4 = param_2 >> 5 & 7;
  if (2 < uVar4) {
    if (uVar4 < 5) {
      if (uVar4 == 3) {
        if (uVar9 < 0x62) {
          if (uVar9 == 0x60) {
            uVar7 = 2;
          }
          else {
            uVar7 = 3;
          }
        }
        else if (uVar9 == 0x62) {
          uVar7 = 4;
        }
        else {
          uVar7 = 5;
        }
      }
      else if (uVar9 < 0x82) {
        if (uVar9 == 0x80) {
          uVar7 = 6;
        }
        else {
          uVar7 = 7;
        }
      }
      else if (uVar9 == 0x82) {
        uVar7 = 8;
      }
      else {
        uVar7 = 9;
      }
    }
    else if (uVar4 == 5) {
      if (uVar9 < 0xa2) {
        if (uVar9 == 0xa0) {
          uVar7 = 10;
        }
        else {
          uVar7 = 0xb;
        }
      }
      else if (uVar9 == 0xa2) {
        uVar7 = 0xc;
      }
      else {
        uVar7 = 0xd;
      }
    }
    else if (uVar9 == 0xc0) {
      uVar7 = 0xe;
    }
    else {
      uVar7 = 0x10;
    }
    func_0x000107c60690(uVar7);
    return;
  }
  if (uVar4 == 0) {
    func_0x000107c60690(0);
    pcVar1 = "doubleEncryptionResolver";
    pcVar2 = "doubleEncryptionInvoker";
    pcVar3 = "encryptionInfoProvider";
    bVar6 = uVar9 == 1;
    uVar7 = 0xd000000000000017;
    if (!bVar6) {
      uVar7 = 0xd000000000000016;
    }
  }
  else {
    if (uVar4 != 1) {
      func_0x000107c60690(0xf);
      bVar6 = (param_2 & 0x1f) != 1;
      uVar7 = 0x7475436b63697571;
      if (bVar6) {
        uVar7 = 0x6c6172656e6567;
      }
      uVar8 = 0xe800000000000000;
      if (bVar6) {
        uVar8 = 0xe700000000000000;
      }
      func_0x000107c5fb58(param_1,uVar7,uVar8);
      goto LAB_10085aea4;
    }
    uVar9 = param_2 & 0x1f;
    func_0x000107c60690(1);
    pcVar1 = "opportunisticRetranscode";
    pcVar2 = "snapDocTranscode";
    uVar7 = 0xd000000000000010;
    pcVar3 = "snapDocTranscodeForExport";
    bVar6 = uVar9 == 1;
    if (!bVar6) {
      uVar7 = 0xd000000000000019;
    }
  }
  if (!bVar6) {
    pcVar2 = pcVar3;
  }
  uVar5 = 0xd000000000000018;
  if (uVar9 != 0) {
    uVar5 = uVar7;
    pcVar1 = pcVar2;
  }
  func_0x000107c5fb58(param_1,uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar8 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
LAB_10085aea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
  return;
}



/* Entry: 10085af54; end: 10085af63; -[SCScalingButton setRecognizesGesturesSimultaneously:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085af54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e128) = param_3;
  return;
}



/* Entry: 10085af64; end: 10085af73; -[SCScalingButton setImageInsetAnchor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085af64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e114) = param_3;
  return;
}



/* Entry: 10085af74; end: 10085af83; -[SCScalingButton setPressDownScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085af74(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e11c) = param_1;
  return;
}



/* Entry: 10085af84; end: 10085af93; -[SCScalingButton setPressUpScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085af84(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e124) = param_1;
  return;
}



/* Entry: 10085af94; end: 10085afa3; -[SCScalingButton setPressDownAdditionalScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085af94(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e120) = param_1;
  return;
}



/* Entry: 10085afa4; end: 10085afb3; -[SCScalingButton imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10085afa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e140);
}



/* Entry: 10085afb4; end: 10085aff3; -[SCScalingButton setLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085afb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e14c;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10085aff4; end: 10085b003; -[SCScalingButton longPressGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10085aff4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e14c);
}



/* Entry: 10085b004; end: 10085b043; -[SCScalingButton setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085b004(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5a378();
  *(char *)(param_1 + _DAT_11278e148) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e14c),PTR_s_setEnabled__112642f38,param_3);
  return;
}



/* Entry: 10085b044; end: 10085b083; -[SCScalingButton setImageName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085b044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e154;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10085b084; end: 10085b207; -[SCMemoriesSideButtonThumbnailView initWithShowTextLabel:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10085b084(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f8428;
  uStack_60 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d4170;
    func_0x000107c610f4();
    func_0x000107c48b20();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762b30);
    *(undefined **)((long)puVar1 + (long)_DAT_112762b30) = puVar2;
    func_0x000107c61170(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f4();
    puVar2 = PTR_PTR_1126b0c40;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c4509c(0x4044000000000000,0x4044000000000000,0x4010000000000000,0x4010000000000000,
                        0x4010000000000000,0x4010000000000000,puVar2);
    func_0x000107c61180();
    func_0x000107c46db4();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762b34);
    *(undefined **)((long)puVar1 + (long)_DAT_112762b34) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c3d89c(puVar1);
    if (param_3 != 0) {
      puVar5 = (undefined1 *)puVar1;
      func_0x000107c3b39c();
      func_0x000107c61180();
      uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762b38);
      *(undefined1 **)((long)puVar1 + (long)_DAT_112762b38) = puVar5;
      func_0x000107c61170(uVar6);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10085b208; end: 10085b28f; -[SCMemoriesSideButtonThumbnailConfig initWithStyle:thumbnailImage:] */

undefined1 *
FUN_10085b208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f8430;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10085b290; end: 10085b2db; +[SIGIcons imageFromIconType:size:color:edgeInsetsGreaterThan:] */

void FUN_10085b290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c450a0(param_1,param_2,0,0xbff0000000000000,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10085b2dc; end: 10085b33b; +[SIGIcons _colorStringFromColor:] */

void FUN_10085b2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  func_0x000107c44248(param_3,param_2,auStack_18,auStack_20,auStack_28,auStack_30);
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f8b818);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085b33c; end: 10085b353;  */

void FUN_10085b33c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e98c78;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110e98c78,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10085b354; end: 10085b357; -[SCGrowingButton setMaximumScale:] */

void FUN_10085b354(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPressDownScale__112655fc0);
  return;
}



/* Entry: 10085b358; end: 10085b3a3; -[SCMemoriesSideButtonSpectaclesState initWithDeviceState:productType:] */

void FUN_10085b358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8458;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10085b3a4; end: 10085b3b3; -[SCScalingButton setUseConstraintsForImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085b3a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e12c) = param_3;
  return;
}



/* Entry: 10085b3b4; end: 10085b3c7; -[SCScalingButton setImageInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085b3b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e118;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10085b3c8; end: 10085b477;  */

/* WARNING: Possible PIC construction at 0x00010085b458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085b45c) */

void FUN_10085b3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61168(param_5);
  puVar1 = PTR_PTR_1126b08d8;
  func_0x000107c3ec60(param_6);
  func_0x000107c3adbc(param_1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10085b478; end: 10085b643; +[SCUIViewShadow _applyShadowToView:color:radius:opacity:offset:bounds:] */

/* WARNING: Possible PIC construction at 0x00010085b4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085b558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085b57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085b594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085b5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085b5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085b5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085b614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085b600) */
/* WARNING: Removing unreachable block (ram,0x00010085b5e4) */
/* WARNING: Removing unreachable block (ram,0x00010085b5bc) */
/* WARNING: Removing unreachable block (ram,0x00010085b598) */
/* WARNING: Removing unreachable block (ram,0x00010085b580) */
/* WARNING: Removing unreachable block (ram,0x00010085b55c) */
/* WARNING: Removing unreachable block (ram,0x00010085b4fc) */
/* WARNING: Removing unreachable block (ram,0x00010085b500) */
/* WARNING: Removing unreachable block (ram,0x00010085b504) */
/* WARNING: Removing unreachable block (ram,0x00010085b618) */

void FUN_10085b478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4aba4(param_3);
  func_0x000107c61180();
  func_0x000107c407dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10085b644; end: 10085b8c7; -[SCMemoriesSideButtonRoundedImpl initWithMemoriesSideButton:size:iconSize:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10085b644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,ulong param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar23 = param_7;
  func_0x000107c61174(param_7);
  puStack_b0 = PTR_PTR_1126f8420;
  puVar2 = &uStack_b8;
  uStack_b8 = param_5;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_112762b28) = param_1;
    ((undefined8 *)((long)puVar2 + (long)_DAT_112762b28))[1] = param_2;
    lVar25 = (long)_DAT_112762b2c;
    func_0x000107c61174(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar25);
    *(undefined8 **)((long)puVar2 + lVar25) = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar23 = param_7;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar5 = puVar23;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar6 = param_7;
    puStack_a8 = puVar5;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar7 = puVar2;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar9 = param_7;
    puStack_a0 = puVar8;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c40290(param_3);
    func_0x000107c61180();
    puVar11 = param_7;
    puStack_98 = puVar10;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40290(param_4);
    func_0x000107c61180();
    param_8 = 0;
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar12;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar23);
    puVar23 = (undefined8 *)0x0;
    func_0x000107c5a050(param_7);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar2;
  }
  func_0x000107c60e78();
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(puVar23);
  lVar26 = (long)_DAT_11276289c;
  if (*(undefined8 **)((long)param_7 + lVar26) != puVar23) {
    func_0x000107c61174(puVar23);
    uVar3 = *(undefined8 *)((long)param_7 + lVar26);
    *(undefined8 **)((long)param_7 + lVar26) = puVar23;
    func_0x000107c61170(uVar3);
    if ((param_8 & 1) == 0) {
      func_0x000107c3d89c(*(undefined8 *)((long)param_7 + (long)_DAT_112762830));
      func_0x000107c5a050(*(undefined8 *)((long)param_7 + lVar26));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar14 = *(undefined8 *)((long)param_7 + lVar26);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar24 = (long)_DAT_112762838;
      uVar15 = *(undefined8 *)((long)param_7 + lVar24);
      func_0x000107c4ace0();
      func_0x000107c61180();
      uVar3 = uVar14;
      func_0x000107c40284(0xc047400000000000);
      func_0x000107c61180();
      uVar16 = *(undefined8 *)((long)param_7 + lVar26);
      func_0x000107c3f764();
      func_0x000107c61180();
      uVar17 = *(undefined8 *)((long)param_7 + lVar24);
      func_0x000107c3f764(uVar17);
      func_0x000107c61180();
      uVar18 = uVar16;
      func_0x000107c40280();
      func_0x000107c61180();
      uVar19 = *(undefined8 *)((long)param_7 + lVar26);
      func_0x000107c5e308();
      func_0x000107c61180();
      uVar20 = uVar19;
      func_0x000107c40290(0x4045000000000000);
      func_0x000107c61180();
      uVar21 = *(undefined8 *)((long)param_7 + lVar26);
      func_0x000107c44d9c();
      func_0x000107c61180();
      uVar22 = uVar21;
      func_0x000107c40290(0x4045000000000000);
      func_0x000107c61180();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c3d048(puVar1);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(uVar22);
      func_0x000107c61170(uVar21);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(uVar19);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar14);
    }
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return puVar23;
  }
  func_0x000107c60e78();
  return *(undefined8 **)((long)puVar23 + (long)_DAT_112762830);
}



/* Entry: 10085b8c8; end: 10085bb2f; -[SCCameraOverlayView setGalleryIconView:alwaysOnCarouselEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10085b8c8(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar14 = (long)_DAT_11276289c;
  if (*(long *)(param_1 + lVar14) != param_3) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar14);
    *(long *)(param_1 + lVar14) = param_3;
    func_0x000107c61170(uVar2);
    if ((param_4 & 1) == 0) {
      func_0x000107c3d89c(*(undefined8 *)(param_1 + _DAT_112762830),param_2,
                          *(undefined8 *)(param_1 + lVar14));
      func_0x000107c5a050(*(undefined8 *)(param_1 + lVar14),param_2,0);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_1 + lVar14);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar13 = (long)_DAT_112762838;
      uVar4 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c4ace0();
      func_0x000107c61180();
      uVar2 = uVar3;
      func_0x000107c40284(0xc047400000000000,uVar3,param_2,uVar4);
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_1 + lVar14);
      uStack_98 = uVar2;
      func_0x000107c3f764();
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c3f764(uVar6);
      func_0x000107c61180();
      uVar7 = uVar5;
      func_0x000107c40280(uVar5,param_2,uVar6);
      func_0x000107c61180();
      uVar8 = *(undefined8 *)(param_1 + lVar14);
      uStack_90 = uVar7;
      func_0x000107c5e308();
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c40290(0x4045000000000000);
      func_0x000107c61180();
      uVar10 = *(undefined8 *)(param_1 + lVar14);
      uStack_88 = uVar9;
      func_0x000107c44d9c();
      func_0x000107c61180();
      uVar11 = uVar10;
      func_0x000107c40290(0x4045000000000000);
      func_0x000107c61180();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = uVar11;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
      func_0x000107c61180();
      func_0x000107c3d048(puVar1,param_2,puVar12);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
    }
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  func_0x000107c60e78();
  return *(long *)(param_3 + _DAT_112762830);
}



/* Entry: 10085bb30; end: 10085bb4b; -[SCCameraOverlayView hidableViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10085bb30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762830);
}



/* Entry: 10085bb4c; end: 10085bb6f;  */

void FUN_10085bb4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10085bb70; end: 10085bba7; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isImagineLensSideButtonEnabled] */

bool FUN_10085bb70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100773c70();
  func_0x000107c61170(param_1);
  return (int)uVar1 == 2;
}



/* Entry: 10085bba8; end: 10085bc13; -[SCMemoriesSideButtonInLeftCarouselHandler _applyHiddenState] */

/* WARNING: Possible PIC construction at 0x00010085bbf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085bbfc) */

void FUN_10085bba8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49ed8();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setHidden__1126479f8,
             ((uint)*(byte *)(param_1 + 0x41) |
             ((uint)*(byte *)(param_1 + 0x40) | (uint)uVar2) ^ 0xffffffff) & 1);
  return;
}



/* Entry: 10085bc14; end: 10085bc4b; -[_TtC32SCLensPlusServicesImplementation22ImagineLensServiceImpl isImagineLensInLeftCarousel] */

bool FUN_10085bc14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100773c70();
  func_0x000107c61170(param_1);
  return (int)uVar1 == 1;
}



/* Entry: 10085bc4c; end: 10085bc5b; -[SCFeatureMemoriesSideButtonImpl memoriesSideButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085bc4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c9890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762aac),PTR_s_memoriesSideButton_112610038);
  return;
}



/* Entry: 10085bc5c; end: 10085bc83; -[SCMemoriesSideButtonInLeftCarouselHandler memoriesSideButton] */

void FUN_10085bc5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10085bc84; end: 10085bcaf; -[SCScalingButton addTarget:action:] */

void FUN_10085bc84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c59c08();
                    /* WARNING: Could not recover jumptable at 0x00010c161630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAction__112635fa8,param_4);
  return;
}



/* Entry: 10085bcb0; end: 10085bcc3; -[SCScalingButton setTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085bcb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e158,param_3);
  return;
}



/* Entry: 10085bcc4; end: 10085bcd3; -[SCScalingButton setAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085bcc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e13c) = param_3;
  return;
}



/* Entry: 10085bcd4; end: 10085bd33;  */

void FUN_10085bcd4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  FUN_10010fab4(lVar2,PTR_DAT_1126a58b0);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10085bd34; end: 10085bd57; -[SCFeatureMemoriesImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085bd34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762a3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762a40,param_3);
  return;
}



/* Entry: 10085bd58; end: 10085bd5b; -[SCFeature configureWithView:] */

void FUN_10085bd58(void)

{
  return;
}



/* Entry: 10085bd5c; end: 10085be07; -[SCFeatureMemoriesImpl initMemoriesIfNecessary] */

/* WARNING: Possible PIC construction at 0x00010085bdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085bdc4) */
/* WARNING: Removing unreachable block (ram,0x00010085bdd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085bd5c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112762a2c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 != 0) && (func_0x000107c49bc8(), (uVar1 & 1) == 0)) {
    func_0x000107c40aa4(*(undefined8 *)(param_1 + lVar3));
    func_0x000107c611b0();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112762a1c);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c43c44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10085be08; end: 10085be93; -[SCLazy isCreated] */

bool FUN_10085be08(long param_1)

{
  char cVar1;
  
  func_0x000107c611ec(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x1c);
  func_0x000107c611f0(param_1 + 0x18);
  return cVar1 == '\x02';
}



/* Entry: 10085be94; end: 10085c107; -[SCCameraMainCameraFeatureProviderPluginWorkflow _createGalleryTransitionCoordinator:] */

void FUN_10085be94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_106137960;
  puStack_60 = &UNK_106137970;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4cf78();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = uVar3;
  func_0x000107c426e0();
  if ((int)uVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c3f290(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar1 = uVar2;
    func_0x000107c403c8();
    func_0x000107c61180();
    func_0x000107c5dc68();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107c4c15c();
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar1 = uVar2;
    func_0x000107c508e4();
    func_0x000107c61180();
    uVar6 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = puStack_78[5];
    puStack_78[5] = uVar6;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar2 = param_3;
  func_0x000107c4cb08(param_3);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 200);
  func_0x000107c4d524(uVar4);
  func_0x000107c61180();
  func_0x000107c4cb9c(uVar3);
  func_0x000107c4099c(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c60bcc(&uStack_80,8);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10085c108; end: 10085c10f; -[SCMainCameraScreenRouterImpl rootGestureView] */

undefined8 FUN_10085c108(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10085c110; end: 10085c157;  */

void FUN_10085c110(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10085c158; end: 10085c1cb; -[SCMainCameraScreenRootViewController loadView] */

/* WARNING: Possible PIC construction at 0x00010085c1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085c1b0) */

void FUN_10085c158(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c403a0();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c5a568(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10085c1cc; end: 10085c1d3; -[SCMainCameraScreenRootUIContainerProviderImpl view] */

undefined8 FUN_10085c1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10085c1d4; end: 10085c24b; -[SCMainCameraScreenRootViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085c1d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f06c8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127433dc);
  puVar1 = PTR_PTR_1126bd5f8;
  func_0x000107c5deb4(PTR_PTR_1126bd5f8);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10085c24c; end: 10085c33f;  */

void FUN_10085c24c(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_48,param_1 + 0x28);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10085c340; end: 10085c343;  */

void FUN_10085c340(void)

{
  return;
}



/* Entry: 10085c344; end: 10085c44f;  */

void FUN_10085c344(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1008c4c30;
  puStack_50 = &UNK_110849200;
  func_0x000107c6111c(auStack_48,param_1 + 0x30);
  func_0x000107c6111c(auStack_70,param_1 + 0x30);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10085c450; end: 10085c453;  */

void FUN_10085c450(void)

{
  return;
}



/* Entry: 10085c454; end: 10085c493; -[SCCameraMiniCarouselConfigurationImpl memoriesFullscreenPresentationEnabled] */

undefined8 FUN_10085c454(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4cb9c();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10085c494; end: 10085c553; -[SCCameraToGallerySwipeTransitionCoordinatorFactoryImpl createCoordinatorWithDelegate:memoriesNavigationService:overlayView:shouldPresentFullscreen:] */

void FUN_10085c494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8e48;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47dac();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10085c554; end: 10085c99f; -[SCCameraToGallerySwipeTransitionCoordinator initWithParentViewController:memoriesScopeExposer:memoriesScopeServices:delegate:cameraOverlayView:memoriesNavigationService:memoriesBackupManager:shouldPresentFullscreen:pageLoadMetricManager:circumstanceEngine:memoriesSnapFeedManager:memoriesExperimentService:memoriesTweaksServices:memTwoLandingPageScopeFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10085c554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_70 = PTR_PTR_1126f0720;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithDirection_transitionMode_1125e0c08,8,0,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127434b8) = param_10;
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127434bc,param_3);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127434c0,param_4);
    lVar8 = (long)_DAT_1127434c4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127434c8,param_8);
    lVar8 = (long)_DAT_1127434cc;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127434d0;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_12;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127434d4;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_13;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127434d8;
    func_0x000107c61174(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_14;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127434dc;
    func_0x000107c61174(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_15;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127434e0;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_16;
    func_0x000107c61170(uVar2);
    lVar8 = (long)_DAT_1127434e4;
    func_0x000107c61174(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_17;
    func_0x000107c61170(uVar2);
    puVar3 = puVar1;
    func_0x000107c4988c(puVar1);
    func_0x000107c61180();
    func_0x000107c5e410();
    func_0x000107c61170(puVar3);
    func_0x000107c61144(auStack_80,puVar1);
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126bf9b8;
    func_0x000107c5c4ec(PTR_PTR_1126bf9b8);
    func_0x000107c61180();
    func_0x000107c4cb0c(puVar6);
    func_0x000107c61180();
    puVar7 = PTR_PTR_1126ae970;
    func_0x000107c4ca90(PTR_PTR_1126ae970);
    func_0x000107c61180();
    uVar2 = 0x15;
    FUN_1000819a8(0x15,0);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c5e070(puVar4);
    func_0x000107c611b0();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10085c9a0; end: 10085ca23; -[SCSwipeTransitionCoordinatorImpl initWithDirection:transitionMode:delegate:dataSource:] */

undefined8
FUN_10085c9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  uVar1 = ((uint)param_3 & 0xaaaaaaaa) >> 1 | ((uint)param_3 & 0x55555555) << 1;
  func_0x000107c48048(param_1,param_2,param_3,
                      ((uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2) & 0xf,param_4,param_5,
                      param_6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return param_1;
}



/* Entry: 10085ca24; end: 10085cb13; -[SCSwipeTransitionCoordinatorImpl initWithPresentationDirection:dismissalDirection:transitionMode:delegate:dataSource:] */

undefined1 *
FUN_10085ca24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112701ca8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    puVar2 = PTR_PTR_1126de970;
    func_0x000107c610f4();
    func_0x000107c48e7c();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c57724(*(undefined8 *)((long)puVar1 + 0x50));
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 0x50));
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x28),param_6);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x30),param_7);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10085cb14; end: 10085cbd3; -[SCInteractiveSwipeTransitionController initWithTransitionType:direction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10085cb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112701c90;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f4();
    func_0x000107c48c2c();
    lVar4 = (long)_DAT_112785a34;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785a38) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785a3c) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785a40) = 0x3ff0000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10085cbd4; end: 10085cbe7; -[SCInteractiveSwipeTransitionController setPresentationDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085cbd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112785a4c,param_3);
  return;
}



/* Entry: 10085cbe8; end: 10085cbfb; -[SCInteractiveSwipeTransitionController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085cbe8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112785a48,param_3);
  return;
}



/* Entry: 10085cbfc; end: 10085cc03; -[SCSwipeTransitionCoordinatorImpl interactivePresentationController] */

undefined8 FUN_10085cbfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10085cc04; end: 10085cc9b; -[SCInteractiveSwipeTransitionController wireToView:] */

/* WARNING: Possible PIC construction at 0x00010085cc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085cc80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085cc5c) */
/* WARNING: Removing unreachable block (ram,0x00010085cc84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085cc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112785a34);
  func_0x000107c61174(param_3);
  func_0x000107c5de64(uVar1);
  func_0x000107c61180();
  func_0x000107c4ff3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10085cc9c; end: 10085cca3; +[SCAttributedMemoriesTask swipeTransitionCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085cc9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 10;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085cca4; end: 10085cd17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085cca4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085cd18; end: 10085d11f; +[SCAttributedTask memories:] */

void FUN_10085cd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010085cd50();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10085d120; end: 10085d163;  */

void FUN_10085d120(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x10085d120);
  (*pcVar1)();
}



/* Entry: 10085d164; end: 10085d1ab; -[SCAttributedMemoriesTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010085d180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085d184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085d164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309b778));
  return;
}



/* Entry: 10085d1ac; end: 10085d1bb; -[SCFeatureSettingsService galleryEnabled] */

void FUN_10085d1ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa798,0);
  return;
}



/* Entry: 10085d1bc; end: 10085d1eb;  */

bool FUN_10085d1bc(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 10085d1ec; end: 10085d617;  */

void FUN_10085d1ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 == 0) {
    puVar34 = (undefined *)0x0;
  }
  else {
    puVar34 = PTR_PTR_1126c7ad8;
    func_0x000107c610f4();
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x000107c5de90();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c4c168();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar26 = *(undefined8 *)(lVar2 + 0x18);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10085d618;
    puStack_88 = &UNK_11084e7d0;
    uVar32 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar32);
    ppuVar5 = &puStack_a0;
    uStack_80 = uVar32;
    FUN_10085d618();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar32 = uVar6;
    func_0x000107c508ac();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5b038();
    func_0x000107c61180();
    uVar31 = *(undefined8 *)(lVar2 + 0xd8);
    uVar27 = *(undefined8 *)(lVar2 + 0x78);
    uVar9 = *(undefined8 *)(lVar2 + 0x50);
    func_0x000107c42eac();
    func_0x000107c61180();
    uVar28 = *(undefined8 *)(lVar2 + 0xb8);
    uVar10 = *(undefined8 *)(lVar2 + 0x98);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(lVar2 + 0x98);
    func_0x000107c418b8();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lVar2 + 0x98);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(lVar2 + 0xa8);
    func_0x000107c5036c();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(lVar2 + 0x98);
    func_0x000107c3f598();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar16 = uVar15;
    func_0x000107c3f14c();
    func_0x000107c61180();
    uVar17 = uVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar29 = *(undefined8 *)(lVar2 + 0xf8);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10085d704;
    puStack_b0 = &UNK_11084e7d0;
    uVar33 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar33);
    ppuVar18 = &puStack_c8;
    uStack_a8 = uVar33;
    FUN_10085d704();
    func_0x000107c61180();
    uVar30 = *(undefined8 *)(lVar2 + 0x58);
    uVar19 = *(undefined8 *)(lVar2 + 0xa0);
    func_0x000107c500f8();
    func_0x000107c61180();
    uVar20 = *(undefined8 *)(lVar2 + 0x118);
    func_0x000107c4aeb4();
    func_0x000107c61180();
    uVar21 = *(undefined8 *)(lVar2 + 8);
    func_0x000107c3f300();
    uVar22 = *(undefined8 *)(lVar2 + 0x188);
    func_0x000107c3eabc();
    func_0x000107c61180();
    uVar23 = *(undefined8 *)(lVar2 + 0x100);
    func_0x000107c4ec80();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar33 = uVar24;
    func_0x000107c4ae38();
    func_0x000107c61180();
    uVar25 = *(undefined8 *)(lVar2 + 0x268);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    func_0x000107c49500(puVar34,param_2,uVar3,uVar4,uVar26,ppuVar5,uVar32,uVar8,uVar31,uVar27,uVar9,
                        uVar28,uVar10,uVar11,uVar12,uVar13,uVar14,uVar17,uVar29,uVar29,ppuVar18,
                        uVar30,uVar19,uVar20,uVar21,uVar22,uVar23,uVar33,uVar25);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(ppuVar18);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar34);
  return;
}



/* Entry: 10085d618; end: 10085d6f3;  */

void FUN_10085d618(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10085d6f4; end: 10085d6fb; -[SCCameraConfigurationImpl ringFlashWidgetConfig] */

undefined8 FUN_10085d6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10085d6fc; end: 10085d703; -[SCCameraConfigurationImpl cameraModeLabelsConfig] */

undefined8 FUN_10085d6fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10085d704; end: 10085d7df;  */

void FUN_10085d704(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10085d7e0; end: 10085e6cf; -[SCFeatureRingFlashImpl initWithViewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:cameraUserActionLogger:ringFlashWidgetConfig:simpleFeatureGatingConfig:valdiRuntimeProvider:footerItem:featureSettingsService:cameraTooltipsService:cameraHardwareResource:deviceCapacityAnalyzer:cameraHardwareServicesAPI:cameraRequestHandler:captureDeviceManager:cameraModeLabelsConfig:cameraFeatureUpdateEventObservable:cameraFeatureUpdateEventSubject:lensExplorerTabBarButton:circumstanceEngine:renderTarget:lensCarouselManager:cameraViewType:cameraUserBlizzardLogger:userPreferences:screenBrightnessConfig:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10085d7e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  double *pdVar15;
  double *pdVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  func_0x000107c61174();
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  puStack_80 = PTR_PTR_1126eff70;
  puVar3 = &uStack_88;
  uStack_88 = param_2;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  if (puVar3 == (undefined8 *)0x0) goto LAB_10085e534;
  lVar21 = (long)_DAT_112741128;
  func_0x000107c61174(param_7);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar21);
  *(undefined8 *)((long)puVar3 + lVar21) = param_7;
  func_0x000107c61170(uVar4);
  func_0x000107c611a0((long)puVar3 + (long)_DAT_11274112c,param_11);
  lVar27 = (long)_DAT_112741130;
  func_0x000107c61174(param_12);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar27);
  *(undefined8 *)((long)puVar3 + lVar27) = param_12;
  func_0x000107c61170(uVar4);
  func_0x000107c611a0((long)puVar3 + (long)_DAT_112741134,param_19);
  lVar21 = (long)_DAT_112741138;
  func_0x000107c611a0((long)puVar3 + lVar21,param_4);
  lVar19 = (long)_DAT_11274113c;
  func_0x000107c611a0((long)puVar3 + lVar19,param_5);
  lVar20 = (long)_DAT_112741140;
  func_0x000107c611a0((long)puVar3 + lVar20,param_6);
  func_0x000107c611a0((long)puVar3 + (long)_DAT_112741144,param_10);
  lVar22 = (long)_DAT_112741148;
  func_0x000107c61174(param_9);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar22);
  *(undefined8 *)((long)puVar3 + lVar22) = param_9;
  func_0x000107c61170(uVar4);
  lVar22 = (long)_DAT_11274114c;
  func_0x000107c61174(param_14);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar22);
  *(long *)((long)puVar3 + lVar22) = param_14;
  func_0x000107c61170(uVar4);
  lVar23 = (long)_DAT_112741150;
  func_0x000107c61174(param_17);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar23);
  *(undefined8 *)((long)puVar3 + lVar23) = param_17;
  func_0x000107c61170(uVar4);
  lVar25 = (long)_DAT_112741154;
  func_0x000107c61174(param_18);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar25);
  *(undefined8 *)((long)puVar3 + lVar25) = param_18;
  func_0x000107c61170(uVar4);
  lVar23 = (long)_DAT_112741158;
  func_0x000107c61174(param_15);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar23);
  *(undefined8 *)((long)puVar3 + lVar23) = param_15;
  func_0x000107c61170(uVar4);
  *(undefined8 *)((long)puVar3 + (long)_DAT_11274115c) = 0;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112741160);
  *(undefined **)((long)puVar3 + (long)_DAT_112741160) = puVar5;
  func_0x000107c61170(uVar4);
  lVar24 = (long)_DAT_112741164;
  func_0x000107c61174(param_22);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_22;
  func_0x000107c61170(uVar4);
  lVar24 = (long)_DAT_112741168;
  func_0x000107c61174(param_8);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_8;
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_18);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar25);
  *(undefined8 *)((long)puVar3 + lVar25) = param_18;
  func_0x000107c61170(uVar4);
  func_0x000107c611a0((long)puVar3 + (long)_DAT_11274116c,param_30);
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112741170);
  *(undefined **)((long)puVar3 + (long)_DAT_112741170) = puVar5;
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c426e0();
  func_0x000107c61170(uVar6);
  if ((int)uVar4 == 0) {
    lVar25 = param_14;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar11 = lVar25;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c508a4();
    func_0x000107c61180();
    lVar7 = lVar12;
    func_0x000107c508a8();
    if (lVar7 == 0) {
      *(undefined8 *)((long)puVar3 + (long)_DAT_112741174) = 1;
      iVar26 = _DAT_112741174;
    }
    else {
      lVar7 = param_14;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      lVar9 = lVar8;
      func_0x000107c508a4();
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c508a8();
      iVar26 = _DAT_112741174;
      *(long *)((long)puVar3 + (long)_DAT_112741174) = lVar10;
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
    }
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
  }
  else {
    lVar25 = *(long *)((long)puVar3 + lVar27);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar11 = lVar25;
    func_0x000107c4aabc();
    if (lVar11 == 0) {
      *(undefined8 *)((long)puVar3 + (long)_DAT_112741174) = 1;
      iVar26 = _DAT_112741174;
    }
    else {
      uVar6 = *(undefined8 *)((long)puVar3 + lVar27);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar4 = uVar6;
      func_0x000107c4aabc();
      iVar26 = _DAT_112741174;
      *(undefined8 *)((long)puVar3 + (long)_DAT_112741174) = uVar4;
      func_0x000107c61170(uVar6);
    }
  }
  func_0x000107c61170(lVar25);
  lVar11 = *(long *)((long)puVar3 + lVar24);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar25 = lVar11;
  func_0x000107c42bac();
  if (lVar25 == 5) {
    func_0x000107c61170(lVar11);
  }
  else {
    lVar12 = *(long *)((long)puVar3 + lVar27);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar25 = lVar12;
    func_0x000107c4aabc();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    if (lVar25 == 3) {
      *(undefined8 *)((long)puVar3 + (long)iVar26) = 1;
    }
  }
  uVar13 = *(ulong *)((long)puVar3 + lVar24);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c426e0();
  if ((uVar14 & 1) == 0) {
    pdVar15 = (double *)((long)puVar3 + (long)_DAT_112741178);
    *pdVar15 = 0.0;
  }
  else {
    lVar11 = *(long *)((long)puVar3 + lVar27);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar25 = lVar11;
    func_0x000107c4aab8();
    param_1 = (double)lVar25;
    pdVar15 = (double *)((long)puVar3 + (long)_DAT_112741178);
    *pdVar15 = param_1;
    func_0x000107c61170(lVar11);
  }
  func_0x000107c61170(uVar13);
  lVar11 = *(long *)((long)puVar3 + lVar24);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar25 = lVar11;
  func_0x000107c42bac();
  func_0x000107c61170(lVar11);
  if (lVar25 - 1U < 4) {
    param_1 = *(double *)(&UNK_10ddd9c28 + (lVar25 - 1U) * 8);
    *pdVar15 = param_1;
  }
  fVar28 = SUB84(param_1,0);
  uVar13 = *(ulong *)((long)puVar3 + lVar24);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c426e0();
  if ((int)uVar14 == 0) {
    bVar2 = false;
LAB_10085dea0:
    ppuVar17 = &PTR__OBJC_CLASS___NSConstantArray_111180128;
    func_0x000107c517d8(&PTR__OBJC_CLASS___NSConstantArray_111180128);
    func_0x000107c61180();
    func_0x000107c436dc();
    *(double *)((long)puVar3 + (long)_DAT_11274117c) = (double)fVar28;
    func_0x000107c61170(ppuVar17);
    if (bVar2) {
      func_0x000107c61170(pdVar15);
      if ((uVar14 & 1) != 0) goto LAB_10085df44;
    }
    else if ((int)uVar14 != 0) goto LAB_10085df44;
  }
  else {
    lVar25 = *(long *)((long)puVar3 + lVar27);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar11 = lVar25;
    func_0x000107c4aab4();
    if (lVar11 == 0) {
      bVar2 = false;
      goto LAB_10085dea0;
    }
    pdVar15 = *(double **)((long)puVar3 + lVar24);
    func_0x000107c5c734();
    func_0x000107c61180();
    pdVar16 = pdVar15;
    func_0x000107c42bac();
    if (pdVar16 != (double *)0x0) {
      bVar2 = true;
      goto LAB_10085dea0;
    }
    lVar27 = *(long *)((long)puVar3 + lVar27);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar24 = lVar27;
    func_0x000107c4aab4();
    *(double *)((long)puVar3 + (long)_DAT_11274117c) = (double)lVar24;
    func_0x000107c61170(lVar27);
    func_0x000107c61170(pdVar15);
LAB_10085df44:
    func_0x000107c61170(lVar25);
  }
  func_0x000107c61170(uVar13);
  lVar24 = param_14;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar25 = lVar24;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar27 = lVar25;
  func_0x000107c508a4();
  func_0x000107c61180();
  lVar11 = lVar27;
  func_0x000107c4aa40();
  func_0x000107c61180();
  *(bool *)((long)puVar3 + (long)_DAT_112741180) = lVar11 == 0;
  func_0x000107c61170();
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  lVar24 = (long)_DAT_112741184;
  func_0x000107c61174(param_16);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_16;
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar23);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c3d740();
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112741188);
  *(undefined **)((long)puVar3 + (long)_DAT_112741188) = puVar5;
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_11274118c);
  *(undefined **)((long)puVar3 + (long)_DAT_11274118c) = puVar5;
  func_0x000107c61170(uVar4);
  lVar23 = (long)_DAT_112741190;
  func_0x000107c611a0((long)puVar3 + lVar23,param_20);
  func_0x000107c611a0((long)puVar3 + (long)_DAT_112741194,param_21);
  lVar24 = (long)_DAT_112741198;
  func_0x000107c61174(param_23);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_23;
  func_0x000107c61170(uVar4);
  lVar24 = (long)_DAT_11274119c;
  func_0x000107c61174(param_24);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_24;
  func_0x000107c61170(uVar4);
  func_0x000107c611a0((long)puVar3 + (long)_DAT_1127411a0,param_25);
  lVar24 = (long)_DAT_1127411a4;
  func_0x000107c61174(param_13);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_13;
  func_0x000107c61170(uVar4);
  *(undefined8 *)((long)puVar3 + (long)_DAT_1127411a8) = param_26;
  func_0x000107c611a0((long)puVar3 + (long)_DAT_1127411ac,param_27);
  func_0x000107c611a0((long)puVar3 + (long)_DAT_1127411b0,param_28);
  func_0x000107c3c658(puVar3);
  func_0x000107c61144(auStack_90,puVar3);
  lVar21 = (long)puVar3 + lVar21;
  func_0x000107c61148(lVar21);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10085ed0c;
  puStack_a0 = &UNK_11084e590;
  func_0x000107c6111c(auStack_98,auStack_90);
  lVar24 = lVar21;
  func_0x000107c5c320(lVar21);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar21);
  lVar19 = (long)puVar3 + lVar19;
  func_0x000107c61148(lVar19);
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1008bb468;
  puStack_c8 = &UNK_11090b470;
  func_0x000107c6111c(auStack_c0,auStack_90);
  lVar21 = lVar19;
  func_0x000107c5c320(lVar19);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar19);
  lVar21 = (long)puVar3 + lVar20;
  func_0x000107c61148(lVar21);
  lVar19 = lVar21;
  func_0x000107c419f0();
  func_0x000107c61180();
  puStack_108 = puVar5;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_100c79c08;
  puStack_f0 = &UNK_110846510;
  func_0x000107c6111c(auStack_e8,auStack_90);
  lVar24 = lVar19;
  func_0x000107c5c320(lVar19);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar21);
  lVar21 = (long)puVar3 + lVar20;
  func_0x000107c61148();
  lVar24 = lVar21;
  func_0x000107c5e39c();
  func_0x000107c61180();
  puStack_130 = puVar5;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_106183c50;
  puStack_118 = &UNK_110846510;
  func_0x000107c6111c(auStack_110,auStack_90);
  lVar19 = lVar24;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar21);
  lVar20 = (long)puVar3 + lVar20;
  func_0x000107c61148(lVar20);
  lVar19 = lVar20;
  func_0x000107c41b80();
  func_0x000107c61180();
  puStack_158 = puVar5;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_106183c7c;
  puStack_140 = &UNK_110846510;
  func_0x000107c6111c(auStack_138,auStack_90);
  lVar21 = lVar19;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar20);
  lVar23 = (long)puVar3 + lVar23;
  func_0x000107c61148();
  puStack_180 = puVar5;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_106183ca8;
  puStack_168 = &UNK_110911260;
  func_0x000107c6111c(auStack_160,auStack_90);
  lVar21 = lVar23;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar23);
  uVar18 = *(undefined8 *)((long)puVar3 + lVar22);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar29 = uVar18;
  func_0x000107c5dd84();
  func_0x000107c61180();
  uVar6 = uVar29;
  func_0x000107c3f19c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_188,auStack_90);
  uVar4 = uVar6;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar18);
  puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_1127411b4);
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  *puVar1 = uVar4;
  puVar1[3] = uVar29;
  puVar1[2] = uVar6;
  lVar21 = (long)_DAT_1127411b8;
  func_0x000107c61174(param_29);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar21);
  *(undefined8 *)((long)puVar3 + lVar21) = param_29;
  func_0x000107c61170(uVar4);
  func_0x000107c3c648(puVar3);
  func_0x000107c61120(auStack_188);
  func_0x000107c61120(auStack_160);
  func_0x000107c61120(auStack_138);
  func_0x000107c61120(auStack_110);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_90);
LAB_10085e534:
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
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
  return puVar3;
}



/* Entry: 10085e6d0; end: 10085e6ff;  */

void FUN_10085e6d0(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9b98);
  func_0x000107c45db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085e700; end: 10085e7db; -[SCCameraRingFlashWidgetConfigurationImpl initWithCircumstanceEngine:] */

undefined8 * FUN_10085e700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8960;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10085e7dc;
    puStack_40 = &UNK_110842e18;
    func_0x000107c61174(puVar1);
    puStack_38 = puVar1;
    if (lRam00000001136bc608 != -1) {
      FUN_10002a2fc(0x1136bc608,&puStack_58);
    }
    func_0x000107c61170(puStack_38);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10085e7dc; end: 10085e913;  */

void FUN_10085e7dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c4c270();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar2;
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x000107c5dc0c(uVar1);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c3dd54();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126b9b48;
  func_0x000107c610f4();
  func_0x000107c4636c();
  func_0x000107c61174(0);
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(puVar3);
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined **)(lVar6 + 0x10) = puVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(0);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10085e914; end: 10085ea0b; +[SCCameraRingFlashWidgetImprovementConfig descriptor] */

void FUN_10085e914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a40230,
                        &PTR____CFConstantStringClassReference_110de5bb8,
                        &PTR_s_snapchat_camera_1130dfd58,&PTR_DAT_1130dfd70,2,8,0x1c);
    puRam00000001136bc778 = puVar1;
  }
  return;
}



/* Entry: 10085ea0c; end: 10085eaa3; -[SCCameraRingFlashWidgetConfigurationImpl enabled] */

undefined1 FUN_10085ea0c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10085ea80;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc618 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc618,&puStack_38);
  }
  return uRam00000001136bc610;
}



/* Entry: 10085eaa4; end: 10085eab3; -[SCManagedCapturerState ringFlashSelectionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085eaa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113075be0));
  return;
}



/* Entry: 10085eab4; end: 10085eabb; -[SCRingFlashSelectionInfo ringFlashState] */

undefined8 FUN_10085eab4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10085eabc; end: 10085eb2f; -[SCCameraRingFlashWidgetConfigurationImpl experience] */

undefined8 FUN_10085eabc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10085eb30;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc628 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc628,&puStack_38);
  }
  return uRam00000001136bc620;
}



/* Entry: 10085eb30; end: 10085eb77;  */

void FUN_10085eb30(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c426e0();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x000107c42bac();
    lRam00000001136bc620 = 0;
    if (iVar1 - 1U < 6) {
      lRam00000001136bc620 = (ulong)(iVar1 - 1U) + 1;
    }
  }
  return;
}



/* Entry: 10085eb78; end: 10085eb87; -[SCFeatureSettingsService lastUsedRingFlashState] */

void FUN_10085eb78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e435f8,0);
  return;
}



/* Entry: 10085eb88; end: 10085ebcf;  */

void FUN_10085eb88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c40808();
  if (param_3 < uVar1) {
    func_0x000107c4d9a4(param_1,param_2,param_3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10085ebd0; end: 10085ebd7; -[SCRingFlashSelectionInfo lastSelectedColorCode] */

undefined8 FUN_10085ebd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10085ebd8; end: 10085ecbf; -[SCFeatureRingFlashImpl startObservingManagedDeviceCapacityAnalyzerEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085ebd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  lVar3 = (long)_DAT_11274121c;
  if (*(long *)(param_1 + lVar3) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10085ecc0; end: 10085ed0b; -[SCFeatureRingFlashImpl _setupDebug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085ecc0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127411cc);
  *(undefined8 *)(param_1 + _DAT_1127411cc) = 0;
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 10085ed0c; end: 10085ee0f;  */

void FUN_10085ed0c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008c9768;
  puStack_60 = &UNK_110849200;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10085ee10; end: 10085ee13;  */

void FUN_10085ee10(void)

{
  return;
}



/* Entry: 10085ee14; end: 10085ee3b; -[SCManagedVideoStreamer cameraRenderRegionObservable] */

void FUN_10085ee14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10085ee3c; end: 10085eebb;  */

/* WARNING: Possible PIC construction at 0x00010085ee88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085ee8c) */

void FUN_10085ee3c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3ab38(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10085eebc; end: 10085ef57; -[SCFeatureRingFlashImpl _renderRegionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085eebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = (undefined8 *)(param_5 + _DAT_1127411b4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x000107c61144(auStack_28,param_5);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  puStack_40 = &UNK_100c6955c;
  puStack_38 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}


